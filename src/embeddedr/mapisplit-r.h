#ifdef HAVE_EMBEDDED_R
#include <R.h>

extern SEXP mapi_split(SEXP mapiLinesVector, SEXP numCols);
extern SEXP mapi_read_into_vec(SEXP raw_vec_sexp, SEXP raw_vec_offset_sexp,
		SEXP db_type_sexp, SEXP internal_size_sexp, SEXP scale_sexp,
		SEXP target_vec_sexp, SEXP target_vec_offset_sexp, SEXP nrows_sexp);

#endif
