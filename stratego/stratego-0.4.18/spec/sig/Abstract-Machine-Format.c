#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,s_26);
VARDECL(AFun,q_26);
VARDECL(AFun,o_26);
VARDECL(AFun,g_26);
VARDECL(AFun,z_25);
VARDECL(AFun,t_25);
VARDECL(AFun,o_25);
VARDECL(AFun,k_25);
VARDECL(AFun,h_25);
VARDECL(AFun,f_25);
VARDECL(AFun,b_25);
VARDECL(AFun,y_24);
VARDECL(AFun,v_24);
VARDECL(AFun,s_24);
VARDECL(AFun,p_24);
VARDECL(AFun,m_24);
VARDECL(AFun,j_24);
VARDECL(AFun,g_24);
VARDECL(AFun,c_24);
VARDECL(AFun,z_23);
VARDECL(AFun,w_23);
VARDECL(AFun,s_23);
VARDECL(AFun,m_23);
VARDECL(AFun,a_23);
VARDECL(AFun,o_22);
VARDECL(AFun,c_22);
VARDECL(AFun,q_21);
VARDECL(AFun,e_21);
VARDECL(AFun,s_20);
VARDECL(AFun,j_20);
VARDECL(AFun,g_20);
VARDECL(AFun,w_19);
VARDECL(AFun,u_19);
VARDECL(AFun,s_19);
VARDECL(AFun,q_19);
VARDECL(AFun,f_19);
VARDECL(AFun,d_19);
VARDECL(AFun,b_19);
VARDECL(AFun,y_18);
VARDECL(AFun,v_18);
VARDECL(AFun,p_17);
VARDECL(AFun,z_16);
VARDECL(AFun,k_16);
VARDECL(AFun,c_16);
VARDECL(AFun,a_16);
VARDECL(AFun,w_15);
VARDECL(AFun,t_15);
VARDECL(AFun,k_15);
VARDECL(AFun,e_15);
VARDECL(AFun,q_14);
VARDECL(AFun,j_14);
VARDECL(AFun,d_14);
VARDECL(AFun,x_13);
VARDECL(AFun,t_13);
VARDECL(AFun,l_13);
VARDECL(AFun,i_13);
VARDECL(AFun,e_13);
VARDECL(AFun,l_12);
VARDECL(AFun,h_12);
VARDECL(AFun,f_12);
VARDECL(AFun,c_12);
VARDECL(AFun,q_11);
VARDECL(AFun,x_10);
VARDECL(AFun,o_10);
VARDECL(AFun,a_10);
VARDECL(AFun,n_9);
VARDECL(AFun,s_8);
VARDECL(AFun,d_8);
VARDECL(AFun,v_7);
VARDECL(AFun,r_7);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_g_4);
PROCDECL(_stratego_h_4);
PROCDECL(_stratego_i_4);
PROCDECL(_stratego_j_4);
PROCDECL(_stratego_k_4);
PROCDECL(_stratego_l_4);
PROCDECL(_stratego_m_4);
PROCDECL(_stratego_n_4);
PROCDECL(_stratego_o_4);
PROCDECL(_stratego_p_4);
PROCDECL(_stratego_q_4);
PROCDECL(_stratego_r_4);
PROCDECL(_stratego_s_4);
PROCDECL(_stratego_t_4);
PROCDECL(_stratego_u_4);
PROCDECL(_stratego_v_4);
PROCDECL(_stratego_w_4);
PROCDECL(_stratego_x_4);
PROCDECL(_stratego_y_4);
PROCDECL(_stratego_z_4);
PROCDECL(_stratego_a_5);
PROCDECL(_stratego_b_5);
PROCDECL(_stratego_c_5);
PROCDECL(_stratego_d_5);
PROCDECL(_stratego_e_5);
PROCDECL(_stratego_f_5);
PROCDECL(_stratego_g_5);
PROCDECL(_stratego_h_5);
PROCDECL(_stratego_i_5);
PROCDECL(_stratego_j_5);
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

PROC(_stratego_init_afuns)
  MOVE(s_26,ATmakeAFun("MakeInt",1,0));
  MOVE(q_26,ATmakeAFun("ATmakeString",1,0));
  MOVE(o_26,ATmakeAFun("Egetd",2,0));
  MOVE(g_26,ATmakeAFun("App6",7,0));
  MOVE(z_25,ATmakeAFun("App5",6,0));
  MOVE(t_25,ATmakeAFun("App4",5,0));
  MOVE(o_25,ATmakeAFun("App3",4,0));
  MOVE(k_25,ATmakeAFun("App2",3,0));
  MOVE(h_25,ATmakeAFun("App1",2,0));
  MOVE(f_25,ATmakeAFun("App0",1,0));
  MOVE(b_25,ATmakeAFun("SomeBuild",0,0));
  MOVE(y_24,ATmakeAFun("CounterOK",0,0));
  MOVE(v_24,ATmakeAFun("SomeInit",0,0));
  MOVE(s_24,ATmakeAFun("TravInit",0,0));
  MOVE(p_24,ATmakeAFun("Tpush",0,0));
  MOVE(m_24,ATmakeAFun("Tpop",0,0));
  MOVE(j_24,ATmakeAFun("Tduplinv",0,0));
  MOVE(g_24,ATmakeAFun("Tdupl",0,0));
  MOVE(c_24,ATmakeAFun("Tdrop",0,0));
  MOVE(z_23,ATmakeAFun("Return",0,0));
  MOVE(w_23,ATmakeAFun("OneNextSon",0,0));
  MOVE(s_23,ATmakeAFun("OneMatchNextSon",0,0));
  MOVE(m_23,ATmakeAFun("OneInit",0,0));
  MOVE(a_23,ATmakeAFun("OneBuild",0,0));
  MOVE(o_22,ATmakeAFun("IsAppl",0,0));
  MOVE(c_22,ATmakeAFun("Crestore",0,0));
  MOVE(q_21,ATmakeAFun("Cpop",0,0));
  MOVE(e_21,ATmakeAFun("Cjump",0,0));
  MOVE(s_20,ATmakeAFun("AllInit",0,0));
  MOVE(j_20,ATmakeAFun("AllBuild",0,0));
  MOVE(g_20,ATmakeAFun("ENDPROC",0,0));
  MOVE(w_19,ATmakeAFun("Tset",1,0));
  MOVE(u_19,ATmakeAFun("NotNULLd",2,0));
  MOVE(s_19,ATmakeAFun("Ccontinue",1,0));
  MOVE(q_19,ATmakeAFun("MoveTop",2,0));
  MOVE(f_19,ATmakeAFun("Move",4,0));
  MOVE(d_19,ATmakeAFun("TestReal",4,0));
  MOVE(b_19,ATmakeAFun("TestInt",4,0));
  MOVE(y_18,ATmakeAFun("TestStr",4,0));
  MOVE(v_18,ATmakeAFun("MoveArg",5,0));
  MOVE(p_17,ATmakeAFun("SomeNextSon",1,0));
  MOVE(z_16,ATmakeAFun("Rpush",1,0));
  MOVE(k_16,ATmakeAFun("Label",1,0));
  MOVE(c_16,ATmakeAFun("Iprim",1,0));
  MOVE(a_16,ATmakeAFun("Goto",1,0));
  MOVE(w_15,ATmakeAFun("Epushd",2,0));
  MOVE(t_15,ATmakeAFun("Epopd",2,0));
  MOVE(k_15,ATmakeAFun("Cpush",1,0));
  MOVE(e_15,ATmakeAFun("BuildVard",2,0));
  MOVE(q_14,ATmakeAFun("BuildStr",1,0));
  MOVE(j_14,ATmakeAFun("BuildInt",1,0));
  MOVE(d_14,ATmakeAFun("BuildFun",2,0));
  MOVE(x_13,ATmakeAFun("Arg",1,0));
  MOVE(t_13,ATmakeAFun("AllNextSon",1,0));
  MOVE(l_13,ATmakeAFun("MOVE",2,0));
  MOVE(i_13,ATmakeAFun("TestFunTop",1,0));
  MOVE(e_13,ATmakeAFun("TestFunFC",3,0));
  MOVE(l_12,ATmakeAFun("Ccall",2,0));
  MOVE(h_12,ATmakeAFun("PROC",1,0));
  MOVE(f_12,ATmakeAFun("PROCDECL",1,0));
  MOVE(c_12,ATmakeAFun("VARDECL",2,0));
  MOVE(q_11,ATmakeAFun("Block",1,0));
  MOVE(x_10,ATmakeAFun("Runtime",1,0));
  MOVE(o_10,ATmakeAFun("Silent",0,0));
  MOVE(a_10,ATmakeAFun("Binary",0,0));
  MOVE(n_9,ATmakeAFun("Output",1,0));
  MOVE(s_8,ATmakeAFun("Input",1,0));
  MOVE(d_8,ATmakeAFun("Program",1,0));
  MOVE(v_7,ATmakeAFun("Help",0,0));
  MOVE(r_7,ATmakeAFun("Undefined",1,0));
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
  y_5 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_g_4);
  goto f_0;
  g_0 :
  Ccall(_stratego_h_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto y_5;
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
  goto z_5;
  l_0 :
  goto k_0;
  z_5 :
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
  Ccall(_stratego_i_4);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_n_4);
  Tdupl();
  Ccall(_stratego_p_4);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_4);
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_p_4);
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
  goto b_6;
  r_0 :
  goto q_0;
  b_6 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_q_4);
  Ccall(_stratego_t_4);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_u_4);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_g_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_6;
  d_6 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto f_6;
  v_0 :
  goto u_0;
  f_6 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto t_8;
  t_8 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto u_8;
  u_8 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto m_12;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto p_12;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto s_12;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto v_12;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto y_12;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto b_13;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto f_13;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto j_13;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto n_13;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto r_13;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto v_13;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto y_13;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto b_14;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto e_14;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto h_14;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto m_12;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto p_12;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto s_12;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto v_12;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto y_12;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto v_13;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(r_3);
  Rpush(u_3);
  goto y_13;
  u_3 :
  goto t_2;
  r_3 :
  Ccontinue(v_3);
  Rpush(w_3);
  goto b_14;
  w_3 :
  goto t_2;
  v_3 :
  Ccontinue(x_3);
  Rpush(y_3);
  goto e_14;
  y_3 :
  goto t_2;
  x_3 :
  Rpush(b_4);
  goto h_14;
  b_4 :
  goto a_4;
  t_2 :
  Cpop();
  a_4 :
  goto m_1;
  m_1 :
  goto l_1;
  h_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_8;
  r_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_4);
  goto i_14;
  d_4 :
  goto c_4;
  i_14 :
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
  e_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_8;
  o_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(f_4);
  goto f_14;
  f_4 :
  goto e_4;
  f_14 :
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
  b_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_8;
  l_8 :
  TestStr(1,1,"--help",&&fail);
  Rpush(x_5);
  goto c_14;
  x_5 :
  goto w_5;
  c_14 :
  Return();
  w_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  y_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_8;
  i_8 :
  TestStr(1,1,"-s",&&fail);
  Rpush(c_6);
  goto z_13;
  c_6 :
  goto a_6;
  z_13 :
  Return();
  a_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  v_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_8;
  f_8 :
  TestStr(1,1,"-b",&&fail);
  Rpush(h_6);
  goto w_13;
  h_6 :
  goto g_6;
  w_13 :
  Return();
  g_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  r_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_8;
  b_8 :
  TestStr(1,1,"--output",&&fail);
  Rpush(j_6);
  goto s_13;
  j_6 :
  goto i_6;
  s_13 :
  Return();
  i_6 :
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
  n_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_7;
  x_7 :
  TestStr(1,1,"-o",&&fail);
  Rpush(l_6);
  goto o_13;
  l_6 :
  goto k_6;
  o_13 :
  Return();
  k_6 :
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
  j_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_7;
  t_7 :
  TestStr(1,1,"--input",&&fail);
  Rpush(n_6);
  goto k_13;
  n_6 :
  goto m_6;
  k_13 :
  Return();
  m_6 :
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
  f_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_7;
  p_7 :
  TestStr(1,1,"-i",&&fail);
  Rpush(p_6);
  goto g_13;
  p_6 :
  goto o_6;
  g_13 :
  Return();
  o_6 :
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
  b_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_7;
  l_7 :
  TestStr(1,1,"@version",&&fail);
  Rpush(r_6);
  goto c_13;
  r_6 :
  goto q_6;
  c_13 :
  Return();
  q_6 :
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
  y_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_7;
  i_7 :
  TestStr(1,1,"--version",&&fail);
  Rpush(t_6);
  goto z_12;
  t_6 :
  goto s_6;
  z_12 :
  Return();
  s_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  v_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_7;
  f_7 :
  TestStr(1,1,"-v",&&fail);
  Rpush(v_6);
  goto w_12;
  v_6 :
  goto u_6;
  w_12 :
  Return();
  u_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  s_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_7;
  c_7 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(y_6);
  goto t_12;
  y_6 :
  goto x_6;
  t_12 :
  Return();
  x_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  p_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_6;
  z_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(b_7);
  goto q_12;
  b_7 :
  goto a_7;
  q_12 :
  Return();
  a_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  m_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_6;
  w_6 :
  TestStr(1,1,"-S",&&fail);
  Rpush(e_7);
  goto n_12;
  e_7 :
  goto d_7;
  n_12 :
  Return();
  d_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_i_4)
  Tdupl();
  g_7 :
  TestFunTop(a_0);
  Cpush(h_7);
  Arg(0);
  Cpush(m_7);
  Ccall(_stratego_j_4);
  goto k_7;
  m_7 :
  Epushd(0,2);
  MoveTop(0,1);
  goto l_14;
  l_14 :
  TestFunFC(r_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(q_7);
  goto p_14;
  q_7 :
  goto o_7;
  p_14 :
  Return();
  o_7 :
  Epopd(0,2);
  goto n_7;
  k_7 :
  Cpop();
  n_7 :
  Tpop();
  Cpop();
  goto j_7;
  h_7 :
  Arg(1);
  Tdrop();
  goto g_7;
  j_7 :
  Tpop();
  Ccall(_stratego_k_4);
ENDPROC

PROC(_stratego_j_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_14;
  r_14 :
  TestFunFC(v_7,&&fail,Egetd(0,1));
  Rpush(u_7);
  goto t_14;
  u_7 :
  goto s_7;
  t_14 :
  Return();
  s_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_4)
  Epushd(0,1);
  Tdupl();
  Rpush(w_7);
  c_15 :
  Cpush(z_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto v_14;
  v_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto w_14;
  w_14 :
  TestFunFC(d_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_8);
  goto d_15;
  c_8 :
  goto a_8;
  d_15 :
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
  goto c_15;
  g_8 :
  AllBuild();
  goto e_8;
  y_7 :
  Cpop();
  e_8 :
  Return();
  w_7 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_l_4);
  Tset(MakeInt(1));
  Ccall(_stratego_m_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_m_4)
  _ST_exit();
ENDPROC

PROC(_stratego_n_4)
  Epushd(0,3);
  Tdupl();
  Cpush(j_8);
  Rpush(k_8);
  x_15 :
  Cpush(n_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_15;
  f_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_15;
  g_15 :
  TestFunFC(s_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_8);
  goto y_15;
  q_8 :
  goto p_8;
  y_15 :
  Move(0,1,1,3);
  Return();
  p_8 :
  Epopd(1,4);
  goto m_8;
  n_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_9);
  goto x_15;
  b_9 :
  AllBuild();
  goto a_9;
  m_8 :
  Cpop();
  a_9 :
  Return();
  k_8 :
  goto h_8;
  j_8 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto d_9;
  h_8 :
  Cpop();
  d_9 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_o_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_o_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_p_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_q_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(f_9);
  Rpush(g_9);
  h_17 :
  Cpush(j_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_16;
  e_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_16;
  f_16 :
  TestFunFC(n_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_9);
  goto i_17;
  l_9 :
  goto k_9;
  i_17 :
  Move(0,1,1,3);
  Return();
  k_9 :
  Epopd(1,4);
  goto i_9;
  j_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_9);
  goto h_17;
  p_9 :
  AllBuild();
  goto o_9;
  i_9 :
  Cpop();
  o_9 :
  Return();
  g_9 :
  goto e_9;
  f_9 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto q_9;
  e_9 :
  Cpop();
  q_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_4);
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
  Ccall(_stratego_v_4);
  AllBuild();
  AllBuild();
  Cpush(t_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(u_9);
  n_17 :
  Cpush(x_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto l_16;
  l_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_16;
  m_16 :
  TestFunFC(a_10,&&fail,Egetd(1,2));
  Rpush(z_9);
  goto o_17;
  z_9 :
  goto y_9;
  o_17 :
  Return();
  y_9 :
  Epopd(1,3);
  goto v_9;
  x_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_10);
  goto n_17;
  d_10 :
  AllBuild();
  goto b_10;
  v_9 :
  Cpop();
  b_10 :
  Return();
  u_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_4);
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  AllBuild();
  goto s_9;
  t_9 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_4);
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  AllBuild();
  goto e_10;
  s_9 :
  Cpop();
  e_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_s_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_t_4)
  Epushd(0,2);
  Tdupl();
  Cpush(g_10);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(h_10);
  Tdupl();
  Rpush(i_10);
  l_18 :
  Cpush(l_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto q_17;
  q_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_17;
  r_17 :
  TestFunFC(o_10,&&fail,Egetd(1,2));
  Rpush(n_10);
  goto m_18;
  n_10 :
  goto m_10;
  m_18 :
  Return();
  m_10 :
  Epopd(1,3);
  goto j_10;
  l_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_10);
  goto l_18;
  q_10 :
  AllBuild();
  goto p_10;
  j_10 :
  Cpop();
  p_10 :
  Return();
  i_10 :
  Cpop();
  Crestore();
  Cjump();
  h_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(r_10);
  n_18 :
  Cpush(u_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_17;
  t_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_17;
  u_17 :
  TestFunFC(x_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_10);
  goto o_18;
  w_10 :
  goto v_10;
  o_18 :
  Move(0,2,1,3);
  Return();
  v_10 :
  Epopd(1,4);
  goto t_10;
  u_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_10);
  goto n_18;
  z_10 :
  AllBuild();
  goto y_10;
  t_10 :
  Cpop();
  y_10 :
  Return();
  r_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(b_11);
  p_18 :
  Cpush(d_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_17;
  w_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_17;
  x_17 :
  TestFunFC(d_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_11);
  goto q_18;
  f_11 :
  goto e_11;
  q_18 :
  Move(0,1,1,3);
  Return();
  e_11 :
  Epopd(1,4);
  goto c_11;
  d_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_11);
  goto p_18;
  h_11 :
  AllBuild();
  goto g_11;
  c_11 :
  Cpop();
  g_11 :
  Return();
  b_11 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_l_4);
  goto f_10;
  g_10 :
  goto j_11;
  f_10 :
  Cpop();
  j_11 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_m_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_u_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_l_4);
  Tset(MakeInt(1));
  Ccall(_stratego_m_4);
ENDPROC

PROC(_stratego_v_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_18;
  s_18 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(l_11);
  goto u_18;
  l_11 :
  goto k_11;
  u_18 :
  Return();
  k_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_4)
  Epushd(0,1);
  Rpush(m_11);
  z_19 :
  Cpush(o_11);
  TestFunTop(q_11);
  TravInit();
  OneNextSon();
  Rpush(r_11);
  a_20 :
  Cpush(t_11);
  Ccall(_stratego_g_4);
  goto s_11;
  t_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(w_11);
  goto z_19;
  w_11 :
  OneNextSon();
  Rpush(x_11);
  goto a_20;
  x_11 :
  AllBuild();
  goto v_11;
  s_11 :
  Cpop();
  v_11 :
  Return();
  r_11 :
  AllBuild();
  goto n_11;
  o_11 :
  Ccontinue(y_11);
  Epushd(1,3);
  MoveTop(1,1);
  goto w_18;
  w_18 :
  TestFunFC(c_12,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(b_12);
  goto b_20;
  b_12 :
  goto a_12;
  b_20 :
  Move(0,1,1,2);
  Return();
  a_12 :
  Epopd(1,3);
  goto n_11;
  y_11 :
  Ccontinue(d_12);
  TestFunTop(f_12);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  d_12 :
  Ccontinue(g_12);
  TestFunTop(h_12);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  g_12 :
  Ccontinue(i_12);
  Ccall(_stratego_x_4);
  goto n_11;
  i_12 :
  Ccontinue(k_12);
  TestFunTop(l_12);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  OneNextSon();
  Ccall(_stratego_g_4);
  AllBuild();
  goto n_11;
  k_12 :
  Ccontinue(o_12);
  Epushd(1,4);
  MoveTop(1,2);
  goto a_19;
  a_19 :
  TestFunFC(e_13,&&d_13,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,1,1,2,2);
  Rpush(a_13);
  goto c_20;
  d_13 :
  TestFunFC(i_13,&&h_13,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(a_13);
  goto d_20;
  h_13 :
  TestFunFC(l_13,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  Rpush(a_13);
  goto e_20;
  a_13 :
  goto x_12;
  e_20 :
  Return();
  x_12 :
  goto u_12;
  d_20 :
  Return();
  u_12 :
  goto r_12;
  c_20 :
  Return();
  r_12 :
  Epopd(1,4);
  goto n_11;
  o_12 :
  Ccontinue(m_13);
  Ccall(_stratego_y_4);
  goto n_11;
  m_13 :
  Ccontinue(p_13);
  Ccall(_stratego_z_4);
  goto n_11;
  p_13 :
  Ccontinue(q_13);
  TestFunTop(t_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  q_13 :
  Ccontinue(u_13);
  TestFunTop(x_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  AllBuild();
  goto n_11;
  u_13 :
  Ccontinue(a_14);
  TestFunTop(d_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  AllBuild();
  goto n_11;
  a_14 :
  Ccontinue(g_14);
  TestFunTop(j_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  AllBuild();
  goto n_11;
  g_14 :
  Ccontinue(k_14);
  TestFunTop(q_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  k_14 :
  Ccontinue(u_14);
  TestFunTop(e_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  AllBuild();
  goto n_11;
  u_14 :
  Ccontinue(h_15);
  Ccall(_stratego_a_5);
  goto n_11;
  h_15 :
  Ccontinue(i_15);
  Ccall(_stratego_b_5);
  goto n_11;
  i_15 :
  Ccontinue(j_15);
  TestFunTop(k_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  j_15 :
  Ccontinue(q_15);
  Ccall(_stratego_c_5);
  goto n_11;
  q_15 :
  Ccontinue(s_15);
  TestFunTop(t_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  AllBuild();
  goto n_11;
  s_15 :
  Ccontinue(u_15);
  TestFunTop(w_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  AllBuild();
  goto n_11;
  u_15 :
  Ccontinue(z_15);
  TestFunTop(a_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  z_15 :
  Ccontinue(b_16);
  TestFunTop(c_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  b_16 :
  Ccontinue(d_16);
  Ccall(_stratego_d_5);
  goto n_11;
  d_16 :
  Ccontinue(g_16);
  Ccall(_stratego_d_5);
  goto n_11;
  g_16 :
  Ccontinue(h_16);
  Ccall(_stratego_d_5);
  goto n_11;
  h_16 :
  Ccontinue(i_16);
  Ccall(_stratego_d_5);
  goto n_11;
  i_16 :
  Ccontinue(j_16);
  TestFunTop(k_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  j_16 :
  Ccontinue(s_16);
  Ccall(_stratego_e_5);
  goto n_11;
  s_16 :
  Ccontinue(u_16);
  Ccall(_stratego_f_5);
  goto n_11;
  u_16 :
  Ccontinue(v_16);
  Ccall(_stratego_g_5);
  goto n_11;
  v_16 :
  Ccontinue(w_16);
  Ccall(_stratego_h_5);
  goto n_11;
  w_16 :
  Ccontinue(x_16);
  Ccall(_stratego_i_5);
  goto n_11;
  x_16 :
  Ccontinue(y_16);
  TestFunTop(z_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  y_16 :
  Ccontinue(a_17);
  Ccall(_stratego_j_5);
  goto n_11;
  a_17 :
  Ccontinue(c_17);
  Ccall(_stratego_k_5);
  goto n_11;
  c_17 :
  Ccontinue(d_17);
  Ccall(_stratego_l_5);
  goto n_11;
  d_17 :
  Ccontinue(e_17);
  Ccall(_stratego_m_5);
  goto n_11;
  e_17 :
  Ccontinue(j_17);
  Ccall(_stratego_n_5);
  goto n_11;
  j_17 :
  Ccontinue(k_17);
  Ccall(_stratego_o_5);
  goto n_11;
  k_17 :
  Ccontinue(l_17);
  Ccall(_stratego_p_5);
  goto n_11;
  l_17 :
  Ccontinue(m_17);
  TestFunTop(p_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  m_17 :
  Ccontinue(s_17);
  Ccall(_stratego_q_5);
  goto n_11;
  s_17 :
  Ccontinue(v_17);
  Ccall(_stratego_r_5);
  goto n_11;
  v_17 :
  Ccontinue(r_18);
  TestFunTop(v_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  AllBuild();
  goto n_11;
  r_18 :
  Ccontinue(x_18);
  TestFunTop(y_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_t_5);
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  x_18 :
  Ccontinue(z_18);
  TestFunTop(b_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  z_18 :
  Ccontinue(c_19);
  TestFunTop(d_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_s_5);
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  c_19 :
  Ccontinue(e_19);
  TestFunTop(f_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  AllBuild();
  goto n_11;
  e_19 :
  Ccontinue(g_19);
  TestFunTop(q_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  AllBuild();
  goto n_11;
  g_19 :
  Ccontinue(r_19);
  TestFunTop(s_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto n_11;
  r_19 :
  Ccontinue(t_19);
  TestFunTop(u_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  AllBuild();
  goto n_11;
  t_19 :
  Ccontinue(v_19);
  TestFunTop(w_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  v_19 :
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not an instruction: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_4);
  Epopd(1,1);
  Tpop();
  goto x_19;
  n_11 :
  Cpop();
  x_19 :
  Return();
  m_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_20;
  l_20 :
  TestFunFC(g_20,&&fail,Egetd(0,1));
  Rpush(f_20);
  goto n_20;
  f_20 :
  goto y_19;
  n_20 :
  Return();
  y_19 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_20;
  p_20 :
  TestFunFC(j_20,&&fail,Egetd(0,1));
  Rpush(i_20);
  goto r_20;
  i_20 :
  goto h_20;
  r_20 :
  Return();
  h_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_20;
  t_20 :
  TestFunFC(s_20,&&fail,Egetd(0,1));
  Rpush(o_20);
  goto v_20;
  o_20 :
  goto k_20;
  v_20 :
  Return();
  k_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_20;
  x_20 :
  TestFunFC(e_21,&&fail,Egetd(0,1));
  Rpush(a_21);
  goto z_20;
  a_21 :
  goto w_20;
  z_20 :
  Return();
  w_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_21;
  b_21 :
  TestFunFC(q_21,&&fail,Egetd(0,1));
  Rpush(m_21);
  goto d_21;
  m_21 :
  goto i_21;
  d_21 :
  Return();
  i_21 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_21;
  f_21 :
  TestFunFC(c_22,&&fail,Egetd(0,1));
  Rpush(y_21);
  goto h_21;
  y_21 :
  goto u_21;
  h_21 :
  Return();
  u_21 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_21;
  j_21 :
  TestFunFC(o_22,&&fail,Egetd(0,1));
  Rpush(k_22);
  goto l_21;
  k_22 :
  goto g_22;
  l_21 :
  Return();
  g_22 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_21;
  n_21 :
  TestFunFC(a_23,&&fail,Egetd(0,1));
  Rpush(w_22);
  goto p_21;
  w_22 :
  goto s_22;
  p_21 :
  Return();
  s_22 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_21;
  r_21 :
  TestFunFC(m_23,&&fail,Egetd(0,1));
  Rpush(i_23);
  goto t_21;
  i_23 :
  goto e_23;
  t_21 :
  Return();
  e_23 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_21;
  v_21 :
  TestFunFC(s_23,&&fail,Egetd(0,1));
  Rpush(r_23);
  goto x_21;
  r_23 :
  goto q_23;
  x_21 :
  Return();
  q_23 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_21;
  z_21 :
  TestFunFC(w_23,&&fail,Egetd(0,1));
  Rpush(u_23);
  goto b_22;
  u_23 :
  goto t_23;
  b_22 :
  Return();
  t_23 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_22;
  d_22 :
  TestFunFC(z_23,&&fail,Egetd(0,1));
  Rpush(y_23);
  goto f_22;
  y_23 :
  goto x_23;
  f_22 :
  Return();
  x_23 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_22;
  h_22 :
  TestFunFC(c_24,&&fail,Egetd(0,1));
  Rpush(b_24);
  goto j_22;
  b_24 :
  goto a_24;
  j_22 :
  Return();
  a_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_22;
  l_22 :
  TestFunFC(g_24,&&fail,Egetd(0,1));
  Rpush(e_24);
  goto n_22;
  e_24 :
  goto d_24;
  n_22 :
  Return();
  d_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_22;
  p_22 :
  TestFunFC(j_24,&&fail,Egetd(0,1));
  Rpush(i_24);
  goto r_22;
  i_24 :
  goto h_24;
  r_22 :
  Return();
  h_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_22;
  t_22 :
  TestFunFC(m_24,&&fail,Egetd(0,1));
  Rpush(l_24);
  goto v_22;
  l_24 :
  goto k_24;
  v_22 :
  Return();
  k_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_22;
  x_22 :
  TestFunFC(p_24,&&fail,Egetd(0,1));
  Rpush(o_24);
  goto z_22;
  o_24 :
  goto n_24;
  z_22 :
  Return();
  n_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_23;
  b_23 :
  TestFunFC(s_24,&&fail,Egetd(0,1));
  Rpush(r_24);
  goto d_23;
  r_24 :
  goto q_24;
  d_23 :
  Return();
  q_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_23;
  f_23 :
  TestFunFC(v_24,&&fail,Egetd(0,1));
  Rpush(u_24);
  goto h_23;
  u_24 :
  goto t_24;
  h_23 :
  Return();
  t_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_23;
  j_23 :
  TestFunFC(y_24,&&fail,Egetd(0,1));
  Rpush(x_24);
  goto l_23;
  x_24 :
  goto w_24;
  l_23 :
  Return();
  w_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_23;
  n_23 :
  TestFunFC(b_25,&&fail,Egetd(0,1));
  Rpush(a_25);
  goto p_23;
  a_25 :
  goto z_24;
  p_23 :
  Return();
  z_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_5)
  _ST_is_real();
ENDPROC

PROC(_stratego_t_5)
  _ST_is_string();
ENDPROC

PROC(_stratego_u_5)
  _ST_is_int();
ENDPROC

PROC(_stratego_v_5)
  Rpush(c_25);
  f_24 :
  Cpush(e_25);
  TestFunTop(f_25);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto d_25;
  e_25 :
  Ccontinue(g_25);
  TestFunTop(h_25);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  OneNextSon();
  Rpush(i_25);
  goto f_24;
  i_25 :
  AllBuild();
  goto d_25;
  g_25 :
  Ccontinue(j_25);
  TestFunTop(k_25);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  OneNextSon();
  Rpush(l_25);
  goto f_24;
  l_25 :
  OneNextSon();
  Rpush(m_25);
  goto f_24;
  m_25 :
  AllBuild();
  goto d_25;
  j_25 :
  Ccontinue(n_25);
  TestFunTop(o_25);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  OneNextSon();
  Rpush(p_25);
  goto f_24;
  p_25 :
  OneNextSon();
  Rpush(q_25);
  goto f_24;
  q_25 :
  OneNextSon();
  Rpush(r_25);
  goto f_24;
  r_25 :
  AllBuild();
  goto d_25;
  n_25 :
  Ccontinue(s_25);
  TestFunTop(t_25);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  OneNextSon();
  Rpush(u_25);
  goto f_24;
  u_25 :
  OneNextSon();
  Rpush(v_25);
  goto f_24;
  v_25 :
  OneNextSon();
  Rpush(w_25);
  goto f_24;
  w_25 :
  OneNextSon();
  Rpush(x_25);
  goto f_24;
  x_25 :
  AllBuild();
  goto d_25;
  s_25 :
  Ccontinue(y_25);
  TestFunTop(z_25);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  OneNextSon();
  Rpush(a_26);
  goto f_24;
  a_26 :
  OneNextSon();
  Rpush(b_26);
  goto f_24;
  b_26 :
  OneNextSon();
  Rpush(c_26);
  goto f_24;
  c_26 :
  OneNextSon();
  Rpush(d_26);
  goto f_24;
  d_26 :
  OneNextSon();
  Rpush(e_26);
  goto f_24;
  e_26 :
  AllBuild();
  goto d_25;
  y_25 :
  Ccontinue(f_26);
  TestFunTop(g_26);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  OneNextSon();
  Rpush(h_26);
  goto f_24;
  h_26 :
  OneNextSon();
  Rpush(i_26);
  goto f_24;
  i_26 :
  OneNextSon();
  Rpush(j_26);
  goto f_24;
  j_26 :
  OneNextSon();
  Rpush(k_26);
  goto f_24;
  k_26 :
  OneNextSon();
  Rpush(l_26);
  goto f_24;
  l_26 :
  OneNextSon();
  Rpush(m_26);
  goto f_24;
  m_26 :
  AllBuild();
  goto d_25;
  f_26 :
  Ccontinue(n_26);
  TestFunTop(o_26);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  AllBuild();
  goto d_25;
  n_26 :
  Ccontinue(p_26);
  TestFunTop(q_26);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_5);
  AllBuild();
  goto d_25;
  p_26 :
  Ccontinue(r_26);
  TestFunTop(s_26);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  AllBuild();
  goto d_25;
  r_26 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a build-term-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_4);
  Epopd(0,1);
  Tpop();
  goto t_26;
  d_25 :
  Cpop();
  t_26 :
  Return();
  c_25 :
ENDPROC
