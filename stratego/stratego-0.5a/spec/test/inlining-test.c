#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,q_7);
VARDECL(AFun,p_6);
VARDECL(AFun,j_2);
VARDECL(AFun,f_2);
VARDECL(AFun,e_2);
VARDECL(AFun,c_2);
VARDECL(AFun,m_1);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(q_7,ATmakeAFun("Eq",2,0));
  MOVE(p_6,ATmakeAFun("Impl",2,0));
  MOVE(j_2,ATmakeAFun("Or",2,0));
  MOVE(f_2,ATmakeAFun("False",0,0));
  MOVE(e_2,ATmakeAFun("True",0,0));
  MOVE(c_2,ATmakeAFun("And",2,0));
  MOVE(m_1,ATmakeAFun("Not",1,0));
ENDPROC

PROC(_stratego_main)
  Epushd(0,7);
  MoveTop(0,5);
  goto x_0;
  x_0 :
  TestFunFC(m_1,&&l_1,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto y_0;
  y_0 :
  TestFunFC(m_1,&&a_2,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  Rpush(k_1);
  goto a_3;
  a_2 :
  TestFunFC(c_2,&&b_2,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  MoveArg(0,4,0,6,1);
  Rpush(k_1);
  goto b_3;
  b_2 :
  TestFunFC(e_2,&&d_2,Egetd(0,6));
  Rpush(k_1);
  goto c_3;
  d_2 :
  TestFunFC(f_2,&&fail,Egetd(0,6));
  Rpush(k_1);
  goto y_3;
  l_1 :
  TestFunFC(c_2,&&g_2,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto z_0;
  z_0 :
  TestFunFC(j_2,&&i_2,Egetd(0,7));
  MoveArg(0,1,0,7,0);
  MoveArg(0,2,0,7,1);
  goto a_1;
  a_1 :
  TestFunFC(j_2,&&l_2,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  MoveArg(0,4,0,6,1);
  Cpush(n_2);
  Rpush(o_2);
  goto y_2;
  o_2 :
  goto m_2;
  n_2 :
  Rpush(q_2);
  goto z_2;
  q_2 :
  goto p_2;
  m_2 :
  Cpop();
  p_2 :
  goto k_1;
  l_2 :
  TestFunFC(e_2,&&r_2,Egetd(0,6));
  Cpush(t_2);
  Rpush(u_2);
  goto z_2;
  u_2 :
  goto s_2;
  t_2 :
  Rpush(w_2);
  goto z_3;
  w_2 :
  goto v_2;
  s_2 :
  Cpop();
  v_2 :
  goto k_1;
  r_2 :
  TestFunFC(f_2,&&k_2,Egetd(0,6));
  Cpush(d_3);
  Rpush(e_3);
  goto z_2;
  e_3 :
  goto x_2;
  d_3 :
  Rpush(g_3);
  goto b_4;
  g_3 :
  goto f_3;
  x_2 :
  Cpop();
  f_3 :
  goto k_1;
  k_2 :
  Rpush(k_1);
  goto z_2;
  i_2 :
  TestFunFC(e_2,&&h_3,Egetd(0,7));
  goto b_1;
  b_1 :
  TestFunFC(j_2,&&j_3,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  MoveArg(0,4,0,6,1);
  Cpush(l_3);
  Rpush(m_3);
  goto y_2;
  m_3 :
  goto k_3;
  l_3 :
  Rpush(o_3);
  goto a_4;
  o_3 :
  goto n_3;
  k_3 :
  Cpop();
  n_3 :
  goto k_1;
  j_3 :
  TestFunFC(e_2,&&p_3,Egetd(0,6));
  Cpush(r_3);
  Rpush(s_3);
  goto z_3;
  s_3 :
  goto q_3;
  r_3 :
  Rpush(u_3);
  goto a_4;
  u_3 :
  goto t_3;
  q_3 :
  Cpop();
  t_3 :
  goto k_1;
  p_3 :
  TestFunFC(f_2,&&i_3,Egetd(0,6));
  Cpush(w_3);
  Rpush(x_3);
  goto a_4;
  x_3 :
  goto v_3;
  w_3 :
  Rpush(r_4);
  goto b_4;
  r_4 :
  goto q_4;
  v_3 :
  Cpop();
  q_4 :
  goto k_1;
  i_3 :
  Rpush(k_1);
  goto a_4;
  h_3 :
  TestFunFC(f_2,&&h_2,Egetd(0,7));
  goto c_1;
  c_1 :
  TestFunFC(j_2,&&t_4,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  MoveArg(0,4,0,6,1);
  Cpush(v_4);
  Rpush(w_4);
  goto y_2;
  w_4 :
  goto u_4;
  v_4 :
  Rpush(y_4);
  goto c_4;
  y_4 :
  goto x_4;
  u_4 :
  Cpop();
  x_4 :
  goto k_1;
  t_4 :
  TestFunFC(e_2,&&z_4,Egetd(0,6));
  Cpush(b_5);
  Rpush(c_5);
  goto z_3;
  c_5 :
  goto a_5;
  b_5 :
  Rpush(e_5);
  goto c_4;
  e_5 :
  goto d_5;
  a_5 :
  Cpop();
  d_5 :
  goto k_1;
  z_4 :
  TestFunFC(f_2,&&s_4,Egetd(0,6));
  Cpush(g_5);
  Rpush(h_5);
  goto b_4;
  h_5 :
  goto f_5;
  g_5 :
  Rpush(j_5);
  goto c_4;
  j_5 :
  goto i_5;
  f_5 :
  Cpop();
  i_5 :
  goto k_1;
  s_4 :
  Rpush(k_1);
  goto c_4;
  h_2 :
  goto d_1;
  d_1 :
  TestFunFC(j_2,&&k_5,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  MoveArg(0,4,0,6,1);
  Rpush(k_1);
  goto y_2;
  k_5 :
  TestFunFC(e_2,&&l_5,Egetd(0,6));
  Rpush(k_1);
  goto z_3;
  l_5 :
  TestFunFC(f_2,&&fail,Egetd(0,6));
  Rpush(k_1);
  goto b_4;
  g_2 :
  TestFunFC(j_2,&&m_5,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto e_1;
  e_1 :
  TestFunFC(e_2,&&o_5,Egetd(0,7));
  goto f_1;
  f_1 :
  TestFunFC(e_2,&&q_5,Egetd(0,6));
  Cpush(s_5);
  Rpush(t_5);
  goto d_4;
  t_5 :
  goto r_5;
  s_5 :
  Rpush(v_5);
  goto e_4;
  v_5 :
  goto u_5;
  r_5 :
  Cpop();
  u_5 :
  goto k_1;
  q_5 :
  TestFunFC(f_2,&&p_5,Egetd(0,6));
  Cpush(x_5);
  Rpush(y_5);
  goto e_4;
  y_5 :
  goto w_5;
  x_5 :
  Rpush(a_6);
  goto f_4;
  a_6 :
  goto z_5;
  w_5 :
  Cpop();
  z_5 :
  goto k_1;
  p_5 :
  Rpush(k_1);
  goto e_4;
  o_5 :
  TestFunFC(f_2,&&n_5,Egetd(0,7));
  goto g_1;
  g_1 :
  TestFunFC(e_2,&&c_6,Egetd(0,6));
  Cpush(e_6);
  Rpush(f_6);
  goto d_4;
  f_6 :
  goto d_6;
  e_6 :
  Rpush(h_6);
  goto g_4;
  h_6 :
  goto g_6;
  d_6 :
  Cpop();
  g_6 :
  goto k_1;
  c_6 :
  TestFunFC(f_2,&&b_6,Egetd(0,6));
  Cpush(j_6);
  Rpush(k_6);
  goto f_4;
  k_6 :
  goto i_6;
  j_6 :
  Rpush(m_6);
  goto g_4;
  m_6 :
  goto l_6;
  i_6 :
  Cpop();
  l_6 :
  goto k_1;
  b_6 :
  Rpush(k_1);
  goto g_4;
  n_5 :
  goto h_1;
  h_1 :
  TestFunFC(e_2,&&n_6,Egetd(0,6));
  Rpush(k_1);
  goto d_4;
  n_6 :
  TestFunFC(f_2,&&fail,Egetd(0,6));
  Rpush(k_1);
  goto f_4;
  m_5 :
  TestFunFC(p_6,&&o_6,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto i_1;
  i_1 :
  TestFunFC(e_2,&&r_6,Egetd(0,7));
  goto j_1;
  j_1 :
  TestFunFC(e_2,&&t_6,Egetd(0,6));
  Cpush(v_6);
  Rpush(w_6);
  goto h_4;
  w_6 :
  goto u_6;
  v_6 :
  Rpush(y_6);
  goto i_4;
  y_6 :
  goto x_6;
  u_6 :
  Cpop();
  x_6 :
  goto k_1;
  t_6 :
  TestFunFC(f_2,&&s_6,Egetd(0,6));
  Cpush(a_7);
  Rpush(b_7);
  goto i_4;
  b_7 :
  goto z_6;
  a_7 :
  Rpush(d_7);
  goto j_4;
  d_7 :
  goto c_7;
  z_6 :
  Cpop();
  c_7 :
  goto k_1;
  s_6 :
  Rpush(k_1);
  goto i_4;
  r_6 :
  TestFunFC(f_2,&&q_6,Egetd(0,7));
  goto n_1;
  n_1 :
  TestFunFC(f_2,&&e_7,Egetd(0,6));
  Cpush(g_7);
  Rpush(h_7);
  goto j_4;
  h_7 :
  goto f_7;
  g_7 :
  Rpush(j_7);
  goto k_4;
  j_7 :
  goto i_7;
  f_7 :
  Cpop();
  i_7 :
  goto k_1;
  e_7 :
  TestFunFC(e_2,&&fail,Egetd(0,6));
  Cpush(l_7);
  Rpush(m_7);
  goto h_4;
  m_7 :
  goto k_7;
  l_7 :
  Rpush(o_7);
  goto l_4;
  o_7 :
  goto n_7;
  k_7 :
  Cpop();
  n_7 :
  goto k_1;
  q_6 :
  goto o_1;
  o_1 :
  TestFunFC(e_2,&&p_7,Egetd(0,6));
  Rpush(k_1);
  goto h_4;
  p_7 :
  TestFunFC(f_2,&&fail,Egetd(0,6));
  Rpush(k_1);
  goto j_4;
  o_6 :
  TestFunFC(q_7,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto p_1;
  p_1 :
  TestFunFC(f_2,&&s_7,Egetd(0,7));
  goto q_1;
  q_1 :
  TestFunFC(f_2,&&u_7,Egetd(0,6));
  Cpush(w_7);
  Rpush(x_7);
  goto m_4;
  x_7 :
  goto v_7;
  w_7 :
  Rpush(z_7);
  goto n_4;
  z_7 :
  goto y_7;
  v_7 :
  Cpop();
  y_7 :
  goto k_1;
  u_7 :
  TestFunFC(e_2,&&t_7,Egetd(0,6));
  Cpush(b_8);
  Rpush(c_8);
  goto n_4;
  c_8 :
  goto a_8;
  b_8 :
  Rpush(e_8);
  goto o_4;
  e_8 :
  goto d_8;
  a_8 :
  Cpop();
  d_8 :
  goto k_1;
  t_7 :
  Rpush(k_1);
  goto n_4;
  s_7 :
  TestFunFC(e_2,&&r_7,Egetd(0,7));
  goto r_1;
  r_1 :
  TestFunFC(f_2,&&g_8,Egetd(0,6));
  Cpush(i_8);
  Rpush(j_8);
  goto m_4;
  j_8 :
  goto h_8;
  i_8 :
  Rpush(l_8);
  goto p_4;
  l_8 :
  goto k_8;
  h_8 :
  Cpop();
  k_8 :
  goto k_1;
  g_8 :
  TestFunFC(e_2,&&f_8,Egetd(0,6));
  Cpush(n_8);
  Rpush(o_8);
  goto o_4;
  o_8 :
  goto m_8;
  n_8 :
  Rpush(q_8);
  goto p_4;
  q_8 :
  goto p_8;
  m_8 :
  Cpop();
  p_8 :
  goto k_1;
  f_8 :
  Rpush(k_1);
  goto p_4;
  r_7 :
  goto s_1;
  s_1 :
  TestFunFC(f_2,&&r_8,Egetd(0,6));
  Rpush(k_1);
  goto m_4;
  r_8 :
  TestFunFC(e_2,&&fail,Egetd(0,6));
  Rpush(k_1);
  goto o_4;
  k_1 :
  goto w_0;
  p_4 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  w_0 :
  goto v_0;
  o_4 :
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Return();
  v_0 :
  goto u_0;
  n_4 :
  NotNULLd(0,6);
  Tset(App1("Not",Egetd(0,6)));
  Return();
  u_0 :
  goto t_0;
  m_4 :
  NotNULLd(0,7);
  Tset(App1("Not",Egetd(0,7)));
  Return();
  t_0 :
  goto s_0;
  l_4 :
  Tset(App0("False"));
  Return();
  s_0 :
  goto r_0;
  k_4 :
  Tset(App0("True"));
  Return();
  r_0 :
  goto q_0;
  j_4 :
  Tset(App0("True"));
  Return();
  q_0 :
  goto p_0;
  i_4 :
  Tset(App0("True"));
  Return();
  p_0 :
  goto o_0;
  h_4 :
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Return();
  o_0 :
  goto n_0;
  g_4 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  n_0 :
  goto m_0;
  f_4 :
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Return();
  m_0 :
  goto l_0;
  e_4 :
  Tset(App0("True"));
  Return();
  l_0 :
  goto k_0;
  d_4 :
  Tset(App0("True"));
  Return();
  k_0 :
  goto j_0;
  c_4 :
  Tset(App0("False"));
  Return();
  j_0 :
  goto i_0;
  b_4 :
  Tset(App0("False"));
  Return();
  i_0 :
  goto h_0;
  a_4 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  h_0 :
  goto g_0;
  z_3 :
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Return();
  g_0 :
  goto f_0;
  y_3 :
  Tset(App0("True"));
  Return();
  f_0 :
  goto e_0;
  c_3 :
  Tset(App0("False"));
  Return();
  e_0 :
  goto d_0;
  b_3 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("Or",App1("Not",Egetd(0,3)),App1("Not",Egetd(0,4))));
  Return();
  d_0 :
  goto c_0;
  a_3 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  c_0 :
  goto b_0;
  z_2 :
  NotNULLd(0,1);
  NotNULLd(0,6);
  NotNULLd(0,2);
  Tset(App2("Or",App2("And",Egetd(0,6),Egetd(0,1)),App2("And",Egetd(0,6),Egetd(0,2))));
  Return();
  b_0 :
  goto a_0;
  y_2 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,7);
  Tset(App2("Or",App2("And",Egetd(0,3),Egetd(0,7)),App2("And",Egetd(0,4),Egetd(0,7))));
  Return();
  a_0 :
  Epopd(0,7);
ENDPROC

DOIT

