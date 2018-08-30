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
#include "sql_decimal.h" /* for decimal_from_str() */
#include "sql_semantic.h"     /* for sql_add_param() & sql_add_arg() */
#include "sql_env.h"
#include "rel_sequence.h"     /* for sql_next_seq_name() */
#ifdef HAVE_HGE
#include "mal.h"         /* for have_hge */
#endif
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#include <string.h>

#define SA     m->sa
#define _symbol_create(t,d)         symbol_create( SA, t, d)
#define _symbol_create_list(t,d)    symbol_create_list( SA, t, d)
#define _symbol_create_int(t,d)     symbol_create_int( SA, t, d)
#define _symbol_create_lng(t,d)     symbol_create_lng( SA, t, d)
#define _symbol_create_symbol(t,d)  symbol_create_symbol( SA, t, d)
#define _symbol_create_hexa(t,d)    symbol_create_hexa( SA, t, d)
#define _newAtomNode(d)           newAtomNode( SA, d)

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

#define YY_parse_LSP_NEEDED   /* needed for bison++ 1.21.11-3 */

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
     int       i_val,bval;
     lng       l_val,operation;
     double         fval;
     char *         sval;
     symbol*        sym;
     dlist*         l;
     sql_subtype    type;
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
#   define YYCOPY(To, From, Count)      \
      do                      \
     {                        \
       YYSIZE_T yyi;                    \
       for (yyi = 0; yyi < (Count); yyi++)   \
         (To)[yyi] = (From)[yyi];       \
     }                        \
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)                       \
    do                                            \
      {                                           \
     YYSIZE_T yynewbytes;                              \
     YYCOPY (&yyptr->Stack, Stack, yysize);                 \
     Stack = &yyptr->Stack;                            \
     yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
     yyptr += yynewbytes / sizeof (*yyptr);                 \
      }                                           \
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  239
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   18454

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

#define YYTRANSLATE(YYX)                          \
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
     356,     0,    -1,   369,   135,    -1,    -1,   251,   357,   369,
     135,    -1,    -1,   247,   358,   369,   135,    -1,    -1,   246,
     359,   369,   135,    -1,    -1,   248,   360,   356,    -1,    -1,
     249,   361,   356,    -1,   687,   135,    -1,    -1,   135,    -1,
       1,   135,    -1,    51,    -1,   231,    -1,   362,    -1,   231,
     181,   327,    -1,    -1,   313,   107,    -1,    -1,   313,   178,
     107,    -1,   256,    -1,   279,    -1,   241,    -1,   374,    -1,
     383,    -1,   388,    -1,   405,    -1,   504,    -1,   400,    -1,
     371,    -1,   373,    -1,   244,   655,   455,   584,   370,    -1,
     468,    -1,   692,    -1,    -1,   245,    -1,   368,   372,    -1,
     368,   417,    -1,   449,   672,    -1,   372,   349,   449,   672,
      -1,   367,   681,   179,   579,    -1,   367,   456,   179,   605,
      -1,   367,    64,   228,   681,    -1,   367,   278,   681,    -1,
     367,   652,   179,   681,    -1,   367,   265,   681,    -1,   367,
     292,   303,    59,    -1,   367,   292,   303,   654,    -1,   362,
     278,   365,   375,   377,   689,   378,    -1,   366,   278,   364,
     655,   507,    -1,   681,    -1,   228,   376,    -1,   681,   228,
     376,    -1,   681,    -1,    -1,   254,    20,   279,   681,    -1,
      -1,   379,    -1,   380,    -1,   379,   380,    -1,   383,    -1,
     388,    -1,   405,    -1,   504,    -1,   400,    -1,    -1,   174,
     266,   382,    -1,    57,    -1,    63,    -1,   263,   391,   286,
     398,   385,   387,    -1,   263,   384,   286,   398,   386,   387,
      -1,   679,    -1,   384,   349,   679,    -1,    -1,   174,   263,
     271,    -1,    -1,   174,   266,   271,    -1,    -1,   112,   382,
      -1,   264,   389,   391,   112,   398,   387,    -1,   264,   390,
     384,   112,   398,   387,    -1,    -1,   263,   271,   113,    -1,
      -1,   266,   271,   113,    -1,   392,    -1,   395,   270,   394,
      -1,   393,    -1,   393,   349,   393,    -1,   320,   112,    -1,
     320,   267,    -1,   284,   655,    -1,   655,    -1,   502,    -1,
     191,   275,    -1,   191,    -1,   396,    -1,   397,    -1,   396,
     349,   397,    -1,    68,    -1,    65,    -1,   257,    -1,    66,
     455,    -1,    67,   455,    -1,   277,   455,    -1,   253,    -1,
     399,    -1,   398,   349,   399,    -1,   276,    -1,   679,    -1,
     282,   284,   655,   283,   404,   424,    -1,   282,   284,   655,
     283,   284,   655,    -1,   282,   284,   655,   282,   402,    -1,
     282,   284,   655,   256,   403,    -1,   282,   284,   655,   279,
      89,    91,    -1,   282,   284,   655,   279,    68,    91,    -1,
     282,   284,   655,   279,    89,    90,    -1,   282,    56,   681,
     401,    -1,   282,    56,   681,   259,   286,   681,    -1,   282,
      56,   279,   415,   262,   686,    16,   336,   262,   686,    -1,
     174,   415,   262,   686,    -1,   279,   278,   681,    -1,   174,
     415,   262,   686,   279,   278,   681,    -1,   404,   681,   279,
     254,   434,    -1,   404,   681,   279,   111,    -1,   404,   681,
     279,   178,   111,    -1,   404,   681,   256,   254,    -1,   404,
     681,   279,   100,     3,    -1,   404,   681,   279,   100,   111,
      -1,   404,   681,   507,    -1,   230,   681,   507,    -1,   284,
     655,   507,    -1,   285,    -1,    -1,   362,   414,    -1,   362,
     417,    -1,   451,    -1,   457,    -1,   460,    -1,   412,    -1,
     406,    -1,   489,    -1,   362,   116,   655,   407,    -1,   366,
     116,   655,    -1,   282,   116,   655,   408,    -1,   409,    -1,
     407,   409,    -1,   410,    -1,   408,   410,    -1,   328,   672,
      -1,    87,   174,   670,    -1,   411,    -1,   328,   672,    -1,
     118,    -1,   118,   174,   670,    -1,   118,   174,   605,    -1,
     411,    -1,   117,   105,   669,    -1,   121,   669,    -1,   124,
      -1,   120,   669,    -1,   123,    -1,   128,   669,    -1,   122,
      -1,   125,    -1,   362,   413,   326,   681,   270,   655,   175,
     449,   176,    -1,   287,    -1,   104,    -1,   106,    -1,    -1,
     265,   681,   381,    -1,    56,   681,   174,   415,   262,   686,
     240,   686,   278,   681,    -1,    -1,   261,    -1,   260,    -1,
      -1,   100,   681,     3,    -1,   284,   365,   655,   420,   416,
      -1,   284,   365,   655,   112,   236,   625,    -1,   223,   284,
     365,   655,   420,    -1,   224,   284,   365,   655,   420,    -1,
     226,   284,   365,   655,   420,    -1,   225,   284,   365,   655,
     420,   270,     3,    -1,   418,   284,   365,   655,   420,   419,
      -1,   222,    -1,   221,    -1,    59,   222,    -1,    59,   221,
      -1,    17,   222,    -1,    17,   221,    -1,    -1,   270,    78,
      65,    86,    -1,   270,    78,    85,    86,    -1,   270,    78,
     256,    -1,   175,   423,   176,    -1,   421,    -1,   455,   328,
     452,   422,    -1,    -1,   174,    84,   173,    -1,   174,   173,
      -1,   425,    -1,   423,   349,   425,    -1,   427,    -1,   438,
      -1,   424,    -1,   430,    -1,   450,    -1,   132,    -1,   133,
      -1,   678,   672,   428,    -1,   678,   426,    -1,    -1,   429,
      -1,   432,    -1,   429,   432,    -1,   681,   174,   272,   175,
     431,   176,    -1,   432,    -1,   431,   349,   432,    -1,   433,
      -1,   435,    -1,   436,    -1,   254,   434,    -1,   606,    -1,
     439,   446,    -1,   129,   130,   328,   131,   437,    -1,   134,
      -1,    -1,   175,   407,   176,    -1,   439,   447,    -1,    -1,
     230,   681,    -1,    84,    41,    -1,    42,    -1,    43,    -1,
     279,   111,    -1,   279,   254,    -1,   270,    66,   440,    -1,
     270,    65,   440,    -1,    -1,   441,    -1,   442,    -1,   442,
     441,    -1,   441,   442,    -1,    -1,    72,    -1,    39,    -1,
      40,    -1,    -1,   114,   444,    -1,   178,   111,    -1,   111,
      -1,   287,    -1,   274,   269,    -1,   277,   655,   455,   445,
     443,    -1,   448,    -1,   287,   456,    -1,   274,   269,   456,
      -1,   258,   269,   456,   277,   655,   455,   445,   443,    -1,
     229,   175,   579,   176,    -1,   681,    -1,   449,   349,   681,
      -1,   184,   655,    -1,   363,   289,   655,   455,   328,   452,
     454,    -1,   453,    -1,   175,   452,   176,    -1,   562,    -1,
     556,    -1,    -1,   174,   229,   271,    -1,    -1,   456,    -1,
     175,   449,   176,    -1,   362,   233,   655,   239,   240,   681,
      -1,   681,   350,   681,    -1,     4,    -1,   686,    -1,   363,
     235,   655,   175,   487,   176,   238,   486,   239,   240,   458,
      -1,   363,   235,   655,   175,   487,   176,   238,   486,   461,
      -1,   363,   235,   655,   175,   487,   176,   238,   486,   243,
       5,   459,    -1,   363,   167,   235,   655,   175,   487,   176,
     239,   240,   458,    -1,   363,   237,   655,   175,   487,   176,
     238,   486,   239,   240,   458,    -1,   363,   237,   655,   175,
     487,   176,   238,   486,   243,     5,   459,    -1,   363,   234,
     655,   175,   487,   176,   239,   240,   458,    -1,   363,   234,
     655,   175,   487,   176,   461,    -1,   363,   236,   655,   175,
     487,   176,   243,     5,   459,    -1,   464,    -1,   318,   462,
     464,   135,   319,    -1,   318,   317,   462,   464,   135,   319,
      -1,    -1,   462,   464,   135,    -1,    -1,   463,   465,   135,
      -1,   509,    -1,   508,    -1,   374,    -1,   383,    -1,   388,
      -1,   405,    -1,   504,    -1,   400,    -1,   371,    -1,   373,
      -1,   466,    -1,   561,    -1,   509,    -1,   508,    -1,   383,
      -1,   388,    -1,   371,    -1,   373,    -1,   466,    -1,   561,
      -1,   468,    -1,   467,    -1,   482,    -1,   480,    -1,   474,
      -1,   472,    -1,   242,   469,    -1,   242,   625,    -1,   470,
     175,   471,   176,    -1,   655,    -1,    -1,   607,    -1,   471,
     349,   607,    -1,   281,   473,    -1,   453,    -1,   579,    -1,
     284,   175,   453,   176,    -1,   307,   607,   476,   479,   319,
     307,    -1,   307,   478,   479,   319,   307,    -1,   308,   607,
     309,   462,    -1,   475,    -1,   476,   475,    -1,   308,   579,
     309,   462,    -1,   477,    -1,   478,   477,    -1,    -1,   310,
     462,    -1,   313,   579,   309,   462,   481,   319,   313,    -1,
      -1,   310,   462,    -1,   314,   579,   309,   462,   481,    -1,
     483,   315,   579,   316,   462,   319,   315,   484,    -1,    -1,
     681,   351,    -1,    -1,   681,    -1,   678,   672,    -1,   485,
     349,   678,   672,    -1,   284,   175,   485,   176,    -1,   672,
      -1,   488,    -1,   207,    -1,    -1,   488,   349,   681,   672,
      -1,   681,   672,    -1,   363,   329,   655,   490,   491,   270,
     655,   492,   497,    -1,   331,    -1,   332,    -1,    68,    -1,
      65,    -1,   257,    -1,    66,    -1,    66,   330,   449,    -1,
      -1,   338,   493,    -1,   494,    -1,   493,   494,    -1,   336,
     496,   495,   681,    -1,   335,   496,   495,   681,    -1,   336,
     284,   495,   681,    -1,   335,   284,   495,   681,    -1,    -1,
     328,    -1,    -1,   333,    -1,   498,   500,   501,    -1,    -1,
     113,   337,   499,    -1,   333,    -1,   334,    -1,    -1,   308,
     175,   579,   176,    -1,   465,    -1,   318,   317,   463,   319,
      -1,   235,   655,   505,    -1,   167,   235,   655,   505,    -1,
     237,   655,   505,    -1,   234,   655,   505,    -1,   236,   655,
     505,    -1,   235,   364,   655,   505,    -1,   167,   235,   364,
     655,   505,    -1,   237,   364,   655,   505,    -1,   234,   364,
     655,   505,    -1,   236,   364,   655,   505,    -1,   366,   284,
     364,   655,   507,    -1,   366,   503,   507,    -1,   366,   191,
     235,   655,   507,    -1,   366,   191,   167,   235,   655,   507,
      -1,   366,   191,   237,   655,   507,    -1,   366,   191,   234,
     655,   507,    -1,   366,   191,   236,   655,   507,    -1,   366,
     289,   364,   655,   507,    -1,   366,   233,   655,   507,    -1,
     366,   265,   681,    -1,   366,    56,   681,    -1,   366,   326,
     655,    -1,   366,   329,   364,   655,    -1,    -1,   175,   506,
     176,    -1,   175,   176,    -1,   672,    -1,   672,   349,   506,
      -1,    -1,    43,    -1,    42,    -1,   509,    -1,   508,    -1,
     533,    -1,   535,    -1,   537,    -1,   536,    -1,   518,    -1,
     510,    -1,    78,   515,   516,    -1,    80,   681,    -1,    81,
      80,   681,    -1,    79,   515,   516,   517,    -1,    87,    88,
     511,    -1,   279,    59,    88,   511,    -1,   279,    88,   511,
      -1,    -1,   512,    -1,   513,    -1,   512,   349,   513,    -1,
      89,    91,    -1,    89,    90,    -1,    92,    93,   514,    -1,
      98,    99,   685,    -1,    89,    94,    -1,    89,    95,    -1,
      96,    89,    -1,    97,    -1,    82,    -1,    -1,   192,    83,
      -1,   192,    84,    83,    -1,    -1,    -1,   286,    80,   681,
      -1,   320,   526,   267,   655,   455,   112,   531,   521,   524,
     527,   528,   529,   530,   519,    -1,   320,   526,   267,   655,
     455,   112,   323,   521,   524,   527,   528,   529,   530,    -1,
     320,   236,   267,   655,   112,   625,    -1,   320,   526,    27,
     267,   655,   455,   112,   531,   530,    -1,   320,   452,   267,
     686,   524,   527,    -1,   320,   452,   267,   324,   524,   527,
      -1,    -1,   325,   175,   520,   176,    -1,   670,    -1,   520,
     349,   670,    -1,    -1,   175,   522,   176,    -1,   523,    -1,
     522,   349,   523,    -1,   681,    -1,   681,     3,    -1,    -1,
     525,   322,   686,    -1,   525,   322,   686,   349,   686,    -1,
     525,   322,   686,   349,   686,   349,   686,    -1,    -1,    16,
      -1,    -1,   670,   321,    -1,   305,   670,    -1,   670,   305,
     670,   321,    -1,   670,   321,   305,   670,    -1,    -1,   111,
     495,   686,    -1,    -1,    60,    -1,    -1,    61,    62,    -1,
      -1,    84,   230,    -1,   532,    -1,   175,   532,   176,    -1,
     686,    -1,   532,   349,   686,    -1,    65,   112,   655,   550,
      -1,    -1,   119,   131,    -1,   118,   131,    -1,   257,   284,
     655,   534,   507,    -1,   257,   655,   534,   507,    -1,    66,
     655,   279,   547,   570,   550,    -1,    68,   267,   655,   538,
      -1,    68,   267,   655,   456,   538,    -1,    -1,   254,   288,
      -1,   288,   539,    -1,   453,    -1,   175,   540,   176,    -1,
     539,   349,   175,   540,   176,    -1,   544,    -1,   540,   349,
     544,    -1,   545,    -1,   541,   349,   545,    -1,   111,    -1,
     607,    -1,   543,    -1,   254,    -1,   543,    -1,   565,    -1,
      -1,   191,    -1,   255,    -1,   549,    -1,   547,   349,   549,
      -1,   254,    -1,   678,   179,   548,    -1,   678,   179,   579,
      -1,   456,   179,   605,    -1,    -1,   290,   579,    -1,   175,
     551,   176,    -1,   572,    75,    76,   572,    -1,   572,   168,
     572,   555,    -1,   572,   552,    76,   572,   555,    -1,   572,
      74,   552,    76,   572,    -1,    -1,    77,    -1,   554,   553,
      -1,    -1,    73,    -1,    70,    -1,    71,    -1,    72,    -1,
     270,   579,    -1,    16,   456,    -1,   556,    -1,   174,   557,
     559,    -1,   557,   349,   558,    -1,   558,    -1,   681,   455,
     328,   604,    -1,   562,    -1,   561,    -1,   562,    -1,    67,
     546,   568,   569,    -1,    67,   546,   568,   267,   563,   569,
      -1,   565,   581,   582,   583,   584,    -1,   564,    -1,   563,
     349,   564,    -1,   681,    -1,   565,   172,   566,   567,   565,
      -1,   565,   171,   566,   567,   565,    -1,   565,   170,   566,
     567,   565,    -1,   175,   565,   176,    -1,   560,    -1,    -1,
     191,    -1,   255,    -1,    -1,   169,    -1,   169,   105,   175,
     577,   176,    -1,   631,    -1,   570,   550,   576,   578,    -1,
      -1,   112,   571,    -1,   572,    -1,   571,   349,   572,    -1,
     655,   575,    -1,   625,   575,    -1,    69,   625,   575,    -1,
     604,   574,    -1,    69,   605,   574,    -1,   604,    -1,   551,
      -1,    -1,   352,   573,   565,   353,   574,    -1,   328,   681,
     175,   683,   176,    -1,   328,   681,    -1,   681,   175,   683,
     176,    -1,   681,    -1,    -1,   574,    -1,    -1,   110,   105,
     577,    -1,   656,    -1,   577,   349,   656,    -1,    -1,   109,
     579,    -1,   579,   181,   580,    -1,   580,    -1,   580,   192,
     589,    -1,   589,    -1,    -1,   103,   105,   585,    -1,    -1,
     304,   669,    -1,   304,   609,    -1,    -1,   305,   670,    -1,
     305,   609,    -1,    -1,   306,   670,    -1,   306,    14,    -1,
     306,   609,    -1,   586,    -1,   585,   349,   586,    -1,   607,
     587,    -1,    -1,    52,    -1,   227,    -1,   590,    -1,   591,
      -1,   593,    -1,   595,    -1,   596,    -1,   598,    -1,   600,
      -1,   603,    -1,   607,    -1,   178,   589,    -1,   588,    -1,
     589,   193,   589,    -1,   589,   179,   589,    -1,   589,   189,
     592,   589,   192,   589,    -1,   589,   188,   592,   589,   192,
     589,    -1,    -1,   101,    -1,   102,    -1,   589,   185,   594,
      -1,   589,   183,   594,    -1,   589,   184,   594,    -1,   589,
     182,   594,    -1,   607,    -1,   607,   108,   686,    -1,   607,
     268,   178,   111,    -1,   607,   268,   111,    -1,   589,   187,
     175,   541,   176,    -1,   589,   186,   175,   541,   176,    -1,
     175,   597,   176,   187,   175,   541,   176,    -1,   175,   597,
     176,   186,   175,   541,   176,    -1,   589,    -1,   597,   349,
     589,    -1,   589,   193,   599,   605,    -1,   589,   179,   599,
     589,    -1,   190,    -1,   180,    -1,   191,    -1,   107,   605,
      -1,   589,    -1,   601,   349,   589,    -1,   352,   601,   353,
      -1,   602,   655,   602,    -1,   175,   562,   176,    -1,   175,
     288,   539,   176,    -1,   175,   556,   176,    -1,   175,   562,
     176,    -1,   175,   288,   539,   176,    -1,   175,   556,   176,
      -1,   608,    -1,   607,   194,   607,    -1,   607,   195,   607,
      -1,   607,   207,   607,    -1,   607,   208,   607,    -1,   607,
     209,   607,    -1,   607,   198,   607,    -1,   607,   196,   607,
      -1,   607,   215,   607,    -1,   607,   212,   607,    -1,   607,
     220,   607,    -1,   607,   213,   607,    -1,   607,   219,   607,
      -1,   607,   214,   607,    -1,   607,   218,   607,    -1,   607,
     217,   607,    -1,   607,   136,   607,    -1,   607,   197,   607,
      -1,   607,   211,   607,    -1,   607,   216,   607,    -1,   211,
     607,    -1,   607,   206,   607,    -1,   607,   205,   607,    -1,
     607,   204,   607,    -1,   607,   203,   607,    -1,   194,   607,
      -1,   195,   607,    -1,   175,   579,   176,    -1,   606,    -1,
     605,    -1,   634,    -1,   652,    -1,    63,    -1,   610,    -1,
     656,    -1,   624,    -1,   638,    -1,   625,    -1,   126,   127,
     113,   655,    -1,   628,    -1,   630,    -1,   659,    -1,   657,
      -1,   697,    -1,   609,    -1,   542,    -1,   354,    -1,   611,
     339,   175,   612,   176,    -1,   635,   175,   176,    -1,   638,
      -1,   613,   614,   615,    -1,    -1,   340,   105,   577,    -1,
      -1,   103,   105,   585,    -1,    -1,   616,   617,   623,    -1,
      86,    -1,   347,    -1,   618,    -1,   620,    -1,   348,   344,
      -1,   619,    -1,   341,   333,    -1,   608,   344,    -1,   188,
     618,   192,   621,    -1,   348,   343,    -1,   622,    -1,   341,
     333,    -1,   608,   344,    -1,    -1,   342,   341,   333,    -1,
     342,   110,    -1,   342,   346,    -1,   342,    84,   345,    -1,
     136,   681,    -1,   626,   175,   176,    -1,   626,   175,   660,
     176,    -1,   627,    -1,   681,   350,   627,    -1,   681,    -1,
      70,    -1,    71,    -1,    68,    -1,   115,   175,   646,   112,
     607,   176,    -1,    46,   629,    -1,    48,   629,    -1,    47,
     629,    -1,    50,   629,    -1,    49,   629,    -1,    -1,   175,
     176,    -1,   201,   175,   607,   112,   607,   113,   607,   176,
      -1,   201,   175,   607,   349,   607,   349,   607,   176,    -1,
     201,   175,   607,   112,   607,   176,    -1,   201,   175,   607,
     349,   607,   176,    -1,   200,   175,   607,   186,   607,   176,
      -1,   607,   202,   607,    -1,   199,   175,   607,   349,   607,
     349,   607,   176,    -1,   632,    -1,   631,   349,   632,    -1,
     207,    -1,   681,   350,   207,    -1,   625,   350,   207,    -1,
     579,   633,    -1,    -1,   328,   681,    -1,   681,    -1,   653,
      -1,    10,    -1,   681,   350,    10,    -1,     8,    -1,   681,
     350,     8,    -1,     9,    -1,   681,   350,     9,    -1,   636,
     175,   207,   176,    -1,   636,   175,   681,   350,   207,   176,
      -1,   636,   175,   255,   667,   176,    -1,   636,   175,   191,
     667,   176,    -1,   636,   175,   667,   176,    -1,   637,   175,
     667,   349,   667,   176,    -1,   768,    -1,   194,    -1,   195,
      -1,    -1,   174,   292,   303,    -1,    -1,   175,   685,   176,
      -1,    -1,   175,   685,   176,    -1,    -1,   291,    -1,   292,
     641,   640,    -1,   293,   642,   640,    -1,   295,    -1,   297,
      -1,   299,    -1,   300,    -1,   301,    -1,   644,    -1,   302,
      -1,   645,    -1,   296,    -1,   298,    -1,   644,   641,    -1,
     644,    -1,   302,   642,    -1,   644,   641,    -1,   302,   642,
      -1,   647,   286,   648,    -1,   649,    -1,   294,   650,    -1,
      56,    -1,    58,    -1,    57,    -1,   686,    -1,    13,    -1,
      12,    -1,    11,    -1,    14,    -1,    15,    -1,   291,   686,
      -1,   292,   641,   640,   686,    -1,   293,   642,   640,   686,
      -1,   654,    -1,   677,   686,    -1,     6,   686,    -1,   674,
     686,    -1,     5,   686,    -1,    44,    -1,    45,    -1,   294,
     639,   686,   650,    -1,   681,    -1,   681,   350,   681,    -1,
     681,   350,   681,   350,   681,    -1,   681,    -1,   681,   350,
     681,    -1,   681,   350,   681,   350,   681,    -1,    18,   175,
     658,   328,   672,   176,    -1,    19,   175,   658,   349,   672,
     176,    -1,   579,    -1,   311,   175,   607,   349,   607,   176,
      -1,   312,   175,   661,   176,    -1,   307,   607,   663,   666,
     319,    -1,   307,   665,   666,   319,    -1,   543,    -1,   660,
     349,   543,    -1,   543,   349,   543,    -1,   661,   349,   543,
      -1,   308,   607,   309,   543,    -1,   662,    -1,   663,   662,
      -1,   308,   579,   309,   543,    -1,   664,    -1,   665,   664,
      -1,    -1,   310,   607,    -1,   607,    -1,   685,    -1,   684,
      -1,   684,    -1,   685,    -1,    20,    -1,   675,    -1,   676,
      -1,    20,   175,   668,   176,    -1,   675,   175,   668,   176,
      -1,   676,   175,   668,   176,    -1,   677,    -1,   677,   175,
     668,   176,    -1,    31,    -1,    32,    -1,    35,    -1,    33,
      -1,    34,    -1,    29,    -1,    29,   175,   668,   176,    -1,
      29,   175,   668,   349,   671,   176,    -1,    30,    -1,    30,
     175,   668,   176,    -1,    30,   175,   685,   349,   685,   176,
      -1,    36,    -1,    36,    38,    -1,    37,    -1,   643,    -1,
     651,    -1,     6,    -1,     6,   175,   668,   176,    -1,   674,
      -1,   674,   175,   668,   176,    -1,   674,   175,   685,   349,
     685,   176,    -1,     5,    -1,     5,   175,   668,   176,    -1,
      53,    -1,    53,   175,   673,   176,    -1,    53,   175,   673,
     349,   685,   176,    -1,    55,    -1,    54,    -1,    54,    -1,
     686,    -1,     7,    -1,    24,    -1,    20,    21,    -1,    25,
      -1,    26,    -1,    20,    22,    23,    -1,    28,    -1,    27,
      22,    23,    -1,   681,    -1,   680,    -1,     5,    -1,     6,
      -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,     5,
      -1,     6,    -1,   177,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,   682,    -1,    22,    -1,   240,    -1,    23,
      -1,   262,    -1,   273,    -1,    38,    -1,   275,    -1,   265,
      -1,    99,    -1,   233,    -1,    81,    -1,   127,    -1,   303,
      -1,    41,    -1,   328,    -1,   228,    -1,   285,    -1,   122,
      -1,   255,    -1,   117,    -1,   120,    -1,   121,    -1,   247,
      -1,   278,    -1,    87,    -1,   334,    -1,   284,    -1,   128,
      -1,   173,    -1,    98,    -1,   114,    -1,   272,    -1,   333,
      -1,   269,    -1,   243,    -1,    93,    -1,    64,    -1,   291,
      -1,   292,    -1,   293,    -1,   294,    -1,   296,    -1,   298,
      -1,   106,    -1,   251,    -1,   253,    -1,   246,    -1,   248,
      -1,   249,    -1,    26,    -1,   280,    -1,    84,    -1,   144,
      -1,   145,    -1,   148,    -1,   150,    -1,   151,    -1,   152,
      -1,   153,    -1,   154,    -1,   155,    -1,   156,    -1,   158,
      -1,   160,    -1,   161,    -1,   162,    -1,   163,    -1,   165,
      -1,   167,    -1,   222,    -1,   221,    -1,   244,    -1,   245,
      -1,   100,    -1,    53,    -1,   327,    -1,   232,    -1,   681,
      -1,   683,   349,   681,    -1,    11,    -1,    11,    -1,     5,
      -1,     3,    -1,     3,   686,    -1,   253,   688,    -1,   685,
     175,   176,    -1,   685,   175,   541,   176,    -1,    -1,   690,
      -1,   273,   691,    -1,   683,    -1,   232,   270,   693,   268,
     686,    -1,   232,   270,   693,   268,   111,    -1,   278,   681,
      -1,   284,   655,    -1,   289,   655,    -1,   285,   681,   350,
     681,    -1,   285,   681,   350,   681,   350,   681,    -1,   326,
     655,    -1,   116,   655,    -1,   502,    -1,   696,    -1,   694,
      -1,   695,   349,   694,    -1,   607,    -1,   698,    -1,   699,
      -1,   700,    -1,   701,    -1,   715,    -1,   722,    -1,   724,
      -1,   727,    -1,   737,    -1,   738,    -1,   137,   175,   608,
     741,   176,    -1,   138,   175,   695,   741,   176,    -1,   139,
     175,   694,   741,   176,    -1,   140,   175,   240,   703,   702,
     741,   176,    -1,    -1,   349,   742,    -1,   349,   742,   349,
     704,    -1,   349,   742,   349,   704,   349,   710,    -1,   349,
     742,   349,   710,    -1,   349,   704,    -1,   349,   704,   349,
     710,    -1,   349,   710,    -1,   681,    -1,   141,   175,   705,
     176,    -1,   706,    -1,   705,   349,   706,    -1,   708,   707,
      -1,    -1,   328,   709,    -1,   607,    -1,   681,    -1,   711,
     713,    -1,   712,    -1,   711,   349,   712,    -1,   607,    -1,
      -1,   271,   714,    -1,   111,   270,   111,    -1,   153,   270,
     111,    -1,   152,   270,   111,    -1,   150,   270,   111,    -1,
     150,   270,    84,   156,    -1,   142,   175,   716,   717,   713,
     741,   176,    -1,    -1,   742,   349,    -1,   718,    -1,   717,
     349,   718,    -1,   719,   720,    -1,   607,    -1,    -1,   328,
     721,    -1,   681,    -1,   143,   175,   740,   608,   723,   176,
      -1,    85,   145,    -1,   144,   145,    -1,   146,   175,   240,
     725,   726,   741,   176,    -1,   681,    -1,    -1,   349,   608,
      -1,   147,   175,   728,   729,   741,   735,   736,   176,    -1,
       3,    -1,    -1,   148,   730,   731,    -1,   750,    -1,   732,
      -1,   731,   349,   732,    -1,   733,    -1,   734,    -1,   608,
     749,    -1,   608,   328,   681,   749,    -1,    -1,   750,    -1,
     111,   270,   153,    -1,   153,   270,   153,    -1,   149,   175,
     608,   741,   176,    -1,   159,   175,   739,   694,   751,   176,
      -1,   740,    -1,   116,    -1,   154,    -1,   156,    -1,    -1,
     160,   156,    -1,   160,   116,    -1,   157,   175,   743,   176,
      -1,   744,    -1,   743,   349,   744,    -1,   747,    -1,   748,
      -1,   681,    -1,   607,    -1,   746,   328,   745,    -1,   254,
     746,    -1,    84,   254,    -1,    -1,   750,    -1,   105,   151,
      -1,   105,   127,    -1,    -1,   752,    -1,   163,   286,   164,
     753,   761,    -1,   754,    -1,   759,    -1,   165,   755,   757,
      -1,    84,   158,   757,    -1,   756,    -1,     3,    -1,    -1,
     161,   758,    -1,   756,    -1,   162,   760,    -1,   681,    -1,
      -1,   762,    -1,   764,    -1,   765,   763,    -1,    -1,   764,
      -1,   155,   767,    -1,    84,   158,    -1,   158,   766,    -1,
     756,    -1,   681,    -1,   166,   175,   694,   581,   741,   176,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   627,   627,   638,   638,   652,   652,   667,   667,   682,
     682,   692,   692,   698,   699,   700,   701,   702,   707,   710,
     711,   715,   716,   720,   721,   725,   728,   731,   735,   736,
     737,   738,   739,   740,   741,   742,   743,   750,   751,   755,
     756,   760,   762,   766,   771,   780,   785,   790,   798,   806,
     814,   822,   828,   836,   845,   854,   858,   862,   869,   872,
     873,   877,   878,   882,   883,   887,   887,   887,   887,   887,
     890,   891,   895,   896,   900,   909,   920,   921,   926,   927,
     931,   932,   937,   938,   942,   950,   960,   961,   965,   966,
     970,   974,   981,   982,   987,   988,   992,   993,   994,  1005,
    1006,  1007,  1011,  1012,  1017,  1018,  1019,  1020,  1021,  1022,
    1023,  1027,  1028,  1033,  1034,  1040,  1046,  1051,  1056,  1061,
    1066,  1071,  1076,  1081,  1086,  1099,  1105,  1111,  1121,  1126,
    1130,  1134,  1136,  1144,  1152,  1157,  1162,  1172,  1173,  1177,
    1178,  1179,  1180,  1181,  1182,  1183,  1184,  1200,  1211,  1228,
    1238,  1239,  1243,  1244,  1248,  1249,  1250,  1254,  1255,  1256,
    1257,  1258,  1262,  1263,  1264,  1265,  1266,  1267,  1268,  1269,
    1276,  1286,  1287,  1288,  1289,  1309,  1314,  1325,  1326,  1327,
    1331,  1332,  1336,  1348,  1355,  1366,  1377,  1391,  1402,  1418,
    1419,  1420,  1421,  1422,  1423,  1427,  1428,  1429,  1430,  1434,
    1435,  1439,  1449,  1450,  1451,  1455,  1457,  1461,  1461,  1462,
    1462,  1462,  1465,  1466,  1470,  1478,  1531,  1532,  1536,  1538,
    1543,  1552,  1554,  1558,  1558,  1558,  1561,  1565,  1569,  1578,
    1607,  1645,  1646,  1651,  1662,  1663,  1667,  1668,  1669,  1670,
    1671,  1675,  1679,  1683,  1684,  1685,  1686,  1687,  1691,  1692,
    1693,  1694,  1698,  1699,  1703,  1704,  1705,  1706,  1707,  1717,
    1721,  1723,  1725,  1740,  1744,  1746,  1751,  1755,  1768,  1769,
    1773,  1774,  1778,  1779,  1783,  1784,  1788,  1792,  1800,  1805,
    1806,  1811,  1825,  1839,  1890,  1904,  1918,  1968,  1981,  1994,
    2018,  2020,  2024,  2042,  2043,  2048,  2049,  2054,  2055,  2056,
    2057,  2058,  2059,  2060,  2061,  2062,  2063,  2064,  2065,  2069,
    2070,  2071,  2072,  2073,  2074,  2075,  2076,  2080,  2081,  2082,
    2083,  2084,  2085,  2098,  2102,  2106,  2115,  2118,  2119,  2120,
    2126,  2130,  2131,  2132,  2137,  2143,  2151,  2159,  2161,  2166,
    2174,  2176,  2181,  2182,  2189,  2203,  2204,  2206,  2217,  2238,
    2239,  2243,  2244,  2249,  2253,  2261,  2263,  2268,  2269,  2273,
    2277,  2282,  2331,  2346,  2347,  2352,  2353,  2354,  2355,  2356,
    2360,  2361,  2365,  2366,  2372,  2373,  2374,  2375,  2378,  2380,
    2383,  2385,  2389,  2397,  2398,  2402,  2403,  2407,  2408,  2412,
    2414,  2420,  2426,  2432,  2438,  2444,  2453,  2460,  2467,  2474,
    2481,  2491,  2497,  2502,  2511,  2520,  2529,  2538,  2547,  2553,
    2558,  2559,  2560,  2561,  2570,  2571,  2572,  2576,  2579,  2584,
    2585,  2586,  2591,  2592,  2597,  2598,  2599,  2600,  2601,  2605,
    2612,  2614,  2616,  2618,  2622,  2624,  2626,  2631,  2632,  2636,
    2638,  2644,  2645,  2646,  2647,  2651,  2652,  2653,  2654,  2658,
    2659,  2663,  2664,  2665,  2669,  2670,  2674,  2688,  2702,  2707,
    2718,  2725,  2737,  2738,  2743,  2744,  2750,  2751,  2755,  2756,
    2760,  2764,  2773,  2777,  2782,  2787,  2796,  2797,  2801,  2802,
    2803,  2804,  2806,  2811,  2812,  2816,  2817,  2821,  2822,  2826,
    2827,  2831,  2832,  2836,  2837,  2842,  2851,  2852,  2853,  2857,
    2863,  2872,  2914,  2922,  2933,  2934,  2936,  2938,  2943,  2944,
    2949,  2950,  2955,  2956,  2961,  2983,  2987,  2988,  2992,  2993,
    2997,  2998,  2999,  3003,  3004,  3009,  3013,  3018,  3023,  3031,
    3032,  3038,  3040,  3045,  3053,  3061,  3072,  3073,  3074,  3078,
    3079,  3083,  3084,  3085,  3089,  3090,  3110,  3114,  3124,  3125,
    3129,  3142,  3147,  3149,  3153,  3164,  3175,  3206,  3207,  3212,
    3216,  3225,  3234,  3242,  3243,  3247,  3248,  3249,  3254,  3255,
    3257,  3262,  3266,  3276,  3277,  3281,  3282,  3287,  3291,  3297,
    3303,  3313,  3325,  3330,  3334,  3333,  3346,  3351,  3356,  3361,
    3369,  3370,  3374,  3375,  3379,  3381,  3387,  3388,  3393,  3398,
    3402,  3407,  3411,  3412,  3417,  3418,  3422,  3426,  3427,  3431,
    3435,  3436,  3440,  3444,  3448,  3449,  3454,  3463,  3464,  3465,
    3469,  3470,  3471,  3472,  3473,  3474,  3475,  3476,  3477,  3481,
    3498,  3502,  3509,  3519,  3526,  3536,  3537,  3538,  3542,  3549,
    3556,  3563,  3573,  3577,  3593,  3594,  3598,  3604,  3610,  3615,
    3623,  3625,  3630,  3638,  3648,  3649,  3650,  3654,  3658,  3659,
    3663,  3667,  3677,  3678,  3680,  3685,  3686,  3688,  3694,  3695,
    3702,  3709,  3716,  3723,  3730,  3737,  3744,  3751,  3758,  3765,
    3772,  3778,  3785,  3792,  3799,  3806,  3813,  3820,  3827,  3833,
    3840,  3847,  3854,  3861,  3863,  3885,  3889,  3890,  3894,  3895,
    3897,  3899,  3900,  3901,  3902,  3903,  3904,  3905,  3906,  3907,
    3908,  3909,  3910,  3911,  3915,  3985,  3991,  3992,  3996,  4001,
    4002,  4007,  4008,  4013,  4014,  4019,  4020,  4024,  4025,  4029,
    4030,  4031,  4035,  4039,  4044,  4045,  4046,  4050,  4054,  4055,
    4056,  4057,  4058,  4062,  4066,  4070,  4098,  4099,  4104,  4105,
    4106,  4107,  4111,  4118,  4123,  4128,  4133,  4138,  4146,  4147,
    4151,  4161,  4171,  4178,  4185,  4192,  4199,  4212,  4213,  4218,
    4223,  4228,  4233,  4241,  4242,  4243,  4247,  4274,  4275,  4280,
    4281,  4286,  4287,  4293,  4299,  4305,  4311,  4317,  4323,  4330,
    4334,  4335,  4336,  4340,  4341,  4352,  4354,  4358,  4360,  4364,
    4365,  4371,  4380,  4381,  4382,  4383,  4384,  4388,  4389,  4393,
    4394,  4395,  4399,  4405,  4408,  4414,  4417,  4423,  4426,  4431,
    4451,  4452,  4453,  4457,  4463,  4527,  4558,  4619,  4658,  4675,
    4691,  4707,  4723,  4724,  4741,  4758,  4775,  4796,  4800,  4807,
    4852,  4853,  4857,  4868,  4871,  4875,  4883,  4889,  4897,  4901,
    4906,  4908,  4914,  4922,  4924,  4929,  4933,  4939,  4947,  4949,
    4954,  4962,  4964,  4969,  4970,  4974,  4979,  4990,  5001,  5011,
    5021,  5023,  5028,  5029,  5031,  5033,  5042,  5043,  5052,  5053,
    5054,  5055,  5056,  5058,  5059,  5072,  5090,  5091,  5105,  5125,
    5126,  5127,  5128,  5129,  5130,  5131,  5133,  5134,  5136,  5148,
    5162,  5176,  5183,  5198,  5213,  5220,  5246,  5263,  5283,  5298,
    5299,  5303,  5304,  5305,  5308,  5309,  5312,  5314,  5317,  5318,
    5319,  5320,  5321,  5322,  5326,  5327,  5328,  5329,  5330,  5331,
    5332,  5333,  5337,  5338,  5339,  5340,  5341,  5342,  5343,  5344,
    5345,  5346,  5347,  5348,  5349,  5351,  5352,  5353,  5354,  5355,
    5356,  5357,  5358,  5359,  5360,  5361,  5362,  5363,  5364,  5366,
    5367,  5368,  5369,  5370,  5371,  5372,  5373,  5374,  5375,  5376,
    5377,  5378,  5379,  5380,  5381,  5382,  5384,  5385,  5386,  5387,
    5388,  5389,  5390,  5391,  5393,  5394,  5395,  5396,  5397,  5398,
    5399,  5400,  5401,  5402,  5403,  5404,  5405,  5406,  5407,  5408,
    5409,  5410,  5411,  5412,  5413,  5414,  5415,  5416,  5417,  5421,
    5422,  5427,  5450,  5471,  5503,  5505,  5513,  5520,  5525,  5540,
    5541,  5545,  5548,  5552,  5558,  5567,  5568,  5569,  5570,  5576,
    5583,  5584,  5585,  5589,  5593,  5595,  5600,  5604,  5605,  5606,
    5607,  5608,  5609,  5610,  5611,  5612,  5613,  5617,  5625,  5633,
    5640,  5654,  5655,  5659,  5663,  5667,  5671,  5675,  5679,  5686,
    5690,  5694,  5695,  5705,  5713,  5714,  5718,  5722,  5726,  5733,
    5735,  5740,  5744,  5745,  5749,  5750,  5751,  5752,  5753,  5757,
    5770,  5771,  5775,  5777,  5782,  5788,  5792,  5793,  5797,  5802,
    5811,  5812,  5816,  5827,  5831,  5832,  5837,  5847,  5850,  5852,
    5856,  5860,  5861,  5865,  5866,  5870,  5874,  5877,  5879,  5883,
    5884,  5888,  5896,  5905,  5906,  5910,  5911,  5915,  5916,  5917,
    5932,  5936,  5937,  5947,  5948,  5952,  5956,  5960,  5970,  5974,
    5977,  5979,  5983,  5984,  5987,  5989,  5993,  5998,  5999,  6003,
    6004,  6008,  6012,  6015,  6017,  6021,  6025,  6029,  6032,  6034,
    6038,  6039,  6043,  6045,  6049,  6053,  6054,  6058,  6062,  6066
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
#define YYPACT_NINF -1863
static const yytype_int16 yypact[] =
{
    1818,    35, -1863,   162, 17223,   284,   102,   200,   200, 17223,
     292,   299, -1863, 17223,    45,   225,   171, -1863, 14532, 17223,
   -1863, -1863, -1863, -1863, -1863,   477, -1863, 17522,   690,   457,
     775,    15,   118,   471,  1014,   683,  1016, 13037, 12738,   339,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863,   767,   386, -1863,
   -1863, 17223, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863,   289,   237, -1863, -1863,
   -1863,  4464, 17223, -1863,   461,   461, -1863, 17223,   966,    11,
   -1863,   434,   284,  1022,   526,  1102, -1863, -1863, -1863, -1863,
     703, -1863,   518,   434,  1773,  1773,  1818,  1818,  1773, -1863,
   -1863,   785, -1863, 17223,    34, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863,   434,   434, -1863,   596, -1863, -1863,   434,     2,
    -161,   656, -1863,   627,   711,   638, -1863, -1863, -1863,   695,
     745,   494,  1258,   936,   966, 15728, 17223, 17223, -1863,   551,
     761,  1025,   772, -1863,    73, -1863, -1863,   315, -1863, -1863,
     483, 17223,   686, -1863, -1863, 17223, -1863, -1863,   760,   776,
     782,   800, 17223, 17223,   744,   744, -1863,   770, -1863, -1863,
     817,   873, 17223, 17223, 17223, 17223, 17223, 17223, 17223, 17223,
     884,   728, 17223,   809,   809,   809,   809, 17223,   809,   809,
     809, 17223,   809,   757, -1863, -1863, -1863,   900, 17223, 17223,
   17223,   835,   963,   971,   976,   911,   924,   144,   819, -1863,
     968, -1863, -1863,  1079,   432,   432,   432,   920, -1863,   953,
   16027, 17223,  1243,  1243,  1243,  1245,  1095,  1118,  1120, -1863,
   -1863, -1863, -1863, -1863,  1124,  1127,  1282, -1863, -1863, -1863,
    1131,  1131,  1131,  1131,  1131, -1863,  1135, -1863,  1137,  1180,
   17223,  1139,  1144,  1146,  1147,  1148,  1150,  1153,  1154,  1155,
    1156,  1159,  3414,  5164,  9894,  9894,  1166,  1168,  1172, -1863,
    9894,  1243,   436,   588,   152,  7563,  1177,  1179,  5164, -1863,
   -1863,     3, 16326,  1163, -1863,  1628, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, 17223, -1863, -1863, -1863, 11457, -1863, -1863,
   -1863,  1017, -1863,  1007, -1863, -1863,  1011, -1863, -1863,  1184,
    1186,  1187,  1024, -1863, -1863, -1863, -1863, -1863, -1863,  1243,
    1243,    49, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863,   261,   907, -1863,  1078, -1863,
     929,  1272,  1269, -1863,  1021, -1863, 17223, -1863, -1863,  1050,
   -1863,  4464, -1863, -1863, 17223,  1149, 17223, 17223, 17223, 17223,
   17223, 17223, 17223, 17223, 17223, -1863,  1111,  7896, 14532,  1077,
    1250,  1253, -1863, -1863,  1257,  5864,    34,  1262,  1263,   757,
   -1863, -1863, -1863, -1863, -1863, -1863,   100,  1258,   100,  1080,
   13336,   673,  1284,  1286,  1289,   -28,   966, -1863,   816,   517,
     661,   755,  1229,   657, 17223, -1863,    29,  1142, 17223,  1025,
    1107, -1863, -1863,  1242, -1863, -1863,   958,   744,   744,   744,
     744,  1181,  1244,  1247, 17821, 17223, 17223,   744, 17223,  1248,
    1252,  1268,  1270,   434,   773, -1863, -1863,   809,  1209, 17223,
   17223, 17223, 17223,   757,  1339, 17223, 17223, 17223, 17223, -1863,
   17223, 17223, 17223, -1863, 17223, -1863, -1863, -1863, 17223,   -55,
   -1863, -1863,    43,  1135, 17223,  5164, 17223,  1275,  1288, -1863,
     574, -1863, -1863, -1863,  1300,  1302, -1863, -1863, -1863, -1863,
   -1863,  1423, -1863,  1303, -1863, -1863, -1863,  1304,  1305,   880,
   17223, -1863, -1863, -1863,  1307,  1309,  1311,  1312,  9894, -1863,
   -1863,  1320,  1320,  1320,    42,  1188,  5164, -1863,  1316,   -11,
   -1863,  1321, -1863,  1141, -1863, -1863, -1863,  5164,  5164,  1476,
    1326, -1863, -1863, -1863, -1863, -1863,   277, -1863,  1390,  1391,
   -1863,  9894,  9894,  9894,  1267,  1351,   563,  1271,  1506,  9894,
     758,  9894,  3414,  1335,  1336,  1338,   660,   906,   142, -1863,
      69,  1628,  3414,  1240,  1240,  9894,  9894,  9894,  1494, -1863,
     477,  1341,   477,  1341, -1863, -1863,  1243,  5164, 10822, -1863,
     821,  9894,  9894,  1628,   578,  2791, 17223, -1863,   953,  5164,
   17223, -1863, -1863,  5164,  3764,  9894,  9894,  9894,  9894,  1342,
    1343,  1057,  1057,  3764,  1167,  9894,  9894,  9894,  9894,  9894,
    9894,  9894,  9894,  9894,  9894,  9894,  9894,  9894,  9894,  9894,
    9894,  9894,  9894,  9894,  9894,  9894,  9894,  9894,  9894,    12,
    1345,  1315,  4464,  1347,  6197,  9894, -1863, -1863, 13635, 15130,
    1236,  1335, -1863,   367, -1863, -1863,  1442,  1446, -1863, -1863,
   -1863,   852,   477,   966, -1863,  1352,  1417, -1863, 17223,  1356,
    1356,  1356,  1356, -1863, -1863,  1182, -1863, -1863,   146, -1863,
   -1863, 13632,   296, -1863, -1863,    54,  1290, -1863, -1863, -1863,
    3414, -1863,   302, -1863, -1863,   941,   757, -1863, -1863, -1863,
   -1863,   104, -1863, -1863, -1863,   197, -1863,  1149, 17223, -1863,
   -1863, -1863, -1863, -1863, -1863,   100,   100, -1863, -1863, -1863,
    1274,   816,  1251,  1255, -1863,  1429,  1365,  1025,  1025, -1863,
   -1863, -1863, -1863,  1025,  2734,   661, -1863, -1863,  -102,   784,
    1256,   902, -1863,  1428,    81,    81, 17223,   434,  1221,  1025,
     816,  1370,  2734,   958, -1863, -1863, 17223, 17223, 17223, 17223,
    1306,  1279, -1863,  1441, 17223,  1295,  1323,   455,  1285, 17223,
    1377, 16625, 16625, 16625, 16625,  1226, -1863, -1863,   345, 17223,
   17223,   757,   757,   757,   757, -1863, -1863,  1356,  1356,  1356,
    1356,   757,   757,   757, -1863, -1863, -1863, -1863,  1015, -1863,
   -1863, -1863,  1375,   968,   477,   477, -1863,  1534,   477,   477,
     477, -1863,   133,  1341,  1341, -1863, -1863, -1863, -1863, -1863,
    1305,  1304,  1276, -1863, -1863, -1863,   477,   477,   477,   477,
    1212, -1863,  3154,  1453,    45,    45,    45, -1863, -1863, -1863,
      42,  1077,  1375,  1135, 16027,   953,  4814, 17223,  1375,  1235,
    1216, -1863, -1863, -1863, -1863, -1863, -1863, -1863,  1457, 17223,
   13632,   691, 13632, -1863,   -66, -1863,  1410, 17223,  1397,  9894,
    1224, -1863, -1863,  9894, 17223, -1863,  1427,   691, -1863,  9894,
   -1863,  1474,  8229,   305, -1863, -1863, -1863,  1027,  5164, 14831,
    2037, 12396,  2950,  1402,  1293,  1243,  1411,  1243,   880,   193,
    9894, -1863,   825,  9894, -1863,  1273,  3064,  1237,   307,  5164,
   -1863, 13934,  2254, -1863, -1863,  1239,  1090, 18120, 18120, 18120,
     230,     7, -1863, -1863,  1479,  1163, -1863,  1628, -1863, -1863,
   -1863,  1283,  5164, -1863, 11770, -1863, -1863, -1863,  8562,  8562,
   -1863, -1863,  5164,  5164, -1863,  1135, -1863, 13632,  1222,  1222,
    1222,  1222,  1222,  1222,  1222,  1222,  1222,  1222,  1240,  1240,
    1240,  1494,  1010,  1010,  1010,  1010,  1454,  1454,  1454,  1454,
    1454, -1863,  1482,  1254, -1863, -1863, -1863,  9894,  1419,  9894,
   13632,  1421,   234,  1249,  1424,  1425,  1430, -1863,   263, -1863,
    1259, -1863, -1863, 17223,  1125,  1514, -1863, -1863, -1863, -1863,
     281, -1863,  1356,  2629, -1863, -1863, -1863, -1863, 17223, -1863,
   -1863, -1863,  9894, -1863, -1863, -1863, -1863, -1863, -1863,  8562,
   -1863,  1348,   100,  1492,  1354,  1492, -1863,    18,    18,  1243,
    1353, 17223, 17223,  1025,   419, -1863, -1863, -1863, -1863, -1863,
   17223, 17223, -1863, -1863, 17223,  1527,  1132, -1863, 17223, 17223,
   16924, 14532, -1863,  1508,  1298,  1508,   434,  1509, -1863, -1863,
    1360,  1025, -1863, -1863,  1450,  1450,  1450,  1450, 17223,   709,
   -1863, -1863, -1863,  1607,  1355, 17223,  1393, 15429,  1531, -1863,
    1308, 17223,  1450, 16625, -1863,  1456,  1291,  2734,  1458,  1461,
    1462,   551, -1863,  1313, -1863, -1863,  1363,  1356,   757, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863,  1463, -1863,  1468, -1863,  1471,   308,  1472,  1301, -1863,
     309, -1863, -1863, -1863, -1863,  1366,  1049,  1475,  1314,  1478,
    1480,  1481,  9894, -1863, -1863, -1863,  1483, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,  1375, -1863,
    2734,  2734,  9894, -1863,   586,  1486,  9894,  1488,  1490, -1863,
    1318,  8895, 13632,  -106, -1863,  1327, -1863,   497, -1863,  1319,
    1566,  1410,  1496,  1510,  1410, -1863,   311, -1863, -1863, -1863,
    1502,  1503,  1504,  1628,  9894,  9894,  9894,  9894, -1863,  1378,
   -1863, -1863, -1863, -1863,  9894, 10191, -1863,  1364, 13632, -1863,
    9894,  9894, -1863,  9894,  1628, 18120, 18120,  2254,  1335,  1517,
    1519,  1523,   955,    45,  2791, -1863, -1863, -1863,   882,  1622,
   -1863,  2791,  1624,  1630, 17223, -1863,  1526, -1863, -1863, -1863,
   14532, 17223, -1863,  1610,  1595,  1283,  1243,   316,   323,  1599,
    1919, -1863, -1863,  1612,  1542,  1616,  1544, -1863,  1545, -1863,
   14233,  9894, 17223, -1863, -1863, -1863, -1863, -1863, -1863,  1547,
    1382,  1374, -1863, -1863,  1455, -1863,   709, -1863,  1464, -1863,
   -1863, -1863,  1709,  1243, -1863, -1863, -1863, -1863, -1863,   757,
     757,   757, -1863, -1863, -1863,   453, -1863, 17223, -1863, -1863,
   -1863,   478,  2588, -1863,  1399, -1863,  1243, -1863,  1620,    61,
    1243, -1863, -1863, -1863,  1466, -1863, -1863, -1863, -1863, -1863,
    1459, 17223,   751, -1863, -1863, 14532, 17223,   328, -1863, -1863,
   -1863, -1863,   255, 17223, -1863,   551,  1558,  1467,  1563, 10519,
   17223, -1863,  1505,  1491,  1507,  1568, 17223, 17223, -1863, -1863,
   -1863, -1863, -1863, -1863,   477, -1863,   477, -1863,   477,  1305,
   -1863, -1863, -1863,   477, -1863, -1863, -1863, -1863, 17223,  1570,
    1571, 12726, -1863, -1863, -1863, -1863, -1863, -1863,  6530,  1410,
    1495,  9894, 13632,   330, -1863,  1416, -1863, -1863,   733,  9894,
    1410, 17223, -1863,  1605,  1606,  1576,  9894,  1410,    33,  9894,
   -1863,  1566, -1863,  1470,  1577, -1863,  1578, -1863,  8229,  8229,
    8562,  8562,  3127, 13025, 12080,  3037, -1863, -1863,  9894, -1863,
   13190, -1863, -1863, -1863, -1863,   331, -1863, -1863, -1863,   250,
    1090,  1681,  2791,   599,  2791, -1863, -1863,  1583, 17223,   298,
   -1863, 17223,  5164, -1863, -1863, -1863, -1863,  5164,  5164, 17223,
   -1863,  1654,    10, -1863, -1863,  1585,  1586, -1863, -1863,  2734,
   17223, -1863, -1863, -1863,  1431,  1484, -1863, -1863, -1863,  1511,
     538, -1863,  1497,  1499,   434, -1863, -1863, -1863, -1863,  1372,
   -1863,  1243,  1415,    72,  1243,  1596,  1596,  1444, -1863,  1536,
    1774, 17223, -1863,  1447, -1863,  1358,  1376, -1863,   751, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, 15429,  1518,
    1776,  1621, 17223,  1719, -1863,  1559,   284,   292,   299,  1560,
   14532,  4114,  9228,  5164,  1485, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863,  1493, -1863, -1863, -1863, -1863,  1448,  2734,  2681,  1800,
    2681,  1580, -1863,  1473,  1487,  1647, -1863,  1650,  1651, -1863,
    1655,   332, -1863,  1498, -1863, -1863, -1863,  1657, 13632,  1500,
   -1863,   329, -1863,  1501,  1658, -1863, -1863, -1863,  8895, 17223,
    1567,  1572,  1573,  1574, -1863, -1863,  1660, -1863, -1863, -1863,
   -1863, -1863,   699,  1670, -1863, -1863,     6,  1512, -1863, -1863,
   -1863,   553, -1863,  1669, -1863, -1863, -1863,   333,   337,   340,
    9894, -1863,  9894, -1863, -1863,  9894, -1863, -1863, -1863, 18120,
    2791, -1863,   434,  5164, -1863,   599, 17223,   344,  1515,  1375,
    1662,  1662,  1515,  9894, -1863, -1863, -1863,  5514, -1863, -1863,
   -1863, -1863,  1594,  1569, -1863,   164, -1863,  1746,  9894,   434,
     434, -1863,  1729, -1863,  9894, -1863,  1372, -1863, -1863, -1863,
   -1863,   602, -1863,  1243,  1779,   354, 17223,    81,    81,  1243,
    1243, -1863, -1863, 17223, -1863, -1863,  1691,  1692, -1863,   417,
   -1863,   378,    39,  1626,  4464, 17223, -1863,  1693, -1863,  1699,
   -1863, -1863,  1375,  5164, -1863,   829, 11138,   385, -1863, 11783,
    5164, -1863, -1863,  1703, 10835, -1863,  1228,   693,  1608,   898,
    1757, -1863, -1863, -1863, -1863, -1863, 17223, 17223,  9894,  9894,
    9894, -1863,  9561, -1863, -1863, -1863, -1863,  1769,   501,  1770,
    1777, -1863, -1863, 17223, -1863, -1863,  9894,  1619,  1623,  1714,
     608, -1863, -1863, -1863, 13324, 13922, 14520, -1863, -1863, -1863,
    1375, -1863,   380, -1863,  1212,  6863,  1561,  1548,  1551,  1549,
   -1863, -1863, -1863,  1243, 17223, -1863, -1863, -1863, -1863,  1695,
    1625, -1863,  1575, -1863, -1863, -1863,  1789,  1726,  1635, 17223,
   -1863, -1863, -1863,  1557,  1677, -1863, -1863,   381, -1863,  1905,
    1508,  1508, -1863,  1631, -1863,   534,  1737, -1863, -1863,  1825,
    1826, -1863, 17223,  1648, -1863,  1564,  9894,   616,   398, -1863,
   -1863,  1597,  9894, -1863,   846, -1863, 11783,  1782,   -35, 17223,
    1678,  1914, -1863, -1863, -1863, -1863,  1680,  1916, -1863,  -171,
     259,   898, -1863,  1590, -1863,  1614, -1863,  1579, 13632,   382,
   -1863,  1600, -1863, -1863,  1582, -1863, -1863,  1767, -1863, -1863,
   -1863,  1566, -1863,  1780,  1781, -1863,  1778, 17223,  1929,   464,
   -1863, -1863, -1863, -1863, -1863, -1863,  1745, -1863, -1863, -1863,
     -24, -1863, -1863, -1863, 17223,  1807, -1863,  5164, -1863,   434,
    1243, -1863, -1863, 17223, -1863,  1880,  1880, 17223,   388, -1863,
   -1863, -1863, -1863, -1863, 17223,   395, 13632,  1765, -1863, 11151,
    1638, 10507, -1863,  1627, 10203,  1817,  1637, -1863,   397,  2734,
   17223,  1228, 17223,  1228,  1399, -1863,  1399,  1399,  1399, -1863,
     908,  1786, 12092, -1863,  9894, 17223, -1863,  9894, -1863, -1863,
   -1863, -1863,  1793, -1863, -1863, -1863,  1793, -1863,  1799, 17223,
    1929, -1863, -1863, -1863,  1808,  7213,  1617, -1863,  1632, -1863,
     434,  1792,   667,  1850, -1863, -1863, -1863,  1909,  1909, -1863,
   -1863,   534, -1863, -1863,  9894, -1863, 11151,  1836, -1863, -1863,
    1666, -1863,  5164,  1656,  1661, -1863, 11467, -1863, 17223, -1863,
   -1863, -1863, -1863, -1863, 17223, 17223, 17223, 17223, -1863, -1863,
   -1863,  5164,  1659, -1863, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863,  1929, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863,  1641,  1640,  1642,
   -1863, -1863, -1863, -1863,  1850,   958, -1863, -1863,   754,  1715,
    1922,  1779,  1779, -1863, 13632, -1863, 11151, -1863, 11151,   424,
    1675, -1863,  1674,  2734, -1863, -1863, -1863, -1863,   747, -1863,
   -1863, -1863, -1863, -1863, -1863,  1715,   926, -1863, -1863, -1863,
   -1863,  1191,  1721,  1724, -1863, -1863, -1863,  1671, -1863, -1863,
   17223, -1863, -1863, 12408, -1863, -1863,    48,    48,  1932, -1863,
    1933, -1863,  1827, -1863, 10203, -1863, -1863, -1863,  1865, -1863,
   -1863,  1960,   124, -1863, -1863,  1025, -1863, -1863, -1863, -1863,
   -1863,   401, -1863, -1863,  1025, -1863
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1863,  1088, -1863, -1863, -1863, -1863, -1863, -1235, -1863,  -141,
     -93, -1140, -1863, -1863,   868, -1863,    21, -1863,    26,   617,
   -1863,   861, -1863, -1863, -1863,   449, -1863,   674,     8,  1787,
   -1863, -1863,   -89,    16, -1863, -1863,  1790, -1863,  1533, -1863,
   -1863, -1863,  1535,  -391,   927,    66, -1863, -1863, -1863,   466,
     103, -1863,   -67, -1863,  -813,  1215,  -441, -1863, -1863, -1863,
      70, -1863,  1983, -1863, -1863,  -166, -1863, -1863, -1863,   904,
     458, -1863, -1863, -1863, -1863, -1863, -1863, -1617, -1863,   313,
   -1863, -1863, -1863, -1863, -1073,  -112,   -92,   -87,   -82, -1863,
     -46, -1863, -1863, -1863,   -34, -1863, -1863,  -210,  -418, -1863,
    -165,   -13, -1863, -1474,  -797, -1863,   275, -1478, -1863, -1357,
     -88, -1862, -1863,   633, -1863, -1863, -1863, -1863, -1863, -1863,
     172, -1863,   293, -1863,   173, -1863,   -91, -1863, -1863, -1863,
   -1863,   441,  -763, -1863, -1863, -1863, -1863, -1863, -1863,   163,
    -909,   166, -1863, -1863, -1863, -1863, -1863,  1581, -1863,   116,
    -432,   539,  -393,    31,    41, -1863,  -151, -1863,  1324, -1863,
    2055,  1903, -1863, -1863, -1863, -1863,   524, -1863,   129,  -793,
   -1863, -1863, -1097,   130,    55,  -809,   535,   533, -1863,  1613,
   -1863, -1863, -1863,  1357,  -681,   614,  -953, -1863,  -407,   618,
     995,  -169, -1863, -1863,  1171,  -599,  -925,   799, -1863, -1863,
     403,   145, -1863,  1653, -1863, -1863,    46,   127, -1863,   789,
     136,   979,   696,  -429,  1100,  1516, -1863,  -645, -1863,  -951,
    -931, -1863, -1353, -1863,  -257,  1426,  1145, -1863, -1863,  1198,
     406,   912, -1863, -1863,  -291, -1863, -1863,  1434, -1863,   448,
   -1863, -1863, -1863, -1863,  1435, -1863, -1863,  1433, -1863,  1384,
    -297,  -799,  1522,  -594,  -509, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863,   306, -1863, -1863, -1863, -1863, -1863, -1863,
      36, -1863,  -376, -1863,   872, -1863, -1863,  1401, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863,  -564,  -529,  -565, -1863,  -588,
   -1863, -1863, -1863, -1863, -1863,  1152, -1863,  2085, -1863,  1584,
     362, -1383, -1863,  1520, -1863, -1863, -1863,  1151, -1863,  1465,
   -1863,  1158,  -686,   273,  -705,  -220, -1863,  -299, -1863,  -275,
   -1863, -1863,  -241,  -308,    23, -1863,    -4, -1863, -1410,  -531,
      -8,  -170, -1863, -1863, -1863, -1863, -1863, -1863, -1863,  -579,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863, -1863,   342,
   -1863,   143, -1863, -1863, -1863, -1628, -1863,   351,   502, -1863,
   -1863, -1863, -1863,   685, -1863, -1863, -1863, -1863, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863, -1863, -1863,   336, -1863, -1863,
   -1863, -1863, -1863, -1863, -1863,  1525,  -864,   697, -1863,   499,
   -1863,   698, -1863, -1863,   231, -1118, -1863, -1863, -1863, -1863,
   -1863, -1430,   150, -1863, -1863, -1863, -1863, -1863, -1863,   148,
   -1863, -1863, -1863, -1863
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
    2006,   637,   641,   909,   312,   228,    45,   157,  1083,   994,
    1227,   225,  1228,   487,  1361,   312,   769,   663,   172,  1158,
    1159,  1160,   753,  1242,   786,   907,  2007,   775,  1687,   967,
    2149,  2150,  1105,  1106,  1224,   636,  1694,  1122,  1107,  1834,
     497,   665,   867,    46,  1859,   195,   196,   197,   198,   199,
     200,  1458,   172,  1974,   474,   665,    54, -1130,  1622,   665,
    2058,   866,  1460,  1041,  1860,   476,  1622,    66,  1110,   228,
    1336,   226,  2151,   536,   537,   538,   312,   540,   541,   542,
     855,   544,   604,   605,   606,    63,   669,  1555,  1688,   312,
     173,  1902,   467,   468,  1905,  -792,  1692,   411,   157, -1130,
    1654,   514,  1975,   429,  -958,  1448, -1130,  1825,  -958,  -958,
      70,  -958,  -958,  -958,  -958,  -958,  -958,  -958,  -958,  -958,
    -958,  -958,  1111,  1112,  1655,   172,    14,  1189,   477,   157,
    1042,   649,    43,    43,    43,    43,    43,   393,  -958,  -958,
      44,    44,    44,    44,    44,    40,    40,    40,    40,    40,
      41,    41,    41,    41,    41,    55,    55,    55,    55,    55,
      14,   489,   157,   157,  -748,    56,    56,    56,    56,    56,
      65,    65,    65,    65,    65,  2159,  1544,   503,  1949,   716,
     717,   157,  1556,  1449,  -748,   217,  1084,  1544,   157,   512,
      45,    45,    45,    45,    45,   977,   870,  1079,   157,   157,
     157,   157,   157,   157,   525,   157,   909,   909,   157,   475,
     666,  2058,   909,   539,    71,  1826,  1812,   157,  1091,   818,
    1876,  1967,   163,  1226,   301,   550,   551,    46,    46,    46,
      46,    46,    13,   229,   580,  1861,   438,   598,   872,   227,
      54,    54,    54,    54,    54,   722,   602,   603,  1075,  1076,
    1077,    66,    66,    66,    66,    66,  1215,  2008,   957,  1192,
    1193,   477,  2009,  1555,  1483,  1194,   815,  2152,   172,    63,
      63,    63,    63,    63,  1793,   787,   620,   868,   914,   912,
     498,   637,   753,  1662,   172,  1484,   654,   655,   172,  1237,
     918,   918,  1279,   814,   230, -1130,  1301,  1695,   845,  2066,
     436,  1316,  1195,  1318,   807,   493,   156,  1092,   672,   162,
    1243,  1094,   167,  1090,   669,   636,   770,  1461,  2160,   157,
    1466,   183,   997,  1001,  1545,   636,   849,   168,  1953,   194,
    1398,  1959,  1014,  1896,  1097,  1098,   369,  1964,  1346,   718,
     969,  1210,  1877,  -476,  2093,  -748,   174,  1593,   369,  -748,
    1162,  1163,   723,  1164,   826,   827,   828,   829,  1556,   959,
     304,   305,   306,   231,   839,  1173,  1174,  1175,  1176,  1569,
     228,  -264,   171,   309,   172,    13,   719,   411,  -748,  -796,
     157,   175,   157,   157,   157,   157,   743,   157,   745,   157,
     157,    13,    14,  1092,   754,    13,    14,   513,  1169,  1170,
    1171,  1172,   -88,   -88,   -88,   -88,   -88,   -88,  1177,  1178,
    1179,   239,  1081,  -748,   302,   159,   157,   393,  1088,   635,
    2026,  1249,   189,  1272,  1413,  1417,   968,  1467,   190,  2036,
     157,   958,  1505,  -958,   157,  1361,  2040,   634,  2042,  1506,
     774,  1856,  1264,   636,  1567,  1108,  1637,  1678,  1775,  1801,
     836,   157,   838,  1802,   157,   720,  1803,  1668,  1669,  1965,
    1813,   308,   873,  1132,   425,   157,   157,   157,   157,   584,
    1846,   157,   157,   157,   157,  1085,   157,   157,   157,   160,
     157,    13,    14,  1977,   865,  1247,  1092,   584,  1998,   721,
     871,  2096,   301,  2098,  1858,   466,  1925,  1942,  1983,   201,
     202,   203,   204,   587,  2020,   633,   669,  1146,   310,  1278,
    2073,  2023,   909,  2037,  1180,  1634,   895,  2163,  1080,   669,
    1300,   587,  1453,   753,  1320,  1907,  1646,   311,   490,   491,
    1857,  -798,  1975,  1653,   616,   876,   877,  1485,   584,  1129,
    1448,   765,  1165,  1679,  -264,   669,   601,   506,  1420,   288,
    -796,   650,  1908,  1322,   511,  1682,  1213,    42,   172,  1999,
     499,   720,  2000,   589,   519,   520,   521,   522,   523,   524,
    1147,   526,   587,    52,   533,  1516,   500,  2110,  1705,  1490,
    1327,  1454,   963,   543,   966,  1082,  1493,  1435,   917,  1706,
    2144,  1089,  1127,   426,  1250,   721,  1273,  1414,  1418,  1218,
    1468,   990,   993,  1712,  1797,  1089,   996,  1253,  1713,  1285,
    1286,  1287,  1089,  1288,  1289,  1332,  1290,  1568,  1780,  1638,
    1250,  1776,  1468,   172,  1275,   205,  1089,   590,  1274,  1089,
    1211,   791,  1916,  1733,  1875,   195,   196,   197,   198,   199,
     200,   988,  1432,  1729,   501,   502,  1798,  1958,   411,  1529,
    1052,  1305,  1191,  1835,  1058,   301,  1707,   941,  1311,   942,
     219,  1309,  1310,   220,  1068,    13,   229,   580,  1807,  1733,
    1943,  1984,  1530,  2128,   157,  1408,  1532,  2021,   201,   202,
     203,   204,  1433,   635,  2024,   684,  2038,   206,   393,   878,
    2164,   207,  1533,  1945,  1946,   201,   202,   203,   204,   635,
     303,   634,  -798,   652,  1357,  1534,  1377,  1291,   493,   635,
    1917,   208,  1378,  1918,   157,  1409,   792,   634,   795,   796,
    1836,   797,   798,   799,   800,   801,   802,   634,  1714,   803,
      13,    14,  1708,  2117,  2118,  1260,   793,  1262,   584,   545,
     546,    42,    42,    42,    42,    42,   737,  1347,   739,   740,
     741,   742,   157,   744,   209,   746,   747,    52,    52,    52,
      52,    52,   157,   157,   157,   157,  2119,   304,   305,   306,
    1142,  1837,   587,   442,   223,   157,   956,  1157,  1157,  1157,
    1157,   669,   781,  2087,  1640,   157,   157,  1681,   669,  1685,
     261,  1224,  1115,   443,  1619,   173,   813,  1477,  1401, -1095,
     817,  1100,  1652,   224,  1481,  1656,  1482, -1117,   458,  1683,
     303,   472,  1188,  1116,   948, -1095,  1838,   837,   457,  1839,
     840,   205,   584,  1641,  1348,  1642,  1643,   635,  1198,  1840,
    1130,   851,   852,   853,   854,   528,   493,   857,   858,   859,
     860,   598,   861,   862,   863,   634,   864,   504,   505,  1829,
     602,  1371,   941,  1219,   942,  1829,   587,   262,   263,   264,
     265,  1429,  1430,  2132,   753,   157,   206,   979,   669,  1342,
     207,   980,  1886,  1229,  1850,  1851,  1887,   304,   305,   306,
    1238,  1064,   478,   206,   753,   584,   584,   207,  1065,  1066,
     208,  1405,  1285,  1286,  1287,  1058,  1526,  1527,  1528,  1290,
     465,  1368,   529,   530,   531,   532,   482,   208,  1372,  1373,
    1374,  1375,   266,   557,   558,   559,   479,   182,   990,   587,
     587,   480,    15,  1296,  1296,  1296,  1397,   481,   560,   804,
     725,   726,   561,   562,   563,   326,   327,   564,   565,   566,
     567,   568,   569,   570,   571,   572,  1339,    26,  1340,  1341,
     209,   808,   267,   821,    28,    29,   483,  1276,   988,   729,
     730,   573,   574,   575,   486,  1285,  1286,  1287,   494,  1288,
    1289,   240,  1290,    31,   809,  1808,   228,   810,   811,   496,
    1207,  1208,  1209,   795,   507,   821,   797,   798,   799,   800,
     801,   802,   460,   461,   803,   430,   464,   513,   431,  1323,
     508,  1247,  1247,  1539,   432,  2044,   509,  2045,  2046,  2047,
     241,  1676,   268,   242,  1331,   795,   788,   789,   797,   798,
     799,   800,   801,   802,   510,   674,   803,   584,   675,   676,
     677,   678,   679,   680,   681,   682,   516,  1344,  1345,   683,
    1072,   517,  2135,  1818,   846,   847,  1349,   157,   518,  1281,
    1351,   304,   305,   306,  1355,   157,   602,   182,   243,   527,
     244,   587,   534,  1291,  1005,  1006,  1007,  1280,   548,   657,
     245,   973,   269,   970,  1376,   973,  1504,  1753,   552,  1869,
    1096,  1142,   553,  1392,   765,   765,   685,   157,  1183,  1157,
     554,  1185,  1186,  1187,  1872,   555,  1869,  1363,  1010,  1011,
    1285,  1286,  1287,  1750,  1288,  1289,  -536,  1290,   556,  1197,
    1199,  1200,  1201,  1525,  2041,   885,  2043,   886,  1126,   887,
     888,   889,   890,   270,   588,  1571,  1119,  1112,  1134,  1135,
    1136,  1137,   304,   305,   306,  -190,  1542,  1281,   442,  1548,
    1549,  1152,  1656,   612,   613,   614,   615,   271,  -189,   654,
     655,  1167,  1168,  1251,  1252,  1280,  1690,  1691,   444,  1324,
    1325,  1818,  1353,  1354,   594,   765,   704,   705,   706,   707,
     708,   312,  1883,  1889,  1890,   246,   247,   248,   249,   250,
     251,  2048,  2049,   596,   584,  1689,   312,   252,  -908,   272,
     273,   274,   275,   276,   822,  -650,  2136,  2137,  1291,   576,
     577,   578,   579,   195,   196,   197,   198,   199,   200,   445,
    -779,  1296,  1296,   990,   462,   463,  1118,  1120,   587,   253,
     990,   277,  2126,  2127,   592,   593,   822,   990,   905,   906,
    1497,  1223,   254,  -781,   278,  -777,  1499,   993,   255,   607,
     279,   256,   608,  1133,   609,   280,   610,   619,  1762,  1765,
     616,  1765,   618,   988,   621,  1863,  1058,   580,  1517,   622,
     988,   623,   624,   625,  1752,   626,  1757,   988,   627,   628,
     629,   630,   584,   584,   631,   584,   446,   447,   448,   449,
    -174,   645,   281,   646,   885,   282,   886,   647,   887,   888,
     889,  1419,   661,  1531,   662,   673,   710,   711,   685,   713,
     712,   714,   715,  -717,   727,   731,   587,   587,   732,   587,
     733,  1722,  1613,  1548,  1548,   240,   685,  1552,   735,   748,
     450,   182,   157,   755,   738,   757,   451,   452,   758,  1570,
    1560,   453,   759,   767,   768,  1606,  1607,   783,  1561,   784,
     209,   785,   301,   157,  1281,   812,  1616,  1744,  1617,   816,
    1618,  2079,   819,   493,   241,  1620,   820,   242,   831,  1489,
     830,  1565,  1280,   841,  1623,   833,  1810,   842,   454,   696,
     697,   698,   268,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   843,   850,   844,   856,  1647,  1562,  1957,
     874,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,   881,   243,   875,   244,   675,   676,   677,   678,   679,
     680,   681,   682,  1350,   245,   879,   683,   880,   882,   650,
     652,  1356,   896,  -234,   897,  1563,   898,   899,   990,   903,
     990,   917,   269,   910,  1552,   913,  1868,  1623,  1564,   921,
     916,  1712,   922,  1878,   929,  1623,  1713,   937,   938,   945,
     952,   944,   954,  1396,   955,   964,  1701,  1008,  1009,   368,
    1043,  1711,  1044,  1046,  1059,  1062,  1063,  1070,   988,   665,
     988,  1073,  1078,  1102,  1103,  1086,  1099,  1101,  1741,  1104,
    1121,  1112,  1128,   270,  1131,  1139,  1138,  1732,  1140,  1143,
    -234,  1145,  1153,  1843,  1161,  1151,   669,  1184,  1206,  1852,
    1853,  1202,  1196,  1220,  1736,  1221,  1560,   271,   301,  1222,
    1224,  1969,  1231,  1236,  1561,  1240,   990,   303,  1258,   246,
     247,   248,   249,   250,   251,  1259,  1271,  1261,  1284,  1303,
     685,   252,  1269,  1312,  1313,  1317,  1885,  1319,  1321,  -780,
    -782,  -234,  1357,  1326,  1336,  -778,   765,   765,  1250,   272,
     273,   274,   275,   276,  1334,  1343,   179,  1338,  1352,  1364,
    1366,  1369,  1370,   253,  1562,  1147,  1714,  1380,  1381,  1385,
     685,  1393,  1399,  1407,  1402,  1785,  1395,  1403,  1404,  1410,
    1400,   277,   255,  1406,  1411,   256,  -234,  1412,  1415,  -234,
    1416,  1422,  -812,  1932,  1424,  1451,  1425,  1426,  1428,  -234,
     279,  1563,  1434,  1423,  1436,   280,  1437,  1438,  1456,  1809,
    2039,  1458,  1462,  1463,  1564,  1296,   990,  1469,  1470,  1471,
    2012,  1476,  1552,  1479,  -174,   885,   923,   886,   924,   887,
     888,   889,   925,  1486,   584,  1487,  1830,  1831,  1492,  1488,
    1494,  1498,   281,  1495,  1502,   282,   700,   701,   702,   703,
     704,   705,   706,   707,   708,  1501,   988,  1509,  1510,  1511,
    1513,  1514,  1849,  1518,  1520,  1524,  1521,  1540,   587,  1854,
    2103,  1519,  1543,  1572,  1609,  1523,  1550,  1573,  1551,  1575,
     411,  1865,  1611,  1608,  1639,  1610,  1624,  1625,  1566,  1635,
    1649,  1650,  1651,  1664,  1665,  1606,  1663,  1680,  1686,  1693,
    1606,  1698,  1699,  1703,  1723,  1704,  1709,  1702,  1710,  1614,
    2014,  1726,  1623,  1897,  2013,  2099,  1730,  1731,   674,  1738,
     393,   675,   676,   677,   678,   679,   680,   681,   682,  1911,
    1737,  1507,   683,  1729,  2108,  1739,  1733,  1742,  1743,  1761,
    1745,  1885,  1758,  1885,  2131,  1766,  -227,   674,  1760,  1768,
     675,   676,   677,   678,   679,   680,   681,   682,   -14,     1,
    1933,   683,   580,  1771,  -227,  1769,  1772,  1773,   584,  -227,
    -227,  1774,  1778,  1800,  1783,   157,  1791,  1787,     3,     4,
       5,     6,  1788,  1789,  1790,  2084,  1792,  1824,  1777,  1779,
    1782,     7,     8,     9,    10,   683,  1823,  1827,  1865,  1832,
      11,  1796,   587,  1844,  1776,  1569,  1862,  1855,  1866,     2,
    1893,  -227,  1606,  -227,  1867,   602,   643,   644,  1879,  1888,
    1906,  1909,   648,     3,     4,     5,     6,   658,  1910,  1913,
    1915,  1930,  1928,  1914,  1927,  1929,     7,     8,     9,    10,
    1936,  1937,  1934,  1935,  1938,    11,  1940,  1941,  1944,  1947,
    1950,  1951,  1952,  1993,  1954,   666,  1960,  1966,  1970,  1971,
    1972,  1973,  1981,  1988,  -227,  -227,  -227,  1980,  1985,  1322,
     157,  1987,  1995,  1990,  1991,  2162,  1992,  2005,  2011,  1849,
    2016,  2025,  1748,  2019,  2165,  2028,  2030,    13,    14,  -227,
    2022,  -227,  2034,    12,  2067,  1606,  2035,  2070,  -227,  -227,
    1606,  2051,  2082,  1999,  2088,  2083,  1865,  2085,  1865,  -227,
    2090,  2095,  -227,  2097,  2112,  2100,  2109,  -227,  1606,   751,
    2101,  2064,  -227,  2113,  2125,  2121,  2114,   751,  2129,  2130,
    2055,  2138,    13,    14,  2140,  2071,  2142,  2136,  2056,  2137,
    2157,  2158,  2155,  2053,    15,    16,  1384,  1734,  2054,   485,
    1522,   484,   776,  2060,    17,    18,   782,    19,  2116,  1335,
    1109,   299,  1606,  2061,  1358,  2154,  1735,  1833,  2062,    26,
      27,  2141,  1606,  2134,   602,  2139,    28,    29,  2115,  1882,
    2104,  2105,  2106,  2107,  -227,  2148,  1962,  1963,  1870,    15,
      16,  1767,    30,  2156,  1979,    31,  1978,  1069,  1700,    17,
      18,   780,    19,   165,    20,    21,    22,    23,   428,    24,
    1728,    25,  2015,  2092,    26,    27,  2018,  1725,  1724,   766,
    1061,    28,    29,  1667,  1333,  1214,  1666,  1491,  1811,   734,
    1500,  1302,  1606,    32,  1606,   995,  1244,    30,   674,  1814,
      31,   675,   676,   677,   678,   679,   680,   681,   682,  1212,
     902,  1508,   683,  1045,  1427,   915,  1013,  1016,  1015,  1071,
    1263,  1926,   293,  1266,  1904,   974,  2146,  2063,   920,  1606,
    1267,  1903,  1912,  1781,  1645,  1633,   869,  1784,    32,  1636,
    1606,  2055,  1989,   930,   932,   932,  2069,     0,     0,  2056,
       0,   930,  2076,   932,  2053,   950,     0,     0,     0,  2054,
       0,     0,     0,     0,  2060,     0,     0,   960,   961,   962,
       0,     0,     0,   685,  2061,     0,     0,     0,     0,  2062,
       0,     0,     0,   976,   751,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1004,  1004,  1004,
    1004,  1939,     0,     0,     0,     0,     0,  1017,  1018,  1019,
    1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,
    1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,
    1040,   686,   687,   688,   689,   690,  1050,  1050,     0,   691,
     692,   693,   694,   695,   696,   697,   698,     0,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,  2010,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,   172,   176,   981,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
       0,    98,    99,     0,     0,     0,  1254,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,     0,     0,     0,     0,   117,    13,  1277,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1232,     0,     0,     0,   930,     0,     0,     0,     0,
       0,   932,     0,     0,   751,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,  1265,     0,   124,  1268,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
     751,   751,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,  1278,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1050,
       0,  1050,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,   557,   558,   559,     0,     0,     0,     0,
       0,     0,     0,     0,   751,     0,   983,     0,   560,     0,
       0,   751,   561,   562,   563,   326,   327,   564,   565,   566,
     567,   568,   569,   570,   571,   572,     0,     0,     0,     0,
       0,     0,     0,     0,   557,   558,   559,     0,     0,     0,
       0,   573,   574,   575,     0,     0,     0,     0,     0,   560,
       0,     0,     0,   561,   562,   563,   326,   327,   564,   565,
     566,   567,   568,   569,   570,   571,   572,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   573,   574,   575,     0,   557,   558,   559,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   560,     0,     0,     0,   561,   562,   563,   326,   327,
     564,   565,   566,   567,   568,   569,   570,   571,   572,     0,
    1536,  1537,     0,     0,   902,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   573,   574,   575,     0,     0,   557,
     558,   559,     0,     0,  1431,     0,     0,     0,   932,     0,
       0,     0,     0,  1442,   560,     0,     0,     0,   561,   562,
     563,   326,   327,   564,   565,   566,   567,   568,   569,   570,
     571,   572,     0,     0,     0,     0,  1472,  1473,  1474,  1475,
       0,     0,     0,     0,     0,     0,   751,   573,   574,   575,
       0,     0,  1480,   751,     0,   751,    72,    73,    74,    75,
      76,    77,     0,     0,     0,  1328,     0,     0,     0,     0,
       0,     0,     0,    78,    79,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1050,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,   176,
     981,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,   576,
     577,   578,   579,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,     0,    98,    99,
     576,   577,   578,   579,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,     0,   102,
       0,   103,   104,   105,   106,   107,   108,   109,     0,   110,
       0,   111,   112,   113,   114,     0,   115,     0,   116,     0,
    1628,     0,     0,  1442,   117,  1763,   982,     0,   118,     0,
       0,  1232,   576,   577,   578,   579,     0,     0,   930,     0,
       0,   930,     0,     0,     0,     0,     0,     0,     0,     0,
     751,   751,   751,   751,     0,     0,     0,     0,     0,     0,
     751,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,   576,   577,   578,   579,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
     137,     0,  1256,   138,   139,     0,   140,     0,     0,   141,
       0,   142,     0,     0,     0,   143,   144,     0,     0,     0,
       0,     0,   145,   146,   147,   148,   685,   149,     0,   150,
       0,     0,     0,     0,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1756,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   152,   153,
       0,     0,     0,     0,   154,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   983,   686,   687,   688,   689,   690,     0,
       0,     0,   691,   692,   693,   694,   695,   696,   697,   698,
    1442,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,     0,     0,   685,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1804,     0,  1805,     0,     0,  1806,     0,     0,
     685,     0,     0,     0,     0,     0,  1203,     0,     0,     0,
       0,     0,     0,  1674,     0,   902,     0,     0,     0,   930,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     930,   686,   687,   688,   689,   690,   930,     0,     0,   691,
     692,   693,   694,   695,   696,   697,   698,     0,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   686,   687,
     688,   689,   690,   685,     0,     0,   691,   692,   693,   694,
     695,   696,   697,   698,     0,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,     0,     0,     0,     0,     0,
     685,     0,     0,     0,     0,     0,     0,     0,     0,  1257,
    1898,  1628,  1628,     0,  1628,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   930,     0,
       0,   686,   687,   688,   689,   690,     0,     0,     0,   691,
     692,   693,   694,   695,   696,   697,   698,   930,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   686,   687,
     688,   689,   690,     0,     0,     0,   691,   692,   693,   694,
     695,   696,   697,   698,     0,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,     0,     0,     0,     0,     0,
       0,  1204,     0,     0,     0,     0,  1675,     0,  1956,     0,
       0,     0,     0,     0,  1961,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1270,     0,     0,     0,   312,     0,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,     0,    83,     0,     0,
     284,   285,   286,     0,     0,     0,  1670,   335,    84,     0,
       0,   172,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,  1898,    88,     0,  1628,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,   336,     0,     0,     0,   337,     0,   930,    93,   338,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     339,    98,    99,     0,     0,     0,  2094,     0,     0,     0,
     340,   341,   342,   343,   344,     0,   345,   346,   100,   101,
     347,   348,   102,   349,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   350,   111,   112,   113,   114,     0,   115,
     351,   116,     0,     0,     0,     0,     0,   117,    13,   632,
       0,   118,   353,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,   633,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,     0,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   312,   369,   313,
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
      92,   336,     0,     0,     0,   337,     0,     0,    93,   338,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     339,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   343,   344,     0,   345,   346,   100,   101,
     347,   348,   102,   349,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   350,   111,   112,   113,   114,     0,   115,
     351,   116,     0,     0,     0,     0,     0,   117,     0,   352,
       0,   118,   353,     0,   998,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   999,  1000,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   312,   369,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,     0,    83,     0,     0,
     284,   285,   286,     0,     0,     0,     0,   335,    84,     0,
       0,   172,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,   336,     0,     0,     0,   337,     0,     0,    93,   338,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     339,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   343,   344,     0,   345,   346,   100,   101,
     347,   348,   102,   349,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   350,   111,   112,   113,   114,     0,   115,
     351,   116,     0,     0,     0,     0,     0,   117,    13,   632,
       0,   118,   353,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,  1749,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,     0,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   312,   369,   313,
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
      92,   336,     0,     0,     0,   337,     0,     0,    93,   338,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     339,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   343,   344,     0,   345,   346,   100,   101,
     347,   348,   102,   349,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   350,   111,   112,   113,   114,     0,   115,
     351,   116,     0,     0,     0,     0,     0,   117,     0,   352,
       0,   118,   353,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,   359,     0,     0,     0,   360,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   312,   369,   313,
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
      92,   336,     0,     0,     0,   337,     0,     0,    93,   338,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     339,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   343,   344,     0,   345,   346,   100,   101,
     347,   348,   102,   349,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   350,   111,   112,   113,   114,     0,   115,
     351,   116,     0,     0,     0,     0,     0,   117,     0,   352,
       0,   118,   353,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,  1216,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,     0,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   312,   369,   313,
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
      92,   336,     0,     0,     0,   337,     0,     0,    93,   338,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     339,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   343,   344,     0,   345,   346,   100,   101,
     347,   348,   102,   349,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   350,   111,   112,   113,   114,     0,   115,
     351,   116,     0,     0,     0,     0,     0,   117,     0,   352,
       0,   118,   353,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   312,   369,   313,
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
     351,   116,     0,     0,     0,     0,     0,   117,     0,   642,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1815,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
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
       0,   172,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,   337,     0,     0,    93,   338,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     339,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   343,   344,     0,   345,   346,   100,   101,
     347,   348,   102,   349,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   350,   111,   112,   113,   114,     0,   115,
     351,   116,     0,     0,     0,     0,     0,   117,     0,   760,
     761,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
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
     117,     0,   642,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1047,     0,
       0,   354,   355,     0,     0,     0,   356,   357,   358,     0,
       0,     0,     0,     0,  1048,     0,     0,     0,   360,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,  1049,     0,     0,     0,     0,     0,     0,   135,
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
     344,  1627,   345,   346,   100,   101,   347,   348,   102,   349,
     103,   104,   105,   106,   107,   108,   109,   938,   110,   350,
     111,   112,   113,   114,     0,   115,   351,   116,     0,     0,
       0,     0,     0,   117,     0,   642,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   354,   355,     0,     0,     0,   356,
     357,   358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   360,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
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
     331,   332,   333,   334,     0,     0,    83,     0,     0,   284,
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
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
       0,     0,     0,     0,  1816,     0,     0,     0,     0,     0,
       0,  1817,     0,     0,     0,     0,   312,   369,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,     0,
       0,   324,   325,     0,     0,    78,    79,     0,     0,    80,
     326,   327,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,   328,   329,   330,
     331,   332,   333,   334,     0,     0,    83,     0,     0,   284,
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
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
       0,     0,     0,     0,  2077,     0,     0,     0,     0,     0,
       0,  2078,     0,     0,     0,     0,   312,   369,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,     0,
       0,   324,   325,     0,     0,    78,    79,     0,     0,    80,
     326,   327,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,   328,   329,   330,
     331,   332,   333,   334,     0,     0,    83,     0,     0,   284,
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
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   361,   362,   363,   364,     0,   149,
       0,   150,     0,     0,     0,     0,   151,     0,     0,     0,
     365,   657,     0,     0,   366,   367,     0,     0,     0,     0,
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
      86,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,   337,     0,     0,
      93,   338,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,   339,    98,    99,     0,     0,     0,     0,     0,
       0,     0,   340,   341,   342,   343,   344,     0,   345,   346,
     100,   101,   347,   348,   102,   349,   103,   104,   105,   106,
     107,   108,   109,     0,   110,   350,   111,   112,   113,   114,
       0,   115,   351,   116,     0,     0,     0,     0,     0,   117,
       0,   642,   749,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     354,   355,     0,     0,     0,   356,   357,   358,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   360,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
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
       0,     0,   117,     0,   642,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,   355,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,  1245,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     361,   362,   363,   364,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   365,     0,     0,     0,
     366,   367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,   312,     0,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
     324,   325,     0,   369,    78,    79,     0,     0,    80,   326,
     327,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    82,     0,     0,   328,   329,   330,   331,
     332,   333,   334,     0,     0,    83,     0,     0,   284,   285,
     286,     0,     0,     0,     0,   335,    84,     0,     0,   172,
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
       0,     0,     0,     0,     0,   117,     0,   760,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   354,   355,     0,     0,
       0,   356,   357,   358,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,    85,     0,     0,  1440,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,   117,     0,
     642,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,   356,   357,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,  1441,
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
       0,   117,     0,   642,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,   355,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   360,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   361,
     362,   363,   364,     0,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,   365,  1753,     0,     0,   366,
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
     349,   103,   104,   105,   106,   107,   108,   109,     0,   110,
     350,   111,   112,   113,   114,     0,   115,   351,   116,     0,
       0,     0,     0,     0,   117,     0,   642,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   354,   355,     0,     0,     0,
     356,   357,   358,     0,     0,     0,     0,     0,     0,     0,
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
     351,   116,     0,     0,     0,     0,     0,   117,     0,   642,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,     0,     0,     0,   366,   367,     0,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,    78,    79,   154,   155,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,     0,   369,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     3,     4,
    1576,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1577,     0,     0,    86,     0,     0,
    1578,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,     0,     0,    95,    96,    97,     0,   685,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   102,     0,   103,   104,   105,   106,   107,   108,   109,
       0,   110,     0,   111,   112,   113,   114,     0,   115,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,     0,     0,   686,   687,   688,   689,   690,
       0,     0,     0,   691,   692,   693,   694,   695,   696,   697,
     698,     0,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,   121,     0,     0,    15,   122,   123,     0,     0,     0,
       0,     0,     0,   124,    17,  1580,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,    26,
      27,     0,     0,     0,     0,   135,    28,    29,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,    30,   142,  1581,    31,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
    1478,   150,     0,     0,     0,     0,   151,     0,     0,     0,
    1582,     0,     0,  2031,     0,     0,  1583,  2032,  -349,     0,
       0,     0,     0,    32,    72,    73,    74,    75,    76,    77,
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
       0,     0,   117,     0,     0,     0,   118,     0,     0,     0,
       0,   686,   687,   688,   689,   690,     0,     0,     0,   691,
     692,   693,   694,   695,   696,   697,   698,     0,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
      15,   122,   123,     0,     0,     0,     0,     0,  1579,   124,
      17,  1580,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,    26,    27,     0,     0,     0,
       0,   135,    28,    29,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,    30,   142,
    1581,    31,     0,   143,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,     0,   149,  2029,   150,     0,     0,
       0,     0,   151,     0,     0,     0,  1582,     0,     0,     0,
       0,     0,  1583,     0,     0,     0,     0,  1584,     0,    32,
      72,    73,    74,    75,    76,    77,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,     0,    78,    79,     0,
       0,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       3,     4,  1576,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,  1577,     0,     0,    86,
       0,     0,  1578,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,     0,     0,    95,    96,    97,   685,     0,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,     0,   102,     0,   103,   104,   105,   106,   107,
     108,   109,     0,   110,     0,   111,   112,   113,   114,     0,
     115,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,     0,   118,     0,     0,     0,   686,   687,   688,   689,
     690,     0,     0,     0,   691,   692,   693,   694,   695,   696,
     697,   698,     0,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,    15,   122,   123,     0,
       0,     0,     0,     0,  1880,   124,    17,  1580,  1881,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,    26,    27,     0,     0,     0,     0,   135,    28,    29,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,    30,   142,  1581,    31,     0,   143,
     144,     0,     0,     0,     0,     0,   145,   146,   147,   148,
     970,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,  1582,     0,     0,     0,     0,     0,  1583,     0,
       0,     0,     0,  1584,     0,    32,    72,    73,    74,    75,
      76,    77,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,    78,    79,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     3,     4,  1576,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,  1577,     0,     0,    86,     0,     0,  1578,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,     0,
       0,    95,    96,    97,   685,     0,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,     0,   102,
       0,   103,   104,   105,   106,   107,   108,   109,     0,   110,
       0,   111,   112,   113,   114,     0,   115,     0,   116,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   118,     0,
       0,     0,   686,   687,   688,   689,   690,     0,     0,     0,
     691,   692,   693,   694,   695,   696,   697,   698,     0,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,   121,
       0,     0,    15,   122,   123,     0,     0,     0,     0,     0,
       0,   124,    17,  1580,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,    26,    27,     0,
       0,     0,     0,   135,    28,    29,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
      30,   142,  1581,    31,     0,   143,   144,     0,     0,     0,
       0,     0,   145,   146,   147,   148,  1872,   149,     0,   150,
       0,     0,     0,     0,   151,     0,     0,     0,  1582,     0,
       0,     0,     0,     0,  1583,     0,  -349,     0,     0,     0,
       0,    32,    72,    73,    74,    75,    76,    77,   152,   153,
       0,     0,     0,     0,   154,   155,     0,     0,     0,    78,
      79,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     3,     4,  1576,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,  1577,     0,
       0,    86,     0,     0,  1578,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,   685,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,     0,   115,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,   686,   687,   688,   689,   690,     0,     0,     0,   691,
     692,   693,   694,   695,   696,   697,   698,     0,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,     0,     0,    15,   122,
     123,     0,     0,     0,     0,     0,     0,   124,    17,  1580,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,    26,    27,   709,     0,     0,     0,   135,
      28,    29,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,    30,   142,  1581,    31,
       0,   143,   144,     0,     0,     0,     0,     0,   145,   146,
     147,   148,     0,   149,     0,   150,     0,     0,     0,     0,
     151,     0,     0,     0,  1582,     0,     0,     0,     0,     0,
    1583,     0,     0,     0,     0,     0,  2102,    32,    72,    73,
      74,    75,    76,    77,   152,   153,     0,     0,     0,     0,
     154,   155,     0,     0,     0,    78,    79,     0,     0,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
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
       0,   121,     0,     0,    15,   122,   123,     0,     0,     0,
       0,     0,     0,   124,    17,  1580,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,    26,
      27,     0,     0,     0,     0,   135,    28,    29,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,    30,   142,  1581,    31,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,     0,     0,     0,
    1582,     0,     0,     0,     0,     0,  1583,    72,    73,    74,
      75,    76,    77,    32,     0,     0,     0,     0,     0,     0,
     152,   153,     0,     0,    78,    79,   154,   155,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     3,     4,  1576,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1577,     0,     0,    86,     0,     0,  1578,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,  1672,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,     0,   685,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,  1673,   115,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,     0,   118,
       0,     0,     0,     0,   686,   687,   688,   689,   690,     0,
       0,     0,   691,   692,   693,   694,   695,   696,   697,   698,
       0,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     121,     0,     0,     0,   122,   123,     0,     0,     0,     0,
       0,     0,   124,    17,  1580,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,     0,    27,
       0,     0,     0,     0,   135,    28,    29,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,    30,   142,  1581,     0,     0,   143,   144,     0,     0,
       0,     0,     0,   145,   146,   147,   148,     0,   149,     0,
     150,     0,     0,     0,     0,   151,     0,     0,     0,  1582,
       0,     0,     0,     0,     0,  1583,     0,     0,     0,     0,
    2052,     0,    32,    72,    73,    74,    75,    76,    77,   152,
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
       0,   117,  1255,     0,     0,   118,     0,     0,     0,     0,
     686,   687,   688,   689,   690,     0,     0,     0,   691,   692,
     693,   694,   695,   696,   697,   698,     0,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,    17,
    1580,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,    27,     0,     0,     0,     0,
     135,    28,    29,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,    30,   142,  1581,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,     0,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,  1582,     0,     0,     0,     0,
       0,  1583,     0,     0,     0,     0,     0,  2147,    32,     0,
       0,     0,     0,     0,     0,   152,   153,     0,     0,     0,
       0,   154,   155,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,   240,     0,     0,     0,     0,
      78,    79,     0,     0,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,   242,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,     0,   685,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,  1626,   115,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,     0,   118,     0,     0,     0,     0,
     686,   687,   688,   689,   690,     0,     0,     0,   691,   692,
     693,   694,   695,   696,   697,   698,     0,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
     296,   248,   249,   250,   251,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   297,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,     0,   149,     0,   150,     0,     0,     0,
       0,   151,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,     0,     0,    80,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,   284,   285,   286,     0,     0,     0,     0,
       0,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
       0,   685,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,  1671,   115,     0,   116,     0,     0,     0,     0,     0,
     117,     0,   288,     0,   118,     0,     0,     0,     0,   686,
     687,   688,   689,   690,     0,     0,     0,   691,   692,   693,
     694,   695,   696,   697,   698,     0,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   289,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   290,     0,   142,     0,     0,
       0,   143,   144,     0,     0,     0,   685,     0,   145,   291,
     147,   148,     0,   149,     0,   150,     0,     0,     0,     0,
     151,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,    80,     0,   152,   153,  1677,     0,     0,     0,
     154,   155,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,     0,   686,   687,   688,   689,   690,    83,
       0,     0,   691,   692,   693,   694,   695,   696,   697,   698,
      84,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,     0,     0,    95,    96,    97,     0,
     685,     0,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   102,     0,   103,   104,   105,   106,
     107,   108,   109,     0,   110,     0,   111,   112,   113,   114,
    1922,   115,     0,   777,     0,     0,     0,     0,     0,   117,
       0,     0,     0,   118,     0,     0,     0,     0,   686,   687,
     688,   689,   690,     0,     0,     0,   691,   692,   693,   694,
     695,   696,   697,   698,     0,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,   121,     0,     0,     0,   122,   123,
     446,   447,   448,   449,     0,     0,   124,     0,     0,   125,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
       0,   134,     0,     0,     0,     0,     0,     0,   135,     0,
       0,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,     0,   142,     0,     0,     0,
     778,   144,     0,     0,     0,     0,     0,   145,   146,   147,
     148,     0,   149,     0,   150,     0,     0,     0,     0,   151,
      72,    73,    74,  1054,  1055,  1056,     0,     0,     0,     0,
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
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,     0,    98,    99,     0,     0,     0,     0,   685,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,     0,   102,     0,   103,   104,   105,   106,   107,
     108,   109,     0,   110,     0,   111,   112,   113,   114,     0,
     115,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   686,   687,   688,   689,
     690,     0,     0,     0,   691,   692,   693,   694,   695,   696,
     697,   698,  1057,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
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
       0,     0,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,     0,   685,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,  1923,   115,
       0,   116,     0,     0,     0,     0,     0,   117,     0,   616,
       0,   118,     0,     0,     0,     0,   686,   687,   688,   689,
     690,     0,     0,     0,   691,   692,   693,   694,   695,   696,
     697,   698,     0,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,    72,    73,
      74,  1054,  1055,  1056,     0,     0,     0,     0,     0,     0,
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
      94,     0,     0,    95,    96,    97,     0,     0,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   102,     0,   103,   104,   105,   106,   107,   108,   109,
       0,   110,     0,   111,   112,   113,   114,     0,   115,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1515,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
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
     110,     0,   111,   112,   113,   114,  1924,   115,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,     0,   118,
       0,     0,     0,     0,   686,   687,   688,   689,   690,     0,
       0,     0,   691,   692,   693,   694,   695,   696,   697,   698,
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
     150,     0,     0,     0,     0,   151,    72,    73,    74,  1054,
    1055,  1056,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,     0,     0,    80,     0,   152,
     153,     0,     0,     0,     0,   154,   155,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,   176,
       0,   177,   178,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,   151,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,    80,     0,   152,   153,
       0,     0,     0,     0,   154,   155,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,   172,     0,     0,
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
       0,     0,     0,   117,     0,    14,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,  1386,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,  1357,
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
     138,   139,     0,   140,     0,     0,   141,   488,   142,     0,
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
     117,     0,   288,     0,   118,     0,     0,     0,     0,     0,
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
       0,   143,   144,     0,     0,     0,     0,     0,   145,   146,
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
       0,     0,     0,   118,     0,     0,     0,   669,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,    80,     0,   152,   670,     0,     0,     0,     0,   154,
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
       0,     0,  1154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
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
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,  1357,     0,   122,   123,     0,     0,
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
       0,   141,     0,   142,     0,     0,     0,   143,   144,     0,
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
       0,     0,     0,     0,     0,   117,     0,     0,     0,   118,
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
     141,     0,   142,     0,     0,     0,   193,   144,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,   834,
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
       0,     0,     0,   117,     0,     0,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   145,   146,   147,   148,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,  1294,     0,
       0,     0,     0,   154,   155
};

static const yytype_int16 yycheck[] =
{
       4,   300,   310,   172,    38,     9,   171,   425,     0,    13,
     823,   231,   441,   578,    18,    19,     0,    25,   183,   229,
     665,     0,   815,    27,    37,   300,     0,   621,  1125,   715,
     618,     0,     3,    37,    38,   629,   987,   202,   203,   336,
     721,     0,  1399,   208,   623,  1428,     0,  1120,   577,   490,
     457,    28,   631,    11,    18,  1008,  1009,   982,   989,   300,
      84,   352,   353,   594,     3,    11,     0,    71,    14,   668,
     934,    56,   936,   224,  1147,     3,   469,   368,    67,   842,
     843,   844,   458,   947,   112,   594,   110,   478,  1498,   653,
      42,    43,   797,   798,   160,   352,    86,    16,   803,  1716,
      27,   112,    59,     0,    65,     5,     6,     7,     8,     9,
      10,   105,    67,   284,   112,   112,     0,   111,  1501,   112,
    1982,   176,  1240,   111,    85,   286,  1509,     0,   230,    11,
     112,   116,    84,   274,   275,   276,     3,   278,   279,   280,
     533,   282,   312,   313,   314,     0,   181,  1382,  1501,     3,
      14,  1779,   118,   119,  1782,     3,  1509,   161,   162,   153,
     127,   254,   333,   167,    20,   271,   160,     3,    24,    25,
     135,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,   284,   285,   151,    67,   175,    54,   349,   193,
     178,   361,   184,   185,   186,   187,   188,   161,    54,    55,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     175,   225,   226,   227,   175,   184,   185,   186,   187,   188,
     184,   185,   186,   187,   188,   111,   175,   241,  1855,   409,
     410,   245,  1382,   349,   175,   222,   755,   175,   252,   253,
     184,   185,   186,   187,   188,   662,   553,   111,   262,   263,
     264,   265,   266,   267,   268,   269,   797,   798,   272,   267,
     267,  2133,   803,   277,   112,   111,  1686,   281,   174,   499,
    1758,   316,    82,   349,   288,   289,   290,   184,   185,   186,
     187,   188,   174,   175,   349,   256,   169,   310,   555,   284,
     184,   185,   186,   187,   188,   723,   310,   311,   740,   741,
     742,   184,   185,   186,   187,   188,   915,   341,   176,   883,
     884,   349,   346,  1558,  1275,   890,   496,   279,    67,   184,
     185,   186,   187,   188,   328,   486,   340,   294,   349,   596,
     267,   632,   718,  1461,    67,  1276,   194,   195,    67,   943,
     607,   608,  1277,   324,   236,   349,   349,   347,   523,  1987,
     349,  1047,   891,  1049,   805,   229,     4,   349,   372,   267,
     949,   174,    80,   766,   181,   632,   276,  1241,   254,   383,
    1244,    19,   673,   674,   323,   642,   527,    88,  1862,    27,
    1153,  1869,   683,  1776,   785,   786,   354,  1875,  1103,   350,
     657,   910,  1759,   322,  2021,   175,   181,  1764,   354,   175,
      65,    66,   425,    68,   507,   508,   509,   510,  1558,   350,
     170,   171,   172,   305,   517,   857,   858,   859,   860,   174,
      11,   176,   436,    71,    67,   174,   175,   441,   175,     3,
     444,   270,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   174,   175,   349,   458,   174,   175,   313,   851,   852,
     853,   854,     5,     6,     7,     8,     9,    10,   861,   862,
     863,     0,   176,   175,   135,   191,   480,   441,   176,   352,
    1958,   176,     5,   176,   176,   176,   656,   176,    11,  1967,
     494,   349,   176,   349,   498,  1568,  1970,   352,  1972,   176,
     477,    84,   309,   760,   176,   804,   176,   176,   176,   176,
     514,   515,   516,   176,   518,   254,   176,  1470,  1471,  1876,
     176,   135,   556,   822,   162,   529,   530,   531,   532,   804,
     176,   535,   536,   537,   538,   755,   540,   541,   542,   255,
     544,   174,   175,   284,   548,   952,   349,   822,    84,   288,
     554,  2029,   556,  2031,   176,   193,   176,   176,   176,    65,
      66,    67,    68,   804,   176,   288,   181,   112,   279,   288,
    2000,   176,  1103,   176,   873,  1439,   580,   176,   748,   181,
     350,   822,    85,   959,   350,    84,  1450,   350,   226,   227,
     173,     3,   333,  1457,   175,    21,    22,  1278,   873,   819,
     271,   465,   257,   353,   349,   181,   914,   245,  1196,   175,
     174,   175,   111,   350,   252,    16,   913,     0,    67,   155,
     305,   254,   158,   191,   262,   263,   264,   265,   266,   267,
     175,   269,   873,     0,   272,  1321,   321,  2067,   100,  1284,
    1072,   144,   650,   281,   652,   349,  1291,  1226,   350,   111,
    2128,   349,   817,   192,   349,   288,   349,   349,   349,   916,
     349,   665,   666,   129,   111,   349,   670,   958,   134,    70,
      71,    72,   349,    74,    75,  1082,    77,   349,   349,   349,
     349,   349,   349,    67,   981,   191,   349,   255,   979,   349,
     910,   174,    84,   349,   309,     5,     6,     7,     8,     9,
      10,   665,   116,   349,   221,   222,   153,   309,   712,   256,
     714,  1002,   882,   111,   718,   719,   178,   154,  1015,   156,
     263,  1012,  1013,   266,   732,   174,   175,   349,  1679,   349,
     349,   349,   279,   309,   738,  1167,   258,   349,    65,    66,
      67,    68,   156,   616,   349,   383,   349,   253,   712,   175,
     349,   257,   274,  1850,  1851,    65,    66,    67,    68,   632,
     103,   616,   174,   175,   230,   287,    57,   168,   632,   642,
     162,   277,    63,   165,   778,  1168,   259,   632,   117,   118,
     178,   120,   121,   122,   123,   124,   125,   642,   254,   128,
     174,   175,   254,    39,    40,   965,   279,   967,  1073,    42,
      43,   184,   185,   186,   187,   188,   444,  1104,   446,   447,
     448,   449,   816,   451,   320,   453,   454,   184,   185,   186,
     187,   188,   826,   827,   828,   829,    72,   170,   171,   172,
     834,   229,  1073,   176,    59,   839,   176,   841,   842,   843,
     844,   181,   480,   176,   111,   849,   850,  1492,   181,  1494,
     167,   160,    68,   327,  1419,   719,   494,  1264,  1157,   160,
     498,   791,  1456,    88,  1271,  1459,  1273,   176,   350,   270,
     103,   275,   880,    89,   116,   176,   274,   515,   175,   277,
     518,   191,  1157,   150,  1104,   152,   153,   760,   896,   287,
     820,   529,   530,   531,   532,   167,   760,   535,   536,   537,
     538,   914,   540,   541,   542,   760,   544,   221,   222,  1708,
     914,  1131,   154,   917,   156,  1714,  1157,   234,   235,   236,
     237,  1220,  1221,   176,  1300,   929,   253,   349,   181,  1099,
     257,   353,   239,   937,  1727,  1728,   243,   170,   171,   172,
     944,    89,   286,   253,  1320,  1220,  1221,   257,    96,    97,
     277,  1161,    70,    71,    72,   959,  1349,  1350,  1351,    77,
     175,  1126,   234,   235,   236,   237,   271,   277,  1134,  1135,
    1136,  1137,   289,     5,     6,     7,   349,   981,   982,  1220,
    1221,   270,   231,   987,   988,   989,  1152,   349,    20,   328,
      83,    84,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,  1095,   256,  1097,  1098,
     320,   256,   329,    87,   263,   264,   271,   981,   982,    90,
      91,    53,    54,    55,    88,    70,    71,    72,   267,    74,
      75,    17,    77,   282,   279,  1680,    11,   282,   283,   267,
     904,   905,   906,   117,   284,    87,   120,   121,   122,   123,
     124,   125,   184,   185,   128,    89,   188,   313,    92,  1063,
     284,  1468,  1469,  1362,    98,  1974,   284,  1976,  1977,  1978,
      56,  1478,    56,    59,  1078,   117,   260,   261,   120,   121,
     122,   123,   124,   125,   284,   179,   128,  1362,   182,   183,
     184,   185,   186,   187,   188,   189,   326,  1101,  1102,   193,
     738,   284,   176,  1697,   331,   332,  1110,  1111,   235,   982,
    1114,   170,   171,   172,  1118,  1119,  1120,  1121,   104,   235,
     106,  1362,   313,   168,   676,   677,   678,   982,   228,   308,
     116,   310,   116,   308,  1138,   310,  1306,   308,   303,   310,
     778,  1145,   179,  1147,  1008,  1009,   136,  1151,   875,  1153,
     179,   878,   879,   880,   308,   179,   310,  1121,   101,   102,
      70,    71,    72,  1581,    74,    75,    76,    77,   349,   896,
     897,   898,   899,  1343,  1971,   295,  1973,   297,   816,   299,
     300,   301,   302,   167,   105,  1395,   284,   285,   826,   827,
     828,   829,   170,   171,   172,   284,  1366,  1070,   176,  1369,
    1370,   839,  1796,   331,   332,   333,   334,   191,   284,   194,
     195,   849,   850,   186,   187,  1070,  1507,  1508,   116,    94,
      95,  1815,    90,    91,   304,  1089,   216,   217,   218,   219,
     220,     3,     4,   335,   336,   221,   222,   223,   224,   225,
     226,   333,   334,   290,  1519,  1502,     3,   233,     3,   233,
     234,   235,   236,   237,   328,   349,    65,    66,   168,   291,
     292,   293,   294,     5,     6,     7,     8,     9,    10,   167,
     175,  1275,  1276,  1277,   186,   187,   810,   811,  1519,   265,
    1284,   265,  2091,  2092,   305,   306,   328,  1291,   592,   593,
    1294,   929,   278,   175,   278,   175,  1300,  1301,   284,   175,
     284,   287,   175,  2116,    22,   289,   175,   127,  1607,  1608,
     175,  1610,   175,  1277,   175,  1744,  1320,   349,  1322,   175,
    1284,   175,   175,   175,  1581,   175,  1583,  1291,   175,   175,
     175,   175,  1607,  1608,   175,  1610,   234,   235,   236,   237,
     326,   175,   326,   175,   295,   329,   297,   175,   299,   300,
     301,   302,   175,  1357,   175,   192,   339,   350,   136,   175,
     349,   175,   175,   339,   286,    93,  1607,  1608,    99,  1610,
     349,  1541,  1406,  1543,  1544,    17,   136,  1381,   328,   268,
     278,  1385,  1386,   306,   235,   135,   284,   285,   135,  1393,
    1382,   289,   135,   131,   131,  1399,  1400,   113,  1382,   113,
     320,   112,  1406,  1407,  1277,   176,  1414,  1576,  1416,   267,
    1418,  2005,   305,  1277,    56,  1423,   174,    59,   174,  1283,
     239,  1385,  1277,   175,  1428,   178,  1683,   175,   326,   207,
     208,   209,    56,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   175,   235,   175,   107,  1451,  1382,  1867,
     175,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    38,   104,   175,   106,   182,   183,   184,   185,   186,
     187,   188,   189,  1111,   116,   175,   193,   175,   175,   175,
     175,  1119,   175,   111,   175,  1382,   175,   175,  1492,   169,
    1494,   350,   116,   305,  1498,   179,  1753,  1501,  1382,    23,
     179,   129,   176,  1760,   113,  1509,   134,   240,   157,     3,
     175,   240,   176,  1151,   176,   174,  1520,   175,   175,   352,
     175,  1534,   207,   176,   288,    83,    80,   175,  1492,   112,
    1494,   175,   350,   278,   105,   245,   262,   286,  1572,   174,
     112,   285,   321,   167,   174,   266,   240,  1551,   107,   254,
     178,   228,   175,  1723,   328,   270,   181,    23,   105,  1729,
    1730,   349,   286,   328,  1568,   349,  1558,   191,  1572,   112,
     160,  1879,   175,   349,  1558,   148,  1580,   103,   176,   221,
     222,   223,   224,   225,   226,   292,   349,   176,   349,   110,
     136,   233,   319,   111,   340,   176,  1766,   176,   349,   175,
     175,   229,   230,    89,   112,   175,  1470,  1471,   349,   233,
     234,   235,   236,   237,   266,   262,  1580,   263,    91,   111,
     322,   112,   262,   265,  1558,   175,   254,    20,   273,   236,
     136,   100,   176,   270,   176,  1639,   328,   176,   176,   176,
     349,   265,   284,   330,   176,   287,   274,   176,   176,   277,
     349,   176,   286,  1823,   176,   328,   176,   176,   175,   287,
     284,  1558,   176,   349,   176,   289,   176,   349,   349,  1682,
    1969,   105,   176,   163,  1558,  1679,  1680,   175,   175,   175,
    1937,   303,  1686,   319,   326,   295,   296,   297,   298,   299,
     300,   301,   302,   176,  1969,   176,  1709,  1710,    76,   176,
      76,   175,   326,    73,   109,   329,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   105,  1680,   105,   176,   103,
     176,   176,  1726,   176,   350,    16,   271,   328,  1969,  1733,
    2038,   349,   112,   175,   243,   271,   270,   270,   279,   176,
    1744,  1745,   174,   238,   328,   238,   176,   176,  1386,   254,
     145,   145,   176,   176,   176,  1759,   286,    76,   175,   105,
    1764,   176,   176,   279,   349,   254,   269,   336,   269,  1407,
    1940,   175,  1776,  1777,  1939,  2032,   240,     3,   179,     3,
    1744,   182,   183,   184,   185,   186,   187,   188,   189,  1793,
     272,   192,   193,   349,  2051,   174,   349,    78,   239,   351,
     240,  1971,   317,  1973,  2103,     5,   111,   179,   315,   229,
     182,   183,   184,   185,   186,   187,   188,   189,     0,     1,
    1824,   193,   349,   176,   129,   338,   176,   176,  2103,   134,
     135,   176,   175,   164,   176,  1839,   176,   270,    65,    66,
      67,    68,   270,   270,   270,  2010,   176,   278,   350,   349,
     349,    78,    79,    80,    81,   193,   262,   111,  1862,   130,
      87,   349,  2103,    84,   349,   174,   240,   175,   175,    51,
     113,   176,  1876,   178,   175,  1879,   354,   355,   175,   271,
     111,   111,   360,    65,    66,    67,    68,   365,   111,   270,
     176,   342,   344,   270,   333,   344,    78,    79,    80,    81,
     111,   175,   277,   328,   269,    87,   349,   230,     3,   278,
     173,    86,    86,  1917,   350,   267,   319,   135,   240,     5,
     240,     5,   308,   156,   229,   230,   231,   337,   328,   350,
    1934,   349,     3,   153,   153,  2155,   158,   192,   131,  1943,
      60,   176,  1580,  1947,  2164,   307,   319,   174,   175,   254,
    1954,   256,   135,   135,   161,  1959,   319,   158,   263,   264,
    1964,   175,   345,   155,   114,   333,  1970,   175,  1972,   274,
      61,   135,   277,   307,   333,   319,   317,   282,  1982,   457,
     319,  1985,   287,   343,    62,   270,   344,   465,   313,   315,
    1982,   270,   174,   175,   270,  1999,   325,    65,  1982,    66,
     135,    41,   175,  1982,   231,   232,  1145,  1558,  1982,   222,
    1336,   221,   479,  1982,   241,   242,   481,   244,  2085,  1092,
     805,    38,  2026,  1982,  1120,  2137,  1568,  1714,  1982,   256,
     257,  2123,  2036,  2115,  2038,  2122,   263,   264,  2084,  1764,
    2044,  2045,  2046,  2047,   349,  2133,  1874,  1874,  1755,   231,
     232,  1610,   279,  2144,  1891,   282,  1890,   733,  1519,   241,
     242,   480,   244,     8,   246,   247,   248,   249,   165,   251,
    1546,   253,  1943,  2018,   256,   257,  1946,  1544,  1543,   466,
     723,   263,   264,  1469,  1089,   914,  1468,  1288,  1685,   436,
    1301,   991,  2096,   320,  2098,   669,   951,   279,   179,  1693,
     282,   182,   183,   184,   185,   186,   187,   188,   189,   911,
     588,   192,   193,   712,  1202,   599,   682,   684,   683,   735,
     968,  1815,    37,   972,  1782,   660,  2130,  1984,   608,  2133,
     972,  1780,  1796,  1631,  1449,  1438,   552,  1638,   320,  1441,
    2144,  2133,  1911,   621,   622,   623,  1996,    -1,    -1,  2133,
      -1,   629,  2004,   631,  2133,   630,    -1,    -1,    -1,  2133,
      -1,    -1,    -1,    -1,  2133,    -1,    -1,   645,   646,   647,
      -1,    -1,    -1,   136,  2133,    -1,    -1,    -1,    -1,  2133,
      -1,    -1,    -1,   661,   662,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   675,   676,   677,
     678,  1839,    -1,    -1,    -1,    -1,    -1,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,   194,   195,   196,   197,   198,   714,   715,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,  1934,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,   349,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,    -1,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,   175,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   939,    -1,    -1,    -1,   943,    -1,    -1,    -1,    -1,
      -1,   949,    -1,    -1,   952,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,   970,    -1,   240,   973,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
    1008,  1009,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,   288,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1047,
      -1,  1049,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1082,    -1,   352,    -1,    20,    -1,
      -1,  1089,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      -1,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    -1,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
     132,   133,    -1,    -1,  1202,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,     5,
       6,     7,    -1,    -1,  1222,    -1,    -1,    -1,  1226,    -1,
      -1,    -1,    -1,  1231,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,  1254,  1255,  1256,  1257,
      -1,    -1,    -1,    -1,    -1,    -1,  1264,    53,    54,    55,
      -1,    -1,  1270,  1271,    -1,  1273,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1321,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,   291,
     292,   293,   294,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,
      -1,   120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,
     291,   292,   293,   294,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,
      -1,   150,   151,   152,   153,   154,   155,   156,    -1,   158,
      -1,   160,   161,   162,   163,    -1,   165,    -1,   167,    -1,
    1438,    -1,    -1,  1441,   173,   284,   175,    -1,   177,    -1,
      -1,  1449,   291,   292,   293,   294,    -1,    -1,  1456,    -1,
      -1,  1459,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1468,  1469,  1470,  1471,    -1,    -1,    -1,    -1,    -1,    -1,
    1478,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   232,   233,   291,   292,   293,   294,    -1,
      -1,   240,    -1,    -1,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,
     269,    -1,   112,   272,   273,    -1,   275,    -1,    -1,   278,
      -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,
      -1,    -1,   291,   292,   293,   294,   136,   296,    -1,   298,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1582,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,
      -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   352,   194,   195,   196,   197,   198,    -1,
      -1,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
    1638,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1670,    -1,  1672,    -1,    -1,  1675,    -1,    -1,
     136,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,  1693,    -1,    -1,    -1,  1697,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1708,   194,   195,   196,   197,   198,  1714,    -1,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   194,   195,
     196,   197,   198,   136,    -1,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,
    1778,  1779,  1780,    -1,  1782,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1796,    -1,
      -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,  1815,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   194,   195,
     196,   197,   198,    -1,    -1,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,    -1,   349,    -1,  1866,    -1,
      -1,    -1,    -1,    -1,  1872,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   349,    -1,    -1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,    58,    -1,    -1,    -1,   349,    63,    64,    -1,
      -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,  1984,    93,    -1,  1987,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,   107,    -1,    -1,    -1,   111,    -1,  2005,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
     126,   127,   128,    -1,    -1,    -1,  2024,    -1,    -1,    -1,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,   163,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,   175,
      -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,   288,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,     5,
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
     106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,   163,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
      -1,   177,   178,    -1,   180,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,   163,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,   175,
      -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,     5,
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
     106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,   163,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
      -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,   207,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,     5,
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
     106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,   163,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
      -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,     5,
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
     106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,   163,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
      -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,     5,
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
     166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
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
      -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
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
     176,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
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
     173,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,    -1,
      -1,   194,   195,    -1,    -1,    -1,   199,   200,   201,    -1,
      -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,    -1,
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
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    -1,   165,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,
     200,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
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
     307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,
      -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,
      -1,   348,    -1,    -1,    -1,    -1,     3,   354,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
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
     307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,
      -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,
      -1,   348,    -1,    -1,    -1,    -1,     3,   354,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
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
      -1,    -1,   136,   137,   138,   139,   140,    -1,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,   159,   160,   161,   162,   163,
      -1,   165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,
      -1,   175,   176,   177,    -1,    -1,    -1,    -1,    -1,    -1,
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
     251,    -1,   253,   254,   255,    -1,    -1,    -1,    -1,    -1,
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
      58,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    67,
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
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,
      -1,   199,   200,   201,    -1,    -1,    -1,    -1,    -1,    -1,
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
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
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
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    -1,   158,
     159,   160,   161,   162,   163,    -1,   165,   166,   167,    -1,
      -1,    -1,    -1,    -1,   173,    -1,   175,    -1,   177,    -1,
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
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,   311,   312,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    22,    23,   333,   334,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,   354,    -1,
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
      -1,   228,    -1,    -1,   231,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,   256,
     257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,   279,   280,   281,   282,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
     309,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
     307,    -1,    -1,   310,    -1,    -1,   313,   314,   315,    -1,
      -1,    -1,    -1,   320,     5,     6,     7,     8,     9,    10,
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
      -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
     231,   232,   233,    -1,    -1,    -1,    -1,    -1,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,
      -1,   262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,   279,   280,
     281,   282,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,   309,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    -1,   313,    -1,    -1,    -1,    -1,   318,    -1,   320,
       5,     6,     7,     8,     9,    10,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,    -1,    -1,   120,   121,   122,   136,    -1,
      -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,    -1,    -1,   148,    -1,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,    -1,   160,   161,   162,   163,    -1,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,    -1,   177,    -1,    -1,    -1,   194,   195,   196,   197,
     198,    -1,    -1,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,   231,   232,   233,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,   256,   257,    -1,    -1,    -1,    -1,   262,   263,   264,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,   279,   280,   281,   282,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
     308,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,   313,    -1,
      -1,    -1,    -1,   318,    -1,   320,     5,     6,     7,     8,
       9,    10,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,
      -1,   120,   121,   122,   136,    -1,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,
      -1,   150,   151,   152,   153,   154,   155,   156,    -1,   158,
      -1,   160,   161,   162,   163,    -1,   165,    -1,   167,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,
      -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,
     202,   203,   204,   205,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,   231,   232,   233,    -1,    -1,    -1,    -1,    -1,
      -1,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,   253,    -1,   255,   256,   257,    -1,
      -1,    -1,    -1,   262,   263,   264,   265,    -1,    -1,    -1,
     269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,
     279,   280,   281,   282,    -1,   284,   285,    -1,    -1,    -1,
      -1,    -1,   291,   292,   293,   294,   308,   296,    -1,   298,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,
      -1,    -1,    -1,    -1,   313,    -1,   315,    -1,    -1,    -1,
      -1,   320,     5,     6,     7,     8,     9,    10,   327,   328,
      -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
      -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,
      -1,    -1,    -1,   136,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,   152,
     153,   154,   155,   156,    -1,   158,    -1,   160,   161,   162,
     163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,
     173,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,
      -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,   231,   232,
     233,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
     253,    -1,   255,   256,   257,   268,    -1,    -1,    -1,   262,
     263,   264,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,
     273,    -1,   275,    -1,    -1,   278,   279,   280,   281,   282,
      -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,
     293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,
     313,    -1,    -1,    -1,    -1,    -1,   319,   320,     5,     6,
       7,     8,     9,    10,   327,   328,    -1,    -1,    -1,    -1,
     333,   334,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,
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
      -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,   231,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,   256,
     257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,   279,   280,   281,   282,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,   313,     5,     6,     7,
       8,     9,    10,   320,    -1,    -1,    -1,    -1,    -1,    -1,
     327,   328,    -1,    -1,    22,    23,   333,   334,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,   100,   113,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
      -1,    -1,   120,   121,   122,    -1,   136,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,    -1,   160,   161,   162,   163,   176,   165,    -1,   167,
      -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,    -1,
      -1,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,
      -1,    -1,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,   257,
      -1,    -1,    -1,    -1,   262,   263,   264,   265,    -1,    -1,
      -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,
     278,   279,   280,   281,    -1,    -1,   284,   285,    -1,    -1,
      -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,
     298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   307,
      -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,
     318,    -1,   320,     5,     6,     7,     8,     9,    10,   327,
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
      -1,   173,   186,    -1,    -1,   177,    -1,    -1,    -1,    -1,
     194,   195,   196,   197,   198,    -1,    -1,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,    -1,   257,    -1,    -1,    -1,    -1,
     262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,   279,   280,   281,
      -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,   313,    -1,    -1,    -1,    -1,    -1,   319,   320,    -1,
      -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,
     122,    -1,   136,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,    -1,   160,   161,
     162,   163,   176,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,
     194,   195,   196,   197,   198,    -1,    -1,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,   224,   225,   226,    -1,   228,    -1,    -1,    -1,
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
      53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     173,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   194,
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
      -1,   284,   285,    -1,    -1,    -1,   136,    -1,   291,   292,
     293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,
     303,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,   327,   328,   176,    -1,    -1,    -1,
     333,   334,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,    53,
      -1,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      64,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
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
     234,   235,   236,   237,    -1,    -1,   240,    -1,    -1,   243,
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
      -1,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,    -1,   127,   128,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,    -1,    -1,   148,    -1,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,    -1,   160,   161,   162,   163,    -1,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,   197,
     198,    -1,    -1,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,   207,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,    -1,    -1,    -1,   221,   222,    -1,    -1,
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
      -1,   117,    -1,    -1,   120,   121,   122,    -1,   136,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,   176,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,   194,   195,   196,   197,
     198,    -1,    -1,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
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
     207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,   177,
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
      -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,
     298,    -1,    -1,    -1,    -1,   303,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   303,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   327,   328,
      -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,    -1,
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
      -1,    -1,    -1,   173,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,
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
     272,   273,    -1,   275,    -1,    -1,   278,   279,   280,    -1,
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
     173,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   177,    -1,    -1,    -1,   181,    -1,    -1,
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
      -1,    -1,   207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,   177,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    65,    66,    67,    68,    78,    79,    80,
      81,    87,   135,   174,   175,   231,   232,   241,   242,   244,
     246,   247,   248,   249,   251,   253,   256,   257,   263,   264,
     279,   282,   320,   356,   362,   363,   366,   367,   368,   369,
     371,   373,   374,   383,   388,   400,   405,   406,   412,   451,
     457,   460,   468,   489,   504,   508,   509,   510,   518,   533,
     535,   536,   537,   556,   560,   561,   562,   565,   687,   692,
     135,   112,     5,     6,     7,     8,     9,    10,    22,    23,
      26,    38,    41,    53,    64,    81,    84,    87,    93,    98,
      99,   100,   106,   114,   117,   120,   121,   122,   127,   128,
     144,   145,   148,   150,   151,   152,   153,   154,   155,   156,
     158,   160,   161,   162,   163,   165,   167,   173,   177,   221,
     222,   228,   232,   233,   240,   243,   244,   245,   246,   247,
     248,   249,   251,   253,   255,   262,   265,   269,   272,   273,
     275,   278,   280,   284,   285,   291,   292,   293,   294,   296,
     298,   303,   327,   328,   333,   334,   655,   681,   682,   191,
     255,   546,   267,    82,   515,   515,   681,    80,    88,   557,
     558,   681,    67,   565,   181,   270,    68,    70,    71,   625,
     626,   627,   681,   655,   359,   358,   360,   361,   357,     5,
      11,   685,   688,   284,   655,     5,     6,     7,     8,     9,
      10,    65,    66,    67,    68,   191,   253,   257,   277,   320,
     384,   391,   392,   393,   395,   396,   397,   679,   680,   263,
     266,   389,   390,    59,    88,    56,   116,   284,    11,   175,
     236,   305,   452,   453,   526,   556,   562,   670,   684,     0,
      17,    56,    59,   104,   106,   116,   221,   222,   223,   224,
     225,   226,   233,   265,   278,   284,   287,   413,   414,   417,
     418,   167,   234,   235,   236,   237,   289,   329,    56,   116,
     167,   191,   233,   234,   235,   236,   237,   265,   278,   284,
     289,   326,   329,   503,    56,    57,    58,    64,   175,   265,
     278,   292,   456,   652,   681,   221,   222,   284,   372,   417,
     449,   681,   135,   103,   170,   171,   172,   581,   135,   655,
     279,   350,     3,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    18,    19,    27,    28,    44,    45,
      46,    47,    48,    49,    50,    63,   107,   111,   115,   126,
     136,   137,   138,   139,   140,   142,   143,   146,   147,   149,
     159,   166,   175,   178,   194,   195,   199,   200,   201,   207,
     211,   291,   292,   293,   294,   307,   311,   312,   352,   354,
     542,   568,   579,   580,   588,   589,   590,   591,   593,   595,
     596,   598,   600,   602,   603,   605,   606,   607,   608,   609,
     610,   611,   624,   625,   628,   630,   631,   632,   634,   635,
     636,   637,   638,   652,   653,   654,   656,   657,   659,   674,
     677,   681,   686,   697,   698,   699,   700,   701,   715,   722,
     724,   727,   737,   738,   768,   655,   192,   516,   516,   681,
      89,    92,    98,   511,   512,   513,   349,   559,   562,   455,
     456,   546,   176,   327,   116,   167,   234,   235,   236,   237,
     278,   284,   285,   289,   326,   502,   693,   175,   350,   455,
     369,   369,   356,   356,   369,   175,   655,   118,   119,   534,
     455,   455,   275,   455,   112,   267,   286,   349,   286,   349,
     270,   349,   271,   271,   391,   384,    88,   511,   279,   681,
     655,   655,   452,   565,   267,   670,   267,    27,   267,   305,
     321,   221,   222,   681,   221,   222,   655,   284,   284,   284,
     284,   655,   681,   313,   365,   365,   326,   284,   235,   655,
     655,   655,   655,   655,   655,   681,   655,   235,   167,   234,
     235,   236,   237,   655,   313,   364,   364,   364,   364,   681,
     364,   364,   364,   655,   364,    42,    43,   507,   228,   449,
     681,   681,   303,   179,   179,   179,   349,     5,     6,     7,
      20,    24,    25,    26,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    53,    54,    55,   291,   292,   293,   294,
     349,   643,   651,   672,   674,   675,   676,   677,   105,   191,
     255,   566,   566,   566,   304,   582,   290,   550,   456,   547,
     549,   678,   681,   681,   686,   686,   686,   175,   175,    22,
     175,   629,   629,   629,   629,   629,   175,   605,   175,   127,
     681,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   288,   556,   562,   579,   589,   597,   625,
     681,   589,   175,   607,   607,   175,   175,   175,   607,   686,
     175,   641,   175,   642,   194,   195,   639,   308,   607,   664,
     665,   175,   175,   589,   601,   112,   267,   569,   570,   181,
     328,   633,   681,   192,   179,   182,   183,   184,   185,   186,
     187,   188,   189,   193,   655,   136,   194,   195,   196,   197,
     198,   202,   203,   204,   205,   206,   207,   208,   209,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   268,
     339,   350,   349,   175,   175,   175,   686,   686,   350,   175,
     254,   288,   453,   456,   538,    83,    84,   286,   517,    90,
      91,    93,    99,   349,   558,   328,   568,   655,   235,   655,
     655,   655,   655,   681,   655,   681,   655,   655,   268,   176,
     543,   607,   660,   627,   681,   306,   584,   135,   135,   135,
     175,   176,   541,   543,   545,   565,   534,   131,   131,   507,
     276,   398,   399,   679,   679,   398,   393,   167,   284,   394,
     502,   655,   397,   113,   113,   112,   112,   511,   260,   261,
     415,   174,   259,   279,   401,   117,   118,   120,   121,   122,
     123,   124,   125,   128,   328,   408,   410,   411,   256,   279,
     282,   283,   176,   655,   324,   686,   267,   655,   670,   305,
     174,    87,   328,   407,   409,   411,   365,   365,   365,   365,
     239,   174,   381,   178,   228,   375,   681,   655,   681,   365,
     655,   175,   175,   175,   175,   455,   331,   332,   490,   364,
     235,   655,   655,   655,   655,   507,   107,   655,   655,   655,
     655,   655,   655,   655,   655,   681,   176,    59,   294,   654,
     605,   681,   579,   449,   175,   175,    21,    22,   175,   175,
     175,    38,   175,   641,   642,   295,   297,   299,   300,   301,
     302,   644,   647,   649,   650,   681,   175,   175,   175,   175,
     585,   586,   607,   169,   567,   567,   567,   609,   669,   684,
     305,   583,   579,   179,   349,   570,   179,   350,   579,   658,
     658,    23,   176,   296,   298,   302,   644,   645,   646,   113,
     607,   608,   607,   694,   695,   696,   694,   240,   157,   716,
     742,   154,   156,   740,   240,     3,   728,   608,   116,   739,
     740,   694,   175,   539,   176,   176,   176,   176,   349,   350,
     607,   607,   607,   685,   174,   640,   685,   640,   686,   579,
     308,   662,   663,   310,   664,   666,   607,   543,   661,   349,
     353,    69,   175,   352,   551,   571,   572,   604,   625,   655,
     681,   563,   564,   681,   550,   580,   681,   589,   180,   190,
     191,   589,   599,   594,   607,   594,   594,   594,   175,   175,
     101,   102,   592,   592,   589,   599,   602,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   111,   178,   175,   207,   632,   176,   191,   207,   255,
     607,   667,   681,   667,     8,     9,    10,   207,   681,   288,
     539,   538,    83,    80,    89,    96,    97,   514,   685,   513,
     175,   604,   655,   175,   505,   505,   505,   505,   350,   111,
     686,   176,   349,    14,   609,   670,   245,   370,   176,   349,
     507,   174,   349,   386,   174,   385,   655,   398,   398,   262,
     415,   286,   278,   105,   174,   669,   669,   669,   672,   410,
     230,   284,   285,   403,   404,    68,    89,   402,   404,   284,
     404,   112,    16,   524,   525,   524,   655,   455,   321,   670,
     415,   174,   672,   409,   655,   655,   655,   655,   240,   266,
     107,   376,   681,   254,   377,   228,   112,   175,   420,   421,
     455,   270,   655,   175,   207,   487,   488,   681,   487,   487,
     487,   328,    65,    66,    68,   257,   491,   655,   655,   507,
     507,   507,   507,   505,   505,   505,   505,   507,   507,   507,
     672,   668,   685,   668,    23,   668,   668,   668,   685,    54,
     673,   686,   640,   640,   642,   641,   286,   668,   685,   668,
     668,   668,   349,    52,   227,   587,   105,   565,   565,   565,
     609,   670,   584,   605,   549,   550,   254,   548,   579,   681,
     328,   349,   112,   655,   160,   741,   349,   741,   741,   681,
     703,   175,   607,   717,   718,   719,   349,   608,   681,   725,
     148,   729,   741,   694,   581,   254,   540,   543,   544,   176,
     349,   186,   187,   589,   349,   186,   112,   349,   176,   292,
     686,   176,   686,   650,   309,   607,   662,   666,   607,   319,
     349,   349,   176,   349,   589,   605,   625,   175,   288,   551,
     556,   562,   572,   573,   349,    70,    71,    72,    74,    75,
      77,   168,   552,   554,   328,   574,   681,   574,   575,   575,
     350,   349,   569,   110,   576,   589,   108,   541,   541,   589,
     589,   605,   111,   340,   612,   613,   667,   176,   667,   176,
     350,   349,   350,   681,    94,    95,    89,   505,   176,   506,
     672,   681,   543,   545,   266,   399,   112,   387,   263,   387,
     387,   387,   686,   262,   681,   681,   669,   605,   670,   681,
     655,   681,    91,    90,    91,   681,   655,   230,   424,   427,
     438,   439,   678,   625,   111,   527,   322,   527,   455,   112,
     262,   670,   420,   420,   420,   420,   681,    57,    63,   382,
      20,   273,   689,   690,   376,   236,   184,   423,   424,   425,
     430,   450,   681,   100,   416,   328,   655,   420,   487,   176,
     349,   672,   176,   176,   176,   452,   330,   270,   505,   507,
     176,   176,   176,   176,   349,   176,   349,   176,   349,   302,
     644,   648,   176,   349,   176,   176,   176,   586,   175,   672,
     672,   607,   116,   156,   176,   694,   176,   176,   349,   702,
      84,   254,   607,   743,   744,   746,   747,   748,   271,   349,
     713,   328,   720,    85,   144,   723,   349,   726,   105,   730,
     750,   741,   176,   163,   751,   752,   741,   176,   349,   175,
     175,   175,   607,   607,   607,   607,   303,   543,   309,   319,
     607,   543,   543,   574,   575,   539,   176,   176,   176,   565,
     572,   552,    76,   572,    76,    73,   553,   681,   175,   681,
     564,   105,   109,   578,   686,   176,   176,   192,   192,   105,
     176,   103,   614,   176,   176,   207,   667,   681,   176,   349,
     350,   271,   382,   271,    16,   686,   507,   507,   507,   256,
     279,   681,   258,   274,   287,   447,   132,   133,   426,   672,
     328,   495,   686,   112,   175,   323,   531,   532,   686,   686,
     270,   279,   681,   683,   691,   362,   366,   378,   379,   380,
     383,   388,   400,   405,   504,   625,   655,   176,   349,   174,
     681,   452,   175,   270,   419,   176,    67,    81,    87,   239,
     242,   281,   307,   313,   318,   371,   373,   374,   383,   388,
     400,   405,   461,   464,   466,   467,   468,   472,   474,   480,
     482,   483,   504,   508,   509,   561,   681,   681,   238,   243,
     238,   174,   454,   449,   655,   671,   685,   685,   685,   642,
     685,   577,   656,   681,   176,   176,   176,   141,   607,   704,
     710,   711,   712,   742,   741,   254,   746,   176,   349,   328,
     111,   150,   152,   153,   714,   718,   741,   681,   721,   145,
     145,   176,   608,   741,   127,   151,   608,   731,   732,   733,
     734,   735,   750,   286,   176,   176,   544,   540,   541,   541,
     349,   176,   113,   176,   176,   349,   543,   176,   176,   353,
      76,   572,    16,   270,   555,   572,   175,   683,   577,   579,
     589,   589,   577,   105,    86,   347,   615,   616,   176,   176,
     506,   681,   336,   279,   254,   100,   111,   178,   254,   269,
     269,   456,   129,   134,   254,   428,   429,   432,   433,   435,
     436,   439,   686,   349,   531,   532,   175,   521,   521,   349,
     240,     3,   681,   349,   380,   425,   681,   272,     3,   174,
     422,   449,    78,   239,   546,   240,   469,   470,   655,   284,
     453,   473,   579,   308,   477,   478,   607,   579,   317,   462,
     315,   351,   672,   284,   486,   672,     5,   486,   229,   338,
     492,   176,   176,   176,   176,   176,   349,   350,   175,   349,
     349,   713,   349,   176,   744,   681,   745,   270,   270,   270,
     270,   176,   176,   328,   749,   750,   349,   111,   153,   736,
     164,   176,   176,   176,   607,   607,   607,   574,   572,   456,
     579,   555,   683,   176,   585,   188,   341,   348,   608,   617,
     618,   619,   620,   262,   278,     3,   111,   111,   434,   606,
     456,   456,   130,   434,   432,   111,   178,   229,   274,   277,
     287,   446,   448,   686,    84,   530,   176,   522,   523,   681,
     524,   524,   686,   686,   681,   175,    84,   173,   176,    65,
      85,   256,   240,   568,   458,   681,   175,   175,   579,   310,
     477,   479,   308,   475,   476,   309,   462,   464,   579,   175,
     239,   243,   461,     4,   459,   686,   239,   243,   271,   335,
     336,   493,   494,   113,   497,   498,   656,   681,   607,   705,
     706,   708,   710,   712,   704,   710,   111,    84,   111,   111,
     111,   681,   732,   270,   270,   176,    84,   162,   165,   753,
     754,   759,   176,   176,   176,   176,   618,   333,   344,   344,
     342,   623,   686,   681,   277,   328,   111,   175,   269,   655,
     349,   230,   176,   349,     3,   527,   527,   278,   431,   432,
     173,    86,    86,   458,   350,   471,   607,   453,   309,   462,
     319,   607,   475,   479,   462,   464,   135,   316,   485,   678,
     240,     5,   240,     5,   284,   333,   496,   284,   496,   494,
     337,   308,   500,   176,   349,   328,   707,   349,   156,   749,
     153,   153,   158,   681,   760,     3,   755,   756,    84,   155,
     158,   761,   762,   764,   765,   192,    84,   110,   341,   346,
     655,   131,   579,   455,   686,   523,    60,   528,   528,   681,
     176,   349,   681,   176,   349,   176,   462,   464,   307,   309,
     319,   310,   314,   481,   135,   319,   462,   176,   349,   672,
     458,   459,   458,   459,   495,   495,   495,   495,   333,   334,
     499,   175,   318,   371,   373,   383,   388,   465,   466,   501,
     508,   509,   561,   706,   681,   709,   710,   161,   757,   757,
     158,   681,   767,   756,   766,   763,   764,   341,   348,   608,
     621,   622,   345,   333,   455,   175,   437,   176,   114,   445,
      61,   529,   529,   432,   607,   135,   462,   307,   462,   579,
     319,   319,   319,   678,   681,   681,   681,   681,   579,   317,
     756,   758,   333,   343,   344,   445,   407,    39,    40,    72,
     444,   270,   441,   442,   443,    62,   530,   530,   309,   313,
     315,   672,   176,   463,   443,   176,    65,    66,   270,   442,
     270,   441,   325,   519,   462,   484,   681,   319,   465,    42,
      43,    84,   279,   440,   440,   175,   481,   135,    41,   111,
     254,   520,   670,   176,   349,   670
};

#define yyerrok          (yyerrstatus = 0)
#define yyclearin   (yychar = YYEMPTY)
#define YYEMPTY          (-2)
#define YYEOF       0

#define YYACCEPT    goto yyacceptlab
#define YYABORT          goto yyabortlab
#define YYERROR          goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL      goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                         \
do                                      \
  if (yychar == YYEMPTY && yylen == 1)                 \
    {                                        \
      yychar = (Token);                           \
      yylval = (Value);                           \
      yytoken = YYTRANSLATE (yychar);                  \
      YYPOPSTACK (1);                             \
      goto yybackup;                              \
    }                                        \
  else                                       \
    {                                        \
      yyerror (m, YY_("syntax error: cannot back up")); \
      YYERROR;                               \
    }                                        \
while (YYID (0))


#define YYTERROR    1
#define YYERRCODE   256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                    \
    do                                            \
      if (YYID (N))                                                    \
     {                                       \
       (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;    \
       (Current).first_column = YYRHSLOC (Rhs, 1).first_column;  \
       (Current).last_line    = YYRHSLOC (Rhs, N).last_line;          \
       (Current).last_column  = YYRHSLOC (Rhs, N).last_column;   \
     }                                       \
      else                                        \
     {                                       \
       (Current).first_line   = (Current).last_line   =          \
         YYRHSLOC (Rhs, 0).last_line;                  \
       (Current).first_column = (Current).last_column =          \
         YYRHSLOC (Rhs, 0).last_column;                \
     }                                       \
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)            \
     fprintf (File, "%d.%d-%d.%d",           \
           (Loc).first_line, (Loc).first_column,  \
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

# define YYDPRINTF(Args)           \
do {                          \
  if (yydebug)                     \
    YYFPRINTF Args;                \
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)             \
do {                                           \
  if (yydebug)                                      \
    {                                               \
      YYFPRINTF (stderr, "%s ", Title);                       \
      yy_symbol_print (stderr,                                \
            Type, Value, m); \
      YYFPRINTF (stderr, "\n");                               \
    }                                               \
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

# define YY_STACK_PRINT(Bottom, Top)                   \
do {                                    \
  if (yydebug)                               \
    yy_stack_print ((Bottom), (Top));                  \
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

# define YY_REDUCE_PRINT(Rule)          \
do {                     \
  if (yydebug)                \
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
#ifndef   YYINITDEPTH
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
  yychar = YYEMPTY;      /* Cause a token to be read.  */

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
#line 628 "src/sql/server/sql_parser.y"
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
#line 638 "src/sql/server/sql_parser.y"
    {
                 m->emode = m_prepare; 
                 m->scanner.as = m->scanner.yycur; 
                 m->scanner.key = 0;
               }
    break;

  case 4:
#line 643 "src/sql/server/sql_parser.y"
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
#line 652 "src/sql/server/sql_parser.y"
    {
                 m->emode = m_plan;
                 m->scanner.as = m->scanner.yycur; 
                 m->scanner.key = 0;
               }
    break;

  case 6:
#line 657 "src/sql/server/sql_parser.y"
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
#line 667 "src/sql/server/sql_parser.y"
    {
                 m->emod |= mod_explain;
                 m->scanner.as = m->scanner.yycur; 
                 m->scanner.key = 0;
               }
    break;

  case 8:
#line 672 "src/sql/server/sql_parser.y"
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
#line 682 "src/sql/server/sql_parser.y"
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
#line 691 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 11:
#line 692 "src/sql/server/sql_parser.y"
    {
                 m->emod |= mod_trace;
                 m->scanner.as = m->scanner.yycur; 
                 m->scanner.key = 0;
               }
    break;

  case 12:
#line 697 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 13:
#line 698 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym); YYACCEPT; }
    break;

  case 14:
#line 699 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 15:
#line 700 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 16:
#line 701 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 17:
#line 702 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYABORT; }
    break;

  case 18:
#line 707 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 20:
#line 711 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 21:
#line 715 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 22:
#line 716 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 23:
#line 720 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 24:
#line 721 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 36:
#line 744 "src/sql/server/sql_parser.y"
    { dlist *l = L();
          append_list(l, (yyvsp[(2) - (5)].l));
          append_list(l, (yyvsp[(3) - (5)].l));
          append_symbol(l, (yyvsp[(4) - (5)].sym));
          append_int(l, (yyvsp[(5) - (5)].i_val));
          (yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
    break;

  case 39:
#line 755 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 40:
#line 756 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 41:
#line 761 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[(2) - (2)].l)); }
    break;

  case 42:
#line 762 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 43:
#line 767 "src/sql/server/sql_parser.y"
    { dlist *l = L();
          append_list(l, (yyvsp[(1) - (2)].l) );
          append_type(l, &(yyvsp[(2) - (2)].type) );
          (yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 44:
#line 772 "src/sql/server/sql_parser.y"
    { dlist *l = L();
          append_list(l, (yyvsp[(3) - (4)].l) );
          append_type(l, &(yyvsp[(4) - (4)].type) );
          (yyval.l) = append_symbol((yyvsp[(1) - (4)].l), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 45:
#line 781 "src/sql/server/sql_parser.y"
    { dlist *l = L();
          append_string(l, (yyvsp[(2) - (4)].sval) );
          append_symbol(l, (yyvsp[(4) - (4)].sym) );
          (yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 46:
#line 786 "src/sql/server/sql_parser.y"
    { dlist *l = L();
          append_list(l, (yyvsp[(2) - (4)].l));
          append_symbol(l, (yyvsp[(4) - (4)].sym));
          (yyval.sym) = _symbol_create_list( SQL_SET, l ); }
    break;

  case 47:
#line 791 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            sql_subtype t;
             sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
          append_string(l, sa_strdup(SA, "current_user"));
          append_symbol(l,
               _newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
          (yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 48:
#line 799 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            sql_subtype t;
          sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0 );
          append_string(l, sa_strdup(SA, "current_schema"));
          append_symbol(l,
               _newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
          (yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 49:
#line 807 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            sql_subtype t;
          sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
          append_string(l, sa_strdup(SA, "current_user"));
          append_symbol(l,
               _newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
          (yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 50:
#line 815 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            sql_subtype t;
          sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0);
          append_string(l, sa_strdup(SA, "current_role"));
          append_symbol(l,
               _newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
          (yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 51:
#line 823 "src/sql/server/sql_parser.y"
    { dlist *l = L();
          append_string(l, sa_strdup(SA, "current_timezone"));
          append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
               append_string( L(), sa_strdup(SA, "local_timezone")))));
          (yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 52:
#line 829 "src/sql/server/sql_parser.y"
    { dlist *l = L();
          append_string(l, sa_strdup(SA, "current_timezone"));
          append_symbol(l, (yyvsp[(4) - (4)].sym) );
          (yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 53:
#line 838 "src/sql/server/sql_parser.y"
    { dlist *l = L();
          append_list(l, (yyvsp[(4) - (7)].l));
          append_symbol(l, (yyvsp[(5) - (7)].sym));
          append_symbol(l, (yyvsp[(6) - (7)].sym));
          append_list(l, (yyvsp[(7) - (7)].l));
          append_int(l, (yyvsp[(3) - (7)].bval));
          (yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
    break;

  case 54:
#line 846 "src/sql/server/sql_parser.y"
    { dlist *l = L();
          append_list(l, (yyvsp[(4) - (5)].l));
          append_int(l, (yyvsp[(5) - (5)].i_val));
          append_int(l, (yyvsp[(3) - (5)].bval));
          (yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
    break;

  case 55:
#line 855 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
       append_string((yyval.l), (yyvsp[(1) - (1)].sval) );
       append_string((yyval.l), NULL ); }
    break;

  case 56:
#line 859 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
       append_string((yyval.l), NULL );
       append_string((yyval.l), (yyvsp[(2) - (2)].sval) ); }
    break;

  case 57:
#line 863 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
       append_string((yyval.l), (yyvsp[(1) - (3)].sval) );
       append_string((yyval.l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 59:
#line 872 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 60:
#line 873 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[(4) - (4)].sval) ); }
    break;

  case 61:
#line 877 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 63:
#line 882 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 64:
#line 884 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 70:
#line 890 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 71:
#line 891 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 72:
#line 895 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 73:
#line 896 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_role; }
    break;

  case 74:
#line 901 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(2) - (6)].l));
       append_list(l, (yyvsp[(4) - (6)].l));
       append_int(l, (yyvsp[(5) - (6)].bval));
       append_int(l, (yyvsp[(6) - (6)].i_val));
     (yyval.sym) = _symbol_create_list( SQL_GRANT, l);
     }
    break;

  case 75:
#line 911 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(2) - (6)].l));
       append_list(l, (yyvsp[(4) - (6)].l));
       append_int(l, (yyvsp[(5) - (6)].bval));
       append_int(l, (yyvsp[(6) - (6)].i_val));
     (yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
    break;

  case 76:
#line 920 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 77:
#line 922 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 78:
#line 926 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 79:
#line 927 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 80:
#line 931 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 81:
#line 932 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 82:
#line 937 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 83:
#line 938 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 84:
#line 943 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (6)].l));
       append_list(l, (yyvsp[(5) - (6)].l));
       append_int(l, (yyvsp[(2) - (6)].bval)); /* GRANT OPTION FOR */
       append_int(l, 0);
       append_int(l, (yyvsp[(6) - (6)].i_val));
     (yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
    break;

  case 85:
#line 951 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (6)].l));
       append_list(l, (yyvsp[(5) - (6)].l));
       append_int(l, (yyvsp[(2) - (6)].bval));
       append_int(l, (yyvsp[(6) - (6)].i_val));
     (yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
    break;

  case 86:
#line 960 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 87:
#line 961 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 88:
#line 965 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 89:
#line 966 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 90:
#line 971 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
       append_list((yyval.l), (yyvsp[(1) - (1)].l));
       append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
    break;

  case 91:
#line 975 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
       append_list((yyval.l), (yyvsp[(1) - (3)].l));
       append_symbol((yyval.l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 92:
#line 981 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(L(), (yyvsp[(1) - (1)].i_val)); }
    break;

  case 93:
#line 983 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(append_int(L(), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val)); }
    break;

  case 94:
#line 987 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
    break;

  case 95:
#line 988 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
    break;

  case 96:
#line 992 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(2) - (2)].l)); }
    break;

  case 97:
#line 993 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[(1) - (1)].l)); }
    break;

  case 98:
#line 994 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[(1) - (1)].l)); }
    break;

  case 99:
#line 1005 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 100:
#line 1006 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 102:
#line 1011 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 103:
#line 1013 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 104:
#line 1017 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
    break;

  case 105:
#line 1018 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
    break;

  case 106:
#line 1019 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_TRUNCATE,NULL); }
    break;

  case 107:
#line 1020 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[(2) - (2)].l)); }
    break;

  case 108:
#line 1021 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 109:
#line 1022 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 110:
#line 1023 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
    break;

  case 111:
#line 1027 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 112:
#line 1029 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 113:
#line 1033 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 114:
#line 1034 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 115:
#line 1042 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (6)].l));
       append_symbol(l, (yyvsp[(6) - (6)].sym));
       (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 116:
#line 1047 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (6)].l));
       append_symbol(l, _symbol_create_list( SQL_TABLE, append_list(L(),(yyvsp[(6) - (6)].l))));
       (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 117:
#line 1052 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (5)].l));
       append_symbol(l, (yyvsp[(5) - (5)].sym));
       (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 118:
#line 1057 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (5)].l));
       append_symbol(l, (yyvsp[(5) - (5)].sym));
       (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 119:
#line 1062 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (6)].l));
       append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
       (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 120:
#line 1067 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (6)].l));
       append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
       (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 121:
#line 1072 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (6)].l));
       append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
       (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 122:
#line 1077 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(3) - (4)].sval));
       append_list(l, (yyvsp[(4) - (4)].l));
       (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 123:
#line 1082 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(3) - (6)].sval));
       append_string(l, (yyvsp[(6) - (6)].sval));
       (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
    break;

  case 124:
#line 1087 "src/sql/server/sql_parser.y"
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
#line 1099 "src/sql/server/sql_parser.y"
    { dlist * l = L();
                      append_string(l, (yyvsp[(4) - (4)].sval));
                      append_string(l, NULL);
                      append_int(l, (yyvsp[(2) - (4)].i_val));
                      append_string(l, NULL);
                      (yyval.l) = l; }
    break;

  case 126:
#line 1105 "src/sql/server/sql_parser.y"
    { dlist * l = L();
                      append_string(l, NULL);
                      append_string(l, (yyvsp[(3) - (3)].sval));
                      append_int(l, 0);
                      append_string(l, NULL);
                      (yyval.l) = l; }
    break;

  case 127:
#line 1112 "src/sql/server/sql_parser.y"
    { dlist * l = L();
                      append_string(l, (yyvsp[(4) - (7)].sval));
                      append_string(l, (yyvsp[(7) - (7)].sval));
                      append_int(l, (yyvsp[(2) - (7)].i_val));
                      append_string(l, NULL);
                      (yyval.l) = l; }
    break;

  case 128:
#line 1122 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(2) - (5)].sval));
       append_symbol(l, (yyvsp[(5) - (5)].sym));
       (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
    break;

  case 129:
#line 1127 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(2) - (4)].sval));
       (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
    break;

  case 130:
#line 1131 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(2) - (5)].sval));
       (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
    break;

  case 131:
#line 1135 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[(2) - (4)].sval)); }
    break;

  case 132:
#line 1137 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(2) - (5)].sval));
       if (!strlen((yyvsp[(5) - (5)].sval)))
          append_string(l, NULL);
       else
          append_string(l, (yyvsp[(5) - (5)].sval));
       (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 133:
#line 1145 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(2) - (5)].sval));
       append_string(l, NULL);
       (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 134:
#line 1153 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(2) - (3)].sval) );
       append_int(l, (yyvsp[(3) - (3)].i_val) );
       (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
    break;

  case 135:
#line 1158 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(2) - (3)].sval) );
       append_int(l, (yyvsp[(3) - (3)].i_val) );
       (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
    break;

  case 136:
#line 1163 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(2) - (3)].l) );
       append_int(l, (yyvsp[(3) - (3)].i_val) );
       append_int(l, 0);
       append_int(l, FALSE ); /* no if exists check */
       (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 137:
#line 1172 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 138:
#line 1173 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 139:
#line 1177 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 140:
#line 1178 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 141:
#line 1179 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 147:
#line 1201 "src/sql/server/sql_parser.y"
    {
          dlist *l = L();
          append_list(l, (yyvsp[(3) - (4)].l));
          append_list(l, (yyvsp[(4) - (4)].l));
          append_int(l, 0); /* to be dropped */
          (yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
     }
    break;

  case 148:
#line 1212 "src/sql/server/sql_parser.y"
    {
          dlist *l = L();
          append_list(l, (yyvsp[(3) - (3)].l));
          (yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
     }
    break;

  case 149:
#line 1229 "src/sql/server/sql_parser.y"
    {
          dlist *l = L();
          append_list(l, (yyvsp[(3) - (4)].l));
          append_list(l, (yyvsp[(4) - (4)].l)); 
          (yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
     }
    break;

  case 150:
#line 1238 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 151:
#line 1239 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 152:
#line 1243 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 153:
#line 1244 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 154:
#line 1248 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 155:
#line 1249 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 156:
#line 1250 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 157:
#line 1254 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 158:
#line 1255 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
    break;

  case 159:
#line 1256 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[(3) - (3)].l_val)));  }
    break;

  case 160:
#line 1257 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[(3) - (3)].sym)));  }
    break;

  case 161:
#line 1258 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 162:
#line 1262 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 163:
#line 1263 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 164:
#line 1264 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
    break;

  case 165:
#line 1265 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 166:
#line 1266 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
    break;

  case 167:
#line 1267 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 168:
#line 1268 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
    break;

  case 169:
#line 1269 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
    break;

  case 170:
#line 1277 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(4) - (9)].sval));
       append_int(l, (yyvsp[(2) - (9)].i_val));
       append_list(l, (yyvsp[(6) - (9)].l));
       append_list(l, (yyvsp[(8) - (9)].l));
       (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
    break;

  case 171:
#line 1286 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 172:
#line 1287 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ordered_idx; }
    break;

  case 173:
#line 1288 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imprints_idx; }
    break;

  case 174:
#line 1289 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 175:
#line 1310 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(2) - (3)].sval));
       append_int(l, (yyvsp[(3) - (3)].i_val));
       (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
    break;

  case 176:
#line 1315 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(2) - (10)].sval));
       append_string(l, (yyvsp[(6) - (10)].sval));
       append_string(l, (yyvsp[(8) - (10)].sval));
       append_string(l, (yyvsp[(10) - (10)].sval));
       append_int(l, (yyvsp[(4) - (10)].i_val));
       (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
    break;

  case 177:
#line 1325 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 178:
#line 1326 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 179:
#line 1327 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
    break;

  case 180:
#line 1331 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 181:
#line 1332 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 182:
#line 1337 "src/sql/server/sql_parser.y"
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
#line 1349 "src/sql/server/sql_parser.y"
    {
      dlist *l = L();
      append_list(l, (yyvsp[(3) - (6)].l));
      append_symbol(l, (yyvsp[(6) - (6)].sym));
      (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE_LOADER, l);
    }
    break;

  case 184:
#line 1356 "src/sql/server/sql_parser.y"
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
#line 1367 "src/sql/server/sql_parser.y"
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
#line 1378 "src/sql/server/sql_parser.y"
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
#line 1392 "src/sql/server/sql_parser.y"
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
#line 1403 "src/sql/server/sql_parser.y"
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
#line 1418 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 190:
#line 1419 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 191:
#line 1420 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 192:
#line 1421 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 193:
#line 1422 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 194:
#line 1423 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 195:
#line 1427 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_COMMIT; }
    break;

  case 196:
#line 1428 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DELETE; }
    break;

  case 197:
#line 1429 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_PRESERVE; }
    break;

  case 198:
#line 1430 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DROP; }
    break;

  case 199:
#line 1434 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[(2) - (3)].l)); }
    break;

  case 200:
#line 1435 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[(1) - (1)].l)); }
    break;

  case 201:
#line 1443 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (4)].l));
                 append_symbol((yyval.l), (yyvsp[(3) - (4)].sym)); 
                 append_int((yyval.l), (yyvsp[(4) - (4)].i_val)); }
    break;

  case 202:
#line 1449 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 203:
#line 1450 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 204:
#line 1451 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 205:
#line 1456 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 206:
#line 1458 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 212:
#line 1465 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 213:
#line 1466 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 214:
#line 1471 "src/sql/server/sql_parser.y"
    {
               dlist *l = L();
               append_string(l, (yyvsp[(1) - (3)].sval));
               append_type(l, &(yyvsp[(2) - (3)].type));
               append_list(l, (yyvsp[(3) - (3)].l));
               (yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
          }
    break;

  case 215:
#line 1479 "src/sql/server/sql_parser.y"
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
#line 1531 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 218:
#line 1537 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 219:
#line 1539 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 220:
#line 1545 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(1) - (6)].sval) );
       append_list(l, (yyvsp[(5) - (6)].l) );
       (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
    break;

  case 221:
#line 1553 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 222:
#line 1555 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 226:
#line 1561 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 227:
#line 1565 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 228:
#line 1571 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(1) - (2)].sval) );
       append_symbol(l, (yyvsp[(2) - (2)].sym) );
       (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 229:
#line 1579 "src/sql/server/sql_parser.y"
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
#line 1608 "src/sql/server/sql_parser.y"
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
#line 1645 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 232:
#line 1646 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 233:
#line 1653 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(1) - (2)].sval) );
       append_symbol(l, (yyvsp[(2) - (2)].sym) );
       (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 234:
#line 1662 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 235:
#line 1663 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 236:
#line 1667 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 237:
#line 1668 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 238:
#line 1669 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 239:
#line 1670 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 240:
#line 1671 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 241:
#line 1675 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(3) - (3)].i_val) << 8); }
    break;

  case 242:
#line 1679 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 243:
#line 1683 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
    break;

  case 244:
#line 1684 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 245:
#line 1685 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 246:
#line 1686 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 247:
#line 1687 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 248:
#line 1691 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 249:
#line 1692 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 250:
#line 1693 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 251:
#line 1694 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 252:
#line 1698 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 253:
#line 1699 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 254:
#line 1703 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
    break;

  case 255:
#line 1704 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
    break;

  case 256:
#line 1705 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
    break;

  case 257:
#line 1706 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
    break;

  case 258:
#line 1709 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, (yyvsp[(2) - (5)].l) );
                 append_list(l, (yyvsp[(3) - (5)].l) );
                 append_int(l, (yyvsp[(4) - (5)].i_val) );
                 append_int(l, (yyvsp[(5) - (5)].i_val) );
                 (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 260:
#line 1722 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[(2) - (2)].l)); }
    break;

  case 261:
#line 1724 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[(3) - (3)].l)); }
    break;

  case 262:
#line 1728 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, (yyvsp[(5) - (8)].l) );
                 append_list(l, (yyvsp[(3) - (8)].l) );
                 append_list(l, (yyvsp[(6) - (8)].l) );
                 append_int(l, (yyvsp[(7) - (8)].i_val) );
                 append_int(l, (yyvsp[(8) - (8)].i_val) );
                 (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 263:
#line 1740 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 264:
#line 1745 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 265:
#line 1747 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 266:
#line 1751 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 267:
#line 1756 "src/sql/server/sql_parser.y"
    {  dlist *l = L();
       append_list(l, (yyvsp[(3) - (7)].l));
       append_list(l, (yyvsp[(4) - (7)].l));
       append_symbol(l, (yyvsp[(6) - (7)].sym));
       append_int(l, (yyvsp[(7) - (7)].bval));
       append_int(l, TRUE);   /* persistent view */
       append_int(l, (yyvsp[(1) - (7)].bval));
       (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
     }
    break;

  case 269:
#line 1769 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 272:
#line 1778 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 273:
#line 1779 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 274:
#line 1783 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 276:
#line 1788 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 277:
#line 1793 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                    append_list(l, (yyvsp[(3) - (6)].l));
                    append_string(l, (yyvsp[(6) - (6)].sval));
                 (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
    break;

  case 278:
#line 1800 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 281:
#line 1815 "src/sql/server/sql_parser.y"
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
#line 1829 "src/sql/server/sql_parser.y"
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
#line 1843 "src/sql/server/sql_parser.y"
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
#line 1893 "src/sql/server/sql_parser.y"
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
#line 1908 "src/sql/server/sql_parser.y"
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
#line 1922 "src/sql/server/sql_parser.y"
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
#line 1971 "src/sql/server/sql_parser.y"
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
#line 1984 "src/sql/server/sql_parser.y"
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
#line 1996 "src/sql/server/sql_parser.y"
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
#line 2019 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[(1) - (1)].sym)); }
    break;

  case 291:
#line 2023 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(2) - (5)].l),(yyvsp[(3) - (5)].sym)); }
    break;

  case 292:
#line 2027 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(3) - (6)].l),(yyvsp[(4) - (6)].sym)); }
    break;

  case 293:
#line 2042 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 294:
#line 2044 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 295:
#line 2048 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 296:
#line 2050 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 323:
#line 2098 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 324:
#line 2102 "src/sql/server/sql_parser.y"
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[(2) - (2)].sym));}
    break;

  case 325:
#line 2107 "src/sql/server/sql_parser.y"
    { dlist *l = L(); 
            append_list( l, (yyvsp[(1) - (4)].l));
            append_list( l, (yyvsp[(3) - (4)].l));
            assert(0);
            (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
          }
    break;

  case 327:
#line 2118 "src/sql/server/sql_parser.y"
    {(yyval.l) = L();}
    break;

  case 328:
#line 2119 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 329:
#line 2121 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 330:
#line 2126 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[(2) - (2)].sym)); }
    break;

  case 333:
#line 2133 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[(3) - (4)].sym)); }
    break;

  case 334:
#line 2138 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
             append_list(
              append_list(
               append_symbol(
                L(),(yyvsp[(2) - (6)].sym)),(yyvsp[(3) - (6)].l)),(yyvsp[(4) - (6)].l))); }
    break;

  case 335:
#line 2144 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
             append_list(
              append_list(
               L(),(yyvsp[(2) - (5)].l)),(yyvsp[(3) - (5)].l))); }
    break;

  case 336:
#line 2152 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
                  append_list(
                   append_symbol(
                    L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 337:
#line 2160 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 338:
#line 2162 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 339:
#line 2167 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
                  append_list(
                   append_symbol(
                    L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 340:
#line 2175 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 341:
#line 2177 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 342:
#line 2181 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 343:
#line 2182 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 344:
#line 2192 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(2) - (7)].sym));
            append_list(l, (yyvsp[(4) - (7)].l));
            append_symbol(l, (yyvsp[(5) - (7)].sym));
            (yyval.sym) = _symbol_create_list(SQL_IF, l);
          }
    break;

  case 345:
#line 2203 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 346:
#line 2205 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[(2) - (2)].l)); }
    break;

  case 347:
#line 2208 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(2) - (5)].sym));
            append_list(l, (yyvsp[(4) - (5)].l));
            append_symbol(l, (yyvsp[(5) - (5)].sym));
            { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
          }
    break;

  case 348:
#line 2222 "src/sql/server/sql_parser.y"
    { dlist *l;
            char *label = (yyvsp[(1) - (8)].sval)?(yyvsp[(1) - (8)].sval):(yyvsp[(8) - (8)].sval);
            if ((yyvsp[(1) - (8)].sval) && (yyvsp[(8) - (8)].sval) && strcmp((yyvsp[(1) - (8)].sval), (yyvsp[(8) - (8)].sval)) != 0) {
               (yyval.sym) = NULL;
               yyerror(m, "WHILE: labels should match");
               YYABORT;
            }
            l = L();
            append_symbol(l, (yyvsp[(3) - (8)].sym)); /* condition */
            append_list(l, (yyvsp[(5) - (8)].l)); /* statements */
            append_string(l, label);
            (yyval.sym) = _symbol_create_list(SQL_WHILE, l);
          }
    break;

  case 349:
#line 2238 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 351:
#line 2243 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 353:
#line 2249 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
                      append_string((yyval.l), (yyvsp[(1) - (2)].sval));
                      append_type((yyval.l), &(yyvsp[(2) - (2)].type));
                    }
    break;

  case 354:
#line 2254 "src/sql/server/sql_parser.y"
    { 
                      append_string((yyval.l), (yyvsp[(3) - (4)].sval));
                      append_type((yyval.l), &(yyvsp[(4) - (4)].type));
                    }
    break;

  case 355:
#line 2262 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(3) - (4)].l)); }
    break;

  case 356:
#line 2264 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(1) - (1)].type))); }
    break;

  case 358:
#line 2269 "src/sql/server/sql_parser.y"
    { dlist *vararg = L();
                 append_string(vararg, "*");
                 append_type(vararg, NULL);
                 (yyval.l) = append_list(L(), vararg); }
    break;

  case 359:
#line 2273 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 360:
#line 2278 "src/sql/server/sql_parser.y"
    { dlist *p = L();
                 append_string(p, (yyvsp[(3) - (4)].sval));
                 append_type(p, &(yyvsp[(4) - (4)].type));
                 (yyval.l) = append_list((yyvsp[(1) - (4)].l), p); }
    break;

  case 361:
#line 2283 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 dlist *p = L();
                 append_string(p, (yyvsp[(1) - (2)].sval));
                 append_type(p, &(yyvsp[(2) - (2)].type));
                 (yyval.l) = append_list(l, p); }
    break;

  case 362:
#line 2333 "src/sql/server/sql_parser.y"
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
#line 2346 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 364:
#line 2347 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 365:
#line 2352 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
    break;

  case 366:
#line 2353 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
    break;

  case 367:
#line 2354 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TRUNCATE, NULL); }
    break;

  case 368:
#line 2355 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
    break;

  case 369:
#line 2356 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[(3) - (3)].l)); }
    break;

  case 370:
#line 2360 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 371:
#line 2361 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 372:
#line 2365 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 373:
#line 2367 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].l)); }
    break;

  case 374:
#line 2372 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 375:
#line 2373 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 376:
#line 2374 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 377:
#line 2375 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 382:
#line 2390 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
       append_int((yyval.l), (yyvsp[(1) - (3)].i_val));
       append_symbol((yyval.l), (yyvsp[(2) - (3)].sym));
       append_list((yyval.l), (yyvsp[(3) - (3)].l));
     }
    break;

  case 383:
#line 2397 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 384:
#line 2398 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 385:
#line 2402 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 386:
#line 2403 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 387:
#line 2407 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 388:
#line 2408 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 389:
#line 2413 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 390:
#line 2416 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 391:
#line 2421 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(2) - (3)].l) );     
       append_list(l, (yyvsp[(3) - (3)].l) );
       append_int(l, F_FUNC );
       (yyval.l) = l; }
    break;

  case 392:
#line 2427 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (4)].l) );     
       append_list(l, (yyvsp[(4) - (4)].l) );
       append_int(l, F_FILT );
       (yyval.l) = l; }
    break;

  case 393:
#line 2433 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(2) - (3)].l) );     
       append_list(l, (yyvsp[(3) - (3)].l) );
       append_int(l, F_AGGR );
       (yyval.l) = l; }
    break;

  case 394:
#line 2439 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(2) - (3)].l) );     
       append_list(l, (yyvsp[(3) - (3)].l) );
       append_int(l, F_PROC );
       (yyval.l) = l; }
    break;

  case 395:
#line 2445 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(2) - (3)].l) );     
       append_list(l, (yyvsp[(3) - (3)].l) );
       append_int(l, F_LOADER );
       (yyval.l) = l; }
    break;

  case 396:
#line 2454 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (4)].l) );
       append_list(l, (yyvsp[(4) - (4)].l) );
       append_int(l, F_FUNC );
       append_int(l, (yyvsp[(2) - (4)].bval) );
       (yyval.l) = l; }
    break;

  case 397:
#line 2461 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(4) - (5)].l) );
       append_list(l, (yyvsp[(5) - (5)].l) );
       append_int(l, F_FILT );
       append_int(l, (yyvsp[(3) - (5)].bval) );
       (yyval.l) = l; }
    break;

  case 398:
#line 2468 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (4)].l) );
       append_list(l, (yyvsp[(4) - (4)].l) );
       append_int(l, F_AGGR );
       append_int(l, (yyvsp[(2) - (4)].bval) );
       (yyval.l) = l; }
    break;

  case 399:
#line 2475 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (4)].l) );
       append_list(l, (yyvsp[(4) - (4)].l) );
       append_int(l, F_PROC );
       append_int(l, (yyvsp[(2) - (4)].bval) );
       (yyval.l) = l; }
    break;

  case 400:
#line 2482 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (4)].l) );
       append_list(l, (yyvsp[(4) - (4)].l) );
       append_int(l, F_LOADER );
       append_int(l, (yyvsp[(2) - (4)].bval) );
       (yyval.l) = l; }
    break;

  case 401:
#line 2492 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(4) - (5)].l) );
       append_int(l, (yyvsp[(5) - (5)].i_val) );
       append_int(l, (yyvsp[(3) - (5)].bval) );
       (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 402:
#line 2498 "src/sql/server/sql_parser.y"
    { dlist *l = (yyvsp[(2) - (3)].l);
       append_int(l, 0 ); /* not all */
       append_int(l, (yyvsp[(3) - (3)].i_val) );
       (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 403:
#line 2503 "src/sql/server/sql_parser.y"
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
#line 2512 "src/sql/server/sql_parser.y"
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
#line 2521 "src/sql/server/sql_parser.y"
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
#line 2530 "src/sql/server/sql_parser.y"
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
#line 2539 "src/sql/server/sql_parser.y"
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
#line 2548 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(4) - (5)].l) );
       append_int(l, (yyvsp[(5) - (5)].i_val) );
       append_int(l, (yyvsp[(3) - (5)].bval) );
       (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
    break;

  case 409:
#line 2554 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (4)].l) );
       append_int(l, (yyvsp[(4) - (4)].i_val) );
       (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
    break;

  case 410:
#line 2558 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 411:
#line 2559 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 412:
#line 2560 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[(3) - (3)].l) ); }
    break;

  case 413:
#line 2562 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(4) - (4)].l) );
       append_int(l, (yyvsp[(3) - (4)].bval) );
       (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, l );
     }
    break;

  case 414:
#line 2570 "src/sql/server/sql_parser.y"
    {(yyval.l) = NULL;}
    break;

  case 415:
#line 2571 "src/sql/server/sql_parser.y"
    {(yyval.l) = (yyvsp[(2) - (3)].l);}
    break;

  case 416:
#line 2572 "src/sql/server/sql_parser.y"
    {(yyval.l) = L(); }
    break;

  case 417:
#line 2576 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_type(l, &(yyvsp[(1) - (1)].type) );
                      (yyval.l)= l; }
    break;

  case 418:
#line 2579 "src/sql/server/sql_parser.y"
    { append_type((yyvsp[(3) - (3)].l), &(yyvsp[(1) - (3)].type));
                      (yyval.l) = (yyvsp[(3) - (3)].l); }
    break;

  case 419:
#line 2584 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 420:
#line 2585 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 421:
#line 2586 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 429:
#line 2606 "src/sql/server/sql_parser.y"
    {
       (yyval.sym) = (yyvsp[(1) - (1)].sym);
       m->type = Q_TRANS;                         }
    break;

  case 430:
#line 2613 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[(3) - (3)].bval));  }
    break;

  case 431:
#line 2615 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[(2) - (2)].sval)); }
    break;

  case 432:
#line 2617 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[(3) - (3)].sval)); }
    break;

  case 433:
#line 2619 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
             append_string(
               append_int(L(), (yyvsp[(3) - (4)].bval)), (yyvsp[(4) - (4)].sval) )); }
    break;

  case 434:
#line 2623 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 435:
#line 2625 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(4) - (4)].i_val)); }
    break;

  case 436:
#line 2627 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 437:
#line 2631 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; }
    break;

  case 439:
#line 2637 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 440:
#line 2639 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(1) - (3)].i_val) | (yyvsp[(3) - (3)].i_val)); }
    break;

  case 441:
#line 2644 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_readonly; }
    break;

  case 442:
#line 2645 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_writable; }
    break;

  case 443:
#line 2646 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_serializable; }
    break;

  case 444:
#line 2647 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; /* not supported */ }
    break;

  case 449:
#line 2658 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 450:
#line 2659 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 451:
#line 2663 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 452:
#line 2664 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 453:
#line 2665 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 454:
#line 2669 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 455:
#line 2670 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 456:
#line 2675 "src/sql/server/sql_parser.y"
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
#line 2689 "src/sql/server/sql_parser.y"
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
#line 2703 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(4) - (6)].l));
       append_symbol(l, (yyvsp[(6) - (6)].sym));
       (yyval.sym) = _symbol_create_list( SQL_COPYLOADER, l ); }
    break;

  case 459:
#line 2708 "src/sql/server/sql_parser.y"
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
#line 2719 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(2) - (6)].sym));
       append_string(l, (yyvsp[(4) - (6)].sval));
       append_list(l, (yyvsp[(5) - (6)].l));
       append_string(l, (yyvsp[(6) - (6)].sval));
       (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 461:
#line 2726 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(2) - (6)].sym));
       append_string(l, NULL);
       append_list(l, (yyvsp[(5) - (6)].l));
       append_string(l, (yyvsp[(6) - (6)].sval));
       (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 462:
#line 2737 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 463:
#line 2738 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 464:
#line 2743 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(L(), (yyvsp[(1) - (1)].l_val)); }
    break;

  case 465:
#line 2745 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l_val)); }
    break;

  case 466:
#line 2750 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 467:
#line 2751 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 468:
#line 2755 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 469:
#line 2756 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 470:
#line 2761 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_string(l, (yyvsp[(1) - (1)].sval) );
                 (yyval.l) = l; }
    break;

  case 471:
#line 2765 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_string(l, (yyvsp[(1) - (2)].sval) );
                 append_string(l, (yyvsp[(2) - (2)].sval) );
                 (yyval.l) = l; }
    break;

  case 472:
#line 2773 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_string(l, sa_strdup(SA, "|"));
                      append_string(l, sa_strdup(SA, "\\n"));
                      (yyval.l) = l; }
    break;

  case 473:
#line 2778 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_string(l, (yyvsp[(3) - (3)].sval));
                      append_string(l, sa_strdup(SA, "\\n"));
                      (yyval.l) = l; }
    break;

  case 474:
#line 2783 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_string(l, (yyvsp[(3) - (5)].sval));
                      append_string(l, (yyvsp[(5) - (5)].sval));
                      (yyval.l) = l; }
    break;

  case 475:
#line 2788 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_string(l, (yyvsp[(3) - (7)].sval));
                      append_string(l, (yyvsp[(5) - (7)].sval));
                      append_string(l, sql2str((yyvsp[(7) - (7)].sval)));
                      (yyval.l) = l; }
    break;

  case 476:
#line 2796 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 477:
#line 2797 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 478:
#line 2801 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 479:
#line 2802 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (2)].l_val)), 0); }
    break;

  case 480:
#line 2803 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[(2) - (2)].l_val)); }
    break;

  case 481:
#line 2805 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(3) - (4)].l_val)); }
    break;

  case 482:
#line 2807 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(4) - (4)].l_val)); }
    break;

  case 483:
#line 2811 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 484:
#line 2812 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 485:
#line 2816 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 486:
#line 2817 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 487:
#line 2821 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 488:
#line 2822 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 489:
#line 2826 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 490:
#line 2827 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 491:
#line 2831 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 492:
#line 2832 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 493:
#line 2836 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 494:
#line 2838 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 495:
#line 2844 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (4)].l));
       append_symbol(l, (yyvsp[(4) - (4)].sym));
       (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
    break;

  case 496:
#line 2851 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 497:
#line 2852 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 498:
#line 2853 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 499:
#line 2858 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (5)].l) );
       append_int(l, (yyvsp[(4) - (5)].i_val) );
       append_int(l, (yyvsp[(5) - (5)].i_val) );
       (yyval.sym) = _symbol_create_list( SQL_TRUNCATE, l ); }
    break;

  case 500:
#line 2864 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(2) - (4)].l) );
       append_int(l, (yyvsp[(3) - (4)].i_val) );
       append_int(l, (yyvsp[(4) - (4)].i_val) );
       (yyval.sym) = _symbol_create_list( SQL_TRUNCATE, l ); }
    break;

  case 501:
#line 2874 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(2) - (6)].l));
       append_list(l, (yyvsp[(4) - (6)].l));
       append_symbol(l, (yyvsp[(5) - (6)].sym));
       append_symbol(l, (yyvsp[(6) - (6)].sym));
       (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
    break;

  case 502:
#line 2916 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (4)].l));
       append_list(l, NULL);
       append_symbol(l, (yyvsp[(4) - (4)].sym));
       (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 503:
#line 2924 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (5)].l));
       append_list(l, (yyvsp[(4) - (5)].l));
       append_symbol(l, (yyvsp[(5) - (5)].sym));
       (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 504:
#line 2933 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 505:
#line 2935 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 506:
#line 2937 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(2) - (2)].l)); }
    break;

  case 508:
#line 2943 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(2) - (3)].l)); }
    break;

  case 509:
#line 2945 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (5)].l), (yyvsp[(4) - (5)].l)); }
    break;

  case 510:
#line 2949 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 511:
#line 2951 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 512:
#line 2955 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 513:
#line 2957 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 514:
#line 2962 "src/sql/server/sql_parser.y"
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
#line 2988 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
    break;

  case 520:
#line 2997 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 521:
#line 2998 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 522:
#line 2999 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 523:
#line 3003 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 524:
#line 3005 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 525:
#line 3009 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
    break;

  case 526:
#line 3014 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(3) - (3)].sym));
       append_string(l, (yyvsp[(1) - (3)].sval));
       (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 527:
#line 3019 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(3) - (3)].sym) );
       append_string(l, (yyvsp[(1) - (3)].sval));
       (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 528:
#line 3024 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(3) - (3)].sym));
       append_list(l, (yyvsp[(1) - (3)].l));
       (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
    break;

  case 529:
#line 3031 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 530:
#line 3032 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 531:
#line 3039 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 532:
#line 3041 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(1) - (4)].sym));
       append_symbol(l, (yyvsp[(4) - (4)].sym));
       (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
    break;

  case 533:
#line 3046 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(1) - (4)].sym));
       append_int(l, 0);
       append_int(l, 4);
       append_symbol(l, (yyvsp[(3) - (4)].sym));
       append_symbol(l, (yyvsp[(4) - (4)].sym));
       (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
    break;

  case 534:
#line 3054 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(1) - (5)].sym));
       append_int(l, 0);
       append_int(l, (yyvsp[(2) - (5)].i_val));
       append_symbol(l, (yyvsp[(4) - (5)].sym));
       append_symbol(l, (yyvsp[(5) - (5)].sym));
       (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 535:
#line 3062 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(1) - (5)].sym));
       append_int(l, 1);
       append_int(l, (yyvsp[(3) - (5)].i_val));
       append_symbol(l, (yyvsp[(5) - (5)].sym));
       append_symbol(l, NULL);
       (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 536:
#line 3072 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 537:
#line 3073 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 538:
#line 3074 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (2)].i_val); }
    break;

  case 539:
#line 3078 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 540:
#line 3079 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 541:
#line 3083 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 542:
#line 3084 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 543:
#line 3085 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 544:
#line 3089 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 545:
#line 3091 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[(2) - (2)].l)); }
    break;

  case 547:
#line 3115 "src/sql/server/sql_parser.y"
    {
          dlist *l = L();
          append_list(l, (yyvsp[(2) - (3)].l));
          append_symbol(l, (yyvsp[(3) - (3)].sym));
          (yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
     }
    break;

  case 548:
#line 3124 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 549:
#line 3125 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 550:
#line 3130 "src/sql/server/sql_parser.y"
    {  dlist *l = L();
       append_list(l, append_string(L(), (yyvsp[(1) - (4)].sval)));
       append_list(l, (yyvsp[(2) - (4)].l));
       append_symbol(l, (yyvsp[(4) - (4)].sym));
       append_int(l, FALSE);  /* no with check */
       append_int(l, FALSE);  /* inlined view  (ie not persistent) */
       append_int(l, FALSE); /* no replace clause */
       (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
     }
    break;

  case 554:
#line 3154 "src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (4)].bval), (yyvsp[(3) - (4)].l), NULL,
          (yyvsp[(4) - (4)].l)->h->data.sym,
          (yyvsp[(4) - (4)].l)->h->next->data.sym,
          (yyvsp[(4) - (4)].l)->h->next->next->data.sym,
          (yyvsp[(4) - (4)].l)->h->next->next->next->data.sym,
          NULL, NULL, NULL, NULL, NULL);
     }
    break;

  case 555:
#line 3165 "src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (6)].bval), (yyvsp[(3) - (6)].l), (yyvsp[(5) - (6)].l),
          (yyvsp[(6) - (6)].l)->h->data.sym,
          (yyvsp[(6) - (6)].l)->h->next->data.sym,
          (yyvsp[(6) - (6)].l)->h->next->next->data.sym,
          (yyvsp[(6) - (6)].l)->h->next->next->next->data.sym,
          NULL, NULL, NULL, NULL, NULL);
     }
    break;

  case 556:
#line 3176 "src/sql/server/sql_parser.y"
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
#line 3206 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 558:
#line 3208 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 560:
#line 3218 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(1) - (5)].sym));
       append_int(l, (yyvsp[(3) - (5)].bval));
       append_list(l, (yyvsp[(4) - (5)].l));
       append_symbol(l, (yyvsp[(5) - (5)].sym));
       (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
    break;

  case 561:
#line 3227 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(1) - (5)].sym));
       append_int(l, (yyvsp[(3) - (5)].bval));
       append_list(l, (yyvsp[(4) - (5)].l));
       append_symbol(l, (yyvsp[(5) - (5)].sym));
       (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
    break;

  case 562:
#line 3236 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(1) - (5)].sym));
       append_int(l, (yyvsp[(3) - (5)].bval));
       append_list(l, (yyvsp[(4) - (5)].l));
       append_symbol(l, (yyvsp[(5) - (5)].sym));
       (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
    break;

  case 563:
#line 3242 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 565:
#line 3247 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 566:
#line 3248 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 567:
#line 3249 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 568:
#line 3254 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 569:
#line 3256 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 570:
#line 3258 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(4) - (5)].l); }
    break;

  case 572:
#line 3268 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
       append_symbol((yyval.l), (yyvsp[(1) - (4)].sym));
       append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
       append_symbol((yyval.l), (yyvsp[(3) - (4)].sym));
       append_symbol((yyval.l), (yyvsp[(4) - (4)].sym)); }
    break;

  case 573:
#line 3276 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 574:
#line 3277 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[(2) - (2)].l)); }
    break;

  case 575:
#line 3281 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 576:
#line 3283 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 577:
#line 3287 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_list(l, (yyvsp[(1) - (2)].l));
                      append_symbol(l, (yyvsp[(2) - (2)].sym));
                      (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 578:
#line 3292 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_symbol(l, (yyvsp[(1) - (2)].sym));
                      append_symbol(l, (yyvsp[(2) - (2)].sym));
                      append_int(l, 0);
                      (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 579:
#line 3298 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_symbol(l, (yyvsp[(2) - (3)].sym));
                      append_symbol(l, (yyvsp[(3) - (3)].sym));
                      append_int(l, 1);
                      (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 580:
#line 3304 "src/sql/server/sql_parser.y"
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
#line 3314 "src/sql/server/sql_parser.y"
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
#line 3326 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL;
                      yyerror(m, "subquery table reference needs alias, use AS xxx");
                      YYABORT;
                    }
    break;

  case 583:
#line 3330 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym);
                      append_symbol((yyvsp[(1) - (1)].sym)->data.lval, NULL); }
    break;

  case 584:
#line 3334 "src/sql/server/sql_parser.y"
    { m->caching = 0; }
    break;

  case 585:
#line 3336 "src/sql/server/sql_parser.y"
    {
          dlist *op = L();

          append_symbol(op, (yyvsp[(3) - (5)].sym));
          append_symbol(op, (yyvsp[(5) - (5)].sym));
          (yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
     }
    break;

  case 586:
#line 3347 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_string(l, (yyvsp[(2) - (5)].sval));
                      append_list(l, (yyvsp[(4) - (5)].l));
                      (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 587:
#line 3352 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_string(l, (yyvsp[(2) - (2)].sval));
                      append_list(l, NULL);
                      (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 588:
#line 3357 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_string(l, (yyvsp[(1) - (4)].sval));
                      append_list(l, (yyvsp[(3) - (4)].l));
                      (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 589:
#line 3362 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_string(l, (yyvsp[(1) - (1)].sval));
                      append_list(l, NULL);
                      (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 590:
#line 3369 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 591:
#line 3370 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 592:
#line 3374 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 593:
#line 3375 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) );}
    break;

  case 594:
#line 3379 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(),
                      _symbol_create_list(SQL_COLUMN,(yyvsp[(1) - (1)].l))); }
    break;

  case 595:
#line 3382 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l),
                      _symbol_create_list(SQL_COLUMN,(yyvsp[(3) - (3)].l))); }
    break;

  case 596:
#line 3387 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 597:
#line 3388 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 598:
#line 3394 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(1) - (3)].sym));
            append_symbol(l, (yyvsp[(3) - (3)].sym));
            (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
    break;

  case 599:
#line 3398 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 600:
#line 3403 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(1) - (3)].sym));
            append_symbol(l, (yyvsp[(3) - (3)].sym));
            (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
    break;

  case 601:
#line 3407 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 602:
#line 3411 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 603:
#line 3413 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l)); }
    break;

  case 604:
#line 3417 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 605:
#line 3418 "src/sql/server/sql_parser.y"
    { 
                 sql_subtype *t = sql_bind_localtype("lng");
                 (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
               }
    break;

  case 606:
#line 3422 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 607:
#line 3426 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 608:
#line 3427 "src/sql/server/sql_parser.y"
    { 
                 sql_subtype *t = sql_bind_localtype("lng");
                 (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
               }
    break;

  case 609:
#line 3431 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 610:
#line 3435 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 611:
#line 3436 "src/sql/server/sql_parser.y"
    {
                 sql_subtype *t = sql_bind_localtype("lng");
                 (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val)));
               }
    break;

  case 612:
#line 3440 "src/sql/server/sql_parser.y"
    {
                 sql_subtype *t = sql_bind_localtype("dbl");
                 (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[(2) - (2)].sval),NULL)));
               }
    break;

  case 613:
#line 3444 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 614:
#line 3448 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 615:
#line 3450 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 616:
#line 3455 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(1) - (2)].sym));
       append_int(l, (yyvsp[(2) - (2)].bval));
       (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
    break;

  case 617:
#line 3463 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 618:
#line 3464 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 619:
#line 3465 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 629:
#line 3482 "src/sql/server/sql_parser.y"
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
#line 3498 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 631:
#line 3503 "src/sql/server/sql_parser.y"
    { dlist *l = L();

            append_symbol(l, (yyvsp[(1) - (3)].sym));
            append_string(l, (yyvsp[(2) - (3)].sval));
            append_symbol(l, (yyvsp[(3) - (3)].sym));
            (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 632:
#line 3510 "src/sql/server/sql_parser.y"
    { dlist *l = L();

            append_symbol(l, (yyvsp[(1) - (3)].sym));
            append_string(l, sa_strdup(SA, "="));
            append_symbol(l, (yyvsp[(3) - (3)].sym));
            (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 633:
#line 3520 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(1) - (6)].sym));
            append_int(l, (yyvsp[(3) - (6)].i_val));
            append_symbol(l, (yyvsp[(4) - (6)].sym));
            append_symbol(l, (yyvsp[(6) - (6)].sym));
            (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
    break;

  case 634:
#line 3527 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(1) - (6)].sym));
            append_int(l, (yyvsp[(3) - (6)].i_val));
            append_symbol(l, (yyvsp[(4) - (6)].sym));
            append_symbol(l, (yyvsp[(6) - (6)].sym));
            (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
    break;

  case 635:
#line 3536 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 636:
#line 3537 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 637:
#line 3538 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 638:
#line 3543 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(1) - (3)].sym));
            append_symbol(l, (yyvsp[(3) - (3)].sym));
            append_int(l, FALSE);  /* case sensitive */
            append_int(l, TRUE);  /* anti */
            (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 639:
#line 3550 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(1) - (3)].sym));
            append_symbol(l, (yyvsp[(3) - (3)].sym));
            append_int(l, TRUE);  /* case insensitive */
            append_int(l, TRUE);  /* anti */
            (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 640:
#line 3557 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(1) - (3)].sym));
            append_symbol(l, (yyvsp[(3) - (3)].sym));
            append_int(l, FALSE);  /* case sensitive */
            append_int(l, FALSE);  /* anti */
            (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 641:
#line 3564 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(1) - (3)].sym));
            append_symbol(l, (yyvsp[(3) - (3)].sym));
            append_int(l, TRUE);  /* case insensitive */
            append_int(l, FALSE);  /* anti */
            (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 642:
#line 3574 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(1) - (1)].sym));
       (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
    break;

  case 643:
#line 3578 "src/sql/server/sql_parser.y"
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
#line 3593 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[(1) - (4)].sym) );}
    break;

  case 645:
#line 3594 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[(1) - (3)].sym) ); }
    break;

  case 646:
#line 3599 "src/sql/server/sql_parser.y"
    { dlist *l = L();

            append_symbol(l, (yyvsp[(1) - (5)].sym));
            append_list(l, (yyvsp[(4) - (5)].l));
            (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 647:
#line 3605 "src/sql/server/sql_parser.y"
    { dlist *l = L();

            append_symbol(l, (yyvsp[(1) - (5)].sym));
            append_list(l, (yyvsp[(4) - (5)].l));
            (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 648:
#line 3611 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_list(l, (yyvsp[(2) - (7)].l));
            append_list(l, (yyvsp[(6) - (7)].l));
            (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 649:
#line 3616 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_list(l, (yyvsp[(2) - (7)].l));
            append_list(l, (yyvsp[(6) - (7)].l));
            (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 650:
#line 3624 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 651:
#line 3626 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 652:
#line 3632 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(1) - (4)].sym));
            append_string(l, (yyvsp[(2) - (4)].sval));
            append_symbol(l, (yyvsp[(4) - (4)].sym));
            append_int(l, (yyvsp[(3) - (4)].i_val));
            (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 653:
#line 3639 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(1) - (4)].sym));
            append_string(l, sa_strdup(SA, "="));
            append_symbol(l, (yyvsp[(4) - (4)].sym));
            append_int(l, (yyvsp[(3) - (4)].i_val));
            (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 654:
#line 3648 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 655:
#line 3649 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 656:
#line 3650 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 657:
#line 3654 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[(2) - (2)].sym) ); }
    break;

  case 658:
#line 3658 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 659:
#line 3659 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym));  }
    break;

  case 660:
#line 3663 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 661:
#line 3668 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_list(l, (yyvsp[(1) - (3)].l));
            append_list(l, (yyvsp[(2) - (3)].l));
            append_list(l, (yyvsp[(3) - (3)].l));
            (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
    break;

  case 662:
#line 3677 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 663:
#line 3679 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 664:
#line 3681 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 665:
#line 3685 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 666:
#line 3687 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 667:
#line 3689 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 669:
#line 3696 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 670:
#line 3703 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 671:
#line 3710 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 672:
#line 3717 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 673:
#line 3724 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 674:
#line 3731 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 675:
#line 3738 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 676:
#line 3745 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(L(), sa_strdup(SA, "mbr_overlap")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 677:
#line 3752 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 678:
#line 3759 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 679:
#line 3766 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 680:
#line 3773 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 681:
#line 3779 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 682:
#line 3786 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(L(), sa_strdup(SA, "mbr_above")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 683:
#line 3793 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(L(), sa_strdup(SA, "mbr_distance")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 684:
#line 3800 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(L(), sa_strdup(SA, "mbr_contained")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 685:
#line 3807 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 686:
#line 3814 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(L(), sa_strdup(SA, "mbr_contains")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 687:
#line 3821 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(L(), sa_strdup(SA, "mbr_equal")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 688:
#line 3828 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
                 append_symbol(l, (yyvsp[(2) - (2)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 689:
#line 3834 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 690:
#line 3841 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 691:
#line 3848 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 692:
#line 3855 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l, 
                    append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 693:
#line 3862 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 694:
#line 3864 "src/sql/server/sql_parser.y"
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
#line 3885 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 696:
#line 3889 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 699:
#line 3895 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
                 append_string(L(), sa_strdup(SA, "current_user"))); }
    break;

  case 700:
#line 3897 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
                 append_string(L(), sa_strdup(SA, "current_role"))); }
    break;

  case 702:
#line 3900 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[(1) - (1)].l)); }
    break;

  case 706:
#line 3904 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[(4) - (4)].l)); }
    break;

  case 714:
#line 3916 "src/sql/server/sql_parser.y"
    { 
       int nr = (m->params)?list_length(m->params):0;

       sql_add_param(m, NULL, NULL);
       (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
     }
    break;

  case 715:
#line 3986 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
          append_list(append_symbol(L(), (yyvsp[(1) - (5)].sym)), (yyvsp[(4) - (5)].l))); }
    break;

  case 716:
#line 3991 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[(1) - (3)].l) ); }
    break;

  case 718:
#line 3997 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[(1) - (3)].sym)), (yyvsp[(2) - (3)].sym)), (yyvsp[(3) - (3)].sym)); }
    break;

  case 719:
#line 4001 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 720:
#line 4003 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 721:
#line 4007 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 722:
#line 4009 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 723:
#line 4013 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 724:
#line 4015 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[(2) - (3)].l), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val))); }
    break;

  case 725:
#line 4019 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_ROWS; }
    break;

  case 726:
#line 4020 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_RANGE; }
    break;

  case 727:
#line 4024 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(1) - (1)].sym)), _symbol_create_int(SQL_FRAME, -1)); }
    break;

  case 728:
#line 4025 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 729:
#line 4029 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 730:
#line 4030 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 731:
#line 4031 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 732:
#line 4035 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 733:
#line 4040 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(2) - (4)].sym)), (yyvsp[(4) - (4)].sym)); }
    break;

  case 734:
#line 4044 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 735:
#line 4045 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 736:
#line 4046 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 737:
#line 4050 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 738:
#line 4054 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NONE; }
    break;

  case 739:
#line 4055 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
    break;

  case 740:
#line 4056 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_GROUP; }
    break;

  case 741:
#line 4057 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_TIES; }
    break;

  case 742:
#line 4058 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
    break;

  case 743:
#line 4062 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 744:
#line 4067 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(1) - (3)].l));
       (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 745:
#line 4071 "src/sql/server/sql_parser.y"
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
#line 4098 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 747:
#line 4099 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
                         append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 748:
#line 4104 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 749:
#line 4105 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "left"); }
    break;

  case 750:
#line 4106 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "right"); }
    break;

  case 751:
#line 4107 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "insert"); }
    break;

  case 752:
#line 4112 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 const char *ident = datetime_field((itype)(yyvsp[(3) - (6)].i_val));
                 append_list(l,
                    append_string(L(), sa_strdup(SA, ident)));
                 append_symbol(l, (yyvsp[(5) - (6)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 753:
#line 4119 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l,
                    append_string(L(), sa_strdup(SA, "current_date")));
                 (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 754:
#line 4124 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l,
                    append_string(L(), sa_strdup(SA, "current_time")));
                 (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 755:
#line 4129 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l,
                    append_string(L(), sa_strdup(SA, "current_timestamp")));
                 (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 756:
#line 4134 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l,
                    append_string(L(), sa_strdup(SA, "localtime")));
                 (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 757:
#line 4139 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l,
                    append_string(L(), sa_strdup(SA, "localtimestamp")));
                 (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 758:
#line 4146 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 759:
#line 4147 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 760:
#line 4152 "src/sql/server/sql_parser.y"
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
#line 4162 "src/sql/server/sql_parser.y"
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
#line 4172 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l,
                    append_string(L(), sa_strdup(SA, "substring")));
                 append_symbol(l, (yyvsp[(3) - (6)].sym));
                 append_symbol(l, (yyvsp[(5) - (6)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 763:
#line 4179 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l,
                    append_string(L(), sa_strdup(SA, "substring")));
                 append_symbol(l, (yyvsp[(3) - (6)].sym));
                 append_symbol(l, (yyvsp[(5) - (6)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 764:
#line 4186 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l,
                    append_string(L(), sa_strdup(SA, "locate")));
                 append_symbol(l, (yyvsp[(3) - (6)].sym));
                 append_symbol(l, (yyvsp[(5) - (6)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 765:
#line 4193 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                 append_list(l,
                    append_string(L(), sa_strdup(SA, "concat")));
                 append_symbol(l, (yyvsp[(1) - (3)].sym));
                 append_symbol(l, (yyvsp[(3) - (3)].sym));
                 (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 766:
#line 4200 "src/sql/server/sql_parser.y"
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
#line 4212 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 768:
#line 4214 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 769:
#line 4219 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_string(l, NULL);
            append_string(l, NULL);
            (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 770:
#line 4224 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_string(l, (yyvsp[(1) - (3)].sval));
            append_string(l, NULL);
            (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 771:
#line 4229 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(1) - (3)].sym));
            append_string(l, NULL);
            (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 772:
#line 4234 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_symbol(l, (yyvsp[(1) - (2)].sym));
            append_string(l, (yyvsp[(2) - (2)].sval));
            (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
    break;

  case 773:
#line 4241 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 774:
#line 4242 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 775:
#line 4243 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 776:
#line 4248 "src/sql/server/sql_parser.y"
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
#line 4274 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 778:
#line 4275 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
                 append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 779:
#line 4280 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 780:
#line 4281 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
                 append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 781:
#line 4286 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 782:
#line 4287 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
                 append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 783:
#line 4294 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_list(l, (yyvsp[(1) - (4)].l));
            append_int(l, FALSE);
            append_symbol(l, NULL);
            (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 784:
#line 4300 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_list(l, (yyvsp[(1) - (6)].l));
            append_int(l, FALSE);
            append_symbol(l, NULL);
            (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 785:
#line 4306 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_list(l, (yyvsp[(1) - (5)].l));
            append_int(l, TRUE);
            append_symbol(l, (yyvsp[(4) - (5)].sym));
            (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 786:
#line 4312 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_list(l, (yyvsp[(1) - (5)].l));
            append_int(l, FALSE);
            append_symbol(l, (yyvsp[(4) - (5)].sym));
            (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 787:
#line 4318 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_list(l, (yyvsp[(1) - (4)].l));
            append_int(l, FALSE);
            append_symbol(l, (yyvsp[(3) - (4)].sym));
            (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 788:
#line 4324 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_list(l, (yyvsp[(1) - (6)].l));
            append_int(l, FALSE);
            append_symbol(l, (yyvsp[(3) - (6)].sym));
            append_symbol(l, (yyvsp[(5) - (6)].sym));
            (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 790:
#line 4334 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 791:
#line 4335 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = -1; }
    break;

  case 792:
#line 4336 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 793:
#line 4340 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 794:
#line 4341 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 795:
#line 4352 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 796:
#line 4354 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0+1; }
    break;

  case 797:
#line 4358 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 798:
#line 4360 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 6+1; }
    break;

  case 799:
#line 4364 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
    break;

  case 800:
#line 4366 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
                    sql_find_subtype(&(yyval.type), "timetz", (yyvsp[(2) - (3)].i_val), 0); 
                 else
                    sql_find_subtype(&(yyval.type), "time", (yyvsp[(2) - (3)].i_val), 0); 
               }
    break;

  case 801:
#line 4372 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
                    sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[(2) - (3)].i_val), 0); 
                 else
                    sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[(2) - (3)].i_val), 0); 
               }
    break;

  case 802:
#line 4380 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iyear; }
    break;

  case 803:
#line 4381 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imonth; }
    break;

  case 804:
#line 4382 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iday; }
    break;

  case 805:
#line 4383 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ihour; }
    break;

  case 806:
#line 4384 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imin; }
    break;

  case 808:
#line 4389 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = isec; }
    break;

  case 810:
#line 4394 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iquarter; }
    break;

  case 811:
#line 4395 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iweek; }
    break;

  case 812:
#line 4400 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
                    append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 813:
#line 4406 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
                    append_int( L(), (yyvsp[(1) - (1)].i_val)), 0);  }
    break;

  case 814:
#line 4409 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
                    append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 815:
#line 4415 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
                    append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 816:
#line 4418 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
                    append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 817:
#line 4424 "src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list(
               append_list( L(), (yyvsp[(1) - (3)].l)), (yyvsp[(3) - (3)].l) ); }
    break;

  case 818:
#line 4427 "src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list( L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 819:
#line 4431 "src/sql/server/sql_parser.y"
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
#line 4457 "src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(1) - (1)].sval));
            int len = UTF8_strlen(s);
            sql_subtype t;
            sql_find_subtype(&t, "char", len, 0 );
            (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
    break;

  case 824:
#line 4463 "src/sql/server/sql_parser.y"
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
#line 4528 "src/sql/server/sql_parser.y"
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
#line 4559 "src/sql/server/sql_parser.y"
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
#line 4620 "src/sql/server/sql_parser.y"
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
#line 4659 "src/sql/server/sql_parser.y"
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
#line 4676 "src/sql/server/sql_parser.y"
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
#line 4692 "src/sql/server/sql_parser.y"
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
#line 4708 "src/sql/server/sql_parser.y"
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
#line 4725 "src/sql/server/sql_parser.y"
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
#line 4742 "src/sql/server/sql_parser.y"
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
#line 4759 "src/sql/server/sql_parser.y"
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
#line 4776 "src/sql/server/sql_parser.y"
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
#line 4797 "src/sql/server/sql_parser.y"
    { sql_subtype t;
            sql_find_subtype(&t, "boolean", 0, 0 );
            (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
    break;

  case 838:
#line 4801 "src/sql/server/sql_parser.y"
    { sql_subtype t;
            sql_find_subtype(&t, "boolean", 0, 0 );
            (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
    break;

  case 839:
#line 4807 "src/sql/server/sql_parser.y"
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
#line 4852 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 841:
#line 4853 "src/sql/server/sql_parser.y"
    {
                      m->scanner.schema = (yyvsp[(1) - (3)].sval);
                      (yyval.l) = append_string(
                         append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 842:
#line 4857 "src/sql/server/sql_parser.y"
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
#line 4868 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
                    L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 844:
#line 4871 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
                    append_string(
                     L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 845:
#line 4876 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
                    append_string(
                     append_string(
                      L(), (yyvsp[(1) - (5)].sval)), (yyvsp[(3) - (5)].sval)), (yyvsp[(5) - (5)].sval));}
    break;

  case 846:
#line 4884 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(3) - (6)].sym));
       append_type(l, &(yyvsp[(5) - (6)].type));
       (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 847:
#line 4890 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(3) - (6)].sym));
       append_type(l, &(yyvsp[(5) - (6)].type));
       (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 849:
#line 4902 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
             append_symbol(
              append_symbol(
               L(), (yyvsp[(3) - (6)].sym)), (yyvsp[(5) - (6)].sym))); }
    break;

  case 850:
#line 4907 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[(3) - (4)].l)); }
    break;

  case 851:
#line 4909 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
             append_symbol(
              append_list(
               append_symbol(
                L(),(yyvsp[(2) - (5)].sym)),(yyvsp[(3) - (5)].l)),(yyvsp[(4) - (5)].sym))); }
    break;

  case 852:
#line 4915 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
             append_symbol(
              append_list(
               L(),(yyvsp[(2) - (4)].l)),(yyvsp[(3) - (4)].sym))); }
    break;

  case 853:
#line 4923 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 854:
#line 4925 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 855:
#line 4930 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (3)].sym));
                 (yyval.l) = append_symbol( (yyval.l), (yyvsp[(3) - (3)].sym));
               }
    break;

  case 856:
#line 4934 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 857:
#line 4940 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
                  append_symbol(
                   append_symbol(
                    L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 858:
#line 4948 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 859:
#line 4950 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 860:
#line 4955 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
                  append_symbol(
                   append_symbol(
                    L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 861:
#line 4963 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 862:
#line 4965 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 863:
#line 4969 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 864:
#line 4970 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 866:
#line 4980 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
            if ((yyval.i_val) <= 0) {
               (yyval.i_val) = -1;
               yyerror(m, "Positive value greater than 0 expected");
               YYABORT;
            }
          }
    break;

  case 867:
#line 4991 "src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
            if ((yyval.l_val) <= 0) {
               (yyval.l_val) = -1;
               yyerror(m, "Positive value greater than 0 expected");
               YYABORT;
            }
          }
    break;

  case 868:
#line 5001 "src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
            if ((yyval.l_val) < 0) {
               (yyval.l_val) = -1;
               yyerror(m, "Positive value expected");
               YYABORT;
            }
          }
    break;

  case 869:
#line 5011 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
            if ((yyval.i_val) < 0) {
               (yyval.i_val) = -1;
               yyerror(m, "Positive value expected");
               YYABORT;
            }
          }
    break;

  case 870:
#line 5022 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
    break;

  case 871:
#line 5024 "src/sql/server/sql_parser.y"
    { (yyval.type).type = NULL;
                 yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
                 YYABORT;
               }
    break;

  case 872:
#line 5028 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
    break;

  case 873:
#line 5030 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 874:
#line 5032 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 875:
#line 5034 "src/sql/server/sql_parser.y"
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
#line 5042 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
    break;

  case 877:
#line 5044 "src/sql/server/sql_parser.y"
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
#line 5052 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
    break;

  case 879:
#line 5053 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
    break;

  case 880:
#line 5054 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
    break;

  case 881:
#line 5055 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
    break;

  case 882:
#line 5056 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
    break;

  case 883:
#line 5058 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
    break;

  case 884:
#line 5060 "src/sql/server/sql_parser.y"
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
#line 5073 "src/sql/server/sql_parser.y"
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
#line 5090 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 887:
#line 5092 "src/sql/server/sql_parser.y"
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
#line 5106 "src/sql/server/sql_parser.y"
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
#line 5125 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 890:
#line 5126 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 891:
#line 5127 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
    break;

  case 894:
#line 5130 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 895:
#line 5132 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 896:
#line 5133 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 897:
#line 5135 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 898:
#line 5137 "src/sql/server/sql_parser.y"
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
#line 5148 "src/sql/server/sql_parser.y"
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
#line 5163 "src/sql/server/sql_parser.y"
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
#line 5176 "src/sql/server/sql_parser.y"
    {
          if (!sql_find_subtype(&(yyval.type), "geometry", 0, 0 )) {
               yyerror(m, SQLSTATE(22000) "type (geometry) unknown");
               (yyval.type).type = NULL;
               YYABORT;
          }
     }
    break;

  case 902:
#line 5183 "src/sql/server/sql_parser.y"
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
#line 5198 "src/sql/server/sql_parser.y"
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
#line 5213 "src/sql/server/sql_parser.y"
    {
          if (!sql_find_subtype(&(yyval.type), "geometrya", 0, 0 )) {
               yyerror(m, SQLSTATE(22000) "type (geometrya) unknown");
               (yyval.type).type = NULL;
               YYABORT;
          }
     }
    break;

  case 905:
#line 5220 "src/sql/server/sql_parser.y"
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
#line 5246 "src/sql/server/sql_parser.y"
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
#line 5263 "src/sql/server/sql_parser.y"
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
#line 5284 "src/sql/server/sql_parser.y"
    {     char *t = sql_bind_alias((yyvsp[(1) - (1)].sval));
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
#line 5298 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 910:
#line 5299 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (2)].sval); }
    break;

  case 911:
#line 5303 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 912:
#line 5304 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 913:
#line 5305 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 914:
#line 5308 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 915:
#line 5309 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 918:
#line 5317 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 919:
#line 5318 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 920:
#line 5319 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 921:
#line 5320 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 922:
#line 5321 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 923:
#line 5322 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 924:
#line 5326 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 925:
#line 5327 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 926:
#line 5328 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 927:
#line 5329 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 928:
#line 5330 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 929:
#line 5331 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 930:
#line 5332 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 932:
#line 5337 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "large"); }
    break;

  case 933:
#line 5338 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "name"); }
    break;

  case 934:
#line 5339 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "object"); }
    break;

  case 935:
#line 5340 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "password"); }
    break;

  case 936:
#line 5341 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "path"); }
    break;

  case 937:
#line 5342 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "precision"); }
    break;

  case 938:
#line 5343 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
    break;

  case 939:
#line 5344 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "role"); }
    break;

  case 940:
#line 5345 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "size"); }
    break;

  case 941:
#line 5346 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "type"); }
    break;

  case 942:
#line 5347 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "release"); }
    break;

  case 943:
#line 5348 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "value"); }
    break;

  case 944:
#line 5349 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "zone"); }
    break;

  case 945:
#line 5351 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "action"); }
    break;

  case 946:
#line 5352 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "as"); }
    break;

  case 947:
#line 5353 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
    break;

  case 948:
#line 5354 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "column"); }
    break;

  case 949:
#line 5355 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
    break;

  case 950:
#line 5356 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
    break;

  case 951:
#line 5357 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "increment"); }
    break;

  case 952:
#line 5358 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
    break;

  case 953:
#line 5359 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
    break;

  case 954:
#line 5360 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "plan"); }
    break;

  case 955:
#line 5361 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "schema"); }
    break;

  case 956:
#line 5362 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "start"); }
    break;

  case 957:
#line 5363 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "statement"); }
    break;

  case 958:
#line 5364 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "table"); }
    break;

  case 959:
#line 5366 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cache"); }
    break;

  case 960:
#line 5367 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "data"); }
    break;

  case 961:
#line 5368 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
    break;

  case 962:
#line 5369 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "match"); }
    break;

  case 963:
#line 5370 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "options"); }
    break;

  case 964:
#line 5371 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "row"); }
    break;

  case 965:
#line 5372 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "key"); }
    break;

  case 966:
#line 5373 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "language"); }
    break;

  case 967:
#line 5374 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "level"); }
    break;

  case 968:
#line 5375 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "session"); }
    break;

  case 969:
#line 5376 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "date"); }
    break;

  case 970:
#line 5377 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "time"); }
    break;

  case 971:
#line 5378 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
    break;

  case 972:
#line 5379 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "interval"); }
    break;

  case 973:
#line 5380 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "quarter"); }
    break;

  case 974:
#line 5381 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "week"); }
    break;

  case 975:
#line 5382 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
    break;

  case 976:
#line 5384 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
    break;

  case 977:
#line 5385 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "execute"); }
    break;

  case 978:
#line 5386 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "explain"); }
    break;

  case 979:
#line 5387 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "debug"); }
    break;

  case 980:
#line 5388 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "trace"); }
    break;

  case 981:
#line 5389 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "text"); }
    break;

  case 982:
#line 5390 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
    break;

  case 983:
#line 5391 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "no"); }
    break;

  case 984:
#line 5393 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "strip"); }
    break;

  case 985:
#line 5394 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
    break;

  case 986:
#line 5395 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "passing"); }
    break;

  case 987:
#line 5396 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "nil"); }
    break;

  case 988:
#line 5397 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "ref"); }
    break;

  case 989:
#line 5398 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "absent"); }
    break;

  case 990:
#line 5399 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "empty"); }
    break;

  case 991:
#line 5400 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "document"); }
    break;

  case 992:
#line 5401 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "element"); }
    break;

  case 993:
#line 5402 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "content"); }
    break;

  case 994:
#line 5403 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
    break;

  case 995:
#line 5404 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "returning"); }
    break;

  case 996:
#line 5405 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "location"); }
    break;

  case 997:
#line 5406 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "id"); }
    break;

  case 998:
#line 5407 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "according"); }
    break;

  case 999:
#line 5408 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "uri"); }
    break;

  case 1000:
#line 5409 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "filter"); }
    break;

  case 1001:
#line 5410 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
    break;

  case 1002:
#line 5411 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temp"); }
    break;

  case 1003:
#line 5412 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
    break;

  case 1004:
#line 5413 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
    break;

  case 1005:
#line 5414 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "storage"); }
    break;

  case 1006:
#line 5415 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
    break;

  case 1007:
#line 5416 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "replace"); }
    break;

  case 1008:
#line 5417 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "comment"); }
    break;

  case 1009:
#line 5421 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 1010:
#line 5423 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 1011:
#line 5428 "src/sql/server/sql_parser.y"
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
#line 5451 "src/sql/server/sql_parser.y"
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
#line 5471 "src/sql/server/sql_parser.y"
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
#line 5504 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1015:
#line 5506 "src/sql/server/sql_parser.y"
    { char *s = strconcat((yyvsp[(1) - (2)].sval),(yyvsp[(2) - (2)].sval)); 
            (yyval.sval) = sa_strdup(SA, s); 
            _DELETE(s);
          }
    break;

  case 1016:
#line 5514 "src/sql/server/sql_parser.y"
    {
            m->emode = m_execute;
            (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1017:
#line 5521 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_int(l, (yyvsp[(1) - (3)].i_val));
       append_list(l, NULL);
       (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 1018:
#line 5526 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_int(l, (yyvsp[(1) - (4)].i_val));
       append_list(l, (yyvsp[(3) - (4)].l));
       (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 1019:
#line 5540 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1021:
#line 5545 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[(2) - (2)].l)); }
    break;

  case 1023:
#line 5553 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(3) - (5)].sym));
       append_string(l, (yyvsp[(5) - (5)].sval));
       (yyval.sym) = _symbol_create_list( SQL_COMMENT, l );
     }
    break;

  case 1024:
#line 5559 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(3) - (5)].sym));
       append_string(l, NULL);
       (yyval.sym) = _symbol_create_list( SQL_COMMENT, l );
     }
    break;

  case 1025:
#line 5567 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_SCHEMA, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 1026:
#line 5568 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_TABLE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1027:
#line 5569 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VIEW, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1028:
#line 5571 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(2) - (4)].sval));
       append_string(l, (yyvsp[(4) - (4)].sval));
       (yyval.sym) = _symbol_create_list( SQL_COLUMN, l );
     }
    break;

  case 1029:
#line 5577 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(2) - (6)].sval));
       append_string(l, (yyvsp[(4) - (6)].sval));
       append_string(l, (yyvsp[(6) - (6)].sval));
       (yyval.sym) = _symbol_create_list( SQL_COLUMN, l );
     }
    break;

  case 1030:
#line 5583 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_INDEX, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1031:
#line 5584 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SEQUENCE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1032:
#line 5585 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ROUTINE, (yyvsp[(1) - (1)].l) ); }
    break;

  case 1034:
#line 5594 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1035:
#line 5596 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1047:
#line 5618 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(3) - (5)].sym));
       append_int(l, (yyvsp[(4) - (5)].i_val));
       (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
    break;

  case 1048:
#line 5626 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_list(l, (yyvsp[(3) - (5)].l));
       append_int(l, (yyvsp[(4) - (5)].i_val));
       (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
    break;

  case 1049:
#line 5634 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(3) - (5)].sym));
       append_int(l, (yyvsp[(4) - (5)].i_val));
       (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
    break;

  case 1050:
#line 5644 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(4) - (7)].sval));
       append_list(l, (yyvsp[(5) - (7)].l));
       append_int(l, (yyvsp[(6) - (7)].i_val));
       (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
     }
    break;

  case 1051:
#line 5654 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 1052:
#line 5656 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (2)].sym));
       (yyval.l) = append_symbol((yyval.l), NULL);
       (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1053:
#line 5660 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
       (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (4)].sym));
       (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1054:
#line 5664 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (6)].sym));
       (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (6)].sym));
       (yyval.l) = append_list((yyval.l), (yyvsp[(6) - (6)].l)); }
    break;

  case 1055:
#line 5668 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
       (yyval.l) = append_symbol((yyval.l), NULL);
       (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1056:
#line 5672 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
       (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (2)].sym));
       (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1057:
#line 5676 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
       (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
       (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1058:
#line 5680 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
       (yyval.l) = append_symbol((yyval.l), NULL);
       (yyval.l) = append_list((yyval.l), (yyvsp[(2) - (2)].l)); }
    break;

  case 1060:
#line 5690 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1061:
#line 5694 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1062:
#line 5696 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_list(l, 
               append_string(L(), sa_strdup(SA, "concat")));
            append_symbol(l, (yyvsp[(1) - (3)].sym));
            append_symbol(l, (yyvsp[(3) - (3)].sym));
            (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1063:
#line 5706 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(2) - (2)].sval));
       append_symbol(l, (yyvsp[(1) - (2)].sym));
       (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1064:
#line 5713 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1065:
#line 5714 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1068:
#line 5727 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
            (yyval.l) = append_list((yyval.l), (yyvsp[(1) - (2)].l));
            (yyval.l) = append_int((yyval.l), (yyvsp[(2) - (2)].i_val));   }
    break;

  case 1069:
#line 5734 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1070:
#line 5736 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1072:
#line 5744 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1073:
#line 5745 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 1074:
#line 5749 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1075:
#line 5750 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1076:
#line 5751 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1077:
#line 5752 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 1078:
#line 5753 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 1079:
#line 5760 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(3) - (7)].sym));
       append_list(l, (yyvsp[(4) - (7)].l));
       append_int(l, (yyvsp[(5) - (7)].i_val));
       append_int(l, (yyvsp[(6) - (7)].i_val));
       (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
     }
    break;

  case 1080:
#line 5770 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1081:
#line 5771 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 1082:
#line 5776 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 1083:
#line 5778 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 1084:
#line 5783 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (2)].sym));
            (yyval.l) = append_string((yyval.l), (yyvsp[(2) - (2)].sval)); }
    break;

  case 1085:
#line 5788 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1086:
#line 5792 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1087:
#line 5793 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1088:
#line 5797 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1089:
#line 5804 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_int(l, (yyvsp[(3) - (6)].i_val) );
       append_symbol(l, (yyvsp[(4) - (6)].sym));
       append_int(l, (yyvsp[(5) - (6)].i_val));
       (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
    break;

  case 1090:
#line 5811 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1091:
#line 5812 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1092:
#line 5819 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_string(l, (yyvsp[(4) - (7)].sval));
       append_symbol(l, (yyvsp[(5) - (7)].sym));
       append_int(l, (yyvsp[(6) - (7)].i_val));
       (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
    break;

  case 1094:
#line 5831 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1095:
#line 5833 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1096:
#line 5844 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1111:
#line 5890 "src/sql/server/sql_parser.y"
    { dlist *l = L();
       append_symbol(l, (yyvsp[(3) - (5)].sym));
       append_int(l, (yyvsp[(4) - (5)].i_val));
       (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
    break;

  case 1112:
#line 5901 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1114:
#line 5906 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1115:
#line 5910 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1116:
#line 5911 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1117:
#line 5915 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1118:
#line 5916 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1119:
#line 5917 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1120:
#line 5932 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1121:
#line 5936 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1122:
#line 5938 "src/sql/server/sql_parser.y"
    { dlist *l = L();
            append_list(l, 
               append_string(L(), sa_strdup(SA, "concat")));
            append_symbol(l, (yyvsp[(1) - (3)].sym));
            append_symbol(l, (yyvsp[(3) - (3)].sym));
            (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1127:
#line 5961 "src/sql/server/sql_parser.y"
    { char *s = strconcat("xmlns:", (yyvsp[(3) - (3)].sval));
                      dlist *l = L();
                      append_string(l, sa_strdup(SA, s));
                      _DELETE(s);
                      append_symbol(l, (yyvsp[(1) - (3)].sym));
                      (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1128:
#line 5970 "src/sql/server/sql_parser.y"
    { dlist *l = L();
                      append_string(l, sa_strdup(SA, "xmlns" ));
                      append_symbol(l, (yyvsp[(2) - (2)].sym));
                      (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1129:
#line 5974 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1159:
#line 6070 "src/sql/server/sql_parser.y"
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
#line 14630 "src/sql/server/sql_parser.tab.c"
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
  yyerrstatus = 3;  /* Each real token shifted decrements this.  */

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


#line 6091 "src/sql/server/sql_parser.y"

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
     return "unknown";   /* just needed for broken compilers ! */
}

void *sql_error( mvc * sql, int error_code, char *format, ... )
{
     va_list   ap;

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


