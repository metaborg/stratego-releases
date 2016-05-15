#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,w_14);
VARDECL(AFun,r_14);
VARDECL(AFun,q_14);
VARDECL(AFun,p_14);
VARDECL(AFun,o_14);
VARDECL(AFun,n_14);
VARDECL(AFun,i_9);
VARDECL(AFun,t_5);
VARDECL(AFun,r_2);
VARDECL(AFun,f_1);
VARDECL(AFun,d_1);
VARDECL(AFun,c_1);
VARDECL(AFun,a_1);
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
PROCDECL(_stratego_f_4);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(w_14,ATmakeAFun("Atom",1,0));
  MOVE(r_14,ATmakeAFun("Nil",0,0));
  MOVE(q_14,ATmakeAFun("Cons",2,0));
  MOVE(p_14,ATmakeAFun("stderr",0,0));
  MOVE(o_14,ATmakeAFun("TNil",0,0));
  MOVE(n_14,ATmakeAFun("TCons",2,0));
  MOVE(i_9,ATmakeAFun("Eq",2,0));
  MOVE(t_5,ATmakeAFun("Impl",2,0));
  MOVE(r_2,ATmakeAFun("Or",2,0));
  MOVE(f_1,ATmakeAFun("And",2,0));
  MOVE(d_1,ATmakeAFun("False",0,0));
  MOVE(c_1,ATmakeAFun("True",0,0));
  MOVE(a_1,ATmakeAFun("Not",1,0));
ENDPROC

PROC(_stratego_r_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_s_3)
  Epushd(0,3);
  MoveTop(0,1);
  goto m_4;
  m_4 :
  TestFunFC(a_1,&&z_0,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto n_4;
  n_4 :
  TestFunFC(c_1,&&b_1,Egetd(0,2));
  Rpush(y_0);
  goto e_0;
  b_1 :
  TestFunFC(d_1,&&fail,Egetd(0,2));
  Rpush(y_0);
  goto j_1;
  z_0 :
  TestFunFC(f_1,&&e_1,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_4;
  o_4 :
  TestFunFC(c_1,&&h_1,Egetd(0,3));
  goto p_4;
  p_4 :
  TestFunFC(c_1,&&k_1,Egetd(0,2));
  Cpush(m_1);
  Rpush(n_1);
  goto d_2;
  n_1 :
  goto l_1;
  m_1 :
  Rpush(p_1);
  goto i_2;
  p_1 :
  goto o_1;
  l_1 :
  Cpop();
  o_1 :
  goto y_0;
  k_1 :
  TestFunFC(d_1,&&i_1,Egetd(0,2));
  Cpush(r_1);
  Rpush(s_1);
  goto i_2;
  s_1 :
  goto q_1;
  r_1 :
  Rpush(u_1);
  goto j_2;
  u_1 :
  goto t_1;
  q_1 :
  Cpop();
  t_1 :
  goto y_0;
  i_1 :
  Rpush(y_0);
  goto i_2;
  h_1 :
  TestFunFC(d_1,&&g_1,Egetd(0,3));
  goto q_4;
  q_4 :
  TestFunFC(c_1,&&w_1,Egetd(0,2));
  Cpush(y_1);
  Rpush(z_1);
  goto d_2;
  z_1 :
  goto x_1;
  y_1 :
  Rpush(b_2);
  goto p_2;
  b_2 :
  goto a_2;
  x_1 :
  Cpop();
  a_2 :
  goto y_0;
  w_1 :
  TestFunFC(d_1,&&v_1,Egetd(0,2));
  Cpush(e_2);
  Rpush(f_2);
  goto j_2;
  f_2 :
  goto c_2;
  e_2 :
  Rpush(h_2);
  goto p_2;
  h_2 :
  goto g_2;
  c_2 :
  Cpop();
  g_2 :
  goto y_0;
  v_1 :
  Rpush(y_0);
  goto p_2;
  g_1 :
  goto r_4;
  r_4 :
  TestFunFC(c_1,&&k_2,Egetd(0,2));
  Rpush(y_0);
  goto d_2;
  k_2 :
  TestFunFC(d_1,&&fail,Egetd(0,2));
  Rpush(y_0);
  goto j_2;
  e_1 :
  TestFunFC(f_1,&&l_2,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_4;
  l_2 :
  TestFunFC(f_1,&&m_2,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_4;
  m_2 :
  TestFunFC(f_1,&&n_2,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_4;
  n_2 :
  TestFunFC(r_2,&&o_2,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_4;
  s_4 :
  TestFunFC(c_1,&&t_2,Egetd(0,3));
  goto t_4;
  t_4 :
  TestFunFC(c_1,&&v_2,Egetd(0,2));
  Cpush(z_2);
  Rpush(a_3);
  goto q_2;
  a_3 :
  goto y_2;
  z_2 :
  Rpush(c_3);
  goto w_2;
  c_3 :
  goto b_3;
  y_2 :
  Cpop();
  b_3 :
  goto y_0;
  v_2 :
  TestFunFC(d_1,&&u_2,Egetd(0,2));
  Cpush(g_3);
  Rpush(h_3);
  goto w_2;
  h_3 :
  goto f_3;
  g_3 :
  Rpush(j_3);
  goto x_2;
  j_3 :
  goto i_3;
  f_3 :
  Cpop();
  i_3 :
  goto y_0;
  u_2 :
  Rpush(y_0);
  goto w_2;
  t_2 :
  TestFunFC(d_1,&&s_2,Egetd(0,3));
  goto u_4;
  u_4 :
  TestFunFC(c_1,&&n_3,Egetd(0,2));
  Cpush(p_3);
  Rpush(q_3);
  goto q_2;
  q_3 :
  goto o_3;
  p_3 :
  Rpush(i_5);
  goto d_3;
  i_5 :
  goto h_5;
  o_3 :
  Cpop();
  h_5 :
  goto y_0;
  n_3 :
  TestFunFC(d_1,&&m_3,Egetd(0,2));
  Cpush(k_5);
  Rpush(l_5);
  goto x_2;
  l_5 :
  goto j_5;
  k_5 :
  Rpush(n_5);
  goto d_3;
  n_5 :
  goto m_5;
  j_5 :
  Cpop();
  m_5 :
  goto y_0;
  m_3 :
  Rpush(y_0);
  goto d_3;
  s_2 :
  goto v_4;
  v_4 :
  TestFunFC(c_1,&&o_5,Egetd(0,2));
  Rpush(y_0);
  goto q_2;
  o_5 :
  TestFunFC(d_1,&&fail,Egetd(0,2));
  Rpush(y_0);
  goto x_2;
  o_2 :
  TestFunFC(r_2,&&p_5,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_4;
  p_5 :
  TestFunFC(r_2,&&q_5,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_4;
  q_5 :
  TestFunFC(r_2,&&r_5,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_4;
  r_5 :
  TestFunFC(t_5,&&s_5,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_4;
  w_4 :
  TestFunFC(c_1,&&v_5,Egetd(0,3));
  goto x_4;
  x_4 :
  TestFunFC(c_1,&&y_6,Egetd(0,2));
  Cpush(a_7);
  Rpush(b_7);
  goto e_3;
  b_7 :
  goto z_6;
  a_7 :
  Rpush(d_7);
  goto k_3;
  d_7 :
  goto c_7;
  z_6 :
  Cpop();
  c_7 :
  goto y_0;
  y_6 :
  TestFunFC(d_1,&&x_6,Egetd(0,2));
  Cpush(f_7);
  Rpush(g_7);
  goto k_3;
  g_7 :
  goto e_7;
  f_7 :
  Rpush(p_7);
  goto l_3;
  p_7 :
  goto h_7;
  e_7 :
  Cpop();
  h_7 :
  goto y_0;
  x_6 :
  Rpush(y_0);
  goto k_3;
  v_5 :
  TestFunFC(d_1,&&q_7,Egetd(0,3));
  goto y_4;
  y_4 :
  TestFunFC(c_1,&&r_7,Egetd(0,2));
  Cpush(t_7);
  Rpush(u_7);
  goto e_3;
  u_7 :
  goto s_7;
  t_7 :
  Rpush(w_7);
  goto h_4;
  w_7 :
  goto v_7;
  s_7 :
  Cpop();
  v_7 :
  goto y_0;
  r_7 :
  TestFunFC(d_1,&&x_7,Egetd(0,2));
  Cpush(z_7);
  Rpush(i_8);
  goto l_3;
  i_8 :
  goto y_7;
  z_7 :
  Rpush(u_8);
  goto g_4;
  u_8 :
  goto o_8;
  y_7 :
  Cpop();
  o_8 :
  goto y_0;
  x_7 :
  TestFunFC(d_1,&&fail,Egetd(0,2));
  Cpush(w_8);
  Rpush(x_8);
  goto l_3;
  x_8 :
  goto v_8;
  w_8 :
  Rpush(a_9);
  goto g_4;
  a_9 :
  goto z_8;
  v_8 :
  Cpop();
  z_8 :
  goto y_0;
  q_7 :
  TestFunFC(d_1,&&u_5,Egetd(0,3));
  goto y_4;
  u_5 :
  goto z_4;
  z_4 :
  TestFunFC(c_1,&&b_9,Egetd(0,2));
  Rpush(y_0);
  goto e_3;
  b_9 :
  TestFunFC(d_1,&&fail,Egetd(0,2));
  Rpush(y_0);
  goto l_3;
  s_5 :
  TestFunFC(t_5,&&c_9,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_4;
  c_9 :
  TestFunFC(t_5,&&d_9,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_4;
  d_9 :
  TestFunFC(t_5,&&e_9,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_4;
  e_9 :
  TestFunFC(t_5,&&f_9,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_4;
  f_9 :
  TestFunFC(i_9,&&g_9,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_5;
  a_5 :
  TestFunFC(d_1,&&l_9,Egetd(0,3));
  goto b_5;
  b_5 :
  TestFunFC(d_1,&&n_9,Egetd(0,2));
  Cpush(p_9);
  Rpush(q_9);
  goto i_4;
  q_9 :
  goto o_9;
  p_9 :
  Rpush(s_9);
  goto j_4;
  s_9 :
  goto r_9;
  o_9 :
  Cpop();
  r_9 :
  goto y_0;
  n_9 :
  TestFunFC(c_1,&&m_9,Egetd(0,2));
  Cpush(u_9);
  Rpush(v_9);
  goto j_4;
  v_9 :
  goto t_9;
  u_9 :
  Rpush(x_9);
  goto k_4;
  x_9 :
  goto w_9;
  t_9 :
  Cpop();
  w_9 :
  goto y_0;
  m_9 :
  Rpush(y_0);
  goto j_4;
  l_9 :
  TestFunFC(c_1,&&j_9,Egetd(0,3));
  goto c_5;
  c_5 :
  TestFunFC(d_1,&&d_10,Egetd(0,2));
  Cpush(g_10);
  Rpush(h_10);
  goto i_4;
  h_10 :
  goto f_10;
  g_10 :
  Rpush(j_10);
  goto l_4;
  j_10 :
  goto i_10;
  f_10 :
  Cpop();
  i_10 :
  goto y_0;
  d_10 :
  TestFunFC(c_1,&&y_9,Egetd(0,2));
  Cpush(l_10);
  Rpush(m_10);
  goto k_4;
  m_10 :
  goto k_10;
  l_10 :
  Rpush(p_10);
  goto l_4;
  p_10 :
  goto n_10;
  k_10 :
  Cpop();
  n_10 :
  goto y_0;
  y_9 :
  Rpush(y_0);
  goto l_4;
  j_9 :
  goto d_5;
  d_5 :
  TestFunFC(d_1,&&q_10,Egetd(0,2));
  Rpush(y_0);
  goto i_4;
  q_10 :
  TestFunFC(c_1,&&fail,Egetd(0,2));
  Rpush(y_0);
  goto k_4;
  g_9 :
  TestFunFC(i_9,&&r_10,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_5;
  r_10 :
  TestFunFC(i_9,&&s_10,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_5;
  s_10 :
  TestFunFC(i_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_5;
  y_0 :
  goto x_0;
  l_4 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  x_0 :
  goto w_0;
  k_4 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  w_0 :
  goto v_0;
  j_4 :
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl1(a_1,Egetd(0,2)));
  Return();
  v_0 :
  goto u_0;
  i_4 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl1(a_1,Egetd(0,3)));
  Return();
  u_0 :
  goto t_0;
  h_4 :
  Tset((ATerm)ATmakeAppl0(d_1));
  Return();
  t_0 :
  goto s_0;
  g_4 :
  Tset((ATerm)ATmakeAppl0(c_1));
  Return();
  s_0 :
  goto r_0;
  l_3 :
  Tset((ATerm)ATmakeAppl0(c_1));
  Return();
  r_0 :
  goto q_0;
  k_3 :
  Tset((ATerm)ATmakeAppl0(c_1));
  Return();
  q_0 :
  goto p_0;
  e_3 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  p_0 :
  goto o_0;
  d_3 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  o_0 :
  goto n_0;
  x_2 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  n_0 :
  goto m_0;
  w_2 :
  Tset((ATerm)ATmakeAppl0(c_1));
  Return();
  m_0 :
  goto l_0;
  q_2 :
  Tset((ATerm)ATmakeAppl0(c_1));
  Return();
  l_0 :
  goto k_0;
  p_2 :
  Tset((ATerm)ATmakeAppl0(d_1));
  Return();
  k_0 :
  goto j_0;
  j_2 :
  Tset((ATerm)ATmakeAppl0(d_1));
  Return();
  j_0 :
  goto i_0;
  i_2 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  i_0 :
  goto h_0;
  d_2 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  h_0 :
  goto g_0;
  j_1 :
  Tset((ATerm)ATmakeAppl0(c_1));
  Return();
  g_0 :
  goto f_0;
  e_0 :
  Tset((ATerm)ATmakeAppl0(d_1));
  Return();
  f_0 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_t_3)
  Cpush(u_10);
  Rpush(v_10);
  a_8 :
  AllInit();
  w_10 :
  AllNextSon(&&x_10);
  Rpush(e_11);
  goto a_8;
  e_11 :
  goto w_10;
  x_10 :
  AllBuild();
  Rpush(f_11);
  b_8 :
  Cpush(h_11);
  Cpush(j_11);
  Epushd(0,7);
  MoveTop(0,4);
  goto b_6;
  b_6 :
  TestFunFC(f_1,&&r_11,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,1,0,4,1);
  goto c_6;
  c_6 :
  TestFunFC(r_2,&&s_11,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto d_6;
  d_6 :
  TestFunFC(r_2,&&t_11,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Cpush(v_11);
  Rpush(w_11);
  goto w_5;
  w_11 :
  goto u_11;
  v_11 :
  Rpush(z_11);
  goto x_5;
  z_11 :
  goto x_11;
  u_11 :
  Cpop();
  x_11 :
  goto q_11;
  t_11 :
  Rpush(q_11);
  goto x_5;
  s_11 :
  goto e_6;
  e_6 :
  TestFunFC(r_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(q_11);
  goto w_5;
  r_11 :
  TestFunFC(a_1,&&a_12,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto f_6;
  f_6 :
  TestFunFC(a_1,&&b_12,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(q_11);
  goto y_5;
  b_12 :
  TestFunFC(f_1,&&c_12,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(q_11);
  goto z_5;
  c_12 :
  TestFunFC(r_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(q_11);
  goto a_6;
  a_12 :
  TestFunFC(a_1,&&d_12,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto f_6;
  d_12 :
  TestFunFC(a_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto f_6;
  q_11 :
  goto p_11;
  a_6 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(f_1,(ATerm)ATmakeAppl1(a_1,Egetd(0,6)),(ATerm)ATmakeAppl1(a_1,Egetd(0,7))));
  Return();
  p_11 :
  goto n_11;
  z_5 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl1(a_1,Egetd(0,6)),(ATerm)ATmakeAppl1(a_1,Egetd(0,7))));
  Return();
  n_11 :
  goto m_11;
  y_5 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  m_11 :
  goto l_11;
  x_5 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl2(f_1,Egetd(0,5),Egetd(0,2)),(ATerm)ATmakeAppl2(f_1,Egetd(0,5),Egetd(0,3))));
  Return();
  l_11 :
  goto k_11;
  w_5 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl2(f_1,Egetd(0,6),Egetd(0,1)),(ATerm)ATmakeAppl2(f_1,Egetd(0,7),Egetd(0,1))));
  Return();
  k_11 :
  Epopd(0,7);
  goto i_11;
  j_11 :
  Ccall(_stratego_s_3);
  goto e_12;
  i_11 :
  Cpop();
  e_12 :
  Cpush(g_12);
  Rpush(h_12);
  c_8 :
  AllInit();
  i_12 :
  AllNextSon(&&j_12);
  Rpush(k_12);
  goto c_8;
  k_12 :
  goto i_12;
  j_12 :
  AllBuild();
  Rpush(l_12);
  goto b_8;
  l_12 :
  Return();
  h_12 :
  goto f_12;
  g_12 :
  Rpush(o_12);
  d_8 :
  AllInit();
  p_12 :
  AllNextSon(&&q_12);
  Rpush(r_12);
  goto d_8;
  r_12 :
  goto p_12;
  q_12 :
  AllBuild();
  Rpush(s_12);
  goto b_8;
  s_12 :
  Return();
  o_12 :
  goto m_12;
  f_12 :
  Cpop();
  m_12 :
  goto g_11;
  h_11 :
  goto t_12;
  g_11 :
  Cpop();
  t_12 :
  Return();
  f_11 :
  Return();
  v_10 :
  goto t_10;
  u_10 :
  Rpush(v_12);
  e_8 :
  AllInit();
  w_12 :
  AllNextSon(&&x_12);
  Rpush(y_12);
  goto e_8;
  y_12 :
  goto w_12;
  x_12 :
  AllBuild();
  Rpush(z_12);
  f_8 :
  Cpush(b_13);
  Cpush(d_13);
  Epushd(0,7);
  MoveTop(0,4);
  goto l_6;
  l_6 :
  TestFunFC(f_1,&&k_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,1,0,4,1);
  goto m_6;
  m_6 :
  TestFunFC(r_2,&&l_13,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto n_6;
  n_6 :
  TestFunFC(r_2,&&m_13,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Cpush(o_13);
  Rpush(p_13);
  goto g_6;
  p_13 :
  goto n_13;
  o_13 :
  Rpush(r_13);
  goto h_6;
  r_13 :
  goto q_13;
  n_13 :
  Cpop();
  q_13 :
  goto j_13;
  m_13 :
  Rpush(j_13);
  goto h_6;
  l_13 :
  goto o_6;
  o_6 :
  TestFunFC(r_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(j_13);
  goto g_6;
  k_13 :
  TestFunFC(a_1,&&s_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto p_6;
  p_6 :
  TestFunFC(a_1,&&t_13,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(j_13);
  goto i_6;
  t_13 :
  TestFunFC(f_1,&&u_13,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(j_13);
  goto j_6;
  u_13 :
  TestFunFC(r_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(j_13);
  goto k_6;
  s_13 :
  TestFunFC(a_1,&&v_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto p_6;
  v_13 :
  TestFunFC(a_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto p_6;
  j_13 :
  goto i_13;
  k_6 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(f_1,(ATerm)ATmakeAppl1(a_1,Egetd(0,6)),(ATerm)ATmakeAppl1(a_1,Egetd(0,7))));
  Return();
  i_13 :
  goto h_13;
  j_6 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl1(a_1,Egetd(0,6)),(ATerm)ATmakeAppl1(a_1,Egetd(0,7))));
  Return();
  h_13 :
  goto g_13;
  i_6 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  g_13 :
  goto f_13;
  h_6 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl2(f_1,Egetd(0,5),Egetd(0,2)),(ATerm)ATmakeAppl2(f_1,Egetd(0,5),Egetd(0,3))));
  Return();
  f_13 :
  goto e_13;
  g_6 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl2(f_1,Egetd(0,6),Egetd(0,1)),(ATerm)ATmakeAppl2(f_1,Egetd(0,7),Egetd(0,1))));
  Return();
  e_13 :
  Epopd(0,7);
  goto c_13;
  d_13 :
  Ccall(_stratego_s_3);
  goto w_13;
  c_13 :
  Cpop();
  w_13 :
  Cpush(y_13);
  Rpush(z_13);
  g_8 :
  AllInit();
  a_14 :
  AllNextSon(&&b_14);
  Rpush(c_14);
  goto g_8;
  c_14 :
  goto a_14;
  b_14 :
  AllBuild();
  Rpush(d_14);
  goto f_8;
  d_14 :
  Return();
  z_13 :
  goto x_13;
  y_13 :
  Rpush(f_14);
  h_8 :
  AllInit();
  g_14 :
  AllNextSon(&&h_14);
  Rpush(i_14);
  goto h_8;
  i_14 :
  goto g_14;
  h_14 :
  AllBuild();
  Rpush(j_14);
  goto f_8;
  j_14 :
  Return();
  f_14 :
  goto e_14;
  x_13 :
  Cpop();
  e_14 :
  goto a_13;
  b_13 :
  goto k_14;
  a_13 :
  Cpop();
  k_14 :
  Return();
  z_12 :
  Return();
  v_12 :
  goto u_12;
  t_10 :
  Cpop();
  u_12 :
ENDPROC

PROC(_stratego_u_3)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto k_8;
  k_8 :
  TestFunFC(n_14,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_8;
  l_8 :
  TestFunFC(n_14,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto m_8;
  m_8 :
  TestFunFC(o_14,&&fail,Egetd(0,6));
  Rpush(m_14);
  goto j_8;
  m_14 :
  goto l_14;
  j_8 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  l_14 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_v_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(n_14,(ATerm)ATmakeAppl0(p_14),(ATerm)ATmakeAppl2(n_14,(ATerm)ATmakeAppl2(q_14,Egetd(0,1),(ATerm)ATmakeAppl0(r_14)),(ATerm)ATmakeAppl0(o_14))));
  Ccall(_stratego_f_4);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_w_3)
  TestFunTop(n_14);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_14);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(n_14,Egetd(0,1),(ATerm)ATmakeAppl2(n_14,MakeInt(1),(ATerm)ATmakeAppl0(o_14))));
  Ccall(_stratego_x_3);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_c_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_x_3)
  _ST_add();
ENDPROC

PROC(_stratego_y_3)
  TestFunTop(n_14);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(n_14,Egetd(0,1),(ATerm)ATmakeAppl2(n_14,MakeInt(1),(ATerm)ATmakeAppl0(o_14))));
  Ccall(_stratego_x_3);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(n_14);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_z_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_v_3);
  Tpop();
  Cpush(t_14);
  Tdupl();
  Epushd(1,1);
  Cpush(v_14);
  Epushd(2,1);
  Tset((ATerm)ATmakeAppl2(f_1,(ATerm)ATmakeAppl2(f_1,(ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl1(w_14,ATmakeString("d_0")),(ATerm)ATmakeAppl1(w_14,ATmakeString("a"))),(ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl1(w_14,ATmakeString("c_0")),(ATerm)ATmakeAppl1(w_14,ATmakeString("a"))),(ATerm)ATmakeAppl0(d_1))),(ATerm)ATmakeAppl1(w_14,ATmakeString("b"))),(ATerm)ATmakeAppl2(f_1,(ATerm)ATmakeAppl2(f_1,(ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl1(w_14,ATmakeString("b_0")),(ATerm)ATmakeAppl1(w_14,ATmakeString("a"))),(ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl2(r_2,(ATerm)ATmakeAppl1(w_14,ATmakeString("a_0")),(ATerm)ATmakeAppl1(w_14,ATmakeString("a"))),(ATerm)ATmakeAppl0(d_1))),(ATerm)ATmakeAppl1(w_14,ATmakeString("b"))),(ATerm)ATmakeAppl0(c_1))));
  Ccall(_stratego_t_3);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto u_14;
  v_14 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_v_3);
  Ccall(_stratego_u_3);
  goto x_14;
  u_14 :
  Cpop();
  x_14 :
  Tset(ATmakeString("prop.res"));
  Ccall(_stratego_r_3);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(z_14);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto y_14;
  z_14 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(n_14,(ATerm)ATmakeAppl0(p_14),(ATerm)ATmakeAppl2(n_14,(ATerm)ATmakeAppl2(q_14,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(q_14,Egetd(2,1),(ATerm)ATmakeAppl0(r_14))),(ATerm)ATmakeAppl0(o_14))));
  Ccall(_stratego_f_4);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(n_14,(ATerm)ATmakeAppl0(p_14),(ATerm)ATmakeAppl2(n_14,(ATerm)ATmakeAppl2(q_14,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(q_14,Egetd(2,1),(ATerm)ATmakeAppl0(r_14))),(ATerm)ATmakeAppl0(o_14))));
  Ccall(_stratego_f_4);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_u_3);
  goto a_15;
  y_14 :
  Cpop();
  a_15 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_y_3);
  goto s_14;
  t_14 :
  Ccall(_stratego_w_3);
  goto b_15;
  s_14 :
  Cpop();
  b_15 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_a_4)
  _ST_exit();
ENDPROC

PROC(_stratego_b_4)
  Cpush(d_15);
  TestFunTop(n_14);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_14);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto z_10;
  z_10 :
  TestInt(0,1,0,&&fail);
  Rpush(f_15);
  goto y_10;
  f_15 :
  goto e_15;
  y_10 :
  Return();
  e_15 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_c_4);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_a_4);
  goto c_15;
  d_15 :
  Tset(MakeInt(1));
  Ccall(_stratego_a_4);
  goto g_15;
  c_15 :
  Cpop();
  g_15 :
ENDPROC

PROC(_stratego_c_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_11;
  c_11 :
  TestFunFC(o_14,&&fail,Egetd(0,1));
  Rpush(i_15);
  goto b_11;
  i_15 :
  goto h_15;
  b_11 :
  Return();
  h_15 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_4)
  TestFunTop(n_14);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(n_14,(ATerm)ATmakeAppl0(p_14),(ATerm)ATmakeAppl2(n_14,(ATerm)ATmakeAppl2(q_14,ATmakeString("successes: "),(ATerm)ATmakeAppl2(q_14,Egetd(0,1),(ATerm)ATmakeAppl0(r_14))),(ATerm)ATmakeAppl0(o_14))));
  Ccall(_stratego_f_4);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(n_14);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(n_14,(ATerm)ATmakeAppl0(p_14),(ATerm)ATmakeAppl2(n_14,(ATerm)ATmakeAppl2(q_14,ATmakeString("failures: "),(ATerm)ATmakeAppl2(q_14,Egetd(0,1),(ATerm)ATmakeAppl0(r_14))),(ATerm)ATmakeAppl0(o_14))));
  Ccall(_stratego_f_4);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_c_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_e_4)
  Tset((ATerm)ATmakeAppl2(n_14,MakeInt(0),(ATerm)ATmakeAppl2(n_14,MakeInt(0),(ATerm)ATmakeAppl0(o_14))));
ENDPROC

PROC(_stratego_f_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("prop"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(n_14,(ATerm)ATmakeAppl0(p_14),(ATerm)ATmakeAppl2(n_14,(ATerm)ATmakeAppl2(q_14,ATmakeString("test suite: "),(ATerm)ATmakeAppl2(q_14,Egetd(0,1),(ATerm)ATmakeAppl0(r_14))),(ATerm)ATmakeAppl0(o_14))));
  Ccall(_stratego_f_4);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_e_4);
  Ccall(_stratego_z_3);
  Ccall(_stratego_d_4);
  Ccall(_stratego_b_4);
ENDPROC

DOIT

