/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

#include "monetdb_config.h"
#include "bat_logger.h"
#include "bat_utils.h"
#include "sql_types.h" /* EC_POS */

#define CATALOG_JUL2015 52200
#define CATALOG_MAR2018 52201

logger *bat_logger = NULL;
logger *bat_logger_shared = NULL;

/* return GDK_SUCCEED if we can handle the upgrade from oldversion to
 * newversion */
static gdk_return
bl_preversion(int oldversion, int newversion)
{
	(void)newversion;
#ifdef CATALOG_JUL2015
	if (oldversion == CATALOG_JUL2015) {
		/* upgrade to Jun2016 releases */
		catalog_version = oldversion;
		geomversion_set();
		return GDK_SUCCEED;
	}
#endif

#ifdef CATALOG_MAR2018
	if (oldversion == CATALOG_MAR2018) {
		/* upgrade to Aug2018 releases */
		catalog_version = oldversion;
		return GDK_SUCCEED;
	}
#endif

	return GDK_FAIL;
}

#define N(schema, table, column)	schema "_" table "_" column

static gdk_return
bl_postversion( void *lg) 
{
	(void)lg;

#ifdef CATALOG_JUL2015
	if (catalog_version <= CATALOG_JUL2015) {
		BAT *b;
		BATiter bi;
		BAT *te, *tne;
		BUN p, q;
		int geomUpgrade = 0;
		geomcatalogfix_fptr func;

		te = temp_descriptor(logger_find_bat(lg, N("sys", "types", "eclass")));
		if (te == NULL)
			return GDK_FAIL;
		bi = bat_iterator(te);
		tne = COLnew(te->hseqbase, TYPE_int, BATcount(te), PERSISTENT);
		if (tne == NULL) {
			bat_destroy(te);
			return GDK_FAIL;
		}
		for (p = 0, q = BUNlast(te); p < q; p++) {
			int eclass = *(int*)BUNtail(bi, p);

			if (eclass == EC_GEOM)		/* old EC_EXTERNAL */
				eclass++;		/* shift up */
			if (BUNappend(tne, &eclass, true) != GDK_SUCCEED) {
				bat_destroy(tne);
				bat_destroy(te);
				return GDK_FAIL;
			}
		}
		bat_destroy(te);
		if (BATsetaccess(tne, BAT_READ) != GDK_SUCCEED ||
		    logger_add_bat(lg, tne, N("sys", "types", "eclass")) != GDK_SUCCEED) {
			bat_destroy(tne);
			return GDK_FAIL;
		}
		bat_destroy(tne);

		/* in the past, the args.inout column may have been
		 * incorrectly upgraded to a bit instead of a bte
		 * column */
		te = temp_descriptor(logger_find_bat(lg, N("sys", "args", "inout")));
		if (te == NULL)
			return GDK_FAIL;
		if (te->ttype == TYPE_bit) {
			bi = bat_iterator(te);
			tne = COLnew(te->hseqbase, TYPE_bte, BATcount(te), PERSISTENT);
			if (tne == NULL) {
				bat_destroy(te);
				return GDK_FAIL;
			}
			for (p = 0, q = BUNlast(te); p < q; p++) {
				bte inout = (bte) *(bit*)BUNtail(bi, p);

				if (BUNappend(tne, &inout, true) != GDK_SUCCEED) {
					bat_destroy(tne);
					bat_destroy(te);
					return GDK_FAIL;
				}
			}
			if (BATsetaccess(tne, BAT_READ) != GDK_SUCCEED ||
			    logger_add_bat(lg, tne, N("sys", "args", "inout")) != GDK_SUCCEED) {
				bat_destroy(tne);
				bat_destroy(te);
				return GDK_FAIL;
			}
			bat_destroy(tne);
		}
		bat_destroy(te);

		/* test whether the catalog contains information
		 * regarding geometry types */
		b = BATdescriptor((bat) logger_find_bat(lg, N("sys", "types", "systemname")));
		if (b == NULL)
			return GDK_FAIL;
		bi = bat_iterator(b);
		for (p = 0, q = BUNlast(b); p < q; p++) {
			char *t = toLower(BUNtail(bi, p));
			if (t == NULL) {
				bat_destroy(b);
				return GDK_FAIL;
			}
			geomUpgrade = strcmp(t, "wkb") == 0;
			GDKfree(t);
			if (geomUpgrade)
				break;
		}
		bat_destroy(b);

		if (!geomUpgrade) {
			/* test whether the catalog contains
			 * information about geometry columns */
			b = BATdescriptor((bat) logger_find_bat(lg, N("sys", "_columns", "type")));
			if (b == NULL)
				return GDK_FAIL;
			bi = bat_iterator(b);
			for (p = 0, q = BUNlast(b); p < q; p++) {
				char *t = toLower(BUNtail(bi, p));
				if (t == NULL) {
					bat_destroy(b);
					return GDK_FAIL;
				}
				geomUpgrade = strcmp(t, "point") == 0 ||
					strcmp(t, "curve") == 0 ||
					strcmp(t, "linestring") == 0 ||
					strcmp(t, "surface") == 0 ||
					strcmp(t, "polygon") == 0 ||
					strcmp(t, "multipoint") == 0 ||
					strcmp(t, "multicurve") == 0 ||
					strcmp(t, "multilinestring") == 0 ||
					strcmp(t, "multisurface") == 0 ||
					strcmp(t, "multipolygon") == 0 ||
					strcmp(t, "geometry") == 0 ||
					strcmp(t, "geometrycollection") == 0;
				GDKfree(t);
				if (geomUpgrade)
					break;
			}
			bat_destroy(b);
		}

		func = geomcatalogfix_get();
		if (func) {
			/* Either the catalog needs to be updated and
			 * the geom module has been loaded
			 * (geomUpgrade == 1), or the catalog knew
			 * nothing about geometries but the geom
			 * module is loaded (geomUpgrade == 0) */
			(*func)(lg, geomUpgrade);
		} else {
			if (geomUpgrade) {
				/* The catalog needs to be updated but
				 * the geom module has not been
				 * loaded.  The case is prohibited by
				 * the sanity check performed during
				 * initialization */
				GDKfatal("the catalogue needs to be updated but the geom module is not loaded.\n");
			}
			/* The catalog knew nothing about geometries
			 * and the geom module is not loaded: Do
			 * nothing */
		}
	}
#endif

#ifdef CATALOG_MAR2018
	if (catalog_version <= CATALOG_MAR2018) {
		/* In the past, the sys._tables.readlonly and
		 * tmp._tables.readonly columns were renamed to
		 * (sys|tmp)._tables.access and the type was changed
		 * from BOOLEAN to SMALLINT.  It may be that this
		 * change didn't make it to the sys._columns table but
		 * was only done in the internal representation of the
		 * (sys|tmp)._tables tables.  Here we fix this. */

		/* first figure out whether there are any columns in
		 * the catalog called "readonly" (if there are fewer
		 * then 2, then we don't have to do anything) */
		BAT *cn = temp_descriptor(logger_find_bat(lg, N("sys", "_columns", "name")));
		if (cn == NULL)
			return GDK_FAIL;
		BAT *cs = BATselect(cn, NULL, "readonly", NULL, 1, 1, 0);
		if (cs == NULL) {
			bat_destroy(cn);
			return GDK_FAIL;
		}
		if (BATcount(cs) >= 2) {
			/* find the OIDs of the rows of sys.schemas
			 * where the name is either 'sys' or 'tmp',
			 * result in ss */
			BAT *sn = temp_descriptor(logger_find_bat(lg, N("sys", "schemas", "name")));
			if (sn == NULL) {
				bat_destroy(cs);
				bat_destroy(cn);
				return GDK_FAIL;
			}
			BAT *ss1 = BATselect(sn, NULL, "sys", NULL, 1, 1, 0);
			BAT *ss2 = BATselect(sn, NULL, "tmp", NULL, 1, 1, 0);
			bat_destroy(sn);
			if (ss1 == NULL || ss2 == NULL) {
				bat_destroy(ss1);
				bat_destroy(ss2);
				bat_destroy(cs);
				bat_destroy(cn);
				return GDK_FAIL;
			}
			assert(BATcount(ss1) == 1);
			assert(BATcount(ss2) == 1);
			BAT *ss = BATmergecand(ss1, ss2);
			bat_destroy(ss1);
			bat_destroy(ss2);
			if (ss == NULL) {
				bat_destroy(cs);
				bat_destroy(cn);
				return GDK_FAIL;
			}
			assert(BATcount(ss) == 2);
			/* find the OIDs of the rows of sys._tables
			 * where the name is '_tables', result in
			 * ts */
			BAT *tn = temp_descriptor(logger_find_bat(lg, N("sys", "_tables", "name")));
			if (tn == NULL) {
				bat_destroy(ss);
				bat_destroy(cs);
				bat_destroy(cn);
				return GDK_FAIL;
			}
			BAT *ts = BATselect(tn, NULL, "_tables", NULL, 1, 1, 0);
			bat_destroy(tn);
			if (ts == NULL) {
				bat_destroy(ss);
				bat_destroy(cs);
				bat_destroy(cn);
				return GDK_FAIL;
			}
			/* find the OIDs of the rows of sys._tables
			 * where the name is '_tables' (candidate list
			 * ts) and the schema is either 'sys' or 'tmp'
			 * (candidate list ss for sys.schemas.id
			 * column), result in ts1 */
			tn = temp_descriptor(logger_find_bat(lg, N("sys", "_tables", "schema_id")));
			sn = temp_descriptor(logger_find_bat(lg, N("sys", "schemas", "id")));
			if (tn == NULL || sn == NULL) {
				bat_destroy(tn);
				bat_destroy(sn);
				bat_destroy(ts);
				bat_destroy(ss);
				bat_destroy(cs);
				bat_destroy(cn);
				return GDK_FAIL;
			}
			BAT *ts1 = BATintersect(tn, sn, ts, ss, 0, 2);
			bat_destroy(tn);
			bat_destroy(sn);
			bat_destroy(ts);
			bat_destroy(ss);
			if (ts1 == NULL) {
				bat_destroy(cs);
				bat_destroy(cn);
				return GDK_FAIL;
			}
			/* find the OIDs of the rows of sys._columns
			 * where the name is 'readonly' (candidate
			 * list cs) and the table is either
			 * sys._tables or tmp._tables (candidate list
			 * ts1 for sys._tables.table_id), result in
			 * cs1, transferred to cs) */
			BAT *ct = temp_descriptor(logger_find_bat(lg, N("sys", "_columns", "table_id")));
			tn = temp_descriptor(logger_find_bat(lg, N("sys", "_tables", "id")));
			if (ct == NULL || tn == NULL) {
				bat_destroy(ct);
				bat_destroy(tn);
				bat_destroy(ts1);
				bat_destroy(cs);
				bat_destroy(cn);
				return GDK_FAIL;
			}
			BAT *cs1 = BATintersect(ct, tn, cs, ts1, 0, 2);
			bat_destroy(ct);
			bat_destroy(tn);
			bat_destroy(ts1);
			bat_destroy(cs);
			if (cs1 == NULL) {
				bat_destroy(cn);
				return GDK_FAIL;
			}
			cs = cs1;
			if (BATcount(cs) == 2) {
				/* in cs we now have the OIDs of the
				 * rows in sys._columns where we have
				 * to change the name and type from
				 * "readonly" and "boolean" to
				 * "access" and "smallint" */
				ct = temp_descriptor(logger_find_bat(lg, N("sys", "_columns", "type")));
				BAT *cd = temp_descriptor(logger_find_bat(lg, N("sys", "_columns", "type_digits")));
				BAT *ctn = COLnew(ct->hseqbase, ct->ttype, BATcount(ct), PERSISTENT);
				BAT *cdn = COLnew(cd->hseqbase, cd->ttype, BATcount(cd), PERSISTENT);
				BAT *cnn = COLnew(cn->hseqbase, cn->ttype, BATcount(cn), PERSISTENT);
				if (ct == NULL || cd == NULL || ctn == NULL || cdn == NULL || cnn == NULL) {
				  bailout1:
					bat_destroy(ct);
					bat_destroy(cd);
					bat_destroy(ctn);
					bat_destroy(cdn);
					bat_destroy(cnn);
					bat_destroy(cs);
					bat_destroy(cn);
					return GDK_FAIL;
				}
				BATiter csi = bat_iterator(cs);
				BATiter cti = bat_iterator(ct);
				BATiter cdi = bat_iterator(cd);
				BATiter cni = bat_iterator(cn);
				BUN p;
				BUN q = *(const oid *) BUNtail(csi, 0) - cn->hseqbase;
				for (p = 0; p < q; p++) {
					if (BUNappend(cnn, BUNtail(cni, p), false) != GDK_SUCCEED ||
					    BUNappend(cdn, BUNtail(cdi, p), false) != GDK_SUCCEED ||
					    BUNappend(ctn, BUNtail(cti, p), false) != GDK_SUCCEED) {
						goto bailout1;
					}
				}
				int i = 16;
				if (BUNappend(cnn, "access", false) != GDK_SUCCEED ||
				    BUNappend(cdn, &i, false) != GDK_SUCCEED ||
				    BUNappend(ctn, "smallint", false) != GDK_SUCCEED) {
					goto bailout1;
				}
				q = *(const oid *) BUNtail(csi, 1) - cn->hseqbase;
				for (p++; p < q; p++) {
					if (BUNappend(cnn, BUNtail(cni, p), false) != GDK_SUCCEED ||
					    BUNappend(cdn, BUNtail(cdi, p), false) != GDK_SUCCEED ||
					    BUNappend(ctn, BUNtail(cti, p), false) != GDK_SUCCEED) {
						goto bailout1;
					}
				}
				if (BUNappend(cnn, "access", false) != GDK_SUCCEED ||
				    BUNappend(cdn, &i, false) != GDK_SUCCEED ||
				    BUNappend(ctn, "smallint", false) != GDK_SUCCEED) {
					goto bailout1;
				}
				q = BATcount(cn);
				for (p++; p < q; p++) {
					if (BUNappend(cnn, BUNtail(cni, p), false) != GDK_SUCCEED ||
					    BUNappend(cdn, BUNtail(cdi, p), false) != GDK_SUCCEED ||
					    BUNappend(ctn, BUNtail(cti, p), false) != GDK_SUCCEED) {
						goto bailout1;
					}
				}
				bat_destroy(ct);
				bat_destroy(cd);
				bat_destroy(cs); cs = NULL;
				bat_destroy(cn); cn = NULL;
				if (BATsetaccess(cnn, BAT_READ) != GDK_SUCCEED ||
				    BATsetaccess(cdn, BAT_READ) != GDK_SUCCEED ||
				    BATsetaccess(ctn, BAT_READ) != GDK_SUCCEED ||
				    logger_add_bat(lg, cnn, N("sys", "_columns", "name")) != GDK_SUCCEED ||
				    logger_add_bat(lg, cdn, N("sys", "_columns", "type_digits")) != GDK_SUCCEED ||
				    logger_add_bat(lg, ctn, N("sys", "_columns", "type")) != GDK_SUCCEED) {
					bat_destroy(ctn);
					bat_destroy(cdn);
					bat_destroy(cnn);
					return GDK_FAIL;
				}
				bat_destroy(ctn);
				bat_destroy(cdn);
				bat_destroy(cnn);
			}
		}
		bat_destroy(cs);
		bat_destroy(cn);
	}
#endif
	return GDK_SUCCEED;
}

static int 
bl_create(int debug, const char *logdir, int cat_version, int keep_persisted_log_files)
{
	if (bat_logger)
		return LOG_ERR;
	bat_logger = logger_create(debug, "sql", logdir, cat_version, bl_preversion, bl_postversion, keep_persisted_log_files);
	if (bat_logger)
		return LOG_OK;
	return LOG_ERR;
}

static int
bl_create_shared(int debug, const char *logdir, int cat_version, const char *local_logdir)
{
	if (bat_logger_shared)
		return LOG_ERR;
	bat_logger_shared = logger_create_shared(debug, "sql", logdir, local_logdir, cat_version, bl_preversion, bl_postversion);
	if (bat_logger_shared)
		return LOG_OK;
	return LOG_ERR;
}

static void 
bl_destroy(void)
{
	logger *l = bat_logger;
	bat_logger = NULL;
	if (l) {
		close_stream(l->log);
		GDKfree(l->fn);
		GDKfree(l->dir);
		GDKfree(l->local_dir);
		GDKfree(l->buf);
		GDKfree(l);
	}
}

static void
bl_destroy_shared(void)
{
	logger *l = bat_logger_shared;

	bat_logger_shared = NULL;
	if (l) {
		logger_exit(l);
		logger_destroy(l);
	}
}

static int 
bl_restart(void)
{
	if (bat_logger)
		return logger_restart(bat_logger) == GDK_SUCCEED ? LOG_OK : LOG_ERR;
	return LOG_OK;
}

static int
bl_cleanup(int keep_persisted_log_files)
{
	if (bat_logger)
		return logger_cleanup(bat_logger, keep_persisted_log_files) == GDK_SUCCEED ? LOG_OK : LOG_ERR;
	return LOG_OK;
}

static int
bl_cleanup_shared(int keep_persisted_log_files)
{
	if (bat_logger_shared)
		return logger_cleanup(bat_logger_shared, keep_persisted_log_files) == GDK_SUCCEED ? LOG_OK : LOG_ERR;
	return LOG_OK;
}

static int
bl_changes(void)
{	
	return (int) MIN(logger_changes(bat_logger), GDK_int_max);
}

static lng
bl_read_last_transaction_id_shared(void)
{
	return logger_read_last_transaction_id(bat_logger_shared, bat_logger_shared->dir, LOGFILE, bat_logger_shared->dbfarm_role);
}

static lng
bl_get_transaction_drift_shared(void)
{
	lng res = bl_read_last_transaction_id_shared();
	if (res != -1) {
		return MIN(res, GDK_int_max) - MIN(bat_logger_shared->id, GDK_int_max);
	}
	return res;
}

static int 
bl_get_sequence(int seq, lng *id)
{
	return logger_sequence(bat_logger, seq, id);
}

static int
bl_get_sequence_shared(int seq, lng *id)
{
	return logger_sequence(bat_logger_shared, seq, id);
}

static int
bl_log_isnew(void)
{
	if (BATcount(bat_logger->catalog_bid) > 10) {
		return 0;
	}
	return 1;
}

static int
bl_log_isnew_shared(void)
{
	if (BATcount(bat_logger_shared->catalog_bid) > 10) {
		return 0;
	}
	return 1;
}

static int 
bl_tstart(void)
{
	return log_tstart(bat_logger) == GDK_SUCCEED ? LOG_OK : LOG_ERR;
}

static int 
bl_tend(void)
{
	return log_tend(bat_logger) == GDK_SUCCEED ? LOG_OK : LOG_ERR;
}

static int 
bl_sequence(int seq, lng id)
{
	return log_sequence(bat_logger, seq, id) == GDK_SUCCEED ? LOG_OK : LOG_ERR;
}

static int
bl_reload_shared(void)
{
	return logger_reload(bat_logger_shared) == GDK_SUCCEED ? LOG_OK : LOG_ERR;
}

static int
bl_isdestroyed(void)
{
	return bat_logger == NULL;
}

void
bat_logger_init( logger_functions *lf )
{
	lf->create = bl_create;
	lf->destroy = bl_destroy;
	lf->restart = bl_restart;
	lf->cleanup = bl_cleanup;
	lf->changes = bl_changes;
	lf->get_sequence = bl_get_sequence;
	lf->log_isnew = bl_log_isnew;
	lf->log_tstart = bl_tstart;
	lf->log_tend = bl_tend;
	lf->log_sequence = bl_sequence;
	lf->log_isdestroyed = bl_isdestroyed;
}

void
bat_logger_init_shared( logger_functions *lf )
{
	lf->create_shared = bl_create_shared;
	lf->destroy = bl_destroy_shared;
	lf->cleanup = bl_cleanup_shared;
	lf->get_sequence = bl_get_sequence_shared;
	lf->read_last_transaction_id = bl_read_last_transaction_id_shared;
	lf->get_transaction_drift = bl_get_transaction_drift_shared;
	lf->log_isnew = bl_log_isnew_shared;
	lf->reload = bl_reload_shared;
}
