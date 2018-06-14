/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

/*
 * @* Implementation Code
 */
#ifndef __BLOB_H__
#define __BLOB_H__
#include "mal.h"
#include "mal_exception.h"

typedef struct blob {
	size_t nitems;
	/*unsigned */ char data[FLEXIBLE_ARRAY_MEMBER];
} blob;

#define sqlblob blob

mal_export int TYPE_blob;
mal_export int TYPE_sqlblob;

mal_export var_t blobsize(size_t nitems);
mal_export ssize_t SQLBLOBfromstr(const char *instr, size_t *l, blob **val);
mal_export ssize_t SQLBLOBtostr(str *tostr, size_t *l, const blob *pin);

mal_export var_t BLOBput(Heap *h, var_t *bun, const blob *val);
mal_export const blob * BLOBnull(void);


#endif /* __BLOB_H__ */
