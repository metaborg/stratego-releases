#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,o_0);
VARDECL(AFun,n_0);
VARDECL(AFun,k_0);
VARDECL(AFun,g_0);
PROCDECL(_stratego_c_2);
PROCDECL(_stratego_d_2);
PROCDECL(_stratego_e_2);
PROCDECL(_stratego_f_2);
PROCDECL(_stratego_g_2);
PROCDECL(_stratego_h_2);
PROCDECL(_stratego_i_2);
PROCDECL(_stratego_j_2);
PROCDECL(_stratego_k_2);
PROCDECL(_stratego_l_2);
PROCDECL(_stratego_m_2);
PROCDECL(_stratego_n_2);
PROCDECL(_stratego_o_2);
PROCDECL(_stratego_p_2);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(o_0,ATmakeAFun("TNil",0,0));
  MOVE(n_0,ATmakeAFun("TCons",2,0));
  MOVE(k_0,ATmakeAFun("Nil",0,0));
  MOVE(g_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_c_2)
  Cpush(b_0);
  Ccall(_stratego_d_2);
  goto a_0;
  b_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto j_0;
  j_0 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(f_0);
  goto e_0;
  f_0 :
  goto d_0;
  e_0 :
  Return();
  d_0 :
  Epopd(0,3);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_d_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_1;
  g_1 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  Rpush(i_0);
  goto a_1;
  i_0 :
  goto h_0;
  a_1 :
  Return();
  h_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_2)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto p_1;
  p_1 :
  TestFunFC(n_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto v_1;
  v_1 :
  TestFunFC(n_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto w_1;
  w_1 :
  TestFunFC(o_0,&&fail,Egetd(0,6));
  Rpush(m_0);
  goto o_1;
  m_0 :
  goto l_0;
  o_1 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  l_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_f_2)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_p_2);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_g_2)
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_h_2);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_m_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_h_2)
  _ST_add();
ENDPROC

PROC(_stratego_i_2)
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_h_2);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_j_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_f_2);
  Tpop();
  Cpush(q_0);
  Tdupl();
  Cpush(u_0);
  Epushd(1,1);
  Tset(App2("Cons",ATmakeString("a"),App2("Cons",App2("Cons",ATmakeString("b"),App2("Cons",App2("Cons",ATmakeString("c"),App2("Cons",ATmakeString("d"),App0("Nil"))),App0("Nil"))),App2("Cons",ATmakeString("e"),App0("Nil")))));
  Rpush(v_0);
  w_5 :
  Rpush(w_0);
  x_5 :
  Cpush(y_0);
  Ccall(_stratego_d_2);
  goto x_0;
  y_0 :
  Epushd(2,3);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Cpush(e_1);
  Ccall(_stratego_c_2);
  Rpush(f_1);
  goto w_5;
  f_1 :
  goto d_1;
  e_1 :
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Epopd(3,1);
  goto i_1;
  d_1 :
  Cpop();
  i_1 :
  OneNextSon();
  Rpush(j_1);
  goto x_5;
  j_1 :
  AllBuild();
  MoveTop(2,1);
  goto v_3;
  v_3 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(k_1);
  goto q_3;
  k_1 :
  goto c_1;
  q_3 :
  Epushd(3,5);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  MoveTop(3,1);
  goto s_3;
  s_3 :
  TestFunFC(n_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto t_3;
  t_3 :
  TestFunFC(n_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto u_3;
  u_3 :
  TestFunFC(o_0,&&fail,Egetd(3,5));
  Rpush(m_1);
  goto r_3;
  m_1 :
  goto l_1;
  r_3 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Rpush(n_1);
  y_5 :
  Cpush(r_1);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_1);
  goto y_5;
  s_1 :
  AllBuild();
  goto q_1;
  r_1 :
  Ccall(_stratego_d_2);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  goto t_1;
  q_1 :
  Cpop();
  t_1 :
  Return();
  n_1 :
  Return();
  l_1 :
  Epopd(3,5);
  Return();
  c_1 :
  Epopd(2,3);
  goto b_1;
  x_0 :
  Cpop();
  b_1 :
  Return();
  w_0 :
  Return();
  v_0 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto r_0;
  u_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_f_2);
  Ccall(_stratego_e_2);
  goto u_1;
  r_0 :
  Cpop();
  u_1 :
  Tset(App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App2("Cons",ATmakeString("c"),App2("Cons",ATmakeString("d"),App2("Cons",ATmakeString("e"),App0("Nil")))))));
  Tdupl();
  Tset(App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App2("Cons",ATmakeString("c"),App2("Cons",ATmakeString("d"),App2("Cons",ATmakeString("e"),App0("Nil")))))));
  MoveTop(0,2);
  Tpop();
  Cpush(y_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto x_1;
  y_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_p_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_p_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_e_2);
  goto z_1;
  x_1 :
  Cpop();
  z_1 :
  Tpop();
  Ccall(_stratego_i_2);
  goto p_0;
  q_0 :
  Ccall(_stratego_g_2);
  goto a_2;
  p_0 :
  Cpop();
  a_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_k_2)
  _ST_exit();
ENDPROC

PROC(_stratego_l_2)
  Cpush(r_2);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto a_6;
  a_6 :
  TestInt(0,1,0,&&fail);
  Rpush(y_2);
  goto z_5;
  y_2 :
  goto x_2;
  z_5 :
  Return();
  x_2 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_m_2);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_k_2);
  goto b_2;
  r_2 :
  Tset(MakeInt(1));
  Ccall(_stratego_k_2);
  goto z_2;
  b_2 :
  Cpop();
  z_2 :
ENDPROC

PROC(_stratego_m_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_6;
  d_6 :
  TestFunFC(o_0,&&fail,Egetd(0,1));
  Rpush(c_3);
  goto c_6;
  c_3 :
  goto a_3;
  c_6 :
  Return();
  a_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_2)
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_p_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_p_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_m_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_o_2)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_p_2)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("list-misc-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_p_2);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_o_2);
  Ccall(_stratego_j_2);
  Ccall(_stratego_n_2);
  Ccall(_stratego_l_2);
ENDPROC

DOIT

