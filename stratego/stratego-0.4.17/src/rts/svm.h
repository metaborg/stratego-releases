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

$Id: svm.h,v 1.36 2000/08/27 11:52:18 visser Exp $

Implementation of abstract machine instructions for strategy core language

TODO

* The environment is not saved before a choice. This means that some
  variables can become instantiated in a failing alternative and then
  not be restored to unitialized.

* Make stack sizes dynamic or at least configurable from the
  command-line.

*/

#ifndef __defined_stratego_svm_h
#define __defined_stratego_svm_h

/* Constants for stack-size */

#define TSIZE 15000
#define RSIZE 15000
#define ESIZE 15000
#define DSIZE 10000
#define CSIZE 15000 
#define NR_COUNTERS 5000
#define NR_RULECOUNTERS 5000

/* Idiom */

#define between(a, x, b) (assert((a) <= (x)), assert((x) <= (b)))

/* Error handling */

#define panic(s) ATfprintf(stderr, "fatal error: %s\n", s); exit(1);

/* Dispatching */

#define GO(s) {register void *a; if((a = s) != NULL) goto *a;}

/* Profiling */

extern int rule_counter;
extern int match_counter;
extern int build_counter;

struct {
  char *name;
  long int count;
} rule_counters[NR_RULECOUNTERS];

long int cur_rule_counter;

#define CountRule(f) rule_counters[f].count++; rule_counter++;

#define RuleCounter(s1, s2, n) \
   rule_counters[n].name = s2; rule_counters[n].count = 0;


/* Counters */

struct {
  int count;
  int ok;
} counter_stack[NR_COUNTERS];
long int cur_counter;

#define CounterInit()  cur_counter = -1

#define NewCounter()  assert(cur_counter < NR_COUNTERS - 1); \
                      cur_counter++; \
                      counter_stack[cur_counter].count = 1; \
                      counter_stack[cur_counter].ok = 0;

#define CloseCounter()  cur_counter--;

#define CounterOK()     counter_stack[cur_counter].ok = 1
#define IsCounterOK()   counter_stack[cur_counter].ok

#define TheCounter()    (counter_stack[cur_counter].count)
#define IncCounter()    TheCounter()++
#define DecCounter()    TheCounter()--
#define SetCounter(i)   TheCounter() = i

/* Term stack */

ATerm term_stack[TSIZE];
long int tsp;

/* The stackpointer tsp points to the element on top of the stack */

#define Ttop()       (term_stack[tsp])
#define Ttopi(i)     (term_stack[tsp - (i)])
#define Tset(t)      assert((t) != NULL); Ttop() = (t)
#define Tseti(i, t)  assert((t) != NULL); Ttopi(i) = (t)
#define Tpush()      assert(tsp < TSIZE); tsp++; Ttop() = NULL 
#define Tpop()       assert(tsp > 0); tsp--
#define Tdupl()      Tpush(); Tset(Ttopi(1))
#define Tduplinv()   Tseti(1, Ttop());
#define Tdrop()      Tseti(1, Ttop()); Tpop()
#define Tinitst()    tsp = 0; Ttop() = NULL 

#define Tswap(i, j)  {ATerm t; t = Ttopi(i); Tseti(i, Ttopi(j)); Tseti(j, t);}

#define Arg(n)       Tpush(); Tset(ATgetArgument(Ttopi(1), n))

#define Argi(i, n)   Tpush(); Tset(ATgetArgument(Ttopi(i), n))

void TprintStack(void);
void TprintStackTop(int j, char *s);

/* Return stack */

void *return_stack[RSIZE];
long int rsp;

void *fail_address;
ATbool failed;

/* rsp points to the next *free* element of the return stack */

#define Rpush(l) \
  if(rsp >= RSIZE) { \
    ATfprintf(stderr, "Fatal error: loop detected" \
	      " (rstack overflow; rsp = %d)\n", rsp); \
    assert(rsp < RSIZE); \
  } return_stack[rsp++] = &&l;
#define Return() goto *(return_stack[--rsp])

/* Environment stack */

ATerm environment[ESIZE];
long int esp;

/* esp points to the next *free* element in the environment */

#define Einit()    esp = 0;

#define Ei(i)      (esp - (i))

#define Eget(i)    (between(0, Ei(i), ESIZE), environment[Ei(i)])
#define Eset(i, t) (between(0, Ei(i), ESIZE), environment[Ei(i)] = (t))

#define Egeta(i)    (between(0, i, ESIZE), environment[i])
#define Eseta(i, t) (between(0, i, ESIZE), environment[i] = (t))

#define Enext()    {assert(esp < ESIZE); environment[esp++] = NULL;}
#define Eprev()    {assert(esp < ESIZE); environment[--esp] = NULL;}

#define Epush(i)   {int j; for(j = 0; j < i; j++) {Enext();}}
#define Epop(i)    {int j; for(j = 0; j < i; j++) {Eprev();}}

void EprintStack(void);

/* Display stack */

long int display[DSIZE];
int dsp;

long int Ed(int i, int o);

#define Egetd(i, o)    Egeta(Ed(i, o))
#define Esetd(i, o, t) Eseta(Ed(i, o), t)

#define D(i)  display

#define DgetEsp()      display_stack[dsp].esp
#define DsetEsp(i)     display_stack[dsp].esp = i

void Epushd(int i, int o);
void Epopd(int i, int o);
void Dinit(void);
void Drestore(void);

/* Matching */

void *_MatchVar(int i);
void *_MatchVard(int i, long int o);
void *_MatchInt(int i);
void *_MatchIntFC(int i, void *);
void *_MatchReal(double i);
void *_MatchRealFC(double i, void *);
void *_MatchString(char *s);
void *_MatchStringFC(char *s, void *);
void *_MatchFun(char *f, int n);
void *_MatchFunFC(char *f, int n, void *fc);

#define MatchVar(i)          GO(_MatchVar(i))
#define MatchVard(i, o)      GO(_MatchVard(i, o))
#define MatchInt(i)          GO(_MatchInt(i))
#define MatchIntFC(i, fc)    GO(_MatchIntFC(i, fc))
#define MatchReal(i)         GO(_MatchReal(i))
#define MatchRealFC(i, fc)   GO(_MatchRealFC(i, fc))
#define MatchString(s)       GO(_MatchString(s))
#define MatchStringFC(s, fc) GO(_MatchStringFC(s, fc))
#define MatchFun(f, n)       GO(_MatchFun(f, n))
#define MatchFunFC(f, n, fc) GO(_MatchFunFC(f, n, fc))

/* Building */

#define BuildVar(i) \
  {ATerm t; \
   if((t = Eget(i)) == NULL) { \
     /* ATfprintf(stderr, "Warning: unbound variable (%d)\n", i); */ \
     goto *fail_address; \
   } else {Tset(t);}}

#define BuildVard(i, o) \
  {ATerm t; \
   if((t = Egetd(i, o)) == NULL) { \
     /* ATfprintf(stderr, "Warning: unbound variable (%d, %d)\n", i, o); */ \
     goto *fail_address; \
   } else {Tset(t);}}

#define BuildStr(s) \
  Tset(ATmakeString(s))

#define BuildInt(i) \
  Tset((ATerm) ATmakeInt(i))

#define BuildReal(r) \
  Tset((ATerm) ATmakeReal(r))

void BuildFun(char *f, int i);

/* Annotations */

#define GetAnn() \
{ATerm x; \
 if((x = ATgetAnnotation(Ttopi(1), Ttop())) == NULL) \
  { goto *fail_address; } \
 else { Tset(x); } \
}

#define SetAnn() \
 Tseti(2, ATsetAnnotation(Ttopi(2), Ttopi(1), Ttop())); Tpop(); Tpop()

#define RemoveAnn() \
  Tseti(1, ATremoveAnnotation(Ttopi(1), Ttop())); Tpop();

/* Choice stack */

struct {
  long int tsp;
  long int esp;
  long int rsp;
  long int counter;
  void    *continuation;
  int      dsp;
} choice_stack[CSIZE];
long int csp;

/* csp points to the next free choice stack entry */

#define Cset(cont, a, b, c, d, e) \
{ \
  choice_stack[csp].continuation = cont; \
  choice_stack[csp].tsp = a; \
  choice_stack[csp].esp = b; \
  choice_stack[csp].rsp = c; \
  choice_stack[csp].counter = d; \
  choice_stack[csp].dsp = e; \
}

#define Cpush(x) \
{ \
  assert(csp < CSIZE); \
  Cset(&&x, tsp, esp, rsp, cur_counter, dsp); \
  csp++; Tdupl(); \
}

#define Cpop()  Tdrop(); csp--;

#define Crestore()  \
{ \
  csp--; \
  tsp = choice_stack[csp].tsp; \
  esp = choice_stack[csp].esp; \
  rsp = choice_stack[csp].rsp;\
  dsp = choice_stack[csp].dsp; \
  cur_counter = choice_stack[csp].counter; \
}

#define Cjump() {goto *choice_stack[csp].continuation;}

#define Cempty() (csp == 0)

/* Path Traversal */

#define IsAppl() if(!t_is_appl(Ttop())) {goto *fail_address;};

#define TpushIthSon(i) Tpush(); Tset(ATgetArgument(Ttopi(1), i - 1)); 

#define TputIthSon(i) Tseti(1, ATsetArgument(Ttopi(1), Ttop(), i - 1)); Tpop();

/* Traversal */

void TravInit();
void *_NextSon(void *on_empty);
void *_SomeNextSon(void *s);
void TravBuild(void);

#define NextSon(x)     GO(_NextSon(x))
#define SomeNextSon(x) GO(_SomeNextSon(x))

#define AllInit()      TravInit()
#define AllNextSon(s)  NextSon(s)
#define AllBuild()     TravBuild()

#define OneInit()      TravInit()
#define OneNextSon()   NextSon(fail_address)
#define OneBuild()     TravBuild()

#define SomeInit()     TravInit()
#define SomeBuild()    TravBuild()

#define ThreadInit()  \
   MatchFun("Pair", 2); \
   Arg(1); \
   Argi(2,0); \
   TravInit();

#define ThreadNextSon(s) \
   NextSon(s); \
   Tpush(); \
   Tset(Ttopi(TheCounter() + 3)); \
   Tpush(); \
   BuildFun("Pair", 2);

#define ThreadSetEnv() \
   MatchFun("Pair",2); \
   Arg(0); \
   Argi(2, 1); \
   Tseti(TheCounter() + 4, Ttop()); \
   Tpop(); \
   Tdrop();

#define ThreadGetEnv() ThreadSetEnv()

#define ThreadBuild()  \
   TravBuild(); \
   Tswap(0,1); \
   Tpush(); \
   BuildFun("Pair", 2); \
   Tdrop();
   
void MatchTravInit();
void *_MatchNextSon(void *on_empty);

#define OneMatchNextSon() GO(_MatchNextSon(fail_address))
#define MatchTravEnd()  {Tpop(); CloseCounter();}

/* Procedure header and footer */

#define DOIT_START \
\
ATerm doit(ATerm t) \
{ \
  Tinitst(); Einit(); CounterInit(); Tset(t); fail_address = &&fail;

#define DOIT_END \
\
  return(Ttop()); \
  fail : \
    if(!Cempty()) {Crestore(); Cjump();} \
    else {failed = ATtrue; return Ttop();} \
  exit(1); \
}
		       			 
#endif
