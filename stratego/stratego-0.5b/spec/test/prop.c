#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,t_8);
VARDECL(AFun,s_7);
VARDECL(AFun,p_1);
VARDECL(AFun,o_1);
VARDECL(AFun,m_1);
VARDECL(AFun,k_1);
VARDECL(AFun,h_1);
PROCDECL(_stratego_s_2);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(t_8,ATmakeAFun("Eq",2,0));
  MOVE(s_7,ATmakeAFun("Impl",2,0));
  MOVE(p_1,ATmakeAFun("False",0,0));
  MOVE(o_1,ATmakeAFun("True",0,0));
  MOVE(m_1,ATmakeAFun("Or",2,0));
  MOVE(k_1,ATmakeAFun("And",2,0));
  MOVE(h_1,ATmakeAFun("Not",1,0));
ENDPROC

PROC(_stratego_s_2)
  Rpush(a_0);
  h_5 :
  AllInit();
  b_0 :
  AllNextSon(&&c_0);
  Rpush(d_0);
  goto h_5;
  d_0 :
  goto b_0;
  c_0 :
  AllBuild();
  Rpush(e_0);
  i_5 :
  Cpush(g_0);
  Epushd(0,7);
  MoveTop(0,5);
  goto j_2;
  j_2 :
  TestFunFC(h_1,&&g_1,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto k_2;
  k_2 :
  TestFunFC(h_1,&&i_1,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  Rpush(f_1);
  goto p_5;
  i_1 :
  TestFunFC(k_1,&&j_1,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  MoveArg(0,4,0,6,1);
  Rpush(f_1);
  goto q_5;
  j_1 :
  TestFunFC(m_1,&&l_1,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  MoveArg(0,4,0,6,1);
  Rpush(f_1);
  goto t_5;
  l_1 :
  TestFunFC(o_1,&&n_1,Egetd(0,6));
  Rpush(f_1);
  goto w_5;
  n_1 :
  TestFunFC(p_1,&&fail,Egetd(0,6));
  Rpush(f_1);
  goto x_5;
  g_1 :
  TestFunFC(k_1,&&q_1,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto l_2;
  l_2 :
  TestFunFC(m_1,&&s_1,Egetd(0,7));
  MoveArg(0,1,0,7,0);
  MoveArg(0,2,0,7,1);
  goto u_2;
  u_2 :
  TestFunFC(m_1,&&u_1,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  MoveArg(0,4,0,6,1);
  Cpush(w_1);
  Rpush(x_1);
  goto j_5;
  x_1 :
  goto v_1;
  w_1 :
  Rpush(z_1);
  goto m_5;
  z_1 :
  goto y_1;
  v_1 :
  Cpop();
  y_1 :
  goto f_1;
  u_1 :
  TestFunFC(o_1,&&a_2,Egetd(0,6));
  Cpush(c_2);
  Rpush(d_2);
  goto m_5;
  d_2 :
  goto b_2;
  c_2 :
  Rpush(f_2);
  goto y_5;
  f_2 :
  goto e_2;
  b_2 :
  Cpop();
  e_2 :
  goto f_1;
  a_2 :
  TestFunFC(p_1,&&t_1,Egetd(0,6));
  Cpush(h_2);
  Rpush(i_2);
  goto m_5;
  i_2 :
  goto g_2;
  h_2 :
  Rpush(n_2);
  goto a_6;
  n_2 :
  goto m_2;
  g_2 :
  Cpop();
  m_2 :
  goto f_1;
  t_1 :
  Rpush(f_1);
  goto m_5;
  s_1 :
  TestFunFC(o_1,&&o_2,Egetd(0,7));
  goto v_2;
  v_2 :
  TestFunFC(m_1,&&q_2,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  MoveArg(0,4,0,6,1);
  Cpush(t_2);
  Rpush(r_3);
  goto j_5;
  r_3 :
  goto r_2;
  t_2 :
  Rpush(t_3);
  goto z_5;
  t_3 :
  goto s_3;
  r_2 :
  Cpop();
  s_3 :
  goto f_1;
  q_2 :
  TestFunFC(o_1,&&y_3,Egetd(0,6));
  Cpush(a_4);
  Rpush(f_4);
  goto y_5;
  f_4 :
  goto z_3;
  a_4 :
  Rpush(h_4);
  goto z_5;
  h_4 :
  goto g_4;
  z_3 :
  Cpop();
  g_4 :
  goto f_1;
  y_3 :
  TestFunFC(p_1,&&p_2,Egetd(0,6));
  Cpush(n_4);
  Rpush(s_4);
  goto z_5;
  s_4 :
  goto m_4;
  n_4 :
  Rpush(u_4);
  goto a_6;
  u_4 :
  goto t_4;
  m_4 :
  Cpop();
  t_4 :
  goto f_1;
  p_2 :
  Rpush(f_1);
  goto z_5;
  o_2 :
  TestFunFC(p_1,&&r_1,Egetd(0,7));
  goto w_2;
  w_2 :
  TestFunFC(m_1,&&w_4,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  MoveArg(0,4,0,6,1);
  Cpush(y_4);
  Rpush(z_4);
  goto j_5;
  z_4 :
  goto x_4;
  y_4 :
  Rpush(b_5);
  goto b_6;
  b_5 :
  goto a_5;
  x_4 :
  Cpop();
  a_5 :
  goto f_1;
  w_4 :
  TestFunFC(o_1,&&c_5,Egetd(0,6));
  Cpush(e_5);
  Rpush(f_5);
  goto y_5;
  f_5 :
  goto d_5;
  e_5 :
  Rpush(k_5);
  goto b_6;
  k_5 :
  goto g_5;
  d_5 :
  Cpop();
  g_5 :
  goto f_1;
  c_5 :
  TestFunFC(p_1,&&v_4,Egetd(0,6));
  Cpush(n_5);
  Rpush(o_5);
  goto a_6;
  o_5 :
  goto l_5;
  n_5 :
  Rpush(s_5);
  goto b_6;
  s_5 :
  goto r_5;
  l_5 :
  Cpop();
  r_5 :
  goto f_1;
  v_4 :
  Rpush(f_1);
  goto b_6;
  r_1 :
  goto x_2;
  x_2 :
  TestFunFC(m_1,&&u_5,Egetd(0,6));
  MoveArg(0,3,0,6,0);
  MoveArg(0,4,0,6,1);
  Rpush(f_1);
  goto j_5;
  u_5 :
  TestFunFC(o_1,&&v_5,Egetd(0,6));
  Rpush(f_1);
  goto y_5;
  v_5 :
  TestFunFC(p_1,&&fail,Egetd(0,6));
  Rpush(f_1);
  goto a_6;
  q_1 :
  TestFunFC(m_1,&&p_6,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto y_2;
  y_2 :
  TestFunFC(o_1,&&r_6,Egetd(0,7));
  goto z_2;
  z_2 :
  TestFunFC(o_1,&&t_6,Egetd(0,6));
  Cpush(v_6);
  Rpush(w_6);
  goto c_6;
  w_6 :
  goto u_6;
  v_6 :
  Rpush(y_6);
  goto d_6;
  y_6 :
  goto x_6;
  u_6 :
  Cpop();
  x_6 :
  goto f_1;
  t_6 :
  TestFunFC(p_1,&&s_6,Egetd(0,6));
  Cpush(a_7);
  Rpush(b_7);
  goto d_6;
  b_7 :
  goto z_6;
  a_7 :
  Rpush(d_7);
  goto e_6;
  d_7 :
  goto c_7;
  z_6 :
  Cpop();
  c_7 :
  goto f_1;
  s_6 :
  Rpush(f_1);
  goto d_6;
  r_6 :
  TestFunFC(p_1,&&q_6,Egetd(0,7));
  goto a_3;
  a_3 :
  TestFunFC(o_1,&&f_7,Egetd(0,6));
  Cpush(h_7);
  Rpush(i_7);
  goto c_6;
  i_7 :
  goto g_7;
  h_7 :
  Rpush(k_7);
  goto f_6;
  k_7 :
  goto j_7;
  g_7 :
  Cpop();
  j_7 :
  goto f_1;
  f_7 :
  TestFunFC(p_1,&&e_7,Egetd(0,6));
  Cpush(m_7);
  Rpush(n_7);
  goto e_6;
  n_7 :
  goto l_7;
  m_7 :
  Rpush(p_7);
  goto f_6;
  p_7 :
  goto o_7;
  l_7 :
  Cpop();
  o_7 :
  goto f_1;
  e_7 :
  Rpush(f_1);
  goto f_6;
  q_6 :
  goto b_3;
  b_3 :
  TestFunFC(o_1,&&q_7,Egetd(0,6));
  Rpush(f_1);
  goto c_6;
  q_7 :
  TestFunFC(p_1,&&fail,Egetd(0,6));
  Rpush(f_1);
  goto e_6;
  p_6 :
  TestFunFC(s_7,&&r_7,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto c_3;
  c_3 :
  TestFunFC(o_1,&&u_7,Egetd(0,7));
  goto d_3;
  d_3 :
  TestFunFC(o_1,&&w_7,Egetd(0,6));
  Cpush(y_7);
  Rpush(z_7);
  goto g_6;
  z_7 :
  goto x_7;
  y_7 :
  Rpush(b_8);
  goto h_6;
  b_8 :
  goto a_8;
  x_7 :
  Cpop();
  a_8 :
  goto f_1;
  w_7 :
  TestFunFC(p_1,&&v_7,Egetd(0,6));
  Cpush(d_8);
  Rpush(e_8);
  goto h_6;
  e_8 :
  goto c_8;
  d_8 :
  Rpush(g_8);
  goto i_6;
  g_8 :
  goto f_8;
  c_8 :
  Cpop();
  f_8 :
  goto f_1;
  v_7 :
  Rpush(f_1);
  goto h_6;
  u_7 :
  TestFunFC(p_1,&&t_7,Egetd(0,7));
  goto e_3;
  e_3 :
  TestFunFC(p_1,&&h_8,Egetd(0,6));
  Cpush(j_8);
  Rpush(k_8);
  goto i_6;
  k_8 :
  goto i_8;
  j_8 :
  Rpush(m_8);
  goto j_6;
  m_8 :
  goto l_8;
  i_8 :
  Cpop();
  l_8 :
  goto f_1;
  h_8 :
  TestFunFC(o_1,&&fail,Egetd(0,6));
  Cpush(o_8);
  Rpush(p_8);
  goto g_6;
  p_8 :
  goto n_8;
  o_8 :
  Rpush(r_8);
  goto k_6;
  r_8 :
  goto q_8;
  n_8 :
  Cpop();
  q_8 :
  goto f_1;
  t_7 :
  goto f_3;
  f_3 :
  TestFunFC(o_1,&&s_8,Egetd(0,6));
  Rpush(f_1);
  goto g_6;
  s_8 :
  TestFunFC(p_1,&&fail,Egetd(0,6));
  Rpush(f_1);
  goto i_6;
  r_7 :
  TestFunFC(t_8,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto g_3;
  g_3 :
  TestFunFC(p_1,&&v_8,Egetd(0,7));
  goto h_3;
  h_3 :
  TestFunFC(p_1,&&x_8,Egetd(0,6));
  Cpush(z_8);
  Rpush(a_9);
  goto l_6;
  a_9 :
  goto y_8;
  z_8 :
  Rpush(c_9);
  goto m_6;
  c_9 :
  goto b_9;
  y_8 :
  Cpop();
  b_9 :
  goto f_1;
  x_8 :
  TestFunFC(o_1,&&w_8,Egetd(0,6));
  Cpush(e_9);
  Rpush(f_9);
  goto m_6;
  f_9 :
  goto d_9;
  e_9 :
  Rpush(h_9);
  goto n_6;
  h_9 :
  goto g_9;
  d_9 :
  Cpop();
  g_9 :
  goto f_1;
  w_8 :
  Rpush(f_1);
  goto m_6;
  v_8 :
  TestFunFC(o_1,&&u_8,Egetd(0,7));
  goto i_3;
  i_3 :
  TestFunFC(p_1,&&j_9,Egetd(0,6));
  Cpush(l_9);
  Rpush(m_9);
  goto l_6;
  m_9 :
  goto k_9;
  l_9 :
  Rpush(o_9);
  goto o_6;
  o_9 :
  goto n_9;
  k_9 :
  Cpop();
  n_9 :
  goto f_1;
  j_9 :
  TestFunFC(o_1,&&i_9,Egetd(0,6));
  Cpush(q_9);
  Rpush(r_9);
  goto n_6;
  r_9 :
  goto p_9;
  q_9 :
  Rpush(t_9);
  goto o_6;
  t_9 :
  goto s_9;
  p_9 :
  Cpop();
  s_9 :
  goto f_1;
  i_9 :
  Rpush(f_1);
  goto o_6;
  u_8 :
  goto j_3;
  j_3 :
  TestFunFC(p_1,&&u_9,Egetd(0,6));
  Rpush(f_1);
  goto l_6;
  u_9 :
  TestFunFC(o_1,&&fail,Egetd(0,6));
  Rpush(f_1);
  goto n_6;
  f_1 :
  goto e_1;
  o_6 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  e_1 :
  goto d_1;
  n_6 :
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Return();
  d_1 :
  goto c_1;
  m_6 :
  NotNULLd(0,6);
  Tset(App1("Not",Egetd(0,6)));
  Rpush(v_9);
  goto i_5;
  v_9 :
  Return();
  c_1 :
  goto b_1;
  l_6 :
  NotNULLd(0,7);
  Tset(App1("Not",Egetd(0,7)));
  Rpush(w_9);
  goto i_5;
  w_9 :
  Return();
  b_1 :
  goto a_1;
  k_6 :
  Tset(App0("False"));
  Rpush(x_9);
  goto i_5;
  x_9 :
  Return();
  a_1 :
  goto z_0;
  j_6 :
  Tset(App0("True"));
  Rpush(y_9);
  goto i_5;
  y_9 :
  Return();
  z_0 :
  goto y_0;
  i_6 :
  Tset(App0("True"));
  Rpush(z_9);
  goto i_5;
  z_9 :
  Return();
  y_0 :
  goto x_0;
  h_6 :
  Tset(App0("True"));
  Rpush(a_10);
  goto i_5;
  a_10 :
  Return();
  x_0 :
  goto w_0;
  g_6 :
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Return();
  w_0 :
  goto v_0;
  f_6 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  v_0 :
  goto u_0;
  e_6 :
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Return();
  u_0 :
  goto t_0;
  d_6 :
  Tset(App0("True"));
  Rpush(b_10);
  goto i_5;
  b_10 :
  Return();
  t_0 :
  goto s_0;
  c_6 :
  Tset(App0("True"));
  Rpush(c_10);
  goto i_5;
  c_10 :
  Return();
  s_0 :
  goto r_0;
  b_6 :
  Tset(App0("False"));
  Rpush(d_10);
  goto i_5;
  d_10 :
  Return();
  r_0 :
  goto q_0;
  a_6 :
  Tset(App0("False"));
  Rpush(e_10);
  goto i_5;
  e_10 :
  Return();
  q_0 :
  goto p_0;
  z_5 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  p_0 :
  goto o_0;
  y_5 :
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Return();
  o_0 :
  goto n_0;
  x_5 :
  Tset(App0("True"));
  Rpush(f_10);
  goto i_5;
  f_10 :
  Return();
  n_0 :
  goto m_0;
  w_5 :
  Tset(App0("False"));
  Rpush(g_10);
  goto i_5;
  g_10 :
  Return();
  m_0 :
  goto l_0;
  t_5 :
  Epushd(1,4);
  NotNULLd(0,3);
  Tset(App1("Not",Egetd(0,3)));
  Rpush(h_10);
  goto i_5;
  h_10 :
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(0,4);
  Tset(App1("Not",Egetd(0,4)));
  Rpush(i_10);
  goto i_5;
  i_10 :
  MoveTop(1,4);
  Move(1,3,1,4);
  NotNULLd(1,1);
  NotNULLd(1,3);
  Tset(App2("And",Egetd(1,1),Egetd(1,3)));
  Rpush(j_10);
  goto i_5;
  j_10 :
  Epopd(1,4);
  Return();
  l_0 :
  goto k_0;
  q_5 :
  Epushd(1,4);
  NotNULLd(0,3);
  Tset(App1("Not",Egetd(0,3)));
  Rpush(k_10);
  goto i_5;
  k_10 :
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(0,4);
  Tset(App1("Not",Egetd(0,4)));
  Rpush(l_10);
  goto i_5;
  l_10 :
  MoveTop(1,4);
  Move(1,3,1,4);
  NotNULLd(1,1);
  NotNULLd(1,3);
  Tset(App2("Or",Egetd(1,1),Egetd(1,3)));
  Rpush(m_10);
  goto i_5;
  m_10 :
  Epopd(1,4);
  Return();
  k_0 :
  goto j_0;
  p_5 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  j_0 :
  goto i_0;
  m_5 :
  Epushd(1,4);
  NotNULLd(0,6);
  NotNULLd(0,1);
  Tset(App2("And",Egetd(0,6),Egetd(0,1)));
  Rpush(n_10);
  goto i_5;
  n_10 :
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(0,6);
  NotNULLd(0,2);
  Tset(App2("And",Egetd(0,6),Egetd(0,2)));
  Rpush(o_10);
  goto i_5;
  o_10 :
  MoveTop(1,4);
  Move(1,3,1,4);
  NotNULLd(1,1);
  NotNULLd(1,3);
  Tset(App2("Or",Egetd(1,1),Egetd(1,3)));
  Rpush(p_10);
  goto i_5;
  p_10 :
  Epopd(1,4);
  Return();
  i_0 :
  goto h_0;
  j_5 :
  Epushd(1,4);
  NotNULLd(0,3);
  NotNULLd(0,7);
  Tset(App2("And",Egetd(0,3),Egetd(0,7)));
  Rpush(q_10);
  goto i_5;
  q_10 :
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(0,4);
  NotNULLd(0,7);
  Tset(App2("And",Egetd(0,4),Egetd(0,7)));
  Rpush(r_10);
  goto i_5;
  r_10 :
  MoveTop(1,4);
  Move(1,3,1,4);
  NotNULLd(1,1);
  NotNULLd(1,3);
  Tset(App2("Or",Egetd(1,1),Egetd(1,3)));
  Rpush(s_10);
  goto i_5;
  s_10 :
  Epopd(1,4);
  Return();
  h_0 :
  Epopd(0,7);
  goto f_0;
  g_0 :
  goto t_10;
  f_0 :
  Cpop();
  t_10 :
  Return();
  e_0 :
  Return();
  a_0 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_s_2);
ENDPROC

DOIT

