/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

#include "monetdb_config.h"
#include "gdk.h"
#include "gdk_private.h"
#include "gdk_cand.h"

/* Calculate a cross product between bats l and r with optional
 * candidate lists sl for l and sr for r.
 * The result is two bats r1 and r2 which contain the OID (head
 * values) of the input bats l and r. */
gdk_return
BATsubcross(BAT **r1p, BAT **r2p, BAT *l, BAT *r, BAT *sl, BAT *sr)
{
	BAT *bn1, *bn2;
	BUN start1, start2;
	BUN end1, end2;
	BUN cnt1, cnt2;
	const oid *restrict lcand, *restrict rcand;
	const oid *lcandend, *rcandend;
	oid seq;
	oid *restrict p;
	BUN i, j;

	CANDINIT(l, sl, start1, end1, cnt1, lcand, lcandend);
	CANDINIT(r, sr, start2, end2, cnt2, rcand, rcandend);
	if (lcand)
		cnt1 = lcandend - lcand;
	if (rcand)
		cnt2 = rcandend - rcand;

	bn1 = COLnew(0, TYPE_oid, cnt1 * cnt2, TRANSIENT);
	bn2 = COLnew(0, TYPE_oid, cnt1 * cnt2, TRANSIENT);
	if (bn1 == NULL || bn2 == NULL) {
		BBPreclaim(bn1);
		BBPreclaim(bn2);
		return GDK_FAIL;
	}

	BATsetcount(bn1, cnt1 * cnt2);
	bn1->tsorted = 1;
	bn1->trevsorted = cnt1 <= 1;
	bn1->tkey = cnt2 <= 1;
	bn1->tnil = 0;
	bn1->tnonil = 1;
	p = (oid *) Tloc(bn1, 0);
	if (lcand) {
		for (i = 0; i < cnt1; i++)
			for (j = 0; j < cnt2; j++)
				*p++ = lcand[i];
		bn1->tseqbase = oid_nil;
	} else {
		seq = l->hseqbase + start1;
		for (i = 0; i < cnt1; i++)
			for (j = 0; j < cnt2; j++)
				*p++ = i + seq;
		BATtseqbase(bn1, bn1->tkey ? seq : oid_nil);
	}

	BATsetcount(bn2, cnt1 * cnt2);
	bn2->tsorted = cnt1 <= 1 || cnt2 <= 1;
	bn2->trevsorted = cnt2 <= 1;
	bn2->tkey = cnt1 <= 1;
	bn2->tnil = 0;
	bn2->tnonil = 1;
	p = (oid *) Tloc(bn2, 0);
	if (rcand) {
		for (i = 0; i < cnt1; i++)
			for (j = 0; j < cnt2; j++)
				*p++ = rcand[j];
		bn2->tseqbase = oid_nil;
	} else {
		seq = r->hseqbase + start2;
		for (i = 0; i < cnt1; i++)
			for (j = 0; j < cnt2; j++)
				*p++ = j + seq;
		BATtseqbase(bn2, bn2->tkey ? seq : oid_nil);
	}

	*r1p = bn1;
	*r2p = bn2;
	return GDK_SUCCEED;
}
