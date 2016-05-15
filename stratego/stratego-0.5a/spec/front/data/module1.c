#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,g_0);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(g_0,ATmakeAFun("C",1,0));
ENDPROC

PROC(_stratego_main)
  Epushd(0,2);
  MoveTop(0,1);
  goto b_0;
  b_0 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_0);
  goto a_0;
  f_0 :
  goto e_0;
  a_0 :
  Return();
  e_0 :
  Epopd(0,2);
ENDPROC

DOIT

