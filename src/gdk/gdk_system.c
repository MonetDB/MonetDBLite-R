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
#ifdef HAVE_UNISTD_H
#include <unistd.h>		/* for sysconf symbols */
#endif

MT_Lock MT_system_lock MT_LOCK_INITIALIZER("MT_system_lock");

#if !defined(USE_PTHREAD_LOCKS) && !defined(NDEBUG)
ATOMIC_TYPE volatile GDKlockcnt;
ATOMIC_TYPE volatile GDKlockcontentioncnt;
ATOMIC_TYPE volatile GDKlocksleepcnt;
MT_Lock * volatile GDKlocklist = 0;
ATOMIC_FLAG volatile GDKlocklistlock = ATOMIC_FLAG_INIT;

void
GDKlockstatistics(int what)
{
	(void) what;
}
#endif



#if !defined(HAVE_PTHREAD_H) && defined(WIN32) && defined(_MSC_VER)
static struct winthread {
	struct winthread *next;
	HANDLE hdl;
	DWORD tid;
	void (*func) (void *);
	void *arg;
	int flags;
} *winthreads = NULL;
#define EXITED		1
#define DETACHED	2
#define WAITING		4
static CRITICAL_SECTION winthread_cs;
static bool winthread_cs_init = false;

void
gdk_system_reset(void)
{
	winthread_cs_init = false;
}

static struct winthread *
find_winthread(DWORD tid)
{
	struct winthread *w;

	EnterCriticalSection(&winthread_cs);
	for (w = winthreads; w; w = w->next)
		if (w->tid == tid)
			break;
	LeaveCriticalSection(&winthread_cs);
	return w;
}

static void
rm_winthread(struct winthread *w)
{
	struct winthread **wp;

	assert(winthread_cs_init);
	EnterCriticalSection(&winthread_cs);
	for (wp = &winthreads; *wp && *wp != w; wp = &(*wp)->next)
		;
	if (*wp)
		*wp = w->next;
	LeaveCriticalSection(&winthread_cs);
	free(w);
}

static DWORD WINAPI
thread_starter(LPVOID arg)
{
	(*((struct winthread *) arg)->func)(((struct winthread *) arg)->arg);
	((struct winthread *) arg)->flags |= EXITED;
	ExitThread(0);
	return TRUE;
}

static void
join_threads(void)
{
	struct winthread *w;
	bool waited;

	do {
		waited = false;
		EnterCriticalSection(&winthread_cs);
		for (w = winthreads; w; w = w->next) {
			if ((w->flags & (EXITED | DETACHED | WAITING)) == (EXITED | DETACHED)) {
				w->flags |= WAITING;
				LeaveCriticalSection(&winthread_cs);
				WaitForSingleObject(w->hdl, INFINITE);
				CloseHandle(w->hdl);
				rm_winthread(w);
				waited = true;
				EnterCriticalSection(&winthread_cs);
				break;
			}
		}
		LeaveCriticalSection(&winthread_cs);
	} while (waited);
}

void
join_detached_threads(void)
{
	struct winthread *w;
	bool waited;

	do {
		waited = false;
		EnterCriticalSection(&winthread_cs);
		for (w = winthreads; w; w = w->next) {
			if ((w->flags & (DETACHED | WAITING)) == DETACHED) {
				w->flags |= WAITING;
				LeaveCriticalSection(&winthread_cs);
				WaitForSingleObject(w->hdl, INFINITE);
				CloseHandle(w->hdl);
				rm_winthread(w);
				waited = true;
				EnterCriticalSection(&winthread_cs);
				break;
			}
		}
		LeaveCriticalSection(&winthread_cs);
	} while (waited);
}

int
MT_create_thread(MT_Id *t, void (*f) (void *), void *arg, enum MT_thr_detach d)
{
	struct winthread *w = malloc(sizeof(*w));

	if (w == NULL)
		return -1;

	if (!winthread_cs_init) {
		/* we only get here before any threads are created,
		 * and this is the only time that winthread_cs_init is
		 * ever changed */
		InitializeCriticalSection(&winthread_cs);
		winthread_cs_init = true;
	}
	join_threads();
	w->func = f;
	w->arg = arg;
	w->flags = 0;
	if (d == MT_THR_DETACHED)
		w->flags |= DETACHED;
	EnterCriticalSection(&winthread_cs);
	w->next = winthreads;
	winthreads = w;
	LeaveCriticalSection(&winthread_cs);
	w->hdl = CreateThread(NULL, THREAD_STACK_SIZE, thread_starter, w, 0, &w->tid);
	if (w->hdl == NULL) {
		rm_winthread(w);
		return -1;
	}
	*t = (MT_Id) w->tid;
	return 0;
}

void
MT_exiting_thread(void)
{
	struct winthread *w;

	if ((w = find_winthread(GetCurrentThreadId())) != NULL)
		w->flags |= EXITED;
}

/* coverity[+kill] */
void
MT_exit_thread(int s)
{
	if (winthread_cs_init) {
		MT_exiting_thread();
		ExitThread(s);
	} else {
		/* no threads started yet, so this is a global exit */
		MT_global_exit(s);
	}
}

int
MT_join_thread(MT_Id t)
{
	struct winthread *w;

	assert(winthread_cs_init);
	join_threads();
	w = find_winthread((DWORD) t);
	if (w == NULL || w->hdl == NULL)
		return -1;
	if (WaitForSingleObject(w->hdl, INFINITE) == WAIT_OBJECT_0 &&
	    CloseHandle(w->hdl)) {
		rm_winthread(w);
		return 0;
	}
	return -1;
}

int
MT_kill_thread(MT_Id t)
{
	struct winthread *w;

	assert(winthread_cs_init);
	join_threads();
	w = find_winthread((DWORD) t);
	if (w == NULL)
		return -1;
	if (w->hdl == NULL) {
		/* detached thread */
		HANDLE h;
		int ret = 0;
		h = OpenThread(THREAD_ALL_ACCESS, 0, (DWORD) t);
		if (h == NULL)
			return -1;
		if (TerminateThread(h, -1))
			ret = -1;
		CloseHandle(h);
		return ret;
	}
	if (TerminateThread(w->hdl, -1))
		return 0;
	return -1;
}

#ifdef USE_PTHREAD_LOCKS

void
pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *mutexattr)
{
	(void) mutexattr;
	*mutex = CreateMutex(NULL, 0, NULL);
}

void
pthread_mutex_destroy(pthread_mutex_t *mutex)
{
	CloseHandle(*mutex);
}

int
pthread_mutex_lock(pthread_mutex_t *mutex)
{
	return WaitForSingleObject(*mutex, INFINITE) == WAIT_OBJECT_0 ? 0 : -1;
}

int
pthread_mutex_trylock(pthread_mutex_t *mutex)
{
	return WaitForSingleObject(*mutex, 0) == WAIT_OBJECT_0 ? 0 : -1;
}

int
pthread_mutex_unlock(pthread_mutex_t *mutex)
{
	return ReleaseMutex(*mutex) ? 0 : -1;
}

#endif

void
pthread_sema_init(pthread_sema_t *s, int flag, int nresources)
{
	(void) flag;
	*s = CreateSemaphore(NULL, nresources, 0x7fffffff, NULL);
}

void
pthread_sema_destroy(pthread_sema_t *s)
{
	CloseHandle(*s);
}

void
pthread_sema_up(pthread_sema_t *s)
{
	ReleaseSemaphore(*s, 1, NULL);
}

void
pthread_sema_down(pthread_sema_t *s)
{
	WaitForSingleObject(*s, INFINITE);
}

#else  /* !defined(HAVE_PTHREAD_H) && defined(_MSC_VER) */

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
static int
MT_thread_sigmask(sigset_t * new_mask, sigset_t * orig_mask)
{
	if(sigdelset(new_mask, SIGQUIT))
		return -1;
	if(sigdelset(new_mask, SIGALRM))	/* else sleep doesn't work */
		return -1;
	if(sigdelset(new_mask, SIGPROF))
		return -1;
	if(pthread_sigmask(SIG_SETMASK, new_mask, orig_mask))
		return -1;
	return 0;
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

	(*p->func)(p->arg);
	pthread_mutex_lock(&posthread_lock);
	/* *p may have been freed by join_threads, so try to find it
         * again before using it */
	if ((p = find_posthread_locked(pthread_self())) != NULL)
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
	bool waited;
	pthread_t tid;

	pthread_mutex_lock(&posthread_lock);
	do {
		waited = false;
		for (p = posthreads; p; p = p->next) {
			if (p->exited) {
				tid = p->tid;
				rm_posthread_locked(p);
				free(p);
				pthread_mutex_unlock(&posthread_lock);
				pthread_join(tid, NULL);
				pthread_mutex_lock(&posthread_lock);
				waited = true;
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
	if(MT_thread_sigmask(&new_mask, &orig_mask))
		return -1;
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
		(void) MT_thread_sigmask(&orig_mask, NULL); //going to fail anyway
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
	if(MT_thread_sigmask(&orig_mask, NULL))
		return -1;
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

#endif // pthread locks


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
