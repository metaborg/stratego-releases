#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

// <id> t = t
ATerm id(ATerm t)
{
  return ATmakeString("Bla");
}

ATerm closure(ATerm f(ATerm))
{
  return (ATerm)ATmakeInt((int)f);
}

void *function(ATerm closure)
{
  return (ATerm (*)(ATerm))ATgetInt((ATermInt)closure);
}

ATerm apply(ATerm s, ATerm t)
{
  ATerm (*f)(ATerm);
  f = (ATerm(*)(ATerm))ATgetInt((ATermInt)s);
  return f(t);
}

PROC(_stratego_init_afuns)
ENDPROC

PROC(_stratego_main)     
     Tset(App0("stdin"));
     _ST_ReadFromFile();
     Tset(apply(closure(id), Ttop()));
     TprintStack();
     _ST_WriteToTextFile();
ENDPROC

DOIT
