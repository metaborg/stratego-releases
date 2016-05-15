#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,n_15);
VARDECL(AFun,v_12);
VARDECL(AFun,t_10);
VARDECL(AFun,n_9);
VARDECL(AFun,c_9);
VARDECL(AFun,t_7);
VARDECL(AFun,f_7);
VARDECL(AFun,s_6);
VARDECL(AFun,h_6);
VARDECL(AFun,b_6);
VARDECL(AFun,y_5);
VARDECL(AFun,g_1);
VARDECL(AFun,c_1);
VARDECL(AFun,x_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_a_8);
PROCDECL(_stratego_b_8);
PROCDECL(_stratego_c_8);
PROCDECL(_stratego_d_8);
PROCDECL(_stratego_e_8);
PROCDECL(_stratego_f_8);
PROCDECL(_stratego_g_8);
PROCDECL(_stratego_h_8);
PROCDECL(_stratego_i_8);
PROCDECL(_stratego_j_8);
PROCDECL(_stratego_k_8);
PROCDECL(_stratego_l_8);
PROCDECL(_stratego_m_8);
PROCDECL(_stratego_n_8);
PROCDECL(_stratego_o_8);
PROCDECL(_stratego_p_8);
PROCDECL(_stratego_q_8);
PROCDECL(_stratego_r_8);
PROCDECL(_stratego_s_8);
PROCDECL(_stratego_t_8);
PROCDECL(_stratego_u_8);
PROCDECL(_stratego_v_8);

PROC(_stratego_init_afuns)
  MOVE(n_15,ATmakeAFun("SDef",3,0));
  MOVE(v_12,ATmakeAFun("RDef",3,0));
  MOVE(t_10,ATmakeAFun("OpDecl",2,0));
  MOVE(n_9,ATmakeAFun("Runtime",1,0));
  MOVE(c_9,ATmakeAFun("Silent",0,0));
  MOVE(t_7,ATmakeAFun("Binary",0,0));
  MOVE(f_7,ATmakeAFun("Output",1,0));
  MOVE(s_6,ATmakeAFun("Input",1,0));
  MOVE(h_6,ATmakeAFun("Program",1,0));
  MOVE(b_6,ATmakeAFun("Help",0,0));
  MOVE(y_5,ATmakeAFun("Undefined",1,0));
  MOVE(g_1,ATmakeAFun("Nil",0,0));
  MOVE(c_1,ATmakeAFun("TNil",0,0));
  MOVE(x_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_a_8);
ENDPROC

PROC(_stratego_a_8)
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
  k_4 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_b_8);
  goto f_0;
  g_0 :
  Ccall(_stratego_c_8);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto k_4;
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
  Rpush(s_0);
  goto q_4;
  s_0 :
  goto r_0;
  q_4 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  r_0 :
  Epopd(0,3);
  goto n_0;
  d_0 :
  Cpop();
  n_0 :
  Return();
  b_0 :
  AllBuild();
  Cpush(v_0);
  Ccall(_stratego_d_8);
  goto u_0;
  v_0 :
  Ccontinue(w_0);
  Epushd(0,6);
  Ccall(_stratego_i_8);
  Tdupl();
  Ccall(_stratego_k_8);
  Tpop();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Epushd(1,4);
  MoveTop(1,1);
  Ccall(_stratego_r_8);
  MoveTop(1,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_u_8);
  MoveTop(1,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_v_8);
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App3("Size",App1("Constructors",Egetd(1,2)),App1("Rules",Egetd(1,3)),App1("Strategies",Egetd(1,4))));
  Epopd(1,4);
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_k_8);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto j_0;
  j_0 :
  TestFunFC(x_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_0;
  k_0 :
  TestFunFC(x_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_0;
  l_0 :
  TestFunFC(c_1,&&fail,Egetd(0,6));
  Rpush(a_1);
  goto y_4;
  a_1 :
  goto y_0;
  y_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  y_0 :
  Ccall(_stratego_l_8);
  Ccall(_stratego_o_8);
  Epopd(0,6);
  goto u_0;
  w_0 :
  Ccall(_stratego_p_8);
  goto d_1;
  u_0 :
  Cpop();
  d_1 :
ENDPROC

PROC(_stratego_b_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_5;
  a_5 :
  TestFunFC(g_1,&&fail,Egetd(0,1));
  Rpush(f_1);
  goto c_5;
  f_1 :
  goto e_1;
  c_5 :
  Return();
  e_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_8)
  Epushd(0,5);
  MoveTop(0,3);
  goto d_10;
  d_10 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto e_10;
  e_10 :
  TestFunFC(a_0,&&x_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(z_1);
  Rpush(a_2);
  goto w_13;
  a_2 :
  goto y_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto z_13;
  c_2 :
  goto y_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto c_14;
  e_2 :
  goto y_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto f_14;
  g_2 :
  goto y_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto i_14;
  i_2 :
  goto y_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto l_14;
  k_2 :
  goto y_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto p_14;
  m_2 :
  goto y_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto t_14;
  o_2 :
  goto y_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto x_14;
  q_2 :
  goto y_1;
  p_2 :
  Ccontinue(r_2);
  Rpush(s_2);
  goto b_15;
  s_2 :
  goto y_1;
  r_2 :
  Ccontinue(t_2);
  Rpush(u_2);
  goto f_15;
  u_2 :
  goto y_1;
  t_2 :
  Ccontinue(v_2);
  Rpush(w_2);
  goto i_15;
  w_2 :
  goto y_1;
  v_2 :
  Ccontinue(x_2);
  Rpush(y_2);
  goto l_15;
  y_2 :
  goto y_1;
  x_2 :
  Ccontinue(z_2);
  Rpush(a_3);
  goto o_15;
  a_3 :
  goto y_1;
  z_2 :
  Rpush(c_3);
  goto r_15;
  c_3 :
  goto b_3;
  y_1 :
  Cpop();
  b_3 :
  goto w_1;
  x_1 :
  Cpush(e_3);
  Rpush(f_3);
  goto w_13;
  f_3 :
  goto d_3;
  e_3 :
  Ccontinue(g_3);
  Rpush(h_3);
  goto z_13;
  h_3 :
  goto d_3;
  g_3 :
  Ccontinue(i_3);
  Rpush(j_3);
  goto c_14;
  j_3 :
  goto d_3;
  i_3 :
  Ccontinue(k_3);
  Rpush(l_3);
  goto f_14;
  l_3 :
  goto d_3;
  k_3 :
  Ccontinue(m_3);
  Rpush(n_3);
  goto i_14;
  n_3 :
  goto d_3;
  m_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto f_15;
  p_3 :
  goto d_3;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto i_15;
  r_3 :
  goto d_3;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto l_15;
  t_3 :
  goto d_3;
  s_3 :
  Ccontinue(v_3);
  Rpush(a_4);
  goto o_15;
  a_4 :
  goto d_3;
  v_3 :
  Rpush(c_4);
  goto r_15;
  c_4 :
  goto b_4;
  d_3 :
  Cpop();
  b_4 :
  goto w_1;
  w_1 :
  goto v_1;
  r_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_10;
  b_10 :
  TestStr(1,1,"-?",&&fail);
  Rpush(h_4);
  goto s_15;
  h_4 :
  goto e_4;
  s_15 :
  Return();
  e_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  v_1 :
  goto u_1;
  o_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_9;
  y_9 :
  TestStr(1,1,"-h",&&fail);
  Rpush(j_4);
  goto p_15;
  j_4 :
  goto i_4;
  p_15 :
  Return();
  i_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  u_1 :
  goto t_1;
  l_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_9;
  v_9 :
  TestStr(1,1,"--help",&&fail);
  Rpush(m_4);
  goto m_15;
  m_4 :
  goto l_4;
  m_15 :
  Return();
  l_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  t_1 :
  goto s_1;
  i_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_9;
  s_9 :
  TestStr(1,1,"-s",&&fail);
  Rpush(o_4);
  goto j_15;
  o_4 :
  goto n_4;
  j_15 :
  Return();
  n_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  s_1 :
  goto r_1;
  f_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_9;
  p_9 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_4);
  goto g_15;
  r_4 :
  goto p_4;
  g_15 :
  Return();
  p_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  r_1 :
  goto q_1;
  b_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_9;
  l_9 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto c_15;
  t_4 :
  goto s_4;
  c_15 :
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
  q_1 :
  goto p_1;
  x_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_9;
  h_9 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto y_14;
  v_4 :
  goto u_4;
  y_14 :
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
  p_1 :
  goto o_1;
  t_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_9;
  d_9 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto u_14;
  x_4 :
  goto w_4;
  u_14 :
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
  o_1 :
  goto n_1;
  p_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_8;
  z_8 :
  TestStr(1,1,"-i",&&fail);
  Rpush(d_5);
  goto q_14;
  d_5 :
  goto z_4;
  q_14 :
  Return();
  z_4 :
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
  l_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_7;
  o_7 :
  TestStr(1,1,"@version",&&fail);
  Rpush(f_5);
  goto m_14;
  f_5 :
  goto e_5;
  m_14 :
  Return();
  e_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  m_1 :
  goto l_1;
  i_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_7;
  l_7 :
  TestStr(1,1,"--version",&&fail);
  Rpush(h_5);
  goto j_14;
  h_5 :
  goto g_5;
  j_14 :
  Return();
  g_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  f_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_7;
  g_7 :
  TestStr(1,1,"-v",&&fail);
  Rpush(j_5);
  goto g_14;
  j_5 :
  goto i_5;
  g_14 :
  Return();
  i_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  c_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_7;
  d_7 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(l_5);
  goto d_14;
  l_5 :
  goto k_5;
  d_14 :
  Return();
  k_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  z_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_6;
  y_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(n_5);
  goto a_14;
  n_5 :
  goto m_5;
  a_14 :
  Return();
  m_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  w_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_6;
  r_6 :
  TestStr(1,1,"-S",&&fail);
  Rpush(p_5);
  goto x_13;
  p_5 :
  goto o_5;
  x_13 :
  Return();
  o_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  h_1 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_8)
  Tdupl();
  q_5 :
  TestFunTop(a_0);
  Cpush(r_5);
  Arg(0);
  Cpush(u_5);
  Ccall(_stratego_e_8);
  goto t_5;
  u_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto v_15;
  v_15 :
  TestFunFC(y_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(x_5);
  goto z_15;
  x_5 :
  goto w_5;
  z_15 :
  Return();
  w_5 :
  Epopd(0,2);
  goto v_5;
  t_5 :
  Cpop();
  v_5 :
  Tpop();
  Cpop();
  goto s_5;
  r_5 :
  Arg(1);
  Tdrop();
  goto q_5;
  s_5 :
  Tpop();
  Ccall(_stratego_f_8);
ENDPROC

PROC(_stratego_e_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_16;
  b_16 :
  TestFunFC(b_6,&&fail,Egetd(0,1));
  Rpush(a_6);
  goto d_16;
  a_6 :
  goto z_5;
  d_16 :
  Return();
  z_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_8)
  Epushd(0,1);
  Tdupl();
  Rpush(c_6);
  m_16 :
  Cpush(e_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_16;
  f_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_16;
  g_16 :
  TestFunFC(h_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_6);
  goto n_16;
  g_6 :
  goto f_6;
  n_16 :
  Move(0,1,1,3);
  Return();
  f_6 :
  Epopd(1,4);
  goto d_6;
  e_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_6);
  goto m_16;
  j_6 :
  AllBuild();
  goto i_6;
  d_6 :
  Cpop();
  i_6 :
  Return();
  c_6 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_g_8);
  Tset(MakeInt(1));
  Ccall(_stratego_h_8);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_8)
  _ST_printnl();
ENDPROC

PROC(_stratego_h_8)
  _ST_exit();
ENDPROC

PROC(_stratego_i_8)
  Epushd(0,3);
  Tdupl();
  Cpush(l_6);
  Rpush(m_6);
  m_17 :
  Cpush(o_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto p_16;
  p_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_16;
  q_16 :
  TestFunFC(s_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_6);
  goto n_17;
  q_6 :
  goto p_6;
  n_17 :
  Move(0,1,1,3);
  Return();
  p_6 :
  Epopd(1,4);
  goto n_6;
  o_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_6);
  goto m_17;
  u_6 :
  AllBuild();
  goto t_6;
  n_6 :
  Cpop();
  t_6 :
  Return();
  m_6 :
  goto k_6;
  l_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto v_6;
  k_6 :
  Cpop();
  v_6 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_j_8);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_j_8)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_k_8)
  _ST_dtime();
ENDPROC

PROC(_stratego_l_8)
  Epushd(0,1);
  Tdupl();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Cpush(x_6);
  Rpush(z_6);
  r_18 :
  Cpush(b_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_17;
  t_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_17;
  u_17 :
  TestFunFC(f_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_7);
  goto s_18;
  e_7 :
  goto c_7;
  s_18 :
  Move(0,1,1,3);
  Return();
  c_7 :
  Epopd(1,4);
  goto a_7;
  b_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_7);
  goto r_18;
  i_7 :
  AllBuild();
  goto h_7;
  a_7 :
  Cpop();
  h_7 :
  Return();
  z_6 :
  goto w_6;
  x_6 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto j_7;
  w_6 :
  Cpop();
  j_7 :
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  Cpush(m_7);
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Rpush(n_7);
  x_18 :
  Cpush(q_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_18;
  a_18 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_18;
  b_18 :
  TestFunFC(t_7,&&fail,Egetd(1,2));
  Rpush(s_7);
  goto y_18;
  s_7 :
  goto r_7;
  y_18 :
  Return();
  r_7 :
  Epopd(1,3);
  goto p_7;
  q_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_7);
  goto x_18;
  v_7 :
  AllBuild();
  goto u_7;
  p_7 :
  Cpop();
  u_7 :
  Return();
  n_7 :
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_8);
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  goto k_7;
  m_7 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_8);
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  goto w_7;
  k_7 :
  Cpop();
  w_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_8)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_n_8)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_o_8)
  Epushd(0,2);
  Tdupl();
  Cpush(y_7);
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Cpush(z_7);
  Tdupl();
  Rpush(w_8);
  w_19 :
  Cpush(y_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_19;
  a_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_19;
  c_19 :
  TestFunFC(c_9,&&fail,Egetd(1,2));
  Rpush(b_9);
  goto x_19;
  b_9 :
  goto a_9;
  x_19 :
  Return();
  a_9 :
  Epopd(1,3);
  goto x_8;
  y_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_9);
  goto w_19;
  f_9 :
  AllBuild();
  goto e_9;
  x_8 :
  Cpop();
  e_9 :
  Return();
  w_8 :
  Cpop();
  Crestore();
  Cjump();
  z_7 :
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Rpush(g_9);
  y_19 :
  Cpush(j_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_19;
  e_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_19;
  f_19 :
  TestFunFC(n_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_9);
  goto z_19;
  m_9 :
  goto k_9;
  z_19 :
  Move(0,2,1,3);
  Return();
  k_9 :
  Epopd(1,4);
  goto i_9;
  j_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_9);
  goto y_19;
  q_9 :
  AllBuild();
  goto o_9;
  i_9 :
  Cpop();
  o_9 :
  Return();
  g_9 :
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Rpush(r_9);
  a_20 :
  Cpush(u_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_19;
  h_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_19;
  i_19 :
  TestFunFC(h_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(x_9);
  goto b_20;
  x_9 :
  goto w_9;
  b_20 :
  Move(0,1,1,3);
  Return();
  w_9 :
  Epopd(1,4);
  goto t_9;
  u_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_10);
  goto a_20;
  a_10 :
  AllBuild();
  goto z_9;
  t_9 :
  Cpop();
  z_9 :
  Return();
  r_9 :
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_g_8);
  goto x_7;
  y_7 :
  goto c_10;
  x_7 :
  Cpop();
  c_10 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_h_8);
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_8)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_g_8);
  Tset(MakeInt(1));
  Ccall(_stratego_h_8);
ENDPROC

PROC(_stratego_q_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_20;
  d_20 :
  TestFunFC(c_1,&&fail,Egetd(0,1));
  Rpush(l_10);
  goto f_20;
  l_10 :
  goto k_10;
  f_20 :
  Return();
  k_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_8)
  Rpush(n_10);
  k_22 :
  Epushd(0,3);
  MoveTop(0,3);
  goto z_20;
  z_20 :
  TestFunFC(t_10,&&s_10,Egetd(0,3));
  MoveArg(0,1,0,3,0);
  MoveArg(0,2,0,3,1);
  Cpush(v_10);
  Rpush(x_10);
  goto l_22;
  x_10 :
  goto u_10;
  v_10 :
  Rpush(z_10);
  goto n_22;
  z_10 :
  goto y_10;
  u_10 :
  Cpop();
  y_10 :
  goto q_10;
  s_10 :
  Rpush(q_10);
  goto n_22;
  q_10 :
  goto p_10;
  n_22 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto k_20;
  k_20 :
  TestFunFC(x_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_20;
  l_20 :
  TestFunFC(x_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto m_20;
  m_20 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(c_11);
  goto o_22;
  c_11 :
  goto a_11;
  o_22 :
  Move(1,1,2,4);
  Return();
  a_11 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(d_11);
  p_22 :
  Cpush(f_11);
  Ccall(_stratego_b_8);
  Tset(App0("Nil"));
  goto e_11;
  f_11 :
  Epushd(2,3);
  MoveTop(2,1);
  goto y_20;
  y_20 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(j_11);
  goto q_22;
  j_11 :
  goto i_11;
  q_22 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(k_11);
  goto k_22;
  k_11 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(l_11);
  goto p_22;
  l_11 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto v_20;
  v_20 :
  TestFunFC(x_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_20;
  w_20 :
  TestFunFC(x_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto x_20;
  x_20 :
  TestFunFC(c_1,&&fail,Egetd(3,7));
  Rpush(o_11);
  goto t_22;
  o_11 :
  goto n_11;
  t_22 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(p_11);
  u_22 :
  Cpush(r_11);
  Ccall(_stratego_b_8);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto q_11;
  r_11 :
  Ccontinue(s_11);
  Epushd(4,3);
  MoveTop(4,1);
  goto u_20;
  u_20 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(v_11);
  goto v_22;
  v_11 :
  goto t_11;
  v_22 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(w_11);
  w_22 :
  Cpush(y_11);
  Epushd(5,3);
  MoveTop(5,1);
  goto t_20;
  t_20 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(a_12);
  goto x_22;
  a_12 :
  goto z_11;
  x_22 :
  Move(4,2,5,2);
  Return();
  z_11 :
  Epopd(5,3);
  goto x_11;
  y_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_12);
  goto w_22;
  d_12 :
  AllBuild();
  goto b_12;
  x_11 :
  Cpop();
  b_12 :
  Return();
  w_11 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(e_12);
  goto u_22;
  e_12 :
  Return();
  t_11 :
  Epopd(4,3);
  goto q_11;
  s_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_12);
  goto u_22;
  g_12 :
  AllBuild();
  goto f_12;
  q_11 :
  Cpop();
  f_12 :
  Return();
  p_11 :
  Return();
  n_11 :
  Epopd(3,7);
  Return();
  i_11 :
  Epopd(2,3);
  goto h_11;
  e_11 :
  Cpop();
  h_11 :
  Return();
  d_11 :
  Epopd(1,1);
  Return();
  p_10 :
  goto o_10;
  l_22 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  o_10 :
  Epopd(0,3);
  Return();
  n_10 :
  Ccall(_stratego_s_8);
ENDPROC

PROC(_stratego_s_8)
  Rpush(h_12);
  i_23 :
  Cpush(j_12);
  Ccall(_stratego_b_8);
  Tset(MakeInt(0));
  goto i_12;
  j_12 :
  Epushd(0,3);
  MoveTop(0,1);
  goto a_23;
  a_23 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(n_12);
  goto j_23;
  n_12 :
  goto m_12;
  j_23 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(o_12);
  goto i_23;
  o_12 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_t_8);
  Epopd(1,1);
  Return();
  m_12 :
  Epopd(0,3);
  goto l_12;
  i_12 :
  Cpop();
  l_12 :
  Return();
  h_12 :
ENDPROC

PROC(_stratego_t_8)
  _ST_add();
ENDPROC

PROC(_stratego_u_8)
  Rpush(p_12);
  q_25 :
  Epushd(0,4);
  MoveTop(0,4);
  goto e_24;
  e_24 :
  TestFunFC(v_12,&&u_12,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  MoveArg(0,3,0,4,2);
  Cpush(x_12);
  Rpush(y_12);
  goto r_25;
  y_12 :
  goto w_12;
  x_12 :
  Rpush(b_13);
  goto t_25;
  b_13 :
  goto a_13;
  w_12 :
  Cpop();
  a_13 :
  goto t_12;
  u_12 :
  Rpush(t_12);
  goto t_25;
  t_12 :
  goto r_12;
  t_25 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  _ST_explode_term();
  MoveTop(2,1);
  goto p_23;
  p_23 :
  TestFunFC(x_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_23;
  q_23 :
  TestFunFC(x_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_23;
  r_23 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(d_13);
  goto u_25;
  d_13 :
  goto c_13;
  u_25 :
  Move(1,1,2,4);
  Return();
  c_13 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(f_13);
  v_25 :
  Cpush(h_13);
  Ccall(_stratego_b_8);
  Tset(App0("Nil"));
  goto g_13;
  h_13 :
  Epushd(2,3);
  MoveTop(2,1);
  goto d_24;
  d_24 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(l_13);
  goto w_25;
  l_13 :
  goto k_13;
  w_25 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(m_13);
  goto q_25;
  m_13 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(n_13);
  goto v_25;
  n_13 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto a_24;
  a_24 :
  TestFunFC(x_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto b_24;
  b_24 :
  TestFunFC(x_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto c_24;
  c_24 :
  TestFunFC(c_1,&&fail,Egetd(3,7));
  Rpush(q_13);
  goto z_25;
  q_13 :
  goto p_13;
  z_25 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(r_13);
  a_26 :
  Cpush(u_13);
  Ccall(_stratego_b_8);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto s_13;
  u_13 :
  Ccontinue(v_13);
  Epushd(4,3);
  MoveTop(4,1);
  goto z_23;
  z_23 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(b_14);
  goto b_26;
  b_14 :
  goto y_13;
  b_26 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(e_14);
  c_26 :
  Cpush(k_14);
  Epushd(5,3);
  MoveTop(5,1);
  goto y_23;
  y_23 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(o_14);
  goto d_26;
  o_14 :
  goto n_14;
  d_26 :
  Move(4,2,5,2);
  Return();
  n_14 :
  Epopd(5,3);
  goto h_14;
  k_14 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_14);
  goto c_26;
  s_14 :
  AllBuild();
  goto r_14;
  h_14 :
  Cpop();
  r_14 :
  Return();
  e_14 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(v_14);
  goto a_26;
  v_14 :
  Return();
  y_13 :
  Epopd(4,3);
  goto s_13;
  v_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_14);
  goto a_26;
  z_14 :
  AllBuild();
  goto w_14;
  s_13 :
  Cpop();
  w_14 :
  Return();
  r_13 :
  Return();
  p_13 :
  Epopd(3,7);
  Return();
  k_13 :
  Epopd(2,3);
  goto i_13;
  g_13 :
  Cpop();
  i_13 :
  Return();
  f_13 :
  Epopd(1,1);
  Return();
  r_12 :
  goto q_12;
  r_25 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  q_12 :
  Epopd(0,4);
  Return();
  p_12 :
  Ccall(_stratego_s_8);
ENDPROC

PROC(_stratego_v_8)
  Rpush(a_15);
  j_28 :
  Epushd(0,4);
  MoveTop(0,4);
  goto x_26;
  x_26 :
  TestFunFC(n_15,&&k_15,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  MoveArg(0,3,0,4,2);
  Cpush(t_15);
  Rpush(u_15);
  goto k_28;
  u_15 :
  goto q_15;
  t_15 :
  Rpush(e_16);
  goto m_28;
  e_16 :
  goto a_16;
  q_15 :
  Cpop();
  a_16 :
  goto h_15;
  k_15 :
  Rpush(h_15);
  goto m_28;
  h_15 :
  goto e_15;
  m_28 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  _ST_explode_term();
  MoveTop(2,1);
  goto i_26;
  i_26 :
  TestFunFC(x_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_26;
  j_26 :
  TestFunFC(x_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_26;
  k_26 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(r_16);
  goto n_28;
  r_16 :
  goto o_16;
  n_28 :
  Move(1,1,2,4);
  Return();
  o_16 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(s_16);
  o_28 :
  Cpush(u_16);
  Ccall(_stratego_b_8);
  Tset(App0("Nil"));
  goto t_16;
  u_16 :
  Epushd(2,3);
  MoveTop(2,1);
  goto w_26;
  w_26 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(c_17);
  goto p_28;
  c_17 :
  goto a_17;
  p_28 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(e_17);
  goto j_28;
  e_17 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(f_17);
  goto o_28;
  f_17 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto t_26;
  t_26 :
  TestFunFC(x_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto u_26;
  u_26 :
  TestFunFC(x_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto v_26;
  v_26 :
  TestFunFC(c_1,&&fail,Egetd(3,7));
  Rpush(h_17);
  goto s_28;
  h_17 :
  goto g_17;
  s_28 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(i_17);
  t_28 :
  Cpush(l_17);
  Ccall(_stratego_b_8);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto j_17;
  l_17 :
  Ccontinue(o_17);
  Epushd(4,3);
  MoveTop(4,1);
  goto s_26;
  s_26 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(q_17);
  goto u_28;
  q_17 :
  goto p_17;
  u_28 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(r_17);
  v_28 :
  Cpush(v_17);
  Epushd(5,3);
  MoveTop(5,1);
  goto r_26;
  r_26 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(x_17);
  goto w_28;
  x_17 :
  goto w_17;
  w_28 :
  Move(4,2,5,2);
  Return();
  w_17 :
  Epopd(5,3);
  goto s_17;
  v_17 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_17);
  goto v_28;
  z_17 :
  AllBuild();
  goto y_17;
  s_17 :
  Cpop();
  y_17 :
  Return();
  r_17 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(h_18);
  goto t_28;
  h_18 :
  Return();
  p_17 :
  Epopd(4,3);
  goto j_17;
  o_17 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_18);
  goto t_28;
  k_18 :
  AllBuild();
  goto j_18;
  j_17 :
  Cpop();
  j_18 :
  Return();
  i_17 :
  Return();
  g_17 :
  Epopd(3,7);
  Return();
  a_17 :
  Epopd(2,3);
  goto z_16;
  t_16 :
  Cpop();
  z_16 :
  Return();
  s_16 :
  Epopd(1,1);
  Return();
  e_15 :
  goto d_15;
  k_28 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  d_15 :
  Epopd(0,4);
  Return();
  a_15 :
  Ccall(_stratego_s_8);
ENDPROC
