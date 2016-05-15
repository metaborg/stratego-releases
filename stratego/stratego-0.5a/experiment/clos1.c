#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

/*

a strategy is a function that takes arguments and a term

it returns another term 

The strategy operator

  bottomup(s)

becomes

  ATerm bottomup(Arguments s, ATerm t)

Arguments are represented by means of an ATerm 

  args(c1,...,cn)

where each ci is a closure represented by means of an ATerm

  clos(f,args(c1,...,cn))

where f is a function pointer and the ai are argument closures.

Assume we have another strategy rule1 (no arguments)

  ATerm rule1(Arguments s, ATerm t)

to call bottomup(rule1) to term t

  bottomup(ATmake("args(clos(<int>,args()))", &rule1), t)

Strategy map(s) is thus translated to

  ATerm map(Arguments s, ATerm t)

to call bottomup(map(rule1)) we get

  bottomup(ATmake("args(clos(<int>,args(clos(<int>,args()))))", 
                  &map, &rule1), t)

calling an argument strategy

*/

typedef ATerm Arguments;
typedef ATerm Closure;

ATerm closure(ATerm f(ATerm,ATerm), ATerm args)
{
  ATfprintf(stdout, "closure(_,_)\n");
  return (ATerm)ATmake("clos(<int>,<term>)", (int)f, args);
}

ATerm args0(void)
{
  return ATmake("args");
}

ATerm args1(ATerm a)
{
  return ATmake("args(<term>)", a);
}

ATerm apply(Closure s, ATerm t)
{
  ATerm (*f)(ATerm,ATerm);
  ATerm args; 
  ATfprintf(stdout, "apply(%t,%t)\n", s, t);
  f = (ATerm(*)(ATerm,ATerm))ATgetInt((ATermInt)ATgetArgument(s, 0));
  ATfprintf(stdout, "function = %d\n", (int)f);
  args = ATgetArgument(s, 1);
  ATfprintf(stdout, "args = %t\n", args);
  return f(args, t);
}

ATerm rule1(Arguments s, ATerm t)
{
  ATfprintf(stdout, "rule1(%t,%t)\n", s, t);
  if(ATmatch(t, "A()"))
    return ATmake("B()");
  else
    return t;
}

ATerm map(Arguments s, ATerm t)
{
  ATerm hd, tl;
  ATfprintf(stdout, "map(%t,%t)\n", s, t);
  if(ATmatch(t, "Nil"))
    {
      return t;
    }
  else if(ATmatch(t, "Cons(<term>,<term>)", &hd, &tl))
    {
      hd = apply(ATgetArgument(s, 0), hd); 
      tl = map(s, tl);
      return ATmake("Cons(<term>,<term>)", hd, tl);
    }
  else
    return NULL; // fail
}

int main(int argc, char *argv[])
{
  ATerm t;
  ATinit(argc, argv, &t);
  ATfprintf(stdout, "main\n");
  t = ATmake("Cons(A,Cons(B,Cons(C,Nil)))");
  ATfprintf(stdout, "before: %t\n", t);
  t = apply(closure(map, args1(closure(rule1, args0()))), t);
  ATfprintf(stdout, "after: %t\n", t);
  exit(0);
}

/*
  transformation rules

  apply(closure(f, args), t) -> f(args, t)

*/
