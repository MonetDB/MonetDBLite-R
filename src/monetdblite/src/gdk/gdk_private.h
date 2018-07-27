/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

/* This file should not be included in any file outside of this directory */

#ifndef LIBGDK
#error this file should not be included outside its source directory
#endif

/* persist hash heaps for persistent BATs */
/* #define PERSISTENTHASH 1 */

/* persist order index heaps for persistent BATs */
#define PERSISTENTIDX 1

#if !__has_attribute(__visibility__)
#define __visibility__(a)
#endif
#if !__has_attribute(__cold__)
#define __cold__
#endif

#include "gdk_system_private.h"

enum heaptype {
	offheap,
	varheap,
	hashheap,
	imprintsheap,
	orderidxheap
};

__hidden gdk_return ATOMheap(int id, Heap *hp, size_t cap)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden bool ATOMisdescendant(int id, int parentid)
	__attribute__((__visibility__("hidden")));
__hidden int ATOMunknown_find(const char *nme)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden str ATOMunknown_name(int a)
	__attribute__((__visibility__("hidden")));
__hidden void ATOMunknown_clean(void)
	__attribute__((__visibility__("hidden")));
__hidden bool BATcheckhash(BAT *b)
	__attribute__((__visibility__("hidden")));
__hidden bool BATcheckimprints(BAT *b)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return BATcheckmodes(BAT *b, bool persistent)
	__attribute__((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden bool BATcheckorderidx(BAT *b)
	__attribute__((__visibility__("hidden")));

__hidden BAT *BATcreatedesc(oid hseq, int tt, int heapnames, int role)
	__attribute__((__visibility__("hidden")));
__hidden void BATdelete(BAT *b)
	__attribute__((__visibility__("hidden")));
__hidden void BATdestroy(BAT *b)
	__attribute__((__visibility__("hidden")));
__hidden void BATfree(BAT *b)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return BATgroup_internal(BAT **groups, BAT **extents, BAT **histo, BAT *b, BAT *s, BAT *g, BAT *e, BAT *h, int subsorted)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden Hash *BAThash_impl(BAT *b, BAT *s, BUN masksize, const char *ext)
	__attribute__((__visibility__("hidden")));
__hidden void BATinit_idents(BAT *bn)
	__attribute__((__visibility__("hidden")));
__hidden BAT *BATload_intern(bat bid, bool lock)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return BATmaterialize(BAT *b)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return BATsave(BAT *b)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden void BATsetdims(BAT *b)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return BBPcacheit(BAT *bn, bool lock)
	__attribute__((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden void BBPexit(void)
	__attribute__((__visibility__("hidden")));
__hidden BAT *BBPgetdesc(bat i)
	__attribute__((__visibility__("hidden")));
__hidden void BBPinit(void)
	__attribute__((__visibility__("hidden")));
__hidden bat BBPinsert(BAT *bn)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden int BBPselectfarm(int role, int type, enum heaptype hptype)
	__attribute__((__visibility__("hidden")));
__hidden void BBPunshare(bat b)
	__attribute__((__visibility__("hidden")));
__hidden BUN binsearch(const oid *restrict indir, oid offset, int type, const void *restrict vals, const char * restrict vars, int width, BUN lo, BUN hi, const void *restrict v, int ordering, int last)
	__attribute__((__visibility__("hidden")));
__hidden BUN binsearch_bte(const oid *restrict indir, oid offset, const bte *restrict vals, BUN lo, BUN hi, bte v, int ordering, int last)
	__attribute__((__visibility__("hidden")));
__hidden BUN binsearch_sht(const oid *restrict indir, oid offset, const sht *restrict vals, BUN lo, BUN hi, sht v, int ordering, int last)
	__attribute__((__visibility__("hidden")));
__hidden BUN binsearch_int(const oid *restrict indir, oid offset, const int *restrict vals, BUN lo, BUN hi, int v, int ordering, int last)
	__attribute__((__visibility__("hidden")));
__hidden BUN binsearch_lng(const oid *restrict indir, oid offset, const lng *restrict vals, BUN lo, BUN hi, lng v, int ordering, int last)
	__attribute__((__visibility__("hidden")));
#ifdef HAVE_HGE
__hidden BUN binsearch_hge(const oid *restrict indir, oid offset, const hge *restrict vals, BUN lo, BUN hi, hge v, int ordering, int last)
	__attribute__((__visibility__("hidden")));
#endif
__hidden BUN binsearch_flt(const oid *restrict indir, oid offset, const flt *restrict vals, BUN lo, BUN hi, flt v, int ordering, int last)
	__attribute__((__visibility__("hidden")));
__hidden BUN binsearch_dbl(const oid *restrict indir, oid offset, const dbl *restrict vals, BUN lo, BUN hi, dbl v, int ordering, int last)
	__attribute__((__visibility__("hidden")));
__hidden Heap *createOIDXheap(BAT *b, int stable)
	__attribute__((__visibility__("hidden")));
__hidden void gdk_bbp_reset(void)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return BUNreplace(BAT *b, oid left, const void *right, bit force)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return GDKextend(const char *fn, size_t size)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return GDKextendf(int fd, size_t size, const char *fn)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return GDKextractParentAndLastDirFromPath(const char *path, char *last_dir_parent, char *last_dir)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden int GDKfdlocate(int farmid, const char *nme, const char *mode, const char *ext)
	__attribute__((__visibility__("hidden")));
__hidden FILE *GDKfilelocate(int farmid, const char *nme, const char *mode, const char *ext)
	__attribute__((__visibility__("hidden")));
__hidden FILE *GDKfileopen(int farmid, const char *dir, const char *name, const char *extension, const char *mode)
	__attribute__((__visibility__("hidden")));
__hidden char *GDKload(int farmid, const char *nme, const char *ext, size_t size, size_t *maxsize, storage_t mode)
	__attribute__((__visibility__("hidden")));
__hidden void GDKlog(_In_z_ _Printf_format_string_ FILE * fl, const char *format, ...)
	__attribute__((__format__(__printf__, 2, 3)))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return GDKmove(int farmid, const char *dir1, const char *nme1, const char *ext1, const char *dir2, const char *nme2, const char *ext2)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden void *GDKmremap(const char *path, int mode, void *old_address, size_t old_size, size_t *new_size)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return GDKmunmap(void *addr, size_t len)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return GDKremovedir(int farmid, const char *nme)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return GDKsave(int farmid, const char *nme, const char *ext, void *buf, size_t size, storage_t mode, int dosync)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return GDKssort_rev(void *restrict h, void *restrict t, const void *restrict base, size_t n, int hs, int ts, int tpe)
	__attribute__((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return GDKssort(void *restrict h, void *restrict t, const void *restrict base, size_t n, int hs, int ts, int tpe)
	__attribute__((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return GDKunlink(int farmid, const char *dir, const char *nme, const char *extension)
	__attribute__((__visibility__("hidden")));
__hidden void HASHfree(BAT *b)
	__attribute__((__visibility__("hidden")));
__hidden bool HASHgonebad(BAT *b, const void *v)
	__attribute__((__visibility__("hidden")));
__hidden BUN HASHmask(BUN cnt)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return HASHnew(Hash *h, int tpe, BUN size, BUN mask, BUN count)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return HEAPalloc(Heap *h, size_t nitems, size_t itemsize)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return HEAPcopy(Heap *dst, Heap *src)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return HEAPdelete(Heap *h, const char *o, const char *ext)
	__attribute__((__visibility__("hidden")));
__hidden void HEAPfree(Heap *h, int remove)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return HEAPload(Heap *h, const char *nme, const char *ext, int trunc)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden void HEAP_recover(Heap *, const var_t *, BUN)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return HEAPsave(Heap *h, const char *nme, const char *ext)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden gdk_return HEAPshrink(Heap *h, size_t size)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden int HEAPwarm(Heap *h)
	__attribute__((__visibility__("hidden")));
__hidden void IMPSfree(BAT *b)
	__attribute__((__visibility__("hidden")));
__hidden int IMPSgetbin(int tpe, bte bits, const char *restrict bins, const void *restrict v)
	__attribute__((__visibility__("hidden")));
#ifndef NDEBUG
void IMPSprint(BAT *b)		/* never called: for debugging only */
	__attribute__((__cold__));
#endif
__hidden void MT_init_posix(void)
	__attribute__((__visibility__("hidden")));
__hidden void *MT_mremap(const char *path, int mode, void *old_address, size_t old_size, size_t *new_size)
	__attribute__((__visibility__("hidden")));
__hidden int MT_msync(void *p, size_t len)
	__attribute__((__visibility__("hidden")));
__hidden void OIDXfree(BAT *b)
	__attribute__((__visibility__("hidden")));
__hidden void persistOIDX(BAT *b)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return rangejoin(BAT *r1, BAT *r2, BAT *l, BAT *rl, BAT *rh, BAT *sl, BAT *sr, int li, int hi, BUN maxsize)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden void strCleanHash(Heap *hp, int rebuild)
	__attribute__((__visibility__("hidden")));
__hidden int strCmpNoNil(const unsigned char *l, const unsigned char *r)
	__attribute__((__visibility__("hidden")));
__hidden var_t strLocate(Heap *h, const char *v)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return unshare_string_heap(BAT *b)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden void VIEWdestroy(BAT *b)
	__attribute__((__visibility__("hidden")));
__hidden gdk_return VIEWreset(BAT *b)
	__attribute__ ((__warn_unused_result__))
	__attribute__((__visibility__("hidden")));
__hidden BAT *virtualize(BAT *bn)
	__attribute__((__visibility__("hidden")));
__hidden bool binsearchcand(const oid *cand, BUN lo, BUN hi, oid v)
	__attribute__((__visibility__("hidden")));
__hidden void gdk_bbp_reset(void)
	__attribute__((__visibility__("hidden")));
__hidden void gdk_system_reset(void)
	__attribute__((__visibility__("hidden")));

/* some macros to help print info about BATs when using ALGODEBUG */
#define ALGOBATFMT	"%s#" BUNFMT "[%s]%s%s%s%s%s%s%s%s%s"
#define ALGOBATPAR(b)	BATgetId(b),			\
			BATcount(b),			\
			ATOMname(b->ttype),		\
			b->batPersistence == PERSISTENT ? "P" : isVIEW(b) ? "V" : "T", \
			BATtdense(b) ? "D" : "",	\
			b->tsorted ? "S" : "",		\
			b->trevsorted ? "R" : "",	\
			b->tkey ? "K" : "",		\
			b->tnonil ? "N" : "",		\
			b->thash ? "H" : "",		\
			b->torderidx ? "O" : "",	\
			b->timprints ? "I" : b->theap.parentid && BBP_cache(b->theap.parentid)->timprints ? "(I)" : ""
/* use ALGOOPTBAT* when BAT is optional (can be NULL) */
#define ALGOOPTBATFMT	"%s%s" BUNFMT "%s%s%s%s%s%s%s%s%s%s%s%s"
#define ALGOOPTBATPAR(b)				\
			b ? BATgetId(b) : "",		\
			b ? "#" : "",			\
			b ? BATcount(b) : 0,		\
			b ? "[" : "",			\
			b ? ATOMname(b->ttype) : "",	\
			b ? "]" : "",			\
			b ? b->batPersistence == PERSISTENT ? "P" : isVIEW(b) ? "V" : "T" : "", \
			b && BATtdense(b) ? "D" : "",	\
			b && b->tsorted ? "S" : "",	\
			b && b->trevsorted ? "R" : "",	\
			b && b->tkey ? "K" : "",	\
			b && b->tnonil ? "N" : "",	\
			b && b->thash ? "H" : "",	\
			b && b->torderidx ? "O" : "",	\
			b ? b->timprints ? "I" : b->theap.parentid && BBP_cache(b->theap.parentid)->timprints ? "(I)" : "" : ""

#define BBP_BATMASK	511
#define BBP_THREADMASK	63

struct PROPrec {
	int id;
	ValRecord v;
	struct PROPrec *next;	/* simple chain of properties */
};

struct Imprints {
	bte bits;		/* how many bits in imprints */
	Heap imprints;
	void *bins;		/* pointer into imprints heap (bins borders)  */
	BUN *stats;		/* pointer into imprints heap (stats per bin) */
	void *imps;		/* pointer into imprints heap (bit vectors)   */
	void *dict;		/* pointer into imprints heap (dictionary)    */
	BUN impcnt;		/* counter for imprints                       */
	BUN dictcnt;		/* counter for cache dictionary               */
};

typedef struct {
	MT_Lock swap;
	MT_Lock hash;
	MT_Lock imprints;
} batlock_t;

typedef struct {
	MT_Lock alloc;
	MT_Lock trim;
	bat free;
} bbplock_t;

typedef char long_str[IDLENGTH];	/* standard GDK static string */

#define MAXFARMS       32

extern struct BBPfarm_t {
	unsigned int roles;	/* bitmask of allowed roles */
	const char *dirname;	/* farm directory */
	FILE *lock_file;
} BBPfarms[MAXFARMS];

extern int BBP_dirty;	/* BBP table dirty? */
extern batlock_t GDKbatLock[BBP_BATMASK + 1];
extern bbplock_t GDKbbpLock[BBP_THREADMASK + 1];
extern size_t GDK_mmap_minsize_persistent; /* size after which we use memory mapped files for persistent heaps */
extern size_t GDK_mmap_minsize_transient; /* size after which we use memory mapped files for transient heaps */
extern size_t GDK_mmap_pagesize; /* mmap granularity */
extern MT_Lock GDKnameLock;
extern MT_Lock GDKthreadLock;
extern MT_Lock GDKtmLock;
extern MT_Lock MT_system_lock;

#define BBPdirty(x)	(BBP_dirty=(x))

#define BATcheck(tst, msg, err)						\
	do {								\
		if ((tst) == NULL) {					\
			if (strchr((msg), ':'))				\
				GDKerror("%s.\n", (msg));		\
			else						\
				GDKerror("%s: BAT required.\n", (msg));	\
			return (err);					\
		}							\
	} while (0)
#define ERRORcheck(tst,	msg, err)		\
	do {					\
		if (tst) {			\
			GDKerror(msg);		\
			return (err);		\
		}				\
	} while (0)

#define GDKswapLock(x)  GDKbatLock[(x)&BBP_BATMASK].swap
#define GDKhashLock(x)  GDKbatLock[(x)&BBP_BATMASK].hash
#define GDKimprintsLock(x)  GDKbatLock[(x)&BBP_BATMASK].imprints
#if SIZEOF_SIZE_T == 8
#define threadmask(y)	((int) ((mix_int((unsigned int) y) ^ mix_int((unsigned int) (y >> 32))) & BBP_THREADMASK))
#else
#define threadmask(y)	((int) (mix_int(y) & BBP_THREADMASK))
#endif
#define GDKtrimLock(y)	GDKbbpLock[y].trim
#define GDKcacheLock(y)	GDKbbpLock[y].alloc
#define BBP_free(y)	GDKbbpLock[y].free

/* extra space in front of strings in string heaps when hashash is set
 * if at least (2*SIZEOF_BUN), also store length (heaps are then
 * incompatible) */
#define EXTRALEN ((SIZEOF_BUN + GDK_VARALIGN - 1) & ~(GDK_VARALIGN - 1))

