#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,a_24);
VARDECL(AFun,t_23);
VARDECL(AFun,w_18);
VARDECL(AFun,u_18);
VARDECL(AFun,s_17);
VARDECL(AFun,z_13);
VARDECL(AFun,x_13);
VARDECL(AFun,w_13);
VARDECL(AFun,u_13);
VARDECL(AFun,r_13);
VARDECL(AFun,p_13);
VARDECL(AFun,m_13);
VARDECL(AFun,k_13);
VARDECL(AFun,h_13);
VARDECL(AFun,f_13);
VARDECL(AFun,c_13);
VARDECL(AFun,s_12);
VARDECL(AFun,i_12);
VARDECL(AFun,f_12);
VARDECL(AFun,d_12);
VARDECL(AFun,c_12);
VARDECL(AFun,r_9);
VARDECL(AFun,g_9);
VARDECL(AFun,t_8);
VARDECL(AFun,g_8);
VARDECL(AFun,r_7);
VARDECL(AFun,e_7);
VARDECL(AFun,y_6);
VARDECL(AFun,v_6);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_m_5);
PROCDECL(_stratego_n_5);
PROCDECL(_stratego_o_5);
PROCDECL(_stratego_p_5);
PROCDECL(_stratego_q_5);
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
PROCDECL(_stratego_l_6);
PROCDECL(_stratego_m_6);

PROC(_stratego_init_afuns)
  MOVE(a_24,ATmakeAFun("CountRule",1,0));
  MOVE(t_23,ATmakeAFun("Build",1,0));
  MOVE(w_18,ATmakeAFun("One",1,0));
  MOVE(u_18,ATmakeAFun("Some",1,0));
  MOVE(s_17,ATmakeAFun("Fail",0,0));
  MOVE(z_13,ATmakeAFun("Wld",0,0));
  MOVE(x_13,ATmakeAFun("Match",1,0));
  MOVE(w_13,ATmakeAFun("App",2,0));
  MOVE(u_13,ATmakeAFun("CongWld",1,0));
  MOVE(r_13,ATmakeAFun("Cong",2,0));
  MOVE(p_13,ATmakeAFun("Where",1,0));
  MOVE(m_13,ATmakeAFun("Path",2,0));
  MOVE(k_13,ATmakeAFun("All",1,0));
  MOVE(h_13,ATmakeAFun("Rec",2,0));
  MOVE(f_13,ATmakeAFun("Scope",2,0));
  MOVE(c_13,ATmakeAFun("LChoice",2,0));
  MOVE(s_12,ATmakeAFun("Choice",2,0));
  MOVE(i_12,ATmakeAFun("Seq",2,0));
  MOVE(f_12,ATmakeAFun("Not",1,0));
  MOVE(d_12,ATmakeAFun("Id",0,0));
  MOVE(c_12,ATmakeAFun("Test",1,0));
  MOVE(r_9,ATmakeAFun("Runtime",1,0));
  MOVE(g_9,ATmakeAFun("Silent",0,0));
  MOVE(t_8,ATmakeAFun("Binary",0,0));
  MOVE(g_8,ATmakeAFun("Output",1,0));
  MOVE(r_7,ATmakeAFun("Input",1,0));
  MOVE(e_7,ATmakeAFun("Program",1,0));
  MOVE(y_6,ATmakeAFun("Help",0,0));
  MOVE(v_6,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(p_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
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
  x_3 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_m_5);
  goto f_0;
  g_0 :
  Ccall(_stratego_n_5);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto x_3;
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
  goto n_6;
  l_0 :
  goto k_0;
  n_6 :
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
  Ccall(_stratego_o_5);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_t_5);
  Tdupl();
  Ccall(_stratego_v_5);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_6);
  OneNextSon();
  Ccall(_stratego_b_6);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_v_5);
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
  goto p_6;
  r_0 :
  goto q_0;
  p_6 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_w_5);
  Ccall(_stratego_z_5);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_a_6);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_m_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_6;
  r_6 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto t_6;
  v_0 :
  goto u_0;
  t_6 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto f_10;
  f_10 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_10;
  g_10 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto b_14;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto e_14;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto h_14;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto k_14;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto n_14;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto q_14;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto u_14;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto y_14;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto c_15;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto g_15;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto k_15;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto n_15;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto q_15;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto t_15;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto w_15;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto b_14;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto e_14;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(g_3);
  goto h_14;
  g_3 :
  goto t_2;
  d_3 :
  Ccontinue(h_3);
  Rpush(j_3);
  goto k_14;
  j_3 :
  goto t_2;
  h_3 :
  Ccontinue(l_3);
  Rpush(r_3);
  goto n_14;
  r_3 :
  goto t_2;
  l_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto k_15;
  t_3 :
  goto t_2;
  s_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto n_15;
  v_3 :
  goto t_2;
  u_3 :
  Ccontinue(w_3);
  Rpush(y_3);
  goto q_15;
  y_3 :
  goto t_2;
  w_3 :
  Ccontinue(z_3);
  Rpush(a_4);
  goto t_15;
  a_4 :
  goto t_2;
  z_3 :
  Rpush(c_4);
  goto w_15;
  c_4 :
  goto b_4;
  t_2 :
  Cpop();
  b_4 :
  goto m_1;
  m_1 :
  goto l_1;
  w_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_10;
  d_10 :
  TestStr(1,1,"-?",&&fail);
  Rpush(e_4);
  goto x_15;
  e_4 :
  goto d_4;
  x_15 :
  Return();
  d_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  t_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_10;
  a_10 :
  TestStr(1,1,"-h",&&fail);
  Rpush(g_4);
  goto u_15;
  g_4 :
  goto f_4;
  u_15 :
  Return();
  f_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  q_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_9;
  q_9 :
  TestStr(1,1,"--help",&&fail);
  Rpush(i_4);
  goto r_15;
  i_4 :
  goto h_4;
  r_15 :
  Return();
  h_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  n_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_9;
  k_9 :
  TestStr(1,1,"-s",&&fail);
  Rpush(k_4);
  goto o_15;
  k_4 :
  goto j_4;
  o_15 :
  Return();
  j_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  k_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_9;
  h_9 :
  TestStr(1,1,"-b",&&fail);
  Rpush(m_4);
  goto l_15;
  m_4 :
  goto l_4;
  l_15 :
  Return();
  l_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  g_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_8;
  z_8 :
  TestStr(1,1,"--output",&&fail);
  Rpush(o_4);
  goto h_15;
  o_4 :
  goto n_4;
  h_15 :
  Return();
  n_4 :
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
  c_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_8;
  l_8 :
  TestStr(1,1,"-o",&&fail);
  Rpush(q_4);
  goto d_15;
  q_4 :
  goto p_4;
  d_15 :
  Return();
  p_4 :
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
  y_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_8;
  h_8 :
  TestStr(1,1,"--input",&&fail);
  Rpush(s_4);
  goto z_14;
  s_4 :
  goto r_4;
  z_14 :
  Return();
  r_4 :
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
  u_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_8;
  d_8 :
  TestStr(1,1,"-i",&&fail);
  Rpush(u_4);
  goto v_14;
  u_4 :
  goto t_4;
  v_14 :
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
  d_1 :
  goto c_1;
  q_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_7;
  z_7 :
  TestStr(1,1,"@version",&&fail);
  Rpush(w_4);
  goto r_14;
  w_4 :
  goto v_4;
  r_14 :
  Return();
  v_4 :
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
  n_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_7;
  w_7 :
  TestStr(1,1,"--version",&&fail);
  Rpush(y_4);
  goto o_14;
  y_4 :
  goto x_4;
  o_14 :
  Return();
  x_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  k_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_7;
  t_7 :
  TestStr(1,1,"-v",&&fail);
  Rpush(a_5);
  goto l_14;
  a_5 :
  goto z_4;
  l_14 :
  Return();
  z_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  h_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_7;
  q_7 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(c_5);
  goto i_14;
  c_5 :
  goto b_5;
  i_14 :
  Return();
  b_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  e_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_7;
  n_7 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(e_5);
  goto f_14;
  e_5 :
  goto d_5;
  f_14 :
  Return();
  d_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  b_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_7;
  k_7 :
  TestStr(1,1,"-S",&&fail);
  Rpush(g_5);
  goto c_14;
  g_5 :
  goto f_5;
  c_14 :
  Return();
  f_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_5)
  Tdupl();
  h_5 :
  TestFunTop(a_0);
  Cpush(i_5);
  Arg(0);
  Cpush(l_5);
  Ccall(_stratego_p_5);
  goto k_5;
  l_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto a_16;
  a_16 :
  TestFunFC(v_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(u_6);
  goto e_16;
  u_6 :
  goto q_6;
  e_16 :
  Return();
  q_6 :
  Epopd(0,2);
  goto o_6;
  k_5 :
  Cpop();
  o_6 :
  Tpop();
  Cpop();
  goto j_5;
  i_5 :
  Arg(1);
  Tdrop();
  goto h_5;
  j_5 :
  Tpop();
  Ccall(_stratego_q_5);
ENDPROC

PROC(_stratego_p_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_16;
  g_16 :
  TestFunFC(y_6,&&fail,Egetd(0,1));
  Rpush(x_6);
  goto i_16;
  x_6 :
  goto w_6;
  i_16 :
  Return();
  w_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_5)
  Epushd(0,1);
  Tdupl();
  Rpush(z_6);
  r_16 :
  Cpush(b_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_16;
  k_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_16;
  l_16 :
  TestFunFC(e_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_7);
  goto s_16;
  d_7 :
  goto c_7;
  s_16 :
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
  Rpush(g_7);
  goto r_16;
  g_7 :
  AllBuild();
  goto f_7;
  a_7 :
  Cpop();
  f_7 :
  Return();
  z_6 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_r_5);
  Tset(MakeInt(1));
  Ccall(_stratego_s_5);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_s_5)
  _ST_exit();
ENDPROC

PROC(_stratego_t_5)
  Epushd(0,3);
  Tdupl();
  Cpush(i_7);
  Rpush(j_7);
  m_17 :
  Cpush(m_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_16;
  u_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_16;
  v_16 :
  TestFunFC(r_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_7);
  goto n_17;
  p_7 :
  goto o_7;
  n_17 :
  Move(0,1,1,3);
  Return();
  o_7 :
  Epopd(1,4);
  goto l_7;
  m_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_7);
  goto m_17;
  u_7 :
  AllBuild();
  goto s_7;
  l_7 :
  Cpop();
  s_7 :
  Return();
  j_7 :
  goto h_7;
  i_7 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto v_7;
  h_7 :
  Cpop();
  v_7 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_u_5);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_u_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_v_5)
  _ST_dtime();
ENDPROC

PROC(_stratego_w_5)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(y_7);
  Rpush(a_8);
  r_18 :
  Cpush(c_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_17;
  t_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_17;
  u_17 :
  TestFunFC(g_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_8);
  goto s_18;
  f_8 :
  goto e_8;
  s_18 :
  Move(0,1,1,3);
  Return();
  e_8 :
  Epopd(1,4);
  goto b_8;
  c_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_8);
  goto r_18;
  j_8 :
  AllBuild();
  goto i_8;
  b_8 :
  Cpop();
  i_8 :
  Return();
  a_8 :
  goto x_7;
  y_7 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto k_8;
  x_7 :
  Cpop();
  k_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_6);
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
  Ccall(_stratego_b_6);
  AllBuild();
  AllBuild();
  Cpush(n_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(o_8);
  x_18 :
  Cpush(q_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_18;
  a_18 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_18;
  b_18 :
  TestFunFC(t_8,&&fail,Egetd(1,2));
  Rpush(s_8);
  goto y_18;
  s_8 :
  goto r_8;
  y_18 :
  Return();
  r_8 :
  Epopd(1,3);
  goto p_8;
  q_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_8);
  goto x_18;
  v_8 :
  AllBuild();
  goto u_8;
  p_8 :
  Cpop();
  u_8 :
  Return();
  o_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_5);
  OneNextSon();
  Ccall(_stratego_b_6);
  AllBuild();
  AllBuild();
  goto m_8;
  n_8 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_5);
  OneNextSon();
  Ccall(_stratego_b_6);
  AllBuild();
  AllBuild();
  goto w_8;
  m_8 :
  Cpop();
  w_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_5)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_y_5)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_z_5)
  Epushd(0,2);
  Tdupl();
  Cpush(y_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(a_9);
  Tdupl();
  Rpush(b_9);
  v_19 :
  Cpush(d_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_19;
  a_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_19;
  b_19 :
  TestFunFC(g_9,&&fail,Egetd(1,2));
  Rpush(f_9);
  goto w_19;
  f_9 :
  goto e_9;
  w_19 :
  Return();
  e_9 :
  Epopd(1,3);
  goto c_9;
  d_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_9);
  goto v_19;
  j_9 :
  AllBuild();
  goto i_9;
  c_9 :
  Cpop();
  i_9 :
  Return();
  b_9 :
  Cpop();
  Crestore();
  Cjump();
  a_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_6);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(l_9);
  x_19 :
  Cpush(n_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_19;
  d_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_19;
  e_19 :
  TestFunFC(r_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_9);
  goto y_19;
  p_9 :
  goto o_9;
  y_19 :
  Move(0,2,1,3);
  Return();
  o_9 :
  Epopd(1,4);
  goto m_9;
  n_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_9);
  goto x_19;
  t_9 :
  AllBuild();
  goto s_9;
  m_9 :
  Cpop();
  s_9 :
  Return();
  l_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_6);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(u_9);
  z_19 :
  Cpush(w_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_19;
  g_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_19;
  h_19 :
  TestFunFC(e_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_9);
  goto a_20;
  y_9 :
  goto x_9;
  a_20 :
  Move(0,1,1,3);
  Return();
  x_9 :
  Epopd(1,4);
  goto v_9;
  w_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_10);
  goto z_19;
  b_10 :
  AllBuild();
  goto z_9;
  v_9 :
  Cpop();
  z_9 :
  Return();
  u_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_6);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_r_5);
  goto x_8;
  y_8 :
  goto c_10;
  x_8 :
  Cpop();
  c_10 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_s_5);
  Epopd(0,2);
ENDPROC

PROC(_stratego_a_6)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_r_5);
  Tset(MakeInt(1));
  Ccall(_stratego_s_5);
ENDPROC

PROC(_stratego_b_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_20;
  c_20 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(m_10);
  goto e_20;
  m_10 :
  goto e_10;
  e_20 :
  Return();
  e_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_6)
  Rpush(n_10);
  f_20 :
  Cpush(p_10);
  o_10 :
  Ccall(_stratego_d_6);
  Tduplinv();
  goto o_10;
  p_10 :
  AllInit();
  q_10 :
  AllNextSon(&&s_10);
  Rpush(t_10);
  goto f_20;
  t_10 :
  goto q_10;
  s_10 :
  AllBuild();
  Cpush(v_10);
  u_10 :
  Ccall(_stratego_d_6);
  Tduplinv();
  goto u_10;
  v_10 :
  Return();
  n_10 :
ENDPROC

PROC(_stratego_d_6)
  Cpush(y_10);
  Ccall(_stratego_e_6);
  goto x_10;
  y_10 :
  Ccontinue(z_10);
  Ccall(_stratego_h_6);
  goto x_10;
  z_10 :
  Ccontinue(a_11);
  Ccall(_stratego_i_6);
  goto x_10;
  a_11 :
  Ccontinue(c_11);
  Ccall(_stratego_j_6);
  goto x_10;
  c_11 :
  Ccontinue(d_11);
  Ccall(_stratego_k_6);
  goto x_10;
  d_11 :
  Ccontinue(e_11);
  Ccall(_stratego_l_6);
  goto x_10;
  e_11 :
  Ccall(_stratego_m_6);
  goto f_11;
  x_10 :
  Cpop();
  f_11 :
ENDPROC

PROC(_stratego_e_6)
  Epushd(0,3);
  MoveTop(0,2);
  goto d_21;
  d_21 :
  TestFunFC(c_12,&&b_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto e_21;
  e_21 :
  TestFunFC(d_12,&&fail,Egetd(0,3));
  Rpush(a_12);
  goto n_22;
  b_12 :
  TestFunFC(f_12,&&e_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto f_21;
  f_21 :
  TestFunFC(d_12,&&fail,Egetd(0,3));
  Rpush(a_12);
  goto o_22;
  e_12 :
  TestFunFC(i_12,&&g_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto g_21;
  g_21 :
  TestFunFC(d_12,&&j_12,Egetd(0,1));
  goto h_21;
  h_21 :
  TestFunFC(d_12,&&k_12,Egetd(0,3));
  Cpush(m_12);
  Rpush(n_12);
  goto p_22;
  n_12 :
  goto l_12;
  m_12 :
  Rpush(q_12);
  goto q_22;
  q_12 :
  goto o_12;
  l_12 :
  Cpop();
  o_12 :
  goto a_12;
  k_12 :
  Rpush(a_12);
  goto q_22;
  j_12 :
  goto i_21;
  i_21 :
  TestFunFC(d_12,&&fail,Egetd(0,3));
  Rpush(a_12);
  goto p_22;
  g_12 :
  TestFunFC(s_12,&&r_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto j_21;
  j_21 :
  TestFunFC(d_12,&&t_12,Egetd(0,1));
  goto k_21;
  k_21 :
  TestFunFC(d_12,&&u_12,Egetd(0,3));
  Cpush(w_12);
  Rpush(y_12);
  goto r_22;
  y_12 :
  goto v_12;
  w_12 :
  Rpush(a_13);
  goto s_22;
  a_13 :
  goto z_12;
  v_12 :
  Cpop();
  z_12 :
  goto a_12;
  u_12 :
  Rpush(a_12);
  goto r_22;
  t_12 :
  goto l_21;
  l_21 :
  TestFunFC(d_12,&&fail,Egetd(0,3));
  Rpush(a_12);
  goto s_22;
  r_12 :
  TestFunFC(c_13,&&b_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto m_21;
  m_21 :
  TestFunFC(d_12,&&fail,Egetd(0,3));
  Rpush(a_12);
  goto t_22;
  b_13 :
  TestFunFC(f_13,&&d_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto n_21;
  n_21 :
  TestFunFC(d_12,&&fail,Egetd(0,1));
  Rpush(a_12);
  goto u_22;
  d_13 :
  TestFunFC(h_13,&&g_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto o_21;
  o_21 :
  TestFunFC(d_12,&&fail,Egetd(0,1));
  Rpush(a_12);
  goto v_22;
  g_13 :
  TestFunFC(k_13,&&i_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto p_21;
  p_21 :
  TestFunFC(d_12,&&fail,Egetd(0,3));
  Rpush(a_12);
  goto w_22;
  i_13 :
  TestFunFC(m_13,&&l_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto q_21;
  q_21 :
  TestFunFC(d_12,&&fail,Egetd(0,1));
  Rpush(a_12);
  goto x_22;
  l_13 :
  TestFunFC(p_13,&&n_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto r_21;
  r_21 :
  TestFunFC(d_12,&&fail,Egetd(0,3));
  Rpush(a_12);
  goto y_22;
  n_13 :
  TestFunFC(r_13,&&q_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(a_12);
  goto z_22;
  q_13 :
  TestFunFC(u_13,&&s_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(a_12);
  goto d_23;
  s_13 :
  TestFunFC(w_13,&&v_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto s_21;
  s_21 :
  TestFunFC(d_12,&&fail,Egetd(0,3));
  Rpush(a_12);
  goto g_23;
  v_13 :
  TestFunFC(x_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto t_21;
  t_21 :
  TestFunFC(z_13,&&fail,Egetd(0,3));
  Rpush(a_12);
  goto h_23;
  a_12 :
  goto y_11;
  h_23 :
  Tset(App0("Id"));
  Return();
  y_11 :
  goto x_11;
  g_23 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  x_11 :
  goto w_11;
  d_23 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(a_14);
  e_23 :
  Cpush(g_14);
  Ccall(_stratego_m_5);
  goto d_14;
  g_14 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  goto c_21;
  c_21 :
  TestFunFC(d_12,&&fail,Egetd(1,1));
  Rpush(p_14);
  goto f_23;
  p_14 :
  goto m_14;
  f_23 :
  Return();
  m_14 :
  Epopd(1,1);
  OneNextSon();
  Rpush(s_14);
  goto e_23;
  s_14 :
  AllBuild();
  goto j_14;
  d_14 :
  Cpop();
  j_14 :
  Return();
  a_14 :
  Tpop();
  Tset(App0("Id"));
  Return();
  w_11 :
  goto v_11;
  z_22 :
  Epushd(1,1);
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(t_14);
  a_23 :
  Cpush(x_14);
  Ccall(_stratego_m_5);
  goto w_14;
  x_14 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto z_20;
  z_20 :
  TestFunFC(d_12,&&fail,Egetd(2,1));
  Rpush(e_15);
  goto b_23;
  e_15 :
  goto b_15;
  b_23 :
  Return();
  b_15 :
  Epopd(2,1);
  OneNextSon();
  Rpush(f_15);
  goto a_23;
  f_15 :
  AllBuild();
  goto a_15;
  w_14 :
  Cpop();
  a_15 :
  Return();
  t_14 :
  Tpop();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_f_6);
  MoveTop(1,1);
  NotNULLd(0,3);
  NotNULLd(1,1);
  Tset(App4("MatchFunA",App2("Fun",Egetd(0,3),Egetd(1,1)),App0("Nil"),App0("Nil"),App0("Id")));
  Epopd(1,1);
  Return();
  v_11 :
  goto u_11;
  y_22 :
  Tset(App0("Id"));
  Return();
  u_11 :
  goto t_11;
  x_22 :
  Tset(App0("Id"));
  Return();
  t_11 :
  goto s_11;
  w_22 :
  Tset(App0("Id"));
  Return();
  s_11 :
  goto q_11;
  v_22 :
  Tset(App0("Id"));
  Return();
  q_11 :
  goto p_11;
  u_22 :
  Tset(App0("Id"));
  Return();
  p_11 :
  goto o_11;
  t_22 :
  Tset(App0("Id"));
  Return();
  o_11 :
  goto n_11;
  s_22 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  n_11 :
  goto m_11;
  r_22 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  m_11 :
  goto k_11;
  q_22 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  k_11 :
  goto j_11;
  p_22 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  j_11 :
  goto i_11;
  o_22 :
  Tset(App0("Fail"));
  Return();
  i_11 :
  goto h_11;
  n_22 :
  Tset(App0("Id"));
  Return();
  h_11 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_f_6)
  Rpush(i_15);
  b_24 :
  Cpush(m_15);
  Ccall(_stratego_m_5);
  Tset(MakeInt(0));
  goto j_15;
  m_15 :
  Epushd(0,3);
  MoveTop(0,1);
  goto k_23;
  k_23 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(v_15);
  goto c_24;
  v_15 :
  goto s_15;
  c_24 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(y_15);
  goto b_24;
  y_15 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_g_6);
  Epopd(1,1);
  Return();
  s_15 :
  Epopd(0,3);
  goto p_15;
  j_15 :
  Cpop();
  p_15 :
  Return();
  i_15 :
ENDPROC

PROC(_stratego_g_6)
  _ST_add();
ENDPROC

PROC(_stratego_h_6)
  Epushd(0,3);
  MoveTop(0,2);
  goto e_25;
  e_25 :
  TestFunFC(c_12,&&r_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto f_25;
  f_25 :
  TestFunFC(s_17,&&fail,Egetd(0,3));
  Rpush(q_17);
  goto s_26;
  r_17 :
  TestFunFC(f_12,&&v_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto g_25;
  g_25 :
  TestFunFC(s_17,&&fail,Egetd(0,3));
  Rpush(q_17);
  goto t_26;
  v_17 :
  TestFunFC(i_12,&&w_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto h_25;
  h_25 :
  TestFunFC(s_17,&&x_17,Egetd(0,1));
  goto i_25;
  i_25 :
  TestFunFC(s_17,&&y_17,Egetd(0,3));
  Cpush(h_18);
  Rpush(j_18);
  goto u_26;
  j_18 :
  goto z_17;
  h_18 :
  Rpush(l_18);
  goto v_26;
  l_18 :
  goto k_18;
  z_17 :
  Cpop();
  k_18 :
  goto q_17;
  y_17 :
  Rpush(q_17);
  goto v_26;
  x_17 :
  goto j_25;
  j_25 :
  TestFunFC(s_17,&&fail,Egetd(0,3));
  Rpush(q_17);
  goto u_26;
  w_17 :
  TestFunFC(f_13,&&m_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto k_25;
  k_25 :
  TestFunFC(s_17,&&fail,Egetd(0,1));
  Rpush(q_17);
  goto w_26;
  m_18 :
  TestFunFC(h_13,&&n_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto l_25;
  l_25 :
  TestFunFC(s_17,&&fail,Egetd(0,1));
  Rpush(q_17);
  goto x_26;
  n_18 :
  TestFunFC(u_18,&&t_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto m_25;
  m_25 :
  TestFunFC(s_17,&&fail,Egetd(0,3));
  Rpush(q_17);
  goto y_26;
  t_18 :
  TestFunFC(w_18,&&v_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto n_25;
  n_25 :
  TestFunFC(s_17,&&fail,Egetd(0,3));
  Rpush(q_17);
  goto z_26;
  v_18 :
  TestFunFC(m_13,&&z_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto o_25;
  o_25 :
  TestFunFC(s_17,&&fail,Egetd(0,1));
  Rpush(q_17);
  goto a_27;
  z_18 :
  TestFunFC(r_13,&&c_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(q_17);
  goto b_27;
  c_19 :
  TestFunFC(s_12,&&f_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto p_25;
  p_25 :
  TestFunFC(s_17,&&b_20,Egetd(0,1));
  goto s_25;
  s_25 :
  TestFunFC(s_17,&&i_20,Egetd(0,3));
  Cpush(k_20);
  Rpush(l_20);
  goto e_27;
  l_20 :
  goto j_20;
  k_20 :
  Rpush(n_20);
  goto f_27;
  n_20 :
  goto m_20;
  j_20 :
  Cpop();
  m_20 :
  goto q_17;
  i_20 :
  Rpush(q_17);
  goto f_27;
  b_20 :
  goto t_25;
  t_25 :
  TestFunFC(s_17,&&fail,Egetd(0,3));
  Rpush(q_17);
  goto e_27;
  f_19 :
  TestFunFC(c_13,&&o_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto u_25;
  u_25 :
  TestFunFC(s_17,&&p_20,Egetd(0,1));
  goto y_25;
  y_25 :
  TestFunFC(s_17,&&q_20,Egetd(0,3));
  Cpush(s_20);
  Rpush(t_20);
  goto g_27;
  t_20 :
  goto r_20;
  s_20 :
  Rpush(v_20);
  goto h_27;
  v_20 :
  goto u_20;
  r_20 :
  Cpop();
  u_20 :
  goto q_17;
  q_20 :
  Rpush(q_17);
  goto h_27;
  p_20 :
  goto z_25;
  z_25 :
  TestFunFC(s_17,&&fail,Egetd(0,3));
  Rpush(q_17);
  goto g_27;
  o_20 :
  TestFunFC(p_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto a_26;
  a_26 :
  TestFunFC(s_17,&&fail,Egetd(0,3));
  Rpush(q_17);
  goto i_27;
  q_17 :
  goto p_17;
  i_27 :
  Tset(App0("Fail"));
  Return();
  p_17 :
  goto o_17;
  h_27 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  o_17 :
  goto l_17;
  g_27 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  l_17 :
  goto j_17;
  f_27 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  j_17 :
  goto i_17;
  e_27 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  i_17 :
  goto h_17;
  b_27 :
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(w_20);
  c_27 :
  Cpush(y_20);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_25;
  c_25 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_25;
  d_25 :
  TestFunFC(s_17,&&fail,Egetd(1,2));
  Rpush(b_21);
  goto d_27;
  b_21 :
  goto a_21;
  d_27 :
  Return();
  a_21 :
  Epopd(1,3);
  goto x_20;
  y_20 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_21);
  goto c_27;
  y_21 :
  AllBuild();
  goto x_21;
  x_20 :
  Cpop();
  x_21 :
  Return();
  w_20 :
  Tpop();
  Tset(App0("Fail"));
  Return();
  h_17 :
  goto f_17;
  a_27 :
  Tset(App0("Fail"));
  Return();
  f_17 :
  goto z_16;
  z_26 :
  Tset(App0("Fail"));
  Return();
  z_16 :
  goto y_16;
  y_26 :
  Tset(App0("Fail"));
  Return();
  y_16 :
  goto x_16;
  x_26 :
  Tset(App0("Fail"));
  Return();
  x_16 :
  goto w_16;
  w_26 :
  Tset(App0("Fail"));
  Return();
  w_16 :
  goto t_16;
  v_26 :
  Tset(App0("Fail"));
  Return();
  t_16 :
  goto j_16;
  u_26 :
  Tset(App0("Fail"));
  Return();
  j_16 :
  goto f_16;
  t_26 :
  Tset(App0("Id"));
  Return();
  f_16 :
  goto z_15;
  s_26 :
  Tset(App0("Fail"));
  Return();
  z_15 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_i_6)
  Epushd(0,5);
  MoveTop(0,1);
  goto m_27;
  m_27 :
  TestFunFC(s_12,&&d_22,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto n_27;
  n_27 :
  TestFunFC(s_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(c_22);
  goto e_28;
  d_22 :
  TestFunFC(i_12,&&e_22,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto o_27;
  o_27 :
  TestFunFC(i_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(c_22);
  goto f_28;
  e_22 :
  TestFunFC(c_13,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto p_27;
  p_27 :
  TestFunFC(c_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(c_22);
  goto g_28;
  c_22 :
  goto b_22;
  g_28 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("LChoice",Egetd(0,3),App2("LChoice",Egetd(0,4),Egetd(0,5))));
  Return();
  b_22 :
  goto a_22;
  f_28 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,3),App2("Seq",Egetd(0,4),Egetd(0,5))));
  Return();
  a_22 :
  goto z_21;
  e_28 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Choice",Egetd(0,3),App2("Choice",Egetd(0,4),Egetd(0,5))));
  Return();
  z_21 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_6)
  Epushd(0,9);
  MoveTop(0,2);
  goto o_28;
  o_28 :
  TestFunFC(s_12,&&j_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(i_23);
  goto m_29;
  j_23 :
  TestFunFC(c_13,&&o_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(i_23);
  goto n_29;
  o_23 :
  TestFunFC(f_12,&&p_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto p_28;
  p_28 :
  TestFunFC(f_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(i_23);
  goto p_29;
  p_23 :
  TestFunFC(c_12,&&r_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto q_28;
  q_28 :
  TestFunFC(c_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(i_23);
  goto q_29;
  r_23 :
  TestFunFC(p_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto r_28;
  r_28 :
  TestFunFC(p_13,&&s_23,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(i_23);
  goto o_29;
  s_23 :
  TestFunFC(i_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto s_28;
  s_28 :
  TestFunFC(p_13,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto t_28;
  t_28 :
  TestFunFC(i_12,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,9,0,6,1);
  goto u_28;
  u_28 :
  TestFunFC(t_23,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  Rpush(i_23);
  goto r_29;
  i_23 :
  goto c_23;
  r_29 :
  NotNULLd(0,5);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App1("Where",App2("Seq",Egetd(0,5),App2("Seq",App1("Build",Egetd(0,8)),Egetd(0,9)))));
  Return();
  c_23 :
  goto m_22;
  q_29 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  m_22 :
  goto k_22;
  p_29 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  k_22 :
  goto j_22;
  o_29 :
  NotNULLd(0,4);
  Tset(App1("Where",Egetd(0,4)));
  Return();
  j_22 :
  goto g_22;
  n_29 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  g_22 :
  goto f_22;
  m_29 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  f_22 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_k_6)
  Epushd(0,7);
  MoveTop(0,2);
  goto f_30;
  f_30 :
  TestFunFC(f_13,&&y_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,6,0,2,1);
  goto g_30;
  g_30 :
  TestFunFC(f_13,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,1,0,6,1);
  Rpush(x_23);
  goto s_31;
  y_23 :
  TestFunFC(i_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,6,0,2,1);
  goto h_30;
  h_30 :
  TestFunFC(f_13,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto i_30;
  i_30 :
  TestFunFC(f_13,&&z_23,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,1,0,6,1);
  Rpush(x_23);
  goto w_31;
  z_23 :
  TestFunFC(a_24,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(x_23);
  goto a_32;
  x_23 :
  goto w_23;
  a_32 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("Scope",Egetd(0,4),App2("Seq",Egetd(0,5),App1("CountRule",Egetd(0,7)))));
  Return();
  w_23 :
  goto v_23;
  w_31 :
  Epushd(1,5);
  NotNULLd(0,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,1);
  goto c_30;
  c_30 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_30;
  d_30 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_30;
  e_30 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(e_24);
  goto x_31;
  e_24 :
  goto d_24;
  x_31 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(f_24);
  y_31 :
  Cpush(h_24);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_24);
  goto y_31;
  i_24 :
  AllBuild();
  goto g_24;
  h_24 :
  Ccall(_stratego_m_5);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto j_24;
  g_24 :
  Cpop();
  j_24 :
  Return();
  f_24 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,5);
  NotNULLd(0,1);
  Tset(App2("Scope",Egetd(2,1),App2("Seq",Egetd(0,5),Egetd(0,1))));
  Epopd(2,1);
  Return();
  d_24 :
  Epopd(1,5);
  Return();
  v_23 :
  goto u_23;
  s_31 :
  Epushd(1,5);
  NotNULLd(0,3);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,1);
  goto x_29;
  x_29 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_29;
  y_29 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_29;
  z_29 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(l_24);
  goto t_31;
  l_24 :
  goto k_24;
  t_31 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(m_24);
  u_31 :
  Cpush(o_24);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_24);
  goto u_31;
  p_24 :
  AllBuild();
  goto n_24;
  o_24 :
  Ccall(_stratego_m_5);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto q_24;
  n_24 :
  Cpop();
  q_24 :
  Return();
  m_24 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,1);
  Tset(App2("Scope",Egetd(2,1),Egetd(0,1)));
  Epopd(2,1);
  Return();
  k_24 :
  Epopd(1,5);
  Return();
  u_23 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_l_6)
  Epushd(0,9);
  MoveTop(0,3);
  goto f_32;
  f_32 :
  TestFunFC(c_13,&&w_24,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto g_32;
  g_32 :
  TestFunFC(i_12,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto h_32;
  h_32 :
  TestFunFC(i_12,&&x_24,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  Rpush(v_24);
  goto i_33;
  x_24 :
  TestFunFC(c_13,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto i_32;
  i_32 :
  TestFunFC(i_12,&&fail,Egetd(0,8));
  MoveArg(0,1,0,8,0);
  MoveArg(0,2,0,8,1);
  Rpush(v_24);
  goto j_33;
  w_24 :
  TestFunFC(i_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto j_32;
  j_32 :
  TestFunFC(c_13,&&y_24,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto k_32;
  k_32 :
  TestFunFC(a_24,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  Rpush(v_24);
  goto k_33;
  y_24 :
  TestFunFC(m_13,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_32;
  l_32 :
  TestFunFC(m_13,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  Rpush(v_24);
  goto l_33;
  v_24 :
  goto u_24;
  l_33 :
  Epushd(1,1);
  Move(0,5,0,8);
  Move(1,1,0,9);
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("Path",Egetd(0,5),App2("Seq",Egetd(0,6),Egetd(1,1))));
  Epopd(1,1);
  Return();
  u_24 :
  goto t_24;
  k_33 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,8);
  Tset(App2("LChoice",App2("Seq",Egetd(0,5),App1("CountRule",Egetd(0,8))),App2("Seq",Egetd(0,6),App1("CountRule",Egetd(0,8)))));
  Return();
  t_24 :
  goto s_24;
  j_33 :
  Epushd(1,2);
  Move(0,5,0,1);
  Move(1,1,0,2);
  Move(1,2,0,9);
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("LChoice",App2("Seq",Egetd(0,5),App2("LChoice",Egetd(0,6),Egetd(1,1))),Egetd(1,2)));
  Epopd(1,2);
  Return();
  s_24 :
  goto r_24;
  i_33 :
  Epushd(1,1);
  Move(0,5,0,8);
  Move(1,1,0,9);
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("Seq",Egetd(0,5),App2("LChoice",Egetd(0,6),Egetd(1,1))));
  Epopd(1,1);
  Return();
  r_24 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_m_6)
  Epushd(0,5);
  MoveTop(0,1);
  goto w_33;
  w_33 :
  TestFunFC(s_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto x_33;
  x_33 :
  TestFunFC(i_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(a_25);
  goto v_34;
  a_25 :
  goto z_24;
  v_34 :
  Epushd(1,2);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(b_25);
  w_34 :
  Cpush(r_25);
  Epushd(2,3);
  MoveTop(2,1);
  goto o_33;
  o_33 :
  TestFunFC(i_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(w_25);
  goto x_34;
  w_25 :
  goto v_25;
  x_34 :
  Move(0,3,2,2);
  Move(1,1,2,3);
  Tset(App0("Fail"));
  Return();
  v_25 :
  Epopd(2,3);
  goto q_25;
  r_25 :
  Ccontinue(x_25);
  Epushd(2,1);
  Cpush(f_26);
  TestFunTop(s_12);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  MoveTop(3,1);
  goto q_33;
  q_33 :
  TestFunFC(i_12,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(h_26);
  goto y_34;
  h_26 :
  goto g_26;
  y_34 :
  Move(0,3,3,2);
  Move(1,1,3,3);
  Tset(App0("Fail"));
  Return();
  g_26 :
  Epopd(3,3);
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(2,1,3,1);
  Epopd(3,1);
  AllBuild();
  goto e_26;
  f_26 :
  TestFunTop(s_12);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(2,1,3,1);
  Epopd(3,1);
  OneNextSon();
  Epushd(3,3);
  MoveTop(3,1);
  goto u_33;
  u_33 :
  TestFunFC(i_12,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(k_26);
  goto b_35;
  k_26 :
  goto j_26;
  b_35 :
  Move(0,3,3,2);
  Move(1,1,3,3);
  Tset(App0("Fail"));
  Return();
  j_26 :
  Epopd(3,3);
  AllBuild();
  goto i_26;
  e_26 :
  Cpop();
  i_26 :
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  goto q_25;
  x_25 :
  Ccontinue(o_26);
  TestFunTop(s_12);
  TravInit();
  OneNextSon();
  Rpush(p_26);
  goto w_34;
  p_26 :
  OneNextSon();
  AllBuild();
  goto q_25;
  o_26 :
  TestFunTop(s_12);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_26);
  goto w_34;
  r_26 :
  AllBuild();
  goto q_26;
  q_25 :
  Cpop();
  q_26 :
  Return();
  b_25 :
  MoveTop(1,2);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Choice",App2("Seq",Egetd(0,3),App2("Choice",Egetd(0,4),Egetd(1,1))),Egetd(1,2)));
  Epopd(1,2);
  Return();
  z_24 :
  Epopd(0,5);
ENDPROC
