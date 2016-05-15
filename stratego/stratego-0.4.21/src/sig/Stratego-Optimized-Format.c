#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,y_22);
VARDECL(AFun,n_22);
VARDECL(AFun,v_21);
VARDECL(AFun,t_21);
VARDECL(AFun,r_21);
VARDECL(AFun,p_21);
VARDECL(AFun,x_20);
VARDECL(AFun,r_20);
VARDECL(AFun,k_20);
VARDECL(AFun,a_20);
VARDECL(AFun,y_19);
VARDECL(AFun,s_19);
VARDECL(AFun,n_19);
VARDECL(AFun,j_19);
VARDECL(AFun,t_18);
VARDECL(AFun,u_17);
VARDECL(AFun,n_17);
VARDECL(AFun,k_16);
VARDECL(AFun,i_16);
VARDECL(AFun,d_16);
VARDECL(AFun,y_15);
VARDECL(AFun,m_15);
VARDECL(AFun,j_15);
VARDECL(AFun,c_14);
VARDECL(AFun,v_13);
VARDECL(AFun,o_13);
VARDECL(AFun,k_13);
VARDECL(AFun,j_13);
VARDECL(AFun,z_12);
VARDECL(AFun,n_12);
VARDECL(AFun,i_12);
VARDECL(AFun,e_12);
VARDECL(AFun,a_12);
VARDECL(AFun,t_11);
VARDECL(AFun,i_11);
VARDECL(AFun,g_11);
VARDECL(AFun,g_10);
VARDECL(AFun,w_9);
VARDECL(AFun,h_9);
VARDECL(AFun,l_8);
VARDECL(AFun,w_7);
VARDECL(AFun,i_7);
VARDECL(AFun,z_6);
VARDECL(AFun,v_6);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_k_5);
PROCDECL(_stratego_l_5);
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

PROC(_stratego_init_afuns)
  MOVE(y_22,ATmakeAFun("Wld",0,0));
  MOVE(n_22,ATmakeAFun("BuildDefault",1,0));
  MOVE(v_21,ATmakeAFun("Op",2,0));
  MOVE(t_21,ATmakeAFun("Str",1,0));
  MOVE(r_21,ATmakeAFun("Real",1,0));
  MOVE(p_21,ATmakeAFun("Int",1,0));
  MOVE(x_20,ATmakeAFun("Fail",0,0));
  MOVE(r_20,ATmakeAFun("Id",0,0));
  MOVE(k_20,ATmakeAFun("Assign",1,0));
  MOVE(a_20,ATmakeAFun("Assign",2,0));
  MOVE(y_19,ATmakeAFun("Continue",1,0));
  MOVE(s_19,ATmakeAFun("Alt",3,0));
  MOVE(n_19,ATmakeAFun("Var",1,0));
  MOVE(j_19,ATmakeAFun("Case",4,0));
  MOVE(t_18,ATmakeAFun("Let",2,0));
  MOVE(u_17,ATmakeAFun("Prim",1,0));
  MOVE(n_17,ATmakeAFun("Where",1,0));
  MOVE(k_16,ATmakeAFun("Scope",2,0));
  MOVE(i_16,ATmakeAFun("Build",1,0));
  MOVE(d_16,ATmakeAFun("Thread",1,0));
  MOVE(y_15,ATmakeAFun("All",1,0));
  MOVE(m_15,ATmakeAFun("Some",1,0));
  MOVE(j_15,ATmakeAFun("One",1,0));
  MOVE(c_14,ATmakeAFun("Cong",2,0));
  MOVE(v_13,ATmakeAFun("Path",2,0));
  MOVE(o_13,ATmakeAFun("Rec",2,0));
  MOVE(k_13,ATmakeAFun("SVar",1,0));
  MOVE(j_13,ATmakeAFun("Call",2,0));
  MOVE(z_12,ATmakeAFun("LChoice",2,0));
  MOVE(n_12,ATmakeAFun("Choice",2,0));
  MOVE(i_12,ATmakeAFun("Seq",2,0));
  MOVE(e_12,ATmakeAFun("Test",1,0));
  MOVE(a_12,ATmakeAFun("Not",1,0));
  MOVE(t_11,ATmakeAFun("DontInline",0,0));
  MOVE(i_11,ATmakeAFun("SDef",4,0));
  MOVE(g_11,ATmakeAFun("SDef",3,0));
  MOVE(g_10,ATmakeAFun("Runtime",1,0));
  MOVE(w_9,ATmakeAFun("Silent",0,0));
  MOVE(h_9,ATmakeAFun("Binary",0,0));
  MOVE(l_8,ATmakeAFun("Output",1,0));
  MOVE(w_7,ATmakeAFun("Input",1,0));
  MOVE(i_7,ATmakeAFun("Program",1,0));
  MOVE(z_6,ATmakeAFun("Help",0,0));
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
  k_4 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_k_5);
  goto f_0;
  g_0 :
  Ccall(_stratego_l_5);
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
  Rpush(l_0);
  goto l_4;
  l_0 :
  goto k_0;
  l_4 :
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
  Ccall(_stratego_m_5);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_r_5);
  Tdupl();
  Ccall(_stratego_t_5);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_6);
  OneNextSon();
  Ccall(_stratego_z_5);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_t_5);
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
  goto p_4;
  r_0 :
  goto q_0;
  p_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_u_5);
  Ccall(_stratego_x_5);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_y_5);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_k_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_4;
  s_4 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto v_4;
  v_0 :
  goto u_0;
  v_4 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto v_8;
  v_8 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto w_8;
  w_8 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto o_12;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto r_12;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto u_12;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto x_12;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto a_13;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto d_13;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto h_13;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto l_13;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto p_13;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto t_13;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto x_13;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto a_14;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto d_14;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto g_14;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto j_14;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto o_12;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto r_12;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto u_12;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto x_12;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto a_13;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto x_13;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(t_3);
  goto a_14;
  t_3 :
  goto t_2;
  q_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto d_14;
  v_3 :
  goto t_2;
  u_3 :
  Ccontinue(w_3);
  Rpush(x_3);
  goto g_14;
  x_3 :
  goto t_2;
  w_3 :
  Rpush(b_4);
  goto j_14;
  b_4 :
  goto z_3;
  t_2 :
  Cpop();
  z_3 :
  goto m_1;
  m_1 :
  goto l_1;
  j_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_8;
  t_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_4);
  goto k_14;
  d_4 :
  goto c_4;
  k_14 :
  Return();
  c_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  g_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_8;
  q_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(f_4);
  goto h_14;
  f_4 :
  goto e_4;
  h_14 :
  Return();
  e_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  d_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_8;
  n_8 :
  TestStr(1,1,"--help",&&fail);
  Rpush(h_4);
  goto e_14;
  h_4 :
  goto g_4;
  e_14 :
  Return();
  g_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  a_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_8;
  k_8 :
  TestStr(1,1,"-s",&&fail);
  Rpush(j_4);
  goto b_14;
  j_4 :
  goto i_4;
  b_14 :
  Return();
  i_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  x_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_8;
  h_8 :
  TestStr(1,1,"-b",&&fail);
  Rpush(n_4);
  goto y_13;
  n_4 :
  goto m_4;
  y_13 :
  Return();
  m_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  t_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_8;
  d_8 :
  TestStr(1,1,"--output",&&fail);
  Rpush(q_4);
  goto u_13;
  q_4 :
  goto o_4;
  u_13 :
  Return();
  o_4 :
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
  p_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_7;
  z_7 :
  TestStr(1,1,"-o",&&fail);
  Rpush(t_4);
  goto q_13;
  t_4 :
  goto r_4;
  q_13 :
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
  f_1 :
  goto e_1;
  l_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_7;
  v_7 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto m_13;
  x_4 :
  goto w_4;
  m_13 :
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
  h_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_7;
  r_7 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto i_13;
  z_4 :
  goto y_4;
  i_13 :
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
  d_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_7;
  n_7 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_5);
  goto e_13;
  b_5 :
  goto a_5;
  e_13 :
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
  a_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_7;
  k_7 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_5);
  goto b_13;
  d_5 :
  goto c_5;
  b_13 :
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
  x_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_7;
  h_7 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_5);
  goto y_12;
  f_5 :
  goto e_5;
  y_12 :
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
  u_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_7;
  e_7 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_5);
  goto v_12;
  h_5 :
  goto g_5;
  v_12 :
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
  r_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_7;
  b_7 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_5);
  goto s_12;
  j_5 :
  goto i_5;
  s_12 :
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
  o_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_6;
  y_6 :
  TestStr(1,1,"-S",&&fail);
  Rpush(m_6);
  goto p_12;
  m_6 :
  goto l_6;
  p_12 :
  Return();
  l_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_m_5)
  Tdupl();
  n_6 :
  TestFunTop(a_0);
  Cpush(o_6);
  Arg(0);
  Cpush(r_6);
  Ccall(_stratego_n_5);
  goto q_6;
  r_6 :
  Epushd(0,2);
  MoveTop(0,1);
  goto n_14;
  n_14 :
  TestFunFC(v_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(u_6);
  goto r_14;
  u_6 :
  goto t_6;
  r_14 :
  Return();
  t_6 :
  Epopd(0,2);
  goto s_6;
  q_6 :
  Cpop();
  s_6 :
  Tpop();
  Cpop();
  goto p_6;
  o_6 :
  Arg(1);
  Tdrop();
  goto n_6;
  p_6 :
  Tpop();
  Ccall(_stratego_o_5);
ENDPROC

PROC(_stratego_n_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_14;
  t_14 :
  TestFunFC(z_6,&&fail,Egetd(0,1));
  Rpush(x_6);
  goto v_14;
  x_6 :
  goto w_6;
  v_14 :
  Return();
  w_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_5)
  Epushd(0,1);
  Tdupl();
  Rpush(a_7);
  e_15 :
  Cpush(d_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_14;
  x_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_14;
  y_14 :
  TestFunFC(i_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_7);
  goto f_15;
  g_7 :
  goto f_7;
  f_15 :
  Move(0,1,1,3);
  Return();
  f_7 :
  Epopd(1,4);
  goto c_7;
  d_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_7);
  goto e_15;
  l_7 :
  AllBuild();
  goto j_7;
  c_7 :
  Cpop();
  j_7 :
  Return();
  a_7 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_p_5);
  Tset(MakeInt(1));
  Ccall(_stratego_q_5);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_q_5)
  _ST_exit();
ENDPROC

PROC(_stratego_r_5)
  Epushd(0,3);
  Tdupl();
  Cpush(o_7);
  Rpush(p_7);
  z_15 :
  Cpush(s_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_15;
  h_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_15;
  i_15 :
  TestFunFC(w_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(u_7);
  goto a_16;
  u_7 :
  goto t_7;
  a_16 :
  Move(0,1,1,3);
  Return();
  t_7 :
  Epopd(1,4);
  goto q_7;
  s_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_7);
  goto z_15;
  y_7 :
  AllBuild();
  goto x_7;
  q_7 :
  Cpop();
  x_7 :
  Return();
  p_7 :
  goto m_7;
  o_7 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto a_8;
  m_7 :
  Cpop();
  a_8 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_s_5);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_s_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_t_5)
  _ST_dtime();
ENDPROC

PROC(_stratego_u_5)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(c_8);
  Rpush(e_8);
  g_17 :
  Cpush(g_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_16;
  g_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_16;
  h_16 :
  TestFunFC(l_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(j_8);
  goto h_17;
  j_8 :
  goto i_8;
  h_17 :
  Move(0,1,1,3);
  Return();
  i_8 :
  Epopd(1,4);
  goto f_8;
  g_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_8);
  goto g_17;
  o_8 :
  AllBuild();
  goto m_8;
  f_8 :
  Cpop();
  m_8 :
  Return();
  e_8 :
  goto b_8;
  c_8 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto p_8;
  b_8 :
  Cpop();
  p_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_5);
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
  Ccall(_stratego_z_5);
  AllBuild();
  AllBuild();
  Cpush(s_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(u_8);
  p_17 :
  Cpush(d_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto n_16;
  n_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_16;
  o_16 :
  TestFunFC(h_9,&&fail,Egetd(1,2));
  Rpush(g_9);
  goto q_17;
  g_9 :
  goto f_9;
  q_17 :
  Return();
  f_9 :
  Epopd(1,3);
  goto c_9;
  d_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_9);
  goto p_17;
  k_9 :
  AllBuild();
  goto i_9;
  c_9 :
  Cpop();
  i_9 :
  Return();
  u_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  OneNextSon();
  Ccall(_stratego_z_5);
  AllBuild();
  AllBuild();
  goto r_8;
  s_8 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_z_5);
  AllBuild();
  AllBuild();
  goto l_9;
  r_8 :
  Cpop();
  l_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_5)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_w_5)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_x_5)
  Epushd(0,2);
  Tdupl();
  Cpush(n_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(p_9);
  Tdupl();
  Rpush(q_9);
  n_18 :
  Cpush(s_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto s_17;
  s_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_17;
  t_17 :
  TestFunFC(w_9,&&fail,Egetd(1,2));
  Rpush(v_9);
  goto o_18;
  v_9 :
  goto u_9;
  o_18 :
  Return();
  u_9 :
  Epopd(1,3);
  goto r_9;
  s_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_9);
  goto n_18;
  z_9 :
  AllBuild();
  goto x_9;
  r_9 :
  Cpop();
  x_9 :
  Return();
  q_9 :
  Cpop();
  Crestore();
  Cjump();
  p_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_5);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(a_10);
  p_18 :
  Cpush(c_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto v_17;
  v_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto w_17;
  w_17 :
  TestFunFC(g_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_10);
  goto q_18;
  f_10 :
  goto d_10;
  q_18 :
  Move(0,2,1,3);
  Return();
  d_10 :
  Epopd(1,4);
  goto b_10;
  c_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_10);
  goto p_18;
  i_10 :
  AllBuild();
  goto h_10;
  b_10 :
  Cpop();
  h_10 :
  Return();
  a_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_5);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(j_10);
  r_18 :
  Cpush(l_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_17;
  y_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_17;
  z_17 :
  TestFunFC(i_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_10);
  goto s_18;
  o_10 :
  goto n_10;
  s_18 :
  Move(0,1,1,3);
  Return();
  n_10 :
  Epopd(1,4);
  goto k_10;
  l_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_10);
  goto r_18;
  q_10 :
  AllBuild();
  goto p_10;
  k_10 :
  Cpop();
  p_10 :
  Return();
  j_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_5);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_p_5);
  goto m_9;
  n_9 :
  goto r_10;
  m_9 :
  Cpop();
  r_10 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_q_5);
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_5)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_p_5);
  Tset(MakeInt(1));
  Ccall(_stratego_q_5);
ENDPROC

PROC(_stratego_z_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_18;
  u_18 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(t_10);
  goto w_18;
  t_10 :
  goto s_10;
  w_18 :
  Return();
  s_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_6)
  Cpush(w_10);
  Rpush(x_10);
  m_19 :
  Cpush(z_10);
  Ccall(_stratego_k_5);
  goto y_10;
  z_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_6);
  OneNextSon();
  Rpush(b_11);
  goto m_19;
  b_11 :
  AllBuild();
  goto a_11;
  y_10 :
  Cpop();
  a_11 :
  Return();
  x_10 :
  goto v_10;
  w_10 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a strategy-specification: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_p_5);
  Epopd(0,1);
  Tpop();
  goto d_11;
  v_10 :
  Cpop();
  d_11 :
ENDPROC

PROC(_stratego_b_6)
  Cpush(f_11);
  TestFunTop(g_11);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_6);
  OneNextSon();
  Ccall(_stratego_k_5);
  OneNextSon();
  Ccall(_stratego_e_6);
  AllBuild();
  goto e_11;
  f_11 :
  Ccontinue(h_11);
  TestFunTop(i_11);
  TravInit();
  OneNextSon();
  Rpush(j_11);
  h_20 :
  Cpush(m_11);
  Ccall(_stratego_k_5);
  goto l_11;
  m_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_6);
  OneNextSon();
  Rpush(o_11);
  goto h_20;
  o_11 :
  AllBuild();
  goto n_11;
  l_11 :
  Cpop();
  n_11 :
  Return();
  j_11 :
  OneNextSon();
  Ccall(_stratego_d_6);
  OneNextSon();
  Ccall(_stratego_k_5);
  OneNextSon();
  Ccall(_stratego_e_6);
  AllBuild();
  goto e_11;
  h_11 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a strategy-definition: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_p_5);
  Epopd(0,1);
  Tpop();
  goto p_11;
  e_11 :
  Cpop();
  p_11 :
ENDPROC

PROC(_stratego_c_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_20;
  o_20 :
  TestFunFC(t_11,&&fail,Egetd(0,1));
  Rpush(s_11);
  goto q_20;
  s_11 :
  goto q_11;
  q_20 :
  Return();
  q_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_6)
  _ST_is_string();
ENDPROC

PROC(_stratego_e_6)
  Rpush(u_11);
  y_21 :
  Cpush(x_11);
  Ccall(_stratego_f_6);
  goto v_11;
  x_11 :
  Ccontinue(y_11);
  Ccall(_stratego_g_6);
  goto v_11;
  y_11 :
  Ccontinue(z_11);
  TestFunTop(a_12);
  TravInit();
  OneNextSon();
  Rpush(c_12);
  goto y_21;
  c_12 :
  AllBuild();
  goto v_11;
  z_11 :
  Ccontinue(d_12);
  TestFunTop(e_12);
  TravInit();
  OneNextSon();
  Rpush(f_12);
  goto y_21;
  f_12 :
  AllBuild();
  goto v_11;
  d_12 :
  Ccontinue(h_12);
  TestFunTop(i_12);
  TravInit();
  OneNextSon();
  Rpush(j_12);
  goto y_21;
  j_12 :
  OneNextSon();
  Rpush(k_12);
  goto y_21;
  k_12 :
  AllBuild();
  goto v_11;
  h_12 :
  Ccontinue(m_12);
  TestFunTop(n_12);
  TravInit();
  OneNextSon();
  Rpush(q_12);
  goto y_21;
  q_12 :
  OneNextSon();
  Rpush(t_12);
  goto y_21;
  t_12 :
  AllBuild();
  goto v_11;
  m_12 :
  Ccontinue(w_12);
  TestFunTop(z_12);
  TravInit();
  OneNextSon();
  Rpush(c_13);
  goto y_21;
  c_13 :
  OneNextSon();
  Rpush(f_13);
  goto y_21;
  f_13 :
  AllBuild();
  goto v_11;
  w_12 :
  Ccontinue(g_13);
  TestFunTop(j_13);
  TravInit();
  OneNextSon();
  TestFunTop(k_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_6);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_k_5);
  AllBuild();
  goto v_11;
  g_13 :
  Ccontinue(n_13);
  TestFunTop(o_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_6);
  OneNextSon();
  Rpush(r_13);
  goto y_21;
  r_13 :
  AllBuild();
  goto v_11;
  n_13 :
  Ccontinue(s_13);
  TestFunTop(v_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_6);
  OneNextSon();
  Rpush(w_13);
  goto y_21;
  w_13 :
  AllBuild();
  goto v_11;
  s_13 :
  Ccontinue(z_13);
  TestFunTop(c_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_6);
  OneNextSon();
  Rpush(f_14);
  z_21 :
  Cpush(l_14);
  Ccall(_stratego_k_5);
  goto i_14;
  l_14 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(s_14);
  goto y_21;
  s_14 :
  OneNextSon();
  Rpush(w_14);
  goto z_21;
  w_14 :
  AllBuild();
  goto m_14;
  i_14 :
  Cpop();
  m_14 :
  Return();
  f_14 :
  AllBuild();
  goto v_11;
  z_13 :
  Ccontinue(g_15);
  TestFunTop(j_15);
  TravInit();
  OneNextSon();
  Rpush(k_15);
  goto y_21;
  k_15 :
  AllBuild();
  goto v_11;
  g_15 :
  Ccontinue(l_15);
  TestFunTop(m_15);
  TravInit();
  OneNextSon();
  Rpush(s_15);
  goto y_21;
  s_15 :
  AllBuild();
  goto v_11;
  l_15 :
  Ccontinue(u_15);
  TestFunTop(m_15);
  TravInit();
  OneNextSon();
  Rpush(v_15);
  goto y_21;
  v_15 :
  AllBuild();
  goto v_11;
  u_15 :
  Ccontinue(w_15);
  TestFunTop(y_15);
  TravInit();
  OneNextSon();
  Rpush(b_16);
  goto y_21;
  b_16 :
  AllBuild();
  goto v_11;
  w_15 :
  Ccontinue(c_16);
  TestFunTop(d_16);
  TravInit();
  OneNextSon();
  Rpush(e_16);
  goto y_21;
  e_16 :
  AllBuild();
  goto v_11;
  c_16 :
  Ccontinue(f_16);
  TestFunTop(i_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_6);
  AllBuild();
  goto v_11;
  f_16 :
  Ccontinue(j_16);
  TestFunTop(k_16);
  TravInit();
  OneNextSon();
  Rpush(l_16);
  a_22 :
  Cpush(u_16);
  Ccall(_stratego_k_5);
  goto m_16;
  u_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(y_16);
  Ccall(_stratego_d_6);
  goto x_16;
  y_16 :
  Rpush(a_17);
  b_22 :
  Cpush(f_17);
  Ccall(_stratego_k_5);
  goto e_17;
  f_17 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_6);
  OneNextSon();
  Rpush(j_17);
  goto b_22;
  j_17 :
  AllBuild();
  goto i_17;
  e_17 :
  Cpop();
  i_17 :
  Return();
  a_17 :
  goto z_16;
  x_16 :
  Cpop();
  z_16 :
  OneNextSon();
  Rpush(k_17);
  goto a_22;
  k_17 :
  AllBuild();
  goto w_16;
  m_16 :
  Cpop();
  w_16 :
  Return();
  l_16 :
  OneNextSon();
  Rpush(l_17);
  goto y_21;
  l_17 :
  AllBuild();
  goto v_11;
  j_16 :
  Ccontinue(m_17);
  TestFunTop(n_17);
  TravInit();
  OneNextSon();
  Rpush(o_17);
  goto y_21;
  o_17 :
  AllBuild();
  goto v_11;
  m_17 :
  Ccontinue(r_17);
  TestFunTop(u_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_6);
  AllBuild();
  goto v_11;
  r_17 :
  Ccontinue(x_17);
  TestFunTop(t_18);
  TravInit();
  OneNextSon();
  TestFunTop(g_11);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_6);
  OneNextSon();
  Ccall(_stratego_k_5);
  OneNextSon();
  Rpush(x_18);
  goto y_21;
  x_18 :
  AllBuild();
  OneNextSon();
  Rpush(y_18);
  goto y_21;
  y_18 :
  AllBuild();
  goto v_11;
  x_17 :
  Ccontinue(z_18);
  TestFunTop(t_18);
  TravInit();
  OneNextSon();
  TestFunTop(i_11);
  TravInit();
  OneNextSon();
  Rpush(a_19);
  c_22 :
  Cpush(d_19);
  Ccall(_stratego_k_5);
  goto b_19;
  d_19 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_19);
  goto c_22;
  f_19 :
  AllBuild();
  goto e_19;
  b_19 :
  Cpop();
  e_19 :
  Return();
  a_19 :
  OneNextSon();
  Ccall(_stratego_d_6);
  OneNextSon();
  Ccall(_stratego_k_5);
  OneNextSon();
  Rpush(g_19);
  goto y_21;
  g_19 :
  AllBuild();
  OneNextSon();
  Rpush(h_19);
  goto y_21;
  h_19 :
  AllBuild();
  goto v_11;
  z_18 :
  Ccontinue(i_19);
  TestFunTop(j_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_6);
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  goto s_20;
  s_20 :
  TestFunFC(n_19,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_19);
  goto d_22;
  l_19 :
  goto k_19;
  d_22 :
  Return();
  k_19 :
  Epopd(0,2);
  OneNextSon();
  Rpush(o_19);
  e_22 :
  Cpush(q_19);
  Ccall(_stratego_k_5);
  goto p_19;
  q_19 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(s_19);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Rpush(t_19);
  goto y_21;
  t_19 :
  AllBuild();
  OneNextSon();
  Rpush(u_19);
  goto e_22;
  u_19 :
  AllBuild();
  goto r_19;
  p_19 :
  Cpop();
  r_19 :
  Return();
  o_19 :
  OneNextSon();
  Rpush(v_19);
  goto y_21;
  v_19 :
  AllBuild();
  goto v_11;
  i_19 :
  Ccontinue(w_19);
  TestFunTop(y_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_6);
  AllBuild();
  goto v_11;
  w_19 :
  Ccontinue(z_19);
  TestFunTop(a_20);
  TravInit();
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  goto u_20;
  u_20 :
  TestFunFC(n_19,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(c_20);
  goto f_22;
  c_20 :
  goto b_20;
  f_22 :
  Return();
  b_20 :
  Epopd(0,2);
  OneNextSon();
  Ccall(_stratego_i_6);
  AllBuild();
  goto v_11;
  z_19 :
  Ccontinue(d_20);
  TestFunTop(a_20);
  TravInit();
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  goto w_20;
  w_20 :
  TestFunFC(n_19,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_20);
  goto g_22;
  f_20 :
  goto e_20;
  g_22 :
  Return();
  e_20 :
  Epopd(0,2);
  OneNextSon();
  Ccall(_stratego_i_6);
  AllBuild();
  goto v_11;
  d_20 :
  Ccontinue(g_20);
  Epushd(0,3);
  MoveTop(0,1);
  goto y_20;
  y_20 :
  TestFunFC(k_20,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto z_20;
  z_20 :
  TestFunFC(n_19,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(j_20);
  goto h_22;
  j_20 :
  goto i_20;
  h_22 :
  Return();
  i_20 :
  Epopd(0,3);
  goto v_11;
  g_20 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a strategy-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_p_5);
  Epopd(0,1);
  Tpop();
  goto l_20;
  v_11 :
  Cpop();
  l_20 :
  Return();
  u_11 :
ENDPROC

PROC(_stratego_f_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_22;
  o_22 :
  TestFunFC(r_20,&&fail,Egetd(0,1));
  Rpush(n_20);
  goto q_22;
  n_20 :
  goto m_20;
  q_22 :
  Return();
  m_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_22;
  s_22 :
  TestFunFC(x_20,&&fail,Egetd(0,1));
  Rpush(v_20);
  goto u_22;
  v_20 :
  goto t_20;
  u_22 :
  Return();
  t_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_6)
  _ST_is_int();
ENDPROC

PROC(_stratego_i_6)
  Rpush(a_21);
  k_23 :
  Cpush(c_21);
  Ccall(_stratego_j_6);
  goto b_21;
  c_21 :
  Ccontinue(d_21);
  TestFunTop(n_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_6);
  AllBuild();
  goto b_21;
  d_21 :
  Ccontinue(e_21);
  TestFunTop(p_21);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_6);
  AllBuild();
  goto b_21;
  e_21 :
  Ccontinue(q_21);
  TestFunTop(r_21);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_6);
  AllBuild();
  goto b_21;
  q_21 :
  Ccontinue(s_21);
  TestFunTop(t_21);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_6);
  AllBuild();
  goto b_21;
  s_21 :
  Ccontinue(u_21);
  TestFunTop(v_21);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_6);
  OneNextSon();
  Rpush(w_21);
  l_23 :
  Cpush(i_22);
  Ccall(_stratego_k_5);
  goto x_21;
  i_22 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(k_22);
  goto k_23;
  k_22 :
  OneNextSon();
  Rpush(l_22);
  goto l_23;
  l_22 :
  AllBuild();
  goto j_22;
  x_21 :
  Cpop();
  j_22 :
  Return();
  w_21 :
  AllBuild();
  goto b_21;
  u_21 :
  Ccontinue(m_22);
  TestFunTop(n_22);
  TravInit();
  OneNextSon();
  Rpush(r_22);
  goto k_23;
  r_22 :
  AllBuild();
  goto b_21;
  m_22 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a term-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_p_5);
  Epopd(0,1);
  Tpop();
  goto v_22;
  b_21 :
  Cpop();
  v_22 :
  Return();
  a_21 :
ENDPROC

PROC(_stratego_j_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_23;
  s_23 :
  TestFunFC(y_22,&&fail,Egetd(0,1));
  Rpush(x_22);
  goto u_23;
  x_22 :
  goto w_22;
  u_23 :
  Return();
  w_22 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_6)
  _ST_is_real();
ENDPROC

DOIT

