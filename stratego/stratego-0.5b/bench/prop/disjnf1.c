#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,e_15);
VARDECL(AFun,d_15);
VARDECL(AFun,k_12);
VARDECL(AFun,b_10);
VARDECL(AFun,r_9);
VARDECL(AFun,a_9);
VARDECL(AFun,d_8);
VARDECL(AFun,o_7);
VARDECL(AFun,a_7);
VARDECL(AFun,r_6);
VARDECL(AFun,o_6);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_r_5);
PROCDECL(_stratego_s_5);
PROCDECL(_stratego_t_5);
PROCDECL(_stratego_u_5);
PROCDECL(_stratego_v_5);
PROCDECL(_stratego_w_5);
PROCDECL(_stratego_x_5);
PROCDECL(_stratego_y_5);
PROCDECL(_stratego_z_5);
PROCDECL(_stratego_a_6);
PROCDECL(_stratego_b_6);
PROCDECL(_stratego_c_6);
PROCDECL(_stratego_d_6);
PROCDECL(_stratego_e_6);
PROCDECL(_stratego_f_6);
PROCDECL(_stratego_g_6);
PROCDECL(_stratego_h_6);
PROCDECL(_stratego_i_6);
PROCDECL(_stratego_j_6);
PROCDECL(_stratego_k_6);

PROC(_stratego_init_afuns)
  MOVE(e_15,ATmakeAFun("Or",2,0));
  MOVE(d_15,ATmakeAFun("And",2,0));
  MOVE(k_12,ATmakeAFun("Not",1,0));
  MOVE(b_10,ATmakeAFun("Runtime",1,0));
  MOVE(r_9,ATmakeAFun("Silent",0,0));
  MOVE(a_9,ATmakeAFun("Binary",0,0));
  MOVE(d_8,ATmakeAFun("Output",1,0));
  MOVE(o_7,ATmakeAFun("Input",1,0));
  MOVE(a_7,ATmakeAFun("Program",1,0));
  MOVE(r_6,ATmakeAFun("Help",0,0));
  MOVE(o_6,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(p_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_r_5);
ENDPROC

PROC(_stratego_r_5)
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
  u_3 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_s_5);
  goto f_0;
  g_0 :
  Ccall(_stratego_t_5);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto u_3;
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
  goto v_3;
  l_0 :
  goto k_0;
  v_3 :
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
  Ccall(_stratego_u_5);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_z_5);
  Tdupl();
  Ccall(_stratego_b_6);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_6);
  OneNextSon();
  Ccall(_stratego_h_6);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_b_6);
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
  goto x_3;
  r_0 :
  goto q_0;
  x_3 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_c_6);
  Ccall(_stratego_f_6);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_g_6);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_s_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_4;
  h_4 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto n_4;
  v_0 :
  goto u_0;
  n_4 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto p_8;
  p_8 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_8;
  q_8 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto i_12;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto l_12;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto o_12;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto r_12;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto u_12;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto x_12;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto b_13;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto f_13;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto j_13;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto n_13;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto r_13;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto u_13;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto x_13;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto a_14;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto d_14;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto i_12;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(e_3);
  goto l_12;
  e_3 :
  goto t_2;
  a_3 :
  Ccontinue(f_3);
  Rpush(i_3);
  goto o_12;
  i_3 :
  goto t_2;
  f_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto r_12;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto u_12;
  r_3 :
  goto t_2;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto r_13;
  t_3 :
  goto t_2;
  s_3 :
  Ccontinue(w_3);
  Rpush(y_3);
  goto u_13;
  y_3 :
  goto t_2;
  w_3 :
  Ccontinue(z_3);
  Rpush(a_4);
  goto x_13;
  a_4 :
  goto t_2;
  z_3 :
  Ccontinue(b_4);
  Rpush(c_4);
  goto a_14;
  c_4 :
  goto t_2;
  b_4 :
  Rpush(e_4);
  goto d_14;
  e_4 :
  goto d_4;
  t_2 :
  Cpop();
  d_4 :
  goto m_1;
  m_1 :
  goto l_1;
  d_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_8;
  n_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(g_4);
  goto e_14;
  g_4 :
  goto f_4;
  e_14 :
  Return();
  f_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  a_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_8;
  k_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(j_4);
  goto b_14;
  j_4 :
  goto i_4;
  b_14 :
  Return();
  i_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  x_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_8;
  h_8 :
  TestStr(1,1,"--help",&&fail);
  Rpush(m_4);
  goto y_13;
  m_4 :
  goto l_4;
  y_13 :
  Return();
  l_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  u_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_8;
  e_8 :
  TestStr(1,1,"-s",&&fail);
  Rpush(p_4);
  goto v_13;
  p_4 :
  goto o_4;
  v_13 :
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
  r_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_8;
  b_8 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_4);
  goto s_13;
  r_4 :
  goto q_4;
  s_13 :
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
  n_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_7;
  x_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto o_13;
  t_4 :
  goto s_4;
  o_13 :
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
  j_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_7;
  t_7 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto k_13;
  v_4 :
  goto u_4;
  k_13 :
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
  f_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_7;
  p_7 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto g_13;
  x_4 :
  goto w_4;
  g_13 :
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
  b_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_7;
  l_7 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto c_13;
  z_4 :
  goto y_4;
  c_13 :
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
  x_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_7;
  h_7 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_5);
  goto y_12;
  b_5 :
  goto a_5;
  y_12 :
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
  u_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_7;
  e_7 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_5);
  goto v_12;
  d_5 :
  goto c_5;
  v_12 :
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
  r_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_7;
  b_7 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_5);
  goto s_12;
  f_5 :
  goto e_5;
  s_12 :
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
  o_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_6;
  y_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_5);
  goto p_12;
  h_5 :
  goto g_5;
  p_12 :
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
  l_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_6;
  v_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_5);
  goto m_12;
  j_5 :
  goto i_5;
  m_12 :
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
  i_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_6;
  s_6 :
  TestStr(1,1,"-S",&&fail);
  Rpush(l_5);
  goto j_12;
  l_5 :
  goto k_5;
  j_12 :
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

PROC(_stratego_u_5)
  Tdupl();
  m_5 :
  TestFunTop(a_0);
  Cpush(n_5);
  Arg(0);
  Cpush(q_5);
  Ccall(_stratego_v_5);
  goto p_5;
  q_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto h_14;
  h_14 :
  TestFunFC(o_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(n_6);
  goto l_14;
  n_6 :
  goto m_6;
  l_14 :
  Return();
  m_6 :
  Epopd(0,2);
  goto l_6;
  p_5 :
  Cpop();
  l_6 :
  Tpop();
  Cpop();
  goto o_5;
  n_5 :
  Arg(1);
  Tdrop();
  goto m_5;
  o_5 :
  Tpop();
  Ccall(_stratego_w_5);
ENDPROC

PROC(_stratego_v_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_14;
  n_14 :
  TestFunFC(r_6,&&fail,Egetd(0,1));
  Rpush(q_6);
  goto p_14;
  q_6 :
  goto p_6;
  p_14 :
  Return();
  p_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_5)
  Epushd(0,1);
  Tdupl();
  Rpush(t_6);
  y_14 :
  Cpush(w_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_14;
  r_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_14;
  s_14 :
  TestFunFC(a_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_6);
  goto z_14;
  z_6 :
  goto x_6;
  z_14 :
  Move(0,1,1,3);
  Return();
  x_6 :
  Epopd(1,4);
  goto u_6;
  w_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_7);
  goto y_14;
  d_7 :
  AllBuild();
  goto c_7;
  u_6 :
  Cpop();
  c_7 :
  Return();
  t_6 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_x_5);
  Tset(MakeInt(1));
  Ccall(_stratego_y_5);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_y_5)
  _ST_exit();
ENDPROC

PROC(_stratego_z_5)
  Epushd(0,3);
  Tdupl();
  Cpush(g_7);
  Rpush(i_7);
  t_15 :
  Cpush(k_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_15;
  b_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_15;
  c_15 :
  TestFunFC(o_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_7);
  goto u_15;
  n_7 :
  goto m_7;
  u_15 :
  Move(0,1,1,3);
  Return();
  m_7 :
  Epopd(1,4);
  goto j_7;
  k_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_7);
  goto t_15;
  r_7 :
  AllBuild();
  goto q_7;
  j_7 :
  Cpop();
  q_7 :
  Return();
  i_7 :
  goto f_7;
  g_7 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto s_7;
  f_7 :
  Cpop();
  s_7 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_a_6);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_a_6)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_b_6)
  _ST_dtime();
ENDPROC

PROC(_stratego_c_6)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(v_7);
  Rpush(w_7);
  y_16 :
  Cpush(z_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_16;
  a_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_16;
  b_16 :
  TestFunFC(d_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_8);
  goto z_16;
  c_8 :
  goto a_8;
  z_16 :
  Move(0,1,1,3);
  Return();
  a_8 :
  Epopd(1,4);
  goto y_7;
  z_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_8);
  goto y_16;
  g_8 :
  AllBuild();
  goto f_8;
  y_7 :
  Cpop();
  f_8 :
  Return();
  w_7 :
  goto u_7;
  v_7 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto i_8;
  u_7 :
  Cpop();
  i_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_6);
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
  Ccall(_stratego_h_6);
  AllBuild();
  AllBuild();
  Cpush(l_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(m_8);
  e_17 :
  Cpush(w_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto h_16;
  h_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_16;
  i_16 :
  TestFunFC(a_9,&&fail,Egetd(1,2));
  Rpush(z_8);
  goto f_17;
  z_8 :
  goto x_8;
  f_17 :
  Return();
  x_8 :
  Epopd(1,3);
  goto o_8;
  w_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_9);
  goto e_17;
  c_9 :
  AllBuild();
  goto b_9;
  o_8 :
  Cpop();
  b_9 :
  Return();
  m_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_6);
  OneNextSon();
  Ccall(_stratego_h_6);
  AllBuild();
  AllBuild();
  goto j_8;
  l_8 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_6);
  OneNextSon();
  Ccall(_stratego_h_6);
  AllBuild();
  AllBuild();
  goto e_9;
  j_8 :
  Cpop();
  e_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_6)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_e_6)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_f_6)
  Epushd(0,2);
  Tdupl();
  Cpush(g_9);
  Cpush(j_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(k_9);
  Tdupl();
  Rpush(l_9);
  y_18 :
  Cpush(o_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto h_17;
  h_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_17;
  i_17 :
  TestFunFC(r_9,&&fail,Egetd(1,2));
  Rpush(q_9);
  goto z_18;
  q_9 :
  goto p_9;
  z_18 :
  Return();
  p_9 :
  Epopd(1,3);
  goto m_9;
  o_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_9);
  goto y_18;
  u_9 :
  AllBuild();
  goto t_9;
  m_9 :
  Cpop();
  t_9 :
  Return();
  l_9 :
  Cpop();
  Crestore();
  Cjump();
  k_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_6);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(v_9);
  a_19 :
  Cpush(x_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_17;
  k_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_17;
  l_17 :
  TestFunFC(b_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(a_10);
  goto e_19;
  a_10 :
  goto z_9;
  e_19 :
  Move(0,2,1,3);
  Return();
  z_9 :
  Epopd(1,4);
  goto w_9;
  x_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_10);
  goto a_19;
  d_10 :
  AllBuild();
  goto c_10;
  w_9 :
  Cpop();
  c_10 :
  Return();
  v_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_6);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(e_10);
  f_19 :
  Cpush(h_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_17;
  n_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_17;
  o_17 :
  TestFunFC(a_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(j_10);
  goto g_19;
  j_10 :
  goto i_10;
  g_19 :
  Move(0,1,1,3);
  Return();
  i_10 :
  Epopd(1,4);
  goto f_10;
  h_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_10);
  goto f_19;
  l_10 :
  AllBuild();
  goto k_10;
  f_10 :
  Cpop();
  k_10 :
  Return();
  e_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_6);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_x_5);
  goto h_9;
  j_9 :
  goto m_10;
  h_9 :
  Cpop();
  m_10 :
  goto f_9;
  g_9 :
  Ccontinue(n_10);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(p_10);
  Tdupl();
  Rpush(q_10);
  h_19 :
  Cpush(s_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto q_17;
  q_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_17;
  r_17 :
  TestFunFC(r_9,&&fail,Egetd(1,2));
  Rpush(u_10);
  goto i_19;
  u_10 :
  goto t_10;
  i_19 :
  Return();
  t_10 :
  Epopd(1,3);
  goto r_10;
  s_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_10);
  goto h_19;
  x_10 :
  AllBuild();
  goto v_10;
  r_10 :
  Cpop();
  v_10 :
  Return();
  q_10 :
  Cpop();
  Crestore();
  Cjump();
  p_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_6);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(y_10);
  j_19 :
  Cpush(a_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_17;
  t_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_17;
  u_17 :
  TestFunFC(b_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_11);
  goto k_19;
  c_11 :
  goto b_11;
  k_19 :
  Move(0,2,1,3);
  Return();
  b_11 :
  Epopd(1,4);
  goto z_10;
  a_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_11);
  goto j_19;
  f_11 :
  AllBuild();
  goto d_11;
  z_10 :
  Cpop();
  d_11 :
  Return();
  y_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_6);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(g_11);
  l_19 :
  Cpush(i_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_17;
  w_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_17;
  x_17 :
  TestFunFC(a_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(k_11);
  goto m_19;
  k_11 :
  goto j_11;
  m_19 :
  Move(0,1,1,3);
  Return();
  j_11 :
  Epopd(1,4);
  goto h_11;
  i_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_11);
  goto l_19;
  n_11 :
  AllBuild();
  goto m_11;
  h_11 :
  Cpop();
  m_11 :
  Return();
  g_11 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_6);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_x_5);
  goto f_9;
  n_10 :
  goto o_11;
  f_9 :
  Cpop();
  o_11 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_y_5);
  Epopd(0,2);
ENDPROC

PROC(_stratego_g_6)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_x_5);
  Tset(MakeInt(1));
  Ccall(_stratego_y_5);
ENDPROC

PROC(_stratego_h_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_19;
  o_19 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(r_11);
  goto q_19;
  r_11 :
  goto p_11;
  q_19 :
  Return();
  p_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_6)
  Rpush(s_11);
  r_19 :
  Ccall(_stratego_j_6);
  AllInit();
  t_11 :
  AllNextSon(&&u_11);
  Rpush(w_11);
  goto r_19;
  w_11 :
  goto t_11;
  u_11 :
  AllBuild();
  Ccall(_stratego_k_6);
  Return();
  s_11 :
ENDPROC

PROC(_stratego_j_6)
  Cpush(y_11);
  Rpush(z_11);
  l_21 :
  Cpush(c_12);
  Cpush(e_12);
  Epushd(0,3);
  MoveTop(0,1);
  goto t_19;
  t_19 :
  TestFunFC(k_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto u_19;
  u_19 :
  TestFunFC(k_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(h_12);
  goto m_21;
  h_12 :
  goto g_12;
  m_21 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(n_12);
  goto l_21;
  n_12 :
  Return();
  g_12 :
  Epopd(0,3);
  goto d_12;
  e_12 :
  goto q_12;
  d_12 :
  Cpop();
  q_12 :
  goto b_12;
  c_12 :
  Ccontinue(t_12);
  Epushd(0,3);
  MoveTop(0,1);
  goto w_19;
  w_19 :
  TestFunFC(k_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto x_19;
  x_19 :
  TestFunFC(k_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(z_12);
  goto n_21;
  z_12 :
  goto w_12;
  n_21 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(a_13);
  goto l_21;
  a_13 :
  Return();
  w_12 :
  Epopd(0,3);
  goto b_12;
  t_12 :
  goto d_13;
  b_12 :
  Cpop();
  d_13 :
  Return();
  z_11 :
  goto x_11;
  y_11 :
  Rpush(h_13);
  o_21 :
  Cpush(l_13);
  Epushd(0,3);
  MoveTop(0,1);
  goto z_19;
  z_19 :
  TestFunFC(k_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto a_20;
  a_20 :
  TestFunFC(k_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_13);
  goto p_21;
  p_13 :
  goto m_13;
  p_21 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_13);
  goto o_21;
  q_13 :
  Return();
  m_13 :
  Epopd(0,3);
  goto i_13;
  l_13 :
  goto t_13;
  i_13 :
  Cpop();
  t_13 :
  Return();
  h_13 :
  goto e_13;
  x_11 :
  Cpop();
  e_13 :
  Cpush(z_13);
  Cpush(f_14);
  Epushd(0,4);
  MoveTop(0,1);
  goto d_20;
  d_20 :
  TestFunFC(k_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto e_20;
  e_20 :
  TestFunFC(d_15,&&a_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(q_14);
  goto q_21;
  a_15 :
  TestFunFC(e_15,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(q_14);
  goto r_21;
  q_14 :
  goto m_14;
  r_21 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("And",App1("Not",Egetd(0,3)),App1("Not",Egetd(0,4))));
  Return();
  m_14 :
  goto g_14;
  q_21 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("Or",App1("Not",Egetd(0,3)),App1("Not",Egetd(0,4))));
  Return();
  g_14 :
  Epopd(0,4);
  goto c_14;
  f_14 :
  goto f_15;
  c_14 :
  Cpop();
  f_15 :
  goto w_13;
  z_13 :
  Ccontinue(g_15);
  Epushd(0,4);
  MoveTop(0,1);
  goto h_20;
  h_20 :
  TestFunFC(k_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto i_20;
  i_20 :
  TestFunFC(d_15,&&q_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_15);
  goto s_21;
  q_15 :
  TestFunFC(e_15,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_15);
  goto t_21;
  p_15 :
  goto o_15;
  t_21 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("And",App1("Not",Egetd(0,3)),App1("Not",Egetd(0,4))));
  Return();
  o_15 :
  goto m_15;
  s_21 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("Or",App1("Not",Egetd(0,3)),App1("Not",Egetd(0,4))));
  Return();
  m_15 :
  Epopd(0,4);
  goto w_13;
  g_15 :
  goto s_15;
  w_13 :
  Cpop();
  s_15 :
ENDPROC

PROC(_stratego_k_6)
  Rpush(v_15);
  g_23 :
  Cpush(x_15);
  Cpush(z_15);
  Epushd(0,7);
  MoveTop(0,3);
  goto w_21;
  w_21 :
  TestFunFC(d_15,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_21;
  x_21 :
  TestFunFC(e_15,&&f_16,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto y_21;
  y_21 :
  TestFunFC(e_15,&&g_16,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Cpush(q_16);
  Rpush(r_16);
  goto h_23;
  r_16 :
  goto o_16;
  q_16 :
  Rpush(t_16);
  goto i_23;
  t_16 :
  goto s_16;
  o_16 :
  Cpop();
  s_16 :
  goto e_16;
  g_16 :
  Rpush(e_16);
  goto i_23;
  f_16 :
  goto z_21;
  z_21 :
  TestFunFC(e_15,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(e_16);
  goto h_23;
  e_16 :
  goto d_16;
  i_23 :
  NotNULLd(0,6);
  NotNULLd(0,4);
  NotNULLd(0,7);
  Tset(App2("Or",App2("And",Egetd(0,4),Egetd(0,6)),App2("And",Egetd(0,4),Egetd(0,7))));
  Return();
  d_16 :
  goto c_16;
  h_23 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Or",App2("And",Egetd(0,1),Egetd(0,5)),App2("And",Egetd(0,2),Egetd(0,5))));
  Return();
  c_16 :
  AllInit();
  u_16 :
  AllNextSon(&&a_17);
  Rpush(b_17);
  goto g_23;
  b_17 :
  goto u_16;
  a_17 :
  AllBuild();
  Epopd(0,7);
  goto y_15;
  z_15 :
  goto c_17;
  y_15 :
  Cpop();
  c_17 :
  goto w_15;
  x_15 :
  Ccontinue(d_17);
  Epushd(0,7);
  MoveTop(0,3);
  goto c_22;
  c_22 :
  TestFunFC(d_15,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto d_22;
  d_22 :
  TestFunFC(e_15,&&p_17,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto e_22;
  e_22 :
  TestFunFC(e_15,&&s_17,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Cpush(w_18);
  Rpush(x_18);
  goto j_23;
  x_18 :
  goto v_17;
  w_18 :
  Rpush(c_19);
  goto k_23;
  c_19 :
  goto b_19;
  v_17 :
  Cpop();
  b_19 :
  goto m_17;
  s_17 :
  Rpush(m_17);
  goto k_23;
  p_17 :
  goto f_22;
  f_22 :
  TestFunFC(e_15,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_17);
  goto j_23;
  m_17 :
  goto j_17;
  k_23 :
  NotNULLd(0,6);
  NotNULLd(0,4);
  NotNULLd(0,7);
  Tset(App2("Or",App2("And",Egetd(0,4),Egetd(0,6)),App2("And",Egetd(0,4),Egetd(0,7))));
  Return();
  j_17 :
  goto g_17;
  j_23 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Or",App2("And",Egetd(0,1),Egetd(0,5)),App2("And",Egetd(0,2),Egetd(0,5))));
  Return();
  g_17 :
  AllInit();
  d_19 :
  AllNextSon(&&n_19);
  Rpush(s_19);
  goto g_23;
  s_19 :
  goto d_19;
  n_19 :
  AllBuild();
  Epopd(0,7);
  goto w_15;
  d_17 :
  goto v_19;
  w_15 :
  Cpop();
  v_19 :
  Return();
  v_15 :
ENDPROC

DOIT

