
/*  A Bison parser, made from stratego.grm
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	LCID	257
#define	STRINGTOK	258
#define	UCID	259
#define	ID	260
#define	ARROW	261
#define	LONGARROW	262
#define	ASSIGN	263
#define	ASTERISK	264
#define	BACKARROW	265
#define	BAR	266
#define	BUILD	267
#define	AS	268
#define	ANNBUILD	269
#define	ANNRM	270
#define	BUILDe	271
#define	COMMA	272
#define	EQ	273
#define	FAIL	274
#define	GG	275
#define	IMPORTS	276
#define	KIDS	277
#define	LBRACK	278
#define	LCURLY	279
#define	LL	280
#define	LPAREN	281
#define	LT	282
#define	GT	283
#define	ANNMATCH	284
#define	MATCH	285
#define	MATCHe	286
#define	MODULE	287
#define	NEW	288
#define	CONSTRUCTORS	289
#define	OVERLAYS	290
#define	PARSEPROG	291
#define	PARSEQUERY	292
#define	PRIM	293
#define	RCURLY	294
#define	RPAREN	295
#define	RULES	296
#define	SIGNATURE	297
#define	SORTS	298
#define	STARSTAR	299
#define	STRATEGIES	300
#define	STR_GT	301
#define	SUCC	302
#define	UNDERSCORE	303
#define	DOT	304
#define	BACKSLASH	305
#define	EXPLODE	306
#define	MODIFIER	307
#define	STRATEGO	308
#define	SCRIPT	309
#define	DUMP	310
#define	LOAD	311
#define	IN	312
#define	COLON	313
#define	DOUBLECOLON	314
#define	PLUS	315
#define	LTPLUS	316
#define	SEMICOLON	317
#define	DOUBLEARROW	318
#define	LEFTDOUBLEARROW	319
#define	RBRACK	320
#define	NOT	321
#define	WHERE	322
#define	TEST	323
#define	ONE	324
#define	ALL	325
#define	THREAD	326
#define	SOMETOK	327
#define	MU	328
#define	LET	329
#define	REAL	330
#define	INT	331

#line 1 "stratego.grm"

#include <aterm1.h>
#include "stratego.h"

extern int yylineno;
extern char file_name[256];
extern FILE *yyin;

ATerm parse_tree;

void yymessage(char *msg)
{
  fprintf(stderr, "%s: line %d - %s\n", file_name, yylineno + 1, msg);
}

void yyerror(char *msg)
{
  yymessage(msg);
  exit(1);
}


#line 24 "stratego.grm"
typedef union{
   int    num;
   double real;
   char   *string;
   ATerm  term;
   ATermList list;
} YYSTYPE;
#line 32 "stratego.grm"


/* int yylex(void); */
 
int yylex(YYSTYPE *lvalp);
int yyparse(void);

int parse()
{
   int result;
   result = yyparse();
   return result;
}
#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		261
#define	YYFLAG		-32768
#define	YYNTBASE	78

#define YYTRANSLATE(x) ((unsigned)(x) <= 331 ? yytranslate[x] : 115)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     4,     8,    13,    15,    17,    20,    21,    24,    27,
    29,    32,    34,    37,    38,    39,    42,    45,    48,    51,
    54,    57,    59,    62,    63,    66,    69,    70,    74,    75,
    79,    81,    84,    86,    88,    89,    92,    96,   100,   102,
   106,   108,   110,   112,   115,   117,   120,   122,   124,   126,
   129,   133,   138,   143,   147,   153,   154,   157,   158,   164,
   165,   169,   170,   174,   176,   180,   181,   183,   187,   188,
   189,   192,   197,   202,   207,   212,   213,   216,   217,   220,
   223,   228,   234,   239,   244,   247,   252,   255,   262,   269,
   272,   274,   276,   278,   283,   287,   292,   296,   298,   300,
   303,   308,   313,   318,   324,   328,   332,   336,   342,   347,
   352,   357,   362,   366,   371,   373,   375,   377,   382,   383,
   386,   387,   391,   392,   394,   398,   399,   402,   407,   408,
   412,   413,   415,   419,   420,   423,   430
};

static const short yyrhs[] = {    33,
    92,    81,     0,    54,    55,    79,     0,    28,   105,    29,
    93,     0,   105,     0,    80,     0,    79,    80,     0,     0,
    56,     4,     0,    57,     4,     0,    83,     0,    29,   105,
     0,    83,     0,    81,    83,     0,     0,     0,    82,    92,
     0,    22,    82,     0,    42,   100,     0,    46,   109,     0,
    43,    84,     0,    36,   113,     0,    85,     0,    84,    85,
     0,     0,    44,    86,     0,    35,    88,     0,     0,    86,
    92,    87,     0,     0,    27,    98,    41,     0,     0,     0,
     0,     0,     0,    10,     0,    45,     0,     0,    88,    89,
     0,    92,    59,    90,     0,    91,     7,    93,     0,    93,
     0,    91,    10,    93,     0,    93,     0,     3,     0,     5,
     0,    92,    95,     0,    49,     0,    49,    93,     0,    77,
     0,    76,     0,     4,     0,    92,    97,     0,    92,    14,
    93,     0,    28,   105,    29,    93,     0,    24,    98,    94,
    66,     0,    27,    98,    41,     0,    93,    52,    27,    93,
    41,     0,     0,    12,    93,     0,     0,    24,    93,   104,
    66,    96,     0,     0,    27,    92,    41,     0,     0,    27,
    98,    41,     0,    93,     0,    93,    18,    98,     0,     0,
     3,     0,     3,    18,    99,     0,     0,     0,   100,   101,
     0,    92,   111,    59,   102,     0,    92,   111,    60,   103,
     0,    93,     7,    93,   104,     0,   105,     8,   105,   104,
     0,     0,    68,   105,     0,     0,    65,   105,     0,    92,
   107,     0,    92,    53,    92,   107,     0,   105,    52,    27,
   105,    41,     0,    31,    27,    93,    41,     0,    31,    27,
    93,    41,     0,    32,    93,     0,    13,    27,    93,    41,
     0,    17,    93,     0,    30,    27,    93,    18,    93,    41,
     0,    15,    27,    93,    18,    93,    41,     0,    16,    93,
     0,    34,     0,    47,     0,    23,     0,    39,    27,     4,
    41,     0,    51,   102,    51,     0,    28,   105,    29,    93,
     0,   105,    64,    93,     0,    20,     0,    48,     0,    77,
   105,     0,    67,    27,   105,    41,     0,    68,    27,   105,
    41,     0,    69,    27,   105,    41,     0,    25,    99,    59,
   105,    40,     0,   105,    63,   105,     0,   105,    61,   105,
     0,   105,    62,   105,     0,    74,    92,    27,   105,    41,
     0,    73,    27,   105,    41,     0,    70,    27,   105,    41,
     0,    71,    27,   105,    41,     0,    72,    27,   105,    41,
     0,    27,   108,    41,     0,    24,   108,   106,    66,     0,
     4,     0,    77,     0,    76,     0,    75,   109,    58,   105,
     0,     0,    12,   105,     0,     0,    27,   108,    41,     0,
     0,   105,     0,   105,    18,   108,     0,     0,   109,   110,
     0,    92,   111,    19,   105,     0,     0,    27,   112,    41,
     0,     0,    92,     0,    92,    18,   112,     0,     0,   114,
   113,     0,    92,    27,   112,    41,    19,    93,     0,    92,
    19,    93,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   166,   167,   168,   169,   172,   173,   174,   177,   178,   179,
   180,   183,   184,   185,   188,   189,   192,   193,   194,   195,
   196,   199,   200,   201,   204,   205,   208,   209,   211,   212,
   215,   216,   219,   220,   223,   224,   227,   230,   231,   235,
   236,   239,   240,   245,   252,   254,   256,   257,   258,   259,
   260,   261,   262,   263,   264,   268,   269,   272,   273,   277,
   278,   281,   282,   285,   286,   287,   290,   291,   292,   297,
   298,   302,   303,   307,   310,   314,   315,   321,   322,   325,
   327,   330,   333,   335,   339,   341,   342,   344,   346,   348,
   350,   351,   352,   353,   355,   356,   358,   361,   362,   363,
   364,   365,   366,   367,   369,   370,   371,   372,   373,   374,
   375,   376,   377,   378,   380,   381,   383,   385,   389,   390,
   394,   395,   399,   400,   401,   407,   408,   412,   416,   417,
   420,   421,   422,   425,   426,   429,   431
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","LCID","STRINGTOK",
"UCID","ID","ARROW","LONGARROW","ASSIGN","ASTERISK","BACKARROW","BAR","BUILD",
"AS","ANNBUILD","ANNRM","BUILDe","COMMA","EQ","FAIL","GG","IMPORTS","KIDS","LBRACK",
"LCURLY","LL","LPAREN","LT","GT","ANNMATCH","MATCH","MATCHe","MODULE","NEW",
"CONSTRUCTORS","OVERLAYS","PARSEPROG","PARSEQUERY","PRIM","RCURLY","RPAREN",
"RULES","SIGNATURE","SORTS","STARSTAR","STRATEGIES","STR_GT","SUCC","UNDERSCORE",
"DOT","BACKSLASH","EXPLODE","MODIFIER","STRATEGO","SCRIPT","DUMP","LOAD","IN",
"COLON","DOUBLECOLON","PLUS","LTPLUS","SEMICOLON","DOUBLEARROW","LEFTDOUBLEARROW",
"RBRACK","NOT","WHERE","TEST","ONE","ALL","THREAD","SOMETOK","MU","LET","REAL",
"INT","start","commands","command","decls","mods","decl","sdecls","sdecl","idlist",
"optkind","opdecls","opdecl","type","typelist","id","term","tail","optcont",
"trav","opttermlist","termlist","tvarlist","rules","rule_def","rule","stratrule",
"optcond","strategy","strategytail","optstrategylist","strategylist","strategies",
"strategy_def","optvarlist","varlist","overlays","overlay", NULL
};
#endif

static const short yyr1[] = {     0,
    78,    78,    78,    78,    79,    79,    79,    80,    80,    80,
    80,    81,    81,    81,    82,    82,    83,    83,    83,    83,
    83,    84,    84,    84,    85,    85,    86,    86,    87,    87,
    -1,    -1,    -1,    -1,    88,    88,    89,    90,    90,    91,
    91,    92,    92,    93,    93,    93,    93,    93,    93,    93,
    93,    93,    93,    93,    93,    94,    94,    95,    95,    96,
    96,    97,    97,    98,    98,    98,    99,    99,    99,   100,
   100,   101,   101,   102,   103,   104,   104,    -1,    -1,   105,
   105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
   105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
   105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
   105,   105,   105,   105,   105,   105,   105,   105,   106,   106,
   107,   107,   108,   108,   108,   109,   109,   110,   111,   111,
   112,   112,   112,   113,   113,   114,   114
};

static const short yyr2[] = {     0,
     3,     3,     4,     1,     1,     2,     0,     2,     2,     1,
     2,     1,     2,     0,     0,     2,     2,     2,     2,     2,
     2,     1,     2,     0,     2,     2,     0,     3,     0,     3,
     1,     2,     1,     1,     0,     2,     3,     3,     1,     3,
     1,     1,     1,     2,     1,     2,     1,     1,     1,     2,
     3,     4,     4,     3,     5,     0,     2,     0,     5,     0,
     3,     0,     3,     1,     3,     0,     1,     3,     0,     0,
     2,     4,     4,     4,     4,     0,     2,     0,     2,     2,
     4,     5,     4,     4,     2,     4,     2,     6,     6,     2,
     1,     1,     1,     4,     3,     4,     3,     1,     1,     2,
     4,     4,     4,     5,     3,     3,     3,     5,     4,     4,
     4,     4,     3,     4,     1,     1,     1,     4,     0,     2,
     0,     3,     0,     1,     3,     0,     2,     4,     0,     3,
     0,     1,     3,     0,     2,     6,     3
};

static const short yydefact[] = {     0,
    42,   115,    43,     0,     0,     0,     0,    98,    93,   123,
    69,   123,     0,     0,     0,     0,     0,    91,     0,    92,
    99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   126,   117,   116,   121,     4,     0,     0,    49,    66,
    66,     0,    45,    48,    47,    58,    90,    87,     0,   124,
   119,    67,     0,     0,     0,     0,     0,    85,    14,     0,
     0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   100,   123,     0,    80,     0,     0,     0,     0,
     0,     0,     0,    64,    56,     0,     0,    46,     0,     0,
    66,    44,    50,     0,     0,   123,     0,     0,    69,     0,
   113,     0,     0,     0,    15,   134,    70,    24,   126,     1,
    12,     0,     0,    95,     0,     0,     0,     2,     5,    10,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
   127,     0,   121,     0,   106,   107,   105,    97,    86,     0,
    66,     0,     0,    54,     0,    51,    76,     0,     0,     0,
   125,   120,   114,    68,     0,    96,     0,    83,    17,     0,
    21,   134,    18,    35,    27,    20,    22,    19,    13,    94,
    76,    11,     8,     9,     6,   101,   102,   103,   110,   111,
   112,   109,     0,   118,   131,     0,   122,    81,     0,     0,
    65,    57,    53,    52,     0,     0,    63,     0,    96,   104,
     0,    16,     0,   131,   135,   129,    71,    26,    25,    23,
    74,   108,   132,     0,     0,    82,    89,    77,    60,    55,
    88,   137,     0,     0,    36,     0,    29,   131,   130,   128,
     0,    59,     0,     0,     0,     0,    66,    28,   133,     0,
     0,    72,    73,     0,    37,     0,    39,     0,    61,   136,
     0,     0,     0,    30,    76,    38,    40,    75,     0,     0,
     0
};

static const short yydefgoto[] = {   259,
   118,   119,   110,   159,   120,   166,   167,   209,   238,   208,
   225,   245,   246,    46,    84,   143,    92,   232,    93,    85,
    53,   163,   207,    62,   243,   196,    50,    98,    76,    51,
    72,   131,   186,   214,   161,   162
};

static const short yypact[] = {   301,
-32768,-32768,-32768,    20,    25,    11,    11,-32768,-32768,   376,
    29,   376,   376,    35,    36,    11,    99,-32768,    49,-32768,
-32768,    11,    27,    57,    63,    72,    78,    91,    92,    98,
    99,-32768,-32768,   451,    -9,   374,    11,    11,-32768,    11,
    11,   376,    11,-32768,-32768,    67,    -4,    -4,   376,   112,
    77,   123,    85,   101,   117,    11,    11,    -4,   191,   145,
    21,   100,   160,   376,   376,   376,   376,   376,   376,   376,
   125,     1,   108,   376,    99,-32768,   134,   376,   376,   376,
    11,   -22,    -7,     2,   138,   124,   158,    -4,    11,    11,
    11,-32768,-32768,   143,   178,   376,   376,   118,    29,   376,
-32768,    11,     5,   -16,-32768,    99,-32768,   -11,-32768,   191,
-32768,   142,    11,-32768,   376,   182,   186,   160,-32768,-32768,
   184,   202,   220,   227,   234,   295,   357,   376,   376,   161,
-32768,   151,   166,   376,   374,   374,   -23,    -4,-32768,    11,
    11,    11,   128,-32768,    11,    -4,   -31,   157,    11,    11,
-32768,   374,-32768,-32768,    93,     3,    11,-32768,    99,    34,
-32768,    99,    99,-32768,-32768,   -11,-32768,    99,-32768,-32768,
   -31,   374,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   370,   374,    99,   192,-32768,-32768,   432,    62,
-32768,    -4,-32768,    -4,   376,   135,-32768,    79,    -4,-32768,
    83,-32768,    11,    99,-32768,   161,-32768,    99,    99,-32768,
-32768,-32768,   187,   173,   376,-32768,-32768,   374,   197,-32768,
-32768,    -4,   177,   -33,-32768,   167,   205,    99,-32768,   374,
    99,-32768,   210,    11,   376,    11,    11,-32768,-32768,   203,
    11,-32768,-32768,    75,-32768,    88,    -2,   208,-32768,    -4,
   376,    11,    11,-32768,   247,    -4,    -4,-32768,   253,   256,
-32768
};

static const short yypgoto[] = {-32768,
-32768,   139,-32768,-32768,   -52,-32768,    96,-32768,-32768,-32768,
-32768,-32768,-32768,     0,   110,-32768,-32768,-32768,-32768,   -40,
   170,-32768,-32768,    37,-32768,  -169,    43,-32768,   137,    -3,
   164,-32768,    68,  -182,   114,-32768
};


#define	YYLAST		528


static const short yytable[] = {    35,
    86,   211,    -3,     1,   -41,     3,   111,   -41,    54,    35,
   140,    35,    35,     1,    39,     3,    59,    74,   139,   141,
    94,   223,   157,   164,   158,   234,   235,   113,    77,    94,
    71,    52,   165,    35,    40,    94,   195,    41,    42,    80,
    81,    35,    36,    75,    94,   239,    37,    94,    35,    94,
   148,    38,   203,    94,    94,    55,    94,   169,   129,    43,
   204,    56,    57,    35,    35,    35,    35,    35,    35,    35,
   132,   130,    94,    35,   133,    60,    73,    35,    35,    35,
    89,    63,   251,    64,    87,   258,    44,    45,    97,    65,
    90,    95,   151,    91,   252,    35,    35,   253,    66,    35,
   191,     1,   217,     3,    67,   160,   121,   122,   123,   124,
   125,   126,   127,    94,    35,    47,    48,    68,    69,   220,
   135,   136,   137,   221,    70,    58,    77,    35,    35,    96,
    94,    61,   200,    35,    94,    78,    79,    80,    81,   152,
    99,   101,   155,   100,    77,   102,    82,    83,   112,   142,
   114,   128,    88,    78,    79,    80,    81,   172,   202,    77,
   134,   160,   206,    77,   144,   103,   104,   130,    77,   149,
   183,   184,    78,    79,    80,    81,   189,    78,    79,    80,
    81,   105,   170,   153,   213,   173,   145,   185,   115,   174,
   138,   187,    74,   193,    35,   106,   248,   197,   146,   147,
   219,   107,   108,   213,   228,   109,   150,   226,   227,    77,
   215,   156,   105,   229,    35,   116,   117,   233,    78,    79,
    80,    81,   171,   231,   176,   236,   106,   213,   241,    77,
   240,   237,   107,   108,    35,    77,   109,   218,    78,    79,
    80,    81,   177,   249,    78,    79,    80,    81,   254,   190,
    35,   192,   260,    77,   194,   261,   175,   230,   198,   199,
   178,   210,    78,    79,    80,    81,   201,   179,   154,   188,
   242,    77,   168,   224,   180,   205,     0,   244,    77,     0,
    78,    79,    80,    81,     0,    77,     0,    78,    79,    80,
    81,     0,     0,   255,    78,    79,    80,    81,    77,     0,
     0,     0,     0,     1,     2,     3,     0,    78,    79,    80,
    81,     0,   222,     4,   195,     5,     6,     7,     0,     0,
     8,     0,     0,     9,    10,    11,     0,    12,    13,     0,
    14,    15,    16,    17,    18,   181,     0,     0,     0,    19,
     0,     0,     0,    61,     0,   247,    77,    20,    21,     0,
   250,    22,     0,     0,    23,    78,    79,    80,    81,     0,
     0,   256,   257,     0,     0,     0,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,     1,     2,
     3,     0,     0,     0,     0,     0,     0,     0,     4,     0,
     5,     6,     7,     0,     0,     8,     0,   182,     9,    10,
    11,     0,    12,    49,     0,    14,    15,    16,    77,    18,
   212,     0,     0,     0,    19,     0,     0,    78,    79,    80,
    81,    77,    20,    21,     0,    77,    22,     0,     0,     0,
    78,    79,    80,    81,    78,    79,    80,    81,     0,     0,
     0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,     1,     2,     3,     0,     0,     0,     0,
     0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
     8,     0,   216,     9,    10,    11,     0,    12,    49,     0,
    14,    15,    16,    77,    18,     0,     0,     0,     0,    19,
     0,     0,    78,    79,    80,    81,     0,    20,    21,     0,
     0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    24,     0,    26,
    27,    28,    29,    30,    31,    32,    33,    34
};

static const short yycheck[] = {     0,
    41,   171,     0,     3,     7,     5,    59,    10,    12,    10,
    18,    12,    13,     3,     4,     5,    17,    27,    41,    18,
    52,   204,    18,    35,    41,    59,    60,     7,    52,    52,
    31,     3,    44,    34,    24,    52,    68,    27,    28,    63,
    64,    42,     0,    53,    52,   228,    27,    52,    49,    52,
    91,    27,    19,    52,    52,    13,    52,   110,    58,    49,
    27,    27,    27,    64,    65,    66,    67,    68,    69,    70,
    74,    72,    52,    74,    75,    27,    34,    78,    79,    80,
    14,    55,     8,    27,    42,   255,    76,    77,    12,    27,
    24,    49,    96,    27,     7,    96,    97,    10,    27,   100,
   141,     3,    41,     5,    27,   106,    64,    65,    66,    67,
    68,    69,    70,    52,   115,     6,     7,    27,    27,    41,
    78,    79,    80,    41,    27,    16,    52,   128,   129,    18,
    52,    22,    40,   134,    52,    61,    62,    63,    64,    97,
    18,    41,   100,    59,    52,    29,    37,    38,     4,    12,
    51,    27,    43,    61,    62,    63,    64,   115,   159,    52,
    27,   162,   163,    52,    41,    56,    57,   168,    52,    27,
   128,   129,    61,    62,    63,    64,   134,    61,    62,    63,
    64,    22,    41,    66,   185,     4,    29,    27,    29,     4,
    81,    41,    27,    66,   195,    36,   237,    41,    89,    90,
    66,    42,    43,   204,    18,    46,    29,   208,   209,    52,
    19,   102,    22,    41,   215,    56,    57,    41,    61,    62,
    63,    64,   113,    27,    41,    59,    36,   228,    19,    52,
   231,    27,    42,    43,   235,    52,    46,   195,    61,    62,
    63,    64,    41,    41,    61,    62,    63,    64,    41,   140,
   251,   142,     0,    52,   145,     0,   118,   215,   149,   150,
    41,   166,    61,    62,    63,    64,   157,    41,    99,   133,
   234,    52,   109,   206,    41,   162,    -1,   235,    52,    -1,
    61,    62,    63,    64,    -1,    52,    -1,    61,    62,    63,
    64,    -1,    -1,   251,    61,    62,    63,    64,    52,    -1,
    -1,    -1,    -1,     3,     4,     5,    -1,    61,    62,    63,
    64,    -1,   203,    13,    68,    15,    16,    17,    -1,    -1,
    20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    -1,
    30,    31,    32,    33,    34,    41,    -1,    -1,    -1,    39,
    -1,    -1,    -1,   234,    -1,   236,    52,    47,    48,    -1,
   241,    51,    -1,    -1,    54,    61,    62,    63,    64,    -1,
    -1,   252,   253,    -1,    -1,    -1,    -1,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,    77,     3,     4,
     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,
    15,    16,    17,    -1,    -1,    20,    -1,    41,    23,    24,
    25,    -1,    27,    28,    -1,    30,    31,    32,    52,    34,
    41,    -1,    -1,    -1,    39,    -1,    -1,    61,    62,    63,
    64,    52,    47,    48,    -1,    52,    51,    -1,    -1,    -1,
    61,    62,    63,    64,    61,    62,    63,    64,    -1,    -1,
    -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    76,    77,     3,     4,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    13,    -1,    15,    16,    17,    -1,    -1,
    20,    -1,    41,    23,    24,    25,    -1,    27,    28,    -1,
    30,    31,    32,    52,    34,    -1,    -1,    -1,    -1,    39,
    -1,    -1,    61,    62,    63,    64,    -1,    47,    48,    -1,
    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
    70,    71,    72,    73,    74,    75,    76,    77
};
#define YYPURE 1

/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "//usr/lib/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "//usr/lib/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 166 "stratego.grm"
{parse_tree = ATmake("Specification([<list>])", yyvsp[0].list);;
    break;}
case 2:
#line 167 "stratego.grm"
{parse_tree = yyvsp[0].list;
    break;}
case 3:
#line 168 "stratego.grm"
{parse_tree = App2("App", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 4:
#line 169 "stratego.grm"
{parse_tree = App1("Strategy",yyvsp[0].term);;
    break;}
case 5:
#line 172 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 6:
#line 173 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 7:
#line 174 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 8:
#line 177 "stratego.grm"
{yyval.term = App1("Dump", yyvsp[0].term);;
    break;}
case 9:
#line 178 "stratego.grm"
{yyval.term = App1("Load", yyvsp[0].term);;
    break;}
case 10:
#line 179 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 11:
#line 180 "stratego.grm"
{yyval.term = App1("Eval", yyvsp[0].term);;
    break;}
case 12:
#line 183 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 13:
#line 184 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 14:
#line 185 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 15:
#line 188 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 16:
#line 189 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 17:
#line 192 "stratego.grm"
{yyval.term = App1("Imports", (ATerm) yyvsp[0].list);;
    break;}
case 18:
#line 193 "stratego.grm"
{yyval.term = App1("Rules", (ATerm) yyvsp[0].list);;
    break;}
case 19:
#line 194 "stratego.grm"
{yyval.term = App1("Strategies", (ATerm) yyvsp[0].list);;
    break;}
case 20:
#line 195 "stratego.grm"
{yyval.term = App1("Signature", (ATerm) yyvsp[0].list);;
    break;}
case 21:
#line 196 "stratego.grm"
{yyval.term = App1("Overlays", (ATerm) yyvsp[0].list);;
    break;}
case 22:
#line 199 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 23:
#line 200 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 24:
#line 201 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 25:
#line 204 "stratego.grm"
{yyval.term = App1("Sorts", (ATerm) yyvsp[0].list);;
    break;}
case 26:
#line 205 "stratego.grm"
{yyval.term = App1("Operations", (ATerm) yyvsp[0].list);;
    break;}
case 27:
#line 208 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 28:
#line 209 "stratego.grm"
{yyval.list = ATinsert(yyvsp[-2].list, App2("Sort", yyvsp[-1].term, yyvsp[0].term));;
    break;}
case 29:
#line 211 "stratego.grm"
{yyval.term = ATmake("Nokind");;
    break;}
case 30:
#line 212 "stratego.grm"
{yyval.term = App1("Kinds", (ATerm) yyvsp[-1].list);;
    break;}
case 31:
#line 215 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 32:
#line 216 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 33:
#line 219 "stratego.grm"
{yyval.term = ATmake("Type");;
    break;}
case 34:
#line 220 "stratego.grm"
{yyval.term = ATmake("TypeList");;
    break;}
case 35:
#line 223 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 36:
#line 224 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 37:
#line 227 "stratego.grm"
{yyval.term = App2("OpDecl", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 38:
#line 230 "stratego.grm"
{yyval.term = App2("FunType", (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 39:
#line 231 "stratego.grm"
{yyval.term = App1("ConstType", yyvsp[0].term);;
    break;}
case 40:
#line 235 "stratego.grm"
{yyval.list = ATappend(yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 41:
#line 236 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 42:
#line 239 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 43:
#line 240 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 44:
#line 245 "stratego.grm"
{if(ATisEmpty(yyvsp[0].list)) 
					   yyval.term = App1("Var", yyvsp[-1].term);
					 else
					   yyval.term = App3("Con", 
						      App1("Var", yyvsp[-1].term), ATgetFirst(yyvsp[0].list), 
						      ATgetFirst(ATgetNext(yyvsp[0].list)));;
    break;}
case 45:
#line 252 "stratego.grm"
{yyval.term = ATmake("Wld");;
    break;}
case 46:
#line 254 "stratego.grm"
{yyval.term = App1("BuildDefault", yyvsp[0].term);;
    break;}
case 47:
#line 256 "stratego.grm"
{yyval.term = App1("Int", (ATerm) ATmakeInt(yyvsp[0].num));;
    break;}
case 48:
#line 257 "stratego.grm"
{yyval.term = App1("Real", (ATerm) ATmakeReal(yyvsp[0].real));;
    break;}
case 49:
#line 258 "stratego.grm"
{yyval.term = App1("Str", yyvsp[0].term);;
    break;}
case 50:
#line 259 "stratego.grm"
{yyval.term = App2("Op", yyvsp[-1].term, (ATerm) yyvsp[0].list);;
    break;}
case 51:
#line 260 "stratego.grm"
{yyval.term = App2("As", App1("Var", yyvsp[-2].term), yyvsp[0].term);;
    break;}
case 52:
#line 261 "stratego.grm"
{yyval.term = App2("App", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 53:
#line 262 "stratego.grm"
{yyval.term = list_to_consnil_op_tl(yyvsp[-2].list, yyvsp[-1].term);;
    break;}
case 54:
#line 263 "stratego.grm"
{yyval.term = list_to_tconstnil_op(yyvsp[-1].list);;
    break;}
case 55:
#line 265 "stratego.grm"
{yyval.term = App2("Explode", yyvsp[-4].term, yyvsp[-1].term);
    break;}
case 56:
#line 268 "stratego.grm"
{yyval.term = ATmake("Op(\"Nil\",[])");;
    break;}
case 57:
#line 269 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 58:
#line 272 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 59:
#line 274 "stratego.grm"
{yyval.list = ATmakeList2(yyvsp[-3].term, App2("Call", yyvsp[0].term, (ATerm) ATmakeList0()));;
    break;}
case 60:
#line 277 "stratego.grm"
{yyval.term = ATmake("SVar(\"oncetd\")"); ;
    break;}
case 61:
#line 278 "stratego.grm"
{yyval.term = App1("SVar", yyvsp[-1].term);;
    break;}
case 62:
#line 281 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 63:
#line 282 "stratego.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 64:
#line 285 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 65:
#line 286 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 66:
#line 287 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 67:
#line 290 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 68:
#line 291 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 69:
#line 292 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 70:
#line 297 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 71:
#line 298 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 72:
#line 302 "stratego.grm"
{yyval.term = App3("RDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, (ATerm) yyvsp[0].term);;
    break;}
case 73:
#line 304 "stratego.grm"
{yyval.term = App3("RDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, (ATerm) yyvsp[0].term);;
    break;}
case 74:
#line 307 "stratego.grm"
{yyval.term = App3("Rule", yyvsp[-3].term, yyvsp[-1].term, yyvsp[0].term);	;
    break;}
case 75:
#line 311 "stratego.grm"
{yyval.term = App3("StratRule", yyvsp[-3].term, yyvsp[-1].term, yyvsp[0].term);	;
    break;}
case 76:
#line 314 "stratego.grm"
{yyval.term = ATmake("Id");;
    break;}
case 77:
#line 315 "stratego.grm"
{yyval.term = App1("Where", yyvsp[0].term);;
    break;}
case 78:
#line 321 "stratego.grm"
{yyval.term = ATmake("Id");;
    break;}
case 79:
#line 322 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 80:
#line 325 "stratego.grm"
{yyval.term = App2("Call", App1("SVar", yyvsp[-1].term), (ATerm) yyvsp[0].list);;
    break;}
case 81:
#line 328 "stratego.grm"
{yyval.term = App2("Call", App1("SVar", App2("Mod", yyvsp[-3].term, yyvsp[-1].term)), (ATerm)yyvsp[0].list);;
    break;}
case 82:
#line 331 "stratego.grm"
{yyval.term = App2("ExplodeCong", yyvsp[-4].term, yyvsp[-1].term);
    break;}
case 83:
#line 333 "stratego.grm"
{yyval.term = App1("Match", yyvsp[-1].term);;
    break;}
case 84:
#line 335 "stratego.grm"
{yyval.term = App1("Match", yyvsp[-1].term);;
    break;}
case 85:
#line 339 "stratego.grm"
{yyval.term = App1("Match", yyvsp[0].term);;
    break;}
case 86:
#line 341 "stratego.grm"
{yyval.term = App1("Build", yyvsp[-1].term);;
    break;}
case 87:
#line 342 "stratego.grm"
{yyval.term = App1("Build", yyvsp[0].term);;
    break;}
case 88:
#line 345 "stratego.grm"
{yyval.term = App2("AnnMatch", yyvsp[-3].term, yyvsp[-1].term);;
    break;}
case 89:
#line 347 "stratego.grm"
{yyval.term = App2("AnnBuild", yyvsp[-3].term, yyvsp[-1].term);;
    break;}
case 90:
#line 348 "stratego.grm"
{yyval.term = App1("AnnRemove", yyvsp[0].term);;
    break;}
case 91:
#line 350 "stratego.grm"
{yyval.term = ATmake("Prim(\"new\")");;
    break;}
case 92:
#line 351 "stratego.grm"
{yyval.term = ATmake("Prim(\"str_gt\")");;
    break;}
case 93:
#line 352 "stratego.grm"
{yyval.term = ATmake("Prim(\"kids\")");;
    break;}
case 94:
#line 353 "stratego.grm"
{yyval.term = App1("Prim", yyvsp[-1].term);;
    break;}
case 95:
#line 355 "stratego.grm"
{yyval.term = App1("LRule", yyvsp[-1].term);;
    break;}
case 96:
#line 356 "stratego.grm"
{yyval.term = App2("BA", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 97:
#line 358 "stratego.grm"
{yyval.term = App2("AM", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 98:
#line 361 "stratego.grm"
{yyval.term = ATmake("Fail");;
    break;}
case 99:
#line 362 "stratego.grm"
{yyval.term = ATmake("Id");;
    break;}
case 100:
#line 363 "stratego.grm"
{yyval.term = App2("Path", (ATerm) ATmakeInt(yyvsp[-1].num), yyvsp[0].term); ;
    break;}
case 101:
#line 364 "stratego.grm"
{yyval.term = App1("Not", yyvsp[-1].term);;
    break;}
case 102:
#line 365 "stratego.grm"
{yyval.term = App1("Where", yyvsp[-1].term);;
    break;}
case 103:
#line 366 "stratego.grm"
{yyval.term = App1("Test", yyvsp[-1].term);;
    break;}
case 104:
#line 368 "stratego.grm"
{yyval.term = App2("Scope", (ATerm) yyvsp[-3].list, yyvsp[-1].term);;
    break;}
case 105:
#line 369 "stratego.grm"
{yyval.term = App2("Seq", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 106:
#line 370 "stratego.grm"
{yyval.term = App2("Choice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 107:
#line 371 "stratego.grm"
{yyval.term = App2("LChoice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 108:
#line 372 "stratego.grm"
{yyval.term = App2("Rec", yyvsp[-3].term, yyvsp[-1].term);;
    break;}
case 109:
#line 373 "stratego.grm"
{yyval.term = App1("Some", yyvsp[-1].term);;
    break;}
case 110:
#line 374 "stratego.grm"
{yyval.term = App1("One", yyvsp[-1].term);;
    break;}
case 111:
#line 375 "stratego.grm"
{yyval.term = App1("All", yyvsp[-1].term);;
    break;}
case 112:
#line 376 "stratego.grm"
{yyval.term = App1("Thread", yyvsp[-1].term);;
    break;}
case 113:
#line 377 "stratego.grm"
{yyval.term = tuple_cong(yyvsp[-1].list);;
    break;}
case 114:
#line 379 "stratego.grm"
{yyval.term = list_cong(yyvsp[-2].list, yyvsp[-1].term);;
    break;}
case 115:
#line 380 "stratego.grm"
{yyval.term = App1("Match", App1("Str", yyvsp[0].term));;
    break;}
case 116:
#line 381 "stratego.grm"
{yyval.term = App1("Match", 
					      App1("Int", (ATerm) ATmakeInt(yyvsp[0].num)));;
    break;}
case 117:
#line 383 "stratego.grm"
{yyval.term = App1("Match", 
					      App1("Real", (ATerm) ATmakeReal(yyvsp[0].real)));;
    break;}
case 118:
#line 385 "stratego.grm"
{yyval.term = App2("Let", yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 119:
#line 389 "stratego.grm"
{yyval.term = ATmake("Call(SVar(\"Nil\"),[])");;
    break;}
case 120:
#line 390 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 121:
#line 394 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 122:
#line 395 "stratego.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 123:
#line 399 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 124:
#line 400 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 125:
#line 401 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 126:
#line 407 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 127:
#line 408 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 128:
#line 412 "stratego.grm"
{yyval.term = App3("SDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 129:
#line 416 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 130:
#line 417 "stratego.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 131:
#line 420 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 132:
#line 421 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 133:
#line 422 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 134:
#line 425 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 135:
#line 426 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-1].term);;
    break;}
case 136:
#line 430 "stratego.grm"
{yyval.term = App3("Overlay", yyvsp[-5].term, (ATerm) yyvsp[-3].list, yyvsp[0].term);;
    break;}
case 137:
#line 431 "stratego.grm"
{yyval.term = App3("Overlay", yyvsp[-2].term, (ATerm) ATmakeList0(), yyvsp[0].term);;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "//usr/lib/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 436 "stratego.grm"
