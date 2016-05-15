#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,q_13);
VARDECL(AFun,p_13);
VARDECL(AFun,w_7);
VARDECL(AFun,n_5);
VARDECL(AFun,l_2);
VARDECL(AFun,e_1);
VARDECL(AFun,c_1);
VARDECL(AFun,b_1);
VARDECL(AFun,z_0);
PROCDECL(_stratego_q_3);
PROCDECL(_stratego_r_3);
PROCDECL(_stratego_s_3);
PROCDECL(_stratego_t_3);
PROCDECL(_stratego_u_3);
PROCDECL(_stratego_v_3);
PROCDECL(_stratego_w_3);
PROCDECL(_stratego_x_3);
PROCDECL(_stratego_y_3);
PROCDECL(_stratego_z_3);
PROCDECL(_stratego_a_4);
PROCDECL(_stratego_b_4);
PROCDECL(_stratego_c_4);
PROCDECL(_stratego_d_4);
PROCDECL(_stratego_e_4);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(q_13,ATmakeAFun("TNil",0,0));
  MOVE(p_13,ATmakeAFun("TCons",2,0));
  MOVE(w_7,ATmakeAFun("Eq",2,0));
  MOVE(n_5,ATmakeAFun("Impl",2,0));
  MOVE(l_2,ATmakeAFun("Or",2,0));
  MOVE(e_1,ATmakeAFun("And",2,0));
  MOVE(c_1,ATmakeAFun("False",0,0));
  MOVE(b_1,ATmakeAFun("True",0,0));
  MOVE(z_0,ATmakeAFun("Not",1,0));
ENDPROC

PROC(_stratego_q_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_r_3)
  Epushd(0,3);
  MoveTop(0,1);
  goto m_4;
  m_4 :
  TestFunFC(z_0,&&y_0,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto n_4;
  n_4 :
  TestFunFC(b_1,&&a_1,Egetd(0,2));
  Rpush(x_0);
  goto j_1;
  a_1 :
  TestFunFC(c_1,&&fail,Egetd(0,2));
  Rpush(x_0);
  goto c_2;
  y_0 :
  TestFunFC(e_1,&&d_1,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_4;
  o_4 :
  TestFunFC(b_1,&&g_1,Egetd(0,3));
  goto p_4;
  p_4 :
  TestFunFC(b_1,&&i_1,Egetd(0,2));
  Cpush(l_1);
  Rpush(m_1);
  goto h_2;
  m_1 :
  goto k_1;
  l_1 :
  Rpush(o_1);
  goto i_2;
  o_1 :
  goto n_1;
  k_1 :
  Cpop();
  n_1 :
  goto x_0;
  i_1 :
  TestFunFC(c_1,&&h_1,Egetd(0,2));
  Cpush(q_1);
  Rpush(r_1);
  goto i_2;
  r_1 :
  goto p_1;
  q_1 :
  Rpush(t_1);
  goto o_2;
  t_1 :
  goto s_1;
  p_1 :
  Cpop();
  s_1 :
  goto x_0;
  h_1 :
  Rpush(x_0);
  goto i_2;
  g_1 :
  TestFunFC(c_1,&&f_1,Egetd(0,3));
  goto q_4;
  q_4 :
  TestFunFC(b_1,&&v_1,Egetd(0,2));
  Cpush(x_1);
  Rpush(y_1);
  goto h_2;
  y_1 :
  goto w_1;
  x_1 :
  Rpush(a_2);
  goto p_2;
  a_2 :
  goto z_1;
  w_1 :
  Cpop();
  z_1 :
  goto x_0;
  v_1 :
  TestFunFC(c_1,&&u_1,Egetd(0,2));
  Cpush(d_2);
  Rpush(e_2);
  goto o_2;
  e_2 :
  goto b_2;
  d_2 :
  Rpush(g_2);
  goto p_2;
  g_2 :
  goto f_2;
  b_2 :
  Cpop();
  f_2 :
  goto x_0;
  u_1 :
  Rpush(x_0);
  goto p_2;
  f_1 :
  goto r_4;
  r_4 :
  TestFunFC(b_1,&&j_2,Egetd(0,2));
  Rpush(x_0);
  goto h_2;
  j_2 :
  TestFunFC(c_1,&&fail,Egetd(0,2));
  Rpush(x_0);
  goto o_2;
  d_1 :
  TestFunFC(l_2,&&k_2,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_4;
  s_4 :
  TestFunFC(b_1,&&n_2,Egetd(0,3));
  goto t_4;
  t_4 :
  TestFunFC(b_1,&&r_2,Egetd(0,2));
  Cpush(t_2);
  Rpush(u_2);
  goto v_2;
  u_2 :
  goto s_2;
  t_2 :
  Rpush(y_2);
  goto w_2;
  y_2 :
  goto x_2;
  s_2 :
  Cpop();
  x_2 :
  goto x_0;
  r_2 :
  TestFunFC(c_1,&&q_2,Egetd(0,2));
  Cpush(a_3);
  Rpush(b_3);
  goto w_2;
  b_3 :
  goto z_2;
  a_3 :
  Rpush(f_3);
  goto c_3;
  f_3 :
  goto e_3;
  z_2 :
  Cpop();
  e_3 :
  goto x_0;
  q_2 :
  Rpush(x_0);
  goto w_2;
  n_2 :
  TestFunFC(c_1,&&m_2,Egetd(0,3));
  goto u_4;
  u_4 :
  TestFunFC(b_1,&&h_3,Egetd(0,2));
  Cpush(l_3);
  Rpush(m_3);
  goto v_2;
  m_3 :
  goto i_3;
  l_3 :
  Rpush(o_3);
  goto d_3;
  o_3 :
  goto n_3;
  i_3 :
  Cpop();
  n_3 :
  goto x_0;
  h_3 :
  TestFunFC(c_1,&&g_3,Egetd(0,2));
  Cpush(h_5);
  Rpush(i_5);
  goto c_3;
  i_5 :
  goto p_3;
  h_5 :
  Rpush(k_5);
  goto d_3;
  k_5 :
  goto j_5;
  p_3 :
  Cpop();
  j_5 :
  goto x_0;
  g_3 :
  Rpush(x_0);
  goto d_3;
  m_2 :
  goto v_4;
  v_4 :
  TestFunFC(b_1,&&l_5,Egetd(0,2));
  Rpush(x_0);
  goto v_2;
  l_5 :
  TestFunFC(c_1,&&fail,Egetd(0,2));
  Rpush(x_0);
  goto c_3;
  k_2 :
  TestFunFC(n_5,&&m_5,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_4;
  w_4 :
  TestFunFC(b_1,&&p_5,Egetd(0,3));
  goto x_4;
  x_4 :
  TestFunFC(b_1,&&r_5,Egetd(0,2));
  Cpush(t_5);
  Rpush(u_5);
  goto j_3;
  u_5 :
  goto s_5;
  t_5 :
  Rpush(x_6);
  goto k_3;
  x_6 :
  goto v_5;
  s_5 :
  Cpop();
  v_5 :
  goto x_0;
  r_5 :
  TestFunFC(c_1,&&q_5,Egetd(0,2));
  Cpush(z_6);
  Rpush(a_7);
  goto k_3;
  a_7 :
  goto y_6;
  z_6 :
  Rpush(c_7);
  goto f_4;
  c_7 :
  goto b_7;
  y_6 :
  Cpop();
  b_7 :
  goto x_0;
  q_5 :
  Rpush(x_0);
  goto k_3;
  p_5 :
  TestFunFC(c_1,&&o_5,Egetd(0,3));
  goto y_4;
  y_4 :
  TestFunFC(c_1,&&d_7,Egetd(0,2));
  Cpush(f_7);
  Rpush(g_7);
  goto f_4;
  g_7 :
  goto e_7;
  f_7 :
  Rpush(p_7);
  goto g_4;
  p_7 :
  goto h_7;
  e_7 :
  Cpop();
  h_7 :
  goto x_0;
  d_7 :
  TestFunFC(b_1,&&fail,Egetd(0,2));
  Cpush(r_7);
  Rpush(s_7);
  goto j_3;
  s_7 :
  goto q_7;
  r_7 :
  Rpush(u_7);
  goto h_4;
  u_7 :
  goto t_7;
  q_7 :
  Cpop();
  t_7 :
  goto x_0;
  o_5 :
  goto z_4;
  z_4 :
  TestFunFC(b_1,&&v_7,Egetd(0,2));
  Rpush(x_0);
  goto j_3;
  v_7 :
  TestFunFC(c_1,&&fail,Egetd(0,2));
  Rpush(x_0);
  goto f_4;
  m_5 :
  TestFunFC(w_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_5;
  a_5 :
  TestFunFC(c_1,&&y_7,Egetd(0,3));
  goto b_5;
  b_5 :
  TestFunFC(c_1,&&i_8,Egetd(0,2));
  Cpush(u_8);
  Rpush(v_8);
  goto i_4;
  v_8 :
  goto o_8;
  u_8 :
  Rpush(x_8);
  goto j_4;
  x_8 :
  goto w_8;
  o_8 :
  Cpop();
  w_8 :
  goto x_0;
  i_8 :
  TestFunFC(b_1,&&z_7,Egetd(0,2));
  Cpush(a_9);
  Rpush(b_9);
  goto j_4;
  b_9 :
  goto z_8;
  a_9 :
  Rpush(d_9);
  goto k_4;
  d_9 :
  goto c_9;
  z_8 :
  Cpop();
  c_9 :
  goto x_0;
  z_7 :
  Rpush(x_0);
  goto j_4;
  y_7 :
  TestFunFC(b_1,&&x_7,Egetd(0,3));
  goto c_5;
  c_5 :
  TestFunFC(c_1,&&f_9,Egetd(0,2));
  Cpush(i_9);
  Rpush(j_9);
  goto i_4;
  j_9 :
  goto g_9;
  i_9 :
  Rpush(m_9);
  goto l_4;
  m_9 :
  goto l_9;
  g_9 :
  Cpop();
  l_9 :
  goto x_0;
  f_9 :
  TestFunFC(b_1,&&e_9,Egetd(0,2));
  Cpush(o_9);
  Rpush(p_9);
  goto k_4;
  p_9 :
  goto n_9;
  o_9 :
  Rpush(r_9);
  goto l_4;
  r_9 :
  goto q_9;
  n_9 :
  Cpop();
  q_9 :
  goto x_0;
  e_9 :
  Rpush(x_0);
  goto l_4;
  x_7 :
  goto d_5;
  d_5 :
  TestFunFC(c_1,&&s_9,Egetd(0,2));
  Rpush(x_0);
  goto i_4;
  s_9 :
  TestFunFC(b_1,&&fail,Egetd(0,2));
  Rpush(x_0);
  goto k_4;
  x_0 :
  goto w_0;
  l_4 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  w_0 :
  goto v_0;
  k_4 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  v_0 :
  goto u_0;
  j_4 :
  NotNULLd(0,2);
  Tset(App1("Not",Egetd(0,2)));
  Return();
  u_0 :
  goto t_0;
  i_4 :
  NotNULLd(0,3);
  Tset(App1("Not",Egetd(0,3)));
  Return();
  t_0 :
  goto s_0;
  h_4 :
  Tset(App0("False"));
  Return();
  s_0 :
  goto r_0;
  g_4 :
  Tset(App0("True"));
  Return();
  r_0 :
  goto q_0;
  f_4 :
  Tset(App0("True"));
  Return();
  q_0 :
  goto p_0;
  k_3 :
  Tset(App0("True"));
  Return();
  p_0 :
  goto o_0;
  j_3 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  o_0 :
  goto n_0;
  d_3 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  n_0 :
  goto m_0;
  c_3 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  m_0 :
  goto l_0;
  w_2 :
  Tset(App0("True"));
  Return();
  l_0 :
  goto k_0;
  v_2 :
  Tset(App0("True"));
  Return();
  k_0 :
  goto j_0;
  p_2 :
  Tset(App0("False"));
  Return();
  j_0 :
  goto i_0;
  o_2 :
  Tset(App0("False"));
  Return();
  i_0 :
  goto h_0;
  i_2 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  h_0 :
  goto g_0;
  h_2 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  g_0 :
  goto f_0;
  c_2 :
  Tset(App0("True"));
  Return();
  f_0 :
  goto e_0;
  j_1 :
  Tset(App0("False"));
  Return();
  e_0 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_s_3)
  Cpush(u_9);
  Rpush(v_9);
  a_8 :
  AllInit();
  w_9 :
  AllNextSon(&&x_9);
  Rpush(y_9);
  goto a_8;
  y_9 :
  goto w_9;
  x_9 :
  AllBuild();
  Rpush(d_10);
  b_8 :
  Cpush(g_10);
  Cpush(i_10);
  Epushd(0,7);
  MoveTop(0,4);
  goto b_6;
  b_6 :
  TestFunFC(e_1,&&q_10,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,1,0,4,1);
  goto c_6;
  c_6 :
  TestFunFC(l_2,&&r_10,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto d_6;
  d_6 :
  TestFunFC(l_2,&&s_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Cpush(u_10);
  Rpush(v_10);
  goto w_5;
  v_10 :
  goto t_10;
  u_10 :
  Rpush(x_10);
  goto x_5;
  x_10 :
  goto w_10;
  t_10 :
  Cpop();
  w_10 :
  goto p_10;
  s_10 :
  Rpush(p_10);
  goto x_5;
  r_10 :
  goto e_6;
  e_6 :
  TestFunFC(l_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(p_10);
  goto w_5;
  q_10 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto f_6;
  f_6 :
  TestFunFC(z_0,&&e_11,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(p_10);
  goto y_5;
  e_11 :
  TestFunFC(e_1,&&f_11,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(p_10);
  goto z_5;
  f_11 :
  TestFunFC(l_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(p_10);
  goto a_6;
  p_10 :
  goto n_10;
  a_6 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("And",App1("Not",Egetd(0,6)),App1("Not",Egetd(0,7))));
  Return();
  n_10 :
  goto m_10;
  z_5 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("Or",App1("Not",Egetd(0,6)),App1("Not",Egetd(0,7))));
  Return();
  m_10 :
  goto l_10;
  y_5 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  l_10 :
  goto k_10;
  x_5 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App2("Or",App2("And",Egetd(0,5),Egetd(0,2)),App2("And",Egetd(0,5),Egetd(0,3))));
  Return();
  k_10 :
  goto j_10;
  w_5 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,1);
  Tset(App2("Or",App2("And",Egetd(0,6),Egetd(0,1)),App2("And",Egetd(0,7),Egetd(0,1))));
  Return();
  j_10 :
  Epopd(0,7);
  goto h_10;
  i_10 :
  Ccall(_stratego_r_3);
  goto g_11;
  h_10 :
  Cpop();
  g_11 :
  Cpush(i_11);
  Rpush(j_11);
  c_8 :
  AllInit();
  k_11 :
  AllNextSon(&&l_11);
  Rpush(m_11);
  goto c_8;
  m_11 :
  goto k_11;
  l_11 :
  AllBuild();
  Rpush(n_11);
  goto b_8;
  n_11 :
  Return();
  j_11 :
  goto h_11;
  i_11 :
  Rpush(q_11);
  d_8 :
  AllInit();
  r_11 :
  AllNextSon(&&s_11);
  Rpush(t_11);
  goto d_8;
  t_11 :
  goto r_11;
  s_11 :
  AllBuild();
  Rpush(u_11);
  goto b_8;
  u_11 :
  Return();
  q_11 :
  goto p_11;
  h_11 :
  Cpop();
  p_11 :
  goto f_10;
  g_10 :
  goto v_11;
  f_10 :
  Cpop();
  v_11 :
  Return();
  d_10 :
  Return();
  v_9 :
  goto t_9;
  u_9 :
  Rpush(x_11);
  e_8 :
  AllInit();
  z_11 :
  AllNextSon(&&a_12);
  Rpush(b_12);
  goto e_8;
  b_12 :
  goto z_11;
  a_12 :
  AllBuild();
  Rpush(c_12);
  f_8 :
  Cpush(e_12);
  Cpush(g_12);
  Epushd(0,7);
  MoveTop(0,4);
  goto l_6;
  l_6 :
  TestFunFC(e_1,&&o_12,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,1,0,4,1);
  goto m_6;
  m_6 :
  TestFunFC(l_2,&&p_12,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto n_6;
  n_6 :
  TestFunFC(l_2,&&q_12,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Cpush(s_12);
  Rpush(t_12);
  goto g_6;
  t_12 :
  goto r_12;
  s_12 :
  Rpush(v_12);
  goto h_6;
  v_12 :
  goto u_12;
  r_12 :
  Cpop();
  u_12 :
  goto m_12;
  q_12 :
  Rpush(m_12);
  goto h_6;
  p_12 :
  goto o_6;
  o_6 :
  TestFunFC(l_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(m_12);
  goto g_6;
  o_12 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto p_6;
  p_6 :
  TestFunFC(z_0,&&w_12,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(m_12);
  goto i_6;
  w_12 :
  TestFunFC(e_1,&&x_12,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(m_12);
  goto j_6;
  x_12 :
  TestFunFC(l_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(m_12);
  goto k_6;
  m_12 :
  goto l_12;
  k_6 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("And",App1("Not",Egetd(0,6)),App1("Not",Egetd(0,7))));
  Return();
  l_12 :
  goto k_12;
  j_6 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("Or",App1("Not",Egetd(0,6)),App1("Not",Egetd(0,7))));
  Return();
  k_12 :
  goto j_12;
  i_6 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  j_12 :
  goto i_12;
  h_6 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App2("Or",App2("And",Egetd(0,5),Egetd(0,2)),App2("And",Egetd(0,5),Egetd(0,3))));
  Return();
  i_12 :
  goto h_12;
  g_6 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,1);
  Tset(App2("Or",App2("And",Egetd(0,6),Egetd(0,1)),App2("And",Egetd(0,7),Egetd(0,1))));
  Return();
  h_12 :
  Epopd(0,7);
  goto f_12;
  g_12 :
  Ccall(_stratego_r_3);
  goto y_12;
  f_12 :
  Cpop();
  y_12 :
  Cpush(a_13);
  Rpush(b_13);
  g_8 :
  AllInit();
  c_13 :
  AllNextSon(&&d_13);
  Rpush(e_13);
  goto g_8;
  e_13 :
  goto c_13;
  d_13 :
  AllBuild();
  Rpush(f_13);
  goto f_8;
  f_13 :
  Return();
  b_13 :
  goto z_12;
  a_13 :
  Rpush(h_13);
  h_8 :
  AllInit();
  i_13 :
  AllNextSon(&&j_13);
  Rpush(k_13);
  goto h_8;
  k_13 :
  goto i_13;
  j_13 :
  AllBuild();
  Rpush(l_13);
  goto f_8;
  l_13 :
  Return();
  h_13 :
  goto g_13;
  z_12 :
  Cpop();
  g_13 :
  goto d_12;
  e_12 :
  goto m_13;
  d_12 :
  Cpop();
  m_13 :
  Return();
  c_12 :
  Return();
  x_11 :
  goto w_11;
  t_9 :
  Cpop();
  w_11 :
ENDPROC

PROC(_stratego_t_3)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto k_8;
  k_8 :
  TestFunFC(p_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_8;
  l_8 :
  TestFunFC(p_13,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto m_8;
  m_8 :
  TestFunFC(q_13,&&fail,Egetd(0,6));
  Rpush(o_13);
  goto j_8;
  o_13 :
  goto n_13;
  j_8 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  n_13 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_u_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_e_4);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_v_3)
  TestFunTop(p_13);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_13);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_w_3);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_b_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_w_3)
  _ST_add();
ENDPROC

PROC(_stratego_x_3)
  TestFunTop(p_13);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_w_3);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(p_13);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_y_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_u_3);
  Tpop();
  Cpush(s_13);
  Tdupl();
  Epushd(1,1);
  Cpush(u_13);
  Epushd(2,1);
  Tset(App2("And",App2("And",App2("Or",App2("Or",App1("Atom",ATmakeString("d_0")),App1("Atom",ATmakeString("a"))),App2("Or",App2("Or",App1("Atom",ATmakeString("c_0")),App1("Atom",ATmakeString("a"))),App0("False"))),App1("Atom",ATmakeString("b"))),App2("And",App2("And",App2("Or",App2("Or",App1("Atom",ATmakeString("b_0")),App1("Atom",ATmakeString("a"))),App2("Or",App2("Or",App1("Atom",ATmakeString("a_0")),App1("Atom",ATmakeString("a"))),App0("False"))),App1("Atom",ATmakeString("b"))),App0("True"))));
  Ccall(_stratego_s_3);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto t_13;
  u_13 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_u_3);
  Ccall(_stratego_t_3);
  goto v_13;
  t_13 :
  Cpop();
  v_13 :
  Tset(ATmakeString("prop.res"));
  Ccall(_stratego_q_3);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(x_13);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto w_13;
  x_13 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_4);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_4);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_t_3);
  goto y_13;
  w_13 :
  Cpop();
  y_13 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_x_3);
  goto r_13;
  s_13 :
  Ccall(_stratego_v_3);
  goto z_13;
  r_13 :
  Cpop();
  z_13 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_z_3)
  _ST_exit();
ENDPROC

PROC(_stratego_a_4)
  Cpush(b_14);
  TestFunTop(p_13);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_13);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto z_10;
  z_10 :
  TestInt(0,1,0,&&fail);
  Rpush(d_14);
  goto y_10;
  d_14 :
  goto c_14;
  y_10 :
  Return();
  c_14 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_b_4);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_z_3);
  goto a_14;
  b_14 :
  Tset(MakeInt(1));
  Ccall(_stratego_z_3);
  goto e_14;
  a_14 :
  Cpop();
  e_14 :
ENDPROC

PROC(_stratego_b_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_11;
  c_11 :
  TestFunFC(q_13,&&fail,Egetd(0,1));
  Rpush(g_14);
  goto b_11;
  g_14 :
  goto f_14;
  b_11 :
  Return();
  f_14 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_4)
  TestFunTop(p_13);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_4);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(p_13);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_4);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_b_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_d_4)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_e_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("prop"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_4);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_d_4);
  Ccall(_stratego_y_3);
  Ccall(_stratego_c_4);
  Ccall(_stratego_a_4);
ENDPROC

DOIT

