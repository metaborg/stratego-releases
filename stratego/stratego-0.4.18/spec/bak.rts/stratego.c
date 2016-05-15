/*

Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>

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
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*/

/*

$Id: stratego.c,v 1.8 2000/09/20 08:08:26 visser Exp $

Implementation of abstract machine instructions for stragegy
primitives. See strategy.h for more documentation.

*/

#include <aterm2.h>
#include "stratego.h"

#define ATmakeSymbol ATmakeAFun

ATbool ATfindSymbol(char *name, int arity, ATbool quoted);

/* Profiling */

int rule_counter = 0;
int match_counter = 0;
int build_counter = 0;
ATbool failed = false;

/* Term stack */

void TprintStack(void)
{ 
  TprintStackTop(tsp, "");
}

void TprintStackTop(int j, char *s)
{ 
  int i; 
  ATfprintf(stderr, "tsp = %d %s\n", tsp, s); 
  for(i = tsp; i >= tsp - j && i >= 0; i--) { 
    if(term_stack[i] == NULL)
      ATfprintf(stderr, "  ts[%d] = NULL (%d)\n", i, tsp == i); 
    else
      ATfprintf(stderr, "  ts[%d] = %t (%d)\n",   i, term_stack[i], tsp == i);
  }
}

/* Environment stack */

void EprintStack(void)
{ 
  int i; 
  ATfprintf(stdout, "esp = %d\n", esp); 
  for(i = 0; i <= esp; i++) { 
    if(environment[i] == NULL) 
      ATfprintf(stdout, "  es[%d] = NULL (%d)\n", i, esp == i); 
    else
      ATfprintf(stdout, "  es[%d] = %t (%d)\n",   i, environment[i], esp == i);
  }
}

void EprintStackTop(int j, char *s)
{ 
  int i; 
  ATfprintf(stdout, "esp = %d %s\n", esp, s); 
  for(i = esp; i >= esp - j && i >= 0; i--) {
    if(environment[i] == NULL) 
      ATfprintf(stdout, "  es[%d] = NULL (%d)\n", i, esp == i); 
    else
      ATfprintf(stdout, "  es[%d] = %t (%d)\n",   i, environment[i], esp == i);
  }
}


void CprintStackTop(int j, char *s)
{ 
  int i; 
  ATfprintf(stdout, "csp = %d %s\n", csp, s); 
  for(i = csp; i >= csp - j && i >= 0; i--) {
    ATfprintf(stdout, "  csp[%d] = (%d,%d,%d,%d,%d,%d)\n"
	      ,i
	      ,choice_stack[i].continuation
	      ,choice_stack[i].tsp
	      ,choice_stack[i].esp
	      ,choice_stack[i].rsp
	      ,choice_stack[i].counter
	      ,choice_stack[i].dsp
	      );
  }
}

/* Display stack */

int max_nesting = -1;

#define Desp(x)     display[x]
#define Dnesting(x) display[x - 1]
#define Dnext(x)    display[x - 2]

void Dinit(void)
{
  dsp = -1;
}

int dframe(int i)
{
  int x;
  x = dsp;
  while(x >= 2 && Dnesting(x) > i)
    x = Dnext(x);
  return Dnesting(x) == i ? x : -1;
}

long int Ed(int i, int o)
{
  int x;
  x = display[dframe(i)] - o;
  //ATfprintf(stderr, "Ed(%d, %d) = %d (frame = %d)\n", i, o, x, dframe(i));
  return x;
}

void Epushd(int i, int o) 
{ 
  int x = dframe(i - 1);
  Epush(o); 
  dsp += 3;
  Desp(dsp)     = esp;
  Dnesting(dsp) = i;
  Dnext(dsp)    = x;
  //ATfprintf(stderr, "Epushd(%d, %d) : x = %d dsp = %d\n", i, o, x, dsp);
}

void Epopd(int i, int o)
{ 
  assert(Desp(dsp) == esp);
  assert(Dnesting(dsp) == i);
  Epop(o);
  dsp -= 3;
  //ATfprintf(stderr, "Epopd(%d, %d) : dsp = %d\n", i, o, dsp);
}

void Drestore(void) 
{
}

/* Matching */

/*

ATbool _MatchVar(int i)
{
  if(Eget(i) == NULL) {Eset(i, Ttop);}
  else if(!ATisEqual(Eget(i), Ttop)) {return fail_address;}
  return NULL;
}

ATbool _MatchVard(int i, long int o)
{
  if(Egetd(i, o) == NULL) {Esetd(i, o, Ttop);}
  else if(!ATisEqual(Egetd(i, o), Ttop)) {return fail_address;}
  return NULL;
}

ATbool _MatchInt(int i)
{
  if((ATgetType(Ttop) != AT_INT) || (ATgetInt((ATermInt) Ttop) != i)) 
    {return fail_address;}
  return NULL;
}

ATbool _MatchIntFC(int i)
{
  if((ATgetType(Ttop) != AT_INT) || (ATgetInt((ATermInt) Ttop) != i)) 
    {return ATfalse;}
  return ATtrue;
}

*/

ATbool _TestIntFC(int i, ATerm t)
{
  if((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != i)) 
    {return ATfalse;}
  return ATtrue;
}

/*

ATbool _MatchReal(double i)
{
  if((ATgetType(Ttop) != AT_REAL) || (ATgetReal((ATermReal) Ttop) != i)) 
    {return fail_address;}
  return ATtrue;
}

ATbool _MatchRealFC(double i)
{
  if((ATgetType(Ttop) != AT_REAL) || (ATgetReal((ATermReal) Ttop) != i)) 
    {return ATfalse;}
  return ATtrue;
}

*/

ATbool _TestRealFC(double i, ATerm t)
{
  if((ATgetType(t) != AT_REAL) || (ATgetReal((ATermReal) t) != i)) 
    {return ATfalse;}
  return ATtrue;
}
/*
ATbool _MatchString(char *s)
{
  if(!ATisThisString(Ttop, s))
    {return fail_address;}
  return ATtrue;
}
  
ATbool _MatchStringFC(char *s)
{
  if(!ATisThisString(Ttop, s))
    {return ATfalse;}
  return ATtrue;
}
*/
ATbool _TestStringFC(char *s, ATerm t)
{
  if(!ATisThisString(t, s))
    {return ATfalse;}
  return ATtrue;
}

ATbool _MatchFun(char *f, int n) 
{
  assert(Ttop != NULL);
  //ATfprintf(stderr, "_MatchFun(%s, %d)\n", f, n);
  if(!t_is_appl(Ttop)
     || ATgetArity(ATgetSymbol(Ttop)) != n
     || strcmp(ATgetName(ATgetSymbol(Ttop)), f) != 0
     || ATisQuoted(ATgetSymbol(Ttop)))
    {return ATfalse;}
  return ATtrue;  
}

ATbool _MatchFunFC(char *f, int n)
{
  assert(Ttop != NULL);
  //ATfprintf(stderr, "_MatchFunFC(%s, %d)\n", f, n);
  if(!t_is_appl(Ttop)
     || ATgetArity(ATgetSymbol(Ttop)) != n
     || strcmp(ATgetName(ATgetSymbol(Ttop)), f) != 0
     || ATisQuoted(ATgetSymbol(Ttop)))
    {
      return ATfalse;
    }
  return ATtrue;
}

/*
ATbool _TestFunFC_oldest(char *f, int n, ATerm t)
{
  assert(t != NULL);
  if(!t_is_appl(t)
     || ATgetArity(ATgetSymbol(t)) != n
     || strcmp(ATgetName(ATgetSymbol(t)), f) != 0
     || ATisQuoted(ATgetSymbol(t)))
    {
      return ATfalse;
    }
  return ATtrue;
}

ATbool _TestFunFC_old(char *f, int n, ATerm t)
{
  AFun fun = ATmakeAFun(f, n, 0);
  assert(t != NULL);

  if(!t_is_appl(t) || ATgetAFun((ATermAppl) t) != fun)
      return ATfalse;
  else
    return ATtrue;
}
*/

ATbool _TestFunFC(AFun fun, ATerm t)
{
  assert(t != NULL);
  if(!t_is_appl(t) || ATgetAFun((ATermAppl) t) != fun)
      return ATfalse;
  else
    return ATtrue;
}

/* Building */

void BuildFun(char *f, int i)
{ 
  int j; 
  Tset((ATerm) ATmakeList0()); 
  for(j = i; j > 0; j--) { 
    Tseti(1, (ATerm) ATinsert((ATermList) Ttop, Ttopi(1)));
    Tpop;
  }
  Tset((ATerm) ATmakeApplList(ATmakeSymbol(f, i, ATfalse),
			      (ATermList) Ttop));
}

/* Traversal 

Initialization: Declare a new counter that will keep track of the
number of arguments of the node. Push the list of arguments on the
stack and set the counter to 0. */

void TravInit()
{
  NewCounter; 
  if(t_is_appl(Ttop)) {
    Tpush; 
    Tset((ATerm) ATgetArguments((ATermAppl) Ttopi(1)));
  }
  else {Tpush; Tset((ATerm) ATmakeList0());}
  SetCounter(0);
}

/* When the list of arguments is empty proceed with the code at
|on_empty|. Otherwise shift the next argument on the stack.  */

ATbool _NextSon(void)
{
  if(ATisEmpty((ATermList) Ttopi(TheCounter)))
    {return ATfalse;}
  else {
    Tpush; 
    IncCounter; 
    Tset(ATgetFirst((ATermList) Ttopi(TheCounter)));
    Tseti(TheCounter, (ATerm) ATgetNext((ATermList) Ttopi(TheCounter))); 
  }
  return ATtrue;
}

/*
ATbool _SomeNextSon(void *s)
{
  if(ATisEmpty((ATermList) Ttopi(TheCounter)))
    {if(IsCounterOK) {return s;} else {return ATfalse;}}
  else {
    Tpush; 
    IncCounter; 
    Tset(ATgetFirst((ATermList) Ttopi(TheCounter)));
    Tseti(TheCounter, (ATerm) ATgetNext((ATermList) Ttopi(TheCounter))); 
  }
  return ATtrue;
}
*/

/* Rebuild the list of arguments and rebuild the application of the
original function symbol. */

void TravBuild(void)
{
  if(t_is_appl(Ttopi(TheCounter + 1))) 
    {
      assert(ATgetArity(ATgetSymbol(Ttopi(TheCounter + 1))) == 
             (TheCounter + ATgetLength(Ttopi(TheCounter))));
      for(; TheCounter > 0; DecCounter) 
	{
	  Tseti(TheCounter, 
		(ATerm) ATinsert((ATermList) Ttopi(TheCounter), Ttop));
	  Tpop;
	}
      Tseti(1, 
	    (ATerm) ATmakeApplList(ATgetSymbol(Ttopi(1)), (ATermList) Ttop));
    }
  Tpop;
  CloseCounter;
}

/* Matching Traversal

When a traversal looks into a term only to match subterms, there is no
need to rebuild the term afterwards. */

void MatchTravInit()
{
  NewCounter; 
  SetCounter(ATgetArity(ATgetSymbol(Ttop)));
  Tpush;
}

/* When the list of arguments is empty proceed with the code at
|on_empty|. Otherwise shift the next argument on the stack.  */

ATbool _MatchNextSon(void)
{
  if(TheCounter == 0)
    {return ATfalse;}
  else {
    DecCounter; 
    Tset(ATgetArgument(Ttopi(1), TheCounter));
  }
  return ATtrue;
}
