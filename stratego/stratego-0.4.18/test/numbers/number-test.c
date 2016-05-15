#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_l_1);
PROCDECL(_stratego_m_1);
PROCDECL(_stratego_n_1);
PROCDECL(_stratego_o_1);
PROCDECL(_stratego_p_1);
PROCDECL(_stratego_q_1);

PROC(_stratego_init_afuns)
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("number-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_1);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_m_1);
  Ccall(_stratego_n_1);
  Ccall(_stratego_p_1);
ENDPROC

PROC(_stratego_l_1)
  _ST_printnl();
ENDPROC

PROC(_stratego_m_1)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_n_1)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_1);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_1);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_o_1);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_o_1)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_3;
  e_3 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto g_3;
  c_0 :
  goto b_0;
  g_3 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_1)
  Cpush(f_0);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto i_3;
  i_3 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto k_3;
  h_0 :
  goto g_0;
  k_3 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_o_1);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_q_1);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_q_1);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_q_1)
  _ST_exit();
ENDPROC
