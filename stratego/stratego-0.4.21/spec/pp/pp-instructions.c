#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,a_16);
VARDECL(AFun,o_15);
VARDECL(AFun,d_15);
VARDECL(AFun,c_15);
VARDECL(AFun,a_15);
VARDECL(AFun,y_14);
VARDECL(AFun,w_14);
VARDECL(AFun,t_14);
VARDECL(AFun,r_14);
VARDECL(AFun,q_14);
VARDECL(AFun,p_14);
VARDECL(AFun,m_14);
VARDECL(AFun,k_14);
VARDECL(AFun,i_14);
VARDECL(AFun,g_14);
VARDECL(AFun,d_14);
VARDECL(AFun,b_14);
VARDECL(AFun,z_13);
VARDECL(AFun,w_13);
VARDECL(AFun,u_13);
VARDECL(AFun,s_13);
VARDECL(AFun,q_13);
VARDECL(AFun,n_13);
VARDECL(AFun,l_13);
VARDECL(AFun,i_13);
VARDECL(AFun,i_11);
VARDECL(AFun,x_10);
VARDECL(AFun,g_10);
VARDECL(AFun,w_9);
VARDECL(AFun,s_8);
VARDECL(AFun,p_8);
VARDECL(AFun,f_4);
VARDECL(AFun,f_3);
VARDECL(AFun,k_2);
VARDECL(AFun,o_1);
VARDECL(AFun,u_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_u_8);
PROCDECL(_stratego_v_8);
PROCDECL(_stratego_w_8);
PROCDECL(_stratego_x_8);
PROCDECL(_stratego_y_8);
PROCDECL(_stratego_a_9);
PROCDECL(_stratego_b_9);
PROCDECL(_stratego_c_9);
PROCDECL(_stratego_d_9);
PROCDECL(_stratego_e_9);
PROCDECL(_stratego_f_9);
PROCDECL(_stratego_g_9);
PROCDECL(_stratego_h_9);
PROCDECL(_stratego_i_9);
PROCDECL(_stratego_j_9);
PROCDECL(_stratego_k_9);
PROCDECL(_stratego_l_9);
PROCDECL(_stratego_m_9);
PROCDECL(_stratego_n_9);
PROCDECL(_stratego_o_9);

PROC(_stratego_init_afuns)
  MOVE(a_16,ATmakeAFun("ATmakeInt",1,0));
  MOVE(o_15,ATmakeAFun("ATmakeReal",1,0));
  MOVE(d_15,ATmakeAFun("TestStr",4,0));
  MOVE(c_15,ATmakeAFun("TestReal",4,0));
  MOVE(a_15,ATmakeAFun("TestInt",4,0));
  MOVE(y_14,ATmakeAFun("VARDECL",2,0));
  MOVE(w_14,ATmakeAFun("MOVE",2,0));
  MOVE(t_14,ATmakeAFun("TestFunTop",1,0));
  MOVE(r_14,ATmakeAFun("Egetd",2,0));
  MOVE(q_14,ATmakeAFun("VAR",1,0));
  MOVE(p_14,ATmakeAFun("TestFunFC",3,0));
  MOVE(m_14,ATmakeAFun("Iprim",1,0));
  MOVE(k_14,ATmakeAFun("Cpush",1,0));
  MOVE(i_14,ATmakeAFun("SomeNextSon",1,0));
  MOVE(g_14,ATmakeAFun("OneNextSon",1,0));
  MOVE(d_14,ATmakeAFun("ThreadNextSon",1,0));
  MOVE(b_14,ATmakeAFun("AllNextSon",1,0));
  MOVE(z_13,ATmakeAFun("Rpush",1,0));
  MOVE(w_13,ATmakeAFun("Ccall",2,0));
  MOVE(u_13,ATmakeAFun("ENDPROC",0,0));
  MOVE(s_13,ATmakeAFun("PROCDECL",1,0));
  MOVE(q_13,ATmakeAFun("PROC",1,0));
  MOVE(n_13,ATmakeAFun("Label",1,0));
  MOVE(l_13,ATmakeAFun("Ccontinue",1,0));
  MOVE(i_13,ATmakeAFun("Goto",1,0));
  MOVE(i_11,ATmakeAFun("Runtime",1,0));
  MOVE(x_10,ATmakeAFun("Silent",0,0));
  MOVE(g_10,ATmakeAFun("Input",1,0));
  MOVE(w_9,ATmakeAFun("Program",1,0));
  MOVE(s_8,ATmakeAFun("Help",0,0));
  MOVE(p_8,ATmakeAFun("Undefined",1,0));
  MOVE(f_4,ATmakeAFun("Nil",0,0));
  MOVE(f_3,ATmakeAFun("TNil",0,0));
  MOVE(k_2,ATmakeAFun("Block",1,0));
  MOVE(o_1,ATmakeAFun("Output",1,0));
  MOVE(u_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Epushd(0,1);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Program",Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(b_0);
  i_3 :
  Cpush(g_0);
  Cpush(i_0);
  Ccall(_stratego_u_8);
  goto h_0;
  i_0 :
  Ccall(_stratego_v_8);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_0);
  goto i_3;
  k_0 :
  AllBuild();
  goto j_0;
  h_0 :
  Cpop();
  j_0 :
  goto d_0;
  g_0 :
  Epushd(1,3);
  MoveTop(1,1);
  goto c_0;
  c_0 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(n_0);
  goto j_3;
  n_0 :
  goto m_0;
  j_3 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",App1("Undefined",Egetd(1,2)),Egetd(1,3)));
  Return();
  m_0 :
  Epopd(1,3);
  goto l_0;
  d_0 :
  Cpop();
  l_0 :
  Return();
  b_0 :
  AllBuild();
  Cpush(s_0);
  Ccall(_stratego_w_8);
  goto r_0;
  s_0 :
  Ccontinue(t_0);
  Epushd(1,6);
  Ccall(_stratego_c_9);
  Tdupl();
  Ccall(_stratego_e_9);
  Tpop();
  Tdupl();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Cpush(w_0);
  Rpush(x_0);
  k_3 :
  Cpush(d_1);
  Epushd(2,4);
  MoveTop(2,1);
  goto e_0;
  e_0 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto f_0;
  f_0 :
  TestFunFC(o_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(i_1);
  goto l_3;
  i_1 :
  goto h_1;
  l_3 :
  Move(0,1,2,3);
  Return();
  h_1 :
  Epopd(2,4);
  goto y_0;
  d_1 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_1);
  goto k_3;
  r_1 :
  AllBuild();
  goto q_1;
  y_0 :
  Cpop();
  q_1 :
  Return();
  x_0 :
  goto v_0;
  w_0 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto s_1;
  v_0 :
  Cpop();
  s_1 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_9);
  AllBuild();
  AllBuild();
  Tpop();
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_h_9);
  Tpop();
  Tdupl();
  Tset(App2("Cons",App2("Cons",ATmakeString("#include <stratego.h>"),App0("Nil")),App2("Cons",App2("Cons",ATmakeString("#include <stratego-lib.h>"),App0("Nil")),App2("Cons",App2("Cons",ATmakeString("#include <stratego-ext.h>"),App0("Nil")),App2("Cons",App0("Nil"),App0("Nil"))))));
  Rpush(t_1);
  n_3 :
  Cpush(w_1);
  Ccall(_stratego_u_8);
  goto u_1;
  w_1 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(2,1),App0("TNil"))));
  Ccall(_stratego_a_9);
  Epopd(2,1);
  Tpop();
  OneNextSon();
  Rpush(e_2);
  goto n_3;
  e_2 :
  AllBuild();
  goto y_1;
  u_1 :
  Cpop();
  y_1 :
  Return();
  t_1 :
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(f_2);
  q_6 :
  Cpush(j_2);
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  Rpush(l_2);
  r_6 :
  Cpush(n_2);
  Ccall(_stratego_u_8);
  goto m_2;
  n_2 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(q_2);
  goto q_6;
  q_2 :
  OneNextSon();
  Rpush(r_2);
  goto r_6;
  r_2 :
  AllBuild();
  goto p_2;
  m_2 :
  Cpop();
  p_2 :
  Return();
  l_2 :
  AllBuild();
  goto h_2;
  j_2 :
  Tdupl();
  Cpush(u_2);
  Ccall(_stratego_i_9);
  goto t_2;
  u_2 :
  Epushd(2,7);
  MoveTop(2,1);
  Ccall(_stratego_j_9);
  MoveTop(2,2);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",App2("Cons",ATmakeString(";"),App0("Nil")),App0("TNil"))));
  MoveTop(2,3);
  goto o_0;
  o_0 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_0;
  p_0 :
  TestFunFC(u_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto q_0;
  q_0 :
  TestFunFC(f_3,&&fail,Egetd(2,7));
  Rpush(x_2);
  goto y_6;
  x_2 :
  goto w_2;
  y_6 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(g_3);
  z_6 :
  Cpush(m_3);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_3);
  goto z_6;
  o_3 :
  AllBuild();
  goto h_3;
  m_3 :
  Ccall(_stratego_u_8);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto p_3;
  h_3 :
  Cpop();
  p_3 :
  Return();
  g_3 :
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),Egetd(3,1)),App0("Nil")));
  Epopd(3,1);
  Return();
  w_2 :
  Epopd(2,7);
  goto v_2;
  t_2 :
  Cpop();
  v_2 :
  Rpush(q_3);
  f_7 :
  Cpush(s_3);
  Ccall(_stratego_u_8);
  goto r_3;
  s_3 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(2,1),App0("TNil"))));
  Ccall(_stratego_a_9);
  Epopd(2,1);
  Tpop();
  OneNextSon();
  Rpush(u_3);
  goto f_7;
  u_3 :
  AllBuild();
  goto t_3;
  r_3 :
  Cpop();
  t_3 :
  Return();
  q_3 :
  Tpop();
  goto s_2;
  h_2 :
  Cpop();
  s_2 :
  Return();
  f_2 :
  OneNextSon();
  Ccall(_stratego_o_9);
  AllBuild();
  AllBuild();
  Tdupl();
  Tset(App2("Cons",App0("Nil"),App2("Cons",App2("Cons",ATmakeString("DOIT"),App0("Nil")),App2("Cons",App0("Nil"),App0("Nil")))));
  Rpush(v_3);
  j_7 :
  Cpush(x_3);
  Ccall(_stratego_u_8);
  goto w_3;
  x_3 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(2,1),App0("TNil"))));
  Ccall(_stratego_a_9);
  Epopd(2,1);
  Tpop();
  OneNextSon();
  Rpush(z_3);
  goto j_7;
  z_3 :
  AllBuild();
  goto y_3;
  w_3 :
  Cpop();
  y_3 :
  Return();
  v_3 :
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_9);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  MoveTop(1,2);
  goto z_0;
  z_0 :
  TestFunFC(u_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto a_1;
  a_1 :
  TestFunFC(u_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto b_1;
  b_1 :
  TestFunFC(f_3,&&fail,Egetd(1,6));
  Rpush(b_4);
  goto z_8;
  b_4 :
  goto a_4;
  z_8 :
  NotNULLd(1,1);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(1,1)),Egetd(1,3)),App2("TCons",Egetd(1,5),App0("TNil"))));
  Return();
  a_4 :
  Ccall(_stratego_f_9);
  Epopd(1,6);
  goto r_0;
  t_0 :
  Ccall(_stratego_g_9);
  goto c_4;
  r_0 :
  Cpop();
  c_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_9;
  q_9 :
  TestFunFC(f_4,&&fail,Egetd(0,1));
  Rpush(e_4);
  goto s_9;
  e_4 :
  goto d_4;
  s_9 :
  Return();
  d_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_8)
  Epushd(0,5);
  MoveTop(0,3);
  goto g_12;
  g_12 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto h_12;
  h_12 :
  TestFunFC(a_0,&&w_4,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(y_4);
  Rpush(z_4);
  goto g_17;
  z_4 :
  goto x_4;
  y_4 :
  Ccontinue(a_5);
  Rpush(b_5);
  goto j_17;
  b_5 :
  goto x_4;
  a_5 :
  Ccontinue(c_5);
  Rpush(d_5);
  goto m_17;
  d_5 :
  goto x_4;
  c_5 :
  Ccontinue(e_5);
  Rpush(f_5);
  goto p_17;
  f_5 :
  goto x_4;
  e_5 :
  Ccontinue(g_5);
  Rpush(h_5);
  goto s_17;
  h_5 :
  goto x_4;
  g_5 :
  Ccontinue(i_5);
  Rpush(j_5);
  goto v_17;
  j_5 :
  goto x_4;
  i_5 :
  Ccontinue(k_5);
  Rpush(l_5);
  goto z_17;
  l_5 :
  goto x_4;
  k_5 :
  Ccontinue(m_5);
  Rpush(n_5);
  goto d_18;
  n_5 :
  goto x_4;
  m_5 :
  Ccontinue(o_5);
  Rpush(p_5);
  goto h_18;
  p_5 :
  goto x_4;
  o_5 :
  Ccontinue(q_5);
  Rpush(r_5);
  goto l_18;
  r_5 :
  goto x_4;
  q_5 :
  Ccontinue(s_5);
  Rpush(t_5);
  goto r_18;
  t_5 :
  goto x_4;
  s_5 :
  Ccontinue(u_5);
  Rpush(v_5);
  goto w_18;
  v_5 :
  goto x_4;
  u_5 :
  Ccontinue(w_5);
  Rpush(x_5);
  goto z_18;
  x_5 :
  goto x_4;
  w_5 :
  Ccontinue(y_5);
  Rpush(z_5);
  goto c_19;
  z_5 :
  goto x_4;
  y_5 :
  Rpush(b_6);
  goto f_19;
  b_6 :
  goto a_6;
  x_4 :
  Cpop();
  a_6 :
  goto v_4;
  w_4 :
  Cpush(d_6);
  Rpush(e_6);
  goto g_17;
  e_6 :
  goto c_6;
  d_6 :
  Ccontinue(f_6);
  Rpush(g_6);
  goto j_17;
  g_6 :
  goto c_6;
  f_6 :
  Ccontinue(h_6);
  Rpush(i_6);
  goto m_17;
  i_6 :
  goto c_6;
  h_6 :
  Ccontinue(j_6);
  Rpush(k_6);
  goto p_17;
  k_6 :
  goto c_6;
  j_6 :
  Ccontinue(l_6);
  Rpush(m_6);
  goto s_17;
  m_6 :
  goto c_6;
  l_6 :
  Ccontinue(n_6);
  Rpush(o_6);
  goto r_18;
  o_6 :
  goto c_6;
  n_6 :
  Ccontinue(p_6);
  Rpush(s_6);
  goto w_18;
  s_6 :
  goto c_6;
  p_6 :
  Ccontinue(t_6);
  Rpush(u_6);
  goto z_18;
  u_6 :
  goto c_6;
  t_6 :
  Ccontinue(v_6);
  Rpush(w_6);
  goto c_19;
  w_6 :
  goto c_6;
  v_6 :
  Rpush(a_7);
  goto f_19;
  a_7 :
  goto x_6;
  c_6 :
  Cpop();
  x_6 :
  goto v_4;
  v_4 :
  goto u_4;
  f_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_12;
  e_12 :
  TestStr(1,1,"-?",&&fail);
  Rpush(c_7);
  goto g_19;
  c_7 :
  goto b_7;
  g_19 :
  Return();
  b_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  u_4 :
  goto t_4;
  c_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_12;
  b_12 :
  TestStr(1,1,"-h",&&fail);
  Rpush(e_7);
  goto d_19;
  e_7 :
  goto d_7;
  d_19 :
  Return();
  d_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  t_4 :
  goto s_4;
  z_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_11;
  y_11 :
  TestStr(1,1,"--help",&&fail);
  Rpush(h_7);
  goto a_19;
  h_7 :
  goto g_7;
  a_19 :
  Return();
  g_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  s_4 :
  goto r_4;
  w_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_11;
  v_11 :
  TestStr(1,1,"-s",&&fail);
  Rpush(k_7);
  goto x_18;
  k_7 :
  goto i_7;
  x_18 :
  Return();
  i_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  r_4 :
  goto q_4;
  r_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_11;
  s_11 :
  TestStr(1,1,"-b",&&fail);
  Rpush(m_7);
  goto s_18;
  m_7 :
  goto l_7;
  s_18 :
  Return();
  l_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  q_4 :
  goto p_4;
  l_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_11;
  o_11 :
  TestStr(1,1,"--output",&&fail);
  Rpush(o_7);
  goto m_18;
  o_7 :
  goto n_7;
  m_18 :
  Return();
  n_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  p_4 :
  goto o_4;
  h_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_11;
  k_11 :
  TestStr(1,1,"-o",&&fail);
  Rpush(q_7);
  goto i_18;
  q_7 :
  goto p_7;
  i_18 :
  Return();
  p_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  o_4 :
  goto n_4;
  d_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_11;
  g_11 :
  TestStr(1,1,"--input",&&fail);
  Rpush(s_7);
  goto e_18;
  s_7 :
  goto r_7;
  e_18 :
  Return();
  r_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  n_4 :
  goto m_4;
  z_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_11;
  c_11 :
  TestStr(1,1,"-i",&&fail);
  Rpush(u_7);
  goto a_18;
  u_7 :
  goto t_7;
  a_18 :
  Return();
  t_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  m_4 :
  goto l_4;
  v_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_10;
  y_10 :
  TestStr(1,1,"@version",&&fail);
  Rpush(w_7);
  goto w_17;
  w_7 :
  goto v_7;
  w_17 :
  Return();
  v_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  l_4 :
  goto k_4;
  s_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_10;
  v_10 :
  TestStr(1,1,"--version",&&fail);
  Rpush(y_7);
  goto t_17;
  y_7 :
  goto x_7;
  t_17 :
  Return();
  x_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  k_4 :
  goto j_4;
  p_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_10;
  s_10 :
  TestStr(1,1,"-v",&&fail);
  Rpush(a_8);
  goto q_17;
  a_8 :
  goto z_7;
  q_17 :
  Return();
  z_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  j_4 :
  goto i_4;
  m_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_10;
  p_10 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(c_8);
  goto n_17;
  c_8 :
  goto b_8;
  n_17 :
  Return();
  b_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  i_4 :
  goto h_4;
  j_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_10;
  m_10 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(e_8);
  goto k_17;
  e_8 :
  goto d_8;
  k_17 :
  Return();
  d_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  h_4 :
  goto g_4;
  g_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_10;
  j_10 :
  TestStr(1,1,"-S",&&fail);
  Rpush(g_8);
  goto h_17;
  g_8 :
  goto f_8;
  h_17 :
  Return();
  f_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  g_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_w_8)
  Tdupl();
  h_8 :
  TestFunTop(a_0);
  Cpush(i_8);
  Arg(0);
  Cpush(l_8);
  Ccall(_stratego_x_8);
  goto k_8;
  l_8 :
  Epushd(0,2);
  MoveTop(0,1);
  goto j_19;
  j_19 :
  TestFunFC(p_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(o_8);
  goto n_19;
  o_8 :
  goto n_8;
  n_19 :
  Return();
  n_8 :
  Epopd(0,2);
  goto m_8;
  k_8 :
  Cpop();
  m_8 :
  Tpop();
  Cpop();
  goto j_8;
  i_8 :
  Arg(1);
  Tdrop();
  goto h_8;
  j_8 :
  Tpop();
  Ccall(_stratego_y_8);
ENDPROC

PROC(_stratego_x_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_19;
  p_19 :
  TestFunFC(s_8,&&fail,Egetd(0,1));
  Rpush(r_8);
  goto r_19;
  r_8 :
  goto q_8;
  r_19 :
  Return();
  q_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_8)
  Epushd(0,1);
  Tdupl();
  Rpush(t_8);
  a_20 :
  Cpush(t_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_19;
  t_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_19;
  u_19 :
  TestFunFC(w_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_9);
  goto b_20;
  v_9 :
  goto u_9;
  b_20 :
  Move(0,1,1,3);
  Return();
  u_9 :
  Epopd(1,4);
  goto p_9;
  t_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_9);
  goto a_20;
  y_9 :
  AllBuild();
  goto x_9;
  p_9 :
  Cpop();
  x_9 :
  Return();
  t_8 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_a_9);
  Tset(MakeInt(1));
  Ccall(_stratego_b_9);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_9)
  _ST_printnl();
ENDPROC

PROC(_stratego_b_9)
  _ST_exit();
ENDPROC

PROC(_stratego_c_9)
  Epushd(0,3);
  Tdupl();
  Cpush(a_10);
  Rpush(b_10);
  y_20 :
  Cpush(d_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_20;
  d_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_20;
  e_20 :
  TestFunFC(g_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_10);
  goto z_20;
  f_10 :
  goto e_10;
  z_20 :
  Move(0,1,1,3);
  Return();
  e_10 :
  Epopd(1,4);
  goto c_10;
  d_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_10);
  goto y_20;
  i_10 :
  AllBuild();
  goto h_10;
  c_10 :
  Cpop();
  h_10 :
  Return();
  b_10 :
  goto z_9;
  a_10 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto k_10;
  z_9 :
  Cpop();
  k_10 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_d_9);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_d_9)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_e_9)
  _ST_dtime();
ENDPROC

PROC(_stratego_f_9)
  Epushd(0,2);
  Tdupl();
  Cpush(n_10);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Cpush(o_10);
  Tdupl();
  Rpush(q_10);
  a_22 :
  Cpush(t_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto f_21;
  f_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_21;
  g_21 :
  TestFunFC(x_10,&&fail,Egetd(1,2));
  Rpush(w_10);
  goto b_22;
  w_10 :
  goto u_10;
  b_22 :
  Return();
  u_10 :
  Epopd(1,3);
  goto r_10;
  t_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_11);
  goto a_22;
  a_11 :
  AllBuild();
  goto z_10;
  r_10 :
  Cpop();
  z_10 :
  Return();
  q_10 :
  Cpop();
  Crestore();
  Cjump();
  o_10 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_9);
  AllBuild();
  AllBuild();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(b_11);
  c_22 :
  Cpush(e_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_21;
  i_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_21;
  j_21 :
  TestFunFC(i_11,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_11);
  goto d_22;
  h_11 :
  goto f_11;
  d_22 :
  Move(0,2,1,3);
  Return();
  f_11 :
  Epopd(1,4);
  goto d_11;
  e_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_11);
  goto c_22;
  l_11 :
  AllBuild();
  goto j_11;
  d_11 :
  Cpop();
  j_11 :
  Return();
  b_11 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_9);
  AllBuild();
  AllBuild();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(m_11);
  e_22 :
  Cpush(p_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_21;
  l_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_21;
  m_21 :
  TestFunFC(w_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_11);
  goto f_22;
  r_11 :
  goto q_11;
  f_22 :
  Move(0,1,1,3);
  Return();
  q_11 :
  Epopd(1,4);
  goto n_11;
  p_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_11);
  goto e_22;
  u_11 :
  AllBuild();
  goto t_11;
  n_11 :
  Cpop();
  t_11 :
  Return();
  m_11 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_9);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_a_9);
  goto l_10;
  n_10 :
  goto w_11;
  l_10 :
  Cpop();
  w_11 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_b_9);
  Epopd(0,2);
ENDPROC

PROC(_stratego_g_9)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_a_9);
  Tset(MakeInt(1));
  Ccall(_stratego_b_9);
ENDPROC

PROC(_stratego_h_9)
  _ST_open_file();
ENDPROC

PROC(_stratego_i_9)
  Epushd(0,8);
  MoveTop(0,4);
  goto b_23;
  b_23 :
  TestFunFC(i_13,&&h_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_13);
  goto v_24;
  h_13 :
  TestFunFC(l_13,&&k_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_13);
  goto w_24;
  k_13 :
  TestFunFC(n_13,&&m_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_13);
  goto x_24;
  m_13 :
  TestFunFC(q_13,&&o_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_13);
  goto y_24;
  o_13 :
  TestFunFC(s_13,&&r_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_13);
  goto z_24;
  r_13 :
  TestFunFC(u_13,&&t_13,Egetd(0,4));
  Rpush(g_13);
  goto a_25;
  t_13 :
  TestFunFC(w_13,&&v_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto c_23;
  c_23 :
  TestFunFC(f_4,&&fail,Egetd(0,6));
  Rpush(g_13);
  goto b_25;
  v_13 :
  TestFunFC(z_13,&&y_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_13);
  goto c_25;
  y_13 :
  TestFunFC(b_14,&&a_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_13);
  goto d_25;
  a_14 :
  TestFunFC(d_14,&&c_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_13);
  goto e_25;
  c_14 :
  TestFunFC(g_14,&&e_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_13);
  goto f_25;
  e_14 :
  TestFunFC(i_14,&&h_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_13);
  goto g_25;
  h_14 :
  TestFunFC(k_14,&&j_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_13);
  goto h_25;
  j_14 :
  TestFunFC(m_14,&&l_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_13);
  goto i_25;
  l_14 :
  TestFunFC(p_14,&&o_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  goto d_23;
  d_23 :
  TestFunFC(q_14,&&fail,Egetd(0,5));
  MoveArg(0,3,0,5,0);
  goto e_23;
  e_23 :
  TestFunFC(r_14,&&fail,Egetd(0,7));
  MoveArg(0,1,0,7,0);
  MoveArg(0,2,0,7,1);
  Rpush(g_13);
  goto j_25;
  o_14 :
  TestFunFC(t_14,&&s_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto f_23;
  f_23 :
  TestFunFC(q_14,&&fail,Egetd(0,5));
  MoveArg(0,3,0,5,0);
  Rpush(g_13);
  goto k_25;
  s_14 :
  TestFunFC(w_14,&&u_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(g_13);
  goto l_25;
  u_14 :
  TestFunFC(y_14,&&x_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(g_13);
  goto m_25;
  x_14 :
  TestFunFC(a_15,&&z_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  MoveArg(0,8,0,4,3);
  Rpush(g_13);
  goto n_25;
  z_14 :
  TestFunFC(c_15,&&b_15,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  MoveArg(0,8,0,4,3);
  Rpush(g_13);
  goto o_25;
  b_15 :
  TestFunFC(d_15,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  MoveArg(0,8,0,4,3);
  Rpush(g_13);
  goto p_25;
  g_13 :
  goto f_13;
  p_25 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestStr("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(",\""),App2("Cons",Egetd(0,7),App2("Cons",ATmakeString("\",&&"),App2("Cons",Egetd(0,8),App2("Cons",ATmakeString(");"),App0("Nil"))))))))))),App0("Nil")));
  Return();
  f_13 :
  goto d_13;
  o_25 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestReal("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,7),App2("Cons",ATmakeString(",&&"),App2("Cons",Egetd(0,8),App2("Cons",ATmakeString(");"),App0("Nil"))))))))))),App0("Nil")));
  Return();
  d_13 :
  goto c_13;
  n_25 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestInt("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,7),App2("Cons",ATmakeString(",&&"),App2("Cons",Egetd(0,8),App2("Cons",ATmakeString(");"),App0("Nil"))))))))))),App0("Nil")));
  Return();
  c_13 :
  goto b_13;
  m_25 :
  NotNULLd(0,6);
  Tset(App2("Cons",App2("Cons",ATmakeString("VARDECL(AFun,"),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(");"),App0("Nil")))),App0("Nil")));
  Return();
  b_13 :
  goto a_13;
  l_25 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("MOVE("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(");"),App0("Nil"))))))),App0("Nil")));
  Return();
  a_13 :
  goto y_12;
  k_25 :
  NotNULLd(0,3);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestFunTop("),App2("Cons",Egetd(0,3),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  y_12 :
  goto x_12;
  j_25 :
  NotNULLd(0,3);
  NotNULLd(0,6);
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestFunFC("),App2("Cons",Egetd(0,3),App2("Cons",ATmakeString(",&&"),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(",Egetd("),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString("));"),App0("Nil"))))))))))),App0("Nil")));
  Return();
  x_12 :
  goto w_12;
  i_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString("();"),App0("Nil")))),App0("Nil")));
  Return();
  w_12 :
  goto v_12;
  h_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("Cpush("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  v_12 :
  goto t_12;
  g_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("SomeNextSon(&&"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  t_12 :
  goto s_12;
  f_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("OneNextSon(&&"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  s_12 :
  goto r_12;
  e_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("ThreadNextSon(&&"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  r_12 :
  goto q_12;
  d_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("AllNextSon(&&"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  q_12 :
  goto o_12;
  c_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("Rpush("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  o_12 :
  goto n_12;
  b_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("Ccall("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  n_12 :
  goto f_12;
  a_25 :
  Tset(App2("Cons",App2("Cons",ATmakeString("ENDPROC"),App0("Nil")),App0("Nil")));
  Return();
  f_12 :
  goto d_12;
  z_24 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("PROCDECL(_stratego_"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil")))),App0("Nil")));
  Return();
  d_12 :
  goto c_12;
  y_24 :
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Nil"),App2("Cons",App2("Cons",ATmakeString("PROC(_stratego_"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(")"),App0("Nil")))),App0("Nil"))));
  Return();
  c_12 :
  goto a_12;
  x_24 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(" :"),App0("Nil")))),App0("Nil")));
  Return();
  a_12 :
  goto z_11;
  w_24 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("Ccontinue("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  z_11 :
  goto x_11;
  v_24 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("goto "),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(";"),App0("Nil"))))),App0("Nil")));
  Return();
  x_11 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_j_9)
  Rpush(e_15);
  z_28 :
  Epushd(0,2);
  MoveTop(0,2);
  goto v_26;
  v_26 :
  TestFunFC(o_15,&&n_15,Egetd(0,2));
  MoveArg(0,1,0,2,0);
  Cpush(q_15);
  Rpush(r_15);
  goto a_29;
  r_15 :
  goto p_15;
  q_15 :
  Ccontinue(s_15);
  Rpush(t_15);
  goto b_29;
  t_15 :
  goto p_15;
  s_15 :
  Ccontinue(u_15);
  Rpush(v_15);
  goto c_29;
  v_15 :
  goto p_15;
  u_15 :
  Ccontinue(w_15);
  Rpush(x_15);
  goto d_29;
  x_15 :
  goto p_15;
  w_15 :
  Rpush(z_15);
  goto n_29;
  z_15 :
  goto y_15;
  p_15 :
  Cpop();
  y_15 :
  goto l_15;
  n_15 :
  TestFunFC(a_16,&&m_15,Egetd(0,2));
  MoveArg(0,1,0,2,0);
  Cpush(c_16);
  Rpush(d_16);
  goto a_29;
  d_16 :
  goto b_16;
  c_16 :
  Ccontinue(e_16);
  Rpush(f_16);
  goto b_29;
  f_16 :
  goto b_16;
  e_16 :
  Ccontinue(g_16);
  Rpush(h_16);
  goto c_29;
  h_16 :
  goto b_16;
  g_16 :
  Ccontinue(i_16);
  Rpush(k_16);
  goto i_29;
  k_16 :
  goto b_16;
  i_16 :
  Rpush(m_16);
  goto n_29;
  m_16 :
  goto l_16;
  b_16 :
  Cpop();
  l_16 :
  goto l_15;
  m_15 :
  Cpush(p_16);
  Rpush(q_16);
  goto a_29;
  q_16 :
  goto n_16;
  p_16 :
  Ccontinue(r_16);
  Rpush(s_16);
  goto b_29;
  s_16 :
  goto n_16;
  r_16 :
  Ccontinue(u_16);
  Rpush(v_16);
  goto c_29;
  v_16 :
  goto n_16;
  u_16 :
  Rpush(x_16);
  goto n_29;
  x_16 :
  goto w_16;
  n_16 :
  Cpop();
  w_16 :
  goto l_15;
  l_15 :
  goto k_15;
  n_29 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto j_26;
  j_26 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto k_26;
  k_26 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_26;
  l_26 :
  TestFunFC(f_3,&&fail,Egetd(2,5));
  Rpush(a_17);
  goto o_29;
  a_17 :
  goto z_16;
  o_29 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  z_16 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(b_17);
  p_29 :
  Cpush(e_17);
  Ccall(_stratego_u_8);
  goto c_17;
  e_17 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(i_17);
  goto z_28;
  i_17 :
  OneNextSon();
  Rpush(l_17);
  goto p_29;
  l_17 :
  AllBuild();
  goto f_17;
  c_17 :
  Cpop();
  f_17 :
  Return();
  b_17 :
  Cpush(r_17);
  Ccall(_stratego_u_8);
  goto o_17;
  r_17 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_17);
  q_29 :
  Cpush(b_18);
  Ccall(_stratego_u_8);
  goto y_17;
  b_18 :
  Epushd(2,3);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_18);
  goto q_29;
  g_18 :
  AllBuild();
  MoveTop(2,1);
  goto o_26;
  o_26 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(j_18);
  goto r_29;
  j_18 :
  goto f_18;
  r_29 :
  Tset(App2("Cons",ATmakeString(","),App0("Nil")));
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("Cons",App2("Cons",ATmakeString(","),App0("Nil")),App2("Cons",Egetd(2,2),Egetd(2,3))));
  Return();
  f_18 :
  Epopd(2,3);
  goto c_18;
  y_17 :
  Cpop();
  c_18 :
  Return();
  x_17 :
  AllBuild();
  goto u_17;
  o_17 :
  Cpop();
  u_17 :
  Ccall(_stratego_n_9);
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",App2("Cons",ATmakeString(")"),App0("Nil")),App0("TNil"))));
  MoveTop(1,4);
  goto s_26;
  s_26 :
  TestFunFC(u_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto t_26;
  t_26 :
  TestFunFC(u_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto u_26;
  u_26 :
  TestFunFC(f_3,&&fail,Egetd(1,8));
  Rpush(n_18);
  goto u_29;
  n_18 :
  goto k_18;
  u_29 :
  Epushd(2,1);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Rpush(o_18);
  v_29 :
  Cpush(q_18);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_18);
  goto v_29;
  t_18 :
  AllBuild();
  goto p_18;
  q_18 :
  Ccall(_stratego_u_8);
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  goto u_18;
  p_18 :
  Cpop();
  u_18 :
  Return();
  o_18 :
  MoveTop(2,1);
  NotNULLd(1,1);
  NotNULLd(2,1);
  Tset(App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("("),Egetd(2,1))));
  Epopd(2,1);
  Return();
  k_18 :
  Epopd(1,8);
  Return();
  k_15 :
  goto j_15;
  i_29 :
  Epushd(1,6);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(v_18);
  goto z_28;
  v_18 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",App2("Cons",ATmakeString(")"),App0("Nil")),App0("TNil"))));
  MoveTop(1,2);
  goto f_26;
  f_26 :
  TestFunFC(u_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto g_26;
  g_26 :
  TestFunFC(u_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto h_26;
  h_26 :
  TestFunFC(f_3,&&fail,Egetd(1,6));
  Rpush(b_19);
  goto k_29;
  b_19 :
  goto y_18;
  k_29 :
  Epushd(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(e_19);
  l_29 :
  Cpush(i_19);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_19);
  goto l_29;
  o_19 :
  AllBuild();
  goto h_19;
  i_19 :
  Ccall(_stratego_u_8);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto s_19;
  h_19 :
  Cpop();
  s_19 :
  Return();
  e_19 :
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("Cons",ATmakeString("(ATerm)ATmakeInt("),Egetd(2,1)));
  Epopd(2,1);
  Return();
  y_18 :
  Epopd(1,6);
  Return();
  j_15 :
  goto i_15;
  d_29 :
  Epushd(1,6);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(c_20);
  goto z_28;
  c_20 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",App2("Cons",ATmakeString(")"),App0("Nil")),App0("TNil"))));
  MoveTop(1,2);
  goto z_25;
  z_25 :
  TestFunFC(u_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto a_26;
  a_26 :
  TestFunFC(u_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto b_26;
  b_26 :
  TestFunFC(f_3,&&fail,Egetd(1,6));
  Rpush(g_20);
  goto f_29;
  g_20 :
  goto f_20;
  f_29 :
  Epushd(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(h_20);
  g_29 :
  Cpush(o_20);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_20);
  goto g_29;
  q_20 :
  AllBuild();
  goto i_20;
  o_20 :
  Ccall(_stratego_u_8);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto r_20;
  i_20 :
  Cpop();
  r_20 :
  Return();
  h_20 :
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("Cons",ATmakeString("(ATerm)ATmakeReal("),Egetd(2,1)));
  Epopd(2,1);
  Return();
  f_20 :
  Epopd(1,6);
  Return();
  i_15 :
  goto h_15;
  c_29 :
  Tdupl();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_m_9);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  h_15 :
  goto g_15;
  b_29 :
  Tdupl();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_l_9);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("Cons",ATmakeString("\""),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString("\""),App0("Nil")))));
  Return();
  g_15 :
  goto f_15;
  a_29 :
  Tdupl();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_k_9);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  f_15 :
  Epopd(0,2);
  Return();
  e_15 :
ENDPROC

PROC(_stratego_k_9)
  _ST_is_int();
ENDPROC

PROC(_stratego_l_9)
  _ST_is_string();
ENDPROC

PROC(_stratego_m_9)
  _ST_is_real();
ENDPROC

PROC(_stratego_n_9)
  Rpush(s_20);
  e_30 :
  Cpush(u_20);
  Ccall(_stratego_u_8);
  goto t_20;
  u_20 :
  Epushd(0,3);
  MoveTop(0,1);
  goto y_29;
  y_29 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(a_21);
  goto f_30;
  a_21 :
  goto x_20;
  f_30 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(b_21);
  g_30 :
  Cpush(d_21);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_21);
  goto g_30;
  e_21 :
  AllBuild();
  goto c_21;
  d_21 :
  Ccall(_stratego_u_8);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_21);
  goto e_30;
  k_21 :
  goto h_21;
  c_21 :
  Cpop();
  h_21 :
  Return();
  b_21 :
  Return();
  x_20 :
  Epopd(0,3);
  goto w_20;
  t_20 :
  Cpop();
  w_20 :
  Return();
  s_20 :
ENDPROC

PROC(_stratego_o_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_30;
  i_30 :
  TestFunFC(f_3,&&fail,Egetd(0,1));
  Rpush(h_22);
  goto k_30;
  h_22 :
  goto g_22;
  k_30 :
  Return();
  g_22 :
  Epopd(0,1);
ENDPROC

DOIT

