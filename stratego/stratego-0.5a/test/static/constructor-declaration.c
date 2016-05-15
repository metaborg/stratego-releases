#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,p_0);
VARDECL(AFun,h_0);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(p_0,ATmakeAFun("ZZZ",2,0));
  MOVE(h_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Epushd(0,5);
  MoveTop(0,1);
  goto f_0;
  f_0 :
  TestFunFC(h_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto g_0;
  g_0 :
  TestFunFC(h_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(b_0);
  goto c_0;
  b_0 :
  goto a_0;
  c_0 :
  Epushd(1,3);
  Tset(App0("Nil"));
  MoveTop(1,1);
  goto e_0;
  e_0 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(j_0);
  goto d_0;
  j_0 :
  goto i_0;
  d_0 :
  NotNULLd(1,2);
  Tset(App1("BBB",Egetd(1,2)));
  Return();
  i_0 :
  Epopd(1,3);
  Return();
  a_0 :
  Epopd(0,5);
ENDPROC

DOIT

