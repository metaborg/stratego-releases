#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,w_5);
VARDECL(AFun,v_5);
VARDECL(AFun,c_2);
VARDECL(AFun,b_2);
VARDECL(AFun,n_1);
VARDECL(AFun,r_0);
VARDECL(AFun,p_0);
PROCDECL(_stratego_q_2);
PROCDECL(_stratego_r_2);
PROCDECL(_stratego_s_2);
PROCDECL(_stratego_t_2);
PROCDECL(_stratego_z_2);
PROCDECL(_stratego_a_3);
PROCDECL(_stratego_b_3);
PROCDECL(_stratego_c_3);
PROCDECL(_stratego_d_3);
PROCDECL(_stratego_i_3);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(w_5,ATmakeAFun("False",0,0));
  MOVE(v_5,ATmakeAFun("True",0,0));
  MOVE(c_2,ATmakeAFun("Eq",2,0));
  MOVE(b_2,ATmakeAFun("Impl",2,0));
  MOVE(n_1,ATmakeAFun("Not",1,0));
  MOVE(r_0,ATmakeAFun("Or",2,0));
  MOVE(p_0,ATmakeAFun("And",2,0));
ENDPROC

PROC(_stratego_q_2)
  Rpush(c_0);
  e_3 :
  AllInit();
  d_0 :
  AllNextSon(&&e_0);
  Rpush(f_0);
  goto e_3;
  f_0 :
  goto d_0;
  e_0 :
  AllBuild();
  Cpush(h_0);
  Epushd(0,7);
  MoveTop(0,4);
  goto a_1;
  a_1 :
  TestFunFC(p_0,&&o_0,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,1,0,4,1);
  goto b_1;
  b_1 :
  TestFunFC(r_0,&&q_0,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto c_1;
  c_1 :
  TestFunFC(r_0,&&s_0,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Cpush(u_0);
  Rpush(v_0);
  goto a_0;
  v_0 :
  goto t_0;
  u_0 :
  Rpush(m_1);
  goto b_0;
  m_1 :
  goto w_0;
  t_0 :
  Cpop();
  w_0 :
  goto n_0;
  s_0 :
  Rpush(n_0);
  goto b_0;
  q_0 :
  goto d_1;
  d_1 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(n_0);
  goto a_0;
  o_0 :
  TestFunFC(n_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto e_1;
  e_1 :
  TestFunFC(n_1,&&o_1,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(n_0);
  goto x_0;
  o_1 :
  TestFunFC(p_0,&&p_1,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(n_0);
  goto y_0;
  p_1 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(n_0);
  goto z_0;
  n_0 :
  goto m_0;
  z_0 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("And",App1("Not",Egetd(0,6)),App1("Not",Egetd(0,7))));
  Return();
  m_0 :
  goto l_0;
  y_0 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("Or",App1("Not",Egetd(0,6)),App1("Not",Egetd(0,7))));
  Return();
  l_0 :
  goto k_0;
  x_0 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  k_0 :
  goto j_0;
  b_0 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App2("Or",App2("And",Egetd(0,5),Egetd(0,2)),App2("And",Egetd(0,5),Egetd(0,3))));
  Return();
  j_0 :
  goto i_0;
  a_0 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,1);
  Tset(App2("Or",App2("And",Egetd(0,6),Egetd(0,1)),App2("And",Egetd(0,7),Egetd(0,1))));
  Return();
  i_0 :
  Rpush(q_1);
  goto e_3;
  q_1 :
  Epopd(0,7);
  goto g_0;
  h_0 :
  goto r_1;
  g_0 :
  Cpop();
  r_1 :
  Return();
  c_0 :
ENDPROC

PROC(_stratego_r_2)
  Rpush(s_1);
  a_4 :
  Cpush(u_1);
  Cpush(w_1);
  Epushd(0,3);
  MoveTop(0,1);
  goto h_3;
  h_3 :
  TestFunFC(b_2,&&a_2,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(z_1);
  goto f_3;
  a_2 :
  TestFunFC(c_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(z_1);
  goto g_3;
  z_1 :
  goto y_1;
  g_3 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  Tset(App2("And",App2("Impl",Egetd(0,2),Egetd(0,3)),App2("Impl",Egetd(0,3),Egetd(0,2))));
  Return();
  y_1 :
  goto x_1;
  f_3 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Or",App1("Not",Egetd(0,2)),Egetd(0,3)));
  Return();
  x_1 :
  Epopd(0,3);
  goto v_1;
  w_1 :
  goto d_2;
  v_1 :
  Cpop();
  d_2 :
  goto t_1;
  u_1 :
  Ccontinue(e_2);
  Epushd(0,3);
  MoveTop(0,1);
  goto l_3;
  l_3 :
  TestFunFC(b_2,&&i_2,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(h_2);
  goto j_3;
  i_2 :
  TestFunFC(c_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(h_2);
  goto k_3;
  h_2 :
  goto g_2;
  k_3 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  Tset(App2("And",App2("Impl",Egetd(0,2),Egetd(0,3)),App2("Impl",Egetd(0,3),Egetd(0,2))));
  Return();
  g_2 :
  goto f_2;
  j_3 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Or",App1("Not",Egetd(0,2)),Egetd(0,3)));
  Return();
  f_2 :
  Epopd(0,3);
  goto t_1;
  e_2 :
  goto j_2;
  t_1 :
  Cpop();
  j_2 :
  AllInit();
  k_2 :
  AllNextSon(&&l_2);
  Rpush(m_2);
  goto a_4;
  m_2 :
  goto k_2;
  l_2 :
  AllBuild();
  Return();
  s_1 :
ENDPROC

PROC(_stratego_s_2)
  Epushd(0,3);
  MoveTop(0,1);
  goto u_4;
  u_4 :
  TestFunFC(n_1,&&t_5,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto v_4;
  v_4 :
  TestFunFC(v_5,&&u_5,Egetd(0,2));
  Rpush(s_5);
  goto b_4;
  u_5 :
  TestFunFC(w_5,&&fail,Egetd(0,2));
  Rpush(s_5);
  goto c_4;
  t_5 :
  TestFunFC(p_0,&&x_5,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_4;
  w_4 :
  TestFunFC(v_5,&&z_5,Egetd(0,3));
  goto x_4;
  x_4 :
  TestFunFC(v_5,&&b_6,Egetd(0,2));
  Cpush(d_6);
  Rpush(h_6);
  goto d_4;
  h_6 :
  goto c_6;
  d_6 :
  Rpush(j_6);
  goto e_4;
  j_6 :
  goto i_6;
  c_6 :
  Cpop();
  i_6 :
  goto s_5;
  b_6 :
  TestFunFC(w_5,&&a_6,Egetd(0,2));
  Cpush(m_6);
  Rpush(n_6);
  goto e_4;
  n_6 :
  goto l_6;
  m_6 :
  Rpush(p_6);
  goto f_4;
  p_6 :
  goto o_6;
  l_6 :
  Cpop();
  o_6 :
  goto s_5;
  a_6 :
  Rpush(s_5);
  goto e_4;
  z_5 :
  TestFunFC(w_5,&&y_5,Egetd(0,3));
  goto y_4;
  y_4 :
  TestFunFC(v_5,&&r_6,Egetd(0,2));
  Cpush(u_6);
  Rpush(v_6);
  goto d_4;
  v_6 :
  goto s_6;
  u_6 :
  Rpush(x_6);
  goto g_4;
  x_6 :
  goto w_6;
  s_6 :
  Cpop();
  w_6 :
  goto s_5;
  r_6 :
  TestFunFC(w_5,&&q_6,Egetd(0,2));
  Cpush(z_6);
  Rpush(a_7);
  goto f_4;
  a_7 :
  goto y_6;
  z_6 :
  Rpush(c_7);
  goto g_4;
  c_7 :
  goto b_7;
  y_6 :
  Cpop();
  b_7 :
  goto s_5;
  q_6 :
  Rpush(s_5);
  goto g_4;
  y_5 :
  goto z_4;
  z_4 :
  TestFunFC(v_5,&&d_7,Egetd(0,2));
  Rpush(s_5);
  goto d_4;
  d_7 :
  TestFunFC(w_5,&&fail,Egetd(0,2));
  Rpush(s_5);
  goto f_4;
  x_5 :
  TestFunFC(r_0,&&e_7,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_5;
  a_5 :
  TestFunFC(v_5,&&g_7,Egetd(0,3));
  goto b_5;
  b_5 :
  TestFunFC(v_5,&&i_7,Egetd(0,2));
  Cpush(k_7);
  Rpush(l_7);
  goto h_4;
  l_7 :
  goto j_7;
  k_7 :
  Rpush(n_7);
  goto i_4;
  n_7 :
  goto m_7;
  j_7 :
  Cpop();
  m_7 :
  goto s_5;
  i_7 :
  TestFunFC(w_5,&&h_7,Egetd(0,2));
  Cpush(p_7);
  Rpush(q_7);
  goto i_4;
  q_7 :
  goto o_7;
  p_7 :
  Rpush(s_7);
  goto j_4;
  s_7 :
  goto r_7;
  o_7 :
  Cpop();
  r_7 :
  goto s_5;
  h_7 :
  Rpush(s_5);
  goto i_4;
  g_7 :
  TestFunFC(w_5,&&f_7,Egetd(0,3));
  goto c_5;
  c_5 :
  TestFunFC(v_5,&&u_7,Egetd(0,2));
  Cpush(w_7);
  Rpush(x_7);
  goto h_4;
  x_7 :
  goto v_7;
  w_7 :
  Rpush(z_7);
  goto k_4;
  z_7 :
  goto y_7;
  v_7 :
  Cpop();
  y_7 :
  goto s_5;
  u_7 :
  TestFunFC(w_5,&&t_7,Egetd(0,2));
  Cpush(b_8);
  Rpush(c_8);
  goto j_4;
  c_8 :
  goto a_8;
  b_8 :
  Rpush(e_8);
  goto k_4;
  e_8 :
  goto d_8;
  a_8 :
  Cpop();
  d_8 :
  goto s_5;
  t_7 :
  Rpush(s_5);
  goto k_4;
  f_7 :
  goto d_5;
  d_5 :
  TestFunFC(v_5,&&f_8,Egetd(0,2));
  Rpush(s_5);
  goto h_4;
  f_8 :
  TestFunFC(w_5,&&fail,Egetd(0,2));
  Rpush(s_5);
  goto j_4;
  e_7 :
  TestFunFC(b_2,&&g_8,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto e_5;
  e_5 :
  TestFunFC(v_5,&&i_8,Egetd(0,3));
  goto f_5;
  f_5 :
  TestFunFC(v_5,&&k_8,Egetd(0,2));
  Cpush(m_8);
  Rpush(n_8);
  goto l_4;
  n_8 :
  goto l_8;
  m_8 :
  Rpush(p_8);
  goto m_4;
  p_8 :
  goto o_8;
  l_8 :
  Cpop();
  o_8 :
  goto s_5;
  k_8 :
  TestFunFC(w_5,&&j_8,Egetd(0,2));
  Cpush(r_8);
  Rpush(s_8);
  goto m_4;
  s_8 :
  goto q_8;
  r_8 :
  Rpush(u_8);
  goto n_4;
  u_8 :
  goto t_8;
  q_8 :
  Cpop();
  t_8 :
  goto s_5;
  j_8 :
  Rpush(s_5);
  goto m_4;
  i_8 :
  TestFunFC(w_5,&&h_8,Egetd(0,3));
  goto g_5;
  g_5 :
  TestFunFC(w_5,&&v_8,Egetd(0,2));
  Cpush(x_8);
  Rpush(y_8);
  goto n_4;
  y_8 :
  goto w_8;
  x_8 :
  Rpush(a_9);
  goto o_4;
  a_9 :
  goto z_8;
  w_8 :
  Cpop();
  z_8 :
  goto s_5;
  v_8 :
  TestFunFC(v_5,&&fail,Egetd(0,2));
  Cpush(c_9);
  Rpush(d_9);
  goto l_4;
  d_9 :
  goto b_9;
  c_9 :
  Rpush(f_9);
  goto p_4;
  f_9 :
  goto e_9;
  b_9 :
  Cpop();
  e_9 :
  goto s_5;
  h_8 :
  goto h_5;
  h_5 :
  TestFunFC(v_5,&&g_9,Egetd(0,2));
  Rpush(s_5);
  goto l_4;
  g_9 :
  TestFunFC(w_5,&&fail,Egetd(0,2));
  Rpush(s_5);
  goto n_4;
  g_8 :
  TestFunFC(c_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_5;
  i_5 :
  TestFunFC(w_5,&&i_9,Egetd(0,3));
  goto j_5;
  j_5 :
  TestFunFC(w_5,&&k_9,Egetd(0,2));
  Cpush(m_9);
  Rpush(n_9);
  goto q_4;
  n_9 :
  goto l_9;
  m_9 :
  Rpush(p_9);
  goto r_4;
  p_9 :
  goto o_9;
  l_9 :
  Cpop();
  o_9 :
  goto s_5;
  k_9 :
  TestFunFC(v_5,&&j_9,Egetd(0,2));
  Cpush(r_9);
  Rpush(s_9);
  goto r_4;
  s_9 :
  goto q_9;
  r_9 :
  Rpush(u_9);
  goto s_4;
  u_9 :
  goto t_9;
  q_9 :
  Cpop();
  t_9 :
  goto s_5;
  j_9 :
  Rpush(s_5);
  goto r_4;
  i_9 :
  TestFunFC(v_5,&&h_9,Egetd(0,3));
  goto k_5;
  k_5 :
  TestFunFC(w_5,&&w_9,Egetd(0,2));
  Cpush(y_9);
  Rpush(z_9);
  goto q_4;
  z_9 :
  goto x_9;
  y_9 :
  Rpush(b_10);
  goto t_4;
  b_10 :
  goto a_10;
  x_9 :
  Cpop();
  a_10 :
  goto s_5;
  w_9 :
  TestFunFC(v_5,&&v_9,Egetd(0,2));
  Cpush(d_10);
  Rpush(e_10);
  goto s_4;
  e_10 :
  goto c_10;
  d_10 :
  Rpush(g_10);
  goto t_4;
  g_10 :
  goto f_10;
  c_10 :
  Cpop();
  f_10 :
  goto s_5;
  v_9 :
  Rpush(s_5);
  goto t_4;
  h_9 :
  goto l_5;
  l_5 :
  TestFunFC(w_5,&&h_10,Egetd(0,2));
  Rpush(s_5);
  goto q_4;
  h_10 :
  TestFunFC(v_5,&&fail,Egetd(0,2));
  Rpush(s_5);
  goto s_4;
  s_5 :
  goto r_5;
  t_4 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  r_5 :
  goto q_5;
  s_4 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  q_5 :
  goto p_5;
  r_4 :
  NotNULLd(0,2);
  Tset(App1("Not",Egetd(0,2)));
  Return();
  p_5 :
  goto z_3;
  q_4 :
  NotNULLd(0,3);
  Tset(App1("Not",Egetd(0,3)));
  Return();
  z_3 :
  goto y_3;
  p_4 :
  Tset(App0("False"));
  Return();
  y_3 :
  goto x_3;
  o_4 :
  Tset(App0("True"));
  Return();
  x_3 :
  goto w_3;
  n_4 :
  Tset(App0("True"));
  Return();
  w_3 :
  goto s_3;
  m_4 :
  Tset(App0("True"));
  Return();
  s_3 :
  goto r_3;
  l_4 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  r_3 :
  goto q_3;
  k_4 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  q_3 :
  goto p_3;
  j_4 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  p_3 :
  goto y_2;
  i_4 :
  Tset(App0("True"));
  Return();
  y_2 :
  goto x_2;
  h_4 :
  Tset(App0("True"));
  Return();
  x_2 :
  goto w_2;
  g_4 :
  Tset(App0("False"));
  Return();
  w_2 :
  goto v_2;
  f_4 :
  Tset(App0("False"));
  Return();
  v_2 :
  goto u_2;
  e_4 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  u_2 :
  goto p_2;
  d_4 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  p_2 :
  goto o_2;
  c_4 :
  Tset(App0("True"));
  Return();
  o_2 :
  goto n_2;
  b_4 :
  Tset(App0("False"));
  Return();
  n_2 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_t_2)
  Rpush(i_10);
  e_6 :
  AllInit();
  j_10 :
  AllNextSon(&&k_10);
  Rpush(l_10);
  goto e_6;
  l_10 :
  goto j_10;
  k_10 :
  AllBuild();
  Cpush(n_10);
  Cpush(p_10);
  o_10 :
  Ccall(_stratego_s_2);
  Tduplinv();
  goto o_10;
  p_10 :
  goto m_10;
  n_10 :
  Cpush(s_10);
  r_10 :
  Ccall(_stratego_s_2);
  Tduplinv();
  goto r_10;
  s_10 :
  goto q_10;
  m_10 :
  Cpop();
  q_10 :
  Return();
  i_10 :
ENDPROC

PROC(_stratego_z_2)
  _ST_exit();
ENDPROC

PROC(_stratego_a_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_b_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_a_3);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_c_3)
  Tdupl();
  Ccall(_stratego_b_3);
  Tset(MakeInt(1));
  Ccall(_stratego_z_2);
  Tpop();
ENDPROC

PROC(_stratego_d_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_i_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(u_10);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_i_3);
  Ccall(_stratego_t_2);
  Ccall(_stratego_r_2);
  Ccall(_stratego_q_2);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_d_3);
  Epopd(0,1);
  goto t_10;
  u_10 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_c_3);
  goto v_10;
  t_10 :
  Cpop();
  v_10 :
ENDPROC

DOIT

