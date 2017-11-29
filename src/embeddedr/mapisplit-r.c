#ifdef HAVE_EMBEDDED_R
#include <R.h>
#include <Rdefines.h>
#include "mapisplit.h"
#include "mapisplit-r.h"

#include "monetdb_config.h"

char nullstr[] = "NULL";

SEXP mapi_split(SEXP mapiLinesVector, SEXP numCols) {
	const int cols = INTEGER_POINTER(AS_INTEGER(numCols))[0];
	const int rows = LENGTH(mapiLinesVector);
	SEXP colVec;
	int cRow;
	int cCol;
	char **elems = malloc(sizeof(char*)* cols);
	if (!elems) {
		error("Memory allocation failure");
	}

	if (!IS_CHARACTER(mapiLinesVector) || rows < 1 || cols < 1) {
		error("Invalid input to mapi_split: type=%d, rows=%d, cols=%d", TYPEOF(mapiLinesVector), rows, cols);
	}

	PROTECT(colVec = NEW_LIST(cols));

	for (cRow = 0; cRow < cols; cRow++) {
		SEXP colV = PROTECT(NEW_STRING(rows));
		SET_ELEMENT(colVec, cRow, colV);
		UNPROTECT(1);
	}


	for (cRow = 0; cRow < rows; cRow++) {
		const char *rval = CHAR(STRING_ELT(mapiLinesVector, cRow));
		char *val = strdup(rval);

		cCol = 0;
		mapi_line_split(val, elems, cols);

		for (cCol = 0; cCol < cols; cCol++) {
			SEXP colV = VECTOR_ELT(colVec, cCol);
			size_t tokenLen = strlen(elems[cCol]);
			if (tokenLen < 1 || strcmp(elems[cCol], nullstr) == 0) {
				SET_STRING_ELT(colV, cRow, NA_STRING);
			}
			else {
				SET_STRING_ELT(colV, cRow, mkCharLen(elems[cCol], tokenLen));
			}
		}
		free(val);
	}
	free(elems);

	UNPROTECT(1);
	return colVec;
}


// TODO: NULLs
#define READ_NUMERIC(dtype, rtype, ptrfun)								\
	do {																\
		dtype* raw_cast = (dtype*) raw_vec; \
		rtype* out_ptr = ptrfun(target_vec_sexp) + target_vec_offset; \
				for (size_t i = 0; i < nrows; i++) { \
					*out_ptr = (rtype) raw_cast[i]; \
					out_ptr++; \
				}			\
	} while (0)


#define READ_DECIMAL(dtype)								\
	do {																\
		dtype* raw_cast = (dtype*) raw_vec; \
		for (size_t i = 0; i < nrows; i++) { \
			*out_ptr = ((double) raw_cast[i])/ divider; \
			out_ptr++; \
		} \
	} while (0)


SEXP mapi_read_into_vec(SEXP raw_vec_sexp, SEXP raw_vec_offset_sexp,
		SEXP db_type_sexp, SEXP internal_size_sexp, SEXP scale_sexp,
		SEXP target_vec_sexp, SEXP target_vec_offset_sexp, SEXP nrows_sexp) {
	char* raw_vec = (char *) RAW_POINTER(raw_vec_sexp);
	int raw_vec_offset = INTEGER_POINTER(AS_INTEGER(raw_vec_offset_sexp))[0];
	// TODO: check types and lengths (esp. for raw
	raw_vec += raw_vec_offset;
	size_t nrows = (size_t) NUMERIC_POINTER(AS_NUMERIC(nrows_sexp))[0];
	int target_vec_offset = INTEGER_POINTER(AS_INTEGER(target_vec_offset_sexp))[0];

	char* type = (char*)CHAR(STRING_ELT(db_type_sexp, 0));
	if (strcmp("BOOLEAN", type) == 0) {
		READ_NUMERIC(int8_t, int32_t, INTEGER_POINTER);
	} else if (strcmp("TINYINT", type) == 0) {
		READ_NUMERIC(int8_t, int32_t, INTEGER_POINTER);
	} else if (strcmp("SMALLINT", type) == 0) {
		READ_NUMERIC(int16_t, int32_t, INTEGER_POINTER);
	} else if (strcmp("INT", type) == 0) {
		READ_NUMERIC(int32_t, int32_t, INTEGER_POINTER);
	} else if (strcmp("FLOAT", type) == 0) {
		READ_NUMERIC(float, double, NUMERIC_POINTER);
	} else if (strcmp("DOUBLE", type) == 0) {
		READ_NUMERIC(double, double, NUMERIC_POINTER);
	} else if (strcmp("BIGINT", type) == 0) {
		READ_NUMERIC(int64_t, double, NUMERIC_POINTER);
	} else if (strcmp("DECIMAL", type) == 0) {
		int internal_size = INTEGER_POINTER(AS_INTEGER(internal_size_sexp))[0];
		int scale = INTEGER_POINTER(AS_INTEGER(scale_sexp))[0];

		double* out_ptr = NUMERIC_POINTER(target_vec_sexp) + target_vec_offset;
		double divider = pow(10, scale);
		switch(internal_size) {
		case 1: READ_DECIMAL(int8_t); break;
		case 2: READ_DECIMAL(int16_t); break;
		case 4: READ_DECIMAL(int32_t); break;
		case 8: READ_DECIMAL(int64_t); break;
//		case 16: READ_DECIMAL(int128_t); break;
		default: error("unknown type length for decimal");
		}
	} else if (strcmp("DATE", type) == 0) {
		int64_t* raw_cast = (int64_t*) raw_vec;
		double* out_ptr = NUMERIC_POINTER(target_vec_sexp) + target_vec_offset;
		for (size_t i = 0; i < nrows; i++) {
			*out_ptr = (double) raw_cast[i]/86400000;
			out_ptr++;
		}
	} else if (strcmp("VARCHAR", type) == 0) {
		size_t cRow = target_vec_offset;
		while (cRow < target_vec_offset + nrows) {
			SEXP s = mkChar(raw_vec);
			if (!s) {
				error("Memory allocation failure");
			}
			SET_STRING_ELT(target_vec_sexp, cRow++, s);
			while (*raw_vec != 0) {
				raw_vec++;
			}
			raw_vec++;
		}
	}
	return target_vec_sexp;
}

#endif
