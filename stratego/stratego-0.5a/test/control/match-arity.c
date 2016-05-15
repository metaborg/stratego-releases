#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,h_1);
VARDECL(AFun,g_1);
VARDECL(AFun,r_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_l_5);
PROCDECL(_stratego_m_5);
PROCDECL(_stratego_n_5);
PROCDECL(_stratego_o_5);
PROCDECL(_stratego_p_5);
PROCDECL(_stratego_q_5);
PROCDECL(_stratego_r_5);
PROCDECL(_stratego_s_5);
PROCDECL(_stratego_t_5);
PROCDECL(_stratego_u_5);
PROCDECL(_stratego_v_5);
PROCDECL(_stratego_w_5);
PROCDECL(_stratego_x_5);
PROCDECL(_stratego_y_5);
PROCDECL(_stratego_z_5);
PROCDECL(_stratego_a_6);
PROCDECL(_stratego_b_6);

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
  Ccall(_stratego_l_5);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_m_5);
  Ccall(_stratego_r_5);
  Ccall(_stratego_x_5);
  Ccall(_stratego_y_5);
  Ccall(_stratego_z_5);
  Ccall(_stratego_a_6);
  Ccall(_stratego_b_6);
  Ccall(_stratego_n_5);
  Ccall(_stratego_p_5);
ENDPROC

PROC(_stratego_l_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_m_5)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_n_5)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_5);
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
  Ccall(_stratego_l_5);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_o_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_7;
  f_7 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto h_7;
  c_0 :
  goto b_0;
  h_7 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_5)
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
  goto j_7;
  j_7 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto l_7;
  h_0 :
  goto g_0;
  l_7 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_q_5);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_q_5);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_q_5)
  _ST_exit();
ENDPROC

PROC(_stratego_r_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity1"));
  Ccall(_stratego_v_5);
  Tpop();
  Cpush(k_0);
  Tdupl();
  Cpush(m_0);
  Epushd(1,1);
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  Cpush(n_0);
  Tdupl();
  Epushd(2,3);
  MoveTop(2,1);
  goto n_7;
  n_7 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(q_0);
  goto f_9;
  q_0 :
  goto o_0;
  f_9 :
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App3("If",Egetd(2,2),Egetd(2,3),App0("Skip")));
  Return();
  o_0 :
  Epopd(2,3);
  Cpop();
  Crestore();
  Cjump();
  n_0 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto l_0;
  m_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_v_5);
  Ccall(_stratego_w_5);
  goto s_0;
  l_0 :
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
  Ccall(_stratego_l_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_w_5);
  goto v_0;
  t_0 :
  Cpop();
  v_0 :
  Tpop();
  Ccall(_stratego_s_5);
  goto j_0;
  k_0 :
  Ccall(_stratego_u_5);
  goto w_0;
  j_0 :
  Cpop();
  w_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_s_5)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_t_5);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_t_5)
  _ST_add();
ENDPROC

PROC(_stratego_u_5)
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
  Ccall(_stratego_t_5);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_v_5)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_l_5);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_w_5)
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

PROC(_stratego_x_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity2"));
  Ccall(_stratego_v_5);
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
  Ccall(_stratego_v_5);
  Ccall(_stratego_w_5);
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
  Ccall(_stratego_l_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_w_5);
  goto l_1;
  j_1 :
  Cpop();
  l_1 :
  Tpop();
  Ccall(_stratego_s_5);
  goto z_0;
  a_1 :
  Ccall(_stratego_u_5);
  goto m_1;
  z_0 :
  Cpop();
  m_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity3"));
  Ccall(_stratego_v_5);
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
  Ccall(_stratego_v_5);
  Ccall(_stratego_w_5);
  goto t_1;
  p_1 :
  Cpop();
  t_1 :
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  Tdupl();
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  MoveTop(0,2);
  Tpop();
  Cpush(v_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto u_1;
  v_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_w_5);
  goto w_1;
  u_1 :
  Cpop();
  w_1 :
  Tpop();
  Ccall(_stratego_s_5);
  goto n_1;
  o_1 :
  Ccall(_stratego_u_5);
  goto x_1;
  n_1 :
  Cpop();
  x_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_z_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity4"));
  Ccall(_stratego_v_5);
  Tpop();
  Cpush(z_1);
  Tdupl();
  Cpush(b_2);
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
  Rpush(d_2);
  goto r_17;
  d_2 :
  goto c_2;
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
  c_2 :
  Epopd(1,4);
  goto a_2;
  b_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_v_5);
  Ccall(_stratego_w_5);
  goto e_2;
  a_2 :
  Cpop();
  e_2 :
  Tset(App2("If",App0("Skip"),App0("Skip")));
  Tdupl();
  Tset(App2("If",App0("Skip"),App0("Skip")));
  MoveTop(0,2);
  Tpop();
  Cpush(g_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto f_2;
  g_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_w_5);
  goto h_2;
  f_2 :
  Cpop();
  h_2 :
  Tpop();
  Ccall(_stratego_s_5);
  goto y_1;
  z_1 :
  Ccall(_stratego_u_5);
  goto i_2;
  y_1 :
  Cpop();
  i_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_a_6)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity5"));
  Ccall(_stratego_v_5);
  Tpop();
  Cpush(k_2);
  Tdupl();
  Cpush(m_2);
  Epushd(1,5);
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  MoveTop(1,1);
  goto h_18;
  h_18 :
  TestFunFC(r_0,&&q_2,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(p_2);
  goto d_20;
  q_2 :
  TestFunFC(g_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  goto i_18;
  i_18 :
  TestFunFC(h_1,&&fail,Egetd(1,4));
  Rpush(p_2);
  goto e_20;
  p_2 :
  goto o_2;
  e_20 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("If",Egetd(1,2),Egetd(1,3)));
  Return();
  o_2 :
  goto n_2;
  d_20 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App3("If",Egetd(1,2),Egetd(1,3),App0("Skip")));
  Return();
  n_2 :
  MoveTop(1,5);
  Move(0,1,1,5);
  Epopd(1,5);
  goto l_2;
  m_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_v_5);
  Ccall(_stratego_w_5);
  goto r_2;
  l_2 :
  Cpop();
  r_2 :
  Tset(App2("If",App0("Skip"),App0("Skip")));
  Tdupl();
  Tset(App2("If",App0("Skip"),App0("Skip")));
  MoveTop(0,2);
  Tpop();
  Cpush(t_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto s_2;
  t_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_w_5);
  goto u_2;
  s_2 :
  Cpop();
  u_2 :
  Tpop();
  Ccall(_stratego_s_5);
  goto j_2;
  k_2 :
  Ccall(_stratego_u_5);
  goto v_2;
  j_2 :
  Cpop();
  v_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_b_6)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity6"));
  Ccall(_stratego_v_5);
  Tpop();
  Cpush(x_2);
  Tdupl();
  Cpush(z_2);
  Epushd(1,5);
  Tset(App2("If",App0("Skip"),App0("Skip")));
  MoveTop(1,1);
  goto u_20;
  u_20 :
  TestFunFC(r_0,&&d_3,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(c_3);
  goto q_22;
  d_3 :
  TestFunFC(g_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  goto v_20;
  v_20 :
  TestFunFC(h_1,&&fail,Egetd(1,4));
  Rpush(c_3);
  goto r_22;
  c_3 :
  goto b_3;
  r_22 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("If",Egetd(1,2),Egetd(1,3)));
  Return();
  b_3 :
  goto a_3;
  q_22 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App3("If",Egetd(1,2),Egetd(1,3),App0("Skip")));
  Return();
  a_3 :
  MoveTop(1,5);
  Move(0,1,1,5);
  Epopd(1,5);
  goto y_2;
  z_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_v_5);
  Ccall(_stratego_w_5);
  goto e_3;
  y_2 :
  Cpop();
  e_3 :
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  Tdupl();
  Tset(App3("If",App0("Skip"),App0("Skip"),App0("Skip")));
  MoveTop(0,2);
  Tpop();
  Cpush(g_3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto f_3;
  g_3 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_w_5);
  goto h_3;
  f_3 :
  Cpop();
  h_3 :
  Tpop();
  Ccall(_stratego_s_5);
  goto w_2;
  x_2 :
  Ccall(_stratego_u_5);
  goto i_3;
  w_2 :
  Cpop();
  i_3 :
  Epopd(0,2);
ENDPROC

DOIT

