#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,m_1);
VARDECL(AFun,s_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_i_6);
PROCDECL(_stratego_j_6);
PROCDECL(_stratego_k_6);
PROCDECL(_stratego_l_6);
PROCDECL(_stratego_m_6);
PROCDECL(_stratego_n_6);
PROCDECL(_stratego_o_6);
PROCDECL(_stratego_p_6);
PROCDECL(_stratego_q_6);
PROCDECL(_stratego_r_6);
PROCDECL(_stratego_s_6);
PROCDECL(_stratego_t_6);
PROCDECL(_stratego_u_6);
PROCDECL(_stratego_v_6);

PROC(_stratego_init_afuns)
  MOVE(m_1,ATmakeAFun("Ann",2,0));
  MOVE(s_0,ATmakeAFun("Pair",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("thread-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_6);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_j_6);
  Ccall(_stratego_o_6);
  Ccall(_stratego_u_6);
  Ccall(_stratego_v_6);
  Ccall(_stratego_k_6);
  Ccall(_stratego_m_6);
ENDPROC

PROC(_stratego_i_6)
  _ST_printnl();
ENDPROC

PROC(_stratego_j_6)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_k_6)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_6);
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
  Ccall(_stratego_i_6);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_l_6);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_l_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_3;
  w_3 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto y_3;
  c_0 :
  goto b_0;
  y_3 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_6)
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
  goto a_4;
  a_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto v_4;
  h_0 :
  goto g_0;
  v_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_l_6);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_n_6);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_n_6);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_n_6)
  _ST_exit();
ENDPROC

PROC(_stratego_o_6)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("simple-test"));
  Ccall(_stratego_r_6);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,1);
  Tset(App2("Pair",App3("F",App1("G",App0("A")),App1("H",App0("B")),App0("C")),MakeInt(0)));
  ThreadInit();
  o_0 :
  ThreadNextSon(&&p_0);
  Epushd(2,3);
  MoveTop(2,1);
  goto b_5;
  b_5 :
  TestFunFC(s_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(r_0);
  goto b_8;
  r_0 :
  goto q_0;
  b_8 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_t_6);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("Pair",Egetd(2,2),Egetd(3,1)));
  Epopd(3,1);
  Return();
  q_0 :
  Epopd(2,3);
  ThreadSetEnv();
  goto o_0;
  p_0 :
  ThreadBuild();
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_r_6);
  Ccall(_stratego_s_6);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
  Tset(App2("Pair",App3("F",App1("G",App0("A")),App1("H",App0("B")),App0("C")),MakeInt(3)));
  Tdupl();
  Tset(App2("Pair",App3("F",App1("G",App0("A")),App1("H",App0("B")),App0("C")),MakeInt(3)));
  MoveTop(0,2);
  Tpop();
  Cpush(v_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto u_0;
  v_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_6);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_6);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_s_6);
  goto w_0;
  u_0 :
  Cpop();
  w_0 :
  Tpop();
  Ccall(_stratego_p_6);
  goto j_0;
  l_0 :
  Ccall(_stratego_q_6);
  goto x_0;
  j_0 :
  Cpop();
  x_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_6)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_t_6);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_6);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_q_6)
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
  Ccall(_stratego_t_6);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_l_6);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_r_6)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_i_6);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_s_6)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto q_9;
  q_9 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto r_9;
  r_9 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_9;
  s_9 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(z_0);
  goto b_10;
  z_0 :
  goto y_0;
  b_10 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  y_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_t_6)
  _ST_add();
ENDPROC

PROC(_stratego_u_6)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("preorder-number"));
  Ccall(_stratego_r_6);
  Tpop();
  Cpush(b_1);
  Tdupl();
  Cpush(d_1);
  Epushd(1,1);
  Tset(App2("Pair",App3("F",App1("G",App0("A")),App1("H",App0("B")),App0("C")),MakeInt(0)));
  Rpush(e_1);
  q_12 :
  Epushd(2,3);
  MoveTop(2,1);
  goto j_10;
  j_10 :
  TestFunFC(s_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(g_1);
  goto r_12;
  g_1 :
  goto f_1;
  r_12 :
  Epushd(3,7);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_t_6);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("Pair",Egetd(2,2),Egetd(3,1)));
  ThreadInit();
  h_1 :
  ThreadNextSon(&&i_1);
  Rpush(j_1);
  goto q_12;
  j_1 :
  ThreadSetEnv();
  goto h_1;
  i_1 :
  ThreadBuild();
  MoveTop(3,2);
  NotNULLd(2,3);
  NotNULLd(3,2);
  Tset(App2("Ann",Egetd(2,3),Egetd(3,2)));
  MoveTop(3,3);
  goto h_10;
  h_10 :
  TestFunFC(m_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto i_10;
  i_10 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(l_1);
  goto u_12;
  l_1 :
  goto k_1;
  u_12 :
  NotNULLd(3,4);
  NotNULLd(3,6);
  NotNULLd(3,7);
  Tset(App2("Pair",App2("Ann",Egetd(3,4),Egetd(3,6)),Egetd(3,7)));
  Return();
  k_1 :
  Epopd(3,7);
  Return();
  f_1 :
  Epopd(2,3);
  Return();
  e_1 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto c_1;
  d_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_r_6);
  Ccall(_stratego_s_6);
  goto n_1;
  c_1 :
  Cpop();
  n_1 :
  Tset(App2("Pair",App2("Ann",MakeInt(0),App3("F",App2("Ann",MakeInt(1),App1("G",App2("Ann",MakeInt(2),App0("A")))),App2("Ann",MakeInt(3),App1("H",App2("Ann",MakeInt(4),App0("B")))),App2("Ann",MakeInt(5),App0("C")))),MakeInt(6)));
  Tdupl();
  Tset(App2("Pair",App2("Ann",MakeInt(0),App3("F",App2("Ann",MakeInt(1),App1("G",App2("Ann",MakeInt(2),App0("A")))),App2("Ann",MakeInt(3),App1("H",App2("Ann",MakeInt(4),App0("B")))),App2("Ann",MakeInt(5),App0("C")))),MakeInt(6)));
  MoveTop(0,2);
  Tpop();
  Cpush(p_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto o_1;
  p_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_6);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_6);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_s_6);
  goto q_1;
  o_1 :
  Cpop();
  q_1 :
  Tpop();
  Ccall(_stratego_p_6);
  goto a_1;
  b_1 :
  Ccall(_stratego_q_6);
  goto r_1;
  a_1 :
  Cpop();
  r_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_6)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("postorder-number"));
  Ccall(_stratego_r_6);
  Tpop();
  Cpush(t_1);
  Tdupl();
  Cpush(w_1);
  Epushd(1,1);
  Tset(App2("Pair",App3("F",App1("G",App0("A")),App1("H",App0("B")),App0("C")),MakeInt(0)));
  Rpush(x_1);
  j_15 :
  Epushd(2,3);
  ThreadInit();
  z_1 :
  ThreadNextSon(&&a_2);
  Rpush(b_2);
  goto j_15;
  b_2 :
  ThreadSetEnv();
  goto z_1;
  a_2 :
  ThreadBuild();
  MoveTop(2,1);
  goto l_13;
  l_13 :
  TestFunFC(s_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(c_2);
  goto k_15;
  c_2 :
  goto y_1;
  k_15 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_t_6);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("Pair",App2("Ann",Egetd(2,3),Egetd(2,2)),Egetd(3,1)));
  Epopd(3,1);
  Return();
  y_1 :
  Epopd(2,3);
  Return();
  x_1 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto u_1;
  w_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_r_6);
  Ccall(_stratego_s_6);
  goto d_2;
  u_1 :
  Cpop();
  d_2 :
  Tset(App2("Pair",App2("Ann",MakeInt(5),App3("F",App2("Ann",MakeInt(1),App1("G",App2("Ann",MakeInt(0),App0("A")))),App2("Ann",MakeInt(3),App1("H",App2("Ann",MakeInt(2),App0("B")))),App2("Ann",MakeInt(4),App0("C")))),MakeInt(6)));
  Tdupl();
  Tset(App2("Pair",App2("Ann",MakeInt(5),App3("F",App2("Ann",MakeInt(1),App1("G",App2("Ann",MakeInt(0),App0("A")))),App2("Ann",MakeInt(3),App1("H",App2("Ann",MakeInt(2),App0("B")))),App2("Ann",MakeInt(4),App0("C")))),MakeInt(6)));
  MoveTop(0,2);
  Tpop();
  Cpush(f_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto e_2;
  f_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_6);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_6);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_s_6);
  goto g_2;
  e_2 :
  Cpop();
  g_2 :
  Tpop();
  Ccall(_stratego_p_6);
  goto s_1;
  t_1 :
  Ccall(_stratego_q_6);
  goto h_2;
  s_1 :
  Cpop();
  h_2 :
  Epopd(0,2);
ENDPROC
