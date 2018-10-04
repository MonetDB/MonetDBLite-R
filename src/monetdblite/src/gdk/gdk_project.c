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

/*
 * BATproject returns a BAT aligned with the left input whose values
 * are the values from the right input that were referred to by the
 * OIDs in the tail of the left input.
 */

#define project_loop(TYPE)						\
static gdk_return							\
project_##TYPE(BAT *bn, BAT *l, BAT *r, bool nilcheck)			\
{									\
	oid lo, hi;							\
	const TYPE *restrict rt;					\
	TYPE *restrict bt;						\
	TYPE v;								\
	const oid *restrict o;						\
	oid rseq, rend;							\
									\
	o = (const oid *) Tloc(l, 0);					\
	rt = (const TYPE *) Tloc(r, 0);					\
	bt = (TYPE *) Tloc(bn, 0);					\
	rseq = r->hseqbase;						\
	rend = rseq + BATcount(r);					\
	lo = 0;								\
	hi = lo + BATcount(l);						\
	if (nilcheck) {							\
		for (; lo < hi; lo++) {					\
			if (o[lo] < rseq || o[lo] >= rend) {		\
				if (is_oid_nil(o[lo])) {		\
					bt[lo] = TYPE##_nil;		\
					bn->tnonil = false;		\
					bn->tnil = true;		\
					bn->tsorted = false;		\
					bn->trevsorted = false;		\
					bn->tkey = false;		\
					lo++;				\
					break;				\
				} else {				\
					GDKerror("BATproject: does not match always\n"); \
					return GDK_FAIL;		\
				}					\
			} else {					\
				v = rt[o[lo] - rseq];			\
				bt[lo] = v;				\
				if (is_##TYPE##_nil(v) && bn->tnonil) {	\
					bn->tnonil = false;		\
					bn->tnil = true;		\
					lo++;				\
					break;				\
				}					\
			}						\
		}							\
	}								\
	for (; lo < hi; lo++) {						\
		if (o[lo] < rseq || o[lo] >= rend) {			\
			if (is_oid_nil(o[lo])) {			\
				bt[lo] = TYPE##_nil;			\
				bn->tnonil = false;			\
				bn->tnil = true;			\
				bn->tsorted = false;			\
				bn->trevsorted = false;			\
				bn->tkey = false;			\
			} else {					\
				GDKerror("BATproject: does not match always\n"); \
				return GDK_FAIL;			\
			}						\
		} else {						\
			v = rt[o[lo] - rseq];				\
			bt[lo] = v;					\
		}							\
	}								\
	assert((BUN) lo == BATcount(l));				\
	BATsetcount(bn, (BUN) lo);					\
	return GDK_SUCCEED;						\
}


/* project type switch */
project_loop(bte)
project_loop(sht)
project_loop(int)
project_loop(flt)
project_loop(dbl)
project_loop(lng)
#ifdef HAVE_HGE
project_loop(hge)
#endif

static gdk_return
project_void(BAT *bn, BAT *l, BAT *r)
{
	oid lo, hi;
	oid *restrict bt;
	const oid *o;
	oid rseq, rend;

	assert(BATtdense(r));
	o = (const oid *) Tloc(l, 0);
	bt = (oid *) Tloc(bn, 0);
	bn->tsorted = l->tsorted;
	bn->trevsorted = l->trevsorted;
	bn->tkey = l->tkey;
	bn->tnonil = true;
	bn->tnil = false;
	rseq = r->hseqbase;
	rend = rseq + BATcount(r);
	for (lo = 0, hi = lo + BATcount(l); lo < hi; lo++) {
		if (o[lo] < rseq || o[lo] >= rend) {
			if (is_oid_nil(o[lo])) {
				bt[lo] = oid_nil;
				bn->tnonil = false;
				bn->tnil = true;
				bn->tsorted = false;
				bn->trevsorted = false;
				bn->tkey = false;
			} else {
				GDKerror("BATproject: does not match always\n");
				return GDK_FAIL;
			}
		} else {
			bt[lo] = o[lo] - rseq + r->tseqbase;
		}
	}
	assert((BUN) lo == BATcount(l));
	BATsetcount(bn, (BUN) lo);
	return GDK_SUCCEED;
}

static gdk_return
project_any(BAT *bn, BAT *l, BAT *r, bool nilcheck)
{
	BUN n;
	oid lo, hi;
	BATiter ri;
	int (*cmp)(const void *, const void *) = ATOMcompare(r->ttype);
	const void *nil = ATOMnilptr(r->ttype);
	const void *v;
	const oid *o;
	oid rseq, rend;

	o = (const oid *) Tloc(l, 0);
	n = 0;
	ri = bat_iterator(r);
	rseq = r->hseqbase;
	rend = rseq + BATcount(r);
	for (lo = 0, hi = lo + BATcount(l); lo < hi; lo++, n++) {
		if (o[lo] < rseq || o[lo] >= rend) {
			if (is_oid_nil(o[lo])) {
				tfastins_nocheck(bn, n, nil, Tsize(bn));
				bn->tnonil = false;
				bn->tnil = true;
				bn->tsorted = false;
				bn->trevsorted = false;
				bn->tkey = false;
			} else {
				GDKerror("BATproject: does not match always\n");
				goto bunins_failed;
			}
		} else {
			v = BUNtail(ri, o[lo] - rseq);
			tfastins_nocheck(bn, n, v, Tsize(bn));
			if (nilcheck && bn->tnonil && cmp(v, nil) == 0) {
				bn->tnonil = false;
				bn->tnil = true;
			}
		}
	}
	assert(n == BATcount(l));
	BATsetcount(bn, n);
	bn->theap.dirty = true;
	return GDK_SUCCEED;
bunins_failed:
	return GDK_FAIL;
}

BAT *
BATproject(BAT *l, BAT *r)
{
	BAT *bn;
	oid lo, hi;
	gdk_return res;
	int tpe = ATOMtype(r->ttype);
	bool nilcheck = true, stringtrick = false;
	BUN lcount = BATcount(l), rcount = BATcount(r);

	assert(ATOMtype(l->ttype) == TYPE_oid);

	if (BATtdense(l) && BATcount(l) > 0) {
		lo = l->tseqbase;
		hi = l->tseqbase + BATcount(l);
		if (lo < r->hseqbase || hi > r->hseqbase + BATcount(r)) {
			GDKerror("BATproject: does not match always\n");
			return NULL;
		}
		bn = BATslice(r, lo - r->hseqbase, hi - r->hseqbase);
		if (bn == NULL)
			return NULL;
		BAThseqbase(bn, l->hseqbase + (lo - l->tseqbase));

		return bn;
	}
	/* if l has type void, it is either empty or not dense (i.e. nil) */
	if (l->ttype == TYPE_void || BATcount(l) == 0 ||
	    (r->ttype == TYPE_void && is_oid_nil(r->tseqbase))) {
		/* trivial: all values are nil (includes no entries at all) */
		const void *nil = ATOMnilptr(r->ttype);

		bn = BATconstant(l->hseqbase, r->ttype == TYPE_oid ? TYPE_void : r->ttype,
				 nil, BATcount(l), TRANSIENT);
		if (bn == NULL)
			return NULL;
		if (ATOMtype(bn->ttype) == TYPE_oid &&
		    BATcount(bn) == 0) {
			BATtseqbase(bn, 0);
		}

		return bn;
	}
	assert(l->ttype == TYPE_oid);

	if (ATOMstorage(tpe) == TYPE_str &&
	    l->tnonil &&
	    (rcount == 0 ||
	     lcount > (rcount >> 3) ||
	     r->batRestricted == BAT_READ)) {
		/* insert strings as ints, we need to copy the string
		 * heap whole sale; we can't do this if there are nils
		 * in the left column, and we won't do it if the left
		 * is much smaller than the right and the right is
		 * writable (meaning we have to actually copy the
		 * right string heap) */
		tpe = r->twidth == 1 ? TYPE_bte : (r->twidth == 2 ? TYPE_sht : (r->twidth == 4 ? TYPE_int : TYPE_lng));
		/* int's nil representation is a valid offset, so
		 * don't check for nils */
		nilcheck = false;
		stringtrick = true;
	}
	bn = COLnew(l->hseqbase, tpe, BATcount(l), TRANSIENT);
	if (bn == NULL)
		return NULL;
	if (stringtrick) {
		/* "string type" */
		bn->tsorted = false;
		bn->trevsorted = false;
		bn->tkey = false;
		bn->tnonil = false;
	} else {
		/* be optimistic, we'll clear these if necessary later */
		bn->tnonil = true;
		bn->tsorted = true;
		bn->trevsorted = true;
		bn->tkey = true;
		if (l->tnonil && r->tnonil)
			nilcheck = false; /* don't bother checking: no nils */
		if (tpe != TYPE_oid &&
		    tpe != ATOMstorage(tpe) &&
		    !ATOMvarsized(tpe) &&
		    ATOMcompare(tpe) == ATOMcompare(ATOMstorage(tpe)) &&
		    (!nilcheck ||
		     ATOMnilptr(tpe) == ATOMnilptr(ATOMstorage(tpe)))) {
			/* use base type if we can:
			 * only fixed sized (no advantage for variable sized),
			 * compare function identical (for sorted check),
			 * either no nils, or nil representation identical,
			 * not oid (separate case for those) */
			tpe = ATOMstorage(tpe);
		}
	}
	bn->tnil = false;

	switch (tpe) {
	case TYPE_bte:
		res = project_bte(bn, l, r, nilcheck);
		break;
	case TYPE_sht:
		res = project_sht(bn, l, r, nilcheck);
		break;
	case TYPE_int:
		res = project_int(bn, l, r, nilcheck);
		break;
	case TYPE_flt:
		res = project_flt(bn, l, r, nilcheck);
		break;
	case TYPE_dbl:
		res = project_dbl(bn, l, r, nilcheck);
		break;
	case TYPE_lng:
		res = project_lng(bn, l, r, nilcheck);
		break;
#ifdef HAVE_HGE
	case TYPE_hge:
		res = project_hge(bn, l, r, nilcheck);
		break;
#endif
	case TYPE_oid:
		if (r->ttype == TYPE_void) {
			res = project_void(bn, l, r);
		} else {
#if SIZEOF_OID == SIZEOF_INT
			res = project_int(bn, l, r, nilcheck);
#else
			res = project_lng(bn, l, r, nilcheck);
#endif
		}
		break;
	default:
		res = project_any(bn, l, r, nilcheck);
		break;
	}

	if (res != GDK_SUCCEED)
		goto bailout;

	/* handle string trick */
	if (stringtrick) {
		if (r->batRestricted == BAT_READ) {
			/* really share string heap */
			assert(r->tvheap->parentid > 0);
			BBPshare(r->tvheap->parentid);
			bn->tvheap = r->tvheap;
		} else {
			/* make copy of string heap */
			bn->tvheap = (Heap *) GDKzalloc(sizeof(Heap));
			if (bn->tvheap == NULL)
				goto bailout;
			bn->tvheap->parentid = bn->batCacheid;
			bn->tvheap->farmid = BBPselectfarm(bn->batRole, TYPE_str, varheap);
			snprintf(bn->tvheap->filename, sizeof(bn->tvheap->filename), "%s.theap", BBP_physical(bn->batCacheid));
			if (HEAPcopy(bn->tvheap, r->tvheap) != GDK_SUCCEED)
				goto bailout;
		}
		bn->ttype = r->ttype;
		bn->tvarsized = true;
		bn->twidth = r->twidth;
		bn->tshift = r->tshift;

		bn->tnil = false; /* we don't know */
	}
	/* some properties follow from certain combinations of input
	 * properties */
	if (BATcount(bn) <= 1) {
		bn->tkey = true;
		bn->tsorted = true;
		bn->trevsorted = true;
	} else {
		bn->tkey = l->tkey && r->tkey;
		bn->tsorted = (l->tsorted & r->tsorted) | (l->trevsorted & r->trevsorted);
		bn->trevsorted = (l->tsorted & r->trevsorted) | (l->trevsorted & r->tsorted);
	}
	bn->tnonil |= l->tnonil & r->tnonil;

	if (!BATtdense(r))
		BATtseqbase(bn, oid_nil);

	return bn;

  bailout:
	BBPreclaim(bn);
	return NULL;
}

/* Calculate a chain of BATproject calls.
 * The argument is a NULL-terminated array of BAT pointers.
 * This function is equivalent (apart from reference counting) to a
 * sequence of calls
 * bn = BATproject(bats[0], bats[1]);
 * bn = BATproject(bn, bats[2]);
 * ...
 * bn = BATproject(bn, bats[n-1]);
 * return bn;
 * where none of the intermediates are actually produced (and bats[n]==NULL).
 * Note that all BATs except the last must have type oid/void.
 */
BAT *
BATprojectchain(BAT **bats)
{
	/* For each BAT we remember some important details, however,
	 * dense-tailed BATs are optimized away in this list by
	 * combining their details with the following BAT's details.
	 * For each element in the chain, the value must be in the
	 * range [hlo..hlo+cnt) of the following element.  If a BAT in
	 * the chain is dense-tailed, the value tseq is the lowest
	 * value (corresponding with hlo).  Since dense-tailed BATs
	 * are combined with their successors, tseq will only be used
	 * for the last element. */
	struct {
		const oid *vals; /* if not dense, start of relevant tail values */
		BAT *b;		/* the BAT */
		oid hlo;	/* lowest allowed oid to index the BAT */
		BUN cnt;	/* size of allowed index range */
	} *ba;
	int i, n, tpe;
	BAT *b, *bn;
	oid o;
	const void *nil;	/* nil representation for last BAT */
	BUN p, cnt, off;
	oid hseq, tseq;
	bool allnil = false, nonil = true;
	bool stringtrick = false;
	bool issorted = true;	/* result sorted if all bats sorted */

	/* count number of participating BATs and allocate some
	 * temporary work space */
	for (n = 0; bats[n]; n++)
		;
	ba = GDKmalloc(sizeof(*ba) * n);
	if (ba == NULL)
		return NULL;
	b = *bats++;
	cnt = BATcount(b);	/* this will be the size of the output */
	hseq = b->hseqbase;	/* this will be the seqbase of the output */
	tseq = oid_nil;		/* initialize, but overwritten before use */
	off = 0;		/* this will be the BUN offset into last BAT */
	for (i = n = 0; b != NULL; n++, i++) {
		nonil &= b->tnonil; /* not guaranteed without nils */
		issorted &= b->tsorted;
		if (!allnil) {
			if (n > 0 && ba[i-1].vals == NULL) {
				/* previous BAT was dense-tailed: we will
				 * combine it with this one */
				i--;
				assert(off == 0);
				if (tseq + ba[i].cnt > b->hseqbase + BATcount(b)) {
					if (tseq > b->hseqbase + BATcount(b))
						ba[i].cnt = 0;
					else
						ba[i].cnt = b->hseqbase + BATcount(b) - tseq;
				}
				if (BATtdense(b)) {
					if (tseq > b->hseqbase) {
						tseq = tseq - b->hseqbase + b->tseqbase;
					} else if (tseq < b->hseqbase) {
						if (b->hseqbase - tseq > ba[i].cnt) {
							ba[i].cnt = 0;
						} else {
							ba[i].hlo += b->hseqbase - tseq;
							ba[i].cnt -= b->hseqbase - tseq;
							tseq = b->tseqbase;
						}
					} else {
						tseq = b->tseqbase;
					}
				} else {
					if (tseq > b->hseqbase) {
						off = tseq - b->hseqbase;
					} else if (tseq < b->hseqbase) {
						if (b->hseqbase - tseq > ba[i].cnt) {
							ba[i].cnt = 0;
						} else {
							ba[i].hlo += b->hseqbase - tseq;
							ba[i].cnt -= b->hseqbase - tseq;
						}
					}
					if (b->ttype == TYPE_void &&
					    is_oid_nil(b->tseqbase)) {
						tseq = oid_nil;
						allnil = true;
					} else
						ba[i].vals = (const oid *) Tloc(b, off);
				}
			} else {
				ba[i].hlo = b->hseqbase;
				ba[i].cnt = BATcount(b);
				off = 0;
				if (BATtdense(b)) {
					tseq = b->tseqbase;
					ba[i].vals = NULL;
				} else {
					tseq = oid_nil;
					if (b->ttype == TYPE_void &&
					    is_oid_nil(b->tseqbase))
						allnil = true;
					else
						ba[i].vals = (const oid *) Tloc(b, 0);
				}
			}
		}
		ba[i].b = b;
		if ((ba[i].cnt == 0 && cnt > 0) ||
		    (i == 0 && (ba[0].cnt < cnt || ba[0].hlo != hseq))) {
			GDKerror("BATprojectchain: does not match always\n");
			GDKfree(ba);
			return NULL;
		}
		b = *bats++;
	}
	assert(n >= 1);		/* not too few inputs */
	b = bats[-2];		/* the last BAT in the list (bats[-1]==NULL) */
	tpe = ATOMtype(b->ttype); /* its type */
	nil = ATOMnilptr(tpe);
	if (allnil) {
		/* somewhere on the way we encountered a void-nil BAT */
		GDKfree(ba);
		return BATconstant(hseq, tpe == TYPE_oid ? TYPE_void : tpe, nil, cnt, TRANSIENT);
	}
	if (i == 1) {
		/* only dense-tailed BATs before last: we can return a
		 * slice and manipulate offsets and head seqbase */
		GDKfree(ba);
		if (BATtdense(b)) {
			bn = BATdense(hseq, tseq, cnt);
		} else {
			bn = BATslice(b, off, off + cnt);
			if (bn == NULL)
				return NULL;
			BAThseqbase(bn, hseq);
			if (bn->ttype == TYPE_void)
				BATtseqbase(bn, tseq);
		}
		return bn;
	}

	if (nonil &&
	    cnt > 0 &&
	    ATOMstorage(b->ttype) == TYPE_str &&
	    b->batRestricted == BAT_READ) {
		stringtrick = true;
		tpe = b->twidth == 1 ? TYPE_bte : (b->twidth == 2 ? TYPE_sht : (b->twidth == 4 ? TYPE_int : TYPE_lng));
	}

	bn = COLnew(hseq, tpe, cnt, TRANSIENT);
	if (bn == NULL || cnt == 0) {
		GDKfree(ba);
		return bn;
	}
	bn->tnil = false;	/* we're not paying attention to this */
	bn->tnonil = nonil;
	n = i - 1;		/* ba[n] is last BAT */

/* figure out the "other" type, i.e. not compatible with oid */
#if SIZEOF_OID == SIZEOF_INT
#define OTPE	lng
#define TOTPE	TYPE_lng
#else
#define OTPE	int
#define TOTPE	TYPE_int
#endif
	if (ATOMstorage(bn->ttype) == ATOMstorage(TYPE_oid)) {
		/* oids all the way (or the final tail type is a fixed
		 * sized atom the same size as oid) */
		oid *restrict v = (oid *) Tloc(bn, 0);

		if (ba[n].vals == NULL) {
			/* last BAT is dense-tailed */
			lng offset = 0;

			offset = (lng) tseq - (lng) ba[n].hlo;
			ba[n].cnt += ba[n].hlo; /* upper bound of last BAT */
			for (p = 0; p < cnt; p++) {
				o = ba[0].vals[p];
				for (i = 1; i < n; i++) {
					o -= ba[i].hlo;
					if (o >= ba[i].cnt) {
						if (o == oid_nil - ba[i].hlo) {
							bn->tnil = 1;
							o = oid_nil;
							break;
						}
						GDKerror("BATprojectchain: does not match always\n");
						goto bunins_failed;
					}
					o = ba[i].vals[o];
				}
				if (is_oid_nil(o)) {
					*v++ = *(oid *) nil;
				} else {
					if (o < ba[n].hlo || o >= ba[n].cnt) {
						GDKerror("BATprojectchain: does not match always\n");
						goto bunins_failed;
					}
					*v++ = (oid) (o + offset);
				}
			}
		} else {
			/* last BAT is materialized */
			for (p = 0; p < cnt; p++) {
				o = ba[0].vals[p];
				for (i = 1; i <= n; i++) { /* note "<=" */
					o -= ba[i].hlo;
					if (o >= ba[i].cnt) {
						if (o == oid_nil - ba[i].hlo) {
							bn->tnil = true;
							o = oid_nil;
							break;
						}
						GDKerror("BATprojectchain: does not match always\n");
						goto bunins_failed;
					}
					o = ba[i].vals[o];
				}
				*v++ = (is_oid_nil(o)) & !stringtrick ? *(oid *) nil : o;
			}
		}
		assert(v == (oid *) Tloc(bn, cnt));
	} else if (ATOMstorage(b->ttype) == ATOMstorage(TOTPE)) {
		/* one special case for a fixed sized BAT */
		const OTPE *src = (const OTPE *) Tloc(b, off);
		OTPE *restrict dst = (OTPE *) Tloc(bn, 0);

		for (p = 0; p < cnt; p++) {
			o = ba[0].vals[p];
			for (i = 1; i < n; i++) {
				o -= ba[i].hlo;
				if (o >= ba[i].cnt) {
					if (o == oid_nil - ba[i].hlo) {
						bn->tnil = true;
						o = oid_nil;
						break;
					}
					GDKerror("BATprojectchain: does not match always\n");
					goto bunins_failed;
				}
				o = ba[i].vals[o];
			}
			if (is_oid_nil(o)) {
				*dst++ = * (OTPE *) nil;
			} else {
				o -= ba[n].hlo;
				if (o >= ba[n].cnt) {
					GDKerror("BATprojectchain: does not match always\n");
					goto bunins_failed;
				}
				*dst++ = src[o];
			}
		}
	} else if (ATOMvarsized(tpe)) {
		/* generic code for var-sized atoms */
		BATiter bi = bat_iterator(b);
		const void *v = nil; /* make compiler happy with init */

		assert(!stringtrick);
		for (p = 0; p < cnt; p++) {
			o = ba[0].vals[p];
			for (i = 1; i < n; i++) {
				o -= ba[i].hlo;
				if (o >= ba[i].cnt) {
					if (o == oid_nil - ba[i].hlo) {
						bn->tnil = true;
						v = nil;
						o = oid_nil;
						break;
					}
					GDKerror("BATprojectchain: does not match always\n");
					goto bunins_failed;
				}
				o = ba[i].vals[o];
			}
			if (!is_oid_nil(o)) {
				o -= ba[n].hlo;
				if (o >= ba[n].cnt) {
					GDKerror("BATprojectchain: does not match always\n");
					goto bunins_failed;
				}
				v = BUNtvar(bi, o + off);
			}
			bunfastappVAR(bn, v);
		}
	} else {
		/* generic code for fixed-sized atoms */
		BATiter bi = bat_iterator(b);
		const void *v = nil; /* make compiler happy with init */

		for (p = 0; p < cnt; p++) {
			o = ba[0].vals[p];
			for (i = 1; i < n; i++) {
				o -= ba[i].hlo;
				if (o >= ba[i].cnt) {
					if (o == oid_nil - ba[i].hlo) {
						bn->tnil = true;
						v = nil;
						o = oid_nil;
						break;
					}
					GDKerror("BATprojectchain: does not match always\n");
					goto bunins_failed;
				}
				o = ba[i].vals[o];
			}
			if (!is_oid_nil(o)) {
				o -= ba[n].hlo;
				if (o >= ba[n].cnt) {
					GDKerror("BATprojectchain: does not match always\n");
					goto bunins_failed;
				}
				v = BUNtloc(bi, o + off);
			}
			if (BATcount(bn) >= BATcapacity(bn)) {
				if (BATcount(bn) == BUN_MAX) {
					GDKerror("BATprojectchain: too many elements to accomodate (" BUNFMT ")\n", BUN_MAX);
					goto bunins_failed;
				}
				if (BATextend(bn, BATgrows(bn)) != GDK_SUCCEED)
					goto bunins_failed;
			}
			bn->theap.free += Tsize(bn);
			bn->theap.dirty |= Tsize(bn) != 0;
			ATOMputFIX(bn->ttype, Tloc(bn, bn->batCount), v);
			bn->batCount++;
		}
	}
	bn->theap.dirty = true;
	BATsetcount(bn, cnt);
	if (stringtrick) {
		bn->tnil = false;
		bn->tnonil = nonil;
		bn->tkey = false;
		BBPshare(b->tvheap->parentid);
		bn->tvheap = b->tvheap;
		bn->ttype = b->ttype;
		bn->tvarsized = true;
		bn->twidth = b->twidth;
		bn->tshift = b->tshift;
	}
	bn->tsorted = bn->trevsorted = cnt <= 1;
	bn->tsorted |= issorted;
	bn->tseqbase = oid_nil;
	GDKfree(ba);
	return bn;

  bunins_failed:
	GDKfree(ba);
	BBPreclaim(bn);
	return NULL;
}
