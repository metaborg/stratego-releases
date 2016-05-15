#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,s_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_m_3);
PROCDECL(_stratego_n_3);
PROCDECL(_stratego_o_3);
PROCDECL(_stratego_p_3);
PROCDECL(_stratego_q_3);
PROCDECL(_stratego_r_3);
PROCDECL(_stratego_s_3);
PROCDECL(_stratego_t_3);

PROC(_stratego_init_afuns)
  MOVE(s_0,ATmakeAFun("Nil",0,0));
  MOVE(c_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_m_3);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Program",Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(d_0);
  f_4 :
  Cpush(f_0);
  Cpush(h_0);
  Ccall(_stratego_s_3);
  goto g_0;
  h_0 :
  Ccall(_stratego_t_3);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_0);
  goto f_4;
  j_0 :
  AllBuild();
  goto i_0;
  g_0 :
  Cpop();
  i_0 :
  goto e_0;
  f_0 :
  Epushd(1,3);
  MoveTop(1,1);
  goto n_0;
  n_0 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(m_0);
  goto g_4;
  m_0 :
  goto l_0;
  g_4 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",App1("Undefined",Egetd(1,2)),Egetd(1,3)));
  Return();
  l_0 :
  Epopd(1,3);
  goto k_0;
  e_0 :
  Cpop();
  k_0 :
  Return();
  d_0 :
  AllBuild();
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_n_3);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_o_3);
  goto o_0;
  a_0 :
  Cpop();
  o_0 :
ENDPROC

PROC(_stratego_m_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_n_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_o_3)
  Tdupl();
  Ccall(_stratego_p_3);
  Tset(MakeInt(1));
  Ccall(_stratego_r_3);
  Tpop();
ENDPROC

PROC(_stratego_p_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_q_3);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_q_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_r_3)
  _ST_exit();
ENDPROC

PROC(_stratego_s_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_4;
  x_4 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(q_0);
  goto z_4;
  q_0 :
  goto p_0;
  z_4 :
  Return();
  p_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_3)
  Epushd(0,5);
  MoveTop(0,3);
  goto f_8;
  f_8 :
  TestFunFC(c_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_8;
  g_8 :
  TestFunFC(c_0,&&o_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(q_1);
  Rpush(r_1);
  goto y_12;
  r_1 :
  goto p_1;
  q_1 :
  Ccontinue(s_1);
  Rpush(t_1);
  goto b_13;
  t_1 :
  goto p_1;
  s_1 :
  Ccontinue(u_1);
  Rpush(v_1);
  goto e_13;
  v_1 :
  goto p_1;
  u_1 :
  Ccontinue(w_1);
  Rpush(x_1);
  goto h_13;
  x_1 :
  goto p_1;
  w_1 :
  Ccontinue(y_1);
  Rpush(z_1);
  goto k_13;
  z_1 :
  goto p_1;
  y_1 :
  Ccontinue(a_2);
  Rpush(b_2);
  goto n_13;
  b_2 :
  goto p_1;
  a_2 :
  Ccontinue(c_2);
  Rpush(d_2);
  goto r_13;
  d_2 :
  goto p_1;
  c_2 :
  Ccontinue(e_2);
  Rpush(f_2);
  goto v_13;
  f_2 :
  goto p_1;
  e_2 :
  Ccontinue(g_2);
  Rpush(h_2);
  goto z_13;
  h_2 :
  goto p_1;
  g_2 :
  Ccontinue(i_2);
  Rpush(j_2);
  goto d_14;
  j_2 :
  goto p_1;
  i_2 :
  Ccontinue(k_2);
  Rpush(l_2);
  goto h_14;
  l_2 :
  goto p_1;
  k_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto k_14;
  n_2 :
  goto p_1;
  m_2 :
  Ccontinue(o_2);
  Rpush(p_2);
  goto n_14;
  p_2 :
  goto p_1;
  o_2 :
  Ccontinue(q_2);
  Rpush(r_2);
  goto q_14;
  r_2 :
  goto p_1;
  q_2 :
  Ccontinue(s_2);
  Rpush(t_2);
  goto t_14;
  t_2 :
  goto p_1;
  s_2 :
  Ccontinue(u_2);
  Rpush(v_2);
  goto w_14;
  v_2 :
  goto p_1;
  u_2 :
  Ccontinue(w_2);
  Rpush(x_2);
  goto z_14;
  x_2 :
  goto p_1;
  w_2 :
  Ccontinue(y_2);
  Rpush(z_2);
  goto d_15;
  z_2 :
  goto p_1;
  y_2 :
  Rpush(b_3);
  goto h_15;
  b_3 :
  goto a_3;
  p_1 :
  Cpop();
  a_3 :
  goto n_1;
  o_1 :
  Cpush(d_3);
  Rpush(e_3);
  goto y_12;
  e_3 :
  goto c_3;
  d_3 :
  Ccontinue(f_3);
  Rpush(g_3);
  goto b_13;
  g_3 :
  goto c_3;
  f_3 :
  Ccontinue(h_3);
  Rpush(i_3);
  goto e_13;
  i_3 :
  goto c_3;
  h_3 :
  Ccontinue(j_3);
  Rpush(k_3);
  goto h_13;
  k_3 :
  goto c_3;
  j_3 :
  Ccontinue(l_3);
  Rpush(w_3);
  goto k_13;
  w_3 :
  goto c_3;
  l_3 :
  Ccontinue(x_3);
  Rpush(z_3);
  goto h_14;
  z_3 :
  goto c_3;
  x_3 :
  Ccontinue(a_4);
  Rpush(b_4);
  goto k_14;
  b_4 :
  goto c_3;
  a_4 :
  Ccontinue(c_4);
  Rpush(d_4);
  goto n_14;
  d_4 :
  goto c_3;
  c_4 :
  Ccontinue(e_4);
  Rpush(h_4);
  goto q_14;
  h_4 :
  goto c_3;
  e_4 :
  Ccontinue(i_4);
  Rpush(j_4);
  goto t_14;
  j_4 :
  goto c_3;
  i_4 :
  Ccontinue(k_4);
  Rpush(l_4);
  goto w_14;
  l_4 :
  goto c_3;
  k_4 :
  Rpush(o_4);
  goto h_15;
  o_4 :
  goto m_4;
  c_3 :
  Cpop();
  m_4 :
  goto n_1;
  n_1 :
  goto m_1;
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
  m_1 :
  goto l_1;
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
  l_1 :
  goto k_1;
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
  k_1 :
  goto j_1;
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
  j_1 :
  goto i_1;
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
  i_1 :
  goto h_1;
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
  h_1 :
  goto g_1;
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
  g_1 :
  goto f_1;
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
  f_1 :
  goto e_1;
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
  e_1 :
  goto d_1;
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
  d_1 :
  goto c_1;
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
  c_1 :
  goto b_1;
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
  b_1 :
  goto a_1;
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
  a_1 :
  goto z_0;
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
  z_0 :
  goto y_0;
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
  y_0 :
  goto w_0;
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
  w_0 :
  goto v_0;
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
  v_0 :
  goto u_0;
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
  u_0 :
  goto t_0;
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
  t_0 :
  Epopd(0,5);
ENDPROC

DOIT

