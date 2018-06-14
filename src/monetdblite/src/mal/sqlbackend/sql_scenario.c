/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

/*
 * (authors) N. Nes, M.L. Kersten
 * The SQL scenario implementation is a derivative of the MAL session scenario.
 *
 */
/*
 * Before we are can process SQL statements the global catalog
 * should be initialized. Thereafter, each time a client enters
 * we update its context descriptor to denote an SQL scenario.
 */
#include "monetdb_config.h"
#include "mal_backend.h"
#include "sql_scenario.h"
#include "sql_result.h"
#include "sql_gencode.h"
#include "sql_optimizer.h"
#include "sql_assert.h"
#include "sql_execute.h"
#include "sql_env.h"
#include "sql_mvc.h"
#include "sql_user.h"
#include "sql_datetime.h"
#include "mal_parser.h"
#include "mal_builder.h"
#include "mal_namespace.h"
#include "mal_linker.h"
#include "bat5.h"
#include "mtime.h"
#include "optimizer.h"
#include "opt_prelude.h"
#include "opt_pipes.h"
#include "opt_mitosis.h"
#include <unistd.h>

#include "bat5.h"
#include "sql_upgrades.h"

static int SQLinitialized = 0;
static int SQLnewcatalog = 0;
int SQLdebug = 0;
static char *sqlinit = NULL;
MT_Lock sql_contextLock MT_LOCK_INITIALIZER("sql_contextLock");

static void
monet5_freestack(int clientid, backend_stack stk)
{
	MalStkPtr p = (ptr) stk;

	(void) clientid;
	if (p != NULL)
		freeStack(p);
#ifdef _SQL_SCENARIO_DEBUG
	fprintf(stderr, "#monet5_freestack\n");
#endif
}

static void
monet5_freecode(int clientid, backend_code code, backend_stack stk, int nr, char *name)
{
	str msg;

	(void) code;
	(void) stk;
	(void) nr;
	(void) clientid;
	msg = SQLCacheRemove(MCgetClient(clientid), name);
	if (msg)
		freeException(msg);	/* do something with error? */

#ifdef _SQL_SCENARIO_DEBUG
	fprintf(stderr, "#monet5_free:%d\n", nr);
#endif
}

str
SQLsession(Client cntxt, MalBlkPtr mb, MalStkPtr stk, InstrPtr pci)
{
	str msg = MAL_SUCCEED;
	str logmsg;
	int cnt=0;

	(void) mb;
	(void) stk;
	(void) pci;
	if (SQLinitialized == 0 && (msg = SQLprelude(NULL)) != MAL_SUCCEED)
		return msg;
	msg = setScenario(cntxt, "sql");
	// Wait for any recovery process to be finished
	do {
		MT_sleep_ms(1000);
		logmsg = GDKgetenv("recovery");
		if( logmsg== NULL && ++cnt  == 5)
			throw(SQL,"SQLinit", "#WARNING server not ready, recovery in progress\n");
    }while (logmsg == NULL);
	return msg;
}

str
SQLsession2(Client cntxt, MalBlkPtr mb, MalStkPtr stk, InstrPtr pci)
{
	str msg = MAL_SUCCEED;
	str logmsg;
	int cnt=0;

	(void) mb;
	(void) stk;
	(void) pci;
	if (SQLinitialized == 0 && (msg = SQLprelude(NULL)) != MAL_SUCCEED)
		return msg;
	msg = setScenario(cntxt, "msql");
	// Wait for any recovery process to be finished
	do {
		MT_sleep_ms(1000);
		logmsg = GDKgetenv("recovery");
		if( logmsg== NULL && ++cnt  == 5)
			throw(SQL,"SQLinit","#WARNING server not ready, recovery in progress\n");
    }while (logmsg == NULL);
	return msg;
}

static str SQLinit(void);

str
SQLprelude(void *ret)
{
	str tmp;
	Scenario s = getFreeScenario();

	(void) ret;
	if (!s)
		throw(MAL, "sql.start", SQLSTATE(42000) "out of scenario slots");
	sqlinit = GDKgetenv("sqlinit");
	s->name = "S_Q_L";
	s->language = "sql";
	s->initSystem = NULL;
	s->exitSystem = "SQLexit";
	s->initClient = "SQLinitClient";
	s->exitClient = "SQLexitClient";
	s->reader = "SQLreader";
	s->parser = "SQLparser";
	s->engine = "SQLengine";
	s->callback = "SQLcallback";

	tmp = SQLinit();
	if (tmp != MAL_SUCCEED) {
		GDKfatal("Fatal error during initialization:\n%s\n", tmp);
	}
	/* only register availability of scenarios AFTER we are inited! */
	s->name = "sql";
	return MAL_SUCCEED;
}

str
SQLexit(Client c)
{

#ifdef _SQL_SCENARIO_DEBUG
	fprintf(stderr, "#SQLexit\n");
#endif
	MT_lock_set(&sql_contextLock);
	if (SQLinitialized) {
		Scenario ms = findScenario("msql"), s = findScenario("sql");
		for (c = mal_clients; c < mal_clients + MAL_MAXCLIENTS; c++) {
			str msg = SQLexitClient(c);
			if (msg) {
				GDKfree(msg);
			}
		}
		mvc_exit();
		SQLinitialized = FALSE;
		if (ms) {
			ms->name = NULL;
		}
		if (s) {
			s->name = NULL;
		}
	}
	MT_lock_unset(&sql_contextLock);
	return MAL_SUCCEED;
}

str
SQLepilogue(void *ret)
{
	(void) ret;
	SQLexit(NULL);
	return MAL_SUCCEED;
}

MT_Id sqllogthread, idlethread;

static str
SQLinit(void)
{
	char *debug_str = GDKgetenv("sql_debug"), *msg = MAL_SUCCEED;
	int readonly = GDKgetenv_isyes("gdk_readonly");
	int single_user = GDKgetenv_isyes("gdk_single_user");
	const char *gmt = "GMT";
	tzone tz;

#ifdef _SQL_SCENARIO_DEBUG
	fprintf(stderr, "#SQLinit Monet 5\n");
#endif
	if (SQLinitialized)
		return MAL_SUCCEED;

#ifdef NEED_MT_LOCK_INIT
	MT_lock_init(&sql_contextLock, "sql_contextLock");
#endif

	MT_lock_set(&sql_contextLock);
	memset((char *) &be_funcs, 0, sizeof(backend_functions));
	be_funcs.fstack = &monet5_freestack;
	be_funcs.fcode = &monet5_freecode;
	be_funcs.fresolve_function = &monet5_resolve_function;
	monet5_user_init(&be_funcs);

	msg = MTIMEtimezone(&tz, &gmt);
	if (msg) {
		MT_lock_unset(&sql_contextLock);
		return msg;
	}
	(void) tz;
	if (debug_str)
		SQLdebug = strtol(debug_str, NULL, 10);
	if (single_user)
		SQLdebug |= 64;
	if (readonly)
		SQLdebug |= 32;

	if ((SQLnewcatalog = mvc_init(SQLdebug, GDKinmemory() ? store_mem : store_bat, readonly, single_user, 0)) < 0) {
		MT_lock_unset(&sql_contextLock);
		throw(SQL, "SQLinit", SQLSTATE(42000) "Catalogue initialization failed");
	}
	SQLinitialized = TRUE;
	MT_lock_unset(&sql_contextLock);
	if (!GDKinmemory()) {
		if (MT_create_thread(&sqllogthread, (void (*)(void *)) mvc_logmanager, NULL, MT_THR_JOINABLE) != 0) {
			throw(SQL, "SQLinit", "Starting log manager failed");
		}
		GDKregister(sqllogthread);
		if (!(SQLdebug&1024)) {
			if (MT_create_thread(&idlethread, (void (*)(void *)) mvc_idlemanager, NULL, MT_THR_JOINABLE) != 0) {
				throw(SQL, "SQLinit", "Starting idle manager failed");
			}
			GDKregister(idlethread);
		}
	}
	return MAL_SUCCEED;
}

#define SQLglobal(name, val, failure)                                                                             \
	if(!stack_push_var(sql, name, &ctype) || !stack_set_var(sql, name, VALset(&src, ctype.type->localtype, val))) \
		failure--;

#define NR_GLOBAL_VARS 10
/* NR_GLOBAL_VAR should match exactly the number of variables created
   in global_variables */
/* initialize the global variable, ie make mvc point to these */
static int
global_variables(mvc *sql, char *user, char *schema)
{
	sql_subtype ctype;
	char *typename;
	lng sec = 0;
	bit F = FALSE;
	ValRecord src;
	str opt;
	int failure = 0;

	typename = "int";
	sql_find_subtype(&ctype, typename, 0, 0);
	SQLglobal("debug", &sql->debug, failure);
	SQLglobal("cache", &sql->cache, failure);

	typename = "varchar";
	sql_find_subtype(&ctype, typename, 1024, 0);
	SQLglobal("current_schema", schema, failure);
	SQLglobal("current_user", user, failure);
	SQLglobal("current_role", user, failure);

	/* inherit the optimizer from the server */
	opt = GDKgetenv("sql_optimizer");
	if (!opt)
		opt = "default_pipe";
	SQLglobal("optimizer", opt, failure);

	typename = "sec_interval";
	sql_find_subtype(&ctype, typename, inttype2digits(ihour, isec), 0);
	SQLglobal("current_timezone", &sec, failure);

	typename = "boolean";
	sql_find_subtype(&ctype, typename, 0, 0);
	SQLglobal("history", &F, failure);

	typename = "bigint";
	sql_find_subtype(&ctype, typename, 0, 0);
	SQLglobal("last_id", &sql->last_id, failure);
	SQLglobal("rowcnt", &sql->rowcnt, failure);
	return failure;
}

#define TRANS_ABORTED SQLSTATE(25005) "Current transaction is aborted (please ROLLBACK)\n"

str
handle_error(mvc *m, int pstatus, str msg)
{
	str new = 0, newmsg= MAL_SUCCEED;

	/* transaction already broken */
	if (m->type != Q_TRANS && pstatus < 0) {
		new = createException(SQL,"sql.execute",TRANS_ABORTED);
	} else if( GDKerrbuf && GDKerrbuf[0]){
		new = GDKstrdup(GDKerrbuf);
		GDKerrbuf[0] = 0;
	} else if( *m->errstr){
		new = GDKstrdup(m->errstr);
		m->errstr[0] = 0;
	}
	if( new && msg){
		newmsg = GDKzalloc( strlen(msg) + strlen(new) + 64);
		strcpy(newmsg, msg);
		/* strcat(newmsg,"!"); */
		strcat(newmsg,new);
		GDKfree(new);
		GDKfree(msg);
	} else
	if( msg)
		newmsg = msg;
	else
	if( new)
		newmsg = new;
	return newmsg;
}

str
SQLautocommit(mvc *m)
{
	str msg = MAL_SUCCEED;

	if (m->session->auto_commit && m->session->active) {
		if (mvc_status(m) < 0) {
			mvc_rollback(m, 0, NULL);
		} else if (mvc_commit(m, 0, NULL) < 0) {
			msg = handle_error(m, 0, 0);
			m->errstr[0] = 0;
		}
	}
	return msg;
}

void
SQLtrans(mvc *m)
{
	m->caching = m->cache;
	if (!m->session->active) {
		sql_session *s;

		if(mvc_trans(m) < 0) {
			(void) sql_error(m, 02, SQLSTATE(HY001) "Allocation failure while starting the transaction");
			return;
		}
		s = m->session;
		if (!s->schema) {
			if (s->schema_name)
				GDKfree(s->schema_name);
			s->schema_name = monet5_user_get_def_schema(m, m->user_id);
			if(!s->schema_name) {
				mvc_cancel_session(m);
				(void) sql_error(m, 02, SQLSTATE(HY001) "Allocation failure while starting the transaction");
				return;
			}
			assert(s->schema_name);
			s->schema = find_sql_schema(s->tr, s->schema_name);
			assert(s->schema);
		}
	}
}

#ifdef HAVE_EMBEDDED
extern char* createdb_inline;
#endif

str
SQLinitClient(Client c)
{
	mvc *m;
	str schema;
	str msg = MAL_SUCCEED;
	backend *be;
	bstream *bfd = NULL;
	stream *fd = NULL;
	static int maybeupgrade = 1;

#ifdef _SQL_SCENARIO_DEBUG
	fprintf(stderr, "#SQLinitClient\n");
#endif
	if (SQLinitialized == 0 && (msg = SQLprelude(NULL)) != MAL_SUCCEED)
		return msg;
	MT_lock_set(&sql_contextLock);

	/*
	 * Based on the initialization return value we can prepare a SQLinit
	 * string with all information needed to initialize the catalog
	 * based on the mandatory scripts to be executed.
	 */
	if (sqlinit) {		/* add sqlinit to the fdin stack */
		buffer *b = (buffer *) GDKmalloc(sizeof(buffer));
		size_t len = strlen(sqlinit);
		char* cbuf = _STRDUP(sqlinit);
		stream *buf;
		bstream *fdin;

		if( b == NULL || cbuf == NULL) {
			MT_lock_unset(&sql_contextLock);
			GDKfree(b);
			GDKfree(cbuf);
			throw(SQL,"sql.initClient",SQLSTATE(HY001) MAL_MALLOC_FAIL);
		}

		buffer_init(b, cbuf, len);
		buf = buffer_rastream(b, "si");
		if( buf == NULL) {
			MT_lock_unset(&sql_contextLock);
			buffer_destroy(b);
			throw(SQL,"sql.initClient",SQLSTATE(HY001) MAL_MALLOC_FAIL);
		}

		fdin = bstream_create(buf, b->len);
		if( fdin == NULL) {
			MT_lock_unset(&sql_contextLock);
			buffer_destroy(b);
			throw(SQL,"sql.initClient",SQLSTATE(HY001) MAL_MALLOC_FAIL);
		}

		bstream_next(fdin);
		if( MCpushClientInput(c, fdin, 0, "") < 0)
			fprintf(stderr, "SQLinitClient:Could not switch client input stream");
	}
	if (c->sqlcontext == 0) {
		m = mvc_create(c->idx, 0, SQLdebug, c->fdin, c->fdout);
		if( m == NULL) {
			MT_lock_unset(&sql_contextLock);
			throw(SQL,"sql.initClient",SQLSTATE(HY001) MAL_MALLOC_FAIL);
		}
		if(global_variables(m, "monetdb", "sys") < 0) {
			MT_lock_unset(&sql_contextLock);
			mvc_destroy(m);
			throw(SQL,"sql.initClient",SQLSTATE(HY001) MAL_MALLOC_FAIL);
		}
		if (isAdministrator(c) || strcmp(c->scenario, "msql") == 0)	/* console should return everything */
			m->reply_size = -1;
		be = (void *) backend_create(m, c);
		if( be == NULL) {
			MT_lock_unset(&sql_contextLock);
			mvc_destroy(m);
			throw(SQL,"sql.initClient", SQLSTATE(HY001) MAL_MALLOC_FAIL);
		}
	} else {
		be = c->sqlcontext;
		m = be->mvc;
		if(mvc_reset(m, c->fdin, c->fdout, SQLdebug, NR_GLOBAL_VARS) < 0) {
			MT_lock_unset(&sql_contextLock);
			throw(SQL,"sql.initClient", SQLSTATE(HY001) MAL_MALLOC_FAIL);
		}
		backend_reset(be);
	}
	if (m->session->tr)
		reset_functions(m->session->tr);
#ifndef HAVE_EMBEDDED
	/* pass through credentials of the user if not console */
	schema = monet5_user_set_def_schema(m, c->user);
	if (!schema) {
		_DELETE(schema);
		MT_lock_unset(&sql_contextLock);
		throw(PERMD, "SQLinitClient", SQLSTATE(08004) "schema authorization error");
	}
	_DELETE(schema);
#else
	(void) schema;
#endif

	/*expect SQL text first */
	be->language = 'S';
	/* Set state, this indicates an initialized client scenario */
	c->state[MAL_SCENARIO_READER] = c;
	c->state[MAL_SCENARIO_PARSER] = c;
	c->state[MAL_SCENARIO_OPTIMIZE] = c;
	c->sqlcontext = be;

	initSQLreferences();
	/* initialize the database with predefined SQL functions */
	if (SQLnewcatalog == 0) {
		/* check whether table sys.systemfunctions exists: if
		 * it doesn't, this is probably a restart of the
		 * server after an incomplete initialization */
		sql_schema *s = mvc_bind_schema(m, "sys");
		sql_table *t = s ? mvc_bind_table(m, s, "systemfunctions") : NULL;
		if (t == NULL)
			SQLnewcatalog = 1;
	}
	if (SQLnewcatalog > 0) {
#ifdef HAVE_EMBEDDED
		(void) bfd;
		(void) fd;
		SQLnewcatalog = 0;
		maybeupgrade = 0;
		{
			size_t createdb_len = strlen(createdb_inline);
			buffer* createdb_buf;
			stream* createdb_stream;
			bstream* createdb_bstream;
			if ((createdb_buf = GDKmalloc(sizeof(buffer))) == NULL)
				throw(MAL, "createdb", SQLSTATE(HY001) MAL_MALLOC_FAIL);
			buffer_init(createdb_buf, createdb_inline, createdb_len);
			if ((createdb_stream = buffer_rastream(createdb_buf, "createdb.sql")) == NULL) {
				GDKfree(createdb_buf);
				throw(MAL, "createdb", SQLSTATE(HY001) MAL_MALLOC_FAIL);
			}
			if ((createdb_bstream = bstream_create(createdb_stream, createdb_len)) == NULL) {
				mnstr_destroy(createdb_stream);
				GDKfree(createdb_buf);
				throw(MAL, "createdb", SQLSTATE(HY001) MAL_MALLOC_FAIL);
			}
			if (bstream_next(createdb_bstream) >= 0)
				msg = SQLstatementIntern(c, &createdb_bstream->buf, "sql.init", TRUE, FALSE, NULL);
			else
				msg = createException(MAL, "createdb", SQLSTATE(42000) "Could not load inlined createdb script");

			bstream_destroy(createdb_bstream);
			if (m->sa)
				sa_destroy(m->sa);
			m->sa = NULL;
			m->sqs = NULL;
			GDKfree(createdb_buf);
		}

#else
		char path[FILENAME_MAX];
		str fullname;

		SQLnewcatalog = 0;
		maybeupgrade = 0;
		snprintf(path, FILENAME_MAX, "createdb");
		slash_2_dir_sep(path);
		fullname = MSP_locate_sqlscript(path, 1);
		if (fullname) {
			str filename = fullname;
			str p, n, newmsg= MAL_SUCCEED;
			fprintf(stdout, "# SQL catalog created, loading sql scripts once\n");
			do {
				p = strchr(filename, PATH_SEP);
				if (p)
					*p = '\0';
				if ((n = strrchr(filename, DIR_SEP)) == NULL) {
					n = filename;
				} else {
					n++;
				}
				fprintf(stdout, "# loading sql script: %s\n", n);
				fd = open_rastream(filename);
				if (p)
					filename = p + 1;

				if (fd) {
					size_t sz;
					sz = getFileSize(fd);
					if (sz > (size_t) 1 << 29) {
						mnstr_destroy(fd);
						newmsg = createException(MAL, "createdb", SQLSTATE(42000) "File %s too large to process", filename);
					} else {
						if((bfd = bstream_create(fd, sz == 0 ? (size_t) (128 * BLOCK) : sz)) == NULL) {
							mnstr_destroy(fd);
							newmsg = createException(MAL, "createdb", SQLSTATE(HY001) MAL_MALLOC_FAIL);
						} else {
							if (bstream_next(bfd) >= 0)
								newmsg = SQLstatementIntern(c, &bfd->buf, "sql.init", TRUE, FALSE, NULL);
							bstream_destroy(bfd);
						}
					}
					if (m->sa)
						sa_destroy(m->sa);
					m->sa = NULL;
					m->sqs = NULL;
					if (newmsg){
						fprintf(stderr,"%s",newmsg);
						GDKfree(newmsg);
					}
				}
			} while (p);
			GDKfree(fullname);
		} else
			fprintf(stderr, "!could not read createdb.sql\n");
#endif
	} else {		/* handle upgrades */
		m->sqs = NULL;
		if (!m->sa)
			m->sa = sa_create();
		if (!m->sa) {
			msg = createException(MAL, "createdb", SQLSTATE(HY001) MAL_MALLOC_FAIL);
		} else if (maybeupgrade) {
			SQLupgrades(c,m);
		}
		maybeupgrade = 0;
	}
	MT_lock_unset(&sql_contextLock);
	fflush(stdout);
	fflush(stderr);

	/* send error from create scripts back to the first client */
	if (msg) {
		msg = handle_error(m, 0, msg);
		*m->errstr = 0;
		sqlcleanup(m, mvc_status(m));
	}
	return msg;
}

str
SQLresetClient(Client c)
{
	str msg = MAL_SUCCEED;

	if (c->sqlcontext == NULL)
		throw(SQL, "SQLexitClient", SQLSTATE(42000) "MVC catalogue not available");
	if (c->sqlcontext) {
		backend *be = c->sqlcontext;
		mvc *m = be->mvc;

		assert(m->session);
		if (m->session->auto_commit && m->session->active) {
			if (mvc_status(m) >= 0 && mvc_commit(m, 0, NULL) < 0)
				msg = handle_error(m, 0, 0);
		}
		if (m->session->active) {
			mvc_rollback(m, 0, NULL);
		}

		res_tables_destroy(m->results);
		m->results = NULL;

		mvc_destroy(m);
		backend_destroy(be);
		c->state[MAL_SCENARIO_OPTIMIZE] = NULL;
		c->state[MAL_SCENARIO_PARSER] = NULL;
		c->sqlcontext = NULL;
	}
	c->state[MAL_SCENARIO_READER] = NULL;
	return msg;
}

str
SQLexitClient(Client c)
{
	str err;
#ifdef _SQL_SCENARIO_DEBUG
	fprintf(stderr, "#SQLexitClient\n");
#endif
	if (SQLinitialized == FALSE)
		throw(SQL, "SQLexitClient", SQLSTATE(42000) "Catalogue not available");
	if ((err = SQLresetClient(c)) != MAL_SUCCEED)
		return err;
	MALexitClient(c);
	//FIXME MCcloseClient(c);
	return MAL_SUCCEED;
}

/*
 * A statement received internally is simply appended for
 * execution
 */
str
SQLinitEnvironment(Client cntxt, MalBlkPtr mb, MalStkPtr stk, InstrPtr pci)
{
	str err;

	(void) mb;
	(void) stk;
	(void) pci;
	if ((err = SQLinitClient(cntxt)) == MAL_SUCCEED)
		cntxt->phase[MAL_SCENARIO_EXITCLIENT] = SQLexitClient;
	return err;
}


str
SQLstatement(Client cntxt, MalBlkPtr mb, MalStkPtr stk, InstrPtr pci)
{
	str *expr = getArgReference_str(stk, pci, 1);
	bit output = TRUE;

	(void) mb;
	if (pci->argc == 3)
		output = *getArgReference_bit(stk, pci, 2);

	return SQLstatementIntern(cntxt, expr, "SQLstatement", TRUE, output, NULL);
}

str
SQLcompile(Client cntxt, MalBlkPtr mb, MalStkPtr stk, InstrPtr pci)
{
	str *ret = getArgReference_str(stk, pci, 0);
	str *expr = getArgReference_str(stk, pci, 1);
	str msg;

	(void) mb;
	*ret = NULL;
	msg = SQLstatementIntern(cntxt, expr, "SQLcompile", FALSE, FALSE, NULL);
	if (msg == MAL_SUCCEED)
		*ret = _STRDUP("SQLcompile");
	if(*ret == NULL)
		throw(SQL,"sql.compile",SQLSTATE(HY001) MAL_MALLOC_FAIL);
	return msg;
}

/*
 * Locate a file with SQL commands and execute it. For the time being a 1MB
 * file limit is implicitly imposed. If the file can not be located in the
 * script library, we assume it is sufficiently self descriptive.
 * (Respecting the file system context where the call is executed )
 */
str
SQLinclude(Client cntxt, MalBlkPtr mb, MalStkPtr stk, InstrPtr pci)
{
	stream *fd;
	bstream *bfd;
	str *name = getArgReference_str(stk, pci, 1);
	str msg = MAL_SUCCEED, fullname;
	str *expr;
	mvc *m;
	size_t sz;

	fullname = MSP_locate_sqlscript(*name, 0);
	if (fullname == NULL)
		fullname = *name;
	fd = open_rastream(fullname);
	if (mnstr_errnr(fd) == MNSTR_OPEN_ERROR) {
		mnstr_destroy(fd);
		throw(MAL, "sql.include", SQLSTATE(42000) "could not open file: %s\n", *name);
	}
	sz = getFileSize(fd);
	if (sz > (size_t) 1 << 29) {
		mnstr_destroy(fd);
		throw(MAL, "sql.include", SQLSTATE(42000) "file %s too large to process", fullname);
	}
	if((bfd = bstream_create(fd, sz == 0 ? (size_t) (128 * BLOCK) : sz)) == NULL) {
		mnstr_destroy(fd);
		throw(MAL, "sql.include", SQLSTATE(HY001) MAL_MALLOC_FAIL);
	}
	if (bstream_next(bfd) < 0) {
		bstream_destroy(bfd);
		throw(MAL, "sql.include", SQLSTATE(42000) "could not read %s\n", *name);
	}

	expr = &bfd->buf;
	msg = SQLstatementIntern(cntxt, expr, "sql.include", TRUE, FALSE, NULL);
	bstream_destroy(bfd);
	m = ((backend *) cntxt->sqlcontext)->mvc;
	if (m->sa)
		sa_destroy(m->sa);
	m->sa = NULL;
	m->sqs = NULL;
	(void) mb;
	return msg;
}

/*
 * The SQL reader collects a (sequence) of statements from the input
 * stream, but only when no unresolved 'nxt' character is visible.
 * In combination with SQLparser this ensures that all statements
 * are handled one by one.
 *
 * The SQLreader is called from two places: the SQL parser and
 * the MAL debugger.
 * The former only occurs during the parsing phase and the
 * second only during exection.
 * This means we can safely change the language setting for
 * the duration of these calls.
 */

/* #define _SQL_READER_DEBUG */
str
SQLreader(Client c)
{
	int go = TRUE;
	str msg = MAL_SUCCEED;
	int more = TRUE;
	int commit_done = FALSE;
	backend *be = (backend *) c->sqlcontext;
	bstream *in = c->fdin;
	int language = -1;
	mvc *m = NULL;
	int blocked = isa_block_stream(in->s);

	if (SQLinitialized == FALSE) {
		c->mode = FINISHCLIENT;
		return MAL_SUCCEED;
	}
	if (!be || c->mode <= FINISHCLIENT) {
#ifdef _SQL_READER_DEBUG
		fprintf(stderr, "#SQL client finished\n");
#endif
		c->mode = FINISHCLIENT;
		return MAL_SUCCEED;
	}
#ifdef _SQL_READER_DEBUG
	fprintf(stderr, "#SQLparser: start reading SQL %s %s\n", (be->console ? " from console" : ""), (blocked ? "Blocked read" : ""));
#endif
	language = be->language;	/* 'S' for SQL, 'D' from debugger */
	m = be->mvc;
	m->errstr[0] = 0;
	/*
	 * Continue processing any left-over input from the previous round.
	 */

#ifdef _SQL_READER_DEBUG
	fprintf(stderr, "#pos %d len %d eof %d \n", in->pos, in->len, in->eof);
#endif
	/*
	 * Distinguish between console reading and mclient connections.
	 */
	while (more) {
		more = FALSE;

		/* Different kinds of supported statements sequences
		   A;   -- single line                  s
		   A \n B;      -- multi line                   S
		   A; B;   -- compound single block     s
		   A;   -- many multi line
		   B \n C; -- statements in one block   S
		 */
		/* auto_commit on end of statement */
		if (m->scanner.mode == LINE_N && !commit_done) {
			msg = SQLautocommit(m);
			go = msg == MAL_SUCCEED;
			commit_done = TRUE;
		}

		if (go && in->pos >= in->len) {
			ssize_t rd;

			if (c->bak) {
#ifdef _SQL_READER_DEBUG
				fprintf(stderr, "#Switch to backup stream\n");
#endif
				in = c->fdin;
				blocked = isa_block_stream(in->s);
				m->scanner.rs = c->fdin;
				c->fdin->pos += c->yycur;
				c->yycur = 0;
			}
			if (in->eof || !blocked) {
				language = (be->console) ? 'S' : 0;

				/* The rules of auto_commit require us to finish
				   and start a transaction on the start of a new statement (s A;B; case) */
				if (!(m->emod & mod_debug) && !commit_done) {
					msg = SQLautocommit(m);
					go = msg == MAL_SUCCEED;
					commit_done = TRUE;
				}

				if (go && ((!blocked && mnstr_write(c->fdout, c->prompt, c->promptlength, 1) != 1) || mnstr_flush(c->fdout))) {
					go = FALSE;
					break;
				}
				in->eof = 0;
			}
			if (in->buf == NULL) {
				more = FALSE;
				go = FALSE;
			} else if (go && (rd = bstream_next(in)) <= 0) {
#ifdef _SQL_READER_DEBUG
				fprintf(stderr, "#rd %d  language %d eof %d\n", rd, language, in->eof);
#endif
				if (be->language == 'D' && in->eof == 0)
					return msg;

				if (rd == 0 && language !=0 && in->eof && !be->console) {
					/* we hadn't seen the EOF before, so just try again
					   (this time with prompt) */
					more = TRUE;
					continue;
				}
				go = FALSE;
				break;
			} else if (go && !be->console && language == 0) {
				if (in->buf[in->pos] == 's' && !in->eof) {
					while ((rd = bstream_next(in)) > 0)
						;
				}
				be->language = in->buf[in->pos++];
				if (be->language == 's') {
					be->language = 'S';
					m->scanner.mode = LINE_1;
				} else if (be->language == 'S') {
					m->scanner.mode = LINE_N;
				}
			}
#ifdef _SQL_READER_DEBUG
			fprintf(stderr, "#SQL blk:%s\n", in->buf + in->pos);
#endif
		}
	}
	if ( (c->stimeout && (GDKusec() - c->session) > c->stimeout) || !go || (strncmp(CURRENT(c), "\\q", 2) == 0)) {
		in->pos = in->len;	/* skip rest of the input */
		c->mode = FINISHCLIENT;
		return msg;
	}
	return msg;
}

/*
 * The SQL block is stored in the client input buffer, from which it
 * can be parsed by the SQL parser. The client structure contains
 * a small table of bounded tables. This should be reset before we
 * parse a new statement sequence.
 * Before we parse the sql statement, we look for any variable settings
 * for specific commands.
 * The most important one is to prepare code to be handled by the debugger.
 * The current analysis is simple and fulfills our short-term needs.
 * A future version may analyze the parameter settings in more detail.
 */

#define MAX_QUERY 	(64*1024*1024)

static int
caching(mvc *m)
{
	return m->caching;
}

static int
cachable(mvc *m, sql_rel *r)
{
	if (m->emode == m_prepare)	/* prepared plans are always cached */
		return 1;
	if (m->emode == m_plan)		/* we plan to display without execution */
		return 0;
	if (m->type == Q_TRANS )	/* m->type == Q_SCHEMA || cachable to make sure we have trace on alter statements  */
		return 0;
	if (m->type != Q_PREPARE)
		return 0;
	/* we don't store queries with a large footprint */
	if(r && sa_size(m->sa) > MAX_QUERY) 
		return 0;
	return 1;
}

/*
 * The core part of the SQL interface, parse the query and
 * store away the template (non)optimized code in the query cache
 * and the MAL module
 */

str
SQLparser(Client c)
{
	bstream *in = c->fdin;
	stream *out = c->fdout;
	str msg = NULL;
	backend *be;
	mvc *m;
	int oldvtop, oldstop;
	int pstatus = 0;
	int err = 0, opt = 0;

	be = (backend *) c->sqlcontext;
	if (be == 0) {
		/* leave a message in the log */
		fprintf(stderr, "SQL state descriptor missing, cannot handle client!\n");
		/* stop here, instead of printing the exception below to the
		 * client in an endless loop */
		c->mode = FINISHCLIENT;
		throw(SQL, "SQLparser", SQLSTATE(42000) "State descriptor missing, aborting");
	}
	oldvtop = c->curprg->def->vtop;
	oldstop = c->curprg->def->stop;
	be->vtop = oldvtop;
#ifdef _SQL_PARSER_DEBUG
	fprintf(stderr, "#SQL compilation \n");
	fprintf(stderr,"debugger? %d(%d)\n", (int) be->mvc->emode, (int) be->mvc->emod);
#endif
	m = be->mvc;
	m->type = Q_PARSE;
	if (be->language != 'X')
		SQLtrans(m);
	if(*m->errstr) {
		if (strlen(m->errstr) > 6 && m->errstr[5] == '!')
			msg = createException(PARSE, "SQLparser", "%s", m->errstr);
		else
			msg = createException(PARSE, "SQLparser", SQLSTATE(42000) "%s", m->errstr);
		*m->errstr=0;
		c->mode = FINISHCLIENT;
		return msg;
	}
	pstatus = m->session->status;

	/* sqlparse needs sql allocator to be available.  It can be NULL at
	 * this point if this is a recursive call. */
	m->sqs = NULL;
	if (!m->sa) 
		m->sa = sa_create();
	if (!m->sa) {
		c->mode = FINISHCLIENT;
		throw(SQL, "SQLparser", SQLSTATE(HY001) MAL_MALLOC_FAIL " for SQL allocator");
	}

	m->emode = m_normal;
	m->emod = mod_none;
	if (be->language == 'X') {
		int n = 0, v, off, len;

		if (strncmp(in->buf + in->pos, "export ", 7) == 0)
			n = sscanf(in->buf + in->pos + 7, "%d %d %d", &v, &off, &len);

		if (n == 2 || n == 3) {
			mvc_export_chunk(be, out, v, off, n == 3 ? len : m->reply_size);

			in->pos = in->len;	/* HACK: should use parsed length */
			return MAL_SUCCEED;
		}
		if (strncmp(in->buf + in->pos, "close ", 6) == 0) {
			res_table *t;

			v = (int) strtol(in->buf + in->pos + 6, NULL, 0);
			t = res_tables_find(m->results, v);
			if (t)
				m->results = res_tables_remove(m->results, t);
			in->pos = in->len;	/* HACK: should use parsed length */
			return MAL_SUCCEED;
		}
		if (strncmp(in->buf + in->pos, "release ", 8) == 0) {
			cq *q = NULL;

			v = (int) strtol(in->buf + in->pos + 8, NULL, 0);
			if ((q = qc_find(m->qc, v)) != NULL)
				 qc_delete(m->qc, q);
			in->pos = in->len;	/* HACK: should use parsed length */
			return MAL_SUCCEED;
		}
		if (strncmp(in->buf + in->pos, "auto_commit ", 12) == 0) {
			int commit;
			v = (int) strtol(in->buf + in->pos + 12, NULL, 10);
			commit = (!m->session->auto_commit && v);
			m->session->auto_commit = (v) != 0;
			m->session->ac_on_commit = m->session->auto_commit;
			if (m->session->active) {
				if (commit && mvc_commit(m, 0, NULL) < 0) {
					msg = createException(SQL, "COMMIT", SQLSTATE(42000) "Commit failed while enabling auto_commit");
				} else if (!commit && mvc_rollback(m, 0, NULL) < 0) {
					mnstr_printf(out, "!COMMIT: rollback failed while " "disabling auto_commit\n");
					msg = createException(SQL, "COMMIT", SQLSTATE(42000) "rollback failed while " "disabling auto_commit");
				}
			}
			in->pos = in->len;	/* HACK: should use parsed length */
			if (msg != NULL)
				goto finalize;
			return MAL_SUCCEED;
		}
		if (strncmp(in->buf + in->pos, "reply_size ", 11) == 0) {
			v = (int) strtol(in->buf + in->pos + 11, NULL, 10);
			if (v < -1) {
				msg = createException(SQL, "SQLparser", SQLSTATE(42000) "Reply_size cannot be negative");
				goto finalize;
			}
			m->reply_size = v;
			in->pos = in->len;	/* HACK: should use parsed length */
			return MAL_SUCCEED;
		}
		if (strncmp(in->buf + in->pos, "sizeheader", 10) == 0) {
			v = (int) strtol(in->buf + in->pos + 10, NULL, 10);
			m->sizeheader = v != 0;
			in->pos = in->len;	/* HACK: should use parsed length */
			return MAL_SUCCEED;
		}
		if (strncmp(in->buf + in->pos, "quit", 4) == 0) {
			c->mode = FINISHCLIENT;
			return MAL_SUCCEED;
		}
		msg = createException(SQL, "SQLparser", SQLSTATE(42000) "Unrecognized X command: %s\n", in->buf + in->pos);
		goto finalize;
	}
	if (be->language !='S') {
		msg = createException(SQL, "SQLparser", SQLSTATE(42000) "Unrecognized language prefix: %ci\n", be->language);
		goto finalize;
	}

	if ((err = sqlparse(m)) ||
	    /* Only forget old errors on transaction boundaries */
	    (mvc_status(m) && m->type != Q_TRANS) || !m->sym) {
		if (!err &&m->scanner.started)	/* repeat old errors, with a parsed query */
			err = mvc_status(m);
		if (err && *m->errstr) {
			if (strlen(m->errstr) > 6 && m->errstr[5] == '!')
				msg = createException(PARSE, "SQLparser", "%s", m->errstr);
			else
				msg = createException(PARSE, "SQLparser", SQLSTATE(42000) "%s", m->errstr);
			*m->errstr = 0;
		}
		if (m->sym)
			msg = handle_error(m, pstatus, msg);
		sqlcleanup(m, err);
		goto finalize;
	}
	assert(m->session->schema != NULL);
	/*
	 * We have dealt with the first parsing step and advanced the input reader
	 * to the next statement (if any).
	 * Now is the time to also perform the semantic analysis, optimize and
	 * produce code.
	 */
	be->q = NULL;
	if (m->emode == m_execute) {
		assert(m->sym->data.lval->h->type == type_int);
		be->q = qc_find(m->qc, m->sym->data.lval->h->data.i_val);
		if (!be->q) {
			err = -1;
			msg = createException(SQL, "EXEC", SQLSTATE(07003) "No prepared statement with id: %d\n", m->sym->data.lval->h->data.i_val);
			*m->errstr = 0;
			msg = handle_error(m, pstatus, msg);
			sqlcleanup(m, err);
			goto finalize;
		} else if (be->q->type != Q_PREPARE) {
			err = -1;
			msg = createException(SQL, "EXEC", SQLSTATE(07005) "Given handle id is not for a " "prepared statement: %d\n", m->sym->data.lval->h->data.i_val);
			*m->errstr = 0;
			msg = handle_error(m, pstatus, msg);
			sqlcleanup(m, err);
			goto finalize;
		}
		scanner_query_processed(&(m->scanner));
	} else if (caching(m) && cachable(m, NULL) && m->emode != m_prepare && (be->q = qc_match(m->qc, m->sym, m->args, m->argc, m->scanner.key ^ m->session->schema->base.id)) != NULL) {
		/* query template was found in the query cache */
		scanner_query_processed(&(m->scanner));
		m->no_mitosis = be->q->no_mitosis;
	} else {
		sql_rel *r;

		r = sql_symbol2relation(m, m->sym);

		if (!r || (err = mvc_status(m) && m->type != Q_TRANS && *m->errstr)) {
			if (strlen(m->errstr) > 6 && m->errstr[5] == '!')
				msg = createException(PARSE, "SQLparser", "%s", m->errstr);
			else
				msg = createException(PARSE, "SQLparser", SQLSTATE(42000) "%s", m->errstr);
			*m->errstr = 0;
			msg = handle_error(m, pstatus, msg);
			sqlcleanup(m, err);
			goto finalize;
		}

		if ((!caching(m) || !cachable(m, r)) && m->emode != m_prepare) {
			char *q = query_cleaned(QUERY(m->scanner));
			if(!q) {
				err = 1;
				msg = createException(PARSE, "SQLparser", SQLSTATE(HY001) MAL_MALLOC_FAIL);
			} else {
				/* Query template should not be cached */
				scanner_query_processed(&(m->scanner));

				err = 0;
				if (backend_callinline(be, c) < 0 ||
					backend_dumpstmt(be, c->curprg->def, r, 1, 0, q) < 0)
					err = 1;
				else opt = 1;
				GDKfree(q);
			}
		} else {
			/* Add the query tree to the SQL query cache
			 * and bake a MAL program for it.
			 */
			char *q = query_cleaned(QUERY(m->scanner)), *escaped_q;
			char qname[IDLENGTH];
			be->q = NULL;
			if(!q) {
				err = 1;
				msg = createException(PARSE, "SQLparser", SQLSTATE(HY001) MAL_MALLOC_FAIL);
			}
			(void) snprintf(qname, IDLENGTH, "%c%d_%d", (m->emode == m_prepare?'p':'s'), m->qc->id++, m->qc->clientid);
			escaped_q = sql_escape_str(q);
			if(!escaped_q) {
				err = 1;
				msg = createException(PARSE, "SQLparser", SQLSTATE(HY001) MAL_MALLOC_FAIL);
			} else {
				be->q = qc_insert(m->qc, m->sa,	/* the allocator */
						  r,	/* keep relational query */
						  qname, /* its MAL name) */
						  m->sym,	/* the sql symbol tree */
						  m->args,	/* the argument list */
						  m->argc, m->scanner.key ^ m->session->schema->base.id,	/* the statement hash key */
						  m->emode == m_prepare ? Q_PREPARE : m->type,	/* the type of the statement */
						  escaped_q,
						  m->no_mitosis);
			}
			if(!be->q) {
				err = 1;
				msg = createException(PARSE, "SQLparser", SQLSTATE(HY001) MAL_MALLOC_FAIL);
			}
			GDKfree(q);
			scanner_query_processed(&(m->scanner));
			be->q->code = (backend_code) backend_dumpproc(be, c, be->q, r);
			if (!be->q->code)
				err = 1;
			be->q->stk = 0;

			/* passed over to query cache, used during dumpproc */
			m->sa = NULL;
			m->sym = NULL;
			/* register name in the namespace */
			be->q->name = putName(be->q->name);
			if(!be->q->name) {
				err = 1;
				msg = createException(PARSE, "SQLparser", SQLSTATE(HY001) MAL_MALLOC_FAIL);
			}
		}
	}
	if (err)
		m->session->status = -10;
	if (err == 0) {
		/* no parsing error encountered, finalize the code of the query wrapper */
		if (be->q) {
			if (m->emode == m_prepare){
				/* For prepared queries, return a table with result set structure*/
				/* optimize the code block and rename it */
				err = mvc_export_prepare(m, c->fdout, be->q, "");
			} else if( m->emode == m_execute || m->emode == m_normal || m->emode == m_plan){
				/* call procedure generation (only in cache mode) */
				backend_call(be, c, be->q);
			}
		}

		pushEndInstruction(c->curprg->def);
		/* check the query wrapper for errors */
		chkTypes(c->usermodule, c->curprg->def, TRUE);

		/* in case we had produced a non-cachable plan, the optimizer should be called */
		if (opt ) {
			msg = SQLoptimizeQuery(c, c->curprg->def);

			if (msg != MAL_SUCCEED) {
				sqlcleanup(m, err);
				goto finalize;
			}
		}
		//printFunction(c->fdout, c->curprg->def, 0, LIST_MAL_ALL);
		/* we know more in this case than chkProgram(c->fdout, c->usermodule, c->curprg->def); */
		if (c->curprg->def->errors) {
			msg = c->curprg->def->errors;
			c->curprg->def->errors = 0;
			/* restore the state */
			MSresetInstructions(c->curprg->def, oldstop);
			freeVariables(c, c->curprg->def, NULL, oldvtop);
			if (msg == NULL && *m->errstr){
				if (strlen(m->errstr) > 6 && m->errstr[5] == '!')
					msg = createException(PARSE, "SQLparser", "%s", m->errstr);
				else
					msg = createException(PARSE, "SQLparser", SQLSTATE(M0M27) "Semantic errors %s", m->errstr);
				*m->errstr = 0;
			} else if(msg) {
				str newmsg;
				newmsg = createException(PARSE, "SQLparser", SQLSTATE(M0M27) "Semantic errors %s", msg);
				GDKfree(msg);
				msg = newmsg;
			}
		}
	}
finalize:
	if (msg)
		sqlcleanup(m, 0);
	return msg;
}

str
SQLengine(Client c)
{
	backend *be = (backend *) c->sqlcontext;
	return SQLengineIntern(c, be);
}


int SQLisInitialized(void) {
	return SQLinitialized > 0;
}

str
SQLCacheRemove(Client c, str nme)
{
	Symbol s;

#ifdef _SQL_CACHE_DEBUG
	fprintf(stderr, "#SQLCacheRemove %s\n", nme);
#endif

	s = findSymbolInModule(c->usermodule, nme);
	if (s == NULL)
		throw(MAL, "cache.remove", SQLSTATE(42000) "internal error, symbol missing\n");
	deleteSymbol(c->usermodule, s);
	return MAL_SUCCEED;
}

str
SQLcallback(Client c, str msg){
	if(msg &&  (strstr(msg, "MALexception") || strstr(msg,"GDKexception"))) {
		// massage the error to comply with SQL
		char *s;
		s= strchr(msg,(int)':');
		if (s ) 
			s= strchr(msg,(int)':');
		if( s){
			char newerr[1024];
			s++;
			strncpy(newerr, msg, s - msg);
			newerr[s-msg] = 0;
			snprintf(newerr + (s-msg), 1024 -(s-msg), SQLSTATE(HY020) "%s",s);
			GDKfree(msg);
			msg = GDKstrdup(newerr);
		}
	}
	if (msg) {
		/* remove exception decoration */
		char *m, *n, *p, *s;
		size_t l;

		m = p = msg;
		while (m && *m) {
			n = strchr(m, '\n');
			if (n)
				*n = 0;
			s = getExceptionMessageAndState(m);
			if (n) {
				*n++ = '\n';
				l = n - s;
			} else {
				l = strlen(s);
			}
			memmove(p, s, l);
			p += l;
			m = n;
		}
		*p = 0;
	}
	return MALcallback(c,msg);
}

str
SYSupdate_tables(Client cntxt, MalBlkPtr mb, MalStkPtr stk, InstrPtr pci)
{
	mvc *m = ((backend *) cntxt->sqlcontext)->mvc;

	(void) mb;
	(void) stk;
	(void) pci;

	sql_trans_update_tables(m->session->tr, mvc_bind_schema(m, "sys"));
	return MAL_SUCCEED;
}

str
SYSupdate_schemas(Client cntxt, MalBlkPtr mb, MalStkPtr stk, InstrPtr pci)
{
	mvc *m = ((backend *) cntxt->sqlcontext)->mvc;

	(void) mb;
	(void) stk;
	(void) pci;

	sql_trans_update_schemas(m->session->tr);
	return MAL_SUCCEED;
}
