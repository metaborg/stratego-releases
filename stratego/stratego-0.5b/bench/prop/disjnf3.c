#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,u_12);
VARDECL(AFun,j_12);
VARDECL(AFun,h_12);
VARDECL(AFun,w_9);
VARDECL(AFun,m_9);
VARDECL(AFun,m_8);
VARDECL(AFun,x_7);
VARDECL(AFun,h_7);
VARDECL(AFun,d_6);
VARDECL(AFun,x_5);
VARDECL(AFun,u_5);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_j_6);
PROCDECL(_stratego_k_6);
PROCDECL(_stratego_l_6);
PROCDECL(_stratego_m_6);
PROCDECL(_stratego_n_6);
PROCDECL(_stratego_o_6);
PROCDECL(_stratego_p_6);
PROCDECL(_stratego_q_6);
PROCDECL(_stratego_r_6);
PROCDECL(_stratego_s_6);
PROCDECL(_stratego_t_6);
PROCDECL(_stratego_u_6);
PROCDECL(_stratego_v_6);
PROCDECL(_stratego_w_6);
PROCDECL(_stratego_x_6);
PROCDECL(_stratego_y_6);
PROCDECL(_stratego_z_6);
PROCDECL(_stratego_a_7);

PROC(_stratego_init_afuns)
  MOVE(u_12,ATmakeAFun("Not",1,0));
  MOVE(j_12,ATmakeAFun("Or",2,0));
  MOVE(h_12,ATmakeAFun("And",2,0));
  MOVE(w_9,ATmakeAFun("Runtime",1,0));
  MOVE(m_9,ATmakeAFun("Silent",0,0));
  MOVE(m_8,ATmakeAFun("Binary",0,0));
  MOVE(x_7,ATmakeAFun("Output",1,0));
  MOVE(h_7,ATmakeAFun("Input",1,0));
  MOVE(d_6,ATmakeAFun("Program",1,0));
  MOVE(x_5,ATmakeAFun("Help",0,0));
  MOVE(u_5,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(p_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_j_6);
ENDPROC

PROC(_stratego_j_6)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(b_0);
  a_4 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_k_6);
  goto f_0;
  g_0 :
  Ccall(_stratego_l_6);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto a_4;
  i_0 :
  AllBuild();
  goto h_0;
  f_0 :
  Cpop();
  h_0 :
  goto d_0;
  e_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(l_0);
  goto b_4;
  l_0 :
  goto k_0;
  b_4 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  k_0 :
  Epopd(0,3);
  goto j_0;
  d_0 :
  Cpop();
  j_0 :
  Return();
  b_0 :
  AllBuild();
  Cpush(n_0);
  Ccall(_stratego_m_6);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_r_6);
  Tdupl();
  Ccall(_stratego_t_6);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_7);
  OneNextSon();
  Ccall(_stratego_z_6);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_t_6);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto w_2;
  w_2 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_2;
  x_2 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_2;
  y_2 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(r_0);
  goto d_4;
  r_0 :
  goto q_0;
  d_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_u_6);
  Ccall(_stratego_x_6);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_y_6);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_k_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_4;
  f_4 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto h_4;
  v_0 :
  goto u_0;
  h_4 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_6)
  Epushd(0,5);
  MoveTop(0,3);
  goto z_8;
  z_8 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_9;
  a_9 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto s_12;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto v_12;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto y_12;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto b_13;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto e_13;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto h_13;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto l_13;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto p_13;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto t_13;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto x_13;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto b_14;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto e_14;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto h_14;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto k_14;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto n_14;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto s_12;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto v_12;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto y_12;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto b_13;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto e_13;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto b_14;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto e_14;
  r_3 :
  goto t_2;
  q_3 :
  Ccontinue(s_3);
  Rpush(x_3);
  goto h_14;
  x_3 :
  goto t_2;
  s_3 :
  Ccontinue(y_3);
  Rpush(z_3);
  goto k_14;
  z_3 :
  goto t_2;
  y_3 :
  Rpush(e_4);
  goto n_14;
  e_4 :
  goto c_4;
  t_2 :
  Cpop();
  c_4 :
  goto m_1;
  m_1 :
  goto l_1;
  n_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_8;
  x_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(j_4);
  goto o_14;
  j_4 :
  goto i_4;
  o_14 :
  Return();
  i_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  k_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_8;
  u_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(l_4);
  goto l_14;
  l_4 :
  goto k_4;
  l_14 :
  Return();
  k_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  h_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_8;
  r_8 :
  TestStr(1,1,"--help",&&fail);
  Rpush(n_4);
  goto i_14;
  n_4 :
  goto m_4;
  i_14 :
  Return();
  m_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  e_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_8;
  o_8 :
  TestStr(1,1,"-s",&&fail);
  Rpush(p_4);
  goto f_14;
  p_4 :
  goto o_4;
  f_14 :
  Return();
  o_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  b_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_8;
  l_8 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_4);
  goto c_14;
  r_4 :
  goto q_4;
  c_14 :
  Return();
  q_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  x_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_8;
  h_8 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto y_13;
  t_4 :
  goto s_4;
  y_13 :
  Return();
  s_4 :
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
  t_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_8;
  d_8 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto u_13;
  v_4 :
  goto u_4;
  u_13 :
  Return();
  u_4 :
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
  p_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_7;
  z_7 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto q_13;
  x_4 :
  goto w_4;
  q_13 :
  Return();
  w_4 :
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
  l_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_7;
  v_7 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto m_13;
  z_4 :
  goto y_4;
  m_13 :
  Return();
  y_4 :
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
  h_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_7;
  r_7 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_5);
  goto i_13;
  b_5 :
  goto a_5;
  i_13 :
  Return();
  a_5 :
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
  e_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_7;
  o_7 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_5);
  goto f_13;
  d_5 :
  goto c_5;
  f_13 :
  Return();
  c_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  b_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_7;
  l_7 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_5);
  goto c_13;
  f_5 :
  goto e_5;
  c_13 :
  Return();
  e_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  y_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_7;
  i_7 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_5);
  goto z_12;
  h_5 :
  goto g_5;
  z_12 :
  Return();
  g_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  v_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_7;
  f_7 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_5);
  goto w_12;
  j_5 :
  goto i_5;
  w_12 :
  Return();
  i_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  s_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_7;
  c_7 :
  TestStr(1,1,"-S",&&fail);
  Rpush(l_5);
  goto t_12;
  l_5 :
  goto k_5;
  t_12 :
  Return();
  k_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_m_6)
  Tdupl();
  m_5 :
  TestFunTop(a_0);
  Cpush(n_5);
  Arg(0);
  Cpush(q_5);
  Ccall(_stratego_n_6);
  goto p_5;
  q_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto r_14;
  r_14 :
  TestFunFC(u_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_5);
  goto v_14;
  t_5 :
  goto s_5;
  v_14 :
  Return();
  s_5 :
  Epopd(0,2);
  goto r_5;
  p_5 :
  Cpop();
  r_5 :
  Tpop();
  Cpop();
  goto o_5;
  n_5 :
  Arg(1);
  Tdrop();
  goto m_5;
  o_5 :
  Tpop();
  Ccall(_stratego_o_6);
ENDPROC

PROC(_stratego_n_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_14;
  x_14 :
  TestFunFC(x_5,&&fail,Egetd(0,1));
  Rpush(w_5);
  goto z_14;
  w_5 :
  goto v_5;
  z_14 :
  Return();
  v_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_6)
  Epushd(0,1);
  Tdupl();
  Rpush(y_5);
  i_15 :
  Cpush(a_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_15;
  b_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_15;
  c_15 :
  TestFunFC(d_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_6);
  goto j_15;
  c_6 :
  goto b_6;
  j_15 :
  Move(0,1,1,3);
  Return();
  b_6 :
  Epopd(1,4);
  goto z_5;
  a_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_6);
  goto i_15;
  f_6 :
  AllBuild();
  goto e_6;
  z_5 :
  Cpop();
  e_6 :
  Return();
  y_5 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_p_6);
  Tset(MakeInt(1));
  Ccall(_stratego_q_6);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_6)
  _ST_printnl();
ENDPROC

PROC(_stratego_q_6)
  _ST_exit();
ENDPROC

PROC(_stratego_r_6)
  Epushd(0,3);
  Tdupl();
  Cpush(h_6);
  Rpush(i_6);
  d_16 :
  Cpush(d_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_15;
  l_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_15;
  m_15 :
  TestFunFC(h_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_7);
  goto e_16;
  g_7 :
  goto e_7;
  e_16 :
  Move(0,1,1,3);
  Return();
  e_7 :
  Epopd(1,4);
  goto b_7;
  d_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_7);
  goto d_16;
  k_7 :
  AllBuild();
  goto j_7;
  b_7 :
  Cpop();
  j_7 :
  Return();
  i_6 :
  goto g_6;
  h_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto m_7;
  g_6 :
  Cpop();
  m_7 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_s_6);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_s_6)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_t_6)
  _ST_dtime();
ENDPROC

PROC(_stratego_u_6)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(p_7);
  Rpush(q_7);
  i_17 :
  Cpush(t_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_16;
  k_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_16;
  l_16 :
  TestFunFC(x_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_7);
  goto j_17;
  w_7 :
  goto u_7;
  j_17 :
  Move(0,1,1,3);
  Return();
  u_7 :
  Epopd(1,4);
  goto s_7;
  t_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_8);
  goto i_17;
  a_8 :
  AllBuild();
  goto y_7;
  s_7 :
  Cpop();
  y_7 :
  Return();
  q_7 :
  goto n_7;
  p_7 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto b_8;
  n_7 :
  Cpop();
  b_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_6);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_z_6);
  AllBuild();
  AllBuild();
  Cpush(e_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(f_8);
  o_17 :
  Cpush(i_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_16;
  r_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_16;
  s_16 :
  TestFunFC(m_8,&&fail,Egetd(1,2));
  Rpush(k_8);
  goto p_17;
  k_8 :
  goto j_8;
  p_17 :
  Return();
  j_8 :
  Epopd(1,3);
  goto g_8;
  i_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_8);
  goto o_17;
  p_8 :
  AllBuild();
  goto n_8;
  g_8 :
  Cpop();
  n_8 :
  Return();
  f_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_6);
  OneNextSon();
  Ccall(_stratego_z_6);
  AllBuild();
  AllBuild();
  goto c_8;
  e_8 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_6);
  OneNextSon();
  Ccall(_stratego_z_6);
  AllBuild();
  AllBuild();
  goto q_8;
  c_8 :
  Cpop();
  q_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_6)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_w_6)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_x_6)
  Epushd(0,2);
  Tdupl();
  Cpush(t_8);
  Cpush(w_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(y_8);
  Tdupl();
  Rpush(g_9);
  l_19 :
  Cpush(j_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_17;
  r_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_17;
  s_17 :
  TestFunFC(m_9,&&fail,Egetd(1,2));
  Rpush(l_9);
  goto m_19;
  l_9 :
  goto k_9;
  m_19 :
  Return();
  k_9 :
  Epopd(1,3);
  goto h_9;
  j_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_9);
  goto l_19;
  p_9 :
  AllBuild();
  goto o_9;
  h_9 :
  Cpop();
  o_9 :
  Return();
  g_9 :
  Cpop();
  Crestore();
  Cjump();
  y_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_6);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(q_9);
  n_19 :
  Cpush(t_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_17;
  u_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_17;
  v_17 :
  TestFunFC(w_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_9);
  goto o_19;
  v_9 :
  goto u_9;
  o_19 :
  Move(0,2,1,3);
  Return();
  u_9 :
  Epopd(1,4);
  goto r_9;
  t_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_9);
  goto n_19;
  z_9 :
  AllBuild();
  goto y_9;
  r_9 :
  Cpop();
  y_9 :
  Return();
  q_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_6);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(a_10);
  p_19 :
  Cpush(d_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_17;
  x_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_17;
  y_17 :
  TestFunFC(d_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_10);
  goto q_19;
  f_10 :
  goto e_10;
  q_19 :
  Move(0,1,1,3);
  Return();
  e_10 :
  Epopd(1,4);
  goto b_10;
  d_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_10);
  goto p_19;
  h_10 :
  AllBuild();
  goto g_10;
  b_10 :
  Cpop();
  g_10 :
  Return();
  a_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_6);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_p_6);
  goto v_8;
  w_8 :
  goto j_10;
  v_8 :
  Cpop();
  j_10 :
  goto s_8;
  t_8 :
  Ccontinue(k_10);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(l_10);
  Tdupl();
  Rpush(m_10);
  r_19 :
  Cpush(o_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_18;
  a_18 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_18;
  b_18 :
  TestFunFC(m_9,&&fail,Egetd(1,2));
  Rpush(r_10);
  goto s_19;
  r_10 :
  goto p_10;
  s_19 :
  Return();
  p_10 :
  Epopd(1,3);
  goto n_10;
  o_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_10);
  goto r_19;
  t_10 :
  AllBuild();
  goto s_10;
  n_10 :
  Cpop();
  s_10 :
  Return();
  m_10 :
  Cpop();
  Crestore();
  Cjump();
  l_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_6);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(u_10);
  t_19 :
  Cpush(w_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_18;
  d_18 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_18;
  e_18 :
  TestFunFC(w_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_10);
  goto u_19;
  z_10 :
  goto x_10;
  u_19 :
  Move(0,2,1,3);
  Return();
  x_10 :
  Epopd(1,4);
  goto v_10;
  w_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_11);
  goto t_19;
  b_11 :
  AllBuild();
  goto a_11;
  v_10 :
  Cpop();
  a_11 :
  Return();
  u_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_6);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(c_11);
  v_19 :
  Cpush(e_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_18;
  g_18 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_18;
  h_18 :
  TestFunFC(d_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_11);
  goto w_19;
  h_11 :
  goto f_11;
  w_19 :
  Move(0,1,1,3);
  Return();
  f_11 :
  Epopd(1,4);
  goto d_11;
  e_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_11);
  goto v_19;
  j_11 :
  AllBuild();
  goto i_11;
  d_11 :
  Cpop();
  i_11 :
  Return();
  c_11 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_6);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_p_6);
  goto s_8;
  k_10 :
  goto k_11;
  s_8 :
  Cpop();
  k_11 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_q_6);
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_6)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_p_6);
  Tset(MakeInt(1));
  Ccall(_stratego_q_6);
ENDPROC

PROC(_stratego_z_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_19;
  y_19 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(m_11);
  goto a_20;
  m_11 :
  goto l_11;
  a_20 :
  Return();
  l_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_7)
  Rpush(n_11);
  b_24 :
  AllInit();
  p_11 :
  AllNextSon(&&q_11);
  Rpush(r_11);
  goto b_24;
  r_11 :
  goto p_11;
  q_11 :
  AllBuild();
  Rpush(s_11);
  c_24 :
  Cpush(u_11);
  Cpush(x_11);
  Epushd(0,7);
  MoveTop(0,4);
  goto o_20;
  o_20 :
  TestFunFC(h_12,&&g_12,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,1,0,4,1);
  goto p_20;
  p_20 :
  TestFunFC(j_12,&&i_12,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto q_20;
  q_20 :
  TestFunFC(j_12,&&l_12,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Cpush(n_12);
  Rpush(o_12);
  goto d_24;
  o_12 :
  goto m_12;
  n_12 :
  Rpush(r_12);
  goto g_24;
  r_12 :
  goto q_12;
  m_12 :
  Cpop();
  q_12 :
  goto e_12;
  l_12 :
  Rpush(e_12);
  goto g_24;
  i_12 :
  goto r_20;
  r_20 :
  TestFunFC(j_12,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(e_12);
  goto d_24;
  g_12 :
  TestFunFC(u_12,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto s_20;
  s_20 :
  TestFunFC(u_12,&&x_12,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(e_12);
  goto j_24;
  x_12 :
  TestFunFC(h_12,&&a_13,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(e_12);
  goto k_24;
  a_13 :
  TestFunFC(j_12,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(e_12);
  goto n_24;
  e_12 :
  goto d_12;
  n_24 :
  Epushd(1,2);
  NotNULLd(0,6);
  Tset(App1("Not",Egetd(0,6)));
  Rpush(d_13);
  goto c_24;
  d_13 :
  MoveTop(1,1);
  NotNULLd(0,7);
  Tset(App1("Not",Egetd(0,7)));
  Rpush(g_13);
  goto c_24;
  g_13 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("And",Egetd(1,1),Egetd(1,2)));
  Rpush(j_13);
  goto c_24;
  j_13 :
  Epopd(1,2);
  Return();
  d_12 :
  goto c_12;
  k_24 :
  Epushd(1,2);
  NotNULLd(0,6);
  Tset(App1("Not",Egetd(0,6)));
  Rpush(k_13);
  goto c_24;
  k_13 :
  MoveTop(1,1);
  NotNULLd(0,7);
  Tset(App1("Not",Egetd(0,7)));
  Rpush(n_13);
  goto c_24;
  n_13 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Or",Egetd(1,1),Egetd(1,2)));
  Rpush(o_13);
  goto c_24;
  o_13 :
  Epopd(1,2);
  Return();
  c_12 :
  goto b_12;
  j_24 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  b_12 :
  goto z_11;
  g_24 :
  Epushd(1,2);
  NotNULLd(0,5);
  NotNULLd(0,2);
  Tset(App2("And",Egetd(0,5),Egetd(0,2)));
  Rpush(r_13);
  goto c_24;
  r_13 :
  MoveTop(1,1);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App2("And",Egetd(0,5),Egetd(0,3)));
  Rpush(s_13);
  goto c_24;
  s_13 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Or",Egetd(1,1),Egetd(1,2)));
  Rpush(v_13);
  goto c_24;
  v_13 :
  Epopd(1,2);
  Return();
  z_11 :
  goto y_11;
  d_24 :
  Epushd(1,2);
  NotNULLd(0,6);
  NotNULLd(0,1);
  Tset(App2("And",Egetd(0,6),Egetd(0,1)));
  Rpush(w_13);
  goto c_24;
  w_13 :
  MoveTop(1,1);
  NotNULLd(0,7);
  NotNULLd(0,1);
  Tset(App2("And",Egetd(0,7),Egetd(0,1)));
  Rpush(z_13);
  goto c_24;
  z_13 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Or",Egetd(1,1),Egetd(1,2)));
  Rpush(a_14);
  goto c_24;
  a_14 :
  Epopd(1,2);
  Return();
  y_11 :
  Epopd(0,7);
  goto w_11;
  x_11 :
  goto d_14;
  w_11 :
  Cpop();
  d_14 :
  goto t_11;
  u_11 :
  Ccontinue(g_14);
  Epushd(0,7);
  MoveTop(0,4);
  goto g_21;
  g_21 :
  TestFunFC(h_12,&&k_15,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,1,0,4,1);
  goto h_21;
  h_21 :
  TestFunFC(j_12,&&n_15,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_21;
  i_21 :
  TestFunFC(j_12,&&o_15,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Cpush(q_15);
  Rpush(w_15);
  goto q_24;
  w_15 :
  goto p_15;
  q_15 :
  Rpush(z_15);
  goto t_24;
  z_15 :
  goto y_15;
  p_15 :
  Cpop();
  y_15 :
  goto a_15;
  o_15 :
  Rpush(a_15);
  goto t_24;
  n_15 :
  goto j_21;
  j_21 :
  TestFunFC(j_12,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(a_15);
  goto q_24;
  k_15 :
  TestFunFC(u_12,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto k_21;
  k_21 :
  TestFunFC(u_12,&&a_16,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(a_15);
  goto w_24;
  a_16 :
  TestFunFC(h_12,&&c_16,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(a_15);
  goto x_24;
  c_16 :
  TestFunFC(j_12,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(a_15);
  goto a_25;
  a_15 :
  goto w_14;
  a_25 :
  Epushd(1,2);
  NotNULLd(0,6);
  Tset(App1("Not",Egetd(0,6)));
  Rpush(f_16);
  goto c_24;
  f_16 :
  MoveTop(1,1);
  NotNULLd(0,7);
  Tset(App1("Not",Egetd(0,7)));
  Rpush(g_16);
  goto c_24;
  g_16 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("And",Egetd(1,1),Egetd(1,2)));
  Rpush(h_16);
  goto c_24;
  h_16 :
  Epopd(1,2);
  Return();
  w_14 :
  goto q_14;
  x_24 :
  Epushd(1,2);
  NotNULLd(0,6);
  Tset(App1("Not",Egetd(0,6)));
  Rpush(i_16);
  goto c_24;
  i_16 :
  MoveTop(1,1);
  NotNULLd(0,7);
  Tset(App1("Not",Egetd(0,7)));
  Rpush(j_16);
  goto c_24;
  j_16 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Or",Egetd(1,1),Egetd(1,2)));
  Rpush(m_16);
  goto c_24;
  m_16 :
  Epopd(1,2);
  Return();
  q_14 :
  goto p_14;
  w_24 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  p_14 :
  goto m_14;
  t_24 :
  Epushd(1,2);
  NotNULLd(0,5);
  NotNULLd(0,2);
  Tset(App2("And",Egetd(0,5),Egetd(0,2)));
  Rpush(n_16);
  goto c_24;
  n_16 :
  MoveTop(1,1);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App2("And",Egetd(0,5),Egetd(0,3)));
  Rpush(o_16);
  goto c_24;
  o_16 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Or",Egetd(1,1),Egetd(1,2)));
  Rpush(p_16);
  goto c_24;
  p_16 :
  Epopd(1,2);
  Return();
  m_14 :
  goto j_14;
  q_24 :
  Epushd(1,2);
  NotNULLd(0,6);
  NotNULLd(0,1);
  Tset(App2("And",Egetd(0,6),Egetd(0,1)));
  Rpush(q_16);
  goto c_24;
  q_16 :
  MoveTop(1,1);
  NotNULLd(0,7);
  NotNULLd(0,1);
  Tset(App2("And",Egetd(0,7),Egetd(0,1)));
  Rpush(y_16);
  goto c_24;
  y_16 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Or",Egetd(1,1),Egetd(1,2)));
  Rpush(a_17);
  goto c_24;
  a_17 :
  Epopd(1,2);
  Return();
  j_14 :
  Epopd(0,7);
  goto t_11;
  g_14 :
  goto b_17;
  t_11 :
  Cpop();
  b_17 :
  Return();
  s_11 :
  Return();
  n_11 :
ENDPROC

DOIT

