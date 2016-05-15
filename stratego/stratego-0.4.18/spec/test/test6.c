#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT

PROCDECL(_stratego_main);
PROCDECL(_stratego_e_0);
PROCDECL(_stratego_f_0);
PROCDECL(_stratego_g_0);

PROC(_stratego_main)
  Tset(App2("F",App0("A"),App0("B")));
  Ccall(_stratego_f_0);
  Ccall(_stratego_e_0);
  Ccall(_stratego_f_0);
ENDPROC

PROC(_stratego_e_0)
  Epushd(0,3);
  MoveTop(0,1);
  goto i_0;
  i_0 :
  TestFun(0,1,"F",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(b_0);
  goto a_1;
  b_0 :
  goto a_0;
  a_1 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  Tset(App2("G",Egetd(0,3),Egetd(0,2)));
  Return();
  a_0 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_f_0)
  Tdupl();
  Epushd(0,2);
  MoveTop(0,1);
  Tset(App0("stderr"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("Cons",Egetd(0,1),App0("Nil")));
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("Cons",Egetd(0,1),App0("Nil")));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_g_0);
  Epopd(0,2);
  Tpop();
ENDPROC

PROC(_stratego_g_0)
  _ST_printnl();
ENDPROC
