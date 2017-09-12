/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2015 MonetDB B.V.
 */

/*
 * H. Muehleisen, M. Raasveldt
 * Inverse RAPI
 */
#ifndef _EMBEDDED_R_LIB_
#define _EMBEDDED_R_LIB_
//#define USE_RINTERNALS 1

#include <Rdefines.h>
#include <R_ext/Rdynload.h>
#include "embedded.h"

SEXP monetdb_query_R(SEXP connsexp, SEXP querysexp, SEXP executesexp, SEXP resultconvertsexp, SEXP progressbarsexp);
SEXP monetdb_startup_R(SEXP dbdirsexp, SEXP silentsexp, SEXP sequentialsexp);
SEXP monetdb_append_R(SEXP connsexp, SEXP schemaname, SEXP tablename, SEXP tabledata);
SEXP monetdb_connect_R(void);
SEXP monetdb_disconnect_R(SEXP connsexp);
SEXP monetdb_shutdown_R(void);

void R_init_MonetDBLite(DllInfo *dll);

#endif
