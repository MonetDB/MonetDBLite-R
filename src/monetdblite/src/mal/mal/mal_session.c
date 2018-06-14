
/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

/* (author) M.L. Kersten
 */
#include "monetdb_config.h"
#include "mal_session.h"
#include "mal_instruction.h" /* for pushEndInstruction() */
#include "mal_interpreter.h" /* for runMAL(), garbageElement() */
#include "mal_parser.h"	     /* for parseMAL() */
#include "mal_namespace.h"
#include "mal_builder.h"
#include "mal_private.h"
#include "gdk.h"	/* for opendir and friends */

/*
 * The MonetDB server uses a startup script to boot the system.
 * This script is an ordinary MAL program, but will mostly
 * consist of include statements to load modules of general interest.
 * The startup script is run as user Admin.
 */
str
malBootstrap(void)
{
	Client c = NULL;
	str msg = NULL, bootfile = "mal_init";

	c = MCinitClient((oid) 0, 0, 0);
	if (!c) {
		return GDKstrdup("malBootstrap: Failed to initialize client");
	}
	c->curmodule = c->usermodule = userModule();
	if(c->usermodule == NULL) {
		return GDKstrdup("#malBootstrap:Failed to initialise client MAL module");
	}
	if ( (msg = defaultScenario(c)) ) {
		return msg;
	}
	if((msg = MSinitClientPrg(c, "user", "main")) != MAL_SUCCEED) {
		return msg;
	}
	if( MCinitClientThread(c) < 0){
		return GDKstrdup("#malBootstrap:Failed to create client thread");
	}
	msg = malInclude(c, bootfile, 0);
	if (msg != NULL) {
		return msg;
	}
	pushEndInstruction(c->curprg->def);
	chkProgram(c->usermodule, c->curprg->def);
	if ( (msg= c->curprg->def->errors) != MAL_SUCCEED ) {
		return msg;
	}
	msg = MALengine(c);
	return msg;
}

/*
 * Every client has a 'main' function to collect the statements.  Once
 * the END instruction has been found, it is added to the symbol table
 * and a fresh container is being constructed.  Note, this scheme makes
 * testing for recursive function calls a little more difficult.
 * Therefore, type checking should be performed afterwards.
 *
 * In interactive mode,  the closing statement is never reached.  The
 * 'main' procedure is typically cleaned between successive external
 * messages except for its variables, which are considerd global.  This
 * storage container is re-used when during the previous call nothing
 * was added.  At the end of the session we have to garbage collect the
 * BATs introduced.
 */
static str
MSresetClientPrg(Client cntxt, str mod, str fcn)
{
	MalBlkPtr mb;
	InstrPtr p;

	cntxt->itrace = 0;  /* turn off any debugging */
	mb = cntxt->curprg->def;
	mb->stop = 1;
	mb->errors = MAL_SUCCEED;
	p = mb->stmt[0];

	p->gc = 0;
	p->retc = 1;
	p->argc = 1;
	p->argv[0] = 0;

#ifdef _DEBUG_SESSION_
	fprintf(stderr,"reset sym %s %s to %s, id %d\n", 
		cntxt->curprg->name, getFunctionId(p), nme, findVariable(mb,nme) );
	fprintf(stderr,"vtop %d\n", mb->vtop);
	if( mb->vtop)
	fprintf(stderr,"first var %s\n", mb->var[0].id);
#endif

	setModuleId(p, mod);
	setFunctionId(p, fcn);
	if( findVariable(mb,fcn) < 0)
		p->argv[0] = newVariable(mb, fcn, strlen(fcn), TYPE_void);

	setVarType(mb, findVariable(mb, fcn), TYPE_void);
	/* remove any MAL history */
	if (mb->history) {
		freeMalBlk(mb->history);
		mb->history = 0;
	}
	return MAL_SUCCEED;
}

/*
 * Create a new container block
 */

str
MSinitClientPrg(Client cntxt, str mod, str nme)
{
	int idx;

	if (cntxt->curprg  && idcmp(nme, cntxt->curprg->name) == 0)
		return MSresetClientPrg(cntxt, putName(mod), putName(nme));
	cntxt->curprg = newFunction(putName(mod), putName(nme), FUNCTIONsymbol);
	if( cntxt->curprg == 0)
		throw(MAL, "initClientPrg", SQLSTATE(HY001) MAL_MALLOC_FAIL);
	if( (idx= findVariable(cntxt->curprg->def,"main")) >=0)
		setVarType(cntxt->curprg->def, idx, TYPE_void);
	insertSymbol(cntxt->usermodule,cntxt->curprg);
	
	if (cntxt->glb == NULL )
		cntxt->glb = newGlobalStack(MAXGLOBALS + cntxt->curprg->def->vsize);
	if( cntxt->glb == NULL)
		throw(MAL,"initClientPrg", SQLSTATE(HY001) MAL_MALLOC_FAIL);
	assert(cntxt->curprg->def != NULL);
	assert(cntxt->curprg->def->vtop >0);
	return MAL_SUCCEED;
}


/*
 * After the client initialization has been finished, we can start the
 * interaction protocol. This involves parsing the input in the context
 * of an already defined procedure and upon success, its execution.
 *
 * In essence, this calls for an incremental parsing operation, because
 * we should wait until a complete basic block has been detected.  Test,
 * first collect the instructions before we take them all.
 *
 * In interactive mode, we should remove the instructions before
 * accepting new ones. The function signature remains the same and the
 * symbol table should also not be affected.  Aside from removing
 * instruction, we should also condense the variable stack, i.e.
 * removing at least the temporary variables, but maybe everything
 * beyond a previous defined point.
 *
 * Beware that we have to cleanup the global stack as well. This to
 * avoid subsequent calls to find garbage information.  However, this
 * action is only required after a successful execution.  Otherwise,
 * garbage collection is not needed.
 */
void
MSresetInstructions(MalBlkPtr mb, int start)
{
	int i;
	InstrPtr p;

	for (i = start; i < mb->ssize; i++) {
		p = getInstrPtr(mb, i);
		if (p)
			freeInstruction(p);
		mb->stmt[i] = NULL;
	}
	mb->stop = start;
}

/*
 * Determine the variables being used and clear non-used onces.
 */
void
MSresetVariables(Client cntxt, MalBlkPtr mb, MalStkPtr glb, int start)
{
	int i;

#ifdef _DEBUG_SESSION_
	fprintf(stderr,"resetVarables %d  vtop %d errors %s\n", start, mb->vtop,mb->errors);
#endif
	for (i = 0; i < start && i < mb->vtop ; i++)
		setVarUsed(mb,i);
	if (mb->errors == MAL_SUCCEED)
		for (i = start; i < mb->vtop; i++) {
			if (isVarUsed(mb,i) || !isTmpVar(mb,i)){
				assert(!mb->var[i].value.vtype || isVarConstant(mb, i));
				setVarUsed(mb,i);
			}
			if (glb && !isVarUsed(mb,i)) {
				if (isVarConstant(mb, i))
					garbageElement(cntxt, &glb->stk[i]);
				/* clean stack entry */
				glb->stk[i].vtype = TYPE_int;
				glb->stk[i].len = 0;
				glb->stk[i].val.pval = 0;
			}
		}

#ifdef _DEBUG_SESSION_
	fprintf(stderr,"resetVar %s %d\n", getFunctionId(mb->stmt[0]), mb->var[mb->stmt[0]->argv[0]].used);
#endif
	if (mb->errors == MAL_SUCCEED)
		trimMalVariables_(mb, glb);
#ifdef _DEBUG_SESSION_
	fprintf(stderr,"after trim %s %d\n", getFunctionId(mb->stmt[0]), mb->vtop);
#endif
}

/*

 * The stages of processing user requests are controlled by a scenario.
 * The routines below are the default implementation.  The main issues
 * to deal after parsing it to clean out the Admin.main function from
 * any information added erroneously.
 *
 * Ideally this involves resetting the state of the client 'main'
 * function, i.e. the symbol table is reset and any instruction added
 * should be cleaned. Beware that the instruction table may have grown
 * in size.
 */
str
MALinitClient(Client c)
{
	assert(c->state[0] == NULL);
	c->state[0] = c;
	return NULL;
}

str
MALexitClient(Client c)
{
	if (c->glb && c->curprg->def->errors == MAL_SUCCEED)
		garbageCollector(c, c->curprg->def, c->glb, TRUE);
	c->mode = FINISHCLIENT;
	if (c->backup) {
		assert(0);
		freeSymbol(c->backup);
		c->backup = NULL;
	}
	/* should be in the usermodule */
	c->curprg = NULL;
	if (c->usermodule){
		freeModule(c->usermodule);
		c->usermodule = NULL;
	}
	return NULL;
}

str
MALreader(Client c)
{
	if (MCreadClient(c) > 0)
		return MAL_SUCCEED;
	MT_lock_set(&mal_contextLock);
	c->mode = FINISHCLIENT;
	MT_lock_unset(&mal_contextLock);
	if (c->fdin)
		c->fdin->buf[c->fdin->pos] = 0;
	return MAL_SUCCEED;
}

str
MALparser(Client c)
{
	InstrPtr p;
	MalBlkRecord oldstate;
	str msg= MAL_SUCCEED;

	assert(c->curprg->def->errors == NULL);
	c->curprg->def->errors = 0;
	oldstate = *c->curprg->def;

	prepareMalBlk(c->curprg->def, CURRENT(c));
	parseMAL(c, c->curprg, 0, INT_MAX);

	/* now the parsing is done we should advance the stream */
	c->fdin->pos += c->yycur;
	c->yycur = 0;

	/* check for unfinished blocks */
	if(!c->curprg->def->errors && c->blkmode)
		return MAL_SUCCEED;
	/* empty files should be skipped as well */
	if (c->curprg->def->stop == 1){
		if ( (msg =c->curprg->def->errors) )
			c->curprg->def->errors = 0;
		return msg;
	}

	p = getInstrPtr(c->curprg->def, 0);
	if (p->token != FUNCTIONsymbol) {
		msg =c->curprg->def->errors;
		c->curprg->def->errors = 0;
		MSresetVariables(c, c->curprg->def, c->glb, oldstate.vtop);
		resetMalBlk(c->curprg->def, 1);
		return msg;
	}
	pushEndInstruction(c->curprg->def);
	chkProgram(c->usermodule, c->curprg->def);
	if ( (msg =c->curprg->def->errors) ){
		c->curprg->def->errors = 0;
		MSresetVariables(c, c->curprg->def, c->glb, oldstate.vtop);
		resetMalBlk(c->curprg->def, 1);
		return msg;
	}
	return MAL_SUCCEED;
}

int
MALcommentsOnly(MalBlkPtr mb)
{
	int i;

	for (i = 1; i < mb->stop; i++)
		if (mb->stmt[i]->token != REMsymbol)
			return 0;
	return 1;
}

str
MALcallback(Client c, str msg)
{
	if (msg) {
		/* don't print exception decoration, just the message */
		char *n = NULL;
		char *o = msg;
		while ((n = strchr(o, '\n')) != NULL) {
			if (*o == '!')
				o++;
			mnstr_printf(c->fdout, "!%.*s\n", (int) (n - o), o);
			o = ++n;
		}
		if (*o != 0) {
			if (*o == '!')
				o++;
			mnstr_printf(c->fdout, "!%s\n", o);
		}
		freeException(msg);
	}
	return MAL_SUCCEED;
}

str
MALengine(Client c)
{
	Symbol prg;
	str msg = MAL_SUCCEED;
	MalBlkRecord oldstate = *c->curprg->def;
	oldstate.stop = 0;

	if (c->blkmode)
		return MAL_SUCCEED;
	prg = c->curprg;
	if (prg == NULL)
		throw(SYNTAX, "mal.engine", SYNTAX_SIGNATURE);
	if (prg->def == NULL)
		throw(SYNTAX, "mal.engine", SYNTAX_SIGNATURE);

	if (prg->def->errors != MAL_SUCCEED) {
		msg = prg->def->errors;
		prg->def->errors = NULL;
		MSresetVariables(c, c->curprg->def, c->glb, oldstate.vtop);
		resetMalBlk(c->curprg->def, 1);
		return msg;
	}
	if (prg->def->stop == 1 || MALcommentsOnly(prg->def))
		return 0;   /* empty block */
	if (c->glb) {
		if (prg->def && c->glb->stksize < prg->def->vsize){
			c->glb = reallocGlobalStack(c->glb, prg->def->vsize);
			if( c->glb == NULL)
				throw(MAL, "mal.engine", SQLSTATE(HY001) MAL_MALLOC_FAIL);
		}
		c->glb->stktop = prg->def->vtop;
		c->glb->blk = prg->def;
		c->glb->cmd = (c->itrace && c->itrace != 'C') ? 'n' : 0;
	}

	/*
	 * In interactive mode we should avoid early garbage collection of values.
	 * This can be controlled by the clean up control at the instruction level
	 * and marking all non-temporary variables as being (potentially) used.
	 */
	if (c->glb) {
		c->glb->pcup = 0;
		c->glb->keepAlive = TRUE; /* no garbage collection */
	}
	if (prg->def->errors == MAL_SUCCEED)
		msg = (str) runMAL(c, prg->def, 0, c->glb);
	if (msg) {
		/* ignore "internal" exceptions */
		if (strstr(msg, "client.quit") ) {
			freeException(msg);
			msg = MAL_SUCCEED;
		}
	}
	MSresetVariables(c, prg->def, c->glb, 0);
	resetMalBlk(prg->def, 1);
	if (c->glb) {
		/* for global stacks avoid reinitialization from this point */
		c->glb->stkbot = prg->def->vtop;
	}
	
	if (prg->def->errors)
		GDKfree(prg->def->errors);
	prg->def->errors = NULL;
	if (c->itrace)
		mnstr_printf(c->fdout, "mdb>#EOD\n");
	return msg;
}

