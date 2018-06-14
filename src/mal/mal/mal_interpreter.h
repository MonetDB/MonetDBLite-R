/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

/*
 * Author M. Kersten
 * The MAL Interpreter
 */

#ifndef _MAL_INTERPRET_H
#define _MAL_INTERPRET_H

#include "mal_client.h"

/*
 * Activation of a thread requires construction of the argument list
 * to be passed by a handle.
 */

/* #define DEBUG_FLOW */

mal_export MalStkPtr prepareMALstack(MalBlkPtr mb, int size);
mal_export str runMAL(Client c, MalBlkPtr mb, MalBlkPtr mbcaller, MalStkPtr env);
mal_export str runMALsequence(Client cntxt, MalBlkPtr mb, int startpc, int stoppc, MalStkPtr stk, MalStkPtr env, InstrPtr pcicaller);
mal_export str reenterMAL(Client cntxt, MalBlkPtr mb, int startpc, int stoppc, MalStkPtr stk);
mal_export str callMAL(Client cntxt, MalBlkPtr mb, MalStkPtr *glb, ValPtr argv[], char debug);
mal_export void garbageElement(Client cntxt, ValPtr v);
mal_export void garbageCollector(Client cntxt, MalBlkPtr mb, MalStkPtr stk, int flag);
mal_export str malCommandCall(MalStkPtr stk, InstrPtr pci);
mal_export int isNotUsedIn(InstrPtr p, int start, int a);

mal_export ptr getArgReference(MalStkPtr stk, InstrPtr pci, int k);

#define getArgReference_TYPE(s, pci, k, TYPE)	((TYPE *) getArgReference(s, pci, k))
#define getArgReference_bit(s, pci, k)	((bit *) &(s)->stk[(pci)->argv[k]].val.btval)
#define getArgReference_sht(s, pci, k)	(&(s)->stk[(pci)->argv[k]].val.shval)
#define getArgReference_bat(s, pci, k)	(&(s)->stk[(pci)->argv[k]].val.bval)
#define getArgReference_int(s, pci, k)	(&(s)->stk[(pci)->argv[k]].val.ival)
#define getArgReference_bte(s, pci, k)	(&(s)->stk[(pci)->argv[k]].val.btval)
#define getArgReference_oid(s, pci, k)	(&(s)->stk[(pci)->argv[k]].val.oval)
#define getArgReference_ptr(s, pci, k)	(&(s)->stk[(pci)->argv[k]].val.pval)
#define getArgReference_flt(s, pci, k)	(&(s)->stk[(pci)->argv[k]].val.fval)
#define getArgReference_dbl(s, pci, k)	(&(s)->stk[(pci)->argv[k]].val.dval)
#define getArgReference_lng(s, pci, k)	(&(s)->stk[(pci)->argv[k]].val.lval)
#ifdef HAVE_HGE
#define getArgReference_hge(s, pci, k)	(&(s)->stk[(pci)->argv[k]].val.hval)
#endif
#define getArgReference_str(s, pci, k)	(&(s)->stk[(pci)->argv[k]].val.sval)

#endif /*  _MAL_INTERPRET_H*/
