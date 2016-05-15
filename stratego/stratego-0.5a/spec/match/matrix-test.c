#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,m_0);
VARDECL(AFun,e_0);
PROCDECL(_stratego_v_0);
PROCDECL(_stratego_w_0);
PROCDECL(_stratego_x_0);
PROCDECL(_stratego_y_0);
PROCDECL(_stratego_z_0);
PROCDECL(_stratego_a_1);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(m_0,ATmakeAFun("TNil",0,0));
  MOVE(e_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_v_0)
  _ST_exit();
ENDPROC

PROC(_stratego_w_0)
  Cpush(d_0);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto b_0;
  b_0 :
  TestInt(0,1,0,&&fail);
  Rpush(g_0);
  goto a_0;
  g_0 :
  goto f_0;
  a_0 :
  Return();
  f_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_x_0);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_v_0);
  goto c_0;
  d_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_v_0);
  goto j_0;
  c_0 :
  Cpop();
  j_0 :
ENDPROC

PROC(_stratego_x_0)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_0;
  o_0 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  Rpush(l_0);
  goto i_0;
  l_0 :
  goto k_0;
  i_0 :
  Return();
  k_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_0)
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_1);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_1);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_x_0);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_z_0)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_a_1)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("matrix-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_1);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_z_0);
  Ccall(_stratego_y_0);
  Ccall(_stratego_w_0);
ENDPROC

DOIT

