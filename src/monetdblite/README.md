# MonetDBLite for C

[![Build Status](https://travis-ci.org/hannesmuehleisen/MonetDBLite-C.svg)](https://travis-ci.org/hannesmuehleisen/MonetDBLite-C)[![Build Status](https://ci.appveyor.com/api/projects/status/github/hannesmuehleisen/MonetDBLite-C?branch=master&svg=true)](https://ci.appveyor.com/project/hannesmuehleisen/MonetDBLite-C)


MonetDBLite is an embedded SQL database that runs inside another program and does not require the installation of any external software. MonetDBLite is based on free and open-source [MonetDB](https://www.monetdb.org/Home), a product of the [Centrum Wiskunde & Informatica](http://www.cwi.nl).

MonetDBLite is similar in functionality to [SQLite](https://www.sqlite.org), but optimized for analytical (OLAP) use cases.


## Build Process

Installation from source is a matter of typing 

```
make -j
````

This produces a shared library file `libmonetdb5.(so|dll|dylib)` in the `build/` folder, which contains all required code to run MonetDBLite. This library can then be linked to by your software. On Windows, we use the MinGW-64 toolchains ([32 bit](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/6.3.0/threads-posix/dwarf/i686-6.3.0-release-posix-dwarf-rt_v5-rev2.7z/download
), [64 bit (recommended)](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/6.3.0/threads-posix/seh/x86_64-6.3.0-release-posix-seh-rt_v5-rev2.7z/download)) and the `mingw32-make` tool to build the DLL. 

## Usage Example

See `src/embedded/embedded.h` for the full API. Here a quick example

````C
#include "embedded.h"
#include <stdio.h>

#define error(msg) {fprintf(stderr, "Failure: %s\n", msg); return -1;}

int main(void) {
	char* err = 0;
	void* conn = 0;
	monetdb_result* result = 0;
	size_t r, c;

	// first argument is a string for the db directory or NULL for in-memory mode
	err = monetdb_startup(NULL, 0, 0);
	if (err != 0)
		error(err)

	conn = monetdb_connect();
	if (conn == NULL)
		error("Connection failed")

	err = monetdb_query(conn, "CREATE TABLE test (x integer, y string)", 1,
	NULL, NULL, NULL);
	if (err != 0)
		error(err)

	err = monetdb_query(conn,
			"INSERT INTO test VALUES (42, 'Hello'), (NULL, 'World')", 1, NULL,
			NULL, NULL);
	if (err != 0)
		error(err)

	err = monetdb_query(conn, "SELECT x, y FROM test; ", 1, &result, NULL,
	NULL);
	if (err != 0)
		error(err)

	fprintf(stdout, "Query result with %d cols and %d rows\n", (int) result->ncols,
			(int) result->nrows);

	for (r = 0; r < result->nrows; r++) {
		for (c = 0; c < result->ncols; c++) {
			monetdb_column* rcol = monetdb_result_fetch(result, c);
			switch (rcol->type) {
			case monetdb_int32_t: {
				monetdb_column_int32_t * col = (monetdb_column_int32_t *) rcol;
				if (col->data[r] == col->null_value) {
					printf("NULL");
				} else {
					printf("%d", (int) col->data[r]);
				}
				break;
			}
			case monetdb_str: {
				monetdb_column_str * col = (monetdb_column_str *) rcol;
				if (col->is_null(col->data[r])) {
					printf("NULL");
				} else {
					printf("%s", (char*) col->data[r]);
				}
				break;
			}
			default: {
				printf("UNKNOWN");
			}
			}

			if (c + 1 < result->ncols) {
				printf(", ");
			}
		}
		printf("\n");
	}

	monetdb_cleanup_result(conn, result);
	monetdb_disconnect(conn);
	monetdb_shutdown();
	return 0;
}
````

You can build and link this example program with the MonetDBLite shared library (for example) as follows
````
gcc tests/readme/readme.c -o readme -Isrc/embedded -Lbuild -lmonetdb5
````
This should produce a binary named `readme`. Running this binary should produce the following output:
````
Query result with 2 cols and 2 rows
42, Hello
NULL, World
````


## Issues

If you encounter a bug, please file a minimal reproducible example on [github](https://github.com/hannesmuehleisen/MonetDBLite-C/issues). For questions and other discussion, please use [stack overflow](http://stackoverflow.com/questions/tagged/monetdblite) with the tag `monetdblite`. 
