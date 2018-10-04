/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

/*
 *  Niels Nes, Martin Kersten
 *
 * Parallel bulk load for SQL
 * The COPY INTO command for SQL is heavily CPU bound, which means
 * that ideally we would like to exploit the multi-cores to do that
 * work in parallel.
 * Complicating factors are the initial record offset, the
 * possible variable length of the input, and the original sort order
 * that should preferable be maintained.
 *
 * The code below consists of a file reader, which breaks up the
 * file into chunks of distinct lines. Then multiple parallel threads
 * grab them, and break them on the field boundaries.
 * After all fields are identified this way, the columns are converted
 * and stored in the BATs.
 *
 * The threads get a reference to a private copy of the READERtask.
 * It includes a list of columns they should handle. This is a basis
 * to distributed cheap and expensive columns over threads.
 *
 * The file reader overlaps IO with updates of the BAT.
 * Also the buffer size of the block stream might be a little small for
 * this task (1MB). It has been increased to 8MB, which indeed improved.
 *
 * The work divider allocates subtasks to threads based on the
 * observed time spending so far.
 */

#include "monetdb_config.h"
#include "tablet.h"
#include <string.h>
#include <ctype.h>
#include "algebra.h"

/*#define _DEBUG_TABLET_ */
/*#define _DEBUG_TABLET_CNTRL */

#define MAXWORKERS	64
#define MAXBUFFERS 2
/* We restrict the row length to be 32MB for the time being */
#define MAXROWSIZE(X) (X > 32*1024*1024 ? X : 32*1024*1024)

static MT_Lock errorlock MT_LOCK_INITIALIZER("errorlock");

static BAT *
void_bat_create(int adt, BUN nr)
{
	BAT *b = COLnew(0, adt, BATTINY, PERSISTENT);

	/* check for correct structures */
	if (b == NULL)
		return NULL;
	BATsetaccess(b, BAT_APPEND);
	if (nr > BATTINY && adt && BATextend(b, nr) != GDK_SUCCEED) {
		BBPunfix(b->batCacheid);
		return NULL;
	}

	/* disable all properties here */
	b->tsorted = FALSE;
	b->trevsorted = FALSE;
	b->tnosorted = 0;
	b->tnorevsorted = 0;
	b->tseqbase = oid_nil;
	b->tkey = FALSE;
	b->tnokey[0] = 0;
	b->tnokey[1] = 0;
	return b;
}

void
TABLETdestroy_format(Tablet *as)
{
	BUN p;
	Column *fmt = as->format;

	for (p = 0; p < as->nr_attrs; p++) {
		if (fmt[p].c)
			BBPunfix(fmt[p].c->batCacheid);
		if (fmt[p].data)
			GDKfree(fmt[p].data);
		if (fmt[p].type)
			GDKfree(fmt[p].type);
	}
	GDKfree(fmt);
}

static oid
check_BATs(Tablet *as)
{
	Column *fmt = as->format;
	BUN i = 0;
	BUN cnt;
	oid base;

	if (fmt[i].c == NULL)
		i++;
	cnt = BATcount(fmt[i].c);
	base = fmt[i].c->hseqbase;

	if (as->nr != cnt)
		return oid_nil;

	for (i = 0; i < as->nr_attrs; i++) {
		BAT *b;
		BUN offset;

		b = fmt[i].c;
		if (b == NULL)
			continue;
		offset = as->offset;

		if (BATcount(b) != cnt || b->hseqbase != base)
			return oid_nil;

		fmt[i].p = offset;
	}
	return base;
}

str
TABLETcreate_bats(Tablet *as, BUN est)
{
	Column *fmt = as->format;
	BUN i;

	for (i = 0; i < as->nr_attrs; i++) {
		if (fmt[i].skip)
			continue;
		fmt[i].c = void_bat_create(fmt[i].adt, est);
		if (!fmt[i].c) {
			while (i > 0) {
				if (!fmt[--i].skip)
					BBPreclaim(fmt[i].c);
			}
			throw(SQL, "copy", "Failed to create bat of size " BUNFMT "\n", as->nr);
		}
		fmt[i].ci = bat_iterator(fmt[i].c);
	}
	return MAL_SUCCEED;
}

str
TABLETcollect(BAT **bats, Tablet *as)
{
	Column *fmt = as->format;
	BUN i, j;
	BUN cnt = 0;

	if (bats == NULL)
		throw(SQL, "copy", "Missing container");
	for (i = 0; i < as->nr_attrs && !cnt; i++)
		if (!fmt[i].skip)
			cnt = BATcount(fmt[i].c);
	for (i = 0, j = 0; i < as->nr_attrs; i++) {
		if (fmt[i].skip)
			continue;
		bats[j] = fmt[i].c;
		BBPfix(bats[j]->batCacheid);
		BATsetaccess(fmt[i].c, BAT_READ);
		fmt[i].c->tsorted = fmt[i].c->trevsorted = 0;
		fmt[i].c->tkey = 0;
		BATsettrivprop(fmt[i].c);

		if (cnt != BATcount(fmt[i].c))
			throw(SQL, "copy", "Count " BUNFMT " differs from " BUNFMT "\n", BATcount(fmt[i].c), cnt);
		j++;
	}
	return MAL_SUCCEED;
}

str
TABLETcollect_parts(BAT **bats, Tablet *as, BUN offset)
{
	Column *fmt = as->format;
	BUN i, j;
	BUN cnt = 0;

	for (i = 0; i < as->nr_attrs && !cnt; i++)
		if (!fmt[i].skip)
			cnt = BATcount(fmt[i].c);
	for (i = 0, j = 0; i < as->nr_attrs; i++) {
		BAT *b, *bv = NULL;
		if (fmt[i].skip)
			continue;
		b = fmt[i].c;
		b->tsorted = b->trevsorted = 0;
		b->tkey = 0;
		BATsettrivprop(b);
		BATsetaccess(b, BAT_READ);
		bv = BATslice(b, (offset > 0) ? offset - 1 : 0, BATcount(b));
		bats[j] = bv;

		b->tkey = (offset > 0) ? FALSE : bv->tkey;
		b->tnonil &= bv->tnonil;
		if (b->tsorted != bv->tsorted)
			b->tsorted = 0;
		if (b->trevsorted != bv->trevsorted)
			b->trevsorted = 0;
		if (BATtdense(b))
			b->tkey = TRUE;
		b->batDirtydesc = true;

		if (offset > 0) {
			BBPunfix(bv->batCacheid);
			bats[j] = BATslice(b, offset, BATcount(b));
		}
		if (cnt != BATcount(b))
			throw(SQL, "copy", "Count " BUNFMT " differs from " BUNFMT "\n", BATcount(b), cnt);
		j++;
	}
	return MAL_SUCCEED;
}

// the starting quote character has already been skipped

static char *
tablet_skip_string(char *s, char quote)
{
	while (*s) {
		if (*s == '\\' && s[1] != '\0')
			s++;
		else if (*s == quote) {
			if (s[1] == quote)
				*s++ = '\\';	/* sneakily replace "" with \" */
			else
				break;
		}
		s++;
	}
	assert(*s == quote || *s == '\0');
	if (*s == 0)
		return NULL;
	return s;
}

static int
TABLET_error(stream *s)
{
	if (!mnstr_errnr(GDKerr)) {
		char *err = mnstr_error(s);

		mnstr_printf(GDKout, "#Stream error %s\n", err);
		/* use free as stream allocates out side GDK */
		if (err)
			free(err);
	}
	return -1;
}

/* The output line is first built before being sent. It solves a problem
   with UDP, where you may loose most of the information using short writes
*/
static inline int
output_line(char **buf, size_t *len, char **localbuf, size_t *locallen, Column *fmt, stream *fd, BUN nr_attrs, oid id)
{
	BUN i;
	ssize_t fill = 0;

	for (i = 0; i < nr_attrs; i++) {
		if (fmt[i].c == NULL)
			continue;
		if (id < fmt[i].c->hseqbase || id >= fmt[i].c->hseqbase + BATcount(fmt[i].c))
			break;
		fmt[i].p = id - fmt[i].c->hseqbase;
	}
	if (i == nr_attrs) {
		for (i = 0; i < nr_attrs; i++) {
			Column *f = fmt + i;
			const char *p;
			ssize_t l;

			if (f->c) {
				p = BUNtail(f->ci, f->p);

				if (!p || ATOMcmp(f->adt, ATOMnilptr(f->adt), p) == 0) {
					p = f->nullstr;
					l = (ssize_t) strlen(f->nullstr);
				} else {
					l = f->tostr(f->extra, localbuf, locallen, f->adt, p);
					if (l < 0)
						return -1;
					p = *localbuf;
				}
				if (fill + l + f->seplen >= (ssize_t) *len) {
					/* extend the buffer */
					char *nbuf;
					nbuf = GDKrealloc(*buf, fill + l + f->seplen + BUFSIZ);
					if( nbuf == NULL)
						return -1; /* *buf freed by caller */
					*buf = nbuf;
					*len = fill + l + f->seplen + BUFSIZ;
				}
				strncpy(*buf + fill, p, l);
				fill += l;
			}
			strncpy(*buf + fill, f->sep, f->seplen);
			fill += f->seplen;
		}
	}
	if (fd && mnstr_write(fd, *buf, 1, fill) != fill)
		return TABLET_error(fd);
	return 0;
}

static inline int
output_line_dense(char **buf, size_t *len, char **localbuf, size_t *locallen, Column *fmt, stream *fd, BUN nr_attrs)
{
	BUN i;
	ssize_t fill = 0;

	for (i = 0; i < nr_attrs; i++) {
		Column *f = fmt + i;
		const char *p;
		ssize_t l;

		if (f->c) {
			p = BUNtail(f->ci, f->p);

			if (!p || ATOMcmp(f->adt, ATOMnilptr(f->adt), p) == 0) {
				p = f->nullstr;
				l = (ssize_t) strlen(p);
			} else {
				l = f->tostr(f->extra, localbuf, locallen, f->adt, p);
				if (l < 0)
					return -1;
				p = *localbuf;
			}
			if (fill + l + f->seplen >= (ssize_t) *len) {
				/* extend the buffer */
				char *nbuf;
				nbuf = GDKrealloc(*buf, fill + l + f->seplen + BUFSIZ);
				if( nbuf == NULL)
					return -1;	/* *buf freed by caller */
				*buf = nbuf;
				*len = fill + l + f->seplen + BUFSIZ;
			}
			strncpy(*buf + fill, p, l);
			fill += l;
			f->p++;
		}
		strncpy(*buf + fill, f->sep, f->seplen);
		fill += f->seplen;
	}
	if (fd && mnstr_write(fd, *buf, 1, fill) != fill)
		return TABLET_error(fd);
	return 0;
}

static inline int
output_line_lookup(char **buf, size_t *len, Column *fmt, stream *fd, BUN nr_attrs, oid id)
{
	BUN i;

	for (i = 0; i < nr_attrs; i++) {
		Column *f = fmt + i;

		if (f->c) {
			char *p = BUNtail(f->ci, id - f->c->hseqbase);

			if (!p || ATOMcmp(f->adt, ATOMnilptr(f->adt), p) == 0) {
				size_t l = strlen(f->nullstr);
				if (mnstr_write(fd, f->nullstr, 1, l) != (ssize_t) l)
					return TABLET_error(fd);
			} else {
				ssize_t l = f->tostr(f->extra, buf, len, f->adt, p);

				if (l < 0 || mnstr_write(fd, *buf, 1, l) != l)
					return TABLET_error(fd);
			}
		}
		if (mnstr_write(fd, f->sep, 1, f->seplen) != f->seplen)
			return TABLET_error(fd);
	}
	return 0;
}

static int
tablet_read_more(bstream *in, stream *out, size_t n)
{
	if (out) {
		do {
			/* query is not finished ask for more */
			/* we need more query text */
			if (bstream_next(in) < 0)
				return EOF;
			if (in->eof) {
				if (mnstr_write(out, PROMPT2, sizeof(PROMPT2) - 1, 1) == 1)
					mnstr_flush(out);
				in->eof = 0;
				/* we need more query text */
				if (bstream_next(in) <= 0)
					return EOF;
			}
		} while (in->len <= in->pos);
	} else if (bstream_read(in, n) <= 0) {
		return EOF;
	}
	return 1;
}

/*
 * Fast Load
 * To speedup the CPU intensive loading of files we have to break
 * the file into pieces and perform parallel analysis. Experimentation
 * against lineitem SF1 showed that half of the time goes into very
 * basis atom analysis (41 out of 102 B instructions).
 * Furthermore, the actual insertion into the BATs takes only
 * about 10% of the total. With multi-core processors around
 * it seems we can gain here significantly.
 *
 * The approach taken is to fork a parallel scan over the text file.
 * We assume that the blocked stream is already
 * positioned correctly at the reading position. The start and limit
 * indicates the byte range to search for tuples.
 * If start> 0 then we first skip to the next record separator.
 * If necessary we read more than 'limit' bytes to ensure parsing a complete
 * record and stop at the record boundary.
 * Beware, we should allocate Tablet descriptors for each file segment,
 * otherwise we end up with a gross concurrency control problem.
 * The resulting BATs should be glued at the final phase.
 *
 * Raw Load
 * Front-ends can bypass most of the overhead in loading the BATs
 * by preparing the corresponding files directly and replace those
 * created by e.g. the SQL frontend.
 * This strategy is only advisable for cases where we have very
 * large files >200GB and/or are created by a well debugged code.
 *
 * To experiment with this approach, the code base responds
 * on negative number of cores by dumping the data directly in BAT
 * storage format into a collections of files on disk.
 * It reports on the actions to be taken to replace BATs.
 * This technique is initially only supported for fixed-sized columns.
 * The rawmode() indicator acts as the internal switch.
 */

/*
 * To speed up loading ascii files we have to determine the number of blocks.
 * This depends on the number of cores available.
 * For the time being we hardwire this decision based on our own
 * platforms.
 * Furthermore, we only consider parallel load for file-based requests.
 *
 * To simplify our world, we assume a single producer process.
 */

static int
output_file_default(Tablet *as, BAT *order, stream *fd)
{
	size_t len = BUFSIZ, locallen = BUFSIZ;
	int res = 0;
	char *buf = GDKzalloc(len);
	char *localbuf = GDKzalloc(len);
	BUN p, q;
	oid id;
	BUN i = 0;
	BUN offset = as->offset;

	if (buf == NULL || localbuf == NULL) {
		GDKfree(buf);
		GDKfree(localbuf);
		return -1;
	}
	for (q = offset + as->nr, p = offset, id = order->hseqbase + offset; p < q; p++, id++) {
		if ((res = output_line(&buf, &len, &localbuf, &locallen, as->format, fd, as->nr_attrs, id)) < 0) {
			GDKfree(buf);
			GDKfree(localbuf);
			return res;
		}
		i++;
#ifdef _DEBUG_TABLET_
		if ((i % 1000000) == 0)
			mnstr_printf(GDKout, "#dumped " BUNFMT " lines\n", i);
#endif
	}
	GDKfree(localbuf);
	GDKfree(buf);
	return res;
}

static int
output_file_dense(Tablet *as, stream *fd)
{
	size_t len = BUFSIZ, locallen = BUFSIZ;
	int res = 0;
	char *buf = GDKzalloc(len);
	char *localbuf = GDKzalloc(len);
	BUN i = 0;

	if (buf == NULL || localbuf == NULL) {
		GDKfree(buf);
		GDKfree(localbuf);
		return -1;
	}
	for (i = 0; i < as->nr; i++) {
		if ((res = output_line_dense(&buf, &len, &localbuf, &locallen, as->format, fd, as->nr_attrs)) < 0) {
			GDKfree(buf);
			GDKfree(localbuf);
			return res;
		}
#ifdef _DEBUG_TABLET_
		if ((i % 1000000) == 0)
			mnstr_printf(GDKout, "#dumped " BUNFMT " lines\n", i);
#endif
	}
	GDKfree(localbuf);
	GDKfree(buf);
	return res;
}

static int
output_file_ordered(Tablet *as, BAT *order, stream *fd)
{
	size_t len = BUFSIZ;
	int res = 0;
	char *buf = GDKzalloc(len);
	BUN p, q;
	BUN i = 0;
	BUN offset = as->offset;

	if (buf == NULL)
		return -1;
	for (q = offset + as->nr, p = offset; p < q; p++, i++) {
		oid h = order->hseqbase + p;

		if ((res = output_line_lookup(&buf, &len, as->format, fd, as->nr_attrs, h)) < 0) {
			GDKfree(buf);
			return res;
		}
#ifdef _DEBUG_TABLET_
		if ((i % 1000000) == 0)
			mnstr_printf(GDKout, "#dumped " BUNFMT " lines\n", i);
#endif
	}
	GDKfree(buf);
	return res;
}

int
TABLEToutput_file(Tablet *as, BAT *order, stream *s)
{
	oid base = oid_nil;
	BUN maxnr = BATcount(order);
	int ret = 0;

	/* only set nr if it is zero or lower (bogus) to the maximum value
	 * possible (BATcount), if already set within BATcount range,
	 * preserve value such that for instance SQL's reply_size still
	 * works
	 */
	if (as->nr == BUN_NONE || as->nr > maxnr)
		as->nr = maxnr;

	base = check_BATs(as);
	if (!is_oid_nil(base)) {
		if (order->hseqbase == base)
			ret = output_file_dense(as, s);
		else
			ret = output_file_ordered(as, order, s);
	} else {
		ret = output_file_default(as, order, s);
	}
	return ret;
}

/*
 *  Niels Nes, Martin Kersten
 *
 * Parallel bulk load for SQL
 * The COPY INTO command for SQL is heavily CPU bound, which means
 * that ideally we would like to exploit the multi-cores to do that
 * work in parallel.
 * Complicating factors are the initial record offset, the
 * possible variable length of the input, and the original sort order
 * that should preferable be maintained.
 *
 * The code below consists of a file reader, which breaks up the
 * file into chunks of distinct lines. Then multiple parallel threads
 * grab them, and break them on the field boundaries.
 * After all fields are identified this way, the columns are converted
 * and stored in the BATs.
 *
 * The threads get a reference to a private copy of the READERtask.
 * It includes a list of columns they should handle. This is a basis
 * to distributed cheap and expensive columns over threads.
 *
 * The file reader overlaps IO with updates of the BAT.
 * Also the buffer size of the block stream might be a little small for
 * this task (1MB). It has been increased to 8MB, which indeed improved.
 *
 * The work divider allocates subtasks to threads based on the
 * observed time spending so far.
 */

/* #define MLOCK_TST did not make a difference on sf10 */

#define BREAKLINE 1
#define UPDATEBAT 2
#define SYNCBAT 3
#define ENDOFCOPY 4

typedef struct {
	Client cntxt;
	int id;						/* for self reference */
	int state;					/* line break=1 , 2 = update bat */
	int workers;				/* how many concurrent ones */
	int error;					/* error during line break */
	int next;
	int limit;
	BUN cnt, maxrow;			/* first row in file chunk. */
	lng skip;					/* number of lines to be skipped */
	lng *time, wtime;			/* time per col + time per thread */
	int rounds;					/* how often did we divide the work */
	int ateof;					/* io control */
	bstream *b;
	stream *out;
	MT_Id tid;
	MT_Sema producer;			/* reader waits for call */
	MT_Sema consumer;			/* reader waits for call */
	MT_Sema sema; /* threads wait for work , negative next implies exit */
	MT_Sema reply;				/* let reader continue */
	Tablet *as;
	char *errbuf;
	const char *csep, *rsep;
	size_t seplen, rseplen;
	char quote;

	char *base[MAXBUFFERS], *input[MAXBUFFERS];	/* buffers for line splitter and tokenizer */
	size_t rowlimit[MAXBUFFERS]; /* determines maximal record length buffer */
	char **lines[MAXBUFFERS];
	int top[MAXBUFFERS];		/* number of lines in this buffer */
	int cur;  /* current buffer used by splitter and update threads */

	int *cols;					/* columns to handle */
	char ***fields;
	int besteffort;
	bte *rowerror;
	int errorcnt;
} READERtask;

static void
tablet_error(READERtask *task, lng row, int col, const char *msg, const char *fcn)
{
	if (task->cntxt->error_row != NULL) {
		MT_lock_set(&errorlock);
		if (BUNappend(task->cntxt->error_row, &row, false) != GDK_SUCCEED ||
			BUNappend(task->cntxt->error_fld, &col, false) != GDK_SUCCEED ||
			BUNappend(task->cntxt->error_msg, msg, false) != GDK_SUCCEED ||
			BUNappend(task->cntxt->error_input, fcn, false) != GDK_SUCCEED)
			task->besteffort = 0;
		if (task->as->error == NULL && (msg == NULL || (task->as->error = GDKstrdup(msg)) == NULL)) {
			task->as->error = createException(MAL, "sql.copy_from", SQLSTATE(HY001) MAL_MALLOC_FAIL);
			task->besteffort = 0;
		}
		if (!is_lng_nil(row) && task->rowerror)
			task->rowerror[row]++;
#ifdef _DEBUG_TABLET_
		mnstr_printf(GDKout, "#tablet_error: " LLFMT ",%d:%s:%s\n",
					 row, col, msg, fcn);
#endif
		task->errorcnt++;
		MT_lock_unset(&errorlock);
	} else {
		MT_lock_set(&errorlock);
		if (task->as->error == NULL && (msg == NULL || (task->as->error = GDKstrdup(msg)) == NULL)) {
			task->as->error = createException(MAL, "sql.copy_from", SQLSTATE(HY001) MAL_MALLOC_FAIL);
			task->besteffort = 0;
		}
		task->errorcnt++;
		MT_lock_unset(&errorlock);
	}
}

/*
 * The line is broken into pieces directly on their field separators. It assumes that we have
 * the record in the cache already, so we can do most work quickly.
 * Furthermore, it assume a uniform (SQL) pattern, without whitespace skipping, but with quote and separator.
 */

static size_t
mystrlen(const char *s)
{
	/* Calculate and return the space that is needed for the function
	 * mycpstr below to do its work. */
	size_t len = 0;
	const char *s0 = s;

	while (*s) {
		if ((*s & 0x80) == 0) {
			;
		} else if ((*s & 0xC0) == 0x80) {
			/* continuation byte */
			len += 3;
		} else if ((*s & 0xE0) == 0xC0) {
			/* two-byte sequence */
			if ((s[1] & 0xC0) != 0x80)
				len += 3;
			else
				s += 2;
		} else if ((*s & 0xF0) == 0xE0) {
			/* three-byte sequence */
			if ((s[1] & 0xC0) != 0x80 || (s[2] & 0xC0) != 0x80)
				len += 3;
			else
				s += 3;
		} else if ((*s & 0xF8) == 0xF0) {
			/* four-byte sequence */
			if ((s[1] & 0xC0) != 0x80 || (s[2] & 0xC0) != 0x80 || (s[3] & 0xC0) != 0x80)
				len += 3;
			else
				s += 4;
		} else {
			/* not a valid start byte */
			len += 3;
		}
		s++;
	}
	len += s - s0;
	return len;
}

static char *
mycpstr(char *t, const char *s)
{
	/* Copy the string pointed to by s into the buffer pointed to by
	 * t, and return a pointer to the NULL byte at the end.  During
	 * the copy we translate incorrect UTF-8 sequences to escapes
	 * looking like <XX> where XX is the hexadecimal representation of
	 * the incorrect byte.  The buffer t needs to be large enough to
	 * hold the result, but the correct length can be calculated by
	 * the function mystrlen above.*/
	while (*s) {
		if ((*s & 0x80) == 0) {
			*t++ = *s++;
		} else if ((*s & 0xC0) == 0x80) {
			t += sprintf(t, "<%02X>", (uint8_t) *s++);
		} else if ((*s & 0xE0) == 0xC0) {
			/* two-byte sequence */
			if ((s[1] & 0xC0) != 0x80)
				t += sprintf(t, "<%02X>", (uint8_t) *s++);
			else {
				*t++ = *s++;
				*t++ = *s++;
			}
		} else if ((*s & 0xF0) == 0xE0) {
			/* three-byte sequence */
			if ((s[1] & 0xC0) != 0x80 || (s[2] & 0xC0) != 0x80)
				t += sprintf(t, "<%02X>", (uint8_t) *s++);
			else {
				*t++ = *s++;
				*t++ = *s++;
				*t++ = *s++;
			}
		} else if ((*s & 0xF8) == 0xF0) {
			/* four-byte sequence */
			if ((s[1] & 0xC0) != 0x80 || (s[2] & 0xC0) != 0x80 || (s[3] & 0xC0) != 0x80)
				t += sprintf(t, "<%02X>", (uint8_t) *s++);
			else {
				*t++ = *s++;
				*t++ = *s++;
				*t++ = *s++;
				*t++ = *s++;
			}
		} else {
			/* not a valid start byte */
			t += sprintf(t, "<%02X>", (uint8_t) *s++);
		}
	}
	*t = 0;
	return t;
}

static str
SQLload_error(READERtask *task, lng idx, BUN attrs)
{
	str line;
	char *s;
	size_t sz = 0;
	BUN i;

	for (i = 0; i < attrs; i++) {
		if (task->fields[i][idx])
			sz += mystrlen(task->fields[i][idx]);
		sz += task->seplen;
	}

	s = line = GDKmalloc(sz + task->rseplen + 1);
	if (line == 0) {
		tablet_error(task, idx, int_nil, "SQLload malloc error", "SQLload_error");
		return 0;
	}
	for (i = 0; i < attrs; i++) {
		if (task->fields[i][idx])
			s = mycpstr(s, task->fields[i][idx]);
		if (i < attrs - 1)
			s = mycpstr(s, task->csep);
	}
	strcpy(s, task->rsep);
	return line;
}

/*
 * The parsing of the individual values is straightforward. If the value represents
 * the null-replacement string then we grab the underlying nil.
 * If the string starts with the quote identified from SQL, we locate the tail
 * and interpret the body.
 *
 * If inserting fails, we return -1; if the value cannot be parsed, we
 * return -1 if besteffort is not set, otherwise we return 0, but in
 * either case an entry is added to the error table.
 */
static inline int
SQLinsert_val(READERtask *task, int col, int idx)
{
	Column *fmt = task->as->format + col;
	const void *adt;
	char buf[BUFSIZ];
	char *s = task->fields[col][idx];
	char *err = NULL;
	int ret = 0;

	/* include testing on the terminating null byte !! */
	if (s == 0) {
		adt = fmt->nildata;
		fmt->c->tnonil = 0;
	} else
		adt = fmt->frstr(fmt, fmt->adt, s);

	/* col is zero-based, but for error messages it needs to be
	 * one-based, and from here on, we only use col anymore to produce
	 * error messages */
	col++;

	if (adt == NULL) {
		lng row = task->cnt + idx + 1;
		snprintf(buf, sizeof(buf), "'%s' expected", fmt->type);
		err = SQLload_error(task, idx, task->as->nr_attrs);
		if (task->rowerror) {
			if (s) {
				size_t slen = mystrlen(s);
				char *scpy = GDKmalloc(slen + 1);
				if ( scpy == NULL){
					task->rowerror[idx]++;
					task->errorcnt++;
					task->besteffort = 0; /* no longer best effort */
					if (BUNappend(task->cntxt->error_row, &row, false) != GDK_SUCCEED ||
						BUNappend(task->cntxt->error_fld, &col, false) != GDK_SUCCEED ||
						BUNappend(task->cntxt->error_msg, SQLSTATE(HY001) MAL_MALLOC_FAIL, false) != GDK_SUCCEED ||
						BUNappend(task->cntxt->error_input, err, false) != GDK_SUCCEED) {
						;		/* ignore error here: we're already not best effort */
					}
					GDKfree(err);
					return -1;
				}
				mycpstr(scpy, s);
				s = scpy;
			}
			MT_lock_set(&errorlock);
			snprintf(buf, sizeof(buf),
					 "line " LLFMT " field %s '%s' expected%s%s%s",
					 row, fmt->name ? fmt->name : "", fmt->type,
					 s ? " in '" : "", s ? s : "", s ? "'" : "");
			GDKfree(s);
			buf[sizeof(buf)-1]=0;
			if (task->as->error == NULL && (task->as->error = GDKstrdup(buf)) == NULL)
				task->as->error = createException(MAL, "sql.copy_from", SQLSTATE(HY001) MAL_MALLOC_FAIL);
			task->rowerror[idx]++;
			task->errorcnt++;
			if (BUNappend(task->cntxt->error_row, &row, false) != GDK_SUCCEED ||
				BUNappend(task->cntxt->error_fld, &col, false) != GDK_SUCCEED ||
				BUNappend(task->cntxt->error_msg, buf, false) != GDK_SUCCEED ||
				BUNappend(task->cntxt->error_input, err, false) != GDK_SUCCEED) {
				freeException(err);
				task->besteffort = 0; /* no longer best effort */
				MT_lock_unset(&errorlock);
				return -1;
			}
			MT_lock_unset(&errorlock);
		}
		ret = -!task->besteffort; /* yep, two unary operators ;-) */
		freeException(err);
		/* replace it with a nil */
		adt = fmt->nildata;
		fmt->c->tnonil = 0;
	}
	bunfastapp(fmt->c, adt);
	return ret;
  bunins_failed:
	if (task->rowerror) {
		lng row = BATcount(fmt->c);
		MT_lock_set(&errorlock);
		if (BUNappend(task->cntxt->error_row, &row, false) != GDK_SUCCEED ||
			BUNappend(task->cntxt->error_fld, &col, false) != GDK_SUCCEED ||
			BUNappend(task->cntxt->error_msg, "insert failed", false) != GDK_SUCCEED ||
			(err = SQLload_error(task, idx,task->as->nr_attrs)) == NULL ||
			BUNappend(task->cntxt->error_input, err, false) != GDK_SUCCEED)
			task->besteffort = 0;
		freeException(err);
		task->rowerror[idx]++;
		task->errorcnt++;
		MT_lock_unset(&errorlock);
	}
	task->besteffort = 0;		/* no longer best effort */
	return -1;
}

static int
SQLworker_column(READERtask *task, int col)
{
	int i;
	Column *fmt = task->as->format;

	if (fmt[col].c == NULL)
		return 0;

	/* watch out for concurrent threads */
	MT_lock_set(&mal_copyLock);
	if (!fmt[col].skip && BATcapacity(fmt[col].c) < BATcount(fmt[col].c) + task->next) {
		if (BATextend(fmt[col].c, BATgrows(fmt[col].c) + task->limit) != GDK_SUCCEED) {
			tablet_error(task, lng_nil, col, "Failed to extend the BAT, perhaps disk full\n", "SQLworker_column");
			MT_lock_unset(&mal_copyLock);
			return -1;
		}
	}
	MT_lock_unset(&mal_copyLock);

	for (i = 0; i < task->top[task->cur]; i++) {
		if (!fmt[col].skip && SQLinsert_val(task, col, i) < 0) {
			BATsetcount(fmt[col].c, BATcount(fmt[col].c));
			return -1;
		}
	}
	BATsetcount(fmt[col].c, BATcount(fmt[col].c));
	fmt[col].c->theap.dirty |= BATcount(fmt[col].c) > 0;

	return 0;
}

/*
 * The lines are broken on the column separator. Any error is shown and reflected with
 * setting the reference of the offending row fields to NULL.
 * This allows the loading to continue, skipping the minimal number of rows.
 * The details about the locations can be inspected from the error table.
 * We also trim the quotes around strings.
 */
static int
SQLload_parse_line(READERtask *task, int idx)
{
	BUN i;
	char errmsg[BUFSIZ];
	char ch = *task->csep;
	char *line = task->lines[task->cur][idx];
	Tablet *as = task->as;
	Column *fmt = as->format;
	int error = 0;
	str errline = 0;

#ifdef _DEBUG_TABLET_
	char *s;
	//mnstr_printf(GDKout, "#SQL break line id %d  state %d\n%s", task->id, idx, line);
#endif
	assert(idx < task->top[task->cur]);
	assert(line);
	errmsg[0] = 0;

	if (task->quote || task->seplen != 1) {
		for (i = 0; i < as->nr_attrs; i++) {
			int quote = 0;
			task->fields[i][idx] = line;
			/* recognize fields starting with a quote, keep them */
			if (*line && *line == task->quote) {
				quote = 1;
#ifdef _DEBUG_TABLET_
				mnstr_printf(GDKout, "before #1 %s\n", s = line);
#endif
				task->fields[i][idx] = line + 1;
				line = tablet_skip_string(line + 1, task->quote);
#ifdef _DEBUG_TABLET_
				mnstr_printf(GDKout, "after #1 %s\n", s);
#endif
				if (!line) {
					errline = SQLload_error(task, idx, i+1);
					snprintf(errmsg, BUFSIZ, "Quote (%c) missing", task->quote);
					tablet_error(task, idx, (int) i, errmsg, errline);
					GDKfree(errline);
					error++;
					goto errors1;
				} else
					*line++ = 0;
			}

			/* eat away the column separator */
			for (; *line; line++)
				if (*line == '\\') {
					if (line[1])
						line++;
				} else if (*line == ch && (task->seplen == 1 || strncmp(line, task->csep, task->seplen) == 0)) {
					*line = 0;
					line += task->seplen;
					goto endoffieldcheck;
				}

			/* not enough fields */
			if (i < as->nr_attrs - 1) {
				errline = SQLload_error(task, idx, i+1);
				snprintf(errmsg, BUFSIZ, "Column value "BUNFMT" missing ", i+1);
				tablet_error(task, idx, (int) i, errmsg, errline);
				GDKfree(errline);
				error++;
			  errors1:
				/* we save all errors detected  as NULL values */
				for (; i < as->nr_attrs; i++)
					task->fields[i][idx] = NULL;
				i--;
			} 
		  endoffieldcheck:
			;
			/* check for user defined NULL string */
			if ((!quote || !fmt->null_length) && fmt->nullstr && task->fields[i][idx] && strncasecmp(task->fields[i][idx], fmt->nullstr, fmt->null_length + 1) == 0)
				task->fields[i][idx] = 0;
		}
	} else {
		assert(!task->quote);
		assert(task->seplen == 1);
		for (i = 0; i < as->nr_attrs; i++) {
			task->fields[i][idx] = line;
#ifdef _DEBUG_TABLET_
			mnstr_printf(GDKout, "before #2 %s\n", line);
#endif
			/* eat away the column separator */
			for (; *line; line++)
				if (*line == '\\') {
					if (line[1])
						line++;
				} else if (*line == ch) {
					*line = 0;
					line++;
					goto endoffield2;
				}
#ifdef _DEBUG_TABLET_
			mnstr_printf(GDKout, "#after #23 %s\n", line);
#endif
			/* not enough fields */
			if (i < as->nr_attrs - 1) {
				errline = SQLload_error(task, idx,i+1);
				snprintf(errmsg, BUFSIZ, "Column value "BUNFMT" missing",i+1);
				tablet_error(task, idx, (int) i, errmsg, errline);
				GDKfree(errline);
				error++;
				/* we save all errors detected */
				for (; i < as->nr_attrs; i++)
					task->fields[i][idx] = NULL;
				i--;
			}
		  endoffield2:
			;
			/* check for user defined NULL string */
			if (fmt->nullstr && task->fields[i][idx] && strncasecmp(task->fields[i][idx], fmt->nullstr, fmt->null_length + 1) == 0) {
				task->fields[i][idx] = 0;
			}
		}
	}
	/* check for too many values as well*/
	if (line && *line && i == as->nr_attrs) {
		errline = SQLload_error(task, idx, task->as->nr_attrs);
		snprintf(errmsg, BUFSIZ, "Leftover data '%s'",line);
		tablet_error(task, idx, (int) i, errmsg, errline);
		GDKfree(errline);
		error++;
	}
#ifdef _DEBUG_TABLET_
	if (error)
		mnstr_printf(GDKout, "#line break failed %d:%s\n", idx, line ? line : "EOF");
#endif
	return error ? -1 : 0;
}

static void
SQLworker(void *arg)
{
	READERtask *task = (READERtask *) arg;
	unsigned int i;
	int j, piece;
	lng t0;
	Thread thr;

	thr = THRnew("SQLworker");
	if (thr == NULL) {
		task->id = -1;			/* signal failure */
		MT_sema_up(&task->reply);
		return;
	}
	MT_sema_up(&task->reply);

	GDKsetbuf(GDKzalloc(GDKMAXERRLEN));	/* where to leave errors */
	GDKclrerr();
	task->errbuf = GDKerrbuf;
#ifdef _DEBUG_TABLET_
	mnstr_printf(GDKout, "#SQLworker %d started\n", task->id);
#endif
	while (task->top[task->cur] >= 0) {
		MT_sema_down(&task->sema);


		/* stage one, break the lines spread the worker over the workers */
		switch (task->state) {
		case BREAKLINE:
			t0 = GDKusec();
			piece = (task->top[task->cur] + task->workers) / task->workers;
#ifdef _DEBUG_TABLET_
			mnstr_printf(GDKout, "#SQLworker id %d %d  piece %d-%d\n",
						 task->id, task->top[task->cur], piece * task->id,
						 (task->id +1) *piece);
#endif
			for (j = piece * task->id; j < task->top[task->cur] && j < piece * (task->id +1); j++)
				if (task->lines[task->cur][j]) {
					if (SQLload_parse_line(task, j) < 0) {
						task->errorcnt++;
						// early break unless best effort
						if (!task->besteffort)
							break;
					}
				}
			task->wtime = GDKusec() - t0;
			break;
		case UPDATEBAT:
			/* stage two, updating the BATs */
			for (i = 0; i < task->as->nr_attrs; i++)
				if (task->cols[i]) {
					t0 = GDKusec();
					if (SQLworker_column(task, task->cols[i] - 1) < 0)
						break;
					t0 = GDKusec() - t0;
					task->time[i] += t0;
					task->wtime += t0;
				}
			break;
		case SYNCBAT:
			for (i = 0; i < task->as->nr_attrs; i++)
				if (task->cols[i]) {
					BAT *b = task->as->format[task->cols[i] - 1].c;
					if (b == NULL)
						continue;
					t0 = GDKusec();
					if (b->batPersistence != PERSISTENT)
						continue;
					BATmsync(b);
					t0 = GDKusec() - t0;
					task->time[i] += t0;
					task->wtime += t0;
				}
			break;
		case ENDOFCOPY:
			MT_sema_up(&task->reply);
#ifdef _DEBUG_TABLET_
			mnstr_printf(GDKout, "#SQLworker terminated\n");
#endif
			goto do_return;
		}
		MT_sema_up(&task->reply);
	}
#ifdef _DEBUG_TABLET_
	mnstr_printf(GDKout, "#SQLworker exits\n");
#endif
	MT_sema_up(&task->reply);

  do_return:
	GDKfree(GDKerrbuf);
	GDKsetbuf(0);
	THRdel(thr);
}

static void
SQLworkdivider(READERtask *task, READERtask *ptask, int nr_attrs, int threads)
{
	int i, j, mi;
	lng loc[MAXWORKERS];

	/* after a few rounds we stick to the work assignment */
	if (task->rounds > 8)
		return;
	/* simple round robin the first time */
	if (threads == 1 || task->rounds++ == 0) {
		for (i = j = 0; i < nr_attrs; i++, j++)
			ptask[j % threads].cols[i] = task->cols[i];
		return;
	}
	memset((char *) loc, 0, sizeof(lng) * MAXWORKERS);
	/* use of load directives */
	for (i = 0; i < nr_attrs; i++)
		for (j = 0; j < threads; j++)
			ptask[j].cols[i] = 0;

	/* now allocate the work to the threads */
	for (i = 0; i < nr_attrs; i++, j++) {
		mi = 0;
		for (j = 1; j < threads; j++)
			if (loc[j] < loc[mi])
				mi = j;

		ptask[mi].cols[i] = task->cols[i];
		loc[mi] += task->time[i];
	}
	/* reset the timer */
	for (i = 0; i < nr_attrs; i++, j++)
		task->time[i] = 0;
}

/*
 * Reading is handled by a separate task as a preparation for more parallelism.
 * A buffer is filled with proper lines.
 * If we are reading from a file then a double buffering scheme ia activated.
 * Reading from the console (stdin) remains single buffered only.
 * If we end up with unfinished records, then the rowlimit will terminate the process.
 */

static void
SQLproducer(void *p)
{
	READERtask *task = (READERtask *) p;
	int consoleinput = 0;
	int cur = 0;		// buffer being filled
	int blocked[MAXBUFFERS] = { 0 };
	int ateof[MAXBUFFERS] = { 0 };
	BUN cnt = 0, bufcnt[MAXBUFFERS] = { 0 };
	char *end, *e, *s, *base;
	const char *rsep = task->rsep;
	size_t rseplen = strlen(rsep), partial = 0;
	char quote = task->quote;
	Thread thr;

	thr = THRnew("SQLproducer");
	if (thr == NULL) {
		task->id = -1;
		tablet_error(task, lng_nil, int_nil, "cannot create producer thread", "SQLproducer");
		MT_sema_up(&task->consumer);
		return;
	}
	MT_sema_up(&task->consumer);
	MT_sema_down(&task->producer);
	if (task->id < 0) {
		THRdel(thr);
		return;
	}

#ifdef _DEBUG_TABLET_CNTRL
	mnstr_printf(GDKout, "#SQLproducer started size %"PRIu64" len %"PRIu64"\n",
				 (uint64_t) task->b->size, (uint64_t) task->b->len);
#endif
	base = end = s = task->input[cur];
	*s = 0;
	task->cur = cur;
	if (task->as->filename == NULL) {
		consoleinput = 1;
		goto parseSTDIN;
	}
	for (;;) {
		ateof[cur] = tablet_read_more(task->b, task->out, task->b->size) == EOF;
#ifdef _DEBUG_TABLET_CNTRL
		if (ateof[cur] == 0)
			mnstr_printf(GDKout, "#read %"PRIu64" bytes pos = %"PRIu64" eof=%d offset=" LLFMT " \n",
						(uint64_t) task->b->len, (uint64_t) task->b->pos, task->b->eof,
						 (lng) (s - task->input[cur]));
#endif
		// we may be reading from standard input and may be out of input
		// warn the consumers
		if (ateof[cur] && partial) {
			if (partial) {
				tablet_error(task, lng_nil, int_nil, "incomplete record at end of file", s);
				task->b->pos += partial;
			}
			goto reportlackofinput;
		}

		if (task->errbuf && task->errbuf[0]) {
			if (GDKerrbuf && GDKerrbuf[0]) {
				tablet_error(task, lng_nil, int_nil, GDKerrbuf, "SQLload_file");
#ifdef _DEBUG_TABLET_CNTRL
				mnstr_printf(GDKout, "#bailout on SQLload %s\n", msg);
#endif
				ateof[cur] = 1;
				break;
			}
		}

	  parseSTDIN:
#ifdef _DEBUG_TABLET_
		if (ateof[cur] == 0)
			mnstr_printf(GDKout, "#parse input:%.63s\n",
						 task->b->buf + task->b->pos);
#endif
		/* copy the stream buffer into the input buffer, which is guaranteed larger, but still limited */
		partial = 0;
		task->top[cur] = 0;
		s = task->input[cur];
		base = end;
		/* avoid too long records */
		if (end - s + task->b->len - task->b->pos >= task->rowlimit[cur]) {
			/* the input buffer should be extended, but 'base' is not shared
			   between the threads, which we can not now update.
			   Mimick an ateof instead; */
			tablet_error(task, lng_nil, int_nil, "record too long", "");
			ateof[cur] = 1;
#ifdef _DEBUG_TABLET_CNTRL
			mnstr_printf(GDKout, "#bailout on SQLload confronted with too large record\n");
#endif
			goto reportlackofinput;
		}
		memcpy(end, task->b->buf + task->b->pos, task->b->len - task->b->pos);
		end = end + task->b->len - task->b->pos;
		*end = '\0';	/* this is safe, as the stream ensures an extra byte */
		/* Note that we rescan from the start of a record (the last
		 * partial buffer from the previous iteration), even if in the
		 * previous iteration we have already established that there
		 * is no record separator in the first, perhaps significant,
		 * part of the buffer. This is because if the record separator
		 * is longer than one byte, it is too complex (i.e. would
		 * require more state) to be sure what the state of the quote
		 * status is when we back off a few bytes from where the last
		 * scan ended (we need to back off some since we could be in
		 * the middle of the record separator).  If this is too
		 * costly, we have to rethink the matter. */
		for (e = s; *e && e < end && cnt < task->maxrow;) {
			/* tokenize the record completely the format of the input
			 * should comply to the following grammar rule [
			 * [[quote][[esc]char]*[quote]csep]*rsep]* where quote is
			 * a single user defined character within the quoted
			 * fields a character may be escaped with a backslash The
			 * user should supply the correct number of fields.
			 * In the first phase we simply break the lines at the
			 * record boundary. */
			if (quote == 0) {
				switch (rseplen) {
				case 1:
					for (; *e; e++) {
						if (*e == '\\') {
							if (*++e == 0)
								break;
							continue;
						}
						if (*e == *rsep)
							break;
					}
					break;
				case 2:
					for (; *e; e++) {
						if (*e == '\\') {
							if (*++e == 0)
								break;
							continue;
						}
						if (*e == *rsep && e[1] == rsep[1])
							break;
					}
					break;
				default:
					for (; *e; e++) {
						if (*e == '\\') {
							if (*++e == 0)
								break;
							continue;
						}
						if (*e == *rsep && strncmp(e, rsep, rseplen) == 0)
							break;
					}
				}
				if (*e == 0) {
					partial = e - s;
					e = 0;	/* nonterminated record, we need more */
				}
			} else {
				char q = 0;

				switch (rseplen) {
				case 1:
					for (; *e; e++) {
						if (*e == q)
							q = 0;
						else if (*e == quote)
							q = *e;
						else if (*e == '\\') {
							if (*++e == 0)
								break;
						} else if (!q && *e == *rsep)
							break;
					}
					if (*e == 0) {
						partial = e - s;
						e = 0;	/* nonterminated record, we need more */
					}
					break;
				case 2:
					for (; *e; e++) {
						if (*e == q)
							q = 0;
						else if (*e == quote)
							q = *e;
						else if (*e == '\\') {
							if (e[1])
								e++;
						} else if (!q && e[0] == rsep[0] && e[1] == rsep[1])
							break;
					}
					if (*e == 0) {
						partial = e - s;
						e = 0;	/* nonterminated record, we need more */
					}
					break;
				default:
					for (; *e; e++) {
						if (*e == q)
							q = 0;
						else if (*e == quote)
							q = *e;
						else if (*e == '\\') {
							if (*++e == 0)
								break;
						} else if (!q && *e == *rsep && strncmp(e, rsep, rseplen) == 0)
							break;
					}
					if (*e == 0) {
						partial = e - s;
						e = 0;	/* nonterminated record, we need more */
					}
				}
			}
			/* check for incomplete line and end of buffer condition */
			if (e) {
				/* found a complete record, do we need to skip it? */
				if (--task->skip < 0 && cnt < task->maxrow) {
					task->lines[cur][task->top[cur]++] = s;
					cnt++;
				}
				*e = '\0';
				s = e + rseplen;
				e = s;
				task->b->pos += (size_t) (e - base);
				base = e;
				if (task->top[cur] == task->limit)
					break;
			} else {
				/* found an incomplete record, saved for next round */
				if (s+partial < end) {
					/* found a EOS in the input */
					tablet_error(task, lng_nil, int_nil, "record too long (EOS found)", "");
					ateof[cur] = 1;
					goto reportlackofinput;
				}
				break;
			}
		}

	  reportlackofinput:
#ifdef _DEBUG_TABLET_CNTRL
		mnstr_printf(GDKout, "#SQL producer got buffer %d filled with %d records \n",
					 cur, task->top[cur]);
#endif
		if (consoleinput) {
			task->cur = cur;
			task->ateof = ateof[cur];
			task->cnt = bufcnt[cur];
			/* tell consumer to go ahead */
			MT_sema_up(&task->consumer);
			/* then wait until it is done */
			MT_sema_down(&task->producer);
			if (cnt == task->maxrow) {
				THRdel(thr);
				return;
			}
		} else {
			assert(!blocked[cur]);
			if (blocked[(cur + 1) % MAXBUFFERS]) {
				/* first wait until other buffer is done */
#ifdef _DEBUG_TABLET_CNTRL
				mnstr_printf(GDKout, "#wait for consumers to finish buffer %d\n",
							 (cur + 1) % MAXBUFFERS);
#endif
				MT_sema_down(&task->producer);
				blocked[(cur + 1) % MAXBUFFERS] = 0;
				if (task->state == ENDOFCOPY) {
					THRdel(thr);
					return;
				}
			}
			/* other buffer is done, proceed with current buffer */
			assert(!blocked[(cur + 1) % MAXBUFFERS]);
			blocked[cur] = 1;
			task->cur = cur;
			task->ateof = ateof[cur];
			task->cnt = bufcnt[cur];
#ifdef _DEBUG_TABLET_CNTRL
			mnstr_printf(GDKout, "#SQL producer got buffer %d filled with %d records \n",
						 cur, task->top[cur]);
#endif
			MT_sema_up(&task->consumer);

			cur = (cur + 1) % MAXBUFFERS;
#ifdef _DEBUG_TABLET_CNTRL
			mnstr_printf(GDKout, "#May continue with buffer %d\n", cur);
#endif
			if (cnt == task->maxrow) {
				MT_sema_down(&task->producer);
#ifdef _DEBUG_TABLET_CNTRL
				mnstr_printf(GDKout, "#Producer delivered all\n");
#endif
				THRdel(thr);
				return;
			}
		}
#ifdef _DEBUG_TABLET_CNTRL
		mnstr_printf(GDKout, "#Continue producer buffer %d\n", cur);
#endif
		/* we ran out of input? */
		if (task->ateof) {
#ifdef _DEBUG_TABLET_CNTRL
			mnstr_printf(GDKout, "#Producer encountered eof\n");
#endif
			THRdel(thr);
			return;
		}
		/* consumers ask us to stop? */
		if (task->state == ENDOFCOPY) {
#ifdef _DEBUG_TABLET_CNTRL
			if (ateof[cur] == 0)
				mnstr_printf(GDKout, "#SQL producer early exit %.63s\n",
							 task->b->buf + task->b->pos);
#endif
			THRdel(thr);
			return;
		}
		bufcnt[cur] = cnt;
#ifdef _DEBUG_TABLET_CNTRL
		if (ateof[cur] == 0)
			mnstr_printf(GDKout, "#shuffle %"PRIu64": %.63s\n", (uint64_t) strlen(s), s);
#endif
		/* move the non-parsed correct row data to the head of the next buffer */
		s = task->input[cur];
		if (partial == 0 || cnt >= task->maxrow) {
			memcpy(s, task->b->buf + task->b->pos, task->b->len - task->b->pos);
			end = s + task->b->len - task->b->pos;
		} else {
			end = s;
		}
		*end = '\0';	/* this is safe, as the stream ensures an extra byte */
	}
	if (cnt < task->maxrow && task->maxrow != BUN_NONE) {
		char msg[256];
		snprintf(msg, sizeof(msg), "incomplete record at end of file:%s\n", s);
		task->as->error = GDKstrdup(msg);
		tablet_error(task, lng_nil, int_nil, "incomplete record at end of file", s);
		task->b->pos += partial;
	}
	THRdel(thr);
}

static void
create_rejects_table(Client cntxt)
{
	MT_lock_set(&mal_contextLock);
	if (cntxt->error_row == NULL) {
		cntxt->error_row = COLnew(0, TYPE_lng, 0, TRANSIENT);
		cntxt->error_fld = COLnew(0, TYPE_int, 0, TRANSIENT);
		cntxt->error_msg = COLnew(0, TYPE_str, 0, TRANSIENT);
		cntxt->error_input = COLnew(0, TYPE_str, 0, TRANSIENT);
		if (cntxt->error_row == NULL || cntxt->error_fld == NULL || cntxt->error_msg == NULL || cntxt->error_input == NULL) {
			if (cntxt->error_row)
				BBPunfix(cntxt->error_row->batCacheid);
			if (cntxt->error_fld)
				BBPunfix(cntxt->error_fld->batCacheid);
			if (cntxt->error_msg)
				BBPunfix(cntxt->error_msg->batCacheid);
			if (cntxt->error_input)
				BBPunfix(cntxt->error_input->batCacheid);
		} else {
			BBPkeepref(cntxt->error_row->batCacheid);
			BBPkeepref(cntxt->error_fld->batCacheid);
			BBPkeepref(cntxt->error_msg->batCacheid);
			BBPkeepref(cntxt->error_input->batCacheid);
		}
	}
	MT_lock_unset(&mal_contextLock);
}

BUN
SQLload_file(Client cntxt, Tablet *as, bstream *b, stream *out, const char *csep, const char *rsep, char quote, lng skip, lng maxrow, int best)
{
	BUN cnt = 0, cntstart = 0, leftover = 0;
	int res = 0;		/* < 0: error, > 0: success, == 0: continue processing */
	int j;
	BUN firstcol;
	BUN i, attr;
	READERtask task;
	READERtask ptask[MAXWORKERS];
	int threads = (!maxrow || maxrow > (1 << 16)) ? (GDKnr_threads < MAXWORKERS && GDKnr_threads > 1 ? GDKnr_threads - 1 : MAXWORKERS - 1) : 1;
	lng lio = 0, tio, t1 = 0, total = 0, iototal = 0;
	int vmtrim = GDK_vm_trim;

#ifdef _DEBUG_TABLET_
	mnstr_printf(GDKout, "#Prepare copy work for %d threads col '%s' rec '%s' quot '%c'\n",
				 threads, csep, rsep, quote);
#endif
	memset(ptask, 0, sizeof(ptask));
	memset(&task, 0, sizeof(task));

	task.cntxt = cntxt;

	/* create the reject tables */
	create_rejects_table(task.cntxt);
	if (task.cntxt->error_row == NULL || task.cntxt->error_fld == NULL || task.cntxt->error_msg == NULL || task.cntxt->error_input == NULL) {
		tablet_error(&task, lng_nil, int_nil, "SQLload initialization failed", "");
		goto bailout;
	}

	/* trimming process should not be active during this process. */
	/* on sf10 experiments it showed a slowdown of a factor 2 on */
	/* large tables. Instead rely on madvise */
	GDK_vm_trim = 0;

	assert(rsep);
	assert(csep);
	assert(maxrow < 0 || maxrow <= (lng) BUN_MAX);
	task.fields = (char ***) GDKzalloc(as->nr_attrs * sizeof(char **));
	task.cols = (int *) GDKzalloc(as->nr_attrs * sizeof(int));
	task.time = (lng *) GDKzalloc(as->nr_attrs * sizeof(lng));
	if (task.fields == NULL || task.cols == NULL || task.time == NULL) {
		tablet_error(&task, lng_nil, int_nil, "memory allocation failed", "SQLload_file");
		goto bailout;
	}
	task.cur = 0;
	for (i = 0; i < MAXBUFFERS; i++) {
		task.base[i] = GDKzalloc(MAXROWSIZE(2 * b->size) + 2);
		task.rowlimit[i] = MAXROWSIZE(2 * b->size);
		if (task.base[i] == 0) {
			tablet_error(&task, lng_nil, int_nil, SQLSTATE(HY001) MAL_MALLOC_FAIL, "SQLload_file");
			goto bailout;
		}
		task.base[i][b->size + 1] = 0;
		task.input[i] = task.base[i] + 1;	/* wrap the buffer with null bytes */
	}
	task.besteffort = best;

	if (maxrow < 0)
		task.maxrow = BUN_MAX;
	else
		task.maxrow = (BUN) maxrow;

	if (task.fields == 0 || task.cols == 0 || task.time == 0) {
		tablet_error(&task, lng_nil, int_nil, SQLSTATE(HY001) MAL_MALLOC_FAIL, "SQLload_file");
		goto bailout;
	}

	task.as = as;
	task.skip = skip;
	task.quote = quote;
	task.csep = csep;
	task.seplen = strlen(csep);
	task.rsep = rsep;
	task.rseplen = strlen(rsep);
	task.errbuf = cntxt->errbuf;

	MT_sema_init(&task.producer, 0, "task.producer");
	MT_sema_init(&task.consumer, 0, "task.consumer");
	task.ateof = 0;
	task.b = b;
	task.out = out;

#ifdef MLOCK_TST
	mlock(task.fields, as->nr_attrs * sizeof(char *));
	mlock(task.cols, as->nr_attrs * sizeof(int));
	mlock(task.time, as->nr_attrs * sizeof(lng));
	for (i = 0; i < MAXBUFFERS; i++)
		mlock(task.base[i], b->size + 2);
#endif
	as->error = NULL;

	/* there is no point in creating more threads than we have columns */
	if (as->nr_attrs < (BUN) threads)
		threads = (int) as->nr_attrs;

	/* allocate enough space for pointers into the buffer pool.  */
	/* the record separator is considered a column */
	task.limit = (int) (b->size / as->nr_attrs + as->nr_attrs);
	for (i = 0; i < as->nr_attrs; i++) {
		task.fields[i] = GDKzalloc(sizeof(char *) * task.limit);
		if (task.fields[i] == 0) {
			if (task.as->error == NULL)
				as->error = createException(MAL, "sql.copy_from", SQLSTATE(HY001) MAL_MALLOC_FAIL);
			goto bailout;
		}
#ifdef MLOCK_TST
		mlock(task.fields[i], sizeof(char *) * task.limit);
#endif
		task.cols[i] = (int) (i + 1);	/* to distinguish non initialized later with zero */
	}
	for (i = 0; i < MAXBUFFERS; i++) {
		task.lines[i] = GDKzalloc(sizeof(char *) * task.limit);
		if (task.lines[i] == NULL) {
			tablet_error(&task, lng_nil, int_nil, SQLSTATE(HY001) MAL_MALLOC_FAIL, "SQLload_file:failed to alloc buffers");
			goto bailout;
		}
	}
	task.rowerror = (bte *) GDKzalloc(sizeof(bte) * task.limit);
	if( task.rowerror == NULL){
		tablet_error(&task, lng_nil, int_nil, SQLSTATE(HY001) MAL_MALLOC_FAIL, "SQLload_file:failed to alloc rowerror buffer");
		goto bailout;
	}

	task.id = 0;
	if(MT_create_thread(&task.tid, SQLproducer, (void *) &task, MT_THR_JOINABLE) < 0) {
		tablet_error(&task, lng_nil, int_nil, SQLSTATE(42000) "failed to start producer thread", "SQLload_file");
		goto bailout;
	}
	/* wait until producer started */
	MT_sema_down(&task.consumer);
	if (task.id < 0) {
		/* producer failed to properly start */
		goto bailout;
	}
#ifdef _DEBUG_TABLET_
	mnstr_printf(GDKout, "#parallel bulk load " LLFMT " - " BUNFMT "\n",
				 skip, task.maxrow);
#endif

	task.workers = threads;
	for (j = 0; j < threads; j++) {
		ptask[j] = task;
		ptask[j].id = j;
		ptask[j].cols = (int *) GDKzalloc(as->nr_attrs * sizeof(int));
		if (ptask[j].cols == 0) {
			tablet_error(&task, lng_nil, int_nil, SQLSTATE(HY001) MAL_MALLOC_FAIL, "SQLload_file");
			task.id = -1;
			MT_sema_up(&task.producer);
			goto bailout;
		}
#ifdef MLOCK_TST
		mlock(ptask[j].cols, sizeof(char *) * task.limit);
#endif
		MT_sema_init(&ptask[j].sema, 0, "ptask[j].sema");
		MT_sema_init(&ptask[j].reply, 0, "ptask[j].reply");
		if(MT_create_thread(&ptask[j].tid, SQLworker, (void *) &ptask[j], MT_THR_JOINABLE) < 0) {
			tablet_error(&task, lng_nil, int_nil, SQLSTATE(42000) "failed to start worker thread", "SQLload_file");
			threads = j;
			for (j = 0; j < threads; j++)
				ptask[j].workers = threads;
		}
		/* wait until thread started */
		MT_sema_down(&ptask[j].reply);
		if (ptask[j].id == -1) {
			/* allocation failure inside thread */
			tablet_error(&task, lng_nil, int_nil, SQLSTATE(42000) "failed to start worker thread", "SQLload_file");
			threads = j;
			for (j = 0; j < threads; j++)
				ptask[j].workers = threads;
		}
	}
	if (threads == 0) {
		/* no threads started */
		task.id = -1;
		MT_sema_up(&task.producer);
		goto bailout;
	}
	MT_sema_up(&task.producer);

	tio = GDKusec();
	tio = GDKusec() - tio;
	t1 = GDKusec();
#ifdef MLOCK_TST
	mlock(task.b->buf, task.b->size);
#endif
	for (firstcol = 0; firstcol < task.as->nr_attrs; firstcol++)
		if (task.as->format[firstcol].c != NULL)
			break;
	while (res == 0 && cnt < task.maxrow) {

		// track how many elements are in the aggregated BATs
		cntstart = BATcount(task.as->format[firstcol].c);
		/* block until the producer has data available */
		MT_sema_down(&task.consumer);
		cnt += task.top[task.cur];
		if (task.ateof)
			break;
		t1 = GDKusec() - t1;
		total += t1;
		iototal += tio;
#ifdef _DEBUG_TABLET_
		mnstr_printf(GDKout, "#Break %d lines\n", task.top[task.cur]);
#endif
		t1 = GDKusec();
		if (task.top[task.cur]) {
			/* activate the workers to break lines */
			for (j = 0; j < threads; j++) {
				/* stage one, break the lines in parallel */
				ptask[j].error = 0;
				ptask[j].state = BREAKLINE;
				ptask[j].next = task.top[task.cur];
				ptask[j].fields = task.fields;
				ptask[j].limit = task.limit;
				ptask[j].cnt = task.cnt;
				ptask[j].cur = task.cur;
				ptask[j].top[task.cur] = task.top[task.cur];
				MT_sema_up(&ptask[j].sema);
			}
		}
		if (task.top[task.cur]) {
			/* await completion of line break phase */
			for (j = 0; j < threads; j++) {
				MT_sema_down(&ptask[j].reply);
				if (ptask[j].error) {
					res = -1;
#ifdef _DEBUG_TABLET_
					mnstr_printf(GDKout, "#Error in task %d %d\n",
								 j, ptask[j].error);
#endif
				}
			}
		}
#ifdef _DEBUG_TABLET_
		mnstr_printf(GDKout, "#fill the BATs %d  " BUNFMT " cap " BUNFMT "\n",
					 task.top[task.cur], task.cnt,
					 BATcapacity(as->format[task.cur].c));
#endif
		lio += GDKusec() - t1;	/* line break done */
		if (task.top[task.cur]) {
			if (res == 0) {
				SQLworkdivider(&task, ptask, (int) as->nr_attrs, threads);

				/* activate the workers to update the BATs */
				for (j = 0; j < threads; j++) {
					/* stage two, update the BATs */
					ptask[j].state = UPDATEBAT;
					MT_sema_up(&ptask[j].sema);
				}
			}
		}
		tio = GDKusec();
		tio = t1 - tio;

		/* await completion of the BAT updates */
		if (res == 0 && task.top[task.cur]) {
			for (j = 0; j < threads; j++) {
				MT_sema_down(&ptask[j].reply);
				if (ptask[j].errorcnt > 0 && !ptask[j].besteffort) {
					res = -1;
					best = 0;
				}
			}
		}

		/* trim the BATs discarding error tuples */
#define trimerrors(TYPE)												\
		do {															\
			TYPE *src, *dst;											\
			leftover= BATcount(task.as->format[attr].c);				\
			limit = leftover - cntstart;								\
			dst =src= (TYPE *) BUNtloc(task.as->format[attr].ci,cntstart); \
			for(j = 0; j < (int) limit; j++, src++){					\
				if ( task.rowerror[j]){									\
					leftover--;											\
					continue;											\
				}														\
				*dst++ = *src;											\
			}															\
			BATsetcount(task.as->format[attr].c, leftover );			\
		} while (0)

#ifdef _DEBUG_TABLET_
		mnstr_printf(GDKout, "#Trim bbest %d table size " BUNFMT " rows found so far " BUNFMT "\n",
					 best, BATcount(as->format[firstcol].c), task.cnt);
#endif
		if (best && BATcount(as->format[firstcol].c)) {
			BUN limit;
			int width;

			for (attr = 0; attr < as->nr_attrs; attr++) {
				if (as->format[attr].skip)
					continue;
				width = as->format[attr].c->twidth;
				switch (width){
				case 1:
					trimerrors(bte);
					break;
				case 2:
					trimerrors(sht);
					break;
				case 4:
					trimerrors(int);
					break;
				case 8:
					trimerrors(lng);
					break;
#ifdef HAVE_HGE
				case 16:
					trimerrors(hge);
					break;
#endif
				default:
					{
						char *src, *dst;
						leftover= BATcount(task.as->format[attr].c);
						limit = leftover - cntstart;
						dst = src= BUNtloc(task.as->format[attr].ci,cntstart);
						for(j = 0; j < (int) limit; j++, src += width){
							if ( task.rowerror[j]){
								leftover--;
								continue;
							}
							if (dst != src)
								memcpy(dst, src, width);
							dst += width;
						}
						BATsetcount(task.as->format[attr].c, leftover );
					}
					break;
				}
			}
			// re-initialize the error vector;
			memset(task.rowerror, 0, task.limit);
			task.errorcnt = 0;
		}

		if (res < 0) {
			/* producer should stop */
			task.maxrow = cnt;
			task.state = ENDOFCOPY;
		}
		MT_sema_up(&task.producer);
	}
#ifdef _DEBUG_TABLET_
	mnstr_printf(GDKout, "#Enf of block stream eof=%d res=%d\n",
				 task.ateof, res);
#endif

	cnt = BATcount(task.as->format[firstcol].c);
	if (GDKdebug & GRPalgorithms) {
		mnstr_printf(GDKout, "#COPY reader time " LLFMT " line break " LLFMT " io " LLFMT "\n",
					 total, lio, iototal);
#ifdef _DEBUG_TABLET_
		for (i = 0; i < as->nr_attrs; i++)
			mnstr_printf(GDKout, LLFMT " ", task.time[i]);
		mnstr_printf(GDKout, "\n");
#endif
		for (j = 0; j < threads; j++)
			mnstr_printf(GDKout, "#COPY thread time " LLFMT "\n",
						 ptask[j].wtime);
	}

	task.ateof = 1;
	task.state = ENDOFCOPY;
#ifdef _DEBUG_TABLET_
	for (i = 0; i < as->nr_attrs; i++) {
		mnstr_printf(GDKout, "column " BUNFMT "\n", i);
		BATprint(task.as->format[i].c);
	}
#endif
#ifdef _DEBUG_TABLET_
	mnstr_printf(GDKout, "#Activate sync on disk \n");
#endif
	// activate the workers to sync the BATs to disk
	if (res == 0) {
		for (j = 0; j < threads; j++) {
			// stage three, update the BATs
			ptask[j].state = SYNCBAT;
			MT_sema_up(&ptask[j].sema);
		}
	}

	if (!task.ateof || cnt < task.maxrow) {
#ifdef _DEBUG_TABLET_
		mnstr_printf(GDKout, "#Shut down reader\n");
#endif
		MT_sema_up(&task.producer);
	}
	MT_join_thread(task.tid);
	if (res == 0) {
		// await completion of the BAT syncs
		for (j = 0; j < threads; j++)
			MT_sema_down(&ptask[j].reply);
	}

#ifdef _DEBUG_TABLET_
	mnstr_printf(GDKout, "#Activate endofcopy\n");
#endif
	for (j = 0; j < threads; j++) {
		ptask[j].state = ENDOFCOPY;
		MT_sema_up(&ptask[j].sema);
	}
	/* wait for their death */
	for (j = 0; j < threads; j++)
		MT_sema_down(&ptask[j].reply);

#ifdef _DEBUG_TABLET_
	mnstr_printf(GDKout, "#Kill the workers\n");
#endif
	for (j = 0; j < threads; j++) {
		MT_join_thread(ptask[j].tid);
		GDKfree(ptask[j].cols);
		MT_sema_destroy(&ptask[j].sema);
		MT_sema_destroy(&ptask[j].reply);
	}

#ifdef _DEBUG_TABLET_
	mnstr_printf(GDKout, "#Found " BUNFMT " tuples\n", cnt);
	mnstr_printf(GDKout, "#leftover input:%.63s\n",
				 task.b->buf + task.b->pos);
#endif
	for (i = 0; i < as->nr_attrs; i++) {
		BAT *b = task.as->format[i].c;
		if (b)
			BATsettrivprop(b);
		GDKfree(task.fields[i]);
	}
	GDKfree(task.fields);
	GDKfree(task.cols);
	GDKfree(task.time);
	for (i = 0; i < MAXBUFFERS; i++) {
		if (task.base[i])
			GDKfree(task.base[i]);
		if (task.lines[i])
			GDKfree(task.lines[i]);
	}
	if (task.rowerror)
		GDKfree(task.rowerror);
	MT_sema_destroy(&task.producer);
	MT_sema_destroy(&task.consumer);
#ifdef MLOCK_TST
	munlockall();
#endif

	/* restore system setting */
	GDK_vm_trim = vmtrim;
	return res < 0 ? BUN_NONE : cnt;

  bailout:
	if (task.fields) {
		for (i = 0; i < as->nr_attrs; i++) {
			if (task.fields[i])
				GDKfree(task.fields[i]);
		}
		GDKfree(task.fields);
	}
	GDKfree(task.time);
	GDKfree(task.cols);
	GDKfree(task.base[task.cur]);
	GDKfree(task.rowerror);
	for (i = 0; i < MAXWORKERS; i++)
		GDKfree(ptask[i].cols);
#ifdef MLOCK_TST
	munlockall();
#endif
	/* restore system setting */
	GDK_vm_trim = vmtrim;
	return BUN_NONE;
}

/* return the latest reject table, to be on the safe side we should
 * actually create copies within a critical section. Ignored for now. */
str
COPYrejects(Client cntxt, MalBlkPtr mb, MalStkPtr stk, InstrPtr pci)
{
	bat *row = getArgReference_bat(stk, pci, 0);
	bat *fld = getArgReference_bat(stk, pci, 1);
	bat *msg = getArgReference_bat(stk, pci, 2);
	bat *inp = getArgReference_bat(stk, pci, 3);

	create_rejects_table(cntxt);
	if (cntxt->error_row == NULL)
		throw(MAL, "sql.rejects", "No reject table available");
	BBPretain(*row = cntxt->error_row->batCacheid);
	BBPretain(*fld = cntxt->error_fld->batCacheid);
	BBPretain(*msg = cntxt->error_msg->batCacheid);
	BBPretain(*inp = cntxt->error_input->batCacheid);
	(void) mb;
	return MAL_SUCCEED;
}

str
COPYrejects_clear(Client cntxt, MalBlkPtr mb, MalStkPtr stk, InstrPtr pci)
{
	if (cntxt->error_row) {
		MT_lock_set(&errorlock);
		BATclear(cntxt->error_row, true);
		if(cntxt->error_fld) BATclear(cntxt->error_fld, true);
		if(cntxt->error_msg) BATclear(cntxt->error_msg, true);
		if(cntxt->error_input) BATclear(cntxt->error_input, true);
		MT_lock_unset(&errorlock);
	}
	(void) mb;
	(void) stk;
	(void) pci;
	return MAL_SUCCEED;
}

#undef _DEBUG_TABLET_
