/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         sqlparse
#define yylex           sqllex
#define yyerror         sqlerror
#define yydebug         sqldebug
#define yynerrs         sqlnerrs


/* Copy the first part of user declarations.  */
#line 9 "src/sql/server/sql_parser.y" /* yacc.c:339  */

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


#line 162 "src/sql/server/sql_parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sql_parser.tab.h".  */
#ifndef YY_SQL_SRC_SQL_SERVER_SQL_PARSER_TAB_H_INCLUDED
# define YY_SQL_SRC_SQL_SERVER_SQL_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sqldebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    UNION = 423,
    EXCEPT = 424,
    INTERSECT = 425,
    CORRESPONDING = 426,
    UNIONJOIN = 427,
    WITH = 428,
    DATA = 429,
    FILTER_FUNC = 430,
    NOT = 431,
    ALL = 432,
    ANY = 433,
    NOT_BETWEEN = 434,
    BETWEEN = 435,
    NOT_IN = 436,
    sqlIN = 437,
    NOT_LIKE = 438,
    LIKE = 439,
    NOT_ILIKE = 440,
    ILIKE = 441,
    OR = 442,
    SOME = 443,
    AND = 444,
    COMPARISON = 445,
    LEFT_SHIFT = 446,
    RIGHT_SHIFT = 447,
    LEFT_SHIFT_ASSIGN = 448,
    RIGHT_SHIFT_ASSIGN = 449,
    CONCATSTRING = 450,
    SUBSTRING = 451,
    POSITION = 452,
    SPLIT_PART = 453,
    UMINUS = 454,
    GEOM_OVERLAP = 455,
    GEOM_OVERLAP_OR_ABOVE = 456,
    GEOM_OVERLAP_OR_BELOW = 457,
    GEOM_OVERLAP_OR_LEFT = 458,
    GEOM_OVERLAP_OR_RIGHT = 459,
    GEOM_BELOW = 460,
    GEOM_ABOVE = 461,
    GEOM_DIST = 462,
    GEOM_MBR_EQUAL = 463,
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
#define UNION 423
#define EXCEPT 424
#define INTERSECT 425
#define CORRESPONDING 426
#define UNIONJOIN 427
#define WITH 428
#define DATA 429
#define FILTER_FUNC 430
#define NOT 431
#define ALL 432
#define ANY 433
#define NOT_BETWEEN 434
#define BETWEEN 435
#define NOT_IN 436
#define sqlIN 437
#define NOT_LIKE 438
#define LIKE 439
#define NOT_ILIKE 440
#define ILIKE 441
#define OR 442
#define SOME 443
#define AND 444
#define COMPARISON 445
#define LEFT_SHIFT 446
#define RIGHT_SHIFT 447
#define LEFT_SHIFT_ASSIGN 448
#define RIGHT_SHIFT_ASSIGN 449
#define CONCATSTRING 450
#define SUBSTRING 451
#define POSITION 452
#define SPLIT_PART 453
#define UMINUS 454
#define GEOM_OVERLAP 455
#define GEOM_OVERLAP_OR_ABOVE 456
#define GEOM_OVERLAP_OR_BELOW 457
#define GEOM_OVERLAP_OR_LEFT 458
#define GEOM_OVERLAP_OR_RIGHT 459
#define GEOM_BELOW 460
#define GEOM_ABOVE 461
#define GEOM_DIST 462
#define GEOM_MBR_EQUAL 463
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 111 "src/sql/server/sql_parser.y" /* yacc.c:355  */

	int		i_val,bval;
	lng		l_val,operation;
	double		fval;
	char *		sval;
	symbol*		sym;
	dlist*		l;
	sql_subtype	type;

#line 884 "src/sql/server/sql_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sqlparse (mvc *m);

#endif /* !YY_SQL_SRC_SQL_SERVER_SQL_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 120 "src/sql/server/sql_parser.y" /* yacc.c:358  */

extern int sqllex( YYSTYPE *yylval, void *m );
/* enable to activate debugging support
int yydebug=1;
*/

#line 906 "src/sql/server/sql_parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  239
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   18245

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  355
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  415
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2176

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   591

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
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
    2716,  2730,  2735,  2746,  2753,  2765,  2766,  2771,  2772,  2778,
    2779,  2783,  2784,  2788,  2792,  2801,  2805,  2810,  2815,  2824,
    2825,  2829,  2830,  2831,  2832,  2834,  2839,  2840,  2844,  2845,
    2849,  2850,  2854,  2855,  2859,  2860,  2864,  2865,  2870,  2879,
    2880,  2881,  2885,  2891,  2900,  2942,  2950,  2961,  2962,  2964,
    2966,  2971,  2972,  2977,  2978,  2983,  2984,  2989,  3011,  3015,
    3016,  3020,  3021,  3025,  3026,  3027,  3031,  3032,  3037,  3041,
    3046,  3051,  3059,  3060,  3066,  3068,  3073,  3081,  3089,  3100,
    3101,  3102,  3106,  3107,  3111,  3112,  3113,  3117,  3118,  3138,
    3142,  3152,  3153,  3157,  3170,  3175,  3177,  3181,  3192,  3203,
    3234,  3235,  3240,  3244,  3253,  3262,  3270,  3271,  3275,  3276,
    3277,  3282,  3283,  3285,  3290,  3294,  3304,  3305,  3309,  3310,
    3315,  3319,  3325,  3331,  3341,  3353,  3358,  3362,  3361,  3374,
    3379,  3384,  3389,  3397,  3398,  3402,  3403,  3407,  3409,  3415,
    3416,  3421,  3426,  3430,  3435,  3439,  3440,  3445,  3446,  3450,
    3454,  3455,  3459,  3463,  3464,  3468,  3472,  3476,  3477,  3482,
    3491,  3492,  3493,  3497,  3498,  3499,  3500,  3501,  3502,  3503,
    3504,  3505,  3509,  3526,  3530,  3537,  3547,  3554,  3564,  3565,
    3566,  3570,  3577,  3584,  3591,  3601,  3605,  3621,  3622,  3626,
    3632,  3638,  3643,  3651,  3653,  3658,  3666,  3676,  3677,  3678,
    3682,  3686,  3687,  3691,  3695,  3705,  3706,  3708,  3713,  3714,
    3716,  3722,  3723,  3730,  3737,  3744,  3751,  3758,  3765,  3772,
    3779,  3786,  3793,  3800,  3806,  3813,  3820,  3827,  3834,  3841,
    3848,  3855,  3861,  3868,  3875,  3882,  3889,  3891,  3913,  3917,
    3918,  3922,  3923,  3925,  3927,  3928,  3929,  3930,  3931,  3932,
    3933,  3934,  3935,  3936,  3937,  3938,  3939,  3943,  4013,  4019,
    4020,  4024,  4029,  4030,  4035,  4036,  4041,  4042,  4047,  4048,
    4052,  4053,  4057,  4058,  4059,  4063,  4067,  4072,  4073,  4074,
    4078,  4082,  4083,  4084,  4085,  4086,  4090,  4094,  4098,  4126,
    4127,  4132,  4133,  4134,  4135,  4139,  4146,  4151,  4156,  4161,
    4166,  4174,  4175,  4179,  4189,  4199,  4206,  4213,  4220,  4227,
    4240,  4241,  4246,  4251,  4256,  4261,  4269,  4270,  4271,  4275,
    4302,  4303,  4308,  4309,  4314,  4315,  4321,  4327,  4333,  4339,
    4345,  4351,  4358,  4362,  4363,  4364,  4368,  4369,  4380,  4382,
    4386,  4388,  4392,  4393,  4399,  4408,  4409,  4410,  4411,  4412,
    4416,  4417,  4421,  4422,  4423,  4427,  4433,  4436,  4442,  4445,
    4451,  4454,  4459,  4479,  4480,  4481,  4485,  4491,  4555,  4586,
    4647,  4686,  4703,  4719,  4735,  4751,  4752,  4769,  4786,  4803,
    4824,  4828,  4835,  4880,  4881,  4885,  4896,  4899,  4903,  4911,
    4917,  4925,  4929,  4934,  4936,  4942,  4950,  4952,  4957,  4961,
    4967,  4975,  4977,  4982,  4990,  4992,  4997,  4998,  5002,  5007,
    5018,  5029,  5039,  5049,  5051,  5056,  5057,  5059,  5061,  5070,
    5071,  5080,  5081,  5082,  5083,  5084,  5086,  5087,  5100,  5118,
    5119,  5133,  5153,  5154,  5155,  5156,  5157,  5158,  5159,  5161,
    5162,  5164,  5176,  5190,  5204,  5211,  5226,  5241,  5248,  5274,
    5291,  5311,  5326,  5327,  5331,  5332,  5333,  5336,  5337,  5340,
    5342,  5345,  5346,  5347,  5348,  5349,  5350,  5354,  5355,  5356,
    5357,  5358,  5359,  5360,  5361,  5365,  5366,  5367,  5368,  5369,
    5370,  5371,  5372,  5373,  5374,  5375,  5376,  5377,  5379,  5380,
    5381,  5382,  5383,  5384,  5385,  5386,  5387,  5388,  5389,  5390,
    5391,  5392,  5394,  5395,  5396,  5397,  5398,  5399,  5400,  5401,
    5402,  5403,  5404,  5405,  5406,  5407,  5408,  5409,  5410,  5412,
    5413,  5414,  5415,  5416,  5417,  5418,  5419,  5421,  5422,  5423,
    5424,  5425,  5426,  5427,  5428,  5429,  5430,  5431,  5432,  5433,
    5434,  5435,  5436,  5437,  5438,  5439,  5440,  5441,  5442,  5443,
    5444,  5445,  5449,  5450,  5455,  5478,  5499,  5531,  5533,  5541,
    5548,  5553,  5568,  5569,  5573,  5576,  5580,  5586,  5595,  5596,
    5597,  5598,  5604,  5611,  5612,  5613,  5617,  5621,  5623,  5628,
    5632,  5633,  5634,  5635,  5636,  5637,  5638,  5639,  5640,  5641,
    5645,  5653,  5661,  5668,  5682,  5683,  5687,  5691,  5695,  5699,
    5703,  5707,  5714,  5718,  5722,  5723,  5733,  5741,  5742,  5746,
    5750,  5754,  5761,  5763,  5768,  5772,  5773,  5777,  5778,  5779,
    5780,  5781,  5785,  5798,  5799,  5803,  5805,  5810,  5816,  5820,
    5821,  5825,  5830,  5839,  5840,  5844,  5855,  5859,  5860,  5865,
    5875,  5878,  5880,  5884,  5888,  5889,  5893,  5894,  5898,  5902,
    5905,  5907,  5911,  5912,  5916,  5924,  5933,  5934,  5938,  5939,
    5943,  5944,  5945,  5960,  5964,  5965,  5975,  5976,  5980,  5984,
    5988,  5998,  6002,  6005,  6007,  6011,  6012,  6015,  6017,  6021,
    6026,  6027,  6031,  6032,  6036,  6040,  6043,  6045,  6049,  6053,
    6057,  6060,  6062,  6066,  6067,  6071,  6073,  6077,  6081,  6082,
    6086,  6090,  6094
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "FILTER", "UNION", "EXCEPT", "INTERSECT", "CORRESPONDING", "UNIONJOIN",
  "WITH", "DATA", "'('", "')'", "FILTER_FUNC", "NOT", "'='", "ALL", "ANY",
  "NOT_BETWEEN", "BETWEEN", "NOT_IN", "sqlIN", "NOT_LIKE", "LIKE",
  "NOT_ILIKE", "ILIKE", "OR", "SOME", "AND", "COMPARISON", "'+'", "'-'",
  "'&'", "'|'", "'^'", "LEFT_SHIFT", "RIGHT_SHIFT", "LEFT_SHIFT_ASSIGN",
  "RIGHT_SHIFT_ASSIGN", "CONCATSTRING", "SUBSTRING", "POSITION",
  "SPLIT_PART", "'*'", "'/'", "'%'", "UMINUS", "'~'", "GEOM_OVERLAP",
  "GEOM_OVERLAP_OR_ABOVE", "GEOM_OVERLAP_OR_BELOW", "GEOM_OVERLAP_OR_LEFT",
  "GEOM_OVERLAP_OR_RIGHT", "GEOM_BELOW", "GEOM_ABOVE", "GEOM_DIST",
  "GEOM_MBR_EQUAL", "TEMP", "TEMPORARY", "STREAM", "MERGE", "REMOTE",
  "REPLICA", "DESC", "AUTHORIZATION", "CHECK", "CONSTRAINT", "CREATE",
  "COMMENT", "TYPE", "PROCEDURE", "FUNCTION", "sqlLOADER", "AGGREGATE",
  "RETURNS", "EXTERNAL", "sqlNAME", "DECLARE", "CALL", "LANGUAGE",
  "ANALYZE", "MINMAX", "SQL_EXPLAIN", "SQL_PLAN", "SQL_DEBUG", "SQL_TRACE",
  "PREP", "PREPARE", "EXEC", "EXECUTE", "DEFAULT", "DISTINCT", "DROP",
  "TRUNCATE", "FOREIGN", "RENAME", "ENCRYPTED", "UNENCRYPTED", "PASSWORD",
  "GRANT", "REVOKE", "ROLE", "ADMIN", "INTO", "IS", "KEY", "ON", "OPTION",
  "OPTIONS", "PATH", "PRIMARY", "PRIVILEGES", "PUBLIC", "REFERENCES",
  "SCHEMA", "SET", "AUTO_COMMIT", "RETURN", "ALTER", "ADD", "TABLE",
  "COLUMN", "TO", "UNIQUE", "VALUES", "VIEW", "WHERE", "sqlDATE", "TIME",
  "TIMESTAMP", "INTERVAL", "YEAR", "QUARTER", "MONTH", "WEEK", "DAY",
  "HOUR", "MINUTE", "SECOND", "ZONE", "LIMIT", "OFFSET", "SAMPLE", "CASE",
  "WHEN", "THEN", "ELSE", "NULLIF", "COALESCE", "IF", "ELSEIF", "WHILE",
  "DO", "ATOMIC", "BEGIN", "END", "COPY", "RECORDS", "DELIMITERS", "STDIN",
  "STDOUT", "FWF", "INDEX", "REPLACE", "AS", "TRIGGER", "OF", "BEFORE",
  "AFTER", "ROW", "STATEMENT", "sqlNEW", "OLD", "EACH", "REFERENCING",
  "OVER", "PARTITION", "CURRENT", "EXCLUDE", "FOLLOWING", "PRECEDING",
  "OTHERS", "TIES", "RANGE", "UNBOUNDED", "','", "'.'", "':'", "'['",
  "']'", "'?'", "$accept", "sqlstmt", "$@1", "$@2", "$@3", "$@4", "$@5",
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
  "opt_from_clause", "table_ref_commalist", "table_ref", "$@6",
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
  "XML_aggregate", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -1900

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1900)))

#define YYTABLE_NINF -1134

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1464,   136, -1900,    66, 17014,   412,   222,   595,   595, 17014,
     648,   629, -1900, 17014,   468,   568,   496, -1900, 14323, 17014,
   -1900, -1900, -1900, -1900, -1900,   959, -1900, 17313,   986,   163,
     575,   120,   117,   798,  1574,   717,   941, 12828, 12529,   694,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900,   664,   716, -1900,
   -1900, 17014, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900,   529,   517, -1900, -1900,
   -1900,  3655, 17014, -1900,   698,   698, -1900, 17014,   784,    79,
   -1900,   726,   412,   747,   585,   806, -1900, -1900, -1900, -1900,
     745, -1900,   589,   726,  9807,  9807,  1464,  1464,  9807, -1900,
   -1900,   754, -1900, 17014,   868, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900,   726,   726, -1900,   681, -1900, -1900,   726,   108,
     263,   680, -1900,   627,   709,   674, -1900, -1900, -1900,   733,
     764,   436,  1436,   962,   784, 15519, 17014, 17014, -1900,   345,
     780,  1044,   822, -1900,    68, -1900, -1900,   515, -1900, -1900,
     903, 17014,   937, -1900, -1900, 17014, -1900, -1900,   781,   812,
     817,   821, 17014, 17014,   799,   799, -1900,   796, -1900, -1900,
     847,   907, 17014, 17014, 17014, 17014, 17014, 17014, 17014, 17014,
     913,   660, 17014,   832,   832,   832,   832, 17014,   832,   832,
     832, 17014,   832,  1119, -1900, -1900, -1900,   925, 17014, 17014,
   17014,   862,   988,  1003,  1017,   934,   936,   106,   860, -1900,
     983, -1900, -1900,  1118,   545,   545,   545,   927, -1900,   946,
   15818, 17014,  1235,  1235,  1235,  1241,  1071,  1074,  1076, -1900,
   -1900, -1900, -1900, -1900,  1106,  1108,  1240, -1900, -1900, -1900,
    1111,  1111,  1111,  1111,  1111, -1900,  1113, -1900,  1116,  1130,
   17014,  1120,  1127,  1128,  1129,  1132,  1133,  1136,  1139,  1140,
    1142,  1144,  2260,  4355,  9085,  9085,  1146,  1149,  1169, -1900,
    9085,  1235,   477,   571,   109,  6754,  1170,  1171,  4355, -1900,
   -1900,   311, 16117,  1093, -1900,  1284, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, 17014, -1900, -1900, -1900, 12187, -1900, -1900,
   -1900,   953, -1900,   916, -1900, -1900,   945, -1900, -1900,  1173,
    1174,  1175,  1012, -1900, -1900, -1900, -1900, -1900, -1900,  1235,
    1235,   -55, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900,   334,  1087, -1900,  1066, -1900,
    1082,  1261,  1256, -1900,  1007, -1900, 17014, -1900, -1900,  1029,
   -1900,  3655, -1900, -1900, 17014,  1125, 17014, 17014, 17014, 17014,
   17014, 17014, 17014, 17014, 17014, -1900,  1094,  7087, 14323,  1057,
    1229,  1230, -1900, -1900,  1232,  5055,   868,  1237,  1238,  1119,
   -1900, -1900, -1900, -1900, -1900, -1900,   142,  1436,   142,  1050,
   13127,   494,  1259,  1262,  1264,   -20,   784, -1900,   920,   305,
     579,   719,  1198,   673, 17014, -1900,    54,  1112, 17014,  1044,
    1073, -1900, -1900,  1210, -1900, -1900,  1206,   799,   799,   799,
     799,  1147,  1212,  1209, 17612, 17014, 17014,   799, 17014,  1213,
    1215,  1216,  1217,   726,   857, -1900, -1900,   832,  1159, 17014,
   17014, 17014, 17014,  1119,  1290, 17014, 17014, 17014, 17014, -1900,
   17014, 17014, 17014, -1900, 17014, -1900, -1900, -1900, 17014,    81,
   -1900, -1900,    73,  1113, 17014,  4355, 17014,  1224,  1225, -1900,
     438, -1900, -1900, -1900,  1226,  1231, -1900, -1900, -1900, -1900,
   -1900,  1367, -1900,  1243, -1900, -1900, -1900,  1245,  1247,   786,
   17014, -1900, -1900, -1900,  1248,  1250,  1253,  1254,  9085, -1900,
   -1900,  1236,  1236,  1236,    52,  1105,  4355, -1900,  1257,   -12,
   -1900,  1258, -1900,  1083, -1900, -1900, -1900,  4355,  4355,  1409,
    1263, -1900, -1900, -1900, -1900, -1900,    97, -1900,  1466,  1322,
   -1900,  9085,  9085,  9085,  1211,  1281,   655,  1219,  1446,  9085,
     755,  9085,  2260,  1275,  1277,  1279,   405,  1154,   231, -1900,
       2,  1284,  2260,  1611,  1611,  9085,  9085,  9085,  1294, -1900,
     959,  1283,   959,  1283, -1900, -1900,  1235,  4355, 11561, -1900,
     624,  9085,  9085,  1284,   695,  9694, 17014, -1900,   946,  4355,
   17014, -1900, -1900,  4355,  3305,  1091,  1091,  1285,  1287,  9085,
    9085,  9085,  9085,  3305,  1123,  9085,  9085,  9085,  9085,  9085,
    9085,  9085,  9085,  9085,  9085,  9085,  9085,  9085,  9085,  9085,
    9085,  9085,  9085,  9085,  9085,  9085,  9085,  9085,  9085,   637,
    1303,  1272,  3655,  1305,  5388,  9085, -1900, -1900, 13426, 14921,
    1194,  1275, -1900,   342, -1900, -1900,  1400,  1404, -1900, -1900,
   -1900,   792,   959,   784, -1900,  1310,  1377, -1900, 17014,  1316,
    1316,  1316,  1316, -1900, -1900,  1145, -1900, -1900,   548, -1900,
   -1900, 14908,   244, -1900, -1900,    51,  1251, -1900, -1900, -1900,
    2260, -1900,   248, -1900, -1900,   950,  1119, -1900, -1900, -1900,
   -1900,   -74, -1900, -1900, -1900,   -44, -1900,  1125, 17014, -1900,
   -1900, -1900, -1900, -1900, -1900,   142,   142, -1900, -1900, -1900,
    1242,   920,  1214,  1244, -1900,  1397,  1345,  1044,  1044, -1900,
   -1900, -1900, -1900,  1044, 10157,   579, -1900, -1900,   361,   430,
    1234,   910, -1900,  1408,    39,    39, 17014,   726,  1200,  1044,
     920,  1351, 10157,  1206, -1900, -1900, 17014, 17014, 17014, 17014,
    1286,  1267, -1900,  1420, 17014,  1274,  1307,   509,  1266, 17014,
    1363, 16416, 16416, 16416, 16416,  1218, -1900, -1900,   328, 17014,
   17014,  1119,  1119,  1119,  1119, -1900, -1900,  1316,  1316,  1316,
    1316,  1119,  1119,  1119, -1900, -1900, -1900, -1900,  1004, -1900,
   -1900, -1900,  1349,   983,   959,   959, -1900,  1517,   959,   959,
     959, -1900,   454,  1283,  1283, -1900, -1900, -1900, -1900, -1900,
    1247,  1245,  1255, -1900, -1900, -1900,   959,   959,   959,   959,
    1199, -1900,  1857,  1444,   468,   468,   468, -1900, -1900, -1900,
      52,  1057,  1349,  1113, 15818,   946,  4005, 17014,  1349,  1222,
    1207, -1900, -1900, -1900, -1900, -1900, -1900, -1900,  1443, 17014,
   14908,   668, 14908, -1900,    25, -1900,  1398, 17014,  1384,  9085,
    1221, -1900, -1900,  9085, 17014, -1900,  1412,   668, -1900,  9085,
   -1900,  1458,  7420,   255, -1900, -1900, -1900,  1016,  4355, 14622,
    2040, 12987,  9381,  1386,  1271,  1235,  1389,  1235,   786,   245,
    9085, -1900,   649,  9085, -1900,  1252, 10297,  1223,   260,  4355,
   -1900, 13725,  9394, -1900, -1900,  1233,  1080, 17911, 17911, 17911,
     146,    33, -1900, -1900,  1456,  1093, -1900,  1284, -1900, -1900,
   -1900,  1736,  4355, -1900, -1900,  4355,  4355,  7753,  7753, -1900,
   12516, -1900, -1900, -1900, -1900,  1113, -1900, 14908,  1442,  1442,
    1442,  1442,  1442,  1442,  1442,  1442,  1442,  1442,  1611,  1611,
    1611,  1294,   844,   844,   844,   844,  1431,  1431,  1431,  1431,
    1431, -1900,  1473,  1249, -1900, -1900, -1900,  9085,  1399,  9085,
   14908,  1414,   213,  1239,  1410,  1417,  1418, -1900,   220, -1900,
    1246, -1900, -1900, 17014,  1110,  1505, -1900, -1900, -1900, -1900,
     372, -1900,  1316,  2669, -1900, -1900, -1900, -1900, 17014, -1900,
   -1900, -1900,  9085, -1900, -1900, -1900, -1900, -1900, -1900,  7753,
   -1900,  1330,   142,  1486,  1338,  1486, -1900,    43,    43,  1235,
    1340, 17014, 17014,  1044,   423, -1900, -1900, -1900, -1900, -1900,
   17014, 17014, -1900, -1900, 17014,  1513,  1117, -1900, 17014, 17014,
   16715, 14323, -1900,  1495,  1289,  1495,   726,  1496, -1900, -1900,
    1347,  1044, -1900, -1900,  1432,  1432,  1432,  1432, 17014,   942,
   -1900, -1900, -1900,  1592,  1342, 17014,  1390, 15220,  1525, -1900,
    1301, 17014,  1432, 16416, -1900,  1437,  1282, 10157,  1460,  1462,
    1465,   345, -1900,  1302, -1900, -1900,  1364,  1316,  1119, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900,  1467, -1900,  1468, -1900,  1469,   262,  1471,  1293, -1900,
     265, -1900, -1900, -1900, -1900,  1362,   838,  1487,  1315,  1489,
    1490,  1491,  9085, -1900, -1900, -1900,  1493, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,  1349, -1900,
   10157, 10157,  9085, -1900,   485,  1501,  9085,  1503,  1507, -1900,
    1332,  8086, 14908,   461, -1900,  1343, -1900,   633, -1900,  1335,
    1580,  1398,  1511,  1523,  1398, -1900,   277, -1900, -1900, -1900,
    1514,  1516,  1518,  1284,  9085,  9085,  9085,  9085, -1900,  1385,
   -1900, -1900, -1900, -1900,  9085, 10930, -1900,  1373, 14908, -1900,
    9085,  9085, -1900,  9085,  1284, 17911, 17911,  9394,  1275,  1521,
    1522,  1524,   713,   468,  9694, -1900, -1900, -1900,  1022,  1618,
   -1900,  9694,  1625,  1629, 17014, -1900,  1528, -1900, -1900, -1900,
   14323, 17014, -1900,  1599,  1600,  1736,  1435,  1699,   280,   282,
    1235, -1900, -1900,  1609,  1540,  1615,  1543, -1900,  1547, -1900,
   14024,  9085, 17014, -1900, -1900, -1900, -1900, -1900, -1900,  1549,
    1382,  1376, -1900, -1900,  1474, -1900,   942, -1900,  1477, -1900,
   -1900, -1900,  1717,  1235, -1900, -1900, -1900, -1900, -1900,  1119,
    1119,  1119, -1900, -1900, -1900,   538, -1900, 17014, -1900, -1900,
   -1900,   539,  2617, -1900,  1407, -1900,  1235, -1900,  1626,    80,
    1235, -1900, -1900, -1900,  1472, -1900, -1900, -1900, -1900, -1900,
    1470, 17014,   718, -1900, -1900, 14323, 17014,   299, -1900, -1900,
   -1900, -1900,   241, 17014, -1900,   345,  1562,  1480,  1568, 10310,
   17014, -1900,  1515,  1508,  1519,  1579, 17014, 17014, -1900, -1900,
   -1900, -1900, -1900, -1900,   959, -1900,   959, -1900,   959,  1247,
   -1900, -1900, -1900,   959, -1900, -1900, -1900, -1900, 17014,  1578,
    1583, 13115, -1900, -1900, -1900, -1900, -1900, -1900,  5721,  1398,
    1502,  9085, 14908,   308, -1900,  1447, -1900, -1900,   753,  9085,
    1398, 17014, -1900,  1631,  1632,  1594,  9085,  1398,   498,  9085,
   -1900,  1580, -1900,  1485,  1602, -1900,  1607, -1900,  7420,  7420,
    7753,  7753, 12816,  2942, 13423, 10613, -1900, -1900,  9085, -1900,
   13713, -1900, -1900, -1900, -1900,   315, -1900, -1900, -1900,    18,
    1080,  1709,  9694,   411,  9694, -1900, -1900,  1612, 17014,   236,
   -1900, 17014,  4355, -1900,  4355,  4355, -1900, -1900, -1900, 17014,
   -1900,  1681,    10, -1900, -1900,  1617,  1627, -1900, -1900, 10157,
   17014, -1900, -1900, -1900,  1452,  1512, -1900, -1900, -1900,  1536,
     594, -1900,  1532,  1533,   726, -1900, -1900, -1900, -1900,  1035,
   -1900,  1235,  1455,   101,  1235,  1630,  1630,  1457, -1900,  1569,
    1805, 17014, -1900,  1461, -1900,  1798,  1614, -1900,   718, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, 15220,  1539,
    1809,  1641, 17014,  1738, -1900,  1582,   412,   648,   629,  1577,
   14323,  2779,  8419,  4355,  1520, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900,  1504, -1900, -1900, -1900, -1900,  1481, 10157,  3221,  1813,
    3221,  1605, -1900,  1492,  1498,  1662, -1900,  1664,  1666, -1900,
    1667,   363, -1900,  1494, -1900, -1900, -1900,  1670, 14908,  1497,
   -1900,   465, -1900,  1506,  1680, -1900, -1900, -1900,  8086, 17014,
    1589,  1593,  1596,  1597, -1900, -1900,  1692, -1900, -1900, -1900,
   -1900, -1900,   687,  1693, -1900, -1900,   388,  1527, -1900, -1900,
   -1900,    12, -1900,  1707, -1900, -1900, -1900,   370,   377,   382,
    9085, -1900, -1900,  9085, -1900,  9085, -1900, -1900, -1900, 17911,
    9694, -1900,   726,  4355, -1900,   411, 17014,   389,  1531,  1349,
    1679,  1679,  1531,  9085, -1900, -1900, -1900,  4705, -1900, -1900,
   -1900, -1900,  1628,  1595, -1900,   574, -1900,  1778,  9085,   726,
     726, -1900,  1764, -1900,  9085, -1900,  1035, -1900, -1900, -1900,
   -1900,   504, -1900,  1235,  1811,   390, 17014,    39,    39,  1235,
    1235,  1723, -1900, 17014, -1900, -1900,  1724,  1726, -1900,   556,
   -1900,   391,    37,  1659,  3655, 17014, -1900,  1730, -1900,  1731,
   -1900, -1900,  1349,  4355, -1900,   659, 11870,   446, -1900, 11574,
    4355, -1900, -1900,  1732, 10626, -1900,  1208,   -64,  1637,   879,
    1797, -1900, -1900, -1900, -1900, -1900, 17014, 17014,  9085,  9085,
    9085, -1900,  8752, -1900, -1900, -1900, -1900,  1800,   669,  1802,
    1815, -1900, -1900, 17014, -1900, -1900,  9085,  1646,  1657,  1752,
     558, -1900, -1900, -1900, 14021, 14311, 14610, -1900, -1900, -1900,
    1349, -1900,   393, -1900,  1199,  6054,  1598,  1586,  1590,  1591,
   -1900, -1900, -1900,  1235, 17014, -1900, -1900, -1900, -1900,  1323,
    1658, -1900,  1608, -1900, -1900, -1900,  1826,  1763,  1673, 17014,
   -1900, -1900, -1900,  1601,  1714, -1900, -1900,   396, -1900,  1936,
    1495,  1495, -1900,  1668,   191, -1900, -1900,   577,  1773, -1900,
   -1900,  1862,  1863, -1900, 17014,  1684, -1900,  1606,  9085,   462,
     486, -1900, -1900,  1633,  9085, -1900,   748, -1900, 11574,  1820,
     226, 17014,  1718,  1952, -1900, -1900, -1900, -1900,  1720,  1956,
   -1900,  -174,  -171,   879, -1900,  1634, -1900,  1655, -1900,  1616,
   14908,   403, -1900,  1640, -1900, -1900,  1620, -1900, -1900,  1817,
   -1900, -1900, -1900,  1580, -1900,  1812,  1821, -1900,  1818, 17014,
    1974,   337, -1900, -1900, -1900, -1900, -1900, -1900,  1786, -1900,
   -1900, -1900,     9, -1900, -1900, -1900, 17014,  1848, -1900,  4355,
   -1900,   726,  1235, -1900, -1900, 17014, -1900,  1920,  1920, 17014,
    1235,  1719,   424, -1900, -1900, -1900, -1900, -1900, 17014,   426,
   14908,  1807, -1900, 10942,  1677, 11246, -1900,  1669,  9994,  1852,
    1671, -1900,   443, 10157, 17014,  1208, 17014,  1208,  1407, -1900,
    1407,  1407,  1407, -1900,   883,  1814, 11883, -1900,  9085, 17014,
   -1900,  9085, -1900, -1900, -1900, -1900,  1830, -1900, -1900, -1900,
    1830, -1900,  1836, 17014,  1974, -1900, -1900, -1900,  1840,  6404,
    1651, -1900,  1665, -1900,   726,  1825,   682,  1887, -1900, -1900,
   -1900,  1942,  1942, -1900,   920,  1235, -1900,   577, -1900, -1900,
    9085, -1900, 10942,  1869, -1900, -1900,  1698, -1900,  4355,  1687,
    1689, -1900, 11258, -1900, 17014, -1900, -1900, -1900, -1900, -1900,
   17014, 17014, 17014, 17014, -1900, -1900, -1900,  4355,  1694, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900,  1974, -1900, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900,  1676,  1672,  1674, -1900, -1900, -1900, -1900,
    1887,  1206, -1900, -1900,   830,  1740,  1951,  1811,  1811,  1754,
   -1900, -1900, 14908, -1900, 10942, -1900, 10942,   490,  1701, -1900,
    1710, 10157, -1900, -1900, -1900, -1900,   690, -1900, -1900, -1900,
   -1900, -1900, -1900,  1740,   640, -1900, -1900, -1900, -1900,  1161,
    1757,  1759, -1900, -1900, -1900,  1705,  1235, -1900, -1900, 17014,
   -1900, -1900, 12199, -1900, -1900,    72,    72,  1967, -1900,  1968,
   -1900,  1858, -1900, -1900,  9994, -1900, -1900, -1900,  1900, -1900,
   -1900,  1995,    -2, -1900, -1900,  1044, -1900, -1900, -1900, -1900,
   -1900,   444, -1900, -1900,  1044, -1900
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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
       0,     0,     0,   271,     0,   274,   273,     0,   871,     1,
       0,     0,     0,   172,   173,     0,   193,   192,     0,     0,
       0,     0,     0,     0,    23,    23,   171,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    21,    21,    21,     0,    21,    21,
      21,     0,    21,   422,   823,   825,   824,   971,     0,   942,
     958,   973,     0,     0,     0,  1005,  1004,    23,    41,    42,
       0,   267,     2,     0,   568,   568,   568,   607,    13,   532,
       0,     0,  1017,   927,   928,   930,   931,   932,   933,   829,
     828,   827,   830,   831,     0,     0,     0,   917,   840,   841,
     761,   761,   761,   761,   761,   703,     0,   517,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   772,
       0,   972,   973,   974,   975,     0,     0,     0,     0,   717,
     716,   576,   776,   602,   633,   604,   623,   624,   625,   626,
     627,   628,   629,     0,   630,   700,   699,   631,   671,   715,
     704,     0,   706,   708,   710,   711,   574,   770,   701,     0,
       0,     0,   707,   702,   779,   835,   705,   713,   712,     0,
       0,   846,   826,   714,  1040,  1041,  1042,  1043,  1044,  1045,
    1046,  1047,  1048,  1049,   792,   507,     0,   433,   457,   435,
       0,     0,     0,   437,   441,   442,     0,   550,   554,     0,
     278,     0,   566,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1035,     0,     0,     0,   613,
       0,     0,    10,    12,     0,     0,   499,     0,     0,   422,
     107,   108,    99,   109,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   440,   439,   177,     0,
       0,     0,     0,   605,     0,   483,     0,     0,     0,     0,
     482,   197,   196,     0,   195,   194,     0,    23,    23,    23,
      23,     0,    70,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,   277,     0,   414,   148,    21,     0,     0,
       0,     0,     0,   422,     0,     0,     0,     0,     0,   413,
       0,     0,     0,   415,     0,   424,   423,   405,     0,     0,
      50,    48,     0,     0,     0,     0,     0,   902,   897,   911,
     873,   912,   914,   915,   886,   889,   881,   882,   884,   885,
     883,   892,   894,   904,   908,   907,   802,   799,   801,     0,
       0,   895,   896,    43,   899,   874,   875,   879,     0,   569,
     570,   571,   571,   571,     0,   610,     0,   498,     0,   576,
     526,     0,   919,   844,  1018,   839,   837,     0,     0,     0,
       0,   756,   758,   757,   760,   759,     0,   660,     0,     0,
     746,     0,     0,     0,     0,  1083,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   604,     0,   708,
     846,   632,     0,   696,   697,     0,     0,     0,   691,   832,
       0,   797,     0,   797,   793,   794,     0,     0,     0,   864,
     866,     0,     0,   661,     0,     0,     0,   557,   532,     0,
     949,   775,   778,     0,     0,   638,   638,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   838,   836,     0,     0,
       0,     0,   510,   507,   505,   454,     0,     0,   436,   445,
     444,     0,     0,     0,   551,     0,   576,  1034,     0,   417,
     417,   417,   417,  1028,  1029,     0,  1030,  1033,     0,   747,
     856,   518,     0,   750,   751,     0,    39,     8,     6,     4,
       0,  1020,     0,   521,   515,   522,   422,   501,   500,   503,
     113,    80,   111,   114,    77,    78,    93,  1003,   961,    91,
      98,    97,   103,    87,    89,     0,     0,   438,   179,   178,
       0,   177,     0,     0,   122,     0,   158,     0,     0,   168,
     166,   164,   169,     0,     0,   149,   152,   161,   138,     0,
     138,   138,   272,     0,   475,   475,     0,   277,     0,     0,
     177,     0,     0,   147,   150,   156,     0,     0,     0,     0,
       0,     0,   175,     0,   950,    59,    55,   277,     0,     0,
       0,   362,   362,   362,   362,     0,   366,   367,     0,     0,
       0,   422,   422,   422,   422,   412,    22,   417,   417,   417,
     417,   422,   422,   422,   416,    47,   279,    51,   795,    52,
      46,    49,    45,     0,     0,     0,   913,     0,     0,     0,
       0,   893,     0,   797,   797,   805,   806,   807,   808,   809,
     801,   799,     0,   821,   822,   268,     0,     0,     0,     0,
     606,   617,   620,   572,     0,     0,     0,   609,   608,   870,
       0,   613,   533,     0,     0,   532,     0,     0,   851,     0,
       0,   918,   762,   813,   814,   811,   810,   812,     0,     0,
       0,   671,  1039,  1037,  1120,  1036,  1120,     0,     0,     0,
       0,  1118,  1119,     0,     0,  1100,  1101,   671,  1117,     0,
    1116,   605,     0,     0,   670,   668,   698,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   861,   866,     0,   865,     0,     0,     0,     0,     0,
     663,     0,     0,   587,   586,   577,   578,   585,   593,   593,
     843,   576,   560,   562,   595,   601,   777,   603,   659,   657,
     658,   635,     0,   639,   640,     0,     0,     0,     0,   641,
     645,   643,   642,   644,   634,     0,   664,   687,   672,   673,
     678,   688,   677,   692,   693,   694,   695,   768,   674,   675,
     676,   689,   679,   684,   682,   680,   681,   683,   685,   686,
     690,   648,     0,   722,   774,   771,   719,     0,     0,   953,
     868,     0,   846,     0,   931,   932,   933,   773,   847,   508,
     509,   506,   455,     0,     0,     0,   451,   446,   447,   443,
       0,   553,   417,     0,   397,   394,   398,   396,     0,  1027,
    1026,   748,     0,   615,   616,   614,    40,    36,  1021,     0,
     502,     0,     0,    82,     0,    82,    96,    82,    82,     0,
       0,     0,     0,     0,     0,   165,   163,   167,   157,   153,
       0,     0,   137,   118,     0,     0,     0,   117,     0,     0,
     237,     0,   480,   486,     0,   486,   277,     0,   484,   485,
       0,     0,   154,   151,   277,   277,   277,   277,     0,     0,
      24,    56,    58,     0,  1022,     0,     0,   237,   180,   203,
       0,     0,   277,   362,   361,     0,   360,     0,     0,     0,
       0,     0,   369,   371,   368,   370,     0,   417,   422,   409,
     406,   410,   408,   402,   399,   403,   401,    54,   404,   411,
      44,     0,   869,     0,   916,     0,     0,     0,   869,   909,
       0,   910,   803,   804,   819,   818,     0,     0,   869,     0,
       0,     0,     0,   621,   622,   619,     0,   563,   564,   565,
     612,   611,   559,   531,   527,   504,   528,   529,   530,   845,
       0,     0,     0,   709,     0,     0,     0,     0,     0,  1062,
    1054,     0,  1088,  1075,  1085,  1089,  1084,   671,  1096,  1097,
       0,  1120,     0,  1137,  1120,   520,     0,   519,   513,   669,
       0,     0,     0,   654,     0,     0,     0,     0,   798,     0,
     833,   800,   834,   842,     0,     0,   862,     0,   867,   855,
       0,     0,   853,     0,   662,     0,   593,     0,     0,   586,
       0,     0,   539,     0,     0,   544,   545,   546,   539,     0,
     540,     0,     0,   542,   949,   583,   592,   594,   581,   580,
       0,     0,   558,     0,   599,   656,     0,     0,     0,     0,
       0,   655,   647,     0,     0,   724,     0,   786,     0,   790,
       0,     0,     0,   458,   448,   449,   450,   395,   419,     0,
     420,  1031,   857,   516,     0,   112,     0,    75,     0,    74,
      84,    85,     0,     0,   123,   126,   162,   160,   159,   422,
     422,   422,   120,   121,   119,     0,   116,     0,   115,   210,
     211,     0,     0,   461,   381,   464,     0,   463,     0,     0,
       0,   155,   184,   185,     0,   186,   280,    72,    73,    71,
       0,     0,    61,  1023,    57,     0,     0,     0,   212,   208,
     213,   214,   919,     0,   182,     0,     0,   198,     0,   352,
       0,   364,     0,     0,     0,   275,     0,     0,   400,   407,
     903,   898,   876,   887,     0,   890,     0,   905,     0,   801,
     816,   820,   900,     0,   877,   878,   880,   618,     0,     0,
       0,     0,  1122,  1121,  1050,  1038,  1051,  1052,     0,  1120,
     986,     0,  1129,     0,  1124,     0,  1126,  1127,     0,     0,
    1120,     0,  1087,     0,     0,     0,     0,  1120,     0,     0,
    1103,  1110,  1114,     0,     0,  1138,     0,   511,     0,     0,
       0,     0,     0,     0,     0,     0,   796,   863,     0,   854,
       0,   858,   859,   584,   582,     0,   534,   667,   665,     0,
     579,     0,     0,   539,     0,   543,   541,   590,     0,   844,
     561,     0,     0,   575,     0,     0,   649,   650,   646,     0,
     718,     0,   726,   789,   788,     0,     0,   848,   418,     0,
       0,    81,    83,    79,     0,   125,   135,   136,   134,     0,
       0,   238,     0,     0,     0,   236,   215,   216,   218,   219,
     382,     0,   476,     0,     0,   469,   469,   494,   496,     0,
       0,     0,  1012,  1025,  1024,    19,     0,    53,    62,    63,
      65,    66,    69,    67,    68,   183,   269,   202,   237,     0,
       0,   205,     0,     0,   188,     0,   523,   945,   959,     0,
       0,     0,     0,     0,   296,   308,   309,   302,   303,   304,
     307,   305,   291,   293,   310,   321,   320,   325,   324,   323,
     322,     0,   306,   301,   300,   311,     0,     0,     0,     0,
       0,     0,   270,   372,   373,     0,   872,     0,     0,   817,
       0,     0,   597,   846,   849,   850,   755,     0,  1074,  1059,
    1061,  1075,  1072,  1055,     0,  1132,  1131,  1123,     0,     0,
       0,     0,     0,     0,  1076,  1086,     0,  1091,  1090,  1093,
    1094,  1092,   671,     0,  1136,  1135,   671,  1102,  1104,  1106,
    1107,     0,  1111,     0,  1115,  1162,   514,     0,     0,     0,
       0,   765,   766,     0,   767,     0,   860,   852,   666,     0,
       0,   535,     0,     0,   536,   539,     0,     0,   596,   600,
     636,   637,   723,     0,   728,   729,   721,     0,   787,   791,
     421,  1032,     0,     0,   131,     0,   129,     0,     0,     0,
       0,   263,     0,   233,     0,   217,   220,   221,   226,   227,
     228,     0,   487,     0,   492,     0,     0,   475,   475,     0,
       0,   189,    60,     0,    64,   209,   919,     0,   181,     0,
     204,     0,     0,     0,     0,     0,   326,     0,   329,   961,
     334,   333,   335,     0,   343,   345,     0,     0,   296,   352,
       0,   353,   363,     0,   352,   359,     0,     0,     0,     0,
     386,   888,   891,   906,   901,   573,     0,     0,     0,     0,
       0,  1071,     0,  1053,  1125,  1128,  1130,     0,     0,     0,
       0,  1082,  1095,     0,  1108,  1134,     0,     0,     0,     0,
       0,   512,   651,   652,     0,     0,     0,   588,   538,   548,
     547,   537,     0,   591,   725,     0,     0,     0,   671,   741,
     730,   733,   731,     0,     0,   132,   133,   130,   128,   699,
       0,   264,     0,   229,   222,   258,     0,     0,     0,     0,
     259,   231,   262,   477,     0,   462,   495,     0,   471,   473,
     486,   486,   497,     0,   177,   187,  1013,   237,     0,   207,
     170,     0,     0,   201,     0,     0,   290,     0,   330,     0,
       0,   296,   344,     0,     0,   340,   345,   296,   352,     0,
       0,     0,     0,   969,   285,   282,   292,   283,     0,     0,
     276,   383,   383,   374,   375,     0,   365,   390,   598,   847,
    1069,     0,  1064,  1067,  1060,  1073,  1056,  1058,  1077,     0,
    1080,  1079,  1078,  1133,  1105,     0,     0,  1099,     0,     0,
       0,  1151,  1140,  1141,   763,   764,   769,   589,     0,   734,
     732,   735,     0,   727,   124,   127,     0,     0,   257,     0,
     260,   277,     0,   493,   470,     0,   474,   488,   488,     0,
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1900,  1042, -1900, -1900, -1900, -1900, -1900, -1202, -1900,    48,
    -163, -1143, -1900, -1900,   840, -1900,     6, -1900,    21,   283,
   -1900,   892, -1900, -1900, -1900,   481, -1900,   705,    11,  1822,
   -1900, -1900,   -29,    16, -1900, -1900,  1824, -1900,  1563, -1900,
   -1900, -1900,  1581,  -405,   951,    45, -1900, -1900, -1900,   437,
      58, -1900,   -41, -1900,  -811,  1273,  -442, -1900, -1900, -1900,
    -774, -1900,  2023, -1900, -1900, -1900,  -103, -1900, -1900, -1900,
     947,   511, -1900, -1900, -1900, -1900, -1900, -1900, -1619, -1900,
     366, -1900, -1900, -1900, -1900, -1071,   -65,   -48,   -43,   -37,
   -1900,    -1, -1900, -1900, -1900,   -35, -1900, -1900,  -216,  -421,
   -1900,  -161,   -36, -1900, -1155,  -873, -1900,   324, -1637, -1900,
   -1362,   -52, -1676, -1900,   618, -1900, -1900, -1900, -1900, -1900,
   -1900,   215, -1900,   338, -1900,   216, -1900,   -60, -1900, -1900,
   -1900, -1900,   487,  -754, -1900, -1900, -1900, -1900, -1900, -1900,
     202,  -795,   204, -1900, -1900, -1900, -1900, -1900,  1619, -1900,
      94,  -559,   582,  -389,    26,    31, -1900,  -138, -1900,  1370,
   -1900,  2096,  1940, -1900, -1900, -1900, -1900,   560, -1900,   162,
    -797, -1900, -1900, -1101,   160,    87,  -844,   567,   569, -1900,
    1645, -1900, -1900, -1900,  1391,  -691,   643,  -948, -1900,  -396,
     647,  1027,  -164, -1900, -1900,  1203,  -584,  -905,   831, -1900,
   -1900,   433,   154, -1900,  1685, -1900, -1900,    40,   127, -1900,
     819,    22,   963,   686,  -434,  1131,  1526, -1900,  -601, -1900,
    -958,  -911, -1900, -1384, -1900,  -299,  1454,  1176, -1900, -1900,
    1268,   435,   924, -1900, -1900,  -314, -1900, -1900,  1453, -1900,
     448, -1900, -1900, -1900, -1900,  1451, -1900, -1900,  1459, -1900,
    1395,  -286,  -669,  1510,  -594,  -520, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900,   321, -1900, -1900, -1900, -1900, -1900,
   -1900,    89, -1900,  -402, -1900,   744, -1900, -1900,  1425, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900,  -500,  -505,  -558, -1900,
    -593, -1900, -1900, -1900, -1900, -1900,  1172, -1900,  2105, -1900,
    1610,   406, -1385, -1900,  1537, -1900, -1900, -1900,  1177, -1900,
    1484, -1900,  1179,  -683,   362,  -716,  -212, -1900,  -249, -1900,
    -199, -1900, -1900,  -194,  -308,    47, -1900,    -4, -1900, -1395,
    -509,     3,  -243, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
    -579, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,
     364, -1900,   159, -1900, -1900, -1900, -1671, -1900,   374,   528,
   -1900, -1900, -1900, -1900,   711, -1900, -1900, -1900, -1900, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900, -1900, -1900,   365, -1900,
   -1900, -1900, -1900, -1900, -1900, -1900,  1534,  -868,   727, -1900,
     531, -1900,   725, -1900, -1900,   254, -1142, -1900, -1900, -1900,
   -1900, -1900, -1899,   170, -1900, -1900, -1900, -1900, -1900, -1900,
     166, -1900, -1900, -1900, -1900
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
     790,  1394,   259,  1855,   260,  1574,  1148,  1149,  1740,  1387,
    1388,  1389,  1538,  1359,  1715,  1716,  1390,  1952,  1717,  1718,
    1828,  1719,  1720,  2092,  1360,  1721,  2163,  2130,  2131,  2132,
    2128,  2095,  1841,  1535,  1842,   549,  1391,    49,   232,   233,
    1612,  1150,   440,    50,  1866,  1886,    51,  1592,  1759,  2142,
    2033,  2063,  1594,  1595,  1596,  1746,  1747,  1959,  1597,  1751,
    1598,  1875,  1876,  1754,  1755,  1873,  1599,  2039,  1600,  1601,
    2155,  1972,  1764,  1155,  1156,    53,   848,  1166,  1770,  1893,
    1894,  1541,  1980,  1896,  1897,  2056,  1986,  2065,   455,   283,
    1602,  1074,  1329,   547,  1603,  1604,    57,   433,   434,   435,
    1067,   164,   427,   728,    58,  2152,  2171,  1727,  1847,  1848,
    1123,  1124,   234,  1365,  2021,  2097,  1845,  1546,  1547,    59,
     469,    60,    61,    62,   724,   953,  1246,   762,   370,   763,
    1248,   764,   161,   599,  1217,   600,   597,   984,  1292,  1496,
    1293,  1684,   235,   169,   170,   437,    64,  1605,   236,   991,
     992,    67,   591,   904,   371,   667,   668,   985,  1282,  1283,
    1297,  1298,  1304,  1621,  1503,   372,   373,   307,   595,   911,
     756,   900,   901,  1205,   374,   375,   376,   377,  1005,   378,
    1009,   379,   380,   638,   381,  1002,   382,   664,   383,   384,
     987,   385,   386,   387,   388,   389,   390,   391,  1314,  1315,
    1512,  1696,  1697,  1819,  1820,  1821,  1822,  2086,  2087,  1933,
     392,   639,   180,   181,   394,   611,   395,   396,   397,   671,
     398,   399,   400,   401,   402,   656,   965,   651,   653,   581,
     891,   927,   928,   892,  1421,   893,   894,   582,   403,   404,
     405,   989,   406,   407,   919,   408,   752,   978,   971,   972,
     659,   660,   975,  1051,  1181,   908,   237,  1615,  1330,  1190,
     409,   585,   586,   410,  1362,   773,   218,   640,   158,  1553,
     238,  1182,   412,    68,   192,  1382,  1383,  1554,    69,   456,
     933,   934,   935,   413,   414,   415,   416,   417,  1439,  1230,
    1629,  1901,  1902,  1990,  1903,  2071,  1630,  1631,  1632,  1450,
    1644,   418,   939,  1233,  1234,  1235,  1452,  1648,   419,  1455,
     420,  1239,  1457,   421,   946,  1241,  1459,  1657,  1658,  1659,
    1660,  1661,  1799,   422,   423,   949,   943,  1225,   940,  1443,
    1444,  1786,  1445,  1446,  1447,  1794,  1795,  1464,  1465,  1921,
    1922,  2000,  2001,  2074,  2119,  1923,  1998,  2005,  2006,  2081,
    2007,  2008,  2080,  2078,   424
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     157,   292,   601,   300,   722,   166,    40,   736,   441,   171,
     439,    43,  1133,   492,   182,   157,    44,  1100,  1125,   495,
     884,    41,   459,   157,  1367,   926,    55,   931,   191,  1295,
    1060,    56,  1053,   294,   301,   947,   173,  1593,   637,   641,
      65,   470,   471,  1622,   936,    45,  1130,   473,   807,  1361,
     617,   583,   951,   636,   663,  1122,   753,   312,    46,  1308,
    1309,   750,   228,   228,   986,  1083,  1227,   157,  1228,   604,
     605,   606,   883,   775,   907,   217,  1361,  1279,  1299,  1242,
     769,  1105,  1106,   312,   994,   909,   487,  1107,  1158,  1159,
    1160,   514,   786,  2010,    54,   497,  1694,  1834,  1460,  1091,
     665,   584,  1861,  1687,   312,  2079,   587,   179,  1904,  2169,
    1978,  1907,  -795,  1981,  2159,  2160,  1622,  1688,   649,  2011,
    -751,  1878,  1862,  1797,  1622,  1692,  -961,    66,   228,  1094,
    -961,  -961,   867,  -961,  -961,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,   855,   665,   172,   195,   196,   197,
     198,   199,   200,   967,    63,  1336,  2161,   411,   157,  1979,
    -961,  -961,  1979,   429,   172,  1798,   716,   717,   -88,   -88,
     -88,   -88,   -88,   -88,  2118,  1888,   225,  -751,    71,  1889,
    1555,  1075,  1076,  1077,   172,  1224,   304,   305,   306,   157,
      40,    40,    40,    40,    40,    43,    43,    43,    43,    43,
      44,    44,    44,    44,    44,    41,    41,    41,    41,    41,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    56,
     474,   489,   157,   157,    65,    65,    65,    65,    65,    45,
      45,    45,    45,    45,  1963,  1084,   226,   503,  1953,  1556,
    1968,   157,    46,    46,    46,    46,    46,  1950,   157,   512,
     393,   493,  2170,   815,    14,  1544,   872,   866,   157,   157,
     157,   157,   157,   157,   525,   157,   977,   870,   157,   217,
      13,    70,    14,   539,   598,  1092,  1544,   157,    54,    54,
      54,    54,    54,    42,   301,   550,   551,   818,   909,   909,
      13,  1812,   229,  1863,   909,   718,   438,   912,  1173,  1174,
    1175,  1176,   722,   654,   655,  1092,   602,   603,   918,   918,
    2064,    66,    66,    66,    66,    66,   753,  1483,   637,  1662,
    2072,  -751,   536,   537,   538,  2032,   540,   541,   542,   477,
     544,  1215,  1194,   636,  2042,   498,   620,   914,    63,    63,
      63,    63,    63,   636,   826,   827,   828,   829,   787,  1237,
    2012,  2162,   959,   230,   839,  2013,  1555,  1695,   969,   997,
    1001,  -479,   845,   807,  1316,  1484,  1318,   868,   672,  1014,
    1243,  1679,  1279,  1461,  1226,   475,  1466,  1090,   814,   157,
    1097,  1098,  1301,  1192,  1193,   633,  1195,  1346,  -751,   723,
    1210,  1898,  1092,  1162,  1163,  -751,  1164,  1879,  2104,  1398,
    2106,   172,  1593,  1545,   227,   369,   369,   957,  2101,   172,
     156,  -751,   172,   968,  1569,  1556,   669,  -267,   770,   513,
    1081,  2002,   231,   665,  1088,   183,   219,  1682,   436,   220,
     580,  1249,   171,   194,   228,   669,  1272,   411,  1413,   172,
     157,  1417,   157,   157,   157,   157,   743,   157,   745,   157,
     157,   788,   789,  1467,   754,  -961,  1506,   312,  1507,   876,
     877,   636,  1169,  1170,  1171,  1172,  2064,    42,    42,    42,
      42,    42,  1177,  1178,  1179,  1567,   157,   309,   791,   635,
    -799,  1285,  1286,  1287,  1637,  1288,  1289,   765,  1290,   162,
     157,  1678,  2003,  1458,   157,  2004,  1300,  1361,  1115, -1133,
    2154,   201,   202,   203,   204,  1080,   634,    13,  1189,   719,
     836,   157,   838,  1327,   157,    13,  1969,    14,    13,  1116,
     229,   873,  1668,  1669,   774,   157,   157,   157,   157,   172,
     393,   157,   157,   157,   157,   172,   157,   157,   157,  1775,
     157, -1133,  1971,  1085,   865,    13,  1801,    14, -1133,   476,
     871,   312,   301,  1802,  1264,  1108,  1247,   753,  1803,   201,
     202,   203,   204,  1320,   792,  1813,  1846,  1860,   425,  1927,
    1322,  1634,  1944,  1132,  -801,   849,   895,  1825,   666,  1987,
     958,   956,  1646,  1291,   793,  1165,   917,  1485,   720,  1653,
    -267,  1110,   159,  1082,   909,   669,   720,  1089,   616,   466,
    2026,  1432,  2029,  1420,  1250,   584,   601,  1129,  1408,  1273,
     587,  1414,   477,   878,  1418,  1835,   205,  1218,    52,  2043,
    2173,  1146,   721,   584,  1180,  1654,  1468,  1213,   587,  1089,
     721,  1089,   490,   491,   223,    13,   669,    14,  1516,  1191,
    1858,  1433,  1918,    14,  1253,  1111,  1112,  1435,  1568,  1655,
    -799,   506,   650,   963,   493,   966,  1127,  1638,   511,  1079,
    1278,   990,   993,   224,  1250,  1274,   996,   160,   519,   520,
     521,   522,   523,   524,   584,   526,   669,   163,   533,   587,
     669,  1683,  1836,  1490,  1147,  1826,  1332,   543,  1305,   206,
    1493,  1306,  1307,   207,  1705,  1275,   795,   796,  1211,   797,
     798,   799,   800,   801,   802,  1706,  1712,   803,   411,  1957,
    1052,  1713,  1776,   208,  1058,   301,  1793,   168,  1453,  1468,
    1919,  1807,  1260,  1920,  1262,   589,  1089,   821,   167,  1311,
    1859,  1089,  1448,  1837,   157,  1068,  1448, -1133,  1733,  1729,
     580,   173,  1733,   635,  -801,  1945,   652,   206,  1041,  1947,
    1948,   207,  1988,  1909,   988,  1877,   209,   795,   174,   635,
     797,   798,   799,   800,   801,   802,   175,   303,   803,   635,
     634,   208,  1707,  2027,   157,  2030,   303,  1454,  1838,  1409,
    1910,  1839,   493,  1285,  1286,  1287,   634,  1288,  1289,   684,
    1290,  1840,  2044,  2174,  1529,  1962,   634,  1532,   239,  2137,
     590,   393,    52,    52,    52,    52,    52,  1357,   310,   941,
    1449,   942,   157,  1533,  1780,  1042,  2144,  1530,  1347,  2046,
     499,  2048,   157,   157,   157,   157,  1534,   528,  1224,   302,
    1142,  1714,   304,   305,   306,   157,   500,  1157,  1157,  1157,
    1157,   304,   305,   306, -1120,   157,   157, -1098,  1708,   442,
     737,   308,   739,   740,   741,   742,  1342,   744,  2093,   746,
     747,  1619,  1652, -1098,  1640,  1656,  2141,   311,  1477,  2125,
    2126,   948,   669,   430,   584,  1481,   431,  1482,   598,   587,
     669,  1064,   432,  1188,   261,  1291,   781,   635,  1065,  1066,
     426,  1681,  1348,  1685,   529,   530,   531,   532,   753,  1198,
     813,   288,  2127,  1641,   817,  1642,  1643,   804,  1401,   941,
     602,   942,   443,  1219,   634,   304,   305,   306,   753,  1371,
     457,   837,   444,   442,   840,   157,  1207,  1208,  1209,   465,
    1850,  1851,   657,  1229,   973,   851,   852,   853,   854,   458,
    1238,   857,   858,   859,   860,  1405,   861,   862,   863,    15,
     864,   262,   263,   264,   265,  1058,   472,   970,   584,   973,
    1526,  1527,  1528,   587,   189,  1368,   478,  1753,   822,  1871,
     190,  1429,  1430,   445,    26,   808,   479,   182,   990,   480,
     685,    28,    29,  1296,  1296,  1296,   467,   468,   557,   558,
     559,   195,   196,   197,   198,   199,   200,   268,   809,  1377,
      31,   810,   811,   560,   482,  1378,   266,   561,   562,   563,
     326,   327,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   584,   584,   481,   460,   461,   587,   587,   464,   765,
     765,  1372,  1373,  1374,  1375,   483,   573,   574,   575,  1829,
     446,   447,   448,   449,   979,  1829,   267,   494,   980,  1397,
     486,   201,   202,   203,   204,   228,  1874,   269,  1871,  1323,
     704,   705,   706,   707,   708,   507,  1339,  1508,  1340,  1341,
    1276,   988,  1247,  1247,  1331,   612,   613,   614,   615,  1808,
    1951,   885,  1676,   886,   450,   887,   888,   889,   890,   496,
     451,   452,  1285,  1286,  1287,   453,   508,  1344,  1345,  1290,
    1525,   509,  2047,  1818,  2049,   510,  1349,   157,   270,  1281,
    1351,   765,   513,  1539,  1355,   157,   602,   182,   304,   305,
     306,   271,   516,  1542,   501,   502,  1548,  1549,  1011,  1012,
    1013,   517,   454,   885,  1376,   886,  1280,   887,   888,   889,
    1419,  1142,   518,  1392,  1072,   534,  -237,   157,   527,  1157,
    1285,  1286,  1287,   548,  1288,  1289,  -539,  1290,   504,   505,
    1750,   545,   546,   584,  1712,   552,   205,   553,   587,  1713,
     725,   726,   729,   730,   272,   273,   274,   275,   276,  1571,
     788,   789,   554,  2050,  1096,  2051,  2052,  2053,   846,   847,
    1690,  1691,  1003,  1004,  1119,  1112,   555,  1281,   654,   655,
    1251,  1252,  1656,  1689,  1324,  1325,   277,  1353,  1354,   556,
    1363,   312,  1885,  -237,  1891,  1892,  2054,  2055,  -193,   278,
    -192,  1818,  1126,   588,  1280,   279,  2145,  2146,   462,   463,
     280,   594,  1134,  1135,  1136,  1137,   596,  1183,   312,   206,
    1185,  1186,  1187,   207,  -911,  1152,  -782,  1118,  1120,  -784,
    2099,  -780,  1291,  2134,  2135,  1167,  1168,   619,  1197,  1199,
    1200,  1201,   609,   208,  -237,  1357,   711,   281,   592,   593,
     282,  1296,  1296,   990,   576,   577,   578,   579,   905,   906,
     990,   607,  1752,   608,  1757,   673,   610,   990,   616,  1714,
    1497,   618,   710,   821,   712,   621,  1499,   993,  1722,   493,
    1548,  1548,   622,   623,   624,  1489,   209,   625,   626,  -237,
    1865,   627,  -237,  1133,   628,   629,  1058,   630,  1517,   631,
     584,   645,  -237,   795,   646,   587,   797,   798,   799,   800,
     801,   802,   580,   674,   803,  1223,   675,   676,   677,   678,
     679,   680,   681,   682,   647,   661,   662,   683,   713,   714,
     715,  -720,   727,  1531,   731,   732,   733,   735,  1762,  1765,
     738,  1765,   748,   755,   757,   758,   988,   759,   767,   768,
     209,  1613,   783,   988,   812,   784,   785,  1552,   819,   816,
     988,   182,   157,   820,  1810,   831,   830,   833,   841,  1570,
     842,   843,   844,  1560,   850,  1606,  1607,   856,  1561,   874,
     875,   879,   301,   157,  1281,   881,   880,   903,   584,   584,
     910,   584,  1744,   587,   587,  2085,   587,  1616,   882,  1617,
     650,  1618,   652,   896,  1623,   897,  1620,  1562,   898,   899,
     685,  1280,   921,   917,  -230,   929,   913,   916,   938,   922,
    1563,   195,   196,   197,   198,   199,   200,  1647,  1961,   945,
     952,   937,  -230,   954,  1870,   955,   964,  -230,  -230,   944,
    1007,  1880,  1008,   674,   -14,     1,   675,   676,   677,   678,
     679,   680,   681,   682,  1565,   368,  1564,   683,  1043,  1044,
    1843,  1046,  1059,  1062,  1063,  1070,  1852,  1853,   990,   665,
     990,  1073,   765,   765,  1552,  1078,  1086,  1623,  1711,  -230,
    1101,  -230,  1103,  -653,  1099,  1623,   700,   701,   702,   703,
     704,   705,   706,   707,   708,     2,  1701,  1350,  1104,  1112,
    1121,  1128,  1102,  1887,  1131,  1356,  1138,  1140,  1143,     3,
       4,     5,     6,  1139,   822,  1145,  1151,  1741,  1153,   669,
    1184,  1196,     7,     8,     9,    10,  1161,  1732,  1202,  1206,
    1220,    11,  -230,  -230,  -230,  1222,  1221,  1396,  1224,  1231,
    1240,   303,  1258,  1259,  1736,  1261,  1303,   685,   301,  1560,
    1236,  1269,  1271,  1973,  1561,  1317,   990,  -230,   685,  -230,
    1934,   988,  1284,   988,  1312,  -783,  -230,  -230,  1321,  1313,
    1319,   240,  -785,  -781,  1326,  1250,  1334,  -230,  1336,    12,
    -230,  1338,  1343,  1562,  1352,  -230,  1364,  1147,  1369,  1370,
    -230,  1366,  1380,  1399,   674,  1381,  1563,   675,   676,   677,
     678,   679,   680,   681,   682,  1393,  1385,  1504,   683,  1395,
     241,  1400,  1406,   242,  1407,  1785,  1402,    13,  1403,    14,
    2016,  1404,  1416,  1410,  1411,  1412,  1809,  1415,  -815,   696,
     697,   698,  1564,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,  1422,  1423,  1424,  1425,  1426,  1428,   179,
     268,  1451,  -230,  1830,  1831,  1296,   990,  1434,   243,  1436,
     244,  1438,  1552,  1437,  1456,  1458,  1463,  1462,  1476,  1469,
     245,  1470,  1479,  1471,  1492,    15,    16,  1486,  1487,  2018,
    1488,  1494,  1495,  1498,  1501,    17,    18,  2024,    19,  1502,
      20,    21,    22,    23,  1509,    24,  1510,    25,  1511,  1513,
      26,    27,  1849,  1514,  2045,  1518,  1520,    28,    29,  1856,
     269,  1519,  1887,  1524,  1887,  1540,  2111,  1572,  1543,  2107,
     411,  1867,  1550,    30,  1575,  1521,    31,   685,  1523,  1551,
    1573,  1609,  1611,  1608,  1624,  1606,  1635,  1610,  2116,  1625,
    1606,   885,   923,   886,   924,   887,   888,   889,   925,   988,
    1651,  1663,  1623,  1899,   584,  1639,  1649,  1650,  1664,   587,
    2017,   270,  2100,  1665,    32,  1680,  1693,  1686,  1702,  1913,
    1704,  1703,  1566,  1698,   271,   246,   247,   248,   249,   250,
     251,  1709,  1710,  1699,  1723,  1726,  1729,   252,  1731,  1730,
    1733,  1737,  1738,  1614,  1739,   240,  1742,  1745,  1766,  1760,
    1935,  1743,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,  1761,   393,  1768,   157,  1769,  1758,  1771,   253,
    1772,   580,  1773,  1774,  1777,  1778,  1779,   272,   273,   274,
     275,   276,   254,  2090,   241,  1782,  1783,   242,   255,  1787,
    1867,   256,  2140,  1788,   643,   644,  1789,  1790,  1791,  1792,
     648,  1800,   683,  1824,  1606,   658,  1796,   602,   674,   277,
    1776,   675,   676,   677,   678,   679,   680,   681,   682,  1827,
    1823,  1505,   683,  2153,  1832,  1844,  1854,  1569,   279,  1864,
    -174,  1857,   243,   280,   244,  1868,  1869,  1881,  1890,  1203,
    1895,  1908,   584,  1911,   245,  1997,  1915,   587,   675,   676,
     677,   678,   679,   680,   681,   682,  1912,  1916,  1917,   683,
    1930,  1929,   157,  1932,  1931,  1936,  1937,  1938,  1939,  1946,
     281,  1849,  1940,   282,  1943,  2023,  1949,  1954,  1955,  1956,
    1942,   666,  1964,  2172,  2028,  1970,  1958,  1975,  1974,  1606,
    1976,  1977,  2175,  1985,  1606,  1994,  1322,   751,  1989,  1991,
    1867,  1984,  1867,  1992,  1995,   751,  1996,  1999,  2009,  2015,
    2020,  2025,  1606,  2031,  2034,  2070,  1748,  2040,  2036,  2057,
    2041,  2073,  2059,   685,  2076,  2003,  2088,  2061,  2089,  2077,
    2091,  2094,  2062,  2096,  2103,  2105,  2108,  2060,  2109,  2120,
    2129,  2117,  2066,  2133,  2138,  2121,  2136,  2067,  2122,   246,
     247,   248,   249,   250,   251,  2139,  2068,  2147,  1606,  2149,
    2151,   252,  2145,  2165,  2146,  2167,  2168,  1384,  1606,  1734,
     602,  1522,   776,  1335,   485,   484,  2112,  2113,  2114,  2115,
    2124,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   299,   782,   253,   696,   697,   698,  1358,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,  1109,  1735,
    1833,  2164,   255,  2150,  1204,   256,  2143,  2148,  1884,  2123,
    2158,  1966,  1967,  1872,  2166,  1983,  1982,  1767,   902,   780,
    1606,  1700,  1606,  1069,   165,   428,  1728,  2019,  2022,  2098,
    1724,   766,  1667,  1725,  1061,  1666,  1333,  1214,  1811,  1491,
    1500,   734,  1302,   995,  -174,   915,  1427,  1244,  1814,  1006,
    1071,   930,   932,   932,  1015,  2156,  1928,  1045,  1606,   930,
    1263,   932,   293,  1016,   974,   920,  1906,  2069,  2059,  1266,
    1606,  1267,  1254,  2061,  1905,   960,   961,   962,  2062,  1781,
    1645,  1914,   869,  2060,   950,  1633,  1636,  1993,  2066,  1784,
    2075,   976,   751,  2067,  2082,     0,   685,     0,     0,  1212,
       0,     0,  2068,     0,     0,     0,     0,     0,     0,  1010,
    1010,  1010,  1010,     0,     0,  1017,  1018,  1019,  1020,  1021,
    1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,     0,
       0,     0,     0,     0,  1050,  1050,     0,     0,     0,     0,
       0,     0,     0,     0,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,     0,  1941,     0,   696,   697,   698,
       0,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,     0,     0,   312,     0,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,   324,   325,
       0,     0,    78,    79,     0,     0,    80,   326,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,   328,   329,   330,   331,   332,   333,
     334,     0,     0,    83,     0,     0,   284,   285,   286,     0,
       0,     0,     0,   335,    84,     0,     0,   172,   176,     0,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,  2014,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,   336,     0,     0,
       0,   337,     0,     0,    93,   338,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,   339,    98,    99,  1255,
       0,     0,     0,     0,     0,     0,   340,   341,   342,   343,
     344,     0,   345,   346,   100,   101,   347,   348,   102,   349,
     103,   104,   105,   106,   107,   108,   109,     0,   110,   350,
     111,   112,   113,   114,     0,   115,   351,   116,     0,     0,
       0,     0,     0,    13,   117,   632,     0,   118,   353,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1232,
       0,     0,     0,   930,   354,   355,     0,     0,     0,   932,
       0,     0,   751,     0,   356,   357,   358,     0,     0,     0,
       0,   360,     0,     0,     0,     0,     0,     0,     0,     0,
    1265,   119,   120,  1268,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,   751,   751,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,   633,     0,
       0,   361,   362,   363,   364,     0,   149,  1050,   150,  1050,
       0,     0,     0,   151,     0,     0,     0,   365,     0,     0,
       0,   366,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,     0,   751,   154,   155,     0,     0,     0,     0,   751,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,     0,   369,     0,     0,     0,     0,     0,
       0,     0,   557,   558,   559,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   560,     0,     0,
       0,   561,   562,   563,   326,   327,   564,   565,   566,   567,
     568,   569,   570,   571,   572,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     573,   574,   575,     0,   557,   558,   559,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   560,
       0,     0,     0,   561,   562,   563,   326,   327,   564,   565,
     566,   567,   568,   569,   570,   571,   572,     0,     0,     0,
       0,     0,   902,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   573,   574,   575,     0,     0,     0,     0,     0,
       0,     0,  1431,     0,     0,     0,   932,     0,     0,     0,
       0,  1442,     0,     0,     0,     0,     0,     0,     0,  1536,
    1537,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1472,  1473,  1474,  1475,     0,     0,
       0,     0,     0,     0,   751,     0,     0,     0,     0,     0,
    1480,   751,   312,   751,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,   324,   325,     0,
       0,    78,    79,     0,     0,    80,   326,   327,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   328,   329,   330,   331,   332,   333,   334,
       0,  1050,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,   335,    84,     0,  1328,   172,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,   336,     0,     0,     0,
     337,     0,     0,    93,   338,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   339,    98,    99,   576,   577,
     578,   579,     0,     0,     0,   340,   341,   342,   343,   344,
       0,   345,   346,   100,   101,   347,   348,   102,   349,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   350,   111,
     112,   113,   114,     0,   115,   351,   116,     0,  1628,     0,
       0,  1442,    13,   117,   632,     0,   118,   353,     0,  1232,
     576,   577,   578,   579,     0,     0,   930,     0,     0,   930,
       0,     0,     0,   354,   355,     0,     0,     0,   751,   751,
     751,   751,     0,   356,   357,   358,     0,     0,   751,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,  1749,   144,     0,     0,     0,     0,     0,
     361,   362,   363,   364,     0,   149,     0,   150,   685,     0,
       0,     0,   151,     0,     0,     0,   365,     0,     0,     0,
     366,   367,  1756,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,     0,     0,  1672,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   368,     0,   369,     0,     0,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,     0,     0,  1442,   696,
     697,   698,     0,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1804,     0,     0,  1805,     0,  1806,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   902,     0,     0,     0,   930,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   930,     0,
       0,     0,     0,     0,   930,     0,   557,   558,   559,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   560,     0,     0,     0,   561,   562,   563,   326,   327,
     564,   565,   566,   567,   568,   569,   570,   571,   572,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   573,   574,   575,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1900,  1628,
    1628,  1673,  1628,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   930,     0,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,   930,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,  1960,     0,
       0,     0,     0,     0,  1965,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,   336,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,     0,   117,
     352,     0,   118,   353,     0,   998,   999,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1000,     0,  1900,   354,
     355,  1628,     0,     0,     0,  1763,     0,     0,     0,   356,
     357,   358,   576,   577,   578,   579,   360,     0,     0,   930,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
    2102,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   312,   369,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,   336,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,     0,   117,
     352,     0,   118,   353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,     0,     0,     0,     0,     0,   356,
     357,   358,   359,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   312,   369,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,   336,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,     0,   117,
     352,     0,   118,   353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,     0,     0,     0,     0,     0,   356,
     357,   358,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,  1216,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   312,   369,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,   336,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,     0,   117,
     352,     0,   118,   353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,     0,     0,     0,     0,     0,   356,
     357,   358,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   312,   369,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,     0,   117,
     642,     0,   118,     0,     0,     0,     0,     0,  1815,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,     0,     0,     0,     0,     0,   356,
     357,   358,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,  1816,     0,     0,     0,
       0,     0,     0,  1817,     0,     0,     0,     0,   312,   369,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,   172,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,     0,   117,
     760,   761,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,     0,     0,     0,     0,     0,   356,
     357,   358,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
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
       0,     0,   117,   642,     0,   118,     0,     0,  1047,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,   355,     0,     0,     0,     0,     0,     0,
       0,     0,   356,   357,   358,  1048,     0,     0,     0,   360,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,  1049,     0,     0,     0,     0,     0,     0,
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
     333,   334,     0,     0,    83,     0,     0,   284,   285,   286,
       0,     0,     0,     0,   335,    84,     0,     0,     0,   176,
       0,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,   337,     0,     0,    93,   338,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,   339,    98,    99,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
     343,   344,  1627,   345,   346,   100,   101,   347,   348,   102,
     349,   103,   104,   105,   106,   107,   108,   109,   938,   110,
     350,   111,   112,   113,   114,     0,   115,   351,   116,     0,
       0,     0,     0,     0,     0,   117,   642,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   354,   355,     0,     0,     0,
       0,     0,     0,     0,     0,   356,   357,   358,     0,     0,
       0,     0,   360,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,     0,     0,     0,
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
     330,   331,   332,   333,   334,     0,     0,    83,     0,     0,
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
     351,   116,     0,     0,     0,     0,     0,     0,   117,   642,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,     0,     0,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,     0,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,  1816,     0,     0,     0,     0,
       0,     0,  1817,     0,     0,     0,     0,   312,   369,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,     0,    83,     0,     0,
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
     351,   116,     0,     0,     0,     0,     0,     0,   117,   642,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,     0,     0,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,     0,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,  2083,     0,     0,     0,     0,
       0,     0,  2084,     0,     0,     0,     0,   312,   369,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,     0,    83,     0,     0,
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
     351,   116,     0,     0,     0,     0,     0,     0,   117,   642,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,     0,     0,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,   657,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
     312,     0,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,     0,   324,   325,     0,   369,    78,
      79,     0,     0,    80,   326,   327,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,    82,     0,
       0,   328,   329,   330,   331,   332,   333,   334,     0,     0,
      83,     0,     0,   284,   285,   286,     0,     0,     0,     0,
     335,    84,     0,     0,     0,   176,     0,   177,   178,     0,
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
       0,   117,   642,   749,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   354,   355,     0,     0,     0,     0,     0,     0,     0,
       0,   356,   357,   358,     0,     0,     0,     0,   360,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
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
     334,     0,     0,    83,     0,     0,   284,   285,   286,     0,
       0,     0,     0,   335,    84,     0,     0,     0,   176,     0,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,   337,     0,     0,    93,   338,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,   339,    98,    99,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   342,   343,
     344,     0,   345,   346,   100,   101,   347,   348,   102,   349,
     103,   104,   105,   106,   107,   108,   109,     0,   110,   350,
     111,   112,   113,   114,     0,   115,   351,   116,     0,     0,
       0,     0,     0,     0,   117,   642,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   354,   355,     0,     0,     0,     0,
       0,     0,     0,     0,   356,   357,   358,     0,     0,     0,
       0,   360,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,  1245,   134,     0,     0,     0,     0,
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
     331,   332,   333,   334,     0,     0,    83,     0,     0,   284,
     285,   286,     0,     0,     0,     0,   335,    84,     0,     0,
     172,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,   337,     0,     0,    93,   338,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   339,
      98,    99,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   343,   344,     0,   345,   346,   100,   101,   347,
     348,   102,   349,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   350,   111,   112,   113,   114,     0,   115,   351,
     116,     0,     0,     0,     0,     0,     0,   117,   760,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,   355,     0,
       0,     0,     0,     0,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
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
     328,   329,   330,   331,   332,   333,   334,     0,     0,    83,
       0,     0,   284,   285,   286,     0,     0,     0,     0,   335,
      84,     0,     0,     0,   176,     0,   177,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
    1440,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,   337,     0,     0,
      93,   338,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,   339,    98,    99,     0,     0,     0,     0,     0,
       0,     0,   340,   341,   342,   343,   344,     0,   345,   346,
     100,   101,   347,   348,   102,   349,   103,   104,   105,   106,
     107,   108,   109,     0,   110,   350,   111,   112,   113,   114,
       0,   115,   351,   116,     0,     0,     0,     0,     0,     0,
     117,   642,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     354,   355,     0,     0,     0,     0,     0,     0,     0,     0,
     356,   357,   358,     0,     0,     0,     0,   360,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,   121,     0,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,   124,     0,     0,   125,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
    1441,   134,     0,     0,     0,     0,     0,     0,   135,     0,
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
       0,     0,    83,     0,     0,   284,   285,   286,     0,     0,
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
       0,     0,     0,   117,   642,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,   355,     0,     0,     0,     0,     0,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     361,   362,   363,   364,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   365,  1753,     0,     0,
     366,   367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,   312,     0,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
     324,   325,     0,   369,    78,    79,     0,     0,    80,   326,
     327,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    82,     0,     0,   328,   329,   330,   331,
     332,   333,   334,     0,     0,    83,     0,     0,   284,   285,
     286,     0,     0,     0,     0,   335,    84,     0,     0,     0,
     176,     0,   177,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,   337,     0,     0,    93,   338,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,   339,    98,
      99,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,   343,   344,  1627,   345,   346,   100,   101,   347,   348,
     102,   349,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   350,   111,   112,   113,   114,     0,   115,   351,   116,
       0,     0,     0,     0,     0,     0,   117,   642,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   354,   355,     0,     0,
       0,     0,     0,     0,     0,     0,   356,   357,   358,     0,
       0,     0,     0,   360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
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
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,     0,   117,
     642,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,     0,     0,     0,     0,     0,   356,
     357,   358,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,    78,    79,   154,   155,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,   172,   176,   981,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,   685,     0,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,     0,     0,     0,     0,    13,   117,  1277,
       0,   118,     0,     0,     0,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,     0,     0,     0,   696,   697,
     698,     0,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,  1278,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,     0,     0,
      80,   152,   153,     0,     0,     0,     0,   154,   155,     0,
    1257,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   983,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,   176,   981,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,     0,     0,     0,     0,     0,   117,   982,
       0,   118,     3,     4,     5,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,    10,     0,
       0,     0,     0,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
      13,     0,    14,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,     0,     0,
      80,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,    81,     0,     0,    82,     0,     0,    15,    16,
       0,     0,     0,     0,     0,     0,   983,    83,    17,    18,
       0,    19,     0,     0,     0,     0,     0,     0,    84,     3,
       4,  1576,     6,    26,    27,     0,     0,     0,     0,     0,
      28,    29,     7,     8,     9,  1577,     0,     0,    86,     0,
       0,  1578,     0,     0,     0,     0,    30,    88,     0,    31,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
       0,    98,    99,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,   557,   558,   559,     0,     0,     0,   117,     0,
       0,   118,     0,     0,     0,     0,     0,   560,     0,     0,
       0,   561,   562,   563,   326,   327,   564,   565,   566,   567,
     568,   569,   570,   571,   572,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     573,   574,   575,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,    15,   122,   123,     0,     0,
       0,     0,     0,     0,   124,    17,  1580,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
      26,    27,     0,     0,     0,     0,   135,    28,    29,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,    30,   142,  1581,    31,     0,   143,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,  1582,     0,     0,  2037,     0,     0,  1583,  2038,  -352,
       0,     0,     0,     0,    32,    72,    73,    74,    75,    76,
      77,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,    78,    79,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     3,     4,  1576,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,  1577,     0,     0,    86,     0,     0,  1578,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,   685,     0,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   576,   577,
     578,   579,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,     0,   115,     0,   116,     0,     0,
       0,     0,     0,     0,   117,     0,     0,   118,     0,     0,
       0,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,     0,     0,     0,   696,   697,   698,     0,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,    15,   122,   123,     0,     0,     0,     0,     0,  1579,
     124,    17,  1580,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,    26,    27,     0,     0,
       0,     0,   135,    28,    29,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,    30,
     142,  1581,    31,     0,   143,   144,     0,     0,     0,     0,
       0,   145,   146,   147,   148,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,  1582,     0,     0,
       0,     0,     0,  1583,     0,     0,     0,     0,  1584,     0,
      32,    72,    73,    74,    75,    76,    77,   152,   153,     0,
       0,     0,     0,   154,   155,     0,  1270,     0,    78,    79,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     3,     4,  1576,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,  1577,     0,     0,
      86,     0,     0,  1578,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,     0,     0,    95,    96,    97,   685,
       0,     0,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   102,     0,   103,   104,   105,   106,
     107,   108,   109,     0,   110,     0,   111,   112,   113,   114,
       0,   115,     0,   116,     0,     0,     0,     0,     0,     0,
     117,     0,     0,   118,     0,     0,     0,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,     0,     0,     0,
     696,   697,   698,     0,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,   121,     0,     0,    15,   122,   123,
       0,     0,     0,     0,     0,  1882,   124,    17,  1580,  1883,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
       0,   134,    26,    27,     0,     0,     0,     0,   135,    28,
      29,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,    30,   142,  1581,    31,     0,
     143,   144,     0,     0,     0,     0,     0,   145,   146,   147,
     148,     0,   149,     0,   150,     0,     0,     0,     0,   151,
       0,     0,     0,  1582,     0,     0,     0,     0,     0,  1583,
       0,     0,     0,     0,  1584,     0,    32,    72,    73,    74,
      75,    76,    77,   152,   153,     0,     0,     0,     0,   154,
     155,     0,  1675,     0,    78,    79,     0,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     3,     4,  1576,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1577,     0,     0,    86,     0,     0,  1578,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,     0,   685,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,     0,   115,     0,   116,
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
       0,     0,     0,     0,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,     0,     0,     0,   696,   697,   698,
       0,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     121,     0,     0,    15,   122,   123,     0,     0,     0,     0,
       0,     0,   124,    17,  1580,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,    26,    27,
       0,     0,     0,     0,   135,    28,    29,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,    30,   142,  1581,    31,     0,   143,   144,     0,     0,
       0,     0,     0,   145,   146,   147,   148,     0,   149,  1478,
     150,     0,     0,     0,     0,   151,     0,     0,     0,  1582,
       0,     0,     0,     0,     0,  1583,     0,  -352,     0,     0,
       0,     0,    32,    72,    73,    74,    75,    76,    77,   152,
     153,     0,     0,     0,     0,   154,   155,     0,     0,     0,
      78,    79,     0,     0,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     3,     4,  1576,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,  1577,
       0,     0,    86,     0,     0,  1578,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,     0,   685,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,     0,   115,     0,   116,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,     0,     0,     0,     0,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
       0,     0,     0,   696,   697,   698,     0,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,    15,
     122,   123,     0,     0,     0,     0,     0,     0,   124,    17,
    1580,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,    26,    27,     0,     0,     0,     0,
     135,    28,    29,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,    30,   142,  1581,
      31,     0,   143,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,     0,   149,  2035,   150,     0,     0,     0,
       0,   151,     0,     0,     0,  1582,     0,     0,     0,     0,
       0,  1583,     0,     0,     0,     0,     0,  2110,    32,    72,
      73,    74,    75,    76,    77,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,     0,    78,    79,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
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
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,     0,     0,     0,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,     0,     0,     0,   696,   697,
     698,     0,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,    15,   122,   123,     0,     0,
       0,     0,     0,     0,   124,    17,  1580,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
      26,    27,     0,     0,     0,     0,   135,    28,    29,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,    30,   142,  1581,    31,     0,   143,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,   970,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,  1582,     0,     0,     0,     0,     0,  1583,    72,    73,
      74,    75,    76,    77,    32,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,    78,    79,   154,   155,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     3,     4,
    1576,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1577,     0,     0,    86,     0,     0,
    1578,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,     0,     0,    95,    96,    97,   685,     0,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   102,     0,   103,   104,   105,   106,   107,   108,   109,
       0,   110,     0,   111,   112,   113,   114,     0,   115,     0,
     116,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     118,     0,     0,     0,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,     0,     0,     0,   696,   697,   698,
       0,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,    17,  1580,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
      27,     0,     0,     0,     0,   135,    28,    29,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,    30,   142,  1581,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,  1874,   149,
       0,   150,     0,     0,     0,     0,   151,     0,     0,     0,
    1582,     0,     0,     0,     0,     0,  1583,     0,     0,     0,
       0,  2058,     0,    32,    72,    73,    74,    75,    76,    77,
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
       0,    78,    79,     0,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     3,     4,  1576,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    1577,     0,     0,    86,     0,     0,  1578,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
      96,    97,     0,   685,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,     0,     0,   102,     0,   103,
     104,   105,   106,   107,   108,   109,     0,   110,     0,   111,
     112,   113,   114,     0,   115,     0,   116,     0,     0,     0,
       0,     0,     0,   117,     0,     0,   118,     0,     0,     0,
       0,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,     0,     0,     0,   696,   697,   698,     0,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
      17,  1580,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,   709,    27,     0,     0,     0,
       0,   135,    28,    29,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,    30,   142,
    1581,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,  1582,     0,     0,     0,
       0,     0,  1583,     0,     0,     0,     0,     0,  2157,    32,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,     0,   240,     0,     0,     0,
       0,    78,    79,     0,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,   242,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,  1310,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
      96,    97,   685,     0,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,     0,     0,   102,     0,   103,
     104,   105,   106,   107,   108,   109,     0,   110,     0,   111,
     112,   113,   114,     0,   115,     0,   116,     0,     0,     0,
       0,     0,     0,   117,     0,     0,   118,     0,     0,     0,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
       0,     0,     0,   696,   697,   698,     0,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     295,   296,   248,   249,   250,   251,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   297,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,     0,   149,     0,   150,     0,     0,
       0,     0,   151,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,    80,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,   284,   285,   286,     0,     0,     0,
       0,     0,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,  1670,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,     0,   685,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,  1671,   115,     0,   116,     0,     0,     0,     0,
       0,     0,   117,   288,     0,   118,     0,     0,     0,     0,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
       0,     0,     0,   696,   697,   698,     0,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   289,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   290,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   145,
     291,   147,   148,   685,   149,     0,   150,     0,     0,     0,
       0,   151,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,     0,     0,    80,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,    81,     0,     0,    82,     0,
       0,     0,  1256,     0,     0,     0,     0,     0,     0,     0,
      83,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,    84,     0,     0,   696,   697,   698,     0,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,    85,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
       0,   685,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,  1626,   115,     0,   777,     0,     0,     0,     0,     0,
       0,   117,     0,     0,   118,     0,     0,     0,     0,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,     0,
       0,     0,   696,   697,   698,     0,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,   446,   447,   448,   449,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,     0,   142,     0,     0,
       0,   778,   144,     0,     0,     0,     0,     0,   145,   146,
     147,   148,     0,   149,     0,   150,     0,     0,     0,     0,
     151,    72,    73,    74,  1054,  1055,  1056,     0,     0,     0,
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
       0,     0,     0,    98,    99,     0,     0,     0,     0,   685,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   102,     0,   103,   104,   105,   106,
     107,   108,   109,     0,   110,     0,   111,   112,   113,   114,
       0,   115,     0,   116,     0,     0,     0,     0,     0,  1674,
     117,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,     0,     0,     0,
     696,   697,   698,  1057,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,     0,     0,     0,   119,   120,     0,
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
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,     0,     0,    95,    96,    97,     0,   685,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,     0,   102,     0,   103,   104,   105,   106,   107,
     108,   109,     0,   110,     0,   111,   112,   113,   114,  1677,
     115,     0,   116,     0,     0,     0,     0,     0,     0,   117,
     616,     0,   118,     0,     0,     0,     0,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,     0,     0,     0,
     696,   697,   698,     0,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   145,   146,   147,   148,
       0,   149,     0,   150,     0,     0,     0,     0,   151,    72,
      73,    74,  1054,  1055,  1056,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,     0,     0,
      80,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
       0,    98,    99,     0,     0,     0,     0,   685,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,     0,     0,     0,     0,  1924,   117,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,     0,     0,     0,   696,   697,
     698,  1515,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
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
       0,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,     0,     0,    95,    96,    97,     0,   685,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   102,     0,   103,   104,   105,   106,   107,   108,   109,
       0,   110,     0,   111,   112,   113,   114,  1925,   115,     0,
     116,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     118,     0,     0,     0,     0,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,     0,     0,     0,   696,   697,
     698,     0,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,    72,    73,    74,
    1054,  1055,  1056,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,     0,    80,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
     176,     0,   177,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,     0,   685,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,  1926,   115,     0,   116,
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
       0,     0,     0,     0,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,     0,     0,     0,   696,   697,   698,
       0,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,    84,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,     0,
       0,    95,    96,    97,   685,     0,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,     0,   102,
       0,   103,   104,   105,   106,   107,   108,   109,     0,   110,
       0,   111,   112,   113,   114,     0,   115,     0,   116,     0,
       0,     0,     0,     0,     0,   117,    14,     0,   118,     0,
       0,     0,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,     0,     0,     0,   696,   697,   698,     0,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,     0,
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
       0,     0,    78,    79,     0,     0,    80,     0,   152,   153,
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
       0,     0,     0,     0,   117,     0,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1386,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
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
       0,     0,     0,   117,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,   488,   142,
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
       0,     0,   117,   288,     0,   118,     0,     0,     0,     0,
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
       0,   117,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   669,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
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
       0,     0,    80,     0,   152,   670,     0,     0,     0,     0,
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
       0,   115,     0,   116,     0,     0,     0,     0,     0,     0,
     117,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1154,     0,     0,     0,     0,     0,     0,
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
     115,     0,   116,     0,     0,     0,     0,     0,     0,   117,
       0,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
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
     116,     0,     0,     0,     0,     0,     0,   117,     0,     0,
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
       0,   141,     0,   142,     0,     0,     0,   193,   144,     0,
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
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     834,     0,     0,     0,   122,   123,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,   117,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   152,  1294,
       0,     0,     0,     0,   154,   155
};

static const yytype_int16 yycheck[] =
{
       4,    37,   310,    38,   425,     9,     0,   441,   172,    13,
     171,     0,   823,   229,    18,    19,     0,   791,   815,   231,
     578,     0,   183,    27,  1125,   618,     0,   621,    25,   987,
     721,     0,   715,    37,    38,   629,    14,  1399,   352,   353,
       0,   202,   203,  1428,   623,     0,   820,   208,   490,  1120,
     336,   300,   631,   352,   368,    16,   458,     3,     0,  1007,
    1008,   457,    11,    11,   665,    14,   934,    71,   936,   312,
     313,   314,   577,   478,   594,    28,  1147,   982,   989,   947,
     469,   797,   798,     3,   668,   594,   224,   803,   842,   843,
     844,   254,   112,    84,     0,    27,    86,  1716,  1240,   173,
     112,   300,    65,  1498,     3,  2004,   300,    18,  1779,   111,
     284,  1782,     3,   284,    42,    43,  1501,  1501,   361,   110,
     175,  1758,    85,   111,  1509,  1509,    20,     0,    11,   173,
      24,    25,    59,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,   533,   112,    67,     5,     6,     7,
       8,     9,    10,   653,     0,   112,    84,   161,   162,   333,
      54,    55,   333,   167,    67,   153,   409,   410,     5,     6,
       7,     8,     9,    10,  2073,   239,    56,   175,   112,   243,
    1382,   740,   741,   742,    67,   160,   168,   169,   170,   193,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     112,   225,   226,   227,   184,   185,   186,   187,   188,   184,
     185,   186,   187,   188,  1871,   755,   116,   241,  1857,  1382,
    1877,   245,   184,   185,   186,   187,   188,    56,   252,   253,
     161,   229,   254,   496,   175,   175,   555,   176,   262,   263,
     264,   265,   266,   267,   268,   269,   662,   553,   272,   222,
     173,   135,   175,   277,   310,   349,   175,   281,   184,   185,
     186,   187,   188,     0,   288,   289,   290,   499,   797,   798,
     173,  1686,   175,   256,   803,   350,   169,   596,   857,   858,
     859,   860,   723,   194,   195,   349,   310,   311,   607,   608,
    1986,   184,   185,   186,   187,   188,   718,  1275,   632,  1461,
    1991,   175,   274,   275,   276,  1962,   278,   279,   280,   349,
     282,   915,   890,   632,  1971,   267,   340,   349,   184,   185,
     186,   187,   188,   642,   507,   508,   509,   510,   486,   943,
     341,   279,   350,   236,   517,   346,  1558,   347,   657,   673,
     674,   322,   523,   805,  1047,  1276,  1049,   294,   372,   683,
     949,   353,  1277,  1241,   349,   267,  1244,   766,   324,   383,
     785,   786,   349,   883,   884,   288,   891,  1103,   175,   425,
     910,  1776,   349,    65,    66,   175,    68,  1759,  2035,  1153,
    2037,    67,  1764,   323,   284,   354,   354,   176,  2027,    67,
       4,   175,    67,   656,   173,  1558,   190,   176,   276,   313,
     176,    84,   305,   112,   176,    19,   263,    16,   349,   266,
     349,   176,   436,    27,    11,   190,   176,   441,   176,    67,
     444,   176,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   260,   261,   176,   458,   349,   176,     3,   176,    21,
      22,   760,   851,   852,   853,   854,  2142,   184,   185,   186,
     187,   188,   861,   862,   863,   176,   480,    71,   173,   352,
       3,    70,    71,    72,   176,    74,    75,   465,    77,   267,
     494,   176,   155,   105,   498,   158,   350,  1568,    68,   111,
    2137,    65,    66,    67,    68,   748,   352,   173,    54,   175,
     514,   515,   516,  1072,   518,   173,  1878,   175,   173,    89,
     175,   556,  1470,  1471,   477,   529,   530,   531,   532,    67,
     441,   535,   536,   537,   538,    67,   540,   541,   542,   176,
     544,   153,   316,   755,   548,   173,   176,   175,   160,   286,
     554,     3,   556,   176,   309,   804,   952,   959,   176,    65,
      66,    67,    68,   350,   259,   176,   176,   176,   162,   176,
     350,  1439,   176,   822,     3,   527,   580,     3,   267,   176,
     349,   176,  1450,   172,   279,   257,   350,  1278,   254,  1457,
     349,   230,   180,   349,  1103,   190,   254,   349,   175,   193,
     176,   116,   176,  1196,   349,   804,   914,   819,  1167,   349,
     804,   349,   349,   175,   349,   111,   180,   916,     0,   176,
     176,   112,   288,   822,   873,   127,   349,   913,   822,   349,
     288,   349,   226,   227,    59,   173,   190,   175,  1321,   882,
      84,   156,    84,   175,   958,   284,   285,  1226,   349,   151,
     173,   245,   175,   650,   632,   652,   817,   349,   252,   111,
     288,   665,   666,    88,   349,   979,   670,   255,   262,   263,
     264,   265,   266,   267,   873,   269,   190,    82,   272,   873,
     190,   270,   178,  1284,   175,   111,  1082,   281,  1002,   253,
    1291,  1005,  1006,   257,   100,   981,   117,   118,   910,   120,
     121,   122,   123,   124,   125,   111,   129,   128,   712,  1864,
     714,   134,   349,   277,   718,   719,   328,    88,    85,   349,
     162,  1679,   965,   165,   967,   180,   349,    87,    80,  1015,
     174,   349,   271,   229,   738,   732,   271,   349,   349,   349,
     349,   719,   349,   616,   173,   349,   175,   253,   111,  1850,
    1851,   257,   349,    84,   665,   309,   320,   117,   190,   632,
     120,   121,   122,   123,   124,   125,   270,   103,   128,   642,
     616,   277,   178,   349,   778,   349,   103,   144,   274,  1168,
     111,   277,   760,    70,    71,    72,   632,    74,    75,   383,
      77,   287,   349,   349,   256,   309,   642,   258,     0,   309,
     255,   712,   184,   185,   186,   187,   188,   230,   279,   154,
     349,   156,   816,   274,   349,   178,   176,   279,  1104,  1974,
     305,  1976,   826,   827,   828,   829,   287,   167,   160,   135,
     834,   254,   168,   169,   170,   839,   321,   841,   842,   843,
     844,   168,   169,   170,   176,   849,   850,   160,   254,   176,
     444,   135,   446,   447,   448,   449,  1099,   451,   176,   453,
     454,  1419,  1456,   176,   111,  1459,   176,   350,  1264,    39,
      40,   116,   190,    89,  1073,  1271,    92,  1273,   914,  1073,
     190,    89,    98,   880,   167,   172,   480,   760,    96,    97,
     192,  1492,  1104,  1494,   234,   235,   236,   237,  1300,   896,
     494,   175,    72,   150,   498,   152,   153,   328,  1157,   154,
     914,   156,   327,   917,   760,   168,   169,   170,  1320,  1131,
     175,   515,   116,   176,   518,   929,   904,   905,   906,   175,
    1727,  1728,   308,   937,   310,   529,   530,   531,   532,   350,
     944,   535,   536,   537,   538,  1161,   540,   541,   542,   231,
     544,   234,   235,   236,   237,   959,   275,   308,  1157,   310,
    1349,  1350,  1351,  1157,     5,  1126,   286,   308,   328,   310,
      11,  1220,  1221,   167,   256,   256,   349,   981,   982,   270,
     136,   263,   264,   987,   988,   989,   118,   119,     5,     6,
       7,     5,     6,     7,     8,     9,    10,    56,   279,    57,
     282,   282,   283,    20,   271,    63,   289,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,  1220,  1221,   349,   184,   185,  1220,  1221,   188,  1007,
    1008,  1134,  1135,  1136,  1137,   271,    53,    54,    55,  1708,
     234,   235,   236,   237,   349,  1714,   329,   267,   353,  1152,
      88,    65,    66,    67,    68,    11,   308,   116,   310,  1063,
     216,   217,   218,   219,   220,   284,  1095,  1310,  1097,  1098,
     981,   982,  1468,  1469,  1078,   331,   332,   333,   334,  1680,
    1854,   295,  1478,   297,   278,   299,   300,   301,   302,   267,
     284,   285,    70,    71,    72,   289,   284,  1101,  1102,    77,
    1343,   284,  1975,  1697,  1977,   284,  1110,  1111,   167,   982,
    1114,  1089,   313,  1362,  1118,  1119,  1120,  1121,   168,   169,
     170,   180,   326,  1366,   221,   222,  1369,  1370,   680,   681,
     682,   284,   326,   295,  1138,   297,   982,   299,   300,   301,
     302,  1145,   235,  1147,   738,   313,   111,  1151,   235,  1153,
      70,    71,    72,   228,    74,    75,    76,    77,   221,   222,
    1581,    42,    43,  1362,   129,   303,   180,   179,  1362,   134,
      83,    84,    90,    91,   233,   234,   235,   236,   237,  1395,
     260,   261,   179,  1978,   778,  1980,  1981,  1982,   331,   332,
    1504,  1505,   101,   102,   284,   285,   179,  1070,   194,   195,
     184,   185,  1796,  1502,    94,    95,   265,    90,    91,   349,
    1121,     3,     4,   178,   335,   336,   333,   334,   284,   278,
     284,  1815,   816,   105,  1070,   284,    65,    66,   186,   187,
     289,   304,   826,   827,   828,   829,   290,   875,     3,   253,
     878,   879,   880,   257,     3,   839,   175,   810,   811,   175,
    2024,   175,   172,  2097,  2098,   849,   850,   127,   896,   897,
     898,   899,    22,   277,   229,   230,   350,   326,   305,   306,
     329,  1275,  1276,  1277,   291,   292,   293,   294,   592,   593,
    1284,   175,  1581,   175,  1583,   192,   175,  1291,   175,   254,
    1294,   175,   339,    87,   349,   175,  1300,  1301,  1541,  1277,
    1543,  1544,   175,   175,   175,  1283,   320,   175,   175,   274,
    1744,   175,   277,  2124,   175,   175,  1320,   175,  1322,   175,
    1519,   175,   287,   117,   175,  1519,   120,   121,   122,   123,
     124,   125,   349,   179,   128,   929,   182,   183,   184,   185,
     186,   187,   188,   189,   175,   175,   175,   193,   175,   175,
     175,   339,   286,  1357,    93,    99,   349,   328,  1607,  1608,
     235,  1610,   268,   306,   135,   135,  1277,   135,   131,   131,
     320,  1406,   113,  1284,   176,   113,   112,  1381,   305,   267,
    1291,  1385,  1386,   173,  1683,   173,   239,   178,   175,  1393,
     175,   175,   175,  1382,   235,  1399,  1400,   107,  1382,   175,
     175,   175,  1406,  1407,  1277,    38,   175,   171,  1607,  1608,
     305,  1610,  1576,  1607,  1608,  2009,  1610,  1414,   175,  1416,
     175,  1418,   175,   175,  1428,   175,  1423,  1382,   175,   175,
     136,  1277,    23,   350,   111,   113,   179,   179,   157,   176,
    1382,     5,     6,     7,     8,     9,    10,  1451,  1869,     3,
     175,   240,   129,   176,  1753,   176,   173,   134,   135,   240,
     175,  1760,   175,   179,     0,     1,   182,   183,   184,   185,
     186,   187,   188,   189,  1385,   352,  1382,   193,   175,   207,
    1723,   176,   288,    83,    80,   175,  1729,  1730,  1492,   112,
    1494,   175,  1470,  1471,  1498,   350,   245,  1501,  1534,   176,
     286,   178,   105,   349,   262,  1509,   212,   213,   214,   215,
     216,   217,   218,   219,   220,    51,  1520,  1111,   173,   285,
     112,   321,   278,  1766,   173,  1119,   240,   107,   254,    65,
      66,    67,    68,   266,   328,   228,   270,  1572,   175,   190,
      23,   286,    78,    79,    80,    81,   328,  1551,   349,   105,
     328,    87,   229,   230,   231,   112,   349,  1151,   160,   175,
     148,   103,   176,   292,  1568,   176,   110,   136,  1572,  1558,
     349,   319,   349,  1881,  1558,   176,  1580,   254,   136,   256,
    1823,  1492,   349,  1494,   111,   175,   263,   264,   349,   340,
     176,    17,   175,   175,    89,   349,   266,   274,   112,   135,
     277,   263,   262,  1558,    91,   282,   111,   175,   112,   262,
     287,   322,    20,   176,   179,   273,  1558,   182,   183,   184,
     185,   186,   187,   188,   189,   100,   236,   192,   193,   328,
      56,   349,   330,    59,   270,  1639,   176,   173,   176,   175,
    1939,   176,   349,   176,   176,   176,  1682,   176,   286,   207,
     208,   209,  1558,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   176,   349,   176,   176,   176,   175,  1580,
      56,   328,   349,  1709,  1710,  1679,  1680,   176,   104,   176,
     106,   349,  1686,   176,   349,   105,   163,   176,   303,   175,
     116,   175,   319,   175,    76,   231,   232,   176,   176,  1942,
     176,    76,    73,   175,   105,   241,   242,  1950,   244,   109,
     246,   247,   248,   249,   105,   251,   176,   253,   103,   176,
     256,   257,  1726,   176,  1973,   176,   350,   263,   264,  1733,
     116,   349,  1975,    16,  1977,   328,  2044,   175,   112,  2038,
    1744,  1745,   270,   279,   176,   271,   282,   136,   271,   279,
     270,   243,   173,   238,   176,  1759,   254,   238,  2057,   176,
    1764,   295,   296,   297,   298,   299,   300,   301,   302,  1680,
     176,   286,  1776,  1777,  1973,   328,   145,   145,   176,  1973,
    1941,   167,  2025,   176,   320,    76,   105,   175,   336,  1793,
     254,   279,  1386,   176,   180,   221,   222,   223,   224,   225,
     226,   269,   269,   176,   349,   175,   349,   233,     3,   240,
     349,   272,     3,  1407,   173,    17,    78,   240,     5,   315,
    1824,   239,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   351,  1744,   229,  1839,   338,   317,   176,   265,
     176,   349,   176,   176,   350,   175,   349,   233,   234,   235,
     236,   237,   278,  2014,    56,   349,   176,    59,   284,   270,
    1864,   287,  2111,   270,   354,   355,   270,   270,   176,   176,
     360,   164,   193,   278,  1878,   365,   349,  1881,   179,   265,
     349,   182,   183,   184,   185,   186,   187,   188,   189,   111,
     262,   192,   193,  2136,   130,    84,   173,   173,   284,   240,
     326,   175,   104,   289,   106,   175,   175,   175,   271,    52,
     113,   111,  2111,   111,   116,  1919,   270,  2111,   182,   183,
     184,   185,   186,   187,   188,   189,   111,   270,   176,   193,
     344,   333,  1936,   342,   344,   277,   328,   111,   175,     3,
     326,  1945,   269,   329,   230,  1949,   278,   174,    86,    86,
     349,   267,   319,  2165,  1958,   135,   350,     5,   240,  1963,
     240,     5,  2174,   308,  1968,   153,   350,   457,   328,   349,
    1974,   337,  1976,   156,   153,   465,   158,     3,   192,   131,
      60,   262,  1986,   176,   307,  1989,  1580,   135,   319,   175,
     319,   161,  1986,   136,   158,   155,   345,  1986,   333,  2003,
     175,   114,  1986,    61,   135,   307,   319,  1986,   319,   333,
     270,   317,  1986,    62,   313,   343,   262,  1986,   344,   221,
     222,   223,   224,   225,   226,   315,  1986,   270,  2032,   270,
     325,   233,    65,   175,    66,   135,    41,  1145,  2042,  1558,
    2044,  1336,   479,  1092,   222,   221,  2050,  2051,  2052,  2053,
    2091,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,    38,   481,   265,   207,   208,   209,  1120,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   805,  1568,
    1714,  2146,   284,  2131,   227,   287,  2123,  2130,  1764,  2090,
    2142,  1876,  1876,  1755,  2154,  1893,  1892,  1610,   588,   480,
    2104,  1519,  2106,   733,     8,   165,  1546,  1945,  1948,  2022,
    1543,   466,  1469,  1544,   723,  1468,  1089,   914,  1685,  1288,
    1301,   436,   991,   669,   326,   599,  1202,   951,  1693,   676,
     735,   621,   622,   623,   683,  2139,  1815,   712,  2142,   629,
     968,   631,    37,   684,   660,   608,  1782,  1988,  2142,   972,
    2154,   972,   112,  2142,  1780,   645,   646,   647,  2142,  1631,
    1449,  1796,   552,  2142,   630,  1438,  1441,  1913,  2142,  1638,
    2000,   661,   662,  2142,  2008,    -1,   136,    -1,    -1,   911,
      -1,    -1,  2142,    -1,    -1,    -1,    -1,    -1,    -1,   679,
     680,   681,   682,    -1,    -1,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,    -1,
      -1,    -1,    -1,    -1,   714,   715,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,    -1,  1839,    -1,   207,   208,   209,
      -1,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    -1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    67,    68,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,  1936,    -1,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,   107,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,
     120,   121,   122,    -1,    -1,    -1,   126,   127,   128,   349,
      -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,
     140,    -1,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,   159,
     160,   161,   162,   163,    -1,   165,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,   174,   175,    -1,   177,   178,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   939,
      -1,    -1,    -1,   943,   194,   195,    -1,    -1,    -1,   949,
      -1,    -1,   952,    -1,   204,   205,   206,    -1,    -1,    -1,
      -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     970,   221,   222,   973,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,  1007,  1008,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,   288,    -1,
      -1,   291,   292,   293,   294,    -1,   296,  1047,   298,  1049,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,  1082,   333,   334,    -1,    -1,    -1,    -1,  1089,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,    -1,   354,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    -1,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,  1202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1222,    -1,    -1,    -1,  1226,    -1,    -1,    -1,
      -1,  1231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1254,  1255,  1256,  1257,    -1,    -1,
      -1,    -1,    -1,    -1,  1264,    -1,    -1,    -1,    -1,    -1,
    1270,  1271,     3,  1273,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,  1321,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,   176,    67,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,   127,   128,   291,   292,
     293,   294,    -1,    -1,    -1,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,    -1,  1438,    -1,
      -1,  1441,   173,   174,   175,    -1,   177,   178,    -1,  1449,
     291,   292,   293,   294,    -1,    -1,  1456,    -1,    -1,  1459,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,  1468,  1469,
    1470,  1471,    -1,   204,   205,   206,    -1,    -1,  1478,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,   136,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,
     311,   312,  1582,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   352,    -1,   354,    -1,    -1,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,    -1,    -1,  1638,   207,
     208,   209,    -1,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1670,    -1,    -1,  1673,    -1,  1675,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1693,    -1,    -1,    -1,  1697,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1708,    -1,
      -1,    -1,    -1,    -1,  1714,    -1,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1778,  1779,
    1780,   349,  1782,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1796,    -1,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,  1815,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,  1868,    -1,
      -1,    -1,    -1,    -1,  1874,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,
     175,    -1,   177,   178,    -1,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   191,    -1,  1988,   194,
     195,  1991,    -1,    -1,    -1,   284,    -1,    -1,    -1,   204,
     205,   206,   291,   292,   293,   294,   211,    -1,    -1,  2009,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
    2030,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,   207,    -1,    -1,    -1,   211,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
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
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,
     175,    -1,   177,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,
      -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,     3,   354,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,
     175,   176,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
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
      -1,    -1,   174,   175,    -1,   177,    -1,    -1,   180,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,   206,   207,    -1,    -1,    -1,   211,
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
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    -1,   165,   166,   167,    -1,
      -1,    -1,    -1,    -1,    -1,   174,   175,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,   206,    -1,    -1,
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
     166,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,   175,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
     206,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,
      -1,    -1,   348,    -1,    -1,    -1,    -1,     3,   354,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
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
     166,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,   175,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
     206,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,
      -1,    -1,   348,    -1,    -1,    -1,    -1,     3,   354,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
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
     166,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,   175,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
     206,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
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
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,
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
      -1,   174,   175,   176,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   194,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,   206,    -1,    -1,    -1,    -1,   211,    -1,
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
      -1,    -1,    -1,    -1,   174,   175,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,   206,    -1,    -1,    -1,
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
      67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
     117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,   138,   139,   140,    -1,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      -1,   158,   159,   160,   161,   162,   163,    -1,   165,   166,
     167,    -1,    -1,    -1,    -1,    -1,    -1,   174,   175,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,   206,
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
     307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,    -1,
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
      -1,    -1,   136,   137,   138,   139,   140,    -1,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,   159,   160,   161,   162,   163,
      -1,   165,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,
     174,   175,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,   206,    -1,    -1,    -1,    -1,   211,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,   253,
     254,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,
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
      -1,    -1,    -1,   174,   175,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,   206,    -1,    -1,    -1,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
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
      48,    49,    50,    -1,    -1,    53,    -1,    -1,    56,    57,
      58,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,   117,
      -1,    -1,   120,   121,   122,    -1,    -1,    -1,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,   159,   160,   161,   162,   163,    -1,   165,   166,   167,
      -1,    -1,    -1,    -1,    -1,    -1,   174,   175,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   205,   206,    -1,
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
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,
     175,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    22,    23,   333,   334,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,   354,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,   136,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,    -1,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,   175,
      -1,   177,    -1,    -1,    -1,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    -1,    -1,    -1,   207,   208,
     209,    -1,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,   288,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
     349,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,    -1,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,   175,
      -1,   177,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
     173,    -1,   175,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,   352,    53,   241,   242,
      -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,   256,   257,    -1,    -1,    -1,    -1,    -1,
     263,   264,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,   279,    93,    -1,   282,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,    -1,   165,
      -1,   167,     5,     6,     7,    -1,    -1,    -1,   174,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,   231,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
     256,   257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,   279,   280,   281,   282,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,   310,    -1,    -1,   313,   314,   315,
      -1,    -1,    -1,    -1,   320,     5,     6,     7,     8,     9,
      10,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,   292,
     293,   294,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,    -1,
     160,   161,   162,   163,    -1,   165,    -1,   167,    -1,    -1,
      -1,    -1,    -1,    -1,   174,    -1,    -1,   177,    -1,    -1,
      -1,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,    -1,    -1,    -1,   207,   208,   209,    -1,   211,   212,
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
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
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
      -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
     174,    -1,    -1,   177,    -1,    -1,    -1,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,    -1,    -1,    -1,
     207,   208,   209,    -1,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,   231,   232,   233,
      -1,    -1,    -1,    -1,    -1,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,   253,
      -1,   255,   256,   257,    -1,    -1,    -1,    -1,   262,   263,
     264,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,
      -1,   275,    -1,    -1,   278,   279,   280,   281,   282,    -1,
     284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,
     294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,
      -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,   313,
      -1,    -1,    -1,    -1,   318,    -1,   320,     5,     6,     7,
       8,     9,    10,   327,   328,    -1,    -1,    -1,    -1,   333,
     334,    -1,   349,    -1,    22,    23,    -1,    -1,    26,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,   177,
      -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,    -1,    -1,    -1,   207,   208,   209,
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
      -1,    -1,    -1,    -1,    -1,   313,    -1,   315,    -1,    -1,
      -1,    -1,   320,     5,     6,     7,     8,     9,    10,   327,
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
     122,    -1,   136,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,    -1,   160,   161,
     162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,    -1,   174,    -1,    -1,   177,    -1,    -1,    -1,    -1,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
      -1,    -1,    -1,   207,   208,   209,    -1,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,   231,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,    -1,
     262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,   279,   280,   281,
     282,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,    -1,   296,   309,   298,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,   313,    -1,    -1,    -1,    -1,    -1,   319,   320,     5,
       6,     7,     8,     9,    10,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,    -1,    -1,    22,    23,    -1,    -1,
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
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
      -1,   177,    -1,    -1,    -1,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    -1,    -1,    -1,   207,   208,
     209,    -1,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,   231,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
     256,   257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,   279,   280,   281,   282,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,   308,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,    -1,    -1,   313,     5,     6,
       7,     8,     9,    10,   320,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    22,    23,   333,   334,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,    -1,    -1,   120,   121,   122,   136,    -1,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,
      -1,   148,    -1,   150,   151,   152,   153,   154,   155,   156,
      -1,   158,    -1,   160,   161,   162,   163,    -1,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,
     177,    -1,    -1,    -1,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,    -1,    -1,    -1,   207,   208,   209,
      -1,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,
     257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,   279,   280,   281,    -1,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,   308,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,
      -1,   318,    -1,   320,     5,     6,     7,     8,     9,    10,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,   136,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,    -1,   160,
     161,   162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,   174,    -1,    -1,   177,    -1,    -1,    -1,
      -1,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,    -1,    -1,    -1,   207,   208,   209,    -1,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,   268,   257,    -1,    -1,    -1,
      -1,   262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,   279,   280,
     281,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,   319,   320,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,   108,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,
     121,   122,   136,    -1,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,    -1,   160,
     161,   162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,   174,    -1,    -1,   177,    -1,    -1,    -1,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
      -1,    -1,    -1,   207,   208,   209,    -1,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,   223,   224,   225,   226,    -1,   228,    -1,    -1,
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
      -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,   113,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,
     122,    -1,   136,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,    -1,   160,   161,
     162,   163,   176,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,    -1,   174,   175,    -1,   177,    -1,    -1,    -1,    -1,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
      -1,    -1,    -1,   207,   208,   209,    -1,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,
      -1,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,
      -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,   136,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,    64,    -1,    -1,   207,   208,   209,    -1,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,    81,    -1,
      -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,
      -1,   136,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,   152,
     153,   154,   155,   156,    -1,   158,    -1,   160,   161,   162,
     163,   176,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,   177,    -1,    -1,    -1,    -1,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,    -1,
      -1,    -1,   207,   208,   209,    -1,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,
      -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,
     233,   234,   235,   236,   237,    -1,    -1,   240,    -1,    -1,
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
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,    -1,    -1,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,    -1,   160,   161,   162,   163,
      -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   176,
     174,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,    -1,    -1,    -1,
     207,   208,   209,   207,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,    -1,    -1,    -1,   221,   222,    -1,
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
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,    -1,    -1,   120,   121,   122,    -1,   136,
      -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,    -1,    -1,   148,    -1,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,    -1,   160,   161,   162,   163,   176,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,
     175,    -1,   177,    -1,    -1,    -1,    -1,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,    -1,    -1,    -1,
     207,   208,   209,    -1,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,    -1,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,   176,   174,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    -1,    -1,    -1,   207,   208,
     209,   207,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,    -1,    -1,   120,   121,   122,    -1,   136,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,
      -1,   148,    -1,   150,   151,   152,   153,   154,   155,   156,
      -1,   158,    -1,   160,   161,   162,   163,   176,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,
     177,    -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    -1,    -1,    -1,   207,   208,
     209,    -1,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
      -1,    -1,   120,   121,   122,    -1,   136,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,    -1,   160,   161,   162,   163,   176,   165,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,   177,
      -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,    -1,    -1,    -1,   207,   208,   209,
      -1,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,
      -1,   120,   121,   122,   136,    -1,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,
      -1,   150,   151,   152,   153,   154,   155,   156,    -1,   158,
      -1,   160,   161,   162,   163,    -1,   165,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,   174,   175,    -1,   177,    -1,
      -1,    -1,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,    -1,    -1,    -1,   207,   208,   209,    -1,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,    -1,
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
      -1,    -1,    -1,    -1,   174,    -1,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
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
      -1,    -1,    -1,   174,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,   279,   280,
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
      -1,    -1,   174,   175,    -1,   177,    -1,    -1,    -1,    -1,
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
      -1,   174,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,
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
      -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
     174,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   207,    -1,    -1,    -1,    -1,    -1,    -1,
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
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,    -1,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
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
     167,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,
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
      -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,   177,
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
      -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,
      -1,    -1,    -1,    -1,   333,   334
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    65,    66,    67,    68,    78,    79,    80,
      81,    87,   135,   173,   175,   231,   232,   241,   242,   244,
     246,   247,   248,   249,   251,   253,   256,   257,   263,   264,
     279,   282,   320,   356,   362,   363,   366,   367,   368,   369,
     371,   373,   374,   383,   388,   400,   405,   406,   412,   452,
     458,   461,   469,   490,   505,   509,   510,   511,   519,   534,
     536,   537,   538,   557,   561,   562,   563,   566,   688,   693,
     135,   112,     5,     6,     7,     8,     9,    10,    22,    23,
      26,    38,    41,    53,    64,    81,    84,    87,    93,    98,
      99,   100,   106,   114,   117,   120,   121,   122,   127,   128,
     144,   145,   148,   150,   151,   152,   153,   154,   155,   156,
     158,   160,   161,   162,   163,   165,   167,   174,   177,   221,
     222,   228,   232,   233,   240,   243,   244,   245,   246,   247,
     248,   249,   251,   253,   255,   262,   265,   269,   272,   273,
     275,   278,   280,   284,   285,   291,   292,   293,   294,   296,
     298,   303,   327,   328,   333,   334,   656,   682,   683,   180,
     255,   547,   267,    82,   516,   516,   682,    80,    88,   558,
     559,   682,    67,   566,   190,   270,    68,    70,    71,   626,
     627,   628,   682,   656,   359,   358,   360,   361,   357,     5,
      11,   686,   689,   284,   656,     5,     6,     7,     8,     9,
      10,    65,    66,    67,    68,   180,   253,   257,   277,   320,
     384,   391,   392,   393,   395,   396,   397,   680,   681,   263,
     266,   389,   390,    59,    88,    56,   116,   284,    11,   175,
     236,   305,   453,   454,   527,   557,   563,   671,   685,     0,
      17,    56,    59,   104,   106,   116,   221,   222,   223,   224,
     225,   226,   233,   265,   278,   284,   287,   413,   414,   417,
     419,   167,   234,   235,   236,   237,   289,   329,    56,   116,
     167,   180,   233,   234,   235,   236,   237,   265,   278,   284,
     289,   326,   329,   504,    56,    57,    58,    64,   175,   265,
     278,   292,   457,   653,   682,   221,   222,   284,   372,   417,
     450,   682,   135,   103,   168,   169,   170,   582,   135,   656,
     279,   350,     3,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    18,    19,    27,    28,    44,    45,
      46,    47,    48,    49,    50,    63,   107,   111,   115,   126,
     136,   137,   138,   139,   140,   142,   143,   146,   147,   149,
     159,   166,   175,   178,   194,   195,   204,   205,   206,   207,
     211,   291,   292,   293,   294,   307,   311,   312,   352,   354,
     543,   569,   580,   581,   589,   590,   591,   592,   594,   596,
     597,   599,   601,   603,   604,   606,   607,   608,   609,   610,
     611,   612,   625,   626,   629,   631,   632,   633,   635,   636,
     637,   638,   639,   653,   654,   655,   657,   658,   660,   675,
     678,   682,   687,   698,   699,   700,   701,   702,   716,   723,
     725,   728,   738,   739,   769,   656,   192,   517,   517,   682,
      89,    92,    98,   512,   513,   514,   349,   560,   563,   456,
     457,   547,   176,   327,   116,   167,   234,   235,   236,   237,
     278,   284,   285,   289,   326,   503,   694,   175,   350,   456,
     369,   369,   356,   356,   369,   175,   656,   118,   119,   535,
     456,   456,   275,   456,   112,   267,   286,   349,   286,   349,
     270,   349,   271,   271,   391,   384,    88,   512,   279,   682,
     656,   656,   453,   566,   267,   671,   267,    27,   267,   305,
     321,   221,   222,   682,   221,   222,   656,   284,   284,   284,
     284,   656,   682,   313,   365,   365,   326,   284,   235,   656,
     656,   656,   656,   656,   656,   682,   656,   235,   167,   234,
     235,   236,   237,   656,   313,   364,   364,   364,   364,   682,
     364,   364,   364,   656,   364,    42,    43,   508,   228,   450,
     682,   682,   303,   179,   179,   179,   349,     5,     6,     7,
      20,    24,    25,    26,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    53,    54,    55,   291,   292,   293,   294,
     349,   644,   652,   673,   675,   676,   677,   678,   105,   180,
     255,   567,   567,   567,   304,   583,   290,   551,   457,   548,
     550,   679,   682,   682,   687,   687,   687,   175,   175,    22,
     175,   630,   630,   630,   630,   630,   175,   606,   175,   127,
     682,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   288,   557,   563,   580,   590,   598,   626,
     682,   590,   175,   608,   608,   175,   175,   175,   608,   687,
     175,   642,   175,   643,   194,   195,   640,   308,   608,   665,
     666,   175,   175,   590,   602,   112,   267,   570,   571,   190,
     328,   634,   682,   192,   179,   182,   183,   184,   185,   186,
     187,   188,   189,   193,   656,   136,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   207,   208,   209,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   268,
     339,   350,   349,   175,   175,   175,   687,   687,   350,   175,
     254,   288,   454,   457,   539,    83,    84,   286,   518,    90,
      91,    93,    99,   349,   559,   328,   569,   656,   235,   656,
     656,   656,   656,   682,   656,   682,   656,   656,   268,   176,
     544,   608,   661,   628,   682,   306,   585,   135,   135,   135,
     175,   176,   542,   544,   546,   566,   535,   131,   131,   508,
     276,   398,   399,   680,   680,   398,   393,   167,   284,   394,
     503,   656,   397,   113,   113,   112,   112,   512,   260,   261,
     415,   173,   259,   279,   401,   117,   118,   120,   121,   122,
     123,   124,   125,   128,   328,   408,   410,   411,   256,   279,
     282,   283,   176,   656,   324,   687,   267,   656,   671,   305,
     173,    87,   328,   407,   409,   411,   365,   365,   365,   365,
     239,   173,   381,   178,   228,   375,   682,   656,   682,   365,
     656,   175,   175,   175,   175,   456,   331,   332,   491,   364,
     235,   656,   656,   656,   656,   508,   107,   656,   656,   656,
     656,   656,   656,   656,   656,   682,   176,    59,   294,   655,
     606,   682,   580,   450,   175,   175,    21,    22,   175,   175,
     175,    38,   175,   642,   643,   295,   297,   299,   300,   301,
     302,   645,   648,   650,   651,   682,   175,   175,   175,   175,
     586,   587,   608,   171,   568,   568,   568,   610,   670,   685,
     305,   584,   580,   179,   349,   571,   179,   350,   580,   659,
     659,    23,   176,   296,   298,   302,   645,   646,   647,   113,
     608,   609,   608,   695,   696,   697,   695,   240,   157,   717,
     743,   154,   156,   741,   240,     3,   729,   609,   116,   740,
     741,   695,   175,   540,   176,   176,   176,   176,   349,   350,
     608,   608,   608,   686,   173,   641,   686,   641,   687,   580,
     308,   663,   664,   310,   665,   667,   608,   544,   662,   349,
     353,    69,   175,   352,   552,   572,   573,   605,   626,   656,
     682,   564,   565,   682,   551,   581,   682,   590,   180,   181,
     191,   590,   600,   101,   102,   593,   593,   175,   175,   595,
     608,   595,   595,   595,   590,   600,   603,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   111,   178,   175,   207,   633,   176,   180,   207,   255,
     608,   668,   682,   668,     8,     9,    10,   207,   682,   288,
     540,   539,    83,    80,    89,    96,    97,   515,   686,   514,
     175,   605,   656,   175,   506,   506,   506,   506,   350,   111,
     687,   176,   349,    14,   610,   671,   245,   370,   176,   349,
     508,   173,   349,   386,   173,   385,   656,   398,   398,   262,
     415,   286,   278,   105,   173,   670,   670,   670,   673,   410,
     230,   284,   285,   403,   404,    68,    89,   402,   404,   284,
     404,   112,    16,   525,   526,   525,   656,   456,   321,   671,
     415,   173,   673,   409,   656,   656,   656,   656,   240,   266,
     107,   376,   682,   254,   377,   228,   112,   175,   421,   422,
     456,   270,   656,   175,   207,   488,   489,   682,   488,   488,
     488,   328,    65,    66,    68,   257,   492,   656,   656,   508,
     508,   508,   508,   506,   506,   506,   506,   508,   508,   508,
     673,   669,   686,   669,    23,   669,   669,   669,   686,    54,
     674,   687,   641,   641,   643,   642,   286,   669,   686,   669,
     669,   669,   349,    52,   227,   588,   105,   566,   566,   566,
     610,   671,   585,   606,   550,   551,   254,   549,   580,   682,
     328,   349,   112,   656,   160,   742,   349,   742,   742,   682,
     704,   175,   608,   718,   719,   720,   349,   609,   682,   726,
     148,   730,   742,   695,   582,   254,   541,   544,   545,   176,
     349,   184,   185,   590,   112,   349,   185,   349,   176,   292,
     687,   176,   687,   651,   309,   608,   663,   667,   608,   319,
     349,   349,   176,   349,   590,   606,   626,   175,   288,   552,
     557,   563,   573,   574,   349,    70,    71,    72,    74,    75,
      77,   172,   553,   555,   328,   575,   682,   575,   576,   576,
     350,   349,   570,   110,   577,   590,   590,   590,   542,   542,
     108,   606,   111,   340,   613,   614,   668,   176,   668,   176,
     350,   349,   350,   682,    94,    95,    89,   506,   176,   507,
     673,   682,   544,   546,   266,   399,   112,   387,   263,   387,
     387,   387,   687,   262,   682,   682,   670,   606,   671,   682,
     656,   682,    91,    90,    91,   682,   656,   230,   425,   428,
     439,   440,   679,   626,   111,   528,   322,   528,   456,   112,
     262,   671,   421,   421,   421,   421,   682,    57,    63,   382,
      20,   273,   690,   691,   376,   236,   187,   424,   425,   426,
     431,   451,   682,   100,   416,   328,   656,   421,   488,   176,
     349,   673,   176,   176,   176,   453,   330,   270,   506,   508,
     176,   176,   176,   176,   349,   176,   349,   176,   349,   302,
     645,   649,   176,   349,   176,   176,   176,   587,   175,   673,
     673,   608,   116,   156,   176,   695,   176,   176,   349,   703,
      84,   254,   608,   744,   745,   747,   748,   749,   271,   349,
     714,   328,   721,    85,   144,   724,   349,   727,   105,   731,
     751,   742,   176,   163,   752,   753,   742,   176,   349,   175,
     175,   175,   608,   608,   608,   608,   303,   544,   309,   319,
     608,   544,   544,   575,   576,   540,   176,   176,   176,   566,
     573,   553,    76,   573,    76,    73,   554,   682,   175,   682,
     565,   105,   109,   579,   192,   192,   176,   176,   687,   105,
     176,   103,   615,   176,   176,   207,   668,   682,   176,   349,
     350,   271,   382,   271,    16,   687,   508,   508,   508,   256,
     279,   682,   258,   274,   287,   448,   132,   133,   427,   673,
     328,   496,   687,   112,   175,   323,   532,   533,   687,   687,
     270,   279,   682,   684,   692,   362,   366,   378,   379,   380,
     383,   388,   400,   405,   505,   626,   656,   176,   349,   173,
     682,   453,   175,   270,   420,   176,    67,    81,    87,   239,
     242,   281,   307,   313,   318,   371,   373,   374,   383,   388,
     400,   405,   462,   465,   467,   468,   469,   473,   475,   481,
     483,   484,   505,   509,   510,   562,   682,   682,   238,   243,
     238,   173,   455,   450,   656,   672,   686,   686,   686,   643,
     686,   578,   657,   682,   176,   176,   176,   141,   608,   705,
     711,   712,   713,   743,   742,   254,   747,   176,   349,   328,
     111,   150,   152,   153,   715,   719,   742,   682,   722,   145,
     145,   176,   609,   742,   127,   151,   609,   732,   733,   734,
     735,   736,   751,   286,   176,   176,   545,   541,   542,   542,
     113,   176,   176,   349,   176,   349,   544,   176,   176,   353,
      76,   573,    16,   270,   556,   573,   175,   684,   578,   580,
     590,   590,   578,   105,    86,   347,   616,   617,   176,   176,
     507,   682,   336,   279,   254,   100,   111,   178,   254,   269,
     269,   457,   129,   134,   254,   429,   430,   433,   434,   436,
     437,   440,   687,   349,   532,   533,   175,   522,   522,   349,
     240,     3,   682,   349,   380,   426,   682,   272,     3,   173,
     423,   450,    78,   239,   547,   240,   470,   471,   656,   284,
     454,   474,   580,   308,   478,   479,   608,   580,   317,   463,
     315,   351,   673,   284,   487,   673,     5,   487,   229,   338,
     493,   176,   176,   176,   176,   176,   349,   350,   175,   349,
     349,   714,   349,   176,   745,   682,   746,   270,   270,   270,
     270,   176,   176,   328,   750,   751,   349,   111,   153,   737,
     164,   176,   176,   176,   608,   608,   608,   575,   573,   457,
     580,   556,   684,   176,   586,   183,   341,   348,   609,   618,
     619,   620,   621,   262,   278,     3,   111,   111,   435,   607,
     457,   457,   130,   435,   433,   111,   178,   229,   274,   277,
     287,   447,   449,   687,    84,   531,   176,   523,   524,   682,
     525,   525,   687,   687,   173,   418,   682,   175,    84,   174,
     176,    65,    85,   256,   240,   569,   459,   682,   175,   175,
     580,   310,   478,   480,   308,   476,   477,   309,   463,   465,
     580,   175,   239,   243,   462,     4,   460,   687,   239,   243,
     271,   335,   336,   494,   495,   113,   498,   499,   657,   682,
     608,   706,   707,   709,   711,   713,   705,   711,   111,    84,
     111,   111,   111,   682,   733,   270,   270,   176,    84,   162,
     165,   754,   755,   760,   176,   176,   176,   176,   619,   333,
     344,   344,   342,   624,   687,   682,   277,   328,   111,   175,
     269,   656,   349,   230,   176,   349,     3,   528,   528,   278,
      56,   415,   432,   433,   174,    86,    86,   459,   350,   472,
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
      13,     6,     9,     6,     6,     0,     4,     1,     3,     0,
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (m, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, m); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvc *m)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (m);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvc *m)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, m);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, mvc *m)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , m);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, m); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, mvc *m)
{
  YYUSE (yyvaluep);
  YYUSE (m);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (mvc *m)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, m);
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 629 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (m->sym) {
			append_symbol(m->sym->data.lval, (yyval.sym));
			(yyval.sym) = m->sym;
		} else {
			m->sym = (yyval.sym) = (yyvsp[-1].sym);
		}
		YYACCEPT;
	}
#line 6962 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 639 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6972 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 644 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 6986 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 653 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6996 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 658 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 7010 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 668 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 7020 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 673 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 7034 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 683 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->scanner.mode == LINE_1) {
				yyerror(m, "SQL debugging only supported in interactive mode");
				YYABORT;
			  }
		  	  m->emod |= mod_debug;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 7048 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 692 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); YYACCEPT; }
#line 7054 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 693 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 7064 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 698 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); YYACCEPT; }
#line 7070 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 699 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = (yyvsp[-1].sym); YYACCEPT; }
#line 7076 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 700 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 7082 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 701 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 7088 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 702 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 7094 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 703 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYABORT; }
#line 7100 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 708 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 7106 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 712 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 7112 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 716 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 7118 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 717 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 7124 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 721 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 7130 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 722 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 7136 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 745 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-3].l));
		append_list(l, (yyvsp[-2].l));
		append_symbol(l, (yyvsp[-1].sym));
		append_int(l, (yyvsp[0].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
#line 7147 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 756 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7153 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 757 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 7159 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 762 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[0].l)); }
#line 7165 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 763 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); if ((yyval.sym)) (yyval.sym)->token = SQL_DECLARE_TABLE; }
#line 7171 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 768 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l) );
		append_type(l, &(yyvsp[0].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
#line 7180 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 773 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l) );
		append_type(l, &(yyvsp[0].type) );
		(yyval.l) = append_symbol((yyvsp[-3].l), _symbol_create_list( SQL_DECLARE, l)); }
#line 7189 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 782 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, (yyvsp[-2].sval) );
		append_symbol(l, (yyvsp[0].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7198 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 787 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  	append_list(l, (yyvsp[-2].l));
	  	append_symbol(l, (yyvsp[0].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_SET, l ); }
#line 7207 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 792 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7219 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 800 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7231 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 808 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7243 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 816 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7255 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 824 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7265 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 830 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[0].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7274 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 839 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-3].l));
		append_symbol(l, (yyvsp[-2].sym));
		append_symbol(l, (yyvsp[-1].sym));
		append_list(l, (yyvsp[0].l));
		append_int(l, (yyvsp[-4].bval));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
#line 7286 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 847 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_int(l, (yyvsp[0].i_val));
		append_int(l, (yyvsp[-2].bval));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
#line 7296 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 856 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[0].sval) );
	  append_string((yyval.l), NULL ); }
#line 7304 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 860 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[0].sval) ); }
#line 7312 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 864 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[-2].sval) );
	  append_string((yyval.l), (yyvsp[0].sval) ); }
#line 7320 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 873 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 7326 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 874 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[0].sval) ); }
#line 7332 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 878 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 7338 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 883 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7344 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 885 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym) ); }
#line 7350 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 891 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 7356 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 892 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 7362 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 896 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 7368 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 897 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_role; }
#line 7374 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 902 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
#line 7386 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 912 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
#line 7397 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 921 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 7403 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 923 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 7409 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 927 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7415 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 928 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7421 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 932 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7427 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 933 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7433 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 938 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 7439 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 939 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 7445 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 944 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[-4].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
#line 7457 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 952 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[-4].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
#line 7468 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 961 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7474 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 962 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7480 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 966 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7486 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 967 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7492 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 972 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[0].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
#line 7500 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 976 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[-2].l));
	  append_symbol((yyval.l), (yyvsp[0].sym)); }
#line 7508 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 982 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(L(), (yyvsp[0].i_val)); }
#line 7514 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 984 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(append_int(L(), (yyvsp[-2].i_val)), (yyvsp[0].i_val)); }
#line 7520 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 988 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
#line 7526 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 989 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
#line 7532 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 993 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[0].l)); }
#line 7538 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 994 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[0].l)); }
#line 7544 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 995 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[0].l)); }
#line 7550 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1006 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7556 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1007 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7562 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1012 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7568 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1014 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 7574 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1018 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
#line 7580 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1019 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
#line 7586 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1020 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_TRUNCATE,NULL); }
#line 7592 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1021 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[0].l)); }
#line 7598 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1022 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[0].l)); }
#line 7604 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1023 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[0].l)); }
#line 7610 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1024 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
#line 7616 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1028 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 7622 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1030 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 7628 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1034 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 7634 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1035 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 7640 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1043 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7649 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1048 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, append_list(L(),(yyvsp[0].l))));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7658 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1053 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7667 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1058 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7676 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1063 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7685 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1068 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7694 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1073 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7703 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1078 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
#line 7712 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1083 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
#line 7721 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1088 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  dlist *p = L();
	  append_string(l, NULL);
	  append_string(p, (yyvsp[-4].sval));
	  append_string(p, NULL);
	  append_int(p, (yyvsp[-6].i_val));
	  append_string(p, (yyvsp[0].sval));
	  append_list(l, p);
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
#line 7735 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1100 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, (yyvsp[0].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[-2].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7746 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1106 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[0].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7757 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1113 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, (yyvsp[-3].sval));
				  append_string(l, (yyvsp[0].sval));
				  append_int(l, (yyvsp[-5].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7768 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1123 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
#line 7777 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1128 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-2].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
#line 7785 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1132 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
#line 7793 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1136 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[-2].sval)); }
#line 7799 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1138 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  if (!strlen((yyvsp[0].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
#line 7811 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1146 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
#line 7820 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1154 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
#line 7829 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1159 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
#line 7838 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1164 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  append_int(l, 0);
	  append_int(l, FALSE ); /* no if exists check */
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
#line 7849 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1173 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7855 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1174 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7861 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1178 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7867 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1179 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7873 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1180 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7879 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1202 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_list(l, (yyvsp[0].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
#line 7891 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1213 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[0].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
#line 7901 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1230 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_list(l, (yyvsp[0].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
#line 7912 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1239 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7918 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1240 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-1].l), (yyvsp[0].sym)); }
#line 7924 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1244 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7930 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1245 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-1].l), (yyvsp[0].sym)); }
#line 7936 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1249 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 7942 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1250 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[0].l_val)); }
#line 7948 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1251 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7954 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1255 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 7960 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1256 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
#line 7966 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1257 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[0].l_val)));  }
#line 7972 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1258 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[0].sym)));  }
#line 7978 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1259 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7984 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1263 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[0].l_val)); }
#line 7990 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1264 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[0].l_val)); }
#line 7996 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1265 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
#line 8002 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1266 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[0].l_val)); }
#line 8008 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1267 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
#line 8014 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1268 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[0].l_val)); }
#line 8020 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1269 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
#line 8026 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1270 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
#line 8032 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1278 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-5].sval));
	  append_int(l, (yyvsp[-7].i_val));
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
#line 8043 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1287 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = hash_idx; }
#line 8049 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1288 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ordered_idx; }
#line 8055 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1289 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imprints_idx; }
#line 8061 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1290 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = hash_idx; }
#line 8067 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1311 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval));
	  append_int(l, (yyvsp[0].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
#line 8076 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1316 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-8].sval));
	  append_string(l, (yyvsp[-4].sval));
	  append_string(l, (yyvsp[-2].sval));
	  append_string(l, (yyvsp[0].sval));
	  append_int(l, (yyvsp[-6].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
#line 8088 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1326 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
#line 8094 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1327 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
#line 8100 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1328 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
#line 8106 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1332 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8112 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1333 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_string(L(), (yyvsp[-1].sval)), (yyvsp[0].sval)); }
#line 8118 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1338 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, SQL_PERSIST);
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[-3].bval));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 8135 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1351 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
      dlist *l = L();
      append_list(l, (yyvsp[-3].l));
      append_symbol(l, (yyvsp[0].sym));
      (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE_LOADER, l);
    }
#line 8146 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1358 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_STREAM;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[-2].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 8162 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1370 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_MERGE_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[-2].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 8178 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1382 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_REPLICA_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[-2].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 8194 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1397 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_REMOTE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-4].l));
	  append_symbol(l, (yyvsp[-3].sym));
	  append_int(l, commit_action);
	  append_string(l, (yyvsp[-1].sval));
	  append_list(l, (yyvsp[0].l));
	  append_int(l, (yyvsp[-5].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 8210 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1409 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, (yyvsp[-5].i_val));
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  if ((yyvsp[-5].i_val) != SQL_PERSIST)
		commit_action = (yyvsp[0].i_val);
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[-3].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 8228 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1426 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	  (yyval.l) = append_string(L(), NULL);
	  append_int((yyval.l), SQL_PW_ENCRYPTED);
	  append_string((yyval.l), NULL);
  }
#line 8238 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1432 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	  (yyval.l) = append_string(L(), (yyvsp[-3].sval));
	  append_int((yyval.l), (yyvsp[-2].i_val));
	  append_string((yyval.l), (yyvsp[0].sval));
  }
#line 8248 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1438 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	  (yyval.l) = append_string(L(), NULL);
	  append_int((yyval.l), (yyvsp[-2].i_val));
	  append_string((yyval.l), (yyvsp[0].sval));
  }
#line 8258 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1446 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 8264 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1447 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 8270 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1448 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 8276 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1449 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 8282 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1450 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
#line 8288 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1451 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
#line 8294 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1455 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_COMMIT; }
#line 8300 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1456 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_DELETE; }
#line 8306 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1457 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_PRESERVE; }
#line 8312 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1458 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_DROP; }
#line 8318 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1462 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[-1].l)); }
#line 8324 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1463 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[0].l)); }
#line 8330 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1471 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[-3].l));
			  append_symbol((yyval.l), (yyvsp[-1].sym)); 
			  append_int((yyval.l), (yyvsp[0].i_val)); }
#line 8338 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1477 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8344 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1478 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8350 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1479 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8356 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1484 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 8362 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1486 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 8368 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1493 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8374 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1494 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8380 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1499 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			dlist *l = L();
			append_string(l, (yyvsp[-2].sval));
			append_type(l, &(yyvsp[-1].type));
			append_list(l, (yyvsp[0].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
#line 8392 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1507 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
			if ((yyvsp[0].i_val) == 1)
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
			append_string(l, (yyvsp[-1].sval));
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
#line 8446 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1559 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8452 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1565 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 8458 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1567 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym) ); }
#line 8464 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1573 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-5].sval) );
	  append_list(l, (yyvsp[-1].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
#line 8473 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1581 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 8479 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1583 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 8485 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1589 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[0].sym)); }
#line 8491 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1593 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 8497 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1599 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_symbol(l, (yyvsp[0].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
#line 8506 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1607 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
		if (!(yyvsp[0].l))
			(yyvsp[0].l) = L();
		sql_find_subtype(&it, "int", 32, 0);
    		append_symbol((yyvsp[0].l), _symbol_create_list(SQL_TYPE, append_type(L(),&it)));

		/* finally all the options */
		append_list(l, (yyvsp[0].l));
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
#line 8539 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1636 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8578 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1673 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8584 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1674 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 8590 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1681 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_symbol(l, (yyvsp[0].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
#line 8599 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1690 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 8605 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1691 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 8611 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1695 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8617 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1696 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8623 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1697 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 8629 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1698 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 3; }
#line 8635 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1699 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 4; }
#line 8641 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1703 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ((yyvsp[0].i_val) << 8); }
#line 8647 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1707 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8653 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1711 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
#line 8659 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1712 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8665 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1713 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8671 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1714 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val) + (yyvsp[0].i_val); }
#line 8677 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1715 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val) + (yyvsp[0].i_val); }
#line 8683 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1719 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8689 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1720 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8695 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1721 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 8701 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1722 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8707 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1726 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8713 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1727 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8719 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1731 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
#line 8725 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1732 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
#line 8731 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1733 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
#line 8737 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1734 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
#line 8743 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1737 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, (yyvsp[-3].l) );
			  append_list(l, (yyvsp[-2].l) );
			  append_int(l, (yyvsp[-1].i_val) );
			  append_int(l, (yyvsp[0].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
#line 8754 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1750 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[0].l)); }
#line 8760 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1752 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[0].l)); }
#line 8766 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1756 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, (yyvsp[-3].l) );
			  append_list(l, (yyvsp[-5].l) );
			  append_list(l, (yyvsp[-2].l) );
			  append_int(l, (yyvsp[-1].i_val) );
			  append_int(l, (yyvsp[0].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
#line 8778 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1768 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 8784 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1773 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 8790 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1775 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string( (yyvsp[-2].l), (yyvsp[0].sval) ); }
#line 8796 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1779 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[0].l) ); }
#line 8802 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1784 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {  dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, (yyvsp[0].bval));
	  append_int(l, TRUE);	/* persistent view */
	  append_int(l, (yyvsp[-6].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
#line 8816 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1797 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 8822 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1806 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 8828 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1807 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 8834 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1811 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8840 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1816 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 8846 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1821 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				append_list(l, (yyvsp[-3].l));
				append_string(l, (yyvsp[0].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
#line 8855 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1828 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval)); }
#line 8861 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1843 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-8].l));
				append_list(f, (yyvsp[-6].l));
				append_symbol(f, (yyvsp[-3].sym));
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[-10].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8876 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1857 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l));
				append_symbol(f, (yyvsp[-1].sym));
				append_list(f, NULL);
				append_list(f, (yyvsp[0].l));
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_SQL);
				append_int(f, (yyvsp[-8].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8891 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1871 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[-1].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p') {
				// code does not get cleaner than this people
				if (strcasecmp((yyvsp[-1].sval), "PYTHON_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON3_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY3;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON3") == 0) {
					lang = FUNC_LANG_PY3;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON2_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY2;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON2") == 0) {
					lang = FUNC_LANG_PY2;
				} else {
					lang = FUNC_LANG_PY;
				}
			} else if (l == 'C' || l == 'c') {
				if (strcasecmp((yyvsp[-1].sval), "CPP") == 0) {
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

			append_list(f, (yyvsp[-8].l));
			append_list(f, (yyvsp[-6].l));
			append_symbol(f, (yyvsp[-3].sym));
			append_list(f, NULL);
			append_list(f, append_string(L(), (yyvsp[0].sval)));
			append_int(f, F_FUNC);
			append_int(f, lang);
			append_int(f, (yyvsp[-10].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f );
		}
#line 8943 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1921 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l)); 
				/* no returns - use OID */
				append_symbol(f, NULL); 
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_FILT);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[-9].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8959 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1936 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-8].l));
				append_list(f, (yyvsp[-6].l));
				append_symbol(f, (yyvsp[-3].sym));
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_AGGR);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[-10].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8974 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1950 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[-1].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p') {
				if (strcasecmp((yyvsp[-1].sval), "PYTHON_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON3_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY3;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON3") == 0) {
					lang = FUNC_LANG_PY3;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON2_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY2;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON2") == 0) {
					lang = FUNC_LANG_PY2;
				} else {
					lang = FUNC_LANG_PY;
				}
			} else if (l == 'C' || l == 'c') {
				if (strcasecmp((yyvsp[-1].sval), "CPP") == 0) {
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

			append_list(f, (yyvsp[-8].l));
			append_list(f, (yyvsp[-6].l));
			append_symbol(f, (yyvsp[-3].sym));
			append_list(f, NULL);
			append_list(f, append_string(L(), (yyvsp[0].sval)));
			append_int(f, F_AGGR);
			append_int(f, lang);
			append_int(f, (yyvsp[-10].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 9024 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1999 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[-8].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 9039 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2012 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-4].l));
				append_list(f, (yyvsp[-2].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, NULL); 
				append_list(f, (yyvsp[0].l));
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_SQL);
				append_int(f, (yyvsp[-6].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 9054 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2024 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[-1].sval);
			/* other languages here if we ever get to it */
			if (l == 'P' || l == 'p') {
				lang = FUNC_LANG_PY;
			} else
				yyerror(m, sql_message("Language name P(ython) expected, received '%c'", l));

			append_list(f, (yyvsp[-6].l));
			append_list(f, (yyvsp[-4].l));
			append_symbol(f, NULL);
			append_list(f, NULL); 
			append_list(f, append_string(L(), (yyvsp[0].sval)));
			append_int(f, F_LOADER);
			append_int(f, lang);
			append_int(f, (yyvsp[-8].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 9078 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2047 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[0].sym)); }
#line 9084 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2051 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-3].l),(yyvsp[-2].sym)); }
#line 9090 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2055 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-3].l),(yyvsp[-2].sym)); }
#line 9096 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2070 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 9102 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2072 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l),(yyvsp[-1].sym));}
#line 9108 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2076 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 9114 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2078 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l),(yyvsp[-1].sym));}
#line 9120 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2126 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 9126 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2130 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[0].sym));}
#line 9132 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2135 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L(); 
		  append_list( l, (yyvsp[-3].l));
		  append_list( l, (yyvsp[-1].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
#line 9143 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2146 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = L();}
#line 9149 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2147 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 9155 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2149 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 9161 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2154 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[0].sym)); }
#line 9167 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2161 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[-1].sym)); }
#line 9173 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2166 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[-4].sym)),(yyvsp[-3].l)),(yyvsp[-2].l))); }
#line 9183 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2172 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[-3].l)),(yyvsp[-2].l))); }
#line 9192 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2180 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].l))); }
#line 9201 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2188 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 9207 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2190 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 9213 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2195 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].l))); }
#line 9222 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2203 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 9228 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2205 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 9234 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2209 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9240 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2210 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 9246 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2220 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_list(l, (yyvsp[-3].l));
		  append_symbol(l, (yyvsp[-2].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
#line 9257 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2231 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 9263 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2233 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[0].l)); }
#line 9269 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2236 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_list(l, (yyvsp[-1].l));
		  append_symbol(l, (yyvsp[0].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
#line 9280 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2250 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l;
		  char *label = (yyvsp[-7].sval)?(yyvsp[-7].sval):(yyvsp[0].sval);
		  if ((yyvsp[-7].sval) && (yyvsp[0].sval) && strcmp((yyvsp[-7].sval), (yyvsp[0].sval)) != 0) {
			(yyval.sym) = NULL;
			yyerror(m, "WHILE: labels should match");
			YYABORT;
		  }
 		  l = L();
		  append_symbol(l, (yyvsp[-5].sym)); /* condition */
		  append_list(l, (yyvsp[-3].l));	/* statements */
		  append_string(l, label);
		  (yyval.sym) = _symbol_create_list(SQL_WHILE, l);
		}
#line 9298 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2266 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9304 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 2271 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9310 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 2277 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[-1].sval));
			  	  append_type((yyval.l), &(yyvsp[0].type));
				}
#line 9319 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 2282 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
				  append_string((yyval.l), (yyvsp[-1].sval));
			  	  append_type((yyval.l), &(yyvsp[0].type));
				}
#line 9328 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 2290 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[-1].l)); }
#line 9334 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 2292 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 9340 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 2297 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
#line 9349 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 2301 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9355 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 2306 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *p = L();
			  append_string(p, (yyvsp[-1].sval));
			  append_type(p, &(yyvsp[0].type));
			  (yyval.l) = append_list((yyvsp[-3].l), p); }
#line 9364 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 2311 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[-1].sval));
			  append_type(p, &(yyvsp[0].type));
			  (yyval.l) = append_list(l, p); }
#line 9374 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2361 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-6].l));
	  append_int(l, (yyvsp[-5].i_val));
	  append_symbol(l, (yyvsp[-4].sym));
	  append_list(l, (yyvsp[-2].l));
	  append_list(l, (yyvsp[-1].l));
	  append_list(l, (yyvsp[0].l));
	  append_int(l, (yyvsp[-8].bval));
	  (yyval.sym) = _symbol_create_list(SQL_CREATE_TRIGGER, l); 
	}
#line 9389 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2374 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9395 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2375 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9401 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2380 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
#line 9407 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2381 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
#line 9413 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 2382 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TRUNCATE, NULL); }
#line 9419 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 2383 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
#line 9425 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2384 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[0].l)); }
#line 9431 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2388 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9437 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2389 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 9443 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2393 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 9449 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2395 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-1].l), (yyvsp[0].l)); }
#line 9455 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2400 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[0].sval)); }
#line 9461 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 2401 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[0].sval)); }
#line 9467 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 2402 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[0].sval)); }
#line 9473 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 2403 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[0].sval)); }
#line 9479 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 2418 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[-2].i_val));
	  append_symbol((yyval.l), (yyvsp[-1].sym));
	  append_list((yyval.l), (yyvsp[0].l));
	}
#line 9489 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2425 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9495 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2426 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 9501 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2430 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9507 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 2431 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9513 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 2435 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 9519 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2436 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 9525 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2441 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 9531 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 2444 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9537 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 2449 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
#line 9547 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 2455 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
#line 9557 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 2461 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
#line 9567 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 2467 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
#line 9577 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2473 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_LOADER );
	  (yyval.l) = l; }
#line 9587 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2482 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FUNC );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.l) = l; }
#line 9598 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 2489 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FILT );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.l) = l; }
#line 9609 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 2496 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_AGGR );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.l) = l; }
#line 9620 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 2503 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_PROC );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.l) = l; }
#line 9631 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 2510 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_LOADER );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.l) = l; }
#line 9642 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 2520 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
#line 9652 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 2526 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = (yyvsp[-1].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9661 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 2531 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9674 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 2540 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9687 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 2549 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9700 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 2558 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9713 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 2567 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_LOADER );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9726 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 2576 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
#line 9736 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 2582 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
#line 9745 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 2586 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[0].sval) ); }
#line 9751 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 2587 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[0].sval) ); }
#line 9757 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 2588 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[0].l) ); }
#line 9763 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 2590 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, (yyvsp[-1].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, l );
	}
#line 9773 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 2598 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = NULL;}
#line 9779 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 2599 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = (yyvsp[-1].l);}
#line 9785 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 2600 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = L(); }
#line 9791 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 2604 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_type(l, &(yyvsp[0].type) );
				  (yyval.l)= l; }
#line 9799 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 2607 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { append_type((yyvsp[0].l), &(yyvsp[-2].type));
				  (yyval.l) = (yyvsp[0].l); }
#line 9806 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 2612 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9812 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 2613 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9818 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 2614 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9824 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 2634 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	  (yyval.sym) = (yyvsp[0].sym);
	  m->type = Q_TRANS;					}
#line 9832 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2641 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[0].bval));  }
#line 9838 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2643 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[0].sval)); }
#line 9844 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2645 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[0].sval)); }
#line 9850 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2647 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[-1].bval)), (yyvsp[0].sval) )); }
#line 9858 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2651 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[0].i_val)); }
#line 9864 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2653 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[0].i_val)); }
#line 9870 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2655 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[0].i_val)); }
#line 9876 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2659 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_none; }
#line 9882 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 2665 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 9888 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 2667 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ((yyvsp[-2].i_val) | (yyvsp[0].i_val)); }
#line 9894 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 2672 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_readonly; }
#line 9900 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 2673 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_writable; }
#line 9906 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 2674 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_serializable; }
#line 9912 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 2675 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_none; /* not supported */ }
#line 9918 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 2686 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9924 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 2687 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9930 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 2691 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 9936 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 2692 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9942 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 2693 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9948 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 2697 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9954 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 2698 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 9960 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 2703 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-10].l));
	  append_list(l, (yyvsp[-9].l));
	  append_list(l, (yyvsp[-7].l));
	  append_list(l, (yyvsp[-6].l));
	  append_list(l, (yyvsp[-5].l));
	  append_list(l, (yyvsp[-12].l));
	  append_string(l, (yyvsp[-4].sval));
	  append_int(l, (yyvsp[-3].bval));
	  append_int(l, (yyvsp[-2].bval));
	  append_int(l, (yyvsp[-1].bval));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
#line 9978 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 2717 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-9].l));
	  append_list(l, (yyvsp[-8].l));
	  append_list(l, NULL);
	  append_list(l, (yyvsp[-5].l));
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-11].l));
	  append_string(l, (yyvsp[-3].sval));
	  append_int(l, (yyvsp[-2].bval));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].bval));
	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
#line 9996 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 2731 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_COPYLOADER, l ); }
#line 10005 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 2736 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  if ((yyvsp[-7].l) != NULL) {
	  	yyerror(m, "COPY INTO: cannot pass number of records when using binary COPY INTO");
		YYABORT;
	  }
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[0].bval));
	  (yyval.sym) = _symbol_create_list( SQL_BINCOPYFROM, l ); }
#line 10020 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 2747 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_string(l, (yyvsp[-2].sval));
	  append_list(l, (yyvsp[-1].l));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
#line 10031 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 2754 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[-1].l));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
#line 10042 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 2765 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 10048 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 2766 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10054 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 2771 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(L(), (yyvsp[0].l_val)); }
#line 10060 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 2773 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng((yyvsp[-2].l), (yyvsp[0].l_val)); }
#line 10066 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 2778 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 10072 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 2779 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10078 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 2783 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 10084 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 2784 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-2].l), (yyvsp[0].l)); }
#line 10090 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 2789 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_string(l, (yyvsp[0].sval) );
			  (yyval.l) = l; }
#line 10098 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 2793 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_string(l, (yyvsp[-1].sval) );
			  append_string(l, (yyvsp[0].sval) );
			  (yyval.l) = l; }
#line 10107 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 2801 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
#line 10116 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 2806 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[0].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
#line 10125 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 2811 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[-2].sval));
				  append_string(l, (yyvsp[0].sval));
				  (yyval.l) = l; }
#line 10134 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 2816 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[-4].sval));
				  append_string(l, (yyvsp[-2].sval));
				  append_string(l, sql2str((yyvsp[0].sval)));
				  (yyval.l) = l; }
#line 10144 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 2824 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 10150 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 2825 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 10156 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 2829 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 10162 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 2830 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-1].l_val)), 0); }
#line 10168 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 2831 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[0].l_val)); }
#line 10174 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 2833 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-3].l_val)), (yyvsp[-1].l_val)); }
#line 10180 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 2835 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-3].l_val)), (yyvsp[0].l_val)); }
#line 10186 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 2839 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 10192 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 2840 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 10198 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 2844 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10204 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 2845 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10210 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 2849 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10216 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 2850 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10222 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 2854 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10228 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 2855 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10234 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 2859 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 10240 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 2860 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10246 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 2864 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 10252 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 2866 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 10258 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 2872 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
#line 10267 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 2879 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10273 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 2880 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10279 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 2881 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 10285 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 2886 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l) );
	  append_int(l, (yyvsp[-1].i_val) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_TRUNCATE, l ); }
#line 10295 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 2892 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l) );
	  append_int(l, (yyvsp[-1].i_val) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_TRUNCATE, l ); }
#line 10305 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 2902 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
#line 10316 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 2944 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
#line 10326 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 2952 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
#line 10336 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 2961 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
#line 10342 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 2963 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
#line 10348 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 2965 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[0].l)); }
#line 10354 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 2971 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[-1].l)); }
#line 10360 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 2973 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-4].l), (yyvsp[-1].l)); }
#line 10366 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 2977 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10372 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 2979 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10378 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 2983 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10384 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 2985 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10390 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 2990 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 10412 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 3016 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
#line 10418 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 3025 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10424 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 3026 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10430 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 3027 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10436 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 3031 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 10442 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 3033 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 10448 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 3037 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
#line 10454 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 3042 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym));
	  append_string(l, (yyvsp[-2].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
#line 10463 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 3047 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym) );
	  append_string(l, (yyvsp[-2].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
#line 10472 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 3052 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym));
	  append_list(l, (yyvsp[-2].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
#line 10481 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 3059 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10487 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 3060 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10493 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 3067 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10499 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 3069 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
#line 10508 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 3074 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
#line 10520 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 3082 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[-3].i_val));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
#line 10532 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 3090 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[-2].i_val));
	  append_symbol(l, (yyvsp[0].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
#line 10544 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 3100 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10550 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 3101 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10556 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 3102 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1 + (yyvsp[-1].i_val); }
#line 10562 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 3106 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10568 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 3107 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10574 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 3111 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10580 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 3112 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 10586 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 3113 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 10592 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 3117 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10598 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 3119 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[0].l)); }
#line 10604 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 3143 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[-1].l));
	  	append_symbol(l, (yyvsp[0].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
#line 10615 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 3152 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10621 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 3153 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10627 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 3158 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[-3].sval)));
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  append_int(l, FALSE); /* no replace clause */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
#line 10641 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 3182 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = newSelectNode( SA, (yyvsp[-2].bval), (yyvsp[-1].l), NULL,
		(yyvsp[0].l)->h->data.sym,
		(yyvsp[0].l)->h->next->data.sym,
		(yyvsp[0].l)->h->next->next->data.sym,
		(yyvsp[0].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
#line 10653 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 3193 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = newSelectNode( SA, (yyvsp[-4].bval), (yyvsp[-3].l), (yyvsp[-1].l),
		(yyvsp[0].l)->h->data.sym,
		(yyvsp[0].l)->h->next->data.sym,
		(yyvsp[0].l)->h->next->next->data.sym,
		(yyvsp[0].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
#line 10665 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 3204 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
	  (yyval.sym) = (yyvsp[-4].sym);
	  if ((yyvsp[-3].sym) || (yyvsp[-2].sym) || (yyvsp[-1].sym) || (yyvsp[0].sym)) {
	  	if ((yyvsp[-4].sym) != NULL &&
		    ((yyvsp[-4].sym)->token == SQL_SELECT ||
		     (yyvsp[-4].sym)->token == SQL_UNION  ||
		     (yyvsp[-4].sym)->token == SQL_EXCEPT ||
		     (yyvsp[-4].sym)->token == SQL_INTERSECT)) {
			if ((yyvsp[-4].sym)->token == SQL_SELECT) {
	 			SelectNode *s = (SelectNode*)(yyvsp[-4].sym);
	
	  			s -> orderby = (yyvsp[-3].sym);
	  			s -> limit = (yyvsp[-2].sym);
	  			s -> offset = (yyvsp[-1].sym);
	  			s -> sample = (yyvsp[0].sym);
			} else { /* Add extra select * from .. in case of UNION, EXCEPT, INTERSECT */
				(yyval.sym) = newSelectNode( 
					SA, 0, 
					append_symbol(L(), _symbol_create_list(SQL_TABLE, append_string(append_string(L(),NULL),NULL))), NULL,
					_symbol_create_list( SQL_FROM, append_symbol(L(), (yyvsp[-4].sym))), NULL, NULL, NULL, (yyvsp[-3].sym), _symbol_create_list(SQL_NAME, append_list(append_string(L(),"inner"),NULL)), (yyvsp[-2].sym), (yyvsp[-1].sym), (yyvsp[0].sym));
			}
	  	} else {
			yyerror(m, "missing SELECT operator");
			YYABORT;
	  	}
	 } 
	}
#line 10697 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 3234 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 10703 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 3236 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 10709 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 3246 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
#line 10720 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 3255 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
#line 10731 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 3264 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
#line 10742 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 3270 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10748 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 3275 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10754 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 3276 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10760 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 3277 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10766 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 3282 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 10772 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 3284 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 10778 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 3286 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10784 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 3296 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[-3].sym));
	  append_symbol((yyval.l), (yyvsp[-2].sym));
	  append_symbol((yyval.l), (yyvsp[-1].sym));
	  append_symbol((yyval.l), (yyvsp[0].sym)); }
#line 10794 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 3304 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10800 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 3305 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[0].l)); }
#line 10806 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 3309 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10812 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 3311 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10818 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 3315 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_list(l, (yyvsp[-1].l));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10827 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 3320 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[-1].sym));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  	  	  append_int(l, 0);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
#line 10837 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 3326 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[-1].sym));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  	  	  append_int(l, 1);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
#line 10847 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 3332 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  (yyval.sym) = (yyvsp[-1].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[-1].sym);
				  	sn->name = (yyvsp[0].sym);
				  } else {
				  	append_symbol((yyvsp[-1].sym)->data.lval, (yyvsp[0].sym));
				  }
				}
#line 10861 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 3342 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  (yyval.sym) = (yyvsp[-1].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[-1].sym);
				  	sn->name = (yyvsp[0].sym);
					sn->lateral = 1;
				  } else {
				  	append_symbol((yyvsp[-1].sym)->data.lval, (yyvsp[0].sym));
	  				append_int((yyvsp[-1].sym)->data.lval, 1);
				  }
				}
#line 10877 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 3354 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
#line 10886 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 3358 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym);
				  append_symbol((yyvsp[0].sym)->data.lval, NULL); }
#line 10893 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 3362 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->caching = 0; }
#line 10899 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 3364 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[-2].sym));
		append_symbol(op, (yyvsp[0].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
#line 10911 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 3375 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[-3].sval));
		  	  	  append_list(l, (yyvsp[-1].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10920 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 3380 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[0].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10929 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 3385 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[-3].sval));
		  	  	  append_list(l, (yyvsp[-1].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10938 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 3390 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[0].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10947 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 3397 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10953 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 3398 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10959 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 3402 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10965 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 3403 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[0].l) );}
#line 10971 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 3407 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[0].l))); }
#line 10978 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 3410 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[0].l))); }
#line 10985 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 3415 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10991 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 3416 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10997 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 3422 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
#line 11006 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 3426 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11012 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 3431 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
#line 11021 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 3435 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11027 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 3439 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11033 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 3441 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[0].l)); }
#line 11039 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 3445 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11045 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 3446 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val))); 
			}
#line 11054 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 3450 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11060 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 3454 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11066 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 3455 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val))); 
			}
#line 11075 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 3459 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11081 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 3463 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11087 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 3464 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val)));
			}
#line 11096 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 3468 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[0].sval),NULL)));
			}
#line 11105 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 3472 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11111 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 3476 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 11117 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 3478 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 11123 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 3483 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, (yyvsp[0].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
#line 11132 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 3491 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 11138 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 3492 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 11144 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 3493 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 11150 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 3510 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym);

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
			(yyval.sym) = _symbol_create_symbol(SQL_NOT, (yyvsp[0].sym)); }
#line 11171 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 3526 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11177 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 3531 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-2].sym));
		  append_string(l, (yyvsp[-1].sval));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 11188 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 3538 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-2].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 11199 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 3548 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_int(l, (yyvsp[-3].i_val));
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
#line 11210 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 3555 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_int(l, (yyvsp[-3].i_val));
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
#line 11221 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 3564 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 11227 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 3565 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 11233 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 3566 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 11239 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 3571 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 11250 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 3578 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 11261 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 3585 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 11272 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 3592 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 11283 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 3602 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
#line 11291 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 3606 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { const char *s = sql2str((yyvsp[0].sval));
	  if (_strlen(s) != 1) {
		yyerror(m, SQLSTATE(22019) "ESCAPE must be one character");
		(yyval.sym) = NULL;
		YYABORT;
	  } else {
		dlist *l = L();
		append_symbol(l, (yyvsp[-2].sym));
		append_string(l, s);
		(yyval.sym) = _symbol_create_list(SQL_ESCAPE, l);
	  }
	}
#line 11308 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3621 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[-3].sym) );}
#line 11314 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3622 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[-2].sym) ); }
#line 11320 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3627 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-4].sym));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
#line 11330 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3633 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-4].sym));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
#line 11340 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3639 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-5].l));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
#line 11349 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3644 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-5].l));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
#line 11358 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3652 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 11364 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 3654 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 11370 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 3660 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_string(l, (yyvsp[-2].sval));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, (yyvsp[-1].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 11381 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 3667 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, (yyvsp[-1].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 11392 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 3676 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 11398 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 3677 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 11404 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 3678 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 11410 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 3682 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[0].sym) ); }
#line 11416 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 3686 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 11422 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 3687 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym));  }
#line 11428 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 3691 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 11434 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 3696 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-2].l));
		  append_list(l, (yyvsp[-1].l));
		  append_list(l, (yyvsp[0].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
#line 11444 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 3705 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11450 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 3707 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[-1].l)); }
#line 11456 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 3709 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11462 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 3713 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11468 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 3715 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[-1].l)); }
#line 11474 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 3717 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11480 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3724 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11491 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3731 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11502 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 3738 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11513 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3745 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11524 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 3752 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11535 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 3759 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11546 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 3766 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[-2].sym));
			  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11557 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 3773 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11568 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 3780 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11579 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 3787 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11590 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 682:
#line 3794 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11601 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 3801 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11611 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 3807 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11622 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 3814 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11633 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 686:
#line 3821 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11644 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 3828 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11655 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 3835 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11666 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 3842 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11677 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 690:
#line 3849 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11688 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 3856 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
#line 11698 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 3862 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11709 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 3869 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11720 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 3876 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11731 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 3883 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11742 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 3890 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11748 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 3892 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
 			  (yyval.sym) = NULL;
			  assert((yyvsp[0].sym)->token != SQL_COLUMN || (yyvsp[0].sym)->data.lval->h->type != type_lng);
			  if ((yyvsp[0].sym)->token == SQL_COLUMN && (yyvsp[0].sym)->data.lval->h->type == type_int) {
				atom *a = sql_bind_arg(m, (yyvsp[0].sym)->data.lval->h->data.i_val);
				if (!atom_neg(a)) {
					(yyval.sym) = (yyvsp[0].sym);
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
	  		  	append_symbol(l, (yyvsp[0].sym));
	  		  	(yyval.sym) = _symbol_create_list( SQL_UNOP, l ); 
			  }
			}
#line 11774 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 3913 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11780 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 3917 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11786 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 3923 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
#line 11793 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 703:
#line 3925 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
#line 11800 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 705:
#line 3928 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[0].l)); }
#line 11806 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 709:
#line 3932 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[0].l)); }
#line 11812 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 717:
#line 3944 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
#line 11823 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 4014 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[-4].sym)), (yyvsp[-1].l))); }
#line 11830 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 719:
#line 4019 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[-2].l) ); }
#line 11836 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 721:
#line 4025 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[-2].sym)), (yyvsp[-1].sym)), (yyvsp[0].sym)); }
#line 11842 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 4029 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11848 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 723:
#line 4031 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[0].l) ); }
#line 11854 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 724:
#line 4035 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11860 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 725:
#line 4037 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[0].l) ); }
#line 11866 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 726:
#line 4041 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11872 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 727:
#line 4043 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[-1].l), (yyvsp[-2].i_val)), (yyvsp[0].i_val))); }
#line 11878 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 728:
#line 4047 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = FRAME_ROWS; }
#line 11884 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 729:
#line 4048 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = FRAME_RANGE; }
#line 11890 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 730:
#line 4052 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[0].sym)), _symbol_create_int(SQL_FRAME, -1)); }
#line 11896 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 731:
#line 4053 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 11902 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 732:
#line 4057 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
#line 11908 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 733:
#line 4058 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11914 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 734:
#line 4059 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
#line 11920 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 735:
#line 4063 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11926 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 736:
#line 4068 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[-2].sym)), (yyvsp[0].sym)); }
#line 11932 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 737:
#line 4072 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
#line 11938 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 738:
#line 4073 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11944 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 739:
#line 4074 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
#line 11950 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 740:
#line 4078 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11956 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 741:
#line 4082 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_NONE; }
#line 11962 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 742:
#line 4083 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
#line 11968 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 743:
#line 4084 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_GROUP; }
#line 11974 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 744:
#line 4085 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_TIES; }
#line 11980 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 745:
#line 4086 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
#line 11986 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 746:
#line 4090 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[0].sval) ); }
#line 11992 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 747:
#line 4095 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_list(l, (yyvsp[-2].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 12000 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 748:
#line 4099 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_list(l, (yyvsp[-3].l));
	  if (dlist_length((yyvsp[-1].l)) == 1) {
  	  	append_symbol(l, (yyvsp[-1].l)->h->data.sym);
	  	(yyval.sym) = _symbol_create_list( SQL_UNOP, l ); 
	  } else if (dlist_length((yyvsp[-1].l)) == 2) {
  	  	append_symbol(l, (yyvsp[-1].l)->h->data.sym);
  	  	append_symbol(l, (yyvsp[-1].l)->h->next->data.sym);
	  	(yyval.sym) = _symbol_create_list( SQL_BINOP, l ); 
	  } else {
  	  	append_list(l, (yyvsp[-1].l));
	  	(yyval.sym) = _symbol_create_list( SQL_NOP, l ); 
	  }
	}
#line 12019 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 749:
#line 4126 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 12025 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 750:
#line 4127 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12032 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 751:
#line 4132 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 12038 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 752:
#line 4133 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "left"); }
#line 12044 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 753:
#line 4134 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "right"); }
#line 12050 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 754:
#line 4135 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "insert"); }
#line 12056 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 755:
#line 4140 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[-3].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
#line 12067 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 756:
#line 4147 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 12076 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 757:
#line 4152 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 12085 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 758:
#line 4157 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 12094 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 759:
#line 4162 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 12103 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 760:
#line 4167 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 12112 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 761:
#line 4174 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 12118 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 762:
#line 4175 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 12124 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 763:
#line 4180 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 12138 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 764:
#line 4190 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 12152 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 765:
#line 4200 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 12163 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 766:
#line 4207 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 12174 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 767:
#line 4214 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 12185 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 768:
#line 4221 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[-2].sym));
  		  	  append_symbol(l, (yyvsp[0].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 12196 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 769:
#line 4228 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "splitpart")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 12210 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 770:
#line 4240 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 12216 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 771:
#line 4242 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 12222 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 772:
#line 4247 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 12231 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 773:
#line 4252 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_string(l, (yyvsp[-2].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 12240 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 774:
#line 4257 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[-2].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 12249 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 775:
#line 4262 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[-1].sym));
  		  append_string(l, (yyvsp[0].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
#line 12258 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 776:
#line 4269 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 12264 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 777:
#line 4270 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 12270 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 778:
#line 4271 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 12276 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 779:
#line 4276 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
	  if (m->emode == m_normal && m->caching) {
		/* replace by argument */
		AtomNode *an = (AtomNode*)(yyvsp[0].sym);

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
		AtomNode *an = (AtomNode*)(yyvsp[0].sym);
		atom *a = an->a; 
		an->a = atom_dup(SA, a); 
		(yyval.sym) = (yyvsp[0].sym);
	  }
	}
#line 12304 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 780:
#line 4302 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 12310 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 781:
#line 4303 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12317 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 782:
#line 4308 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 12323 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 783:
#line 4309 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12330 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 784:
#line 4314 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 12336 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 785:
#line 4315 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12343 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 786:
#line 4322 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-3].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 12353 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 787:
#line 4328 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-5].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 12363 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 788:
#line 4334 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-4].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 12373 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 789:
#line 4340 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-4].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 12383 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 790:
#line 4346 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-3].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 12393 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 791:
#line 4352 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-5].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-3].sym));
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 12404 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 793:
#line 4362 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 12410 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 794:
#line 4363 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = -1; }
#line 12416 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 795:
#line 4364 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 12422 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 796:
#line 4368 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 12428 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 797:
#line 4369 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 12434 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 798:
#line 4380 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val)+1; }
#line 12440 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 799:
#line 4382 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0+1; }
#line 12446 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 800:
#line 4386 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val)+1; }
#line 12452 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 801:
#line 4388 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 6+1; }
#line 12458 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 802:
#line 4392 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
#line 12464 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 803:
#line 4394 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[-1].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[-1].i_val), 0); 
			}
#line 12474 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 804:
#line 4400 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[-1].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[-1].i_val), 0); 
			}
#line 12484 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 805:
#line 4408 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iyear; }
#line 12490 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 806:
#line 4409 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imonth; }
#line 12496 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 807:
#line 4410 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iday; }
#line 12502 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 808:
#line 4411 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ihour; }
#line 12508 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 809:
#line 4412 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imin; }
#line 12514 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 811:
#line 4417 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = isec; }
#line 12520 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 813:
#line 4422 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iquarter; }
#line 12526 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 814:
#line 4423 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iweek; }
#line 12532 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 815:
#line 4428 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[-1].i_val)), (yyvsp[0].i_val)-1);  }
#line 12539 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 816:
#line 4434 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[0].i_val)), 0);  }
#line 12546 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 817:
#line 4437 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[0].i_val)-1);  }
#line 12553 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 818:
#line 4443 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[-1].i_val)), (yyvsp[0].i_val)-1);  }
#line 12560 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 819:
#line 4446 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[0].i_val)-1);  }
#line 12567 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 820:
#line 4452 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[-2].l)), (yyvsp[0].l) ); }
#line 12574 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 821:
#line 4455 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) =  append_list( L(), (yyvsp[0].l)); }
#line 12580 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 822:
#line 4459 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		int sk, ek, sp, ep;
	  	int tpe;

		(yyval.type).type = NULL;
	  	if ( (tpe = parse_interval_qualifier( m, (yyvsp[0].l), &sk, &ek, &sp, &ep )) < 0){
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
#line 12602 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 826:
#line 4485 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { const char *s = sql2str((yyvsp[0].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
#line 12612 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 827:
#line 4491 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int len = _strlen((yyvsp[0].sval)), i = 2, err = 0;
		  char * hexa = (yyvsp[0].sval);
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
			char *msg = sql_message(SQLSTATE(22003) "Invalid hexadecimal number or hexadecimal too large (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
			(yyval.sym) = _newAtomNode( atom_int(SA, &t, res));
		  }
		}
#line 12681 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 828:
#line 4556 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int err = 0;
		  size_t len = sizeof(lng);
		  lng value, *p = &value;
		  sql_subtype t;

		  if (lngFromStr((yyvsp[0].sval), &len, &p) < 0 || is_lng_nil(value))
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
			char *msg = sql_message(SQLSTATE(22003) "OID value too large or not a number (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode( atom_int(SA, &t, value));
		  }
		}
#line 12716 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 829:
#line 4587 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int digits = _strlen((yyvsp[0].sval)), err = 0;
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
		  if (hgeFromStr((yyvsp[0].sval), &len, &p) < 0 || is_hge_nil(value))
		  	err = 2;
#else
		  if (lngFromStr((yyvsp[0].sval), &len, &p) < 0 || is_lng_nil(value))
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
			char *msg = sql_message(SQLSTATE(22003) "integer value too large or not a number (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode( atom_int(SA, &t, value));
		  }
		}
#line 12781 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 830:
#line 4648 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strip_extra_zeros(sa_strdup(SA, (yyvsp[0].sval)));
		  char *dot = strchr(s, '.');
		  int digits = _strlen(s) - 1;
		  int scale = digits - (int) (dot-s);
		  sql_subtype t;

		  if (digits <= 0)
			digits = 1;
		  if (0 && digits <= MAX_DEC_DIGITS) {
		  	double val = strtod((yyvsp[0].sval),NULL);
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
			char *p = (yyvsp[0].sval);
			double val;

			errno = 0;
			val = strtod((yyvsp[0].sval),&p);
			if (p == (yyvsp[0].sval) || is_dbl_nil(val) || (errno == ERANGE && (val < -1 || val > 1))) {
				char *msg = sql_message(SQLSTATE(22003) "Double value too large or not a number (%s)", (yyvsp[0].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.sym) = NULL;
				YYABORT;
			}
		  	sql_find_subtype(&t, "double", 51, 0 );
		  	(yyval.sym) = _newAtomNode(atom_float(SA, &t, val));
		   }
		}
#line 12824 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 831:
#line 4687 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
  		  char *p = (yyvsp[0].sval);
		  double val;

		  errno = 0;
 		  val = strtod((yyvsp[0].sval),&p);
		  if (p == (yyvsp[0].sval) || is_dbl_nil(val) || (errno == ERANGE && (val < -1 || val > 1))) {
			char *msg = sql_message(SQLSTATE(22003) "Double value too large or not a number (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  }
		  sql_find_subtype(&t, "double", 51, 0 );
		  (yyval.sym) = _newAtomNode(atom_float(SA, &t, val)); }
#line 12845 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 832:
#line 4704 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a;
		  int r;

 		  r = sql_find_subtype(&t, "date", 0, 0 );
		  if (!r || (a = atom_general(SA, &t, (yyvsp[0].sval))) == NULL) {
			char *msg = sql_message(SQLSTATE(22007) "Incorrect date value (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
#line 12865 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 833:
#line 4720 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a;
		  int r;

	          r = sql_find_subtype(&t, ((yyvsp[-1].bval))?"timetz":"time", (yyvsp[-2].i_val), 0);
		  if (!r || (a = atom_general(SA, &t, (yyvsp[0].sval))) == NULL) {
			char *msg = sql_message(SQLSTATE(22007) "Incorrect time value (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
#line 12885 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 834:
#line 4736 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a;
		  int r;

 		  r = sql_find_subtype(&t, ((yyvsp[-1].bval))?"timestamptz":"timestamp",(yyvsp[-2].i_val),0);
		  if (!r || (a = atom_general(SA, &t, (yyvsp[0].sval))) == NULL) {
			char *msg = sql_message(SQLSTATE(22007) "Incorrect timestamp value (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
#line 12905 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 836:
#line 4753 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a= 0;
		  int r;

		  (yyval.sym) = NULL;
 		  r = sql_find_subtype(&t, "blob", 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[0].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22M28) "incorrect blob %s", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
#line 12926 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 837:
#line 4770 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a= 0;
		  int r;

		  (yyval.sym) = NULL;
		  r = sql_find_subtype(&t, (yyvsp[-1].sval), 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[0].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22000) "incorrect %s %s", (yyvsp[-1].sval), (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
#line 12947 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 838:
#line 4787 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t; 
		  atom *a = 0;
		  int r;

		  (yyval.sym) = NULL;
		  r = sql_find_subtype(&t, (yyvsp[-1].sval), 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[0].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22000) "incorrect %s %s", (yyvsp[-1].sval), (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
#line 12968 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 839:
#line 4804 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  sql_type *t = mvc_bind_type(m, (yyvsp[-1].sval));
		  atom *a;

		  (yyval.sym) = NULL;
		  if (t) {
		  	sql_subtype tpe;
			sql_init_subtype(&tpe, t, 0, 0);
			a = atom_general(SA, &tpe, (yyvsp[0].sval));
			if (a)
				(yyval.sym) = _newAtomNode(a);
		  }
		  if (!t || !(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22000) "type (%s) unknown", (yyvsp[-1].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
#line 12993 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 840:
#line 4825 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
#line 13001 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 841:
#line 4829 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
#line 13009 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 842:
#line 4835 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		sql_subtype t;
		int sk, ek, sp, ep, tpe;
	  	lng i = 0;
		int r = 0;

		(yyval.sym) = NULL;
	  	if ( (tpe = parse_interval_qualifier( m, (yyvsp[0].l), &sk, &ek, &sp, &ep )) < 0){
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
	  	if (!r || (tpe = parse_interval( m, (yyvsp[-2].i_val), (yyvsp[-1].sval), sk, ek, sp, ep, &i)) < 0) { 
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
#line 13054 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 843:
#line 4880 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 13060 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 844:
#line 4881 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  m->scanner.schema = (yyvsp[-2].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 13069 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 845:
#line 4885 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  m->scanner.schema = (yyvsp[-4].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[-4].sval)), 
						(yyvsp[-2].sval)), 
					(yyvsp[0].sval))
				;}
#line 13082 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 846:
#line 4896 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				L(), (yyvsp[0].sval)); }
#line 13089 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 847:
#line 4899 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 13097 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 848:
#line 4904 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[-4].sval)), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 13106 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 849:
#line 4912 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_type(l, &(yyvsp[-1].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
#line 13115 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 850:
#line 4918 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_type(l, &(yyvsp[-1].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
#line 13124 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 852:
#line 4930 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[-3].sym)), (yyvsp[-1].sym))); }
#line 13133 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 853:
#line 4935 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[-1].l)); }
#line 13139 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 854:
#line 4937 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[-3].sym)),(yyvsp[-2].l)),(yyvsp[-1].sym))); }
#line 13149 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 855:
#line 4943 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[-2].l)),(yyvsp[-1].sym))); }
#line 13158 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 856:
#line 4951 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 13164 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 857:
#line 4953 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 13170 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 858:
#line 4958 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[-2].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[0].sym));
			}
#line 13178 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 859:
#line 4962 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 13184 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 860:
#line 4968 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].sym))); }
#line 13193 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 861:
#line 4976 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 13199 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 862:
#line 4978 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 13205 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 863:
#line 4983 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].sym))); }
#line 13214 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 864:
#line 4991 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 13220 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 865:
#line 4993 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 13226 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 866:
#line 4997 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 13232 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 867:
#line 4998 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 13238 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 869:
#line 5008 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
#line 13250 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 870:
#line 5019 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l_val) = (yyvsp[0].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
#line 13262 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 871:
#line 5029 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l_val) = (yyvsp[0].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
#line 13274 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 872:
#line 5039 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
#line 13286 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 873:
#line 5050 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
#line 13292 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 874:
#line 5052 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
#line 13301 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 875:
#line 5056 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
#line 13307 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 876:
#line 5058 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[-1].i_val), 0); }
#line 13313 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 877:
#line 5060 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[-1].i_val), 0); }
#line 13319 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 878:
#line 5062 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[-1].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
#line 13332 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 879:
#line 5070 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
#line 13338 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 880:
#line 5072 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[-1].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
#line 13351 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 881:
#line 5080 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
#line 13357 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 882:
#line 5081 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
#line 13363 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 883:
#line 5082 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
#line 13369 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 884:
#line 5083 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
#line 13375 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 885:
#line 5084 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
#line 13381 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 886:
#line 5086 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
#line 13387 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 887:
#line 5088 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			  int d = (yyvsp[-1].i_val);
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
#line 13404 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 888:
#line 5101 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			  int d = (yyvsp[-3].i_val);
			  int s = (yyvsp[-1].i_val);
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
#line 13426 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 889:
#line 5118 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 13432 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 890:
#line 5120 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].i_val) > 0 && (yyvsp[-1].i_val) <= 24) {
				sql_find_subtype(&(yyval.type), "real", (yyvsp[-1].i_val), 0);
			  } else if ((yyvsp[-1].i_val) > 24 && (yyvsp[-1].i_val) <= 53) {
				sql_find_subtype(&(yyval.type), "double", (yyvsp[-1].i_val), 0);
			  } else {
				char *msg = sql_message(SQLSTATE(22003) "Number of digits for FLOAT values should be between 1 and 53");

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  }
			}
#line 13450 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 891:
#line 5134 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].i_val) >= (yyvsp[-3].i_val)) {
				char *msg = sql_message(SQLSTATE(22003) "Precision(%d) should be less than number of digits(%d)", (yyvsp[-1].i_val), (yyvsp[-3].i_val));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else if ((yyvsp[-3].i_val) > 0 && (yyvsp[-3].i_val) <= 24) {
				sql_find_subtype(&(yyval.type), "real", (yyvsp[-3].i_val), (yyvsp[-1].i_val));
			  } else if ((yyvsp[-3].i_val) > 24 && (yyvsp[-3].i_val) <= 53) {
				sql_find_subtype(&(yyval.type), "double", (yyvsp[-3].i_val), (yyvsp[-1].i_val));
			  } else {
				char *msg = sql_message(SQLSTATE(22003) "Number of digits for FLOAT values should be between 1 and 53");
				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  }
			}
#line 13474 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 892:
#line 5153 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 13480 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 893:
#line 5154 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 13486 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 894:
#line 5155 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
#line 13492 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 897:
#line 5158 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[0].sval), 0, 0); }
#line 13498 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 898:
#line 5160 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[-3].sval), (yyvsp[-1].i_val), 0); }
#line 13504 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 899:
#line 5161 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[0].sval), 0, 0); }
#line 13510 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 900:
#line 5163 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[-3].sval), (yyvsp[-1].i_val), 0); }
#line 13516 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 901:
#line 5165 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].i_val) >= (yyvsp[-3].i_val)) {
				char *msg = sql_message(SQLSTATE(22003) "Precision(%d) should be less than number of digits(%d)", (yyvsp[-1].i_val), (yyvsp[-3].i_val));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
			 	sql_find_subtype(&(yyval.type), (yyvsp[-5].sval), (yyvsp[-3].i_val), (yyvsp[-1].i_val));
			  }
			}
#line 13532 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 902:
#line 5176 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  sql_type *t = mvc_bind_type(m, (yyvsp[0].sval));
			  if (!t) {
				char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[0].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_init_subtype(&(yyval.type), t, 0, 0);
			  }
			}
#line 13550 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 903:
#line 5191 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  sql_type *t = mvc_bind_type(m, (yyvsp[-3].sval));
			  if (!t) {
				char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[-3].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_init_subtype(&(yyval.type), t, (yyvsp[-1].i_val), 0);
			  }
			}
#line 13568 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 904:
#line 5204 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (!sql_find_subtype(&(yyval.type), "geometry", 0, 0 )) {
			yyerror(m, SQLSTATE(22000) "type (geometry) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
#line 13580 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 905:
#line 5211 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		int geoSubType = (yyvsp[-1].i_val); 

		if(geoSubType == 0) {
			(yyval.type).type = NULL;
			YYABORT;
		} else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, 0 )) {
			char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[-3].sval));
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.type).type = NULL;
			YYABORT;
		}
		
	}
#line 13600 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 906:
#line 5226 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		int geoSubType = (yyvsp[-3].i_val); 
		int srid = (yyvsp[-1].i_val); 

		if(geoSubType == 0) {
			(yyval.type).type = NULL;
			YYABORT;
		} else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, srid )) {
			char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[-5].sval));
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
#line 13620 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 907:
#line 5241 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (!sql_find_subtype(&(yyval.type), "geometrya", 0, 0 )) {
			yyerror(m, SQLSTATE(22000) "type (geometrya) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
#line 13632 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 908:
#line 5248 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	int geoSubType = find_subgeometry_type((yyvsp[0].sval));

	if(geoSubType == 0) {
		char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[0].sval));
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
		char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[0].sval));
		yyerror(m, msg);
		_DELETE(msg);
		(yyval.type).type = NULL;
		YYABORT;
	}
}
#line 13660 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 909:
#line 5274 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	int subtype = find_subgeometry_type((yyvsp[0].sval));
	char* geoSubType = (yyvsp[0].sval);

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
#line 13682 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 910:
#line 5291 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	int subtype = find_subgeometry_type((yyvsp[0].sval));
	char* geoSubType = (yyvsp[0].sval);

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
#line 13704 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 911:
#line 5312 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 	char *t = sql_bind_alias((yyvsp[0].sval));
	  	if (!t) {
			char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sval) = NULL;
			YYABORT;
		}
		(yyval.sval) = t;
	}
#line 13720 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 912:
#line 5326 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13726 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 913:
#line 5327 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-1].sval); }
#line 13732 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 914:
#line 5331 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13738 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 915:
#line 5332 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13744 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 916:
#line 5333 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-2].sval); }
#line 13750 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 917:
#line 5336 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13756 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 918:
#line 5337 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-2].sval); }
#line 13762 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 921:
#line 5345 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13768 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 922:
#line 5346 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13774 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 923:
#line 5347 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13780 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 924:
#line 5348 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13786 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 925:
#line 5349 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13792 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 926:
#line 5350 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13798 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 927:
#line 5354 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13804 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 928:
#line 5355 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13810 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 929:
#line 5356 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13816 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 930:
#line 5357 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13822 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 931:
#line 5358 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13828 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 932:
#line 5359 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13834 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 933:
#line 5360 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13840 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 935:
#line 5365 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "large"); }
#line 13846 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 936:
#line 5366 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "name"); }
#line 13852 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 937:
#line 5367 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "object"); }
#line 13858 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 938:
#line 5368 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "password"); }
#line 13864 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 939:
#line 5369 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "path"); }
#line 13870 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 940:
#line 5370 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "precision"); }
#line 13876 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 941:
#line 5371 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
#line 13882 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 942:
#line 5372 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "role"); }
#line 13888 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 943:
#line 5373 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "size"); }
#line 13894 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 944:
#line 5374 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "type"); }
#line 13900 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 945:
#line 5375 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "release"); }
#line 13906 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 946:
#line 5376 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "value"); }
#line 13912 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 947:
#line 5377 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "zone"); }
#line 13918 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 948:
#line 5379 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "action"); }
#line 13924 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 949:
#line 5380 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "as"); }
#line 13930 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 950:
#line 5381 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
#line 13936 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 951:
#line 5382 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "column"); }
#line 13942 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 952:
#line 5383 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
#line 13948 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 953:
#line 5384 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
#line 13954 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 954:
#line 5385 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "increment"); }
#line 13960 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 955:
#line 5386 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
#line 13966 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 956:
#line 5387 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
#line 13972 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 957:
#line 5388 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "plan"); }
#line 13978 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 958:
#line 5389 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "schema"); }
#line 13984 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 959:
#line 5390 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "start"); }
#line 13990 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 960:
#line 5391 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "statement"); }
#line 13996 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 961:
#line 5392 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "table"); }
#line 14002 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 962:
#line 5394 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "cache"); }
#line 14008 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 963:
#line 5395 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "data"); }
#line 14014 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 964:
#line 5396 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
#line 14020 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 965:
#line 5397 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "match"); }
#line 14026 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 966:
#line 5398 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "options"); }
#line 14032 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 967:
#line 5399 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "row"); }
#line 14038 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 968:
#line 5400 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "key"); }
#line 14044 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 969:
#line 5401 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "language"); }
#line 14050 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 970:
#line 5402 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "level"); }
#line 14056 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 971:
#line 5403 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "session"); }
#line 14062 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 972:
#line 5404 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "date"); }
#line 14068 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 973:
#line 5405 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "time"); }
#line 14074 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 974:
#line 5406 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
#line 14080 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 975:
#line 5407 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "interval"); }
#line 14086 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 976:
#line 5408 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "quarter"); }
#line 14092 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 977:
#line 5409 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "week"); }
#line 14098 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 978:
#line 5410 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
#line 14104 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 979:
#line 5412 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
#line 14110 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 980:
#line 5413 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "execute"); }
#line 14116 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 981:
#line 5414 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "explain"); }
#line 14122 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 982:
#line 5415 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "debug"); }
#line 14128 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 983:
#line 5416 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "trace"); }
#line 14134 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 984:
#line 5417 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "text"); }
#line 14140 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 985:
#line 5418 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
#line 14146 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 986:
#line 5419 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "no"); }
#line 14152 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 987:
#line 5421 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "strip"); }
#line 14158 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 988:
#line 5422 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
#line 14164 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 989:
#line 5423 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "passing"); }
#line 14170 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 990:
#line 5424 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "nil"); }
#line 14176 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 991:
#line 5425 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "ref"); }
#line 14182 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 992:
#line 5426 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "absent"); }
#line 14188 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 993:
#line 5427 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "empty"); }
#line 14194 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 994:
#line 5428 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "document"); }
#line 14200 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 995:
#line 5429 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "element"); }
#line 14206 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 996:
#line 5430 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "content"); }
#line 14212 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 997:
#line 5431 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
#line 14218 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 998:
#line 5432 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "returning"); }
#line 14224 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 999:
#line 5433 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "location"); }
#line 14230 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 5434 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "id"); }
#line 14236 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 5435 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "according"); }
#line 14242 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 5436 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "uri"); }
#line 14248 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 5437 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "filter"); }
#line 14254 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 5438 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
#line 14260 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 5439 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "temp"); }
#line 14266 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 5440 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
#line 14272 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 5441 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
#line 14278 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 5442 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "storage"); }
#line 14284 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 5443 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
#line 14290 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 5444 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "replace"); }
#line 14296 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 5445 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "comment"); }
#line 14302 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 5449 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 14308 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 5451 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 14314 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 5456 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  char *end = NULL, *s = (yyvsp[0].sval);
		  int l = _strlen(s);
		  // errno might be non-zero due to other people's code
		  errno = 0;
		  if (l <= 19) {
		  	(yyval.l_val) = strtoll(s,&end,10);
		  } else {
			(yyval.l_val) = 0;
		  }
		  if (s+l != end || errno == ERANGE) {
			char *msg = sql_message(SQLSTATE(22003) "Integer value too large or not a number (%s)", (yyvsp[0].sval));

			errno = 0;
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.l_val) = 0;
			YYABORT;
		  }
		}
#line 14339 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 5479 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  char *end = NULL, *s = (yyvsp[0].sval);
		  int l = _strlen(s);
		  // errno might be non-zero due to other people's code
		  errno = 0;
		  if (l <= 10) {
		  	(yyval.i_val) = strtol(s,&end,10);
		  } else {
			(yyval.i_val) = 0;
		  }
		  if (s+l != end || errno == ERANGE) {
			char *msg = sql_message(SQLSTATE(22003) "Integer value too large or not a number (%s)", (yyvsp[0].sval));

			errno = 0;
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		}
#line 14364 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 5499 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  char *name = (yyvsp[0].sval);
		  sql_subtype *tpe;

		  if (!stack_find_var(m, name)) {
			char *msg = sql_message(SQLSTATE(22000) "Constant (%s) unknown", (yyvsp[0].sval));

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
			char *msg = sql_message(SQLSTATE(22000) "Constant (%s) has wrong type (number expected)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		}
#line 14398 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 5532 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 14404 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 5534 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strconcat((yyvsp[-1].sval),(yyvsp[0].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
#line 14413 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 5542 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[0].sym); }
#line 14421 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 5549 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_int(l, (yyvsp[-2].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 14430 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 5554 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_int(l, (yyvsp[-3].i_val));
  	  append_list(l, (yyvsp[-1].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 14439 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 5568 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14445 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 5573 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[0].l)); }
#line 14451 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 5581 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COMMENT, l );
	}
#line 14461 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 5587 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_COMMENT, l );
	}
#line 14471 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 5595 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_SCHEMA, (yyvsp[0].sval) ); }
#line 14477 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 5596 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_TABLE, (yyvsp[0].l) ); }
#line 14483 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 5597 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VIEW, (yyvsp[0].l) ); }
#line 14489 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 5599 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-2].sval));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l );
	}
#line 14499 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 5605 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-4].sval));
	  append_string(l, (yyvsp[-2].sval));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l );
	}
#line 14510 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 5611 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_INDEX, (yyvsp[0].l) ); }
#line 14516 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 5612 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_SEQUENCE, (yyvsp[0].l) ); }
#line 14522 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 5613 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_ROUTINE, (yyvsp[0].l) ); }
#line 14528 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 5622 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 14534 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 5624 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 14540 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 5646 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
#line 14549 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 5654 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
#line 14558 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 5662 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
#line 14567 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 5672 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
#line 14578 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 5682 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 14584 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 5684 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 14592 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 5688 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-2].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[0].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 14600 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 5692 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-4].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[-2].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 14608 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 5696 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-2].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 14616 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 5700 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[0].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 14624 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 5704 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[-2].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 14632 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 5708 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 14640 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 5718 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 14646 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 5722 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14652 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 5724 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[-2].sym));
	  	  append_symbol(l, (yyvsp[0].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 14663 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 5734 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[0].sval));
	  append_symbol(l, (yyvsp[-1].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14672 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 5741 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 14678 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 5742 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 14684 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 5755 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[-1].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[0].i_val)); 	}
#line 14692 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 5762 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 14698 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 5764 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 14704 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 5772 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14710 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 5773 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 14716 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 5777 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14722 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 5778 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14728 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 5779 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 14734 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 5780 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 3; }
#line 14740 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 5781 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 4; }
#line 14746 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 5788 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_list(l, (yyvsp[-3].l));
	  append_int(l, (yyvsp[-2].i_val));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
#line 14758 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 5798 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14764 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 5799 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 14770 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 5804 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 14776 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 5806 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-2].l), (yyvsp[0].l)); }
#line 14782 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 5811 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-1].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[0].sval)); }
#line 14789 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 5816 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14795 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 5820 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 14801 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 5821 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 14807 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 5825 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 14813 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 5832 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_int(l, (yyvsp[-3].i_val) );
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
#line 14823 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 5839 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14829 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 5840 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14835 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 5847 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
#line 14845 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 5859 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14851 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 5861 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14857 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 5872 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14863 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 5918 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
#line 14872 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 5929 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14878 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 5934 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 14884 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 5938 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14890 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 5939 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14896 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 5943 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14902 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 5944 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14908 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 5945 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14914 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 5960 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 14920 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 5964 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14926 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 5966 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[-2].sym));
	  	  append_symbol(l, (yyvsp[0].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 14937 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 5989 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strconcat("xmlns:", (yyvsp[0].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[-2].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14948 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 5998 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[0].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14957 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 6002 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14963 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 6098 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
          dlist *aggr = L();

          if ((yyvsp[-2].sym)) {
	  	if ((yyvsp[-3].sym) != NULL && (yyvsp[-3].sym)->token == SQL_SELECT) {
			SelectNode *s = (SelectNode*)(yyvsp[-3].sym);
	
			s->orderby = (yyvsp[-2].sym);
	  	} else {
			yyerror(m, "ORDER BY: missing select operator");
			YYABORT;
		}
	  }
          append_list(aggr, append_string(append_string(L(), "sys"), "xmlagg"));
  	  append_int(aggr, FALSE);
	  append_symbol(aggr, (yyvsp[-3].sym));
	  /* int returning not used */
	  (yyval.sym) = _symbol_create_list( SQL_AGGR, aggr);
	}
#line 14987 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;


#line 14991 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (m, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (m, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (m, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, m);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 6119 "src/sql/server/sql_parser.y" /* yacc.c:1906  */

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

