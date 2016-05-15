#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,x_7);
VARDECL(AFun,e_5);
VARDECL(AFun,w_2);
VARDECL(AFun,q_1);
VARDECL(AFun,o_1);
VARDECL(AFun,n_1);
VARDECL(AFun,l_1);
PROCDECL(_stratego_main);
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

PROC(_stratego_init_afuns)
  MOVE(x_7,ATmakeAFun("Eq",2,0));
  MOVE(e_5,ATmakeAFun("Impl",2,0));
  MOVE(w_2,ATmakeAFun("Or",2,0));
  MOVE(q_1,ATmakeAFun("And",2,0));
  MOVE(o_1,ATmakeAFun("False",0,0));
  MOVE(n_1,ATmakeAFun("True",0,0));
  MOVE(l_1,ATmakeAFun("Not",1,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_w_3);
  Ccall(_stratego_c_4);
  Ccall(_stratego_e_4);
  Ccall(_stratego_f_4);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_x_3);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_y_3);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_w_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_x_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_y_3)
  Tdupl();
  Ccall(_stratego_z_3);
  Tset(MakeInt(1));
  Ccall(_stratego_b_4);
  Tpop();
ENDPROC

PROC(_stratego_z_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_a_4);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_a_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_b_4)
  _ST_exit();
ENDPROC

PROC(_stratego_c_4)
  Rpush(d_0);
  w_1 :
  AllInit();
  e_0 :
  AllNextSon(&&f_0);
  Rpush(g_0);
  goto w_1;
  g_0 :
  goto e_0;
  f_0 :
  AllBuild();
  Cpush(i_0);
  Cpush(k_0);
  j_0 :
  Ccall(_stratego_d_4);
  Tduplinv();
  goto j_0;
  k_0 :
  goto h_0;
  i_0 :
  Cpush(n_0);
  m_0 :
  Ccall(_stratego_d_4);
  Tduplinv();
  goto m_0;
  n_0 :
  goto l_0;
  h_0 :
  Cpop();
  l_0 :
  Return();
  d_0 :
ENDPROC

PROC(_stratego_d_4)
  Epushd(0,3);
  MoveTop(0,1);
  goto b_3;
  b_3 :
  TestFunFC(l_1,&&j_1,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto c_3;
  c_3 :
  TestFunFC(n_1,&&m_1,Egetd(0,2));
  Rpush(i_1);
  goto h_5;
  m_1 :
  TestFunFC(o_1,&&fail,Egetd(0,2));
  Rpush(i_1);
  goto i_5;
  j_1 :
  TestFunFC(q_1,&&p_1,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto d_3;
  d_3 :
  TestFunFC(n_1,&&s_1,Egetd(0,3));
  goto e_3;
  e_3 :
  TestFunFC(n_1,&&u_1,Egetd(0,2));
  Cpush(z_1);
  Rpush(a_2);
  goto j_5;
  a_2 :
  goto v_1;
  z_1 :
  Rpush(c_2);
  goto k_5;
  c_2 :
  goto b_2;
  v_1 :
  Cpop();
  b_2 :
  goto i_1;
  u_1 :
  TestFunFC(o_1,&&t_1,Egetd(0,2));
  Cpush(e_2);
  Rpush(f_2);
  goto k_5;
  f_2 :
  goto d_2;
  e_2 :
  Rpush(h_2);
  goto l_5;
  h_2 :
  goto g_2;
  d_2 :
  Cpop();
  g_2 :
  goto i_1;
  t_1 :
  Rpush(i_1);
  goto k_5;
  s_1 :
  TestFunFC(o_1,&&r_1,Egetd(0,3));
  goto f_3;
  f_3 :
  TestFunFC(n_1,&&j_2,Egetd(0,2));
  Cpush(l_2);
  Rpush(m_2);
  goto j_5;
  m_2 :
  goto k_2;
  l_2 :
  Rpush(o_2);
  goto m_5;
  o_2 :
  goto n_2;
  k_2 :
  Cpop();
  n_2 :
  goto i_1;
  j_2 :
  TestFunFC(o_1,&&i_2,Egetd(0,2));
  Cpush(q_2);
  Rpush(r_2);
  goto l_5;
  r_2 :
  goto p_2;
  q_2 :
  Rpush(t_2);
  goto m_5;
  t_2 :
  goto s_2;
  p_2 :
  Cpop();
  s_2 :
  goto i_1;
  i_2 :
  Rpush(i_1);
  goto m_5;
  r_1 :
  goto g_3;
  g_3 :
  TestFunFC(n_1,&&u_2,Egetd(0,2));
  Rpush(i_1);
  goto j_5;
  u_2 :
  TestFunFC(o_1,&&fail,Egetd(0,2));
  Rpush(i_1);
  goto l_5;
  p_1 :
  TestFunFC(w_2,&&v_2,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_3;
  h_3 :
  TestFunFC(n_1,&&y_2,Egetd(0,3));
  goto i_3;
  i_3 :
  TestFunFC(n_1,&&a_3,Egetd(0,2));
  Cpush(l_3);
  Rpush(m_3);
  goto n_5;
  m_3 :
  goto k_3;
  l_3 :
  Rpush(o_3);
  goto o_5;
  o_3 :
  goto n_3;
  k_3 :
  Cpop();
  n_3 :
  goto i_1;
  a_3 :
  TestFunFC(o_1,&&z_2,Egetd(0,2));
  Cpush(q_3);
  Rpush(r_3);
  goto o_5;
  r_3 :
  goto p_3;
  q_3 :
  Rpush(t_3);
  goto p_5;
  t_3 :
  goto s_3;
  p_3 :
  Cpop();
  s_3 :
  goto i_1;
  z_2 :
  Rpush(i_1);
  goto o_5;
  y_2 :
  TestFunFC(o_1,&&x_2,Egetd(0,3));
  goto j_3;
  j_3 :
  TestFunFC(n_1,&&v_3,Egetd(0,2));
  Cpush(t_4);
  Rpush(u_4);
  goto n_5;
  u_4 :
  goto s_4;
  t_4 :
  Rpush(w_4);
  goto q_5;
  w_4 :
  goto v_4;
  s_4 :
  Cpop();
  v_4 :
  goto i_1;
  v_3 :
  TestFunFC(o_1,&&u_3,Egetd(0,2));
  Cpush(y_4);
  Rpush(z_4);
  goto p_5;
  z_4 :
  goto x_4;
  y_4 :
  Rpush(b_5);
  goto q_5;
  b_5 :
  goto a_5;
  x_4 :
  Cpop();
  a_5 :
  goto i_1;
  u_3 :
  Rpush(i_1);
  goto q_5;
  x_2 :
  goto g_4;
  g_4 :
  TestFunFC(n_1,&&c_5,Egetd(0,2));
  Rpush(i_1);
  goto n_5;
  c_5 :
  TestFunFC(o_1,&&fail,Egetd(0,2));
  Rpush(i_1);
  goto p_5;
  v_2 :
  TestFunFC(e_5,&&d_5,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_4;
  h_4 :
  TestFunFC(n_1,&&g_5,Egetd(0,3));
  goto i_4;
  i_4 :
  TestFunFC(n_1,&&b_6,Egetd(0,2));
  Cpush(e_6);
  Rpush(j_6);
  goto r_5;
  j_6 :
  goto d_6;
  e_6 :
  Rpush(l_6);
  goto s_5;
  l_6 :
  goto k_6;
  d_6 :
  Cpop();
  k_6 :
  goto i_1;
  b_6 :
  TestFunFC(o_1,&&a_6,Egetd(0,2));
  Cpush(q_6);
  Rpush(r_6);
  goto s_5;
  r_6 :
  goto m_6;
  q_6 :
  Rpush(t_6);
  goto t_5;
  t_6 :
  goto s_6;
  m_6 :
  Cpop();
  s_6 :
  goto i_1;
  a_6 :
  Rpush(i_1);
  goto s_5;
  g_5 :
  TestFunFC(o_1,&&f_5,Egetd(0,3));
  goto j_4;
  j_4 :
  TestFunFC(o_1,&&z_6,Egetd(0,2));
  Cpush(b_7);
  Rpush(c_7);
  goto t_5;
  c_7 :
  goto a_7;
  b_7 :
  Rpush(q_7);
  goto u_5;
  q_7 :
  goto d_7;
  a_7 :
  Cpop();
  d_7 :
  goto i_1;
  z_6 :
  TestFunFC(n_1,&&fail,Egetd(0,2));
  Cpush(s_7);
  Rpush(t_7);
  goto r_5;
  t_7 :
  goto r_7;
  s_7 :
  Rpush(v_7);
  goto v_5;
  v_7 :
  goto u_7;
  r_7 :
  Cpop();
  u_7 :
  goto i_1;
  f_5 :
  goto k_4;
  k_4 :
  TestFunFC(n_1,&&w_7,Egetd(0,2));
  Rpush(i_1);
  goto r_5;
  w_7 :
  TestFunFC(o_1,&&fail,Egetd(0,2));
  Rpush(i_1);
  goto t_5;
  d_5 :
  TestFunFC(x_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto l_4;
  l_4 :
  TestFunFC(o_1,&&z_7,Egetd(0,3));
  goto m_4;
  m_4 :
  TestFunFC(o_1,&&h_8,Egetd(0,2));
  Cpush(j_8);
  Rpush(k_8);
  goto w_5;
  k_8 :
  goto i_8;
  j_8 :
  Rpush(m_8);
  goto x_5;
  m_8 :
  goto l_8;
  i_8 :
  Cpop();
  l_8 :
  goto i_1;
  h_8 :
  TestFunFC(n_1,&&a_8,Egetd(0,2));
  Cpush(o_8);
  Rpush(p_8);
  goto x_5;
  p_8 :
  goto n_8;
  o_8 :
  Rpush(r_8);
  goto y_5;
  r_8 :
  goto q_8;
  n_8 :
  Cpop();
  q_8 :
  goto i_1;
  a_8 :
  Rpush(i_1);
  goto x_5;
  z_7 :
  TestFunFC(n_1,&&y_7,Egetd(0,3));
  goto n_4;
  n_4 :
  TestFunFC(o_1,&&t_8,Egetd(0,2));
  Cpush(v_8);
  Rpush(w_8);
  goto w_5;
  w_8 :
  goto u_8;
  v_8 :
  Rpush(y_8);
  goto z_5;
  y_8 :
  goto x_8;
  u_8 :
  Cpop();
  x_8 :
  goto i_1;
  t_8 :
  TestFunFC(n_1,&&s_8,Egetd(0,2));
  Cpush(a_9);
  Rpush(b_9);
  goto y_5;
  b_9 :
  goto z_8;
  a_9 :
  Rpush(d_9);
  goto z_5;
  d_9 :
  goto c_9;
  z_8 :
  Cpop();
  c_9 :
  goto i_1;
  s_8 :
  Rpush(i_1);
  goto z_5;
  y_7 :
  goto o_4;
  o_4 :
  TestFunFC(o_1,&&e_9,Egetd(0,2));
  Rpush(i_1);
  goto w_5;
  e_9 :
  TestFunFC(n_1,&&fail,Egetd(0,2));
  Rpush(i_1);
  goto y_5;
  i_1 :
  goto h_1;
  z_5 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  h_1 :
  goto g_1;
  y_5 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  g_1 :
  goto f_1;
  x_5 :
  NotNULLd(0,2);
  Tset(App1("Not",Egetd(0,2)));
  Return();
  f_1 :
  goto e_1;
  w_5 :
  NotNULLd(0,3);
  Tset(App1("Not",Egetd(0,3)));
  Return();
  e_1 :
  goto d_1;
  v_5 :
  Tset(App0("False"));
  Return();
  d_1 :
  goto c_1;
  u_5 :
  Tset(App0("True"));
  Return();
  c_1 :
  goto b_1;
  t_5 :
  Tset(App0("True"));
  Return();
  b_1 :
  goto a_1;
  s_5 :
  Tset(App0("True"));
  Return();
  a_1 :
  goto z_0;
  r_5 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  z_0 :
  goto x_0;
  q_5 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  x_0 :
  goto w_0;
  p_5 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  w_0 :
  goto v_0;
  o_5 :
  Tset(App0("True"));
  Return();
  v_0 :
  goto u_0;
  n_5 :
  Tset(App0("True"));
  Return();
  u_0 :
  goto t_0;
  m_5 :
  Tset(App0("False"));
  Return();
  t_0 :
  goto s_0;
  l_5 :
  Tset(App0("False"));
  Return();
  s_0 :
  goto r_0;
  k_5 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  r_0 :
  goto q_0;
  j_5 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  q_0 :
  goto p_0;
  i_5 :
  Tset(App0("True"));
  Return();
  p_0 :
  goto o_0;
  h_5 :
  Tset(App0("False"));
  Return();
  o_0 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_e_4)
  Rpush(f_9);
  u_6 :
  Cpush(h_9);
  Cpush(j_9);
  Epushd(0,3);
  MoveTop(0,1);
  goto c_6;
  c_6 :
  TestFunFC(e_5,&&n_9,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_9);
  goto v_6;
  n_9 :
  TestFunFC(x_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_9);
  goto w_6;
  m_9 :
  goto l_9;
  w_6 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  Tset(App2("And",App2("Impl",Egetd(0,2),Egetd(0,3)),App2("Impl",Egetd(0,3),Egetd(0,2))));
  Return();
  l_9 :
  goto k_9;
  v_6 :
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
  goto f_6;
  f_6 :
  TestFunFC(e_5,&&t_9,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(s_9);
  goto x_6;
  t_9 :
  TestFunFC(x_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(s_9);
  goto y_6;
  s_9 :
  goto r_9;
  y_6 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  Tset(App2("And",App2("Impl",Egetd(0,2),Egetd(0,3)),App2("Impl",Egetd(0,3),Egetd(0,2))));
  Return();
  r_9 :
  goto q_9;
  x_6 :
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
  goto u_6;
  x_9 :
  goto v_9;
  w_9 :
  AllBuild();
  Return();
  f_9 :
ENDPROC

PROC(_stratego_f_4)
  Rpush(y_9);
  b_8 :
  AllInit();
  z_9 :
  AllNextSon(&&a_10);
  Rpush(b_10);
  goto b_8;
  b_10 :
  goto z_9;
  a_10 :
  AllBuild();
  Cpush(d_10);
  Epushd(0,7);
  MoveTop(0,4);
  goto e_7;
  e_7 :
  TestFunFC(q_1,&&k_10,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,1,0,4,1);
  goto f_7;
  f_7 :
  TestFunFC(w_2,&&l_10,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto g_7;
  g_7 :
  TestFunFC(w_2,&&m_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Cpush(o_10);
  Rpush(p_10);
  goto c_8;
  p_10 :
  goto n_10;
  o_10 :
  Rpush(r_10);
  goto d_8;
  r_10 :
  goto q_10;
  n_10 :
  Cpop();
  q_10 :
  goto j_10;
  m_10 :
  Rpush(j_10);
  goto d_8;
  l_10 :
  goto h_7;
  h_7 :
  TestFunFC(w_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(j_10);
  goto c_8;
  k_10 :
  TestFunFC(l_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto i_7;
  i_7 :
  TestFunFC(l_1,&&s_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(j_10);
  goto e_8;
  s_10 :
  TestFunFC(q_1,&&t_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(j_10);
  goto f_8;
  t_10 :
  TestFunFC(w_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(j_10);
  goto g_8;
  j_10 :
  goto i_10;
  g_8 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("And",App1("Not",Egetd(0,6)),App1("Not",Egetd(0,7))));
  Return();
  i_10 :
  goto h_10;
  f_8 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("Or",App1("Not",Egetd(0,6)),App1("Not",Egetd(0,7))));
  Return();
  h_10 :
  goto g_10;
  e_8 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  g_10 :
  goto f_10;
  d_8 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App2("Or",App2("And",Egetd(0,5),Egetd(0,2)),App2("And",Egetd(0,5),Egetd(0,3))));
  Return();
  f_10 :
  goto e_10;
  c_8 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,1);
  Tset(App2("Or",App2("And",Egetd(0,6),Egetd(0,1)),App2("And",Egetd(0,7),Egetd(0,1))));
  Return();
  e_10 :
  Rpush(u_10);
  goto b_8;
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
