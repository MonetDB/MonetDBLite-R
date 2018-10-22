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
     sqlASC = 307,
     GEOMETRY = 308,
     GEOMETRYSUBTYPE = 309,
     GEOMETRYA = 310,
     USER = 311,
     CURRENT_USER = 312,
     SESSION_USER = 313,
     LOCAL = 314,
     LOCKED = 315,
     BEST = 316,
     EFFORT = 317,
     CURRENT_ROLE = 318,
     sqlSESSION = 319,
     sqlDELETE = 320,
     UPDATE = 321,
     SELECT = 322,
     INSERT = 323,
     LATERAL = 324,
     LEFT = 325,
     RIGHT = 326,
     FULL = 327,
     OUTER = 328,
     NATURAL = 329,
     CROSS = 330,
     JOIN = 331,
     INNER = 332,
     COMMIT = 333,
     ROLLBACK = 334,
     SAVEPOINT = 335,
     RELEASE = 336,
     WORK = 337,
     CHAIN = 338,
     NO = 339,
     PRESERVE = 340,
     ROWS = 341,
     START = 342,
     TRANSACTION = 343,
     READ = 344,
     WRITE = 345,
     ONLY = 346,
     ISOLATION = 347,
     LEVEL = 348,
     UNCOMMITTED = 349,
     COMMITTED = 350,
     sqlREPEATABLE = 351,
     SERIALIZABLE = 352,
     DIAGNOSTICS = 353,
     sqlSIZE = 354,
     STORAGE = 355,
     ASYMMETRIC = 356,
     SYMMETRIC = 357,
     ORDER = 358,
     ORDERED = 359,
     BY = 360,
     IMPRINTS = 361,
     EXISTS = 362,
     ESCAPE = 363,
     HAVING = 364,
     sqlGROUP = 365,
     sqlNULL = 366,
     FROM = 367,
     FOR = 368,
     MATCH = 369,
     EXTRACT = 370,
     SEQUENCE = 371,
     INCREMENT = 372,
     RESTART = 373,
     CONTINUE = 374,
     MAXVALUE = 375,
     MINVALUE = 376,
     CYCLE = 377,
     NOMAXVALUE = 378,
     NOMINVALUE = 379,
     NOCYCLE = 380,
     NEXT = 381,
     VALUE = 382,
     CACHE = 383,
     GENERATED = 384,
     ALWAYS = 385,
     IDENTITY = 386,
     SERIAL = 387,
     BIGSERIAL = 388,
     AUTO_INCREMENT = 389,
     SCOLON = 390,
     AT = 391,
     XMLCOMMENT = 392,
     XMLCONCAT = 393,
     XMLDOCUMENT = 394,
     XMLELEMENT = 395,
     XMLATTRIBUTES = 396,
     XMLFOREST = 397,
     XMLPARSE = 398,
     STRIP = 399,
     WHITESPACE = 400,
     XMLPI = 401,
     XMLQUERY = 402,
     PASSING = 403,
     XMLTEXT = 404,
     NIL = 405,
     REF = 406,
     ABSENT = 407,
     EMPTY = 408,
     DOCUMENT = 409,
     ELEMENT = 410,
     CONTENT = 411,
     XMLNAMESPACES = 412,
     NAMESPACE = 413,
     XMLVALIDATE = 414,
     RETURNING = 415,
     LOCATION = 416,
     ID = 417,
     ACCORDING = 418,
     XMLSCHEMA = 419,
     URI = 420,
     XMLAGG = 421,
     FILTER = 422,
     UNIONJOIN = 423,
     CORRESPONDING = 424,
     INTERSECT = 425,
     EXCEPT = 426,
     UNION = 427,
     DATA = 428,
     WITH = 429,
     FILTER_FUNC = 430,
     NOT = 431,
     SOME = 432,
     OR = 433,
     ILIKE = 434,
     NOT_ILIKE = 435,
     LIKE = 436,
     NOT_LIKE = 437,
     sqlIN = 438,
     NOT_IN = 439,
     BETWEEN = 440,
     NOT_BETWEEN = 441,
     ANY = 442,
     ALL = 443,
     AND = 444,
     COMPARISON = 445,
     SPLIT_PART = 446,
     POSITION = 447,
     SUBSTRING = 448,
     CONCATSTRING = 449,
     RIGHT_SHIFT_ASSIGN = 450,
     LEFT_SHIFT_ASSIGN = 451,
     RIGHT_SHIFT = 452,
     LEFT_SHIFT = 453,
     UMINUS = 454,
     GEOM_OVERLAP_OR_LEFT = 455,
     GEOM_OVERLAP_OR_BELOW = 456,
     GEOM_OVERLAP_OR_ABOVE = 457,
     GEOM_OVERLAP = 458,
     GEOM_MBR_EQUAL = 459,
     GEOM_DIST = 460,
     GEOM_ABOVE = 461,
     GEOM_BELOW = 462,
     GEOM_OVERLAP_OR_RIGHT = 463,
     TEMP = 464,
     TEMPORARY = 465,
     STREAM = 466,
     MERGE = 467,
     REMOTE = 468,
     REPLICA = 469,
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
#define sqlASC 307
#define GEOMETRY 308
#define GEOMETRYSUBTYPE 309
#define GEOMETRYA 310
#define USER 311
#define CURRENT_USER 312
#define SESSION_USER 313
#define LOCAL 314
#define LOCKED 315
#define BEST 316
#define EFFORT 317
#define CURRENT_ROLE 318
#define sqlSESSION 319
#define sqlDELETE 320
#define UPDATE 321
#define SELECT 322
#define INSERT 323
#define LATERAL 324
#define LEFT 325
#define RIGHT 326
#define FULL 327
#define OUTER 328
#define NATURAL 329
#define CROSS 330
#define JOIN 331
#define INNER 332
#define COMMIT 333
#define ROLLBACK 334
#define SAVEPOINT 335
#define RELEASE 336
#define WORK 337
#define CHAIN 338
#define NO 339
#define PRESERVE 340
#define ROWS 341
#define START 342
#define TRANSACTION 343
#define READ 344
#define WRITE 345
#define ONLY 346
#define ISOLATION 347
#define LEVEL 348
#define UNCOMMITTED 349
#define COMMITTED 350
#define sqlREPEATABLE 351
#define SERIALIZABLE 352
#define DIAGNOSTICS 353
#define sqlSIZE 354
#define STORAGE 355
#define ASYMMETRIC 356
#define SYMMETRIC 357
#define ORDER 358
#define ORDERED 359
#define BY 360
#define IMPRINTS 361
#define EXISTS 362
#define ESCAPE 363
#define HAVING 364
#define sqlGROUP 365
#define sqlNULL 366
#define FROM 367
#define FOR 368
#define MATCH 369
#define EXTRACT 370
#define SEQUENCE 371
#define INCREMENT 372
#define RESTART 373
#define CONTINUE 374
#define MAXVALUE 375
#define MINVALUE 376
#define CYCLE 377
#define NOMAXVALUE 378
#define NOMINVALUE 379
#define NOCYCLE 380
#define NEXT 381
#define VALUE 382
#define CACHE 383
#define GENERATED 384
#define ALWAYS 385
#define IDENTITY 386
#define SERIAL 387
#define BIGSERIAL 388
#define AUTO_INCREMENT 389
#define SCOLON 390
#define AT 391
#define XMLCOMMENT 392
#define XMLCONCAT 393
#define XMLDOCUMENT 394
#define XMLELEMENT 395
#define XMLATTRIBUTES 396
#define XMLFOREST 397
#define XMLPARSE 398
#define STRIP 399
#define WHITESPACE 400
#define XMLPI 401
#define XMLQUERY 402
#define PASSING 403
#define XMLTEXT 404
#define NIL 405
#define REF 406
#define ABSENT 407
#define EMPTY 408
#define DOCUMENT 409
#define ELEMENT 410
#define CONTENT 411
#define XMLNAMESPACES 412
#define NAMESPACE 413
#define XMLVALIDATE 414
#define RETURNING 415
#define LOCATION 416
#define ID 417
#define ACCORDING 418
#define XMLSCHEMA 419
#define URI 420
#define XMLAGG 421
#define FILTER 422
#define UNIONJOIN 423
#define CORRESPONDING 424
#define INTERSECT 425
#define EXCEPT 426
#define UNION 427
#define DATA 428
#define WITH 429
#define FILTER_FUNC 430
#define NOT 431
#define SOME 432
#define OR 433
#define ILIKE 434
#define NOT_ILIKE 435
#define LIKE 436
#define NOT_LIKE 437
#define sqlIN 438
#define NOT_IN 439
#define BETWEEN 440
#define NOT_BETWEEN 441
#define ANY 442
#define ALL 443
#define AND 444
#define COMPARISON 445
#define SPLIT_PART 446
#define POSITION 447
#define SUBSTRING 448
#define CONCATSTRING 449
#define RIGHT_SHIFT_ASSIGN 450
#define LEFT_SHIFT_ASSIGN 451
#define RIGHT_SHIFT 452
#define LEFT_SHIFT 453
#define UMINUS 454
#define GEOM_OVERLAP_OR_LEFT 455
#define GEOM_OVERLAP_OR_BELOW 456
#define GEOM_OVERLAP_OR_ABOVE 457
#define GEOM_OVERLAP 458
#define GEOM_MBR_EQUAL 459
#define GEOM_DIST 460
#define GEOM_ABOVE 461
#define GEOM_BELOW 462
#define GEOM_OVERLAP_OR_RIGHT 463
#define TEMP 464
#define TEMPORARY 465
#define STREAM 466
#define MERGE 467
#define REMOTE 468
#define REPLICA 469
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
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
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
#line 111 "src/sql/server/sql_parser.y"
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
#line 876 "src/sql/server/sql_parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 120 "src/sql/server/sql_parser.y"

extern int sqllex( YYSTYPE *yylval, void *m );
/* enable to activate debugging support
int yydebug=1;
*/


/* Line 216 of yacc.c.  */
#line 895 "src/sql/server/sql_parser.tab.c"

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
#define YYFINAL  240
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   18339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  355
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  415
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1162
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2176

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
       2,     2,     2,     2,     2,     2,     2,   209,   196,     2,
     175,   176,   207,   194,   349,   195,   350,   208,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   351,     2,
       2,   179,     2,   354,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   352,     2,   353,   198,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   197,     2,   211,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     177,   178,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   199,   200,   201,   202,
     203,   204,   205,   206,   210,   212,   213,   214,   215,   216,
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
     590,   591,   595,   601,   608,   614,   620,   626,   635,   642,
     643,   650,   655,   657,   659,   662,   665,   668,   671,   672,
     677,   682,   686,   690,   692,   697,   698,   702,   705,   707,
     711,   713,   715,   717,   719,   721,   723,   725,   729,   732,
     733,   735,   737,   740,   747,   749,   753,   755,   757,   759,
     762,   764,   767,   773,   775,   776,   780,   783,   784,   787,
     790,   792,   794,   797,   800,   804,   808,   809,   811,   813,
     816,   819,   820,   822,   824,   826,   827,   830,   833,   835,
     837,   840,   846,   848,   851,   855,   864,   869,   871,   875,
     878,   886,   888,   892,   894,   896,   897,   901,   902,   904,
     908,   915,   919,   921,   923,   935,   945,   957,   968,   980,
     992,  1002,  1010,  1020,  1022,  1028,  1035,  1036,  1040,  1041,
    1045,  1047,  1049,  1051,  1053,  1055,  1057,  1059,  1061,  1063,
    1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,
    1085,  1087,  1089,  1091,  1093,  1095,  1097,  1100,  1103,  1108,
    1110,  1111,  1113,  1117,  1120,  1122,  1124,  1129,  1136,  1142,
    1147,  1149,  1152,  1157,  1159,  1162,  1163,  1166,  1174,  1175,
    1178,  1184,  1193,  1194,  1197,  1198,  1200,  1203,  1208,  1213,
    1215,  1217,  1219,  1220,  1225,  1228,  1238,  1240,  1242,  1244,
    1246,  1248,  1250,  1254,  1255,  1258,  1260,  1263,  1268,  1273,
    1278,  1283,  1284,  1286,  1287,  1289,  1293,  1294,  1298,  1300,
    1302,  1303,  1308,  1310,  1315,  1319,  1324,  1328,  1332,  1336,
    1341,  1347,  1352,  1357,  1362,  1368,  1372,  1378,  1385,  1391,
    1397,  1403,  1409,  1414,  1418,  1422,  1426,  1431,  1432,  1436,
    1439,  1441,  1445,  1446,  1448,  1450,  1452,  1454,  1456,  1458,
    1460,  1462,  1464,  1466,  1470,  1473,  1477,  1482,  1486,  1491,
    1495,  1496,  1498,  1500,  1504,  1507,  1510,  1514,  1518,  1521,
    1524,  1527,  1529,  1531,  1532,  1535,  1539,  1540,  1541,  1545,
    1560,  1574,  1581,  1590,  1597,  1604,  1605,  1610,  1612,  1616,
    1617,  1621,  1623,  1627,  1629,  1632,  1633,  1637,  1643,  1651,
    1652,  1654,  1655,  1658,  1661,  1666,  1671,  1672,  1676,  1677,
    1679,  1680,  1683,  1684,  1687,  1689,  1693,  1695,  1699,  1704,
    1705,  1708,  1711,  1717,  1722,  1729,  1734,  1740,  1741,  1744,
    1747,  1749,  1753,  1759,  1761,  1765,  1767,  1771,  1773,  1775,
    1777,  1779,  1781,  1783,  1784,  1786,  1788,  1790,  1794,  1796,
    1800,  1804,  1808,  1809,  1812,  1816,  1821,  1826,  1832,  1838,
    1839,  1841,  1844,  1845,  1847,  1849,  1851,  1853,  1856,  1859,
    1861,  1865,  1869,  1871,  1876,  1878,  1880,  1882,  1887,  1894,
    1900,  1902,  1906,  1908,  1914,  1920,  1926,  1930,  1932,  1933,
    1935,  1937,  1938,  1940,  1946,  1948,  1953,  1954,  1957,  1959,
    1963,  1966,  1969,  1973,  1976,  1980,  1982,  1984,  1985,  1991,
    1997,  2000,  2005,  2007,  2008,  2010,  2011,  2015,  2017,  2021,
    2022,  2025,  2029,  2031,  2035,  2037,  2038,  2042,  2043,  2046,
    2049,  2050,  2053,  2056,  2057,  2060,  2063,  2066,  2068,  2072,
    2075,  2076,  2078,  2080,  2082,  2084,  2086,  2088,  2090,  2092,
    2094,  2096,  2098,  2101,  2103,  2107,  2111,  2118,  2125,  2126,
    2128,  2130,  2134,  2138,  2142,  2146,  2148,  2152,  2157,  2161,
    2167,  2173,  2181,  2189,  2191,  2195,  2200,  2205,  2207,  2209,
    2211,  2214,  2216,  2220,  2224,  2228,  2232,  2237,  2241,  2245,
    2250,  2254,  2256,  2260,  2264,  2268,  2272,  2276,  2280,  2284,
    2288,  2292,  2296,  2300,  2304,  2308,  2312,  2316,  2320,  2324,
    2328,  2332,  2335,  2339,  2343,  2347,  2351,  2354,  2357,  2361,
    2363,  2365,  2367,  2369,  2371,  2373,  2375,  2377,  2379,  2381,
    2386,  2388,  2390,  2392,  2394,  2396,  2398,  2400,  2402,  2408,
    2412,  2414,  2418,  2419,  2423,  2424,  2428,  2429,  2433,  2435,
    2437,  2439,  2441,  2444,  2446,  2449,  2452,  2457,  2460,  2462,
    2465,  2468,  2469,  2473,  2476,  2479,  2483,  2486,  2490,  2495,
    2497,  2501,  2503,  2505,  2507,  2509,  2516,  2519,  2522,  2525,
    2528,  2531,  2532,  2535,  2544,  2553,  2560,  2567,  2574,  2578,
    2587,  2589,  2593,  2595,  2599,  2603,  2606,  2607,  2610,  2612,
    2614,  2616,  2620,  2622,  2626,  2628,  2632,  2637,  2644,  2650,
    2656,  2661,  2668,  2670,  2672,  2674,  2675,  2679,  2680,  2684,
    2685,  2689,  2690,  2692,  2696,  2700,  2702,  2704,  2706,  2708,
    2710,  2712,  2714,  2716,  2718,  2720,  2723,  2725,  2728,  2731,
    2734,  2738,  2740,  2743,  2745,  2747,  2749,  2751,  2753,  2755,
    2757,  2759,  2761,  2764,  2769,  2774,  2776,  2779,  2782,  2785,
    2788,  2790,  2792,  2797,  2799,  2803,  2809,  2811,  2815,  2821,
    2828,  2835,  2837,  2844,  2849,  2855,  2860,  2862,  2866,  2870,
    2874,  2879,  2881,  2884,  2889,  2891,  2894,  2895,  2898,  2900,
    2902,  2904,  2906,  2908,  2910,  2912,  2914,  2919,  2924,  2929,
    2931,  2936,  2938,  2940,  2942,  2944,  2946,  2948,  2953,  2960,
    2962,  2967,  2974,  2976,  2979,  2981,  2983,  2985,  2987,  2992,
    2994,  2999,  3006,  3008,  3013,  3015,  3020,  3027,  3029,  3031,
    3033,  3035,  3037,  3039,  3042,  3044,  3046,  3050,  3052,  3056,
    3058,  3060,  3062,  3064,  3066,  3068,  3070,  3072,  3074,  3076,
    3078,  3080,  3082,  3084,  3086,  3088,  3090,  3092,  3094,  3096,
    3098,  3100,  3102,  3104,  3106,  3108,  3110,  3112,  3114,  3116,
    3118,  3120,  3122,  3124,  3126,  3128,  3130,  3132,  3134,  3136,
    3138,  3140,  3142,  3144,  3146,  3148,  3150,  3152,  3154,  3156,
    3158,  3160,  3162,  3164,  3166,  3168,  3170,  3172,  3174,  3176,
    3178,  3180,  3182,  3184,  3186,  3188,  3190,  3192,  3194,  3196,
    3198,  3200,  3202,  3204,  3206,  3208,  3210,  3212,  3214,  3216,
    3218,  3220,  3222,  3224,  3226,  3228,  3230,  3232,  3234,  3236,
    3238,  3240,  3242,  3244,  3248,  3250,  3252,  3254,  3256,  3259,
    3262,  3266,  3271,  3272,  3274,  3277,  3279,  3285,  3291,  3294,
    3297,  3300,  3305,  3312,  3315,  3318,  3320,  3322,  3324,  3328,
    3330,  3332,  3334,  3336,  3338,  3340,  3342,  3344,  3346,  3348,
    3350,  3356,  3362,  3368,  3376,  3377,  3380,  3385,  3392,  3397,
    3400,  3405,  3408,  3410,  3415,  3417,  3421,  3424,  3425,  3428,
    3430,  3432,  3435,  3437,  3441,  3443,  3444,  3447,  3451,  3455,
    3459,  3463,  3468,  3476,  3477,  3480,  3482,  3486,  3489,  3491,
    3492,  3495,  3497,  3504,  3507,  3510,  3518,  3520,  3521,  3524,
    3533,  3535,  3536,  3540,  3542,  3544,  3548,  3550,  3552,  3555,
    3560,  3561,  3563,  3567,  3571,  3577,  3584,  3586,  3588,  3590,
    3592,  3593,  3596,  3599,  3604,  3606,  3610,  3612,  3614,  3616,
    3618,  3622,  3625,  3628,  3629,  3631,  3634,  3637,  3638,  3640,
    3646,  3648,  3650,  3654,  3658,  3660,  3662,  3663,  3666,  3668,
    3671,  3673,  3674,  3676,  3678,  3681,  3682,  3684,  3687,  3690,
    3693,  3695,  3697
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     356,     0,    -1,   369,   135,    -1,    -1,   251,   357,   369,
     135,    -1,    -1,   247,   358,   369,   135,    -1,    -1,   246,
     359,   369,   135,    -1,    -1,   248,   360,   356,    -1,    -1,
     249,   361,   356,    -1,   688,   135,    -1,    -1,   135,    -1,
       1,   135,    -1,    51,    -1,   231,    -1,   362,    -1,   231,
     181,   327,    -1,    -1,   313,   107,    -1,    -1,   313,   178,
     107,    -1,   256,    -1,   279,    -1,   241,    -1,   374,    -1,
     383,    -1,   388,    -1,   405,    -1,   505,    -1,   400,    -1,
     371,    -1,   373,    -1,   244,   656,   456,   585,   370,    -1,
     469,    -1,   693,    -1,    -1,   245,    -1,   368,   372,    -1,
     368,   417,    -1,   450,   673,    -1,   372,   349,   450,   673,
      -1,   367,   682,   179,   580,    -1,   367,   457,   179,   606,
      -1,   367,    64,   228,   682,    -1,   367,   278,   682,    -1,
     367,   653,   179,   682,    -1,   367,   265,   682,    -1,   367,
     292,   303,    59,    -1,   367,   292,   303,   655,    -1,   362,
     278,   365,   375,   377,   690,   378,    -1,   366,   278,   364,
     656,   508,    -1,   682,    -1,   228,   376,    -1,   682,   228,
     376,    -1,   682,    -1,    -1,   254,    20,   279,   682,    -1,
      -1,   379,    -1,   380,    -1,   379,   380,    -1,   383,    -1,
     388,    -1,   405,    -1,   505,    -1,   400,    -1,    -1,   174,
     266,   382,    -1,    57,    -1,    63,    -1,   263,   391,   286,
     398,   385,   387,    -1,   263,   384,   286,   398,   386,   387,
      -1,   680,    -1,   384,   349,   680,    -1,    -1,   174,   263,
     271,    -1,    -1,   174,   266,   271,    -1,    -1,   112,   382,
      -1,   264,   389,   391,   112,   398,   387,    -1,   264,   390,
     384,   112,   398,   387,    -1,    -1,   263,   271,   113,    -1,
      -1,   266,   271,   113,    -1,   392,    -1,   395,   270,   394,
      -1,   393,    -1,   393,   349,   393,    -1,   320,   112,    -1,
     320,   267,    -1,   284,   656,    -1,   656,    -1,   503,    -1,
     191,   275,    -1,   191,    -1,   396,    -1,   397,    -1,   396,
     349,   397,    -1,    68,    -1,    65,    -1,   257,    -1,    66,
     456,    -1,    67,   456,    -1,   277,   456,    -1,   253,    -1,
     399,    -1,   398,   349,   399,    -1,   276,    -1,   680,    -1,
     282,   284,   656,   283,   404,   425,    -1,   282,   284,   656,
     283,   284,   656,    -1,   282,   284,   656,   282,   402,    -1,
     282,   284,   656,   256,   403,    -1,   282,   284,   656,   279,
      89,    91,    -1,   282,   284,   656,   279,    68,    91,    -1,
     282,   284,   656,   279,    89,    90,    -1,   282,    56,   682,
     401,    -1,   282,    56,   682,   259,   286,   682,    -1,   282,
      56,   279,   415,   262,   687,    16,   336,   262,   687,    -1,
     174,   415,   262,   687,    -1,   279,   278,   682,    -1,   174,
     415,   262,   687,   279,   278,   682,    -1,   404,   682,   279,
     254,   435,    -1,   404,   682,   279,   111,    -1,   404,   682,
     279,   178,   111,    -1,   404,   682,   256,   254,    -1,   404,
     682,   279,   100,     3,    -1,   404,   682,   279,   100,   111,
      -1,   404,   682,   508,    -1,   230,   682,   508,    -1,   284,
     656,   508,    -1,   285,    -1,    -1,   362,   414,    -1,   362,
     417,    -1,   452,    -1,   458,    -1,   461,    -1,   412,    -1,
     406,    -1,   490,    -1,   362,   116,   656,   407,    -1,   366,
     116,   656,    -1,   282,   116,   656,   408,    -1,   409,    -1,
     407,   409,    -1,   410,    -1,   408,   410,    -1,   328,   673,
      -1,    87,   174,   671,    -1,   411,    -1,   328,   673,    -1,
     118,    -1,   118,   174,   671,    -1,   118,   174,   606,    -1,
     411,    -1,   117,   105,   670,    -1,   121,   670,    -1,   124,
      -1,   120,   670,    -1,   123,    -1,   128,   670,    -1,   122,
      -1,   125,    -1,   362,   413,   326,   682,   270,   656,   175,
     450,   176,    -1,   287,    -1,   104,    -1,   106,    -1,    -1,
     265,   682,   381,    -1,    56,   682,   174,   415,   262,   687,
     240,   687,   278,   682,    -1,    -1,   261,    -1,   260,    -1,
      -1,   100,   682,     3,    -1,   284,   365,   656,   421,   416,
      -1,   284,   365,   656,   112,   236,   626,    -1,   223,   284,
     365,   656,   421,    -1,   224,   284,   365,   656,   421,    -1,
     226,   284,   365,   656,   421,    -1,   225,   284,   365,   656,
     421,   270,     3,   418,    -1,   419,   284,   365,   656,   421,
     420,    -1,    -1,   174,    56,   687,   415,   262,   687,    -1,
     174,   415,   262,   687,    -1,   222,    -1,   221,    -1,    59,
     222,    -1,    59,   221,    -1,    17,   222,    -1,    17,   221,
      -1,    -1,   270,    78,    65,    86,    -1,   270,    78,    85,
      86,    -1,   270,    78,   256,    -1,   175,   424,   176,    -1,
     422,    -1,   456,   328,   453,   423,    -1,    -1,   174,    84,
     173,    -1,   174,   173,    -1,   426,    -1,   424,   349,   426,
      -1,   428,    -1,   439,    -1,   425,    -1,   431,    -1,   451,
      -1,   132,    -1,   133,    -1,   679,   673,   429,    -1,   679,
     427,    -1,    -1,   430,    -1,   433,    -1,   430,   433,    -1,
     682,   174,   272,   175,   432,   176,    -1,   433,    -1,   432,
     349,   433,    -1,   434,    -1,   436,    -1,   437,    -1,   254,
     435,    -1,   607,    -1,   440,   447,    -1,   129,   130,   328,
     131,   438,    -1,   134,    -1,    -1,   175,   407,   176,    -1,
     440,   448,    -1,    -1,   230,   682,    -1,    84,    41,    -1,
      42,    -1,    43,    -1,   279,   111,    -1,   279,   254,    -1,
     270,    66,   441,    -1,   270,    65,   441,    -1,    -1,   442,
      -1,   443,    -1,   443,   442,    -1,   442,   443,    -1,    -1,
      72,    -1,    39,    -1,    40,    -1,    -1,   114,   445,    -1,
     178,   111,    -1,   111,    -1,   287,    -1,   274,   269,    -1,
     277,   656,   456,   446,   444,    -1,   449,    -1,   287,   457,
      -1,   274,   269,   457,    -1,   258,   269,   457,   277,   656,
     456,   446,   444,    -1,   229,   175,   580,   176,    -1,   682,
      -1,   450,   349,   682,    -1,   184,   656,    -1,   363,   289,
     656,   456,   328,   453,   455,    -1,   454,    -1,   175,   453,
     176,    -1,   563,    -1,   557,    -1,    -1,   174,   229,   271,
      -1,    -1,   457,    -1,   175,   450,   176,    -1,   362,   233,
     656,   239,   240,   682,    -1,   682,   350,   682,    -1,     4,
      -1,   687,    -1,   363,   235,   656,   175,   488,   176,   238,
     487,   239,   240,   459,    -1,   363,   235,   656,   175,   488,
     176,   238,   487,   462,    -1,   363,   235,   656,   175,   488,
     176,   238,   487,   243,     5,   460,    -1,   363,   167,   235,
     656,   175,   488,   176,   239,   240,   459,    -1,   363,   237,
     656,   175,   488,   176,   238,   487,   239,   240,   459,    -1,
     363,   237,   656,   175,   488,   176,   238,   487,   243,     5,
     460,    -1,   363,   234,   656,   175,   488,   176,   239,   240,
     459,    -1,   363,   234,   656,   175,   488,   176,   462,    -1,
     363,   236,   656,   175,   488,   176,   243,     5,   460,    -1,
     465,    -1,   318,   463,   465,   135,   319,    -1,   318,   317,
     463,   465,   135,   319,    -1,    -1,   463,   465,   135,    -1,
      -1,   464,   466,   135,    -1,   510,    -1,   509,    -1,   374,
      -1,   383,    -1,   388,    -1,   405,    -1,   505,    -1,   400,
      -1,   371,    -1,   373,    -1,   467,    -1,   562,    -1,   510,
      -1,   509,    -1,   383,    -1,   388,    -1,   371,    -1,   373,
      -1,   467,    -1,   562,    -1,   469,    -1,   468,    -1,   483,
      -1,   481,    -1,   475,    -1,   473,    -1,   242,   470,    -1,
     242,   626,    -1,   471,   175,   472,   176,    -1,   656,    -1,
      -1,   608,    -1,   472,   349,   608,    -1,   281,   474,    -1,
     454,    -1,   580,    -1,   284,   175,   454,   176,    -1,   307,
     608,   477,   480,   319,   307,    -1,   307,   479,   480,   319,
     307,    -1,   308,   608,   309,   463,    -1,   476,    -1,   477,
     476,    -1,   308,   580,   309,   463,    -1,   478,    -1,   479,
     478,    -1,    -1,   310,   463,    -1,   313,   580,   309,   463,
     482,   319,   313,    -1,    -1,   310,   463,    -1,   314,   580,
     309,   463,   482,    -1,   484,   315,   580,   316,   463,   319,
     315,   485,    -1,    -1,   682,   351,    -1,    -1,   682,    -1,
     679,   673,    -1,   486,   349,   679,   673,    -1,   284,   175,
     486,   176,    -1,   673,    -1,   489,    -1,   207,    -1,    -1,
     489,   349,   682,   673,    -1,   682,   673,    -1,   363,   329,
     656,   491,   492,   270,   656,   493,   498,    -1,   331,    -1,
     332,    -1,    68,    -1,    65,    -1,   257,    -1,    66,    -1,
      66,   330,   450,    -1,    -1,   338,   494,    -1,   495,    -1,
     494,   495,    -1,   336,   497,   496,   682,    -1,   335,   497,
     496,   682,    -1,   336,   284,   496,   682,    -1,   335,   284,
     496,   682,    -1,    -1,   328,    -1,    -1,   333,    -1,   499,
     501,   502,    -1,    -1,   113,   337,   500,    -1,   333,    -1,
     334,    -1,    -1,   308,   175,   580,   176,    -1,   466,    -1,
     318,   317,   464,   319,    -1,   235,   656,   506,    -1,   167,
     235,   656,   506,    -1,   237,   656,   506,    -1,   234,   656,
     506,    -1,   236,   656,   506,    -1,   235,   364,   656,   506,
      -1,   167,   235,   364,   656,   506,    -1,   237,   364,   656,
     506,    -1,   234,   364,   656,   506,    -1,   236,   364,   656,
     506,    -1,   366,   284,   364,   656,   508,    -1,   366,   504,
     508,    -1,   366,   191,   235,   656,   508,    -1,   366,   191,
     167,   235,   656,   508,    -1,   366,   191,   237,   656,   508,
      -1,   366,   191,   234,   656,   508,    -1,   366,   191,   236,
     656,   508,    -1,   366,   289,   364,   656,   508,    -1,   366,
     233,   656,   508,    -1,   366,   265,   682,    -1,   366,    56,
     682,    -1,   366,   326,   656,    -1,   366,   329,   364,   656,
      -1,    -1,   175,   507,   176,    -1,   175,   176,    -1,   673,
      -1,   673,   349,   507,    -1,    -1,    43,    -1,    42,    -1,
     510,    -1,   509,    -1,   534,    -1,   536,    -1,   538,    -1,
     537,    -1,   519,    -1,   511,    -1,    78,   516,   517,    -1,
      80,   682,    -1,    81,    80,   682,    -1,    79,   516,   517,
     518,    -1,    87,    88,   512,    -1,   279,    59,    88,   512,
      -1,   279,    88,   512,    -1,    -1,   513,    -1,   514,    -1,
     513,   349,   514,    -1,    89,    91,    -1,    89,    90,    -1,
      92,    93,   515,    -1,    98,    99,   686,    -1,    89,    94,
      -1,    89,    95,    -1,    96,    89,    -1,    97,    -1,    82,
      -1,    -1,   192,    83,    -1,   192,    84,    83,    -1,    -1,
      -1,   286,    80,   682,    -1,   320,   527,   267,   656,   456,
     112,   532,   522,   525,   528,   529,   530,   531,   520,    -1,
     320,   527,   267,   656,   456,   112,   323,   522,   525,   528,
     529,   530,   531,    -1,   320,   236,   267,   656,   112,   626,
      -1,   320,    27,   267,   656,   456,   112,   532,   531,    -1,
     320,   453,   267,   687,   525,   528,    -1,   320,   453,   267,
     324,   525,   528,    -1,    -1,   325,   175,   521,   176,    -1,
     671,    -1,   521,   349,   671,    -1,    -1,   175,   523,   176,
      -1,   524,    -1,   523,   349,   524,    -1,   682,    -1,   682,
       3,    -1,    -1,   526,   322,   687,    -1,   526,   322,   687,
     349,   687,    -1,   526,   322,   687,   349,   687,   349,   687,
      -1,    -1,    16,    -1,    -1,   671,   321,    -1,   305,   671,
      -1,   671,   305,   671,   321,    -1,   671,   321,   305,   671,
      -1,    -1,   111,   496,   687,    -1,    -1,    60,    -1,    -1,
      61,    62,    -1,    -1,    84,   230,    -1,   533,    -1,   175,
     533,   176,    -1,   687,    -1,   533,   349,   687,    -1,    65,
     112,   656,   551,    -1,    -1,   119,   131,    -1,   118,   131,
      -1,   257,   284,   656,   535,   508,    -1,   257,   656,   535,
     508,    -1,    66,   656,   279,   548,   571,   551,    -1,    68,
     267,   656,   539,    -1,    68,   267,   656,   457,   539,    -1,
      -1,   254,   288,    -1,   288,   540,    -1,   454,    -1,   175,
     541,   176,    -1,   540,   349,   175,   541,   176,    -1,   545,
      -1,   541,   349,   545,    -1,   546,    -1,   542,   349,   546,
      -1,   111,    -1,   608,    -1,   544,    -1,   254,    -1,   544,
      -1,   566,    -1,    -1,   191,    -1,   255,    -1,   550,    -1,
     548,   349,   550,    -1,   254,    -1,   679,   179,   549,    -1,
     679,   179,   580,    -1,   457,   179,   606,    -1,    -1,   290,
     580,    -1,   175,   552,   176,    -1,   573,    75,    76,   573,
      -1,   573,   168,   573,   556,    -1,   573,   553,    76,   573,
     556,    -1,   573,    74,   553,    76,   573,    -1,    -1,    77,
      -1,   555,   554,    -1,    -1,    73,    -1,    70,    -1,    71,
      -1,    72,    -1,   270,   580,    -1,    16,   457,    -1,   557,
      -1,   174,   558,   560,    -1,   558,   349,   559,    -1,   559,
      -1,   682,   456,   328,   605,    -1,   563,    -1,   562,    -1,
     563,    -1,    67,   547,   569,   570,    -1,    67,   547,   569,
     267,   564,   570,    -1,   566,   582,   583,   584,   585,    -1,
     565,    -1,   564,   349,   565,    -1,   682,    -1,   566,   172,
     567,   568,   566,    -1,   566,   171,   567,   568,   566,    -1,
     566,   170,   567,   568,   566,    -1,   175,   566,   176,    -1,
     561,    -1,    -1,   191,    -1,   255,    -1,    -1,   169,    -1,
     169,   105,   175,   578,   176,    -1,   632,    -1,   571,   551,
     577,   579,    -1,    -1,   112,   572,    -1,   573,    -1,   572,
     349,   573,    -1,   656,   576,    -1,   626,   576,    -1,    69,
     626,   576,    -1,   605,   575,    -1,    69,   606,   575,    -1,
     605,    -1,   552,    -1,    -1,   352,   574,   566,   353,   575,
      -1,   328,   682,   175,   684,   176,    -1,   328,   682,    -1,
     682,   175,   684,   176,    -1,   682,    -1,    -1,   575,    -1,
      -1,   110,   105,   578,    -1,   657,    -1,   578,   349,   657,
      -1,    -1,   109,   580,    -1,   580,   181,   581,    -1,   581,
      -1,   581,   192,   590,    -1,   590,    -1,    -1,   103,   105,
     586,    -1,    -1,   304,   670,    -1,   304,   610,    -1,    -1,
     305,   671,    -1,   305,   610,    -1,    -1,   306,   671,    -1,
     306,    14,    -1,   306,   610,    -1,   587,    -1,   586,   349,
     587,    -1,   608,   588,    -1,    -1,    52,    -1,   227,    -1,
     591,    -1,   592,    -1,   594,    -1,   596,    -1,   597,    -1,
     599,    -1,   601,    -1,   604,    -1,   608,    -1,   178,   590,
      -1,   589,    -1,   590,   193,   590,    -1,   590,   179,   590,
      -1,   590,   189,   593,   590,   192,   590,    -1,   590,   188,
     593,   590,   192,   590,    -1,    -1,   101,    -1,   102,    -1,
     590,   185,   595,    -1,   590,   183,   595,    -1,   590,   184,
     595,    -1,   590,   182,   595,    -1,   608,    -1,   608,   108,
     687,    -1,   608,   268,   178,   111,    -1,   608,   268,   111,
      -1,   590,   187,   175,   542,   176,    -1,   590,   186,   175,
     542,   176,    -1,   175,   598,   176,   187,   175,   542,   176,
      -1,   175,   598,   176,   186,   175,   542,   176,    -1,   590,
      -1,   598,   349,   590,    -1,   590,   193,   600,   606,    -1,
     590,   179,   600,   590,    -1,   190,    -1,   180,    -1,   191,
      -1,   107,   606,    -1,   590,    -1,   602,   349,   590,    -1,
     352,   602,   353,    -1,   603,   656,   603,    -1,   175,   563,
     176,    -1,   175,   288,   540,   176,    -1,   175,   557,   176,
      -1,   175,   563,   176,    -1,   175,   288,   540,   176,    -1,
     175,   557,   176,    -1,   609,    -1,   608,   194,   608,    -1,
     608,   195,   608,    -1,   608,   207,   608,    -1,   608,   208,
     608,    -1,   608,   209,   608,    -1,   608,   198,   608,    -1,
     608,   196,   608,    -1,   608,   215,   608,    -1,   608,   212,
     608,    -1,   608,   220,   608,    -1,   608,   213,   608,    -1,
     608,   219,   608,    -1,   608,   214,   608,    -1,   608,   218,
     608,    -1,   608,   217,   608,    -1,   608,   136,   608,    -1,
     608,   197,   608,    -1,   608,   211,   608,    -1,   608,   216,
     608,    -1,   211,   608,    -1,   608,   206,   608,    -1,   608,
     205,   608,    -1,   608,   204,   608,    -1,   608,   203,   608,
      -1,   194,   608,    -1,   195,   608,    -1,   175,   580,   176,
      -1,   607,    -1,   606,    -1,   635,    -1,   653,    -1,    63,
      -1,   611,    -1,   657,    -1,   625,    -1,   639,    -1,   626,
      -1,   126,   127,   113,   656,    -1,   629,    -1,   631,    -1,
     660,    -1,   658,    -1,   698,    -1,   610,    -1,   543,    -1,
     354,    -1,   612,   339,   175,   613,   176,    -1,   636,   175,
     176,    -1,   639,    -1,   614,   615,   616,    -1,    -1,   340,
     105,   578,    -1,    -1,   103,   105,   586,    -1,    -1,   617,
     618,   624,    -1,    86,    -1,   347,    -1,   619,    -1,   621,
      -1,   348,   344,    -1,   620,    -1,   341,   333,    -1,   609,
     344,    -1,   188,   619,   192,   622,    -1,   348,   343,    -1,
     623,    -1,   341,   333,    -1,   609,   344,    -1,    -1,   342,
     341,   333,    -1,   342,   110,    -1,   342,   346,    -1,   342,
      84,   345,    -1,   136,   682,    -1,   627,   175,   176,    -1,
     627,   175,   661,   176,    -1,   628,    -1,   682,   350,   628,
      -1,   682,    -1,    70,    -1,    71,    -1,    68,    -1,   115,
     175,   647,   112,   608,   176,    -1,    46,   630,    -1,    48,
     630,    -1,    47,   630,    -1,    50,   630,    -1,    49,   630,
      -1,    -1,   175,   176,    -1,   201,   175,   608,   112,   608,
     113,   608,   176,    -1,   201,   175,   608,   349,   608,   349,
     608,   176,    -1,   201,   175,   608,   112,   608,   176,    -1,
     201,   175,   608,   349,   608,   176,    -1,   200,   175,   608,
     186,   608,   176,    -1,   608,   202,   608,    -1,   199,   175,
     608,   349,   608,   349,   608,   176,    -1,   633,    -1,   632,
     349,   633,    -1,   207,    -1,   682,   350,   207,    -1,   626,
     350,   207,    -1,   580,   634,    -1,    -1,   328,   682,    -1,
     682,    -1,   654,    -1,    10,    -1,   682,   350,    10,    -1,
       8,    -1,   682,   350,     8,    -1,     9,    -1,   682,   350,
       9,    -1,   637,   175,   207,   176,    -1,   637,   175,   682,
     350,   207,   176,    -1,   637,   175,   255,   668,   176,    -1,
     637,   175,   191,   668,   176,    -1,   637,   175,   668,   176,
      -1,   638,   175,   668,   349,   668,   176,    -1,   769,    -1,
     194,    -1,   195,    -1,    -1,   174,   292,   303,    -1,    -1,
     175,   686,   176,    -1,    -1,   175,   686,   176,    -1,    -1,
     291,    -1,   292,   642,   641,    -1,   293,   643,   641,    -1,
     295,    -1,   297,    -1,   299,    -1,   300,    -1,   301,    -1,
     645,    -1,   302,    -1,   646,    -1,   296,    -1,   298,    -1,
     645,   642,    -1,   645,    -1,   302,   643,    -1,   645,   642,
      -1,   302,   643,    -1,   648,   286,   649,    -1,   650,    -1,
     294,   651,    -1,    56,    -1,    58,    -1,    57,    -1,   687,
      -1,    13,    -1,    12,    -1,    11,    -1,    14,    -1,    15,
      -1,   291,   687,    -1,   292,   642,   641,   687,    -1,   293,
     643,   641,   687,    -1,   655,    -1,   678,   687,    -1,     6,
     687,    -1,   675,   687,    -1,     5,   687,    -1,    44,    -1,
      45,    -1,   294,   640,   687,   651,    -1,   682,    -1,   682,
     350,   682,    -1,   682,   350,   682,   350,   682,    -1,   682,
      -1,   682,   350,   682,    -1,   682,   350,   682,   350,   682,
      -1,    18,   175,   659,   328,   673,   176,    -1,    19,   175,
     659,   349,   673,   176,    -1,   580,    -1,   311,   175,   608,
     349,   608,   176,    -1,   312,   175,   662,   176,    -1,   307,
     608,   664,   667,   319,    -1,   307,   666,   667,   319,    -1,
     544,    -1,   661,   349,   544,    -1,   544,   349,   544,    -1,
     662,   349,   544,    -1,   308,   608,   309,   544,    -1,   663,
      -1,   664,   663,    -1,   308,   580,   309,   544,    -1,   665,
      -1,   666,   665,    -1,    -1,   310,   608,    -1,   608,    -1,
     686,    -1,   685,    -1,   685,    -1,   686,    -1,    20,    -1,
     676,    -1,   677,    -1,    20,   175,   669,   176,    -1,   676,
     175,   669,   176,    -1,   677,   175,   669,   176,    -1,   678,
      -1,   678,   175,   669,   176,    -1,    31,    -1,    32,    -1,
      35,    -1,    33,    -1,    34,    -1,    29,    -1,    29,   175,
     669,   176,    -1,    29,   175,   669,   349,   672,   176,    -1,
      30,    -1,    30,   175,   669,   176,    -1,    30,   175,   686,
     349,   686,   176,    -1,    36,    -1,    36,    38,    -1,    37,
      -1,   644,    -1,   652,    -1,     6,    -1,     6,   175,   669,
     176,    -1,   675,    -1,   675,   175,   669,   176,    -1,   675,
     175,   686,   349,   686,   176,    -1,     5,    -1,     5,   175,
     669,   176,    -1,    53,    -1,    53,   175,   674,   176,    -1,
      53,   175,   674,   349,   686,   176,    -1,    55,    -1,    54,
      -1,    54,    -1,   687,    -1,     7,    -1,    24,    -1,    20,
      21,    -1,    25,    -1,    26,    -1,    20,    22,    23,    -1,
      28,    -1,    27,    22,    23,    -1,   682,    -1,   681,    -1,
       5,    -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,     5,    -1,     6,    -1,   177,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,   683,    -1,    22,    -1,
     240,    -1,    23,    -1,   262,    -1,   273,    -1,    38,    -1,
     275,    -1,   265,    -1,    99,    -1,   233,    -1,    81,    -1,
     127,    -1,   303,    -1,    41,    -1,   328,    -1,   228,    -1,
     285,    -1,   122,    -1,   255,    -1,   117,    -1,   120,    -1,
     121,    -1,   247,    -1,   278,    -1,    87,    -1,   334,    -1,
     284,    -1,   128,    -1,   173,    -1,    98,    -1,   114,    -1,
     272,    -1,   333,    -1,   269,    -1,   243,    -1,    93,    -1,
      64,    -1,   291,    -1,   292,    -1,   293,    -1,   294,    -1,
     296,    -1,   298,    -1,   106,    -1,   251,    -1,   253,    -1,
     246,    -1,   248,    -1,   249,    -1,    26,    -1,   280,    -1,
      84,    -1,   144,    -1,   145,    -1,   148,    -1,   150,    -1,
     151,    -1,   152,    -1,   153,    -1,   154,    -1,   155,    -1,
     156,    -1,   158,    -1,   160,    -1,   161,    -1,   162,    -1,
     163,    -1,   165,    -1,   167,    -1,   222,    -1,   221,    -1,
     244,    -1,   245,    -1,   100,    -1,    53,    -1,   327,    -1,
     232,    -1,   682,    -1,   684,   349,   682,    -1,    11,    -1,
      11,    -1,     5,    -1,     3,    -1,     3,   687,    -1,   253,
     689,    -1,   686,   175,   176,    -1,   686,   175,   542,   176,
      -1,    -1,   691,    -1,   273,   692,    -1,   684,    -1,   232,
     270,   694,   268,   687,    -1,   232,   270,   694,   268,   111,
      -1,   278,   682,    -1,   284,   656,    -1,   289,   656,    -1,
     285,   682,   350,   682,    -1,   285,   682,   350,   682,   350,
     682,    -1,   326,   656,    -1,   116,   656,    -1,   503,    -1,
     697,    -1,   695,    -1,   696,   349,   695,    -1,   608,    -1,
     699,    -1,   700,    -1,   701,    -1,   702,    -1,   716,    -1,
     723,    -1,   725,    -1,   728,    -1,   738,    -1,   739,    -1,
     137,   175,   609,   742,   176,    -1,   138,   175,   696,   742,
     176,    -1,   139,   175,   695,   742,   176,    -1,   140,   175,
     240,   704,   703,   742,   176,    -1,    -1,   349,   743,    -1,
     349,   743,   349,   705,    -1,   349,   743,   349,   705,   349,
     711,    -1,   349,   743,   349,   711,    -1,   349,   705,    -1,
     349,   705,   349,   711,    -1,   349,   711,    -1,   682,    -1,
     141,   175,   706,   176,    -1,   707,    -1,   706,   349,   707,
      -1,   709,   708,    -1,    -1,   328,   710,    -1,   608,    -1,
     682,    -1,   712,   714,    -1,   713,    -1,   712,   349,   713,
      -1,   608,    -1,    -1,   271,   715,    -1,   111,   270,   111,
      -1,   153,   270,   111,    -1,   152,   270,   111,    -1,   150,
     270,   111,    -1,   150,   270,    84,   156,    -1,   142,   175,
     717,   718,   714,   742,   176,    -1,    -1,   743,   349,    -1,
     719,    -1,   718,   349,   719,    -1,   720,   721,    -1,   608,
      -1,    -1,   328,   722,    -1,   682,    -1,   143,   175,   741,
     609,   724,   176,    -1,    85,   145,    -1,   144,   145,    -1,
     146,   175,   240,   726,   727,   742,   176,    -1,   682,    -1,
      -1,   349,   609,    -1,   147,   175,   729,   730,   742,   736,
     737,   176,    -1,     3,    -1,    -1,   148,   731,   732,    -1,
     751,    -1,   733,    -1,   732,   349,   733,    -1,   734,    -1,
     735,    -1,   609,   750,    -1,   609,   328,   682,   750,    -1,
      -1,   751,    -1,   111,   270,   153,    -1,   153,   270,   153,
      -1,   149,   175,   609,   742,   176,    -1,   159,   175,   740,
     695,   752,   176,    -1,   741,    -1,   116,    -1,   154,    -1,
     156,    -1,    -1,   160,   156,    -1,   160,   116,    -1,   157,
     175,   744,   176,    -1,   745,    -1,   744,   349,   745,    -1,
     748,    -1,   749,    -1,   682,    -1,   608,    -1,   747,   328,
     746,    -1,   254,   747,    -1,    84,   254,    -1,    -1,   751,
      -1,   105,   151,    -1,   105,   127,    -1,    -1,   753,    -1,
     163,   286,   164,   754,   762,    -1,   755,    -1,   760,    -1,
     165,   756,   758,    -1,    84,   158,   758,    -1,   757,    -1,
       3,    -1,    -1,   161,   759,    -1,   757,    -1,   162,   761,
      -1,   682,    -1,    -1,   763,    -1,   765,    -1,   766,   764,
      -1,    -1,   765,    -1,   155,   768,    -1,    84,   158,    -1,
     158,   767,    -1,   757,    -1,   682,    -1,   166,   175,   695,
     582,   742,   176,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   628,   628,   639,   639,   653,   653,   668,   668,   683,
     683,   693,   693,   699,   700,   701,   702,   703,   708,   711,
     712,   716,   717,   721,   722,   726,   729,   732,   736,   737,
     738,   739,   740,   741,   742,   743,   744,   751,   752,   756,
     757,   761,   763,   767,   772,   781,   786,   791,   799,   807,
     815,   823,   829,   837,   846,   855,   859,   863,   870,   873,
     874,   878,   879,   883,   884,   888,   888,   888,   888,   888,
     891,   892,   896,   897,   901,   910,   921,   922,   927,   928,
     932,   933,   938,   939,   943,   951,   961,   962,   966,   967,
     971,   975,   982,   983,   988,   989,   993,   994,   995,  1006,
    1007,  1008,  1012,  1013,  1018,  1019,  1020,  1021,  1022,  1023,
    1024,  1028,  1029,  1034,  1035,  1041,  1047,  1052,  1057,  1062,
    1067,  1072,  1077,  1082,  1087,  1100,  1106,  1112,  1122,  1127,
    1131,  1135,  1137,  1145,  1153,  1158,  1163,  1173,  1174,  1178,
    1179,  1180,  1181,  1182,  1183,  1184,  1185,  1201,  1212,  1229,
    1239,  1240,  1244,  1245,  1249,  1250,  1251,  1255,  1256,  1257,
    1258,  1259,  1263,  1264,  1265,  1266,  1267,  1268,  1269,  1270,
    1277,  1287,  1288,  1289,  1290,  1310,  1315,  1326,  1327,  1328,
    1332,  1333,  1337,  1350,  1357,  1369,  1381,  1396,  1408,  1426,
    1431,  1437,  1446,  1447,  1448,  1449,  1450,  1451,  1455,  1456,
    1457,  1458,  1462,  1463,  1467,  1477,  1478,  1479,  1483,  1485,
    1489,  1489,  1490,  1490,  1490,  1493,  1494,  1498,  1506,  1559,
    1560,  1564,  1566,  1571,  1580,  1582,  1586,  1586,  1586,  1589,
    1593,  1597,  1606,  1635,  1673,  1674,  1679,  1690,  1691,  1695,
    1696,  1697,  1698,  1699,  1703,  1707,  1711,  1712,  1713,  1714,
    1715,  1719,  1720,  1721,  1722,  1726,  1727,  1731,  1732,  1733,
    1734,  1735,  1745,  1749,  1751,  1753,  1768,  1772,  1774,  1779,
    1783,  1796,  1797,  1801,  1802,  1806,  1807,  1811,  1812,  1816,
    1820,  1828,  1833,  1834,  1839,  1853,  1867,  1918,  1932,  1946,
    1996,  2009,  2022,  2046,  2048,  2052,  2070,  2071,  2076,  2077,
    2082,  2083,  2084,  2085,  2086,  2087,  2088,  2089,  2090,  2091,
    2092,  2093,  2097,  2098,  2099,  2100,  2101,  2102,  2103,  2104,
    2108,  2109,  2110,  2111,  2112,  2113,  2126,  2130,  2134,  2143,
    2146,  2147,  2148,  2154,  2158,  2159,  2160,  2165,  2171,  2179,
    2187,  2189,  2194,  2202,  2204,  2209,  2210,  2217,  2231,  2232,
    2234,  2245,  2266,  2267,  2271,  2272,  2277,  2281,  2289,  2291,
    2296,  2297,  2301,  2305,  2310,  2359,  2374,  2375,  2380,  2381,
    2382,  2383,  2384,  2388,  2389,  2393,  2394,  2400,  2401,  2402,
    2403,  2406,  2408,  2411,  2413,  2417,  2425,  2426,  2430,  2431,
    2435,  2436,  2440,  2442,  2448,  2454,  2460,  2466,  2472,  2481,
    2488,  2495,  2502,  2509,  2519,  2525,  2530,  2539,  2548,  2557,
    2566,  2575,  2581,  2586,  2587,  2588,  2589,  2598,  2599,  2600,
    2604,  2607,  2612,  2613,  2614,  2619,  2620,  2625,  2626,  2627,
    2628,  2629,  2633,  2640,  2642,  2644,  2646,  2650,  2652,  2654,
    2659,  2660,  2664,  2666,  2672,  2673,  2674,  2675,  2679,  2680,
    2681,  2682,  2686,  2687,  2691,  2692,  2693,  2697,  2698,  2702,
    2716,  2730,  2735,  2742,  2749,  2761,  2762,  2767,  2768,  2774,
    2775,  2779,  2780,  2784,  2788,  2797,  2801,  2806,  2811,  2820,
    2821,  2825,  2826,  2827,  2828,  2830,  2835,  2836,  2840,  2841,
    2845,  2846,  2850,  2851,  2855,  2856,  2860,  2861,  2866,  2875,
    2876,  2877,  2881,  2887,  2896,  2938,  2946,  2957,  2958,  2960,
    2962,  2967,  2968,  2973,  2974,  2979,  2980,  2985,  3007,  3011,
    3012,  3016,  3017,  3021,  3022,  3023,  3027,  3028,  3033,  3037,
    3042,  3047,  3055,  3056,  3062,  3064,  3069,  3077,  3085,  3096,
    3097,  3098,  3102,  3103,  3107,  3108,  3109,  3113,  3114,  3134,
    3138,  3148,  3149,  3153,  3166,  3171,  3173,  3177,  3188,  3199,
    3230,  3231,  3236,  3240,  3249,  3258,  3266,  3267,  3271,  3272,
    3273,  3278,  3279,  3281,  3286,  3290,  3300,  3301,  3305,  3306,
    3311,  3315,  3321,  3327,  3337,  3349,  3354,  3358,  3357,  3370,
    3375,  3380,  3385,  3393,  3394,  3398,  3399,  3403,  3405,  3411,
    3412,  3417,  3422,  3426,  3431,  3435,  3436,  3441,  3442,  3446,
    3450,  3451,  3455,  3459,  3460,  3464,  3468,  3472,  3473,  3478,
    3487,  3488,  3489,  3493,  3494,  3495,  3496,  3497,  3498,  3499,
    3500,  3501,  3505,  3522,  3526,  3533,  3543,  3550,  3560,  3561,
    3562,  3566,  3573,  3580,  3587,  3597,  3601,  3617,  3618,  3622,
    3628,  3634,  3639,  3647,  3649,  3654,  3662,  3672,  3673,  3674,
    3678,  3682,  3683,  3687,  3691,  3701,  3702,  3704,  3709,  3710,
    3712,  3718,  3719,  3726,  3733,  3740,  3747,  3754,  3761,  3768,
    3775,  3782,  3789,  3796,  3802,  3809,  3816,  3823,  3830,  3837,
    3844,  3851,  3857,  3864,  3871,  3878,  3885,  3887,  3909,  3913,
    3914,  3918,  3919,  3921,  3923,  3924,  3925,  3926,  3927,  3928,
    3929,  3930,  3931,  3932,  3933,  3934,  3935,  3939,  4009,  4015,
    4016,  4020,  4025,  4026,  4031,  4032,  4037,  4038,  4043,  4044,
    4048,  4049,  4053,  4054,  4055,  4059,  4063,  4068,  4069,  4070,
    4074,  4078,  4079,  4080,  4081,  4082,  4086,  4090,  4094,  4122,
    4123,  4128,  4129,  4130,  4131,  4135,  4142,  4147,  4152,  4157,
    4162,  4170,  4171,  4175,  4185,  4195,  4202,  4209,  4216,  4223,
    4236,  4237,  4242,  4247,  4252,  4257,  4265,  4266,  4267,  4271,
    4298,  4299,  4304,  4305,  4310,  4311,  4317,  4323,  4329,  4335,
    4341,  4347,  4354,  4358,  4359,  4360,  4364,  4365,  4376,  4378,
    4382,  4384,  4388,  4389,  4395,  4404,  4405,  4406,  4407,  4408,
    4412,  4413,  4417,  4418,  4419,  4423,  4429,  4432,  4438,  4441,
    4447,  4450,  4455,  4475,  4476,  4477,  4481,  4487,  4551,  4582,
    4643,  4682,  4699,  4715,  4731,  4747,  4748,  4765,  4782,  4799,
    4820,  4824,  4831,  4876,  4877,  4881,  4892,  4895,  4899,  4907,
    4913,  4921,  4925,  4930,  4932,  4938,  4946,  4948,  4953,  4957,
    4963,  4971,  4973,  4978,  4986,  4988,  4993,  4994,  4998,  5003,
    5014,  5025,  5035,  5045,  5047,  5052,  5053,  5055,  5057,  5066,
    5067,  5076,  5077,  5078,  5079,  5080,  5082,  5083,  5096,  5114,
    5115,  5129,  5149,  5150,  5151,  5152,  5153,  5154,  5155,  5157,
    5158,  5160,  5172,  5186,  5200,  5207,  5222,  5237,  5244,  5270,
    5287,  5307,  5322,  5323,  5327,  5328,  5329,  5332,  5333,  5336,
    5338,  5341,  5342,  5343,  5344,  5345,  5346,  5350,  5351,  5352,
    5353,  5354,  5355,  5356,  5357,  5361,  5362,  5363,  5364,  5365,
    5366,  5367,  5368,  5369,  5370,  5371,  5372,  5373,  5375,  5376,
    5377,  5378,  5379,  5380,  5381,  5382,  5383,  5384,  5385,  5386,
    5387,  5388,  5390,  5391,  5392,  5393,  5394,  5395,  5396,  5397,
    5398,  5399,  5400,  5401,  5402,  5403,  5404,  5405,  5406,  5408,
    5409,  5410,  5411,  5412,  5413,  5414,  5415,  5417,  5418,  5419,
    5420,  5421,  5422,  5423,  5424,  5425,  5426,  5427,  5428,  5429,
    5430,  5431,  5432,  5433,  5434,  5435,  5436,  5437,  5438,  5439,
    5440,  5441,  5445,  5446,  5451,  5474,  5495,  5527,  5529,  5537,
    5544,  5549,  5564,  5565,  5569,  5572,  5576,  5582,  5591,  5592,
    5593,  5594,  5600,  5607,  5608,  5609,  5613,  5617,  5619,  5624,
    5628,  5629,  5630,  5631,  5632,  5633,  5634,  5635,  5636,  5637,
    5641,  5649,  5657,  5664,  5678,  5679,  5683,  5687,  5691,  5695,
    5699,  5703,  5710,  5714,  5718,  5719,  5729,  5737,  5738,  5742,
    5746,  5750,  5757,  5759,  5764,  5768,  5769,  5773,  5774,  5775,
    5776,  5777,  5781,  5794,  5795,  5799,  5801,  5806,  5812,  5816,
    5817,  5821,  5826,  5835,  5836,  5840,  5851,  5855,  5856,  5861,
    5871,  5874,  5876,  5880,  5884,  5885,  5889,  5890,  5894,  5898,
    5901,  5903,  5907,  5908,  5912,  5920,  5929,  5930,  5934,  5935,
    5939,  5940,  5941,  5956,  5960,  5961,  5971,  5972,  5976,  5980,
    5984,  5994,  5998,  6001,  6003,  6007,  6008,  6011,  6013,  6017,
    6022,  6023,  6027,  6028,  6032,  6036,  6039,  6041,  6045,  6049,
    6053,  6056,  6058,  6062,  6063,  6067,  6069,  6073,  6077,  6078,
    6082,  6086,  6090
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
  "LOCALTIME", "LEX_ERROR", "sqlASC", "GEOMETRY", "GEOMETRYSUBTYPE",
  "GEOMETRYA", "USER", "CURRENT_USER", "SESSION_USER", "LOCAL", "LOCKED",
  "BEST", "EFFORT", "CURRENT_ROLE", "sqlSESSION", "sqlDELETE", "UPDATE",
  "SELECT", "INSERT", "LATERAL", "LEFT", "RIGHT", "FULL", "OUTER",
  "NATURAL", "CROSS", "JOIN", "INNER", "COMMIT", "ROLLBACK", "SAVEPOINT",
  "RELEASE", "WORK", "CHAIN", "NO", "PRESERVE", "ROWS", "START",
  "TRANSACTION", "READ", "WRITE", "ONLY", "ISOLATION", "LEVEL",
  "UNCOMMITTED", "COMMITTED", "sqlREPEATABLE", "SERIALIZABLE",
  "DIAGNOSTICS", "sqlSIZE", "STORAGE", "ASYMMETRIC", "SYMMETRIC", "ORDER",
  "ORDERED", "BY", "IMPRINTS", "EXISTS", "ESCAPE", "HAVING", "sqlGROUP",
  "sqlNULL", "FROM", "FOR", "MATCH", "EXTRACT", "SEQUENCE", "INCREMENT",
  "RESTART", "CONTINUE", "MAXVALUE", "MINVALUE", "CYCLE", "NOMAXVALUE",
  "NOMINVALUE", "NOCYCLE", "NEXT", "VALUE", "CACHE", "GENERATED", "ALWAYS",
  "IDENTITY", "SERIAL", "BIGSERIAL", "AUTO_INCREMENT", "SCOLON", "AT",
  "XMLCOMMENT", "XMLCONCAT", "XMLDOCUMENT", "XMLELEMENT", "XMLATTRIBUTES",
  "XMLFOREST", "XMLPARSE", "STRIP", "WHITESPACE", "XMLPI", "XMLQUERY",
  "PASSING", "XMLTEXT", "NIL", "REF", "ABSENT", "EMPTY", "DOCUMENT",
  "ELEMENT", "CONTENT", "XMLNAMESPACES", "NAMESPACE", "XMLVALIDATE",
  "RETURNING", "LOCATION", "ID", "ACCORDING", "XMLSCHEMA", "URI", "XMLAGG",
  "FILTER", "UNIONJOIN", "CORRESPONDING", "INTERSECT", "EXCEPT", "UNION",
  "DATA", "WITH", "'('", "')'", "FILTER_FUNC", "NOT", "'='", "SOME", "OR",
  "ILIKE", "NOT_ILIKE", "LIKE", "NOT_LIKE", "sqlIN", "NOT_IN", "BETWEEN",
  "NOT_BETWEEN", "ANY", "ALL", "AND", "COMPARISON", "'+'", "'-'", "'&'",
  "'|'", "'^'", "SPLIT_PART", "POSITION", "SUBSTRING", "CONCATSTRING",
  "RIGHT_SHIFT_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT", "LEFT_SHIFT",
  "'*'", "'/'", "'%'", "UMINUS", "'~'", "GEOM_OVERLAP_OR_LEFT",
  "GEOM_OVERLAP_OR_BELOW", "GEOM_OVERLAP_OR_ABOVE", "GEOM_OVERLAP",
  "GEOM_MBR_EQUAL", "GEOM_DIST", "GEOM_ABOVE", "GEOM_BELOW",
  "GEOM_OVERLAP_OR_RIGHT", "TEMP", "TEMPORARY", "STREAM", "MERGE",
  "REMOTE", "REPLICA", "DESC", "AUTHORIZATION", "CHECK", "CONSTRAINT",
  "CREATE", "COMMENT", "TYPE", "PROCEDURE", "FUNCTION", "sqlLOADER",
  "AGGREGATE", "RETURNS", "EXTERNAL", "sqlNAME", "DECLARE", "CALL",
  "LANGUAGE", "ANALYZE", "MINMAX", "SQL_EXPLAIN", "SQL_PLAN", "SQL_DEBUG",
  "SQL_TRACE", "PREP", "PREPARE", "EXEC", "EXECUTE", "DEFAULT", "DISTINCT",
  "DROP", "TRUNCATE", "FOREIGN", "RENAME", "ENCRYPTED", "UNENCRYPTED",
  "PASSWORD", "GRANT", "REVOKE", "ROLE", "ADMIN", "INTO", "IS", "KEY",
  "ON", "OPTION", "OPTIONS", "PATH", "PRIMARY", "PRIVILEGES", "PUBLIC",
  "REFERENCES", "SCHEMA", "SET", "AUTO_COMMIT", "RETURN", "ALTER", "ADD",
  "TABLE", "COLUMN", "TO", "UNIQUE", "VALUES", "VIEW", "WHERE", "sqlDATE",
  "TIME", "TIMESTAMP", "INTERVAL", "YEAR", "QUARTER", "MONTH", "WEEK",
  "DAY", "HOUR", "MINUTE", "SECOND", "ZONE", "LIMIT", "OFFSET", "SAMPLE",
  "CASE", "WHEN", "THEN", "ELSE", "NULLIF", "COALESCE", "IF", "ELSEIF",
  "WHILE", "DO", "ATOMIC", "BEGIN", "END", "COPY", "RECORDS", "DELIMITERS",
  "STDIN", "STDOUT", "FWF", "INDEX", "REPLACE", "AS", "TRIGGER", "OF",
  "BEFORE", "AFTER", "ROW", "STATEMENT", "sqlNEW", "OLD", "EACH",
  "REFERENCING", "OVER", "PARTITION", "CURRENT", "EXCLUDE", "FOLLOWING",
  "PRECEDING", "OTHERS", "TIES", "RANGE", "UNBOUNDED", "','", "'.'", "':'",
  "'['", "']'", "'?'", "$accept", "sqlstmt", "@1", "@2", "@3", "@4", "@5",
  "create", "create_or_replace", "if_exists", "if_not_exists", "drop",
  "set", "declare", "sql", "opt_minmax", "declare_statement",
  "variable_list", "set_statement", "schema", "schema_name_clause",
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
  "table_opt_storage", "table_def", "with_opt_credentials", "opt_temp",
  "opt_on_commit", "table_content_source", "as_subquery_clause",
  "with_or_without_data", "table_element_list", "add_table_element",
  "table_element", "serial_or_bigserial", "column_def",
  "opt_column_def_opt_list", "column_def_opt_list", "column_options",
  "column_option_list", "column_option", "default", "default_value",
  "column_constraint", "generated_column", "serial_opt_params",
  "table_constraint", "opt_constraint_name", "ref_action", "ref_on_update",
  "ref_on_delete", "opt_ref_action", "opt_match_type", "opt_match",
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
     425,   426,   427,   428,   429,    40,    41,   430,   431,    61,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,    43,    45,    38,   124,    94,   446,
     447,   448,   449,   450,   451,   452,   453,    42,    47,    37,
     454,   126,   455,   456,   457,   458,   459,   460,   461,   462,
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
     418,   418,   419,   419,   419,   419,   419,   419,   420,   420,
     420,   420,   421,   421,   422,   423,   423,   423,   424,   424,
     425,   425,   426,   426,   426,   427,   427,   428,   428,   429,
     429,   430,   430,   431,   432,   432,   433,   433,   433,   434,
     435,   436,   437,   437,   438,   438,   439,   440,   440,   441,
     441,   441,   441,   441,   442,   443,   444,   444,   444,   444,
     444,   445,   445,   445,   445,   446,   446,   447,   447,   447,
     447,   447,   447,   448,   448,   448,   449,   450,   450,   451,
     452,   453,   453,   454,   454,   455,   455,   456,   456,   457,
     458,   459,   460,   460,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   462,   462,   462,   463,   463,   464,   464,
     465,   465,   465,   465,   465,   465,   465,   465,   465,   465,
     465,   465,   466,   466,   466,   466,   466,   466,   466,   466,
     467,   467,   467,   467,   467,   467,   468,   469,   470,   471,
     472,   472,   472,   473,   474,   474,   474,   475,   475,   476,
     477,   477,   478,   479,   479,   480,   480,   481,   482,   482,
     482,   483,   484,   484,   485,   485,   486,   486,   487,   487,
     488,   488,   488,   489,   489,   490,   491,   491,   492,   492,
     492,   492,   492,   493,   493,   494,   494,   495,   495,   495,
     495,   496,   496,   497,   497,   498,   499,   499,   500,   500,
     501,   501,   502,   502,   503,   503,   503,   503,   503,   504,
     504,   504,   504,   504,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   506,   506,   506,
     507,   507,   508,   508,   508,   369,   369,   509,   509,   509,
     509,   509,   510,   511,   511,   511,   511,   511,   511,   511,
     512,   512,   513,   513,   514,   514,   514,   514,   515,   515,
     515,   515,   516,   516,   517,   517,   517,   518,   518,   519,
     519,   519,   519,   519,   519,   520,   520,   521,   521,   522,
     522,   523,   523,   524,   524,   525,   525,   525,   525,   526,
     526,   527,   527,   527,   527,   527,   528,   528,   529,   529,
     530,   530,   531,   531,   532,   532,   533,   533,   534,   535,
     535,   535,   536,   536,   537,   538,   538,   539,   539,   539,
     539,   540,   540,   541,   541,   542,   542,   543,   544,   545,
     545,   546,   546,   547,   547,   547,   548,   548,   549,   550,
     550,   550,   551,   551,   552,   552,   552,   552,   552,   553,
     553,   553,   554,   554,   555,   555,   555,   556,   556,   369,
     557,   558,   558,   559,   560,   369,   369,   561,   562,   563,
     564,   564,   565,   566,   566,   566,   566,   566,   567,   567,
     567,   568,   568,   568,   569,   570,   571,   571,   572,   572,
     573,   573,   573,   573,   573,   573,   573,   574,   573,   575,
     575,   575,   575,   576,   576,   577,   577,   578,   578,   579,
     579,   580,   580,   581,   581,   582,   582,   583,   583,   583,
     584,   584,   584,   585,   585,   585,   585,   586,   586,   587,
     588,   588,   588,   589,   589,   589,   589,   589,   589,   589,
     589,   589,   590,   590,   591,   591,   592,   592,   593,   593,
     593,   594,   594,   594,   594,   595,   595,   596,   596,   597,
     597,   597,   597,   598,   598,   599,   599,   600,   600,   600,
     601,   602,   602,   603,   604,   605,   605,   605,   606,   606,
     606,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   608,
     608,   609,   609,   609,   609,   609,   609,   609,   609,   609,
     609,   609,   609,   609,   609,   609,   609,   610,   611,   612,
     612,   613,   614,   614,   615,   615,   616,   616,   617,   617,
     618,   618,   619,   619,   619,   620,   621,   622,   622,   622,
     623,   624,   624,   624,   624,   624,   625,   626,   626,   627,
     627,   628,   628,   628,   628,   629,   629,   629,   629,   629,
     629,   630,   630,   631,   631,   631,   631,   631,   631,   631,
     632,   632,   633,   633,   633,   633,   634,   634,   634,   635,
     636,   636,   637,   637,   638,   638,   639,   639,   639,   639,
     639,   639,   639,   640,   640,   640,   641,   641,   642,   642,
     643,   643,   644,   644,   644,   645,   645,   645,   645,   645,
     646,   646,   647,   647,   647,   648,   649,   649,   650,   650,
     651,   651,   652,   653,   653,   653,   654,   654,   654,   654,
     654,   654,   654,   654,   654,   654,   654,   654,   654,   654,
     654,   654,   655,   656,   656,   656,   657,   657,   657,   658,
     658,   659,   660,   660,   660,   660,   661,   661,   662,   662,
     663,   664,   664,   665,   666,   666,   667,   667,   668,   669,
     670,   671,   672,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   674,
     674,   675,   676,   676,   677,   677,   677,   678,   678,   679,
     680,   681,   681,   681,   681,   681,   681,   682,   682,   682,
     682,   682,   682,   682,   682,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   684,   684,   685,   686,   686,   687,   687,   688,
     689,   689,   690,   690,   691,   692,   693,   693,   694,   694,
     694,   694,   694,   694,   694,   694,   695,   696,   696,   697,
     698,   698,   698,   698,   698,   698,   698,   698,   698,   698,
     699,   700,   701,   702,   703,   703,   703,   703,   703,   703,
     703,   703,   704,   705,   706,   706,   707,   708,   708,   709,
     710,   711,   712,   712,   713,   714,   714,   715,   715,   715,
     715,   715,   716,   717,   717,   718,   718,   719,   720,   721,
     721,   722,   723,   724,   724,   725,   726,   727,   727,   728,
     729,   730,   730,   731,   732,   732,   733,   733,   734,   735,
     736,   736,   737,   737,   738,   739,   740,   740,   741,   741,
     742,   742,   742,   743,   744,   744,   745,   745,   746,   747,
     748,   749,   749,   750,   750,   751,   751,   752,   752,   753,
     754,   754,   755,   755,   756,   757,   758,   758,   759,   760,
     761,   762,   762,   763,   763,   764,   764,   765,   766,   766,
     767,   768,   769
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
       0,     3,     5,     6,     5,     5,     5,     8,     6,     0,
       6,     4,     1,     1,     2,     2,     2,     2,     0,     4,
       4,     3,     3,     1,     4,     0,     3,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     0,
       1,     1,     2,     6,     1,     3,     1,     1,     1,     2,
       1,     2,     5,     1,     0,     3,     2,     0,     2,     2,
       1,     1,     2,     2,     3,     3,     0,     1,     1,     2,
       2,     0,     1,     1,     1,     0,     2,     2,     1,     1,
       2,     5,     1,     2,     3,     8,     4,     1,     3,     2,
       7,     1,     3,     1,     1,     0,     3,     0,     1,     3,
       6,     3,     1,     1,    11,     9,    11,    10,    11,    11,
       9,     7,     9,     1,     5,     6,     0,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     4,     1,
       0,     1,     3,     2,     1,     1,     4,     6,     5,     4,
       1,     2,     4,     1,     2,     0,     2,     7,     0,     2,
       5,     8,     0,     2,     0,     1,     2,     4,     4,     1,
       1,     1,     0,     4,     2,     9,     1,     1,     1,     1,
       1,     1,     3,     0,     2,     1,     2,     4,     4,     4,
       4,     0,     1,     0,     1,     3,     0,     3,     1,     1,
       0,     4,     1,     4,     3,     4,     3,     3,     3,     4,
       5,     4,     4,     4,     5,     3,     5,     6,     5,     5,
       5,     5,     4,     3,     3,     3,     4,     0,     3,     2,
       1,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     4,     3,     4,     3,
       0,     1,     1,     3,     2,     2,     3,     3,     2,     2,
       2,     1,     1,     0,     2,     3,     0,     0,     3,    14,
      13,     6,     8,     6,     6,     0,     4,     1,     3,     0,
       3,     1,     3,     1,     2,     0,     3,     5,     7,     0,
       1,     0,     2,     2,     4,     4,     0,     3,     0,     1,
       0,     2,     0,     2,     1,     3,     1,     3,     4,     0,
       2,     2,     5,     4,     6,     4,     5,     0,     2,     2,
       1,     3,     5,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     3,     1,     3,
       3,     3,     0,     2,     3,     4,     4,     5,     5,     0,
       1,     2,     0,     1,     1,     1,     1,     2,     2,     1,
       3,     3,     1,     4,     1,     1,     1,     4,     6,     5,
       1,     3,     1,     5,     5,     5,     3,     1,     0,     1,
       1,     0,     1,     5,     1,     4,     0,     2,     1,     3,
       2,     2,     3,     2,     3,     1,     1,     0,     5,     5,
       2,     4,     1,     0,     1,     0,     3,     1,     3,     0,
       2,     3,     1,     3,     1,     0,     3,     0,     2,     2,
       0,     2,     2,     0,     2,     2,     2,     1,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     3,     6,     6,     0,     1,
       1,     3,     3,     3,     3,     1,     3,     4,     3,     5,
       5,     7,     7,     1,     3,     4,     4,     1,     1,     1,
       2,     1,     3,     3,     3,     3,     4,     3,     3,     4,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     3,
       1,     3,     0,     3,     0,     3,     0,     3,     1,     1,
       1,     1,     2,     1,     2,     2,     4,     2,     1,     2,
       2,     0,     3,     2,     2,     3,     2,     3,     4,     1,
       3,     1,     1,     1,     1,     6,     2,     2,     2,     2,
       2,     0,     2,     8,     8,     6,     6,     6,     3,     8,
       1,     3,     1,     3,     3,     2,     0,     2,     1,     1,
       1,     3,     1,     3,     1,     3,     4,     6,     5,     5,
       4,     6,     1,     1,     1,     0,     3,     0,     3,     0,
       3,     0,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     4,     1,     2,     2,     2,     2,
       1,     1,     4,     1,     3,     5,     1,     3,     5,     6,
       6,     1,     6,     4,     5,     4,     1,     3,     3,     3,
       4,     1,     2,     4,     1,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     1,
       4,     1,     1,     1,     1,     1,     1,     4,     6,     1,
       4,     6,     1,     2,     1,     1,     1,     1,     4,     1,
       4,     6,     1,     4,     1,     4,     6,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     2,     2,
       3,     4,     0,     1,     2,     1,     5,     5,     2,     2,
       2,     4,     6,     2,     2,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     5,     5,     7,     0,     2,     4,     6,     4,     2,
       4,     2,     1,     4,     1,     3,     2,     0,     2,     1,
       1,     2,     1,     3,     1,     0,     2,     3,     3,     3,
       3,     4,     7,     0,     2,     1,     3,     2,     1,     0,
       2,     1,     6,     2,     2,     7,     1,     0,     2,     8,
       1,     0,     3,     1,     1,     3,     1,     1,     2,     4,
       0,     1,     3,     3,     5,     6,     1,     1,     1,     1,
       0,     2,     2,     4,     1,     3,     1,     1,     1,     1,
       3,     2,     2,     0,     1,     2,     2,     0,     1,     5,
       1,     1,     3,     3,     1,     1,     0,     2,     1,     2,
       1,     0,     1,     1,     2,     0,     1,     2,     2,     2,
       1,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    17,     0,     0,   523,     0,   453,   453,     0,
       0,     0,    15,     0,     0,    18,     0,    27,     0,     0,
       7,     5,     9,    11,     3,     0,    25,     0,     0,    86,
      26,     0,   481,     0,    19,     0,     0,     0,     0,     0,
      34,    35,    28,    29,    30,    33,    31,   145,   144,   141,
     142,   143,    37,   146,    32,   426,   425,   432,   431,   427,
     428,   430,   429,   549,   567,   555,   556,   605,     0,    38,
      16,     0,   927,   928,   930,   931,   932,   933,   935,   937,
     984,   940,   948,  1009,   971,   945,   986,   959,   970,   964,
     943,  1008,   978,   965,   954,   955,   956,   952,   946,   962,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,   963,   929,  1005,
    1004,   950,  1011,   944,   936,   969,  1006,  1007,   981,   957,
     982,   983,   979,   980,   953,   938,   942,   968,   966,   939,
     941,   958,   985,   961,   951,   972,   973,   974,   975,   976,
     977,   947,  1010,   949,   967,   960,     0,   843,   934,   524,
     525,     0,     0,   452,   456,   456,   434,     0,   440,     0,
     552,   277,   523,     0,     0,     0,   754,   752,   753,   327,
       0,   749,   751,   277,     0,     0,     0,     0,     0,  1016,
    1015,     0,  1019,   961,   499,   921,   922,   923,   924,   925,
     926,   105,   277,   277,   104,   100,   110,   106,   277,     0,
       0,     0,    90,    92,     0,   101,   102,    76,   920,     0,
       0,     0,     0,     0,   440,     0,     0,     0,  1014,     0,
       0,     0,     0,     0,   271,     0,   274,   273,     0,   871,
       1,     0,     0,     0,   172,   173,     0,   193,   192,     0,
       0,     0,     0,     0,     0,    23,    23,   171,     0,   139,
     140,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    21,    21,    21,     0,    21,
      21,    21,     0,    21,   422,   823,   825,   824,   971,     0,
     942,   958,   973,     0,     0,     0,  1005,  1004,    23,    41,
      42,     0,   267,     2,     0,   568,   568,   568,   607,    13,
     532,     0,     0,  1017,   927,   928,   930,   931,   932,   933,
     829,   828,   827,   830,   831,     0,     0,     0,   917,   840,
     841,   761,   761,   761,   761,   761,   703,     0,   517,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     772,     0,   972,   973,   974,   975,     0,     0,     0,     0,
     717,   716,   576,   776,   602,   633,   604,   623,   624,   625,
     626,   627,   628,   629,     0,   630,   700,   699,   631,   671,
     715,   704,     0,   706,   708,   710,   711,   574,   770,   701,
       0,     0,     0,   707,   702,   779,   835,   705,   713,   712,
       0,     0,   846,   826,   714,  1040,  1041,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1049,   792,   507,     0,   433,   457,
     435,     0,     0,     0,   437,   441,   442,     0,   550,   554,
       0,   278,     0,   566,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1035,     0,     0,     0,
     613,     0,     0,    10,    12,     0,     0,   499,     0,     0,
     422,   107,   108,    99,   109,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   440,   439,   177,
       0,     0,     0,     0,     0,   605,     0,   483,     0,     0,
       0,   482,   197,   196,     0,   195,   194,     0,    23,    23,
      23,    23,     0,    70,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,   277,     0,   414,   148,    21,     0,
       0,     0,     0,     0,   422,     0,     0,     0,     0,     0,
     413,     0,     0,     0,   415,     0,   424,   423,   405,     0,
       0,    50,    48,     0,     0,     0,     0,     0,   902,   897,
     911,   873,   912,   914,   915,   886,   889,   881,   882,   884,
     885,   883,   892,   894,   904,   908,   907,   802,   799,   801,
       0,     0,   895,   896,    43,   899,   874,   875,   879,     0,
     569,   570,   571,   571,   571,     0,   610,     0,   498,     0,
     576,   526,     0,   919,   844,  1018,   839,   837,     0,     0,
       0,     0,   756,   758,   757,   760,   759,     0,   660,     0,
       0,   746,     0,     0,     0,     0,  1083,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   604,     0,
     708,   846,   632,     0,   696,   697,     0,     0,     0,   691,
     832,     0,   797,     0,   797,   793,   794,     0,     0,     0,
     864,   866,     0,     0,   661,     0,     0,     0,   557,   532,
       0,   949,   775,   778,     0,     0,     0,     0,     0,     0,
       0,     0,   638,   638,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   838,   836,     0,
       0,     0,     0,   510,   507,   505,   454,     0,     0,   436,
     445,   444,     0,     0,     0,   551,     0,   576,  1034,     0,
     417,   417,   417,   417,  1028,  1029,     0,  1030,  1033,     0,
     747,   856,   518,     0,   750,   751,     0,    39,     8,     6,
       4,     0,  1020,     0,   521,   515,   522,   422,   501,   500,
     503,   113,    80,   111,   114,    77,    78,    93,  1003,   961,
      91,    98,    97,   103,    87,    89,     0,     0,   438,   179,
     178,     0,   177,     0,     0,   122,     0,   158,     0,     0,
     168,   166,   164,   169,     0,     0,   149,   152,   161,   138,
       0,   138,   138,   277,   272,     0,   475,   475,   277,     0,
       0,   177,     0,     0,   147,   150,   156,     0,     0,     0,
       0,     0,     0,   175,     0,   950,    59,    55,   277,     0,
       0,     0,   362,   362,   362,   362,     0,   366,   367,     0,
       0,     0,   422,   422,   422,   422,   412,    22,   417,   417,
     417,   417,   422,   422,   422,   416,    47,   279,    51,   795,
      52,    46,    49,    45,     0,     0,     0,   913,     0,     0,
       0,     0,   893,     0,   797,   797,   805,   806,   807,   808,
     809,   801,   799,     0,   821,   822,   268,     0,     0,     0,
       0,   606,   617,   620,   572,     0,     0,     0,   609,   608,
     870,     0,   613,   533,     0,     0,   532,     0,     0,   851,
       0,     0,   918,   762,   813,   814,   811,   810,   812,     0,
       0,     0,   671,  1039,  1037,  1120,  1036,  1120,     0,     0,
       0,     0,  1118,  1119,     0,     0,  1100,  1101,   671,  1117,
       0,  1116,   605,     0,     0,   670,   668,   698,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   861,   866,     0,   865,     0,     0,     0,     0,
       0,   663,     0,     0,   587,   586,   577,   578,   585,   593,
     593,   843,   576,   560,   562,   595,   601,   777,   603,   658,
     657,   659,   635,     0,   644,   645,   642,   643,   641,     0,
       0,   639,   640,     0,     0,   634,     0,   664,   687,   672,
     673,   678,   688,   677,   768,   695,   694,   693,   692,   674,
     675,   676,   689,   680,   682,   684,   679,   690,   686,   685,
     683,   681,   648,     0,   722,   774,   771,   719,     0,     0,
     953,   868,     0,   846,     0,   931,   932,   933,   773,   847,
     508,   509,   506,   455,     0,     0,     0,   451,   446,   447,
     443,     0,   553,   417,     0,   397,   394,   398,   396,     0,
    1027,  1026,   748,     0,   615,   616,   614,    40,    36,  1021,
       0,   502,     0,     0,    82,     0,    82,    96,    82,    82,
       0,     0,     0,     0,     0,     0,   165,   163,   167,   157,
     153,     0,     0,   137,   118,     0,     0,     0,   117,     0,
       0,   237,     0,     0,   480,   486,     0,   486,     0,   484,
     485,     0,     0,   154,   151,   277,   277,   277,   277,     0,
       0,    24,    56,    58,     0,  1022,     0,     0,   237,   180,
     203,     0,     0,   277,   362,   361,     0,   360,     0,     0,
       0,     0,     0,   369,   371,   368,   370,     0,   417,   422,
     409,   406,   410,   408,   402,   399,   403,   401,    54,   404,
     411,    44,     0,   869,     0,   916,     0,     0,     0,   869,
     909,     0,   910,   803,   804,   819,   818,     0,     0,   869,
       0,     0,     0,     0,   621,   622,   619,     0,   565,   564,
     563,   612,   611,   559,   531,   527,   504,   528,   529,   530,
     845,     0,     0,     0,   709,     0,     0,     0,     0,     0,
    1062,  1054,     0,  1088,  1075,  1085,  1089,  1084,   671,  1096,
    1097,     0,  1120,     0,  1137,  1120,   520,     0,   519,   513,
     669,     0,     0,     0,   654,     0,     0,     0,     0,   798,
       0,   833,   800,   834,   842,     0,     0,   862,     0,   867,
     855,     0,     0,   853,     0,   662,     0,   593,     0,     0,
     586,     0,     0,   539,     0,     0,   544,   545,   546,   539,
       0,   540,     0,     0,   542,   949,   583,   592,   594,   581,
     580,     0,     0,   558,     0,   599,   656,     0,     0,     0,
       0,     0,   655,   647,     0,     0,   724,     0,   786,     0,
     790,     0,     0,     0,   458,   448,   449,   450,   395,   419,
       0,   420,  1031,   857,   516,     0,   112,     0,    75,     0,
      74,    84,    85,     0,     0,   123,   126,   162,   160,   159,
     422,   422,   422,   120,   121,   119,     0,   116,     0,   115,
     210,   211,     0,     0,     0,   461,   381,   464,     0,   463,
       0,     0,   155,   184,   185,     0,   186,   280,    72,    73,
      71,     0,     0,    61,  1023,    57,     0,     0,     0,   212,
     208,   213,   214,   919,     0,   182,     0,     0,   198,     0,
     352,     0,   364,     0,     0,     0,   275,     0,     0,   400,
     407,   903,   898,   876,   887,     0,   890,     0,   905,     0,
     801,   816,   820,   900,     0,   877,   878,   880,   618,     0,
       0,     0,     0,  1122,  1121,  1050,  1038,  1051,  1052,     0,
    1120,   986,     0,  1129,     0,  1124,     0,  1126,  1127,     0,
       0,  1120,     0,  1087,     0,     0,     0,     0,  1120,     0,
       0,  1103,  1110,  1114,     0,     0,  1138,     0,   511,     0,
       0,     0,     0,     0,     0,     0,     0,   796,   863,     0,
     854,     0,   858,   859,   584,   582,     0,   534,   667,   665,
       0,   579,     0,     0,   539,     0,   543,   541,   590,     0,
     844,   561,     0,     0,   575,   646,   650,   649,     0,     0,
       0,   718,     0,   726,   789,   788,     0,     0,   848,   418,
       0,     0,    81,    83,    79,     0,   125,   135,   136,   134,
       0,     0,   238,     0,     0,     0,   236,   215,   216,   218,
     219,     0,   492,   494,   496,   382,     0,   476,   469,   469,
       0,     0,     0,  1012,  1025,  1024,    19,     0,    53,    62,
      63,    65,    66,    69,    67,    68,   183,   269,   202,   237,
       0,     0,   205,     0,     0,   188,     0,   523,   945,   959,
       0,     0,     0,     0,     0,   296,   308,   309,   302,   303,
     304,   307,   305,   291,   293,   310,   321,   320,   325,   324,
     323,   322,     0,   306,   301,   300,   311,     0,     0,     0,
       0,     0,     0,   270,   372,   373,     0,   872,     0,     0,
     817,     0,     0,   597,   846,   849,   850,   755,     0,  1074,
    1059,  1061,  1075,  1072,  1055,     0,  1132,  1131,  1123,     0,
       0,     0,     0,     0,     0,  1076,  1086,     0,  1091,  1090,
    1093,  1094,  1092,   671,     0,  1136,  1135,   671,  1102,  1104,
    1106,  1107,     0,  1111,     0,  1115,  1162,   514,     0,     0,
       0,     0,   767,     0,   765,   766,     0,   860,   852,   666,
       0,     0,   535,     0,     0,   536,   539,     0,     0,   596,
     600,   637,   636,   723,     0,   728,   729,   721,     0,   787,
     791,   421,  1032,     0,     0,   131,     0,   129,     0,     0,
       0,     0,   263,     0,   233,     0,   217,   220,   221,   226,
     227,   228,     0,     0,     0,   462,     0,   487,     0,     0,
     475,   475,     0,   189,    60,     0,    64,   209,   919,     0,
     181,     0,   204,     0,     0,     0,     0,     0,   326,     0,
     329,   961,   334,   333,   335,     0,   343,   345,     0,     0,
     296,   352,     0,   353,   363,     0,   352,   359,     0,     0,
       0,     0,   386,   888,   891,   906,   901,   573,     0,     0,
       0,     0,     0,  1071,     0,  1053,  1125,  1128,  1130,     0,
       0,     0,     0,  1082,  1095,     0,  1108,  1134,     0,     0,
       0,     0,     0,   512,   652,   651,     0,     0,     0,   588,
     538,   548,   547,   537,     0,   591,   725,     0,     0,     0,
     671,   741,   730,   733,   731,     0,     0,   132,   133,   130,
     128,   699,     0,   264,     0,   229,   222,   258,     0,     0,
       0,     0,   259,   231,   262,   495,   493,   497,   477,     0,
     471,   473,   486,   486,     0,   177,   187,  1013,   237,     0,
     207,   170,     0,     0,   201,     0,     0,   290,     0,   330,
       0,     0,   296,   344,     0,     0,   340,   345,   296,   352,
       0,     0,     0,     0,   969,   285,   282,   292,   283,     0,
       0,   276,   383,   383,   374,   375,     0,   365,   390,   598,
     847,  1069,     0,  1064,  1067,  1060,  1073,  1056,  1058,  1077,
       0,  1080,  1079,  1078,  1133,  1105,     0,     0,  1099,     0,
       0,     0,  1151,  1140,  1141,   769,   763,   764,   589,     0,
     734,   732,   735,     0,   727,   124,   127,     0,     0,   257,
       0,   260,   277,     0,   470,     0,   474,   488,   488,     0,
       0,     0,     0,   224,   206,   199,   200,   287,     0,     0,
     331,     0,   296,   346,     0,     0,   341,     0,   348,     0,
     297,   296,     0,     0,     0,     0,     0,     0,   381,   384,
     381,   381,   381,   376,     0,     0,   352,  1063,     0,     0,
    1066,     0,  1081,  1109,  1112,  1113,  1146,  1150,  1149,  1145,
    1146,  1144,     0,     0,     0,  1139,  1152,  1153,  1155,     0,
       0,   743,     0,   744,   277,   234,     0,   255,   478,   472,
     489,   490,   490,   176,   177,     0,   223,   237,   281,   328,
       0,   336,   342,     0,   338,   296,     0,   296,     0,     0,
     297,   294,   352,   358,     0,   356,   284,   286,   288,   289,
       0,     0,     0,     0,   388,   389,   387,     0,     0,   316,
     317,   314,   315,   392,   318,   385,   313,   312,   319,  1065,
    1070,  1068,  1057,     0,  1143,  1142,  1158,  1161,  1157,  1160,
    1159,  1154,  1156,     0,     0,   671,   736,   738,   745,   742,
     255,     0,   232,   266,   251,   246,     0,   492,   492,     0,
     191,   225,   332,   297,   339,   337,   349,     0,     0,   295,
       0,     0,   380,   378,   379,   377,     0,   298,  1148,  1147,
     739,   737,   740,   246,     0,   253,   254,   252,   256,     0,
     247,   248,   261,   491,   460,   465,     0,   296,   347,   354,
     357,   391,   352,   265,   235,     0,     0,     0,   250,     0,
     249,     0,   459,   190,   348,   351,   355,   393,     0,   240,
     241,     0,     0,   245,   244,     0,   350,   299,   239,   242,
     243,     0,   467,   466,     0,   468
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    33,   188,   185,   184,   186,   187,    34,    35,   536,
     516,    36,    37,    38,    39,  1088,  1586,   299,  1587,  1588,
     836,  1142,  1145,  1558,  1559,  1560,   833,  1380,  1589,   210,
    1096,  1094,  1338,  1590,   221,   222,   211,   212,   213,   780,
     214,   215,   216,   772,   773,  1591,   795,  1118,  1114,  1115,
    1592,    47,   824,   806,   825,   807,   826,    48,   258,   259,
     791,  1395,   260,  1856,   261,  1575,  1149,  1150,  1742,  1388,
    1389,  1390,  1539,  1360,  1716,  1717,  1391,  1952,  1718,  1719,
    1830,  1720,  1721,  2092,  1361,  1722,  2163,  2130,  2131,  2132,
    2128,  2095,  1843,  1536,  1844,   550,  1392,    49,   233,   234,
    1613,  1151,   441,    50,  1867,  1887,    51,  1593,  1761,  2142,
    2033,  2063,  1595,  1596,  1597,  1748,  1749,  1959,  1598,  1753,
    1599,  1876,  1877,  1756,  1757,  1874,  1600,  2039,  1601,  1602,
    2155,  1972,  1766,  1156,  1157,    53,   849,  1167,  1772,  1894,
    1895,  1546,  1980,  1897,  1898,  2056,  1986,  2065,   456,   284,
    1603,  1075,  1330,   548,  1604,  1605,    57,   434,   435,   436,
    1068,   164,   428,   729,    58,  2152,  2171,  1730,  1849,  1850,
    1125,  1126,   235,  1367,  2021,  2097,  1725,  1542,  1543,    59,
     470,    60,    61,    62,   725,   954,  1247,   763,   371,   764,
    1249,   765,   161,   600,  1218,   601,   598,   985,  1293,  1497,
    1294,  1685,   236,   169,   170,   438,    64,  1606,   237,   992,
     993,    67,   592,   905,   372,   668,   669,   986,  1283,  1284,
    1298,  1299,  1305,  1622,  1504,   373,   374,   308,   596,   912,
     757,   901,   902,  1206,   375,   376,   377,   378,  1013,   379,
    1004,   380,   381,   639,   382,  1003,   383,   665,   384,   385,
     988,   386,   387,   388,   389,   390,   391,   392,  1315,  1316,
    1513,  1697,  1698,  1821,  1822,  1823,  1824,  2086,  2087,  1934,
     393,   640,   180,   181,   395,   612,   396,   397,   398,   672,
     399,   400,   401,   402,   403,   657,   966,   652,   654,   582,
     892,   928,   929,   893,  1422,   894,   895,   583,   404,   405,
     406,   990,   407,   408,   920,   409,   753,   979,   972,   973,
     660,   661,   976,  1052,  1182,   909,   238,  1616,  1331,  1191,
     410,   586,   587,   411,  1363,   774,   218,   641,   158,  1554,
     239,  1183,   413,    68,   192,  1383,  1384,  1555,    69,   457,
     934,   935,   936,   414,   415,   416,   417,   418,  1440,  1231,
    1630,  1902,  1903,  1990,  1904,  2071,  1631,  1632,  1633,  1451,
    1645,   419,   940,  1234,  1235,  1236,  1453,  1649,   420,  1456,
     421,  1240,  1458,   422,   947,  1242,  1460,  1658,  1659,  1660,
    1661,  1662,  1801,   423,   424,   950,   944,  1226,   941,  1444,
    1445,  1788,  1446,  1447,  1448,  1796,  1797,  1465,  1466,  1922,
    1923,  2000,  2001,  2074,  2119,  1924,  1998,  2005,  2006,  2081,
    2007,  2008,  2080,  2078,   425
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1753
static const yytype_int16 yypact[] =
{
    1554,   133, -1753,    55, 17108,   -72,  -111,   305,   305, 17108,
     391,   415, -1753, 17108,   319,   375,   366, -1753, 14417, 17108,
   -1753, -1753, -1753, -1753, -1753,   762, -1753, 17407,   617,   169,
     403,    65,   262,   647,  1811,   694,   963, 12922, 12623,   515,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753,   673,   572, -1753,
   -1753, 17108, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753,   460,   532, -1753, -1753,
   -1753,  4349, 17108, -1753,   618,   618, -1753, 17108,   952,    76,
   -1753,   726,   -72,   805,   495,   578, -1753, -1753, -1753, -1753,
     758, -1753,   559,   726,  2895,  2895,  1554,  1554,  2895, -1753,
   -1753,   779, -1753, 17108,   899, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753,   726,   726, -1753,   594, -1753, -1753,   726,   290,
     433,   703, -1753,   621,   710,   696, -1753, -1753, -1753,   790,
     802,   413,  1197,   978,   952, 15613, 17108, 17108, -1753,   816,
     543,   834,  1098,   873, -1753,   876, -1753, -1753,   416, -1753,
   -1753,   827, 17108,   832, -1753, -1753, 17108, -1753, -1753,   847,
     850,   863,   879, 17108, 17108,   881,   881, -1753,   884, -1753,
   -1753,   931,   992, 17108, 17108, 17108, 17108, 17108, 17108, 17108,
   17108,  1001,   598, 17108,   926,   926,   926,   926, 17108,   926,
     926,   926, 17108,   926,  1049, -1753, -1753, -1753,  1018, 17108,
   17108, 17108,   945,  1071,  1077,  1101,  1006,  1022,   105,   953,
   -1753,   967, -1753, -1753,  1203,   497,   497,   497,  1007, -1753,
    1028, 15912, 17108,  1322,  1322,  1322,  1324,  1163,  1166,  1168,
   -1753, -1753, -1753, -1753, -1753,  1169,  1172,  1327, -1753, -1753,
   -1753,  1175,  1175,  1175,  1175,  1175, -1753,  1176, -1753,  1177,
    1226, 17108,  1182,  1185,  1186,  1187,  1188,  1190,  1200,  1201,
    1202,  1204,  1205,  3299,  5049,  9779,  9779,  1206,  1210,  1211,
   -1753,  9779,  1322,   678,   701,   115,  7448,  1212,  1214,  5049,
   -1753, -1753,   431, 16211,  1167, -1753,  1374, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, 17108, -1753, -1753, -1753, 12281, -1753,
   -1753, -1753,  1033, -1753,  1042, -1753, -1753,  1044, -1753, -1753,
    1220,  1227,  1233,  1062, -1753, -1753, -1753, -1753, -1753, -1753,
    1322,  1322,   -49, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753,   252,  1013, -1753,  1119,
   -1753,  1023,  1317,  1312, -1753,  1064, -1753, 17108, -1753, -1753,
    1086, -1753,  4349, -1753, -1753, 17108,  1181, 17108, 17108, 17108,
   17108, 17108, 17108, 17108, 17108, 17108, -1753,  1149,  7781, 14417,
    1113,  1286,  1288, -1753, -1753,  1291,  5749,   899,  1296,  1299,
    1049, -1753, -1753, -1753, -1753, -1753, -1753,   107,  1197,   107,
    1111, 13221,   507,  1319,  1321,  1325,   -22,   952, -1753,   864,
     446,   888,   657, 17108,  1260,   727, 17108, -1753,    54, 17108,
    1098,  1134, -1753, -1753,  1266, -1753, -1753,   336,   881,   881,
     881,   881,  1208,  1267,  1265, 17706, 17108, 17108,   881, 17108,
    1270,  1278,  1279,  1290,   726,   839, -1753, -1753,   926,  1224,
   17108, 17108, 17108, 17108,  1049,  1367, 17108, 17108, 17108, 17108,
   -1753, 17108, 17108, 17108, -1753, 17108, -1753, -1753, -1753, 17108,
     -79, -1753, -1753,    34,  1176, 17108,  5049, 17108,  1300,  1305,
   -1753,   680, -1753, -1753, -1753,  1306,  1307, -1753, -1753, -1753,
   -1753, -1753,  1445, -1753,  1313, -1753, -1753, -1753,  1326,  1329,
     867, 17108, -1753, -1753, -1753,  1330,  1332,  1333,  1335,  9779,
   -1753, -1753,  1318,  1318,  1318,    44,  1189,  5049, -1753,  1320,
      -9, -1753,  1323, -1753,  1146, -1753, -1753, -1753,  5049,  5049,
    1474,  1351, -1753, -1753, -1753, -1753, -1753,   226, -1753,  1328,
    1387, -1753,  9779,  9779,  9779,  1263,  1354,   964,  1272,  1527,
    9779,   712,  9779,  3299,  1356,  1357,  1358,   -11,   778,    12,
   -1753,   -20,  1374,  3299,  1117,  1117,  9779,  9779,  9779,  1005,
   -1753,   762,  1361,   762,  1361, -1753, -1753,  1322,  5049, 11655,
   -1753,   843,  9779,  9779,  1374,   675,  2770, 17108, -1753,  1028,
    5049, 17108, -1753, -1753,  5049,  3649,  9779,  9779,  9779,  9779,
    1362,  1363,  1133,  1133,  3649,  1180,  9779,  9779,  9779,  9779,
    9779,  9779,  9779,  9779,  9779,  9779,  9779,  9779,  9779,  9779,
    9779,  9779,  9779,  9779,  9779,  9779,  9779,  9779,  9779,  9779,
     707,  1364,  1334,  4349,  1366,  6082,  9779, -1753, -1753, 13520,
   15015,  1252,  1356, -1753,   293, -1753, -1753,  1460,  1465, -1753,
   -1753, -1753,   966,   762,   952, -1753,  1371,  1435, -1753, 17108,
    1375,  1375,  1375,  1375, -1753, -1753,  1199, -1753, -1753,   482,
   -1753, -1753, 13517,   138, -1753, -1753,    50,  1331, -1753, -1753,
   -1753,  3299, -1753,   147, -1753, -1753,   989,  1049, -1753, -1753,
   -1753, -1753,    -2, -1753, -1753, -1753,   116, -1753,  1181, 17108,
   -1753, -1753, -1753, -1753, -1753, -1753,   107,   107, -1753, -1753,
   -1753,  1289,   864,  1280,  1274, -1753,  1459,  1397,  1098,  1098,
   -1753, -1753, -1753, -1753,  1098,  2660,   888, -1753, -1753,   599,
     823,  1287,   970,   726, -1753,  1461,    73,    73,   726,  1257,
    1098,   864,  1405,  2660,   336, -1753, -1753, 17108, 17108, 17108,
   17108,  1355,  1337, -1753,  1487, 17108,  1342,  1369,   610,  1338,
   17108,  1423, 16510, 16510, 16510, 16510,  1303, -1753, -1753,   374,
   17108, 17108,  1049,  1049,  1049,  1049, -1753, -1753,  1375,  1375,
    1375,  1375,  1049,  1049,  1049, -1753, -1753, -1753, -1753,  1068,
   -1753, -1753, -1753,  1419,   967,   762,   762, -1753,  1579,   762,
     762,   762, -1753,   794,  1361,  1361, -1753, -1753, -1753, -1753,
   -1753,  1329,  1326,  1352, -1753, -1753, -1753,   762,   762,   762,
     762,  1258, -1753, 11023,  1501,   319,   319,   319, -1753, -1753,
   -1753,    44,  1113,  1419,  1176, 15912,  1028,  4699, 17108,  1419,
    1309,  1268, -1753, -1753, -1753, -1753, -1753, -1753, -1753,  1497,
   17108, 13517,   748, 13517, -1753,   -38, -1753,  1455, 17108,  1441,
    9779,  1294, -1753, -1753,  9779, 17108, -1753,  1491,   748, -1753,
    9779, -1753,  1537,  8114,   148, -1753, -1753, -1753,  1090,  5049,
   14716, 10075, 13075,  1694,  1468,  1353,  1322,  1470,  1322,   867,
     -54,  9779, -1753,   880,  9779, -1753,  1340, 10391,  1298,   197,
    5049, -1753, 13819,  2232, -1753, -1753,  1301,   955, 18005, 18005,
   18005,   253,    -5, -1753, -1753,  1538,  1167, -1753,  1374, -1753,
   -1753, -1753,  1082,  5049, -1753, 12610, -1753, -1753, -1753,  8447,
    8447, -1753, -1753,  5049,  5049, -1753,  1176, -1753, 13517,  1373,
    1373,  1373,  1373,  1373,  1373,  1373,  1373,  1373,  1373,  1117,
    1117,  1117,  1005,   852,   852,   852,   852,  1513,  1513,  1513,
    1513,  1513, -1753,  1540,  1314, -1753, -1753, -1753,  9779,  1476,
    9779, 13517,  1477,   259,  1308,  1481,  1485,  1490, -1753,   294,
   -1753,  1339, -1753, -1753, 17108,  1184,  1573, -1753, -1753, -1753,
   -1753,   347, -1753,  1375,  2567, -1753, -1753, -1753, -1753, 17108,
   -1753, -1753, -1753,  9779, -1753, -1753, -1753, -1753, -1753, -1753,
    8447, -1753,  1401,   107,  1556,  1406,  1556, -1753,    -3,    -3,
    1322,  1408, 17108, 17108,  1098,   277, -1753, -1753, -1753, -1753,
   -1753, 17108, 17108, -1753, -1753, 17108,  1580,  1192, -1753, 17108,
   17108, 16809,  1560, 14417, -1753,  1562,  1359,  1562,  1563, -1753,
   -1753,  1412,  1098, -1753, -1753,  1503,  1503,  1503,  1503, 17108,
     858, -1753, -1753, -1753,  1659,  1407, 17108,  1446, 15314,  1584,
   -1753,  1365, 17108,  1503, 16510, -1753,  1509,  1341,  2660,  1510,
    1518,  1519,   543, -1753,  1370, -1753, -1753,  1426,  1375,  1049,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753,  1521, -1753,  1523, -1753,  1526,   306,  1529,  1360,
   -1753,   312, -1753, -1753, -1753, -1753,  1421,   943,  1535,  1368,
    1536,  1539,  1542,  9779, -1753, -1753, -1753,  1541, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,  1419,
   -1753,  2660,  2660,  9779, -1753,   734,  1543,  9779,  1545,  1546,
   -1753,  1378,  8780, 13517,  -165, -1753,  1385, -1753,   568, -1753,
    1381,  1609,  1455,  1547,  1561,  1455, -1753,   340, -1753, -1753,
   -1753,  1551,  1557,  1559,  1374,  9779,  9779,  9779,  9779, -1753,
    1434, -1753, -1753, -1753, -1753,  9779,  3056, -1753,  1420, 13517,
   -1753,  9779,  9779, -1753,  9779,  1374, 18005, 18005,  2232,  1356,
    1564,  1565,  1568,   965,   319,  2770, -1753, -1753, -1753,   987,
    1662, -1753,  2770,  1669,  1677, 17108, -1753,  1576, -1753, -1753,
   -1753, 14417, 17108, -1753,  1647,  1644,  1082,  1322,   342,   393,
    1284,  1336, -1753, -1753,  1649,  1582,  1652,  1587, -1753,  1588,
   -1753, 14118,  9779, 17108, -1753, -1753, -1753, -1753, -1753, -1753,
    1589,  1411,  1416, -1753, -1753,  1496, -1753,   858, -1753,  1500,
   -1753, -1753, -1753,  1740,  1322, -1753, -1753, -1753, -1753, -1753,
    1049,  1049,  1049, -1753, -1753, -1753,   631, -1753, 17108, -1753,
   -1753, -1753,   648,  2079,   170, -1753,  1440, -1753,  1322, -1753,
     101,  1322, -1753, -1753, -1753,  1502, -1753, -1753, -1753, -1753,
   -1753,  1494, 17108,   751, -1753, -1753, 14417, 17108,   395, -1753,
   -1753, -1753, -1753,   141, 17108, -1753,   543,  1601,  1507,  1602,
   10404, 17108, -1753,  1544,  1549,  1550,  1605, 17108, 17108, -1753,
   -1753, -1753, -1753, -1753, -1753,   762, -1753,   762, -1753,   762,
    1329, -1753, -1753, -1753,   762, -1753, -1753, -1753, -1753, 17108,
    1608,  1613, 13209, -1753, -1753, -1753, -1753, -1753, -1753,  6415,
    1455,  1555,  9779, 13517,   400, -1753,  1462, -1753, -1753,   932,
    9779,  1455, 17108, -1753,  1648,  1654,  1618,  9779,  1455,   451,
    9779, -1753,  1609, -1753,  1511,  1628, -1753,  1632, -1753,  8114,
    8114,  8447,  8447, 10707, 13807, 12910,  3024, -1753, -1753,  9779,
   -1753, 14405, -1753, -1753, -1753, -1753,   412, -1753, -1753, -1753,
     241,   955,  1736,  2770,   602,  2770, -1753, -1753,  1638, 17108,
     295, -1753, 17108,  5049, -1753, -1753, -1753, -1753,  5049,  5049,
   17108, -1753,  1709,     1, -1753, -1753,  1639,  1640, -1753, -1753,
    2660, 17108, -1753, -1753, -1753,  1483,  1548, -1753, -1753, -1753,
    1566,   623, -1753,  1552,  1569,   726, -1753, -1753, -1753, -1753,
     517,  1322,  1739,  1475, -1753, -1753,  1322,  1480,  1650,  1650,
    1586,  1828, 17108, -1753,  1486, -1753,   533,  1377, -1753,   751,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, 15314,
    1567,  1829,  1660, 17108,  1762, -1753,  1604,   -72,   391,   415,
    1606, 14417,  3999,  9113,  5049,  1524, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753,  1530, -1753, -1753, -1753, -1753,  1493,  2660,  2609,
    1842,  2609,  1621, -1753,  1508,  1525,  1675, -1753,  1680,  1683,
   -1753,  1686,   420, -1753,  1514, -1753, -1753, -1753,  1691, 13517,
    1520, -1753,   429, -1753,  1522,  1692, -1753, -1753, -1753,  8780,
   17108,  1603,  1607,  1610,  1611, -1753, -1753,  1696, -1753, -1753,
   -1753, -1753, -1753,   756,  1700, -1753, -1753,    -6,  1533, -1753,
   -1753, -1753,   684, -1753,  1715, -1753, -1753, -1753,   425,   430,
     432,  9779, -1753,  9779, -1753, -1753,  9779, -1753, -1753, -1753,
   18005,  2770, -1753,   726,  5049, -1753,   602, 17108,   437,  1534,
    1419,  1693,  1693,  1534,  9779, -1753, -1753, -1753,  5399, -1753,
   -1753, -1753, -1753,  1622,  1615, -1753,   689, -1753,  1774,  9779,
     726,   726, -1753,  1757, -1753,  9779, -1753,   517, -1753, -1753,
   -1753, -1753,   519,   438,  1665, -1753,  1322, -1753,  1322, 17108,
      73,    73,  1322,  1730, -1753, 17108, -1753, -1753,  1744,  1745,
   -1753,   382, -1753,   440,    86,  1679,  4349, 17108, -1753,  1746,
   -1753,  1747, -1753, -1753,  1419,  5049, -1753,   883, 11964,    67,
   -1753, 11668,  5049, -1753, -1753,  1748, 10720, -1753,  1281,   795,
    1653,   951,  1812, -1753, -1753, -1753, -1753, -1753, 17108, 17108,
    9779,  9779,  9779, -1753,  9446, -1753, -1753, -1753, -1753,  1815,
      69,  1817,  1818, -1753, -1753, 17108, -1753, -1753,  9779,  1661,
    1664,  1754,   531, -1753, -1753, -1753, 14704, 15003, 15168, -1753,
   -1753, -1753,  1419, -1753,   443, -1753,  1258,  6748,  1599,  1591,
    1592,  1595, -1753, -1753, -1753,  1322, 17108, -1753, -1753, -1753,
   -1753,  2917,  1666, -1753,  1614, -1753, -1753, -1753,  1827,  1764,
    1678, 17108, -1753, -1753, -1753, -1753, -1753, -1753,  1597,   453,
   -1753,  1941,  1562,  1562,  1670,    52, -1753, -1753,   634,  1777,
   -1753, -1753,  1865,  1866, -1753, 17108,  1688, -1753,  1612,  9779,
     566,   191, -1753, -1753,  1634,  9779, -1753,   922, -1753, 11668,
    1821,    90, 17108,  1718,  1955, -1753, -1753, -1753, -1753,  1721,
    1958, -1753,   -27,    83,   951, -1753,  1629, -1753,  1663, -1753,
    1617, 13517,   458, -1753,  1641, -1753, -1753,  1619, -1753, -1753,
    1819, -1753, -1753, -1753,  1609, -1753,  1820,  1823, -1753,  1816,
   17108,  1974,   622, -1753, -1753, -1753, -1753, -1753, -1753,  1786,
   -1753, -1753, -1753,    18, -1753, -1753, -1753, 17108,  1848, -1753,
    5049, -1753,   726,  1322, -1753, 17108, -1753,  1920,  1920, 17108,
    1322,  1719,   467, -1753, -1753, -1753, -1753, -1753, 17108,   472,
   13517,  1807, -1753, 11036,  1681, 11340, -1753,  1667, 10088,  1849,
    1668, -1753,   478,  2660, 17108,  1281, 17108,  1281,  1440, -1753,
    1440,  1440,  1440, -1753,   960,  1814, 11977, -1753,  9779, 17108,
   -1753,  9779, -1753, -1753, -1753, -1753,  1830, -1753, -1753, -1753,
    1830, -1753,  1832, 17108,  1974, -1753, -1753, -1753,  1838,  7098,
    1651, -1753,  1671, -1753,   726,  1825,   697,  1880, -1753, -1753,
   -1753,  1934,  1934, -1753,   864,  1322, -1753,   634, -1753, -1753,
    9779, -1753, 11036,  1863, -1753, -1753,  1698, -1753,  5049,  1682,
    1684, -1753, 11352, -1753, 17108, -1753, -1753, -1753, -1753, -1753,
   17108, 17108, 17108, 17108, -1753, -1753, -1753,  5049,  1689, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753,  1974, -1753, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753,  1676,  1672,  1674, -1753, -1753, -1753, -1753,
    1880,   336, -1753, -1753,   853,  1738,  1948,  1739,  1739,  1749,
   -1753, -1753, 13517, -1753, 11036, -1753, 11036,   323,  1701, -1753,
    1704,  2660, -1753, -1753, -1753, -1753,   774, -1753, -1753, -1753,
   -1753, -1753, -1753,  1738,   462, -1753, -1753, -1753, -1753,  1230,
    1743,  1750, -1753, -1753, -1753,  1697,  1322, -1753, -1753, 17108,
   -1753, -1753, 12293, -1753, -1753,   193,   193,  1951, -1753,  1957,
   -1753,  1846, -1753, -1753, 10088, -1753, -1753, -1753,  1889, -1753,
   -1753,  1984,   251, -1753, -1753,  1098, -1753, -1753, -1753, -1753,
   -1753,   511, -1753, -1753,  1098, -1753
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1753,  1114, -1753, -1753, -1753, -1753, -1753, -1221, -1753,  -131,
     -35, -1201, -1753, -1753,   902, -1753,     6, -1753,    21,   377,
   -1753,   895, -1753, -1753, -1753,   468, -1753,   692,    11,  1808,
   -1753, -1753,    81,    16, -1753, -1753,  1824, -1753,  1570, -1753,
   -1753, -1753,  1571,  -398,   949,    45, -1753, -1753, -1753,   498,
      59, -1753,   -40, -1753,  -811,  1246,  -412, -1753, -1753, -1753,
    -775, -1753,  2016, -1753, -1753, -1753,   -32, -1753, -1753, -1753,
     934,   487, -1753, -1753, -1753, -1753, -1753, -1753, -1619, -1753,
     343, -1753, -1753, -1753, -1753, -1070,   -89,   -71,   -69,   -64,
   -1753,   -28, -1753, -1753, -1753,   -37, -1753, -1753,  -218,  -424,
   -1753,  -161,   -19, -1753, -1266,  -744, -1753,   297, -1469, -1753,
   -1356,   -78, -1752, -1753,   544, -1753, -1753, -1753, -1753, -1753,
   -1753,   188, -1753,   309, -1753,   190, -1753,   -86, -1753, -1753,
   -1753, -1753,   459,  -761, -1753, -1753, -1753, -1753, -1753, -1753,
     175,  -904,   179, -1753, -1753, -1753, -1753, -1753,  1593, -1753,
      96,  -556,   553,  -433,    26,    31, -1753,  -130, -1753,  1343,
   -1753,  2067,  1913, -1753, -1753, -1753, -1753,   530, -1753,   135,
    -788, -1753, -1753, -1102,   134,    61,  -783,   711,   546, -1753,
    1623, -1753, -1753, -1753,  1372,  -679,   624,  -947, -1753,  -423,
     628,  1002,  -168, -1753, -1753,  1178,  -577,  -913,   812, -1753,
   -1753,   405,   110, -1753,  1687, -1753, -1753,    40,   166, -1753,
     815,    42,  1015,   730,  -434,  1126,  1528, -1753,  -614, -1753,
    -960,  -922, -1753, -1001, -1753,  -277,  1449,  1173, -1753, -1753,
    1215,   426,   923, -1753, -1753,  -300, -1753, -1753,  1447, -1753,
     534, -1753, -1753, -1753, -1753,  1452, -1753, -1753,  1454, -1753,
    1404,  -317,  -764,  1499,  -603,  -515, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753,   324, -1753, -1753, -1753, -1753, -1753,
   -1753,   106, -1753,  -401, -1753,   804, -1753, -1753,  1429, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753,  -559,  -513,  -555, -1753,
    -580, -1753, -1753, -1753, -1753, -1753,  1174, -1753,  2107, -1753,
    1596,   919, -1379, -1753,  1558, -1753, -1753, -1753,  1179, -1753,
    1495, -1753,  1191,  -680,   276,  -713,  -225, -1753,  -253, -1753,
    -269, -1753, -1753,  -263,  -308,    32, -1753,    -4, -1753, -1388,
    -546,     5,  -242, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
    -558, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,
     367, -1753,   167, -1753, -1753, -1753, -1620, -1753,   372,   525,
   -1753, -1753, -1753, -1753,   709, -1753, -1753, -1753, -1753, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753, -1753, -1753,   362, -1753,
   -1753, -1753, -1753, -1753, -1753, -1753,  1553,  -860,   731, -1753,
     526, -1753,   724, -1753, -1753,   255, -1141, -1753, -1753, -1753,
   -1753, -1753, -1587,   171, -1753, -1753, -1753, -1753, -1753, -1753,
     164, -1753, -1753, -1753, -1753
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1134
static const yytype_int16 yytable[] =
{
     157,   301,   723,   602,   442,   166,    40,   497,   737,   171,
     440,    43,   494,  1134,   182,   157,    44,  1101,   293,   932,
     618,    41,   460,   157,   885,  1369,    55,   948,  1296,  1127,
     191,    56,   585,   295,   302,   751,  1054,   770,   588,   927,
      65,   471,   472,  1061,  1594,    45,  1131,   474,   584,   910,
    1623,  1362,   987,   638,   642,   228,   173,   313,   754,    46,
     217,   228,  1308,  1309,  1084,   884,   937,   157,  1300,   664,
    1280,   605,   606,   607,   952,  1228,   637,  1229,  1362,   808,
     908,   776,  1159,  1160,  1161,  1106,  1107,  1695,  1243,  1124,
     787,  1108,   995,   868,   488,   968,    54,   867,  1836,  1459,
    1461,   856,  2010,   666,   313, -1133,  1449,   666,  1950,  1337,
      63,  1688,   195,   196,   197,   198,   199,   200,  -795,   159,
     650,   225,  1225,  1623,   179,  -961,  -751,   670,  2011,  -961,
    -961,  1623,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,   172,   537,   538,   539, -1133,   541,   542,
     543,  1862,   545,  1910, -1133,  -751,   162,   412,   157,  -961,
    -961,  1905,  1556,   430,  1908,   957,    66,    71,   717,   718,
     670,  1863,  1092,   313,   -88,   -88,   -88,   -88,   -88,   -88,
    1911,   226,  1557,   160,  1450,  1076,  1077,  1078,   958,   157,
      40,    40,    40,    40,    40,    43,    43,    43,    43,    43,
      44,    44,    44,    44,    44,    41,    41,    41,    41,    41,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    56,
     515,   490,   157,   157,    65,    65,    65,    65,    65,    45,
      45,    45,    45,    45,  2064,  2159,  2160,   871,   504,  1953,
     978,  1085,   157,    46,    46,    46,    46,    46,   670,   157,
     513,    14,   910,   910,   217,  1265,   817,  1978,   910,   157,
     157,   157,   157,   157,   157,   526,   157,   394,    70,   157,
     581,   670,   495,   228,   540,   819,  1541,  2161,   157,   873,
      54,    54,    54,    54,    54,   302,   551,   552,   228,   229,
    1095,  1879,   599,   172,    63,    63,    63,    63,    63,  1814,
     723,   719,  1174,  1175,  1176,  1177,  1979,   603,   604,   655,
     656,  1227,   789,   790,  1082,  1570,  1484,  -267,   754,   172,
     913,  1663,  1795,  1089,  1250,  1193,  1194,   478,   869,   172,
     960,   919,   919,   638,  1091,   439,  1195,   621,  1556,  1216,
     915,  1238,  1864, -1133,  1302,  1541,  1093,  1093,  1696,   227,
      66,    66,    66,    66,    66,  1485,   637,   788,  1557,  2012,
     172,   959,  2169,   846,  2013,  1280,   637,  1981,  1317,   673,
    1319,  2072,   670,  1273,   998,  1002,  1878,    42,   816,  1196,
     157,   970,  1462,   771,  1015,  1467,   172,   163,  1098,  1099,
    2064,  1347,  1244,  1399,   808,  -479,  1211,   850,   370,  1899,
      13,    14,   475,  1963,   370,  1880,  1971,   724,  2101,  1968,
    1594,   305,   306,   307,   172,   969,  1979,  2079,   514,  1170,
    1171,  1172,  1173,   822,  1548,   437,    13,   720,  -751,  1178,
    1179,  1180,   219,   171,  -751,   220,    13,   230,   412,  1163,
    1164,   157,  1165,   157,   157,   157,   157,   744,   157,   746,
     157,   157,   617,   796,  -961,   755,   798,   799,   800,   801,
     802,   803,   223,   635,   804,  1093,  1859,    13,    14,  -751,
    -751,   167,  2162,   827,   828,   829,   830,   157,   201,   202,
     203,   204,  1414,   840,   637,   313,  2118,  1083,  1418,   157,
    -267,   224,   157,  2032,    14,   157,  1090,  1251,   231,  1362,
    1962,  1689,  2042,   168,   670,  2170,   721,  1081,   766,  1693,
     775,   837,   157,   839,   634,   157,  1468,  1328,  1506,   636,
     874,    13,    14,  1969,  1669,  1670,   157,   157,   157,   157,
    1248,  1086,   157,   157,   157,   157,   585,   157,   157,   157,
     722,   157,   588,   666,    52,   866,  1274,   721,   394,   822,
     241,   872,  1109,   302,   585,  1860,   174,   476,   910,   754,
     588,    42,    42,    42,    42,    42,  2104,   232,  2106,  1507,
    1133,  1568,   201,   202,   203,   204,  1638,   896,  1655,   796,
    1635,   722,   798,   799,   800,   801,   802,   803,  1679,   242,
     804,  1647,   243,  1080,  1680,  1130,  1777,  1214,  1654,  1957,
    1486,  1803,  1656,  1301,   205,   585,  1804,   602,  1805,  1321,
     172,   588,  1409,  1815,  1845,  1919,  1861,  1421,  1683,  1928,
     792,  1181,   195,   196,   197,   198,   199,   200,  -237,  1944,
    1837,  1166,  2137,   172,  1987,  1279,   175,   244,  2144,   245,
    1219,  1192,  1517,  2026,  1323,   918,  1713,   240,  2029,   246,
     303,  1714,  1122,  1454,  2043,  1415,   964,  1128,   967,  1254,
    1333,  1419,   991,   994,   823,  1276,   206,   997,  2154,  1436,
     207,  1491,  1286,  1287,  1288,   495,  1289,  1290,  1494,  1291,
    1275,  -799,   201,   202,   203,   204,  1212,  2173,   590,  1469,
     208,  1090,  1827,  1920,   445,  -237,  1921,  1838,   667,  1312,
    1449,   877,   878,  1306,  -801,   793,  2002,   309,  2046,   412,
    2048,  1053,  1455,  1310,  1311,  1059,   302,    13,   230,   477,
    1809,   500,  1147,  1706,  1261,   794,  1263,   635,    52,    52,
      52,    52,    52,   209,  1707,   157,  1410,   501,  1069,   311,
      13,    14,  1090,   635,  1569,   446,  -237,  1358,  1839,  1639,
    1947,  1948,   591,   635,   247,   248,   249,   250,   251,   252,
     206,  1251,   173,  1713,   207,   529,   253,   189,  1714,  1778,
    1292,  1715,   989,   190,  1469,   157,   304,  2003,  1782,  1090,
    2004,  1090,   478,   636,   208,  1148,  1735,  1726,  1348,   581,
     823,  -237,  1735,  1840,  -237,  1799,  1841,   313,   254,   636,
    1828,  1708,  1945,   495,  -237,   585,  1842,  1988,   205,   636,
     427,   588,   447,   448,   449,   450,  2027,   256,  1042,   394,
     257,  2030,   444,   157,   157,   157,   157,  2044,   949,  1111,
     304,  1143,   530,   531,   532,   533,   157,  1800,  1158,  1158,
    1158,  1158,  1478,   305,   306,   307,   157,   157,  1190,  1482,
    1433,  1483,  -799,   651,  1653,   879,   451,  1657,  1343,  -174,
    2174,   262,   452,   453,  1358,  1620,   942,   454,   943,   473,
     206,   635,  1684,  2093,   207,  -801,   653,  1709,   670,  1682,
    1349,  1686,   312,  1112,  1113,  1043,  1189,  1530,  1715,   585,
    1434,  1116,  2125,  2126,   208,   588,   599,   305,   306,   307,
     754,   289,  1199,   443,   455,  1402,  1533,  1372,  1225,   459,
    1531,   603,  1117,   809,  1220,  1378, -1098,  1527,  1528,  1529,
     754,  1379,  1534,   156, -1120,  2127,   157,   636,   263,   264,
     265,   266, -1098,   458,  1230,  1535,   810,   209,   183,   811,
     812,  1239,  1852,  1853,  1406,  1831,   194,  1208,  1209,  1210,
    2141,  1831,   585,   585,   466,   670,  1059,   675,   588,   588,
     676,   677,   678,   679,   680,   681,   682,   683,  1430,  1431,
     480,   684,   558,   559,   560,   305,   306,   307,   182,   991,
     481,   443,    15,   267,  1297,  1297,  1297,   561,   686,   479,
     310,   562,   563,   564,   327,   328,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   796,   797,    26,   798,   799,
     800,   801,   802,   803,    28,    29,   804,   468,   469,   269,
     574,   575,   576,   268,   980,  1286,  1287,  1288,   981,  1289,
    1290,  -539,  1291,    31,  1889,  1286,  1287,  1288,  1890,  1289,
    1290,   431,  1291,  1641,   432,   482,  1248,  1248,   502,   503,
     433,   766,   766,   505,   506,  1065,  1677,  1286,  1287,  1288,
    1324,   483,  1066,  1067,  1291,  1505,   487,  1810,   705,   706,
     707,   708,   709,   484,  2050,  1332,  2051,  2052,  2053,   270,
    1951,   426,  1642,   493,  1643,  1644,   461,   462,  1277,   989,
     465,   546,   547,  1281,   585,  1820,   726,   727,  1345,  1346,
     588,   496,  1526,  1373,  1374,  1375,  1376,  1350,   157,   228,
    1540,  1352,   467,   730,   731,  1356,   157,   603,   942,   182,
     943,  1398,  1544,  1292,   789,   790,  1547,  -653,  1544,  1550,
     271,   508,   766,  1292,   509,  1377,   613,   614,   615,   616,
     498,   686,  1143,   499,  1393,   491,   492,   510,   157,  1282,
    1158,   658,  1184,   974,   272,  1186,  1187,  1188,  1752,   305,
     306,   307,   886,   511,   887,   507,   888,   889,   890,   891,
     847,   848,   512,  1198,  1200,  1201,  1202,  1340,  1572,  1341,
    1342,  1281,   520,   521,   522,   523,   524,   525,   971,   527,
     974,  1755,   534,  1872,   514,  1657,   273,   274,   275,   276,
     277,   544,   195,   196,   197,   198,   199,   200,  1691,  1692,
     517,  1006,  1007,  1008,  1820,   518,   805,   701,   702,   703,
     704,   705,   706,   707,   708,   709,  1690,   519,   278,  1365,
    1875,  2047,  1872,  2049,  1011,  1012,   528,  1282,   886,   535,
     887,   279,   888,   889,   890,  1420,   549,   280,   553,  2099,
     554,   585,   281,   686,  1120,  1113,   555,   588,   577,   578,
     579,   580,   655,   656,   676,   677,   678,   679,   680,   681,
     682,   683,  1297,  1297,   991,   684,  1252,  1253,  1325,  1326,
     556,   991,  1354,  1355,   313,  1886,  1892,  1893,   991,   282,
    -193,  1498,   283,  2054,  2055,  2145,  2146,  1500,   994,  1544,
     463,   464,   557,   685,  1727,  1754,  -192,  1759,   589,  1119,
    1121,   595,  1866,  1134,  2134,  2135,   581,  1059,   597,  1518,
     495,   593,   594,   906,   907,   313,  1490,  -911,   700,   701,
     702,   703,   704,   705,   706,   707,   708,   709,  -782,   585,
     585,  -784,   585,  -780,   608,   588,   588,   609,   588,   610,
     611,   617,   619,   620,  1532,  1764,  1767,   622,  1767,   674,
     623,   624,   625,   626,   738,   627,   740,   741,   742,   743,
    1614,   745,   711,   747,   748,   628,   629,   630,  1553,   631,
     632,   646,   182,   157,   989,   647,   648,   662,  1281,   663,
    1571,   989,   712,   713,  1561,   714,  1607,  1608,   989,  1562,
     782,  -720,   715,   302,   157,   728,  2085,  1812,   716,  1746,
     732,   733,   813,   734,   736,   815,   739,   749,   818,   756,
    1617,   758,  1618,   759,  1619,  1624,   760,   768,  1563,  1621,
     769,   209,   784,   269,   785,   838,   814,   786,   841,   820,
     821,   832,  1564,   834,  1282,   842,  1961,   831,  1648,   852,
     853,   854,   855,   843,   844,   858,   859,   860,   861,   851,
     862,   863,   864,   675,   865,   845,   676,   677,   678,   679,
     680,   681,   682,   683,   857,   875,  1508,   684,  1871,  1565,
     876,   880,   881,   882,  1847,  1881,  1848,   904,   883,   991,
    1854,   991,  1566,   270,   911,  1553,   918,   922,  1624,   914,
     930,   651,   917,   938,   653,   897,  1624,   898,   899,   686,
     900,   939,   945,   766,   766,   675,  1712,  1702,   676,   677,
     678,   679,   680,   681,   682,   683,  1888,   923,  1509,   684,
     946,   953,   369,   955,   956,   965,  1743,  1009,  1010,  1044,
    1060,  1045,  1047,  1063,   271,  1064,  1071,   666,  1734,  1079,
    1074,  1100,  1103,   675,   -14,     1,   676,   677,   678,   679,
     680,   681,   682,   683,  1104,  1738,  1102,   684,   272,   302,
    1561,  1105,  1113,  1123,  1973,  1562,  1087,   991,  1129,  1132,
     697,   698,   699,  1935,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,  1141,  1139,  1144,  1146,  1154,   989,
     670,   989,  1185,  1140,  1563,     2,  1207,  1203,  1152,  1223,
     273,   274,   275,   276,   277,  1225,  1232,  1222,  1564,     3,
       4,     5,     6,   886,   924,   887,   925,   888,   889,   890,
     926,  1162,     7,     8,     9,    10,  1787,  1221,  1197,  1241,
     304,    11,   278,  1237,  1259,  1260,  1262,  1272,  1304,   686,
    1285,  1313,  1318,  1320,  1314,  1565,  -783,  1322,  1073,  1270,
    -785,   280,  1327,  2016,  1811,  -781,   281,  1335,  1337,  1339,
    1344,  1353,  1364,  1366,  1371,  1370,  1297,   991,  1148,  1381,
    1382,  1368,  1386,  1553,  1394,  1400,  1403,   179,  1251,    12,
    1401,  1832,  1833,  1396,  1404,  1405,  1408,  1411,  1097,  1412,
    1407,  2018,  1413,   282,   585,  1416,   283,  -815,  2024,  1417,
     588,  1423,  1425,  1452,  1459,  1426,  1429,  1424,  1427,  1435,
    2045,  1437,  1438,  1463,  1464,  1851,  1470,  1439,    13,    14,
    1457,  1857,  1471,  1888,  1472,  1888,  2111,  1477,  1493,  1480,
    1487,  1488,   412,  1868,  1489,  1495,  1135,  1136,  1137,  1138,
    1496,  1499,  1502,  1503,  1510,  1512,  1525,  1607,  1511,  1153,
    1520,  2107,  1607,  1514,  1515,  1519,  1521,  1522,  1545,  1168,
    1169,  1524,  1551,  1552,  1624,  1900,  1573,  1574,  1576,  1612,
    2116,  2017,  1609,  2100,  1625,    15,    16,   989,  1611,  1626,
    1640,  1914,  1610,  1650,  1652,    17,    18,  1664,    19,  1651,
      20,    21,    22,    23,  1665,    24,  1257,    25,  1666,  1636,
      26,    27,  1681,  1687,  1694,  1699,  1700,    28,    29,  1703,
    1705,  1710,  1936,  1724,  1726,  1729,  1732,  1704,   241,  1728,
     686,  1733,  1740,    30,  1741,  1735,    31,   157,  1711,  1739,
    1744,  1760,   585,  1745,  1763,  1762,  1747,  1768,   588,  1224,
    1770,  1773,   394,  2090,   644,   645,  1774,   581,  2140,  1775,
     649,  1868,  1776,  1771,  1779,   659,  1780,   242,  1785,  1781,
     243,  1784,  1793,  1789,    32,  1607,  1794,  1790,   603,  1802,
    1791,  1792,  1798,  1778,  1825,  1829,   684,  1834,   687,   688,
     689,   690,   691,  1826,  2153,  1846,   692,   693,   694,   695,
     696,   697,   698,   699,  1855,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   244,  1997,   245,  1570,  1865,
    1858,  1869,  1870,  1882,  1891,  1896,  1909,   246,  1912,  1913,
    1918,  1916,  1930,   157,  1917,  1931,  1932,  1933,  1939,  1940,
    2172,  1851,  1938,  1937,  1946,  2023,  1943,  1941,  1949,  2175,
    1954,  1955,  1956,  1964,  2028,   667,  1970,   752,  1974,  1607,
    1975,  1976,  1958,  1977,  1607,   752,  1984,  1323,  1991,  1989,
    1868,  1985,  1868,  1994,  1996,  1992,  1995,  1999,  2009,  2015,
    2020,  2025,  1607,  2031,  2040,  2070,  2036,  2041,  2034,  2057,
    2076,  2073,  2059,  2003,  2094,  2096,  2088,  2061,  2103,  2077,
    2091,  2108,  2062,  2109,  2089,  2105,  2117,  2060,  2129,  2120,
    2133,  2136,  2066,  2147,  2138,  2121,  2145,  2067,  2122,  2139,
    2149,  2165,  2151,  2146,  2167,  2168,  2068,  1736,  1607,  1523,
     486,  1351,   247,   248,   249,   250,   251,   252,  1607,  1357,
     603,  1385,  1336,  1258,   253,   485,  2112,  2113,  2114,  2115,
     777,  2124,  1110,   783,   300,  1359,  1737,  2164,  1835,  2143,
    2150,  2148,  2123,  1885,  2158,  1966,  1873,  1967,  2166,  1983,
    1769,  1397,  1982,  1701,   781,   165,   254,  1070,   429,  1731,
    2019,  1549,  2022,  2098,   558,   559,   560,  1723,   903,   255,
     767,  1813,  1334,  1215,  1668,   256,  1062,  1667,   257,   561,
    1607,  1492,  1607,   562,   563,   564,   327,   328,   565,   566,
     567,   568,   569,   570,   571,   572,   573,  1501,  1303,   996,
    1816,   931,   933,   933,   735,  1245,  1428,  1213,   916,   931,
    1014,   933,   574,   575,   576,  2156,  1016,  -174,  1607,  1017,
    1072,  1929,  1046,  1264,   294,   961,   962,   963,  2059,   870,
    1607,  1907,  1267,  2061,  1906,  2069,   975,  1783,  2062,  1646,
    1915,   977,   752,  2060,  1268,  1786,  1637,   921,  2066,  1993,
    1634,  2075,  2082,  2067,     0,  1005,  1005,  1005,  1005,     0,
       0,     0,  2068,     0,   951,  1018,  1019,  1020,  1021,  1022,
    1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,
    1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,     0,
       0,  1537,  1538,     0,  1051,  1051,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,   172,
     176,   982,   177,   178,     0,     0,  1567,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,  1615,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     577,   578,   579,   580,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,     0,   115,     0,   116,
       0,     0,     0,     0,     0,   117,    13,  1278,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1233,
       0,     0,     0,   931,     0,     0,     0,     0,     0,   933,
       0,     0,   752,   119,   120,     0,     0,     0,     0,     0,
     121,     0,     0,     0,   122,   123,     0,     0,     0,     0,
    1266,     0,   124,  1269,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,     0,     0,
       0,     0,     0,     0,   135,     0,     0,   136,     0,     0,
    1750,   137,     0,     0,   138,   139,     0,   140,   752,   752,
     141,     0,   142,     0,     0,     0,   143,   144,     0,     0,
    1279,     0,     0,   145,   146,   147,   148,     0,   149,     0,
     150,     0,     0,     0,     0,   151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1051,     0,  1051,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
     153,     0,     0,     0,     0,   154,   155,     0,     0,     0,
       0,     0,   558,   559,   560,     0,     0,     0,     0,     0,
       0,     0,   752,     0,   984,     0,     0,   561,     0,   752,
       0,   562,   563,   564,   327,   328,   565,   566,   567,   568,
     569,   570,   571,   572,   573,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   558,   559,   560,     0,     0,     0,
     574,   575,   576,     0,     0,     0,     0,     0,     0,   561,
       0,     0,     0,   562,   563,   564,   327,   328,   565,   566,
     567,   568,   569,   570,   571,   572,   573,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   574,   575,   576,   558,   559,   560,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     561,     0,     0,     0,   562,   563,   564,   327,   328,   565,
     566,   567,   568,   569,   570,   571,   572,   573,     0,     0,
       0,     0,   903,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   574,   575,   576,     0,     0,     0,     0,
       0,     0,  1432,     0,     0,     0,   933,     0,     0,     0,
       0,  1443,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1329,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1473,  1474,  1475,  1476,     0,     0,
    1942,     0,     0,     0,   752,     0,     0,     0,     0,     0,
    1481,   752,     0,   752,     0,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1051,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,   176,   982,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,    86,     0,  2014,    87,   577,   578,
     579,   580,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,  1765,     0,     0,     0,    98,    99,     0,
     577,   578,   579,   580,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,     0,   115,     0,   116,  1629,     0,
       0,  1443,     0,   117,     0,   983,     0,   118,     0,  1233,
       0,   577,   578,   579,   580,     0,   931,     0,     0,   931,
       3,     4,     5,     6,     0,     0,     0,     0,   752,   752,
     752,   752,     0,     7,     8,     9,    10,     0,   752,     0,
       0,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,  -230,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,  -230,     0,   141,     0,
     142,  -230,  -230,     0,   143,   144,     0,     0,     0,     0,
       0,   145,   146,   147,   148,     0,   149,     0,   150,    13,
      14,     0,     0,   151,     0,     0,     0,     0,     0,     0,
       0,     0,  1758,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -230,     0,  -230,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   984,     0,     0,     0,    15,    16,     0,     0,
       0,     0,     0,     0,     0,     0,    17,    18,  1443,    19,
       0,     0,     0,     0,     0,     0,  -230,  -230,  -230,     0,
       0,    26,    27,     0,     0,     0,     0,     0,    28,    29,
     686,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1806,  -230,  1807,  -230,    30,  1808,     0,    31,     0,     0,
    -230,  -230,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -230,   686,   903,  -230,     0,     0,   931,     0,  -230,
    1675,     0,     0,     0,  -230,     0,     0,     0,   931,     0,
       0,     0,     0,     0,   931,    32,     0,     0,   687,   688,
     689,   690,   691,     0,     0,     0,   692,   693,   694,   695,
     696,   697,   698,   699,     0,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,     0,     0,     0,     0,     0,
     687,   688,   689,   690,   691,     0,     0,     0,   692,   693,
     694,   695,   696,   697,   698,   699,  -230,   700,   701,   702,
     703,   704,   705,   706,   707,   708,   709,     0,     0,  1901,
    1629,  1629,     0,  1629,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   931,     0,     0,
       0,     0,   313,     0,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,   931,   325,   326,     0,
       0,    78,    79,     0,     0,    80,   327,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   329,   330,   331,   332,   333,   334,   335,
       0,     0,    83,     0,     0,   285,   286,   287,     0,     0,
       0,     0,   336,    84,     0,  1479,   172,   176,  1960,   177,
     178,     0,     0,  1676,  1965,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,   337,     0,     0,     0,
     338,     0,     0,    93,   339,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   340,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   341,   342,   343,   344,   345,
       0,   346,   347,   100,   101,   348,   349,   102,   350,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   351,   111,
     112,   113,   114,     0,   115,   352,   116,     0,     0,     0,
       0,     0,   117,    13,   633,     0,   118,   354,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1901,     0,     0,
    1629,     0,     0,   355,   356,     0,     0,     0,   357,   358,
     359,     0,     0,     0,     0,     0,     0,     0,   931,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,  2102,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,   634,     0,     0,
     362,   363,   364,   365,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   366,     0,     0,     0,
     367,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,   313,   370,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,     0,   325,   326,     0,
       0,    78,    79,     0,     0,    80,   327,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   329,   330,   331,   332,   333,   334,   335,
       0,     0,    83,     0,     0,   285,   286,   287,     0,     0,
       0,     0,   336,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,   337,     0,     0,     0,
     338,     0,     0,    93,   339,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   340,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   341,   342,   343,   344,   345,
       0,   346,   347,   100,   101,   348,   349,   102,   350,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   351,   111,
     112,   113,   114,     0,   115,   352,   116,     0,     0,     0,
       0,     0,   117,     0,   353,     0,   118,   354,     0,   999,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1000,
    1001,     0,     0,   355,   356,     0,     0,     0,   357,   358,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     362,   363,   364,   365,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   366,     0,     0,     0,
     367,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,   313,   370,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,     0,   325,   326,     0,
       0,    78,    79,     0,     0,    80,   327,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   329,   330,   331,   332,   333,   334,   335,
       0,     0,    83,     0,     0,   285,   286,   287,     0,     0,
       0,     0,   336,    84,     0,     0,   172,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,   337,     0,     0,     0,
     338,     0,     0,    93,   339,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   340,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   341,   342,   343,   344,   345,
       0,   346,   347,   100,   101,   348,   349,   102,   350,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   351,   111,
     112,   113,   114,     0,   115,   352,   116,     0,     0,     0,
       0,     0,   117,    13,   633,     0,   118,   354,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   355,   356,     0,     0,     0,   357,   358,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,  1751,   144,     0,     0,     0,     0,     0,
     362,   363,   364,   365,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   366,     0,     0,     0,
     367,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,   313,   370,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,     0,   325,   326,     0,
       0,    78,    79,     0,     0,    80,   327,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   329,   330,   331,   332,   333,   334,   335,
       0,     0,    83,     0,     0,   285,   286,   287,     0,     0,
       0,     0,   336,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,   337,     0,     0,     0,
     338,     0,     0,    93,   339,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   340,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   341,   342,   343,   344,   345,
       0,   346,   347,   100,   101,   348,   349,   102,   350,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   351,   111,
     112,   113,   114,     0,   115,   352,   116,     0,     0,     0,
       0,     0,   117,     0,   353,     0,   118,   354,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   355,   356,     0,     0,     0,   357,   358,
     359,     0,     0,     0,     0,     0,   360,     0,     0,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     362,   363,   364,   365,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   366,     0,     0,     0,
     367,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,   313,   370,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,     0,   325,   326,     0,
       0,    78,    79,     0,     0,    80,   327,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   329,   330,   331,   332,   333,   334,   335,
       0,     0,    83,     0,     0,   285,   286,   287,     0,     0,
       0,     0,   336,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,   337,     0,     0,     0,
     338,     0,     0,    93,   339,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   340,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   341,   342,   343,   344,   345,
       0,   346,   347,   100,   101,   348,   349,   102,   350,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   351,   111,
     112,   113,   114,     0,   115,   352,   116,     0,     0,     0,
       0,     0,   117,     0,   353,     0,   118,   354,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   355,   356,     0,     0,     0,   357,   358,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,  1217,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     362,   363,   364,   365,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   366,     0,     0,     0,
     367,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,   313,   370,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,     0,   325,   326,     0,
       0,    78,    79,     0,     0,    80,   327,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   329,   330,   331,   332,   333,   334,   335,
       0,     0,    83,     0,     0,   285,   286,   287,     0,     0,
       0,     0,   336,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,   337,     0,     0,     0,
     338,     0,     0,    93,   339,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   340,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   341,   342,   343,   344,   345,
       0,   346,   347,   100,   101,   348,   349,   102,   350,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   351,   111,
     112,   113,   114,     0,   115,   352,   116,     0,     0,     0,
       0,     0,   117,     0,   353,     0,   118,   354,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   355,   356,     0,     0,     0,   357,   358,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     362,   363,   364,   365,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   366,     0,     0,     0,
     367,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,   313,   370,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,     0,   325,   326,     0,
       0,    78,    79,     0,     0,    80,   327,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   329,   330,   331,   332,   333,   334,   335,
       0,     0,    83,     0,     0,   285,   286,   287,     0,     0,
       0,     0,   336,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
     338,     0,     0,    93,   339,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   340,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   341,   342,   343,   344,   345,
       0,   346,   347,   100,   101,   348,   349,   102,   350,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   351,   111,
     112,   113,   114,     0,   115,   352,   116,     0,     0,     0,
       0,     0,   117,     0,   643,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1817,     0,     0,
       0,     0,     0,   355,   356,     0,     0,     0,   357,   358,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     362,   363,   364,   365,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   366,     0,     0,     0,
     367,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,     0,     0,     0,     0,
    1818,     0,     0,     0,     0,     0,     0,  1819,     0,     0,
       0,     0,   313,   370,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,     0,   325,   326,     0,
       0,    78,    79,     0,     0,    80,   327,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   329,   330,   331,   332,   333,   334,   335,
       0,     0,    83,     0,     0,   285,   286,   287,     0,     0,
       0,     0,   336,    84,     0,     0,   172,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
     338,     0,     0,    93,   339,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   340,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   341,   342,   343,   344,   345,
       0,   346,   347,   100,   101,   348,   349,   102,   350,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   351,   111,
     112,   113,   114,     0,   115,   352,   116,     0,     0,     0,
       0,     0,   117,     0,   761,   762,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   355,   356,     0,     0,     0,   357,   358,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     362,   363,   364,   365,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   366,     0,     0,     0,
     367,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,   313,     0,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,     0,     0,
     325,   326,     0,   370,    78,    79,     0,     0,    80,   327,
     328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    82,     0,     0,   329,   330,   331,   332,
     333,   334,   335,     0,     0,    83,     0,     0,   285,   286,
     287,     0,     0,     0,     0,   336,    84,     0,     0,     0,
     176,     0,   177,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,   338,     0,     0,    93,   339,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,   340,    98,
      99,     0,     0,     0,     0,     0,     0,     0,   341,   342,
     343,   344,   345,     0,   346,   347,   100,   101,   348,   349,
     102,   350,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   351,   111,   112,   113,   114,     0,   115,   352,   116,
       0,     0,     0,     0,     0,   117,     0,   643,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1048,     0,     0,   355,   356,     0,     0,
       0,   357,   358,   359,     0,     0,     0,     0,     0,  1049,
       0,     0,     0,   361,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     121,     0,     0,     0,   122,   123,     0,     0,     0,     0,
       0,     0,   124,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,  1050,     0,     0,
       0,     0,     0,     0,   135,     0,     0,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,     0,   142,     0,     0,     0,   143,   144,     0,     0,
       0,     0,     0,   362,   363,   364,   365,     0,   149,     0,
     150,     0,     0,     0,     0,   151,     0,     0,     0,   366,
       0,     0,     0,   367,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
     153,     0,     0,     0,     0,   154,   155,     0,   313,     0,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,     0,     0,   325,   326,     0,   370,    78,    79,     0,
       0,    80,   327,   328,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   329,
     330,   331,   332,   333,   334,   335,     0,     0,    83,     0,
       0,   285,   286,   287,     0,     0,     0,     0,   336,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,   338,     0,     0,    93,
     339,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   340,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   341,   342,   343,   344,   345,  1628,   346,   347,   100,
     101,   348,   349,   102,   350,   103,   104,   105,   106,   107,
     108,   109,   939,   110,   351,   111,   112,   113,   114,     0,
     115,   352,   116,     0,     0,     0,     0,     0,   117,     0,
     643,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   355,
     356,     0,     0,     0,   357,   358,   359,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   361,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   362,   363,   364,   365,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   366,     0,     0,     0,   367,   368,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,   313,     0,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,     0,     0,   325,   326,     0,   370,
      78,    79,     0,     0,    80,   327,   328,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,   329,   330,   331,   332,   333,   334,   335,     0,
       0,    83,     0,     0,   285,   286,   287,     0,     0,     0,
       0,   336,    84,     0,     0,     0,   176,     0,   177,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,   338,
       0,     0,    93,   339,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,   340,    98,    99,     0,     0,     0,
       0,     0,     0,     0,   341,   342,   343,   344,   345,     0,
     346,   347,   100,   101,   348,   349,   102,   350,   103,   104,
     105,   106,   107,   108,   109,     0,   110,   351,   111,   112,
     113,   114,     0,   115,   352,   116,     0,     0,     0,     0,
       0,   117,     0,   643,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   355,   356,     0,     0,     0,   357,   358,   359,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   361,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   362,
     363,   364,   365,     0,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,   366,     0,     0,     0,   367,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,     0,     0,     0,     0,  1818,
       0,     0,     0,     0,     0,     0,  1819,     0,     0,     0,
       0,   313,   370,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,     0,     0,   325,   326,     0,     0,
      78,    79,     0,     0,    80,   327,   328,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,   329,   330,   331,   332,   333,   334,   335,     0,
       0,    83,     0,     0,   285,   286,   287,     0,     0,     0,
       0,   336,    84,     0,     0,     0,   176,     0,   177,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,   338,
       0,     0,    93,   339,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,   340,    98,    99,     0,     0,     0,
       0,     0,     0,     0,   341,   342,   343,   344,   345,     0,
     346,   347,   100,   101,   348,   349,   102,   350,   103,   104,
     105,   106,   107,   108,   109,     0,   110,   351,   111,   112,
     113,   114,     0,   115,   352,   116,     0,     0,     0,     0,
       0,   117,     0,   643,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   355,   356,     0,     0,     0,   357,   358,   359,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   361,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   362,
     363,   364,   365,     0,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,   366,     0,     0,     0,   367,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,     0,     0,     0,     0,  2083,
       0,     0,     0,     0,     0,     0,  2084,     0,     0,     0,
       0,   313,   370,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,     0,     0,   325,   326,     0,     0,
      78,    79,     0,     0,    80,   327,   328,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,   329,   330,   331,   332,   333,   334,   335,     0,
       0,    83,     0,     0,   285,   286,   287,     0,     0,     0,
       0,   336,    84,     0,     0,     0,   176,     0,   177,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,   338,
       0,     0,    93,   339,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,   340,    98,    99,     0,     0,     0,
       0,     0,     0,     0,   341,   342,   343,   344,   345,     0,
     346,   347,   100,   101,   348,   349,   102,   350,   103,   104,
     105,   106,   107,   108,   109,     0,   110,   351,   111,   112,
     113,   114,     0,   115,   352,   116,     0,     0,     0,     0,
       0,   117,     0,   643,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   355,   356,     0,     0,     0,   357,   358,   359,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   361,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   362,
     363,   364,   365,     0,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,   366,   658,     0,     0,   367,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,   313,     0,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,     0,     0,   325,
     326,     0,   370,    78,    79,     0,     0,    80,   327,   328,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    82,     0,     0,   329,   330,   331,   332,   333,
     334,   335,     0,     0,    83,     0,     0,   285,   286,   287,
       0,     0,     0,     0,   336,    84,     0,     0,     0,   176,
       0,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,   338,     0,     0,    93,   339,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,   340,    98,    99,
       0,     0,     0,     0,     0,     0,     0,   341,   342,   343,
     344,   345,     0,   346,   347,   100,   101,   348,   349,   102,
     350,   103,   104,   105,   106,   107,   108,   109,     0,   110,
     351,   111,   112,   113,   114,     0,   115,   352,   116,     0,
       0,     0,     0,     0,   117,     0,   643,   750,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   355,   356,     0,     0,     0,
     357,   358,   359,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   361,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
       0,   142,     0,     0,     0,   143,   144,     0,     0,     0,
       0,     0,   362,   363,   364,   365,     0,   149,     0,   150,
       0,     0,     0,     0,   151,     0,     0,     0,   366,     0,
       0,     0,   367,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   152,   153,
       0,     0,     0,     0,   154,   155,     0,   313,     0,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
       0,     0,   325,   326,     0,   370,    78,    79,     0,     0,
      80,   327,   328,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   329,   330,
     331,   332,   333,   334,   335,     0,     0,    83,     0,     0,
     285,   286,   287,     0,     0,     0,     0,   336,    84,     0,
       0,     0,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,   338,     0,     0,    93,   339,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     340,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     341,   342,   343,   344,   345,     0,   346,   347,   100,   101,
     348,   349,   102,   350,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   351,   111,   112,   113,   114,     0,   115,
     352,   116,     0,     0,     0,     0,     0,   117,     0,   643,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   355,   356,
       0,     0,     0,   357,   358,   359,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   361,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,  1246,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   362,   363,   364,   365,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   366,     0,     0,     0,   367,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
     313,     0,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,     0,     0,   325,   326,     0,   370,    78,
      79,     0,     0,    80,   327,   328,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,    82,     0,
       0,   329,   330,   331,   332,   333,   334,   335,     0,     0,
      83,     0,     0,   285,   286,   287,     0,     0,     0,     0,
     336,    84,     0,     0,   172,   176,     0,   177,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,   338,     0,
       0,    93,   339,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,   340,    98,    99,     0,     0,     0,     0,
       0,     0,     0,   341,   342,   343,   344,   345,     0,   346,
     347,   100,   101,   348,   349,   102,   350,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   351,   111,   112,   113,
     114,     0,   115,   352,   116,     0,     0,     0,     0,     0,
     117,     0,   761,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   355,   356,     0,     0,     0,   357,   358,   359,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   361,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,     0,   142,     0,     0,
       0,   143,   144,     0,     0,     0,     0,     0,   362,   363,
     364,   365,     0,   149,     0,   150,     0,     0,     0,     0,
     151,     0,     0,     0,   366,     0,     0,     0,   367,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   152,   153,     0,     0,     0,     0,
     154,   155,     0,   313,     0,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,     0,     0,   325,   326,
       0,   370,    78,    79,     0,     0,    80,   327,   328,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,   329,   330,   331,   332,   333,   334,
     335,     0,     0,    83,     0,     0,   285,   286,   287,     0,
       0,     0,     0,   336,    84,     0,     0,     0,   176,     0,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,  1441,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,   338,     0,     0,    93,   339,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,   340,    98,    99,     0,
       0,     0,     0,     0,     0,     0,   341,   342,   343,   344,
     345,     0,   346,   347,   100,   101,   348,   349,   102,   350,
     103,   104,   105,   106,   107,   108,   109,     0,   110,   351,
     111,   112,   113,   114,     0,   115,   352,   116,     0,     0,
       0,     0,     0,   117,     0,   643,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   355,   356,     0,     0,     0,   357,
     358,   359,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   361,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,  1442,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   362,   363,   364,   365,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,   366,     0,     0,
       0,   367,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,   313,     0,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
       0,   325,   326,     0,   370,    78,    79,     0,     0,    80,
     327,   328,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,   329,   330,   331,
     332,   333,   334,   335,     0,     0,    83,     0,     0,   285,
     286,   287,     0,     0,     0,     0,   336,    84,     0,     0,
       0,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,   338,     0,     0,    93,   339,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   340,
      98,    99,     0,     0,     0,     0,     0,     0,     0,   341,
     342,   343,   344,   345,     0,   346,   347,   100,   101,   348,
     349,   102,   350,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   351,   111,   112,   113,   114,     0,   115,   352,
     116,     0,     0,     0,     0,     0,   117,     0,   643,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   355,   356,     0,
       0,     0,   357,   358,   359,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   361,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   362,   363,   364,   365,     0,   149,
       0,   150,     0,     0,     0,     0,   151,     0,     0,     0,
     366,  1755,     0,     0,   367,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,   313,
       0,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,     0,     0,   325,   326,     0,   370,    78,    79,
       0,     0,    80,   327,   328,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,    82,     0,     0,
     329,   330,   331,   332,   333,   334,   335,     0,     0,    83,
       0,     0,   285,   286,   287,     0,     0,     0,     0,   336,
      84,     0,     0,     0,   176,     0,   177,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,   338,     0,     0,
      93,   339,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,   340,    98,    99,     0,     0,     0,     0,     0,
       0,     0,   341,   342,   343,   344,   345,  1628,   346,   347,
     100,   101,   348,   349,   102,   350,   103,   104,   105,   106,
     107,   108,   109,     0,   110,   351,   111,   112,   113,   114,
       0,   115,   352,   116,     0,     0,     0,     0,     0,   117,
       0,   643,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     355,   356,     0,     0,     0,   357,   358,   359,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   361,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,   121,     0,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,   124,     0,     0,   125,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
       0,   134,     0,     0,     0,     0,     0,     0,   135,     0,
       0,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,     0,   142,     0,     0,     0,
     143,   144,     0,     0,     0,     0,     0,   362,   363,   364,
     365,     0,   149,     0,   150,     0,     0,     0,     0,   151,
       0,     0,     0,   366,     0,     0,     0,   367,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   152,   153,     0,     0,     0,     0,   154,
     155,     0,   313,     0,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,     0,   325,   326,     0,
     370,    78,    79,     0,     0,    80,   327,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   329,   330,   331,   332,   333,   334,   335,
       0,     0,    83,     0,     0,   285,   286,   287,     0,     0,
       0,     0,   336,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
     338,     0,     0,    93,   339,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   340,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   341,   342,   343,   344,   345,
       0,   346,   347,   100,   101,   348,   349,   102,   350,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   351,   111,
     112,   113,   114,     0,   115,   352,   116,     0,     0,     0,
       0,     0,   117,     0,   643,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   355,   356,     0,     0,     0,   357,   358,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     362,   363,   364,   365,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   366,     0,     0,     0,
     367,   368,     0,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
      78,    79,   154,   155,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     3,     4,  1577,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,  1578,
       0,     0,    86,     0,     0,  1579,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,   686,     0,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,     0,   115,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,     0,   118,     0,     0,     0,   687,
     688,   689,   690,   691,     0,     0,     0,   692,   693,   694,
     695,   696,   697,   698,   699,     0,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   709,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,    15,
     122,   123,     0,     0,     0,     0,     0,     0,   124,    17,
    1581,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,    26,    27,     0,     0,     0,     0,
     135,    28,    29,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,    30,   142,  1582,
      31,     0,   143,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,     0,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,  1583,     0,     0,  2037,     0,
       0,  1584,  2038,  -352,     0,     0,     0,     0,    32,    72,
      73,    74,    75,    76,    77,   152,   153,     0,     0,     0,
       0,   154,   155,     0,  1255,     0,    78,    79,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     3,
       4,  1577,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1578,     0,     0,    86,     0,
       0,  1579,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,   686,     0,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
       0,   118,     0,     0,     0,   687,   688,   689,   690,   691,
       0,     0,     0,   692,   693,   694,   695,   696,   697,   698,
     699,     0,   700,   701,   702,   703,   704,   705,   706,   707,
     708,   709,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,    15,   122,   123,     0,     0,
       0,     0,     0,  1580,   124,    17,  1581,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
      26,    27,     0,     0,     0,     0,   135,    28,    29,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,    30,   142,  1582,    31,     0,   143,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,  1583,     0,     0,     0,     0,     0,  1584,     0,     0,
       0,     0,  1585,     0,    32,    72,    73,    74,    75,    76,
      77,   152,   153,     0,     0,     0,     0,   154,   155,     0,
    1271,     0,    78,    79,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     3,     4,  1577,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,  1578,     0,     0,    86,     0,     0,  1579,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,   686,     0,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,     0,   115,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,     0,   118,     0,     0,
       0,   687,   688,   689,   690,   691,     0,     0,     0,   692,
     693,   694,   695,   696,   697,   698,   699,     0,   700,   701,
     702,   703,   704,   705,   706,   707,   708,   709,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,    15,   122,   123,     0,     0,     0,     0,     0,  1883,
     124,    17,  1581,  1884,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,    26,    27,     0,     0,
       0,     0,   135,    28,    29,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,    30,
     142,  1582,    31,     0,   143,   144,     0,     0,     0,     0,
       0,   145,   146,   147,   148,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,  1583,     0,     0,
       0,     0,     0,  1584,     0,     0,     0,     0,  1585,     0,
      32,    72,    73,    74,    75,    76,    77,   152,   153,     0,
       0,     0,     0,   154,   155,     0,  1671,     0,    78,    79,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,  1204,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     3,     4,  1577,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,  1578,     0,     0,
      86,     0,     0,  1579,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,     0,     0,    95,    96,    97,   686,
       0,     0,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   102,     0,   103,   104,   105,   106,
     107,   108,   109,     0,   110,     0,   111,   112,   113,   114,
       0,   115,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,     0,   118,     0,     0,     0,   687,   688,   689,
     690,   691,     0,     0,     0,   692,   693,   694,   695,   696,
     697,   698,   699,     0,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,     0,     0,     0,     0,     0,     0,
    1205,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,   121,     0,     0,    15,   122,   123,
       0,     0,     0,     0,     0,     0,   124,    17,  1581,   125,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
       0,   134,    26,    27,     0,     0,     0,     0,   135,    28,
      29,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,    30,   142,  1582,    31,     0,
     143,   144,     0,     0,     0,     0,     0,   145,   146,   147,
     148,     0,   149,     0,   150,     0,     0,     0,     0,   151,
       0,     0,     0,  1583,     0,     0,     0,     0,     0,  1584,
       0,  -352,     0,     0,     0,     0,    32,    72,    73,    74,
      75,    76,    77,   152,   153,     0,     0,     0,     0,   154,
     155,     0,     0,     0,    78,    79,     0,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     3,     4,  1577,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1578,     0,     0,    86,     0,     0,  1579,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,     0,   686,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,     0,   115,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,     0,   118,
       0,     0,     0,     0,   687,   688,   689,   690,   691,     0,
       0,     0,   692,   693,   694,   695,   696,   697,   698,   699,
       0,   700,   701,   702,   703,   704,   705,   706,   707,   708,
     709,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     121,     0,     0,    15,   122,   123,     0,     0,     0,     0,
       0,     0,   124,    17,  1581,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,    26,    27,
       0,     0,     0,     0,   135,    28,    29,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,    30,   142,  1582,    31,     0,   143,   144,     0,     0,
       0,     0,     0,   145,   146,   147,   148,     0,   149,  2035,
     150,     0,     0,     0,     0,   151,     0,     0,     0,  1583,
       0,     0,     0,     0,     0,  1584,     0,     0,     0,     0,
       0,  2110,    32,    72,    73,    74,    75,    76,    77,   152,
     153,     0,     0,     0,     0,   154,   155,     0,     0,     0,
      78,    79,     0,     0,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     3,     4,  1577,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,  1578,
       0,     0,    86,     0,     0,  1579,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,   686,     0,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,     0,   115,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,     0,   118,     0,     0,     0,   687,
     688,   689,   690,   691,     0,     0,     0,   692,   693,   694,
     695,   696,   697,   698,   699,     0,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   709,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,    15,
     122,   123,     0,     0,     0,     0,     0,     0,   124,    17,
    1581,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,    26,    27,     0,     0,     0,     0,
     135,    28,    29,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,    30,   142,  1582,
      31,     0,   143,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,   971,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,  1583,     0,     0,     0,     0,
       0,  1584,    72,    73,    74,    75,    76,    77,    32,     0,
       0,     0,     0,     0,     0,   152,   153,     0,     0,    78,
      79,   154,   155,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     3,     4,  1577,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,  1578,     0,
       0,    86,     0,     0,  1579,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
     686,     0,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,     0,   115,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   118,     0,     0,     0,   687,   688,
     689,   690,   691,     0,     0,     0,   692,   693,   694,   695,
     696,   697,   698,   699,     0,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,    17,  1581,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,    27,     0,     0,     0,     0,   135,
      28,    29,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,    30,   142,  1582,     0,
       0,   143,   144,     0,     0,     0,     0,     0,   145,   146,
     147,   148,  1875,   149,     0,   150,     0,     0,     0,     0,
     151,     0,     0,     0,  1583,     0,     0,     0,     0,     0,
    1584,     0,     0,     0,     0,  2058,     0,    32,    72,    73,
      74,    75,    76,    77,   152,   153,     0,     0,     0,     0,
     154,   155,     0,     0,     0,    78,    79,     0,     0,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     3,     4,
    1577,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1578,     0,     0,    86,     0,     0,
    1579,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,     0,     0,    95,    96,    97,     0,   686,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   102,     0,   103,   104,   105,   106,   107,   108,   109,
       0,   110,     0,   111,   112,   113,   114,     0,   115,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,     0,     0,   687,   688,   689,   690,   691,
       0,     0,     0,   692,   693,   694,   695,   696,   697,   698,
     699,     0,   700,   701,   702,   703,   704,   705,   706,   707,
     708,   709,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,    17,  1581,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,   710,
      27,     0,     0,     0,     0,   135,    28,    29,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,    30,   142,  1582,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,     0,     0,     0,
    1583,     0,     0,     0,     0,     0,  1584,     0,     0,     0,
       0,     0,  2157,    32,     0,     0,     0,     0,     0,     0,
     152,   153,     0,     0,     0,     0,   154,   155,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,     0,    78,    79,     0,     0,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,   243,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,  1307,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,     0,     0,    95,    96,    97,   686,     0,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   102,     0,   103,   104,   105,   106,   107,   108,   109,
       0,   110,     0,   111,   112,   113,   114,     0,   115,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,     0,   687,   688,   689,   690,   691,     0,
       0,     0,   692,   693,   694,   695,   696,   697,   698,   699,
       0,   700,   701,   702,   703,   704,   705,   706,   707,   708,
     709,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   296,   297,   249,   250,   251,   252,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   298,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,     0,    80,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,   285,   286,
     287,     0,     0,     0,     0,     0,   288,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,  1673,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,     0,   686,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,  1674,   115,     0,   116,
       0,     0,     0,     0,     0,   117,     0,   289,     0,   118,
       0,     0,     0,     0,   687,   688,   689,   690,   691,     0,
       0,     0,   692,   693,   694,   695,   696,   697,   698,   699,
       0,   700,   701,   702,   703,   704,   705,   706,   707,   708,
     709,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     121,     0,     0,     0,   122,   123,     0,     0,     0,     0,
       0,     0,   124,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,     0,     0,
       0,     0,     0,     0,   135,     0,     0,   290,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     291,     0,   142,     0,     0,     0,   143,   144,     0,     0,
       0,   686,     0,   145,   292,   147,   148,     0,   149,     0,
     150,     0,     0,     0,     0,   151,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,     0,     0,    80,     0,   152,
     153,     0,     0,     0,     0,   154,   155,     0,     0,    81,
       0,  1256,    82,     0,     0,     0,     0,     0,     0,   687,
     688,   689,   690,   691,    83,     0,     0,   692,   693,   694,
     695,   696,   697,   698,   699,    84,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   709,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,     0,
       0,    95,    96,    97,     0,   686,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,     0,   102,
       0,   103,   104,   105,   106,   107,   108,   109,     0,   110,
       0,   111,   112,   113,   114,  1627,   115,     0,   778,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   118,     0,
       0,     0,     0,   687,   688,   689,   690,   691,     0,     0,
       0,   692,   693,   694,   695,   696,   697,   698,   699,     0,
     700,   701,   702,   703,   704,   705,   706,   707,   708,   709,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,   447,   448,   449,   450,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
       0,   142,     0,     0,     0,   779,   144,     0,     0,     0,
       0,     0,   145,   146,   147,   148,     0,   149,     0,   150,
       0,     0,     0,     0,   151,    72,    73,    74,  1055,  1056,
    1057,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,    80,     0,   152,   153,
       0,     0,     0,     0,   154,   155,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,   176,     0,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,     0,    98,    99,     0,
       0,     0,     0,   686,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,     0,   115,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   687,   688,   689,   690,   691,     0,     0,     0,   692,
     693,   694,   695,   696,   697,   698,   699,  1058,   700,   701,
     702,   703,   704,   705,   706,   707,   708,   709,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
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
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
      96,    97,     0,   686,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,     0,     0,   102,     0,   103,
     104,   105,   106,   107,   108,   109,     0,   110,     0,   111,
     112,   113,   114,  1672,   115,     0,   116,     0,     0,     0,
       0,     0,   117,     0,   617,     0,   118,     0,     0,     0,
       0,   687,   688,   689,   690,   691,     0,     0,     0,   692,
     693,   694,   695,   696,   697,   698,   699,     0,   700,   701,
     702,   703,   704,   705,   706,   707,   708,   709,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,     0,   149,     0,   150,     0,     0,
       0,     0,   151,    72,    73,    74,  1055,  1056,  1057,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,    80,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,  1516,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,     0,   149,     0,   150,     0,     0,     0,
       0,   151,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,     0,     0,    80,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,   176,     0,   177,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
       0,   686,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,  1678,   115,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   118,     0,     0,     0,     0,   687,
     688,   689,   690,   691,     0,     0,     0,   692,   693,   694,
     695,   696,   697,   698,   699,     0,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   709,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,     0,   142,     0,     0,
       0,   143,   144,     0,     0,     0,     0,     0,   145,   146,
     147,   148,     0,   149,     0,   150,     0,     0,     0,     0,
     151,    72,    73,    74,  1055,  1056,  1057,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,    80,     0,   152,   153,     0,     0,     0,     0,
     154,   155,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,   176,     0,   177,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,     0,     0,    95,    96,    97,     0,
     686,     0,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   102,     0,   103,   104,   105,   106,
     107,   108,   109,     0,   110,     0,   111,   112,   113,   114,
    1925,   115,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,     0,   118,     0,     0,     0,     0,   687,   688,
     689,   690,   691,     0,     0,     0,   692,   693,   694,   695,
     696,   697,   698,   699,     0,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,   172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,     0,     0,    95,    96,    97,     0,   686,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,     0,   102,     0,   103,   104,   105,   106,   107,
     108,   109,     0,   110,     0,   111,   112,   113,   114,  1926,
     115,     0,   116,     0,     0,     0,     0,     0,   117,     0,
      14,     0,   118,     0,     0,     0,     0,   687,   688,   689,
     690,   691,     0,     0,     0,   692,   693,   694,   695,   696,
     697,   698,   699,     0,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,   686,     0,   145,   146,   147,   148,
       0,   149,     0,   150,     0,     0,     0,     0,   151,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,     0,     0,
      80,     0,   152,   153,  1927,     0,     0,     0,   154,   155,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,     0,   687,   688,   689,   690,   691,    83,     0,     0,
     692,   693,   694,   695,   696,   697,   698,   699,    84,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   709,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,  1387,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,  1358,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,     0,     0,    80,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
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
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,   489,   142,     0,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,     0,    80,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,   117,     0,   289,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
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
     153,     0,     0,     0,     0,   154,   155,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,   670,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
       0,   142,     0,     0,     0,   143,   144,     0,     0,     0,
       0,     0,   145,   146,   147,   148,     0,   149,     0,   150,
       0,     0,     0,     0,   151,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,    80,     0,   152,   671,
       0,     0,     0,     0,   154,   155,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,  1155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
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
     119,   120,     0,     0,     0,     0,     0,   121,     0,  1358,
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
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,     0,   149,     0,   150,     0,     0,     0,
       0,   151,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,     0,     0,    80,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,    81,     0,     0,    82,     0,
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
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,     0,   142,     0,     0,
       0,   193,   144,     0,     0,     0,     0,     0,   145,   146,
     147,   148,     0,   149,     0,   150,     0,     0,     0,     0,
     151,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,    80,     0,   152,   153,     0,     0,     0,     0,
     154,   155,     0,     0,    81,     0,     0,    82,     0,     0,
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
       0,     0,     0,     0,   835,     0,     0,     0,   122,   123,
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
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   145,   146,   147,   148,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,  1295,     0,     0,     0,     0,   154,   155
};

static const yytype_int16 yycheck[] =
{
       4,    38,   426,   311,   172,     9,     0,   232,   442,    13,
     171,     0,   230,   824,    18,    19,     0,   792,    37,   622,
     337,     0,   183,    27,   579,  1127,     0,   630,   988,   817,
      25,     0,   301,    37,    38,   458,   716,   470,   301,   619,
       0,   202,   203,   722,  1400,     0,   821,   208,   301,   595,
    1429,  1121,   666,   353,   354,    11,    14,     3,   459,     0,
      28,    11,  1009,  1010,    14,   578,   624,    71,   990,   369,
     983,   313,   314,   315,   632,   935,   353,   937,  1148,   491,
     595,   479,   843,   844,   845,   798,   799,    86,   948,    16,
     112,   804,   669,    59,   224,   654,     0,   176,  1717,   105,
    1241,   534,    84,   112,     3,   111,   271,   112,    56,   112,
       0,  1499,     5,     6,     7,     8,     9,    10,     3,   191,
     362,    56,   160,  1502,    18,    20,   175,   181,   110,    24,
      25,  1510,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    67,   275,   276,   277,   153,   279,   280,
     281,    65,   283,    84,   160,   175,   267,   161,   162,    54,
      55,  1781,  1383,   167,  1784,   176,     0,   112,   410,   411,
     181,    85,   174,     3,     5,     6,     7,     8,     9,    10,
     111,   116,  1383,   255,   349,   741,   742,   743,   176,   193,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     255,   225,   226,   227,   184,   185,   186,   187,   188,   184,
     185,   186,   187,   188,  1986,    42,    43,   554,   242,  1858,
     663,   756,   246,   184,   185,   186,   187,   188,   181,   253,
     254,   175,   798,   799,   222,   309,   498,   284,   804,   263,
     264,   265,   266,   267,   268,   269,   270,   161,   135,   273,
     349,   181,   230,    11,   278,   500,   175,    84,   282,   556,
     184,   185,   186,   187,   188,   289,   290,   291,    11,    27,
     174,  1760,   311,    67,   184,   185,   186,   187,   188,  1687,
     724,   350,   858,   859,   860,   861,   333,   311,   312,   194,
     195,   349,   260,   261,   176,   174,  1276,   176,   719,    67,
     597,  1462,   328,   176,   176,   884,   885,   349,   294,    67,
     350,   608,   609,   633,   767,   169,   891,   341,  1559,   916,
     349,   944,   256,   349,   349,   175,   349,   349,   347,   284,
     184,   185,   186,   187,   188,  1277,   633,   487,  1559,   341,
      67,   349,   111,   524,   346,  1278,   643,   284,  1048,   373,
    1050,  1991,   181,   176,   674,   675,   309,     0,   324,   892,
     384,   658,  1242,   276,   684,  1245,    67,    82,   786,   787,
    2142,  1104,   950,  1154,   806,   322,   911,   528,   354,  1778,
     174,   175,   112,  1872,   354,  1761,   316,   426,  2027,  1878,
    1766,   170,   171,   172,    67,   657,   333,  2004,   313,   852,
     853,   854,   855,    87,   323,   349,   174,   175,   175,   862,
     863,   864,   263,   437,   175,   266,   174,   175,   442,    65,
      66,   445,    68,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   175,   117,   349,   459,   120,   121,   122,   123,
     124,   125,    59,   353,   128,   349,    84,   174,   175,   175,
     175,    80,   279,   508,   509,   510,   511,   481,    65,    66,
      67,    68,   176,   518,   761,     3,  2073,   349,   176,   493,
     349,    88,   496,  1962,   175,   499,   349,   349,   236,  1569,
     309,  1502,  1971,    88,   181,   254,   254,   749,   466,  1510,
     478,   515,   516,   517,   288,   519,   176,  1073,   176,   353,
     557,   174,   175,  1879,  1471,  1472,   530,   531,   532,   533,
     953,   756,   536,   537,   538,   539,   805,   541,   542,   543,
     288,   545,   805,   112,     0,   549,   349,   254,   442,    87,
      17,   555,   805,   557,   823,   173,   181,   267,  1104,   960,
     823,   184,   185,   186,   187,   188,  2035,   305,  2037,   176,
     823,   176,    65,    66,    67,    68,   176,   581,   127,   117,
    1440,   288,   120,   121,   122,   123,   124,   125,   176,    56,
     128,  1451,    59,   111,   353,   820,   176,   914,  1458,  1865,
    1279,   176,   151,   350,   191,   874,   176,   915,   176,   350,
      67,   874,  1168,   176,   176,    84,   176,  1197,    16,   176,
     174,   874,     5,     6,     7,     8,     9,    10,   111,   176,
     111,   257,   309,    67,   176,   288,   270,   104,   176,   106,
     917,   883,  1322,   176,   350,   350,   129,     0,   176,   116,
     135,   134,   813,    85,   176,   349,   651,   818,   653,   959,
    1083,   349,   666,   667,   328,   982,   253,   671,  2137,  1227,
     257,  1285,    70,    71,    72,   633,    74,    75,  1292,    77,
     980,     3,    65,    66,    67,    68,   911,   176,   191,   349,
     277,   349,     3,   162,   116,   178,   165,   178,   267,  1016,
     271,    21,    22,  1003,     3,   259,    84,   135,  1974,   713,
    1976,   715,   144,  1013,  1014,   719,   720,   174,   175,   286,
    1680,   305,   112,   100,   966,   279,   968,   617,   184,   185,
     186,   187,   188,   320,   111,   739,  1169,   321,   733,   279,
     174,   175,   349,   633,   349,   167,   229,   230,   229,   349,
    1852,  1853,   255,   643,   221,   222,   223,   224,   225,   226,
     253,   349,   720,   129,   257,   167,   233,     5,   134,   349,
     168,   254,   666,    11,   349,   779,   103,   155,   349,   349,
     158,   349,   349,   617,   277,   175,   349,   349,  1105,   349,
     328,   274,   349,   274,   277,   111,   277,     3,   265,   633,
     111,   178,   349,   761,   287,  1074,   287,   349,   191,   643,
     192,  1074,   234,   235,   236,   237,   349,   284,   111,   713,
     287,   349,   327,   827,   828,   829,   830,   349,   116,   230,
     103,   835,   234,   235,   236,   237,   840,   153,   842,   843,
     844,   845,  1265,   170,   171,   172,   850,   851,    54,  1272,
     116,  1274,   174,   175,  1457,   175,   278,  1460,  1100,   326,
     349,   167,   284,   285,   230,  1420,   154,   289,   156,   275,
     253,   761,   270,   176,   257,   174,   175,   254,   181,  1493,
    1105,  1495,   350,   284,   285,   178,   881,   256,   254,  1158,
     156,    68,    39,    40,   277,  1158,   915,   170,   171,   172,
    1301,   175,   897,   176,   326,  1158,   258,  1132,   160,   350,
     279,   915,    89,   256,   918,    57,   160,  1350,  1351,  1352,
    1321,    63,   274,     4,   176,    72,   930,   761,   234,   235,
     236,   237,   176,   175,   938,   287,   279,   320,    19,   282,
     283,   945,  1730,  1731,  1162,  1709,    27,   905,   906,   907,
     176,  1715,  1221,  1222,   175,   181,   960,   179,  1221,  1222,
     182,   183,   184,   185,   186,   187,   188,   189,  1221,  1222,
     349,   193,     5,     6,     7,   170,   171,   172,   982,   983,
     270,   176,   231,   289,   988,   989,   990,    20,   136,   286,
      71,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,   117,   118,   256,   120,   121,
     122,   123,   124,   125,   263,   264,   128,   118,   119,    56,
      53,    54,    55,   329,   349,    70,    71,    72,   353,    74,
      75,    76,    77,   282,   239,    70,    71,    72,   243,    74,
      75,    89,    77,   111,    92,   349,  1469,  1470,   221,   222,
      98,  1009,  1010,   221,   222,    89,  1479,    70,    71,    72,
    1064,   271,    96,    97,    77,  1307,    88,  1681,   216,   217,
     218,   219,   220,   271,  1978,  1079,  1980,  1981,  1982,   116,
    1855,   162,   150,   267,   152,   153,   184,   185,   982,   983,
     188,    42,    43,   983,  1363,  1698,    83,    84,  1102,  1103,
    1363,   267,  1344,  1135,  1136,  1137,  1138,  1111,  1112,    11,
    1363,  1115,   193,    90,    91,  1119,  1120,  1121,   154,  1123,
     156,  1153,  1364,   168,   260,   261,  1368,   349,  1370,  1371,
     167,   284,  1090,   168,   284,  1139,   332,   333,   334,   335,
     267,   136,  1146,   267,  1148,   226,   227,   284,  1152,   983,
    1154,   308,   876,   310,   191,   879,   880,   881,  1582,   170,
     171,   172,   295,   284,   297,   246,   299,   300,   301,   302,
     331,   332,   253,   897,   898,   899,   900,  1096,  1396,  1098,
    1099,  1071,   263,   264,   265,   266,   267,   268,   308,   270,
     310,   308,   273,   310,   313,  1798,   233,   234,   235,   236,
     237,   282,     5,     6,     7,     8,     9,    10,  1508,  1509,
     326,   677,   678,   679,  1817,   284,   328,   212,   213,   214,
     215,   216,   217,   218,   219,   220,  1503,   235,   265,  1123,
     308,  1975,   310,  1977,   101,   102,   235,  1071,   295,   313,
     297,   278,   299,   300,   301,   302,   228,   284,   303,  2024,
     179,  1520,   289,   136,   284,   285,   179,  1520,   291,   292,
     293,   294,   194,   195,   182,   183,   184,   185,   186,   187,
     188,   189,  1276,  1277,  1278,   193,   186,   187,    94,    95,
     179,  1285,    90,    91,     3,     4,   335,   336,  1292,   326,
     284,  1295,   329,   333,   334,    65,    66,  1301,  1302,  1541,
     186,   187,   349,   384,  1546,  1582,   284,  1584,   105,   811,
     812,   304,  1746,  2124,  2097,  2098,   349,  1321,   290,  1323,
    1278,   306,   307,   593,   594,     3,  1284,     3,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   175,  1608,
    1609,   175,  1611,   175,   175,  1608,  1609,   175,  1611,    22,
     175,   175,   175,   127,  1358,  1608,  1609,   175,  1611,   192,
     175,   175,   175,   175,   445,   175,   447,   448,   449,   450,
    1407,   452,   339,   454,   455,   175,   175,   175,  1382,   175,
     175,   175,  1386,  1387,  1278,   175,   175,   175,  1278,   175,
    1394,  1285,   350,   349,  1383,   175,  1400,  1401,  1292,  1383,
     481,   339,   175,  1407,  1408,   286,  2009,  1684,   175,  1577,
      93,    99,   493,   349,   328,   496,   235,   268,   499,   306,
    1415,   135,  1417,   135,  1419,  1429,   135,   131,  1383,  1424,
     131,   320,   113,    56,   113,   516,   176,   112,   519,   305,
     174,   174,  1383,   178,  1278,   175,  1870,   239,  1452,   530,
     531,   532,   533,   175,   175,   536,   537,   538,   539,   235,
     541,   542,   543,   179,   545,   175,   182,   183,   184,   185,
     186,   187,   188,   189,   107,   175,   192,   193,  1755,  1383,
     175,   175,   175,    38,  1726,  1762,  1728,   169,   175,  1493,
    1732,  1495,  1386,   116,   305,  1499,   350,    23,  1502,   179,
     113,   175,   179,   240,   175,   175,  1510,   175,   175,   136,
     175,   157,   240,  1471,  1472,   179,  1535,  1521,   182,   183,
     184,   185,   186,   187,   188,   189,  1768,   176,   192,   193,
       3,   175,   352,   176,   176,   174,  1573,   175,   175,   175,
     288,   207,   176,    83,   167,    80,   175,   112,  1552,   350,
     175,   262,   278,   179,     0,     1,   182,   183,   184,   185,
     186,   187,   188,   189,   105,  1569,   286,   193,   191,  1573,
    1559,   174,   285,   112,  1882,  1559,   245,  1581,   321,   174,
     207,   208,   209,  1825,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   107,   240,   254,   228,   175,  1493,
     181,  1495,    23,   266,  1559,    51,   105,   349,   270,   112,
     233,   234,   235,   236,   237,   160,   175,   349,  1559,    65,
      66,    67,    68,   295,   296,   297,   298,   299,   300,   301,
     302,   328,    78,    79,    80,    81,  1640,   328,   286,   148,
     103,    87,   265,   349,   176,   292,   176,   349,   110,   136,
     349,   111,   176,   176,   340,  1559,   175,   349,   739,   319,
     175,   284,    89,  1940,  1683,   175,   289,   266,   112,   263,
     262,    91,   112,   111,   262,   112,  1680,  1681,   175,    20,
     273,   322,   236,  1687,   100,   176,   176,  1581,   349,   135,
     349,  1710,  1711,   328,   176,   176,   270,   176,   779,   176,
     330,  1943,   176,   326,  1973,   176,   329,   286,  1950,   349,
    1973,   176,   176,   328,   105,   176,   175,   349,   176,   176,
    1973,   176,   176,   176,   163,  1729,   175,   349,   174,   175,
     349,  1735,   175,  1975,   175,  1977,  2044,   303,    76,   319,
     176,   176,  1746,  1747,   176,    76,   827,   828,   829,   830,
      73,   175,   105,   109,   105,   103,    16,  1761,   176,   840,
     349,  2038,  1766,   176,   176,   176,   350,   271,   328,   850,
     851,   271,   270,   279,  1778,  1779,   175,   270,   176,   174,
    2057,  1942,   238,  2025,   176,   231,   232,  1681,   238,   176,
     328,  1795,   243,   145,   176,   241,   242,   286,   244,   145,
     246,   247,   248,   249,   176,   251,   112,   253,   176,   254,
     256,   257,    76,   175,   105,   176,   176,   263,   264,   336,
     254,   269,  1826,    84,   349,   175,   240,   279,    17,   349,
     136,     3,     3,   279,   174,   349,   282,  1841,   269,   272,
      78,   317,  2111,   239,   351,   315,   240,     5,  2111,   930,
     229,   176,  1746,  2014,   355,   356,   176,   349,  2111,   176,
     361,  1865,   176,   338,   350,   366,   175,    56,   176,   349,
      59,   349,   176,   270,   320,  1879,   176,   270,  1882,   164,
     270,   270,   349,   349,   262,   111,   193,   130,   194,   195,
     196,   197,   198,   278,  2136,   230,   202,   203,   204,   205,
     206,   207,   208,   209,   174,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   104,  1920,   106,   174,   240,
     175,   175,   175,   175,   271,   113,   111,   116,   111,   111,
     176,   270,   333,  1937,   270,   344,   344,   342,   111,   175,
    2165,  1945,   328,   277,     3,  1949,   349,   269,   278,  2174,
     173,    86,    86,   319,  1958,   267,   135,   458,   240,  1963,
       5,   240,   350,     5,  1968,   466,   337,   350,   349,   328,
    1974,   308,  1976,   153,   158,   156,   153,     3,   192,   131,
      60,   262,  1986,   176,   135,  1989,   319,   319,   307,   175,
     158,   161,  1986,   155,   114,    61,   345,  1986,   135,  2003,
     175,   319,  1986,   319,   333,   307,   317,  1986,   270,   333,
      62,   262,  1986,   270,   313,   343,    65,  1986,   344,   315,
     270,   175,   325,    66,   135,    41,  1986,  1559,  2032,  1337,
     222,  1112,   221,   222,   223,   224,   225,   226,  2042,  1120,
    2044,  1146,  1093,   349,   233,   221,  2050,  2051,  2052,  2053,
     480,  2091,   806,   482,    38,  1121,  1569,  2146,  1715,  2123,
    2131,  2130,  2090,  1766,  2142,  1877,  1757,  1877,  2154,  1894,
    1611,  1152,  1893,  1520,   481,     8,   265,   734,   165,  1549,
    1945,  1370,  1948,  2022,     5,     6,     7,  1541,   589,   278,
     467,  1686,  1090,   915,  1470,   284,   724,  1469,   287,    20,
    2104,  1289,  2106,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,  1302,   992,   670,
    1694,   622,   623,   624,   437,   952,  1203,   912,   600,   630,
     683,   632,    53,    54,    55,  2139,   684,   326,  2142,   685,
     736,  1817,   713,   969,    37,   646,   647,   648,  2142,   553,
    2154,  1784,   973,  2142,  1782,  1988,   661,  1632,  2142,  1450,
    1798,   662,   663,  2142,   973,  1639,  1442,   609,  2142,  1914,
    1439,  2000,  2008,  2142,    -1,   676,   677,   678,   679,    -1,
      -1,    -1,  2142,    -1,   631,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   709,    -1,
      -1,   132,   133,    -1,   715,   716,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    71,    -1,    -1,  1387,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,  1408,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
      -1,    -1,   120,   121,   122,    -1,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,    -1,   144,   145,    -1,    -1,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,    -1,   160,   161,   162,   163,    -1,   165,    -1,   167,
      -1,    -1,    -1,    -1,    -1,   173,   174,   175,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   940,
      -1,    -1,    -1,   944,    -1,    -1,    -1,    -1,    -1,   950,
      -1,    -1,   953,   221,   222,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,
     971,    -1,   240,   974,    -1,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,
    1581,   269,    -1,    -1,   272,   273,    -1,   275,  1009,  1010,
     278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,
     288,    -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,
     298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1048,    -1,  1050,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1083,    -1,   352,    -1,    -1,    20,    -1,  1090,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,  1203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,  1223,    -1,    -1,    -1,  1227,    -1,    -1,    -1,
      -1,  1232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1255,  1256,  1257,  1258,    -1,    -1,
    1841,    -1,    -1,    -1,  1265,    -1,    -1,    -1,    -1,    -1,
    1271,  1272,    -1,  1274,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1322,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    84,    -1,  1937,    87,   291,   292,
     293,   294,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,
     120,   121,   122,   284,    -1,    -1,    -1,   127,   128,    -1,
     291,   292,   293,   294,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,    -1,
     160,   161,   162,   163,    -1,   165,    -1,   167,  1439,    -1,
      -1,  1442,    -1,   173,    -1,   175,    -1,   177,    -1,  1450,
      -1,   291,   292,   293,   294,    -1,  1457,    -1,    -1,  1460,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,  1469,  1470,
    1471,  1472,    -1,    78,    79,    80,    81,    -1,  1479,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,   111,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,   129,    -1,   278,    -1,
     280,   134,   135,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,   174,
     175,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1583,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,   178,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,    -1,    -1,    -1,   231,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   241,   242,  1639,   244,
      -1,    -1,    -1,    -1,    -1,    -1,   229,   230,   231,    -1,
      -1,   256,   257,    -1,    -1,    -1,    -1,    -1,   263,   264,
     136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1671,   254,  1673,   256,   279,  1676,    -1,   282,    -1,    -1,
     263,   264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   274,   136,  1694,   277,    -1,    -1,  1698,    -1,   282,
     176,    -1,    -1,    -1,   287,    -1,    -1,    -1,  1709,    -1,
      -1,    -1,    -1,    -1,  1715,   320,    -1,    -1,   194,   195,
     196,   197,   198,    -1,    -1,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,
     194,   195,   196,   197,   198,    -1,    -1,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,   349,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,    -1,    -1,  1780,
    1781,  1782,    -1,  1784,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1798,    -1,    -1,
      -1,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,  1817,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,   309,    67,    68,  1869,    70,
      71,    -1,    -1,   349,  1875,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,   173,   174,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1988,    -1,    -1,
    1991,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2009,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,  2030,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,   288,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,
     311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   352,     3,   354,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,   175,    -1,   177,   178,    -1,   180,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
     191,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   352,     3,   354,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    67,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,   173,   174,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   352,     3,   354,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,
     201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   352,     3,   354,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,   254,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,
     311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   352,     3,   354,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   352,     3,   354,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
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
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    67,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,   175,   176,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
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
      -1,    -1,   333,   334,    -1,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,   354,    22,    23,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    53,    -1,    -1,    56,    57,
      58,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,   117,
      -1,    -1,   120,   121,   122,    -1,    -1,    -1,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,
     138,   139,   140,    -1,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,   159,   160,   161,   162,   163,    -1,   165,   166,   167,
      -1,    -1,    -1,    -1,    -1,   173,    -1,   175,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   191,    -1,    -1,   194,   195,    -1,    -1,
      -1,   199,   200,   201,    -1,    -1,    -1,    -1,    -1,   207,
      -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,
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
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
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
      -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    68,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,   121,
     122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,   159,   160,   161,
     162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
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
      -1,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,   341,
      -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,
      -1,     3,   354,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    68,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,   121,
     122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,   159,   160,   161,
     162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
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
      -1,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,   341,
      -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,
      -1,     3,   354,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    68,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,   121,
     122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,   159,   160,   161,
     162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,
      -1,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,
      -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,   307,   308,    -1,    -1,   311,
     312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,   354,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    -1,    -1,    56,    57,    58,
      -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    68,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,   117,    -1,
      -1,   120,   121,   122,    -1,    -1,    -1,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,
     139,   140,    -1,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    -1,   158,
     159,   160,   161,   162,   163,    -1,   165,   166,   167,    -1,
      -1,    -1,    -1,    -1,   173,    -1,   175,   176,   177,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,
     199,   200,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,
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
      46,    47,    48,    49,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,   163,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,   254,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,   354,    22,
      23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,    67,    68,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,   117,    -1,    -1,   120,   121,   122,
      -1,    -1,    -1,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   137,   138,   139,   140,    -1,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,    -1,   158,   159,   160,   161,   162,
     163,    -1,   165,   166,   167,    -1,    -1,    -1,    -1,    -1,
     173,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   194,   195,    -1,    -1,    -1,   199,   200,   201,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,
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
      50,    -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    68,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,
     120,   121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,
     140,    -1,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,   159,
     160,   161,   162,   163,    -1,   165,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,
     200,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
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
      -1,    -1,    -1,   333,   334,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   354,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    53,    -1,    -1,    56,
      57,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
     117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,   138,   139,   140,    -1,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      -1,   158,   159,   160,   161,   162,   163,    -1,   165,   166,
     167,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    -1,
      -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
     307,   308,    -1,    -1,   311,   312,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,   354,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,
      -1,    -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,   159,   160,   161,   162,   163,
      -1,   165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,
      -1,   175,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,
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
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,
     311,   312,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      22,    23,   333,   334,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,
     122,   136,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,    -1,   160,   161,
     162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,   194,
     195,   196,   197,   198,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,   231,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,    -1,
     262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,   279,   280,   281,
     282,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,   307,    -1,    -1,   310,    -1,
      -1,   313,   314,   315,    -1,    -1,    -1,    -1,   320,     5,
       6,     7,     8,     9,    10,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,   349,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,   136,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,    -1,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,
      -1,   177,    -1,    -1,    -1,   194,   195,   196,   197,   198,
      -1,    -1,    -1,   202,   203,   204,   205,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,   231,   232,   233,    -1,    -1,
      -1,    -1,    -1,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
     256,   257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,   279,   280,   281,   282,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,
      -1,    -1,   318,    -1,   320,     5,     6,     7,     8,     9,
      10,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
     349,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,
     120,   121,   122,   136,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,    -1,
     160,   161,   162,   163,    -1,   165,    -1,   167,    -1,    -1,
      -1,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,
      -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,   231,   232,   233,    -1,    -1,    -1,    -1,    -1,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,   256,   257,    -1,    -1,
      -1,    -1,   262,   263,   264,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,   279,
     280,   281,   282,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,   318,    -1,
     320,     5,     6,     7,     8,     9,    10,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,   349,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    52,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,   136,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,    -1,    -1,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,    -1,   160,   161,   162,   163,
      -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,   177,    -1,    -1,    -1,   194,   195,   196,
     197,   198,    -1,    -1,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,   231,   232,   233,
      -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,   253,
      -1,   255,   256,   257,    -1,    -1,    -1,    -1,   262,   263,
     264,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,
      -1,   275,    -1,    -1,   278,   279,   280,   281,   282,    -1,
     284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,
     294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,
      -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,   313,
      -1,   315,    -1,    -1,    -1,    -1,   320,     5,     6,     7,
       8,     9,    10,   327,   328,    -1,    -1,    -1,    -1,   333,
     334,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
      -1,    -1,   120,   121,   122,    -1,   136,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,    -1,   160,   161,   162,   163,    -1,   165,    -1,   167,
      -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,    -1,
      -1,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,   231,   232,   233,    -1,    -1,    -1,    -1,
      -1,    -1,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,   256,   257,
      -1,    -1,    -1,    -1,   262,   263,   264,   265,    -1,    -1,
      -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,
     278,   279,   280,   281,   282,    -1,   284,   285,    -1,    -1,
      -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,   309,
     298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   307,
      -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,
      -1,   319,   320,     5,     6,     7,     8,     9,    10,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,
     122,   136,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,    -1,   160,   161,
     162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,   194,
     195,   196,   197,   198,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,   231,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,    -1,
     262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,   279,   280,   281,
     282,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,   308,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,   313,     5,     6,     7,     8,     9,    10,   320,    -1,
      -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,    22,
      23,   333,   334,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
      -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,
     136,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,   152,
     153,   154,   155,   156,    -1,   158,    -1,   160,   161,   162,
     163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,
     173,    -1,    -1,    -1,   177,    -1,    -1,    -1,   194,   195,
     196,   197,   198,    -1,    -1,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,
      -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,
     233,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
     253,    -1,   255,    -1,   257,    -1,    -1,    -1,    -1,   262,
     263,   264,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,
     273,    -1,   275,    -1,    -1,   278,   279,   280,   281,    -1,
      -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,
     293,   294,   308,   296,    -1,   298,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,
     313,    -1,    -1,    -1,    -1,   318,    -1,   320,     5,     6,
       7,     8,     9,    10,   327,   328,    -1,    -1,    -1,    -1,
     333,   334,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,    -1,    -1,   120,   121,   122,    -1,   136,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,
      -1,   148,    -1,   150,   151,   152,   153,   154,   155,   156,
      -1,   158,    -1,   160,   161,   162,   163,    -1,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,
      -1,    -1,    -1,   202,   203,   204,   205,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,   268,
     257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,   279,   280,   281,    -1,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,
      -1,    -1,   319,   320,    -1,    -1,    -1,    -1,    -1,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,   108,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,    -1,    -1,   120,   121,   122,   136,    -1,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,
      -1,   148,    -1,   150,   151,   152,   153,   154,   155,   156,
      -1,   158,    -1,   160,   161,   162,   163,    -1,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
     177,    -1,    -1,    -1,   194,   195,   196,   197,   198,    -1,
      -1,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,   222,   223,   224,   225,   226,
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
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,   100,   113,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
      -1,    -1,   120,   121,   122,    -1,   136,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,    -1,   160,   161,   162,   163,   176,   165,    -1,   167,
      -1,    -1,    -1,    -1,    -1,   173,    -1,   175,    -1,   177,
      -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,    -1,
      -1,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,
      -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,
      -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,
     278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,
      -1,   136,    -1,   291,   292,   293,   294,    -1,   296,    -1,
     298,    -1,    -1,    -1,    -1,   303,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    38,
      -1,   186,    41,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,   196,   197,   198,    53,    -1,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,    64,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,
      -1,   120,   121,   122,    -1,   136,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,
      -1,   150,   151,   152,   153,   154,   155,   156,    -1,   158,
      -1,   160,   161,   162,   163,   176,   165,    -1,   167,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,
      -1,   202,   203,   204,   205,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   232,   233,   234,   235,   236,   237,    -1,
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
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,
     120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,    -1,
     160,   161,   162,   163,    -1,   165,    -1,   167,    -1,    -1,
      -1,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,   207,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,    -1,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
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
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,   136,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,    -1,   160,
     161,   162,   163,   176,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
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
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,
     122,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,    -1,   160,   161,
     162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,
      -1,   136,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,   152,
     153,   154,   155,   156,    -1,   158,    -1,   160,   161,   162,
     163,   176,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,
     173,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,   194,
     195,   196,   197,   198,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,    -1,
     136,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,    -1,    -1,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,    -1,   160,   161,   162,   163,
     176,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,   194,   195,
     196,   197,   198,    -1,    -1,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,    -1,    -1,   120,   121,   122,    -1,   136,
      -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,    -1,    -1,   148,    -1,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,    -1,   160,   161,   162,   163,   176,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,   194,   195,   196,
     197,   198,    -1,    -1,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,   136,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,   327,   328,   176,    -1,    -1,    -1,   333,   334,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,   196,   197,   198,    53,    -1,    -1,
     202,   203,   204,   205,   206,   207,   208,   209,    64,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,    -1,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,   230,    -1,   232,   233,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,
      -1,   148,    -1,   150,   151,   152,   153,   154,   155,   156,
      -1,   158,    -1,   160,   161,   162,   163,    -1,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,   279,   280,    -1,    -1,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
      -1,    -1,   120,   121,   122,    -1,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,    -1,   160,   161,   162,   163,    -1,   165,    -1,   167,
      -1,    -1,    -1,    -1,    -1,   173,    -1,   175,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,
      -1,   120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,
      -1,   150,   151,   152,   153,   154,   155,   156,    -1,   158,
      -1,   160,   161,   162,   163,    -1,   165,    -1,   167,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,
      -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,
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
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,
     120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,    -1,
     160,   161,   162,   163,    -1,   165,    -1,   167,    -1,    -1,
      -1,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
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
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,    -1,   160,
     161,   162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,   230,
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
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,
     122,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,    -1,   160,   161,
     162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,
      -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,   152,
     153,   154,   155,   156,    -1,   158,    -1,   160,   161,   162,
     163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,
     173,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,    -1,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,    -1,    -1,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,    -1,   160,   161,   162,   163,
      -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,    -1,    -1,   148,    -1,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,    -1,   160,   161,   162,   163,    -1,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    65,    66,    67,    68,    78,    79,    80,
      81,    87,   135,   174,   175,   231,   232,   241,   242,   244,
     246,   247,   248,   249,   251,   253,   256,   257,   263,   264,
     279,   282,   320,   356,   362,   363,   366,   367,   368,   369,
     371,   373,   374,   383,   388,   400,   405,   406,   412,   452,
     458,   461,   469,   490,   505,   509,   510,   511,   519,   534,
     536,   537,   538,   557,   561,   562,   563,   566,   688,   693,
     135,   112,     5,     6,     7,     8,     9,    10,    22,    23,
      26,    38,    41,    53,    64,    81,    84,    87,    93,    98,
      99,   100,   106,   114,   117,   120,   121,   122,   127,   128,
     144,   145,   148,   150,   151,   152,   153,   154,   155,   156,
     158,   160,   161,   162,   163,   165,   167,   173,   177,   221,
     222,   228,   232,   233,   240,   243,   244,   245,   246,   247,
     248,   249,   251,   253,   255,   262,   265,   269,   272,   273,
     275,   278,   280,   284,   285,   291,   292,   293,   294,   296,
     298,   303,   327,   328,   333,   334,   656,   682,   683,   191,
     255,   547,   267,    82,   516,   516,   682,    80,    88,   558,
     559,   682,    67,   566,   181,   270,    68,    70,    71,   626,
     627,   628,   682,   656,   359,   358,   360,   361,   357,     5,
      11,   686,   689,   284,   656,     5,     6,     7,     8,     9,
      10,    65,    66,    67,    68,   191,   253,   257,   277,   320,
     384,   391,   392,   393,   395,   396,   397,   680,   681,   263,
     266,   389,   390,    59,    88,    56,   116,   284,    11,    27,
     175,   236,   305,   453,   454,   527,   557,   563,   671,   685,
       0,    17,    56,    59,   104,   106,   116,   221,   222,   223,
     224,   225,   226,   233,   265,   278,   284,   287,   413,   414,
     417,   419,   167,   234,   235,   236,   237,   289,   329,    56,
     116,   167,   191,   233,   234,   235,   236,   237,   265,   278,
     284,   289,   326,   329,   504,    56,    57,    58,    64,   175,
     265,   278,   292,   457,   653,   682,   221,   222,   284,   372,
     417,   450,   682,   135,   103,   170,   171,   172,   582,   135,
     656,   279,   350,     3,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    18,    19,    27,    28,    44,
      45,    46,    47,    48,    49,    50,    63,   107,   111,   115,
     126,   136,   137,   138,   139,   140,   142,   143,   146,   147,
     149,   159,   166,   175,   178,   194,   195,   199,   200,   201,
     207,   211,   291,   292,   293,   294,   307,   311,   312,   352,
     354,   543,   569,   580,   581,   589,   590,   591,   592,   594,
     596,   597,   599,   601,   603,   604,   606,   607,   608,   609,
     610,   611,   612,   625,   626,   629,   631,   632,   633,   635,
     636,   637,   638,   639,   653,   654,   655,   657,   658,   660,
     675,   678,   682,   687,   698,   699,   700,   701,   702,   716,
     723,   725,   728,   738,   739,   769,   656,   192,   517,   517,
     682,    89,    92,    98,   512,   513,   514,   349,   560,   563,
     456,   457,   547,   176,   327,   116,   167,   234,   235,   236,
     237,   278,   284,   285,   289,   326,   503,   694,   175,   350,
     456,   369,   369,   356,   356,   369,   175,   656,   118,   119,
     535,   456,   456,   275,   456,   112,   267,   286,   349,   286,
     349,   270,   349,   271,   271,   391,   384,    88,   512,   279,
     682,   656,   656,   267,   453,   566,   267,   671,   267,   267,
     305,   321,   221,   222,   682,   221,   222,   656,   284,   284,
     284,   284,   656,   682,   313,   365,   365,   326,   284,   235,
     656,   656,   656,   656,   656,   656,   682,   656,   235,   167,
     234,   235,   236,   237,   656,   313,   364,   364,   364,   364,
     682,   364,   364,   364,   656,   364,    42,    43,   508,   228,
     450,   682,   682,   303,   179,   179,   179,   349,     5,     6,
       7,    20,    24,    25,    26,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    53,    54,    55,   291,   292,   293,
     294,   349,   644,   652,   673,   675,   676,   677,   678,   105,
     191,   255,   567,   567,   567,   304,   583,   290,   551,   457,
     548,   550,   679,   682,   682,   687,   687,   687,   175,   175,
      22,   175,   630,   630,   630,   630,   630,   175,   606,   175,
     127,   682,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   288,   557,   563,   580,   590,   598,
     626,   682,   590,   175,   608,   608,   175,   175,   175,   608,
     687,   175,   642,   175,   643,   194,   195,   640,   308,   608,
     665,   666,   175,   175,   590,   602,   112,   267,   570,   571,
     181,   328,   634,   682,   192,   179,   182,   183,   184,   185,
     186,   187,   188,   189,   193,   656,   136,   194,   195,   196,
     197,   198,   202,   203,   204,   205,   206,   207,   208,   209,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     268,   339,   350,   349,   175,   175,   175,   687,   687,   350,
     175,   254,   288,   454,   457,   539,    83,    84,   286,   518,
      90,    91,    93,    99,   349,   559,   328,   569,   656,   235,
     656,   656,   656,   656,   682,   656,   682,   656,   656,   268,
     176,   544,   608,   661,   628,   682,   306,   585,   135,   135,
     135,   175,   176,   542,   544,   546,   566,   535,   131,   131,
     508,   276,   398,   399,   680,   680,   398,   393,   167,   284,
     394,   503,   656,   397,   113,   113,   112,   112,   512,   260,
     261,   415,   174,   259,   279,   401,   117,   118,   120,   121,
     122,   123,   124,   125,   128,   328,   408,   410,   411,   256,
     279,   282,   283,   656,   176,   656,   324,   687,   656,   671,
     305,   174,    87,   328,   407,   409,   411,   365,   365,   365,
     365,   239,   174,   381,   178,   228,   375,   682,   656,   682,
     365,   656,   175,   175,   175,   175,   456,   331,   332,   491,
     364,   235,   656,   656,   656,   656,   508,   107,   656,   656,
     656,   656,   656,   656,   656,   656,   682,   176,    59,   294,
     655,   606,   682,   580,   450,   175,   175,    21,    22,   175,
     175,   175,    38,   175,   642,   643,   295,   297,   299,   300,
     301,   302,   645,   648,   650,   651,   682,   175,   175,   175,
     175,   586,   587,   608,   169,   568,   568,   568,   610,   670,
     685,   305,   584,   580,   179,   349,   571,   179,   350,   580,
     659,   659,    23,   176,   296,   298,   302,   645,   646,   647,
     113,   608,   609,   608,   695,   696,   697,   695,   240,   157,
     717,   743,   154,   156,   741,   240,     3,   729,   609,   116,
     740,   741,   695,   175,   540,   176,   176,   176,   176,   349,
     350,   608,   608,   608,   686,   174,   641,   686,   641,   687,
     580,   308,   663,   664,   310,   665,   667,   608,   544,   662,
     349,   353,    69,   175,   352,   552,   572,   573,   605,   626,
     656,   682,   564,   565,   682,   551,   581,   682,   590,   180,
     190,   191,   590,   600,   595,   608,   595,   595,   595,   175,
     175,   101,   102,   593,   593,   590,   600,   603,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   111,   178,   175,   207,   633,   176,   191,   207,
     255,   608,   668,   682,   668,     8,     9,    10,   207,   682,
     288,   540,   539,    83,    80,    89,    96,    97,   515,   686,
     514,   175,   605,   656,   175,   506,   506,   506,   506,   350,
     111,   687,   176,   349,    14,   610,   671,   245,   370,   176,
     349,   508,   174,   349,   386,   174,   385,   656,   398,   398,
     262,   415,   286,   278,   105,   174,   670,   670,   670,   673,
     410,   230,   284,   285,   403,   404,    68,    89,   402,   404,
     284,   404,   456,   112,    16,   525,   526,   525,   456,   321,
     671,   415,   174,   673,   409,   656,   656,   656,   656,   240,
     266,   107,   376,   682,   254,   377,   228,   112,   175,   421,
     422,   456,   270,   656,   175,   207,   488,   489,   682,   488,
     488,   488,   328,    65,    66,    68,   257,   492,   656,   656,
     508,   508,   508,   508,   506,   506,   506,   506,   508,   508,
     508,   673,   669,   686,   669,    23,   669,   669,   669,   686,
      54,   674,   687,   641,   641,   643,   642,   286,   669,   686,
     669,   669,   669,   349,    52,   227,   588,   105,   566,   566,
     566,   610,   671,   585,   606,   550,   551,   254,   549,   580,
     682,   328,   349,   112,   656,   160,   742,   349,   742,   742,
     682,   704,   175,   608,   718,   719,   720,   349,   609,   682,
     726,   148,   730,   742,   695,   582,   254,   541,   544,   545,
     176,   349,   186,   187,   590,   349,   186,   112,   349,   176,
     292,   687,   176,   687,   651,   309,   608,   663,   667,   608,
     319,   349,   349,   176,   349,   590,   606,   626,   175,   288,
     552,   557,   563,   573,   574,   349,    70,    71,    72,    74,
      75,    77,   168,   553,   555,   328,   575,   682,   575,   576,
     576,   350,   349,   570,   110,   577,   590,   108,   542,   542,
     590,   590,   606,   111,   340,   613,   614,   668,   176,   668,
     176,   350,   349,   350,   682,    94,    95,    89,   506,   176,
     507,   673,   682,   544,   546,   266,   399,   112,   387,   263,
     387,   387,   387,   687,   262,   682,   682,   670,   606,   671,
     682,   656,   682,    91,    90,    91,   682,   656,   230,   425,
     428,   439,   440,   679,   112,   626,   111,   528,   322,   528,
     112,   262,   671,   421,   421,   421,   421,   682,    57,    63,
     382,    20,   273,   690,   691,   376,   236,   184,   424,   425,
     426,   431,   451,   682,   100,   416,   328,   656,   421,   488,
     176,   349,   673,   176,   176,   176,   453,   330,   270,   506,
     508,   176,   176,   176,   176,   349,   176,   349,   176,   349,
     302,   645,   649,   176,   349,   176,   176,   176,   587,   175,
     673,   673,   608,   116,   156,   176,   695,   176,   176,   349,
     703,    84,   254,   608,   744,   745,   747,   748,   749,   271,
     349,   714,   328,   721,    85,   144,   724,   349,   727,   105,
     731,   751,   742,   176,   163,   752,   753,   742,   176,   349,
     175,   175,   175,   608,   608,   608,   608,   303,   544,   309,
     319,   608,   544,   544,   575,   576,   540,   176,   176,   176,
     566,   573,   553,    76,   573,    76,    73,   554,   682,   175,
     682,   565,   105,   109,   579,   687,   176,   176,   192,   192,
     105,   176,   103,   615,   176,   176,   207,   668,   682,   176,
     349,   350,   271,   382,   271,    16,   687,   508,   508,   508,
     256,   279,   682,   258,   274,   287,   448,   132,   133,   427,
     673,   175,   532,   533,   687,   328,   496,   687,   323,   532,
     687,   270,   279,   682,   684,   692,   362,   366,   378,   379,
     380,   383,   388,   400,   405,   505,   626,   656,   176,   349,
     174,   682,   453,   175,   270,   420,   176,    67,    81,    87,
     239,   242,   281,   307,   313,   318,   371,   373,   374,   383,
     388,   400,   405,   462,   465,   467,   468,   469,   473,   475,
     481,   483,   484,   505,   509,   510,   562,   682,   682,   238,
     243,   238,   174,   455,   450,   656,   672,   686,   686,   686,
     643,   686,   578,   657,   682,   176,   176,   176,   141,   608,
     705,   711,   712,   713,   743,   742,   254,   747,   176,   349,
     328,   111,   150,   152,   153,   715,   719,   742,   682,   722,
     145,   145,   176,   609,   742,   127,   151,   609,   732,   733,
     734,   735,   736,   751,   286,   176,   176,   545,   541,   542,
     542,   349,   176,   113,   176,   176,   349,   544,   176,   176,
     353,    76,   573,    16,   270,   556,   573,   175,   684,   578,
     580,   590,   590,   578,   105,    86,   347,   616,   617,   176,
     176,   507,   682,   336,   279,   254,   100,   111,   178,   254,
     269,   269,   457,   129,   134,   254,   429,   430,   433,   434,
     436,   437,   440,   533,    84,   531,   349,   687,   349,   175,
     522,   522,   240,     3,   682,   349,   380,   426,   682,   272,
       3,   174,   423,   450,    78,   239,   547,   240,   470,   471,
     656,   284,   454,   474,   580,   308,   478,   479,   608,   580,
     317,   463,   315,   351,   673,   284,   487,   673,     5,   487,
     229,   338,   493,   176,   176,   176,   176,   176,   349,   350,
     175,   349,   349,   714,   349,   176,   745,   682,   746,   270,
     270,   270,   270,   176,   176,   328,   750,   751,   349,   111,
     153,   737,   164,   176,   176,   176,   608,   608,   608,   575,
     573,   457,   580,   556,   684,   176,   586,   188,   341,   348,
     609,   618,   619,   620,   621,   262,   278,     3,   111,   111,
     435,   607,   457,   457,   130,   435,   433,   111,   178,   229,
     274,   277,   287,   447,   449,   176,   230,   687,   687,   523,
     524,   682,   525,   525,   687,   174,   418,   682,   175,    84,
     173,   176,    65,    85,   256,   240,   569,   459,   682,   175,
     175,   580,   310,   478,   480,   308,   476,   477,   309,   463,
     465,   580,   175,   239,   243,   462,     4,   460,   687,   239,
     243,   271,   335,   336,   494,   495,   113,   498,   499,   657,
     682,   608,   706,   707,   709,   711,   713,   705,   711,   111,
      84,   111,   111,   111,   682,   733,   270,   270,   176,    84,
     162,   165,   754,   755,   760,   176,   176,   176,   176,   619,
     333,   344,   344,   342,   624,   687,   682,   277,   328,   111,
     175,   269,   656,   349,   176,   349,     3,   528,   528,   278,
      56,   415,   432,   433,   173,    86,    86,   459,   350,   472,
     608,   454,   309,   463,   319,   608,   476,   480,   463,   465,
     135,   316,   486,   679,   240,     5,   240,     5,   284,   333,
     497,   284,   497,   495,   337,   308,   501,   176,   349,   328,
     708,   349,   156,   750,   153,   153,   158,   682,   761,     3,
     756,   757,    84,   155,   158,   762,   763,   765,   766,   192,
      84,   110,   341,   346,   656,   131,   580,   456,   687,   524,
      60,   529,   529,   682,   687,   262,   176,   349,   682,   176,
     349,   176,   463,   465,   307,   309,   319,   310,   314,   482,
     135,   319,   463,   176,   349,   673,   459,   460,   459,   460,
     496,   496,   496,   496,   333,   334,   500,   175,   318,   371,
     373,   383,   388,   466,   467,   502,   509,   510,   562,   707,
     682,   710,   711,   161,   758,   758,   158,   682,   768,   757,
     767,   764,   765,   341,   348,   609,   622,   623,   345,   333,
     456,   175,   438,   176,   114,   446,    61,   530,   530,   415,
     687,   433,   608,   135,   463,   307,   463,   580,   319,   319,
     319,   679,   682,   682,   682,   682,   580,   317,   757,   759,
     333,   343,   344,   446,   407,    39,    40,    72,   445,   270,
     442,   443,   444,    62,   531,   531,   262,   309,   313,   315,
     673,   176,   464,   444,   176,    65,    66,   270,   443,   270,
     442,   325,   520,   687,   463,   485,   682,   319,   466,    42,
      43,    84,   279,   441,   441,   175,   482,   135,    41,   111,
     254,   521,   671,   176,   349,   671
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
#line 629 "src/sql/server/sql_parser.y"
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
#line 639 "src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 4:
#line 644 "src/sql/server/sql_parser.y"
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
#line 653 "src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 6:
#line 658 "src/sql/server/sql_parser.y"
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
#line 668 "src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 8:
#line 673 "src/sql/server/sql_parser.y"
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
#line 683 "src/sql/server/sql_parser.y"
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
#line 692 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 11:
#line 693 "src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 12:
#line 698 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 13:
#line 699 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym); YYACCEPT; }
    break;

  case 14:
#line 700 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 15:
#line 701 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 16:
#line 702 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 17:
#line 703 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYABORT; }
    break;

  case 18:
#line 708 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 20:
#line 712 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 21:
#line 716 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 22:
#line 717 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 23:
#line 721 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 24:
#line 722 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 36:
#line 745 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(2) - (5)].l));
		append_list(l, (yyvsp[(3) - (5)].l));
		append_symbol(l, (yyvsp[(4) - (5)].sym));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
    break;

  case 39:
#line 756 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 40:
#line 757 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 41:
#line 762 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[(2) - (2)].l)); }
    break;

  case 42:
#line 763 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); if ((yyval.sym)) (yyval.sym)->token = SQL_DECLARE_TABLE; }
    break;

  case 43:
#line 768 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(1) - (2)].l) );
		append_type(l, &(yyvsp[(2) - (2)].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 44:
#line 773 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l) );
		append_type(l, &(yyvsp[(4) - (4)].type) );
		(yyval.l) = append_symbol((yyvsp[(1) - (4)].l), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 45:
#line 782 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, (yyvsp[(2) - (4)].sval) );
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 46:
#line 787 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (4)].l));
	  	append_symbol(l, (yyvsp[(4) - (4)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_SET, l ); }
    break;

  case 47:
#line 792 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 48:
#line 800 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 49:
#line 808 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 50:
#line 816 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 51:
#line 824 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 52:
#line 830 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 53:
#line 839 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(4) - (7)].l));
		append_symbol(l, (yyvsp[(5) - (7)].sym));
		append_symbol(l, (yyvsp[(6) - (7)].sym));
		append_list(l, (yyvsp[(7) - (7)].l));
		append_int(l, (yyvsp[(3) - (7)].bval));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
    break;

  case 54:
#line 847 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(4) - (5)].l));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		append_int(l, (yyvsp[(3) - (5)].bval));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
    break;

  case 55:
#line 856 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (1)].sval) );
	  append_string((yyval.l), NULL ); }
    break;

  case 56:
#line 860 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[(2) - (2)].sval) ); }
    break;

  case 57:
#line 864 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (3)].sval) );
	  append_string((yyval.l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 59:
#line 873 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 60:
#line 874 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[(4) - (4)].sval) ); }
    break;

  case 61:
#line 878 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 63:
#line 883 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 64:
#line 885 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 70:
#line 891 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 71:
#line 892 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 72:
#line 896 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 73:
#line 897 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_role; }
    break;

  case 74:
#line 902 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
    break;

  case 75:
#line 912 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
    break;

  case 76:
#line 921 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 77:
#line 923 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 78:
#line 927 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 79:
#line 928 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 80:
#line 932 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 81:
#line 933 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 82:
#line 938 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 83:
#line 939 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 84:
#line 944 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
    break;

  case 85:
#line 952 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
    break;

  case 86:
#line 961 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 87:
#line 962 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 88:
#line 966 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 89:
#line 967 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 90:
#line 972 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (1)].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
    break;

  case 91:
#line 976 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (3)].l));
	  append_symbol((yyval.l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 92:
#line 982 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(L(), (yyvsp[(1) - (1)].i_val)); }
    break;

  case 93:
#line 984 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(append_int(L(), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val)); }
    break;

  case 94:
#line 988 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
    break;

  case 95:
#line 989 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
    break;

  case 96:
#line 993 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(2) - (2)].l)); }
    break;

  case 97:
#line 994 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[(1) - (1)].l)); }
    break;

  case 98:
#line 995 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[(1) - (1)].l)); }
    break;

  case 99:
#line 1006 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 100:
#line 1007 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 102:
#line 1012 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 103:
#line 1014 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 104:
#line 1018 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
    break;

  case 105:
#line 1019 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
    break;

  case 106:
#line 1020 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_TRUNCATE,NULL); }
    break;

  case 107:
#line 1021 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[(2) - (2)].l)); }
    break;

  case 108:
#line 1022 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 109:
#line 1023 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 110:
#line 1024 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
    break;

  case 111:
#line 1028 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 112:
#line 1030 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 113:
#line 1034 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 114:
#line 1035 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 115:
#line 1043 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 116:
#line 1048 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, append_list(L(),(yyvsp[(6) - (6)].l))));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 117:
#line 1053 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 118:
#line 1058 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 119:
#line 1063 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 120:
#line 1068 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 121:
#line 1073 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 122:
#line 1078 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (4)].sval));
	  append_list(l, (yyvsp[(4) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 123:
#line 1083 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
    break;

  case 124:
#line 1088 "src/sql/server/sql_parser.y"
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
#line 1100 "src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (4)].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[(2) - (4)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 126:
#line 1106 "src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 127:
#line 1113 "src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (7)].sval));
				  append_string(l, (yyvsp[(7) - (7)].sval));
				  append_int(l, (yyvsp[(2) - (7)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 128:
#line 1123 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
    break;

  case 129:
#line 1128 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
    break;

  case 130:
#line 1132 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
    break;

  case 131:
#line 1136 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[(2) - (4)].sval)); }
    break;

  case 132:
#line 1138 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  if (!strlen((yyvsp[(5) - (5)].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 133:
#line 1146 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 134:
#line 1154 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
    break;

  case 135:
#line 1159 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
    break;

  case 136:
#line 1164 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  append_int(l, 0);
	  append_int(l, FALSE ); /* no if exists check */
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 137:
#line 1173 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 138:
#line 1174 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 139:
#line 1178 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 140:
#line 1179 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 141:
#line 1180 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 147:
#line 1202 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
    break;

  case 148:
#line 1213 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (3)].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
    break;

  case 149:
#line 1230 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
    break;

  case 150:
#line 1239 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 151:
#line 1240 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 152:
#line 1244 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 153:
#line 1245 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 154:
#line 1249 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 155:
#line 1250 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 156:
#line 1251 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 157:
#line 1255 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 158:
#line 1256 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
    break;

  case 159:
#line 1257 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[(3) - (3)].l_val)));  }
    break;

  case 160:
#line 1258 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[(3) - (3)].sym)));  }
    break;

  case 161:
#line 1259 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 162:
#line 1263 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 163:
#line 1264 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 164:
#line 1265 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
    break;

  case 165:
#line 1266 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 166:
#line 1267 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
    break;

  case 167:
#line 1268 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 168:
#line 1269 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
    break;

  case 169:
#line 1270 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
    break;

  case 170:
#line 1278 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (9)].sval));
	  append_int(l, (yyvsp[(2) - (9)].i_val));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
    break;

  case 171:
#line 1287 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 172:
#line 1288 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ordered_idx; }
    break;

  case 173:
#line 1289 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imprints_idx; }
    break;

  case 174:
#line 1290 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 175:
#line 1311 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval));
	  append_int(l, (yyvsp[(3) - (3)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
    break;

  case 176:
#line 1316 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (10)].sval));
	  append_string(l, (yyvsp[(6) - (10)].sval));
	  append_string(l, (yyvsp[(8) - (10)].sval));
	  append_string(l, (yyvsp[(10) - (10)].sval));
	  append_int(l, (yyvsp[(4) - (10)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
    break;

  case 177:
#line 1326 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 178:
#line 1327 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 179:
#line 1328 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
    break;

  case 180:
#line 1332 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 181:
#line 1333 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 182:
#line 1338 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, SQL_PERSIST);
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[(2) - (5)].bval));
	  append_list(l, (yyvsp[(5) - (5)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 183:
#line 1351 "src/sql/server/sql_parser.y"
    {
      dlist *l = L();
      append_list(l, (yyvsp[(3) - (6)].l));
      append_symbol(l, (yyvsp[(6) - (6)].sym));
      (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE_LOADER, l);
    }
    break;

  case 184:
#line 1358 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_STREAM;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 185:
#line 1370 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_MERGE_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 186:
#line 1382 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_REPLICA_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 187:
#line 1397 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_REMOTE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (8)].l));
	  append_symbol(l, (yyvsp[(5) - (8)].sym));
	  append_int(l, commit_action);
	  append_string(l, (yyvsp[(7) - (8)].sval));
	  append_list(l, (yyvsp[(8) - (8)].l));
	  append_int(l, (yyvsp[(3) - (8)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 188:
#line 1409 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, (yyvsp[(1) - (6)].i_val));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  if ((yyvsp[(1) - (6)].i_val) != SQL_PERSIST)
		commit_action = (yyvsp[(6) - (6)].i_val);
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[(3) - (6)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 189:
#line 1426 "src/sql/server/sql_parser.y"
    {
	  (yyval.l) = append_string(L(), NULL);
	  append_int((yyval.l), SQL_PW_ENCRYPTED);
	  append_string((yyval.l), NULL);
  }
    break;

  case 190:
#line 1432 "src/sql/server/sql_parser.y"
    {
	  (yyval.l) = append_string(L(), (yyvsp[(3) - (6)].sval));
	  append_int((yyval.l), (yyvsp[(4) - (6)].i_val));
	  append_string((yyval.l), (yyvsp[(6) - (6)].sval));
  }
    break;

  case 191:
#line 1438 "src/sql/server/sql_parser.y"
    {
	  (yyval.l) = append_string(L(), NULL);
	  append_int((yyval.l), (yyvsp[(2) - (4)].i_val));
	  append_string((yyval.l), (yyvsp[(4) - (4)].sval));
  }
    break;

  case 192:
#line 1446 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 193:
#line 1447 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 194:
#line 1448 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 195:
#line 1449 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 196:
#line 1450 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 197:
#line 1451 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 198:
#line 1455 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_COMMIT; }
    break;

  case 199:
#line 1456 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DELETE; }
    break;

  case 200:
#line 1457 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_PRESERVE; }
    break;

  case 201:
#line 1458 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DROP; }
    break;

  case 202:
#line 1462 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[(2) - (3)].l)); }
    break;

  case 203:
#line 1463 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[(1) - (1)].l)); }
    break;

  case 204:
#line 1471 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (4)].l));
			  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym)); 
			  append_int((yyval.l), (yyvsp[(4) - (4)].i_val)); }
    break;

  case 205:
#line 1477 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 206:
#line 1478 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 207:
#line 1479 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 208:
#line 1484 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 209:
#line 1486 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 215:
#line 1493 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 216:
#line 1494 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 217:
#line 1499 "src/sql/server/sql_parser.y"
    {
			dlist *l = L();
			append_string(l, (yyvsp[(1) - (3)].sval));
			append_type(l, &(yyvsp[(2) - (3)].type));
			append_list(l, (yyvsp[(3) - (3)].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 218:
#line 1507 "src/sql/server/sql_parser.y"
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

  case 219:
#line 1559 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 221:
#line 1565 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 222:
#line 1567 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 223:
#line 1573 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (6)].sval) );
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
    break;

  case 224:
#line 1581 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 225:
#line 1583 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 229:
#line 1589 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 230:
#line 1593 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 231:
#line 1599 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 232:
#line 1607 "src/sql/server/sql_parser.y"
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

  case 233:
#line 1636 "src/sql/server/sql_parser.y"
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

  case 234:
#line 1673 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 235:
#line 1674 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 236:
#line 1681 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 237:
#line 1690 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 238:
#line 1691 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 239:
#line 1695 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 240:
#line 1696 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 241:
#line 1697 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 242:
#line 1698 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 243:
#line 1699 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 244:
#line 1703 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(3) - (3)].i_val) << 8); }
    break;

  case 245:
#line 1707 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 246:
#line 1711 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
    break;

  case 247:
#line 1712 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 248:
#line 1713 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 249:
#line 1714 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 250:
#line 1715 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 251:
#line 1719 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 252:
#line 1720 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 253:
#line 1721 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 254:
#line 1722 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 255:
#line 1726 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 256:
#line 1727 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 257:
#line 1731 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
    break;

  case 258:
#line 1732 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
    break;

  case 259:
#line 1733 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
    break;

  case 260:
#line 1734 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
    break;

  case 261:
#line 1737 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(2) - (5)].l) );
			  append_list(l, (yyvsp[(3) - (5)].l) );
			  append_int(l, (yyvsp[(4) - (5)].i_val) );
			  append_int(l, (yyvsp[(5) - (5)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 263:
#line 1750 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[(2) - (2)].l)); }
    break;

  case 264:
#line 1752 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[(3) - (3)].l)); }
    break;

  case 265:
#line 1756 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(5) - (8)].l) );
			  append_list(l, (yyvsp[(3) - (8)].l) );
			  append_list(l, (yyvsp[(6) - (8)].l) );
			  append_int(l, (yyvsp[(7) - (8)].i_val) );
			  append_int(l, (yyvsp[(8) - (8)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 266:
#line 1768 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 267:
#line 1773 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 268:
#line 1775 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 269:
#line 1779 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 270:
#line 1784 "src/sql/server/sql_parser.y"
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

  case 272:
#line 1797 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 275:
#line 1806 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 276:
#line 1807 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 277:
#line 1811 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 279:
#line 1816 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 280:
#line 1821 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				append_list(l, (yyvsp[(3) - (6)].l));
				append_string(l, (yyvsp[(6) - (6)].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
    break;

  case 281:
#line 1828 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 284:
#line 1843 "src/sql/server/sql_parser.y"
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

  case 285:
#line 1857 "src/sql/server/sql_parser.y"
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

  case 286:
#line 1871 "src/sql/server/sql_parser.y"
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

  case 287:
#line 1921 "src/sql/server/sql_parser.y"
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

  case 288:
#line 1936 "src/sql/server/sql_parser.y"
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

  case 289:
#line 1950 "src/sql/server/sql_parser.y"
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

  case 290:
#line 1999 "src/sql/server/sql_parser.y"
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

  case 291:
#line 2012 "src/sql/server/sql_parser.y"
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

  case 292:
#line 2024 "src/sql/server/sql_parser.y"
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

  case 293:
#line 2047 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[(1) - (1)].sym)); }
    break;

  case 294:
#line 2051 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(2) - (5)].l),(yyvsp[(3) - (5)].sym)); }
    break;

  case 295:
#line 2055 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(3) - (6)].l),(yyvsp[(4) - (6)].sym)); }
    break;

  case 296:
#line 2070 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 297:
#line 2072 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 298:
#line 2076 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 299:
#line 2078 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 326:
#line 2126 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 327:
#line 2130 "src/sql/server/sql_parser.y"
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[(2) - (2)].sym));}
    break;

  case 328:
#line 2135 "src/sql/server/sql_parser.y"
    { dlist *l = L(); 
		  append_list( l, (yyvsp[(1) - (4)].l));
		  append_list( l, (yyvsp[(3) - (4)].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
    break;

  case 330:
#line 2146 "src/sql/server/sql_parser.y"
    {(yyval.l) = L();}
    break;

  case 331:
#line 2147 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 332:
#line 2149 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 333:
#line 2154 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[(2) - (2)].sym)); }
    break;

  case 336:
#line 2161 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[(3) - (4)].sym)); }
    break;

  case 337:
#line 2166 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (6)].sym)),(yyvsp[(3) - (6)].l)),(yyvsp[(4) - (6)].l))); }
    break;

  case 338:
#line 2172 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[(2) - (5)].l)),(yyvsp[(3) - (5)].l))); }
    break;

  case 339:
#line 2180 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 340:
#line 2188 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 341:
#line 2190 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 342:
#line 2195 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 343:
#line 2203 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 344:
#line 2205 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 345:
#line 2209 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 346:
#line 2210 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 347:
#line 2220 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (7)].sym));
		  append_list(l, (yyvsp[(4) - (7)].l));
		  append_symbol(l, (yyvsp[(5) - (7)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
    break;

  case 348:
#line 2231 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 349:
#line 2233 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[(2) - (2)].l)); }
    break;

  case 350:
#line 2236 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  append_symbol(l, (yyvsp[(5) - (5)].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
    break;

  case 351:
#line 2250 "src/sql/server/sql_parser.y"
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

  case 352:
#line 2266 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 354:
#line 2271 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 356:
#line 2277 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[(1) - (2)].sval));
			  	  append_type((yyval.l), &(yyvsp[(2) - (2)].type));
				}
    break;

  case 357:
#line 2282 "src/sql/server/sql_parser.y"
    { 
				  append_string((yyval.l), (yyvsp[(3) - (4)].sval));
			  	  append_type((yyval.l), &(yyvsp[(4) - (4)].type));
				}
    break;

  case 358:
#line 2290 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(3) - (4)].l)); }
    break;

  case 359:
#line 2292 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(1) - (1)].type))); }
    break;

  case 361:
#line 2297 "src/sql/server/sql_parser.y"
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
    break;

  case 362:
#line 2301 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 363:
#line 2306 "src/sql/server/sql_parser.y"
    { dlist *p = L();
			  append_string(p, (yyvsp[(3) - (4)].sval));
			  append_type(p, &(yyvsp[(4) - (4)].type));
			  (yyval.l) = append_list((yyvsp[(1) - (4)].l), p); }
    break;

  case 364:
#line 2311 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[(1) - (2)].sval));
			  append_type(p, &(yyvsp[(2) - (2)].type));
			  (yyval.l) = append_list(l, p); }
    break;

  case 365:
#line 2361 "src/sql/server/sql_parser.y"
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

  case 366:
#line 2374 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 367:
#line 2375 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 368:
#line 2380 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
    break;

  case 369:
#line 2381 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
    break;

  case 370:
#line 2382 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TRUNCATE, NULL); }
    break;

  case 371:
#line 2383 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
    break;

  case 372:
#line 2384 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[(3) - (3)].l)); }
    break;

  case 373:
#line 2388 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 374:
#line 2389 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 375:
#line 2393 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 376:
#line 2395 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].l)); }
    break;

  case 377:
#line 2400 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 378:
#line 2401 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 379:
#line 2402 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 380:
#line 2403 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 385:
#line 2418 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[(1) - (3)].i_val));
	  append_symbol((yyval.l), (yyvsp[(2) - (3)].sym));
	  append_list((yyval.l), (yyvsp[(3) - (3)].l));
	}
    break;

  case 386:
#line 2425 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 387:
#line 2426 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 388:
#line 2430 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 389:
#line 2431 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 390:
#line 2435 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 391:
#line 2436 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 392:
#line 2441 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 393:
#line 2444 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 394:
#line 2449 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
    break;

  case 395:
#line 2455 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );	
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
    break;

  case 396:
#line 2461 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
    break;

  case 397:
#line 2467 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
    break;

  case 398:
#line 2473 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_LOADER );
	  (yyval.l) = l; }
    break;

  case 399:
#line 2482 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FUNC );
	  append_int(l, (yyvsp[(2) - (4)].bval) );
	  (yyval.l) = l; }
    break;

  case 400:
#line 2489 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, (yyvsp[(5) - (5)].l) );
	  append_int(l, F_FILT );
	  append_int(l, (yyvsp[(3) - (5)].bval) );
	  (yyval.l) = l; }
    break;

  case 401:
#line 2496 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_AGGR );
	  append_int(l, (yyvsp[(2) - (4)].bval) );
	  (yyval.l) = l; }
    break;

  case 402:
#line 2503 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_PROC );
	  append_int(l, (yyvsp[(2) - (4)].bval) );
	  (yyval.l) = l; }
    break;

  case 403:
#line 2510 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_LOADER );
	  append_int(l, (yyvsp[(2) - (4)].bval) );
	  (yyval.l) = l; }
    break;

  case 404:
#line 2520 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  append_int(l, (yyvsp[(3) - (5)].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 405:
#line 2526 "src/sql/server/sql_parser.y"
    { dlist *l = (yyvsp[(2) - (3)].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 406:
#line 2531 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 407:
#line 2540 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(6) - (6)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 408:
#line 2549 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 409:
#line 2558 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 410:
#line 2567 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_LOADER );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 411:
#line 2576 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  append_int(l, (yyvsp[(3) - (5)].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
    break;

  case 412:
#line 2582 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
    break;

  case 413:
#line 2586 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 414:
#line 2587 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 415:
#line 2588 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[(3) - (3)].l) ); }
    break;

  case 416:
#line 2590 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, (yyvsp[(3) - (4)].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, l );
	}
    break;

  case 417:
#line 2598 "src/sql/server/sql_parser.y"
    {(yyval.l) = NULL;}
    break;

  case 418:
#line 2599 "src/sql/server/sql_parser.y"
    {(yyval.l) = (yyvsp[(2) - (3)].l);}
    break;

  case 419:
#line 2600 "src/sql/server/sql_parser.y"
    {(yyval.l) = L(); }
    break;

  case 420:
#line 2604 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_type(l, &(yyvsp[(1) - (1)].type) );
				  (yyval.l)= l; }
    break;

  case 421:
#line 2607 "src/sql/server/sql_parser.y"
    { append_type((yyvsp[(3) - (3)].l), &(yyvsp[(1) - (3)].type));
				  (yyval.l) = (yyvsp[(3) - (3)].l); }
    break;

  case 422:
#line 2612 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 423:
#line 2613 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 424:
#line 2614 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 432:
#line 2634 "src/sql/server/sql_parser.y"
    {
	  (yyval.sym) = (yyvsp[(1) - (1)].sym);
	  m->type = Q_TRANS;					}
    break;

  case 433:
#line 2641 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[(3) - (3)].bval));  }
    break;

  case 434:
#line 2643 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[(2) - (2)].sval)); }
    break;

  case 435:
#line 2645 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[(3) - (3)].sval)); }
    break;

  case 436:
#line 2647 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[(3) - (4)].bval)), (yyvsp[(4) - (4)].sval) )); }
    break;

  case 437:
#line 2651 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 438:
#line 2653 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(4) - (4)].i_val)); }
    break;

  case 439:
#line 2655 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 440:
#line 2659 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; }
    break;

  case 442:
#line 2665 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 443:
#line 2667 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(1) - (3)].i_val) | (yyvsp[(3) - (3)].i_val)); }
    break;

  case 444:
#line 2672 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_readonly; }
    break;

  case 445:
#line 2673 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_writable; }
    break;

  case 446:
#line 2674 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_serializable; }
    break;

  case 447:
#line 2675 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; /* not supported */ }
    break;

  case 452:
#line 2686 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 453:
#line 2687 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 454:
#line 2691 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 455:
#line 2692 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 456:
#line 2693 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 457:
#line 2697 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 458:
#line 2698 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 459:
#line 2703 "src/sql/server/sql_parser.y"
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

  case 460:
#line 2717 "src/sql/server/sql_parser.y"
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

  case 461:
#line 2731 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_COPYLOADER, l ); }
    break;

  case 462:
#line 2736 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (8)].l));
	  append_list(l, (yyvsp[(5) - (8)].l));
	  append_list(l, (yyvsp[(7) - (8)].l));
	  append_int(l, (yyvsp[(8) - (8)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_BINCOPYFROM, l ); }
    break;

  case 463:
#line 2743 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 464:
#line 2750 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 465:
#line 2761 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 466:
#line 2762 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 467:
#line 2767 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(L(), (yyvsp[(1) - (1)].l_val)); }
    break;

  case 468:
#line 2769 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l_val)); }
    break;

  case 469:
#line 2774 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 470:
#line 2775 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 471:
#line 2779 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 472:
#line 2780 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 473:
#line 2785 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (1)].sval) );
			  (yyval.l) = l; }
    break;

  case 474:
#line 2789 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (2)].sval) );
			  append_string(l, (yyvsp[(2) - (2)].sval) );
			  (yyval.l) = l; }
    break;

  case 475:
#line 2797 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 476:
#line 2802 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 477:
#line 2807 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (5)].sval));
				  append_string(l, (yyvsp[(5) - (5)].sval));
				  (yyval.l) = l; }
    break;

  case 478:
#line 2812 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (7)].sval));
				  append_string(l, (yyvsp[(5) - (7)].sval));
				  append_string(l, sql2str((yyvsp[(7) - (7)].sval)));
				  (yyval.l) = l; }
    break;

  case 479:
#line 2820 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 480:
#line 2821 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 481:
#line 2825 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 482:
#line 2826 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (2)].l_val)), 0); }
    break;

  case 483:
#line 2827 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[(2) - (2)].l_val)); }
    break;

  case 484:
#line 2829 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(3) - (4)].l_val)); }
    break;

  case 485:
#line 2831 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(4) - (4)].l_val)); }
    break;

  case 486:
#line 2835 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 487:
#line 2836 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 488:
#line 2840 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 489:
#line 2841 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 490:
#line 2845 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 491:
#line 2846 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 492:
#line 2850 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 493:
#line 2851 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 494:
#line 2855 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 495:
#line 2856 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 496:
#line 2860 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 497:
#line 2862 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 498:
#line 2868 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
    break;

  case 499:
#line 2875 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 500:
#line 2876 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 501:
#line 2877 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 502:
#line 2882 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l) );
	  append_int(l, (yyvsp[(4) - (5)].i_val) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_TRUNCATE, l ); }
    break;

  case 503:
#line 2888 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (4)].l) );
	  append_int(l, (yyvsp[(3) - (4)].i_val) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_TRUNCATE, l ); }
    break;

  case 504:
#line 2898 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
    break;

  case 505:
#line 2940 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 506:
#line 2948 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 507:
#line 2957 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 508:
#line 2959 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 509:
#line 2961 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(2) - (2)].l)); }
    break;

  case 511:
#line 2967 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(2) - (3)].l)); }
    break;

  case 512:
#line 2969 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (5)].l), (yyvsp[(4) - (5)].l)); }
    break;

  case 513:
#line 2973 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 514:
#line 2975 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 515:
#line 2979 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 516:
#line 2981 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 517:
#line 2986 "src/sql/server/sql_parser.y"
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

  case 520:
#line 3012 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
    break;

  case 523:
#line 3021 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 524:
#line 3022 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 525:
#line 3023 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 526:
#line 3027 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 527:
#line 3029 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 528:
#line 3033 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
    break;

  case 529:
#line 3038 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 530:
#line 3043 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym) );
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 531:
#line 3048 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
    break;

  case 532:
#line 3055 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 533:
#line 3056 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 534:
#line 3063 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 535:
#line 3065 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
    break;

  case 536:
#line 3070 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
    break;

  case 537:
#line 3078 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[(2) - (5)].i_val));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 538:
#line 3086 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[(3) - (5)].i_val));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 539:
#line 3096 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 540:
#line 3097 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 541:
#line 3098 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (2)].i_val); }
    break;

  case 542:
#line 3102 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 543:
#line 3103 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 544:
#line 3107 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 545:
#line 3108 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 546:
#line 3109 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 547:
#line 3113 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 548:
#line 3115 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[(2) - (2)].l)); }
    break;

  case 550:
#line 3139 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (3)].l));
	  	append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
    break;

  case 551:
#line 3148 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 552:
#line 3149 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 553:
#line 3154 "src/sql/server/sql_parser.y"
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

  case 557:
#line 3178 "src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (4)].bval), (yyvsp[(3) - (4)].l), NULL,
		(yyvsp[(4) - (4)].l)->h->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 558:
#line 3189 "src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (6)].bval), (yyvsp[(3) - (6)].l), (yyvsp[(5) - (6)].l),
		(yyvsp[(6) - (6)].l)->h->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 559:
#line 3200 "src/sql/server/sql_parser.y"
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

  case 560:
#line 3230 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 561:
#line 3232 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 563:
#line 3242 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
    break;

  case 564:
#line 3251 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
    break;

  case 565:
#line 3260 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
    break;

  case 566:
#line 3266 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 568:
#line 3271 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 569:
#line 3272 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 570:
#line 3273 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 571:
#line 3278 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 572:
#line 3280 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 573:
#line 3282 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(4) - (5)].l); }
    break;

  case 575:
#line 3292 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[(1) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(4) - (4)].sym)); }
    break;

  case 576:
#line 3300 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 577:
#line 3301 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[(2) - (2)].l)); }
    break;

  case 578:
#line 3305 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 579:
#line 3307 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 580:
#line 3311 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (2)].l));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 581:
#line 3316 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  	  	  append_int(l, 0);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 582:
#line 3322 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(2) - (3)].sym));
		  	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  	  append_int(l, 1);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 583:
#line 3328 "src/sql/server/sql_parser.y"
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

  case 584:
#line 3338 "src/sql/server/sql_parser.y"
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

  case 585:
#line 3350 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
    break;

  case 586:
#line 3354 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym);
				  append_symbol((yyvsp[(1) - (1)].sym)->data.lval, NULL); }
    break;

  case 587:
#line 3358 "src/sql/server/sql_parser.y"
    { m->caching = 0; }
    break;

  case 588:
#line 3360 "src/sql/server/sql_parser.y"
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[(3) - (5)].sym));
		append_symbol(op, (yyvsp[(5) - (5)].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
    break;

  case 589:
#line 3371 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (5)].sval));
		  	  	  append_list(l, (yyvsp[(4) - (5)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 590:
#line 3376 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (2)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 591:
#line 3381 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (4)].sval));
		  	  	  append_list(l, (yyvsp[(3) - (4)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 592:
#line 3386 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (1)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 593:
#line 3393 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 594:
#line 3394 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 595:
#line 3398 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 596:
#line 3399 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) );}
    break;

  case 597:
#line 3403 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(1) - (1)].l))); }
    break;

  case 598:
#line 3406 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(3) - (3)].l))); }
    break;

  case 599:
#line 3411 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 600:
#line 3412 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 601:
#line 3418 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
    break;

  case 602:
#line 3422 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 603:
#line 3427 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
    break;

  case 604:
#line 3431 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 605:
#line 3435 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 606:
#line 3437 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l)); }
    break;

  case 607:
#line 3441 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 608:
#line 3442 "src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 609:
#line 3446 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 610:
#line 3450 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 611:
#line 3451 "src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 612:
#line 3455 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 613:
#line 3459 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 614:
#line 3460 "src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val)));
			}
    break;

  case 615:
#line 3464 "src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[(2) - (2)].sval),NULL)));
			}
    break;

  case 616:
#line 3468 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 617:
#line 3472 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 618:
#line 3474 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 619:
#line 3479 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  append_int(l, (yyvsp[(2) - (2)].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
    break;

  case 620:
#line 3487 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 621:
#line 3488 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 622:
#line 3489 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 632:
#line 3506 "src/sql/server/sql_parser.y"
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

  case 633:
#line 3522 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 634:
#line 3527 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, (yyvsp[(2) - (3)].sval));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 635:
#line 3534 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 636:
#line 3544 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
    break;

  case 637:
#line 3551 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
    break;

  case 638:
#line 3560 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 639:
#line 3561 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 640:
#line 3562 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 641:
#line 3567 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 642:
#line 3574 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 643:
#line 3581 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 644:
#line 3588 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 645:
#line 3598 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (1)].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
    break;

  case 646:
#line 3602 "src/sql/server/sql_parser.y"
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

  case 647:
#line 3617 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[(1) - (4)].sym) );}
    break;

  case 648:
#line 3618 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[(1) - (3)].sym) ); }
    break;

  case 649:
#line 3623 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 650:
#line 3629 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 651:
#line 3635 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 652:
#line 3640 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 653:
#line 3648 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 654:
#line 3650 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 655:
#line 3656 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, (yyvsp[(2) - (4)].sval));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 656:
#line 3663 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 657:
#line 3672 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 658:
#line 3673 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 659:
#line 3674 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 660:
#line 3678 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[(2) - (2)].sym) ); }
    break;

  case 661:
#line 3682 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 662:
#line 3683 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym));  }
    break;

  case 663:
#line 3687 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 664:
#line 3692 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(1) - (3)].l));
		  append_list(l, (yyvsp[(2) - (3)].l));
		  append_list(l, (yyvsp[(3) - (3)].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
    break;

  case 665:
#line 3701 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 666:
#line 3703 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 667:
#line 3705 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 668:
#line 3709 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 669:
#line 3711 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 670:
#line 3713 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 672:
#line 3720 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 673:
#line 3727 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 674:
#line 3734 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 675:
#line 3741 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 676:
#line 3748 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 677:
#line 3755 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 678:
#line 3762 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
			  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 679:
#line 3769 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 680:
#line 3776 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 681:
#line 3783 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 682:
#line 3790 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 683:
#line 3797 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 684:
#line 3803 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 685:
#line 3810 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 686:
#line 3817 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 687:
#line 3824 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 688:
#line 3831 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 689:
#line 3838 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 690:
#line 3845 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 691:
#line 3852 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 692:
#line 3858 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 693:
#line 3865 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 694:
#line 3872 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 695:
#line 3879 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 696:
#line 3886 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 697:
#line 3888 "src/sql/server/sql_parser.y"
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

  case 698:
#line 3909 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 699:
#line 3913 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 702:
#line 3919 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
    break;

  case 703:
#line 3921 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
    break;

  case 705:
#line 3924 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[(1) - (1)].l)); }
    break;

  case 709:
#line 3928 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[(4) - (4)].l)); }
    break;

  case 717:
#line 3940 "src/sql/server/sql_parser.y"
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
    break;

  case 718:
#line 4010 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[(1) - (5)].sym)), (yyvsp[(4) - (5)].l))); }
    break;

  case 719:
#line 4015 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[(1) - (3)].l) ); }
    break;

  case 721:
#line 4021 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[(1) - (3)].sym)), (yyvsp[(2) - (3)].sym)), (yyvsp[(3) - (3)].sym)); }
    break;

  case 722:
#line 4025 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 723:
#line 4027 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 724:
#line 4031 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 725:
#line 4033 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 726:
#line 4037 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 727:
#line 4039 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[(2) - (3)].l), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val))); }
    break;

  case 728:
#line 4043 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_ROWS; }
    break;

  case 729:
#line 4044 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_RANGE; }
    break;

  case 730:
#line 4048 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(1) - (1)].sym)), _symbol_create_int(SQL_FRAME, -1)); }
    break;

  case 731:
#line 4049 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 732:
#line 4053 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 733:
#line 4054 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 734:
#line 4055 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 735:
#line 4059 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 736:
#line 4064 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(2) - (4)].sym)), (yyvsp[(4) - (4)].sym)); }
    break;

  case 737:
#line 4068 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 738:
#line 4069 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 739:
#line 4070 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 740:
#line 4074 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 741:
#line 4078 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NONE; }
    break;

  case 742:
#line 4079 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
    break;

  case 743:
#line 4080 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_GROUP; }
    break;

  case 744:
#line 4081 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_TIES; }
    break;

  case 745:
#line 4082 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
    break;

  case 746:
#line 4086 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 747:
#line 4091 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 748:
#line 4095 "src/sql/server/sql_parser.y"
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

  case 749:
#line 4122 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 750:
#line 4123 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 751:
#line 4128 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 752:
#line 4129 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "left"); }
    break;

  case 753:
#line 4130 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "right"); }
    break;

  case 754:
#line 4131 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "insert"); }
    break;

  case 755:
#line 4136 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[(3) - (6)].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 756:
#line 4143 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 757:
#line 4148 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 758:
#line 4153 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 759:
#line 4158 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 760:
#line 4163 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 761:
#line 4170 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 762:
#line 4171 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 763:
#line 4176 "src/sql/server/sql_parser.y"
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

  case 764:
#line 4186 "src/sql/server/sql_parser.y"
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

  case 765:
#line 4196 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 766:
#line 4203 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 767:
#line 4210 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 768:
#line 4217 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 769:
#line 4224 "src/sql/server/sql_parser.y"
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

  case 770:
#line 4236 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 771:
#line 4238 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 772:
#line 4243 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 773:
#line 4248 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, (yyvsp[(1) - (3)].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 774:
#line 4253 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 775:
#line 4258 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
  		  append_string(l, (yyvsp[(2) - (2)].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
    break;

  case 776:
#line 4265 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 777:
#line 4266 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 778:
#line 4267 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 779:
#line 4272 "src/sql/server/sql_parser.y"
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

  case 780:
#line 4298 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 781:
#line 4299 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 782:
#line 4304 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 783:
#line 4305 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 784:
#line 4310 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 785:
#line 4311 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 786:
#line 4318 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 787:
#line 4324 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 788:
#line 4330 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 789:
#line 4336 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 790:
#line 4342 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (4)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 791:
#line 4348 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 793:
#line 4358 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 794:
#line 4359 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = -1; }
    break;

  case 795:
#line 4360 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 796:
#line 4364 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 797:
#line 4365 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 798:
#line 4376 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 799:
#line 4378 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0+1; }
    break;

  case 800:
#line 4382 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 801:
#line 4384 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 6+1; }
    break;

  case 802:
#line 4388 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
    break;

  case 803:
#line 4390 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 804:
#line 4396 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 805:
#line 4404 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iyear; }
    break;

  case 806:
#line 4405 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imonth; }
    break;

  case 807:
#line 4406 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iday; }
    break;

  case 808:
#line 4407 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ihour; }
    break;

  case 809:
#line 4408 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imin; }
    break;

  case 811:
#line 4413 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = isec; }
    break;

  case 813:
#line 4418 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iquarter; }
    break;

  case 814:
#line 4419 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iweek; }
    break;

  case 815:
#line 4424 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 816:
#line 4430 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (1)].i_val)), 0);  }
    break;

  case 817:
#line 4433 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 818:
#line 4439 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 819:
#line 4442 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 820:
#line 4448 "src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[(1) - (3)].l)), (yyvsp[(3) - (3)].l) ); }
    break;

  case 821:
#line 4451 "src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list( L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 822:
#line 4455 "src/sql/server/sql_parser.y"
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

  case 826:
#line 4481 "src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(1) - (1)].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
    break;

  case 827:
#line 4487 "src/sql/server/sql_parser.y"
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

  case 828:
#line 4552 "src/sql/server/sql_parser.y"
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

  case 829:
#line 4583 "src/sql/server/sql_parser.y"
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

  case 830:
#line 4644 "src/sql/server/sql_parser.y"
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

  case 831:
#line 4683 "src/sql/server/sql_parser.y"
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

  case 832:
#line 4700 "src/sql/server/sql_parser.y"
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

  case 833:
#line 4716 "src/sql/server/sql_parser.y"
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

  case 834:
#line 4732 "src/sql/server/sql_parser.y"
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

  case 836:
#line 4749 "src/sql/server/sql_parser.y"
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

  case 837:
#line 4766 "src/sql/server/sql_parser.y"
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

  case 838:
#line 4783 "src/sql/server/sql_parser.y"
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

  case 839:
#line 4800 "src/sql/server/sql_parser.y"
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

  case 840:
#line 4821 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
    break;

  case 841:
#line 4825 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
    break;

  case 842:
#line 4831 "src/sql/server/sql_parser.y"
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

  case 843:
#line 4876 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 844:
#line 4877 "src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (3)].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 845:
#line 4881 "src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (5)].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[(1) - (5)].sval)), 
						(yyvsp[(3) - (5)].sval)), 
					(yyvsp[(5) - (5)].sval))
				;}
    break;

  case 846:
#line 4892 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 847:
#line 4895 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 848:
#line 4900 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[(1) - (5)].sval)), (yyvsp[(3) - (5)].sval)), (yyvsp[(5) - (5)].sval));}
    break;

  case 849:
#line 4908 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 850:
#line 4914 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 852:
#line 4926 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[(3) - (6)].sym)), (yyvsp[(5) - (6)].sym))); }
    break;

  case 853:
#line 4931 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[(3) - (4)].l)); }
    break;

  case 854:
#line 4933 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (5)].sym)),(yyvsp[(3) - (5)].l)),(yyvsp[(4) - (5)].sym))); }
    break;

  case 855:
#line 4939 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[(2) - (4)].l)),(yyvsp[(3) - (4)].sym))); }
    break;

  case 856:
#line 4947 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 857:
#line 4949 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 858:
#line 4954 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (3)].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[(3) - (3)].sym));
			}
    break;

  case 859:
#line 4958 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 860:
#line 4964 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 861:
#line 4972 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 862:
#line 4974 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 863:
#line 4979 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 864:
#line 4987 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 865:
#line 4989 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 866:
#line 4993 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 867:
#line 4994 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 869:
#line 5004 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 870:
#line 5015 "src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 871:
#line 5025 "src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 872:
#line 5035 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 873:
#line 5046 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
    break;

  case 874:
#line 5048 "src/sql/server/sql_parser.y"
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
    break;

  case 875:
#line 5052 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
    break;

  case 876:
#line 5054 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 877:
#line 5056 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 878:
#line 5058 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
    break;

  case 879:
#line 5066 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
    break;

  case 880:
#line 5068 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
    break;

  case 881:
#line 5076 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
    break;

  case 882:
#line 5077 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
    break;

  case 883:
#line 5078 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
    break;

  case 884:
#line 5079 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
    break;

  case 885:
#line 5080 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
    break;

  case 886:
#line 5082 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
    break;

  case 887:
#line 5084 "src/sql/server/sql_parser.y"
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

  case 888:
#line 5097 "src/sql/server/sql_parser.y"
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

  case 889:
#line 5114 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 890:
#line 5116 "src/sql/server/sql_parser.y"
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

  case 891:
#line 5130 "src/sql/server/sql_parser.y"
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

  case 892:
#line 5149 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 893:
#line 5150 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 894:
#line 5151 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
    break;

  case 897:
#line 5154 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 898:
#line 5156 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 899:
#line 5157 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 900:
#line 5159 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 901:
#line 5161 "src/sql/server/sql_parser.y"
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

  case 902:
#line 5172 "src/sql/server/sql_parser.y"
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

  case 903:
#line 5187 "src/sql/server/sql_parser.y"
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

  case 904:
#line 5200 "src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometry", 0, 0 )) {
			yyerror(m, SQLSTATE(22000) "type (geometry) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 905:
#line 5207 "src/sql/server/sql_parser.y"
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

  case 906:
#line 5222 "src/sql/server/sql_parser.y"
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

  case 907:
#line 5237 "src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometrya", 0, 0 )) {
			yyerror(m, SQLSTATE(22000) "type (geometrya) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 908:
#line 5244 "src/sql/server/sql_parser.y"
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

  case 909:
#line 5270 "src/sql/server/sql_parser.y"
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

  case 910:
#line 5287 "src/sql/server/sql_parser.y"
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

  case 911:
#line 5308 "src/sql/server/sql_parser.y"
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

  case 912:
#line 5322 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 913:
#line 5323 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (2)].sval); }
    break;

  case 914:
#line 5327 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 915:
#line 5328 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 916:
#line 5329 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 917:
#line 5332 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 918:
#line 5333 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 921:
#line 5341 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 922:
#line 5342 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 923:
#line 5343 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 924:
#line 5344 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 925:
#line 5345 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 926:
#line 5346 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 927:
#line 5350 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 928:
#line 5351 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 929:
#line 5352 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 930:
#line 5353 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 931:
#line 5354 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 932:
#line 5355 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 933:
#line 5356 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 935:
#line 5361 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "large"); }
    break;

  case 936:
#line 5362 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "name"); }
    break;

  case 937:
#line 5363 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "object"); }
    break;

  case 938:
#line 5364 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "password"); }
    break;

  case 939:
#line 5365 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "path"); }
    break;

  case 940:
#line 5366 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "precision"); }
    break;

  case 941:
#line 5367 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
    break;

  case 942:
#line 5368 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "role"); }
    break;

  case 943:
#line 5369 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "size"); }
    break;

  case 944:
#line 5370 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "type"); }
    break;

  case 945:
#line 5371 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "release"); }
    break;

  case 946:
#line 5372 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "value"); }
    break;

  case 947:
#line 5373 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "zone"); }
    break;

  case 948:
#line 5375 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "action"); }
    break;

  case 949:
#line 5376 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "as"); }
    break;

  case 950:
#line 5377 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
    break;

  case 951:
#line 5378 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "column"); }
    break;

  case 952:
#line 5379 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
    break;

  case 953:
#line 5380 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
    break;

  case 954:
#line 5381 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "increment"); }
    break;

  case 955:
#line 5382 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
    break;

  case 956:
#line 5383 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
    break;

  case 957:
#line 5384 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "plan"); }
    break;

  case 958:
#line 5385 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "schema"); }
    break;

  case 959:
#line 5386 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "start"); }
    break;

  case 960:
#line 5387 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "statement"); }
    break;

  case 961:
#line 5388 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "table"); }
    break;

  case 962:
#line 5390 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cache"); }
    break;

  case 963:
#line 5391 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "data"); }
    break;

  case 964:
#line 5392 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
    break;

  case 965:
#line 5393 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "match"); }
    break;

  case 966:
#line 5394 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "options"); }
    break;

  case 967:
#line 5395 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "row"); }
    break;

  case 968:
#line 5396 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "key"); }
    break;

  case 969:
#line 5397 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "language"); }
    break;

  case 970:
#line 5398 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "level"); }
    break;

  case 971:
#line 5399 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "session"); }
    break;

  case 972:
#line 5400 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "date"); }
    break;

  case 973:
#line 5401 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "time"); }
    break;

  case 974:
#line 5402 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
    break;

  case 975:
#line 5403 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "interval"); }
    break;

  case 976:
#line 5404 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "quarter"); }
    break;

  case 977:
#line 5405 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "week"); }
    break;

  case 978:
#line 5406 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
    break;

  case 979:
#line 5408 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
    break;

  case 980:
#line 5409 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "execute"); }
    break;

  case 981:
#line 5410 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "explain"); }
    break;

  case 982:
#line 5411 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "debug"); }
    break;

  case 983:
#line 5412 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "trace"); }
    break;

  case 984:
#line 5413 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "text"); }
    break;

  case 985:
#line 5414 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
    break;

  case 986:
#line 5415 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "no"); }
    break;

  case 987:
#line 5417 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "strip"); }
    break;

  case 988:
#line 5418 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
    break;

  case 989:
#line 5419 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "passing"); }
    break;

  case 990:
#line 5420 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "nil"); }
    break;

  case 991:
#line 5421 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "ref"); }
    break;

  case 992:
#line 5422 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "absent"); }
    break;

  case 993:
#line 5423 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "empty"); }
    break;

  case 994:
#line 5424 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "document"); }
    break;

  case 995:
#line 5425 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "element"); }
    break;

  case 996:
#line 5426 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "content"); }
    break;

  case 997:
#line 5427 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
    break;

  case 998:
#line 5428 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "returning"); }
    break;

  case 999:
#line 5429 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "location"); }
    break;

  case 1000:
#line 5430 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "id"); }
    break;

  case 1001:
#line 5431 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "according"); }
    break;

  case 1002:
#line 5432 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "uri"); }
    break;

  case 1003:
#line 5433 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "filter"); }
    break;

  case 1004:
#line 5434 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
    break;

  case 1005:
#line 5435 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temp"); }
    break;

  case 1006:
#line 5436 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
    break;

  case 1007:
#line 5437 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
    break;

  case 1008:
#line 5438 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "storage"); }
    break;

  case 1009:
#line 5439 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
    break;

  case 1010:
#line 5440 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "replace"); }
    break;

  case 1011:
#line 5441 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "comment"); }
    break;

  case 1012:
#line 5445 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 1013:
#line 5447 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 1014:
#line 5452 "src/sql/server/sql_parser.y"
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

  case 1015:
#line 5475 "src/sql/server/sql_parser.y"
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

  case 1016:
#line 5495 "src/sql/server/sql_parser.y"
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

  case 1017:
#line 5528 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1018:
#line 5530 "src/sql/server/sql_parser.y"
    { char *s = strconcat((yyvsp[(1) - (2)].sval),(yyvsp[(2) - (2)].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
    break;

  case 1019:
#line 5538 "src/sql/server/sql_parser.y"
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1020:
#line 5545 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (3)].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 1021:
#line 5550 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (4)].i_val));
  	  append_list(l, (yyvsp[(3) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 1022:
#line 5564 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1024:
#line 5569 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[(2) - (2)].l)); }
    break;

  case 1026:
#line 5577 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COMMENT, l );
	}
    break;

  case 1027:
#line 5583 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_COMMENT, l );
	}
    break;

  case 1028:
#line 5591 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_SCHEMA, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 1029:
#line 5592 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_TABLE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1030:
#line 5593 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VIEW, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1031:
#line 5595 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  append_string(l, (yyvsp[(4) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l );
	}
    break;

  case 1032:
#line 5601 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (6)].sval));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l );
	}
    break;

  case 1033:
#line 5607 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_INDEX, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1034:
#line 5608 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SEQUENCE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1035:
#line 5609 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ROUTINE, (yyvsp[(1) - (1)].l) ); }
    break;

  case 1037:
#line 5618 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1038:
#line 5620 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1050:
#line 5642 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
    break;

  case 1051:
#line 5650 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
    break;

  case 1052:
#line 5658 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
    break;

  case 1053:
#line 5668 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_list(l, (yyvsp[(5) - (7)].l));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
    break;

  case 1054:
#line 5678 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 1055:
#line 5680 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1056:
#line 5684 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1057:
#line 5688 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (6)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (6)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(6) - (6)].l)); }
    break;

  case 1058:
#line 5692 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1059:
#line 5696 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1060:
#line 5700 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1061:
#line 5704 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(2) - (2)].l)); }
    break;

  case 1063:
#line 5714 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1064:
#line 5718 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1065:
#line 5720 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1066:
#line 5730 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (2)].sval));
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1067:
#line 5737 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1068:
#line 5738 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1071:
#line 5751 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[(1) - (2)].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[(2) - (2)].i_val)); 	}
    break;

  case 1072:
#line 5758 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1073:
#line 5760 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1075:
#line 5768 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1076:
#line 5769 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 1077:
#line 5773 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1078:
#line 5774 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1079:
#line 5775 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1080:
#line 5776 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 1081:
#line 5777 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 1082:
#line 5784 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (7)].sym));
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_int(l, (yyvsp[(5) - (7)].i_val));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
    break;

  case 1083:
#line 5794 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1084:
#line 5795 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 1085:
#line 5800 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 1086:
#line 5802 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 1087:
#line 5807 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (2)].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[(2) - (2)].sval)); }
    break;

  case 1088:
#line 5812 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1089:
#line 5816 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1090:
#line 5817 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1091:
#line 5821 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1092:
#line 5828 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_int(l, (yyvsp[(3) - (6)].i_val) );
	  append_symbol(l, (yyvsp[(4) - (6)].sym));
	  append_int(l, (yyvsp[(5) - (6)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
    break;

  case 1093:
#line 5835 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1094:
#line 5836 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1095:
#line 5843 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_symbol(l, (yyvsp[(5) - (7)].sym));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
    break;

  case 1097:
#line 5855 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1098:
#line 5857 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1099:
#line 5868 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1114:
#line 5914 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
    break;

  case 1115:
#line 5925 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1117:
#line 5930 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1118:
#line 5934 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1119:
#line 5935 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1120:
#line 5939 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1121:
#line 5940 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1122:
#line 5941 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1123:
#line 5956 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1124:
#line 5960 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1125:
#line 5962 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1130:
#line 5985 "src/sql/server/sql_parser.y"
    { char *s = strconcat("xmlns:", (yyvsp[(3) - (3)].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1131:
#line 5994 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1132:
#line 5998 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1162:
#line 6094 "src/sql/server/sql_parser.y"
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
#line 14643 "src/sql/server/sql_parser.tab.c"
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


#line 6115 "src/sql/server/sql_parser.y"

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
	SQL(DECLARE_TABLE);
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


