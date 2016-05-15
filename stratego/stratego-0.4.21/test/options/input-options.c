#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,v_0);
VARDECL(AFun,d_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_s_3);
PROCDECL(_stratego_t_3);
PROCDECL(_stratego_u_3);
PROCDECL(_stratego_v_3);
PROCDECL(_stratego_w_3);
PROCDECL(_stratego_x_3);
PROCDECL(_stratego_y_3);
PROCDECL(_stratego_z_3);

PROC(_stratego_init_afuns)
  MOVE(v_0,ATmakeAFun("Nil",0,0));
  MOVE(d_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_s_3);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Program",Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(e_0);
  f_4 :
  Cpush(h_0);
  Cpush(j_0);
  Ccall(_stratego_y_3);
  goto i_0;
  j_0 :
  Ccall(_stratego_z_3);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_0);
  goto f_4;
  l_0 :
  AllBuild();
  goto k_0;
  i_0 :
  Cpop();
  k_0 :
  goto f_0;
  h_0 :
  Epushd(1,3);
  MoveTop(1,1);
  goto c_0;
  c_0 :
  TestFunFC(d_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(r_0);
  goto g_4;
  r_0 :
  goto q_0;
  g_4 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",App1("Undefined",Egetd(1,2)),Egetd(1,3)));
  Return();
  q_0 :
  Epopd(1,3);
  goto m_0;
  f_0 :
  Cpop();
  m_0 :
  Return();
  e_0 :
  AllBuild();
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_t_3);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_u_3);
  goto s_0;
  a_0 :
  Cpop();
  s_0 :
ENDPROC

PROC(_stratego_s_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_t_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_u_3)
  Tdupl();
  Ccall(_stratego_v_3);
  Tset(MakeInt(1));
  Ccall(_stratego_x_3);
  Tpop();
ENDPROC

PROC(_stratego_v_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_w_3);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_w_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_x_3)
  _ST_exit();
ENDPROC

PROC(_stratego_y_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_4;
  x_4 :
  TestFunFC(v_0,&&fail,Egetd(0,1));
  Rpush(u_0);
  goto z_4;
  u_0 :
  goto t_0;
  z_4 :
  Return();
  t_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_3)
  Epushd(0,5);
  MoveTop(0,3);
  goto f_8;
  f_8 :
  TestFunFC(d_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_8;
  g_8 :
  TestFunFC(d_0,&&r_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(t_1);
  Rpush(u_1);
  goto y_12;
  u_1 :
  goto s_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto b_13;
  w_1 :
  goto s_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto e_13;
  y_1 :
  goto s_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto h_13;
  a_2 :
  goto s_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto k_13;
  c_2 :
  goto s_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto n_13;
  e_2 :
  goto s_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto r_13;
  g_2 :
  goto s_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto v_13;
  i_2 :
  goto s_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto z_13;
  k_2 :
  goto s_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto d_14;
  m_2 :
  goto s_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto h_14;
  o_2 :
  goto s_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto k_14;
  q_2 :
  goto s_1;
  p_2 :
  Ccontinue(r_2);
  Rpush(s_2);
  goto n_14;
  s_2 :
  goto s_1;
  r_2 :
  Ccontinue(t_2);
  Rpush(u_2);
  goto q_14;
  u_2 :
  goto s_1;
  t_2 :
  Ccontinue(v_2);
  Rpush(w_2);
  goto t_14;
  w_2 :
  goto s_1;
  v_2 :
  Ccontinue(x_2);
  Rpush(y_2);
  goto w_14;
  y_2 :
  goto s_1;
  x_2 :
  Ccontinue(z_2);
  Rpush(a_3);
  goto z_14;
  a_3 :
  goto s_1;
  z_2 :
  Ccontinue(b_3);
  Rpush(c_3);
  goto d_15;
  c_3 :
  goto s_1;
  b_3 :
  Rpush(e_3);
  goto h_15;
  e_3 :
  goto d_3;
  s_1 :
  Cpop();
  d_3 :
  goto q_1;
  r_1 :
  Cpush(g_3);
  Rpush(h_3);
  goto y_12;
  h_3 :
  goto f_3;
  g_3 :
  Ccontinue(i_3);
  Rpush(j_3);
  goto b_13;
  j_3 :
  goto f_3;
  i_3 :
  Ccontinue(k_3);
  Rpush(l_3);
  goto e_13;
  l_3 :
  goto f_3;
  k_3 :
  Ccontinue(m_3);
  Rpush(n_3);
  goto h_13;
  n_3 :
  goto f_3;
  m_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto k_13;
  p_3 :
  goto f_3;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto h_14;
  r_3 :
  goto f_3;
  q_3 :
  Ccontinue(a_4);
  Rpush(b_4);
  goto k_14;
  b_4 :
  goto f_3;
  a_4 :
  Ccontinue(c_4);
  Rpush(d_4);
  goto n_14;
  d_4 :
  goto f_3;
  c_4 :
  Ccontinue(e_4);
  Rpush(h_4);
  goto q_14;
  h_4 :
  goto f_3;
  e_4 :
  Ccontinue(i_4);
  Rpush(j_4);
  goto t_14;
  j_4 :
  goto f_3;
  i_4 :
  Ccontinue(k_4);
  Rpush(l_4);
  goto w_14;
  l_4 :
  goto f_3;
  k_4 :
  Rpush(o_4);
  goto h_15;
  o_4 :
  goto m_4;
  f_3 :
  Cpop();
  m_4 :
  goto q_1;
  q_1 :
  goto p_1;
  h_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_8;
  d_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(q_4);
  goto i_15;
  q_4 :
  goto p_4;
  i_15 :
  Return();
  p_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  p_1 :
  goto o_1;
  d_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_7;
  z_7 :
  TestStr(1,1,"-o",&&fail);
  Rpush(s_4);
  goto e_15;
  s_4 :
  goto r_4;
  e_15 :
  Return();
  r_4 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  o_1 :
  goto n_1;
  z_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_7;
  v_7 :
  TestStr(1,1,"-i",&&fail);
  Rpush(u_4);
  goto a_15;
  u_4 :
  goto t_4;
  a_15 :
  Return();
  t_4 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  n_1 :
  goto m_1;
  w_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_7;
  s_7 :
  TestStr(1,1,"-silent",&&fail);
  Rpush(w_4);
  goto x_14;
  w_4 :
  goto v_4;
  x_14 :
  Return();
  v_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  m_1 :
  goto l_1;
  t_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_7;
  p_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(b_5);
  goto u_14;
  b_5 :
  goto a_5;
  u_14 :
  Return();
  a_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  q_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_7;
  m_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(d_5);
  goto r_14;
  d_5 :
  goto c_5;
  r_14 :
  Return();
  c_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  n_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_7;
  j_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(f_5);
  goto o_14;
  f_5 :
  goto e_5;
  o_14 :
  Return();
  e_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  k_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_7;
  g_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(h_5);
  goto l_14;
  h_5 :
  goto g_5;
  l_14 :
  Return();
  g_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  h_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_7;
  d_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(j_5);
  goto i_14;
  j_5 :
  goto i_5;
  i_14 :
  Return();
  i_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  d_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_6;
  z_6 :
  TestStr(1,1,"--output",&&fail);
  Rpush(l_5);
  goto e_14;
  l_5 :
  goto k_5;
  e_14 :
  Return();
  k_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_1 :
  goto f_1;
  z_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_6;
  v_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(n_5);
  goto a_14;
  n_5 :
  goto m_5;
  a_14 :
  Return();
  m_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_1 :
  goto e_1;
  v_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_6;
  r_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(p_5);
  goto w_13;
  p_5 :
  goto o_5;
  w_13 :
  Return();
  o_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  e_1 :
  goto d_1;
  r_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_6;
  n_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(r_5);
  goto s_13;
  r_5 :
  goto q_5;
  s_13 :
  Return();
  q_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  d_1 :
  goto c_1;
  n_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_6;
  j_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(t_5);
  goto o_13;
  t_5 :
  goto s_5;
  o_13 :
  Return();
  s_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  c_1 :
  goto b_1;
  k_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_6;
  g_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(w_5);
  goto l_13;
  w_5 :
  goto v_5;
  l_13 :
  Return();
  v_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  h_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_6;
  d_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(z_5);
  goto i_13;
  z_5 :
  goto y_5;
  i_13 :
  Return();
  y_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  e_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_6;
  a_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(c_6);
  goto f_13;
  c_6 :
  goto b_6;
  f_13 :
  Return();
  b_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  b_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_5;
  x_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(f_6);
  goto c_13;
  f_6 :
  goto e_6;
  c_13 :
  Return();
  e_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  y_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_5;
  u_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(i_6);
  goto z_12;
  i_6 :
  goto h_6;
  z_12 :
  Return();
  h_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

DOIT

