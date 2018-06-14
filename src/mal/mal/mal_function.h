/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

#ifndef _MAL_FCN_H
#define _MAL_FCN_H

#include "mal_instruction.h"
#include "mal_module.h"
#include "mal_resolve.h"

#define getLastUpdate(L,I)	((L)->var[I].updated)
#define getEndScope(L,I)	((L)->var[I].eolife)
#define getBeginScope(L,I)	((L)->var[I].declared)

/* #define DEBUG_MAL_FCN */
/* #define DEBUG_CLONE */

mal_export Symbol   newFunction(str mod, str nme,int kind);
mal_export int      getPC(MalBlkPtr mb, InstrPtr p);

mal_export Symbol   getFunctionSymbol(Module scope, InstrPtr p);
mal_export void chkFlow(MalBlkPtr mb);
mal_export void chkDeclarations(MalBlkPtr mb);
mal_export void clrDeclarations(MalBlkPtr mb);
mal_export int isLoopBarrier(MalBlkPtr mb, int pc);
mal_export int getBlockExit(MalBlkPtr mb,int pc);
mal_export int getBlockBegin(MalBlkPtr mb,int pc);
mal_export void setVariableScope(MalBlkPtr mb);

mal_export void printFunction(stream *fd, MalBlkPtr mb, MalStkPtr stk, int flg);
mal_export void fprintFunction(FILE *fd, MalBlkPtr mb, MalStkPtr stk, int flg);
mal_export void debugFunction(stream *fd, MalBlkPtr mb, MalStkPtr stk, int flg, int first, int size);

mal_export int getBarrierEnvelop(MalBlkPtr mb);

mal_export Symbol cloneFunction(Module scope, Symbol proc, MalBlkPtr mb, InstrPtr p);

#include "mal_exception.h"

#define MAXDEPTH 32
#endif /*  _MAL_FCN_H*/
