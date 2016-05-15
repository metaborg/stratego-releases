#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,g_3);
VARDECL(AFun,g_1);
VARDECL(AFun,b_1);
VARDECL(AFun,a_1);
VARDECL(AFun,q_0);
PROCDECL(_stratego_w_9);
PROCDECL(_stratego_x_9);
PROCDECL(_stratego_y_9);
PROCDECL(_stratego_z_9);
PROCDECL(_stratego_a_10);
PROCDECL(_stratego_b_10);
PROCDECL(_stratego_c_10);
PROCDECL(_stratego_d_10);
PROCDECL(_stratego_e_10);
PROCDECL(_stratego_f_10);
PROCDECL(_stratego_g_10);
PROCDECL(_stratego_h_10);
PROCDECL(_stratego_i_10);
PROCDECL(_stratego_j_10);
PROCDECL(_stratego_k_10);
PROCDECL(_stratego_v_10);
PROCDECL(_stratego_w_10);
PROCDECL(_stratego_z_10);
PROCDECL(_stratego_a_11);
PROCDECL(_stratego_b_11);
PROCDECL(_stratego_c_11);
PROCDECL(_stratego_d_11);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(g_3,ATmakeAFun("Nil",0,0));
  MOVE(g_1,ATmakeAFun("Cons",2,0));
  MOVE(b_1,ATmakeAFun("TNil",0,0));
  MOVE(a_1,ATmakeAFun("TCons",2,0));
  MOVE(q_0,ATmakeAFun("H",2,0));
ENDPROC

PROC(_stratego_w_9)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test6"));
  Ccall(_stratego_h_10);
  Tpop();
  Cpush(b_0);
  Tdupl();
  Cpush(f_0);
  Epushd(1,1);
  Tset(App2("F",App2("G",App0("A"),App2("H",App0("A"),(ATerm)ATmakeReal(3.00))),App2("H",MakeInt(1),App0("C"))));
  Rpush(g_0);
  a_14 :
  Cpush(i_0);
  Epushd(2,3);
  Cpush(k_0);
  Ccall(_stratego_a_10);
  goto j_0;
  k_0 :
  Ccall(_stratego_z_9);
  goto l_0;
  j_0 :
  Cpop();
  l_0 :
  MoveTop(2,1);
  Cpush(n_0);
  Epushd(3,3);
  MoveTop(3,1);
  goto e_0;
  e_0 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_0);
  goto d_0;
  p_0 :
  goto o_0;
  d_0 :
  NotNULLd(3,2);
  Tset(App1("I",Egetd(3,2)));
  Return();
  o_0 :
  Epopd(3,3);
  goto m_0;
  n_0 :
  goto r_0;
  m_0 :
  Cpop();
  r_0 :
  MoveTop(2,2);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Cpush(t_0);
  Epushd(3,3);
  MoveTop(3,1);
  goto n_1;
  n_1 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(v_0);
  goto m_1;
  v_0 :
  goto u_0;
  m_1 :
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("Cons",App2("H",Egetd(3,2),Egetd(3,3)),App0("Nil")));
  Return();
  u_0 :
  Epopd(3,3);
  goto s_0;
  t_0 :
  Tset(App0("Nil"));
  goto w_0;
  s_0 :
  Cpop();
  w_0 :
  MoveTop(2,3);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  Epopd(2,3);
  goto h_0;
  i_0 :
  Epushd(2,13);
  MoveTop(2,1);
  Tdupl();
  Epushd(3,5);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  _ST_explode_term();
  MoveTop(3,1);
  goto w_1;
  w_1 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto u_2;
  u_2 :
  TestFunFC(a_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto v_2;
  v_2 :
  TestFunFC(b_1,&&fail,Egetd(3,5));
  Rpush(z_0);
  goto v_1;
  z_0 :
  goto y_0;
  v_1 :
  Move(2,2,3,2);
  Move(2,3,3,4);
  Return();
  y_0 :
  Epopd(3,5);
  Tpop();
  Tdupl();
  Epushd(3,5);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(c_1);
  b_14 :
  Cpush(e_1);
  Ccall(_stratego_k_10);
  goto d_1;
  e_1 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Rpush(h_1);
  goto a_14;
  h_1 :
  OneNextSon();
  Rpush(i_1);
  goto b_14;
  i_1 :
  AllBuild();
  goto f_1;
  d_1 :
  Cpop();
  f_1 :
  Return();
  c_1 :
  Ccall(_stratego_x_9);
  MoveTop(3,1);
  goto r_5;
  r_5 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto e_6;
  e_6 :
  TestFunFC(a_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto f_6;
  f_6 :
  TestFunFC(b_1,&&fail,Egetd(3,5));
  Rpush(k_1);
  goto w_2;
  k_1 :
  goto j_1;
  w_2 :
  Epushd(4,8);
  Move(2,5,3,2);
  Move(2,4,3,4);
  NotNULLd(2,2);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,5),App0("TNil"))));
  _ST_mkterm();
  MoveTop(4,1);
  Cpush(o_1);
  Epushd(5,3);
  MoveTop(5,1);
  goto p_3;
  p_3 :
  TestFunFC(q_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(q_1);
  goto o_3;
  q_1 :
  goto p_1;
  o_3 :
  NotNULLd(5,2);
  Tset(App1("I",Egetd(5,2)));
  Return();
  p_1 :
  Epopd(5,3);
  goto l_1;
  o_1 :
  goto r_1;
  l_1 :
  Cpop();
  r_1 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Cpush(t_1);
  Epushd(5,3);
  MoveTop(5,1);
  goto s_3;
  s_3 :
  TestFunFC(q_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(x_1);
  goto r_3;
  x_1 :
  goto u_1;
  r_3 :
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset(App2("Cons",App2("H",Egetd(5,2),Egetd(5,3)),App0("Nil")));
  Return();
  u_1 :
  Epopd(5,3);
  goto s_1;
  t_1 :
  Tset(App0("Nil"));
  goto y_1;
  s_1 :
  Cpop();
  y_1 :
  MoveTop(4,3);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,3),App0("TNil"))));
  MoveTop(4,4);
  goto r_4;
  r_4 :
  TestFunFC(a_1,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto s_4;
  s_4 :
  TestFunFC(a_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto e_5;
  e_5 :
  TestFunFC(b_1,&&fail,Egetd(4,8));
  Rpush(a_2);
  goto l_4;
  a_2 :
  goto z_1;
  l_4 :
  Move(2,6,4,5);
  Move(2,7,4,7);
  Return();
  z_1 :
  Epopd(4,8);
  Return();
  j_1 :
  Epopd(3,5);
  Tpop();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_y_9);
  MoveTop(2,8);
  NotNULLd(2,7);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,7),App2("TCons",Egetd(2,8),App0("TNil"))));
  MoveTop(2,9);
  goto c_7;
  c_7 :
  TestFunFC(a_1,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto d_7;
  d_7 :
  TestFunFC(a_1,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto e_7;
  e_7 :
  TestFunFC(b_1,&&fail,Egetd(2,13));
  Rpush(c_2);
  goto m_6;
  c_2 :
  goto b_2;
  m_6 :
  Epushd(3,1);
  NotNULLd(2,10);
  Tset(Egetd(2,10));
  Rpush(d_2);
  c_14 :
  Cpush(f_2);
  Ccall(_stratego_k_10);
  NotNULLd(2,12);
  Tset(Egetd(2,12));
  goto e_2;
  f_2 :
  Ccontinue(g_2);
  Epushd(4,3);
  MoveTop(4,1);
  goto y_6;
  y_6 :
  TestFunFC(g_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(i_2);
  goto s_6;
  i_2 :
  goto h_2;
  s_6 :
  Tdupl();
  NotNULLd(2,12);
  Tset(Egetd(2,12));
  Rpush(j_2);
  d_14 :
  Cpush(l_2);
  Epushd(5,3);
  MoveTop(5,1);
  goto x_6;
  x_6 :
  TestFunFC(g_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(n_2);
  goto t_6;
  n_2 :
  goto m_2;
  t_6 :
  Move(4,2,5,2);
  Return();
  m_2 :
  Epopd(5,3);
  goto k_2;
  l_2 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_2);
  goto d_14;
  p_2 :
  AllBuild();
  goto o_2;
  k_2 :
  Cpop();
  o_2 :
  Return();
  j_2 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(q_2);
  goto c_14;
  q_2 :
  Return();
  h_2 :
  Epopd(4,3);
  goto e_2;
  g_2 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_2);
  goto c_14;
  s_2 :
  AllBuild();
  goto r_2;
  e_2 :
  Cpop();
  r_2 :
  Return();
  d_2 :
  MoveTop(3,1);
  NotNULLd(2,6);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,6),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  b_2 :
  Epopd(2,13);
  goto x_0;
  h_0 :
  Cpop();
  x_0 :
  Return();
  g_0 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto c_0;
  f_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_h_10);
  Ccall(_stratego_d_10);
  goto t_2;
  c_0 :
  Cpop();
  t_2 :
  Tset(App2("TCons",App2("F",App2("G",App0("A"),App1("I",App0("A"))),App1("I",MakeInt(1))),App2("TCons",App2("Cons",App2("H",App0("A"),(ATerm)ATmakeReal(3.00)),App2("Cons",App2("H",MakeInt(1),App0("C")),App0("Nil"))),App0("TNil"))));
  Tdupl();
  Tset(App2("TCons",App2("F",App2("G",App0("A"),App1("I",App0("A"))),App1("I",MakeInt(1))),App2("TCons",App2("Cons",App2("H",App0("A"),(ATerm)ATmakeReal(3.00)),App2("Cons",App2("H",MakeInt(1),App0("C")),App0("Nil"))),App0("TNil"))));
  MoveTop(0,2);
  Tpop();
  Cpush(y_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto x_2;
  y_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_d_10);
  goto z_2;
  x_2 :
  Cpop();
  z_2 :
  Tpop();
  Ccall(_stratego_g_10);
  goto a_0;
  b_0 :
  Ccall(_stratego_e_10);
  goto a_3;
  a_0 :
  Cpop();
  a_3 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_x_9)
  Rpush(b_3);
  n_15 :
  Epushd(0,3);
  MoveTop(0,1);
  goto q_14;
  q_14 :
  TestFunFC(g_3,&&f_3,Egetd(0,1));
  Rpush(e_3);
  goto e_14;
  f_3 :
  TestFunFC(g_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(e_3);
  goto f_14;
  e_3 :
  goto d_3;
  f_14 :
  Epushd(1,13);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Rpush(i_3);
  goto n_15;
  i_3 :
  OneNextSon();
  Ccall(_stratego_a_11);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto h_14;
  h_14 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto i_14;
  i_14 :
  TestFunFC(a_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto j_14;
  j_14 :
  TestFunFC(a_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto k_14;
  k_14 :
  TestFunFC(b_1,&&fail,Egetd(1,6));
  goto l_14;
  l_14 :
  TestFunFC(a_1,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto m_14;
  m_14 :
  TestFunFC(a_1,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto n_14;
  n_14 :
  TestFunFC(a_1,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto o_14;
  o_14 :
  TestFunFC(b_1,&&fail,Egetd(1,12));
  goto p_14;
  p_14 :
  TestFunFC(b_1,&&fail,Egetd(1,13));
  Rpush(j_3);
  goto g_14;
  j_3 :
  goto h_3;
  g_14 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset(App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,9)),App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,11)),App0("TNil"))));
  Return();
  h_3 :
  Epopd(1,13);
  Return();
  d_3 :
  goto c_3;
  e_14 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  c_3 :
  Epopd(0,3);
  Return();
  b_3 :
ENDPROC

PROC(_stratego_y_9)
  Rpush(k_3);
  s_16 :
  Cpush(m_3);
  Ccall(_stratego_k_10);
  Tset(App0("Nil"));
  goto l_3;
  m_3 :
  Epushd(0,3);
  MoveTop(0,1);
  goto x_15;
  x_15 :
  TestFunFC(g_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(t_3);
  goto o_15;
  t_3 :
  goto q_3;
  o_15 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Rpush(v_3);
  goto s_16;
  v_3 :
  OneNextSon();
  Ccall(_stratego_a_11);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto u_15;
  u_15 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_15;
  v_15 :
  TestFunFC(a_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_15;
  w_15 :
  TestFunFC(b_1,&&fail,Egetd(1,5));
  Rpush(w_3);
  goto p_15;
  w_3 :
  goto u_3;
  p_15 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(x_3);
  t_16 :
  Cpush(z_3);
  Ccall(_stratego_k_10);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto y_3;
  z_3 :
  Ccontinue(a_4);
  Epushd(2,3);
  MoveTop(2,1);
  goto t_15;
  t_15 :
  TestFunFC(g_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(c_4);
  goto q_15;
  c_4 :
  goto b_4;
  q_15 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(d_4);
  u_16 :
  Cpush(f_4);
  Epushd(3,3);
  MoveTop(3,1);
  goto s_15;
  s_15 :
  TestFunFC(g_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(h_4);
  goto r_15;
  h_4 :
  goto g_4;
  r_15 :
  Move(2,2,3,2);
  Return();
  g_4 :
  Epopd(3,3);
  goto e_4;
  f_4 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_4);
  goto u_16;
  j_4 :
  AllBuild();
  goto i_4;
  e_4 :
  Cpop();
  i_4 :
  Return();
  d_4 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(k_4);
  goto t_16;
  k_4 :
  Return();
  b_4 :
  Epopd(2,3);
  goto y_3;
  a_4 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_4);
  goto t_16;
  n_4 :
  AllBuild();
  goto m_4;
  y_3 :
  Cpop();
  m_4 :
  Return();
  x_3 :
  Return();
  u_3 :
  Epopd(1,5);
  Return();
  q_3 :
  Epopd(0,3);
  goto n_3;
  l_3 :
  Cpop();
  n_3 :
  Return();
  k_3 :
ENDPROC

PROC(_stratego_z_9)
  _ST_is_int();
ENDPROC

PROC(_stratego_a_10)
  _ST_is_string();
ENDPROC

PROC(_stratego_b_10)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test5"));
  Ccall(_stratego_h_10);
  Tpop();
  Cpush(p_4);
  Tdupl();
  Cpush(t_4);
  Epushd(1,1);
  Tset(App2("F",App2("G",App0("A"),App2("H",App0("A"),App0("B"))),App2("H",App0("B"),App0("C"))));
  Rpush(u_4);
  r_22 :
  Cpush(w_4);
  Epushd(2,3);
  Cpush(y_4);
  Ccall(_stratego_a_10);
  goto x_4;
  y_4 :
  Ccall(_stratego_z_9);
  goto z_4;
  x_4 :
  Cpop();
  z_4 :
  MoveTop(2,1);
  Cpush(b_5);
  Epushd(3,3);
  MoveTop(3,1);
  goto x_16;
  x_16 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(d_5);
  goto w_16;
  d_5 :
  goto c_5;
  w_16 :
  NotNULLd(3,2);
  Tset(App1("I",Egetd(3,2)));
  Return();
  c_5 :
  Epopd(3,3);
  goto a_5;
  b_5 :
  goto f_5;
  a_5 :
  Cpop();
  f_5 :
  MoveTop(2,2);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Cpush(h_5);
  Epushd(3,3);
  MoveTop(3,1);
  goto a_17;
  a_17 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_5);
  goto z_16;
  j_5 :
  goto i_5;
  z_16 :
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("Cons",App2("H",Egetd(3,2),Egetd(3,3)),App0("Nil")));
  Return();
  i_5 :
  Epopd(3,3);
  goto g_5;
  h_5 :
  Tset(App0("Nil"));
  goto k_5;
  g_5 :
  Cpop();
  k_5 :
  MoveTop(2,3);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  Epopd(2,3);
  goto v_4;
  w_4 :
  Epushd(2,13);
  MoveTop(2,1);
  Tdupl();
  Epushd(3,5);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  _ST_explode_term();
  MoveTop(3,1);
  goto e_17;
  e_17 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto f_17;
  f_17 :
  TestFunFC(a_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto g_17;
  g_17 :
  TestFunFC(b_1,&&fail,Egetd(3,5));
  Rpush(n_5);
  goto d_17;
  n_5 :
  goto m_5;
  d_17 :
  Move(2,2,3,2);
  Move(2,3,3,4);
  Return();
  m_5 :
  Epopd(3,5);
  Tpop();
  Tdupl();
  Epushd(3,5);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(o_5);
  s_22 :
  Cpush(q_5);
  Ccall(_stratego_k_10);
  goto p_5;
  q_5 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Rpush(t_5);
  goto r_22;
  t_5 :
  OneNextSon();
  Rpush(u_5);
  goto s_22;
  u_5 :
  AllBuild();
  goto s_5;
  p_5 :
  Cpop();
  s_5 :
  Return();
  o_5 :
  Ccall(_stratego_x_9);
  MoveTop(3,1);
  goto u_17;
  u_17 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto v_17;
  v_17 :
  TestFunFC(a_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_17;
  w_17 :
  TestFunFC(b_1,&&fail,Egetd(3,5));
  Rpush(w_5);
  goto h_17;
  w_5 :
  goto v_5;
  h_17 :
  Epushd(4,8);
  Move(2,5,3,2);
  Move(2,4,3,4);
  NotNULLd(2,2);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,5),App0("TNil"))));
  _ST_mkterm();
  MoveTop(4,1);
  Cpush(y_5);
  Epushd(5,3);
  MoveTop(5,1);
  goto l_17;
  l_17 :
  TestFunFC(q_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(a_6);
  goto k_17;
  a_6 :
  goto z_5;
  k_17 :
  NotNULLd(5,2);
  Tset(App1("I",Egetd(5,2)));
  Return();
  z_5 :
  Epopd(5,3);
  goto x_5;
  y_5 :
  goto b_6;
  x_5 :
  Cpop();
  b_6 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Cpush(d_6);
  Epushd(5,3);
  MoveTop(5,1);
  goto o_17;
  o_17 :
  TestFunFC(q_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(h_6);
  goto n_17;
  h_6 :
  goto g_6;
  n_17 :
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset(App2("Cons",App2("H",Egetd(5,2),Egetd(5,3)),App0("Nil")));
  Return();
  g_6 :
  Epopd(5,3);
  goto c_6;
  d_6 :
  Tset(App0("Nil"));
  goto i_6;
  c_6 :
  Cpop();
  i_6 :
  MoveTop(4,3);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,3),App0("TNil"))));
  MoveTop(4,4);
  goto r_17;
  r_17 :
  TestFunFC(a_1,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto s_17;
  s_17 :
  TestFunFC(a_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto t_17;
  t_17 :
  TestFunFC(b_1,&&fail,Egetd(4,8));
  Rpush(k_6);
  goto q_17;
  k_6 :
  goto j_6;
  q_17 :
  Move(2,6,4,5);
  Move(2,7,4,7);
  Return();
  j_6 :
  Epopd(4,8);
  Return();
  v_5 :
  Epopd(3,5);
  Tpop();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_y_9);
  MoveTop(2,8);
  NotNULLd(2,7);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,7),App2("TCons",Egetd(2,8),App0("TNil"))));
  MoveTop(2,9);
  goto e_18;
  e_18 :
  TestFunFC(a_1,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto f_18;
  f_18 :
  TestFunFC(a_1,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto g_18;
  g_18 :
  TestFunFC(b_1,&&fail,Egetd(2,13));
  Rpush(n_6);
  goto y_17;
  n_6 :
  goto l_6;
  y_17 :
  Epushd(3,1);
  NotNULLd(2,10);
  Tset(Egetd(2,10));
  Rpush(o_6);
  t_22 :
  Cpush(q_6);
  Ccall(_stratego_k_10);
  NotNULLd(2,12);
  Tset(Egetd(2,12));
  goto p_6;
  q_6 :
  Ccontinue(r_6);
  Epushd(4,3);
  MoveTop(4,1);
  goto c_18;
  c_18 :
  TestFunFC(g_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(v_6);
  goto z_17;
  v_6 :
  goto u_6;
  z_17 :
  Tdupl();
  NotNULLd(2,12);
  Tset(Egetd(2,12));
  Rpush(w_6);
  u_22 :
  Cpush(a_7);
  Epushd(5,3);
  MoveTop(5,1);
  goto b_18;
  b_18 :
  TestFunFC(g_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(f_7);
  goto a_18;
  f_7 :
  goto b_7;
  a_18 :
  Move(4,2,5,2);
  Return();
  b_7 :
  Epopd(5,3);
  goto z_6;
  a_7 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_7);
  goto u_22;
  h_7 :
  AllBuild();
  goto g_7;
  z_6 :
  Cpop();
  g_7 :
  Return();
  w_6 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(i_7);
  goto t_22;
  i_7 :
  Return();
  u_6 :
  Epopd(4,3);
  goto p_6;
  r_6 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_7);
  goto t_22;
  k_7 :
  AllBuild();
  goto j_7;
  p_6 :
  Cpop();
  j_7 :
  Return();
  o_6 :
  MoveTop(3,1);
  NotNULLd(2,6);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,6),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  l_6 :
  Epopd(2,13);
  goto l_5;
  v_4 :
  Cpop();
  l_5 :
  Return();
  u_4 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto q_4;
  t_4 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_h_10);
  Ccall(_stratego_d_10);
  goto l_7;
  q_4 :
  Cpop();
  l_7 :
  Tset(App2("TCons",App2("F",App2("G",App0("A"),App1("I",App0("A"))),App1("I",App0("B"))),App2("TCons",App2("Cons",App2("H",App0("A"),App0("B")),App2("Cons",App2("H",App0("B"),App0("C")),App0("Nil"))),App0("TNil"))));
  Tdupl();
  Tset(App2("TCons",App2("F",App2("G",App0("A"),App1("I",App0("A"))),App1("I",App0("B"))),App2("TCons",App2("Cons",App2("H",App0("A"),App0("B")),App2("Cons",App2("H",App0("B"),App0("C")),App0("Nil"))),App0("TNil"))));
  MoveTop(0,2);
  Tpop();
  Cpush(n_7);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto m_7;
  n_7 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_d_10);
  goto o_7;
  m_7 :
  Cpop();
  o_7 :
  Tpop();
  Ccall(_stratego_g_10);
  goto o_4;
  p_4 :
  Ccall(_stratego_e_10);
  goto p_7;
  o_4 :
  Cpop();
  p_7 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_c_10)
  Epushd(0,5);
  Tset(App2("TCons",App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App0("Nil"))),App2("TCons",App2("Cons",ATmakeString("b"),App2("Cons",ATmakeString("d"),App0("Nil"))),App0("TNil"))));
  MoveTop(0,1);
  goto e_23;
  e_23 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_23;
  f_23 :
  TestFunFC(a_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_23;
  g_23 :
  TestFunFC(b_1,&&fail,Egetd(0,5));
  Rpush(r_7);
  goto v_22;
  r_7 :
  goto q_7;
  v_22 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(t_7);
  z_23 :
  Cpush(v_7);
  Ccall(_stratego_k_10);
  goto u_7;
  v_7 :
  Ccontinue(w_7);
  Epushd(2,3);
  MoveTop(2,1);
  goto z_22;
  z_22 :
  TestFunFC(g_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(y_7);
  goto w_22;
  y_7 :
  goto x_7;
  w_22 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(z_7);
  a_24 :
  Cpush(b_8);
  Epushd(3,3);
  MoveTop(3,1);
  goto y_22;
  y_22 :
  TestFunFC(g_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(d_8);
  goto x_22;
  d_8 :
  goto c_8;
  x_22 :
  Move(2,2,3,2);
  Return();
  c_8 :
  Epopd(3,3);
  goto a_8;
  b_8 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_8);
  goto a_24;
  f_8 :
  AllBuild();
  goto e_8;
  a_8 :
  Cpop();
  e_8 :
  Return();
  z_7 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(g_8);
  goto z_23;
  g_8 :
  Return();
  x_7 :
  Epopd(2,3);
  goto u_7;
  w_7 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_8);
  goto z_23;
  j_8 :
  AllBuild();
  goto i_8;
  u_7 :
  Cpop();
  i_8 :
  Return();
  t_7 :
  MoveTop(1,1);
  goto b_23;
  b_23 :
  TestFunFC(g_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_23;
  c_23 :
  TestStr(1,2,"a",&&fail);
  goto d_23;
  d_23 :
  TestFunFC(g_3,&&fail,Egetd(1,3));
  Rpush(k_8);
  goto a_23;
  k_8 :
  goto s_7;
  a_23 :
  Return();
  s_7 :
  Epopd(1,3);
  Return();
  q_7 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_10)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto d_24;
  d_24 :
  TestFunFC(a_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto e_24;
  e_24 :
  TestFunFC(a_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto f_24;
  f_24 :
  TestFunFC(b_1,&&fail,Egetd(0,6));
  Rpush(m_8);
  goto c_24;
  m_8 :
  goto l_8;
  c_24 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  l_8 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_e_10)
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_f_10);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_a_11);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_f_10)
  _ST_add();
ENDPROC

PROC(_stratego_g_10)
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_f_10);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_11);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_h_10)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_i_10)
  Epushd(0,5);
  Tset(App2("TCons",App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App0("Nil"))),App2("TCons",App2("Cons",ATmakeString("c"),App2("Cons",ATmakeString("d"),App0("Nil"))),App0("TNil"))));
  MoveTop(0,1);
  goto q_25;
  q_25 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_25;
  r_25 :
  TestFunFC(a_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto s_25;
  s_25 :
  TestFunFC(b_1,&&fail,Egetd(0,5));
  Rpush(q_8);
  goto f_25;
  q_8 :
  goto p_8;
  f_25 :
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(s_8);
  n_26 :
  Cpush(u_8);
  Ccall(_stratego_k_10);
  goto t_8;
  u_8 :
  Ccontinue(w_8);
  Epushd(2,3);
  MoveTop(2,1);
  goto j_25;
  j_25 :
  TestFunFC(g_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(y_8);
  goto g_25;
  y_8 :
  goto x_8;
  g_25 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(z_8);
  o_26 :
  Cpush(d_9);
  Epushd(3,3);
  MoveTop(3,1);
  goto i_25;
  i_25 :
  TestFunFC(g_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(f_9);
  goto h_25;
  f_9 :
  goto e_9;
  h_25 :
  Move(2,2,3,2);
  Return();
  e_9 :
  Epopd(3,3);
  goto a_9;
  d_9 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_9);
  goto o_26;
  h_9 :
  AllBuild();
  goto g_9;
  a_9 :
  Cpop();
  g_9 :
  Return();
  z_8 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(i_9);
  goto n_26;
  i_9 :
  Return();
  x_8 :
  Epopd(2,3);
  goto t_8;
  w_8 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_9);
  goto n_26;
  k_9 :
  AllBuild();
  goto j_9;
  t_8 :
  Cpop();
  j_9 :
  Return();
  s_8 :
  MoveTop(1,1);
  goto l_25;
  l_25 :
  TestFunFC(g_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_25;
  m_25 :
  TestStr(1,2,"a",&&fail);
  goto n_25;
  n_25 :
  TestFunFC(g_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto o_25;
  o_25 :
  TestStr(1,4,"b",&&fail);
  goto p_25;
  p_25 :
  TestFunFC(g_3,&&fail,Egetd(1,5));
  Rpush(m_9);
  goto k_25;
  m_9 :
  goto r_8;
  k_25 :
  Return();
  r_8 :
  Epopd(1,5);
  Return();
  p_8 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_10)
  Epushd(0,5);
  Tset(App2("TCons",App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App0("Nil"))),App2("TCons",App2("Cons",ATmakeString("b"),App2("Cons",ATmakeString("d"),App0("Nil"))),App0("TNil"))));
  MoveTop(0,1);
  goto c_27;
  c_27 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto d_27;
  d_27 :
  TestFunFC(a_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto e_27;
  e_27 :
  TestFunFC(b_1,&&fail,Egetd(0,5));
  Rpush(o_9);
  goto p_26;
  o_9 :
  goto n_9;
  p_26 :
  Epushd(1,7);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(t_9);
  b_28 :
  Cpush(v_9);
  Ccall(_stratego_k_10);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto u_9;
  v_9 :
  Ccontinue(l_10);
  Epushd(2,3);
  MoveTop(2,1);
  goto t_26;
  t_26 :
  TestFunFC(g_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(r_10);
  goto q_26;
  r_10 :
  goto n_10;
  q_26 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(o_11);
  c_28 :
  Cpush(q_11);
  Epushd(3,3);
  MoveTop(3,1);
  goto s_26;
  s_26 :
  TestFunFC(g_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(v_11);
  goto r_26;
  v_11 :
  goto u_11;
  r_26 :
  Move(2,2,3,2);
  Return();
  u_11 :
  Epopd(3,3);
  goto p_11;
  q_11 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_12);
  goto c_28;
  b_12 :
  AllBuild();
  goto x_11;
  p_11 :
  Cpop();
  x_11 :
  Return();
  o_11 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(c_12);
  goto b_28;
  c_12 :
  Return();
  n_10 :
  Epopd(2,3);
  goto u_9;
  l_10 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_12);
  goto b_28;
  l_12 :
  AllBuild();
  goto e_12;
  u_9 :
  Cpop();
  e_12 :
  Return();
  t_9 :
  MoveTop(1,1);
  goto v_26;
  v_26 :
  TestFunFC(g_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_26;
  w_26 :
  TestStr(1,2,"a",&&fail);
  goto x_26;
  x_26 :
  TestFunFC(g_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto y_26;
  y_26 :
  TestStr(1,4,"b",&&fail);
  goto z_26;
  z_26 :
  TestFunFC(g_1,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto a_27;
  a_27 :
  TestStr(1,6,"d",&&fail);
  goto b_27;
  b_27 :
  TestFunFC(g_3,&&fail,Egetd(1,7));
  Rpush(r_12);
  goto u_26;
  r_12 :
  goto p_9;
  u_26 :
  Return();
  p_9 :
  Epopd(1,7);
  Return();
  n_9 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_k_10)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_28;
  e_28 :
  TestFunFC(g_3,&&fail,Egetd(0,1));
  Rpush(w_12);
  goto d_28;
  w_12 :
  goto s_12;
  d_28 :
  Return();
  s_12 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_10)
  Epushd(0,5);
  Tset(App2("TCons",App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App0("Nil"))),App2("TCons",App2("Cons",ATmakeString("c"),App2("Cons",ATmakeString("d"),App0("Nil"))),App0("TNil"))));
  MoveTop(0,1);
  goto v_28;
  v_28 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_28;
  w_28 :
  TestFunFC(a_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_28;
  x_28 :
  TestFunFC(b_1,&&fail,Egetd(0,5));
  Rpush(c_13);
  goto g_28;
  c_13 :
  goto x_12;
  g_28 :
  Epushd(1,9);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(f_13);
  w_29 :
  Cpush(i_13);
  Ccall(_stratego_k_10);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto h_13;
  i_13 :
  Ccontinue(j_13);
  Epushd(2,3);
  MoveTop(2,1);
  goto k_28;
  k_28 :
  TestFunFC(g_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(l_13);
  goto h_28;
  l_13 :
  goto k_13;
  h_28 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(m_13);
  x_29 :
  Cpush(o_13);
  Epushd(3,3);
  MoveTop(3,1);
  goto j_28;
  j_28 :
  TestFunFC(g_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_13);
  goto i_28;
  r_13 :
  goto p_13;
  i_28 :
  Move(2,2,3,2);
  Return();
  p_13 :
  Epopd(3,3);
  goto n_13;
  o_13 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_13);
  goto x_29;
  t_13 :
  AllBuild();
  goto s_13;
  n_13 :
  Cpop();
  s_13 :
  Return();
  m_13 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(u_13);
  goto w_29;
  u_13 :
  Return();
  k_13 :
  Epopd(2,3);
  goto h_13;
  j_13 :
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_13);
  goto w_29;
  w_13 :
  AllBuild();
  goto v_13;
  h_13 :
  Cpop();
  v_13 :
  Return();
  f_13 :
  MoveTop(1,1);
  goto m_28;
  m_28 :
  TestFunFC(g_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto n_28;
  n_28 :
  TestStr(1,2,"a",&&fail);
  goto o_28;
  o_28 :
  TestFunFC(g_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_28;
  p_28 :
  TestStr(1,4,"b",&&fail);
  goto q_28;
  q_28 :
  TestFunFC(g_1,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto r_28;
  r_28 :
  TestStr(1,6,"c",&&fail);
  goto s_28;
  s_28 :
  TestFunFC(g_1,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto t_28;
  t_28 :
  TestStr(1,8,"d",&&fail);
  goto u_28;
  u_28 :
  TestFunFC(g_3,&&fail,Egetd(1,9));
  Rpush(x_13);
  goto l_28;
  x_13 :
  goto e_13;
  l_28 :
  Return();
  e_13 :
  Epopd(1,9);
  Return();
  x_12 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_w_10)
  _ST_exit();
ENDPROC

PROC(_stratego_z_10)
  Cpush(z_13);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto z_29;
  z_29 :
  TestInt(0,1,0,&&fail);
  Rpush(v_14);
  goto y_29;
  v_14 :
  goto u_14;
  y_29 :
  Return();
  u_14 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_a_11);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_w_10);
  goto y_13;
  z_13 :
  Tset(MakeInt(1));
  Ccall(_stratego_w_10);
  goto j_15;
  y_13 :
  Cpop();
  j_15 :
ENDPROC

PROC(_stratego_a_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_30;
  c_30 :
  TestFunFC(b_1,&&fail,Egetd(0,1));
  Rpush(l_15);
  goto b_30;
  l_15 :
  goto k_15;
  b_30 :
  Return();
  k_15 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_11)
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_a_11);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_c_11)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_d_11)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("list-set-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_c_11);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_h_10);
  Tpop();
  Cpush(b_16);
  Tdupl();
  Cpush(i_16);
  Ccall(_stratego_v_10);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  succeeded: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(0,1);
  Tpop();
  goto c_16;
  i_16 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  failed: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_d_10);
  goto j_16;
  c_16 :
  Cpop();
  j_16 :
  Tpop();
  Ccall(_stratego_g_10);
  goto m_15;
  b_16 :
  Ccall(_stratego_e_10);
  goto n_16;
  m_15 :
  Cpop();
  n_16 :
  Tdupl();
  Tset(ATmakeString("test2"));
  Ccall(_stratego_h_10);
  Tpop();
  Cpush(v_16);
  Tdupl();
  Cpush(b_17);
  Ccall(_stratego_j_10);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  succeeded: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(0,1);
  Tpop();
  goto y_16;
  b_17 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  failed: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_d_10);
  goto c_17;
  y_16 :
  Cpop();
  c_17 :
  Tpop();
  Ccall(_stratego_g_10);
  goto o_16;
  v_16 :
  Ccall(_stratego_e_10);
  goto i_17;
  o_16 :
  Cpop();
  i_17 :
  Tdupl();
  Tset(ATmakeString("test3"));
  Ccall(_stratego_h_10);
  Tpop();
  Cpush(m_17);
  Tdupl();
  Cpush(x_17);
  Ccall(_stratego_i_10);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  succeeded: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(0,1);
  Tpop();
  goto p_17;
  x_17 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  failed: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_d_10);
  goto d_18;
  p_17 :
  Cpop();
  d_18 :
  Tpop();
  Ccall(_stratego_g_10);
  goto j_17;
  m_17 :
  Ccall(_stratego_e_10);
  goto h_18;
  j_17 :
  Cpop();
  h_18 :
  Tdupl();
  Tset(ATmakeString("test4"));
  Ccall(_stratego_h_10);
  Tpop();
  Cpush(j_18);
  Tdupl();
  Cpush(l_18);
  Ccall(_stratego_c_10);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  succeeded: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(0,1);
  Tpop();
  goto k_18;
  l_18 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  failed: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_11);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_d_10);
  goto m_18;
  k_18 :
  Cpop();
  m_18 :
  Tpop();
  Ccall(_stratego_g_10);
  goto i_18;
  j_18 :
  Ccall(_stratego_e_10);
  goto n_18;
  i_18 :
  Cpop();
  n_18 :
  Ccall(_stratego_b_10);
  Ccall(_stratego_w_9);
  Ccall(_stratego_b_11);
  Ccall(_stratego_z_10);
ENDPROC

DOIT

