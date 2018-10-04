/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

/*
 * (author) N. J. Nes
 *
 * In the philosophy of MonetDB, transaction management overhead
 * should only be paid when necessary. Transaction management is for
 * this purpose implemented as a separate module and applications are
 * required to obey the transaction policy, e.g. obtaining/releasing
 * locks.
 *
 * This module is designed to support efficient logging of the SQL
 * database.  Once loaded, the SQL compiler will insert the proper
 * calls at transaction commit to include the changes in the log file.
 *
 * The logger uses a directory to store its log files. One master log
 * file stores information about the version of the logger and the
 * transaction log files. This file is a simple ascii file with the
 * following format:
 *  {6DIGIT-VERSION\n[log file number \n]*]*}
 * The transaction log files have a binary format, which stores fixed
 * size logformat headers (flag,nr,bid), where the flag is the type of
 * update logged.  The nr field indicates how many changes there were
 * (in case of inserts/deletes).  The bid stores the bid identifier.
 *
 * The key decision to be made by the user is the location of the log
 * file.  Ideally, it should be stored in fail-safe environment, or at
 * least the log and databases should be on separate disk columns.
 *
 * This file system may reside on the same hardware as the database
 * server and therefore the writes are done to the same disk, but
 * could also reside on another system and then the changes are
 * flushed through the network.  The logger works under the assumption
 * that it is called to safeguard updates on the database when it has
 * an exclusive lock on the latest version. This lock should be
 * guaranteed by the calling transaction manager first.
 *
 * Finding the updates applied to a BAT is relatively easy, because
 * each BAT contains a delta structure. On commit these changes are
 * written to the log file and the delta management is reset. Since
 * each commit is written to the same log file, the beginning and end
 * are marked by a log identifier.
 *
 * A server restart should only (re)process blocks which are
 * completely written to disk. A log replay therefore ends in a commit
 * or abort on the changed bats. Once all logs have been read, the
 * changes to the bats are made persistent, i.e. a bbp sub-commit is
 * done.
 */
#include "monetdb_config.h"
#include "gdk.h"
#include "gdk_private.h"
#include "gdk_logger.h"
#include "mutils.h"

#include <string.h>

/*
 * The log record encoding is geared at reduced storage space, but at
 * the expense of readability. A user can not easily inspect the log a
 * posteriori to check what has happened.
 *
 */
#define LOG_START	1
#define LOG_END		2
#define LOG_INSERT	3
#define LOG_UPDATE	5
#define LOG_CREATE	6
#define LOG_DESTROY	7
#define LOG_USE		8
#define LOG_CLEAR	9
#define LOG_SEQ		10

#ifdef HAVE_EMBEDDED
#define printf(fmt,...) ((void) 0)
#endif

#ifdef NATIVE_WIN32
#define getfilepos _ftelli64
#else
#ifdef HAVE_FSEEKO
#define getfilepos ftello
#else
#define getfilepos ftell
#endif
#endif

static char *log_commands[] = {
	NULL,
	"LOG_START",
	"LOG_END",
	"LOG_INSERT",
	"LOG_DELETE",
	"LOG_UPDATE",
	"LOG_CREATE",
	"LOG_DESTROY",
	"LOG_USE",
	"LOG_CLEAR",
	"LOG_SEQ",
};

typedef struct logformat_t {
	char flag;
	int tid;
	lng nr;
} logformat;

typedef enum {LOG_OK, LOG_EOF, LOG_ERR} log_return;

/* When reading an old format database, we may need to read the geom
 * Well-known Binary (WKB) type differently.  This variable is used to
 * indicate that to the function wkbREAD during reading of the log. */
static int geomisoldversion;

static gdk_return bm_commit(logger *lg);
static gdk_return tr_grow(trans *tr);

static BUN
log_find(BAT *b, BAT *d, int val)
{
	BATiter cni = bat_iterator(b);
	BUN p;

	assert(b->ttype == TYPE_int);
	assert(d->ttype == TYPE_oid);
	if (BAThash(b) == GDK_SUCCEED) {
		HASHloop_int(cni, cni.b->thash, p, &val) {
			oid pos = p;
			if (BUNfnd(d, &pos) == BUN_NONE)
				return p;
		}
	} else {		/* unlikely: BAThash failed */
		BUN q;
		int *t = (int *) Tloc(b, 0);

		for (p = 0, q = BUNlast(b); p < q; p++) {
			if (t[p] == val) {
				oid pos = p;
				if (BUNfnd(d, &pos) == BUN_NONE)
					return p;
			}
		}
	}
	return BUN_NONE;
}

static void
logbat_destroy(BAT *b)
{
	if (b)
		BBPunfix(b->batCacheid);
}

static BAT *
logbat_new(int tt, BUN size, int role)
{
	BAT *nb = COLnew(0, tt, size, role);

	if (nb) {
		if (role == PERSISTENT)
			BATmode(nb, PERSISTENT);
	} else {
		fprintf(stderr, "!ERROR: logbat_new: creating new BAT[void:%s]#" BUNFMT " failed\n", ATOMname(tt), size);
	}
	return nb;
}

static int
log_read_format(logger *l, logformat *data)
{
	return mnstr_read(l->log, &data->flag, 1, 1) == 1 &&
		mnstr_readLng(l->log, &data->nr) == 1 &&
		mnstr_readInt(l->log, &data->tid) == 1;
}

static gdk_return
log_write_format(logger *l, logformat *data)
{
	if (mnstr_write(l->log, &data->flag, 1, 1) == 1 &&
	    mnstr_writeLng(l->log, data->nr) &&
	    mnstr_writeInt(l->log, data->tid))
		return GDK_SUCCEED;
	fprintf(stderr, "!ERROR: log_write_format: write failed\n");
	return GDK_FAIL;
}

static char *
log_read_string(logger *l)
{
	int len;
	ssize_t nr;
	char *buf;

	if (mnstr_readInt(l->log, &len) != 1) {
		fprintf(stderr, "!ERROR: log_read_string: read failed\n");
//MK This leads to non-repeatable log structure?
		return NULL;
	}
	if (len == 0)
		return NULL;
	buf = GDKmalloc(len);
	if (buf == NULL) {
		fprintf(stderr, "!ERROR: log_read_string: malloc failed\n");
		/* this is bad */
		return (char *) -1;
	}

	if ((nr = mnstr_read(l->log, buf, 1, len)) != (ssize_t) len) {
		buf[len - 1] = 0;
		fprintf(stderr, "!ERROR: log_read_string: couldn't read name (%s)\n", buf);
		GDKfree(buf);
		return NULL;
	}
	buf[len - 1] = 0;
	return buf;
}

static gdk_return
log_write_string(logger *l, const char *n)
{
	size_t len = strlen(n) + 1;	/* log including EOS */

	assert(len > 1);
	assert(len <= INT_MAX);
	if (!mnstr_writeInt(l->log, (int) len) ||
	    mnstr_write(l->log, n, 1, len) != (ssize_t) len) {
		fprintf(stderr, "!ERROR: log_write_string: write failed\n");
		return GDK_FAIL;
	}
	return GDK_SUCCEED;
}

static log_return
log_read_clear(logger *lg, trans *tr, char *name)
{
	if (lg->debug & 1)
		fprintf(stderr, "#logger found log_read_clear %s\n", name);
	if (tr_grow(tr) != GDK_SUCCEED)
		return LOG_ERR;
	tr->changes[tr->nr].type = LOG_CLEAR;
	if ((tr->changes[tr->nr].name = GDKstrdup(name)) == NULL)
		return LOG_ERR;
	tr->nr++;
	return LOG_OK;
}

static int
avoid_snapshot(logger *lg, log_bid bid)
{
	if (BATcount(lg->snapshots_bid)-BATcount(lg->dsnapshots)) {
		BUN p = log_find(lg->snapshots_bid, lg->dsnapshots, bid);

		if (p != BUN_NONE) {
			int tid = *(int *) Tloc(lg->snapshots_tid, p);

			if (lg->tid <= tid)
				return 1;
		}
	}
	return 0;
}

static gdk_return
la_bat_clear(logger *lg, logaction *la)
{
	log_bid bid = logger_find_bat(lg, la->name);
	BAT *b;

	if (lg->debug & 1)
		fprintf(stderr, "#la_bat_clear %s\n", la->name);

	/* do we need to skip these old updates */
	if (avoid_snapshot(lg, bid))
		return GDK_SUCCEED;

	b = BATdescriptor(bid);
	if (b) {
		int access = b->batRestricted;
		b->batRestricted = BAT_WRITE;
		BATclear(b, true);
		b->batRestricted = access;
		logbat_destroy(b);
	}
	return GDK_SUCCEED;
}

static log_return
log_read_seq(logger *lg, logformat *l)
{
	int seq = (int) l->nr;
	lng val;
	BUN p;

	assert(l->nr <= (lng) INT_MAX);
	if (mnstr_readLng(lg->log, &val) != 1) {
		fprintf(stderr, "!ERROR: log_read_seq: read failed\n");
		return LOG_EOF;
	}

	if ((p = log_find(lg->seqs_id, lg->dseqs, seq)) != BUN_NONE &&
	    p >= lg->seqs_id->batInserted) {
		if (BUNinplace(lg->seqs_val, p, &val, false) != GDK_SUCCEED)
			return LOG_ERR;
	} else {
		if (p != BUN_NONE) {
			oid pos = p;
			if (BUNappend(lg->dseqs, &pos, false) != GDK_SUCCEED)
				return LOG_ERR;
		}
		if (BUNappend(lg->seqs_id, &seq, false) != GDK_SUCCEED ||
		    BUNappend(lg->seqs_val, &val, false) != GDK_SUCCEED)
			return LOG_ERR;
	}
	return LOG_OK;
}

#ifdef GDKLIBRARY_NIL_NAN
static void *
fltRead(void *dst, stream *s, size_t cnt)
{
	flt *ptr;
	size_t i;

	if ((ptr = BATatoms[TYPE_flt].atomRead(dst, s, cnt)) == NULL)
		return NULL;
	for (i = 0; i < cnt; i++)
		if (ptr[i] == GDK_flt_min)
			ptr[i] = flt_nil;
	return ptr;
}

static void *
dblRead(void *dst, stream *s, size_t cnt)
{
	dbl *ptr;
	size_t i;

	if ((ptr = BATatoms[TYPE_dbl].atomRead(dst, s, cnt)) == NULL)
		return NULL;
	for (i = 0; i < cnt; i++)
		if (ptr[i] == GDK_dbl_min)
			ptr[i] = dbl_nil;
	return ptr;
}

static void *
mbrRead(void *dst, stream *s, size_t cnt)
{
	/* an MBR consists of 4 flt values; here we don't care about
	 * anything else, we just need to convert the old NIL to NaN
	 * for all those values */
	return fltRead(dst, s, cnt * 4);
}
#endif

static log_return
log_read_updates(logger *lg, trans *tr, logformat *l, char *name)
{
	log_bid bid = logger_find_bat(lg, name);
	BAT *b = BATdescriptor(bid);
	log_return res = LOG_OK;
	int ht = -1, tt = -1, tseq = 0;

	if (lg->debug & 1)
		fprintf(stderr, "#logger found log_read_updates %s %s " LLFMT "\n", name, l->flag == LOG_INSERT ? "insert" : "update", l->nr);

	if (b) {
		ht = TYPE_void;
		tt = b->ttype;
		if (tt == TYPE_void && BATtdense(b))
			tseq = 1;
	} else {		/* search trans action for create statement */
		int i;

		for (i = 0; i < tr->nr; i++) {
			if (tr->changes[i].type == LOG_CREATE && strcmp(tr->changes[i].name, name) == 0) {
				ht = tr->changes[i].ht;
				if (ht < 0) {
					ht = TYPE_void;
				}
				tt = tr->changes[i].tt;
				if (tt < 0) {
					tseq = 1;
					tt = TYPE_void;
				}
				break;
			}
		}
	}
	assert((ht == TYPE_void && l->flag == LOG_INSERT) ||
	       ((ht == TYPE_oid || !ht) && l->flag == LOG_UPDATE));
	if (ht >= 0 && tt >= 0) {
		BAT *uid = NULL;
		BAT *r;
		void *(*rt) (ptr, stream *, size_t) = BATatoms[tt].atomRead;
		void *tv = NULL;

		if (ATOMstorage(tt) < TYPE_str)
			tv = lg->buf;
#ifdef GDKLIBRARY_NIL_NAN
		if (lg->convert_nil_nan) {
			if (tt == TYPE_flt)
				rt = fltRead;
			else if (tt == TYPE_dbl)
				rt = dblRead;
			else if (tt > TYPE_str && strcmp(BATatoms[tt].name, "mbr") == 0)
				rt = mbrRead;
		}
#endif

		assert(l->nr <= (lng) BUN_MAX);
		if (l->flag == LOG_UPDATE) {
			uid = COLnew(0, ht, (BUN) l->nr, PERSISTENT);
			if (uid == NULL) {
				logbat_destroy(b);
				return LOG_ERR;
			}
		} else {
			assert(ht == TYPE_void);
		}
		r = COLnew(0, tt, (BUN) l->nr, PERSISTENT);
		if (r == NULL) {
			BBPreclaim(uid);
			logbat_destroy(b);
			return LOG_ERR;
		}

		if (tseq)
			BATtseqbase(r, 0);

		if (ht == TYPE_void && l->flag == LOG_INSERT) {
			for (; res == LOG_OK && l->nr > 0; l->nr--) {
				void *t = rt(tv, lg->log, 1);

				if (t == NULL) {
					/* see if failure was due to
					 * malloc or something less
					 * serious (in the current
					 * context) */
					if (strstr(GDKerrbuf, "alloc") == NULL)
						res = LOG_EOF;
					else
						res = LOG_ERR;
					break;
				}
				if (BUNappend(r, t, true) != GDK_SUCCEED)
					res = LOG_ERR;
				if (t != tv)
					GDKfree(t);
			}
		} else {
			void *(*rh) (ptr, stream *, size_t) = ht == TYPE_void ? BATatoms[TYPE_oid].atomRead : BATatoms[ht].atomRead;
			void *hv = ATOMnil(ht);

			if (hv == NULL)
				res = LOG_ERR;

			for (; res == LOG_OK && l->nr > 0; l->nr--) {
				void *h = rh(hv, lg->log, 1);
				void *t = rt(tv, lg->log, 1);

				if (h == NULL)
					res = LOG_EOF;
				else if (t == NULL) {
					if (strstr(GDKerrbuf, "malloc") == NULL)
						res = LOG_EOF;
					else
						res = LOG_ERR;
				} else if (BUNappend(uid, h, true) != GDK_SUCCEED ||
					   BUNappend(r, t, true) != GDK_SUCCEED)
					res = LOG_ERR;
				if (t != tv)
					GDKfree(t);
			}
			GDKfree(hv);
		}
		if (tv != lg->buf)
			GDKfree(tv);

		if (res == LOG_OK) {
			if (tr_grow(tr) == GDK_SUCCEED) {
				tr->changes[tr->nr].type = l->flag;
				tr->changes[tr->nr].nr = l->nr;
				tr->changes[tr->nr].ht = ht;
				tr->changes[tr->nr].tt = tt;
				if ((tr->changes[tr->nr].name = GDKstrdup(name)) == NULL) {
					logbat_destroy(b);
					BBPreclaim(uid);
					BBPreclaim(r);
					return LOG_ERR;
				}
				tr->changes[tr->nr].b = r;
				tr->changes[tr->nr].uid = uid;
				tr->nr++;
			} else {
				res = LOG_ERR;
			}
		}
	} else {
		/* bat missing ERROR or ignore ? currently error. */
		res = LOG_ERR;
	}
	logbat_destroy(b);
	return res;
}

static gdk_return
la_bat_updates(logger *lg, logaction *la)
{
	log_bid bid = logger_find_bat(lg, la->name);
	BAT *b;

	if (bid == 0)
		return GDK_SUCCEED; /* ignore bats no longer in the catalog */

	/* do we need to skip these old updates */
	if (avoid_snapshot(lg, bid))
		return GDK_SUCCEED;

	b = BATdescriptor(bid);
	if (b == NULL)
		return GDK_FAIL;
	if (la->type == LOG_INSERT) {
		if (BATappend(b, la->b, NULL, true) != GDK_SUCCEED) {
			logbat_destroy(b);
			return GDK_FAIL;
		}
	} else if (la->type == LOG_UPDATE) {
		BATiter vi = bat_iterator(la->b);
		BATiter ii = bat_iterator(la->uid);
		BUN p, q;

		BATloop(la->b, p, q) {
			oid h = * (const oid *) BUNtail(ii, p);
			const void *t = BUNtail(vi, p);

			if (h < b->hseqbase || h >= b->hseqbase + BATcount(b)) {
				/* if value doesn't exist, insert it;
				 * if b void headed, maintain that by
				 * inserting nils */
				if (b->batCount == 0 && !is_oid_nil(h))
					b->hseqbase = h;
				if (!is_oid_nil(b->hseqbase) && !is_oid_nil(h)) {
					const void *tv = ATOMnilptr(b->ttype);

					while (b->hseqbase + b->batCount < h) {
						if (BUNappend(b, tv, true) != GDK_SUCCEED) {
							logbat_destroy(b);
							return GDK_FAIL;
						}
					}
				}
				if (BUNappend(b, t, true) != GDK_SUCCEED) {
					logbat_destroy(b);
					return GDK_FAIL;
				}
			} else {
				if (BUNreplace(b, h, t, true) != GDK_SUCCEED) {
					logbat_destroy(b);
					return GDK_FAIL;
				}
			}
		}
	}
	logbat_destroy(b);
	return GDK_SUCCEED;
}

static log_return
log_read_destroy(logger *lg, trans *tr, char *name)
{
	(void) lg;
	if (tr_grow(tr) == GDK_SUCCEED) {
		tr->changes[tr->nr].type = LOG_DESTROY;
		if ((tr->changes[tr->nr].name = GDKstrdup(name)) == NULL)
			return LOG_ERR;
		tr->nr++;
	}
	return LOG_OK;
}

static gdk_return
la_bat_destroy(logger *lg, logaction *la)
{
	log_bid bid = logger_find_bat(lg, la->name);

	if (bid) {
		BUN p;

		if (logger_del_bat(lg, bid) != GDK_SUCCEED)
			return GDK_FAIL;

		if ((p = log_find(lg->snapshots_bid, lg->dsnapshots, bid)) != BUN_NONE) {
#ifndef NDEBUG
			assert(BBP_desc(bid)->batRole == PERSISTENT);
			assert(0 <= BBP_desc(bid)->theap.farmid && BBP_desc(bid)->theap.farmid < MAXFARMS);
			assert(BBPfarms[BBP_desc(bid)->theap.farmid].roles & (1 << PERSISTENT));
			if (BBP_desc(bid)->tvheap) {
				assert(0 <= BBP_desc(bid)->tvheap->farmid && BBP_desc(bid)->tvheap->farmid < MAXFARMS);
				assert(BBPfarms[BBP_desc(bid)->tvheap->farmid].roles & (1 << PERSISTENT));
			}
#endif
			if (BUNappend(lg->dsnapshots, &p, false) != GDK_SUCCEED)
				return GDK_FAIL;
		}
	}
	return GDK_SUCCEED;
}

static log_return
log_read_create(logger *lg, trans *tr, char *name)
{
	char *buf = log_read_string(lg);
	int ht, tt;
	char *ha, *ta;


	if (lg->debug & 1)
		fprintf(stderr, "#log_read_create %s\n", name);

	if (buf == NULL)
		return LOG_EOF;
	if (buf == (char *) -1)
		return LOG_ERR;
	ha = buf;
	ta = strchr(buf, ',');
	if (ta == NULL) {
		fprintf(stderr, "!ERROR: log_read_create: inconsistent data read\n");
		return LOG_ERR;
	}
	*ta++ = 0;		/* skip over , */
	if (strcmp(ha, "vid") == 0) {
		ht = -1;
	} else {
		ht = ATOMindex(ha);
	}
	if (strcmp(ta, "vid") == 0) {
		tt = -1;
	} else {
		tt = ATOMindex(ta);
	}
	GDKfree(buf);
	if (tr_grow(tr) == GDK_SUCCEED) {
		tr->changes[tr->nr].type = LOG_CREATE;
		tr->changes[tr->nr].ht = ht;
		tr->changes[tr->nr].tt = tt;
		if ((tr->changes[tr->nr].name = GDKstrdup(name)) == NULL)
			return LOG_ERR;
		tr->changes[tr->nr].b = NULL;
		tr->nr++;
	}

	return LOG_OK;
}

static gdk_return
la_bat_create(logger *lg, logaction *la)
{
	int tt = (la->tt < 0) ? TYPE_void : la->tt;
	BAT *b;

	/* formerly head column type, should be void */
	assert(((la->ht < 0) ? TYPE_void : la->ht) == TYPE_void);
	if ((b = COLnew(0, tt, BATSIZE, PERSISTENT)) == NULL)
		return GDK_FAIL;

	if (la->tt < 0)
		BATtseqbase(b, 0);

	if (BATsetaccess(b, BAT_READ) != GDK_SUCCEED ||
	    logger_add_bat(lg, b, la->name) != GDK_SUCCEED)
		return GDK_FAIL;
	logbat_destroy(b);
	return GDK_SUCCEED;
}

static log_return
log_read_use(logger *lg, trans *tr, logformat *l, char *name)
{
	(void) lg;
	if (tr_grow(tr) != GDK_SUCCEED)
		return LOG_ERR;
	tr->changes[tr->nr].type = LOG_USE;
	tr->changes[tr->nr].nr = l->nr;
	if ((tr->changes[tr->nr].name = GDKstrdup(name)) == NULL)
		return LOG_ERR;
	tr->changes[tr->nr].b = NULL;
	tr->nr++;
	return LOG_OK;
}

static gdk_return
la_bat_use(logger *lg, logaction *la)
{
	log_bid bid = (log_bid) la->nr;
	BAT *b = BATdescriptor(bid);
	BUN p;

	assert(la->nr <= (lng) INT_MAX);
	if (b == NULL) {
		GDKerror("logger: could not use bat (%d) for %s\n", (int) bid, la->name);
		return GDK_FAIL;
	}
	if (logger_add_bat(lg, b, la->name) != GDK_SUCCEED)
		goto bailout;
#ifndef NDEBUG
	assert(b->batRole == PERSISTENT);
	assert(0 <= b->theap.farmid && b->theap.farmid < MAXFARMS);
	assert(BBPfarms[b->theap.farmid].roles & (1 << PERSISTENT));
	if (b->tvheap) {
		assert(0 <= b->tvheap->farmid && b->tvheap->farmid < MAXFARMS);
		assert(BBPfarms[b->tvheap->farmid].roles & (1 << PERSISTENT));
	}
#endif
	if ((p = log_find(lg->snapshots_bid, lg->dsnapshots, b->batCacheid)) != BUN_NONE &&
	    p >= lg->snapshots_bid->batInserted) {
		if (BUNinplace(lg->snapshots_tid, p, &lg->tid, false) != GDK_SUCCEED)
			goto bailout;
	} else {
		if (p != BUN_NONE) {
			oid pos = p;
			if (BUNappend(lg->dsnapshots, &pos, false) != GDK_SUCCEED)
				goto bailout;
		}
		/* move to the dirty new part of the snapshots list,
		 * new snapshots will get flushed to disk */
		if (BUNappend(lg->snapshots_bid, &b->batCacheid, false) != GDK_SUCCEED ||
		    BUNappend(lg->snapshots_tid, &lg->tid, false) != GDK_SUCCEED)
			goto bailout;
	}
	logbat_destroy(b);
	return GDK_SUCCEED;

  bailout:
	logbat_destroy(b);
	return GDK_FAIL;
}


#define TR_SIZE		1024

static trans *
tr_create(trans *tr, int tid)
{
	trans *ntr = GDKmalloc(sizeof(trans));

	if (ntr == NULL)
		return NULL;
	ntr->tid = tid;
	ntr->sz = TR_SIZE;
	ntr->nr = 0;
	ntr->changes = GDKmalloc(sizeof(logaction) * TR_SIZE);
	if (ntr->changes == NULL) {
		GDKfree(ntr);
		return NULL;
	}
	ntr->tr = tr;
	return ntr;
}

static trans *
tr_find(trans *tr, int tid)
/* finds the tid and reorders the chain list, puts trans with tid first */
{
	trans *t = tr, *p = NULL;

	while (t && t->tid != tid) {
		p = t;
		t = t->tr;
	}
	if (t == NULL)
		return NULL;	/* BAD missing transaction */
	if (t == tr)
		return tr;
	if (t->tr)		/* get this tid out of the list */
		p->tr = t->tr;
	t->tr = tr;		/* and move it to the front */
	return t;
}

static gdk_return
la_apply(logger *lg, logaction *c)
{
	gdk_return ret = GDK_FAIL;

	switch (c->type) {
	case LOG_INSERT:
	case LOG_UPDATE:
		ret = la_bat_updates(lg, c);
		break;
	case LOG_CREATE:
		ret = la_bat_create(lg, c);
		break;
	case LOG_USE:
		ret = la_bat_use(lg, c);
		break;
	case LOG_DESTROY:
		ret = la_bat_destroy(lg, c);
		break;
	case LOG_CLEAR:
		ret = la_bat_clear(lg, c);
		break;
	}
	lg->changes += (ret == GDK_SUCCEED);
	return ret;
}

static void
la_destroy(logaction *c)
{
	if (c->name)
		GDKfree(c->name);
	if (c->b)
		logbat_destroy(c->b);
}

static gdk_return
tr_grow(trans *tr)
{
	if (tr->nr == tr->sz) {
		logaction *changes;
		tr->sz <<= 1;
		changes = GDKrealloc(tr->changes, tr->sz * sizeof(logaction));
		if (changes == NULL)
			return GDK_FAIL;
		tr->changes = changes;
	}
	/* cleanup the next */
	tr->changes[tr->nr].name = NULL;
	tr->changes[tr->nr].b = NULL;
	return GDK_SUCCEED;
}

static trans *
tr_destroy(trans *tr)
{
	trans *r = tr->tr;

	GDKfree(tr->changes);
	GDKfree(tr);
	return r;
}

static trans *
tr_abort(logger *lg, trans *tr)
{
	int i;

	if (lg->debug & 1)
		fprintf(stderr, "#tr_abort\n");

	for (i = 0; i < tr->nr; i++)
		la_destroy(&tr->changes[i]);
	return tr_destroy(tr);
}

static trans *
tr_commit(logger *lg, trans *tr)
{
	int i;

	if (lg->debug & 1)
		fprintf(stderr, "#tr_commit\n");

	for (i = 0; i < tr->nr; i++) {
		if (la_apply(lg, &tr->changes[i]) != GDK_SUCCEED) {
			do {
				tr = tr_abort(lg, tr);
			} while (tr != NULL);
			return (trans *) -1;
		}
		la_destroy(&tr->changes[i]);
	}
	return tr_destroy(tr);
}

static gdk_return log_sequence_nrs(logger *lg);

#ifdef _MSC_VER
#define access(file, mode)	_access(file, mode)
#endif

/* Update the last transaction id written in the catalog file.
 * Only used by the shared logger. */
static gdk_return
logger_update_catalog_file(logger *lg, const char *dir, const char *filename, int role)
{
	FILE *fp;
	int bak_exists;
	int farmid = BBPselectfarm(role, 0, offheap);

	bak_exists = 0;
	/* check if an older file exists and move bak it up */
	if (access(filename, 0) != -1) {
		bak_exists = 1;
		if (GDKmove(farmid, dir, filename, NULL, dir, filename, "bak") != GDK_SUCCEED) {
			fprintf(stderr, "!ERROR: logger_update_catalog_file: rename %s to %s.bak in %s failed\n", filename, filename, dir);
			return GDK_FAIL;
		}
	}

	if ((fp = GDKfileopen(farmid, dir, filename, NULL, "w")) != NULL) {
		if (fprintf(fp, "%06d\n\n", lg->version) < 0 ||
		    fprintf(fp, LLFMT "\n", lg->id) < 0) {
			fprintf(stderr, "!ERROR: logger_update_catalog_file: write to %s failed\n", filename);
			fclose(fp);
			return GDK_FAIL;
		}

		if (fclose(fp) < 0) {
			fprintf(stderr, "!ERROR: logger_update_catalog_file: write/flush to %s failed\n", filename);
			return GDK_FAIL;
		}

		/* cleanup the bak file, if it exists*/
		if (bak_exists) {
			GDKunlink(farmid, dir, filename, "bak");
		}
	} else {
		fprintf(stderr, "!ERROR: logger_update_catalog_file: could not create %s\n", filename);
		GDKerror("logger_update_catalog_file: could not open %s\n", filename);
		return GDK_FAIL;
	}
	return GDK_SUCCEED;
}

static gdk_return
logger_open(logger *lg)
{
	char id[BUFSIZ];
	char *filename;
	bat bid;

	snprintf(id, sizeof(id), LLFMT, lg->id);
	filename = GDKfilepath(BBPselectfarm(lg->dbfarm_role, 0, offheap), lg->dir, LOGFILE, id);

	lg->log = open_wstream(filename);
	lg->end = 0;

	if (lg->log == NULL || mnstr_errnr(lg->log) || log_sequence_nrs(lg) != GDK_SUCCEED) {
		fprintf(stderr, "!ERROR: logger_open: creating %s failed\n", filename);
		GDKfree(filename);
		return GDK_FAIL;
	}
	GDKfree(filename);
	if ((bid = logger_find_bat(lg, "seqs_id")) != 0) {
		int dbg = GDKdebug;
		BAT *b;
		GDKdebug &= ~CHECKMASK;
		if ((b = BATdescriptor(bid)) == NULL ||
		    BATmode(b, TRANSIENT) != GDK_SUCCEED ||
		    logger_del_bat(lg, bid) != GDK_SUCCEED) {
			logbat_destroy(b);
			return GDK_FAIL;
		}
		logbat_destroy(b);
		b = NULL;
		if ((bid = logger_find_bat(lg, "seqs_val")) == 0 ||
		    (b = BATdescriptor(bid)) == NULL ||
		    BATmode(b, TRANSIENT) != GDK_SUCCEED ||
		    logger_del_bat(lg, bid) != GDK_SUCCEED) {
			logbat_destroy(b);
			return GDK_FAIL;
		}
		logbat_destroy(b);
		GDKdebug = dbg;
		if (bm_commit(lg) != GDK_SUCCEED)
			return GDK_FAIL;
	}
	return GDK_SUCCEED;
}

static void
logger_close(logger *lg)
{
	close_stream(lg->log);
	lg->log = NULL;
}

static gdk_return
logger_readlog(logger *lg, char *filename)
{
	trans *tr = NULL;
	logformat l;
	log_return err = LOG_OK;
	time_t t0, t1;
	struct stat sb;
	int dbg = GDKdebug;
	int fd;

	GDKdebug &= ~(CHECKMASK|PROPMASK);

	if (lg->debug & 1) {
		fprintf(stderr, "#logger_readlog opening %s\n", filename);
	}

	lg->log = open_rstream(filename);

	/* if the file doesn't exist, there is nothing to be read back */
	if (lg->log == NULL || mnstr_errnr(lg->log)) {
		mnstr_destroy(lg->log);
		lg->log = NULL;
		GDKdebug = dbg;
		return GDK_SUCCEED;
	}
	if ((fd = getFileNo(lg->log)) < 0 || fstat(fd, &sb) < 0) {
		fprintf(stderr, "!ERROR: logger_readlog: fstat on opened file %s failed\n", filename);
		mnstr_destroy(lg->log);
		lg->log = NULL;
		GDKdebug = dbg;
		/* If the file could be opened, but fstat fails,
		 * something weird is going on */
		return GDK_FAIL;
	}
	t0 = time(NULL);
	if (lg->debug & 1) {
		printf("# Start reading the write-ahead log '%s'\n", filename);
		fflush(stdout);
	}
	while (err == LOG_OK && log_read_format(lg, &l)) {
		char *name = NULL;

		t1 = time(NULL);
		if (t1 - t0 > 10) {
			lng fpos;
			t0 = t1;
			/* not more than once every 10 seconds */
			fpos = (lng) getfilepos(getFile(lg->log));
			if (fpos >= 0) {
				printf("# still reading write-ahead log \"%s\" (%d%% done)\n", filename, (int) ((fpos * 100 + 50) / sb.st_size));
				fflush(stdout);
			}
		}
		if (l.flag != LOG_START && l.flag != LOG_END && l.flag != LOG_SEQ) {
			name = log_read_string(lg);

			if (name == NULL) {
				err = LOG_EOF;
				break;
			}
			if (name == (char *) -1) {
				err = LOG_ERR;
				break;
			}
		}
		if (lg->debug & 1) {
			fprintf(stderr, "#logger_readlog: ");
			if (l.flag > 0 &&
			    l.flag < (char) (sizeof(log_commands) / sizeof(log_commands[0])))
				fprintf(stderr, "%s", log_commands[(int) l.flag]);
			else
				fprintf(stderr, "%d", l.flag);
			fprintf(stderr, " %d " LLFMT, l.tid, l.nr);
			if (name)
				fprintf(stderr, " %s", name);
			fprintf(stderr, "\n");
		}
		/* find proper transaction record */
		if (l.flag != LOG_START)
			tr = tr_find(tr, l.tid);
		/* the functions we call here can succeed (LOG_OK),
		 * but they can also fail for two different reasons:
		 * they can run out of input (LOG_EOF -- this is not
		 * serious, we just abort the remaining transactions),
		 * or some malloc or BAT update fails (LOG_ERR -- this
		 * is serious, we must abort the complete process);
		 * the latter failure causes the current function to
		 * return GDK_FAIL */
		switch (l.flag) {
		case LOG_START:
			assert(l.nr <= (lng) INT_MAX);
			if (l.nr > lg->tid)
				lg->tid = (int)l.nr;
			if ((tr = tr_create(tr, (int)l.nr)) == NULL) {
				err = LOG_ERR;
				break;
			}
			if (lg->debug & 1)
				fprintf(stderr, "#logger tstart %d\n", tr->tid);
			break;
		case LOG_END:
			if (tr == NULL)
				err = LOG_EOF;
			else if (l.tid != l.nr)	/* abort record */
				tr = tr_abort(lg, tr);
			else
				tr = tr_commit(lg, tr);
			break;
		case LOG_SEQ:
			err = log_read_seq(lg, &l);
			break;
		case LOG_INSERT:
		case LOG_UPDATE:
			if (name == NULL || tr == NULL)
				err = LOG_EOF;
			else
				err = log_read_updates(lg, tr, &l, name);
			break;
		case LOG_CREATE:
			if (name == NULL || tr == NULL)
				err = LOG_EOF;
			else
				err = log_read_create(lg, tr, name);
			break;
		case LOG_USE:
			if (name == NULL || tr == NULL)
				err = LOG_EOF;
			else
				err = log_read_use(lg, tr, &l, name);
			break;
		case LOG_DESTROY:
			if (name == NULL || tr == NULL)
				err = LOG_EOF;
			else
				err = log_read_destroy(lg, tr, name);
			break;
		case LOG_CLEAR:
			if (name == NULL || tr == NULL)
				err = LOG_EOF;
			else
				err = log_read_clear(lg, tr, name);
			break;
		default:
			err = LOG_ERR;
		}
		if (name)
			GDKfree(name);
		if (tr == (trans *) -1) {
			err = LOG_ERR;
			tr = NULL;
			break;
		}
	}
	logger_close(lg);

	/* remaining transactions are not committed, ie abort */
	while (tr)
		tr = tr_abort(lg, tr);
	t0 = time(NULL);
	if (lg->debug & 1) {
		printf("# Finished reading the write-ahead log '%s'\n", filename);
		fflush(stdout);
	}
	GDKdebug = dbg;
	/* we cannot distinguish errors from incomplete transactions
	 * (even if we would log aborts in the logs). So we simply
	 * abort and move to the next log file */
	return err == LOG_ERR ? GDK_FAIL : GDK_SUCCEED;
}

/*
 * The log files are incrementally numbered, starting from 2. They are
 * processed in the same sequence.
 */
static gdk_return
logger_readlogs(logger *lg, FILE *fp, char *filename)
{
	gdk_return res = GDK_SUCCEED;
	char id[BUFSIZ];

	if (lg->debug & 1) {
		fprintf(stderr, "#logger_readlogs logger id is " LLFMT "\n", lg->id);
	}

	while (fgets(id, sizeof(id), fp) != NULL) {
		char log_filename[FILENAME_MAX];
		lng lid = strtoll(id, NULL, 10);

		if (lg->debug & 1) {
			fprintf(stderr, "#logger_readlogs last logger id written in %s is " LLFMT "\n", filename, lid);
		}

		if (!lg->shared && lid >= lg->id) {
			lg->id = lid;
			snprintf(log_filename, sizeof(log_filename), "%s." LLFMT, filename, lg->id);
			res = logger_readlog(lg, log_filename);
		} else {
			while (lid >= lg->id && res == GDK_SUCCEED) {
				snprintf(log_filename, sizeof(log_filename), "%s." LLFMT, filename, lg->id);
				if ((res = logger_readlog(lg, log_filename)) != GDK_SUCCEED && lg->shared && lg->id > 1) {
					/* The only special case is if
					 * the file is missing
					 * altogether and the logger
					 * is a shared one, then we
					 * have missing transactions
					 * and we should abort.  Yeah,
					 * and we also ignore the 1st
					 * files it most likely never
					 * exists. */
					fprintf(stderr, "#logger_readlogs missing shared logger file %s. Aborting\n", log_filename);
				}
				/* Increment the id only at the end,
				 * since we want to re-read the last
				 * file.  That is because last time we
				 * read it, it was empty, since the
				 * logger creates empty files and
				 * fills them in later. */
				lg->id++;
			}
			if (lid < lg->id) {
				lg->id = lid;
			}
			if (lg->shared) {
				/* if this is a shared logger, write the id in
				 * the shared file */
				logger_update_catalog_file(lg, lg->local_dir, LOGFILE_SHARED, lg->local_dbfarm_role);
			}
		}
	}
	return res;
}

static gdk_return
logger_commit(logger *lg)
{
	int id = LOG_SID;
	BUN p;

	if (lg->debug & 1)
		fprintf(stderr, "#logger_commit\n");

	p = log_find(lg->seqs_id, lg->dseqs, id);
	if (p >= lg->seqs_val->batInserted) {
		if (BUNinplace(lg->seqs_val, p, &lg->id, false) != GDK_SUCCEED)
			return GDK_FAIL;
	} else {
		oid pos = p;
		if (BUNappend(lg->dseqs, &pos, false) != GDK_SUCCEED ||
		    BUNappend(lg->seqs_id, &id, false) != GDK_SUCCEED ||
		    BUNappend(lg->seqs_val, &lg->id, false) != GDK_SUCCEED)
			return GDK_FAIL;
	}

	/* cleanup old snapshots */
	if (BATcount(lg->snapshots_bid)) {
		if (BATclear(lg->snapshots_bid, true) != GDK_SUCCEED ||
		    BATclear(lg->snapshots_tid, true) != GDK_SUCCEED ||
		    BATclear(lg->dsnapshots, true) != GDK_SUCCEED)
			return GDK_FAIL;
		BATcommit(lg->snapshots_bid);
		BATcommit(lg->snapshots_tid);
		BATcommit(lg->dsnapshots);
	}
	return bm_commit(lg);
}

static gdk_return
check_version(logger *lg, FILE *fp)
{
	int version = 0;

	if (fscanf(fp, "%6d", &version) != 1) {
		GDKerror("Could not read the version number from the file '%s/log'.\n",
			 lg->dir);

		return GDK_FAIL;
	}
	if (version != lg->version) {
		if (lg->prefuncp == NULL ||
		    (*lg->prefuncp)(version, lg->version) != GDK_SUCCEED) {
			GDKerror("Incompatible database version %06d, "
				 "this server supports version %06d.\n%s",
				 version, lg->version,
				 version < lg->version ? "Maybe you need to upgrade to an intermediate release first.\n" : "");
			return GDK_FAIL;
		}
	} else {
		lg->postfuncp = NULL;	 /* don't call */
	}
	if (fgetc(fp) != '\n' ||	 /* skip \n */
	    fgetc(fp) != '\n') {	 /* skip \n */
		GDKerror("Badly formatted log file");
		return GDK_FAIL;
	}
	return GDK_SUCCEED;
}

static BAT *
bm_tids(BAT *b, BAT *d)
{
	BUN sz = BATcount(b);
	BAT *tids = BATdense(0, 0, sz);

	if (tids == NULL)
		return NULL;

	if (BATcount(d)) {
		BAT *diff = BATdiff(tids, d, NULL, NULL, false, BUN_NONE);
		logbat_destroy(tids);
		tids = diff;
	}
	return tids;
}


static gdk_return
logger_switch_bat(BAT *old, BAT *new, const char *fn, const char *name)
{
	char bak[BUFSIZ];

	if (BATmode(old, TRANSIENT) != GDK_SUCCEED) {
		GDKerror("Logger_new: cannot convert old %s to transient", name);
		return GDK_FAIL;
	}
	snprintf(bak, sizeof(bak), "tmp_%o", (unsigned) old->batCacheid);
	if (BBPrename(old->batCacheid, bak) != 0) {
		return GDK_FAIL;
	}
	snprintf(bak, sizeof(bak), "%s_%s", fn, name);
	if (BBPrename(new->batCacheid, bak) != 0) {
		return GDK_FAIL;
	}
	return GDK_SUCCEED;
}

static gdk_return
bm_subcommit(logger *lg, BAT *list_bid, BAT *list_nme, BAT *catalog_bid, BAT *catalog_nme, BAT *dcatalog, BAT *extra, int debug)
{
	BUN p, q;
	BUN nn = 6 + BATcount(list_bid) + (extra ? BATcount(extra) : 0);
	bat *n = GDKmalloc(sizeof(bat) * nn);
	int i = 0;
	BATiter iter = (list_nme)?bat_iterator(list_nme):bat_iterator(list_bid);
	gdk_return res;

	if (n == NULL)
		return GDK_FAIL;

	n[i++] = 0;		/* n[0] is not used */
	BATloop(list_bid, p, q) {
		bat col = *(log_bid *) Tloc(list_bid, p);
		oid pos = p;

		if (list_bid == catalog_bid && BUNfnd(dcatalog, &pos) != BUN_NONE)
			continue;
		if (debug & 1)
			fprintf(stderr, "#commit new %s (%d) %s\n",
				BBPname(col), col,
				(list_bid == catalog_bid) ? BUNtail(iter, p) : "snapshot");
		assert(col);
		n[i++] = col;
	}
	if (extra) {
		iter = bat_iterator(extra);
		BATloop(extra, p, q) {
			str name = (str) BUNtvar(iter, p);

			if (debug & 1)
				fprintf(stderr, "#commit extra %s %s\n",
					name,
					(list_bid == catalog_bid) ? BUNtvar(iter, p) : "snapshot");
			assert(BBPindex(name));
			n[i++] = BBPindex(name);
		}
	}
	/* now commit catalog, so it's also up to date on disk */
	n[i++] = catalog_bid->batCacheid;
	n[i++] = catalog_nme->batCacheid;
	n[i++] = dcatalog->batCacheid;
	if (BATcount(dcatalog) > (BATcount(catalog_nme)/2) &&
	    catalog_bid == list_bid &&
	    catalog_nme == list_nme &&
	    lg->catalog_bid == catalog_bid) {
		BAT *bids, *nmes, *tids;

		tids = bm_tids(catalog_bid, dcatalog);
		if (tids == NULL) {
			GDKfree(n);
			return GDK_FAIL;
		}
		bids = logbat_new(TYPE_int, BATcount(tids), PERSISTENT);
		nmes = logbat_new(TYPE_str, BATcount(tids), PERSISTENT);

		if (bids == NULL || nmes == NULL) {
			logbat_destroy(tids);
			logbat_destroy(bids);
			logbat_destroy(nmes);
			GDKfree(n);
			return GDK_FAIL;
		}

		if (BATappend(bids, catalog_bid, tids, true) != GDK_SUCCEED ||
		    BATappend(nmes, catalog_nme, tids, true) != GDK_SUCCEED) {
			logbat_destroy(tids);
			logbat_destroy(bids);
			logbat_destroy(nmes);
			GDKfree(n);
			return GDK_FAIL;
		}
		logbat_destroy(tids);
		BATclear(dcatalog, true);

		if (logger_switch_bat(catalog_bid, bids, lg->fn, "catalog_bid") != GDK_SUCCEED ||
		    logger_switch_bat(catalog_nme, nmes, lg->fn, "catalog_nme") != GDK_SUCCEED) {
			logbat_destroy(bids);
			logbat_destroy(nmes);
			GDKfree(n);
			return GDK_FAIL;
		}
		n[i++] = bids->batCacheid;
		n[i++] = nmes->batCacheid;

		logbat_destroy(lg->catalog_bid);
		logbat_destroy(lg->catalog_nme);

		lg->catalog_bid = catalog_bid = bids;
		lg->catalog_nme = catalog_nme = nmes;
	}
	assert((BUN) i <= nn);
	BATcommit(catalog_bid);
	BATcommit(catalog_nme);
	BATcommit(dcatalog);
	res = TMsubcommit_list(n, i);
	GDKfree(n);
	if (res != GDK_SUCCEED)
		fprintf(stderr, "!ERROR: bm_subcommit: commit failed\n");
	return res;
}

/* Set the logdir path, add a dbfarm if needed.
 * Returns the role of the dbfarm containing the logdir.
 */
static int
logger_set_logdir_path(char *filename, const char *fn,
		       const char *logdir, int shared)
{
	int role = PERSISTENT; /* default role is persistent, i.e. the default dbfarm */

	if (MT_path_absolute(logdir)) {
		char logdir_parent_path[FILENAME_MAX-3] = "";
		char logdir_name[FILENAME_MAX-3] = "";

		/* split the logdir string into absolute parent dir
		 * path and (relative) log dir name */
		if (GDKextractParentAndLastDirFromPath(logdir, logdir_parent_path, logdir_name) == GDK_SUCCEED) {
			/* set the new relative logdir location
			 * including the logger function name
			 * subdir */
			snprintf(filename, FILENAME_MAX, "%s%c%s%c",
				 logdir_name, DIR_SEP, fn, DIR_SEP);

			/* add a new dbfarm for the logger directory
			 * using the parent dir path, assuming it is
			 * set, s.t. the logs are stored in a location
			 * other than the default dbfarm, or at least
			 * it appears so to (multi)dbfarm aware
			 * functions */
			role = shared ? SHARED_LOG_DIR : LOG_DIR;
			BBPaddfarm(logdir_parent_path, 1 << role);
		} else {
			fprintf(stderr, "logger_set_logdir_path: logdir path is not correct (%s).\n"
				"Make sure you specify a valid absolute or relative path.\n", logdir);
			return -1;
		}
	} else {
		/* just concat the logdir and fn with appropriate separators */
		snprintf(filename, FILENAME_MAX, "%s%c%s%c",
			 logdir, DIR_SEP, fn, DIR_SEP);
	}

	return role;
}

/* Load data from the logger logdir
 * Initialize new directories and catalog files if none are present,
 * unless running in read-only mode
 * Load data and persist it in the BATs */
static gdk_return
logger_load(int debug, const char *fn, char filename[FILENAME_MAX], logger *lg)
{
	int id = LOG_SID;
	FILE *fp = NULL;
	char bak[FILENAME_MAX];
	str filenamestr = NULL;
	log_bid snapshots_bid = 0;
	bat catalog_bid, catalog_nme, dcatalog, bid;
	int farmid = BBPselectfarm(lg->dbfarm_role, 0, offheap);

	if(!(filenamestr = GDKfilepath(farmid, lg->dir, LOGFILE, NULL)))
		goto error;
	snprintf(filename, FILENAME_MAX, "%s", filenamestr);
	snprintf(bak, sizeof(bak), "%s.bak", filename);
	GDKfree(filenamestr);

	lg->catalog_bid = NULL;
	lg->catalog_nme = NULL;
	lg->dcatalog = NULL;
	lg->snapshots_bid = NULL;
	lg->snapshots_tid = NULL;
	lg->dsnapshots = NULL;
	lg->freed = NULL;
	lg->seqs_id = NULL;
	lg->seqs_val = NULL;
	lg->dseqs = NULL;

	/* try to open logfile backup, or failing that, the file
	 * itself. we need to know whether this file exists when
	 * checking the database consistency later on */
	if ((fp = fopen(bak, "r")) != NULL) {
		fclose(fp);
		fp = NULL;
		if (GDKunlink(farmid, lg->dir, LOGFILE, NULL) != GDK_SUCCEED ||
		    GDKmove(farmid, lg->dir, LOGFILE, "bak", lg->dir, LOGFILE, NULL) != GDK_SUCCEED)
			goto error;
	}
	fp = fopen(filename, "r");

	snprintf(bak, sizeof(bak), "%s_catalog", fn);
	bid = BBPindex(bak);

	snprintf(bak, sizeof(bak), "%s_catalog_bid", fn);
	catalog_bid = BBPindex(bak);

	if (bid != 0 && catalog_bid == 0) {
		GDKerror("logger_load: ancient database, please upgrade "
			 "first to Jan2014 (11.17.X) release");
		goto error;
	}

	/* this is intentional - even if catalog_bid is 0, but the logger is shared,
	 * force it to find the persistent catalog */
	if (catalog_bid == 0 &&	!lg->shared) {
		/* catalog does not exist, so the log file also
		 * shouldn't exist */
		if (fp != NULL) {
			GDKerror("logger_load: there is no logger catalog, "
				 "but there is a log file.\n"
				 "Are you sure you are using the correct "
				 "combination of database\n"
				 "(--dbpath) and log directory "
				 "(--set %s_logdir)?\n", fn);
			goto error;
		}

		lg->catalog_bid = logbat_new(TYPE_int, BATSIZE, PERSISTENT);
		lg->catalog_nme = logbat_new(TYPE_str, BATSIZE, PERSISTENT);
		lg->dcatalog = logbat_new(TYPE_oid, BATSIZE, PERSISTENT);
		if (lg->catalog_bid == NULL || lg->catalog_nme == NULL || lg->dcatalog == NULL) {
			GDKerror("logger_load: cannot create catalog bats");
			goto error;
		}
		if (debug & 1)
			fprintf(stderr, "#create %s catalog\n", fn);

		/* give the catalog bats names so we can find them
		 * next time */
		snprintf(bak, sizeof(bak), "%s_catalog_bid", fn);
		if (BBPrename(lg->catalog_bid->batCacheid, bak) < 0) {
			goto error;
		}

		snprintf(bak, sizeof(bak), "%s_catalog_nme", fn);
		if (BBPrename(lg->catalog_nme->batCacheid, bak) < 0) {
			goto error;
		}

		snprintf(bak, sizeof(bak), "%s_dcatalog", fn);
		if (BBPrename(lg->dcatalog->batCacheid, bak) < 0) {
			goto error;
		}

		if (GDKcreatedir(filename) != GDK_SUCCEED) {
			GDKerror("logger_load: cannot create directory for log file %s\n",
				 filename);
			goto error;
		}
		if ((fp = fopen(filename, "w")) == NULL) {
			GDKerror("logger_load: cannot create log file %s\n",
				 filename);
			goto error;
		}
		lg->id ++;
		if (fprintf(fp, "%06d\n\n" LLFMT "\n", lg->version, lg->id) < 0) {
			fclose(fp);
			remove(filename);
			GDKerror("logger_load: writing log file %s failed",
				 filename);
			goto error;
		}
		if (fflush(fp) < 0 ||
		    (!(GDKdebug & NOSYNCMASK)
#if defined(_MSC_VER)
		     && _commit(_fileno(fp)) < 0
#elif defined(HAVE_FDATASYNC)
		     && fdatasync(fileno(fp)) < 0
#elif defined(HAVE_FSYNC)
		     && fsync(fileno(fp)) < 0
#endif
			    ) ||
		    fclose(fp) < 0) {
			remove(filename);
			GDKerror("logger_load: closing log file %s failed",
				 filename);
			goto error;
		}
		fp = NULL;

		BBPretain(lg->catalog_bid->batCacheid);
		BBPretain(lg->catalog_nme->batCacheid);
		BBPretain(lg->dcatalog->batCacheid);

		if (bm_subcommit(lg, lg->catalog_bid, lg->catalog_nme, lg->catalog_bid, lg->catalog_nme, lg->dcatalog, NULL, lg->debug) != GDK_SUCCEED) {
			/* cannot commit catalog, so remove log */
			remove(filename);
			BBPrelease(lg->catalog_bid->batCacheid);
			BBPrelease(lg->catalog_nme->batCacheid);
			BBPrelease(lg->dcatalog->batCacheid);
			goto error;
		}
	} else {
		/* find the persistent catalog. As non persistent bats
		 * require a logical reference we also add a logical
		 * reference for the persistent bats */
		BUN p, q;
		BAT *b = BATdescriptor(catalog_bid), *n, *d;

		if (b == NULL) {
			GDKerror("logger_load: inconsistent database, catalog does not exist");
			goto error;
		}

		snprintf(bak, sizeof(bak), "%s_catalog_nme", fn);
		catalog_nme = BBPindex(bak);
		n = BATdescriptor(catalog_nme);
		if (n == NULL) {
			BBPunfix(b->batCacheid);
			GDKerror("logger_load: inconsistent database, catalog_nme does not exist");
			goto error;
		}

		snprintf(bak, sizeof(bak), "%s_dcatalog", fn);
		dcatalog = BBPindex(bak);
		d = BATdescriptor(dcatalog);
		if (d == NULL) {
			/* older database: create dcatalog and convert
			 * catalog_bid and catalog_nme to
			 * dense-headed */
			d = logbat_new(TYPE_oid, BATSIZE, PERSISTENT);
			if (d == NULL) {
				GDKerror("Logger_new: cannot create dcatalog bat");
				BBPunfix(b->batCacheid);
				BBPunfix(n->batCacheid);
				goto error;
			}
			if (BBPrename(d->batCacheid, bak) < 0) {
				BBPunfix(b->batCacheid);
				BBPunfix(n->batCacheid);
				goto error;
			}
		}

		/* the catalog exists, and so should the log file */
		if (fp == NULL) {
			GDKerror("logger_load: there is a logger catalog, but no log file.\n"
				 "Are you sure you are using the correct combination of database\n"
				 "(--dbpath) and log directory (--set %s_logdir)?\n"
				 "If you have done a recent update of the server, it may be that your\n"
				 "logs are in an old location.  You should then either use\n"
				 "--set %s_logdir=<path to old log directory> or move the old log\n"
				 "directory to the new location (%s).\n",
				 fn, fn, lg->dir);
			BBPunfix(b->batCacheid);
			BBPunfix(n->batCacheid);
			BBPunfix(d->batCacheid);
			goto error;
		}
		lg->catalog_bid = b;
		lg->catalog_nme = n;
		lg->dcatalog = d;
		BBPretain(lg->catalog_bid->batCacheid);
		BBPretain(lg->catalog_nme->batCacheid);
		BBPretain(lg->dcatalog->batCacheid);
		BATloop(b, p, q) {
			bat bid = *(log_bid *) Tloc(b, p);
			oid pos = p;

			if (BUNfnd(lg->dcatalog, &pos) == BUN_NONE &&
			    BBPretain(bid) == 0 &&
			    BUNappend(lg->dcatalog, &pos, false) != GDK_SUCCEED)
				goto error;
		}
	}
	lg->freed = logbat_new(TYPE_int, 1, TRANSIENT);
	if (lg->freed == NULL) {
		GDKerror("Logger_new: failed to create freed bat");
		goto error;
	}
	snprintf(bak, sizeof(bak), "%s_freed", fn);
	/* do not rename it if this is a shared logger */
	if (!lg->shared && BBPrename(lg->freed->batCacheid, bak) < 0) {
		goto error;
	}
	snapshots_bid = logger_find_bat(lg, "snapshots_bid");
	if (snapshots_bid == 0) {
		lg->seqs_id = logbat_new(TYPE_int, 1, TRANSIENT);
		lg->seqs_val = logbat_new(TYPE_lng, 1, TRANSIENT);
		lg->dseqs = logbat_new(TYPE_oid, 1, TRANSIENT);
		if (lg->seqs_id == NULL ||
		    lg->seqs_val == NULL ||
		    lg->dseqs == NULL) {
			GDKerror("Logger_new: cannot create seqs bats");
			goto error;
		}

		/* create LOG_SID sequence number */
		if (BUNappend(lg->seqs_id, &id, false) != GDK_SUCCEED ||
		    BUNappend(lg->seqs_val, &lg->id, false) != GDK_SUCCEED) {
			GDKerror("logger_load: failed to append value to "
				 "sequences bat");
			goto error;
		}

		lg->snapshots_bid = logbat_new(TYPE_int, 1, PERSISTENT);
		lg->snapshots_tid = logbat_new(TYPE_int, 1, PERSISTENT);
		lg->dsnapshots = logbat_new(TYPE_oid, 1, PERSISTENT);
		if (lg->snapshots_bid == NULL ||
		    lg->snapshots_tid == NULL ||
		    lg->dsnapshots == NULL) {
			GDKerror("Logger_new: failed to create snapshots "
				     "bats");
			goto error;
		}

		snprintf(bak, sizeof(bak), "%s_snapshots_bid", fn);
		if (BBPrename(lg->snapshots_bid->batCacheid, bak) < 0) {
			goto error;
		}
		if (logger_add_bat(lg, lg->snapshots_bid, "snapshots_bid") != GDK_SUCCEED) {
			GDKerror("logger_load: logger_add_bat for "
				 "%s failed", bak);
			goto error;
		}

		snprintf(bak, sizeof(bak), "%s_snapshots_tid", fn);
		if (BBPrename(lg->snapshots_tid->batCacheid, bak) < 0) {
			goto error;
		}
		if (logger_add_bat(lg, lg->snapshots_tid, "snapshots_tid") != GDK_SUCCEED) {
			GDKerror("logger_load: logger_add_bat for "
				 "%s failed", bak);
			goto error;
		}

		snprintf(bak, sizeof(bak), "%s_dsnapshots", fn);
		if (BBPrename(lg->dsnapshots->batCacheid, bak) < 0) {
			goto error;
		}
		if (logger_add_bat(lg, lg->dsnapshots, "dsnapshots") != GDK_SUCCEED) {
			GDKerror("logger_load: logger_add_bat for "
				 "%s failed", bak);
			goto error;
		}

		if (bm_subcommit(lg, lg->catalog_bid, lg->catalog_nme, lg->catalog_bid, lg->catalog_nme, lg->dcatalog, NULL, lg->debug) != GDK_SUCCEED) {
			GDKerror("Logger_new: commit failed");
			goto error;
		}
	} else {
		bat seqs_id = logger_find_bat(lg, "seqs_id");
		bat seqs_val = logger_find_bat(lg, "seqs_val");
		bat snapshots_tid = logger_find_bat(lg, "snapshots_tid");
		bat dsnapshots = logger_find_bat(lg, "dsnapshots");
		int needcommit = 0;
		int dbg = GDKdebug;

		if (seqs_id) {
			BAT *o_id;
			BAT *o_val;

			/* don't check these bats since they will be fixed */
			GDKdebug &= ~CHECKMASK;
			o_id = BATdescriptor(seqs_id);
			o_val = BATdescriptor(seqs_val);
			GDKdebug = dbg;

			if (o_id == NULL || o_val == NULL) {
				GDKerror("Logger_new: inconsistent database: cannot find seqs bats");
				logbat_destroy(o_id);
				logbat_destroy(o_val);
				goto error;
			}

			lg->seqs_id = COLcopy(o_id, TYPE_int, true, TRANSIENT);
			lg->seqs_val = COLcopy(o_val, TYPE_lng, true, TRANSIENT);
			BBPunfix(o_id->batCacheid);
			BBPunfix(o_val->batCacheid);
			BAThseqbase(lg->seqs_id, 0);
			BAThseqbase(lg->seqs_val, 0);
		} else {
			lg->seqs_id = logbat_new(TYPE_int, 1, TRANSIENT);
			lg->seqs_val = logbat_new(TYPE_lng, 1, TRANSIENT);
		}
		lg->dseqs = logbat_new(TYPE_oid, 1, TRANSIENT);
		if (lg->seqs_id == NULL ||
		    lg->seqs_val == NULL ||
		    lg->dseqs == NULL) {
			GDKerror("Logger_new: cannot create seqs bats");
			goto error;
		}

		GDKdebug &= ~CHECKMASK;
		lg->snapshots_bid = BATdescriptor(snapshots_bid);
		if (lg->snapshots_bid == NULL) {
			GDKerror("logger_load: inconsistent database, snapshots_bid does not exist");
			goto error;
		}
		lg->snapshots_tid = BATdescriptor(snapshots_tid);
		if (lg->snapshots_tid == NULL) {
			GDKerror("logger_load: inconsistent database, snapshots_tid does not exist");
			goto error;
		}
		GDKdebug = dbg;

		if (dsnapshots) {
			lg->dsnapshots = BATdescriptor(dsnapshots);
			if (lg->dsnapshots == NULL) {
				GDKerror("Logger_new: inconsistent database, snapshots_tid does not exist");
				goto error;
			}
		} else {
			lg->dsnapshots = logbat_new(TYPE_oid, 1, PERSISTENT);
			if (lg->dsnapshots == NULL) {
				GDKerror("Logger_new: cannot create dsnapshot bat");
				goto error;
			}
			snprintf(bak, sizeof(bak), "%s_dsnapshots", fn);
			if (BBPrename(lg->dsnapshots->batCacheid, bak) < 0) {
				goto error;
			}
			if (logger_add_bat(lg, lg->dsnapshots, "dsnapshots") != GDK_SUCCEED) {
				GDKerror("logger_load: logger_add_bat for "
					 "%s failed", bak);
				goto error;
			}
			needcommit = 1;
		}
		GDKdebug &= ~CHECKMASK;
		if (needcommit && bm_commit(lg) != GDK_SUCCEED) {
			GDKerror("Logger_new: commit failed");
			goto error;
		}
		GDKdebug = dbg;
	}

	if (fp != NULL) {
#ifdef GDKLIBRARY_NIL_NAN
		char cvfile[FILENAME_MAX];
#endif

		if (check_version(lg, fp) != GDK_SUCCEED) {
			goto error;
		}

#ifdef GDKLIBRARY_NIL_NAN
		/* When a file *_nil-nan-convert exists in the
		 * database, it was left there by the BBP
		 * initialization code when it did a conversion of old
		 * style NILs to NaNs.  If the file exists, we first
		 * create a file called convert-nil-nan in the log
		 * directory and we write the current log ID into that
		 * file.  After this file is created, we delete the
		 * *_nil-nan-convert file in the database.  We then
		 * know that while reading the logs, we have to
		 * convert old style NILs to NaNs (this is indicated
		 * by setting the convert_nil_nan flag).  When we're
		 * done reading the logs, we remove the file and
		 * reset the flag.  If we get interrupted before we
		 * have written this file, the file in the database
		 * will still exist, so the next time we're started,
		 * BBPinit will not convert NILs (that was done before
		 * we got interrupted), but we will still know to
		 * convert the NILs ourselves.  If we get interrupted
		 * after we have deleted the file from the database,
		 * we check whether the file convert-nil-nan exists
		 * and if it contains the expected ID.  If it does, we
		 * again know that we have to convert.  If the ID is
		 * not what we expect, the conversion was apparently
		 * done already, and so we can delete the file. */

		/* Do not do conversion if logger is shared/read-only */
		if (!lg->shared) {
			FILE *fp1;
			fpos_t off;
			int curid;

			snprintf(cvfile, sizeof(cvfile), "%sconvert-nil-nan",
				 lg->dir);
			snprintf(bak, sizeof(bak), "%s_nil-nan-convert", fn);
			/* read the current log id without disturbing
			 * the file pointer */
			if (fgetpos(fp, &off) != 0)
				goto error; /* should never happen */
			if (fscanf(fp, "%d", &curid) != 1)
				curid = -1; /* shouldn't happen? */
			if (fsetpos(fp, &off) != 0)
				goto error; /* should never happen */

			if ((fp1 = GDKfileopen(0, NULL, bak, NULL, "r")) != NULL) {
				/* file indicating that we need to do
				 * a NIL to NaN conversion exists;
				 * record the fact in case we get
				 * interrupted, and set the flag so
				 * that we actually do what's asked */
				fclose(fp1);
				/* first create a versioned file using
				 * the current log id */
				if ((fp1 = GDKfileopen(farmid, NULL, cvfile, NULL, "w")) == NULL ||
				    fprintf(fp1, "%d\n", curid) < 2 ||
				    fflush(fp1) != 0 || /* make sure it's save on disk */
#if defined(_MSC_VER)
				    _commit(_fileno(fp1)) < 0 ||
#elif defined(HAVE_FDATASYNC)
				    fdatasync(fileno(fp1)) < 0 ||
#elif defined(HAVE_FSYNC)
				    fsync(fileno(fp1)) < 0 ||
#endif
				    fclose(fp1) != 0) {
					GDKerror("logger_load: failed to write %s\n", cvfile);
					goto error;
				}
				/* then remove the unversioned file
				 * that gdk_bbp created (in this
				 * order!) */
				if (GDKunlink(0, NULL, bak, NULL) != GDK_SUCCEED) {
					GDKerror("logger_load: failed to unlink %s\n", bak);
					goto error;
				}
				/* set the flag that we need to convert */
				lg->convert_nil_nan = 1;
			} else if ((fp1 = GDKfileopen(farmid, NULL, cvfile, NULL, "r")) != NULL) {
				/* the versioned conversion file
				 * exists: check version */
				int newid;

				if (fscanf(fp1, "%d", &newid) == 1 &&
				    newid == curid) {
					/* versions match, we need to
					 * convert */
					lg->convert_nil_nan = 1;
				}
				fclose(fp1);
				if (!lg->convert_nil_nan) {
					/* no conversion, so we can
					 * remove the versioned
					 * file */
					GDKunlink(0, NULL, cvfile, NULL);
				}
			}
		}
#endif
		if (logger_readlogs(lg, fp, filename) != GDK_SUCCEED) {
			goto error;
		}
		fclose(fp);
		fp = NULL;
#ifdef GDKLIBRARY_NIL_NAN
		if (lg->convert_nil_nan && !lg->shared) {
			/* we converted, remove versioned file and
			 * reset conversion flag */
			GDKunlink(0, NULL, cvfile, NULL);
			lg->convert_nil_nan = 0;
		}
#endif
		if (lg->postfuncp && (*lg->postfuncp)(lg) != GDK_SUCCEED)
			goto error;

		/* done reading the log, revert to "normal" behavior */
		geomisoldversion = 0;
	}

	return GDK_SUCCEED;
  error:
	if (fp)
		fclose(fp);
	logbat_destroy(lg->catalog_bid);
	logbat_destroy(lg->catalog_nme);
	logbat_destroy(lg->dcatalog);
	logbat_destroy(lg->snapshots_bid);
	logbat_destroy(lg->snapshots_tid);
	logbat_destroy(lg->dsnapshots);
	logbat_destroy(lg->freed);
	logbat_destroy(lg->seqs_id);
	logbat_destroy(lg->seqs_val);
	logbat_destroy(lg->dseqs);
	GDKfree(lg->fn);
	GDKfree(lg->dir);
	GDKfree(lg->local_dir);
	GDKfree(lg->buf);
	GDKfree(lg);
	return GDK_FAIL;
}

/* Initialize a new logger
 * It will load any data in the logdir and persist it in the BATs*/
static logger *
logger_new(int debug, const char *fn, const char *logdir, int version, preversionfix_fptr prefuncp, postversionfix_fptr postfuncp, int shared, const char *local_logdir)
{
	logger *lg = (struct logger *) GDKmalloc(sizeof(struct logger));
	char filename[FILENAME_MAX];
	char shared_log_filename[FILENAME_MAX];

	if (lg == NULL) {
		fprintf(stderr, "!ERROR: logger_new: allocating logger structure failed\n");
		return NULL;
	}

	lg->debug = debug;
	lg->shared = shared;
	lg->local_dbfarm_role = 0; /* only used if lg->shared */

	lg->changes = 0;
	lg->version = version;
	lg->id = 1;

	lg->tid = 0;
#ifdef GDKLIBRARY_NIL_NAN
	lg->convert_nil_nan = 0;
#endif

	lg->dbfarm_role = logger_set_logdir_path(filename, fn, logdir, shared);;
	lg->fn = GDKstrdup(fn);
	lg->dir = GDKstrdup(filename);
	lg->bufsize = 64*1024;
	lg->buf = GDKmalloc(lg->bufsize);
	if (lg->dbfarm_role < 0 || lg->fn == NULL || lg->dir == NULL || lg->buf == NULL) {
		fprintf(stderr, "!ERROR: logger_new: strdup failed\n");
		GDKfree(lg->fn);
		GDKfree(lg->dir);
		GDKfree(lg->buf);
		GDKfree(lg);
		return NULL;
	}
	if (lg->debug & 1) {
		fprintf(stderr, "#logger_new dir set to %s\n", lg->dir);
	}
	lg->local_dir = NULL;

	if (shared) {
		/* set the local logdir as well
		 * here we pass 0 for the shared flag, since we want these file(s) to be stored in the default logdir */
		lg->local_dbfarm_role = logger_set_logdir_path(filename, fn, local_logdir, 0);
		if (lg->local_dbfarm_role < 0 ||
		    (lg->local_dir = GDKstrdup(filename)) == NULL) {
			fprintf(stderr, "!ERROR: logger_new: strdup failed\n");
			GDKfree(lg->fn);
			GDKfree(lg->dir);
			GDKfree(lg->buf);
			GDKfree(lg);
			return NULL;
		}
		if (lg->debug & 1) {
			fprintf(stderr, "#logger_new local_dir set to %s\n", lg->local_dir);
		}

		/* get last shared logger id from the local log dir,
		 * but first check if the file exists */
		snprintf(shared_log_filename, sizeof(shared_log_filename), "%s%s", lg->local_dir, LOGFILE_SHARED);
		if (access(shared_log_filename, 0) != -1) {
			lng res = logger_read_last_transaction_id(lg, lg->local_dir, LOGFILE_SHARED, lg->local_dbfarm_role);
			if (res < 0) {
				fprintf(stderr, "!ERROR: logger_new: failed to read previous shared logger id form %s\n", LOGFILE_SHARED);
				GDKfree(lg->fn);
				GDKfree(lg->dir);
				GDKfree(lg->local_dir);
				GDKfree(lg->buf);
				GDKfree(lg);
				return NULL;
			}

			lg->id = res;
			if (lg->debug & 1) {
				fprintf(stderr, "#logger_new last shared transactions is read form %s is " LLFMT "\n", shared_log_filename, lg->id);
			}
		} else {
			if (lg->debug & 1) {
				fprintf(stderr, "#logger_new no previous %s found\n", LOGFILE_SHARED);
			}
		}
	}

	lg->prefuncp = prefuncp;
	lg->postfuncp = postfuncp;
	lg->log = NULL;
	lg->end = 0;
	lg->catalog_bid = NULL;
	lg->catalog_nme = NULL;
	lg->dcatalog = NULL;
	lg->snapshots_bid = NULL;
	lg->snapshots_tid = NULL;
	lg->dsnapshots = NULL;
	lg->seqs_id = NULL;
	lg->seqs_val = NULL;
	lg->dseqs = NULL;

	if (logger_load(debug, fn, filename, lg) == GDK_SUCCEED) {
		return lg;
	}
	return NULL;
}

/* Reload (shared) logger
 * It will load any data in the logdir and persist it in the BATs */
gdk_return
logger_reload(logger *lg)
{
	char filename[FILENAME_MAX];

	snprintf(filename, sizeof(filename), "%s", lg->dir);
	if (lg->debug & 1) {
		fprintf(stderr, "#logger_reload %s\n", filename);
	}

	return logger_load(lg->debug, lg->fn, filename, lg);
}

/* Create a new logger */
logger *
logger_create(int debug, const char *fn, const char *logdir, int version, preversionfix_fptr prefuncp, postversionfix_fptr postfuncp, int keep_persisted_log_files)
{
	logger *lg;
	lg = logger_new(debug, fn, logdir, version, prefuncp, postfuncp, 0, NULL);
	if (lg == NULL)
		return NULL;
	if (lg->debug & 1) {
		printf("# Started processing logs %s/%s version %d\n",fn,logdir,version);
		fflush(stdout);
	}
	if (logger_open(lg) != GDK_SUCCEED) {
		logger_destroy(lg);
		return NULL;
	}
	if (lg->debug & 1) {
		printf("# Finished processing logs %s/%s\n",fn,logdir);
	}
	if (GDKsetenv("recovery", "finished") != GDK_SUCCEED) {
		logger_destroy(lg);
		return NULL;
	}
	fflush(stdout);
	if (lg->changes &&
	    (logger_restart(lg) != GDK_SUCCEED ||
	     logger_cleanup(lg, keep_persisted_log_files) != GDK_SUCCEED)) {
		logger_destroy(lg);
		return NULL;
	}
	return lg;
}

/* Create a new shared logger, that is for slaves reading the master
 * log directory.  Assumed to be read-only */
logger *
logger_create_shared(int debug, const char *fn, const char *logdir, const char *local_logdir, int version, preversionfix_fptr prefuncp, postversionfix_fptr postfuncp)
{
	logger *lg;
	lg = logger_new(debug, fn, logdir, version, prefuncp, postfuncp, 1, local_logdir);
	if (lg && lg->debug & 1) {
		printf("# Started processing logs %s/%s version %d\n",fn,logdir,version);
		fflush(stdout);
	}
	return lg;
}

void
logger_destroy(logger *lg)
{
	if (lg->catalog_bid) {
		BUN p, q;
		BAT *b = lg->catalog_bid;

		if (logger_cleanup(lg, 0) != GDK_SUCCEED)
			fprintf(stderr, "#logger_destroy: logger_cleanup failed\n");

		/* free resources */
		BATloop(b, p, q) {
			bat bid = *(log_bid *) Tloc(b, p);
			oid pos = p;

			if (BUNfnd(lg->dcatalog, &pos) == BUN_NONE)
				BBPrelease(bid);
		}

		BBPrelease(lg->catalog_bid->batCacheid);
		BBPrelease(lg->catalog_nme->batCacheid);
		BBPrelease(lg->dcatalog->batCacheid);
		logbat_destroy(lg->catalog_bid);
		logbat_destroy(lg->catalog_nme);
		logbat_destroy(lg->dcatalog);
		logbat_destroy(lg->freed);
	}
	GDKfree(lg->fn);
	GDKfree(lg->dir);
	logger_close(lg);
	GDKfree(lg);
}

gdk_return
logger_exit(logger *lg)
{
	FILE *fp;
	char filename[FILENAME_MAX];
	int farmid = BBPselectfarm(lg->dbfarm_role, 0, offheap);

	logger_close(lg);
	if (GDKmove(farmid, lg->dir, LOGFILE, NULL, lg->dir, LOGFILE, "bak") != GDK_SUCCEED) {
		fprintf(stderr, "!ERROR: logger_exit: rename %s to %s.bak in %s failed\n",
			LOGFILE, LOGFILE, lg->dir);
		return GDK_FAIL;
	}

	snprintf(filename, sizeof(filename), "%s%s", lg->dir, LOGFILE);
	if ((fp = GDKfileopen(farmid, NULL, filename, NULL, "w")) != NULL) {
		char ext[FILENAME_MAX];

		if (fprintf(fp, "%06d\n\n", lg->version) < 0) {
			(void) fclose(fp);
			fprintf(stderr, "!ERROR: logger_exit: write to %s failed\n",
				filename);
			return GDK_FAIL;
		}
		lg->id ++;

		if (logger_commit(lg) != GDK_SUCCEED) {
			(void) fclose(fp);
			fprintf(stderr, "!ERROR: logger_exit: logger_commit failed\n");
			return GDK_FAIL;
		}

		if (fprintf(fp, LLFMT "\n", lg->id) < 0) {
			(void) fclose(fp);
			fprintf(stderr, "!ERROR: logger_exit: write to %s failed\n",
				filename);
			return GDK_FAIL;
		}

		if (fflush(fp) < 0 ||
		    (!(GDKdebug & NOSYNCMASK)
#if defined(NATIVE_WIN32)
		     && _commit(_fileno(fp)) < 0
#elif defined(HAVE_FDATASYNC)
		     && fdatasync(fileno(fp)) < 0
#elif defined(HAVE_FSYNC)
		     && fsync(fileno(fp)) < 0
#endif
			    )) {
			(void) fclose(fp);
			fprintf(stderr, "!ERROR: logger_exit: flush of %s failed\n",
				filename);
			return GDK_FAIL;
		}
		if (fclose(fp) < 0) {
			fprintf(stderr, "!ERROR: logger_exit: flush of %s failed\n",
				filename);
			return GDK_FAIL;
		}

		/* atomic action, switch to new log, keep old for
		 * later cleanup actions */
		snprintf(ext, sizeof(ext), "bak-" LLFMT, lg->id);

		if (GDKmove(farmid, lg->dir, LOGFILE, "bak", lg->dir, LOGFILE, ext) != GDK_SUCCEED) {
			fprintf(stderr, "!ERROR: logger_exit: rename %s.bak to %s.%s failed\n",
				LOGFILE, LOGFILE, ext);
			return GDK_FAIL;
		}

		lg->changes = 0;
	} else {
		fprintf(stderr, "!ERROR: logger_exit: could not create %s\n",
			filename);
		GDKerror("logger_exit: could not open %s\n", filename);
		return GDK_FAIL;
	}
	return GDK_SUCCEED;
}

gdk_return
logger_restart(logger *lg)
{
	if (logger_exit(lg) == GDK_SUCCEED &&
	    logger_open(lg) == GDK_SUCCEED)
		return GDK_SUCCEED;
	return GDK_FAIL;
}

/* Clean-up write-ahead log files already persisted in the BATs.
 * Update the LOGFILE and delete all bak- files as well.
 */
static gdk_return
logger_unlink(int farmid, const char *dir, const char *nme, const char *ext)
{
	char *path;
	int u;

	path = GDKfilepath(farmid, dir, nme, ext);
	if (path == NULL)
		return GDK_FAIL;
	u = remove(path);
	GDKfree(path);
	return u != 0 ? GDK_FAIL : GDK_SUCCEED;
}

static void
logger_cleanup_old(logger *lg, int keep_persisted_log_files)
{
	char buf[BUFSIZ];
	lng id;
	int farmid = BBPselectfarm(lg->dbfarm_role, 0, offheap);
	gdk_return cleanupResultLog = GDK_SUCCEED;
	gdk_return cleanupResultBak = GDK_SUCCEED;

	// Calculate offset based on the number of files to keep
	id = lg->id - keep_persisted_log_files - 1;

	// Stop cleaning up once bak- files are no longer found
	while (id > 0 && (cleanupResultLog == GDK_SUCCEED || cleanupResultBak == GDK_SUCCEED)) {
		// clean up the WAL file
		if (lg->debug & 1) {
			snprintf(buf, sizeof(buf), "%s%s." LLFMT, lg->dir, LOGFILE, id);
			fprintf(stderr, "#logger_cleanup_old %s\n", buf);
		}
		snprintf(buf, sizeof(buf), LLFMT, id);
		cleanupResultLog = logger_unlink(farmid, lg->dir, LOGFILE, buf);

		// clean up the bak- WAL files
		if (lg->debug & 1) {
			snprintf(buf, sizeof(buf), "%s%s.bak-" LLFMT, lg->dir, LOGFILE, id);
			fprintf(stderr, "#logger_cleanup_old %s\n", buf);
		}
		snprintf(buf, sizeof(buf), "bak-" LLFMT, id);
		cleanupResultBak = logger_unlink(farmid, lg->dir, LOGFILE, buf);

		id = id - 1;
	}
	/* we don't really care whether all files were properly
	 * removed, so we don't return a status */
}

gdk_return
logger_cleanup(logger *lg, int keep_persisted_log_files)
{
	char buf[BUFSIZ];
	FILE *fp = NULL;
	int farmid = BBPselectfarm(lg->dbfarm_role, 0, offheap);

	snprintf(buf, sizeof(buf), "%s%s.bak-" LLFMT, lg->dir, LOGFILE, lg->id);

	if (lg->debug & 1) {
		fprintf(stderr, "#logger_cleanup keeping %d WAL files\n", keep_persisted_log_files);
		fprintf(stderr, "#logger_cleanup %s\n", buf);
	}

	if (keep_persisted_log_files == 0) {
		// If keep_persisted_log_files is 0, remove the last
		// persisted WAL files as well to reduce the work for
		// the logger_cleanup_old()
		if ((fp = GDKfileopen(farmid, NULL, buf, NULL, "r")) == NULL) {
			fprintf(stderr, "!ERROR: logger_cleanup: cannot open file %s\n", buf);
			return GDK_FAIL;
		}

		/* skip catalog */
		while (fgets(buf, sizeof(buf), fp) != NULL && buf[0] != '\n')
			;

		while (fgets(buf, sizeof(buf), fp) != NULL) {
			char *e = strchr(buf, '\n');

			if (e)
				*e = 0;
			if (GDKunlink(farmid, lg->dir, LOGFILE, buf) != GDK_SUCCEED) {
				/* not a disaster (yet?) if unlink fails */
				fprintf(stderr, "#logger_cleanup: failed to remove old WAL %s.%s\n", LOGFILE, buf);
				GDKclrerr();
			}
		}
		fclose(fp);
	}

	snprintf(buf, sizeof(buf), "bak-" LLFMT, lg->id);

	if (GDKunlink(farmid, lg->dir, LOGFILE, buf) != GDK_SUCCEED) {
		/* not a disaster (yet?) if unlink fails */
		fprintf(stderr, "#logger_cleanup: failed to remove old WAL %s.%s\n", LOGFILE, buf);
		GDKclrerr();
	}

	if (keep_persisted_log_files > 0) {
		/* Clean up the old WAL files as well, if any */
		logger_cleanup_old(lg, keep_persisted_log_files);
	}

	return GDK_SUCCEED;
}

/* Clean-up write-ahead log files already persisted in the BATs, leaving only the most recent one.
 * Keeps only the number of files set in lg->keep_persisted_log_files.
 * Only the bak- files are deleted for the preserved WAL files.
 */
lng
logger_changes(logger *lg)
{
	return lg->changes;
}

/* Read the last recorded transactions id from a logfile */
lng
logger_read_last_transaction_id(logger *lg, char *dir, char *logger_file, int role)
{
	char filename[FILENAME_MAX];
	FILE *fp;
	char id[BUFSIZ];
	lng lid = GDK_FAIL;
	int farmid = BBPselectfarm(role, 0, offheap);

	snprintf(filename, sizeof(filename), "%s%s", dir, logger_file);
	if ((fp = GDKfileopen(farmid, NULL, filename, NULL, "r")) == NULL) {
		fprintf(stderr, "!ERROR: logger_read_last_transaction_id: unable to open file %s\n", filename);
		return -1;
	}

	if (check_version(lg, fp) != GDK_SUCCEED) {
		fprintf(stderr, "!ERROR: logger_read_last_transaction_id: inconsistent log version for file %s\n", filename);
		fclose(fp);
		return -1;
	}

	/* read the last id */
	while (fgets(id, sizeof(id), fp) != NULL) {
		lid = strtoll(id, NULL, 10);
		if (lg->debug & 1) {
			fprintf(stderr, "#logger_read_last_transaction_id last logger id written in %s is " LLFMT "\n", filename, lid);
		}
	}
	fclose(fp);
	return lid;
}

int
logger_sequence(logger *lg, int seq, lng *id)
{
	BUN p = log_find(lg->seqs_id, lg->dseqs, seq);

	if (p != BUN_NONE) {
		*id = *(lng *) Tloc(lg->seqs_val, p);

		return 1;
	}
	return 0;
}

/*
 * Changes made to the BAT descriptor should be stored in the log
 * files.  Actually, we need to save the descriptor file, perhaps we
 * should simply introduce a versioning scheme.
 */
gdk_return
log_bat_persists(logger *lg, BAT *b, const char *name)
{
	char *ha, *ta;
	int len;
	char buf[BUFSIZ];
	logformat l;
	int flag = (b->batPersistence == PERSISTENT) ? LOG_USE : LOG_CREATE;
	BUN p;

	l.nr = 0;
	if (flag == LOG_USE) {
#ifndef NDEBUG
		assert(b->batRole == PERSISTENT);
		assert(0 <= b->theap.farmid && b->theap.farmid < MAXFARMS);
		assert(BBPfarms[b->theap.farmid].roles & (1 << PERSISTENT));
		if (b->tvheap) {
			assert(0 <= b->tvheap->farmid && b->tvheap->farmid < MAXFARMS);
			assert(BBPfarms[b->tvheap->farmid].roles & (1 << PERSISTENT));
		}
#endif
		l.nr = b->batCacheid;
	}
	l.flag = flag;
	l.tid = lg->tid;
	lg->changes++;
	if (log_write_format(lg, &l) != GDK_SUCCEED ||
	    log_write_string(lg, name) != GDK_SUCCEED)
		return GDK_FAIL;

	if (lg->debug & 1)
		fprintf(stderr, "#persists bat %s (%d) %s\n",
			name, b->batCacheid,
			(flag == LOG_USE) ? "use" : "create");

	if (flag == LOG_USE) {
		assert(b->batRole == PERSISTENT);
		assert(b->theap.farmid == 0);
		assert(b->tvheap == NULL ||
		       BBPfarms[b->tvheap->farmid].roles & (1 << PERSISTENT));
		if ((p = log_find(lg->snapshots_bid, lg->dsnapshots, b->batCacheid)) != BUN_NONE &&
		    p >= lg->snapshots_tid->batInserted) {
			if (BUNinplace(lg->snapshots_tid, p, &lg->tid, false) != GDK_SUCCEED)
				return GDK_FAIL;
		} else {
			if (p != BUN_NONE) {
				oid pos = p;
				if (BUNappend(lg->dsnapshots, &pos, false) != GDK_SUCCEED)
					return GDK_FAIL;
			}
			if (BUNappend(lg->snapshots_bid, &b->batCacheid, false) != GDK_SUCCEED ||
			    BUNappend(lg->snapshots_tid, &lg->tid, false) != GDK_SUCCEED)
				return GDK_FAIL;
		}
		return GDK_SUCCEED;
	}

	ha = "vid";
	ta = ATOMname(b->ttype);
	len = snprintf(buf, sizeof(buf), "%s,%s", ha, ta);
	len++;			/* include EOS */
	if (!mnstr_writeInt(lg->log, len) ||
	    mnstr_write(lg->log, buf, 1, len) != (ssize_t) len) {
		fprintf(stderr, "!ERROR: log_bat_persists: write failed\n");
		return GDK_FAIL;
	}

	if (lg->debug & 1)
		fprintf(stderr, "#Logged new bat [%s,%s] %s " BUNFMT " (%d)\n",
			ha, ta, name, BATcount(b), b->batCacheid);
	return log_bat(lg, b, name);
}

gdk_return
log_bat_transient(logger *lg, const char *name)
{
	log_bid bid = logger_find_bat(lg, name);
	logformat l;
	BUN p;

	l.flag = LOG_DESTROY;
	l.tid = lg->tid;
	l.nr = 0;
	lg->changes++;

	/* if this is a snapshot bat, we need to skip all changes */
	if ((p = log_find(lg->snapshots_bid, lg->dsnapshots, bid)) != BUN_NONE) {
		//	int tid = *(int*)Tloc(lg->snapshots_tid, p);
#ifndef NDEBUG
		assert(BBP_desc(bid)->batRole == PERSISTENT);
		assert(0 <= BBP_desc(bid)->theap.farmid && BBP_desc(bid)->theap.farmid < MAXFARMS);
		assert(BBPfarms[BBP_desc(bid)->theap.farmid].roles & (1 << PERSISTENT));
		if (BBP_desc(bid)->tvheap) {
			assert(0 <= BBP_desc(bid)->tvheap->farmid && BBP_desc(bid)->tvheap->farmid < MAXFARMS);
			assert(BBPfarms[BBP_desc(bid)->tvheap->farmid].roles & (1 << PERSISTENT));
		}
#endif
		//	if (lg->tid == tid)
		if (p >= lg->snapshots_tid->batInserted) {
			if (BUNinplace(lg->snapshots_tid, p, &lg->tid, false) != GDK_SUCCEED)
				return GDK_FAIL;
		} else {
			oid pos = p;
			if (BUNappend(lg->dsnapshots, &pos, false) != GDK_SUCCEED ||
			    BUNappend(lg->snapshots_tid, &lg->tid, false) != GDK_SUCCEED ||
			    BUNappend(lg->snapshots_bid, &bid, false) != GDK_SUCCEED)
				return GDK_FAIL;
		}
		//	else
		//		printf("%d != %d\n", lg->tid, tid);
		//	assert(lg->tid == tid);
	}

	if (log_write_format(lg, &l) != GDK_SUCCEED ||
	    log_write_string(lg, name) != GDK_SUCCEED) {
		fprintf(stderr, "!ERROR: log_bat_transient: write failed\n");
		return GDK_FAIL;
	}

	if (lg->debug & 1)
		fprintf(stderr, "#Logged destroyed bat %s\n", name);
	return GDK_SUCCEED;
}

gdk_return
log_delta(logger *lg, BAT *uid, BAT *uval, const char *name)
{
	gdk_return ok = GDK_SUCCEED;
	logformat l;
	BUN p;

	assert(uid->ttype == TYPE_oid || uid->ttype == TYPE_void);
	if (lg->debug & 128) {
		/* logging is switched off */
		return GDK_SUCCEED;
	}

	l.tid = lg->tid;
	l.nr = (BUNlast(uval));
	lg->changes += l.nr;

	if (l.nr) {
		BATiter ii = bat_iterator(uid);
		BATiter vi = bat_iterator(uval);
		gdk_return (*wh) (const void *, stream *, size_t) = BATatoms[TYPE_oid].atomWrite;
		gdk_return (*wt) (const void *, stream *, size_t) = BATatoms[uval->ttype].atomWrite;

		l.flag = LOG_UPDATE;
		if (log_write_format(lg, &l) != GDK_SUCCEED ||
		    log_write_string(lg, name) != GDK_SUCCEED)
			return GDK_FAIL;

		for (p = 0; p < BUNlast(uid) && ok == GDK_SUCCEED; p++) {
			const void *id = BUNtail(ii, p);
			const void *val = BUNtail(vi, p);

			ok = wh(id, lg->log, 1);
			if (ok == GDK_SUCCEED)
				ok = wt(val, lg->log, 1);
		}

		if (lg->debug & 1)
			fprintf(stderr, "#Logged %s " LLFMT " inserts\n", name, l.nr);
	}
	if (ok != GDK_SUCCEED)
		fprintf(stderr, "!ERROR: log_delta: write failed\n");
	return ok;
}

gdk_return
log_bat(logger *lg, BAT *b, const char *name)
{
	gdk_return ok = GDK_SUCCEED;
	logformat l;
	BUN p;

	if (lg->debug & 128) {
		/* logging is switched off */
		return GDK_SUCCEED;
	}

	l.tid = lg->tid;
	l.nr = (BUNlast(b) - b->batInserted);
	lg->changes += l.nr;

	if (l.nr) {
		BATiter bi = bat_iterator(b);
		gdk_return (*wt) (const void *, stream *, size_t) = BATatoms[b->ttype].atomWrite;

		l.flag = LOG_INSERT;
		if (log_write_format(lg, &l) != GDK_SUCCEED ||
		    log_write_string(lg, name) != GDK_SUCCEED)
			return GDK_FAIL;

		if (b->ttype > TYPE_void &&
		    b->ttype < TYPE_str &&
		    !isVIEW(b)) {
			const void *t = BUNtail(bi, b->batInserted);

			ok = wt(t, lg->log, (size_t)l.nr);
		} else {
			for (p = b->batInserted; p < BUNlast(b) && ok == GDK_SUCCEED; p++) {
				const void *t = BUNtail(bi, p);

				ok = wt(t, lg->log, 1);
			}
		}

		if (lg->debug & 1)
			fprintf(stderr, "#Logged %s " LLFMT " inserts\n", name, l.nr);
	}

	if (ok != GDK_SUCCEED)
		fprintf(stderr, "!ERROR: log_bat: write failed\n");
	return ok;
}

gdk_return
log_bat_clear(logger *lg, const char *name)
{
	logformat l;

	if (lg->debug & 128) {
		/* logging is switched off */
		return GDK_SUCCEED;
	}

	l.nr = 1;
	l.tid = lg->tid;
	lg->changes += l.nr;

	l.flag = LOG_CLEAR;
	if (log_write_format(lg, &l) != GDK_SUCCEED ||
	    log_write_string(lg, name) != GDK_SUCCEED)
		return GDK_FAIL;

	if (lg->debug & 1)
		fprintf(stderr, "#Logged clear %s\n", name);

	return GDK_SUCCEED;
}

gdk_return
log_tstart(logger *lg)
{
	logformat l;

	l.flag = LOG_START;
	l.tid = ++lg->tid;
	l.nr = lg->tid;

	if (lg->debug & 1)
		fprintf(stderr, "#log_tstart %d\n", lg->tid);

	return log_write_format(lg, &l);
}

#define DBLKSZ		8192
#define SEGSZ		(64*DBLKSZ)

static gdk_return
pre_allocate(logger *lg)
{
	// FIXME: this causes serious issues on Windows at least with MinGW
#ifndef WIN32
	lng p;
	p = (lng) getfilepos(getFile(lg->log));
	if (p == -1)
		return GDK_FAIL;
	if (p + DBLKSZ > lg->end) {
		p &= ~(DBLKSZ - 1);
		p += SEGSZ;
		if (GDKextendf(getFileNo(lg->log), (size_t) p, "WAL file") != GDK_SUCCEED)
			return GDK_FAIL;
		lg->end = p;
	}
#else
	(void) lg;
#endif
	return GDK_SUCCEED;
}

gdk_return
log_tend(logger *lg)
{
	logformat l;
	gdk_return res = GDK_SUCCEED;

	if (lg->debug & 1)
		fprintf(stderr, "#log_tend %d\n", lg->tid);

	if (DELTAdirty(lg->snapshots_bid)) {
		/* sub commit all new snapshots */
		BAT *cands, *tids, *bids;

		tids = bm_tids(lg->snapshots_tid, lg->dsnapshots);
		if (tids == NULL) {
			fprintf(stderr, "!ERROR: log_tend: bm_tids failed\n");
			return GDK_FAIL;
		}
		cands = BATselect(lg->snapshots_tid, tids, &lg->tid, &lg->tid,
				     true, true, false);
		if (cands == NULL) {
			fprintf(stderr, "!ERROR: log_tend: select failed\n");
			return GDK_FAIL;
		}
		bids = BATproject(cands, lg->snapshots_bid);
		BBPunfix(cands->batCacheid);
		BBPunfix(tids->batCacheid);
		if (bids == NULL) {
			fprintf(stderr, "!ERROR: log_tend: project failed\n");
			return GDK_FAIL;
		}
		res = bm_subcommit(lg, bids, NULL, lg->snapshots_bid,
				   lg->snapshots_tid, lg->dsnapshots, NULL, lg->debug);
		BBPunfix(bids->batCacheid);
	}
	l.flag = LOG_END;
	l.tid = lg->tid;
	l.nr = lg->tid;

	if (res != GDK_SUCCEED ||
	    log_write_format(lg, &l) != GDK_SUCCEED ||
	    mnstr_flush(lg->log) ||
	    (!(GDKdebug & NOSYNCMASK) && mnstr_fsync(lg->log)) ||
	    pre_allocate(lg) != GDK_SUCCEED) {
		fprintf(stderr, "!ERROR: log_tend: write failed\n");
		return GDK_FAIL;
	}
	return GDK_SUCCEED;
}

gdk_return
log_abort(logger *lg)
{
	logformat l;

	if (lg->debug & 1)
		fprintf(stderr, "#log_abort %d\n", lg->tid);

	l.flag = LOG_END;
	l.tid = lg->tid;
	l.nr = -1;

	if (log_write_format(lg, &l) != GDK_SUCCEED)
		return GDK_FAIL;

	return GDK_SUCCEED;
}

static gdk_return
log_sequence_(logger *lg, int seq, lng val, int flush)
{
	logformat l;

	l.flag = LOG_SEQ;
	l.tid = lg->tid;
	l.nr = seq;

	if (lg->debug & 1)
		fprintf(stderr, "#log_sequence_ (%d," LLFMT ")\n", seq, val);

	if (log_write_format(lg, &l) != GDK_SUCCEED ||
	    !mnstr_writeLng(lg->log, val) ||
	    (flush && mnstr_flush(lg->log)) ||
	    (flush && !(GDKdebug & NOSYNCMASK) && mnstr_fsync(lg->log)) ||
	    pre_allocate(lg) != GDK_SUCCEED) {
		fprintf(stderr, "!ERROR: log_sequence_: write failed\n");
		return GDK_FAIL;
	}
	return GDK_SUCCEED;
}

static gdk_return
log_sequence_nrs(logger *lg)
{
	BATiter sii = bat_iterator(lg->seqs_id);
	BATiter svi = bat_iterator(lg->seqs_val);
	BUN p, q;
	gdk_return ok = GDK_SUCCEED;

	BATloop(lg->seqs_id, p, q) {
		const int *id = (const int *) BUNtloc(sii, p);
		const lng *val = (const lng *) BUNtloc(svi, p);
		oid pos = p;

		if (BUNfnd(lg->dseqs, &pos) == BUN_NONE &&
		    log_sequence_(lg, *id, *val, 0) != GDK_SUCCEED)
			ok = GDK_FAIL;
	}
	if (ok != GDK_SUCCEED ||
	    mnstr_flush(lg->log) ||
	    (!(GDKdebug & NOSYNCMASK) && mnstr_fsync(lg->log))) {
		fprintf(stderr, "!ERROR: log_sequence_nrs: write failed\n");
		return GDK_FAIL;
	}
	return ok;
}

/* a transaction in it self */
gdk_return
log_sequence(logger *lg, int seq, lng val)
{
	BUN p;

	if (lg->debug & 1)
		fprintf(stderr, "#log_sequence (%d," LLFMT ")\n", seq, val);

	if ((p = log_find(lg->seqs_id, lg->dseqs, seq)) != BUN_NONE &&
	    p >= lg->seqs_id->batInserted) {
		if (BUNinplace(lg->seqs_val, p, &val, false) != GDK_SUCCEED)
			return GDK_FAIL;
	} else {
		if (p != BUN_NONE) {
			oid pos = p;
			if (BUNappend(lg->dseqs, &pos, false) != GDK_SUCCEED)
				return GDK_FAIL;
		}
		if (BUNappend(lg->seqs_id, &seq, false) != GDK_SUCCEED ||
		    BUNappend(lg->seqs_val, &val, false) != GDK_SUCCEED)
			return GDK_FAIL;
	}
	return log_sequence_(lg, seq, val, 1);
}

static gdk_return
bm_commit(logger *lg)
{
	BUN p, q;
	BAT *b = lg->catalog_bid;
	BAT *n = logbat_new(TYPE_str, BATcount(lg->freed), TRANSIENT);
	gdk_return res;

	if (n == NULL)
		return GDK_FAIL;

	/* subcommit the freed bats */
	BATloop(lg->freed, p, q) {
		bat bid = *(log_bid *) Tloc(lg->freed, p);
		BAT *lb = BATdescriptor(bid);
		str name = BBPname(bid);

		if (lb == NULL ||
		    BATmode(lb, TRANSIENT) != GDK_SUCCEED) {
			logbat_destroy(lb);
			logbat_destroy(n);
			return GDK_FAIL;
		}
		logbat_destroy(lb);
		if (lg->debug & 1)
			fprintf(stderr,
				"#commit deleted (snapshot) %s (%d)\n",
				name, bid);
		if (BUNappend(n, name, false) != GDK_SUCCEED) {
			logbat_destroy(lb);
			logbat_destroy(n);
			return GDK_FAIL;
		}
		BBPrelease(bid);
	}

	for (p = b->batInserted; p < BUNlast(b); p++) {
		log_bid bid = *(log_bid *) Tloc(b, p);
		BAT *lb;
		oid pos = p;

		if (BUNfnd(lg->dcatalog, &pos) != BUN_NONE)
			continue;

		if (bid == lg->dsnapshots->batCacheid)
			continue;

		if ((lb = BATdescriptor(bid)) == NULL ||
		    BATmode(lb, PERSISTENT) != GDK_SUCCEED) {
			logbat_destroy(lb);
			logbat_destroy(n);
			return GDK_FAIL;
		}

		assert(lb->batRestricted != BAT_WRITE);
		logbat_destroy(lb);

		if (lg->debug & 1)
			fprintf(stderr, "#bm_commit: create %d (%d)\n",
				bid, BBP_lrefs(bid));
	}
	res = bm_subcommit(lg, lg->catalog_bid, lg->catalog_nme, lg->catalog_bid, lg->catalog_nme, lg->dcatalog, n, lg->debug);
	BBPreclaim(n);
	if (res == GDK_SUCCEED) {
		BATclear(lg->freed, false);
		BATcommit(lg->freed);
		return GDK_SUCCEED;
	}
	return GDK_FAIL;
}

gdk_return
logger_add_bat(logger *lg, BAT *b, const char *name)
{
	log_bid bid = logger_find_bat(lg, name);

	assert(b->batRestricted > 0 ||
	       b == lg->snapshots_bid ||
	       b == lg->snapshots_tid ||
	       b == lg->dsnapshots ||
	       b == lg->catalog_bid ||
	       b == lg->catalog_nme ||
	       b == lg->dcatalog ||
	       b == lg->seqs_id ||
	       b == lg->seqs_val ||
	       b == lg->dseqs);
	assert(b->batRole == PERSISTENT);
	if (bid) {
		if (bid != b->batCacheid) {
			if (logger_del_bat(lg, bid) != GDK_SUCCEED)
				return GDK_FAIL;
		} else {
			return GDK_SUCCEED;
		}
	}
	bid = b->batCacheid;
	if (lg->debug & 1)
		fprintf(stderr, "#create %s\n", name);
	assert(log_find(lg->catalog_bid, lg->dcatalog, bid) == BUN_NONE);
	lg->changes += BATcount(b) + 1;
	if (BUNappend(lg->catalog_bid, &bid, false) != GDK_SUCCEED ||
	    BUNappend(lg->catalog_nme, name, false) != GDK_SUCCEED)
		return GDK_FAIL;
	BBPretain(bid);
	return GDK_SUCCEED;
}

gdk_return
logger_del_bat(logger *lg, log_bid bid)
{
	BAT *b = BATdescriptor(bid);
	BUN p = log_find(lg->catalog_bid, lg->dcatalog, bid), q;

	assert(p != BUN_NONE);
	if (p == BUN_NONE) {
		logbat_destroy(b);
		GDKerror("logger_del_bat: cannot find BAT\n");
		return GDK_FAIL;
	}

	/* if this is a not logger commited snapshot bat, make it
	 * transient */
	if (p >= lg->catalog_bid->batInserted &&
	    (q = log_find(lg->snapshots_bid, lg->dsnapshots, bid)) != BUN_NONE) {

		if (BUNappend(lg->dsnapshots, &q, false) != GDK_SUCCEED) {
			logbat_destroy(b);
			return GDK_FAIL;
		}
		if (lg->debug & 1)
			fprintf(stderr,
				"#logger_del_bat release snapshot %d (%d)\n",
				bid, BBP_lrefs(bid));
		if (BUNappend(lg->freed, &bid, false) != GDK_SUCCEED) {
			logbat_destroy(b);
			return GDK_FAIL;
		}
	} else if (p >= lg->catalog_bid->batInserted) {
		BBPrelease(bid);
	} else {
		if (BUNappend(lg->freed, &bid, false) != GDK_SUCCEED) {
			logbat_destroy(b);
			return GDK_FAIL;
		}
	}
	if (b) {
		lg->changes += BATcount(b) + 1;
		BBPunfix(b->batCacheid);
	}
	return BUNappend(lg->dcatalog, &p, false);
/*assert(BBP_lrefs(bid) == 0);*/
}

log_bid
logger_find_bat(logger *lg, const char *name)
{
	BATiter cni = bat_iterator(lg->catalog_nme);
	BUN p;

	if (BAThash(lg->catalog_nme) == GDK_SUCCEED) {
		HASHloop_str(cni, cni.b->thash, p, name) {
			oid pos = p;
			if (BUNfnd(lg->dcatalog, &pos) == BUN_NONE)
				return *(log_bid *) Tloc(lg->catalog_bid, p);
		}
	}
	return 0;
}

static geomcatalogfix_fptr geomcatalogfix = NULL;
static geomsqlfix_fptr geomsqlfix = NULL;

void
geomcatalogfix_set(geomcatalogfix_fptr f)
{
	geomcatalogfix = f;
}

geomcatalogfix_fptr
geomcatalogfix_get(void)
{
	return geomcatalogfix;
}

void
geomsqlfix_set(geomsqlfix_fptr f)
{
	geomsqlfix = f;
}

geomsqlfix_fptr
geomsqlfix_get(void)
{
	return geomsqlfix;
}

void
geomversion_set(void)
{
	geomisoldversion = 1;
}
int geomversion_get(void)
{
	return geomisoldversion;
}
