/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse sqlparse
#define yylex   sqllex
#define yyerror sqlerror
#define yylval  sqllval
#define yychar  sqlchar
#define yydebug sqldebug
#define yynerrs sqlnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     X_BODY = 259,
     IDENT = 260,
     aTYPE = 261,
     ALIAS = 262,
     AGGR = 263,
     AGGR2 = 264,
     RANK = 265,
     sqlINT = 266,
     OIDNUM = 267,
     HEXADECIMAL = 268,
     INTNUM = 269,
     APPROXNUM = 270,
     USING = 271,
     GLOBAL = 272,
     CAST = 273,
     CONVERT = 274,
     CHARACTER = 275,
     VARYING = 276,
     LARGE = 277,
     OBJECT = 278,
     VARCHAR = 279,
     CLOB = 280,
     sqlTEXT = 281,
     BINARY = 282,
     sqlBLOB = 283,
     sqlDECIMAL = 284,
     sqlFLOAT = 285,
     TINYINT = 286,
     SMALLINT = 287,
     BIGINT = 288,
     HUGEINT = 289,
     sqlINTEGER = 290,
     sqlDOUBLE = 291,
     sqlREAL = 292,
     PRECISION = 293,
     PARTIAL = 294,
     SIMPLE = 295,
     ACTION = 296,
     CASCADE = 297,
     RESTRICT = 298,
     BOOL_FALSE = 299,
     BOOL_TRUE = 300,
     CURRENT_DATE = 301,
     CURRENT_TIMESTAMP = 302,
     CURRENT_TIME = 303,
     LOCALTIMESTAMP = 304,
     LOCALTIME = 305,
     LEX_ERROR = 306,
     GEOMETRY = 307,
     GEOMETRYSUBTYPE = 308,
     GEOMETRYA = 309,
     USER = 310,
     CURRENT_USER = 311,
     SESSION_USER = 312,
     LOCAL = 313,
     LOCKED = 314,
     BEST = 315,
     EFFORT = 316,
     CURRENT_ROLE = 317,
     sqlSESSION = 318,
     sqlDELETE = 319,
     UPDATE = 320,
     SELECT = 321,
     INSERT = 322,
     LATERAL = 323,
     LEFT = 324,
     RIGHT = 325,
     FULL = 326,
     OUTER = 327,
     NATURAL = 328,
     CROSS = 329,
     JOIN = 330,
     INNER = 331,
     COMMIT = 332,
     ROLLBACK = 333,
     SAVEPOINT = 334,
     RELEASE = 335,
     WORK = 336,
     CHAIN = 337,
     NO = 338,
     PRESERVE = 339,
     ROWS = 340,
     START = 341,
     TRANSACTION = 342,
     READ = 343,
     WRITE = 344,
     ONLY = 345,
     ISOLATION = 346,
     LEVEL = 347,
     UNCOMMITTED = 348,
     COMMITTED = 349,
     sqlREPEATABLE = 350,
     SERIALIZABLE = 351,
     DIAGNOSTICS = 352,
     sqlSIZE = 353,
     STORAGE = 354,
     ASYMMETRIC = 355,
     SYMMETRIC = 356,
     ORDER = 357,
     ORDERED = 358,
     BY = 359,
     IMPRINTS = 360,
     EXISTS = 361,
     ESCAPE = 362,
     HAVING = 363,
     sqlGROUP = 364,
     sqlNULL = 365,
     FROM = 366,
     FOR = 367,
     MATCH = 368,
     EXTRACT = 369,
     SEQUENCE = 370,
     INCREMENT = 371,
     RESTART = 372,
     CONTINUE = 373,
     MAXVALUE = 374,
     MINVALUE = 375,
     CYCLE = 376,
     NOMAXVALUE = 377,
     NOMINVALUE = 378,
     NOCYCLE = 379,
     NEXT = 380,
     VALUE = 381,
     CACHE = 382,
     GENERATED = 383,
     ALWAYS = 384,
     IDENTITY = 385,
     SERIAL = 386,
     BIGSERIAL = 387,
     AUTO_INCREMENT = 388,
     SCOLON = 389,
     AT = 390,
     XMLCOMMENT = 391,
     XMLCONCAT = 392,
     XMLDOCUMENT = 393,
     XMLELEMENT = 394,
     XMLATTRIBUTES = 395,
     XMLFOREST = 396,
     XMLPARSE = 397,
     STRIP = 398,
     WHITESPACE = 399,
     XMLPI = 400,
     XMLQUERY = 401,
     PASSING = 402,
     XMLTEXT = 403,
     NIL = 404,
     REF = 405,
     ABSENT = 406,
     EMPTY = 407,
     DOCUMENT = 408,
     ELEMENT = 409,
     CONTENT = 410,
     XMLNAMESPACES = 411,
     NAMESPACE = 412,
     XMLVALIDATE = 413,
     RETURNING = 414,
     LOCATION = 415,
     ID = 416,
     ACCORDING = 417,
     XMLSCHEMA = 418,
     URI = 419,
     XMLAGG = 420,
     FILTER = 421,
     UNIONJOIN = 422,
     CORRESPONDING = 423,
     INTERSECT = 424,
     EXCEPT = 425,
     UNION = 426,
     DATA = 427,
     WITH = 428,
     FILTER_FUNC = 429,
     NOT = 430,
     SOME = 431,
     OR = 432,
     ILIKE = 433,
     NOT_ILIKE = 434,
     LIKE = 435,
     NOT_LIKE = 436,
     sqlIN = 437,
     NOT_IN = 438,
     BETWEEN = 439,
     NOT_BETWEEN = 440,
     ANY = 441,
     ALL = 442,
     AND = 443,
     COMPARISON = 444,
     SPLIT_PART = 445,
     POSITION = 446,
     SUBSTRING = 447,
     CONCATSTRING = 448,
     RIGHT_SHIFT_ASSIGN = 449,
     LEFT_SHIFT_ASSIGN = 450,
     RIGHT_SHIFT = 451,
     LEFT_SHIFT = 452,
     UMINUS = 453,
     GEOM_OVERLAP_OR_LEFT = 454,
     GEOM_OVERLAP_OR_BELOW = 455,
     GEOM_OVERLAP_OR_ABOVE = 456,
     GEOM_OVERLAP = 457,
     GEOM_MBR_EQUAL = 458,
     GEOM_DIST = 459,
     GEOM_ABOVE = 460,
     GEOM_BELOW = 461,
     GEOM_OVERLAP_OR_RIGHT = 462,
     TEMP = 463,
     TEMPORARY = 464,
     STREAM = 465,
     MERGE = 466,
     REMOTE = 467,
     REPLICA = 468,
     ASC = 469,
     DESC = 470,
     AUTHORIZATION = 471,
     CHECK = 472,
     CONSTRAINT = 473,
     CREATE = 474,
     COMMENT = 475,
     TYPE = 476,
     PROCEDURE = 477,
     FUNCTION = 478,
     sqlLOADER = 479,
     AGGREGATE = 480,
     RETURNS = 481,
     EXTERNAL = 482,
     sqlNAME = 483,
     DECLARE = 484,
     CALL = 485,
     LANGUAGE = 486,
     ANALYZE = 487,
     MINMAX = 488,
     SQL_EXPLAIN = 489,
     SQL_PLAN = 490,
     SQL_DEBUG = 491,
     SQL_TRACE = 492,
     PREP = 493,
     PREPARE = 494,
     EXEC = 495,
     EXECUTE = 496,
     DEFAULT = 497,
     DISTINCT = 498,
     DROP = 499,
     TRUNCATE = 500,
     FOREIGN = 501,
     RENAME = 502,
     ENCRYPTED = 503,
     UNENCRYPTED = 504,
     PASSWORD = 505,
     GRANT = 506,
     REVOKE = 507,
     ROLE = 508,
     ADMIN = 509,
     INTO = 510,
     IS = 511,
     KEY = 512,
     ON = 513,
     OPTION = 514,
     OPTIONS = 515,
     PATH = 516,
     PRIMARY = 517,
     PRIVILEGES = 518,
     PUBLIC = 519,
     REFERENCES = 520,
     SCHEMA = 521,
     SET = 522,
     AUTO_COMMIT = 523,
     RETURN = 524,
     ALTER = 525,
     ADD = 526,
     TABLE = 527,
     COLUMN = 528,
     TO = 529,
     UNIQUE = 530,
     VALUES = 531,
     VIEW = 532,
     WHERE = 533,
     sqlDATE = 534,
     TIME = 535,
     TIMESTAMP = 536,
     INTERVAL = 537,
     YEAR = 538,
     QUARTER = 539,
     MONTH = 540,
     WEEK = 541,
     DAY = 542,
     HOUR = 543,
     MINUTE = 544,
     SECOND = 545,
     ZONE = 546,
     LIMIT = 547,
     OFFSET = 548,
     SAMPLE = 549,
     CASE = 550,
     WHEN = 551,
     THEN = 552,
     ELSE = 553,
     NULLIF = 554,
     COALESCE = 555,
     IF = 556,
     ELSEIF = 557,
     WHILE = 558,
     DO = 559,
     ATOMIC = 560,
     BEGIN = 561,
     END = 562,
     COPY = 563,
     RECORDS = 564,
     DELIMITERS = 565,
     STDIN = 566,
     STDOUT = 567,
     FWF = 568,
     INDEX = 569,
     REPLACE = 570,
     AS = 571,
     TRIGGER = 572,
     OF = 573,
     BEFORE = 574,
     AFTER = 575,
     ROW = 576,
     STATEMENT = 577,
     sqlNEW = 578,
     OLD = 579,
     EACH = 580,
     REFERENCING = 581,
     OVER = 582,
     PARTITION = 583,
     CURRENT = 584,
     EXCLUDE = 585,
     FOLLOWING = 586,
     PRECEDING = 587,
     OTHERS = 588,
     TIES = 589,
     RANGE = 590,
     UNBOUNDED = 591
   };
#endif
/* Tokens.  */
#define STRING 258
#define X_BODY 259
#define IDENT 260
#define aTYPE 261
#define ALIAS 262
#define AGGR 263
#define AGGR2 264
#define RANK 265
#define sqlINT 266
#define OIDNUM 267
#define HEXADECIMAL 268
#define INTNUM 269
#define APPROXNUM 270
#define USING 271
#define GLOBAL 272
#define CAST 273
#define CONVERT 274
#define CHARACTER 275
#define VARYING 276
#define LARGE 277
#define OBJECT 278
#define VARCHAR 279
#define CLOB 280
#define sqlTEXT 281
#define BINARY 282
#define sqlBLOB 283
#define sqlDECIMAL 284
#define sqlFLOAT 285
#define TINYINT 286
#define SMALLINT 287
#define BIGINT 288
#define HUGEINT 289
#define sqlINTEGER 290
#define sqlDOUBLE 291
#define sqlREAL 292
#define PRECISION 293
#define PARTIAL 294
#define SIMPLE 295
#define ACTION 296
#define CASCADE 297
#define RESTRICT 298
#define BOOL_FALSE 299
#define BOOL_TRUE 300
#define CURRENT_DATE 301
#define CURRENT_TIMESTAMP 302
#define CURRENT_TIME 303
#define LOCALTIMESTAMP 304
#define LOCALTIME 305
#define LEX_ERROR 306
#define GEOMETRY 307
#define GEOMETRYSUBTYPE 308
#define GEOMETRYA 309
#define USER 310
#define CURRENT_USER 311
#define SESSION_USER 312
#define LOCAL 313
#define LOCKED 314
#define BEST 315
#define EFFORT 316
#define CURRENT_ROLE 317
#define sqlSESSION 318
#define sqlDELETE 319
#define UPDATE 320
#define SELECT 321
#define INSERT 322
#define LATERAL 323
#define LEFT 324
#define RIGHT 325
#define FULL 326
#define OUTER 327
#define NATURAL 328
#define CROSS 329
#define JOIN 330
#define INNER 331
#define COMMIT 332
#define ROLLBACK 333
#define SAVEPOINT 334
#define RELEASE 335
#define WORK 336
#define CHAIN 337
#define NO 338
#define PRESERVE 339
#define ROWS 340
#define START 341
#define TRANSACTION 342
#define READ 343
#define WRITE 344
#define ONLY 345
#define ISOLATION 346
#define LEVEL 347
#define UNCOMMITTED 348
#define COMMITTED 349
#define sqlREPEATABLE 350
#define SERIALIZABLE 351
#define DIAGNOSTICS 352
#define sqlSIZE 353
#define STORAGE 354
#define ASYMMETRIC 355
#define SYMMETRIC 356
#define ORDER 357
#define ORDERED 358
#define BY 359
#define IMPRINTS 360
#define EXISTS 361
#define ESCAPE 362
#define HAVING 363
#define sqlGROUP 364
#define sqlNULL 365
#define FROM 366
#define FOR 367
#define MATCH 368
#define EXTRACT 369
#define SEQUENCE 370
#define INCREMENT 371
#define RESTART 372
#define CONTINUE 373
#define MAXVALUE 374
#define MINVALUE 375
#define CYCLE 376
#define NOMAXVALUE 377
#define NOMINVALUE 378
#define NOCYCLE 379
#define NEXT 380
#define VALUE 381
#define CACHE 382
#define GENERATED 383
#define ALWAYS 384
#define IDENTITY 385
#define SERIAL 386
#define BIGSERIAL 387
#define AUTO_INCREMENT 388
#define SCOLON 389
#define AT 390
#define XMLCOMMENT 391
#define XMLCONCAT 392
#define XMLDOCUMENT 393
#define XMLELEMENT 394
#define XMLATTRIBUTES 395
#define XMLFOREST 396
#define XMLPARSE 397
#define STRIP 398
#define WHITESPACE 399
#define XMLPI 400
#define XMLQUERY 401
#define PASSING 402
#define XMLTEXT 403
#define NIL 404
#define REF 405
#define ABSENT 406
#define EMPTY 407
#define DOCUMENT 408
#define ELEMENT 409
#define CONTENT 410
#define XMLNAMESPACES 411
#define NAMESPACE 412
#define XMLVALIDATE 413
#define RETURNING 414
#define LOCATION 415
#define ID 416
#define ACCORDING 417
#define XMLSCHEMA 418
#define URI 419
#define XMLAGG 420
#define FILTER 421
#define UNIONJOIN 422
#define CORRESPONDING 423
#define INTERSECT 424
#define EXCEPT 425
#define UNION 426
#define DATA 427
#define WITH 428
#define FILTER_FUNC 429
#define NOT 430
#define SOME 431
#define OR 432
#define ILIKE 433
#define NOT_ILIKE 434
#define LIKE 435
#define NOT_LIKE 436
#define sqlIN 437
#define NOT_IN 438
#define BETWEEN 439
#define NOT_BETWEEN 440
#define ANY 441
#define ALL 442
#define AND 443
#define COMPARISON 444
#define SPLIT_PART 445
#define POSITION 446
#define SUBSTRING 447
#define CONCATSTRING 448
#define RIGHT_SHIFT_ASSIGN 449
#define LEFT_SHIFT_ASSIGN 450
#define RIGHT_SHIFT 451
#define LEFT_SHIFT 452
#define UMINUS 453
#define GEOM_OVERLAP_OR_LEFT 454
#define GEOM_OVERLAP_OR_BELOW 455
#define GEOM_OVERLAP_OR_ABOVE 456
#define GEOM_OVERLAP 457
#define GEOM_MBR_EQUAL 458
#define GEOM_DIST 459
#define GEOM_ABOVE 460
#define GEOM_BELOW 461
#define GEOM_OVERLAP_OR_RIGHT 462
#define TEMP 463
#define TEMPORARY 464
#define STREAM 465
#define MERGE 466
#define REMOTE 467
#define REPLICA 468
#define ASC 469
#define DESC 470
#define AUTHORIZATION 471
#define CHECK 472
#define CONSTRAINT 473
#define CREATE 474
#define COMMENT 475
#define TYPE 476
#define PROCEDURE 477
#define FUNCTION 478
#define sqlLOADER 479
#define AGGREGATE 480
#define RETURNS 481
#define EXTERNAL 482
#define sqlNAME 483
#define DECLARE 484
#define CALL 485
#define LANGUAGE 486
#define ANALYZE 487
#define MINMAX 488
#define SQL_EXPLAIN 489
#define SQL_PLAN 490
#define SQL_DEBUG 491
#define SQL_TRACE 492
#define PREP 493
#define PREPARE 494
#define EXEC 495
#define EXECUTE 496
#define DEFAULT 497
#define DISTINCT 498
#define DROP 499
#define TRUNCATE 500
#define FOREIGN 501
#define RENAME 502
#define ENCRYPTED 503
#define UNENCRYPTED 504
#define PASSWORD 505
#define GRANT 506
#define REVOKE 507
#define ROLE 508
#define ADMIN 509
#define INTO 510
#define IS 511
#define KEY 512
#define ON 513
#define OPTION 514
#define OPTIONS 515
#define PATH 516
#define PRIMARY 517
#define PRIVILEGES 518
#define PUBLIC 519
#define REFERENCES 520
#define SCHEMA 521
#define SET 522
#define AUTO_COMMIT 523
#define RETURN 524
#define ALTER 525
#define ADD 526
#define TABLE 527
#define COLUMN 528
#define TO 529
#define UNIQUE 530
#define VALUES 531
#define VIEW 532
#define WHERE 533
#define sqlDATE 534
#define TIME 535
#define TIMESTAMP 536
#define INTERVAL 537
#define YEAR 538
#define QUARTER 539
#define MONTH 540
#define WEEK 541
#define DAY 542
#define HOUR 543
#define MINUTE 544
#define SECOND 545
#define ZONE 546
#define LIMIT 547
#define OFFSET 548
#define SAMPLE 549
#define CASE 550
#define WHEN 551
#define THEN 552
#define ELSE 553
#define NULLIF 554
#define COALESCE 555
#define IF 556
#define ELSEIF 557
#define WHILE 558
#define DO 559
#define ATOMIC 560
#define BEGIN 561
#define END 562
#define COPY 563
#define RECORDS 564
#define DELIMITERS 565
#define STDIN 566
#define STDOUT 567
#define FWF 568
#define INDEX 569
#define REPLACE 570
#define AS 571
#define TRIGGER 572
#define OF 573
#define BEFORE 574
#define AFTER 575
#define ROW 576
#define STATEMENT 577
#define sqlNEW 578
#define OLD 579
#define EACH 580
#define REFERENCING 581
#define OVER 582
#define PARTITION 583
#define CURRENT 584
#define EXCLUDE 585
#define FOLLOWING 586
#define PRECEDING 587
#define OTHERS 588
#define TIES 589
#define RANGE 590
#define UNBOUNDED 591




/* Copy the first part of user declarations.  */
#line 9 "src/sql/server/sql_parser.y"

#include "monetdb_config.h"
#include "sql_mem.h"
#include "sql_parser.h"
#include "sql_symbol.h"
#include "sql_datetime.h"
#include "sql_decimal.h"	/* for decimal_from_str() */
#include "sql_semantic.h"	/* for sql_add_param() & sql_add_arg() */
#include "sql_env.h"
#include "rel_sequence.h"	/* for sql_next_seq_name() */
#ifdef HAVE_HGE
#include "mal.h"		/* for have_hge */
#endif

#include <unistd.h>
#include <string.h>

#define SA 	m->sa
#define _symbol_create(t,d)         symbol_create( SA, t, d)
#define _symbol_create_list(t,d)    symbol_create_list( SA, t, d)
#define _symbol_create_int(t,d)     symbol_create_int( SA, t, d)
#define _symbol_create_lng(t,d)     symbol_create_lng( SA, t, d)
#define _symbol_create_symbol(t,d)  symbol_create_symbol( SA, t, d)
#define _symbol_create_hexa(t,d)    symbol_create_hexa( SA, t, d)
#define _newAtomNode(d)		    newAtomNode( SA, d)

#define L()                  dlist_create( SA )

#define append_list(l,d)     dlist_append_list( SA, l, d)
#define append_int(l,d)      dlist_append_int( SA, l, d)
#define append_lng(l,d)      dlist_append_lng( SA, l, d)
#define append_symbol(l,d)   dlist_append_symbol( SA, l, d)
#define append_string(l,d)   dlist_append_string( SA, l, d)
#define append_type(l,d)     dlist_append_type( SA, l, d)

#define _atom_string(t, v)   atom_string(SA, t, v)

#define YYMALLOC GDKmalloc
#define YYFREE GDKfree

#define YY_parse_LSP_NEEDED	/* needed for bison++ 1.21.11-3 */

#define SET_Z(info)(info = info | 0x02)
#define SET_M(info)(info = info | 0x01)

#ifdef HAVE_HGE
#define MAX_DEC_DIGITS (have_hge ? 38 : 18)
#define MAX_HEX_DIGITS (have_hge ? 32 : 16)
#else
#define MAX_DEC_DIGITS 18
#define MAX_HEX_DIGITS 16
#endif

static inline int
UTF8_strlen(const char *val)
{
	const unsigned char *s = (const unsigned char *) val;
	int pos = 0;

	while (*s) {
		int c = *s++;

		pos++;
		if (c < 0xC0)
			continue;
		if (*s++ < 0x80)
			return int_nil;
		if (c < 0xE0)
			continue;
		if (*s++ < 0x80)
			return int_nil;
		if (c < 0xF0)
			continue;
		if (*s++ < 0x80)
			return int_nil;
		if (c < 0xF8)
			continue;
		if (*s++ < 0x80)
			return int_nil;
		if (c < 0xFC)
			continue;
		if (*s++ < 0x80)
			return int_nil;
	}
	return pos;
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 110 "src/sql/server/sql_parser.y"
{
	int		i_val,bval;
	lng		l_val,operation;
	double		fval;
	char *		sval;
	symbol*		sym;
	dlist*		l;
	sql_subtype	type;
}
/* Line 193 of yacc.c.  */
#line 875 "src/sql/server/sql_parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 119 "src/sql/server/sql_parser.y"

extern int sqllex( YYSTYPE *yylval, void *m );
/* enable to activate debugging support
int yydebug=1;
*/


/* Line 216 of yacc.c.  */
#line 894 "src/sql/server/sql_parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  239
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   18360

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  355
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  414
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1159
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2166

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   591

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   208,   195,     2,
     174,   175,   206,   193,   349,   194,   350,   207,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   351,     2,
       2,   178,     2,   354,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   352,     2,   353,   197,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   196,     2,   210,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   176,
     177,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   198,   199,   200,   201,   202,
     203,   204,   205,   209,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    12,    13,    18,    19,    24,
      25,    29,    30,    34,    37,    38,    40,    43,    45,    47,
      49,    53,    54,    57,    58,    62,    64,    66,    68,    70,
      72,    74,    76,    78,    80,    82,    84,    90,    92,    94,
      95,    97,   100,   103,   106,   111,   116,   121,   126,   130,
     135,   139,   144,   149,   157,   163,   165,   168,   172,   174,
     175,   180,   181,   183,   185,   188,   190,   192,   194,   196,
     198,   199,   203,   205,   207,   214,   221,   223,   227,   228,
     232,   233,   237,   238,   241,   248,   255,   256,   260,   261,
     265,   267,   271,   273,   277,   280,   283,   286,   288,   290,
     293,   295,   297,   299,   303,   305,   307,   309,   312,   315,
     318,   320,   322,   326,   328,   330,   337,   344,   350,   356,
     363,   370,   377,   382,   389,   400,   405,   409,   417,   423,
     428,   434,   439,   445,   451,   455,   459,   463,   465,   466,
     469,   472,   474,   476,   478,   480,   482,   484,   489,   493,
     498,   500,   503,   505,   508,   511,   515,   517,   520,   522,
     526,   530,   532,   536,   539,   541,   544,   546,   549,   551,
     553,   563,   565,   567,   569,   570,   574,   585,   586,   588,
     590,   591,   595,   601,   608,   614,   620,   626,   634,   641,
     643,   645,   648,   651,   654,   657,   658,   663,   668,   672,
     676,   678,   683,   684,   688,   691,   693,   697,   699,   701,
     703,   705,   707,   709,   711,   715,   718,   719,   721,   723,
     726,   733,   735,   739,   741,   743,   745,   748,   750,   753,
     759,   761,   762,   766,   769,   770,   773,   776,   778,   780,
     783,   786,   790,   794,   795,   797,   799,   802,   805,   806,
     808,   810,   812,   813,   816,   819,   821,   823,   826,   832,
     834,   837,   841,   850,   855,   857,   861,   864,   872,   874,
     878,   880,   882,   883,   887,   888,   890,   894,   901,   905,
     907,   909,   921,   931,   943,   954,   966,   978,   988,   996,
    1006,  1008,  1014,  1021,  1022,  1026,  1027,  1031,  1033,  1035,
    1037,  1039,  1041,  1043,  1045,  1047,  1049,  1051,  1053,  1055,
    1057,  1059,  1061,  1063,  1065,  1067,  1069,  1071,  1073,  1075,
    1077,  1079,  1081,  1083,  1086,  1089,  1094,  1096,  1097,  1099,
    1103,  1106,  1108,  1110,  1115,  1122,  1128,  1133,  1135,  1138,
    1143,  1145,  1148,  1149,  1152,  1160,  1161,  1164,  1170,  1179,
    1180,  1183,  1184,  1186,  1189,  1194,  1199,  1201,  1203,  1205,
    1206,  1211,  1214,  1224,  1226,  1228,  1230,  1232,  1234,  1236,
    1240,  1241,  1244,  1246,  1249,  1254,  1259,  1264,  1269,  1270,
    1272,  1273,  1275,  1279,  1280,  1284,  1286,  1288,  1289,  1294,
    1296,  1301,  1305,  1310,  1314,  1318,  1322,  1327,  1333,  1338,
    1343,  1348,  1354,  1358,  1364,  1371,  1377,  1383,  1389,  1395,
    1400,  1404,  1408,  1412,  1417,  1418,  1422,  1425,  1427,  1431,
    1432,  1434,  1436,  1438,  1440,  1442,  1444,  1446,  1448,  1450,
    1452,  1456,  1459,  1463,  1468,  1472,  1477,  1481,  1482,  1484,
    1486,  1490,  1493,  1496,  1500,  1504,  1507,  1510,  1513,  1515,
    1517,  1518,  1521,  1525,  1526,  1527,  1531,  1546,  1560,  1567,
    1577,  1584,  1591,  1592,  1597,  1599,  1603,  1604,  1608,  1610,
    1614,  1616,  1619,  1620,  1624,  1630,  1638,  1639,  1641,  1642,
    1645,  1648,  1653,  1658,  1659,  1663,  1664,  1666,  1667,  1670,
    1671,  1674,  1676,  1680,  1682,  1686,  1691,  1692,  1695,  1698,
    1704,  1709,  1716,  1721,  1727,  1728,  1731,  1734,  1736,  1740,
    1746,  1748,  1752,  1754,  1758,  1760,  1762,  1764,  1766,  1768,
    1770,  1771,  1773,  1775,  1777,  1781,  1783,  1787,  1791,  1795,
    1796,  1799,  1803,  1808,  1813,  1819,  1825,  1826,  1828,  1831,
    1832,  1834,  1836,  1838,  1840,  1843,  1846,  1848,  1852,  1856,
    1858,  1863,  1865,  1867,  1869,  1874,  1881,  1887,  1889,  1893,
    1895,  1901,  1907,  1913,  1917,  1919,  1920,  1922,  1924,  1925,
    1927,  1933,  1935,  1940,  1941,  1944,  1946,  1950,  1953,  1956,
    1960,  1963,  1967,  1969,  1971,  1972,  1978,  1984,  1987,  1992,
    1994,  1995,  1997,  1998,  2002,  2004,  2008,  2009,  2012,  2016,
    2018,  2022,  2024,  2025,  2029,  2030,  2033,  2036,  2037,  2040,
    2043,  2044,  2047,  2050,  2053,  2055,  2059,  2062,  2063,  2065,
    2067,  2069,  2071,  2073,  2075,  2077,  2079,  2081,  2083,  2085,
    2088,  2090,  2094,  2098,  2105,  2112,  2113,  2115,  2117,  2121,
    2125,  2129,  2133,  2135,  2139,  2144,  2148,  2154,  2160,  2168,
    2176,  2178,  2182,  2187,  2192,  2194,  2196,  2198,  2201,  2203,
    2207,  2211,  2215,  2219,  2224,  2228,  2232,  2237,  2241,  2243,
    2247,  2251,  2255,  2259,  2263,  2267,  2271,  2275,  2279,  2283,
    2287,  2291,  2295,  2299,  2303,  2307,  2311,  2315,  2319,  2322,
    2326,  2330,  2334,  2338,  2341,  2344,  2348,  2350,  2352,  2354,
    2356,  2358,  2360,  2362,  2364,  2366,  2368,  2373,  2375,  2377,
    2379,  2381,  2383,  2385,  2387,  2389,  2395,  2399,  2401,  2405,
    2406,  2410,  2411,  2415,  2416,  2420,  2422,  2424,  2426,  2428,
    2431,  2433,  2436,  2439,  2444,  2447,  2449,  2452,  2455,  2456,
    2460,  2463,  2466,  2470,  2473,  2477,  2482,  2484,  2488,  2490,
    2492,  2494,  2496,  2503,  2506,  2509,  2512,  2515,  2518,  2519,
    2522,  2531,  2540,  2547,  2554,  2561,  2565,  2574,  2576,  2580,
    2582,  2586,  2590,  2593,  2594,  2597,  2599,  2601,  2603,  2607,
    2609,  2613,  2615,  2619,  2624,  2631,  2637,  2643,  2648,  2655,
    2657,  2659,  2661,  2662,  2666,  2667,  2671,  2672,  2676,  2677,
    2679,  2683,  2687,  2689,  2691,  2693,  2695,  2697,  2699,  2701,
    2703,  2705,  2707,  2710,  2712,  2715,  2718,  2721,  2725,  2727,
    2730,  2732,  2734,  2736,  2738,  2740,  2742,  2744,  2746,  2748,
    2751,  2756,  2761,  2763,  2766,  2769,  2772,  2775,  2777,  2779,
    2784,  2786,  2790,  2796,  2798,  2802,  2808,  2815,  2822,  2824,
    2831,  2836,  2842,  2847,  2849,  2853,  2857,  2861,  2866,  2868,
    2871,  2876,  2878,  2881,  2882,  2885,  2887,  2889,  2891,  2893,
    2895,  2897,  2899,  2901,  2906,  2911,  2916,  2918,  2923,  2925,
    2927,  2929,  2931,  2933,  2935,  2940,  2947,  2949,  2954,  2961,
    2963,  2966,  2968,  2970,  2972,  2974,  2979,  2981,  2986,  2993,
    2995,  3000,  3002,  3007,  3014,  3016,  3018,  3020,  3022,  3024,
    3026,  3029,  3031,  3033,  3037,  3039,  3043,  3045,  3047,  3049,
    3051,  3053,  3055,  3057,  3059,  3061,  3063,  3065,  3067,  3069,
    3071,  3073,  3075,  3077,  3079,  3081,  3083,  3085,  3087,  3089,
    3091,  3093,  3095,  3097,  3099,  3101,  3103,  3105,  3107,  3109,
    3111,  3113,  3115,  3117,  3119,  3121,  3123,  3125,  3127,  3129,
    3131,  3133,  3135,  3137,  3139,  3141,  3143,  3145,  3147,  3149,
    3151,  3153,  3155,  3157,  3159,  3161,  3163,  3165,  3167,  3169,
    3171,  3173,  3175,  3177,  3179,  3181,  3183,  3185,  3187,  3189,
    3191,  3193,  3195,  3197,  3199,  3201,  3203,  3205,  3207,  3209,
    3211,  3213,  3215,  3217,  3219,  3221,  3223,  3225,  3227,  3229,
    3231,  3235,  3237,  3239,  3241,  3243,  3246,  3249,  3253,  3258,
    3259,  3261,  3264,  3266,  3272,  3278,  3281,  3284,  3287,  3292,
    3299,  3302,  3305,  3307,  3309,  3311,  3315,  3317,  3319,  3321,
    3323,  3325,  3327,  3329,  3331,  3333,  3335,  3337,  3343,  3349,
    3355,  3363,  3364,  3367,  3372,  3379,  3384,  3387,  3392,  3395,
    3397,  3402,  3404,  3408,  3411,  3412,  3415,  3417,  3419,  3422,
    3424,  3428,  3430,  3431,  3434,  3438,  3442,  3446,  3450,  3455,
    3463,  3464,  3467,  3469,  3473,  3476,  3478,  3479,  3482,  3484,
    3491,  3494,  3497,  3505,  3507,  3508,  3511,  3520,  3522,  3523,
    3527,  3529,  3531,  3535,  3537,  3539,  3542,  3547,  3548,  3550,
    3554,  3558,  3564,  3571,  3573,  3575,  3577,  3579,  3580,  3583,
    3586,  3591,  3593,  3597,  3599,  3601,  3603,  3605,  3609,  3612,
    3615,  3616,  3618,  3621,  3624,  3625,  3627,  3633,  3635,  3637,
    3641,  3645,  3647,  3649,  3650,  3653,  3655,  3658,  3660,  3661,
    3663,  3665,  3668,  3669,  3671,  3674,  3677,  3680,  3682,  3684
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     356,     0,    -1,   369,   134,    -1,    -1,   251,   357,   369,
     134,    -1,    -1,   247,   358,   369,   134,    -1,    -1,   246,
     359,   369,   134,    -1,    -1,   248,   360,   356,    -1,    -1,
     249,   361,   356,    -1,   687,   134,    -1,    -1,   134,    -1,
       1,   134,    -1,    51,    -1,   231,    -1,   362,    -1,   231,
     180,   327,    -1,    -1,   313,   106,    -1,    -1,   313,   177,
     106,    -1,   256,    -1,   279,    -1,   241,    -1,   374,    -1,
     383,    -1,   388,    -1,   405,    -1,   504,    -1,   400,    -1,
     371,    -1,   373,    -1,   244,   655,   455,   584,   370,    -1,
     468,    -1,   692,    -1,    -1,   245,    -1,   368,   372,    -1,
     368,   417,    -1,   449,   672,    -1,   372,   349,   449,   672,
      -1,   367,   681,   178,   579,    -1,   367,   456,   178,   605,
      -1,   367,    63,   228,   681,    -1,   367,   278,   681,    -1,
     367,   652,   178,   681,    -1,   367,   265,   681,    -1,   367,
     292,   303,    58,    -1,   367,   292,   303,   654,    -1,   362,
     278,   365,   375,   377,   689,   378,    -1,   366,   278,   364,
     655,   507,    -1,   681,    -1,   228,   376,    -1,   681,   228,
     376,    -1,   681,    -1,    -1,   254,    20,   279,   681,    -1,
      -1,   379,    -1,   380,    -1,   379,   380,    -1,   383,    -1,
     388,    -1,   405,    -1,   504,    -1,   400,    -1,    -1,   173,
     266,   382,    -1,    56,    -1,    62,    -1,   263,   391,   286,
     398,   385,   387,    -1,   263,   384,   286,   398,   386,   387,
      -1,   679,    -1,   384,   349,   679,    -1,    -1,   173,   263,
     271,    -1,    -1,   173,   266,   271,    -1,    -1,   111,   382,
      -1,   264,   389,   391,   111,   398,   387,    -1,   264,   390,
     384,   111,   398,   387,    -1,    -1,   263,   271,   112,    -1,
      -1,   266,   271,   112,    -1,   392,    -1,   395,   270,   394,
      -1,   393,    -1,   393,   349,   393,    -1,   320,   111,    -1,
     320,   267,    -1,   284,   655,    -1,   655,    -1,   502,    -1,
     190,   275,    -1,   190,    -1,   396,    -1,   397,    -1,   396,
     349,   397,    -1,    67,    -1,    64,    -1,   257,    -1,    65,
     455,    -1,    66,   455,    -1,   277,   455,    -1,   253,    -1,
     399,    -1,   398,   349,   399,    -1,   276,    -1,   679,    -1,
     282,   284,   655,   283,   404,   424,    -1,   282,   284,   655,
     283,   284,   655,    -1,   282,   284,   655,   282,   402,    -1,
     282,   284,   655,   256,   403,    -1,   282,   284,   655,   279,
      88,    90,    -1,   282,   284,   655,   279,    67,    90,    -1,
     282,   284,   655,   279,    88,    89,    -1,   282,    55,   681,
     401,    -1,   282,    55,   681,   259,   286,   681,    -1,   282,
      55,   279,   415,   262,   686,    16,   336,   262,   686,    -1,
     173,   415,   262,   686,    -1,   279,   278,   681,    -1,   173,
     415,   262,   686,   279,   278,   681,    -1,   404,   681,   279,
     254,   434,    -1,   404,   681,   279,   110,    -1,   404,   681,
     279,   177,   110,    -1,   404,   681,   256,   254,    -1,   404,
     681,   279,    99,     3,    -1,   404,   681,   279,    99,   110,
      -1,   404,   681,   507,    -1,   230,   681,   507,    -1,   284,
     655,   507,    -1,   285,    -1,    -1,   362,   414,    -1,   362,
     417,    -1,   451,    -1,   457,    -1,   460,    -1,   412,    -1,
     406,    -1,   489,    -1,   362,   115,   655,   407,    -1,   366,
     115,   655,    -1,   282,   115,   655,   408,    -1,   409,    -1,
     407,   409,    -1,   410,    -1,   408,   410,    -1,   328,   672,
      -1,    86,   173,   670,    -1,   411,    -1,   328,   672,    -1,
     117,    -1,   117,   173,   670,    -1,   117,   173,   605,    -1,
     411,    -1,   116,   104,   669,    -1,   120,   669,    -1,   123,
      -1,   119,   669,    -1,   122,    -1,   127,   669,    -1,   121,
      -1,   124,    -1,   362,   413,   326,   681,   270,   655,   174,
     449,   175,    -1,   287,    -1,   103,    -1,   105,    -1,    -1,
     265,   681,   381,    -1,    55,   681,   173,   415,   262,   686,
     240,   686,   278,   681,    -1,    -1,   261,    -1,   260,    -1,
      -1,    99,   681,     3,    -1,   284,   365,   655,   420,   416,
      -1,   284,   365,   655,   111,   236,   625,    -1,   222,   284,
     365,   655,   420,    -1,   223,   284,   365,   655,   420,    -1,
     225,   284,   365,   655,   420,    -1,   224,   284,   365,   655,
     420,   270,     3,    -1,   418,   284,   365,   655,   420,   419,
      -1,   221,    -1,   220,    -1,    58,   221,    -1,    58,   220,
      -1,    17,   221,    -1,    17,   220,    -1,    -1,   270,    77,
      64,    85,    -1,   270,    77,    84,    85,    -1,   270,    77,
     256,    -1,   174,   423,   175,    -1,   421,    -1,   455,   328,
     452,   422,    -1,    -1,   173,    83,   172,    -1,   173,   172,
      -1,   425,    -1,   423,   349,   425,    -1,   427,    -1,   438,
      -1,   424,    -1,   430,    -1,   450,    -1,   131,    -1,   132,
      -1,   678,   672,   428,    -1,   678,   426,    -1,    -1,   429,
      -1,   432,    -1,   429,   432,    -1,   681,   173,   272,   174,
     431,   175,    -1,   432,    -1,   431,   349,   432,    -1,   433,
      -1,   435,    -1,   436,    -1,   254,   434,    -1,   606,    -1,
     439,   446,    -1,   128,   129,   328,   130,   437,    -1,   133,
      -1,    -1,   174,   407,   175,    -1,   439,   447,    -1,    -1,
     230,   681,    -1,    83,    41,    -1,    42,    -1,    43,    -1,
     279,   110,    -1,   279,   254,    -1,   270,    65,   440,    -1,
     270,    64,   440,    -1,    -1,   441,    -1,   442,    -1,   442,
     441,    -1,   441,   442,    -1,    -1,    71,    -1,    39,    -1,
      40,    -1,    -1,   113,   444,    -1,   177,   110,    -1,   110,
      -1,   287,    -1,   274,   269,    -1,   277,   655,   455,   445,
     443,    -1,   448,    -1,   287,   456,    -1,   274,   269,   456,
      -1,   258,   269,   456,   277,   655,   455,   445,   443,    -1,
     229,   174,   579,   175,    -1,   681,    -1,   449,   349,   681,
      -1,   183,   655,    -1,   363,   289,   655,   455,   328,   452,
     454,    -1,   453,    -1,   174,   452,   175,    -1,   562,    -1,
     556,    -1,    -1,   173,   229,   271,    -1,    -1,   456,    -1,
     174,   449,   175,    -1,   362,   233,   655,   239,   240,   681,
      -1,   681,   350,   681,    -1,     4,    -1,   686,    -1,   363,
     235,   655,   174,   487,   175,   238,   486,   239,   240,   458,
      -1,   363,   235,   655,   174,   487,   175,   238,   486,   461,
      -1,   363,   235,   655,   174,   487,   175,   238,   486,   243,
       5,   459,    -1,   363,   166,   235,   655,   174,   487,   175,
     239,   240,   458,    -1,   363,   237,   655,   174,   487,   175,
     238,   486,   239,   240,   458,    -1,   363,   237,   655,   174,
     487,   175,   238,   486,   243,     5,   459,    -1,   363,   234,
     655,   174,   487,   175,   239,   240,   458,    -1,   363,   234,
     655,   174,   487,   175,   461,    -1,   363,   236,   655,   174,
     487,   175,   243,     5,   459,    -1,   464,    -1,   318,   462,
     464,   134,   319,    -1,   318,   317,   462,   464,   134,   319,
      -1,    -1,   462,   464,   134,    -1,    -1,   463,   465,   134,
      -1,   509,    -1,   508,    -1,   374,    -1,   383,    -1,   388,
      -1,   405,    -1,   504,    -1,   400,    -1,   371,    -1,   373,
      -1,   466,    -1,   561,    -1,   509,    -1,   508,    -1,   383,
      -1,   388,    -1,   371,    -1,   373,    -1,   466,    -1,   561,
      -1,   468,    -1,   467,    -1,   482,    -1,   480,    -1,   474,
      -1,   472,    -1,   242,   469,    -1,   242,   625,    -1,   470,
     174,   471,   175,    -1,   655,    -1,    -1,   607,    -1,   471,
     349,   607,    -1,   281,   473,    -1,   453,    -1,   579,    -1,
     284,   174,   453,   175,    -1,   307,   607,   476,   479,   319,
     307,    -1,   307,   478,   479,   319,   307,    -1,   308,   607,
     309,   462,    -1,   475,    -1,   476,   475,    -1,   308,   579,
     309,   462,    -1,   477,    -1,   478,   477,    -1,    -1,   310,
     462,    -1,   313,   579,   309,   462,   481,   319,   313,    -1,
      -1,   310,   462,    -1,   314,   579,   309,   462,   481,    -1,
     483,   315,   579,   316,   462,   319,   315,   484,    -1,    -1,
     681,   351,    -1,    -1,   681,    -1,   678,   672,    -1,   485,
     349,   678,   672,    -1,   284,   174,   485,   175,    -1,   672,
      -1,   488,    -1,   206,    -1,    -1,   488,   349,   681,   672,
      -1,   681,   672,    -1,   363,   329,   655,   490,   491,   270,
     655,   492,   497,    -1,   331,    -1,   332,    -1,    67,    -1,
      64,    -1,   257,    -1,    65,    -1,    65,   330,   449,    -1,
      -1,   338,   493,    -1,   494,    -1,   493,   494,    -1,   336,
     496,   495,   681,    -1,   335,   496,   495,   681,    -1,   336,
     284,   495,   681,    -1,   335,   284,   495,   681,    -1,    -1,
     328,    -1,    -1,   333,    -1,   498,   500,   501,    -1,    -1,
     112,   337,   499,    -1,   333,    -1,   334,    -1,    -1,   308,
     174,   579,   175,    -1,   465,    -1,   318,   317,   463,   319,
      -1,   235,   655,   505,    -1,   166,   235,   655,   505,    -1,
     237,   655,   505,    -1,   234,   655,   505,    -1,   236,   655,
     505,    -1,   235,   364,   655,   505,    -1,   166,   235,   364,
     655,   505,    -1,   237,   364,   655,   505,    -1,   234,   364,
     655,   505,    -1,   236,   364,   655,   505,    -1,   366,   284,
     364,   655,   507,    -1,   366,   503,   507,    -1,   366,   190,
     235,   655,   507,    -1,   366,   190,   166,   235,   655,   507,
      -1,   366,   190,   237,   655,   507,    -1,   366,   190,   234,
     655,   507,    -1,   366,   190,   236,   655,   507,    -1,   366,
     289,   364,   655,   507,    -1,   366,   233,   655,   507,    -1,
     366,   265,   681,    -1,   366,    55,   681,    -1,   366,   326,
     655,    -1,   366,   329,   364,   655,    -1,    -1,   174,   506,
     175,    -1,   174,   175,    -1,   672,    -1,   672,   349,   506,
      -1,    -1,    43,    -1,    42,    -1,   509,    -1,   508,    -1,
     533,    -1,   535,    -1,   537,    -1,   536,    -1,   518,    -1,
     510,    -1,    77,   515,   516,    -1,    79,   681,    -1,    80,
      79,   681,    -1,    78,   515,   516,   517,    -1,    86,    87,
     511,    -1,   279,    58,    87,   511,    -1,   279,    87,   511,
      -1,    -1,   512,    -1,   513,    -1,   512,   349,   513,    -1,
      88,    90,    -1,    88,    89,    -1,    91,    92,   514,    -1,
      97,    98,   685,    -1,    88,    93,    -1,    88,    94,    -1,
      95,    88,    -1,    96,    -1,    81,    -1,    -1,   191,    82,
      -1,   191,    83,    82,    -1,    -1,    -1,   286,    79,   681,
      -1,   320,   526,   267,   655,   455,   111,   531,   521,   524,
     527,   528,   529,   530,   519,    -1,   320,   526,   267,   655,
     455,   111,   323,   521,   524,   527,   528,   529,   530,    -1,
     320,   236,   267,   655,   111,   625,    -1,   320,   526,    27,
     267,   655,   455,   111,   531,   530,    -1,   320,   452,   267,
     686,   524,   527,    -1,   320,   452,   267,   324,   524,   527,
      -1,    -1,   325,   174,   520,   175,    -1,   670,    -1,   520,
     349,   670,    -1,    -1,   174,   522,   175,    -1,   523,    -1,
     522,   349,   523,    -1,   681,    -1,   681,     3,    -1,    -1,
     525,   322,   686,    -1,   525,   322,   686,   349,   686,    -1,
     525,   322,   686,   349,   686,   349,   686,    -1,    -1,    16,
      -1,    -1,   670,   321,    -1,   305,   670,    -1,   670,   305,
     670,   321,    -1,   670,   321,   305,   670,    -1,    -1,   110,
     495,   686,    -1,    -1,    59,    -1,    -1,    60,    61,    -1,
      -1,    83,   230,    -1,   532,    -1,   174,   532,   175,    -1,
     686,    -1,   532,   349,   686,    -1,    64,   111,   655,   550,
      -1,    -1,   118,   130,    -1,   117,   130,    -1,   257,   284,
     655,   534,   507,    -1,   257,   655,   534,   507,    -1,    65,
     655,   279,   547,   570,   550,    -1,    67,   267,   655,   538,
      -1,    67,   267,   655,   456,   538,    -1,    -1,   254,   288,
      -1,   288,   539,    -1,   453,    -1,   174,   540,   175,    -1,
     539,   349,   174,   540,   175,    -1,   544,    -1,   540,   349,
     544,    -1,   545,    -1,   541,   349,   545,    -1,   110,    -1,
     607,    -1,   543,    -1,   254,    -1,   543,    -1,   565,    -1,
      -1,   190,    -1,   255,    -1,   549,    -1,   547,   349,   549,
      -1,   254,    -1,   678,   178,   548,    -1,   678,   178,   579,
      -1,   456,   178,   605,    -1,    -1,   290,   579,    -1,   174,
     551,   175,    -1,   572,    74,    75,   572,    -1,   572,   167,
     572,   555,    -1,   572,   552,    75,   572,   555,    -1,   572,
      73,   552,    75,   572,    -1,    -1,    76,    -1,   554,   553,
      -1,    -1,    72,    -1,    69,    -1,    70,    -1,    71,    -1,
     270,   579,    -1,    16,   456,    -1,   556,    -1,   173,   557,
     559,    -1,   557,   349,   558,    -1,   558,    -1,   681,   455,
     328,   604,    -1,   562,    -1,   561,    -1,   562,    -1,    66,
     546,   568,   569,    -1,    66,   546,   568,   267,   563,   569,
      -1,   565,   581,   582,   583,   584,    -1,   564,    -1,   563,
     349,   564,    -1,   681,    -1,   565,   171,   566,   567,   565,
      -1,   565,   170,   566,   567,   565,    -1,   565,   169,   566,
     567,   565,    -1,   174,   565,   175,    -1,   560,    -1,    -1,
     190,    -1,   255,    -1,    -1,   168,    -1,   168,   104,   174,
     577,   175,    -1,   631,    -1,   570,   550,   576,   578,    -1,
      -1,   111,   571,    -1,   572,    -1,   571,   349,   572,    -1,
     655,   575,    -1,   625,   575,    -1,    68,   625,   575,    -1,
     604,   574,    -1,    68,   605,   574,    -1,   604,    -1,   551,
      -1,    -1,   352,   573,   565,   353,   574,    -1,   328,   681,
     174,   683,   175,    -1,   328,   681,    -1,   681,   174,   683,
     175,    -1,   681,    -1,    -1,   574,    -1,    -1,   109,   104,
     577,    -1,   656,    -1,   577,   349,   656,    -1,    -1,   108,
     579,    -1,   579,   180,   580,    -1,   580,    -1,   580,   191,
     589,    -1,   589,    -1,    -1,   102,   104,   585,    -1,    -1,
     304,   669,    -1,   304,   609,    -1,    -1,   305,   670,    -1,
     305,   609,    -1,    -1,   306,   670,    -1,   306,    14,    -1,
     306,   609,    -1,   586,    -1,   585,   349,   586,    -1,   607,
     587,    -1,    -1,   226,    -1,   227,    -1,   590,    -1,   591,
      -1,   593,    -1,   595,    -1,   596,    -1,   598,    -1,   600,
      -1,   603,    -1,   607,    -1,   177,   589,    -1,   588,    -1,
     589,   192,   589,    -1,   589,   178,   589,    -1,   589,   188,
     592,   589,   191,   589,    -1,   589,   187,   592,   589,   191,
     589,    -1,    -1,   100,    -1,   101,    -1,   589,   184,   594,
      -1,   589,   182,   594,    -1,   589,   183,   594,    -1,   589,
     181,   594,    -1,   607,    -1,   607,   107,   686,    -1,   607,
     268,   177,   110,    -1,   607,   268,   110,    -1,   589,   186,
     174,   541,   175,    -1,   589,   185,   174,   541,   175,    -1,
     174,   597,   175,   186,   174,   541,   175,    -1,   174,   597,
     175,   185,   174,   541,   175,    -1,   589,    -1,   597,   349,
     589,    -1,   589,   192,   599,   605,    -1,   589,   178,   599,
     589,    -1,   189,    -1,   179,    -1,   190,    -1,   106,   605,
      -1,   589,    -1,   601,   349,   589,    -1,   352,   601,   353,
      -1,   602,   655,   602,    -1,   174,   562,   175,    -1,   174,
     288,   539,   175,    -1,   174,   556,   175,    -1,   174,   562,
     175,    -1,   174,   288,   539,   175,    -1,   174,   556,   175,
      -1,   608,    -1,   607,   193,   607,    -1,   607,   194,   607,
      -1,   607,   206,   607,    -1,   607,   207,   607,    -1,   607,
     208,   607,    -1,   607,   197,   607,    -1,   607,   195,   607,
      -1,   607,   214,   607,    -1,   607,   211,   607,    -1,   607,
     219,   607,    -1,   607,   212,   607,    -1,   607,   218,   607,
      -1,   607,   213,   607,    -1,   607,   217,   607,    -1,   607,
     216,   607,    -1,   607,   135,   607,    -1,   607,   196,   607,
      -1,   607,   210,   607,    -1,   607,   215,   607,    -1,   210,
     607,    -1,   607,   205,   607,    -1,   607,   204,   607,    -1,
     607,   203,   607,    -1,   607,   202,   607,    -1,   193,   607,
      -1,   194,   607,    -1,   174,   579,   175,    -1,   606,    -1,
     605,    -1,   634,    -1,   652,    -1,    62,    -1,   610,    -1,
     656,    -1,   624,    -1,   638,    -1,   625,    -1,   125,   126,
     112,   655,    -1,   628,    -1,   630,    -1,   659,    -1,   657,
      -1,   697,    -1,   609,    -1,   542,    -1,   354,    -1,   611,
     339,   174,   612,   175,    -1,   635,   174,   175,    -1,   638,
      -1,   613,   614,   615,    -1,    -1,   340,   104,   577,    -1,
      -1,   102,   104,   585,    -1,    -1,   616,   617,   623,    -1,
      85,    -1,   347,    -1,   618,    -1,   620,    -1,   348,   344,
      -1,   619,    -1,   341,   333,    -1,   608,   344,    -1,   187,
     618,   191,   621,    -1,   348,   343,    -1,   622,    -1,   341,
     333,    -1,   608,   344,    -1,    -1,   342,   341,   333,    -1,
     342,   109,    -1,   342,   346,    -1,   342,    83,   345,    -1,
     135,   681,    -1,   626,   174,   175,    -1,   626,   174,   660,
     175,    -1,   627,    -1,   681,   350,   627,    -1,   681,    -1,
      69,    -1,    70,    -1,    67,    -1,   114,   174,   646,   111,
     607,   175,    -1,    46,   629,    -1,    48,   629,    -1,    47,
     629,    -1,    50,   629,    -1,    49,   629,    -1,    -1,   174,
     175,    -1,   200,   174,   607,   111,   607,   112,   607,   175,
      -1,   200,   174,   607,   349,   607,   349,   607,   175,    -1,
     200,   174,   607,   111,   607,   175,    -1,   200,   174,   607,
     349,   607,   175,    -1,   199,   174,   607,   185,   607,   175,
      -1,   607,   201,   607,    -1,   198,   174,   607,   349,   607,
     349,   607,   175,    -1,   632,    -1,   631,   349,   632,    -1,
     206,    -1,   681,   350,   206,    -1,   625,   350,   206,    -1,
     579,   633,    -1,    -1,   328,   681,    -1,   681,    -1,   653,
      -1,    10,    -1,   681,   350,    10,    -1,     8,    -1,   681,
     350,     8,    -1,     9,    -1,   681,   350,     9,    -1,   636,
     174,   206,   175,    -1,   636,   174,   681,   350,   206,   175,
      -1,   636,   174,   255,   667,   175,    -1,   636,   174,   190,
     667,   175,    -1,   636,   174,   667,   175,    -1,   637,   174,
     667,   349,   667,   175,    -1,   768,    -1,   193,    -1,   194,
      -1,    -1,   173,   292,   303,    -1,    -1,   174,   685,   175,
      -1,    -1,   174,   685,   175,    -1,    -1,   291,    -1,   292,
     641,   640,    -1,   293,   642,   640,    -1,   295,    -1,   297,
      -1,   299,    -1,   300,    -1,   301,    -1,   644,    -1,   302,
      -1,   645,    -1,   296,    -1,   298,    -1,   644,   641,    -1,
     644,    -1,   302,   642,    -1,   644,   641,    -1,   302,   642,
      -1,   647,   286,   648,    -1,   649,    -1,   294,   650,    -1,
      55,    -1,    57,    -1,    56,    -1,   686,    -1,    13,    -1,
      12,    -1,    11,    -1,    14,    -1,    15,    -1,   291,   686,
      -1,   292,   641,   640,   686,    -1,   293,   642,   640,   686,
      -1,   654,    -1,   677,   686,    -1,     6,   686,    -1,   674,
     686,    -1,     5,   686,    -1,    44,    -1,    45,    -1,   294,
     639,   686,   650,    -1,   681,    -1,   681,   350,   681,    -1,
     681,   350,   681,   350,   681,    -1,   681,    -1,   681,   350,
     681,    -1,   681,   350,   681,   350,   681,    -1,    18,   174,
     658,   328,   672,   175,    -1,    19,   174,   658,   349,   672,
     175,    -1,   579,    -1,   311,   174,   607,   349,   607,   175,
      -1,   312,   174,   661,   175,    -1,   307,   607,   663,   666,
     319,    -1,   307,   665,   666,   319,    -1,   543,    -1,   660,
     349,   543,    -1,   543,   349,   543,    -1,   661,   349,   543,
      -1,   308,   607,   309,   543,    -1,   662,    -1,   663,   662,
      -1,   308,   579,   309,   543,    -1,   664,    -1,   665,   664,
      -1,    -1,   310,   607,    -1,   607,    -1,   685,    -1,   684,
      -1,   684,    -1,   685,    -1,    20,    -1,   675,    -1,   676,
      -1,    20,   174,   668,   175,    -1,   675,   174,   668,   175,
      -1,   676,   174,   668,   175,    -1,   677,    -1,   677,   174,
     668,   175,    -1,    31,    -1,    32,    -1,    35,    -1,    33,
      -1,    34,    -1,    29,    -1,    29,   174,   668,   175,    -1,
      29,   174,   668,   349,   671,   175,    -1,    30,    -1,    30,
     174,   668,   175,    -1,    30,   174,   685,   349,   685,   175,
      -1,    36,    -1,    36,    38,    -1,    37,    -1,   643,    -1,
     651,    -1,     6,    -1,     6,   174,   668,   175,    -1,   674,
      -1,   674,   174,   668,   175,    -1,   674,   174,   685,   349,
     685,   175,    -1,     5,    -1,     5,   174,   668,   175,    -1,
      52,    -1,    52,   174,   673,   175,    -1,    52,   174,   673,
     349,   685,   175,    -1,    54,    -1,    53,    -1,    53,    -1,
     686,    -1,     7,    -1,    24,    -1,    20,    21,    -1,    25,
      -1,    26,    -1,    20,    22,    23,    -1,    28,    -1,    27,
      22,    23,    -1,   681,    -1,   680,    -1,     5,    -1,     6,
      -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,     5,
      -1,     6,    -1,   176,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,   682,    -1,    22,    -1,   240,    -1,    23,
      -1,   262,    -1,   273,    -1,    38,    -1,   275,    -1,   265,
      -1,    98,    -1,   233,    -1,    80,    -1,   126,    -1,   303,
      -1,    41,    -1,   328,    -1,   228,    -1,   285,    -1,   121,
      -1,   255,    -1,   116,    -1,   119,    -1,   120,    -1,   247,
      -1,   278,    -1,    86,    -1,   334,    -1,   284,    -1,   127,
      -1,   172,    -1,    97,    -1,   113,    -1,   272,    -1,   333,
      -1,   269,    -1,   243,    -1,    92,    -1,    63,    -1,   291,
      -1,   292,    -1,   293,    -1,   294,    -1,   296,    -1,   298,
      -1,   105,    -1,   251,    -1,   253,    -1,   246,    -1,   248,
      -1,   249,    -1,    26,    -1,   280,    -1,    83,    -1,   143,
      -1,   144,    -1,   147,    -1,   149,    -1,   150,    -1,   151,
      -1,   152,    -1,   153,    -1,   154,    -1,   155,    -1,   157,
      -1,   159,    -1,   160,    -1,   161,    -1,   162,    -1,   164,
      -1,   166,    -1,   221,    -1,   220,    -1,   244,    -1,   245,
      -1,    99,    -1,    52,    -1,   327,    -1,   232,    -1,   681,
      -1,   683,   349,   681,    -1,    11,    -1,    11,    -1,     5,
      -1,     3,    -1,     3,   686,    -1,   253,   688,    -1,   685,
     174,   175,    -1,   685,   174,   541,   175,    -1,    -1,   690,
      -1,   273,   691,    -1,   683,    -1,   232,   270,   693,   268,
     686,    -1,   232,   270,   693,   268,   110,    -1,   278,   681,
      -1,   284,   655,    -1,   289,   655,    -1,   285,   681,   350,
     681,    -1,   285,   681,   350,   681,   350,   681,    -1,   326,
     655,    -1,   115,   655,    -1,   502,    -1,   696,    -1,   694,
      -1,   695,   349,   694,    -1,   607,    -1,   698,    -1,   699,
      -1,   700,    -1,   701,    -1,   715,    -1,   722,    -1,   724,
      -1,   727,    -1,   737,    -1,   738,    -1,   136,   174,   608,
     741,   175,    -1,   137,   174,   695,   741,   175,    -1,   138,
     174,   694,   741,   175,    -1,   139,   174,   240,   703,   702,
     741,   175,    -1,    -1,   349,   742,    -1,   349,   742,   349,
     704,    -1,   349,   742,   349,   704,   349,   710,    -1,   349,
     742,   349,   710,    -1,   349,   704,    -1,   349,   704,   349,
     710,    -1,   349,   710,    -1,   681,    -1,   140,   174,   705,
     175,    -1,   706,    -1,   705,   349,   706,    -1,   708,   707,
      -1,    -1,   328,   709,    -1,   607,    -1,   681,    -1,   711,
     713,    -1,   712,    -1,   711,   349,   712,    -1,   607,    -1,
      -1,   271,   714,    -1,   110,   270,   110,    -1,   152,   270,
     110,    -1,   151,   270,   110,    -1,   149,   270,   110,    -1,
     149,   270,    83,   155,    -1,   141,   174,   716,   717,   713,
     741,   175,    -1,    -1,   742,   349,    -1,   718,    -1,   717,
     349,   718,    -1,   719,   720,    -1,   607,    -1,    -1,   328,
     721,    -1,   681,    -1,   142,   174,   740,   608,   723,   175,
      -1,    84,   144,    -1,   143,   144,    -1,   145,   174,   240,
     725,   726,   741,   175,    -1,   681,    -1,    -1,   349,   608,
      -1,   146,   174,   728,   729,   741,   735,   736,   175,    -1,
       3,    -1,    -1,   147,   730,   731,    -1,   750,    -1,   732,
      -1,   731,   349,   732,    -1,   733,    -1,   734,    -1,   608,
     749,    -1,   608,   328,   681,   749,    -1,    -1,   750,    -1,
     110,   270,   152,    -1,   152,   270,   152,    -1,   148,   174,
     608,   741,   175,    -1,   158,   174,   739,   694,   751,   175,
      -1,   740,    -1,   115,    -1,   153,    -1,   155,    -1,    -1,
     159,   155,    -1,   159,   115,    -1,   156,   174,   743,   175,
      -1,   744,    -1,   743,   349,   744,    -1,   747,    -1,   748,
      -1,   681,    -1,   607,    -1,   746,   328,   745,    -1,   254,
     746,    -1,    83,   254,    -1,    -1,   750,    -1,   104,   150,
      -1,   104,   126,    -1,    -1,   752,    -1,   162,   286,   163,
     753,   761,    -1,   754,    -1,   759,    -1,   164,   755,   757,
      -1,    83,   157,   757,    -1,   756,    -1,     3,    -1,    -1,
     160,   758,    -1,   756,    -1,   161,   760,    -1,   681,    -1,
      -1,   762,    -1,   764,    -1,   765,   763,    -1,    -1,   764,
      -1,   154,   767,    -1,    83,   157,    -1,   157,   766,    -1,
     756,    -1,   681,    -1,   165,   174,   694,   581,   741,   175,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   625,   625,   636,   636,   650,   650,   665,   665,   680,
     680,   690,   690,   696,   697,   698,   699,   700,   705,   708,
     709,   713,   714,   718,   719,   723,   726,   729,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   748,   749,   753,
     754,   758,   760,   764,   769,   778,   783,   788,   796,   804,
     812,   820,   826,   834,   843,   852,   856,   860,   867,   870,
     871,   875,   876,   880,   881,   885,   885,   885,   885,   885,
     888,   889,   893,   894,   898,   907,   918,   919,   924,   925,
     929,   930,   935,   936,   940,   948,   958,   959,   963,   964,
     968,   972,   979,   980,   985,   986,   990,   991,   992,  1003,
    1004,  1005,  1009,  1010,  1015,  1016,  1017,  1018,  1019,  1020,
    1021,  1025,  1026,  1031,  1032,  1038,  1044,  1049,  1054,  1059,
    1064,  1069,  1074,  1079,  1084,  1097,  1103,  1109,  1119,  1124,
    1128,  1132,  1134,  1142,  1150,  1155,  1160,  1170,  1171,  1175,
    1176,  1177,  1178,  1179,  1180,  1181,  1182,  1198,  1209,  1226,
    1236,  1237,  1241,  1242,  1246,  1247,  1248,  1252,  1253,  1254,
    1255,  1256,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,
    1274,  1284,  1285,  1286,  1287,  1307,  1312,  1323,  1324,  1325,
    1329,  1330,  1334,  1346,  1353,  1364,  1375,  1389,  1400,  1416,
    1417,  1418,  1419,  1420,  1421,  1425,  1426,  1427,  1428,  1432,
    1433,  1437,  1447,  1448,  1449,  1453,  1455,  1459,  1459,  1460,
    1460,  1460,  1463,  1464,  1468,  1476,  1529,  1530,  1534,  1536,
    1541,  1550,  1552,  1556,  1556,  1556,  1559,  1563,  1567,  1576,
    1605,  1643,  1644,  1649,  1660,  1661,  1665,  1666,  1667,  1668,
    1669,  1673,  1677,  1681,  1682,  1683,  1684,  1685,  1689,  1690,
    1691,  1692,  1696,  1697,  1701,  1702,  1703,  1704,  1705,  1715,
    1719,  1721,  1723,  1738,  1742,  1744,  1749,  1753,  1766,  1767,
    1771,  1772,  1776,  1777,  1781,  1782,  1786,  1790,  1798,  1803,
    1804,  1809,  1823,  1837,  1888,  1902,  1916,  1966,  1979,  1992,
    2016,  2018,  2022,  2040,  2041,  2046,  2047,  2052,  2053,  2054,
    2055,  2056,  2057,  2058,  2059,  2060,  2061,  2062,  2063,  2067,
    2068,  2069,  2070,  2071,  2072,  2073,  2074,  2078,  2079,  2080,
    2081,  2082,  2083,  2096,  2100,  2104,  2113,  2116,  2117,  2118,
    2124,  2128,  2129,  2130,  2135,  2141,  2149,  2157,  2159,  2164,
    2172,  2174,  2179,  2180,  2187,  2201,  2202,  2204,  2215,  2236,
    2237,  2241,  2242,  2247,  2251,  2259,  2261,  2266,  2267,  2271,
    2275,  2280,  2329,  2344,  2345,  2350,  2351,  2352,  2353,  2354,
    2358,  2359,  2363,  2364,  2370,  2371,  2372,  2373,  2376,  2378,
    2381,  2383,  2387,  2395,  2396,  2400,  2401,  2405,  2406,  2410,
    2412,  2418,  2424,  2430,  2436,  2442,  2451,  2458,  2465,  2472,
    2479,  2489,  2495,  2500,  2509,  2518,  2527,  2536,  2545,  2551,
    2556,  2557,  2558,  2559,  2568,  2569,  2570,  2574,  2577,  2582,
    2583,  2584,  2589,  2590,  2595,  2596,  2597,  2598,  2599,  2603,
    2610,  2612,  2614,  2616,  2620,  2622,  2624,  2629,  2630,  2634,
    2636,  2642,  2643,  2644,  2645,  2649,  2650,  2651,  2652,  2656,
    2657,  2661,  2662,  2663,  2667,  2668,  2672,  2686,  2700,  2705,
    2716,  2723,  2735,  2736,  2741,  2742,  2748,  2749,  2753,  2754,
    2758,  2762,  2771,  2775,  2780,  2785,  2794,  2795,  2799,  2800,
    2801,  2802,  2804,  2809,  2810,  2814,  2815,  2819,  2820,  2824,
    2825,  2829,  2830,  2834,  2835,  2840,  2849,  2850,  2851,  2855,
    2861,  2870,  2912,  2920,  2931,  2932,  2934,  2936,  2941,  2942,
    2947,  2948,  2953,  2954,  2959,  2981,  2985,  2986,  2990,  2991,
    2995,  2996,  2997,  3001,  3002,  3007,  3011,  3016,  3021,  3029,
    3030,  3036,  3038,  3043,  3051,  3059,  3070,  3071,  3072,  3076,
    3077,  3081,  3082,  3083,  3087,  3088,  3108,  3112,  3122,  3123,
    3127,  3140,  3145,  3147,  3151,  3162,  3173,  3204,  3205,  3210,
    3214,  3223,  3232,  3240,  3241,  3245,  3246,  3247,  3252,  3253,
    3255,  3260,  3264,  3274,  3275,  3279,  3280,  3285,  3289,  3295,
    3301,  3311,  3323,  3328,  3332,  3331,  3344,  3349,  3354,  3359,
    3367,  3368,  3372,  3373,  3377,  3379,  3385,  3386,  3391,  3396,
    3400,  3405,  3409,  3410,  3415,  3416,  3420,  3424,  3425,  3429,
    3433,  3434,  3438,  3442,  3446,  3447,  3452,  3461,  3462,  3463,
    3467,  3468,  3469,  3470,  3471,  3472,  3473,  3474,  3475,  3479,
    3496,  3500,  3507,  3517,  3524,  3534,  3535,  3536,  3540,  3547,
    3554,  3561,  3571,  3575,  3591,  3592,  3596,  3602,  3608,  3613,
    3621,  3623,  3628,  3636,  3646,  3647,  3648,  3652,  3656,  3657,
    3661,  3665,  3675,  3676,  3678,  3683,  3684,  3686,  3692,  3693,
    3700,  3707,  3714,  3721,  3728,  3735,  3742,  3749,  3756,  3763,
    3770,  3776,  3783,  3790,  3797,  3804,  3811,  3818,  3825,  3831,
    3838,  3845,  3852,  3859,  3861,  3883,  3887,  3888,  3892,  3893,
    3895,  3897,  3898,  3899,  3900,  3901,  3902,  3903,  3904,  3905,
    3906,  3907,  3908,  3909,  3913,  3983,  3989,  3990,  3994,  3999,
    4000,  4005,  4006,  4011,  4012,  4017,  4018,  4022,  4023,  4027,
    4028,  4029,  4033,  4037,  4042,  4043,  4044,  4048,  4052,  4053,
    4054,  4055,  4056,  4060,  4064,  4068,  4096,  4097,  4102,  4103,
    4104,  4105,  4109,  4116,  4121,  4126,  4131,  4136,  4144,  4145,
    4149,  4159,  4169,  4176,  4183,  4190,  4197,  4210,  4211,  4216,
    4221,  4226,  4231,  4239,  4240,  4241,  4245,  4272,  4273,  4278,
    4279,  4284,  4285,  4291,  4297,  4303,  4309,  4315,  4321,  4328,
    4332,  4333,  4334,  4338,  4339,  4350,  4352,  4356,  4358,  4362,
    4363,  4369,  4378,  4379,  4380,  4381,  4382,  4386,  4387,  4391,
    4392,  4393,  4397,  4403,  4406,  4412,  4415,  4421,  4424,  4429,
    4449,  4450,  4451,  4455,  4461,  4525,  4556,  4617,  4656,  4673,
    4689,  4705,  4721,  4722,  4739,  4756,  4773,  4794,  4798,  4805,
    4850,  4851,  4855,  4866,  4869,  4873,  4881,  4887,  4895,  4899,
    4904,  4906,  4912,  4920,  4922,  4927,  4931,  4937,  4945,  4947,
    4952,  4960,  4962,  4967,  4968,  4972,  4977,  4988,  4999,  5009,
    5019,  5021,  5026,  5027,  5029,  5031,  5040,  5041,  5050,  5051,
    5052,  5053,  5054,  5056,  5057,  5070,  5088,  5089,  5103,  5123,
    5124,  5125,  5126,  5127,  5128,  5129,  5131,  5132,  5134,  5146,
    5160,  5174,  5181,  5196,  5211,  5218,  5244,  5261,  5281,  5296,
    5297,  5301,  5302,  5303,  5306,  5307,  5310,  5312,  5315,  5316,
    5317,  5318,  5319,  5320,  5324,  5325,  5326,  5327,  5328,  5329,
    5330,  5331,  5335,  5336,  5337,  5338,  5339,  5340,  5341,  5342,
    5343,  5344,  5345,  5346,  5347,  5349,  5350,  5351,  5352,  5353,
    5354,  5355,  5356,  5357,  5358,  5359,  5360,  5361,  5362,  5364,
    5365,  5366,  5367,  5368,  5369,  5370,  5371,  5372,  5373,  5374,
    5375,  5376,  5377,  5378,  5379,  5380,  5382,  5383,  5384,  5385,
    5386,  5387,  5388,  5389,  5391,  5392,  5393,  5394,  5395,  5396,
    5397,  5398,  5399,  5400,  5401,  5402,  5403,  5404,  5405,  5406,
    5407,  5408,  5409,  5410,  5411,  5412,  5413,  5414,  5415,  5419,
    5420,  5425,  5448,  5469,  5501,  5503,  5511,  5518,  5523,  5538,
    5539,  5543,  5546,  5550,  5556,  5565,  5566,  5567,  5568,  5574,
    5581,  5582,  5583,  5587,  5591,  5593,  5598,  5602,  5603,  5604,
    5605,  5606,  5607,  5608,  5609,  5610,  5611,  5615,  5623,  5631,
    5638,  5652,  5653,  5657,  5661,  5665,  5669,  5673,  5677,  5684,
    5688,  5692,  5693,  5703,  5711,  5712,  5716,  5720,  5724,  5731,
    5733,  5738,  5742,  5743,  5747,  5748,  5749,  5750,  5751,  5755,
    5768,  5769,  5773,  5775,  5780,  5786,  5790,  5791,  5795,  5800,
    5809,  5810,  5814,  5825,  5829,  5830,  5835,  5845,  5848,  5850,
    5854,  5858,  5859,  5863,  5864,  5868,  5872,  5875,  5877,  5881,
    5882,  5886,  5894,  5903,  5904,  5908,  5909,  5913,  5914,  5915,
    5930,  5934,  5935,  5945,  5946,  5950,  5954,  5958,  5968,  5972,
    5975,  5977,  5981,  5982,  5985,  5987,  5991,  5996,  5997,  6001,
    6002,  6006,  6010,  6013,  6015,  6019,  6023,  6027,  6030,  6032,
    6036,  6037,  6041,  6043,  6047,  6051,  6052,  6056,  6060,  6064
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "X_BODY", "IDENT", "aTYPE",
  "ALIAS", "AGGR", "AGGR2", "RANK", "sqlINT", "OIDNUM", "HEXADECIMAL",
  "INTNUM", "APPROXNUM", "USING", "GLOBAL", "CAST", "CONVERT", "CHARACTER",
  "VARYING", "LARGE", "OBJECT", "VARCHAR", "CLOB", "sqlTEXT", "BINARY",
  "sqlBLOB", "sqlDECIMAL", "sqlFLOAT", "TINYINT", "SMALLINT", "BIGINT",
  "HUGEINT", "sqlINTEGER", "sqlDOUBLE", "sqlREAL", "PRECISION", "PARTIAL",
  "SIMPLE", "ACTION", "CASCADE", "RESTRICT", "BOOL_FALSE", "BOOL_TRUE",
  "CURRENT_DATE", "CURRENT_TIMESTAMP", "CURRENT_TIME", "LOCALTIMESTAMP",
  "LOCALTIME", "LEX_ERROR", "GEOMETRY", "GEOMETRYSUBTYPE", "GEOMETRYA",
  "USER", "CURRENT_USER", "SESSION_USER", "LOCAL", "LOCKED", "BEST",
  "EFFORT", "CURRENT_ROLE", "sqlSESSION", "sqlDELETE", "UPDATE", "SELECT",
  "INSERT", "LATERAL", "LEFT", "RIGHT", "FULL", "OUTER", "NATURAL",
  "CROSS", "JOIN", "INNER", "COMMIT", "ROLLBACK", "SAVEPOINT", "RELEASE",
  "WORK", "CHAIN", "NO", "PRESERVE", "ROWS", "START", "TRANSACTION",
  "READ", "WRITE", "ONLY", "ISOLATION", "LEVEL", "UNCOMMITTED",
  "COMMITTED", "sqlREPEATABLE", "SERIALIZABLE", "DIAGNOSTICS", "sqlSIZE",
  "STORAGE", "ASYMMETRIC", "SYMMETRIC", "ORDER", "ORDERED", "BY",
  "IMPRINTS", "EXISTS", "ESCAPE", "HAVING", "sqlGROUP", "sqlNULL", "FROM",
  "FOR", "MATCH", "EXTRACT", "SEQUENCE", "INCREMENT", "RESTART",
  "CONTINUE", "MAXVALUE", "MINVALUE", "CYCLE", "NOMAXVALUE", "NOMINVALUE",
  "NOCYCLE", "NEXT", "VALUE", "CACHE", "GENERATED", "ALWAYS", "IDENTITY",
  "SERIAL", "BIGSERIAL", "AUTO_INCREMENT", "SCOLON", "AT", "XMLCOMMENT",
  "XMLCONCAT", "XMLDOCUMENT", "XMLELEMENT", "XMLATTRIBUTES", "XMLFOREST",
  "XMLPARSE", "STRIP", "WHITESPACE", "XMLPI", "XMLQUERY", "PASSING",
  "XMLTEXT", "NIL", "REF", "ABSENT", "EMPTY", "DOCUMENT", "ELEMENT",
  "CONTENT", "XMLNAMESPACES", "NAMESPACE", "XMLVALIDATE", "RETURNING",
  "LOCATION", "ID", "ACCORDING", "XMLSCHEMA", "URI", "XMLAGG", "FILTER",
  "UNIONJOIN", "CORRESPONDING", "INTERSECT", "EXCEPT", "UNION", "DATA",
  "WITH", "'('", "')'", "FILTER_FUNC", "NOT", "'='", "SOME", "OR", "ILIKE",
  "NOT_ILIKE", "LIKE", "NOT_LIKE", "sqlIN", "NOT_IN", "BETWEEN",
  "NOT_BETWEEN", "ANY", "ALL", "AND", "COMPARISON", "'+'", "'-'", "'&'",
  "'|'", "'^'", "SPLIT_PART", "POSITION", "SUBSTRING", "CONCATSTRING",
  "RIGHT_SHIFT_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT", "LEFT_SHIFT",
  "'*'", "'/'", "'%'", "UMINUS", "'~'", "GEOM_OVERLAP_OR_LEFT",
  "GEOM_OVERLAP_OR_BELOW", "GEOM_OVERLAP_OR_ABOVE", "GEOM_OVERLAP",
  "GEOM_MBR_EQUAL", "GEOM_DIST", "GEOM_ABOVE", "GEOM_BELOW",
  "GEOM_OVERLAP_OR_RIGHT", "TEMP", "TEMPORARY", "STREAM", "MERGE",
  "REMOTE", "REPLICA", "ASC", "DESC", "AUTHORIZATION", "CHECK",
  "CONSTRAINT", "CREATE", "COMMENT", "TYPE", "PROCEDURE", "FUNCTION",
  "sqlLOADER", "AGGREGATE", "RETURNS", "EXTERNAL", "sqlNAME", "DECLARE",
  "CALL", "LANGUAGE", "ANALYZE", "MINMAX", "SQL_EXPLAIN", "SQL_PLAN",
  "SQL_DEBUG", "SQL_TRACE", "PREP", "PREPARE", "EXEC", "EXECUTE",
  "DEFAULT", "DISTINCT", "DROP", "TRUNCATE", "FOREIGN", "RENAME",
  "ENCRYPTED", "UNENCRYPTED", "PASSWORD", "GRANT", "REVOKE", "ROLE",
  "ADMIN", "INTO", "IS", "KEY", "ON", "OPTION", "OPTIONS", "PATH",
  "PRIMARY", "PRIVILEGES", "PUBLIC", "REFERENCES", "SCHEMA", "SET",
  "AUTO_COMMIT", "RETURN", "ALTER", "ADD", "TABLE", "COLUMN", "TO",
  "UNIQUE", "VALUES", "VIEW", "WHERE", "sqlDATE", "TIME", "TIMESTAMP",
  "INTERVAL", "YEAR", "QUARTER", "MONTH", "WEEK", "DAY", "HOUR", "MINUTE",
  "SECOND", "ZONE", "LIMIT", "OFFSET", "SAMPLE", "CASE", "WHEN", "THEN",
  "ELSE", "NULLIF", "COALESCE", "IF", "ELSEIF", "WHILE", "DO", "ATOMIC",
  "BEGIN", "END", "COPY", "RECORDS", "DELIMITERS", "STDIN", "STDOUT",
  "FWF", "INDEX", "REPLACE", "AS", "TRIGGER", "OF", "BEFORE", "AFTER",
  "ROW", "STATEMENT", "sqlNEW", "OLD", "EACH", "REFERENCING", "OVER",
  "PARTITION", "CURRENT", "EXCLUDE", "FOLLOWING", "PRECEDING", "OTHERS",
  "TIES", "RANGE", "UNBOUNDED", "','", "'.'", "':'", "'['", "']'", "'?'",
  "$accept", "sqlstmt", "@1", "@2", "@3", "@4", "@5", "create",
  "create_or_replace", "if_exists", "if_not_exists", "drop", "set",
  "declare", "sql", "opt_minmax", "declare_statement", "variable_list",
  "set_statement", "schema", "schema_name_clause",
  "authorization_identifier", "opt_schema_default_char_set",
  "opt_schema_element_list", "schema_element_list", "schema_element",
  "opt_grantor", "grantor", "grant", "authid_list", "opt_with_grant",
  "opt_with_admin", "opt_from_grantor", "revoke", "opt_grant_for",
  "opt_admin_for", "privileges", "global_privileges", "global_privilege",
  "object_name", "object_privileges", "operation_commalist", "operation",
  "grantee_commalist", "grantee", "alter_statement", "passwd_schema",
  "alter_table_element", "drop_table_element", "opt_column",
  "create_statement", "seq_def", "opt_seq_params", "opt_alt_seq_params",
  "opt_seq_param", "opt_alt_seq_param", "opt_seq_common_param",
  "index_def", "opt_index_type", "role_def", "opt_encrypted",
  "table_opt_storage", "table_def", "opt_temp", "opt_on_commit",
  "table_content_source", "as_subquery_clause", "with_or_without_data",
  "table_element_list", "add_table_element", "table_element",
  "serial_or_bigserial", "column_def", "opt_column_def_opt_list",
  "column_def_opt_list", "column_options", "column_option_list",
  "column_option", "default", "default_value", "column_constraint",
  "generated_column", "serial_opt_params", "table_constraint",
  "opt_constraint_name", "ref_action", "ref_on_update", "ref_on_delete",
  "opt_ref_action", "opt_match_type", "opt_match",
  "column_constraint_type", "table_constraint_type",
  "domain_constraint_type", "ident_commalist", "like_table", "view_def",
  "query_expression_def", "query_expression", "opt_with_check_option",
  "opt_column_list", "column_commalist_parens", "type_def",
  "external_function_name", "function_body", "func_def", "routine_body",
  "procedure_statement_list", "trigger_procedure_statement_list",
  "procedure_statement", "trigger_procedure_statement",
  "control_statement", "call_statement", "call_procedure_statement",
  "routine_invocation", "routine_name", "argument_list",
  "return_statement", "return_value", "case_statement", "when_statement",
  "when_statements", "when_search_statement", "when_search_statements",
  "case_opt_else_statement", "if_statement", "if_opt_else",
  "while_statement", "opt_begin_label", "opt_end_label",
  "table_function_column_list", "func_data_type", "opt_paramlist",
  "paramlist", "trigger_def", "trigger_action_time", "trigger_event",
  "opt_referencing_list", "old_or_new_values_alias_list",
  "old_or_new_values_alias", "opt_as", "opt_row", "triggered_action",
  "opt_for_each", "row_or_statement", "opt_when", "triggered_statement",
  "routine_designator", "drop_routine_designator", "drop_statement",
  "opt_typelist", "typelist", "drop_action", "update_statement",
  "transaction_statement", "_transaction_stmt", "transaction_mode_list",
  "_transaction_mode_list", "transaction_mode", "iso_level", "opt_work",
  "opt_chain", "opt_to_savepoint", "copyfrom_stmt", "opt_fwf_widths",
  "fwf_widthlist", "opt_header_list", "header_list", "header", "opt_seps",
  "opt_using", "opt_nr", "opt_null_string", "opt_locked",
  "opt_best_effort", "opt_constraint", "string_commalist",
  "string_commalist_contents", "delete_stmt", "check_identity",
  "truncate_stmt", "update_stmt", "insert_stmt", "values_or_query_spec",
  "row_commalist", "atom_commalist", "value_commalist", "null",
  "simple_atom", "insert_atom", "value", "opt_distinct",
  "assignment_commalist", "assign_default", "assignment",
  "opt_where_clause", "joined_table", "join_type", "opt_outer",
  "outer_join_type", "join_spec", "with_query", "with_list",
  "with_list_element", "with_query_expression", "simple_select",
  "select_statement_single_row", "select_no_parens_orderby",
  "select_target_list", "target_specification", "select_no_parens",
  "set_distinct", "opt_corresponding", "selection", "table_exp",
  "opt_from_clause", "table_ref_commalist", "table_ref", "@6",
  "table_name", "opt_table_name", "opt_group_by_clause",
  "column_ref_commalist", "opt_having_clause", "search_condition",
  "and_exp", "opt_order_by_clause", "opt_limit", "opt_offset",
  "opt_sample", "sort_specification_list", "ordering_spec", "opt_asc_desc",
  "predicate", "pred_exp", "comparison_predicate", "between_predicate",
  "opt_bounds", "like_predicate", "like_exp", "test_for_null",
  "in_predicate", "pred_exp_list", "all_or_any_predicate", "any_all_some",
  "existence_test", "filter_arg_list", "filter_args", "filter_exp",
  "subquery_with_orderby", "subquery", "simple_scalar_exp", "scalar_exp",
  "value_exp", "param", "window_function", "window_function_type",
  "window_specification", "window_partition_clause", "window_order_clause",
  "window_frame_clause", "window_frame_units", "window_frame_extent",
  "window_frame_start", "window_frame_preceding", "window_frame_between",
  "window_frame_end", "window_frame_following", "window_frame_exclusion",
  "var_ref", "func_ref", "qfunc", "func_ident", "datetime_funcs",
  "opt_brackets", "string_funcs", "column_exp_commalist", "column_exp",
  "opt_alias_name", "atom", "qrank", "qaggr", "qaggr2", "aggr_ref",
  "opt_sign", "tz", "time_precision", "timestamp_precision",
  "datetime_type", "non_second_datetime_field", "datetime_field",
  "extract_datetime_field", "start_field", "end_field",
  "single_datetime_field", "interval_qualifier", "interval_type", "user",
  "literal", "interval_expression", "qname", "column_ref", "cast_exp",
  "cast_value", "case_exp", "scalar_exp_list", "case_scalar_exp_list",
  "when_value", "when_value_list", "when_search", "when_search_list",
  "case_opt_else", "case_scalar_exp", "nonzero", "nonzerolng", "poslng",
  "posint", "data_type", "subgeometry_type", "type_alias", "varchar",
  "clob", "blob", "column", "authid", "restricted_ident", "ident",
  "non_reserved_word", "name_commalist", "lngval", "intval", "string",
  "exec", "exec_ref", "opt_path_specification", "path_specification",
  "schema_name_list", "comment_on_statement", "catalog_object",
  "XML_value_expression", "XML_value_expression_list", "XML_primary",
  "XML_value_function", "XML_comment", "XML_concatenation", "XML_document",
  "XML_element",
  "opt_comma_XML_namespace_declaration_attributes_element_content",
  "XML_element_name", "XML_attributes", "XML_attribute_list",
  "XML_attribute", "opt_XML_attribute_name", "XML_attribute_value",
  "XML_attribute_name", "XML_element_content_and_option",
  "XML_element_content_list", "XML_element_content",
  "opt_XML_content_option", "XML_content_option", "XML_forest",
  "opt_XML_namespace_declaration_and_comma", "forest_element_list",
  "forest_element", "forest_element_value", "opt_forest_element_name",
  "forest_element_name", "XML_parse", "XML_whitespace_option", "XML_PI",
  "XML_PI_target", "opt_comma_string_value_expression", "XML_query",
  "XQuery_expression", "opt_XML_query_argument_list",
  "XML_query_default_passing_mechanism", "XML_query_argument_list",
  "XML_query_argument", "XML_query_context_item", "XML_query_variable",
  "opt_XML_query_returning_mechanism", "XML_query_empty_handling_option",
  "XML_text", "XML_validate", "document_or_content_or_sequence",
  "document_or_content", "opt_XML_returning_clause",
  "XML_namespace_declaration", "XML_namespace_declaration_item_list",
  "XML_namespace_declaration_item", "XML_namespace_prefix",
  "XML_namespace_URI", "XML_regular_namespace_declaration_item",
  "XML_default_namespace_declaration_item", "opt_XML_passing_mechanism",
  "XML_passing_mechanism", "opt_XML_valid_according_to_clause",
  "XML_valid_according_to_clause", "XML_valid_according_to_what",
  "XML_valid_according_to_URI", "XML_valid_target_namespace_URI",
  "XML_URI", "opt_XML_valid_schema_location",
  "XML_valid_schema_location_URI", "XML_valid_according_to_identifier",
  "registered_XML_Schema_name", "opt_XML_valid_element_clause",
  "XML_valid_element_clause", "opt_XML_valid_element_name_specification",
  "XML_valid_element_name_specification",
  "XML_valid_element_namespace_specification",
  "XML_valid_element_namespace_URI", "XML_valid_element_name",
  "XML_aggregate", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,    40,    41,   429,   430,    61,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,    43,    45,    38,   124,    94,   445,   446,
     447,   448,   449,   450,   451,   452,    42,    47,    37,   453,
     126,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   591,    44,
      46,    58,    91,    93,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   355,   356,   357,   356,   358,   356,   359,   356,   360,
     356,   361,   356,   356,   356,   356,   356,   356,   362,   363,
     363,   364,   364,   365,   365,   366,   367,   368,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   370,
     370,   371,   371,   372,   372,   373,   373,   373,   373,   373,
     373,   373,   373,   374,   374,   375,   375,   375,   376,   377,
     377,   378,   378,   379,   379,   380,   380,   380,   380,   380,
     381,   381,   382,   382,   383,   383,   384,   384,   385,   385,
     386,   386,   387,   387,   388,   388,   389,   389,   390,   390,
     391,   391,   392,   392,   393,   393,   394,   394,   394,   395,
     395,   395,   396,   396,   397,   397,   397,   397,   397,   397,
     397,   398,   398,   399,   399,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   401,   401,   401,   402,   402,
     402,   402,   402,   402,   403,   403,   403,   404,   404,   405,
     405,   405,   405,   405,   405,   405,   405,   406,   406,   406,
     407,   407,   408,   408,   409,   409,   409,   410,   410,   410,
     410,   410,   411,   411,   411,   411,   411,   411,   411,   411,
     412,   413,   413,   413,   413,   414,   414,   415,   415,   415,
     416,   416,   417,   417,   417,   417,   417,   417,   417,   418,
     418,   418,   418,   418,   418,   419,   419,   419,   419,   420,
     420,   421,   422,   422,   422,   423,   423,   424,   424,   425,
     425,   425,   426,   426,   427,   427,   428,   428,   429,   429,
     430,   431,   431,   432,   432,   432,   433,   434,   435,   436,
     436,   437,   437,   438,   439,   439,   440,   440,   440,   440,
     440,   441,   442,   443,   443,   443,   443,   443,   444,   444,
     444,   444,   445,   445,   446,   446,   446,   446,   446,   446,
     447,   447,   447,   448,   449,   449,   450,   451,   452,   452,
     453,   453,   454,   454,   455,   455,   456,   457,   458,   459,
     459,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     461,   461,   461,   462,   462,   463,   463,   464,   464,   464,
     464,   464,   464,   464,   464,   464,   464,   464,   464,   465,
     465,   465,   465,   465,   465,   465,   465,   466,   466,   466,
     466,   466,   466,   467,   468,   469,   470,   471,   471,   471,
     472,   473,   473,   473,   474,   474,   475,   476,   476,   477,
     478,   478,   479,   479,   480,   481,   481,   481,   482,   483,
     483,   484,   484,   485,   485,   486,   486,   487,   487,   487,
     488,   488,   489,   490,   490,   491,   491,   491,   491,   491,
     492,   492,   493,   493,   494,   494,   494,   494,   495,   495,
     496,   496,   497,   498,   498,   499,   499,   500,   500,   501,
     501,   502,   502,   502,   502,   502,   503,   503,   503,   503,
     503,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   505,   505,   505,   506,   506,   507,
     507,   507,   369,   369,   508,   508,   508,   508,   508,   509,
     510,   510,   510,   510,   510,   510,   510,   511,   511,   512,
     512,   513,   513,   513,   513,   514,   514,   514,   514,   515,
     515,   516,   516,   516,   517,   517,   518,   518,   518,   518,
     518,   518,   519,   519,   520,   520,   521,   521,   522,   522,
     523,   523,   524,   524,   524,   524,   525,   525,   526,   526,
     526,   526,   526,   527,   527,   528,   528,   529,   529,   530,
     530,   531,   531,   532,   532,   533,   534,   534,   534,   535,
     535,   536,   537,   537,   538,   538,   538,   538,   539,   539,
     540,   540,   541,   541,   542,   543,   544,   544,   545,   545,
     546,   546,   546,   547,   547,   548,   549,   549,   549,   550,
     550,   551,   551,   551,   551,   551,   552,   552,   552,   553,
     553,   554,   554,   554,   555,   555,   369,   556,   557,   557,
     558,   559,   369,   369,   560,   561,   562,   563,   563,   564,
     565,   565,   565,   565,   565,   566,   566,   566,   567,   567,
     567,   568,   569,   570,   570,   571,   571,   572,   572,   572,
     572,   572,   572,   572,   573,   572,   574,   574,   574,   574,
     575,   575,   576,   576,   577,   577,   578,   578,   579,   579,
     580,   580,   581,   581,   582,   582,   582,   583,   583,   583,
     584,   584,   584,   584,   585,   585,   586,   587,   587,   587,
     588,   588,   588,   588,   588,   588,   588,   588,   588,   589,
     589,   590,   590,   591,   591,   592,   592,   592,   593,   593,
     593,   593,   594,   594,   595,   595,   596,   596,   596,   596,
     597,   597,   598,   598,   599,   599,   599,   600,   601,   601,
     602,   603,   604,   604,   604,   605,   605,   605,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   607,   607,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   609,   610,   611,   611,   612,   613,
     613,   614,   614,   615,   615,   616,   616,   617,   617,   618,
     618,   618,   619,   620,   621,   621,   621,   622,   623,   623,
     623,   623,   623,   624,   625,   625,   626,   626,   627,   627,
     627,   627,   628,   628,   628,   628,   628,   628,   629,   629,
     630,   630,   630,   630,   630,   630,   630,   631,   631,   632,
     632,   632,   632,   633,   633,   633,   634,   635,   635,   636,
     636,   637,   637,   638,   638,   638,   638,   638,   638,   638,
     639,   639,   639,   640,   640,   641,   641,   642,   642,   643,
     643,   643,   644,   644,   644,   644,   644,   645,   645,   646,
     646,   646,   647,   648,   648,   649,   649,   650,   650,   651,
     652,   652,   652,   653,   653,   653,   653,   653,   653,   653,
     653,   653,   653,   653,   653,   653,   653,   653,   653,   654,
     655,   655,   655,   656,   656,   656,   657,   657,   658,   659,
     659,   659,   659,   660,   660,   661,   661,   662,   663,   663,
     664,   665,   665,   666,   666,   667,   668,   669,   670,   671,
     672,   672,   672,   672,   672,   672,   672,   672,   672,   672,
     672,   672,   672,   672,   672,   672,   672,   672,   672,   672,
     672,   672,   672,   672,   672,   672,   672,   672,   672,   672,
     672,   672,   672,   672,   672,   672,   673,   673,   674,   675,
     675,   676,   676,   676,   677,   677,   678,   679,   680,   680,
     680,   680,   680,   680,   681,   681,   681,   681,   681,   681,
     681,   681,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   683,
     683,   684,   685,   685,   686,   686,   687,   688,   688,   689,
     689,   690,   691,   692,   692,   693,   693,   693,   693,   693,
     693,   693,   693,   694,   695,   695,   696,   697,   697,   697,
     697,   697,   697,   697,   697,   697,   697,   698,   699,   700,
     701,   702,   702,   702,   702,   702,   702,   702,   702,   703,
     704,   705,   705,   706,   707,   707,   708,   709,   710,   711,
     711,   712,   713,   713,   714,   714,   714,   714,   714,   715,
     716,   716,   717,   717,   718,   719,   720,   720,   721,   722,
     723,   723,   724,   725,   726,   726,   727,   728,   729,   729,
     730,   731,   731,   732,   732,   733,   734,   735,   735,   736,
     736,   737,   738,   739,   739,   740,   740,   741,   741,   741,
     742,   743,   743,   744,   744,   745,   746,   747,   748,   748,
     749,   749,   750,   750,   751,   751,   752,   753,   753,   754,
     754,   755,   756,   757,   757,   758,   759,   760,   761,   761,
     762,   762,   763,   763,   764,   765,   765,   766,   767,   768
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     4,     0,     4,     0,     4,     0,
       3,     0,     3,     2,     0,     1,     2,     1,     1,     1,
       3,     0,     2,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     1,     1,     0,
       1,     2,     2,     2,     4,     4,     4,     4,     3,     4,
       3,     4,     4,     7,     5,     1,     2,     3,     1,     0,
       4,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       0,     3,     1,     1,     6,     6,     1,     3,     0,     3,
       0,     3,     0,     2,     6,     6,     0,     3,     0,     3,
       1,     3,     1,     3,     2,     2,     2,     1,     1,     2,
       1,     1,     1,     3,     1,     1,     1,     2,     2,     2,
       1,     1,     3,     1,     1,     6,     6,     5,     5,     6,
       6,     6,     4,     6,    10,     4,     3,     7,     5,     4,
       5,     4,     5,     5,     3,     3,     3,     1,     0,     2,
       2,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       1,     2,     1,     2,     2,     3,     1,     2,     1,     3,
       3,     1,     3,     2,     1,     2,     1,     2,     1,     1,
       9,     1,     1,     1,     0,     3,    10,     0,     1,     1,
       0,     3,     5,     6,     5,     5,     5,     7,     6,     1,
       1,     2,     2,     2,     2,     0,     4,     4,     3,     3,
       1,     4,     0,     3,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     0,     1,     1,     2,
       6,     1,     3,     1,     1,     1,     2,     1,     2,     5,
       1,     0,     3,     2,     0,     2,     2,     1,     1,     2,
       2,     3,     3,     0,     1,     1,     2,     2,     0,     1,
       1,     1,     0,     2,     2,     1,     1,     2,     5,     1,
       2,     3,     8,     4,     1,     3,     2,     7,     1,     3,
       1,     1,     0,     3,     0,     1,     3,     6,     3,     1,
       1,    11,     9,    11,    10,    11,    11,     9,     7,     9,
       1,     5,     6,     0,     3,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     1,     0,     1,     3,
       2,     1,     1,     4,     6,     5,     4,     1,     2,     4,
       1,     2,     0,     2,     7,     0,     2,     5,     8,     0,
       2,     0,     1,     2,     4,     4,     1,     1,     1,     0,
       4,     2,     9,     1,     1,     1,     1,     1,     1,     3,
       0,     2,     1,     2,     4,     4,     4,     4,     0,     1,
       0,     1,     3,     0,     3,     1,     1,     0,     4,     1,
       4,     3,     4,     3,     3,     3,     4,     5,     4,     4,
       4,     5,     3,     5,     6,     5,     5,     5,     5,     4,
       3,     3,     3,     4,     0,     3,     2,     1,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     3,     4,     3,     4,     3,     0,     1,     1,
       3,     2,     2,     3,     3,     2,     2,     2,     1,     1,
       0,     2,     3,     0,     0,     3,    14,    13,     6,     9,
       6,     6,     0,     4,     1,     3,     0,     3,     1,     3,
       1,     2,     0,     3,     5,     7,     0,     1,     0,     2,
       2,     4,     4,     0,     3,     0,     1,     0,     2,     0,
       2,     1,     3,     1,     3,     4,     0,     2,     2,     5,
       4,     6,     4,     5,     0,     2,     2,     1,     3,     5,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     3,     1,     3,     3,     3,     0,
       2,     3,     4,     4,     5,     5,     0,     1,     2,     0,
       1,     1,     1,     1,     2,     2,     1,     3,     3,     1,
       4,     1,     1,     1,     4,     6,     5,     1,     3,     1,
       5,     5,     5,     3,     1,     0,     1,     1,     0,     1,
       5,     1,     4,     0,     2,     1,     3,     2,     2,     3,
       2,     3,     1,     1,     0,     5,     5,     2,     4,     1,
       0,     1,     0,     3,     1,     3,     0,     2,     3,     1,
       3,     1,     0,     3,     0,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     1,     3,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     3,     6,     6,     0,     1,     1,     3,     3,
       3,     3,     1,     3,     4,     3,     5,     5,     7,     7,
       1,     3,     4,     4,     1,     1,     1,     2,     1,     3,
       3,     3,     3,     4,     3,     3,     4,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     3,     1,     3,     0,
       3,     0,     3,     0,     3,     1,     1,     1,     1,     2,
       1,     2,     2,     4,     2,     1,     2,     2,     0,     3,
       2,     2,     3,     2,     3,     4,     1,     3,     1,     1,
       1,     1,     6,     2,     2,     2,     2,     2,     0,     2,
       8,     8,     6,     6,     6,     3,     8,     1,     3,     1,
       3,     3,     2,     0,     2,     1,     1,     1,     3,     1,
       3,     1,     3,     4,     6,     5,     5,     4,     6,     1,
       1,     1,     0,     3,     0,     3,     0,     3,     0,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     1,     2,     2,     2,     2,     1,     1,     4,
       1,     3,     5,     1,     3,     5,     6,     6,     1,     6,
       4,     5,     4,     1,     3,     3,     3,     4,     1,     2,
       4,     1,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     1,     4,     1,     1,
       1,     1,     1,     1,     4,     6,     1,     4,     6,     1,
       2,     1,     1,     1,     1,     4,     1,     4,     6,     1,
       4,     1,     4,     6,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     2,     2,     3,     4,     0,
       1,     2,     1,     5,     5,     2,     2,     2,     4,     6,
       2,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     5,     5,
       7,     0,     2,     4,     6,     4,     2,     4,     2,     1,
       4,     1,     3,     2,     0,     2,     1,     1,     2,     1,
       3,     1,     0,     2,     3,     3,     3,     3,     4,     7,
       0,     2,     1,     3,     2,     1,     0,     2,     1,     6,
       2,     2,     7,     1,     0,     2,     8,     1,     0,     3,
       1,     1,     3,     1,     1,     2,     4,     0,     1,     3,
       3,     5,     6,     1,     1,     1,     1,     0,     2,     2,
       4,     1,     3,     1,     1,     1,     1,     3,     2,     2,
       0,     1,     2,     2,     0,     1,     5,     1,     1,     3,
       3,     1,     1,     0,     2,     1,     2,     1,     0,     1,
       1,     2,     0,     1,     2,     2,     2,     1,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    17,     0,     0,   520,     0,   450,   450,     0,
       0,     0,    15,     0,     0,    18,     0,    27,     0,     0,
       7,     5,     9,    11,     3,     0,    25,     0,     0,    86,
      26,     0,   478,     0,    19,     0,     0,     0,     0,     0,
      34,    35,    28,    29,    30,    33,    31,   145,   144,   141,
     142,   143,    37,   146,    32,   423,   422,   429,   428,   424,
     425,   427,   426,   546,   564,   552,   553,   602,     0,    38,
      16,     0,   924,   925,   927,   928,   929,   930,   932,   934,
     981,   937,   945,  1006,   968,   942,   983,   956,   967,   961,
     940,  1005,   975,   962,   951,   952,   953,   949,   943,   959,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,   997,   998,   999,  1000,   960,   926,  1002,
    1001,   947,  1008,   941,   933,   966,  1003,  1004,   978,   954,
     979,   980,   976,   977,   950,   935,   939,   965,   963,   936,
     938,   955,   982,   958,   948,   969,   970,   971,   972,   973,
     974,   944,  1007,   946,   964,   957,     0,   840,   931,   521,
     522,     0,     0,   449,   453,   453,   431,     0,   437,     0,
     549,   274,   520,     0,     0,     0,   751,   749,   750,   324,
       0,   746,   748,   274,     0,     0,     0,     0,     0,  1013,
    1012,     0,  1016,   958,   496,   918,   919,   920,   921,   922,
     923,   105,   274,   274,   104,   100,   110,   106,   274,     0,
       0,     0,    90,    92,     0,   101,   102,    76,   917,     0,
       0,     0,     0,     0,   437,     0,     0,     0,  1011,     0,
       0,     0,     0,   268,     0,   271,   270,     0,   868,     1,
       0,     0,     0,   172,   173,     0,   190,   189,     0,     0,
       0,     0,     0,     0,    23,    23,   171,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    21,    21,    21,     0,    21,    21,
      21,     0,    21,   419,   820,   822,   821,   968,     0,   939,
     955,   970,     0,     0,     0,  1002,  1001,    23,    41,    42,
       0,   264,     2,     0,   565,   565,   565,   604,    13,   529,
       0,     0,  1014,   924,   925,   927,   928,   929,   930,   826,
     825,   824,   827,   828,     0,     0,     0,   914,   837,   838,
     758,   758,   758,   758,   758,   700,     0,   514,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   769,
       0,   969,   970,   971,   972,     0,     0,     0,     0,   714,
     713,   573,   773,   599,   630,   601,   620,   621,   622,   623,
     624,   625,   626,     0,   627,   697,   696,   628,   668,   712,
     701,     0,   703,   705,   707,   708,   571,   767,   698,     0,
       0,     0,   704,   699,   776,   832,   702,   710,   709,     0,
       0,   843,   823,   711,  1037,  1038,  1039,  1040,  1041,  1042,
    1043,  1044,  1045,  1046,   789,   504,     0,   430,   454,   432,
       0,     0,     0,   434,   438,   439,     0,   547,   551,     0,
     275,     0,   563,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1032,     0,     0,     0,   610,
       0,     0,    10,    12,     0,     0,   496,     0,     0,   419,
     107,   108,    99,   109,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   437,   436,   177,     0,
       0,     0,     0,   602,     0,   480,     0,     0,     0,     0,
     479,   194,   193,     0,   192,   191,     0,    23,    23,    23,
      23,     0,    70,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,   274,     0,   411,   148,    21,     0,     0,
       0,     0,     0,   419,     0,     0,     0,     0,     0,   410,
       0,     0,     0,   412,     0,   421,   420,   402,     0,     0,
      50,    48,     0,     0,     0,     0,     0,   899,   894,   908,
     870,   909,   911,   912,   883,   886,   878,   879,   881,   882,
     880,   889,   891,   901,   905,   904,   799,   796,   798,     0,
       0,   892,   893,    43,   896,   871,   872,   876,     0,   566,
     567,   568,   568,   568,     0,   607,     0,   495,     0,   573,
     523,     0,   916,   841,  1015,   836,   834,     0,     0,     0,
       0,   753,   755,   754,   757,   756,     0,   657,     0,     0,
     743,     0,     0,     0,     0,  1080,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   601,     0,   705,
     843,   629,     0,   693,   694,     0,     0,     0,   688,   829,
       0,   794,     0,   794,   790,   791,     0,     0,     0,   861,
     863,     0,     0,   658,     0,     0,     0,   554,   529,     0,
     946,   772,   775,     0,     0,     0,     0,     0,     0,     0,
       0,   635,   635,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   835,   833,     0,     0,
       0,     0,   507,   504,   502,   451,     0,     0,   433,   442,
     441,     0,     0,     0,   548,     0,   573,  1031,     0,   414,
     414,   414,   414,  1025,  1026,     0,  1027,  1030,     0,   744,
     853,   515,     0,   747,   748,     0,    39,     8,     6,     4,
       0,  1017,     0,   518,   512,   519,   419,   498,   497,   500,
     113,    80,   111,   114,    77,    78,    93,  1000,   958,    91,
      98,    97,   103,    87,    89,     0,     0,   435,   179,   178,
       0,   177,     0,     0,   122,     0,   158,     0,     0,   168,
     166,   164,   169,     0,     0,   149,   152,   161,   138,     0,
     138,   138,   269,     0,   472,   472,     0,   274,     0,     0,
     177,     0,     0,   147,   150,   156,     0,     0,     0,     0,
       0,     0,   175,     0,   947,    59,    55,   274,     0,     0,
       0,   359,   359,   359,   359,     0,   363,   364,     0,     0,
       0,   419,   419,   419,   419,   409,    22,   414,   414,   414,
     414,   419,   419,   419,   413,    47,   276,    51,   792,    52,
      46,    49,    45,     0,     0,     0,   910,     0,     0,     0,
       0,   890,     0,   794,   794,   802,   803,   804,   805,   806,
     798,   796,     0,   818,   819,   265,     0,     0,     0,     0,
     603,   614,   617,   569,     0,     0,     0,   606,   605,   867,
       0,   610,   530,     0,     0,   529,     0,     0,   848,     0,
       0,   915,   759,   810,   811,   808,   807,   809,     0,     0,
       0,   668,  1036,  1034,  1117,  1033,  1117,     0,     0,     0,
       0,  1115,  1116,     0,     0,  1097,  1098,   668,  1114,     0,
    1113,   602,     0,     0,   667,   665,   695,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   858,   863,     0,   862,     0,     0,     0,     0,     0,
     660,     0,     0,   584,   583,   574,   575,   582,   590,   590,
     840,   573,   557,   559,   592,   598,   774,   600,   655,   654,
     656,   632,     0,   641,   642,   639,   640,   638,     0,     0,
     636,   637,     0,     0,   631,     0,   661,   684,   669,   670,
     675,   685,   674,   765,   692,   691,   690,   689,   671,   672,
     673,   686,   677,   679,   681,   676,   687,   683,   682,   680,
     678,   645,     0,   719,   771,   768,   716,     0,     0,   950,
     865,     0,   843,     0,   928,   929,   930,   770,   844,   505,
     506,   503,   452,     0,     0,     0,   448,   443,   444,   440,
       0,   550,   414,     0,   394,   391,   395,   393,     0,  1024,
    1023,   745,     0,   612,   613,   611,    40,    36,  1018,     0,
     499,     0,     0,    82,     0,    82,    96,    82,    82,     0,
       0,     0,     0,     0,     0,   165,   163,   167,   157,   153,
       0,     0,   137,   118,     0,     0,     0,   117,     0,     0,
     234,     0,   477,   483,     0,   483,   274,     0,   481,   482,
       0,     0,   154,   151,   274,   274,   274,   274,     0,     0,
      24,    56,    58,     0,  1019,     0,     0,   234,   180,   200,
       0,     0,   274,   359,   358,     0,   357,     0,     0,     0,
       0,     0,   366,   368,   365,   367,     0,   414,   419,   406,
     403,   407,   405,   399,   396,   400,   398,    54,   401,   408,
      44,     0,   866,     0,   913,     0,     0,     0,   866,   906,
       0,   907,   800,   801,   816,   815,     0,     0,   866,     0,
       0,     0,     0,   618,   619,   616,     0,   562,   561,   560,
     609,   608,   556,   528,   524,   501,   525,   526,   527,   842,
       0,     0,     0,   706,     0,     0,     0,     0,     0,  1059,
    1051,     0,  1085,  1072,  1082,  1086,  1081,   668,  1093,  1094,
       0,  1117,     0,  1134,  1117,   517,     0,   516,   510,   666,
       0,     0,     0,   651,     0,     0,     0,     0,   795,     0,
     830,   797,   831,   839,     0,     0,   859,     0,   864,   852,
       0,     0,   850,     0,   659,     0,   590,     0,     0,   583,
       0,     0,   536,     0,     0,   541,   542,   543,   536,     0,
     537,     0,     0,   539,   946,   580,   589,   591,   578,   577,
       0,     0,   555,     0,   596,   653,     0,     0,     0,     0,
       0,   652,   644,     0,     0,   721,     0,   783,     0,   787,
       0,     0,     0,   455,   445,   446,   447,   392,   416,     0,
     417,  1028,   854,   513,     0,   112,     0,    75,     0,    74,
      84,    85,     0,     0,   123,   126,   162,   160,   159,   419,
     419,   419,   120,   121,   119,     0,   116,     0,   115,   207,
     208,     0,     0,   458,   378,   461,     0,   460,     0,     0,
       0,   155,   184,   185,     0,   186,   277,    72,    73,    71,
       0,     0,    61,  1020,    57,     0,     0,     0,   209,   205,
     210,   211,   916,     0,   182,     0,     0,   195,     0,   349,
       0,   361,     0,     0,     0,   272,     0,     0,   397,   404,
     900,   895,   873,   884,     0,   887,     0,   902,     0,   798,
     813,   817,   897,     0,   874,   875,   877,   615,     0,     0,
       0,     0,  1119,  1118,  1047,  1035,  1048,  1049,     0,  1117,
     983,     0,  1126,     0,  1121,     0,  1123,  1124,     0,     0,
    1117,     0,  1084,     0,     0,     0,     0,  1117,     0,     0,
    1100,  1107,  1111,     0,     0,  1135,     0,   508,     0,     0,
       0,     0,     0,     0,     0,     0,   793,   860,     0,   851,
       0,   855,   856,   581,   579,     0,   531,   664,   662,     0,
     576,     0,     0,   536,     0,   540,   538,   587,     0,   841,
     558,     0,     0,   572,   643,   647,   646,     0,     0,     0,
     715,     0,   723,   786,   785,     0,     0,   845,   415,     0,
       0,    81,    83,    79,     0,   125,   135,   136,   134,     0,
       0,   235,     0,     0,     0,   233,   212,   213,   215,   216,
     379,     0,   473,     0,     0,   466,   466,   491,   493,     0,
       0,     0,  1009,  1022,  1021,    19,     0,    53,    62,    63,
      65,    66,    69,    67,    68,   183,   266,   199,   234,     0,
       0,   202,     0,     0,   188,     0,   520,   942,   956,     0,
       0,     0,     0,     0,   293,   305,   306,   299,   300,   301,
     304,   302,   288,   290,   307,   318,   317,   322,   321,   320,
     319,     0,   303,   298,   297,   308,     0,     0,     0,     0,
       0,     0,   267,   369,   370,     0,   869,     0,     0,   814,
       0,     0,   594,   843,   846,   847,   752,     0,  1071,  1056,
    1058,  1072,  1069,  1052,     0,  1129,  1128,  1120,     0,     0,
       0,     0,     0,     0,  1073,  1083,     0,  1088,  1087,  1090,
    1091,  1089,   668,     0,  1133,  1132,   668,  1099,  1101,  1103,
    1104,     0,  1108,     0,  1112,  1159,   511,     0,     0,     0,
       0,   764,     0,   762,   763,     0,   857,   849,   663,     0,
       0,   532,     0,     0,   533,   536,     0,     0,   593,   597,
     634,   633,   720,     0,   725,   726,   718,     0,   784,   788,
     418,  1029,     0,     0,   131,     0,   129,     0,     0,     0,
       0,   260,     0,   230,     0,   214,   217,   218,   223,   224,
     225,     0,   484,     0,   489,     0,     0,   472,   472,     0,
       0,   187,    60,     0,    64,   206,   916,     0,   181,     0,
     201,     0,     0,     0,     0,     0,   323,     0,   326,   958,
     331,   330,   332,     0,   340,   342,     0,     0,   293,   349,
       0,   350,   360,     0,   349,   356,     0,     0,     0,     0,
     383,   885,   888,   903,   898,   570,     0,     0,     0,     0,
       0,  1068,     0,  1050,  1122,  1125,  1127,     0,     0,     0,
       0,  1079,  1092,     0,  1105,  1131,     0,     0,     0,     0,
       0,   509,   649,   648,     0,     0,     0,   585,   535,   545,
     544,   534,     0,   588,   722,     0,     0,     0,   668,   738,
     727,   730,   728,     0,     0,   132,   133,   130,   128,   696,
       0,   261,     0,   226,   219,   255,     0,     0,     0,     0,
     256,   228,   259,   474,     0,   459,   492,     0,   468,   470,
     483,   483,   494,     0,  1010,   234,     0,   204,   170,     0,
       0,   198,     0,     0,   287,     0,   327,     0,     0,   293,
     341,     0,     0,   337,   342,   293,   349,     0,     0,     0,
       0,   966,   282,   279,   289,   280,     0,     0,   273,   380,
     380,   371,   372,     0,   362,   387,   595,   844,  1066,     0,
    1061,  1064,  1057,  1070,  1053,  1055,  1074,     0,  1077,  1076,
    1075,  1130,  1102,     0,     0,  1096,     0,     0,     0,  1148,
    1137,  1138,   766,   760,   761,   586,     0,   731,   729,   732,
       0,   724,   124,   127,     0,     0,   254,     0,   257,   274,
       0,   490,   467,     0,   471,   485,   485,     0,     0,   221,
     203,   196,   197,   284,     0,     0,   328,     0,   293,   343,
       0,     0,   338,     0,   345,     0,   294,   293,     0,     0,
       0,     0,     0,     0,   378,   381,   378,   378,   378,   373,
       0,     0,   349,  1060,     0,     0,  1063,     0,  1078,  1106,
    1109,  1110,  1143,  1147,  1146,  1142,  1143,  1141,     0,     0,
       0,  1136,  1149,  1150,  1152,     0,     0,   740,     0,   741,
     274,   231,     0,   252,   475,   469,   486,   487,   487,   176,
     220,   234,   278,   325,     0,   333,   339,     0,   335,   293,
       0,   293,     0,     0,   294,   291,   349,   355,     0,   353,
     281,   283,   285,   286,     0,     0,     0,     0,   385,   386,
     384,     0,     0,   313,   314,   311,   312,   389,   315,   382,
     310,   309,   316,  1062,  1067,  1065,  1054,     0,  1140,  1139,
    1155,  1158,  1154,  1157,  1156,  1151,  1153,     0,     0,   668,
     733,   735,   742,   739,   252,     0,   229,   263,   248,   243,
       0,   489,   489,   222,   329,   294,   336,   334,   346,     0,
       0,   292,     0,     0,   377,   375,   376,   374,     0,   295,
    1145,  1144,   736,   734,   737,   243,     0,   250,   251,   249,
     253,     0,   244,   245,   258,   488,   457,   462,   293,   344,
     351,   354,   388,   349,   262,   232,     0,     0,     0,   247,
       0,   246,     0,   456,   345,   348,   352,   390,     0,   237,
     238,     0,     0,   242,   241,     0,   347,   296,   236,   239,
     240,     0,   464,   463,     0,   465
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    33,   188,   185,   184,   186,   187,    34,    35,   535,
     515,    36,    37,    38,    39,  1087,  1585,   298,  1586,  1587,
     835,  1141,  1144,  1557,  1558,  1559,   832,  1379,  1588,   210,
    1095,  1093,  1337,  1589,   221,   222,   211,   212,   213,   779,
     214,   215,   216,   771,   772,  1590,   794,  1117,  1113,  1114,
    1591,    47,   823,   805,   824,   806,   825,    48,   257,   258,
     790,  1394,   259,   260,  1574,  1148,  1149,  1740,  1387,  1388,
    1389,  1538,  1359,  1715,  1716,  1390,  1948,  1717,  1718,  1828,
    1719,  1720,  2086,  1360,  1721,  2153,  2122,  2123,  2124,  2120,
    2089,  1841,  1535,  1842,   549,  1391,    49,   232,   233,  1612,
    1150,   440,    50,  1864,  1884,    51,  1592,  1759,  2133,  2027,
    2057,  1594,  1595,  1596,  1746,  1747,  1955,  1597,  1751,  1598,
    1873,  1874,  1754,  1755,  1871,  1599,  2033,  1600,  1601,  2145,
    1968,  1764,  1155,  1156,    53,   848,  1166,  1770,  1891,  1892,
    1541,  1976,  1894,  1895,  2050,  1982,  2059,   455,   283,  1602,
    1074,  1329,   547,  1603,  1604,    57,   433,   434,   435,  1067,
     164,   427,   728,    58,  2143,  2161,  1727,  1847,  1848,  1123,
    1124,   234,  1365,  2017,  2091,  1845,  1546,  1547,    59,   469,
      60,    61,    62,   724,   953,  1246,   762,   370,   763,  1248,
     764,   161,   599,  1217,   600,   597,   984,  1292,  1496,  1293,
    1684,   235,   169,   170,   437,    64,  1605,   236,   991,   992,
      67,   591,   904,   371,   667,   668,   985,  1282,  1283,  1297,
    1298,  1304,  1621,  1503,   372,   373,   307,   595,   911,   756,
     900,   901,  1205,   374,   375,   376,   377,  1012,   378,  1003,
     379,   380,   638,   381,  1002,   382,   664,   383,   384,   987,
     385,   386,   387,   388,   389,   390,   391,  1314,  1315,  1512,
    1696,  1697,  1819,  1820,  1821,  1822,  2080,  2081,  1931,   392,
     639,   180,   181,   394,   611,   395,   396,   397,   671,   398,
     399,   400,   401,   402,   656,   965,   651,   653,   581,   891,
     927,   928,   892,  1421,   893,   894,   582,   403,   404,   405,
     989,   406,   407,   919,   408,   752,   978,   971,   972,   659,
     660,   975,  1051,  1181,   908,   237,  1615,  1330,  1190,   409,
     585,   586,   410,  1362,   773,   218,   640,   158,  1553,   238,
    1182,   412,    68,   192,  1382,  1383,  1554,    69,   456,   933,
     934,   935,   413,   414,   415,   416,   417,  1439,  1230,  1629,
    1899,  1900,  1986,  1901,  2065,  1630,  1631,  1632,  1450,  1644,
     418,   939,  1233,  1234,  1235,  1452,  1648,   419,  1455,   420,
    1239,  1457,   421,   946,  1241,  1459,  1657,  1658,  1659,  1660,
    1661,  1799,   422,   423,   949,   943,  1225,   940,  1443,  1444,
    1786,  1445,  1446,  1447,  1794,  1795,  1464,  1465,  1919,  1920,
    1996,  1997,  2068,  2111,  1921,  1994,  2001,  2002,  2075,  2003,
    2004,  2074,  2072,   424
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1864
static const yytype_int16 yypact[] =
{
    1585,   340, -1864,    65, 17129,   261,  -143,    55,    55, 17129,
     309,   482, -1864, 17129,   511,   439,   363, -1864, 14438, 17129,
   -1864, -1864, -1864, -1864, -1864,   779, -1864, 17428,   961,   172,
     649,    33,   101,   723,  1247,   702,   376, 12943, 12644,   596,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864,   749,   613, -1864,
   -1864, 17129, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864,   481,   464, -1864, -1864,
   -1864,  4370, 17129, -1864,   657,   657, -1864, 17129,  1038,    -6,
   -1864,   704,   261,   962,   585,   515, -1864, -1864, -1864, -1864,
     798, -1864,   603,   704,  1842,  1842,  1585,  1585,  1842, -1864,
   -1864,   802, -1864, 17129,   790, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864,   704,   704, -1864,   706, -1864, -1864,   704,   -10,
     384,   720, -1864,   661,   746,   670, -1864, -1864, -1864,   767,
     776,   400,  1198,   973,  1038, 15634, 17129, 17129, -1864,   612,
     797,  1097,   861, -1864,    67, -1864, -1864,  -135, -1864, -1864,
     711, 17129,   728, -1864, -1864, 17129, -1864, -1864,   858,   862,
     877,   881, 17129, 17129,   859,   859, -1864,   860, -1864, -1864,
     914,   974, 17129, 17129, 17129, 17129, 17129, 17129, 17129, 17129,
     978,   888, 17129,   909,   909,   909,   909, 17129,   909,   909,
     909, 17129,   909,   944, -1864, -1864, -1864,   996, 17129, 17129,
   17129,   953,  1080,  1085,  1088,   959,   986,  1048,   930, -1864,
     968, -1864, -1864,  1178,   474,   474,   474,   988, -1864,  1014,
   15933, 17129,  1298,  1298,  1298,  1307,  1138,  1140,  1145, -1864,
   -1864, -1864, -1864, -1864,  1149,  1151,  1312, -1864, -1864, -1864,
    1165,  1165,  1165,  1165,  1165, -1864,  1186, -1864,  1189,  1238,
   17129,  1191,  1194,  1196,  1201,  1202,  1204,  1205,  1206,  1209,
    1210,  1211,  3320,  5070,  9800,  9800,  1212,  1213,  1217, -1864,
    9800,  1298,   518,   697,    88,  7469,  1218,  1219,  5070, -1864,
   -1864,     2, 16232,  1208, -1864,  1445, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, 17129, -1864, -1864, -1864, 11986, -1864, -1864,
   -1864,  1061, -1864,  1055, -1864, -1864,  1052, -1864, -1864,  1235,
    1240,  1242,  1073, -1864, -1864, -1864, -1864, -1864, -1864,  1298,
    1298,   -57, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864,   418,   941, -1864,  1131, -1864,
     940,  1326,  1322, -1864,  1076, -1864, 17129, -1864, -1864,  1095,
   -1864,  4370, -1864, -1864, 17129,  1215, 17129, 17129, 17129, 17129,
   17129, 17129, 17129, 17129, 17129, -1864,  1169,  7802, 14438,  1136,
    1309,  1310, -1864, -1864,  1311,  5770,   790,  1316,  1321,   944,
   -1864, -1864, -1864, -1864, -1864, -1864,   100,  1198,   100,  1132,
   13242,   632,  1341,  1342,  1344,   -27,  1038, -1864,   829,   671,
    1060,   787,  1281,   772, 17129, -1864,    29,  1195, 17129,  1097,
    1156, -1864, -1864,  1290, -1864, -1864,   972,   859,   859,   859,
     859,  1225,  1292,  1289, 17727, 17129, 17129,   859, 17129,  1300,
    1301,  1303,  1304,   704,   788, -1864, -1864,   909,  1248, 17129,
   17129, 17129, 17129,   944,  1376, 17129, 17129, 17129, 17129, -1864,
   17129, 17129, 17129, -1864, 17129, -1864, -1864, -1864, 17129,    72,
   -1864, -1864,    53,  1186, 17129,  5070, 17129,  1313,  1315, -1864,
     431, -1864, -1864, -1864,  1317,  1318, -1864, -1864, -1864, -1864,
   -1864,  1446, -1864,  1319, -1864, -1864, -1864,  1325,  1327,   853,
   17129, -1864, -1864, -1864,  1336,  1337,  1340,  1343,  9800, -1864,
   -1864,  1332,  1332,  1332,    42,  1181,  5070, -1864,  1345,   -22,
   -1864,  1349, -1864,  1168, -1864, -1864, -1864,  5070,  5070,  1472,
    1347, -1864, -1864, -1864, -1864, -1864,   121, -1864,  1436,  1403,
   -1864,  9800,  9800,  9800,  1279,  1364,   762,  1293,  1526,  9800,
     799,  9800,  3320,  1361,  1357,  1362,   -24,  1045,   108, -1864,
     -51,  1445,  3320,  1036,  1036,  9800,  9800,  9800,  1216, -1864,
     779,  1375,   779,  1375, -1864, -1864,  1298,  5070, 11360, -1864,
     618,  9800,  9800,  1445,   218,  2792, 17129, -1864,  1014,  5070,
   17129, -1864, -1864,  5070,  3670,  9800,  9800,  9800,  9800,  1377,
    1378,  1074,  1074,  3670,  1197,  9800,  9800,  9800,  9800,  9800,
    9800,  9800,  9800,  9800,  9800,  9800,  9800,  9800,  9800,  9800,
    9800,  9800,  9800,  9800,  9800,  9800,  9800,  9800,  9800,    22,
    1380,  1350,  4370,  1382,  6103,  9800, -1864, -1864, 13541, 15036,
    1267,  1361, -1864,   449, -1864, -1864,  1476,  1482, -1864, -1864,
   -1864,   894,   779,  1038, -1864,  1388,  1452, -1864, 17129,  1391,
    1391,  1391,  1391, -1864, -1864,  1220, -1864, -1864,   161, -1864,
   -1864, 13538,   144, -1864, -1864,    54,  1324, -1864, -1864, -1864,
    3320, -1864,   194, -1864, -1864,  1065,   944, -1864, -1864, -1864,
   -1864,   -26, -1864, -1864, -1864,    25, -1864,  1215, 17129, -1864,
   -1864, -1864, -1864, -1864, -1864,   100,   100, -1864, -1864, -1864,
    1305,   829,  1286,  1297, -1864,  1473,  1405,  1097,  1097, -1864,
   -1864, -1864, -1864,  1097,  2334,  1060, -1864, -1864,   187,   601,
    1294,   854, -1864,  1469,    81,    81, 17129,   704,  1260,  1097,
     829,  1409,  2334,   972, -1864, -1864, 17129, 17129, 17129, 17129,
    1355,  1333, -1864,  1477, 17129,  1346,  1373,   707,  1334, 17129,
    1428, 16531, 16531, 16531, 16531,  1275, -1864, -1864,    64, 17129,
   17129,   944,   944,   944,   944, -1864, -1864,  1391,  1391,  1391,
    1391,   944,   944,   944, -1864, -1864, -1864, -1864,  1026, -1864,
   -1864, -1864,  1437,   968,   779,   779, -1864,  1597,   779,   779,
     779, -1864,   112,  1375,  1375, -1864, -1864, -1864, -1864, -1864,
    1327,  1325,  1335, -1864, -1864, -1864,   779,   779,   779,   779,
    1273, -1864, 12930,  1521,   511,   511,   511, -1864, -1864, -1864,
      42,  1136,  1437,  1186, 15933,  1014,  4720, 17129,  1437,  1306,
    1299, -1864, -1864, -1864, -1864, -1864, -1864, -1864,  1527, 17129,
   13538,   642, 13538, -1864,   -73, -1864,  1480, 17129,  1466,  9800,
    1308, -1864, -1864,  9800, 17129, -1864,  1500,   642, -1864,  9800,
   -1864,  1553,  8135,   197, -1864, -1864, -1864,  1083,  5070, 14737,
    3074, 13096,  2962,  1481,  1366,  1298,  1484,  1298,   853,   259,
    9800, -1864,   736,  9800, -1864,  1348, 10096,  1323,   224,  5070,
   -1864, 13840,  2389, -1864, -1864,  1328,   938, 18026, 18026, 18026,
      68,   -21, -1864, -1864,  1551,  1208, -1864,  1445, -1864, -1864,
   -1864,  1358,  5070, -1864, 12301, -1864, -1864, -1864,  8468,  8468,
   -1864, -1864,  5070,  5070, -1864,  1186, -1864, 13538,  1130,  1130,
    1130,  1130,  1130,  1130,  1130,  1130,  1130,  1130,  1036,  1036,
    1036,  1216,   951,   951,   951,   951,  1531,  1531,  1531,  1531,
    1531, -1864,  1558,  1338, -1864, -1864, -1864,  9800,  1498,  9800,
   13538,  1504,    69,  1339,  1507,  1509,  1510, -1864,    70, -1864,
    1351, -1864, -1864, 17129,  1183,  1599, -1864, -1864, -1864, -1864,
     282, -1864,  1391,  2226, -1864, -1864, -1864, -1864, 17129, -1864,
   -1864, -1864,  9800, -1864, -1864, -1864, -1864, -1864, -1864,  8468,
   -1864,  1419,   100,  1578,  1429,  1578, -1864,   -11,   -11,  1298,
    1431, 17129, 17129,  1097,   213, -1864, -1864, -1864, -1864, -1864,
   17129, 17129, -1864, -1864, 17129,  1600,  1199, -1864, 17129, 17129,
   16830, 14438, -1864,  1581,  1379,  1581,   704,  1584, -1864, -1864,
    1440,  1097, -1864, -1864,  1524,  1524,  1524,  1524, 17129,   805,
   -1864, -1864, -1864,  1679,  1430, 17129,  1468, 15335,  1607, -1864,
    1381, 17129,  1524, 16531, -1864,  1532,  1363,  2334,  1535,  1536,
    1538,   612, -1864,  1384, -1864, -1864,  1447,  1391,   944, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864,  1540, -1864,  1543, -1864,  1545,   235,  1546,  1374, -1864,
     236, -1864, -1864, -1864, -1864,  1438,  1207,  1550,  1390,  1552,
    1567,  1568,  9800, -1864, -1864, -1864,  1570, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,  1437, -1864,
    2334,  2334,  9800, -1864,   571,  1571,  9800,  1574,  1575, -1864,
    1396,  8801, 13538,  -196, -1864,  1398, -1864,    30, -1864,  1402,
    1648,  1480,  1579,  1591,  1480, -1864,   247, -1864, -1864, -1864,
    1582,  1583,  1587,  1445,  9800,  9800,  9800,  9800, -1864,  1459,
   -1864, -1864, -1864, -1864,  9800, 10729, -1864,  1444, 13538, -1864,
    9800,  9800, -1864,  9800,  1445, 18026, 18026,  2389,  1361,  1589,
    1590,  1592,   963,   511,  2792, -1864, -1864, -1864,  1042,  1691,
   -1864,  2792,  1693,  1699, 17129, -1864,  1602, -1864, -1864, -1864,
   14438, 17129, -1864,  1673,  1670,  1358,  1298,   254,   255,  1406,
    1427, -1864, -1864,  1675,  1606,  1680,  1608, -1864,  1609, -1864,
   14139,  9800, 17129, -1864, -1864, -1864, -1864, -1864, -1864,  1610,
    1439,  1441, -1864, -1864,  1515, -1864,   805, -1864,  1516, -1864,
   -1864, -1864,  1774,  1298, -1864, -1864, -1864, -1864, -1864,   944,
     944,   944, -1864, -1864, -1864,  -107, -1864, 17129, -1864, -1864,
   -1864,  -112,  2024, -1864,  1464, -1864,  1298, -1864,  1682,    61,
    1298, -1864, -1864, -1864,  1525, -1864, -1864, -1864, -1864, -1864,
    1517, 17129,  1011, -1864, -1864, 14438, 17129,   266, -1864, -1864,
   -1864, -1864,   -71, 17129, -1864,   612,  1623,  1528,  1624, 10425,
   17129, -1864,  1562,  1559,  1569,  1632, 17129, 17129, -1864, -1864,
   -1864, -1864, -1864, -1864,   779, -1864,   779, -1864,   779,  1327,
   -1864, -1864, -1864,   779, -1864, -1864, -1864, -1864, 17129,  1631,
    1633, 13230, -1864, -1864, -1864, -1864, -1864, -1864,  6436,  1480,
    1555,  9800, 13538,   287, -1864,  1483, -1864, -1864,   813,  9800,
    1480, 17129, -1864,  1666,  1668,  1638,  9800,  1480,    40,  9800,
   -1864,  1648, -1864,  1529,  1639, -1864,  1643, -1864,  8135,  8135,
    8468,  8468, 10412, 13828, 12632,  3047, -1864, -1864,  9800, -1864,
   14426, -1864, -1864, -1864, -1864,   288, -1864, -1864, -1864,    14,
     938,  1744,  2792,   488,  2792, -1864, -1864,  1647, 17129,   146,
   -1864, 17129,  5070, -1864, -1864, -1864, -1864,  5070,  5070, 17129,
   -1864,  1718,   -12, -1864, -1864,  1649,  1650, -1864, -1864,  2334,
   17129, -1864, -1864, -1864,  1487,  1560, -1864, -1864, -1864,  1576,
     673, -1864,  1577,  1586,   704, -1864, -1864, -1864, -1864,   599,
   -1864,  1298,  1488,   421,  1298,  1669,  1669,  1491, -1864,  1604,
    1844, 17129, -1864,  1501, -1864,  1421,   505, -1864,  1011, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, 15335,  1580,
    1848,  1681, 17129,  1776, -1864,  1617,   261,   309,   482,  1619,
   14438,  4020,  9134,  5070,  1544, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864,  1542, -1864, -1864, -1864, -1864,  1512,  2334,  2299,  1855,
    2299,  1636, -1864,  1519,  1533,  1694, -1864,  1695,  1698, -1864,
    1703,   300, -1864,  1530, -1864, -1864, -1864,  1692, 13538,  1534,
   -1864,   367, -1864,  1537,  1704, -1864, -1864, -1864,  8801, 17129,
    1611,  1614,  1615,  1618, -1864, -1864,  1714, -1864, -1864, -1864,
   -1864, -1864,   644,  1715, -1864, -1864,   397,  1547, -1864, -1864,
   -1864,   541, -1864,  1711, -1864, -1864, -1864,   307,   324,   327,
    9800, -1864,  9800, -1864, -1864,  9800, -1864, -1864, -1864, 18026,
    2792, -1864,   704,  5070, -1864,   488, 17129,   331,  1548,  1437,
    1700,  1700,  1548,  9800, -1864, -1864, -1864,  5420, -1864, -1864,
   -1864, -1864,  1629,  1616, -1864,   368, -1864,  1783,  9800,   704,
     704, -1864,  1766, -1864,  9800, -1864,   599, -1864, -1864, -1864,
   -1864,   371, -1864,  1298,  1815,   333, 17129,    81,    81,  1298,
    1298, -1864, -1864, 17129, -1864, -1864,  1726,  1727, -1864,   415,
   -1864,   334,    90,  1660,  4370, 17129, -1864,  1728, -1864,  1729,
   -1864, -1864,  1437,  5070, -1864,   747, 11676,   293, -1864, 11689,
    5070, -1864, -1864,  1730, 10741, -1864,  1291,   636,  1640,   971,
    1798, -1864, -1864, -1864, -1864, -1864, 17129, 17129,  9800,  9800,
    9800, -1864,  9467, -1864, -1864, -1864, -1864,  1802,   634,  1804,
    1805, -1864, -1864, 17129, -1864, -1864,  9800,  1646,  1653,  1742,
     672, -1864, -1864, -1864, 14725, 15024, 15328, -1864, -1864, -1864,
    1437, -1864,   338, -1864,  1273,  6769,  1593,  1588,  1594,  1595,
   -1864, -1864, -1864,  1298, 17129, -1864, -1864, -1864, -1864,  2472,
    1641, -1864,  1596, -1864, -1864, -1864,  1817,  1751,  1662, 17129,
   -1864, -1864, -1864,  1598,  1706, -1864, -1864,   355, -1864,  1926,
    1581,  1581, -1864,  1655, -1864,   629,  1762, -1864, -1864,  1856,
    1860, -1864, 17129,  1684, -1864,  1603,  9800,   653,   312, -1864,
   -1864,  1621,  9800, -1864,   757, -1864, 11689,  1812,   225, 17129,
    1708,  1944, -1864, -1864, -1864, -1864,  1712,  1949, -1864,  -113,
     150,   971, -1864,  1620, -1864,  1651, -1864,  1612, 13538,   364,
   -1864,  1628, -1864, -1864,  1622, -1864, -1864,  1803, -1864, -1864,
   -1864,  1648, -1864,  1809,  1811, -1864,  1807, 17129,  1962,   648,
   -1864, -1864, -1864, -1864, -1864, -1864,  1778, -1864, -1864, -1864,
      13, -1864, -1864, -1864, 17129,  1837, -1864,  5070, -1864,   704,
    1298, -1864, -1864, 17129, -1864,  1911,  1911, 17129,   407, -1864,
   -1864, -1864, -1864, -1864, 17129,   442, 13538,  1797, -1864, 11057,
    1667, 11045, -1864,  1654, 10109,  1841,  1657, -1864,   443,  2334,
   17129,  1291, 17129,  1291,  1464, -1864,  1464,  1464,  1464, -1864,
     965,  1806, 11998, -1864,  9800, 17129, -1864,  9800, -1864, -1864,
   -1864, -1864,  1822, -1864, -1864, -1864,  1822, -1864,  1820, 17129,
    1962, -1864, -1864, -1864,  1829,  7119,  1644, -1864,  1652, -1864,
     704,  1810,   499,  1873, -1864, -1864, -1864,  1928,  1928, -1864,
   -1864,   629, -1864, -1864,  9800, -1864, 11057,  1857, -1864, -1864,
    1685, -1864,  5070,  1674,  1677, -1864, 11373, -1864, 17129, -1864,
   -1864, -1864, -1864, -1864, 17129, 17129, 17129, 17129, -1864, -1864,
   -1864,  5070,  1683, -1864, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864,  1962, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864,  1661,  1656,  1658,
   -1864, -1864, -1864, -1864,  1873,   972, -1864, -1864,   781,  1731,
    1936,  1815,  1815, -1864, 13538, -1864, 11057, -1864, 11057,   385,
    1696, -1864,  1689,  2334, -1864, -1864, -1864, -1864,   715, -1864,
   -1864, -1864, -1864, -1864, -1864,  1731,   929, -1864, -1864, -1864,
   -1864,  1257,  1735,  1736, -1864, -1864, -1864,  1686, -1864, -1864,
   17129, -1864, -1864, 12314, -1864, -1864,    78,    78,  1943, -1864,
    1945, -1864,  1838, -1864, 10109, -1864, -1864, -1864,  1880, -1864,
   -1864,  1976,   326, -1864, -1864,  1097, -1864, -1864, -1864, -1864,
   -1864,   494, -1864, -1864,  1097, -1864
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1864,  1142, -1864, -1864, -1864, -1864, -1864, -1038, -1864,  -141,
     -94, -1004, -1864, -1864,   775, -1864,    21, -1864,    26,   579,
   -1864,   873, -1864, -1864, -1864,   461, -1864,   684,     8,  1799,
   -1864, -1864,  -610,    16, -1864, -1864,  1814, -1864,  1554, -1864,
   -1864, -1864,  1556,  -391,   932,    66, -1864, -1864, -1864,   520,
     103, -1864,   -60, -1864,  -813,  1221,  -441, -1864, -1864, -1864,
    -632, -1864,  1989, -1864, -1864,    58, -1864, -1864, -1864,   916,
     470, -1864, -1864, -1864, -1864, -1864, -1864, -1617, -1864,   325,
   -1864, -1864, -1864, -1864, -1073,   -92,   -77,   -75,   -53, -1864,
     -20, -1864, -1864, -1864,   -34, -1864, -1864,  -210,  -418, -1864,
    -165,   -13, -1864, -1199,  -809, -1864,   299, -1478, -1864, -1357,
     -68, -1863, -1864,   594, -1864, -1864, -1864, -1864, -1864, -1864,
     192, -1864,   313, -1864,   193, -1864,   -74, -1864, -1864, -1864,
   -1864,   459,  -763, -1864, -1864, -1864, -1864, -1864, -1864,   180,
    -818,   182, -1864, -1864, -1864, -1864, -1864,  1601, -1864,   116,
    -432,   556,  -393,    31,    41, -1864,  -146, -1864,  1352, -1864,
    2071,  1915, -1864, -1864, -1864, -1864,   536, -1864,   147,  -793,
   -1864, -1864, -1097,   141,    71,  -737,   545,   547, -1864,  1627,
   -1864, -1864, -1864,  1372,  -681,   627,  -953, -1864,  -407,   633,
    1008,  -169, -1864, -1864,  1188,  -599,  -925,   812, -1864, -1864,
     419,   145, -1864,  1671, -1864, -1864,    46,   127, -1864,   807,
     136,  1051,   766,  -429,  1112,  1513, -1864,  -645, -1864,  -951,
    -931, -1864,  -713, -1864,  -257,  1442,  1158, -1864, -1864,  1203,
     420,   913, -1864, -1864,  -291, -1864, -1864,  1434, -1864,   563,
   -1864, -1864, -1864, -1864,  1435, -1864, -1864,  1433, -1864,  1385,
    -297,  -845,  1522,  -594,  -509, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864,   304, -1864, -1864, -1864, -1864, -1864, -1864,
      36, -1864,  -376, -1864,   952, -1864, -1864,  1410, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864,  -528,  -529,  -565, -1864,  -588,
   -1864, -1864, -1864, -1864, -1864,  1155, -1864,  2088, -1864,  1605,
     362, -1383, -1864,  1520, -1864, -1864, -1864,  1159, -1864,  1467,
   -1864,  1160,  -686,   561,  -705,  -220, -1864,  -299, -1864,  -275,
   -1864, -1864,  -241,  -308,    23, -1864,    -4, -1864, -1368,  -531,
      -8,  -170, -1864, -1864, -1864, -1864, -1864, -1864, -1864,  -579,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864, -1864,   348,
   -1864,   149, -1864, -1864, -1864, -1627, -1864,   354,   504, -1864,
   -1864, -1864, -1864,   687, -1864, -1864, -1864, -1864, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864, -1864, -1864,   341, -1864, -1864,
   -1864, -1864, -1864, -1864, -1864,  1508,  -864,   701, -1864,   508,
   -1864,   709, -1864, -1864,   231, -1169, -1864, -1864, -1864, -1864,
   -1864, -1831,   151, -1864, -1864, -1864, -1864, -1864, -1864,   148,
   -1864, -1864, -1864, -1864
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1131
static const yytype_int16 yytable[] =
{
     157,   583,   601,   441,   300,   166,   439,   722,    43,   171,
    1133,   495,   736,   884,   182,   157,    44,   191,   459,   492,
     986,    40,  1125,   157,   292,   584,    41,   931,  1367,  1053,
     926,    55,   312,   294,   301,   947,  1295,   470,   471,   617,
    1060,    56,  1593,   473,   936,  1622,    65,  1361,   883,   807,
     750,   217,   951,   228,   179,  1307,  1308,  1279,  1299,   587,
     172,   637,   641,   909,   312,   228,    45,   157,  1083,   994,
    1227,  1460,  1228,  1694,  1361,  1448,   769,   663,   487,  1158,
    1159,  1160,   753,  1242,   786,   907,  1224,   775,   225,   665,
     665,  -792,  1105,  1106,   497,   636,  2006,  1122,  1107,  1834,
    1336,   474,  1569,    46,  -264,   195,   196,   197,   198,   199,
     200,   867,   228,   665,  1453,   312,    54,  -748,  1622,  2058,
    2149,  2150,  2007,  -748,   162,   967,  1622,    66,  1162,  1163,
    1687,  1164,  1041,   536,   537,   538,   163,   540,   541,   542,
     855,   544,   604,   605,   606,    63,  1532,  1091,   226,  1529,
     173,   956,  1902,  1449,  1859,  1905,   669,   411,   157,  1100,
     514,  2151,  1533,   429,   312,  1189,  1654,   172,    14,  2073,
     499,  1974,  1530,  1454,  1860,  1534,    71,   -88,   -88,   -88,
     -88,   -88,   -88,   304,   305,   306,   500,   172,  1130,   157,
    1655,   649,    43,    43,    43,    43,    43,   393,  1094,  1042,
      44,    44,    44,    44,    44,    40,    40,    40,    40,    40,
      41,    41,    41,    41,    41,    55,    55,    55,    55,    55,
    1975,   489,   157,   157,   228,    56,    56,    56,    56,    56,
      65,    65,    65,    65,    65,  1544,  2110,   503,  1949,   716,
     717,   157,  -748,  -748,  -748,   217,  1084,   866,   157,   512,
      45,    45,    45,    45,    45,   977,   870,   475,   157,   157,
     157,   157,   157,   157,   525,   157,   909,   909,   157,   666,
    2058,  1079,   909,   539,    13,   229,  1226,   157,  -264,   818,
    1876,   654,   655,   957,   301,   550,   551,    46,    46,    46,
      46,    46,  1662,   718,    13,    14,   438,   598,   872,   959,
      54,    54,    54,    54,    54,   722,   602,   603,  1075,  1076,
    1077,    66,    66,    66,    66,    66,  1215,   227,  1812,  1081,
    -748,  1165,   477,  1092,  1483,  1194,   815,   914,  1301,    63,
      63,    63,    63,    63,   498,  1695,   620,   230,  1092,   912,
     787,   637,   753,   436,  1555,  1484,  1861,   868,   172,  1237,
     918,   918,  1279,   814,  2008,  1192,  1193,  2152,   845,  2009,
    2066,  1316,  1195,  1318,   807,   493,   156,  1679,   672,  1088,
    1243,  1825,  1249,  1090,  1092,   636,   770,  1461,  1556,   157,
    1466,   183,   997,  1001,  1545,   636,   849,   616,   167,   194,
    1398,  1959,  1014,  1896,  1097,  1098,   369,  1964,  1346,  1272,
     969,  1210,  1877,  -476,  2093,   669,   231,  1593,   369,   633,
    1413,  1417,   723,   826,   827,   828,   829,  1110,  1300,  1320,
    1322,   580,  1467,   839,   312,  1173,  1174,  1175,  1176,  1505,
    1506,   268,   171,   309,  1977,   219,  2159,   411,   220,   669,
     157,  1567,   157,   157,   157,   157,   743,   157,   745,   157,
     157,   159,   876,   877,   754,    13,    14,   958,  1169,  1170,
    1171,  1172,  1637,  1678,   201,   202,   203,   204,  1177,  1178,
    1179,  1111,  1112,   669,    70,  1775,   157,   393,  1826,   635,
    2026,  1835,  1801,  1975,   172,  1339,   968,  1340,  1341,  2036,
     157,   269,   669,  1082,   157,  1361,   917,   634,  1856,  1802,
     774,  1458,  1803,   636,  1682,  1108,  1813, -1130,  1846,  1858,
     836,   157,   838,  1925,   157,   172,   160,  1668,  1669,  1965,
    1555,  -796,   873,  1132,   425,   157,   157,   157,   157,   584,
    1942,   157,   157,   157,   157,  1085,   157,   157,   157,  1983,
     157,  1967,   270,  1089,   865,  1247,  1250,   584,  1836, -1130,
     871,  2096,   301,  2098,  1556,   466, -1130,  1285,  1286,  1287,
     268,  1288,  1289,   587,  1290,   669,   271,   979,  1264,   168,
    1278,   980,   909,  1273,  1180,  1634,   895,   172,  1080,    42,
    2160,   587,  2020,   753,  1414,  1418,  1646,  1857,   490,   491,
     205,    13,   719,  1653,    52,  1544,  1468,  1485,   584,  1129,
    1837,   765,  1875,  1089,  1089,   878,   601,   506,  1420,   272,
     273,   274,   275,   276,   511,  1568,  1213,  2023,  2037,   174,
     269,  1958,    13,    14,   519,   520,   521,   522,   523,   524,
     444,   526,   587,   175,   533,  1516,  1638,  1250,  1448,  1490,
    1327,   277,   963,   543,   966,  1838,  1493,  1435,  1839,  1776,
    2144,  1797,  1127,   206,   278,  1291,  1468,   207,  1840,  1218,
     279,   990,   993,  1953,   589,   280,   996,  1253,  1115,  2163,
     476,   270,   720,  1089,  2087,  1332,  1089,   208,   172,   669,
    1733,   445,  1729,   580,  1275,    14,  1432,  1733,  1274,  1116,
    1211,  -796,   650,  1798,  2128,   271,   201,   202,   203,   204,
    -798,   988,   281,   720,  1943,   282,   721,   223,   411,  -234,
    1052,  1305,  1191,  1984,  1058,   301,  1780,  1907,  1311,   172,
     209,  1309,  1310,   239,  1068,  1793,  1433,  1712,  1807,   590,
     302,  1998,  1713,   477,   157,  1408,   224,   721,   272,   273,
     274,   275,   276,   635,  1908,   684, -1130,   308,   393,   446,
     447,   448,   449,  1945,  1946,  1916,  2021,  1712,  1683,   635,
     310,   634,  1713,    42,    42,    42,    42,    42,   493,   635,
     277,  2040,  1705,  2042,   157,  1409,  -234,   634,    52,    52,
      52,    52,    52,  1706,   189,    13,   229,   634,  1688,   279,
     190,  2024,  2038,   450,   280,  1260,  1692,  1262,   584,   451,
     452,  1224,  1999, -1095,   453,  2000,   737,  1347,   739,   740,
     741,   742,   157,   744,   311,   746,   747, -1117,  1146, -1095,
    2117,  2118,   157,   157,   157,   157,    13,    14,  -234,  1357,
    1142,   281,   587,  1917,   282,   157,  1918,  1157,  1157,  1157,
    1157,   454,   781,  2164,   791,   157,   157,  1681,   426,  1685,
    1707,   303,  2119,  1714,  1619,   173,   813,  1477,  1401,  1357,
     817,  1377,  1652,  1829,  1481,  1656,  1482,  1378,   261,  1829,
    -798,   652,  1188,  -234,   303,  1886,  -234,   837,   288,  1887,
     840,  1147,   584,  1714,  1348,   206,  -234,   635,  1198,   207,
    2132,   851,   852,   853,   854,   669,   493,   857,   858,   859,
     860,   598,   861,   862,   863,   634,   864,   467,   468,   208,
     602,  1371,   443,  1219,   948,   941,   587,   942,   304,   305,
     306,  1429,  1430,  1640,   753,   157,   657,  1708,   973,  1342,
     792,   501,   502,  1229,  1850,  1851,   262,   263,   264,   265,
    1238,   304,   305,   306,   753,   584,   584,   442,   504,   505,
     793,  1405,   941,   458,   942,  1058,  1526,  1527,  1528,   460,
     461,  1368,  1641,   464,  1642,  1643,   195,   196,   197,   198,
     199,   200,   457,   557,   558,   559,   465,   182,   990,   587,
     587,   472,  1064,  1296,  1296,  1296,   545,   546,   560,  1065,
    1066,   266,   561,   562,   563,   326,   327,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   478,  1285,  1286,  1287,
     479,  1288,  1289,  -536,  1290,   821,   480,  1276,   988,   481,
     573,   574,   575,   725,   726,   201,   202,   203,   204,   729,
     730,   267,  1285,  1286,  1287,  1808,  1288,  1289,   482,  1290,
    1207,  1208,  1209,   808,   970,   795,   973,   483,   797,   798,
     799,   800,   801,   802,   528,  1753,   803,  1869,   821,  1323,
     486,  1247,  1247,  1539,   494,  1872,   809,  1869,  -958,   810,
     811,  1676,  -958,  -958,  1331,  -958,  -958,  -958,  -958,  -958,
    -958,  -958,  -958,  -958,  -958,  -958,   685,   584,   795,   788,
     789,   797,   798,   799,   800,   801,   802,  1344,  1345,   803,
    1072,  -958,  -958,  1818,  2135,  1291,  1349,   157,   228,  1281,
    1351,  1285,  1286,  1287,  1355,   157,   602,   182,  1290,   846,
     847,   587,   529,   530,   531,   532,   430,  1280,   496,   431,
    1291,   304,   305,   306,  1376,   432,  1504,   442,  1119,  1112,
    1096,  1142,   507,  1392,   765,   765,   508,   157,   885,  1157,
     886,   205,   887,   888,   889,   890,  2044,  1363,  2045,  2046,
    2047,   509,  2041,  1750,  2043,   510,   704,   705,   706,   707,
     708,   685,   513,  1525,  1010,  1011,   795,   796,  1126,   797,
     798,   799,   800,   801,   802,  1571,   516,   803,  1134,  1135,
    1136,  1137,  1372,  1373,  1374,  1375,  1542,  1281,   517,  1548,
    1549,  1152,  1656,   195,   196,   197,   198,   199,   200,   518,
    1397,  1167,  1168,   527,   206,  1280,  1690,  1691,   207,   654,
     655,  1818,   534,   674,   548,   765,   675,   676,   677,   678,
     679,   680,   681,   682,   304,   305,   306,   683,   208,  1005,
    1006,  1007,    15,  -190,   584,  1689,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,   552,   822,   553,   576,
     577,   578,   579,   554,   240,   685,   555,    26,  1251,  1252,
    -189,  1296,  1296,   990,    28,    29,  1324,  1325,   587,   556,
     990,   209,   588,   612,   613,   614,   615,   990,  1353,  1354,
    1497,  1223,   594,    31,   312,  1883,  1499,   993,  2048,  2049,
     822,   312,   241,  1133,   596,   242,  1889,  1890,  1762,  1765,
    -908,  1765,  -779,   988,  -781,  1863,  1058,   580,  1517,  -777,
     988,  2136,  2137,   607,  1752,   608,  1757,   988,   462,   463,
    1118,  1120,   584,   584,   609,   584,   696,   697,   698,   610,
     699,   700,   701,   702,   703,   704,   705,   706,   707,   708,
     243,   685,   244,  1531,  2126,  2127,   592,   593,   905,   906,
     616,   513,   245,   618,   619,   621,   587,   587,   622,   587,
     623,  1722,  1613,  1548,  1548,   624,   625,  1552,   626,   627,
     628,   182,   157,   629,   630,   631,   645,   646,   804,  1570,
    1560,   647,   661,   662,  -650,  1606,  1607,  -958,  1561,   673,
     710,   712,   301,   157,  1281,   711,  1616,  1744,  1617,   713,
    1618,  2079,  -717,   493,   714,  1620,   715,   727,   731,  1489,
     732,  1565,  1280,   735,  1623,   733,  1810,   700,   701,   702,
     703,   704,   705,   706,   707,   708,  1183,   748,   240,  1185,
    1186,  1187,   755,   757,   758,   759,   767,  1647,  1562,  1957,
     738,   768,   209,   783,   784,   785,   812,  1197,  1199,  1200,
    1201,   819,   816,   820,   830,   831,   833,   246,   247,   248,
     249,   250,   251,  1350,   841,   842,   241,   843,   844,   242,
     252,  1356,   856,   850,   881,  1563,   910,   874,   990,   875,
     990,   879,   880,   882,  1552,   921,  1868,  1623,  1564,   650,
     903,   652,   885,  1878,   886,  1623,   887,   888,   889,  1419,
     896,   897,   253,  1396,   898,   929,  1701,   899,   917,   937,
     938,  1711,   922,   913,   243,   254,   244,   916,   988,   945,
     988,   255,   954,   944,   256,   952,   245,   955,  1741,   675,
     676,   677,   678,   679,   680,   681,   682,  1732,   964,   368,
     683,  1008,  1009,  1843,  1043,  1059,  1044,  1046,  1062,  1852,
    1853,  1063,  1070,   665,  1736,  1073,  1560,  1099,   301,  1086,
    1078,  1969,  1101,  -174,  1561,  1102,   990,  1103,  1104,  1112,
    1121,  1128,  1131,  1140,   674,   -14,     1,   675,   676,   677,
     678,   679,   680,   681,   682,  1138,  1885,  1507,   683,  1139,
    1143,  1145,  1153,  1161,  1151,   674,   765,   765,   675,   676,
     677,   678,   679,   680,   681,   682,   179,   669,  1508,   683,
    1184,  1196,  1202,   674,  1562,  1206,   675,   676,   677,   678,
     679,   680,   681,   682,  1220,  1785,     2,   683,  1222,  1224,
    1231,   246,   247,   248,   249,   250,   251,  1240,  1221,     3,
       4,     5,     6,  1932,   252,   303,  1258,  1236,  1259,  1261,
    1303,  1563,     7,     8,     9,    10,   685,  1269,  1312,  1809,
    2039,    11,  1271,  1317,  1564,  1296,   990,  1284,  1313,  1319,
    2012,  -780,  1552,  -782,  -778,  1334,   253,  1326,  1321,  1336,
    1352,  1364,  1338,  1343,   584,  1369,  1830,  1831,  1147,  1380,
    1250,  1366,  1370,  1381,  1385,   255,  1393,  1399,   256,  1395,
    1402,  1403,  1400,  1404,  1406,  1410,   988,  1407,  1411,    12,
    1412,  1415,  1849,  1416,  -812,  1422,  1451,  1424,   587,  1854,
    2103,   885,   923,   886,   924,   887,   888,   889,   925,  1423,
     411,  1865,  1425,  1426,  1428,  1438,  1434,  -174,  1566,  1436,
    1437,  1456,  1458,  1463,  1462,  1606,  1469,  1470,    13,    14,
    1606,  1471,  1476,  1479,  1486,  1487,  1492,  1488,  1494,  1614,
    2014,  1495,  1623,  1897,  2013,  2099,  1498,  1501,  1502,  1509,
     393,  1510,  1511,  1513,  1514,  1518,  1521,  1523,  1519,  1911,
    1524,  1520,  1540,  1543,  2108,  1550,  1551,  1572,  1573,  1575,
    1608,  1885,  1609,  1885,  2131,  1611,  1624,  1610,  1625,  1635,
    1649,  1639,  1650,  1651,  1664,  1663,    15,    16,  1665,  1680,
    1933,  1686,  1693,  1702,  1698,  1699,    17,    18,   584,    19,
    1704,    20,    21,    22,    23,   157,    24,  1723,    25,  1703,
    1729,    26,    27,  1726,  1730,  2084,  1709,  1731,    28,    29,
    1733,  1738,  1737,  1742,  1739,  1710,  1743,  1760,  1865,  1745,
    1766,  1758,   587,  1761,    30,  1768,  1778,    31,   580,  1771,
    1772,  1769,  1606,  1773,  1800,   602,   643,   644,  1774,  1783,
    1777,  1787,   648,  1779,  1788,  1789,  1782,   658,  1790,  1791,
    1792,  1823,   683,  1827,  1824,  1832,  1796,  1776,  1844,  1569,
    1862,  1855,  1866,  1867,  1879,    32,     3,     4,     5,     6,
    1893,  1888,  1906,  1993,  1909,  1910,  1913,  1915,  1934,     7,
       8,     9,    10,  1914,  1935,  1937,  1927,  1936,    11,  1944,
     157,  1938,  1928,  1947,  1950,  2162,  1941,  1930,  1929,  1849,
    1960,  1951,  1748,  2019,  2165,  1952,  1966,  1940,  1970,  1971,
    2022,   666,  1972,  1954,  1973,  1606,  1985,  1980,  1988,  1981,
    1606,  1990,  1322,  1991,  1992,  1995,  1865,  2011,  1865,  2005,
    2016,  1987,  2025,  2030,  2028,  2034,  2035,  2070,  1606,   751,
    2051,  2064,  2067,  1999,  2085,  2083,  2088,   751,  2090,  2082,
    2055,  2095,  2097,  2100,  2112,  2071,  2101,  2125,  2056,  2113,
    2109,  2121,  2114,  2053,  2130,  2138,  2140,  2136,  2054,  2129,
    2137,  2142,  2155,  2060,  2157,    13,    14,  2158,  1384,  1734,
    1522,   485,  1606,  2061,  1335,  2116,  1109,   299,  2062,   557,
     558,   559,  1606,   776,   602,   484,  1358,   782,  1735,  1833,
    2104,  2105,  2106,  2107,   560,  2154,  2141,  2139,   561,   562,
     563,   326,   327,   564,   565,   566,   567,   568,   569,   570,
     571,   572,  2134,  1882,  2115,  2148,  1962,  1963,  1870,  1767,
    2156,  1979,  1978,    15,    16,  1700,   573,   574,   575,   165,
     428,   780,  1728,    17,    18,  1069,    19,  2018,  1724,  2092,
    2015,  1725,  1606,   766,  1606,  1061,  1667,  1333,    26,    27,
    1491,  1666,  1214,  1302,  1811,    28,    29,   734,  1500,  1244,
     902,   995,   915,  1814,  1212,  1427,  1013,  1016,  1015,  1926,
    1071,    30,  1045,  1263,    31,   293,  2146,   974,   920,  1606,
    1904,  1266,  1267,  2063,  1903,  1781,  1645,  1912,   950,  1633,
    1606,  2055,  1989,   930,   932,   932,  1784,  2069,     0,  2056,
    1636,   930,  2076,   932,  2053,  1536,  1537,   869,     0,  2054,
       0,     0,    32,     0,  2060,     0,     0,   960,   961,   962,
       0,     0,     0,     0,  2061,     0,     0,     0,     0,  2062,
       0,     0,     0,   976,   751,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1004,  1004,  1004,
    1004,  1939,     0,     0,     0,     0,     0,  1017,  1018,  1019,
    1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,
    1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,
    1040,   557,   558,   559,     0,     0,  1050,  1050,     0,     0,
       0,     0,     0,     0,     0,     0,   560,     0,     0,     0,
     561,   562,   563,   326,   327,   564,   565,   566,   567,   568,
     569,   570,   571,   572,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   573,   574,
     575,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2010,     0,     0,     0,
       0,     0,     0,     0,   557,   558,   559,     0,     0,     0,
       0,     0,     0,     0,     0,   576,   577,   578,   579,   560,
       0,     0,     0,   561,   562,   563,   326,   327,   564,   565,
     566,   567,   568,   569,   570,   571,   572,     0,     0,   557,
     558,   559,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   573,   574,   575,   560,     0,     0,     0,   561,   562,
     563,   326,   327,   564,   565,   566,   567,   568,   569,   570,
     571,   572,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   573,   574,   575,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
       0,  1328,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,     0,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,   172,   176,   981,   177,   178,
       0,  1232,     0,     0,     0,   930,     0,     0,     0,    85,
       0,   932,    86,     0,   751,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,  1265,     0,    92,  1268,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,     0,    98,    99,   576,   577,   578,
     579,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     751,   751,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,     0,   115,     0,   116,     0,     0,     0,     0,
       0,   117,    13,  1277,     0,   118,     0,     0,     0,  1050,
       0,  1050,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -227,  1763,     0,     0,     0,     0,     0,     0,
     576,   577,   578,   579,     0,     0,     0,     0,     0,     0,
    -227,     0,     0,     0,   751,  -227,  -227,     0,     0,   119,
     120,   751,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,   576,   577,   578,   579,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,  -227,     0,  -227,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,  1278,     0,     0,
     145,   146,   147,   148,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,     0,     0,     0,     0,
       0,  -227,  -227,  -227,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,   902,     0,  -227,     0,  -227,     0,
       0,     0,     0,     0,     0,  -227,  -227,     0,     0,     0,
       0,   983,     0,     0,  1431,     0,  -227,     0,   932,  -227,
       0,     0,     0,  1442,  -227,     0,     0,     0,     0,  -227,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1472,  1473,  1474,  1475,
       0,     0,     0,     0,     0,     0,   751,     0,     0,     0,
       0,     0,  1480,   751,     0,   751,     0,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,     0,    80,     0,
       0,  -227,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1050,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,   176,
     981,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,     0,   102,
       0,   103,   104,   105,   106,   107,   108,   109,     0,   110,
       0,   111,   112,   113,   114,     0,   115,     0,   116,     0,
    1628,     0,     0,  1442,   117,     0,   982,     0,   118,     0,
       0,  1232,     0,     0,     0,     0,     0,     0,   930,     0,
       0,   930,     0,     0,     0,     0,     0,     0,     0,     0,
     751,   751,   751,   751,     0,     0,     0,     0,     0,     0,
     751,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,   122,   123,     0,     0,     0,     0,
       0,     0,   124,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,     0,     0,
       0,     0,     0,     0,   135,     0,     0,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,     0,   142,  1256,     0,     0,   143,   144,     0,     0,
       0,     0,     0,   145,   146,   147,   148,     0,   149,     0,
     150,     0,     0,     0,     0,   151,     0,   685,     0,     0,
       0,     0,     0,     0,  1756,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
     153,     0,     0,     0,     0,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   983,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   686,   687,   688,   689,   690,
    1442,     0,     0,   691,   692,   693,   694,   695,   696,   697,
     698,     0,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,   685,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1804,     0,  1805,     0,     0,  1806,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   685,
       0,     0,     0,     0,     0,   902,     0,     0,     0,   930,
       0,     0,  1674,     0,     0,     0,     0,     0,     0,     0,
     930,     0,     0,     0,     0,     0,   930,     0,     0,     0,
     686,   687,   688,   689,   690,     0,     0,     0,   691,   692,
     693,   694,   695,   696,   697,   698,     0,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,   686,   687,   688,
     689,   690,     0,     0,     0,   691,   692,   693,   694,   695,
     696,   697,   698,     0,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,     0,     0,     0,     0,     0,     0,
    1898,  1628,  1628,     0,  1628,     0,     0,     0,     0,     0,
       0,  1257,     0,     0,     0,     0,     0,     0,   930,     0,
       0,     0,     0,   312,     0,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,   930,   324,   325,
       0,     0,    78,    79,     0,     0,    80,   326,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,   328,   329,   330,   331,   332,   333,
     334,     0,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,   335,    84,     0,     0,   172,   176,  1956,   177,
     178,     0,     0,     0,  1961,     0,  1675,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,  1254,     0,    92,   336,     0,     0,     0,
     337,     0,     0,    93,   338,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   339,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
       0,   345,   346,   100,   101,   347,   348,   102,   349,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   350,   111,
     112,   113,   114,     0,   115,   351,   116,     0,     0,     0,
       0,     0,   117,    13,   632,     0,   118,   353,     0,     0,
       0,     0,     0,     0,     0,     0,  1898,     0,     0,  1628,
       0,     0,     0,   354,   355,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,     0,     0,   930,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,  2094,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,   633,     0,
       0,   361,   362,   363,   364,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,   365,     0,     0,
       0,   366,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,   312,   369,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,   324,   325,
       0,     0,    78,    79,     0,     0,    80,   326,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,   328,   329,   330,   331,   332,   333,
     334,     0,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,   335,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,   336,     0,     0,     0,
     337,     0,     0,    93,   338,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   339,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
       0,   345,   346,   100,   101,   347,   348,   102,   349,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   350,   111,
     112,   113,   114,     0,   115,   351,   116,     0,     0,     0,
       0,     0,   117,     0,   352,     0,   118,   353,     0,   998,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   999,
    1000,     0,     0,   354,   355,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   361,   362,   363,   364,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,   365,     0,     0,
       0,   366,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,   312,   369,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,   324,   325,
       0,     0,    78,    79,     0,     0,    80,   326,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,   328,   329,   330,   331,   332,   333,
     334,     0,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,   335,    84,     0,     0,   172,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,   336,     0,     0,     0,
     337,     0,     0,    93,   338,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   339,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
       0,   345,   346,   100,   101,   347,   348,   102,   349,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   350,   111,
     112,   113,   114,     0,   115,   351,   116,     0,     0,     0,
       0,     0,   117,    13,   632,     0,   118,   353,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,   355,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,  1749,   144,     0,     0,     0,     0,
       0,   361,   362,   363,   364,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,   365,     0,     0,
       0,   366,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,   312,   369,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,   324,   325,
       0,     0,    78,    79,     0,     0,    80,   326,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,   328,   329,   330,   331,   332,   333,
     334,     0,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,   335,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,   336,     0,     0,     0,
     337,     0,     0,    93,   338,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   339,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
       0,   345,   346,   100,   101,   347,   348,   102,   349,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   350,   111,
     112,   113,   114,     0,   115,   351,   116,     0,     0,     0,
       0,     0,   117,     0,   352,     0,   118,   353,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,   355,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,     0,   359,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   361,   362,   363,   364,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,   365,     0,     0,
       0,   366,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,   312,   369,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,   324,   325,
       0,     0,    78,    79,     0,     0,    80,   326,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,   328,   329,   330,   331,   332,   333,
     334,     0,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,   335,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,   336,     0,     0,     0,
     337,     0,     0,    93,   338,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   339,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
       0,   345,   346,   100,   101,   347,   348,   102,   349,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   350,   111,
     112,   113,   114,     0,   115,   351,   116,     0,     0,     0,
       0,     0,   117,     0,   352,     0,   118,   353,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,   355,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,  1216,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   361,   362,   363,   364,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,   365,     0,     0,
       0,   366,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,   312,   369,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,   324,   325,
       0,     0,    78,    79,     0,     0,    80,   326,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,   328,   329,   330,   331,   332,   333,
     334,     0,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,   335,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,   336,     0,     0,     0,
     337,     0,     0,    93,   338,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   339,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
       0,   345,   346,   100,   101,   347,   348,   102,   349,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   350,   111,
     112,   113,   114,     0,   115,   351,   116,     0,     0,     0,
       0,     0,   117,     0,   352,     0,   118,   353,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,   355,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   361,   362,   363,   364,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,   365,     0,     0,
       0,   366,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,   312,   369,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,   324,   325,
       0,     0,    78,    79,     0,     0,    80,   326,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,   328,   329,   330,   331,   332,   333,
     334,     0,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,   335,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
     337,     0,     0,    93,   338,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   339,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
       0,   345,   346,   100,   101,   347,   348,   102,   349,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   350,   111,
     112,   113,   114,     0,   115,   351,   116,     0,     0,     0,
       0,     0,   117,     0,   642,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1815,     0,     0,
       0,     0,     0,   354,   355,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   361,   362,   363,   364,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,   365,     0,     0,
       0,   366,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,     0,     0,     0,
       0,  1816,     0,     0,     0,     0,     0,     0,  1817,     0,
       0,     0,     0,   312,   369,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,   324,   325,
       0,     0,    78,    79,     0,     0,    80,   326,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,   328,   329,   330,   331,   332,   333,
     334,     0,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,   335,    84,     0,     0,   172,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
     337,     0,     0,    93,   338,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   339,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
       0,   345,   346,   100,   101,   347,   348,   102,   349,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   350,   111,
     112,   113,   114,     0,   115,   351,   116,     0,     0,     0,
       0,     0,   117,     0,   760,   761,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,   355,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   361,   362,   363,   364,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,   365,     0,     0,
       0,   366,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,   312,     0,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,     0,
       0,   324,   325,     0,   369,    78,    79,     0,     0,    80,
     326,   327,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,   328,   329,   330,
     331,   332,   333,   334,     0,    83,     0,     0,   284,   285,
     286,     0,     0,     0,     0,   335,    84,     0,     0,     0,
     176,     0,   177,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,   337,     0,     0,    93,   338,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,   339,    98,
      99,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,   343,   344,     0,   345,   346,   100,   101,   347,   348,
     102,   349,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   350,   111,   112,   113,   114,     0,   115,   351,   116,
       0,     0,     0,     0,     0,   117,     0,   642,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1047,     0,     0,   354,   355,     0,     0,
       0,   356,   357,   358,     0,     0,     0,     0,     0,  1048,
       0,     0,     0,   360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,  1049,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   361,   362,   363,   364,     0,   149,
       0,   150,     0,     0,     0,     0,   151,     0,     0,     0,
     365,     0,     0,     0,   366,   367,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,   312,
       0,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,     0,     0,   324,   325,     0,   369,    78,    79,
       0,     0,    80,   326,   327,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,    82,     0,     0,
     328,   329,   330,   331,   332,   333,   334,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,  1627,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,   938,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,   117,     0,
     642,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,   356,   357,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,   124,     0,     0,   125,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
       0,   134,     0,     0,     0,     0,     0,     0,   135,     0,
       0,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,     0,   142,     0,     0,     0,
     143,   144,     0,     0,     0,     0,     0,   361,   362,   363,
     364,     0,   149,     0,   150,     0,     0,     0,     0,   151,
       0,     0,     0,   365,     0,     0,     0,   366,   367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   152,   153,     0,     0,     0,     0,   154,
     155,     0,   312,     0,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,   324,   325,     0,
     369,    78,    79,     0,     0,    80,   326,   327,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   328,   329,   330,   331,   332,   333,   334,
       0,    83,     0,     0,   284,   285,   286,     0,     0,     0,
       0,   335,    84,     0,     0,     0,   176,     0,   177,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,   337,
       0,     0,    93,   338,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,   339,    98,    99,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   342,   343,   344,     0,
     345,   346,   100,   101,   347,   348,   102,   349,   103,   104,
     105,   106,   107,   108,   109,     0,   110,   350,   111,   112,
     113,   114,     0,   115,   351,   116,     0,     0,     0,     0,
       0,   117,     0,   642,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,   355,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   360,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     361,   362,   363,   364,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   365,     0,     0,     0,
     366,   367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,     0,     0,     0,     0,
    1816,     0,     0,     0,     0,     0,     0,  1817,     0,     0,
       0,     0,   312,   369,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,   324,   325,     0,
       0,    78,    79,     0,     0,    80,   326,   327,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   328,   329,   330,   331,   332,   333,   334,
       0,    83,     0,     0,   284,   285,   286,     0,     0,     0,
       0,   335,    84,     0,     0,     0,   176,     0,   177,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,   337,
       0,     0,    93,   338,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,   339,    98,    99,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   342,   343,   344,     0,
     345,   346,   100,   101,   347,   348,   102,   349,   103,   104,
     105,   106,   107,   108,   109,     0,   110,   350,   111,   112,
     113,   114,     0,   115,   351,   116,     0,     0,     0,     0,
       0,   117,     0,   642,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,   355,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   360,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     361,   362,   363,   364,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   365,     0,     0,     0,
     366,   367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,     0,     0,     0,     0,
    2077,     0,     0,     0,     0,     0,     0,  2078,     0,     0,
       0,     0,   312,   369,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,   324,   325,     0,
       0,    78,    79,     0,     0,    80,   326,   327,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   328,   329,   330,   331,   332,   333,   334,
       0,    83,     0,     0,   284,   285,   286,     0,     0,     0,
       0,   335,    84,     0,     0,     0,   176,     0,   177,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,   337,
       0,     0,    93,   338,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,   339,    98,    99,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   342,   343,   344,     0,
     345,   346,   100,   101,   347,   348,   102,   349,   103,   104,
     105,   106,   107,   108,   109,     0,   110,   350,   111,   112,
     113,   114,     0,   115,   351,   116,     0,     0,     0,     0,
       0,   117,     0,   642,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,   355,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   360,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     361,   362,   363,   364,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   365,   657,     0,     0,
     366,   367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,   312,     0,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
     324,   325,     0,   369,    78,    79,     0,     0,    80,   326,
     327,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    82,     0,     0,   328,   329,   330,   331,
     332,   333,   334,     0,    83,     0,     0,   284,   285,   286,
       0,     0,     0,     0,   335,    84,     0,     0,     0,   176,
       0,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,   337,     0,     0,    93,   338,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,   339,    98,    99,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
     343,   344,     0,   345,   346,   100,   101,   347,   348,   102,
     349,   103,   104,   105,   106,   107,   108,   109,     0,   110,
     350,   111,   112,   113,   114,     0,   115,   351,   116,     0,
       0,     0,     0,     0,   117,     0,   642,   749,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   354,   355,     0,     0,     0,
     356,   357,   358,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   360,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,   122,   123,     0,     0,     0,     0,
       0,     0,   124,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,     0,     0,
       0,     0,     0,     0,   135,     0,     0,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,     0,   142,     0,     0,     0,   143,   144,     0,     0,
       0,     0,     0,   361,   362,   363,   364,     0,   149,     0,
     150,     0,     0,     0,     0,   151,     0,     0,     0,   365,
       0,     0,     0,   366,   367,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
     153,     0,     0,     0,     0,   154,   155,     0,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,   369,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,    83,     0,     0,
     284,   285,   286,     0,     0,     0,     0,   335,    84,     0,
       0,     0,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,   337,     0,     0,    93,   338,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     339,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   343,   344,     0,   345,   346,   100,   101,
     347,   348,   102,   349,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   350,   111,   112,   113,   114,     0,   115,
     351,   116,     0,     0,     0,     0,     0,   117,     0,   642,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,  1245,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,   312,     0,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,     0,   324,   325,     0,   369,
      78,    79,     0,     0,    80,   326,   327,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,   328,   329,   330,   331,   332,   333,   334,     0,
      83,     0,     0,   284,   285,   286,     0,     0,     0,     0,
     335,    84,     0,     0,   172,   176,     0,   177,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,   337,     0,
       0,    93,   338,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,   339,    98,    99,     0,     0,     0,     0,
       0,     0,     0,   340,   341,   342,   343,   344,     0,   345,
     346,   100,   101,   347,   348,   102,   349,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   350,   111,   112,   113,
     114,     0,   115,   351,   116,     0,     0,     0,     0,     0,
     117,     0,   760,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   354,   355,     0,     0,     0,   356,   357,   358,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   360,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   361,
     362,   363,   364,     0,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,   365,     0,     0,     0,   366,
     367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,   312,     0,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,     0,     0,   324,
     325,     0,   369,    78,    79,     0,     0,    80,   326,   327,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    82,     0,     0,   328,   329,   330,   331,   332,
     333,   334,     0,    83,     0,     0,   284,   285,   286,     0,
       0,     0,     0,   335,    84,     0,     0,     0,   176,     0,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,  1440,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,   337,     0,     0,    93,   338,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,   339,    98,    99,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   342,   343,
     344,     0,   345,   346,   100,   101,   347,   348,   102,   349,
     103,   104,   105,   106,   107,   108,   109,     0,   110,   350,
     111,   112,   113,   114,     0,   115,   351,   116,     0,     0,
       0,     0,     0,   117,     0,   642,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   354,   355,     0,     0,     0,   356,
     357,   358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   360,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,  1441,   134,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
       0,   142,     0,     0,     0,   143,   144,     0,     0,     0,
       0,     0,   361,   362,   363,   364,     0,   149,     0,   150,
       0,     0,     0,     0,   151,     0,     0,     0,   365,     0,
       0,     0,   366,   367,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   152,   153,
       0,     0,     0,     0,   154,   155,     0,   312,     0,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,   369,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,    83,     0,     0,   284,
     285,   286,     0,     0,     0,     0,   335,    84,     0,     0,
       0,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,   337,     0,     0,    93,   338,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   339,
      98,    99,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   343,   344,     0,   345,   346,   100,   101,   347,
     348,   102,   349,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   350,   111,   112,   113,   114,     0,   115,   351,
     116,     0,     0,     0,     0,     0,   117,     0,   642,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,   355,     0,
       0,     0,   356,   357,   358,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,  1753,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
     312,     0,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,     0,   324,   325,     0,   369,    78,
      79,     0,     0,    80,   326,   327,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,    82,     0,
       0,   328,   329,   330,   331,   332,   333,   334,     0,    83,
       0,     0,   284,   285,   286,     0,     0,     0,     0,   335,
      84,     0,     0,     0,   176,     0,   177,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,   337,     0,     0,
      93,   338,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,   339,    98,    99,     0,     0,     0,     0,     0,
       0,     0,   340,   341,   342,   343,   344,  1627,   345,   346,
     100,   101,   347,   348,   102,   349,   103,   104,   105,   106,
     107,   108,   109,     0,   110,   350,   111,   112,   113,   114,
       0,   115,   351,   116,     0,     0,     0,     0,     0,   117,
       0,   642,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     354,   355,     0,     0,     0,   356,   357,   358,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   360,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,     0,   142,     0,     0,
       0,   143,   144,     0,     0,     0,     0,     0,   361,   362,
     363,   364,     0,   149,     0,   150,     0,     0,     0,     0,
     151,     0,     0,     0,   365,     0,     0,     0,   366,   367,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   152,   153,     0,     0,     0,     0,
     154,   155,     0,   312,     0,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,   324,   325,
       0,   369,    78,    79,     0,     0,    80,   326,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,   328,   329,   330,   331,   332,   333,
     334,     0,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,   335,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
     337,     0,     0,    93,   338,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   339,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
       0,   345,   346,   100,   101,   347,   348,   102,   349,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   350,   111,
     112,   113,   114,     0,   115,   351,   116,     0,     0,     0,
       0,     0,   117,     0,   642,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,   355,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   361,   362,   363,   364,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,   365,     0,     0,
       0,   366,   367,     0,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,    78,    79,   154,   155,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     3,     4,  1576,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,  1577,
       0,     0,    86,     0,     0,  1578,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,   685,     0,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,     0,   115,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,     0,   118,     0,     0,     0,   686,
     687,   688,   689,   690,     0,     0,     0,   691,   692,   693,
     694,   695,   696,   697,   698,     0,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,     0,   121,     0,     0,
      15,   122,   123,     0,     0,     0,     0,     0,     0,   124,
      17,  1580,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,    26,    27,     0,     0,     0,
       0,   135,    28,    29,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,    30,   142,
    1581,    31,     0,   143,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,  1582,     0,     0,  2031,
       0,     0,  1583,  2032,  -349,     0,     0,     0,     0,    32,
      72,    73,    74,    75,    76,    77,   152,   153,     0,     0,
       0,     0,   154,   155,     0,  1270,     0,    78,    79,     0,
       0,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     3,
       4,  1576,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1577,     0,     0,    86,     0,
       0,  1578,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,   685,     0,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
       0,   118,     0,     0,     0,   686,   687,   688,   689,   690,
       0,     0,     0,   691,   692,   693,   694,   695,   696,   697,
     698,     0,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,     0,   121,     0,     0,    15,   122,   123,     0,
       0,     0,     0,     0,  1579,   124,    17,  1580,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,    26,    27,     0,     0,     0,     0,   135,    28,    29,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,    30,   142,  1581,    31,     0,   143,
     144,     0,     0,     0,     0,     0,   145,   146,   147,   148,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,  1582,     0,     0,     0,     0,     0,  1583,     0,
       0,     0,     0,  1584,     0,    32,    72,    73,    74,    75,
      76,    77,   152,   153,     0,     0,     0,     0,   154,   155,
       0,  1670,     0,    78,    79,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     3,     4,  1576,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,  1577,     0,     0,    86,     0,     0,  1578,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,     0,   685,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,     0,   115,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,     0,   118,     0,     0,
       0,     0,   686,   687,   688,   689,   690,     0,     0,     0,
     691,   692,   693,   694,   695,   696,   697,   698,     0,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,     0,   121,
       0,     0,    15,   122,   123,     0,     0,     0,     0,     0,
    1880,   124,    17,  1580,  1881,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,    26,    27,     0,
       0,     0,     0,   135,    28,    29,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
      30,   142,  1581,    31,     0,   143,   144,     0,     0,     0,
       0,     0,   145,   146,   147,   148,     0,   149,  1478,   150,
       0,     0,     0,     0,   151,     0,     0,     0,  1582,     0,
       0,     0,     0,     0,  1583,     0,     0,     0,     0,  1584,
       0,    32,    72,    73,    74,    75,    76,    77,   152,   153,
       0,     0,     0,     0,   154,   155,     0,     0,     0,    78,
      79,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     3,     4,  1576,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,  1577,     0,     0,
      86,     0,     0,  1578,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,     0,     0,    95,    96,    97,     0,
     685,     0,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   102,     0,   103,   104,   105,   106,
     107,   108,   109,     0,   110,     0,   111,   112,   113,   114,
       0,   115,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,     0,   118,     0,     0,     0,     0,   686,   687,
     688,   689,   690,     0,     0,     0,   691,   692,   693,   694,
     695,   696,   697,   698,     0,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,     0,   121,     0,     0,    15,   122,
     123,     0,     0,     0,     0,     0,     0,   124,    17,  1580,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,    26,    27,     0,     0,     0,     0,   135,
      28,    29,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,    30,   142,  1581,    31,
       0,   143,   144,     0,     0,     0,     0,     0,   145,   146,
     147,   148,     0,   149,  2029,   150,     0,     0,     0,     0,
     151,     0,     0,     0,  1582,     0,     0,     0,     0,     0,
    1583,     0,  -349,     0,     0,     0,     0,    32,    72,    73,
      74,    75,    76,    77,   152,   153,     0,     0,     0,     0,
     154,   155,     0,     0,     0,    78,    79,     0,     0,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     3,     4,  1576,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1577,     0,     0,    86,     0,     0,  1578,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,   685,     0,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,     0,   115,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,     0,   118,
       0,     0,     0,   686,   687,   688,   689,   690,     0,     0,
       0,   691,   692,   693,   694,   695,   696,   697,   698,     0,
     699,   700,   701,   702,   703,   704,   705,   706,   707,   708,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
       0,   121,     0,     0,    15,   122,   123,     0,     0,     0,
       0,     0,     0,   124,    17,  1580,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,    26,
      27,     0,     0,     0,     0,   135,    28,    29,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,    30,   142,  1581,    31,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,   970,   149,
       0,   150,     0,     0,     0,     0,   151,     0,     0,     0,
    1582,     0,     0,     0,     0,     0,  1583,     0,     0,     0,
       0,     0,  2102,    32,    72,    73,    74,    75,    76,    77,
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
       0,    78,    79,     0,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     3,     4,  1576,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,  1577,
       0,     0,    86,     0,     0,  1578,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,   685,     0,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,     0,   115,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,     0,   118,     0,     0,     0,   686,
     687,   688,   689,   690,     0,     0,     0,   691,   692,   693,
     694,   695,   696,   697,   698,     0,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,     0,   121,     0,     0,
      15,   122,   123,     0,     0,     0,     0,     0,     0,   124,
      17,  1580,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,    26,    27,     0,     0,     0,
       0,   135,    28,    29,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,    30,   142,
    1581,    31,     0,   143,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,  1872,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,  1582,     0,     0,     0,
       0,     0,  1583,    72,    73,    74,    75,    76,    77,    32,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
      78,    79,   154,   155,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     3,     4,  1576,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,  1577,     0,
       0,    86,     0,     0,  1578,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
       0,   685,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,     0,   115,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   118,     0,     0,     0,     0,   686,
     687,   688,   689,   690,     0,     0,     0,   691,   692,   693,
     694,   695,   696,   697,   698,     0,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,    17,
    1580,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,   709,    27,     0,     0,     0,     0,
     135,    28,    29,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,    30,   142,  1581,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,     0,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,  1582,     0,     0,     0,     0,
       0,  1583,     0,     0,     0,     0,  2052,     0,    32,    72,
      73,    74,    75,    76,    77,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,     0,    78,    79,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     3,     4,
    1576,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1577,     0,     0,    86,     0,     0,
    1578,     0,     0,     0,     0,     0,    88,     0,  1306,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,     0,     0,    95,    96,    97,   685,     0,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   102,     0,   103,   104,   105,   106,   107,   108,   109,
       0,   110,     0,   111,   112,   113,   114,     0,   115,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,     0,   686,   687,   688,   689,   690,     0,
       0,     0,   691,   692,   693,   694,   695,   696,   697,   698,
       0,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,    17,  1580,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,    27,     0,     0,     0,     0,   135,    28,    29,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,    30,   142,  1581,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,  1582,     0,     0,     0,     0,     0,  1583,     0,     0,
       0,     0,     0,  2147,    32,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,   240,     0,     0,     0,     0,    78,    79,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,   242,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,  1672,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,     0,     0,    95,    96,    97,     0,   685,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   102,     0,   103,   104,   105,   106,   107,   108,   109,
       0,   110,     0,   111,   112,   113,   114,  1673,   115,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,     0,     0,   686,   687,   688,   689,   690,
       0,     0,     0,   691,   692,   693,   694,   695,   696,   697,
     698,     0,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   295,   296,   248,   249,   250,   251,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   297,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,     0,     0,    80,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,   284,   285,
     286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,   685,     0,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,     0,   115,     0,   116,
       0,     0,     0,     0,     0,   117,     0,   288,     0,   118,
       0,     0,     0,   686,   687,   688,   689,   690,     0,     0,
       0,   691,   692,   693,   694,   695,   696,   697,   698,     0,
     699,   700,   701,   702,   703,   704,   705,   706,   707,   708,
       0,     0,     0,     0,     0,     0,  1203,  1204,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   289,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   290,     0,   142,     0,     0,     0,   143,   144,     0,
       0,   685,     0,     0,   145,   291,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,     0,    80,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
      81,  1255,     0,    82,     0,     0,     0,     0,     0,   686,
     687,   688,   689,   690,    83,     0,     0,   691,   692,   693,
     694,   695,   696,   697,   698,    84,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,     0,
       0,    95,    96,    97,     0,   685,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,     0,   102,
       0,   103,   104,   105,   106,   107,   108,   109,     0,   110,
       0,   111,   112,   113,   114,  1626,   115,     0,   777,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   118,     0,
       0,     0,     0,   686,   687,   688,   689,   690,     0,     0,
       0,   691,   692,   693,   694,   695,   696,   697,   698,     0,
     699,   700,   701,   702,   703,   704,   705,   706,   707,   708,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,   122,   123,   446,   447,   448,   449,
       0,     0,   124,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,     0,     0,
       0,     0,     0,     0,   135,     0,     0,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,     0,   142,     0,     0,     0,   778,   144,     0,     0,
       0,     0,     0,   145,   146,   147,   148,     0,   149,     0,
     150,     0,     0,     0,     0,   151,    72,    73,    74,  1054,
    1055,  1056,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,     0,     0,    80,     0,   152,
     153,     0,     0,     0,     0,   154,   155,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,   176,     0,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,     0,    98,    99,     0,
       0,     0,     0,   685,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,     0,   115,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   686,   687,   688,   689,   690,     0,     0,     0,   691,
     692,   693,   694,   695,   696,   697,   698,  1057,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
       0,   142,     0,     0,     0,   143,   144,     0,     0,     0,
       0,     0,   145,   146,   147,   148,     0,   149,     0,   150,
       0,     0,     0,     0,   151,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,    80,     0,   152,   153,
       0,     0,     0,     0,   154,   155,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
      96,    97,     0,   685,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,     0,     0,   102,     0,   103,
     104,   105,   106,   107,   108,   109,     0,   110,     0,   111,
     112,   113,   114,  1671,   115,     0,   116,     0,     0,     0,
       0,     0,   117,     0,   616,     0,   118,     0,     0,     0,
       0,   686,   687,   688,   689,   690,     0,     0,     0,   691,
     692,   693,   694,   695,   696,   697,   698,     0,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   145,   146,   147,   148,     0,   149,     0,   150,     0,
       0,     0,     0,   151,    72,    73,    74,  1054,  1055,  1056,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,     0,     0,    80,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,   176,     0,   177,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,     0,   115,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1515,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,     0,   149,     0,   150,     0,     0,
       0,     0,   151,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,    80,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,   176,     0,   177,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
       0,   685,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,  1677,   115,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   118,     0,     0,     0,     0,   686,
     687,   688,   689,   690,     0,     0,     0,   691,   692,   693,
     694,   695,   696,   697,   698,     0,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,     0,   149,     0,   150,     0,     0,     0,
       0,   151,    72,    73,    74,  1054,  1055,  1056,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,     0,     0,    80,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,   176,     0,   177,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,     0,     0,    95,    96,    97,     0,
     685,     0,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   102,     0,   103,   104,   105,   106,
     107,   108,   109,     0,   110,     0,   111,   112,   113,   114,
    1922,   115,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,     0,   118,     0,     0,     0,     0,   686,   687,
     688,   689,   690,     0,     0,     0,   691,   692,   693,   694,
     695,   696,   697,   698,     0,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,     0,   142,     0,     0,
       0,   143,   144,     0,     0,     0,     0,     0,   145,   146,
     147,   148,     0,   149,     0,   150,     0,     0,     0,     0,
     151,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,    80,     0,   152,   153,     0,     0,     0,     0,
     154,   155,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,   172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,     0,     0,    95,    96,    97,     0,   685,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,     0,   102,     0,   103,   104,   105,   106,   107,
     108,   109,     0,   110,     0,   111,   112,   113,   114,  1923,
     115,     0,   116,     0,     0,     0,     0,     0,   117,     0,
      14,     0,   118,     0,     0,     0,     0,   686,   687,   688,
     689,   690,     0,     0,     0,   691,   692,   693,   694,   695,
     696,   697,   698,     0,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,   124,     0,     0,   125,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
       0,   134,     0,     0,     0,     0,     0,     0,   135,     0,
       0,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,     0,   142,     0,     0,     0,
     143,   144,     0,     0,     0,     0,     0,   145,   146,   147,
     148,     0,   149,     0,   150,     0,     0,     0,     0,   151,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    79,     0,
       0,    80,     0,   152,   153,     0,     0,     0,     0,   154,
     155,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
       0,    98,    99,   685,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,  1924,     0,     0,     0,   117,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,  1386,     0,
       0,   686,   687,   688,   689,   690,     0,     0,     0,   691,
     692,   693,   694,   695,   696,   697,   698,     0,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,     0,   121,     0,  1357,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   145,   146,   147,   148,
       0,   149,     0,   150,     0,     0,     0,     0,   151,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,     0,     0,
      80,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   102,     0,   103,   104,   105,   106,   107,   108,   109,
       0,   110,     0,   111,   112,   113,   114,     0,   115,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,   488,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,     0,     0,    80,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,     0,   115,     0,   116,
       0,     0,     0,     0,     0,   117,     0,   288,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,     0,    80,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,     0,   102,
       0,   103,   104,   105,   106,   107,   108,   109,     0,   110,
       0,   111,   112,   113,   114,     0,   115,     0,   116,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   118,     0,
       0,     0,   669,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,   122,   123,     0,     0,     0,     0,
       0,     0,   124,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,     0,     0,
       0,     0,     0,     0,   135,     0,     0,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,     0,   142,     0,     0,     0,   143,   144,     0,     0,
       0,     0,     0,   145,   146,   147,   148,     0,   149,     0,
     150,     0,     0,     0,     0,   151,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,     0,     0,    80,     0,   152,
     670,     0,     0,     0,     0,   154,   155,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,     0,   115,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1154,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
       0,   142,     0,     0,     0,   143,   144,     0,     0,     0,
       0,     0,   145,   146,   147,   148,     0,   149,     0,   150,
       0,     0,     0,     0,   151,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,    80,     0,   152,   153,
       0,     0,     0,     0,   154,   155,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,     0,     0,   102,     0,   103,
     104,   105,   106,   107,   108,   109,     0,   110,     0,   111,
     112,   113,   114,     0,   115,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
    1357,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   145,   146,   147,   148,     0,   149,     0,   150,     0,
       0,     0,     0,   151,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,     0,     0,    80,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,     0,   115,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,     0,   149,     0,   150,     0,     0,
       0,     0,   151,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,    80,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,     0,   115,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   193,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,     0,   149,     0,   150,     0,     0,     0,
       0,   151,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,     0,     0,    80,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   102,     0,   103,   104,   105,   106,
     107,   108,   109,     0,   110,     0,   111,   112,   113,   114,
       0,   115,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,     0,   834,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,     0,   142,     0,     0,
       0,   143,   144,     0,     0,     0,     0,     0,   145,   146,
     147,   148,     0,   149,     0,   150,     0,     0,     0,     0,
     151,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,    80,     0,   152,   153,     0,     0,     0,     0,
     154,   155,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,     0,   102,     0,   103,   104,   105,   106,   107,
     108,   109,     0,   110,     0,   111,   112,   113,   114,     0,
     115,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,   124,     0,     0,   125,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
       0,   134,     0,     0,     0,     0,     0,     0,   135,     0,
       0,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,     0,   142,     0,     0,     0,
     143,   144,     0,     0,     0,     0,     0,   145,   146,   147,
     148,     0,   149,     0,   150,     0,     0,     0,     0,   151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   152,  1294,     0,     0,     0,     0,   154,
     155
};

static const yytype_int16 yycheck[] =
{
       4,   300,   310,   172,    38,     9,   171,   425,     0,    13,
     823,   231,   441,   578,    18,    19,     0,    25,   183,   229,
     665,     0,   815,    27,    37,   300,     0,   621,  1125,   715,
     618,     0,     3,    37,    38,   629,   987,   202,   203,   336,
     721,     0,  1399,   208,   623,  1428,     0,  1120,   577,   490,
     457,    28,   631,    11,    18,  1008,  1009,   982,   989,   300,
      66,   352,   353,   594,     3,    11,     0,    71,    14,   668,
     934,  1240,   936,    85,  1147,   271,   469,   368,   224,   842,
     843,   844,   458,   947,   111,   594,   159,   478,    55,   111,
     111,     3,   797,   798,    27,   352,    83,    16,   803,  1716,
     111,   111,   173,     0,   175,     5,     6,     7,     8,     9,
      10,    58,    11,   111,    84,     3,     0,   174,  1501,  1982,
      42,    43,   109,   174,   267,   653,  1509,     0,    64,    65,
    1498,    67,   110,   274,   275,   276,    81,   278,   279,   280,
     533,   282,   312,   313,   314,     0,   258,   173,   115,   256,
      14,   175,  1779,   349,    64,  1782,   180,   161,   162,   791,
     254,    83,   274,   167,     3,    53,   126,    66,   174,  2000,
     305,   284,   279,   143,    84,   287,   111,     5,     6,     7,
       8,     9,    10,   169,   170,   171,   321,    66,   820,   193,
     150,   361,   184,   185,   186,   187,   188,   161,   173,   177,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     333,   225,   226,   227,    11,   184,   185,   186,   187,   188,
     184,   185,   186,   187,   188,   174,  2067,   241,  1855,   409,
     410,   245,   174,   174,   174,   222,   755,   175,   252,   253,
     184,   185,   186,   187,   188,   662,   553,   267,   262,   263,
     264,   265,   266,   267,   268,   269,   797,   798,   272,   267,
    2133,   110,   803,   277,   173,   174,   349,   281,   349,   499,
    1758,   193,   194,   175,   288,   289,   290,   184,   185,   186,
     187,   188,  1461,   350,   173,   174,   169,   310,   555,   350,
     184,   185,   186,   187,   188,   723,   310,   311,   740,   741,
     742,   184,   185,   186,   187,   188,   915,   284,  1686,   175,
     174,   257,   349,   349,  1275,   890,   496,   349,   349,   184,
     185,   186,   187,   188,   267,   347,   340,   236,   349,   596,
     486,   632,   718,   349,  1382,  1276,   256,   294,    66,   943,
     607,   608,  1277,   324,   341,   883,   884,   279,   523,   346,
    1987,  1047,   891,  1049,   805,   229,     4,   353,   372,   175,
     949,     3,   175,   766,   349,   632,   276,  1241,  1382,   383,
    1244,    19,   673,   674,   323,   642,   527,   174,    79,    27,
    1153,  1869,   683,  1776,   785,   786,   354,  1875,  1103,   175,
     657,   910,  1759,   322,  2021,   180,   305,  1764,   354,   288,
     175,   175,   425,   507,   508,   509,   510,   230,   350,   350,
     350,   349,   175,   517,     3,   857,   858,   859,   860,   175,
     175,    55,   436,    71,   284,   263,   110,   441,   266,   180,
     444,   175,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   190,    21,    22,   458,   173,   174,   349,   851,   852,
     853,   854,   175,   175,    64,    65,    66,    67,   861,   862,
     863,   284,   285,   180,   134,   175,   480,   441,   110,   352,
    1958,   110,   175,   333,    66,  1095,   656,  1097,  1098,  1967,
     494,   115,   180,   349,   498,  1568,   350,   352,    83,   175,
     477,   104,   175,   760,    16,   804,   175,   110,   175,   175,
     514,   515,   516,   175,   518,    66,   255,  1470,  1471,  1876,
    1558,     3,   556,   822,   162,   529,   530,   531,   532,   804,
     175,   535,   536,   537,   538,   755,   540,   541,   542,   175,
     544,   316,   166,   349,   548,   952,   349,   822,   177,   152,
     554,  2029,   556,  2031,  1558,   193,   159,    69,    70,    71,
      55,    73,    74,   804,    76,   180,   190,   349,   309,    87,
     288,   353,  1103,   349,   873,  1439,   580,    66,   748,     0,
     254,   822,   175,   959,   349,   349,  1450,   172,   226,   227,
     190,   173,   174,  1457,     0,   174,   349,  1278,   873,   819,
     229,   465,   309,   349,   349,   174,   914,   245,  1196,   233,
     234,   235,   236,   237,   252,   349,   913,   175,   175,   180,
     115,   309,   173,   174,   262,   263,   264,   265,   266,   267,
     115,   269,   873,   270,   272,  1321,   349,   349,   271,  1284,
    1072,   265,   650,   281,   652,   274,  1291,  1226,   277,   349,
    2128,   110,   817,   253,   278,   167,   349,   257,   287,   916,
     284,   665,   666,  1862,   190,   289,   670,   958,    67,   175,
     286,   166,   254,   349,   175,  1082,   349,   277,    66,   180,
     349,   166,   349,   349,   981,   174,   115,   349,   979,    88,
     910,   173,   174,   152,   309,   190,    64,    65,    66,    67,
       3,   665,   326,   254,   349,   329,   288,    58,   712,   110,
     714,  1002,   882,   349,   718,   719,   349,    83,  1015,    66,
     320,  1012,  1013,     0,   732,   328,   155,   128,  1679,   255,
     134,    83,   133,   349,   738,  1167,    87,   288,   233,   234,
     235,   236,   237,   616,   110,   383,   349,   134,   712,   234,
     235,   236,   237,  1850,  1851,    83,   349,   128,   270,   632,
     279,   616,   133,   184,   185,   186,   187,   188,   632,   642,
     265,  1970,    99,  1972,   778,  1168,   177,   632,   184,   185,
     186,   187,   188,   110,     5,   173,   174,   642,  1501,   284,
      11,   349,   349,   278,   289,   965,  1509,   967,  1073,   284,
     285,   159,   154,   159,   289,   157,   444,  1104,   446,   447,
     448,   449,   816,   451,   350,   453,   454,   175,   111,   175,
      39,    40,   826,   827,   828,   829,   173,   174,   229,   230,
     834,   326,  1073,   161,   329,   839,   164,   841,   842,   843,
     844,   326,   480,   349,   173,   849,   850,  1492,   191,  1494,
     177,   102,    71,   254,  1419,   719,   494,  1264,  1157,   230,
     498,    56,  1456,  1708,  1271,  1459,  1273,    62,   166,  1714,
     173,   174,   880,   274,   102,   239,   277,   515,   174,   243,
     518,   174,  1157,   254,  1104,   253,   287,   760,   896,   257,
     175,   529,   530,   531,   532,   180,   760,   535,   536,   537,
     538,   914,   540,   541,   542,   760,   544,   117,   118,   277,
     914,  1131,   327,   917,   115,   153,  1157,   155,   169,   170,
     171,  1220,  1221,   110,  1300,   929,   308,   254,   310,  1099,
     259,   220,   221,   937,  1727,  1728,   234,   235,   236,   237,
     944,   169,   170,   171,  1320,  1220,  1221,   175,   220,   221,
     279,  1161,   153,   350,   155,   959,  1349,  1350,  1351,   184,
     185,  1126,   149,   188,   151,   152,     5,     6,     7,     8,
       9,    10,   174,     5,     6,     7,   174,   981,   982,  1220,
    1221,   275,    88,   987,   988,   989,    42,    43,    20,    95,
      96,   289,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,   286,    69,    70,    71,
     349,    73,    74,    75,    76,    86,   270,   981,   982,   349,
      52,    53,    54,    82,    83,    64,    65,    66,    67,    89,
      90,   329,    69,    70,    71,  1680,    73,    74,   271,    76,
     904,   905,   906,   256,   308,   116,   310,   271,   119,   120,
     121,   122,   123,   124,   166,   308,   127,   310,    86,  1063,
      87,  1468,  1469,  1362,   267,   308,   279,   310,    20,   282,
     283,  1478,    24,    25,  1078,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,   135,  1362,   116,   260,
     261,   119,   120,   121,   122,   123,   124,  1101,  1102,   127,
     738,    53,    54,  1697,   175,   167,  1110,  1111,    11,   982,
    1114,    69,    70,    71,  1118,  1119,  1120,  1121,    76,   331,
     332,  1362,   234,   235,   236,   237,    88,   982,   267,    91,
     167,   169,   170,   171,  1138,    97,  1306,   175,   284,   285,
     778,  1145,   284,  1147,  1008,  1009,   284,  1151,   295,  1153,
     297,   190,   299,   300,   301,   302,  1974,  1121,  1976,  1977,
    1978,   284,  1971,  1581,  1973,   284,   215,   216,   217,   218,
     219,   135,   313,  1343,   100,   101,   116,   117,   816,   119,
     120,   121,   122,   123,   124,  1395,   326,   127,   826,   827,
     828,   829,  1134,  1135,  1136,  1137,  1366,  1070,   284,  1369,
    1370,   839,  1796,     5,     6,     7,     8,     9,    10,   235,
    1152,   849,   850,   235,   253,  1070,  1507,  1508,   257,   193,
     194,  1815,   313,   178,   228,  1089,   181,   182,   183,   184,
     185,   186,   187,   188,   169,   170,   171,   192,   277,   676,
     677,   678,   231,   284,  1519,  1502,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   303,   328,   178,   291,
     292,   293,   294,   178,    17,   135,   178,   256,   185,   186,
     284,  1275,  1276,  1277,   263,   264,    93,    94,  1519,   349,
    1284,   320,   104,   331,   332,   333,   334,  1291,    89,    90,
    1294,   929,   304,   282,     3,     4,  1300,  1301,   333,   334,
     328,     3,    55,  2116,   290,    58,   335,   336,  1607,  1608,
       3,  1610,   174,  1277,   174,  1744,  1320,   349,  1322,   174,
    1284,    64,    65,   174,  1581,   174,  1583,  1291,   186,   187,
     810,   811,  1607,  1608,    22,  1610,   206,   207,   208,   174,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     103,   135,   105,  1357,  2091,  2092,   305,   306,   592,   593,
     174,   313,   115,   174,   126,   174,  1607,  1608,   174,  1610,
     174,  1541,  1406,  1543,  1544,   174,   174,  1381,   174,   174,
     174,  1385,  1386,   174,   174,   174,   174,   174,   328,  1393,
    1382,   174,   174,   174,   349,  1399,  1400,   349,  1382,   191,
     339,   349,  1406,  1407,  1277,   350,  1414,  1576,  1416,   174,
    1418,  2005,   339,  1277,   174,  1423,   174,   286,    92,  1283,
      98,  1385,  1277,   328,  1428,   349,  1683,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   875,   268,    17,   878,
     879,   880,   306,   134,   134,   134,   130,  1451,  1382,  1867,
     235,   130,   320,   112,   112,   111,   175,   896,   897,   898,
     899,   305,   267,   173,   239,   173,   177,   220,   221,   222,
     223,   224,   225,  1111,   174,   174,    55,   174,   174,    58,
     233,  1119,   106,   235,    38,  1382,   305,   174,  1492,   174,
    1494,   174,   174,   174,  1498,    23,  1753,  1501,  1382,   174,
     168,   174,   295,  1760,   297,  1509,   299,   300,   301,   302,
     174,   174,   265,  1151,   174,   112,  1520,   174,   350,   240,
     156,  1534,   175,   178,   103,   278,   105,   178,  1492,     3,
    1494,   284,   175,   240,   287,   174,   115,   175,  1572,   181,
     182,   183,   184,   185,   186,   187,   188,  1551,   173,   352,
     192,   174,   174,  1723,   174,   288,   206,   175,    82,  1729,
    1730,    79,   174,   111,  1568,   174,  1558,   262,  1572,   245,
     350,  1879,   286,   326,  1558,   278,  1580,   104,   173,   285,
     111,   321,   173,   106,   178,     0,     1,   181,   182,   183,
     184,   185,   186,   187,   188,   240,  1766,   191,   192,   266,
     254,   228,   174,   328,   270,   178,  1470,  1471,   181,   182,
     183,   184,   185,   186,   187,   188,  1580,   180,   191,   192,
      23,   286,   349,   178,  1558,   104,   181,   182,   183,   184,
     185,   186,   187,   188,   328,  1639,    51,   192,   111,   159,
     174,   220,   221,   222,   223,   224,   225,   147,   349,    64,
      65,    66,    67,  1823,   233,   102,   175,   349,   292,   175,
     109,  1558,    77,    78,    79,    80,   135,   319,   110,  1682,
    1969,    86,   349,   175,  1558,  1679,  1680,   349,   340,   175,
    1937,   174,  1686,   174,   174,   266,   265,    88,   349,   111,
      90,   110,   263,   262,  1969,   111,  1709,  1710,   174,    20,
     349,   322,   262,   273,   236,   284,    99,   175,   287,   328,
     175,   175,   349,   175,   330,   175,  1680,   270,   175,   134,
     175,   175,  1726,   349,   286,   175,   328,   175,  1969,  1733,
    2038,   295,   296,   297,   298,   299,   300,   301,   302,   349,
    1744,  1745,   175,   175,   174,   349,   175,   326,  1386,   175,
     175,   349,   104,   162,   175,  1759,   174,   174,   173,   174,
    1764,   174,   303,   319,   175,   175,    75,   175,    75,  1407,
    1940,    72,  1776,  1777,  1939,  2032,   174,   104,   108,   104,
    1744,   175,   102,   175,   175,   175,   271,   271,   349,  1793,
      16,   350,   328,   111,  2051,   270,   279,   174,   270,   175,
     238,  1971,   243,  1973,  2103,   173,   175,   238,   175,   254,
     144,   328,   144,   175,   175,   286,   231,   232,   175,    75,
    1824,   174,   104,   336,   175,   175,   241,   242,  2103,   244,
     254,   246,   247,   248,   249,  1839,   251,   349,   253,   279,
     349,   256,   257,   174,   240,  2010,   269,     3,   263,   264,
     349,     3,   272,    77,   173,   269,   239,   315,  1862,   240,
       5,   317,  2103,   351,   279,   229,   174,   282,   349,   175,
     175,   338,  1876,   175,   163,  1879,   354,   355,   175,   175,
     350,   270,   360,   349,   270,   270,   349,   365,   270,   175,
     175,   262,   192,   110,   278,   129,   349,   349,    83,   173,
     240,   174,   174,   174,   174,   320,    64,    65,    66,    67,
     112,   271,   110,  1917,   110,   110,   270,   175,   277,    77,
      78,    79,    80,   270,   328,   174,   333,   110,    86,     3,
    1934,   269,   344,   278,   172,  2155,   230,   342,   344,  1943,
     319,    85,  1580,  1947,  2164,    85,   134,   349,   240,     5,
    1954,   267,   240,   350,     5,  1959,   328,   337,   155,   308,
    1964,   152,   350,   152,   157,     3,  1970,   130,  1972,   191,
      59,   349,   175,   319,   307,   134,   319,   157,  1982,   457,
     174,  1985,   160,   154,   174,   333,   113,   465,    60,   345,
    1982,   134,   307,   319,   333,  1999,   319,    61,  1982,   343,
     317,   270,   344,  1982,   315,   270,   270,    64,  1982,   313,
      65,   325,   174,  1982,   134,   173,   174,    41,  1145,  1558,
    1336,   222,  2026,  1982,  1092,  2085,   805,    38,  1982,     5,
       6,     7,  2036,   479,  2038,   221,  1120,   481,  1568,  1714,
    2044,  2045,  2046,  2047,    20,  2137,  2123,  2122,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,  2115,  1764,  2084,  2133,  1874,  1874,  1755,  1610,
    2144,  1891,  1890,   231,   232,  1519,    52,    53,    54,     8,
     165,   480,  1546,   241,   242,   733,   244,  1946,  1543,  2018,
    1943,  1544,  2096,   466,  2098,   723,  1469,  1089,   256,   257,
    1288,  1468,   914,   991,  1685,   263,   264,   436,  1301,   951,
     588,   669,   599,  1693,   911,  1202,   682,   684,   683,  1815,
     735,   279,   712,   968,   282,    37,  2130,   660,   608,  2133,
    1782,   972,   972,  1984,  1780,  1631,  1449,  1796,   630,  1438,
    2144,  2133,  1911,   621,   622,   623,  1638,  1996,    -1,  2133,
    1441,   629,  2004,   631,  2133,   131,   132,   552,    -1,  2133,
      -1,    -1,   320,    -1,  2133,    -1,    -1,   645,   646,   647,
      -1,    -1,    -1,    -1,  2133,    -1,    -1,    -1,    -1,  2133,
      -1,    -1,    -1,   661,   662,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   675,   676,   677,
     678,  1839,    -1,    -1,    -1,    -1,    -1,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,     5,     6,     7,    -1,    -1,   714,   715,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1934,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,     8,     9,    10,
      -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    66,    67,    68,    69,    70,
      -1,   939,    -1,    -1,    -1,   943,    -1,    -1,    -1,    80,
      -1,   949,    83,    -1,   952,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,   970,    -1,   105,   973,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,    -1,   126,   127,   291,   292,   293,
     294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1008,  1009,   143,   144,    -1,    -1,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,    -1,   159,   160,
     161,   162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,
      -1,   172,   173,   174,    -1,   176,    -1,    -1,    -1,  1047,
      -1,  1049,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   284,    -1,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,    -1,    -1,    -1,    -1,    -1,
     128,    -1,    -1,    -1,  1082,   133,   134,    -1,    -1,   220,
     221,  1089,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,   291,   292,   293,   294,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,   175,    -1,   177,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,   288,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   229,   230,   231,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,  1202,    -1,   254,    -1,   256,    -1,
      -1,    -1,    -1,    -1,    -1,   263,   264,    -1,    -1,    -1,
      -1,   352,    -1,    -1,  1222,    -1,   274,    -1,  1226,   277,
      -1,    -1,    -1,  1231,   282,    -1,    -1,    -1,    -1,   287,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1254,  1255,  1256,  1257,
      -1,    -1,    -1,    -1,    -1,    -1,  1264,    -1,    -1,    -1,
      -1,    -1,  1270,  1271,    -1,  1273,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1321,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,   119,   120,   121,    -1,    -1,    -1,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,    -1,    -1,   147,
      -1,   149,   150,   151,   152,   153,   154,   155,    -1,   157,
      -1,   159,   160,   161,   162,    -1,   164,    -1,   166,    -1,
    1438,    -1,    -1,  1441,   172,    -1,   174,    -1,   176,    -1,
      -1,  1449,    -1,    -1,    -1,    -1,    -1,    -1,  1456,    -1,
      -1,  1459,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1468,  1469,  1470,  1471,    -1,    -1,    -1,    -1,    -1,    -1,
    1478,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,
      -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,
      -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,
     278,    -1,   280,   111,    -1,    -1,   284,   285,    -1,    -1,
      -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,
     298,    -1,    -1,    -1,    -1,   303,    -1,   135,    -1,    -1,
      -1,    -1,    -1,    -1,  1582,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,   194,   195,   196,   197,
    1638,    -1,    -1,   201,   202,   203,   204,   205,   206,   207,
     208,    -1,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1670,    -1,  1672,    -1,    -1,  1675,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
      -1,    -1,    -1,    -1,    -1,  1693,    -1,    -1,    -1,  1697,
      -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1708,    -1,    -1,    -1,    -1,    -1,  1714,    -1,    -1,    -1,
     193,   194,   195,   196,   197,    -1,    -1,    -1,   201,   202,
     203,   204,   205,   206,   207,   208,    -1,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   193,   194,   195,
     196,   197,    -1,    -1,    -1,   201,   202,   203,   204,   205,
     206,   207,   208,    -1,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,    -1,    -1,
    1778,  1779,  1780,    -1,  1782,    -1,    -1,    -1,    -1,    -1,
      -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,  1796,    -1,
      -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,  1815,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    66,    67,  1866,    69,
      70,    -1,    -1,    -1,  1872,    -1,   349,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,   349,    -1,   105,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,   172,   173,   174,    -1,   176,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1984,    -1,    -1,  1987,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,    -1,  2005,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,  2024,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,   288,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,     3,   354,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,   172,    -1,   174,    -1,   176,   177,    -1,   179,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
     190,    -1,    -1,   193,   194,    -1,    -1,    -1,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,     3,   354,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,   172,   173,   174,    -1,   176,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,     3,   354,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,   172,    -1,   174,    -1,   176,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,     3,   354,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,   172,    -1,   174,    -1,   176,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,   254,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,     3,   354,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,   172,    -1,   174,    -1,   176,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,     3,   354,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,   172,    -1,   174,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,
      -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,
      -1,    -1,    -1,     3,   354,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,   172,    -1,   174,   175,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   354,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,
      -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,   162,    -1,   164,   165,   166,
      -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190,    -1,    -1,   193,   194,    -1,    -1,
      -1,   198,   199,   200,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
     307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,   354,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,
     114,    -1,   116,    -1,    -1,   119,   120,   121,    -1,    -1,
      -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
     164,   165,   166,    -1,    -1,    -1,    -1,    -1,   172,    -1,
     174,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
     194,    -1,    -1,    -1,   198,   199,   200,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,   253,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,
      -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,
      -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,
     284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,
     294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,
      -1,    -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,
     334,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
     354,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,    -1,
      -1,   172,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,   194,    -1,    -1,    -1,   198,   199,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
     221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,
     311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,
      -1,    -1,     3,   354,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,    -1,
      -1,   172,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,   194,    -1,    -1,    -1,   198,   199,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
     221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,
     311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,
      -1,    -1,     3,   354,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,    -1,
      -1,   172,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,   194,    -1,    -1,    -1,   198,   199,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
     221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,   308,    -1,    -1,
     311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,   354,    22,    23,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,
      -1,   119,   120,   121,    -1,    -1,    -1,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,    -1,
      -1,    -1,    -1,    -1,   172,    -1,   174,   175,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,
     198,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,
      -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,
      -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,
     278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,
      -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,
     298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   307,
      -1,    -1,    -1,   311,   312,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,   354,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,
      -1,   116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,
     125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,   162,    -1,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,   172,    -1,   174,
      -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,
      -1,    -1,    -1,   198,   199,   200,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,   254,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,     3,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,   354,
      22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,    -1,
      -1,   113,   114,    -1,   116,    -1,    -1,   119,   120,   121,
      -1,    -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
     162,    -1,   164,   165,   166,    -1,    -1,    -1,    -1,    -1,
     172,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,   194,    -1,    -1,    -1,   198,   199,   200,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,
      -1,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,
      -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,   311,
     312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,   354,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,    -1,
     119,   120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,   162,    -1,   164,   165,   166,    -1,    -1,
      -1,    -1,    -1,   172,    -1,   174,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,   198,
     199,   200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,   253,   254,   255,    -1,    -1,    -1,
      -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,
     269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,
      -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,
      -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,   298,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,
      -1,    -1,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,
      -1,    -1,    -1,    -1,   333,   334,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,   354,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,    -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,    -1,
      -1,    -1,   198,   199,   200,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,   308,    -1,    -1,   311,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,   354,    22,
      23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,   110,    -1,    -1,
     113,   114,    -1,   116,    -1,    -1,   119,   120,   121,    -1,
      -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,   162,
      -1,   164,   165,   166,    -1,    -1,    -1,    -1,    -1,   172,
      -1,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,   194,    -1,    -1,    -1,   198,   199,   200,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,
      -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,
     233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
     253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,
      -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,
     273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,
      -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,
     293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,   307,    -1,    -1,    -1,   311,   312,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   327,   328,    -1,    -1,    -1,    -1,
     333,   334,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,   354,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,   172,    -1,   174,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,   311,   312,    -1,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    22,    23,   333,   334,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,
     121,   135,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,    -1,   159,   160,
     161,   162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,    -1,   176,    -1,    -1,    -1,   193,
     194,   195,   196,   197,    -1,    -1,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,    -1,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
     221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
     231,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,
      -1,   262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,   279,   280,
     281,   282,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,   310,
      -1,    -1,   313,   314,   315,    -1,    -1,    -1,    -1,   320,
       5,     6,     7,     8,     9,    10,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,   349,    -1,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,   119,   120,   121,   135,    -1,    -1,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
      -1,    -1,   147,    -1,   149,   150,   151,   152,   153,   154,
     155,    -1,   157,    -1,   159,   160,   161,   162,    -1,   164,
      -1,   166,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,
      -1,   176,    -1,    -1,    -1,   193,   194,   195,   196,   197,
      -1,    -1,    -1,   201,   202,   203,   204,   205,   206,   207,
     208,    -1,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,   231,   232,   233,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,   256,   257,    -1,    -1,    -1,    -1,   262,   263,   264,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,   279,   280,   281,   282,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,   313,    -1,
      -1,    -1,    -1,   318,    -1,   320,     5,     6,     7,     8,
       9,    10,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,   349,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
     119,   120,   121,    -1,   135,    -1,    -1,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,    -1,    -1,   147,    -1,
     149,   150,   151,   152,   153,   154,   155,    -1,   157,    -1,
     159,   160,   161,   162,    -1,   164,    -1,   166,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,    -1,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,   231,   232,   233,    -1,    -1,    -1,    -1,    -1,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,   253,    -1,   255,   256,   257,    -1,
      -1,    -1,    -1,   262,   263,   264,   265,    -1,    -1,    -1,
     269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,
     279,   280,   281,   282,    -1,   284,   285,    -1,    -1,    -1,
      -1,    -1,   291,   292,   293,   294,    -1,   296,   309,   298,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,
      -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,   318,
      -1,   320,     5,     6,     7,     8,     9,    10,   327,   328,
      -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,   119,   120,   121,    -1,
     135,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     143,   144,    -1,    -1,   147,    -1,   149,   150,   151,   152,
     153,   154,   155,    -1,   157,    -1,   159,   160,   161,   162,
      -1,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,   193,   194,
     195,   196,   197,    -1,    -1,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,    -1,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,
      -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,   231,   232,
     233,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
     253,    -1,   255,   256,   257,    -1,    -1,    -1,    -1,   262,
     263,   264,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,
     273,    -1,   275,    -1,    -1,   278,   279,   280,   281,   282,
      -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,
     293,   294,    -1,   296,   309,   298,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,
     313,    -1,   315,    -1,    -1,    -1,    -1,   320,     5,     6,
       7,     8,     9,    10,   327,   328,    -1,    -1,    -1,    -1,
     333,   334,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,   119,   120,   121,   135,    -1,    -1,    -1,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,    -1,   159,   160,   161,   162,    -1,   164,    -1,   166,
      -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,   176,
      -1,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,    -1,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,   231,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,   256,
     257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,   279,   280,   281,   282,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,   308,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,
      -1,    -1,   319,   320,     5,     6,     7,     8,     9,    10,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,
     121,   135,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,    -1,   159,   160,
     161,   162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,    -1,   176,    -1,    -1,    -1,   193,
     194,   195,   196,   197,    -1,    -1,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,    -1,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
     221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
     231,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,
      -1,   262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,   279,   280,
     281,   282,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,   308,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    -1,   313,     5,     6,     7,     8,     9,    10,   320,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      22,    23,   333,   334,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,   121,
      -1,   135,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,    -1,   157,    -1,   159,   160,   161,
     162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,   193,
     194,   195,   196,   197,    -1,    -1,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,    -1,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,   268,   257,    -1,    -1,    -1,    -1,
     262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,   279,   280,   281,
      -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,   313,    -1,    -1,    -1,    -1,   318,    -1,   320,     5,
       6,     7,     8,     9,    10,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,   107,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,   119,   120,   121,   135,    -1,    -1,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,
      -1,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,    -1,   159,   160,   161,   162,    -1,   164,    -1,
     166,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,
     176,    -1,    -1,    -1,   193,   194,   195,   196,   197,    -1,
      -1,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
      -1,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,   257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,   279,   280,   281,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,
      -1,    -1,    -1,   319,   320,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,   112,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,   135,    -1,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,
      -1,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,    -1,   159,   160,   161,   162,   175,   164,    -1,
     166,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,
     176,    -1,    -1,    -1,    -1,   193,   194,   195,   196,   197,
      -1,    -1,    -1,   201,   202,   203,   204,   205,   206,   207,
     208,    -1,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,   222,   223,   224,   225,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,   119,   120,   121,   135,    -1,    -1,    -1,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,    -1,   159,   160,   161,   162,    -1,   164,    -1,   166,
      -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,   176,
      -1,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,    -1,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,
      -1,   135,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,
      38,   185,    -1,    41,    -1,    -1,    -1,    -1,    -1,   193,
     194,   195,   196,   197,    52,    -1,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,    63,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,   119,   120,   121,    -1,   135,    -1,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,    -1,    -1,   147,
      -1,   149,   150,   151,   152,   153,   154,   155,    -1,   157,
      -1,   159,   160,   161,   162,   175,   164,    -1,   166,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,    -1,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,   232,   233,   234,   235,   236,   237,
      -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,
      -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,
     278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,
      -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,
     298,    -1,    -1,    -1,    -1,   303,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
     119,   120,   121,    -1,    -1,    -1,    -1,   126,   127,    -1,
      -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,    -1,    -1,   147,    -1,
     149,   150,   151,   152,   153,   154,   155,    -1,   157,    -1,
     159,   160,   161,   162,    -1,   164,    -1,   166,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
     202,   203,   204,   205,   206,   207,   208,   206,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,    -1,    -1,
      -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,
     269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,
      -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,
      -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,   298,
      -1,    -1,    -1,    -1,   303,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   327,   328,
      -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,   135,    -1,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,    -1,    -1,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,    -1,   159,
     160,   161,   162,   175,   164,    -1,   166,    -1,    -1,    -1,
      -1,    -1,   172,    -1,   174,    -1,   176,    -1,    -1,    -1,
      -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
     202,   203,   204,   205,   206,   207,   208,    -1,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,    -1,   159,   160,
     161,   162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
     221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,   121,
      -1,   135,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,    -1,   157,    -1,   159,   160,   161,
     162,   175,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,   193,
     194,   195,   196,   197,    -1,    -1,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,    -1,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,
      -1,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,
      -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,   119,   120,   121,    -1,
     135,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     143,   144,    -1,    -1,   147,    -1,   149,   150,   151,   152,
     153,   154,   155,    -1,   157,    -1,   159,   160,   161,   162,
     175,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,   193,   194,
     195,   196,   197,    -1,    -1,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,    -1,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,
      -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,
     233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
     253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,
      -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,
     273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,
      -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,
     293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,
     303,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,   327,   328,    -1,    -1,    -1,    -1,
     333,   334,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,   119,   120,   121,    -1,   135,
      -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,    -1,    -1,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,    -1,   157,    -1,   159,   160,   161,   162,   175,
     164,    -1,   166,    -1,    -1,    -1,    -1,    -1,   172,    -1,
     174,    -1,   176,    -1,    -1,    -1,    -1,   193,   194,   195,
     196,   197,    -1,    -1,    -1,   201,   202,   203,   204,   205,
     206,   207,   208,    -1,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,   253,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,
      -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,
      -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,
     284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,
     294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,
     334,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,
      -1,   126,   127,   135,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
      -1,    -1,   147,    -1,   149,   150,   151,   152,   153,   154,
     155,    -1,   157,    -1,   159,   160,   161,   162,    -1,   164,
      -1,   166,    -1,   175,    -1,    -1,    -1,   172,    -1,    -1,
      -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
     202,   203,   204,   205,   206,   207,   208,    -1,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,
      -1,    -1,    -1,   228,    -1,   230,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,
      -1,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,    -1,   159,   160,   161,   162,    -1,   164,    -1,
     166,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,   279,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,   119,   120,   121,    -1,    -1,    -1,    -1,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,    -1,   159,   160,   161,   162,    -1,   164,    -1,   166,
      -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,   119,   120,   121,    -1,    -1,    -1,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,    -1,    -1,   147,
      -1,   149,   150,   151,   152,   153,   154,   155,    -1,   157,
      -1,   159,   160,   161,   162,    -1,   164,    -1,   166,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,   176,    -1,
      -1,    -1,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,
      -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,
      -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,
     278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,
      -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,
     298,    -1,    -1,    -1,    -1,   303,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
     119,   120,   121,    -1,    -1,    -1,    -1,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,    -1,    -1,   147,    -1,
     149,   150,   151,   152,   153,   154,   155,    -1,   157,    -1,
     159,   160,   161,   162,    -1,   164,    -1,   166,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,
     269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,
      -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,
      -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,   298,
      -1,    -1,    -1,    -1,   303,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   327,   328,
      -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,    -1,    -1,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,    -1,   159,
     160,   161,   162,    -1,   164,    -1,   166,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
     230,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,    -1,   159,   160,
     161,   162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
     221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,   121,
      -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,    -1,   157,    -1,   159,   160,   161,
     162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,
      -1,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,
      -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,   119,   120,   121,    -1,
      -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     143,   144,    -1,    -1,   147,    -1,   149,   150,   151,   152,
     153,   154,   155,    -1,   157,    -1,   159,   160,   161,   162,
      -1,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,
      -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,
     233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
     253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,
      -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,
     273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,
      -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,
     293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,
     303,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,   327,   328,    -1,    -1,    -1,    -1,
     333,   334,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,   119,   120,   121,    -1,    -1,
      -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,    -1,    -1,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,    -1,   157,    -1,   159,   160,   161,   162,    -1,
     164,    -1,   166,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,   253,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,
      -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,
      -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,
     284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,
     294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,
     334
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    64,    65,    66,    67,    77,    78,    79,
      80,    86,   134,   173,   174,   231,   232,   241,   242,   244,
     246,   247,   248,   249,   251,   253,   256,   257,   263,   264,
     279,   282,   320,   356,   362,   363,   366,   367,   368,   369,
     371,   373,   374,   383,   388,   400,   405,   406,   412,   451,
     457,   460,   468,   489,   504,   508,   509,   510,   518,   533,
     535,   536,   537,   556,   560,   561,   562,   565,   687,   692,
     134,   111,     5,     6,     7,     8,     9,    10,    22,    23,
      26,    38,    41,    52,    63,    80,    83,    86,    92,    97,
      98,    99,   105,   113,   116,   119,   120,   121,   126,   127,
     143,   144,   147,   149,   150,   151,   152,   153,   154,   155,
     157,   159,   160,   161,   162,   164,   166,   172,   176,   220,
     221,   228,   232,   233,   240,   243,   244,   245,   246,   247,
     248,   249,   251,   253,   255,   262,   265,   269,   272,   273,
     275,   278,   280,   284,   285,   291,   292,   293,   294,   296,
     298,   303,   327,   328,   333,   334,   655,   681,   682,   190,
     255,   546,   267,    81,   515,   515,   681,    79,    87,   557,
     558,   681,    66,   565,   180,   270,    67,    69,    70,   625,
     626,   627,   681,   655,   359,   358,   360,   361,   357,     5,
      11,   685,   688,   284,   655,     5,     6,     7,     8,     9,
      10,    64,    65,    66,    67,   190,   253,   257,   277,   320,
     384,   391,   392,   393,   395,   396,   397,   679,   680,   263,
     266,   389,   390,    58,    87,    55,   115,   284,    11,   174,
     236,   305,   452,   453,   526,   556,   562,   670,   684,     0,
      17,    55,    58,   103,   105,   115,   220,   221,   222,   223,
     224,   225,   233,   265,   278,   284,   287,   413,   414,   417,
     418,   166,   234,   235,   236,   237,   289,   329,    55,   115,
     166,   190,   233,   234,   235,   236,   237,   265,   278,   284,
     289,   326,   329,   503,    55,    56,    57,    63,   174,   265,
     278,   292,   456,   652,   681,   220,   221,   284,   372,   417,
     449,   681,   134,   102,   169,   170,   171,   581,   134,   655,
     279,   350,     3,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    18,    19,    27,    28,    44,    45,
      46,    47,    48,    49,    50,    62,   106,   110,   114,   125,
     135,   136,   137,   138,   139,   141,   142,   145,   146,   148,
     158,   165,   174,   177,   193,   194,   198,   199,   200,   206,
     210,   291,   292,   293,   294,   307,   311,   312,   352,   354,
     542,   568,   579,   580,   588,   589,   590,   591,   593,   595,
     596,   598,   600,   602,   603,   605,   606,   607,   608,   609,
     610,   611,   624,   625,   628,   630,   631,   632,   634,   635,
     636,   637,   638,   652,   653,   654,   656,   657,   659,   674,
     677,   681,   686,   697,   698,   699,   700,   701,   715,   722,
     724,   727,   737,   738,   768,   655,   191,   516,   516,   681,
      88,    91,    97,   511,   512,   513,   349,   559,   562,   455,
     456,   546,   175,   327,   115,   166,   234,   235,   236,   237,
     278,   284,   285,   289,   326,   502,   693,   174,   350,   455,
     369,   369,   356,   356,   369,   174,   655,   117,   118,   534,
     455,   455,   275,   455,   111,   267,   286,   349,   286,   349,
     270,   349,   271,   271,   391,   384,    87,   511,   279,   681,
     655,   655,   452,   565,   267,   670,   267,    27,   267,   305,
     321,   220,   221,   681,   220,   221,   655,   284,   284,   284,
     284,   655,   681,   313,   365,   365,   326,   284,   235,   655,
     655,   655,   655,   655,   655,   681,   655,   235,   166,   234,
     235,   236,   237,   655,   313,   364,   364,   364,   364,   681,
     364,   364,   364,   655,   364,    42,    43,   507,   228,   449,
     681,   681,   303,   178,   178,   178,   349,     5,     6,     7,
      20,    24,    25,    26,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    52,    53,    54,   291,   292,   293,   294,
     349,   643,   651,   672,   674,   675,   676,   677,   104,   190,
     255,   566,   566,   566,   304,   582,   290,   550,   456,   547,
     549,   678,   681,   681,   686,   686,   686,   174,   174,    22,
     174,   629,   629,   629,   629,   629,   174,   605,   174,   126,
     681,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   288,   556,   562,   579,   589,   597,   625,
     681,   589,   174,   607,   607,   174,   174,   174,   607,   686,
     174,   641,   174,   642,   193,   194,   639,   308,   607,   664,
     665,   174,   174,   589,   601,   111,   267,   569,   570,   180,
     328,   633,   681,   191,   178,   181,   182,   183,   184,   185,
     186,   187,   188,   192,   655,   135,   193,   194,   195,   196,
     197,   201,   202,   203,   204,   205,   206,   207,   208,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   268,
     339,   350,   349,   174,   174,   174,   686,   686,   350,   174,
     254,   288,   453,   456,   538,    82,    83,   286,   517,    89,
      90,    92,    98,   349,   558,   328,   568,   655,   235,   655,
     655,   655,   655,   681,   655,   681,   655,   655,   268,   175,
     543,   607,   660,   627,   681,   306,   584,   134,   134,   134,
     174,   175,   541,   543,   545,   565,   534,   130,   130,   507,
     276,   398,   399,   679,   679,   398,   393,   166,   284,   394,
     502,   655,   397,   112,   112,   111,   111,   511,   260,   261,
     415,   173,   259,   279,   401,   116,   117,   119,   120,   121,
     122,   123,   124,   127,   328,   408,   410,   411,   256,   279,
     282,   283,   175,   655,   324,   686,   267,   655,   670,   305,
     173,    86,   328,   407,   409,   411,   365,   365,   365,   365,
     239,   173,   381,   177,   228,   375,   681,   655,   681,   365,
     655,   174,   174,   174,   174,   455,   331,   332,   490,   364,
     235,   655,   655,   655,   655,   507,   106,   655,   655,   655,
     655,   655,   655,   655,   655,   681,   175,    58,   294,   654,
     605,   681,   579,   449,   174,   174,    21,    22,   174,   174,
     174,    38,   174,   641,   642,   295,   297,   299,   300,   301,
     302,   644,   647,   649,   650,   681,   174,   174,   174,   174,
     585,   586,   607,   168,   567,   567,   567,   609,   669,   684,
     305,   583,   579,   178,   349,   570,   178,   350,   579,   658,
     658,    23,   175,   296,   298,   302,   644,   645,   646,   112,
     607,   608,   607,   694,   695,   696,   694,   240,   156,   716,
     742,   153,   155,   740,   240,     3,   728,   608,   115,   739,
     740,   694,   174,   539,   175,   175,   175,   175,   349,   350,
     607,   607,   607,   685,   173,   640,   685,   640,   686,   579,
     308,   662,   663,   310,   664,   666,   607,   543,   661,   349,
     353,    68,   174,   352,   551,   571,   572,   604,   625,   655,
     681,   563,   564,   681,   550,   580,   681,   589,   179,   189,
     190,   589,   599,   594,   607,   594,   594,   594,   174,   174,
     100,   101,   592,   592,   589,   599,   602,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   110,   177,   174,   206,   632,   175,   190,   206,   255,
     607,   667,   681,   667,     8,     9,    10,   206,   681,   288,
     539,   538,    82,    79,    88,    95,    96,   514,   685,   513,
     174,   604,   655,   174,   505,   505,   505,   505,   350,   110,
     686,   175,   349,    14,   609,   670,   245,   370,   175,   349,
     507,   173,   349,   386,   173,   385,   655,   398,   398,   262,
     415,   286,   278,   104,   173,   669,   669,   669,   672,   410,
     230,   284,   285,   403,   404,    67,    88,   402,   404,   284,
     404,   111,    16,   524,   525,   524,   655,   455,   321,   670,
     415,   173,   672,   409,   655,   655,   655,   655,   240,   266,
     106,   376,   681,   254,   377,   228,   111,   174,   420,   421,
     455,   270,   655,   174,   206,   487,   488,   681,   487,   487,
     487,   328,    64,    65,    67,   257,   491,   655,   655,   507,
     507,   507,   507,   505,   505,   505,   505,   507,   507,   507,
     672,   668,   685,   668,    23,   668,   668,   668,   685,    53,
     673,   686,   640,   640,   642,   641,   286,   668,   685,   668,
     668,   668,   349,   226,   227,   587,   104,   565,   565,   565,
     609,   670,   584,   605,   549,   550,   254,   548,   579,   681,
     328,   349,   111,   655,   159,   741,   349,   741,   741,   681,
     703,   174,   607,   717,   718,   719,   349,   608,   681,   725,
     147,   729,   741,   694,   581,   254,   540,   543,   544,   175,
     349,   185,   186,   589,   349,   185,   111,   349,   175,   292,
     686,   175,   686,   650,   309,   607,   662,   666,   607,   319,
     349,   349,   175,   349,   589,   605,   625,   174,   288,   551,
     556,   562,   572,   573,   349,    69,    70,    71,    73,    74,
      76,   167,   552,   554,   328,   574,   681,   574,   575,   575,
     350,   349,   569,   109,   576,   589,   107,   541,   541,   589,
     589,   605,   110,   340,   612,   613,   667,   175,   667,   175,
     350,   349,   350,   681,    93,    94,    88,   505,   175,   506,
     672,   681,   543,   545,   266,   399,   111,   387,   263,   387,
     387,   387,   686,   262,   681,   681,   669,   605,   670,   681,
     655,   681,    90,    89,    90,   681,   655,   230,   424,   427,
     438,   439,   678,   625,   110,   527,   322,   527,   455,   111,
     262,   670,   420,   420,   420,   420,   681,    56,    62,   382,
      20,   273,   689,   690,   376,   236,   183,   423,   424,   425,
     430,   450,   681,    99,   416,   328,   655,   420,   487,   175,
     349,   672,   175,   175,   175,   452,   330,   270,   505,   507,
     175,   175,   175,   175,   349,   175,   349,   175,   349,   302,
     644,   648,   175,   349,   175,   175,   175,   586,   174,   672,
     672,   607,   115,   155,   175,   694,   175,   175,   349,   702,
      83,   254,   607,   743,   744,   746,   747,   748,   271,   349,
     713,   328,   720,    84,   143,   723,   349,   726,   104,   730,
     750,   741,   175,   162,   751,   752,   741,   175,   349,   174,
     174,   174,   607,   607,   607,   607,   303,   543,   309,   319,
     607,   543,   543,   574,   575,   539,   175,   175,   175,   565,
     572,   552,    75,   572,    75,    72,   553,   681,   174,   681,
     564,   104,   108,   578,   686,   175,   175,   191,   191,   104,
     175,   102,   614,   175,   175,   206,   667,   681,   175,   349,
     350,   271,   382,   271,    16,   686,   507,   507,   507,   256,
     279,   681,   258,   274,   287,   447,   131,   132,   426,   672,
     328,   495,   686,   111,   174,   323,   531,   532,   686,   686,
     270,   279,   681,   683,   691,   362,   366,   378,   379,   380,
     383,   388,   400,   405,   504,   625,   655,   175,   349,   173,
     681,   452,   174,   270,   419,   175,    66,    80,    86,   239,
     242,   281,   307,   313,   318,   371,   373,   374,   383,   388,
     400,   405,   461,   464,   466,   467,   468,   472,   474,   480,
     482,   483,   504,   508,   509,   561,   681,   681,   238,   243,
     238,   173,   454,   449,   655,   671,   685,   685,   685,   642,
     685,   577,   656,   681,   175,   175,   175,   140,   607,   704,
     710,   711,   712,   742,   741,   254,   746,   175,   349,   328,
     110,   149,   151,   152,   714,   718,   741,   681,   721,   144,
     144,   175,   608,   741,   126,   150,   608,   731,   732,   733,
     734,   735,   750,   286,   175,   175,   544,   540,   541,   541,
     349,   175,   112,   175,   175,   349,   543,   175,   175,   353,
      75,   572,    16,   270,   555,   572,   174,   683,   577,   579,
     589,   589,   577,   104,    85,   347,   615,   616,   175,   175,
     506,   681,   336,   279,   254,    99,   110,   177,   254,   269,
     269,   456,   128,   133,   254,   428,   429,   432,   433,   435,
     436,   439,   686,   349,   531,   532,   174,   521,   521,   349,
     240,     3,   681,   349,   380,   425,   681,   272,     3,   173,
     422,   449,    77,   239,   546,   240,   469,   470,   655,   284,
     453,   473,   579,   308,   477,   478,   607,   579,   317,   462,
     315,   351,   672,   284,   486,   672,     5,   486,   229,   338,
     492,   175,   175,   175,   175,   175,   349,   350,   174,   349,
     349,   713,   349,   175,   744,   681,   745,   270,   270,   270,
     270,   175,   175,   328,   749,   750,   349,   110,   152,   736,
     163,   175,   175,   175,   607,   607,   607,   574,   572,   456,
     579,   555,   683,   175,   585,   187,   341,   348,   608,   617,
     618,   619,   620,   262,   278,     3,   110,   110,   434,   606,
     456,   456,   129,   434,   432,   110,   177,   229,   274,   277,
     287,   446,   448,   686,    83,   530,   175,   522,   523,   681,
     524,   524,   686,   686,   681,   174,    83,   172,   175,    64,
      84,   256,   240,   568,   458,   681,   174,   174,   579,   310,
     477,   479,   308,   475,   476,   309,   462,   464,   579,   174,
     239,   243,   461,     4,   459,   686,   239,   243,   271,   335,
     336,   493,   494,   112,   497,   498,   656,   681,   607,   705,
     706,   708,   710,   712,   704,   710,   110,    83,   110,   110,
     110,   681,   732,   270,   270,   175,    83,   161,   164,   753,
     754,   759,   175,   175,   175,   175,   618,   333,   344,   344,
     342,   623,   686,   681,   277,   328,   110,   174,   269,   655,
     349,   230,   175,   349,     3,   527,   527,   278,   431,   432,
     172,    85,    85,   458,   350,   471,   607,   453,   309,   462,
     319,   607,   475,   479,   462,   464,   134,   316,   485,   678,
     240,     5,   240,     5,   284,   333,   496,   284,   496,   494,
     337,   308,   500,   175,   349,   328,   707,   349,   155,   749,
     152,   152,   157,   681,   760,     3,   755,   756,    83,   154,
     157,   761,   762,   764,   765,   191,    83,   109,   341,   346,
     655,   130,   579,   455,   686,   523,    59,   528,   528,   681,
     175,   349,   681,   175,   349,   175,   462,   464,   307,   309,
     319,   310,   314,   481,   134,   319,   462,   175,   349,   672,
     458,   459,   458,   459,   495,   495,   495,   495,   333,   334,
     499,   174,   318,   371,   373,   383,   388,   465,   466,   501,
     508,   509,   561,   706,   681,   709,   710,   160,   757,   757,
     157,   681,   767,   756,   766,   763,   764,   341,   348,   608,
     621,   622,   345,   333,   455,   174,   437,   175,   113,   445,
      60,   529,   529,   432,   607,   134,   462,   307,   462,   579,
     319,   319,   319,   678,   681,   681,   681,   681,   579,   317,
     756,   758,   333,   343,   344,   445,   407,    39,    40,    71,
     444,   270,   441,   442,   443,    61,   530,   530,   309,   313,
     315,   672,   175,   463,   443,   175,    64,    65,   270,   442,
     270,   441,   325,   519,   462,   484,   681,   319,   465,    42,
      43,    83,   279,   440,   440,   174,   481,   134,    41,   110,
     254,   520,   670,   175,   349,   670
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (m, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, m)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, m); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvc *m)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, m)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    mvc *m;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (m);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvc *m)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, m)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    mvc *m;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, m);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, mvc *m)
#else
static void
yy_reduce_print (yyvsp, yyrule, m)
    YYSTYPE *yyvsp;
    int yyrule;
    mvc *m;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , m);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, m); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, mvc *m)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, m)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    mvc *m;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (m);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (mvc *m);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (mvc *m)
#else
int
yyparse (m)
    mvc *m;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 626 "src/sql/server/sql_parser.y"
    {
		if (m->sym) {
			append_symbol(m->sym->data.lval, (yyval.sym));
			(yyval.sym) = m->sym;
		} else {
			m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym);
		}
		YYACCEPT;
	}
    break;

  case 3:
#line 636 "src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 4:
#line 641 "src/sql/server/sql_parser.y"
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[(3) - (4)].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[(3) - (4)].sym);
			  }
			  YYACCEPT;
			}
    break;

  case 5:
#line 650 "src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 6:
#line 655 "src/sql/server/sql_parser.y"
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[(3) - (4)].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[(3) - (4)].sym);
			  }
			  YYACCEPT;
			}
    break;

  case 7:
#line 665 "src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 8:
#line 670 "src/sql/server/sql_parser.y"
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[(3) - (4)].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[(3) - (4)].sym);
			  }
			  YYACCEPT;
			}
    break;

  case 9:
#line 680 "src/sql/server/sql_parser.y"
    {
			  if (m->scanner.mode == LINE_1) {
				yyerror(m, "SQL debugging only supported in interactive mode");
				YYABORT;
			  }
		  	  m->emod |= mod_debug;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 10:
#line 689 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 11:
#line 690 "src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 12:
#line 695 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 13:
#line 696 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym); YYACCEPT; }
    break;

  case 14:
#line 697 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 15:
#line 698 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 16:
#line 699 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 17:
#line 700 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYABORT; }
    break;

  case 18:
#line 705 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 20:
#line 709 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 21:
#line 713 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 22:
#line 714 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 23:
#line 718 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 24:
#line 719 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 36:
#line 742 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(2) - (5)].l));
		append_list(l, (yyvsp[(3) - (5)].l));
		append_symbol(l, (yyvsp[(4) - (5)].sym));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
    break;

  case 39:
#line 753 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 40:
#line 754 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 41:
#line 759 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[(2) - (2)].l)); }
    break;

  case 42:
#line 760 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 43:
#line 765 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(1) - (2)].l) );
		append_type(l, &(yyvsp[(2) - (2)].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 44:
#line 770 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l) );
		append_type(l, &(yyvsp[(4) - (4)].type) );
		(yyval.l) = append_symbol((yyvsp[(1) - (4)].l), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 45:
#line 779 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, (yyvsp[(2) - (4)].sval) );
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 46:
#line 784 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (4)].l));
	  	append_symbol(l, (yyvsp[(4) - (4)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_SET, l ); }
    break;

  case 47:
#line 789 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 48:
#line 797 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 49:
#line 805 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 50:
#line 813 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 51:
#line 821 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 52:
#line 827 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 53:
#line 836 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(4) - (7)].l));
		append_symbol(l, (yyvsp[(5) - (7)].sym));
		append_symbol(l, (yyvsp[(6) - (7)].sym));
		append_list(l, (yyvsp[(7) - (7)].l));
		append_int(l, (yyvsp[(3) - (7)].bval));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
    break;

  case 54:
#line 844 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(4) - (5)].l));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		append_int(l, (yyvsp[(3) - (5)].bval));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
    break;

  case 55:
#line 853 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (1)].sval) );
	  append_string((yyval.l), NULL ); }
    break;

  case 56:
#line 857 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[(2) - (2)].sval) ); }
    break;

  case 57:
#line 861 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (3)].sval) );
	  append_string((yyval.l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 59:
#line 870 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 60:
#line 871 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[(4) - (4)].sval) ); }
    break;

  case 61:
#line 875 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 63:
#line 880 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 64:
#line 882 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 70:
#line 888 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 71:
#line 889 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 72:
#line 893 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 73:
#line 894 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_role; }
    break;

  case 74:
#line 899 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
    break;

  case 75:
#line 909 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
    break;

  case 76:
#line 918 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 77:
#line 920 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 78:
#line 924 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 79:
#line 925 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 80:
#line 929 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 81:
#line 930 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 82:
#line 935 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 83:
#line 936 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 84:
#line 941 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
    break;

  case 85:
#line 949 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
    break;

  case 86:
#line 958 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 87:
#line 959 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 88:
#line 963 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 89:
#line 964 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 90:
#line 969 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (1)].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
    break;

  case 91:
#line 973 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (3)].l));
	  append_symbol((yyval.l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 92:
#line 979 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(L(), (yyvsp[(1) - (1)].i_val)); }
    break;

  case 93:
#line 981 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(append_int(L(), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val)); }
    break;

  case 94:
#line 985 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
    break;

  case 95:
#line 986 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
    break;

  case 96:
#line 990 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(2) - (2)].l)); }
    break;

  case 97:
#line 991 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[(1) - (1)].l)); }
    break;

  case 98:
#line 992 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[(1) - (1)].l)); }
    break;

  case 99:
#line 1003 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 100:
#line 1004 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 102:
#line 1009 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 103:
#line 1011 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 104:
#line 1015 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
    break;

  case 105:
#line 1016 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
    break;

  case 106:
#line 1017 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_TRUNCATE,NULL); }
    break;

  case 107:
#line 1018 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[(2) - (2)].l)); }
    break;

  case 108:
#line 1019 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 109:
#line 1020 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 110:
#line 1021 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
    break;

  case 111:
#line 1025 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 112:
#line 1027 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 113:
#line 1031 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 114:
#line 1032 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 115:
#line 1040 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 116:
#line 1045 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, append_list(L(),(yyvsp[(6) - (6)].l))));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 117:
#line 1050 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 118:
#line 1055 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 119:
#line 1060 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 120:
#line 1065 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 121:
#line 1070 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 122:
#line 1075 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (4)].sval));
	  append_list(l, (yyvsp[(4) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 123:
#line 1080 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
    break;

  case 124:
#line 1085 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  dlist *p = L();
	  append_string(l, NULL);
	  append_string(p, (yyvsp[(6) - (10)].sval));
	  append_string(p, NULL);
	  append_int(p, (yyvsp[(4) - (10)].i_val));
	  append_string(p, (yyvsp[(10) - (10)].sval));
	  append_list(l, p);
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 125:
#line 1097 "src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (4)].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[(2) - (4)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 126:
#line 1103 "src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 127:
#line 1110 "src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (7)].sval));
				  append_string(l, (yyvsp[(7) - (7)].sval));
				  append_int(l, (yyvsp[(2) - (7)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 128:
#line 1120 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
    break;

  case 129:
#line 1125 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
    break;

  case 130:
#line 1129 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
    break;

  case 131:
#line 1133 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[(2) - (4)].sval)); }
    break;

  case 132:
#line 1135 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  if (!strlen((yyvsp[(5) - (5)].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 133:
#line 1143 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 134:
#line 1151 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
    break;

  case 135:
#line 1156 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
    break;

  case 136:
#line 1161 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  append_int(l, 0);
	  append_int(l, FALSE ); /* no if exists check */
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 137:
#line 1170 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 138:
#line 1171 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 139:
#line 1175 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 140:
#line 1176 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 141:
#line 1177 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 147:
#line 1199 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
    break;

  case 148:
#line 1210 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (3)].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
    break;

  case 149:
#line 1227 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
    break;

  case 150:
#line 1236 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 151:
#line 1237 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 152:
#line 1241 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 153:
#line 1242 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 154:
#line 1246 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 155:
#line 1247 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 156:
#line 1248 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 157:
#line 1252 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 158:
#line 1253 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
    break;

  case 159:
#line 1254 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[(3) - (3)].l_val)));  }
    break;

  case 160:
#line 1255 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[(3) - (3)].sym)));  }
    break;

  case 161:
#line 1256 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 162:
#line 1260 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 163:
#line 1261 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 164:
#line 1262 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
    break;

  case 165:
#line 1263 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 166:
#line 1264 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
    break;

  case 167:
#line 1265 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 168:
#line 1266 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
    break;

  case 169:
#line 1267 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
    break;

  case 170:
#line 1275 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (9)].sval));
	  append_int(l, (yyvsp[(2) - (9)].i_val));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
    break;

  case 171:
#line 1284 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 172:
#line 1285 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ordered_idx; }
    break;

  case 173:
#line 1286 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imprints_idx; }
    break;

  case 174:
#line 1287 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 175:
#line 1308 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval));
	  append_int(l, (yyvsp[(3) - (3)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
    break;

  case 176:
#line 1313 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (10)].sval));
	  append_string(l, (yyvsp[(6) - (10)].sval));
	  append_string(l, (yyvsp[(8) - (10)].sval));
	  append_string(l, (yyvsp[(10) - (10)].sval));
	  append_int(l, (yyvsp[(4) - (10)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
    break;

  case 177:
#line 1323 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 178:
#line 1324 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 179:
#line 1325 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
    break;

  case 180:
#line 1329 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 181:
#line 1330 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 182:
#line 1335 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, SQL_PERSIST);
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[(2) - (5)].bval));
	  append_list(l, (yyvsp[(5) - (5)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 183:
#line 1347 "src/sql/server/sql_parser.y"
    {
      dlist *l = L();
      append_list(l, (yyvsp[(3) - (6)].l));
      append_symbol(l, (yyvsp[(6) - (6)].sym));
      (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE_LOADER, l);
    }
    break;

  case 184:
#line 1354 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_STREAM;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 185:
#line 1365 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_MERGE_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 186:
#line 1376 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_REPLICA_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 187:
#line 1390 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_REMOTE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_symbol(l, (yyvsp[(5) - (7)].sym));
	  append_int(l, commit_action);
	  append_string(l, (yyvsp[(7) - (7)].sval));
	  append_int(l, (yyvsp[(3) - (7)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 188:
#line 1401 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, (yyvsp[(1) - (6)].i_val));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  if ((yyvsp[(1) - (6)].i_val) != SQL_PERSIST)
		commit_action = (yyvsp[(6) - (6)].i_val);
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[(3) - (6)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 189:
#line 1416 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 190:
#line 1417 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 191:
#line 1418 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 192:
#line 1419 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 193:
#line 1420 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 194:
#line 1421 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 195:
#line 1425 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_COMMIT; }
    break;

  case 196:
#line 1426 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DELETE; }
    break;

  case 197:
#line 1427 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_PRESERVE; }
    break;

  case 198:
#line 1428 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DROP; }
    break;

  case 199:
#line 1432 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[(2) - (3)].l)); }
    break;

  case 200:
#line 1433 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[(1) - (1)].l)); }
    break;

  case 201:
#line 1441 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (4)].l));
			  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym)); 
			  append_int((yyval.l), (yyvsp[(4) - (4)].i_val)); }
    break;

  case 202:
#line 1447 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 203:
#line 1448 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 204:
#line 1449 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 205:
#line 1454 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 206:
#line 1456 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 212:
#line 1463 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 213:
#line 1464 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 214:
#line 1469 "src/sql/server/sql_parser.y"
    {
			dlist *l = L();
			append_string(l, (yyvsp[(1) - (3)].sval));
			append_type(l, &(yyvsp[(2) - (3)].type));
			append_list(l, (yyvsp[(3) - (3)].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 215:
#line 1477 "src/sql/server/sql_parser.y"
    { /* SERIAL = INTEGER GENERATED ALWAYS AS IDENTITY PRIMARY KEY */
			/* handle multi-statements by wrapping them in a list */
			sql_subtype it;
			dlist* stmts;
			/* note: sql_next_seq_name uses sa_alloc */
			str sn = sql_next_seq_name(m);
			dlist *p; /* primary key */
			/* sequence generation code */
			dlist *l = L();
			/* finally all the options */
			dlist *o = L();

			/* the name of the sequence */
			dlist *seqn1 = L(), *seqn2 = L();

			if (m->scanner.schema)
				append_string(seqn1, m->scanner.schema);
			append_list(l, append_string(seqn1, sn));
			if ((yyvsp[(2) - (2)].i_val) == 1)
				sql_find_subtype(&it, "bigint", 64, 0);
			else
				sql_find_subtype(&it, "int", 32, 0);
    			append_symbol(o, _symbol_create_list(SQL_TYPE, append_type(L(),&it)));
			append_list(l, o);
			append_int(l, 1); /* to be dropped */

			if (m->sym) {
				stmts = m->sym->data.lval;
			} else {
				stmts = L();
				m->sym = _symbol_create_list(SQL_MULSTMT, stmts);
			}	
			append_symbol(stmts, _symbol_create_list(SQL_CREATE_SEQ, l));

			l = L();
			append_string(l, (yyvsp[(1) - (2)].sval));
			append_type(l, &it);
			o = L();
			if (m->scanner.schema)
				append_string(seqn2, m->scanner.schema);
			append_string(seqn2, sn);
			append_symbol(o, _symbol_create_symbol(SQL_DEFAULT, _symbol_create_list(SQL_NEXT, seqn2)));
			p = L();
			append_string(p, NULL);
			append_symbol(p, _symbol_create(SQL_PRIMARY_KEY, NULL));
			append_symbol(o, _symbol_create_list(SQL_CONSTRAINT, p));
			append_list(l, o);
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 216:
#line 1529 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 218:
#line 1535 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 219:
#line 1537 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 220:
#line 1543 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (6)].sval) );
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
    break;

  case 221:
#line 1551 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 222:
#line 1553 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 226:
#line 1559 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 227:
#line 1563 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 228:
#line 1569 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 229:
#line 1577 "src/sql/server/sql_parser.y"
    {
		/* handle multi-statements by wrapping them in a list */
		sql_subtype it;
		dlist* stmts;
		/* note: sql_next_seq_name uses sa_alloc */
		str sn = sql_next_seq_name(m);
		/* sequence generation code */
		dlist *l = L();
		/* the name of the sequence */
		append_list(l, append_string(L(), sn));
		if (!(yyvsp[(5) - (5)].l))
			(yyvsp[(5) - (5)].l) = L();
		sql_find_subtype(&it, "int", 32, 0);
    		append_symbol((yyvsp[(5) - (5)].l), _symbol_create_list(SQL_TYPE, append_type(L(),&it)));

		/* finally all the options */
		append_list(l, (yyvsp[(5) - (5)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, _symbol_create_list(SQL_NEXT, append_string(L(), sn)));

		if (m->sym) {
			stmts = m->sym->data.lval;
		} else {
			stmts = L();
			m->sym = _symbol_create_list(SQL_MULSTMT, stmts);
		}	
		append_symbol(stmts, _symbol_create_list(SQL_CREATE_SEQ, l));
	}
    break;

  case 230:
#line 1606 "src/sql/server/sql_parser.y"
    {
		/* handle multi-statements by wrapping them in a list */
		sql_subtype it;
		dlist* stmts;
		/* note: sql_next_seq_name uses sa_alloc */
		str sn = sql_next_seq_name(m);
		/* sequence generation code */
		dlist *l = L();
		/* finally all the options */
		dlist *o = L();

		/* the name of the sequence */
		dlist *seqn1 = L(), *seqn2 = L();

		if (m->scanner.schema)
			append_string(seqn1, m->scanner.schema);
		append_list(l, append_string(seqn1, sn));
		sql_find_subtype(&it, "int", 32, 0);
    		append_symbol(o, _symbol_create_list(SQL_TYPE, append_type(L(),&it)));
		append_list(l, o);
		append_int(l, 0); /* to be dropped */
		if (m->scanner.schema)
			append_string(seqn2, m->scanner.schema);
		append_string(seqn2, sn);
		(yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, _symbol_create_list(SQL_NEXT, seqn2));

		if (m->sym) {
			stmts = m->sym->data.lval;
		} else {
			stmts = L();
			m->sym = _symbol_create_list(SQL_MULSTMT, stmts);
		}	
		append_symbol(stmts, _symbol_create_list(SQL_CREATE_SEQ, l));
	}
    break;

  case 231:
#line 1643 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 232:
#line 1644 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 233:
#line 1651 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 234:
#line 1660 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 235:
#line 1661 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 236:
#line 1665 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 237:
#line 1666 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 238:
#line 1667 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 239:
#line 1668 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 240:
#line 1669 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 241:
#line 1673 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(3) - (3)].i_val) << 8); }
    break;

  case 242:
#line 1677 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 243:
#line 1681 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
    break;

  case 244:
#line 1682 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 245:
#line 1683 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 246:
#line 1684 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 247:
#line 1685 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 248:
#line 1689 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 249:
#line 1690 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 250:
#line 1691 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 251:
#line 1692 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 252:
#line 1696 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 253:
#line 1697 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 254:
#line 1701 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
    break;

  case 255:
#line 1702 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
    break;

  case 256:
#line 1703 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
    break;

  case 257:
#line 1704 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
    break;

  case 258:
#line 1707 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(2) - (5)].l) );
			  append_list(l, (yyvsp[(3) - (5)].l) );
			  append_int(l, (yyvsp[(4) - (5)].i_val) );
			  append_int(l, (yyvsp[(5) - (5)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 260:
#line 1720 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[(2) - (2)].l)); }
    break;

  case 261:
#line 1722 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[(3) - (3)].l)); }
    break;

  case 262:
#line 1726 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(5) - (8)].l) );
			  append_list(l, (yyvsp[(3) - (8)].l) );
			  append_list(l, (yyvsp[(6) - (8)].l) );
			  append_int(l, (yyvsp[(7) - (8)].i_val) );
			  append_int(l, (yyvsp[(8) - (8)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 263:
#line 1738 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 264:
#line 1743 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 265:
#line 1745 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 266:
#line 1749 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 267:
#line 1754 "src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, (yyvsp[(3) - (7)].l));
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_symbol(l, (yyvsp[(6) - (7)].sym));
	  append_int(l, (yyvsp[(7) - (7)].bval));
	  append_int(l, TRUE);	/* persistent view */
	  append_int(l, (yyvsp[(1) - (7)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 269:
#line 1767 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 272:
#line 1776 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 273:
#line 1777 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 274:
#line 1781 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 276:
#line 1786 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 277:
#line 1791 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				append_list(l, (yyvsp[(3) - (6)].l));
				append_string(l, (yyvsp[(6) - (6)].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
    break;

  case 278:
#line 1798 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 281:
#line 1813 "src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (11)].l));
				append_list(f, (yyvsp[(5) - (11)].l));
				append_symbol(f, (yyvsp[(8) - (11)].sym));
				append_list(f, (yyvsp[(11) - (11)].l));
				append_list(f, NULL);
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[(1) - (11)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 282:
#line 1827 "src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (9)].l));
				append_list(f, (yyvsp[(5) - (9)].l));
				append_symbol(f, (yyvsp[(8) - (9)].sym));
				append_list(f, NULL);
				append_list(f, (yyvsp[(9) - (9)].l));
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_SQL);
				append_int(f, (yyvsp[(1) - (9)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 283:
#line 1841 "src/sql/server/sql_parser.y"
    {
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(10) - (11)].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p') {
				// code does not get cleaner than this people
				if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON3_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY3;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON3") == 0) {
					lang = FUNC_LANG_PY3;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON2_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY2;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON2") == 0) {
					lang = FUNC_LANG_PY2;
				} else {
					lang = FUNC_LANG_PY;
				}
			} else if (l == 'C' || l == 'c') {
				if (strcasecmp((yyvsp[(10) - (11)].sval), "CPP") == 0) {
					lang = FUNC_LANG_CPP;
				} else {
					lang = FUNC_LANG_C;
				}
			}
			else if (l == 'J' || l == 'j')
				lang = FUNC_LANG_J;
			else {
				char *msg = sql_message("Language name R, C, PYTHON[3], PYTHON[3]_MAP or J(avascript):expected, received '%c'", l);
				yyerror(m, msg);
				_DELETE(msg);
			}

			append_list(f, (yyvsp[(3) - (11)].l));
			append_list(f, (yyvsp[(5) - (11)].l));
			append_symbol(f, (yyvsp[(8) - (11)].sym));
			append_list(f, NULL);
			append_list(f, append_string(L(), (yyvsp[(11) - (11)].sval)));
			append_int(f, F_FUNC);
			append_int(f, lang);
			append_int(f, (yyvsp[(1) - (11)].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f );
		}
    break;

  case 284:
#line 1891 "src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(4) - (10)].l));
				append_list(f, (yyvsp[(6) - (10)].l)); 
				/* no returns - use OID */
				append_symbol(f, NULL); 
				append_list(f, (yyvsp[(10) - (10)].l));
				append_list(f, NULL);
				append_int(f, F_FILT);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[(1) - (10)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 285:
#line 1906 "src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (11)].l));
				append_list(f, (yyvsp[(5) - (11)].l));
				append_symbol(f, (yyvsp[(8) - (11)].sym));
				append_list(f, (yyvsp[(11) - (11)].l));
				append_list(f, NULL);
				append_int(f, F_AGGR);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[(1) - (11)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 286:
#line 1920 "src/sql/server/sql_parser.y"
    {
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(10) - (11)].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p') {
				if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON3_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY3;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON3") == 0) {
					lang = FUNC_LANG_PY3;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON2_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY2;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON2") == 0) {
					lang = FUNC_LANG_PY2;
				} else {
					lang = FUNC_LANG_PY;
				}
			} else if (l == 'C' || l == 'c') {
				if (strcasecmp((yyvsp[(10) - (11)].sval), "CPP") == 0) {
					lang = FUNC_LANG_CPP;
				} else {
					lang = FUNC_LANG_C;
				}
			}
			else if (l == 'J' || l == 'j')
				lang = FUNC_LANG_J;
			else {
				char *msg = sql_message("Language name R, C, PYTHON[3], PYTHON[3]_MAP or J(avascript):expected, received '%c'", l);
				yyerror(m, msg);
				_DELETE(msg);
			}

			append_list(f, (yyvsp[(3) - (11)].l));
			append_list(f, (yyvsp[(5) - (11)].l));
			append_symbol(f, (yyvsp[(8) - (11)].sym));
			append_list(f, NULL);
			append_list(f, append_string(L(), (yyvsp[(11) - (11)].sval)));
			append_int(f, F_AGGR);
			append_int(f, lang);
			append_int(f, (yyvsp[(1) - (11)].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 287:
#line 1969 "src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (9)].l));
				append_list(f, (yyvsp[(5) - (9)].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, (yyvsp[(9) - (9)].l));
				append_list(f, NULL);
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[(1) - (9)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 288:
#line 1982 "src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (7)].l));
				append_list(f, (yyvsp[(5) - (7)].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, NULL); 
				append_list(f, (yyvsp[(7) - (7)].l));
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_SQL);
				append_int(f, (yyvsp[(1) - (7)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 289:
#line 1994 "src/sql/server/sql_parser.y"
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(8) - (9)].sval);
			/* other languages here if we ever get to it */
			if (l == 'P' || l == 'p') {
				lang = FUNC_LANG_PY;
			} else
				yyerror(m, sql_message("Language name P(ython) expected, received '%c'", l));

			append_list(f, (yyvsp[(3) - (9)].l));
			append_list(f, (yyvsp[(5) - (9)].l));
			append_symbol(f, NULL);
			append_list(f, NULL); 
			append_list(f, append_string(L(), (yyvsp[(9) - (9)].sval)));
			append_int(f, F_LOADER);
			append_int(f, lang);
			append_int(f, (yyvsp[(1) - (9)].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 290:
#line 2017 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[(1) - (1)].sym)); }
    break;

  case 291:
#line 2021 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(2) - (5)].l),(yyvsp[(3) - (5)].sym)); }
    break;

  case 292:
#line 2025 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(3) - (6)].l),(yyvsp[(4) - (6)].sym)); }
    break;

  case 293:
#line 2040 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 294:
#line 2042 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 295:
#line 2046 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 296:
#line 2048 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 323:
#line 2096 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 324:
#line 2100 "src/sql/server/sql_parser.y"
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[(2) - (2)].sym));}
    break;

  case 325:
#line 2105 "src/sql/server/sql_parser.y"
    { dlist *l = L(); 
		  append_list( l, (yyvsp[(1) - (4)].l));
		  append_list( l, (yyvsp[(3) - (4)].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
    break;

  case 327:
#line 2116 "src/sql/server/sql_parser.y"
    {(yyval.l) = L();}
    break;

  case 328:
#line 2117 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 329:
#line 2119 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 330:
#line 2124 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[(2) - (2)].sym)); }
    break;

  case 333:
#line 2131 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[(3) - (4)].sym)); }
    break;

  case 334:
#line 2136 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (6)].sym)),(yyvsp[(3) - (6)].l)),(yyvsp[(4) - (6)].l))); }
    break;

  case 335:
#line 2142 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[(2) - (5)].l)),(yyvsp[(3) - (5)].l))); }
    break;

  case 336:
#line 2150 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 337:
#line 2158 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 338:
#line 2160 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 339:
#line 2165 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 340:
#line 2173 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 341:
#line 2175 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 342:
#line 2179 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 343:
#line 2180 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 344:
#line 2190 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (7)].sym));
		  append_list(l, (yyvsp[(4) - (7)].l));
		  append_symbol(l, (yyvsp[(5) - (7)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
    break;

  case 345:
#line 2201 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 346:
#line 2203 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[(2) - (2)].l)); }
    break;

  case 347:
#line 2206 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  append_symbol(l, (yyvsp[(5) - (5)].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
    break;

  case 348:
#line 2220 "src/sql/server/sql_parser.y"
    { dlist *l;
		  char *label = (yyvsp[(1) - (8)].sval)?(yyvsp[(1) - (8)].sval):(yyvsp[(8) - (8)].sval);
		  if ((yyvsp[(1) - (8)].sval) && (yyvsp[(8) - (8)].sval) && strcmp((yyvsp[(1) - (8)].sval), (yyvsp[(8) - (8)].sval)) != 0) {
			(yyval.sym) = NULL;
			yyerror(m, "WHILE: labels should match");
			YYABORT;
		  }
 		  l = L();
		  append_symbol(l, (yyvsp[(3) - (8)].sym)); /* condition */
		  append_list(l, (yyvsp[(5) - (8)].l));	/* statements */
		  append_string(l, label);
		  (yyval.sym) = _symbol_create_list(SQL_WHILE, l);
		}
    break;

  case 349:
#line 2236 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 351:
#line 2241 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 353:
#line 2247 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[(1) - (2)].sval));
			  	  append_type((yyval.l), &(yyvsp[(2) - (2)].type));
				}
    break;

  case 354:
#line 2252 "src/sql/server/sql_parser.y"
    { 
				  append_string((yyval.l), (yyvsp[(3) - (4)].sval));
			  	  append_type((yyval.l), &(yyvsp[(4) - (4)].type));
				}
    break;

  case 355:
#line 2260 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(3) - (4)].l)); }
    break;

  case 356:
#line 2262 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(1) - (1)].type))); }
    break;

  case 358:
#line 2267 "src/sql/server/sql_parser.y"
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
    break;

  case 359:
#line 2271 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 360:
#line 2276 "src/sql/server/sql_parser.y"
    { dlist *p = L();
			  append_string(p, (yyvsp[(3) - (4)].sval));
			  append_type(p, &(yyvsp[(4) - (4)].type));
			  (yyval.l) = append_list((yyvsp[(1) - (4)].l), p); }
    break;

  case 361:
#line 2281 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[(1) - (2)].sval));
			  append_type(p, &(yyvsp[(2) - (2)].type));
			  (yyval.l) = append_list(l, p); }
    break;

  case 362:
#line 2331 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (9)].l));
	  append_int(l, (yyvsp[(4) - (9)].i_val));
	  append_symbol(l, (yyvsp[(5) - (9)].sym));
	  append_list(l, (yyvsp[(7) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  append_list(l, (yyvsp[(9) - (9)].l));
	  append_int(l, (yyvsp[(1) - (9)].bval));
	  (yyval.sym) = _symbol_create_list(SQL_CREATE_TRIGGER, l); 
	}
    break;

  case 363:
#line 2344 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 364:
#line 2345 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 365:
#line 2350 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
    break;

  case 366:
#line 2351 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
    break;

  case 367:
#line 2352 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TRUNCATE, NULL); }
    break;

  case 368:
#line 2353 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
    break;

  case 369:
#line 2354 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[(3) - (3)].l)); }
    break;

  case 370:
#line 2358 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 371:
#line 2359 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 372:
#line 2363 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 373:
#line 2365 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].l)); }
    break;

  case 374:
#line 2370 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 375:
#line 2371 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 376:
#line 2372 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 377:
#line 2373 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 382:
#line 2388 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[(1) - (3)].i_val));
	  append_symbol((yyval.l), (yyvsp[(2) - (3)].sym));
	  append_list((yyval.l), (yyvsp[(3) - (3)].l));
	}
    break;

  case 383:
#line 2395 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 384:
#line 2396 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 385:
#line 2400 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 386:
#line 2401 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 387:
#line 2405 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 388:
#line 2406 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 389:
#line 2411 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 390:
#line 2414 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 391:
#line 2419 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
    break;

  case 392:
#line 2425 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );	
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
    break;

  case 393:
#line 2431 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
    break;

  case 394:
#line 2437 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
    break;

  case 395:
#line 2443 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_LOADER );
	  (yyval.l) = l; }
    break;

  case 396:
#line 2452 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FUNC );
	  append_int(l, (yyvsp[(2) - (4)].bval) );
	  (yyval.l) = l; }
    break;

  case 397:
#line 2459 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, (yyvsp[(5) - (5)].l) );
	  append_int(l, F_FILT );
	  append_int(l, (yyvsp[(3) - (5)].bval) );
	  (yyval.l) = l; }
    break;

  case 398:
#line 2466 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_AGGR );
	  append_int(l, (yyvsp[(2) - (4)].bval) );
	  (yyval.l) = l; }
    break;

  case 399:
#line 2473 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_PROC );
	  append_int(l, (yyvsp[(2) - (4)].bval) );
	  (yyval.l) = l; }
    break;

  case 400:
#line 2480 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_LOADER );
	  append_int(l, (yyvsp[(2) - (4)].bval) );
	  (yyval.l) = l; }
    break;

  case 401:
#line 2490 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  append_int(l, (yyvsp[(3) - (5)].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 402:
#line 2496 "src/sql/server/sql_parser.y"
    { dlist *l = (yyvsp[(2) - (3)].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 403:
#line 2501 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 404:
#line 2510 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(6) - (6)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 405:
#line 2519 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 406:
#line 2528 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 407:
#line 2537 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_LOADER );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 408:
#line 2546 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  append_int(l, (yyvsp[(3) - (5)].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
    break;

  case 409:
#line 2552 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
    break;

  case 410:
#line 2556 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 411:
#line 2557 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 412:
#line 2558 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[(3) - (3)].l) ); }
    break;

  case 413:
#line 2560 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, (yyvsp[(3) - (4)].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, l );
	}
    break;

  case 414:
#line 2568 "src/sql/server/sql_parser.y"
    {(yyval.l) = NULL;}
    break;

  case 415:
#line 2569 "src/sql/server/sql_parser.y"
    {(yyval.l) = (yyvsp[(2) - (3)].l);}
    break;

  case 416:
#line 2570 "src/sql/server/sql_parser.y"
    {(yyval.l) = L(); }
    break;

  case 417:
#line 2574 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_type(l, &(yyvsp[(1) - (1)].type) );
				  (yyval.l)= l; }
    break;

  case 418:
#line 2577 "src/sql/server/sql_parser.y"
    { append_type((yyvsp[(3) - (3)].l), &(yyvsp[(1) - (3)].type));
				  (yyval.l) = (yyvsp[(3) - (3)].l); }
    break;

  case 419:
#line 2582 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 420:
#line 2583 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 421:
#line 2584 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 429:
#line 2604 "src/sql/server/sql_parser.y"
    {
	  (yyval.sym) = (yyvsp[(1) - (1)].sym);
	  m->type = Q_TRANS;					}
    break;

  case 430:
#line 2611 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[(3) - (3)].bval));  }
    break;

  case 431:
#line 2613 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[(2) - (2)].sval)); }
    break;

  case 432:
#line 2615 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[(3) - (3)].sval)); }
    break;

  case 433:
#line 2617 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[(3) - (4)].bval)), (yyvsp[(4) - (4)].sval) )); }
    break;

  case 434:
#line 2621 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 435:
#line 2623 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(4) - (4)].i_val)); }
    break;

  case 436:
#line 2625 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 437:
#line 2629 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; }
    break;

  case 439:
#line 2635 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 440:
#line 2637 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(1) - (3)].i_val) | (yyvsp[(3) - (3)].i_val)); }
    break;

  case 441:
#line 2642 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_readonly; }
    break;

  case 442:
#line 2643 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_writable; }
    break;

  case 443:
#line 2644 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_serializable; }
    break;

  case 444:
#line 2645 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; /* not supported */ }
    break;

  case 449:
#line 2656 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 450:
#line 2657 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 451:
#line 2661 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 452:
#line 2662 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 453:
#line 2663 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 454:
#line 2667 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 455:
#line 2668 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 456:
#line 2673 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (14)].l));
	  append_list(l, (yyvsp[(5) - (14)].l));
	  append_list(l, (yyvsp[(7) - (14)].l));
	  append_list(l, (yyvsp[(8) - (14)].l));
	  append_list(l, (yyvsp[(9) - (14)].l));
	  append_list(l, (yyvsp[(2) - (14)].l));
	  append_string(l, (yyvsp[(10) - (14)].sval));
	  append_int(l, (yyvsp[(11) - (14)].bval));
	  append_int(l, (yyvsp[(12) - (14)].bval));
	  append_int(l, (yyvsp[(13) - (14)].bval));
	  append_list(l, (yyvsp[(14) - (14)].l));
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
    break;

  case 457:
#line 2687 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (13)].l));
	  append_list(l, (yyvsp[(5) - (13)].l));
	  append_list(l, NULL);
	  append_list(l, (yyvsp[(8) - (13)].l));
	  append_list(l, (yyvsp[(9) - (13)].l));
	  append_list(l, (yyvsp[(2) - (13)].l));
	  append_string(l, (yyvsp[(10) - (13)].sval));
	  append_int(l, (yyvsp[(11) - (13)].bval));
	  append_int(l, (yyvsp[(12) - (13)].bval));
	  append_int(l, (yyvsp[(13) - (13)].bval));
	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
    break;

  case 458:
#line 2701 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_COPYLOADER, l ); }
    break;

  case 459:
#line 2706 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  if ((yyvsp[(2) - (9)].l) != NULL) {
	  	yyerror(m, "COPY INTO: cannot pass number of records when using binary COPY INTO");
		YYABORT;
	  }
	  append_list(l, (yyvsp[(5) - (9)].l));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  append_int(l, (yyvsp[(9) - (9)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_BINCOPYFROM, l ); }
    break;

  case 460:
#line 2717 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 461:
#line 2724 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 462:
#line 2735 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 463:
#line 2736 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 464:
#line 2741 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(L(), (yyvsp[(1) - (1)].l_val)); }
    break;

  case 465:
#line 2743 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l_val)); }
    break;

  case 466:
#line 2748 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 467:
#line 2749 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 468:
#line 2753 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 469:
#line 2754 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 470:
#line 2759 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (1)].sval) );
			  (yyval.l) = l; }
    break;

  case 471:
#line 2763 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (2)].sval) );
			  append_string(l, (yyvsp[(2) - (2)].sval) );
			  (yyval.l) = l; }
    break;

  case 472:
#line 2771 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 473:
#line 2776 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 474:
#line 2781 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (5)].sval));
				  append_string(l, (yyvsp[(5) - (5)].sval));
				  (yyval.l) = l; }
    break;

  case 475:
#line 2786 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (7)].sval));
				  append_string(l, (yyvsp[(5) - (7)].sval));
				  append_string(l, sql2str((yyvsp[(7) - (7)].sval)));
				  (yyval.l) = l; }
    break;

  case 476:
#line 2794 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 477:
#line 2795 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 478:
#line 2799 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 479:
#line 2800 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (2)].l_val)), 0); }
    break;

  case 480:
#line 2801 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[(2) - (2)].l_val)); }
    break;

  case 481:
#line 2803 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(3) - (4)].l_val)); }
    break;

  case 482:
#line 2805 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(4) - (4)].l_val)); }
    break;

  case 483:
#line 2809 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 484:
#line 2810 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 485:
#line 2814 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 486:
#line 2815 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 487:
#line 2819 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 488:
#line 2820 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 489:
#line 2824 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 490:
#line 2825 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 491:
#line 2829 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 492:
#line 2830 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 493:
#line 2834 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 494:
#line 2836 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 495:
#line 2842 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
    break;

  case 496:
#line 2849 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 497:
#line 2850 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 498:
#line 2851 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 499:
#line 2856 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l) );
	  append_int(l, (yyvsp[(4) - (5)].i_val) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_TRUNCATE, l ); }
    break;

  case 500:
#line 2862 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (4)].l) );
	  append_int(l, (yyvsp[(3) - (4)].i_val) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_TRUNCATE, l ); }
    break;

  case 501:
#line 2872 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
    break;

  case 502:
#line 2914 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 503:
#line 2922 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 504:
#line 2931 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 505:
#line 2933 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 506:
#line 2935 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(2) - (2)].l)); }
    break;

  case 508:
#line 2941 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(2) - (3)].l)); }
    break;

  case 509:
#line 2943 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (5)].l), (yyvsp[(4) - (5)].l)); }
    break;

  case 510:
#line 2947 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 511:
#line 2949 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 512:
#line 2953 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 513:
#line 2955 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 514:
#line 2960 "src/sql/server/sql_parser.y"
    { 
	  if (m->emode == m_normal && m->caching) {
		/* replace by argument */
		atom *a = atom_general(SA, sql_bind_localtype("void"), NULL);

		if(!sql_add_arg( m, a)) {
			char *msg = sql_message(SQLSTATE(HY001) "allocation failure");
			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		}
		(yyval.sym) = _symbol_create_list( SQL_COLUMN,
			append_int(L(), m->argc-1));
	   } else {
		(yyval.sym) = _symbol_create(SQL_NULL, NULL );
	   }
	}
    break;

  case 517:
#line 2986 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
    break;

  case 520:
#line 2995 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 521:
#line 2996 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 522:
#line 2997 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 523:
#line 3001 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 524:
#line 3003 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 525:
#line 3007 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
    break;

  case 526:
#line 3012 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 527:
#line 3017 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym) );
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 528:
#line 3022 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
    break;

  case 529:
#line 3029 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 530:
#line 3030 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 531:
#line 3037 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 532:
#line 3039 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
    break;

  case 533:
#line 3044 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
    break;

  case 534:
#line 3052 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[(2) - (5)].i_val));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 535:
#line 3060 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[(3) - (5)].i_val));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 536:
#line 3070 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 537:
#line 3071 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 538:
#line 3072 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (2)].i_val); }
    break;

  case 539:
#line 3076 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 540:
#line 3077 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 541:
#line 3081 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 542:
#line 3082 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 543:
#line 3083 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 544:
#line 3087 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 545:
#line 3089 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[(2) - (2)].l)); }
    break;

  case 547:
#line 3113 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (3)].l));
	  	append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
    break;

  case 548:
#line 3122 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 549:
#line 3123 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 550:
#line 3128 "src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[(1) - (4)].sval)));
	  append_list(l, (yyvsp[(2) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  append_int(l, FALSE); /* no replace clause */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 554:
#line 3152 "src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (4)].bval), (yyvsp[(3) - (4)].l), NULL,
		(yyvsp[(4) - (4)].l)->h->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 555:
#line 3163 "src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (6)].bval), (yyvsp[(3) - (6)].l), (yyvsp[(5) - (6)].l),
		(yyvsp[(6) - (6)].l)->h->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 556:
#line 3174 "src/sql/server/sql_parser.y"
    { 
	  (yyval.sym) = (yyvsp[(1) - (5)].sym);
	  if ((yyvsp[(2) - (5)].sym) || (yyvsp[(3) - (5)].sym) || (yyvsp[(4) - (5)].sym) || (yyvsp[(5) - (5)].sym)) {
	  	if ((yyvsp[(1) - (5)].sym) != NULL &&
		    ((yyvsp[(1) - (5)].sym)->token == SQL_SELECT ||
		     (yyvsp[(1) - (5)].sym)->token == SQL_UNION  ||
		     (yyvsp[(1) - (5)].sym)->token == SQL_EXCEPT ||
		     (yyvsp[(1) - (5)].sym)->token == SQL_INTERSECT)) {
			if ((yyvsp[(1) - (5)].sym)->token == SQL_SELECT) {
	 			SelectNode *s = (SelectNode*)(yyvsp[(1) - (5)].sym);
	
	  			s -> orderby = (yyvsp[(2) - (5)].sym);
	  			s -> limit = (yyvsp[(3) - (5)].sym);
	  			s -> offset = (yyvsp[(4) - (5)].sym);
	  			s -> sample = (yyvsp[(5) - (5)].sym);
			} else { /* Add extra select * from .. in case of UNION, EXCEPT, INTERSECT */
				(yyval.sym) = newSelectNode( 
					SA, 0, 
					append_symbol(L(), _symbol_create_list(SQL_TABLE, append_string(append_string(L(),NULL),NULL))), NULL,
					_symbol_create_list( SQL_FROM, append_symbol(L(), (yyvsp[(1) - (5)].sym))), NULL, NULL, NULL, (yyvsp[(2) - (5)].sym), _symbol_create_list(SQL_NAME, append_list(append_string(L(),"inner"),NULL)), (yyvsp[(3) - (5)].sym), (yyvsp[(4) - (5)].sym), (yyvsp[(5) - (5)].sym));
			}
	  	} else {
			yyerror(m, "missing SELECT operator");
			YYABORT;
	  	}
	 } 
	}
    break;

  case 557:
#line 3204 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 558:
#line 3206 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 560:
#line 3216 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
    break;

  case 561:
#line 3225 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
    break;

  case 562:
#line 3234 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
    break;

  case 563:
#line 3240 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 565:
#line 3245 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 566:
#line 3246 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 567:
#line 3247 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 568:
#line 3252 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 569:
#line 3254 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 570:
#line 3256 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(4) - (5)].l); }
    break;

  case 572:
#line 3266 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[(1) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(4) - (4)].sym)); }
    break;

  case 573:
#line 3274 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 574:
#line 3275 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[(2) - (2)].l)); }
    break;

  case 575:
#line 3279 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 576:
#line 3281 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 577:
#line 3285 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (2)].l));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 578:
#line 3290 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  	  	  append_int(l, 0);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 579:
#line 3296 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(2) - (3)].sym));
		  	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  	  append_int(l, 1);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 580:
#line 3302 "src/sql/server/sql_parser.y"
    {
				  (yyval.sym) = (yyvsp[(1) - (2)].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[(1) - (2)].sym);
				  	sn->name = (yyvsp[(2) - (2)].sym);
				  } else {
				  	append_symbol((yyvsp[(1) - (2)].sym)->data.lval, (yyvsp[(2) - (2)].sym));
				  }
				}
    break;

  case 581:
#line 3312 "src/sql/server/sql_parser.y"
    {
				  (yyval.sym) = (yyvsp[(2) - (3)].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[(2) - (3)].sym);
				  	sn->name = (yyvsp[(3) - (3)].sym);
					sn->lateral = 1;
				  } else {
				  	append_symbol((yyvsp[(2) - (3)].sym)->data.lval, (yyvsp[(3) - (3)].sym));
	  				append_int((yyvsp[(2) - (3)].sym)->data.lval, 1);
				  }
				}
    break;

  case 582:
#line 3324 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
    break;

  case 583:
#line 3328 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym);
				  append_symbol((yyvsp[(1) - (1)].sym)->data.lval, NULL); }
    break;

  case 584:
#line 3332 "src/sql/server/sql_parser.y"
    { m->caching = 0; }
    break;

  case 585:
#line 3334 "src/sql/server/sql_parser.y"
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[(3) - (5)].sym));
		append_symbol(op, (yyvsp[(5) - (5)].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
    break;

  case 586:
#line 3345 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (5)].sval));
		  	  	  append_list(l, (yyvsp[(4) - (5)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 587:
#line 3350 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (2)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 588:
#line 3355 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (4)].sval));
		  	  	  append_list(l, (yyvsp[(3) - (4)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 589:
#line 3360 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (1)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 590:
#line 3367 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 591:
#line 3368 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 592:
#line 3372 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 593:
#line 3373 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) );}
    break;

  case 594:
#line 3377 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(1) - (1)].l))); }
    break;

  case 595:
#line 3380 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(3) - (3)].l))); }
    break;

  case 596:
#line 3385 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 597:
#line 3386 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 598:
#line 3392 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
    break;

  case 599:
#line 3396 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 600:
#line 3401 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
    break;

  case 601:
#line 3405 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 602:
#line 3409 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 603:
#line 3411 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l)); }
    break;

  case 604:
#line 3415 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 605:
#line 3416 "src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 606:
#line 3420 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 607:
#line 3424 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 608:
#line 3425 "src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 609:
#line 3429 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 610:
#line 3433 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 611:
#line 3434 "src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val)));
			}
    break;

  case 612:
#line 3438 "src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[(2) - (2)].sval),NULL)));
			}
    break;

  case 613:
#line 3442 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 614:
#line 3446 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 615:
#line 3448 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 616:
#line 3453 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  append_int(l, (yyvsp[(2) - (2)].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
    break;

  case 617:
#line 3461 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 618:
#line 3462 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 619:
#line 3463 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 629:
#line 3480 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym);

		  if ((yyval.sym)->token == SQL_EXISTS)
			(yyval.sym)->token = SQL_NOT_EXISTS;
		  else if ((yyval.sym)->token == SQL_NOT_EXISTS)
			(yyval.sym)->token = SQL_EXISTS;
		  else if ((yyval.sym)->token == SQL_NOT_BETWEEN)
			(yyval.sym)->token = SQL_BETWEEN;
		  else if ((yyval.sym)->token == SQL_BETWEEN)
			(yyval.sym)->token = SQL_NOT_BETWEEN;
		  else if ((yyval.sym)->token == SQL_NOT_LIKE)
			(yyval.sym)->token = SQL_LIKE;
		  else if ((yyval.sym)->token == SQL_LIKE)
			(yyval.sym)->token = SQL_NOT_LIKE;
		  else
			(yyval.sym) = _symbol_create_symbol(SQL_NOT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 630:
#line 3496 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 631:
#line 3501 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, (yyvsp[(2) - (3)].sval));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 632:
#line 3508 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 633:
#line 3518 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
    break;

  case 634:
#line 3525 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
    break;

  case 635:
#line 3534 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 636:
#line 3535 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 637:
#line 3536 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 638:
#line 3541 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 639:
#line 3548 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 640:
#line 3555 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 641:
#line 3562 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 642:
#line 3572 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (1)].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
    break;

  case 643:
#line 3576 "src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(3) - (3)].sval));
	  if (_strlen(s) != 1) {
		yyerror(m, SQLSTATE(22019) "ESCAPE must be one character");
		(yyval.sym) = NULL;
		YYABORT;
	  } else {
		dlist *l = L();
		append_symbol(l, (yyvsp[(1) - (3)].sym));
		append_string(l, s);
		(yyval.sym) = _symbol_create_list(SQL_ESCAPE, l);
	  }
	}
    break;

  case 644:
#line 3591 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[(1) - (4)].sym) );}
    break;

  case 645:
#line 3592 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[(1) - (3)].sym) ); }
    break;

  case 646:
#line 3597 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 647:
#line 3603 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 648:
#line 3609 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 649:
#line 3614 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 650:
#line 3622 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 651:
#line 3624 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 652:
#line 3630 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, (yyvsp[(2) - (4)].sval));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 653:
#line 3637 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 654:
#line 3646 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 655:
#line 3647 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 656:
#line 3648 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 657:
#line 3652 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[(2) - (2)].sym) ); }
    break;

  case 658:
#line 3656 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 659:
#line 3657 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym));  }
    break;

  case 660:
#line 3661 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 661:
#line 3666 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(1) - (3)].l));
		  append_list(l, (yyvsp[(2) - (3)].l));
		  append_list(l, (yyvsp[(3) - (3)].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
    break;

  case 662:
#line 3675 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 663:
#line 3677 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 664:
#line 3679 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 665:
#line 3683 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 666:
#line 3685 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 667:
#line 3687 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 669:
#line 3694 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 670:
#line 3701 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 671:
#line 3708 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 672:
#line 3715 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 673:
#line 3722 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 674:
#line 3729 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 675:
#line 3736 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
			  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 676:
#line 3743 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 677:
#line 3750 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 678:
#line 3757 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 679:
#line 3764 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 680:
#line 3771 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 681:
#line 3777 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 682:
#line 3784 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 683:
#line 3791 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 684:
#line 3798 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 685:
#line 3805 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 686:
#line 3812 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 687:
#line 3819 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 688:
#line 3826 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 689:
#line 3832 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 690:
#line 3839 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 691:
#line 3846 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 692:
#line 3853 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 693:
#line 3860 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 694:
#line 3862 "src/sql/server/sql_parser.y"
    { 
 			  (yyval.sym) = NULL;
			  assert((yyvsp[(2) - (2)].sym)->token != SQL_COLUMN || (yyvsp[(2) - (2)].sym)->data.lval->h->type != type_lng);
			  if ((yyvsp[(2) - (2)].sym)->token == SQL_COLUMN && (yyvsp[(2) - (2)].sym)->data.lval->h->type == type_int) {
				atom *a = sql_bind_arg(m, (yyvsp[(2) - (2)].sym)->data.lval->h->data.i_val);
				if (!atom_neg(a)) {
					(yyval.sym) = (yyvsp[(2) - (2)].sym);
				} else {
					yyerror(m, SQLSTATE(22003) "value too large or not a number");
					(yyval.sym) = NULL;
					YYABORT;
				}
			  } 
			  if (!(yyval.sym)) {
				dlist *l = L();
			  	append_list(l, 
			  		append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_neg")));
	  		  	append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  	(yyval.sym) = _symbol_create_list( SQL_UNOP, l ); 
			  }
			}
    break;

  case 695:
#line 3883 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 696:
#line 3887 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 699:
#line 3893 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
    break;

  case 700:
#line 3895 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
    break;

  case 702:
#line 3898 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[(1) - (1)].l)); }
    break;

  case 706:
#line 3902 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[(4) - (4)].l)); }
    break;

  case 714:
#line 3914 "src/sql/server/sql_parser.y"
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
    break;

  case 715:
#line 3984 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[(1) - (5)].sym)), (yyvsp[(4) - (5)].l))); }
    break;

  case 716:
#line 3989 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[(1) - (3)].l) ); }
    break;

  case 718:
#line 3995 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[(1) - (3)].sym)), (yyvsp[(2) - (3)].sym)), (yyvsp[(3) - (3)].sym)); }
    break;

  case 719:
#line 3999 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 720:
#line 4001 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 721:
#line 4005 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 722:
#line 4007 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 723:
#line 4011 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 724:
#line 4013 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[(2) - (3)].l), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val))); }
    break;

  case 725:
#line 4017 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_ROWS; }
    break;

  case 726:
#line 4018 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_RANGE; }
    break;

  case 727:
#line 4022 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(1) - (1)].sym)), _symbol_create_int(SQL_FRAME, -1)); }
    break;

  case 728:
#line 4023 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 729:
#line 4027 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 730:
#line 4028 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 731:
#line 4029 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 732:
#line 4033 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 733:
#line 4038 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(2) - (4)].sym)), (yyvsp[(4) - (4)].sym)); }
    break;

  case 734:
#line 4042 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 735:
#line 4043 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 736:
#line 4044 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 737:
#line 4048 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 738:
#line 4052 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NONE; }
    break;

  case 739:
#line 4053 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
    break;

  case 740:
#line 4054 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_GROUP; }
    break;

  case 741:
#line 4055 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_TIES; }
    break;

  case 742:
#line 4056 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
    break;

  case 743:
#line 4060 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 744:
#line 4065 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 745:
#line 4069 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (4)].l));
	  if (dlist_length((yyvsp[(3) - (4)].l)) == 1) {
  	  	append_symbol(l, (yyvsp[(3) - (4)].l)->h->data.sym);
	  	(yyval.sym) = _symbol_create_list( SQL_UNOP, l ); 
	  } else if (dlist_length((yyvsp[(3) - (4)].l)) == 2) {
  	  	append_symbol(l, (yyvsp[(3) - (4)].l)->h->data.sym);
  	  	append_symbol(l, (yyvsp[(3) - (4)].l)->h->next->data.sym);
	  	(yyval.sym) = _symbol_create_list( SQL_BINOP, l ); 
	  } else {
  	  	append_list(l, (yyvsp[(3) - (4)].l));
	  	(yyval.sym) = _symbol_create_list( SQL_NOP, l ); 
	  }
	}
    break;

  case 746:
#line 4096 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 747:
#line 4097 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 748:
#line 4102 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 749:
#line 4103 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "left"); }
    break;

  case 750:
#line 4104 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "right"); }
    break;

  case 751:
#line 4105 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "insert"); }
    break;

  case 752:
#line 4110 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[(3) - (6)].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 753:
#line 4117 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 754:
#line 4122 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 755:
#line 4127 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 756:
#line 4132 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 757:
#line 4137 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 758:
#line 4144 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 759:
#line 4145 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 760:
#line 4150 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[(3) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(5) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(7) - (8)].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 761:
#line 4160 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[(3) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(5) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(7) - (8)].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 762:
#line 4170 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 763:
#line 4177 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 764:
#line 4184 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 765:
#line 4191 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 766:
#line 4198 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "splitpart")));
  		  	  append_symbol(ops, (yyvsp[(3) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(5) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(7) - (8)].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 767:
#line 4210 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 768:
#line 4212 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 769:
#line 4217 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 770:
#line 4222 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, (yyvsp[(1) - (3)].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 771:
#line 4227 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 772:
#line 4232 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
  		  append_string(l, (yyvsp[(2) - (2)].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
    break;

  case 773:
#line 4239 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 774:
#line 4240 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 775:
#line 4241 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 776:
#line 4246 "src/sql/server/sql_parser.y"
    { 
	  if (m->emode == m_normal && m->caching) {
		/* replace by argument */
		AtomNode *an = (AtomNode*)(yyvsp[(1) - (1)].sym);

		if(!sql_add_arg( m, an->a)) {
			char *msg = sql_message(SQLSTATE(HY001) "allocation failure");
			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		}
		an->a = NULL;
		/* we miss use SQL_COLUMN also for param's, maybe
				change SQL_COLUMN to SQL_IDENT */
		(yyval.sym) = _symbol_create_list( SQL_COLUMN,
			append_int(L(), m->argc-1));
	  } else {
		AtomNode *an = (AtomNode*)(yyvsp[(1) - (1)].sym);
		atom *a = an->a; 
		an->a = atom_dup(SA, a); 
		(yyval.sym) = (yyvsp[(1) - (1)].sym);
	  }
	}
    break;

  case 777:
#line 4272 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 778:
#line 4273 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 779:
#line 4278 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 780:
#line 4279 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 781:
#line 4284 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 782:
#line 4285 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 783:
#line 4292 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 784:
#line 4298 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 785:
#line 4304 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 786:
#line 4310 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 787:
#line 4316 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (4)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 788:
#line 4322 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 790:
#line 4332 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 791:
#line 4333 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = -1; }
    break;

  case 792:
#line 4334 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 793:
#line 4338 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 794:
#line 4339 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 795:
#line 4350 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 796:
#line 4352 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0+1; }
    break;

  case 797:
#line 4356 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 798:
#line 4358 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 6+1; }
    break;

  case 799:
#line 4362 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
    break;

  case 800:
#line 4364 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 801:
#line 4370 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 802:
#line 4378 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iyear; }
    break;

  case 803:
#line 4379 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imonth; }
    break;

  case 804:
#line 4380 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iday; }
    break;

  case 805:
#line 4381 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ihour; }
    break;

  case 806:
#line 4382 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imin; }
    break;

  case 808:
#line 4387 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = isec; }
    break;

  case 810:
#line 4392 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iquarter; }
    break;

  case 811:
#line 4393 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iweek; }
    break;

  case 812:
#line 4398 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 813:
#line 4404 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (1)].i_val)), 0);  }
    break;

  case 814:
#line 4407 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 815:
#line 4413 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 816:
#line 4416 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 817:
#line 4422 "src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[(1) - (3)].l)), (yyvsp[(3) - (3)].l) ); }
    break;

  case 818:
#line 4425 "src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list( L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 819:
#line 4429 "src/sql/server/sql_parser.y"
    {
		int sk, ek, sp, ep;
	  	int tpe;

		(yyval.type).type = NULL;
	  	if ( (tpe = parse_interval_qualifier( m, (yyvsp[(2) - (2)].l), &sk, &ek, &sp, &ep )) < 0){
			yyerror(m, SQLSTATE(22006) "incorrect interval");
			YYABORT;
	  	} else {
			int d = inttype2digits(sk, ek);
			if (tpe == 0){
				sql_find_subtype(&(yyval.type), "month_interval", d, 0);
			} else {
				sql_find_subtype(&(yyval.type), "sec_interval", d, 0);
			}
	  	}
	}
    break;

  case 823:
#line 4455 "src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(1) - (1)].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
    break;

  case 824:
#line 4461 "src/sql/server/sql_parser.y"
    { int len = _strlen((yyvsp[(1) - (1)].sval)), i = 2, err = 0;
		  char * hexa = (yyvsp[(1) - (1)].sval);
	 	  sql_subtype t;
#ifdef HAVE_HGE
		  hge res = 0;
#else
		  lng res = 0;
#endif
		  /* skip leading '0' */
		  while (i < len && hexa[i] == '0')
		  	i++;

		  /* we only support positive values that fit in a signed 128-bit type,
		   * i.e., max. 63/127 bit => < 2^63/2^127 => < 0x800...
		   * (leading sign (-0x...) is handled separately elsewhere)
		   */
		  if (len - i < MAX_HEX_DIGITS || (len - i == MAX_HEX_DIGITS && hexa[i] < '8'))
		  	while (err == 0 && i < len)
		  	{
				res <<= 4;
				if ('0'<= hexa[i] && hexa[i] <= '9')
					res = res + (hexa[i] - '0');
				else if ('A' <= hexa[i] && hexa[i] <= 'F')
					res = res + (hexa[i] - 'A' + 10);
				else if ('a' <= hexa[i] && hexa[i] <= 'f')
					res = res + (hexa[i] - 'a' + 10);
				else
					err = 1;
		  		i++;
			}
		  else
			err = 1;

		  if (err == 0) {
		  	assert(res >= 0);

		  	/* use smallest type that can accommodate the given value */
			if (res <= GDK_bte_max)
				sql_find_subtype(&t, "tinyint", 8, 0 );
			else if (res <= GDK_sht_max)
				sql_find_subtype(&t, "smallint", 16, 0 );
		  	else if (res <= GDK_int_max)
				sql_find_subtype(&t, "int", 32, 0 );
			else if (res <= GDK_lng_max)
				sql_find_subtype(&t, "bigint", 64, 0 );
#ifdef HAVE_HGE
			else if (res <= GDK_hge_max && have_hge)
				sql_find_subtype(&t, "hugeint", 128, 0 );
#endif
			else
				err = 1;
		  }

		  if (err != 0) {
			char *msg = sql_message(SQLSTATE(22003) "Invalid hexadecimal number or hexadecimal too large (%s)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
			(yyval.sym) = _newAtomNode( atom_int(SA, &t, res));
		  }
		}
    break;

  case 825:
#line 4526 "src/sql/server/sql_parser.y"
    { int err = 0;
		  size_t len = sizeof(lng);
		  lng value, *p = &value;
		  sql_subtype t;

		  if (lngFromStr((yyvsp[(1) - (1)].sval), &len, &p) < 0 || is_lng_nil(value))
		  	err = 2;

		  if (!err) {
		    if ((value >= GDK_lng_min && value <= GDK_lng_max))
#if SIZEOF_OID == SIZEOF_INT
		  	  sql_find_subtype(&t, "oid", 31, 0 );
#else
		  	  sql_find_subtype(&t, "oid", 63, 0 );
#endif
		    else
			  err = 1;
		  }

		  if (err) {
			char *msg = sql_message(SQLSTATE(22003) "OID value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode( atom_int(SA, &t, value));
		  }
		}
    break;

  case 826:
#line 4557 "src/sql/server/sql_parser.y"
    { int digits = _strlen((yyvsp[(1) - (1)].sval)), err = 0;
#ifdef HAVE_HGE
		  hge value, *p = &value;
		  size_t len = sizeof(hge);
		  const hge one = 1;
#else
		  lng value, *p = &value;
		  size_t len = sizeof(lng);
		  const lng one = 1;
#endif
		  sql_subtype t;

#ifdef HAVE_HGE
		  if (hgeFromStr((yyvsp[(1) - (1)].sval), &len, &p) < 0 || is_hge_nil(value))
		  	err = 2;
#else
		  if (lngFromStr((yyvsp[(1) - (1)].sval), &len, &p) < 0 || is_lng_nil(value))
		  	err = 2;
#endif

		  /* find the most suitable data type for the given number */
		  if (!err) {
		    int bits = digits2bits(digits), obits = bits;

		    while (bits > 0 &&
			   (bits == sizeof(value) * 8 ||
			    (one << (bits - 1)) > value))
			  bits--;

 		    if (bits != obits &&
		       (bits == 8 || bits == 16 || bits == 32 || bits == 64))
				bits++;
		
		    if (value >= GDK_bte_min && value <= GDK_bte_max)
		  	  sql_find_subtype(&t, "tinyint", bits, 0 );
		    else if (value >= GDK_sht_min && value <= GDK_sht_max)
		  	  sql_find_subtype(&t, "smallint", bits, 0 );
		    else if (value >= GDK_int_min && value <= GDK_int_max)
		  	  sql_find_subtype(&t, "int", bits, 0 );
		    else if (value >= GDK_lng_min && value <= GDK_lng_max)
		  	  sql_find_subtype(&t, "bigint", bits, 0 );
#ifdef HAVE_HGE
		    else if (value >= GDK_hge_min && value <= GDK_hge_max && have_hge)
		  	  sql_find_subtype(&t, "hugeint", bits, 0 );
#endif
		    else
			  err = 1;
		  }

		  if (err) {
			char *msg = sql_message(SQLSTATE(22003) "integer value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode( atom_int(SA, &t, value));
		  }
		}
    break;

  case 827:
#line 4618 "src/sql/server/sql_parser.y"
    { char *s = strip_extra_zeros(sa_strdup(SA, (yyvsp[(1) - (1)].sval)));
		  char *dot = strchr(s, '.');
		  int digits = _strlen(s) - 1;
		  int scale = digits - (int) (dot-s);
		  sql_subtype t;

		  if (digits <= 0)
			digits = 1;
		  if (0 && digits <= MAX_DEC_DIGITS) {
		  	double val = strtod((yyvsp[(1) - (1)].sval),NULL);
#ifdef HAVE_HGE
		  	hge value = decimal_from_str(s, NULL);
#else
		  	lng value = decimal_from_str(s, NULL);
#endif

		  	if (*s == '+' || *s == '-')
				digits --;
		  	sql_find_subtype(&t, "decimal", digits, scale );
		  	(yyval.sym) = _newAtomNode( atom_dec(SA, &t, value, val));
		   } else {
			char *p = (yyvsp[(1) - (1)].sval);
			double val;

			errno = 0;
			val = strtod((yyvsp[(1) - (1)].sval),&p);
			if (p == (yyvsp[(1) - (1)].sval) || is_dbl_nil(val) || (errno == ERANGE && (val < -1 || val > 1))) {
				char *msg = sql_message(SQLSTATE(22003) "Double value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.sym) = NULL;
				YYABORT;
			}
		  	sql_find_subtype(&t, "double", 51, 0 );
		  	(yyval.sym) = _newAtomNode(atom_float(SA, &t, val));
		   }
		}
    break;

  case 828:
#line 4657 "src/sql/server/sql_parser.y"
    { sql_subtype t;
  		  char *p = (yyvsp[(1) - (1)].sval);
		  double val;

		  errno = 0;
 		  val = strtod((yyvsp[(1) - (1)].sval),&p);
		  if (p == (yyvsp[(1) - (1)].sval) || is_dbl_nil(val) || (errno == ERANGE && (val < -1 || val > 1))) {
			char *msg = sql_message(SQLSTATE(22003) "Double value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  }
		  sql_find_subtype(&t, "double", 51, 0 );
		  (yyval.sym) = _newAtomNode(atom_float(SA, &t, val)); }
    break;

  case 829:
#line 4674 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a;
		  int r;

 		  r = sql_find_subtype(&t, "date", 0, 0 );
		  if (!r || (a = atom_general(SA, &t, (yyvsp[(2) - (2)].sval))) == NULL) {
			char *msg = sql_message(SQLSTATE(22007) "Incorrect date value (%s)", (yyvsp[(2) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
    break;

  case 830:
#line 4690 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a;
		  int r;

	          r = sql_find_subtype(&t, ((yyvsp[(3) - (4)].bval))?"timetz":"time", (yyvsp[(2) - (4)].i_val), 0);
		  if (!r || (a = atom_general(SA, &t, (yyvsp[(4) - (4)].sval))) == NULL) {
			char *msg = sql_message(SQLSTATE(22007) "Incorrect time value (%s)", (yyvsp[(4) - (4)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
    break;

  case 831:
#line 4706 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a;
		  int r;

 		  r = sql_find_subtype(&t, ((yyvsp[(3) - (4)].bval))?"timestamptz":"timestamp",(yyvsp[(2) - (4)].i_val),0);
		  if (!r || (a = atom_general(SA, &t, (yyvsp[(4) - (4)].sval))) == NULL) {
			char *msg = sql_message(SQLSTATE(22007) "Incorrect timestamp value (%s)", (yyvsp[(4) - (4)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
    break;

  case 833:
#line 4723 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a= 0;
		  int r;

		  (yyval.sym) = NULL;
 		  r = sql_find_subtype(&t, "blob", 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[(2) - (2)].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22M28) "incorrect blob %s", (yyvsp[(2) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
    break;

  case 834:
#line 4740 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a= 0;
		  int r;

		  (yyval.sym) = NULL;
		  r = sql_find_subtype(&t, (yyvsp[(1) - (2)].sval), 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[(2) - (2)].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22000) "incorrect %s %s", (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
    break;

  case 835:
#line 4757 "src/sql/server/sql_parser.y"
    { sql_subtype t; 
		  atom *a = 0;
		  int r;

		  (yyval.sym) = NULL;
		  r = sql_find_subtype(&t, (yyvsp[(1) - (2)].sval), 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[(2) - (2)].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22000) "incorrect %s %s", (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
    break;

  case 836:
#line 4774 "src/sql/server/sql_parser.y"
    {
		  sql_type *t = mvc_bind_type(m, (yyvsp[(1) - (2)].sval));
		  atom *a;

		  (yyval.sym) = NULL;
		  if (t) {
		  	sql_subtype tpe;
			sql_init_subtype(&tpe, t, 0, 0);
			a = atom_general(SA, &tpe, (yyvsp[(2) - (2)].sval));
			if (a)
				(yyval.sym) = _newAtomNode(a);
		  }
		  if (!t || !(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22000) "type (%s) unknown", (yyvsp[(1) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
    break;

  case 837:
#line 4795 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
    break;

  case 838:
#line 4799 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
    break;

  case 839:
#line 4805 "src/sql/server/sql_parser.y"
    { 
		sql_subtype t;
		int sk, ek, sp, ep, tpe;
	  	lng i = 0;
		int r = 0;

		(yyval.sym) = NULL;
	  	if ( (tpe = parse_interval_qualifier( m, (yyvsp[(4) - (4)].l), &sk, &ek, &sp, &ep )) < 0){
			yyerror(m, "incorrect interval");
			YYABORT;
	  	} else {
			int d = inttype2digits(sk, ek);
			if (tpe == 0){
				r=sql_find_subtype(&t, "month_interval", d, 0);
			} else {
				r=sql_find_subtype(&t, "sec_interval", d, 0);
			}
	  	}
	  	if (!r || (tpe = parse_interval( m, (yyvsp[(2) - (4)].i_val), (yyvsp[(3) - (4)].sval), sk, ek, sp, ep, &i)) < 0) { 
			yyerror(m, "incorrect interval");
			(yyval.sym) = NULL;
			YYABORT;
	  	} else {
			/* count the number of digits in the input */
/*
			lng cpyval = i, inlen = 1;

			cpyval /= qualifier2multiplier(ek);
			while (cpyval /= 10)
				inlen++;
		    	if (inlen > t.digits) {
				char *msg = sql_message(SQLSTATE(22006) "incorrect interval (" LLFMT " > %d)", inlen, t.digits);
				yyerror(m, msg);
				$$ = NULL;
				YYABORT;
			}
*/
	  		(yyval.sym) = _newAtomNode( atom_int(SA, &t, i));
	  	}
	}
    break;

  case 840:
#line 4850 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 841:
#line 4851 "src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (3)].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 842:
#line 4855 "src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (5)].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[(1) - (5)].sval)), 
						(yyvsp[(3) - (5)].sval)), 
					(yyvsp[(5) - (5)].sval))
				;}
    break;

  case 843:
#line 4866 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 844:
#line 4869 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 845:
#line 4874 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[(1) - (5)].sval)), (yyvsp[(3) - (5)].sval)), (yyvsp[(5) - (5)].sval));}
    break;

  case 846:
#line 4882 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 847:
#line 4888 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 849:
#line 4900 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[(3) - (6)].sym)), (yyvsp[(5) - (6)].sym))); }
    break;

  case 850:
#line 4905 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[(3) - (4)].l)); }
    break;

  case 851:
#line 4907 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (5)].sym)),(yyvsp[(3) - (5)].l)),(yyvsp[(4) - (5)].sym))); }
    break;

  case 852:
#line 4913 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[(2) - (4)].l)),(yyvsp[(3) - (4)].sym))); }
    break;

  case 853:
#line 4921 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 854:
#line 4923 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 855:
#line 4928 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (3)].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[(3) - (3)].sym));
			}
    break;

  case 856:
#line 4932 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 857:
#line 4938 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 858:
#line 4946 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 859:
#line 4948 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 860:
#line 4953 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 861:
#line 4961 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 862:
#line 4963 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 863:
#line 4967 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 864:
#line 4968 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 866:
#line 4978 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 867:
#line 4989 "src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 868:
#line 4999 "src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 869:
#line 5009 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 870:
#line 5020 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
    break;

  case 871:
#line 5022 "src/sql/server/sql_parser.y"
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
    break;

  case 872:
#line 5026 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
    break;

  case 873:
#line 5028 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 874:
#line 5030 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 875:
#line 5032 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
    break;

  case 876:
#line 5040 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
    break;

  case 877:
#line 5042 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
    break;

  case 878:
#line 5050 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
    break;

  case 879:
#line 5051 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
    break;

  case 880:
#line 5052 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
    break;

  case 881:
#line 5053 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
    break;

  case 882:
#line 5054 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
    break;

  case 883:
#line 5056 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
    break;

  case 884:
#line 5058 "src/sql/server/sql_parser.y"
    { 
			  int d = (yyvsp[(3) - (4)].i_val);
			  if (d > MAX_DEC_DIGITS) {
				char *msg = sql_message(SQLSTATE(22003) "Decimal of %d digits are not supported", d);
				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
			        sql_find_subtype(&(yyval.type), "decimal", d, 0); 
			  }
			}
    break;

  case 885:
#line 5071 "src/sql/server/sql_parser.y"
    { 
			  int d = (yyvsp[(3) - (6)].i_val);
			  int s = (yyvsp[(5) - (6)].i_val);
			  if (s > d || d > MAX_DEC_DIGITS) {
				char *msg = NULL;
				if (s > d)
					msg = sql_message(SQLSTATE(22003) "Scale (%d) should be less or equal to the precision (%d)", s, d);
				else
					msg = sql_message(SQLSTATE(22003) "Decimal(%d,%d) isn't supported because P=%d > %d", d, s, d, MAX_DEC_DIGITS);
				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_find_subtype(&(yyval.type), "decimal", d, s);
			  }
			}
    break;

  case 886:
#line 5088 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 887:
#line 5090 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (4)].i_val) > 0 && (yyvsp[(3) - (4)].i_val) <= 24) {
				sql_find_subtype(&(yyval.type), "real", (yyvsp[(3) - (4)].i_val), 0);
			  } else if ((yyvsp[(3) - (4)].i_val) > 24 && (yyvsp[(3) - (4)].i_val) <= 53) {
				sql_find_subtype(&(yyval.type), "double", (yyvsp[(3) - (4)].i_val), 0);
			  } else {
				char *msg = sql_message(SQLSTATE(22003) "Number of digits for FLOAT values should be between 1 and 53");

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  }
			}
    break;

  case 888:
#line 5104 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(5) - (6)].i_val) >= (yyvsp[(3) - (6)].i_val)) {
				char *msg = sql_message(SQLSTATE(22003) "Precision(%d) should be less than number of digits(%d)", (yyvsp[(5) - (6)].i_val), (yyvsp[(3) - (6)].i_val));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else if ((yyvsp[(3) - (6)].i_val) > 0 && (yyvsp[(3) - (6)].i_val) <= 24) {
				sql_find_subtype(&(yyval.type), "real", (yyvsp[(3) - (6)].i_val), (yyvsp[(5) - (6)].i_val));
			  } else if ((yyvsp[(3) - (6)].i_val) > 24 && (yyvsp[(3) - (6)].i_val) <= 53) {
				sql_find_subtype(&(yyval.type), "double", (yyvsp[(3) - (6)].i_val), (yyvsp[(5) - (6)].i_val));
			  } else {
				char *msg = sql_message(SQLSTATE(22003) "Number of digits for FLOAT values should be between 1 and 53");
				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  }
			}
    break;

  case 889:
#line 5123 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 890:
#line 5124 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 891:
#line 5125 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
    break;

  case 894:
#line 5128 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 895:
#line 5130 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 896:
#line 5131 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 897:
#line 5133 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 898:
#line 5135 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(5) - (6)].i_val) >= (yyvsp[(3) - (6)].i_val)) {
				char *msg = sql_message(SQLSTATE(22003) "Precision(%d) should be less than number of digits(%d)", (yyvsp[(5) - (6)].i_val), (yyvsp[(3) - (6)].i_val));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
			 	sql_find_subtype(&(yyval.type), (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].i_val), (yyvsp[(5) - (6)].i_val));
			  }
			}
    break;

  case 899:
#line 5146 "src/sql/server/sql_parser.y"
    {
			  sql_type *t = mvc_bind_type(m, (yyvsp[(1) - (1)].sval));
			  if (!t) {
				char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (1)].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_init_subtype(&(yyval.type), t, 0, 0);
			  }
			}
    break;

  case 900:
#line 5161 "src/sql/server/sql_parser.y"
    {
			  sql_type *t = mvc_bind_type(m, (yyvsp[(1) - (4)].sval));
			  if (!t) {
				char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (4)].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_init_subtype(&(yyval.type), t, (yyvsp[(3) - (4)].i_val), 0);
			  }
			}
    break;

  case 901:
#line 5174 "src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometry", 0, 0 )) {
			yyerror(m, SQLSTATE(22000) "type (geometry) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 902:
#line 5181 "src/sql/server/sql_parser.y"
    {
		int geoSubType = (yyvsp[(3) - (4)].i_val); 

		if(geoSubType == 0) {
			(yyval.type).type = NULL;
			YYABORT;
		} else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, 0 )) {
			char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (4)].sval));
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.type).type = NULL;
			YYABORT;
		}
		
	}
    break;

  case 903:
#line 5196 "src/sql/server/sql_parser.y"
    {
		int geoSubType = (yyvsp[(3) - (6)].i_val); 
		int srid = (yyvsp[(5) - (6)].i_val); 

		if(geoSubType == 0) {
			(yyval.type).type = NULL;
			YYABORT;
		} else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, srid )) {
			char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (6)].sval));
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 904:
#line 5211 "src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometrya", 0, 0 )) {
			yyerror(m, SQLSTATE(22000) "type (geometrya) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 905:
#line 5218 "src/sql/server/sql_parser.y"
    {
	int geoSubType = find_subgeometry_type((yyvsp[(1) - (1)].sval));

	if(geoSubType == 0) {
		char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (1)].sval));
		(yyval.type).type = NULL;
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} else if (geoSubType == -1) {
		char *msg = sql_message(SQLSTATE(HY001) "allocation failure");
		(yyval.type).type = NULL;
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	}  else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, 0 )) {
		char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (1)].sval));
		yyerror(m, msg);
		_DELETE(msg);
		(yyval.type).type = NULL;
		YYABORT;
	}
}
    break;

  case 906:
#line 5244 "src/sql/server/sql_parser.y"
    {
	int subtype = find_subgeometry_type((yyvsp[(1) - (1)].sval));
	char* geoSubType = (yyvsp[(1) - (1)].sval);

	if(subtype == 0) {
		char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", geoSubType);
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} else if(subtype == -1) {
		char *msg = sql_message(SQLSTATE(HY001) "allocation failure");
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} 
	(yyval.i_val) = subtype;	
}
    break;

  case 907:
#line 5261 "src/sql/server/sql_parser.y"
    {
	int subtype = find_subgeometry_type((yyvsp[(1) - (1)].sval));
	char* geoSubType = (yyvsp[(1) - (1)].sval);

	if(subtype == 0) {
		char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", geoSubType);
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} else if (subtype == -1) {
		char *msg = sql_message(SQLSTATE(HY001) "allocation failure");
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} 
	(yyval.i_val) = subtype;	
}
    break;

  case 908:
#line 5282 "src/sql/server/sql_parser.y"
    { 	char *t = sql_bind_alias((yyvsp[(1) - (1)].sval));
	  	if (!t) {
			char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sval) = NULL;
			YYABORT;
		}
		(yyval.sval) = t;
	}
    break;

  case 909:
#line 5296 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 910:
#line 5297 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (2)].sval); }
    break;

  case 911:
#line 5301 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 912:
#line 5302 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 913:
#line 5303 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 914:
#line 5306 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 915:
#line 5307 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 918:
#line 5315 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 919:
#line 5316 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 920:
#line 5317 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 921:
#line 5318 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 922:
#line 5319 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 923:
#line 5320 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 924:
#line 5324 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 925:
#line 5325 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 926:
#line 5326 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 927:
#line 5327 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 928:
#line 5328 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 929:
#line 5329 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 930:
#line 5330 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 932:
#line 5335 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "large"); }
    break;

  case 933:
#line 5336 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "name"); }
    break;

  case 934:
#line 5337 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "object"); }
    break;

  case 935:
#line 5338 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "password"); }
    break;

  case 936:
#line 5339 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "path"); }
    break;

  case 937:
#line 5340 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "precision"); }
    break;

  case 938:
#line 5341 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
    break;

  case 939:
#line 5342 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "role"); }
    break;

  case 940:
#line 5343 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "size"); }
    break;

  case 941:
#line 5344 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "type"); }
    break;

  case 942:
#line 5345 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "release"); }
    break;

  case 943:
#line 5346 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "value"); }
    break;

  case 944:
#line 5347 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "zone"); }
    break;

  case 945:
#line 5349 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "action"); }
    break;

  case 946:
#line 5350 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "as"); }
    break;

  case 947:
#line 5351 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
    break;

  case 948:
#line 5352 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "column"); }
    break;

  case 949:
#line 5353 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
    break;

  case 950:
#line 5354 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
    break;

  case 951:
#line 5355 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "increment"); }
    break;

  case 952:
#line 5356 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
    break;

  case 953:
#line 5357 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
    break;

  case 954:
#line 5358 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "plan"); }
    break;

  case 955:
#line 5359 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "schema"); }
    break;

  case 956:
#line 5360 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "start"); }
    break;

  case 957:
#line 5361 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "statement"); }
    break;

  case 958:
#line 5362 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "table"); }
    break;

  case 959:
#line 5364 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cache"); }
    break;

  case 960:
#line 5365 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "data"); }
    break;

  case 961:
#line 5366 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
    break;

  case 962:
#line 5367 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "match"); }
    break;

  case 963:
#line 5368 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "options"); }
    break;

  case 964:
#line 5369 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "row"); }
    break;

  case 965:
#line 5370 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "key"); }
    break;

  case 966:
#line 5371 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "language"); }
    break;

  case 967:
#line 5372 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "level"); }
    break;

  case 968:
#line 5373 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "session"); }
    break;

  case 969:
#line 5374 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "date"); }
    break;

  case 970:
#line 5375 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "time"); }
    break;

  case 971:
#line 5376 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
    break;

  case 972:
#line 5377 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "interval"); }
    break;

  case 973:
#line 5378 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "quarter"); }
    break;

  case 974:
#line 5379 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "week"); }
    break;

  case 975:
#line 5380 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
    break;

  case 976:
#line 5382 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
    break;

  case 977:
#line 5383 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "execute"); }
    break;

  case 978:
#line 5384 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "explain"); }
    break;

  case 979:
#line 5385 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "debug"); }
    break;

  case 980:
#line 5386 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "trace"); }
    break;

  case 981:
#line 5387 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "text"); }
    break;

  case 982:
#line 5388 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
    break;

  case 983:
#line 5389 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "no"); }
    break;

  case 984:
#line 5391 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "strip"); }
    break;

  case 985:
#line 5392 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
    break;

  case 986:
#line 5393 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "passing"); }
    break;

  case 987:
#line 5394 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "nil"); }
    break;

  case 988:
#line 5395 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "ref"); }
    break;

  case 989:
#line 5396 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "absent"); }
    break;

  case 990:
#line 5397 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "empty"); }
    break;

  case 991:
#line 5398 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "document"); }
    break;

  case 992:
#line 5399 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "element"); }
    break;

  case 993:
#line 5400 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "content"); }
    break;

  case 994:
#line 5401 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
    break;

  case 995:
#line 5402 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "returning"); }
    break;

  case 996:
#line 5403 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "location"); }
    break;

  case 997:
#line 5404 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "id"); }
    break;

  case 998:
#line 5405 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "according"); }
    break;

  case 999:
#line 5406 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "uri"); }
    break;

  case 1000:
#line 5407 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "filter"); }
    break;

  case 1001:
#line 5408 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
    break;

  case 1002:
#line 5409 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temp"); }
    break;

  case 1003:
#line 5410 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
    break;

  case 1004:
#line 5411 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
    break;

  case 1005:
#line 5412 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "storage"); }
    break;

  case 1006:
#line 5413 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
    break;

  case 1007:
#line 5414 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "replace"); }
    break;

  case 1008:
#line 5415 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "comment"); }
    break;

  case 1009:
#line 5419 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 1010:
#line 5421 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 1011:
#line 5426 "src/sql/server/sql_parser.y"
    {
		  char *end = NULL, *s = (yyvsp[(1) - (1)].sval);
		  int l = _strlen(s);
		  // errno might be non-zero due to other people's code
		  errno = 0;
		  if (l <= 19) {
		  	(yyval.l_val) = strtoll(s,&end,10);
		  } else {
			(yyval.l_val) = 0;
		  }
		  if (s+l != end || errno == ERANGE) {
			char *msg = sql_message(SQLSTATE(22003) "Integer value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			errno = 0;
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.l_val) = 0;
			YYABORT;
		  }
		}
    break;

  case 1012:
#line 5449 "src/sql/server/sql_parser.y"
    {
		  char *end = NULL, *s = (yyvsp[(1) - (1)].sval);
		  int l = _strlen(s);
		  // errno might be non-zero due to other people's code
		  errno = 0;
		  if (l <= 10) {
		  	(yyval.i_val) = strtol(s,&end,10);
		  } else {
			(yyval.i_val) = 0;
		  }
		  if (s+l != end || errno == ERANGE) {
			char *msg = sql_message(SQLSTATE(22003) "Integer value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			errno = 0;
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		}
    break;

  case 1013:
#line 5469 "src/sql/server/sql_parser.y"
    {
		  char *name = (yyvsp[(1) - (1)].sval);
		  sql_subtype *tpe;

		  if (!stack_find_var(m, name)) {
			char *msg = sql_message(SQLSTATE(22000) "Constant (%s) unknown", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		  tpe = stack_find_type(m, name);
		  if (tpe->type->localtype == TYPE_lng ||
		      tpe->type->localtype == TYPE_int ||
		      tpe->type->localtype == TYPE_sht ||
		      tpe->type->localtype == TYPE_bte ) {
			lng sgn = stack_get_number(m, name);
			assert((lng) GDK_int_min <= sgn && sgn <= (lng) GDK_int_max);
			(yyval.i_val) = (int) sgn;
		  } else {
			char *msg = sql_message(SQLSTATE(22000) "Constant (%s) has wrong type (number expected)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		}
    break;

  case 1014:
#line 5502 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1015:
#line 5504 "src/sql/server/sql_parser.y"
    { char *s = strconcat((yyvsp[(1) - (2)].sval),(yyvsp[(2) - (2)].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
    break;

  case 1016:
#line 5512 "src/sql/server/sql_parser.y"
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1017:
#line 5519 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (3)].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 1018:
#line 5524 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (4)].i_val));
  	  append_list(l, (yyvsp[(3) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 1019:
#line 5538 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1021:
#line 5543 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[(2) - (2)].l)); }
    break;

  case 1023:
#line 5551 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COMMENT, l );
	}
    break;

  case 1024:
#line 5557 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_COMMENT, l );
	}
    break;

  case 1025:
#line 5565 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_SCHEMA, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 1026:
#line 5566 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_TABLE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1027:
#line 5567 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VIEW, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1028:
#line 5569 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  append_string(l, (yyvsp[(4) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l );
	}
    break;

  case 1029:
#line 5575 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (6)].sval));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l );
	}
    break;

  case 1030:
#line 5581 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_INDEX, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1031:
#line 5582 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SEQUENCE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1032:
#line 5583 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ROUTINE, (yyvsp[(1) - (1)].l) ); }
    break;

  case 1034:
#line 5592 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1035:
#line 5594 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1047:
#line 5616 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
    break;

  case 1048:
#line 5624 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
    break;

  case 1049:
#line 5632 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
    break;

  case 1050:
#line 5642 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_list(l, (yyvsp[(5) - (7)].l));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
    break;

  case 1051:
#line 5652 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 1052:
#line 5654 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1053:
#line 5658 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1054:
#line 5662 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (6)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (6)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(6) - (6)].l)); }
    break;

  case 1055:
#line 5666 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1056:
#line 5670 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1057:
#line 5674 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1058:
#line 5678 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(2) - (2)].l)); }
    break;

  case 1060:
#line 5688 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1061:
#line 5692 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1062:
#line 5694 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1063:
#line 5704 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (2)].sval));
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1064:
#line 5711 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1065:
#line 5712 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1068:
#line 5725 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[(1) - (2)].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[(2) - (2)].i_val)); 	}
    break;

  case 1069:
#line 5732 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1070:
#line 5734 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1072:
#line 5742 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1073:
#line 5743 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 1074:
#line 5747 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1075:
#line 5748 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1076:
#line 5749 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1077:
#line 5750 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 1078:
#line 5751 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 1079:
#line 5758 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (7)].sym));
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_int(l, (yyvsp[(5) - (7)].i_val));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
    break;

  case 1080:
#line 5768 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1081:
#line 5769 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 1082:
#line 5774 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 1083:
#line 5776 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 1084:
#line 5781 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (2)].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[(2) - (2)].sval)); }
    break;

  case 1085:
#line 5786 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1086:
#line 5790 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1087:
#line 5791 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1088:
#line 5795 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1089:
#line 5802 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_int(l, (yyvsp[(3) - (6)].i_val) );
	  append_symbol(l, (yyvsp[(4) - (6)].sym));
	  append_int(l, (yyvsp[(5) - (6)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
    break;

  case 1090:
#line 5809 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1091:
#line 5810 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1092:
#line 5817 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_symbol(l, (yyvsp[(5) - (7)].sym));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
    break;

  case 1094:
#line 5829 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1095:
#line 5831 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1096:
#line 5842 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1111:
#line 5888 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
    break;

  case 1112:
#line 5899 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1114:
#line 5904 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1115:
#line 5908 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1116:
#line 5909 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1117:
#line 5913 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1118:
#line 5914 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1119:
#line 5915 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1120:
#line 5930 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1121:
#line 5934 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1122:
#line 5936 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1127:
#line 5959 "src/sql/server/sql_parser.y"
    { char *s = strconcat("xmlns:", (yyvsp[(3) - (3)].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1128:
#line 5968 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1129:
#line 5972 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1159:
#line 6068 "src/sql/server/sql_parser.y"
    { 
          dlist *aggr = L();

          if ((yyvsp[(4) - (6)].sym)) {
	  	if ((yyvsp[(3) - (6)].sym) != NULL && (yyvsp[(3) - (6)].sym)->token == SQL_SELECT) {
			SelectNode *s = (SelectNode*)(yyvsp[(3) - (6)].sym);
	
			s->orderby = (yyvsp[(4) - (6)].sym);
	  	} else {
			yyerror(m, "ORDER BY: missing select operator");
			YYABORT;
		}
	  }
          append_list(aggr, append_string(append_string(L(), "sys"), "xmlagg"));
  	  append_int(aggr, FALSE);
	  append_symbol(aggr, (yyvsp[(3) - (6)].sym));
	  /* int returning not used */
	  (yyval.sym) = _symbol_create_list( SQL_AGGR, aggr);
	}
    break;


/* Line 1267 of yacc.c.  */
#line 14612 "src/sql/server/sql_parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (m, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (m, yymsg);
	  }
	else
	  {
	    yyerror (m, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, m);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, m);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (m, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, m);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, m);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 6089 "src/sql/server/sql_parser.y"

int find_subgeometry_type(char* geoSubType) {
	int subType = 0;
	if(strcmp(geoSubType, "point") == 0 )
		subType = (1 << 2);
	else if(strcmp(geoSubType, "linestring") == 0)
		subType = (2 << 2);
	else if(strcmp(geoSubType, "polygon") == 0)
		subType = (4 << 2);
	else if(strcmp(geoSubType, "multipoint") == 0)
		subType = (5 << 2);
	else if(strcmp(geoSubType, "multilinestring") == 0)
		subType = (6 << 2);
	else if(strcmp(geoSubType, "multipolygon") == 0)
		subType = (7 << 2);
	else if(strcmp(geoSubType, "geometrycollection") == 0)
		subType = (8 << 2);
	else {
		size_t strLength = strlen(geoSubType);
		if(strLength > 0 ) {
			char *typeSubStr = GDKmalloc(strLength);
			char flag = geoSubType[strLength-1]; 

			if (typeSubStr == NULL) {
				return -1;
			}
			memcpy(typeSubStr, geoSubType, strLength-1);
			typeSubStr[strLength-1]='\0';
			if(flag == 'z' || flag == 'm' ) {
				subType = find_subgeometry_type(typeSubStr);
				if (subType == -1) {
					GDKfree(typeSubStr);
					return -1;
				}
				if(flag == 'z')
					SET_Z(subType);
				if(flag == 'm')
					SET_M(subType);
			}
			GDKfree(typeSubStr);
		}

	}
	return subType;	
}

char *token2string(int token)
{
	switch (token) {
#define SQL(TYPE) case SQL_##TYPE : return #TYPE
	SQL(CREATE_SCHEMA);
	SQL(CREATE_TABLE);
	SQL(CREATE_VIEW);
	SQL(CREATE_INDEX);
	SQL(CREATE_ROLE);
	SQL(CREATE_USER);
	SQL(CREATE_TYPE);
	SQL(CREATE_FUNC);
	SQL(CREATE_SEQ);
	SQL(CREATE_TRIGGER);
	SQL(DROP_SCHEMA);
	SQL(DROP_TABLE);
	SQL(DROP_VIEW);
	SQL(DROP_INDEX);
	SQL(DROP_ROLE);
	SQL(DROP_USER);
	SQL(DROP_TYPE);
	SQL(DROP_FUNC);
	SQL(DROP_SEQ);
	SQL(DROP_TRIGGER);
	SQL(ALTER_TABLE);
	SQL(ALTER_SEQ);
	SQL(ALTER_USER);
	SQL(DROP_COLUMN);
	SQL(DROP_CONSTRAINT);
	SQL(DROP_DEFAULT);
	SQL(DECLARE);
	SQL(COMMENT);
	SQL(SET);
	SQL(PREP);
	SQL(NAME);
	SQL(USER);
	SQL(PATH);
	SQL(CHARSET);
	SQL(SCHEMA);
	SQL(TABLE);
	SQL(VIEW);
	SQL(INDEX);
	SQL(TYPE);
	SQL(SEQUENCE);
	SQL(CASE);
	SQL(CAST);
	SQL(RETURN);
	SQL(IF);
	SQL(ELSE);
	SQL(WHILE);
	SQL(COLUMN);
	SQL(COLUMN_OPTIONS);
	SQL(COALESCE);
	SQL(CONSTRAINT);
	SQL(CHECK);
	SQL(DEFAULT);
	SQL(NOT_NULL);
	SQL(NULL);
	SQL(NULLIF);
	SQL(UNIQUE);
	SQL(PRIMARY_KEY);
	SQL(FOREIGN_KEY);
	SQL(BEGIN);
#define TR(TYPE) case TR_##TYPE : return #TYPE
	TR(COMMIT);
	TR(ROLLBACK);
	TR(SAVEPOINT);
	TR(RELEASE);
	TR(START);
	TR(MODE);
	SQL(INSERT);
	SQL(DELETE);
	SQL(UPDATE);
	SQL(CROSS);
	SQL(JOIN);
	SQL(SELECT);
	SQL(WHERE);
	SQL(FROM);
	SQL(UNIONJOIN);
	SQL(UNION);
	SQL(EXCEPT);
	SQL(INTERSECT);
	SQL(VALUES);
	SQL(ASSIGN);
	SQL(ORDERBY);
	SQL(GROUPBY);
	SQL(DESC);
	SQL(AND);
	SQL(OR);
	SQL(NOT);
	SQL(EXISTS);
	SQL(NOT_EXISTS);
	SQL(OP);
	SQL(UNOP);
	SQL(BINOP);
	SQL(NOP);
	SQL(BETWEEN);
	SQL(NOT_BETWEEN);
	SQL(LIKE);
	SQL(IN);
	SQL(NOT_IN);
	SQL(GRANT);
	SQL(GRANT_ROLES);
	SQL(REVOKE);
	SQL(REVOKE_ROLES);
	SQL(EXECUTE);
	SQL(PRIVILEGES);
	SQL(ROLE);
	SQL(PARAMETER);
	SQL(FUNC);
	SQL(AGGR);
	SQL(RANK);
	SQL(FRAME);
	SQL(COMPARE);
	SQL(FILTER);
	SQL(ROUTINE);
	SQL(TEMP_LOCAL);
	SQL(TEMP_GLOBAL);
	SQL(INT_VALUE);
	SQL(ATOM);
	SQL(USING);
	SQL(WHEN);
	SQL(ESCAPE);
	SQL(COPYFROM);
	SQL(BINCOPYFROM);
	SQL(COPYTO);
	SQL(EXPORT);
	SQL(NEXT);
	SQL(MULSTMT);
	SQL(WITH);
	SQL(XMLCOMMENT);
	SQL(XMLCONCAT);
	SQL(XMLDOCUMENT);
	SQL(XMLELEMENT);
	SQL(XMLATTRIBUTE);
	SQL(XMLFOREST);
	SQL(XMLPARSE);
	SQL(XMLPI);
	SQL(XMLQUERY);
	SQL(XMLTEXT);
	SQL(XMLVALIDATE);
	SQL(XMLNAMESPACES);
	}
	return "unknown";	/* just needed for broken compilers ! */
}

void *sql_error( mvc * sql, int error_code, char *format, ... )
{
	va_list	ap;

	va_start (ap,format);
	if (sql->errstr[0] == '\0')
		vsnprintf(sql->errstr, ERRSIZE-1, _(format), ap);
	if (!sql->session->status)
		sql->session->status = -error_code;
	va_end (ap);
	return NULL;
}

int sqlerror(mvc * c, const char *err)
{
	const char *sqlstate;

	if (err && strlen(err) > 6 && err[5] == '!') {
		/* sql state provided */
		sqlstate = "";
	} else {
		/* default: Syntax error or access rule violation */
		sqlstate = SQLSTATE(42000);
	}
	if (c->scanner.errstr) {
		if (c->scanner.errstr[0] == '!'){
			assert(0);// catch it
			(void)sql_error(c, 4,
					"%s%s: %s\n",
					sqlstate, err, c->scanner.errstr + 1);
		} else
			(void)sql_error(c, 4,
					"%s%s: %s in \"%.80s\"\n",
					sqlstate, err, c->scanner.errstr,
					QUERY(c->scanner));
	} else
		(void)sql_error(c, 4,
				"%s%s in: \"%.80s\"\n",
				sqlstate, err, QUERY(c->scanner));
	return 1;
}


