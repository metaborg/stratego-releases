#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,d_8);
VARDECL(AFun,c_7);
VARDECL(AFun,u_4);
VARDECL(AFun,d_2);
VARDECL(AFun,p_1);
VARDECL(AFun,o_1);
VARDECL(AFun,m_1);
PROCDECL(_stratego_main);
PROCDECL(_stratego_y_3);
PROCDECL(_stratego_z_3);
PROCDECL(_stratego_a_4);
PROCDECL(_stratego_b_4);
PROCDECL(_stratego_c_4);
PROCDECL(_stratego_d_4);
PROCDECL(_stratego_e_4);
PROCDECL(_stratego_f_4);
PROCDECL(_stratego_g_4);
PROCDECL(_stratego_h_4);

PROC(_stratego_init_afuns)
  MOVE(d_8,ATmakeAFun("Eq",2,0));
  MOVE(c_7,ATmakeAFun("Impl",2,0));
  MOVE(u_4,ATmakeAFun("Or",2,0));
  MOVE(d_2,ATmakeAFun("And",2,0));
  MOVE(p_1,ATmakeAFun("False",0,0));
  MOVE(o_1,ATmakeAFun("True",0,0));
  MOVE(m_1,ATmakeAFun("Not",1,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_y_3);
  Ccall(_stratego_e_4);
  Ccall(_stratego_g_4);
  Ccall(_stratego_h_4);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_z_3);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_a_4);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_y_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_z_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_a_4)
  Tdupl();
  Ccall(_stratego_b_4);
  Tset(MakeInt(1));
  Ccall(_stratego_d_4);
  Tpop();
ENDPROC

PROC(_stratego_b_4)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_c_4);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_c_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_d_4)
  _ST_exit();
ENDPROC

PROC(_stratego_e_4)
  Rpush(d_0);
  l_1 :
  AllInit();
  e_0 :
  AllNextSon(&&f_0);
  Rpush(g_0);
  goto l_1;
  g_0 :
  goto e_0;
  f_0 :
  AllBuild();
  Cpush(i_0);
  Cpush(l_0);
  k_0 :
  Ccall(_stratego_f_4);
  Tduplinv();
  goto k_0;
  l_0 :
  goto h_0;
  i_0 :
  Cpush(o_0);
  n_0 :
  Ccall(_stratego_f_4);
  Tduplinv();
  goto n_0;
  o_0 :
  goto m_0;
  h_0 :
  Cpop();
  m_0 :
  Return();
  d_0 :
ENDPROC

PROC(_stratego_f_4)
  Epushd(0,3);
  MoveTop(0,1);
  goto v_2;
  v_2 :
  TestFunFC(m_1,&&k_1,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto w_2;
  w_2 :
  TestFunFC(o_1,&&n_1,Egetd(0,2));
  Rpush(j_1);
  goto t_1;
  n_1 :
  TestFunFC(p_1,&&fail,Egetd(0,2));
  Rpush(j_1);
  goto u_1;
  k_1 :
  TestFunFC(d_2,&&q_1,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_2;
  x_2 :
  TestFunFC(o_1,&&f_2,Egetd(0,3));
  goto y_2;
  y_2 :
  TestFunFC(o_1,&&h_2,Egetd(0,2));
  Cpush(p_2);
  Rpush(q_2);
  goto v_1;
  q_2 :
  goto o_2;
  p_2 :
  Rpush(m_3);
  goto w_1;
  m_3 :
  goto r_2;
  o_2 :
  Cpop();
  r_2 :
  goto j_1;
  h_2 :
  TestFunFC(p_1,&&g_2,Egetd(0,2));
  Cpush(o_3);
  Rpush(p_3);
  goto w_1;
  p_3 :
  goto n_3;
  o_3 :
  Rpush(r_3);
  goto x_1;
  r_3 :
  goto q_3;
  n_3 :
  Cpop();
  q_3 :
  goto j_1;
  g_2 :
  Rpush(j_1);
  goto w_1;
  f_2 :
  TestFunFC(p_1,&&e_2,Egetd(0,3));
  goto z_2;
  z_2 :
  TestFunFC(o_1,&&t_3,Egetd(0,2));
  Cpush(v_3);
  Rpush(w_3);
  goto v_1;
  w_3 :
  goto u_3;
  v_3 :
  Rpush(m_4);
  goto y_1;
  m_4 :
  goto x_3;
  u_3 :
  Cpop();
  x_3 :
  goto j_1;
  t_3 :
  TestFunFC(p_1,&&s_3,Egetd(0,2));
  Cpush(o_4);
  Rpush(p_4);
  goto x_1;
  p_4 :
  goto n_4;
  o_4 :
  Rpush(r_4);
  goto y_1;
  r_4 :
  goto q_4;
  n_4 :
  Cpop();
  q_4 :
  goto j_1;
  s_3 :
  Rpush(j_1);
  goto y_1;
  e_2 :
  goto a_3;
  a_3 :
  TestFunFC(o_1,&&s_4,Egetd(0,2));
  Rpush(j_1);
  goto v_1;
  s_4 :
  TestFunFC(p_1,&&fail,Egetd(0,2));
  Rpush(j_1);
  goto x_1;
  q_1 :
  TestFunFC(u_4,&&t_4,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_3;
  b_3 :
  TestFunFC(o_1,&&w_4,Egetd(0,3));
  goto c_3;
  c_3 :
  TestFunFC(o_1,&&y_4,Egetd(0,2));
  Cpush(a_5);
  Rpush(k_5);
  goto z_1;
  k_5 :
  goto z_4;
  a_5 :
  Rpush(m_5);
  goto a_2;
  m_5 :
  goto l_5;
  z_4 :
  Cpop();
  l_5 :
  goto j_1;
  y_4 :
  TestFunFC(p_1,&&x_4,Egetd(0,2));
  Cpush(r_5);
  Rpush(s_5);
  goto a_2;
  s_5 :
  goto n_5;
  r_5 :
  Rpush(u_5);
  goto b_2;
  u_5 :
  goto t_5;
  n_5 :
  Cpop();
  t_5 :
  goto j_1;
  x_4 :
  Rpush(j_1);
  goto a_2;
  w_4 :
  TestFunFC(p_1,&&v_4,Egetd(0,3));
  goto d_3;
  d_3 :
  TestFunFC(o_1,&&o_6,Egetd(0,2));
  Cpush(q_6);
  Rpush(r_6);
  goto z_1;
  r_6 :
  goto p_6;
  q_6 :
  Rpush(t_6);
  goto c_2;
  t_6 :
  goto s_6;
  p_6 :
  Cpop();
  s_6 :
  goto j_1;
  o_6 :
  TestFunFC(p_1,&&n_6,Egetd(0,2));
  Cpush(v_6);
  Rpush(w_6);
  goto b_2;
  w_6 :
  goto u_6;
  v_6 :
  Rpush(z_6);
  goto c_2;
  z_6 :
  goto x_6;
  u_6 :
  Cpop();
  x_6 :
  goto j_1;
  n_6 :
  Rpush(j_1);
  goto c_2;
  v_4 :
  goto e_3;
  e_3 :
  TestFunFC(o_1,&&a_7,Egetd(0,2));
  Rpush(j_1);
  goto z_1;
  a_7 :
  TestFunFC(p_1,&&fail,Egetd(0,2));
  Rpush(j_1);
  goto b_2;
  t_4 :
  TestFunFC(c_7,&&b_7,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_3;
  f_3 :
  TestFunFC(o_1,&&e_7,Egetd(0,3));
  goto g_3;
  g_3 :
  TestFunFC(o_1,&&g_7,Egetd(0,2));
  Cpush(i_7);
  Rpush(j_7);
  goto i_2;
  j_7 :
  goto h_7;
  i_7 :
  Rpush(l_7);
  goto j_2;
  l_7 :
  goto k_7;
  h_7 :
  Cpop();
  k_7 :
  goto j_1;
  g_7 :
  TestFunFC(p_1,&&f_7,Egetd(0,2));
  Cpush(n_7);
  Rpush(o_7);
  goto j_2;
  o_7 :
  goto m_7;
  n_7 :
  Rpush(q_7);
  goto k_2;
  q_7 :
  goto p_7;
  m_7 :
  Cpop();
  p_7 :
  goto j_1;
  f_7 :
  Rpush(j_1);
  goto j_2;
  e_7 :
  TestFunFC(p_1,&&d_7,Egetd(0,3));
  goto h_3;
  h_3 :
  TestFunFC(p_1,&&r_7,Egetd(0,2));
  Cpush(t_7);
  Rpush(u_7);
  goto k_2;
  u_7 :
  goto s_7;
  t_7 :
  Rpush(w_7);
  goto l_2;
  w_7 :
  goto v_7;
  s_7 :
  Cpop();
  v_7 :
  goto j_1;
  r_7 :
  TestFunFC(o_1,&&fail,Egetd(0,2));
  Cpush(y_7);
  Rpush(z_7);
  goto i_2;
  z_7 :
  goto x_7;
  y_7 :
  Rpush(b_8);
  goto m_2;
  b_8 :
  goto a_8;
  x_7 :
  Cpop();
  a_8 :
  goto j_1;
  d_7 :
  goto i_3;
  i_3 :
  TestFunFC(o_1,&&c_8,Egetd(0,2));
  Rpush(j_1);
  goto i_2;
  c_8 :
  TestFunFC(p_1,&&fail,Egetd(0,2));
  Rpush(j_1);
  goto k_2;
  b_7 :
  TestFunFC(d_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_3;
  j_3 :
  TestFunFC(p_1,&&f_8,Egetd(0,3));
  goto k_3;
  k_3 :
  TestFunFC(p_1,&&h_8,Egetd(0,2));
  Cpush(j_8);
  Rpush(k_8);
  goto n_2;
  k_8 :
  goto i_8;
  j_8 :
  Rpush(m_8);
  goto s_2;
  m_8 :
  goto l_8;
  i_8 :
  Cpop();
  l_8 :
  goto j_1;
  h_8 :
  TestFunFC(o_1,&&g_8,Egetd(0,2));
  Cpush(o_8);
  Rpush(p_8);
  goto s_2;
  p_8 :
  goto n_8;
  o_8 :
  Rpush(r_8);
  goto t_2;
  r_8 :
  goto q_8;
  n_8 :
  Cpop();
  q_8 :
  goto j_1;
  g_8 :
  Rpush(j_1);
  goto s_2;
  f_8 :
  TestFunFC(o_1,&&e_8,Egetd(0,3));
  goto l_3;
  l_3 :
  TestFunFC(p_1,&&t_8,Egetd(0,2));
  Cpush(v_8);
  Rpush(w_8);
  goto n_2;
  w_8 :
  goto u_8;
  v_8 :
  Rpush(y_8);
  goto u_2;
  y_8 :
  goto x_8;
  u_8 :
  Cpop();
  x_8 :
  goto j_1;
  t_8 :
  TestFunFC(o_1,&&s_8,Egetd(0,2));
  Cpush(a_9);
  Rpush(b_9);
  goto t_2;
  b_9 :
  goto z_8;
  a_9 :
  Rpush(d_9);
  goto u_2;
  d_9 :
  goto c_9;
  z_8 :
  Cpop();
  c_9 :
  goto j_1;
  s_8 :
  Rpush(j_1);
  goto u_2;
  e_8 :
  goto i_4;
  i_4 :
  TestFunFC(p_1,&&e_9,Egetd(0,2));
  Rpush(j_1);
  goto n_2;
  e_9 :
  TestFunFC(o_1,&&fail,Egetd(0,2));
  Rpush(j_1);
  goto t_2;
  j_1 :
  goto i_1;
  u_2 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  i_1 :
  goto h_1;
  t_2 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  h_1 :
  goto g_1;
  s_2 :
  NotNULLd(0,2);
  Tset(App1("Not",Egetd(0,2)));
  Return();
  g_1 :
  goto e_1;
  n_2 :
  NotNULLd(0,3);
  Tset(App1("Not",Egetd(0,3)));
  Return();
  e_1 :
  goto d_1;
  m_2 :
  Tset(App0("False"));
  Return();
  d_1 :
  goto c_1;
  l_2 :
  Tset(App0("True"));
  Return();
  c_1 :
  goto b_1;
  k_2 :
  Tset(App0("True"));
  Return();
  b_1 :
  goto a_1;
  j_2 :
  Tset(App0("True"));
  Return();
  a_1 :
  goto z_0;
  i_2 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  z_0 :
  goto y_0;
  c_2 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  y_0 :
  goto x_0;
  b_2 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  x_0 :
  goto w_0;
  a_2 :
  Tset(App0("True"));
  Return();
  w_0 :
  goto v_0;
  z_1 :
  Tset(App0("True"));
  Return();
  v_0 :
  goto u_0;
  y_1 :
  Tset(App0("False"));
  Return();
  u_0 :
  goto t_0;
  x_1 :
  Tset(App0("False"));
  Return();
  t_0 :
  goto s_0;
  w_1 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  s_0 :
  goto r_0;
  v_1 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  r_0 :
  goto q_0;
  u_1 :
  Tset(App0("True"));
  Return();
  q_0 :
  goto p_0;
  t_1 :
  Tset(App0("False"));
  Return();
  p_0 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_g_4)
  Rpush(f_9);
  v_5 :
  Cpush(h_9);
  Cpush(j_9);
  Epushd(0,3);
  MoveTop(0,1);
  goto d_5;
  d_5 :
  TestFunFC(c_7,&&n_9,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_9);
  goto b_5;
  n_9 :
  TestFunFC(d_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_9);
  goto c_5;
  m_9 :
  goto l_9;
  c_5 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  Tset(App2("And",App2("Impl",Egetd(0,2),Egetd(0,3)),App2("Impl",Egetd(0,3),Egetd(0,2))));
  Return();
  l_9 :
  goto k_9;
  b_5 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Or",App1("Not",Egetd(0,2)),Egetd(0,3)));
  Return();
  k_9 :
  Epopd(0,3);
  goto i_9;
  j_9 :
  goto o_9;
  i_9 :
  Cpop();
  o_9 :
  goto g_9;
  h_9 :
  Ccontinue(p_9);
  Epushd(0,3);
  MoveTop(0,1);
  goto g_5;
  g_5 :
  TestFunFC(c_7,&&t_9,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(s_9);
  goto e_5;
  t_9 :
  TestFunFC(d_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(s_9);
  goto f_5;
  s_9 :
  goto r_9;
  f_5 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  Tset(App2("And",App2("Impl",Egetd(0,2),Egetd(0,3)),App2("Impl",Egetd(0,3),Egetd(0,2))));
  Return();
  r_9 :
  goto q_9;
  e_5 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Or",App1("Not",Egetd(0,2)),Egetd(0,3)));
  Return();
  q_9 :
  Epopd(0,3);
  goto g_9;
  p_9 :
  goto u_9;
  g_9 :
  Cpop();
  u_9 :
  AllInit();
  v_9 :
  AllNextSon(&&w_9);
  Rpush(x_9);
  goto v_5;
  x_9 :
  goto v_9;
  w_9 :
  AllBuild();
  Return();
  f_9 :
ENDPROC

PROC(_stratego_h_4)
  Rpush(y_9);
  y_6 :
  AllInit();
  z_9 :
  AllNextSon(&&a_10);
  Rpush(b_10);
  goto y_6;
  b_10 :
  goto z_9;
  a_10 :
  AllBuild();
  Cpush(d_10);
  Epushd(0,7);
  MoveTop(0,4);
  goto b_6;
  b_6 :
  TestFunFC(d_2,&&k_10,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,1,0,4,1);
  goto c_6;
  c_6 :
  TestFunFC(u_4,&&l_10,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto d_6;
  d_6 :
  TestFunFC(u_4,&&m_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Cpush(o_10);
  Rpush(p_10);
  goto w_5;
  p_10 :
  goto n_10;
  o_10 :
  Rpush(r_10);
  goto x_5;
  r_10 :
  goto q_10;
  n_10 :
  Cpop();
  q_10 :
  goto j_10;
  m_10 :
  Rpush(j_10);
  goto x_5;
  l_10 :
  goto e_6;
  e_6 :
  TestFunFC(u_4,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(j_10);
  goto w_5;
  k_10 :
  TestFunFC(m_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto f_6;
  f_6 :
  TestFunFC(m_1,&&s_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(j_10);
  goto y_5;
  s_10 :
  TestFunFC(d_2,&&t_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(j_10);
  goto z_5;
  t_10 :
  TestFunFC(u_4,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(j_10);
  goto a_6;
  j_10 :
  goto i_10;
  a_6 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("And",App1("Not",Egetd(0,6)),App1("Not",Egetd(0,7))));
  Return();
  i_10 :
  goto h_10;
  z_5 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("Or",App1("Not",Egetd(0,6)),App1("Not",Egetd(0,7))));
  Return();
  h_10 :
  goto g_10;
  y_5 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  g_10 :
  goto f_10;
  x_5 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App2("Or",App2("And",Egetd(0,5),Egetd(0,2)),App2("And",Egetd(0,5),Egetd(0,3))));
  Return();
  f_10 :
  goto e_10;
  w_5 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,1);
  Tset(App2("Or",App2("And",Egetd(0,6),Egetd(0,1)),App2("And",Egetd(0,7),Egetd(0,1))));
  Return();
  e_10 :
  Rpush(u_10);
  goto y_6;
  u_10 :
  Epopd(0,7);
  goto c_10;
  d_10 :
  goto v_10;
  c_10 :
  Cpop();
  v_10 :
  Return();
  y_9 :
ENDPROC

DOIT

