#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,h_1);
VARDECL(AFun,g_1);
VARDECL(AFun,r_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_s_9);
PROCDECL(_stratego_t_9);
PROCDECL(_stratego_u_9);
PROCDECL(_stratego_v_9);
PROCDECL(_stratego_w_9);
PROCDECL(_stratego_x_9);
PROCDECL(_stratego_b_10);
PROCDECL(_stratego_c_10);
PROCDECL(_stratego_d_10);
PROCDECL(_stratego_i_10);
PROCDECL(_stratego_j_10);
PROCDECL(_stratego_k_10);
PROCDECL(_stratego_n_10);
PROCDECL(_stratego_o_10);
PROCDECL(_stratego_p_10);
PROCDECL(_stratego_q_10);
PROCDECL(_stratego_r_10);

PROC(_stratego_init_afuns)
  MOVE(h_1,ATmakeAFun("Skip",0,0));
  MOVE(g_1,ATmakeAFun("If",3,0));
  MOVE(r_0,ATmakeAFun("If",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("match-arity"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_t_9);
  Ccall(_stratego_b_10);
  Ccall(_stratego_n_10);
  Ccall(_stratego_o_10);
  Ccall(_stratego_p_10);
  Ccall(_stratego_q_10);
  Ccall(_stratego_r_10);
  Ccall(_stratego_u_9);
  Ccall(_stratego_w_9);
ENDPROC

PROC(_stratego_s_9)
  _ST_printnl();
ENDPROC

PROC(_stratego_t_9)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_u_9)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
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
  Ccall(_stratego_s_9);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_v_9);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_v_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_4;
  i_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto k_4;
  c_0 :
  goto b_0;
  k_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_9)
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
  goto m_4;
  m_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto o_4;
  h_0 :
  goto g_0;
  o_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_v_9);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_x_9);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_x_9);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_x_9)
  _ST_exit();
ENDPROC

PROC(_stratego_b_10)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity1"));
  Ccall(_stratego_j_10);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,1);
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  Cpush(o_0);
  Tdupl();
  Epushd(2,3);
  MoveTop(2,1);
  goto q_4;
  q_4 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(q_0);
  goto k_7;
  q_0 :
  goto p_0;
  k_7 :
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App3("If",Egetd(2,2),Egetd(2,3),App0("Skip")));
  Return();
  p_0 :
  Epopd(2,3);
  Cpop();
  Crestore();
  Cjump();
  o_0 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_j_10);
  Ccall(_stratego_k_10);
  goto s_0;
  m_0 :
  Cpop();
  s_0 :
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  Tdupl();
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
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
  Ccall(_stratego_s_9);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_k_10);
  goto v_0;
  t_0 :
  Cpop();
  v_0 :
  Tpop();
  Ccall(_stratego_c_10);
  goto j_0;
  l_0 :
  Ccall(_stratego_i_10);
  goto w_0;
  j_0 :
  Cpop();
  w_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_c_10)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_d_10);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_9);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_d_10)
  _ST_add();
ENDPROC

PROC(_stratego_i_10)
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
  Ccall(_stratego_d_10);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_v_9);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_j_10)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_k_10)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto u_10;
  u_10 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto v_10;
  v_10 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto w_10;
  w_10 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(y_0);
  goto f_11;
  y_0 :
  goto x_0;
  f_11 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  x_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_n_10)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity2"));
  Ccall(_stratego_j_10);
  Tpop();
  Cpush(a_1);
  Tdupl();
  Cpush(c_1);
  Epushd(1,1);
  Tset(App2("If",App0("Skip"),App0("Skip")));
  Cpush(d_1);
  Tdupl();
  Epushd(2,4);
  MoveTop(2,1);
  goto h_11;
  h_11 :
  TestFunFC(g_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  goto i_11;
  i_11 :
  TestFunFC(h_1,&&fail,Egetd(2,4));
  Rpush(f_1);
  goto b_13;
  f_1 :
  goto e_1;
  b_13 :
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("If",Egetd(2,2),Egetd(2,3)));
  Return();
  e_1 :
  Epopd(2,4);
  Cpop();
  Crestore();
  Cjump();
  d_1 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto b_1;
  c_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_j_10);
  Ccall(_stratego_k_10);
  goto i_1;
  b_1 :
  Cpop();
  i_1 :
  Tset(App2("If",App0("Skip"),App0("Skip")));
  Tdupl();
  Tset(App2("If",App0("Skip"),App0("Skip")));
  MoveTop(0,2);
  Tpop();
  Cpush(k_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto j_1;
  k_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_k_10);
  goto l_1;
  j_1 :
  Cpop();
  l_1 :
  Tpop();
  Ccall(_stratego_c_10);
  goto z_0;
  a_1 :
  Ccall(_stratego_i_10);
  goto m_1;
  z_0 :
  Cpop();
  m_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_o_10)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity3"));
  Ccall(_stratego_j_10);
  Tpop();
  Cpush(o_1);
  Tdupl();
  Cpush(q_1);
  Epushd(1,3);
  Tset(App2("If",App0("Skip"),App0("Skip")));
  MoveTop(1,1);
  goto r_13;
  r_13 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(s_1);
  goto i_15;
  s_1 :
  goto r_1;
  i_15 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App3("If",Egetd(1,2),Egetd(1,3),App0("Skip")));
  Tdupl();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App3("If",Egetd(1,2),Egetd(1,3),App0("Skip")));
  MoveTop(0,1);
  Tpop();
  Return();
  r_1 :
  Epopd(1,3);
  goto p_1;
  q_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_j_10);
  Ccall(_stratego_k_10);
  goto t_1;
  p_1 :
  Cpop();
  t_1 :
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  Tdupl();
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  MoveTop(0,2);
  Tpop();
  Cpush(w_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto u_1;
  w_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_k_10);
  goto x_1;
  u_1 :
  Cpop();
  x_1 :
  Tpop();
  Ccall(_stratego_c_10);
  goto n_1;
  o_1 :
  Ccall(_stratego_i_10);
  goto y_1;
  n_1 :
  Cpop();
  y_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_10)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity4"));
  Ccall(_stratego_j_10);
  Tpop();
  Cpush(a_2);
  Tdupl();
  Cpush(c_2);
  Epushd(1,4);
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  MoveTop(1,1);
  goto y_15;
  y_15 :
  TestFunFC(g_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  goto z_15;
  z_15 :
  TestFunFC(h_1,&&fail,Egetd(1,4));
  Rpush(e_2);
  goto r_17;
  e_2 :
  goto d_2;
  r_17 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("If",Egetd(1,2),Egetd(1,3)));
  Tdupl();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("If",Egetd(1,2),Egetd(1,3)));
  MoveTop(0,1);
  Tpop();
  Return();
  d_2 :
  Epopd(1,4);
  goto b_2;
  c_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_j_10);
  Ccall(_stratego_k_10);
  goto f_2;
  b_2 :
  Cpop();
  f_2 :
  Tset(App2("If",App0("Skip"),App0("Skip")));
  Tdupl();
  Tset(App2("If",App0("Skip"),App0("Skip")));
  MoveTop(0,2);
  Tpop();
  Cpush(h_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto g_2;
  h_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_k_10);
  goto i_2;
  g_2 :
  Cpop();
  i_2 :
  Tpop();
  Ccall(_stratego_c_10);
  goto z_1;
  a_2 :
  Ccall(_stratego_i_10);
  goto j_2;
  z_1 :
  Cpop();
  j_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_q_10)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity5"));
  Ccall(_stratego_j_10);
  Tpop();
  Cpush(l_2);
  Tdupl();
  Cpush(n_2);
  Epushd(1,5);
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  MoveTop(1,1);
  goto h_18;
  h_18 :
  TestFunFC(r_0,&&r_2,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(q_2);
  goto d_20;
  r_2 :
  TestFunFC(g_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  goto i_18;
  i_18 :
  TestFunFC(h_1,&&fail,Egetd(1,4));
  Rpush(q_2);
  goto e_20;
  q_2 :
  goto p_2;
  e_20 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("If",Egetd(1,2),Egetd(1,3)));
  Return();
  p_2 :
  goto o_2;
  d_20 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App3("If",Egetd(1,2),Egetd(1,3),App0("Skip")));
  Return();
  o_2 :
  MoveTop(1,5);
  Move(0,1,1,5);
  Epopd(1,5);
  goto m_2;
  n_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_j_10);
  Ccall(_stratego_k_10);
  goto t_2;
  m_2 :
  Cpop();
  t_2 :
  Tset(App2("If",App0("Skip"),App0("Skip")));
  Tdupl();
  Tset(App2("If",App0("Skip"),App0("Skip")));
  MoveTop(0,2);
  Tpop();
  Cpush(v_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto u_2;
  v_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_k_10);
  goto w_2;
  u_2 :
  Cpop();
  w_2 :
  Tpop();
  Ccall(_stratego_c_10);
  goto k_2;
  l_2 :
  Ccall(_stratego_i_10);
  goto x_2;
  k_2 :
  Cpop();
  x_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_r_10)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity6"));
  Ccall(_stratego_j_10);
  Tpop();
  Cpush(z_2);
  Tdupl();
  Cpush(b_3);
  Epushd(1,5);
  Tset(App2("If",App0("Skip"),App0("Skip")));
  MoveTop(1,1);
  goto u_20;
  u_20 :
  TestFunFC(r_0,&&f_3,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(e_3);
  goto q_22;
  f_3 :
  TestFunFC(g_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  goto v_20;
  v_20 :
  TestFunFC(h_1,&&fail,Egetd(1,4));
  Rpush(e_3);
  goto r_22;
  e_3 :
  goto d_3;
  r_22 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("If",Egetd(1,2),Egetd(1,3)));
  Return();
  d_3 :
  goto c_3;
  q_22 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App3("If",Egetd(1,2),Egetd(1,3),App0("Skip")));
  Return();
  c_3 :
  MoveTop(1,5);
  Move(0,1,1,5);
  Epopd(1,5);
  goto a_3;
  b_3 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_j_10);
  Ccall(_stratego_k_10);
  goto g_3;
  a_3 :
  Cpop();
  g_3 :
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  Tdupl();
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  MoveTop(0,2);
  Tpop();
  Cpush(i_3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto h_3;
  i_3 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_9);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_k_10);
  goto j_3;
  h_3 :
  Cpop();
  j_3 :
  Tpop();
  Ccall(_stratego_c_10);
  goto y_2;
  z_2 :
  Ccall(_stratego_i_10);
  goto k_3;
  y_2 :
  Cpop();
  k_3 :
  Epopd(0,2);
ENDPROC

DOIT

