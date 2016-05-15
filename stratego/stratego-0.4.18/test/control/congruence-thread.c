#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,h_1);
VARDECL(AFun,r_0);
VARDECL(AFun,q_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_d_6);
PROCDECL(_stratego_e_6);
PROCDECL(_stratego_f_6);
PROCDECL(_stratego_g_6);
PROCDECL(_stratego_h_6);
PROCDECL(_stratego_i_6);
PROCDECL(_stratego_j_6);
PROCDECL(_stratego_k_6);
PROCDECL(_stratego_l_6);
PROCDECL(_stratego_m_6);
PROCDECL(_stratego_n_6);
PROCDECL(_stratego_o_6);
PROCDECL(_stratego_p_6);

PROC(_stratego_init_afuns)
  MOVE(h_1,ATmakeAFun("Id",0,0));
  MOVE(r_0,ATmakeAFun("If",3,0));
  MOVE(q_0,ATmakeAFun("Pair",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("congruence-env-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_6);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_e_6);
  Ccall(_stratego_j_6);
  Ccall(_stratego_p_6);
  Ccall(_stratego_f_6);
  Ccall(_stratego_h_6);
ENDPROC

PROC(_stratego_d_6)
  _ST_printnl();
ENDPROC

PROC(_stratego_e_6)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_f_6)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_6);
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
  Ccall(_stratego_d_6);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_g_6);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_g_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_3;
  x_3 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto z_3;
  c_0 :
  goto b_0;
  z_3 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_6)
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
  goto b_4;
  b_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto f_4;
  h_0 :
  goto g_0;
  f_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_g_6);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_i_6);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_i_6);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_i_6)
  _ST_exit();
ENDPROC

PROC(_stratego_j_6)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("congruence-dist-test"));
  Ccall(_stratego_n_6);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,6);
  Tset(App2("Pair",App3("If",App0("Id"),App0("Id"),App0("Id")),App0("Nil")));
  MoveTop(1,1);
  goto l_4;
  l_4 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,6,1,1,1);
  goto m_4;
  m_4 :
  TestFunFC(r_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,5,1,2,2);
  Rpush(p_0);
  goto y_7;
  p_0 :
  goto o_0;
  y_7 :
  NotNULLd(1,3);
  NotNULLd(1,4);
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App3("If",App2("Pair",Egetd(1,3),Egetd(1,6)),App2("Pair",Egetd(1,4),Egetd(1,6)),App2("Pair",Egetd(1,5),Egetd(1,6))));
  Tdupl();
  NotNULLd(1,3);
  NotNULLd(1,4);
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App3("If",App2("Pair",Egetd(1,3),Egetd(1,6)),App2("Pair",Egetd(1,4),Egetd(1,6)),App2("Pair",Egetd(1,5),Egetd(1,6))));
  MoveTop(0,1);
  Tpop();
  Return();
  o_0 :
  Epopd(1,6);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_n_6);
  Ccall(_stratego_o_6);
  goto s_0;
  m_0 :
  Cpop();
  s_0 :
  Tset(App3("If",App2("Pair",App0("Id"),App0("Nil")),App2("Pair",App0("Id"),App0("Nil")),App2("Pair",App0("Id"),App0("Nil"))));
  Tdupl();
  Tset(App3("If",App2("Pair",App0("Id"),App0("Nil")),App2("Pair",App0("Id"),App0("Nil")),App2("Pair",App0("Id"),App0("Nil"))));
  MoveTop(0,2);
  Tpop();
  Cpush(u_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto t_0;
  u_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_6);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_6);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_o_6);
  goto v_0;
  t_0 :
  Cpop();
  v_0 :
  Tpop();
  Ccall(_stratego_k_6);
  goto j_0;
  l_0 :
  Ccall(_stratego_m_6);
  goto w_0;
  j_0 :
  Cpop();
  w_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_k_6)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_l_6);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_g_6);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_l_6)
  _ST_add();
ENDPROC

PROC(_stratego_m_6)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_l_6);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_g_6);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_n_6)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_d_6);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_o_6)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto p_9;
  p_9 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_9;
  q_9 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto r_9;
  r_9 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(y_0);
  goto b_10;
  y_0 :
  goto x_0;
  b_10 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  x_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_p_6)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("congruence-thread-test"));
  Ccall(_stratego_n_6);
  Tpop();
  Cpush(a_1);
  Tdupl();
  Cpush(c_1);
  Epushd(1,6);
  Tset(App2("Pair",App3("If",App0("Id"),App0("Id"),App0("Id")),App0("Zero")));
  MoveTop(1,1);
  goto t_10;
  t_10 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,6,1,1,1);
  goto u_10;
  u_10 :
  TestFunFC(r_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,5,1,2,2);
  Rpush(e_1);
  goto r_13;
  e_1 :
  goto d_1;
  r_13 :
  Epushd(2,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("Pair",Egetd(1,3),Egetd(1,6)));
  MoveTop(2,1);
  goto q_10;
  q_10 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_10;
  r_10 :
  TestFunFC(h_1,&&fail,Egetd(2,2));
  Rpush(g_1);
  goto s_13;
  g_1 :
  goto f_1;
  s_13 :
  Epushd(3,3);
  NotNULLd(2,3);
  Tset(App2("Pair",App0("Id"),App1("Succ",Egetd(2,3))));
  MoveTop(3,1);
  goto p_10;
  p_10 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_1);
  goto t_13;
  j_1 :
  goto i_1;
  t_13 :
  Epushd(4,3);
  NotNULLd(1,4);
  NotNULLd(3,3);
  Tset(App2("Pair",Egetd(1,4),Egetd(3,3)));
  MoveTop(4,1);
  goto n_10;
  n_10 :
  TestFunFC(q_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto o_10;
  o_10 :
  TestFunFC(h_1,&&fail,Egetd(4,2));
  Rpush(l_1);
  goto u_13;
  l_1 :
  goto k_1;
  u_13 :
  Epushd(5,3);
  NotNULLd(4,3);
  Tset(App2("Pair",App0("Id"),App1("Succ",Egetd(4,3))));
  MoveTop(5,1);
  goto m_10;
  m_10 :
  TestFunFC(q_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(n_1);
  goto v_13;
  n_1 :
  goto m_1;
  v_13 :
  Epushd(6,3);
  NotNULLd(1,5);
  NotNULLd(5,3);
  Tset(App2("Pair",Egetd(1,5),Egetd(5,3)));
  MoveTop(6,1);
  goto k_10;
  k_10 :
  TestFunFC(q_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto l_10;
  l_10 :
  TestFunFC(h_1,&&fail,Egetd(6,2));
  Rpush(p_1);
  goto w_13;
  p_1 :
  goto o_1;
  w_13 :
  Epushd(7,3);
  NotNULLd(6,3);
  Tset(App2("Pair",App0("Id"),App1("Succ",Egetd(6,3))));
  MoveTop(7,1);
  goto j_10;
  j_10 :
  TestFunFC(q_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(r_1);
  goto x_13;
  r_1 :
  goto q_1;
  x_13 :
  NotNULLd(3,2);
  NotNULLd(5,2);
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Pair",App3("If",Egetd(3,2),Egetd(5,2),Egetd(7,2)),Egetd(7,3)));
  Return();
  q_1 :
  Epopd(7,3);
  Return();
  o_1 :
  Epopd(6,3);
  Return();
  m_1 :
  Epopd(5,3);
  Return();
  k_1 :
  Epopd(4,3);
  Return();
  i_1 :
  Epopd(3,3);
  Return();
  f_1 :
  MoveTop(2,4);
  Move(0,1,2,4);
  Epopd(2,4);
  Return();
  d_1 :
  Epopd(1,6);
  goto b_1;
  c_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_n_6);
  Ccall(_stratego_o_6);
  goto s_1;
  b_1 :
  Cpop();
  s_1 :
  Tset(App2("Pair",App3("If",App0("Id"),App0("Id"),App0("Id")),App1("Succ",App1("Succ",App1("Succ",App0("Zero"))))));
  Tdupl();
  Tset(App2("Pair",App3("If",App0("Id"),App0("Id"),App0("Id")),App1("Succ",App1("Succ",App1("Succ",App0("Zero"))))));
  MoveTop(0,2);
  Tpop();
  Cpush(u_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto t_1;
  u_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_6);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_6);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_o_6);
  goto w_1;
  t_1 :
  Cpop();
  w_1 :
  Tpop();
  Ccall(_stratego_k_6);
  goto z_0;
  a_1 :
  Ccall(_stratego_m_6);
  goto x_1;
  z_0 :
  Cpop();
  x_1 :
  Epopd(0,2);
ENDPROC
