#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT

  Rpush(c_0);
  goto main;
PROC(_stratego_main)
  Epushd(0,5);
  MoveTop(0,1);
  goto h_0;
  h_0 :
  TestFun(0,1,"F",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_0;
  i_0 :
  TestFun(0,3,"G",2,&&fail);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_0;
  j_0 :
  TestFun(0,4,"A",0,&&fail);
  Rpush(b_0);
  goto v_0;
  b_0 :
  goto a_0;
  v_0 :
  Epushd(1,2);
  Tdupl();
  Tset(App0("A"));
  Tdupl();
  Tset(App0("A"));
  MoveTop(1,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("G",Egetd(0,2),Egetd(0,5)));
  Tdupl();
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("G",Egetd(0,2),Egetd(0,5)));
  MoveTop(1,2);
  Tpop();
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("H",Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  a_0 :
  Epopd(0,5);
ENDPROC

  c_0 :
