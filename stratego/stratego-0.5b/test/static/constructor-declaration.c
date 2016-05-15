#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,p_0);
VARDECL(AFun,j_0);
VARDECL(AFun,h_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(p_0,ATmakeAFun("BBB",1,0));
  MOVE(j_0,ATmakeAFun("ZZZ",2,0));
  MOVE(h_0,ATmakeAFun("Nil",0,0));
  MOVE(c_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Epushd(0,5);
  MoveTop(0,1);
  goto f_0;
  f_0 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto g_0;
  g_0 :
  TestFunFC(c_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(b_0);
  goto x_0;
  b_0 :
  goto a_0;
  x_0 :
  Epushd(1,3);
  Tset((ATerm)ATmakeAppl0(h_0));
  MoveTop(1,1);
  goto e_0;
  e_0 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(i_0);
  goto y_0;
  i_0 :
  goto d_0;
  y_0 :
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl1(p_0,Egetd(1,2)));
  Return();
  d_0 :
  Epopd(1,3);
  Return();
  a_0 :
  Epopd(0,5);
ENDPROC

DOIT

