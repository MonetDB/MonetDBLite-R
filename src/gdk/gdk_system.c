/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

/*
 * @a Niels Nes, Peter Boncz
 * @+ Threads
 * This file contains a wrapper layer for threading, hence the
 * underscore convention MT_x (Multi-Threading).  As all platforms
 * that MonetDB runs on now support POSIX Threads (pthreads), this
 * wrapping layer has become rather thin.
 *
 * In the late 1990s when multi-threading support was introduced in
 * MonetDB, pthreads was just emerging as a standard API and not
 * widely adopted yet.  The earliest MT implementation focused on SGI
 * Unix and provided multi- threading using multiple processes, and
 * shared memory.
 *
 * One of the relics of this model, namely the need to pre-allocate
 * locks and semaphores, and consequently a maximum number of them,
 * has been removed in the latest iteration of this layer.
 *
 */
/*
 * @- Mthreads Routine implementations
 */
#include "monetdb_config.h"
#include "gdk_system.h"
#include "gdk_system_private.h"

#include <time.h>

#ifdef HAVE_FTIME
#include <sys/timeb.h>		/* ftime */
#endif
#ifdef HAVE_SYS_TIME_H
#include <sys/time.h>		/* gettimeofday */
#endif

#include <signal.h>

#include <unistd.h>		/* for sysconf symbols */

MT_Lock MT_system_lock MT_LOCK_INITIALIZER("MT_system_lock");

#if !defined(USE_PTHREAD_LOCKS) && !defined(NDEBUG)
ATOMIC_TYPE volatile GDKlockcnt;
ATOMIC_TYPE volatile GDKlockcontentioncnt;
ATOMIC_TYPE volatile GDKlocksleepcnt;
MT_Lock * volatile GDKlocklist = 0;
ATOMIC_FLAG volatile GDKlocklistlock = ATOMIC_FLAG_INIT;

/* merge sort of linked list */
static MT_Lock *
sortlocklist(MT_Lock *l)
{
	MT_Lock *r, *t, *ll = NULL;

	if (l == NULL || l->next == NULL) {
		/* list is trivially sorted (0 or 1 element) */
		return l;
	}
	/* break list into two (almost) equal pieces:
	* l is start of "left" list, r of "right" list, ll last
	* element of "left" list */
	for (t = r = l; t && t->next; t = t->next->next) {
		ll = r;
		r = r->next;
	}
	ll->next = NULL;	/* break list into two */
	/* recursively sort both sublists */
	l = sortlocklist(l);
	r = sortlocklist(r);
	/* merge
	 * t is new list, ll is last element of new list, l and r are
	 * start of unprocessed part of left and right lists */
	t = ll = NULL;
	while (l && r) {
		if (l->sleep < r->sleep ||
		    (l->sleep == r->sleep &&
		     l->contention < r->contention) ||
		    (l->sleep == r->sleep &&
		     l->contention == r->contention &&
		     l->count <= r->count)) {
			/* l is smaller */
			if (ll == NULL) {
				assert(t == NULL);
				t = ll = l;
			} else {
				ll->next = l;
				ll = ll->next;
			}
			l = l->next;
		} else {
			/* r is smaller */
			if (ll == NULL) {
				assert(t == NULL);
				t = ll = r;
			} else {
				ll->next = r;
				ll = ll->next;
			}
			r = r->next;
		}
	}
	/* append rest of remaining list */
	ll->next = l ? l : r;
	return t;
}

void
GDKlockstatistics(int what)
{
	MT_Lock *l;

	if (ATOMIC_TAS(GDKlocklistlock, dummy) != 0) {
		fprintf(stderr, "#WARNING: GDKlocklistlock is set, so cannot access lock list\n");
		return;
	}
	GDKlocklist = sortlocklist(GDKlocklist);
	fprintf(stderr, "# lock name\tcount\tcontention\tsleep\tlocked\t(un)locker\n");
	for (l = GDKlocklist; l; l = l->next)
		if (what == 0 ||
		    (what == 1 && l->count) ||
		    (what == 2 && l->contention) ||
		    (what == 3 && l->lock))
			fprintf(stderr, "# %-18s\t%zu\t%zu\t%zu\t%s\t%s\n",
				l->name ? l->name : "unknown",
				l->count, l->contention, l->sleep,
				l->lock ? "locked" : "",
				l->locker ? l->locker : "");
	fprintf(stderr, "#total lock count %zu\n", (size_t) GDKlockcnt);
	fprintf(stderr, "#lock contention  %zu\n", (size_t) GDKlockcontentioncnt);
	fprintf(stderr, "#lock sleep count %zu\n", (size_t) GDKlocksleepcnt);
	ATOMIC_CLEAR(GDKlocklistlock, dummy);
}
#endif


static struct posthread {
	struct posthread *next;
	pthread_t tid;
	void (*func)(void *);
	void *arg;
	int exited;
} *posthreads = NULL;
static pthread_mutex_t posthread_lock = PTHREAD_MUTEX_INITIALIZER;

static struct posthread *
find_posthread_locked(pthread_t tid)
{
	struct posthread *p;

	for (p = posthreads; p; p = p->next)
		if (pthread_equal(p->tid, tid))
			return p;
	return NULL;
}

#ifndef NDEBUG
/* only used in an assert */
static struct posthread *
find_posthread(pthread_t tid)
{
	struct posthread *p;

	pthread_mutex_lock(&posthread_lock);
	p = find_posthread_locked(tid);
	pthread_mutex_unlock(&posthread_lock);
	return p;
}
#endif

#ifdef HAVE_PTHREAD_SIGMASK
static void
MT_thread_sigmask(sigset_t * new_mask, sigset_t * orig_mask)
{
	(void) sigdelset(new_mask, SIGQUIT);
	(void) sigdelset(new_mask, SIGALRM);	/* else sleep doesn't work */
	(void) sigdelset(new_mask, SIGPROF);
	(void) pthread_sigmask(SIG_SETMASK, new_mask, orig_mask);
}
#endif

static void
rm_posthread_locked(struct posthread *p)
{
	struct posthread **pp;

	for (pp = &posthreads; *pp && *pp != p; pp = &(*pp)->next)
		;
	if (*pp)
		*pp = p->next;
}

static void *
thread_starter(void *arg)
{
	struct posthread *p = (struct posthread *) arg;
	pthread_t tid = p->tid;

	(*p->func)(p->arg);
	pthread_mutex_lock(&posthread_lock);
	/* *p may have been freed by join_threads, so try to find it
         * again before using it */
	if ((p = find_posthread_locked(tid)) != NULL)
		p->exited = 1;
	pthread_mutex_unlock(&posthread_lock);
	return NULL;
}

static void *
thread_starter_simple(void *arg)
{
	struct posthread *p = (struct posthread *) arg;
	void (*pfunc)(void *) = p->func;
	void *parg = p->arg;

	free(p);
	(*pfunc)(parg);
	return NULL;
}

static void
join_threads(void)
{
	struct posthread *p;
	int waited;
	pthread_t tid;

	pthread_mutex_lock(&posthread_lock);
	do {
		waited = 0;
		for (p = posthreads; p; p = p->next) {
			if (p->exited) {
				tid = p->tid;
				rm_posthread_locked(p);
				free(p);
				pthread_mutex_unlock(&posthread_lock);
				pthread_join(tid, NULL);
				pthread_mutex_lock(&posthread_lock);
				waited = 1;
				break;
			}
		}
	} while (waited);
	pthread_mutex_unlock(&posthread_lock);
}

void
join_detached_threads(void)
{
	struct posthread *p;
	pthread_t tid;

	pthread_mutex_lock(&posthread_lock);
	while (posthreads) {
		p = posthreads;
		posthreads = p->next;
		tid = p->tid;
		free(p);
		pthread_mutex_unlock(&posthread_lock);
		pthread_join(tid, NULL);
		pthread_mutex_lock(&posthread_lock);
	}
	pthread_mutex_unlock(&posthread_lock);
}

int
MT_create_thread(MT_Id *t, void (*f) (void *), void *arg, enum MT_thr_detach d)
{
#ifdef HAVE_PTHREAD_SIGMASK
	sigset_t new_mask, orig_mask;
#endif
	pthread_attr_t attr;
	pthread_t newt, *newtp;
	int ret;
	struct posthread *p = NULL;
	void *(*pf) (void *);

	join_threads();
#ifdef HAVE_PTHREAD_SIGMASK
	(void) sigfillset(&new_mask);
	MT_thread_sigmask(&new_mask, &orig_mask);
#endif
	if(pthread_attr_init(&attr))
		return -1;
	if(pthread_attr_setstacksize(&attr, THREAD_STACK_SIZE)) {
		pthread_attr_destroy(&attr);
		return -1;
	}
	if(pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE)) {
		pthread_attr_destroy(&attr);
		return -1;
	}
	p = malloc(sizeof(struct posthread));
	if (p == NULL) {
#ifdef HAVE_PTHREAD_SIGMASK
		MT_thread_sigmask(&orig_mask, NULL);
#endif
		pthread_attr_destroy(&attr);
		return -1;
	}
	p->func = f;
	p->arg = arg;
	p->exited = 0;
	if (d == MT_THR_DETACHED) {
		pf = thread_starter;
		newtp = &p->tid;
	} else {
		pf = thread_starter_simple;
		newtp = &newt;
		assert(d == MT_THR_JOINABLE);
	}
	ret = pthread_create(newtp, &attr, pf, p);
	if (ret == 0) {
#ifdef PTW32
		*t = (MT_Id) (((size_t) newtp->p) + 1);	/* use pthread-id + 1 */
#else
		*t = (MT_Id) (((size_t) *newtp) + 1);	/* use pthread-id + 1 */
#endif
		if (d == MT_THR_DETACHED) {
			pthread_mutex_lock(&posthread_lock);
			p->next = posthreads;
			posthreads = p;
			pthread_mutex_unlock(&posthread_lock);
		}
	} else {
		free(p);
	}
#ifdef HAVE_PTHREAD_SIGMASK
	MT_thread_sigmask(&orig_mask, NULL);
#endif
	return ret ? -1 : 0;
}

void
MT_exiting_thread(void)
{
	struct posthread *p;
	pthread_t tid = pthread_self();

	pthread_mutex_lock(&posthread_lock);
	if ((p = find_posthread_locked(tid)) != NULL)
		p->exited = 1;
	pthread_mutex_unlock(&posthread_lock);
}

/* coverity[+kill] */
void
MT_exit_thread(int s)
{
	int st = s;

	MT_exiting_thread();
	pthread_exit(&st);
}

int
MT_join_thread(MT_Id t)
{
	pthread_t id;
#ifdef PTW32
	id.p = (void *) (t - 1);
	id.x = 0;
#else
	id = (pthread_t) (t - 1);
#endif
	join_threads();
	assert(find_posthread(id) == NULL);
	return pthread_join(id, NULL);
}

#ifndef SIGHUP
#define SIGHUP 1
#endif

int
MT_kill_thread(MT_Id t)
{
#ifdef HAVE_PTHREAD_KILL
	pthread_t id;
#ifdef PTW32
	id.p = (void *) (t - 1);
	id.x = 0;
#else
	id = (pthread_t) (t - 1);
#endif
	join_threads();
	return pthread_kill(id, SIGHUP);
#else
	(void) t;
	join_threads();
	return -1;		/* XXX */
#endif
}

void
pthread_sema_init(pthread_sema_t *s, int flag, int nresources)
{
	(void) flag;
	s->cnt = nresources;
	pthread_mutex_init(&(s->mutex), 0);
	pthread_cond_init(&(s->cond), 0);
}

void
pthread_sema_destroy(pthread_sema_t *s)
{
	pthread_mutex_destroy(&(s->mutex));
	pthread_cond_destroy(&(s->cond));
}

void
pthread_sema_up(pthread_sema_t *s)
{
	(void)pthread_mutex_lock(&(s->mutex));

	if (s->cnt++ < 0) {
		/* wake up sleeping thread */
		(void)pthread_cond_signal(&(s->cond));
	}
	(void)pthread_mutex_unlock(&(s->mutex));
}

void
pthread_sema_down(pthread_sema_t *s)
{
	(void)pthread_mutex_lock(&(s->mutex));

	if (--s->cnt < 0) {
		/* thread goes to sleep */
		(void)pthread_cond_wait(&(s->cond), &(s->mutex));
	}
	(void)pthread_mutex_unlock(&(s->mutex));
}

/* coverity[+kill] */
void
MT_global_exit(int s)
{
	(void) s;
	// nothing
}

MT_Id
MT_getpid(void)
{
#if !defined(HAVE_PTHREAD_H) && defined(_MSC_VER)
	return (MT_Id) GetCurrentThreadId();
#elif defined(PTW32)
	return (MT_Id) (((size_t) pthread_self().p) + 1);
#else
	return (MT_Id) (((size_t) pthread_self()) + 1);
#endif
}

int
MT_check_nr_cores(void)
{
	int ncpus = -1;

#if defined(HAVE_SYSCONF) && defined(_SC_NPROCESSORS_ONLN)
	/* this works on Linux, Solaris and AIX */
	ncpus = sysconf(_SC_NPROCESSORS_ONLN);
#elif defined(HAVE_SYS_SYSCTL_H) && defined(HW_NCPU)   /* BSD */
	size_t len = sizeof(int);
	int mib[3];

	/* Everyone should have permission to make this call,
	 * if we get a failure something is really wrong. */
	mib[0] = CTL_HW;
	mib[1] = HW_NCPU;
	mib[2] = -1;
	sysctl(mib, 3, &ncpus, &len, NULL, 0);
#elif defined(WIN32)
	SYSTEM_INFO sysinfo;

	GetSystemInfo(&sysinfo);
	ncpus = sysinfo.dwNumberOfProcessors;
#endif

	/* if we ever need HPUX or OSF/1 (hope not), see
	 * http://ndevilla.free.fr/threads/ */

	if (ncpus <= 0)
		ncpus = 1;
#if SIZEOF_SIZE_T == SIZEOF_INT
	/* On 32-bits systems with large amounts of cpus/cores, we quickly
	 * run out of space due to the amount of threads in use.  Since it
	 * is questionable whether many cores on a 32-bits system are going
	 * to beneficial due to this, we simply limit the auto-detected
	 * cores to 16 on 32-bits systems.  The user can always override
	 * this via gdk_nr_threads. */
	if (ncpus > 16)
		ncpus = 16;
#endif

	return ncpus;
}



lng
GDKusec(void)
{
return 0; // hahahahahahah
}


int
GDKms(void)
{
	return (int) (GDKusec() / 1000);
}
