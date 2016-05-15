
/*  A Bison parser, made from stratego.grm
 by  GNU Bison version 1.27
  */

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
#define	OPERATIONS	289
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
#define	COLON	308
#define	DOUBLECOLON	309
#define	PLUS	310
#define	LTPLUS	311
#define	SEMICOLON	312
#define	DOUBLEARROW	313
#define	LEFTDOUBLEARROW	314
#define	RBRACK	315
#define	NOT	316
#define	WHERE	317
#define	TEST	318
#define	ONE	319
#define	ALL	320
#define	THREAD	321
#define	SOMETOK	322
#define	MU	323
#define	REAL	324
#define	INT	325

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



#define	YYFINAL		251
#define	YYFLAG		-32768
#define	YYNTBASE	72

#define YYTRANSLATE(x) ((unsigned)(x) <= 325 ? yytranslate[x] : 108)

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
    67,    68,    69,    70,    71
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     4,     9,    11,    13,    16,    17,    18,    21,    24,
    27,    30,    33,    36,    38,    41,    42,    45,    48,    49,
    53,    54,    58,    60,    63,    65,    67,    68,    71,    75,
    79,    81,    85,    87,    89,    91,    94,    96,    99,   101,
   103,   105,   108,   112,   117,   122,   126,   132,   133,   136,
   137,   143,   144,   148,   149,   153,   155,   159,   160,   162,
   166,   167,   168,   171,   176,   181,   186,   191,   192,   195,
   196,   199,   202,   207,   213,   218,   223,   227,   232,   235,
   242,   249,   252,   254,   256,   258,   263,   267,   271,   276,
   280,   282,   284,   287,   292,   297,   302,   308,   312,   316,
   320,   326,   331,   336,   341,   346,   350,   355,   357,   359,
   361,   362,   365,   366,   370,   371,   373,   377,   378,   381,
   386,   387,   391,   392,   394,   398,   399,   402,   409
};

static const short yyrhs[] = {    33,
    84,    73,     0,    24,    98,    61,    85,     0,    98,     0,
    75,     0,    73,    75,     0,     0,     0,    74,    84,     0,
    22,    74,     0,    42,    92,     0,    46,   102,     0,    43,
    76,     0,    36,   106,     0,    77,     0,    76,    77,     0,
     0,    44,    78,     0,    35,    80,     0,     0,    78,    84,
    79,     0,     0,    27,    90,    41,     0,     0,     0,     0,
     0,     0,    10,     0,    45,     0,     0,    80,    81,     0,
    84,    54,    82,     0,    83,     7,    85,     0,    85,     0,
    83,    10,    85,     0,    85,     0,     3,     0,     5,     0,
    84,    87,     0,    49,     0,    49,    85,     0,    71,     0,
    70,     0,     4,     0,    84,    89,     0,    84,    14,    85,
     0,    28,    98,    29,    85,     0,    24,    90,    86,    61,
     0,    27,    90,    41,     0,    85,    52,    27,    85,    41,
     0,     0,    12,    85,     0,     0,    24,    85,    96,    61,
    88,     0,     0,    27,    84,    41,     0,     0,    27,    90,
    41,     0,    85,     0,    85,    18,    90,     0,     0,     3,
     0,     3,    18,    91,     0,     0,     0,    92,    93,     0,
    84,   104,    54,    94,     0,    84,   104,    55,    95,     0,
    85,     7,    85,    96,     0,    98,     8,    98,    96,     0,
     0,    63,    98,     0,     0,    60,    98,     0,    84,   100,
     0,    84,    53,    84,   100,     0,    98,    52,    27,    98,
    41,     0,    31,    27,    85,    41,     0,    31,    27,    85,
    41,     0,    32,    85,    97,     0,    13,    27,    85,    41,
     0,    17,    85,     0,    30,    27,    85,    18,    85,    41,
     0,    15,    27,    85,    18,    85,    41,     0,    16,    85,
     0,    34,     0,    47,     0,    23,     0,    39,    27,     4,
    41,     0,    26,    94,    21,     0,    51,    94,    51,     0,
    28,    98,    29,    85,     0,    98,    59,    85,     0,    20,
     0,    48,     0,    71,    98,     0,    62,    27,    98,    41,
     0,    63,    27,    98,    41,     0,    64,    27,    98,    41,
     0,    25,    91,    54,    98,    40,     0,    98,    58,    98,
     0,    98,    56,    98,     0,    98,    57,    98,     0,    69,
     3,    27,    98,    41,     0,    68,    27,    98,    41,     0,
    65,    27,    98,    41,     0,    66,    27,    98,    41,     0,
    67,    27,    98,    41,     0,    27,   101,    41,     0,    24,
   101,    99,    61,     0,     4,     0,    71,     0,    70,     0,
     0,    12,    98,     0,     0,    27,   101,    41,     0,     0,
    98,     0,    98,    18,   101,     0,     0,   102,   103,     0,
    84,   104,    19,    98,     0,     0,    27,   105,    41,     0,
     0,    84,     0,    84,    18,   105,     0,     0,   107,   106,
     0,    84,    27,   105,    41,    19,    85,     0,    84,    19,
    85,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   156,   157,   158,   161,   162,   163,   166,   167,   170,   171,
   172,   173,   174,   177,   178,   179,   182,   183,   186,   187,
   189,   190,   193,   194,   197,   198,   201,   202,   205,   208,
   209,   213,   214,   217,   218,   223,   230,   232,   234,   235,
   236,   237,   238,   239,   240,   241,   242,   246,   247,   250,
   251,   255,   256,   259,   260,   263,   264,   265,   268,   269,
   270,   275,   276,   280,   281,   285,   288,   292,   293,   299,
   300,   303,   305,   308,   311,   313,   315,   319,   320,   322,
   324,   326,   328,   329,   330,   331,   333,   334,   335,   337,
   340,   341,   342,   343,   344,   345,   346,   348,   349,   350,
   351,   352,   353,   354,   355,   356,   357,   359,   360,   362,
   367,   368,   372,   373,   377,   378,   379,   385,   386,   390,
   394,   395,   398,   399,   400,   403,   404,   407,   409
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","LCID","STRINGTOK",
"UCID","ID","ARROW","LONGARROW","ASSIGN","ASTERISK","BACKARROW","BAR","BUILD",
"AS","ANNBUILD","ANNRM","BUILDe","COMMA","EQ","FAIL","GG","IMPORTS","KIDS","LBRACK",
"LCURLY","LL","LPAREN","LT","GT","ANNMATCH","MATCH","MATCHe","MODULE","NEW",
"OPERATIONS","OVERLAYS","PARSEPROG","PARSEQUERY","PRIM","RCURLY","RPAREN","RULES",
"SIGNATURE","SORTS","STARSTAR","STRATEGIES","STR_GT","SUCC","UNDERSCORE","DOT",
"BACKSLASH","EXPLODE","MODIFIER","COLON","DOUBLECOLON","PLUS","LTPLUS","SEMICOLON",
"DOUBLEARROW","LEFTDOUBLEARROW","RBRACK","NOT","WHERE","TEST","ONE","ALL","THREAD",
"SOMETOK","MU","REAL","INT","start","decls","mods","decl","sdecls","sdecl","idlist",
"optkind","opdecls","opdecl","type","typelist","id","term","tail","optcont",
"trav","opttermlist","termlist","tvarlist","rules","rule_def","rule","stratrule",
"optcond","optapplication","strategy","strategytail","optstrategylist","strategylist",
"strategies","strategy_def","optvarlist","varlist","overlays","overlay", NULL
};
#endif

static const short yyr1[] = {     0,
    72,    72,    72,    73,    73,    73,    74,    74,    75,    75,
    75,    75,    75,    76,    76,    76,    77,    77,    78,    78,
    79,    79,    -1,    -1,    -1,    -1,    80,    80,    81,    82,
    82,    83,    83,    84,    84,    85,    85,    85,    85,    85,
    85,    85,    85,    85,    85,    85,    85,    86,    86,    87,
    87,    88,    88,    89,    89,    90,    90,    90,    91,    91,
    91,    92,    92,    93,    93,    94,    95,    96,    96,    97,
    97,    98,    98,    98,    98,    98,    98,    98,    98,    98,
    98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
    98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
    98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
    99,    99,   100,   100,   101,   101,   101,   102,   102,   103,
   104,   104,   105,   105,   105,   106,   106,   107,   107
};

static const short yyr2[] = {     0,
     3,     4,     1,     1,     2,     0,     0,     2,     2,     2,
     2,     2,     2,     1,     2,     0,     2,     2,     0,     3,
     0,     3,     1,     2,     1,     1,     0,     2,     3,     3,
     1,     3,     1,     1,     1,     2,     1,     2,     1,     1,
     1,     2,     3,     4,     4,     3,     5,     0,     2,     0,
     5,     0,     3,     0,     3,     1,     3,     0,     1,     3,
     0,     0,     2,     4,     4,     4,     4,     0,     2,     0,
     2,     2,     4,     5,     4,     4,     3,     4,     2,     6,
     6,     2,     1,     1,     1,     4,     3,     3,     4,     3,
     1,     1,     2,     4,     4,     4,     5,     3,     3,     3,
     5,     4,     4,     4,     4,     3,     4,     1,     1,     1,
     0,     2,     0,     3,     0,     1,     3,     0,     2,     4,
     0,     3,     0,     1,     3,     0,     2,     6,     3
};

static const short yydefact[] = {     0,
    34,   108,    35,     0,     0,     0,     0,    91,    85,   115,
    61,     0,   115,     0,     0,     0,     0,     0,    83,     0,
    84,    92,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   110,   109,   113,     3,     0,     0,    41,    58,    58,
     0,    37,    40,    39,    50,    82,    79,   115,   116,   111,
    59,     0,     0,     0,   116,     0,     0,     0,     0,    70,
     6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    93,   115,     0,    72,     0,     0,     0,     0,     0,
     0,     0,    56,    48,     0,     0,    38,     0,     0,    58,
    36,    42,     0,   115,     0,     0,     0,    61,     0,     0,
    87,   106,     0,     0,     0,     0,    77,     7,   126,    62,
    16,   118,     1,     4,     0,    88,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   113,     0,    99,   100,    98,
    90,    78,     0,    58,     0,     0,    46,     0,    43,    68,
     0,     0,   117,     2,   112,   107,    60,     0,    68,    89,
     0,    75,    71,     9,     0,    13,   126,    10,    27,    19,
    12,    14,    11,     5,    86,    94,    95,    96,   103,   104,
   105,   102,     0,   114,    73,     0,     0,    57,    49,    45,
    44,     0,     0,    55,     0,    97,    66,     0,     8,     0,
   123,   127,   121,    63,    18,    17,    15,   121,   119,   101,
    74,    81,    69,    52,    47,    80,   129,   124,     0,   123,
     0,    28,     0,    21,     0,     0,    51,   123,     0,     0,
     0,     0,     0,    58,    20,     0,     0,   125,     0,   122,
    64,    65,     0,    29,     0,    31,     0,   120,    53,   128,
     0,     0,     0,    22,    68,    30,    32,    67,     0,     0,
     0
};

static const short yydefgoto[] = {   249,
   113,   154,   114,   161,   162,   196,   225,   195,   212,   234,
   235,    45,    83,   136,    91,   217,    92,    84,    52,   158,
   194,    54,   232,   183,   107,    55,    97,    75,    50,   163,
   199,   211,   209,   156,   157
};

static const short yypact[] = {   282,
-32768,-32768,-32768,    -5,    23,    12,    12,-32768,-32768,   355,
    17,    12,   355,   355,    49,    61,    12,    16,-32768,    68,
-32768,-32768,    12,    81,    86,    96,   102,   108,   111,   113,
   146,-32768,   424,   -21,   187,    12,    12,-32768,    12,    12,
   355,    12,-32768,-32768,    48,   -47,   -47,   355,    28,   152,
   156,   121,    -3,   155,    87,   136,   103,    12,    12,    70,
     1,   177,   132,   355,   355,   355,   355,   355,   355,   355,
   157,   133,   355,    16,-32768,   159,   355,   355,   355,    12,
   -14,   -10,     7,   176,   148,   175,   -47,    12,    12,    12,
-32768,-32768,   163,   355,    12,   355,   131,    17,   355,    12,
-32768,-32768,    12,     8,    -7,   355,-32768,-32768,    16,-32768,
    46,-32768,     1,-32768,   160,-32768,   201,   210,   220,   232,
   352,   421,   444,   355,   164,   166,   355,   187,   187,    89,
   -47,-32768,    12,    12,    12,   137,-32768,    12,   -47,    39,
   165,    12,-32768,   -47,   187,-32768,-32768,    60,    39,   -47,
    12,-32768,   133,    16,   106,-32768,    16,    16,-32768,-32768,
    46,-32768,    16,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   456,-32768,-32768,   464,    11,-32768,   -47,-32768,
   -47,   355,   147,-32768,    52,-32768,-32768,    62,-32768,    12,
    16,-32768,   184,-32768,    16,    16,-32768,   184,-32768,-32768,
-32768,-32768,   187,   185,-32768,-32768,   -47,   195,   174,    16,
    98,-32768,   167,   192,   204,    16,-32768,    16,   205,   179,
    12,   355,    12,    12,-32768,   355,   188,-32768,    12,-32768,
-32768,-32768,    -1,-32768,   100,     2,   189,   187,-32768,   -47,
   355,    12,    12,-32768,   -28,   -47,   -47,-32768,   235,   236,
-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,   124,-32768,    77,-32768,-32768,-32768,-32768,-32768,
-32768,     0,   114,-32768,-32768,-32768,-32768,   -37,   142,-32768,
-32768,   -22,-32768,  -147,-32768,   101,-32768,   122,    -2,-32768,
-32768,    56,   -82,    93,-32768
};


#define	YYLAST		523


static const short yytable[] = {    34,
    63,   187,    85,   100,    93,    73,   241,   133,   -33,    34,
    56,   -33,    34,    34,     1,    38,     3,    61,     1,    51,
     3,    36,   108,    76,   134,   151,   132,    77,    78,    79,
    80,    74,    34,   152,   182,    39,   109,    93,    40,    41,
    34,    93,   110,   111,    93,    94,   112,    34,    93,    37,
    76,   202,   141,    93,    77,    78,    79,    80,    93,    93,
    42,    88,    93,    34,    34,    34,    34,    34,    34,    34,
   125,    89,    34,   126,    90,    58,    34,    34,    34,    76,
   159,    43,    44,    77,    78,    79,    80,    59,    95,   160,
    93,   143,   205,    34,    62,    34,   178,   248,    34,   186,
    35,   182,   206,    93,    94,    34,   242,    64,   155,   243,
    49,    76,    65,    93,    57,    77,    78,    79,    80,    46,
    47,    93,    66,    34,   190,    53,    34,   220,    67,   106,
    60,   103,   191,    72,    68,   228,    53,    69,    76,    70,
    76,    86,    77,    78,    79,    80,    79,    80,    71,    81,
    82,   221,   222,   189,    76,    87,   155,   193,    77,    78,
    79,    80,   198,    96,   117,   118,   119,   120,   121,   122,
   123,   104,   105,    98,    99,   101,   102,   128,   129,   130,
   115,    34,   116,   124,    76,   127,   237,   135,   137,   142,
   208,   146,    73,   131,   213,   214,   145,   180,   231,   148,
   165,   139,   140,   138,   174,   184,   153,   204,   144,   208,
   210,   216,   218,   149,   219,   227,   150,   208,   224,   230,
   223,    34,   226,   229,   173,    34,    76,   176,   239,   244,
    77,    78,    79,    80,   250,   251,   164,   197,    76,   147,
    34,   166,    77,    78,    79,    80,   177,   175,   179,   192,
   167,   181,    76,   215,     0,   185,    77,    78,    79,    80,
   168,    76,     0,     0,   188,    77,    78,    79,    80,     0,
     0,    76,   169,     0,     0,    77,    78,    79,    80,     0,
     0,     0,   203,    76,     1,     2,     3,    77,    78,    79,
    80,     0,     0,     0,     4,     0,     5,     6,     7,     0,
     0,     8,     0,   207,     9,    10,    11,    12,    13,    14,
     0,    15,    16,    17,    18,    19,     0,     0,     0,     0,
    20,     0,   233,     0,     0,     0,   238,     0,    21,    22,
     0,     0,    23,     0,    53,     0,   236,     0,     0,     0,
     0,   245,   240,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,     0,     0,   246,   247,     1,     2,     3,
     0,     0,     0,     0,     0,     0,     0,     4,     0,     5,
     6,     7,     0,     0,     8,     0,     0,     9,    48,    11,
    12,    13,    14,     0,    15,    16,    17,     0,    19,     0,
     0,     0,   170,    20,     0,     0,     0,     0,     0,     0,
     0,    21,    22,    76,     0,    23,     0,    77,    78,    79,
    80,     0,     0,     0,     0,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,     1,     2,     3,     0,
     0,     0,     0,     0,     0,     0,     4,     0,     5,     6,
     7,     0,     0,     8,     0,     0,     9,    48,    11,    12,
    13,    14,     0,    15,    16,    17,     0,    19,     0,     0,
     0,   171,    20,     0,     0,     0,     0,     0,     0,     0,
    21,    22,    76,     0,    23,     0,    77,    78,    79,    80,
     0,     0,     0,     0,   172,    24,     0,    26,    27,    28,
    29,    30,    31,    32,    33,    76,   200,     0,     0,    77,
    78,    79,    80,     0,   201,     0,     0,    76,     0,     0,
     0,    77,    78,    79,    80,    76,     0,     0,     0,    77,
    78,    79,    80
};

static const short yycheck[] = {     0,
    23,   149,    40,     7,    52,    27,     8,    18,     7,    10,
    13,    10,    13,    14,     3,     4,     5,    18,     3,     3,
     5,    27,    22,    52,    18,    18,    41,    56,    57,    58,
    59,    53,    33,    41,    63,    24,    36,    52,    27,    28,
    41,    52,    42,    43,    52,    18,    46,    48,    52,    27,
    52,    41,    90,    52,    56,    57,    58,    59,    52,    52,
    49,    14,    52,    64,    65,    66,    67,    68,    69,    70,
    73,    24,    73,    74,    27,    27,    77,    78,    79,    52,
    35,    70,    71,    56,    57,    58,    59,    27,    61,    44,
    52,    94,    41,    94,    27,    96,   134,   245,    99,    40,
     0,    63,    41,    52,    18,   106,     7,    27,   109,    10,
    10,    52,    27,    52,    14,    56,    57,    58,    59,     6,
     7,    52,    27,   124,    19,    12,   127,   210,    27,    60,
    17,    29,    27,    33,    27,   218,    23,    27,    52,    27,
    52,    41,    56,    57,    58,    59,    58,    59,     3,    36,
    37,    54,    55,   154,    52,    42,   157,   158,    56,    57,
    58,    59,   163,    12,    64,    65,    66,    67,    68,    69,
    70,    58,    59,    18,    54,    21,    41,    77,    78,    79,
     4,   182,    51,    27,    52,    27,   224,    12,    41,    27,
   191,    61,    27,    80,   195,   196,    96,    61,   221,    99,
    41,    88,    89,    29,    41,    41,   106,    61,    95,   210,
    27,    27,    18,   100,    41,   216,   103,   218,    27,    41,
    54,   222,    19,    19,   124,   226,    52,   127,    41,    41,
    56,    57,    58,    59,     0,     0,   113,   161,    52,    98,
   241,    41,    56,    57,    58,    59,   133,   126,   135,   157,
    41,   138,    52,   198,    -1,   142,    56,    57,    58,    59,
    41,    52,    -1,    -1,   151,    56,    57,    58,    59,    -1,
    -1,    52,    41,    -1,    -1,    56,    57,    58,    59,    -1,
    -1,    -1,   182,    52,     3,     4,     5,    56,    57,    58,
    59,    -1,    -1,    -1,    13,    -1,    15,    16,    17,    -1,
    -1,    20,    -1,   190,    23,    24,    25,    26,    27,    28,
    -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
    39,    -1,   222,    -1,    -1,    -1,   226,    -1,    47,    48,
    -1,    -1,    51,    -1,   221,    -1,   223,    -1,    -1,    -1,
    -1,   241,   229,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    -1,    -1,   242,   243,     3,     4,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    15,
    16,    17,    -1,    -1,    20,    -1,    -1,    23,    24,    25,
    26,    27,    28,    -1,    30,    31,    32,    -1,    34,    -1,
    -1,    -1,    41,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    47,    48,    52,    -1,    51,    -1,    56,    57,    58,
    59,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,     3,     4,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    15,    16,
    17,    -1,    -1,    20,    -1,    -1,    23,    24,    25,    26,
    27,    28,    -1,    30,    31,    32,    -1,    34,    -1,    -1,
    -1,    41,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    47,    48,    52,    -1,    51,    -1,    56,    57,    58,    59,
    -1,    -1,    -1,    -1,    41,    62,    -1,    64,    65,    66,
    67,    68,    69,    70,    71,    52,    41,    -1,    -1,    56,
    57,    58,    59,    -1,    41,    -1,    -1,    52,    -1,    -1,
    -1,    56,    57,    58,    59,    52,    -1,    -1,    -1,    56,
    57,    58,    59
};
#define YYPURE 1

/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/lib/bison.simple"
/* This file comes from bison-1.27.  */

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

#line 216 "/usr/lib/bison.simple"

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
#line 156 "stratego.grm"
{parse_tree = ATmake("Specification([<list>])", yyvsp[0].list);;
    break;}
case 2:
#line 157 "stratego.grm"
{parse_tree = App2("Trm", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 3:
#line 158 "stratego.grm"
{parse_tree = App1("Strategy",yyvsp[0].term);;
    break;}
case 4:
#line 161 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 5:
#line 162 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 6:
#line 163 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 7:
#line 166 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 8:
#line 167 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 9:
#line 170 "stratego.grm"
{yyval.term = App1("Imports", (ATerm) yyvsp[0].list);;
    break;}
case 10:
#line 171 "stratego.grm"
{yyval.term = App1("Rules", (ATerm) yyvsp[0].list);;
    break;}
case 11:
#line 172 "stratego.grm"
{yyval.term = App1("Strategies", (ATerm) yyvsp[0].list);;
    break;}
case 12:
#line 173 "stratego.grm"
{yyval.term = App1("Signature", (ATerm) yyvsp[0].list);;
    break;}
case 13:
#line 174 "stratego.grm"
{yyval.term = App1("Overlays", (ATerm) yyvsp[0].list);;
    break;}
case 14:
#line 177 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 15:
#line 178 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 16:
#line 179 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 17:
#line 182 "stratego.grm"
{yyval.term = App1("Sorts", (ATerm) yyvsp[0].list);;
    break;}
case 18:
#line 183 "stratego.grm"
{yyval.term = App1("Operations", (ATerm) yyvsp[0].list);;
    break;}
case 19:
#line 186 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 20:
#line 187 "stratego.grm"
{yyval.list = ATinsert(yyvsp[-2].list, App2("Sort", yyvsp[-1].term, yyvsp[0].term));;
    break;}
case 21:
#line 189 "stratego.grm"
{yyval.term = ATmake("Nokind");;
    break;}
case 22:
#line 190 "stratego.grm"
{yyval.term = App1("Kinds", (ATerm) yyvsp[-1].list);;
    break;}
case 23:
#line 193 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 24:
#line 194 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 25:
#line 197 "stratego.grm"
{yyval.term = ATmake("Type");;
    break;}
case 26:
#line 198 "stratego.grm"
{yyval.term = ATmake("TypeList");;
    break;}
case 27:
#line 201 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 28:
#line 202 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 29:
#line 205 "stratego.grm"
{yyval.term = App2("OpDecl", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 30:
#line 208 "stratego.grm"
{yyval.term = App2("FunType", (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 31:
#line 209 "stratego.grm"
{yyval.term = App1("ConstType", yyvsp[0].term);;
    break;}
case 32:
#line 213 "stratego.grm"
{yyval.list = ATappend(yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 33:
#line 214 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 34:
#line 217 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 35:
#line 218 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 36:
#line 223 "stratego.grm"
{if(ATisEmpty(yyvsp[0].list)) 
					   yyval.term = App1("Var", yyvsp[-1].term);
					 else
					   yyval.term = App3("Con", 
						      App1("Var", yyvsp[-1].term), ATgetFirst(yyvsp[0].list), 
						      ATgetFirst(ATgetNext(yyvsp[0].list)));;
    break;}
case 37:
#line 230 "stratego.grm"
{yyval.term = ATmake("Wld");;
    break;}
case 38:
#line 232 "stratego.grm"
{yyval.term = App1("BuildDefault", yyvsp[0].term);;
    break;}
case 39:
#line 234 "stratego.grm"
{yyval.term = App1("Int", (ATerm) ATmakeInt(yyvsp[0].num));;
    break;}
case 40:
#line 235 "stratego.grm"
{yyval.term = App1("Real", (ATerm) ATmakeReal(yyvsp[0].real));;
    break;}
case 41:
#line 236 "stratego.grm"
{yyval.term = App1("Str", yyvsp[0].term);;
    break;}
case 42:
#line 237 "stratego.grm"
{yyval.term = App2("Op", yyvsp[-1].term, (ATerm) yyvsp[0].list);;
    break;}
case 43:
#line 238 "stratego.grm"
{yyval.term = App2("As", App1("Var", yyvsp[-2].term), yyvsp[0].term);;
    break;}
case 44:
#line 239 "stratego.grm"
{yyval.term = App2("App", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 45:
#line 240 "stratego.grm"
{yyval.term = list_to_consnil_op_tl(yyvsp[-2].list, yyvsp[-1].term);;
    break;}
case 46:
#line 241 "stratego.grm"
{yyval.term = list_to_tconstnil_op(yyvsp[-1].list);;
    break;}
case 47:
#line 243 "stratego.grm"
{yyval.term = App2("Explode", yyvsp[-4].term, yyvsp[-1].term);
    break;}
case 48:
#line 246 "stratego.grm"
{yyval.term = ATmake("Op(\"Nil\",[])");;
    break;}
case 49:
#line 247 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 50:
#line 250 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 51:
#line 252 "stratego.grm"
{yyval.list = ATmakeList2(yyvsp[-3].term, App2("Call", yyvsp[0].term, (ATerm) ATmakeList0()));;
    break;}
case 52:
#line 255 "stratego.grm"
{yyval.term = ATmake("SVar(\"oncetd\")"); ;
    break;}
case 53:
#line 256 "stratego.grm"
{yyval.term = App1("SVar", yyvsp[-1].term);;
    break;}
case 54:
#line 259 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 55:
#line 260 "stratego.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 56:
#line 263 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 57:
#line 264 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 58:
#line 265 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 59:
#line 268 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 60:
#line 269 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 61:
#line 270 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 62:
#line 275 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 63:
#line 276 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 64:
#line 280 "stratego.grm"
{yyval.term = App3("RDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, (ATerm) yyvsp[0].term);;
    break;}
case 65:
#line 282 "stratego.grm"
{yyval.term = App3("RDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, (ATerm) yyvsp[0].term);;
    break;}
case 66:
#line 285 "stratego.grm"
{yyval.term = App3("Rule", yyvsp[-3].term, yyvsp[-1].term, yyvsp[0].term);	;
    break;}
case 67:
#line 289 "stratego.grm"
{yyval.term = App3("StratRule", yyvsp[-3].term, yyvsp[-1].term, yyvsp[0].term);	;
    break;}
case 68:
#line 292 "stratego.grm"
{yyval.term = ATmake("Id");;
    break;}
case 69:
#line 293 "stratego.grm"
{yyval.term = App1("Where", yyvsp[0].term);;
    break;}
case 70:
#line 299 "stratego.grm"
{yyval.term = ATmake("Id");;
    break;}
case 71:
#line 300 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 72:
#line 303 "stratego.grm"
{yyval.term = App2("Call", App1("SVar", yyvsp[-1].term), (ATerm) yyvsp[0].list);;
    break;}
case 73:
#line 306 "stratego.grm"
{yyval.term = App2("Call", App1("SVar", App2("Mod", yyvsp[-3].term, yyvsp[-1].term)), (ATerm)yyvsp[0].list);;
    break;}
case 74:
#line 309 "stratego.grm"
{yyval.term = App2("ExplodeCong", yyvsp[-4].term, yyvsp[-1].term);
    break;}
case 75:
#line 311 "stratego.grm"
{yyval.term = App1("Match", yyvsp[-1].term);;
    break;}
case 76:
#line 313 "stratego.grm"
{yyval.term = App1("Match", yyvsp[-1].term);;
    break;}
case 77:
#line 315 "stratego.grm"
{yyval.term = App2("AM", yyvsp[0].term, yyvsp[-1].term);;
    break;}
case 78:
#line 319 "stratego.grm"
{yyval.term = App1("Build", yyvsp[-1].term);;
    break;}
case 79:
#line 320 "stratego.grm"
{yyval.term = App1("Build", yyvsp[0].term);;
    break;}
case 80:
#line 323 "stratego.grm"
{yyval.term = App2("AnnMatch", yyvsp[-3].term, yyvsp[-1].term);;
    break;}
case 81:
#line 325 "stratego.grm"
{yyval.term = App2("AnnBuild", yyvsp[-3].term, yyvsp[-1].term);;
    break;}
case 82:
#line 326 "stratego.grm"
{yyval.term = App1("AnnRemove", yyvsp[0].term);;
    break;}
case 83:
#line 328 "stratego.grm"
{yyval.term = ATmake("Prim(\"new\")");;
    break;}
case 84:
#line 329 "stratego.grm"
{yyval.term = ATmake("Prim(\"str_gt\")");;
    break;}
case 85:
#line 330 "stratego.grm"
{yyval.term = ATmake("Prim(\"kids\")");;
    break;}
case 86:
#line 331 "stratego.grm"
{yyval.term = App1("Prim", yyvsp[-1].term);;
    break;}
case 87:
#line 333 "stratego.grm"
{yyval.term = App1("SRule", yyvsp[-1].term);;
    break;}
case 88:
#line 334 "stratego.grm"
{yyval.term = App1("LRule", yyvsp[-1].term);;
    break;}
case 89:
#line 335 "stratego.grm"
{yyval.term = App2("BA", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 90:
#line 337 "stratego.grm"
{yyval.term = App2("AM", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 91:
#line 340 "stratego.grm"
{yyval.term = ATmake("Fail");;
    break;}
case 92:
#line 341 "stratego.grm"
{yyval.term = ATmake("Id");;
    break;}
case 93:
#line 342 "stratego.grm"
{yyval.term = App2("Path", (ATerm) ATmakeInt(yyvsp[-1].num), yyvsp[0].term); ;
    break;}
case 94:
#line 343 "stratego.grm"
{yyval.term = App1("Not", yyvsp[-1].term);;
    break;}
case 95:
#line 344 "stratego.grm"
{yyval.term = App1("Where", yyvsp[-1].term);;
    break;}
case 96:
#line 345 "stratego.grm"
{yyval.term = App1("Test", yyvsp[-1].term);;
    break;}
case 97:
#line 347 "stratego.grm"
{yyval.term = App2("Scope", (ATerm) yyvsp[-3].list, yyvsp[-1].term);;
    break;}
case 98:
#line 348 "stratego.grm"
{yyval.term = App2("Seq", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 99:
#line 349 "stratego.grm"
{yyval.term = App2("Choice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 100:
#line 350 "stratego.grm"
{yyval.term = App2("LChoice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 101:
#line 351 "stratego.grm"
{yyval.term = App2("Rec", yyvsp[-3].term, yyvsp[-1].term);;
    break;}
case 102:
#line 352 "stratego.grm"
{yyval.term = App1("Some", yyvsp[-1].term);;
    break;}
case 103:
#line 353 "stratego.grm"
{yyval.term = App1("One", yyvsp[-1].term);;
    break;}
case 104:
#line 354 "stratego.grm"
{yyval.term = App1("All", yyvsp[-1].term);;
    break;}
case 105:
#line 355 "stratego.grm"
{yyval.term = App1("Thread", yyvsp[-1].term);;
    break;}
case 106:
#line 356 "stratego.grm"
{yyval.term = tuple_cong(yyvsp[-1].list);;
    break;}
case 107:
#line 358 "stratego.grm"
{yyval.term = list_cong(yyvsp[-2].list, yyvsp[-1].term);;
    break;}
case 108:
#line 359 "stratego.grm"
{yyval.term = App1("Match", App1("Str", yyvsp[0].term));;
    break;}
case 109:
#line 360 "stratego.grm"
{yyval.term = App1("Match", 
					      App1("Int", (ATerm) ATmakeInt(yyvsp[0].num)));;
    break;}
case 110:
#line 362 "stratego.grm"
{yyval.term = App1("Match", 
					      App1("Real", (ATerm) ATmakeReal(yyvsp[0].real)));;
    break;}
case 111:
#line 367 "stratego.grm"
{yyval.term = ATmake("Call(SVar(\"Nil\"),[])");;
    break;}
case 112:
#line 368 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 113:
#line 372 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 114:
#line 373 "stratego.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 115:
#line 377 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 116:
#line 378 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 117:
#line 379 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 118:
#line 385 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 119:
#line 386 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 120:
#line 390 "stratego.grm"
{yyval.term = App3("SDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, yyvsp[0].term);;
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
#line 398 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 124:
#line 399 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 125:
#line 400 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 126:
#line 403 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 127:
#line 404 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-1].term);;
    break;}
case 128:
#line 408 "stratego.grm"
{yyval.term = App3("Overlay", yyvsp[-5].term, (ATerm) yyvsp[-3].list, yyvsp[0].term);;
    break;}
case 129:
#line 409 "stratego.grm"
{yyval.term = App3("Overlay", yyvsp[-2].term, (ATerm) ATmakeList0(), yyvsp[0].term);;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 542 "/usr/lib/bison.simple"

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
#line 413 "stratego.grm"
