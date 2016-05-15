#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,j_28);
VARDECL(AFun,h_28);
VARDECL(AFun,f_28);
VARDECL(AFun,h_27);
VARDECL(AFun,z_26);
VARDECL(AFun,s_26);
VARDECL(AFun,m_26);
VARDECL(AFun,h_26);
VARDECL(AFun,d_26);
VARDECL(AFun,a_26);
VARDECL(AFun,y_25);
VARDECL(AFun,u_25);
VARDECL(AFun,r_25);
VARDECL(AFun,o_25);
VARDECL(AFun,l_25);
VARDECL(AFun,i_25);
VARDECL(AFun,x_24);
VARDECL(AFun,u_24);
VARDECL(AFun,r_24);
VARDECL(AFun,h_24);
VARDECL(AFun,e_24);
VARDECL(AFun,z_23);
VARDECL(AFun,t_23);
VARDECL(AFun,j_23);
VARDECL(AFun,x_22);
VARDECL(AFun,l_22);
VARDECL(AFun,z_21);
VARDECL(AFun,n_21);
VARDECL(AFun,b_21);
VARDECL(AFun,p_20);
VARDECL(AFun,j_20);
VARDECL(AFun,g_20);
VARDECL(AFun,w_19);
VARDECL(AFun,u_19);
VARDECL(AFun,s_19);
VARDECL(AFun,i_19);
VARDECL(AFun,f_19);
VARDECL(AFun,d_19);
VARDECL(AFun,a_19);
VARDECL(AFun,y_18);
VARDECL(AFun,s_18);
VARDECL(AFun,n_17);
VARDECL(AFun,z_16);
VARDECL(AFun,k_16);
VARDECL(AFun,c_16);
VARDECL(AFun,a_16);
VARDECL(AFun,v_15);
VARDECL(AFun,t_15);
VARDECL(AFun,k_15);
VARDECL(AFun,v_14);
VARDECL(AFun,l_14);
VARDECL(AFun,h_14);
VARDECL(AFun,b_14);
VARDECL(AFun,v_13);
VARDECL(AFun,r_13);
VARDECL(AFun,j_13);
VARDECL(AFun,i_13);
VARDECL(AFun,e_13);
VARDECL(AFun,l_12);
VARDECL(AFun,h_12);
VARDECL(AFun,e_12);
VARDECL(AFun,c_12);
VARDECL(AFun,p_11);
VARDECL(AFun,x_10);
VARDECL(AFun,o_10);
VARDECL(AFun,a_10);
VARDECL(AFun,m_9);
VARDECL(AFun,r_8);
VARDECL(AFun,d_8);
VARDECL(AFun,v_7);
VARDECL(AFun,r_7);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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
PROCDECL(_stratego_w_5);
PROCDECL(_stratego_x_5);

PROC(_stratego_init_afuns)
  MOVE(j_28,ATmakeAFun("MakeInt",1,0));
  MOVE(h_28,ATmakeAFun("ATmakeString",1,0));
  MOVE(f_28,ATmakeAFun("Egetd",2,0));
  MOVE(h_27,ATmakeAFun("AppN",2,0));
  MOVE(z_26,ATmakeAFun("App6",7,0));
  MOVE(s_26,ATmakeAFun("App5",6,0));
  MOVE(m_26,ATmakeAFun("App4",5,0));
  MOVE(h_26,ATmakeAFun("App3",4,0));
  MOVE(d_26,ATmakeAFun("App2",3,0));
  MOVE(a_26,ATmakeAFun("App1",2,0));
  MOVE(y_25,ATmakeAFun("App0",1,0));
  MOVE(u_25,ATmakeAFun("SomeBuild",0,0));
  MOVE(r_25,ATmakeAFun("CounterOK",0,0));
  MOVE(o_25,ATmakeAFun("SomeInit",0,0));
  MOVE(l_25,ATmakeAFun("TravInit",0,0));
  MOVE(i_25,ATmakeAFun("Tpush",0,0));
  MOVE(x_24,ATmakeAFun("Tpop",0,0));
  MOVE(u_24,ATmakeAFun("Tduplinv",0,0));
  MOVE(r_24,ATmakeAFun("Tdupl",0,0));
  MOVE(h_24,ATmakeAFun("Tdrop",0,0));
  MOVE(e_24,ATmakeAFun("Return",0,0));
  MOVE(z_23,ATmakeAFun("OneNextSon",0,0));
  MOVE(t_23,ATmakeAFun("OneMatchNextSon",0,0));
  MOVE(j_23,ATmakeAFun("OneInit",0,0));
  MOVE(x_22,ATmakeAFun("OneBuild",0,0));
  MOVE(l_22,ATmakeAFun("IsAppl",0,0));
  MOVE(z_21,ATmakeAFun("Crestore",0,0));
  MOVE(n_21,ATmakeAFun("Cpop",0,0));
  MOVE(b_21,ATmakeAFun("Cjump",0,0));
  MOVE(p_20,ATmakeAFun("AllInit",0,0));
  MOVE(j_20,ATmakeAFun("AllBuild",0,0));
  MOVE(g_20,ATmakeAFun("ENDPROC",0,0));
  MOVE(w_19,ATmakeAFun("Tset",1,0));
  MOVE(u_19,ATmakeAFun("NotNULLd",2,0));
  MOVE(s_19,ATmakeAFun("Ccontinue",1,0));
  MOVE(i_19,ATmakeAFun("MoveTop",2,0));
  MOVE(f_19,ATmakeAFun("Move",4,0));
  MOVE(d_19,ATmakeAFun("TestReal",4,0));
  MOVE(a_19,ATmakeAFun("TestInt",4,0));
  MOVE(y_18,ATmakeAFun("TestStr",4,0));
  MOVE(s_18,ATmakeAFun("MoveArg",5,0));
  MOVE(n_17,ATmakeAFun("SomeNextSon",1,0));
  MOVE(z_16,ATmakeAFun("Rpush",1,0));
  MOVE(k_16,ATmakeAFun("Label",1,0));
  MOVE(c_16,ATmakeAFun("Iprim",1,0));
  MOVE(a_16,ATmakeAFun("Goto",1,0));
  MOVE(v_15,ATmakeAFun("Epushd",2,0));
  MOVE(t_15,ATmakeAFun("Epopd",2,0));
  MOVE(k_15,ATmakeAFun("Cpush",1,0));
  MOVE(v_14,ATmakeAFun("BuildVard",2,0));
  MOVE(l_14,ATmakeAFun("BuildStr",1,0));
  MOVE(h_14,ATmakeAFun("BuildInt",1,0));
  MOVE(b_14,ATmakeAFun("BuildFun",2,0));
  MOVE(v_13,ATmakeAFun("Arg",1,0));
  MOVE(r_13,ATmakeAFun("AllNextSon",1,0));
  MOVE(j_13,ATmakeAFun("MOVE",2,0));
  MOVE(i_13,ATmakeAFun("TestFunTop",1,0));
  MOVE(e_13,ATmakeAFun("TestFunFC",3,0));
  MOVE(l_12,ATmakeAFun("Ccall",2,0));
  MOVE(h_12,ATmakeAFun("PROC",1,0));
  MOVE(e_12,ATmakeAFun("PROCDECL",1,0));
  MOVE(c_12,ATmakeAFun("VARDECL",2,0));
  MOVE(p_11,ATmakeAFun("Block",1,0));
  MOVE(x_10,ATmakeAFun("Runtime",1,0));
  MOVE(o_10,ATmakeAFun("Silent",0,0));
  MOVE(a_10,ATmakeAFun("Binary",0,0));
  MOVE(m_9,ATmakeAFun("Output",1,0));
  MOVE(r_8,ATmakeAFun("Input",1,0));
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
  z_5 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_i_4);
  goto f_0;
  g_0 :
  Ccall(_stratego_j_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto z_5;
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
  goto a_6;
  l_0 :
  goto k_0;
  a_6 :
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
  Ccall(_stratego_k_4);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_p_4);
  Tdupl();
  Ccall(_stratego_r_4);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_4);
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_r_4);
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
  goto c_6;
  r_0 :
  goto q_0;
  c_6 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_s_4);
  Ccall(_stratego_v_4);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_w_4);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_i_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_6;
  e_6 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto g_6;
  v_0 :
  goto u_0;
  g_6 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto u_8;
  u_8 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_8;
  v_8 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto n_12;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto q_12;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto t_12;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto w_12;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto z_12;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto c_13;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto g_13;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto k_13;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto o_13;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto s_13;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto w_13;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto z_13;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto c_14;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto f_14;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto i_14;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto n_12;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto q_12;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto t_12;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto w_12;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto z_12;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto w_13;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(r_3);
  Rpush(u_3);
  goto z_13;
  u_3 :
  goto t_2;
  r_3 :
  Ccontinue(v_3);
  Rpush(w_3);
  goto c_14;
  w_3 :
  goto t_2;
  v_3 :
  Ccontinue(x_3);
  Rpush(y_3);
  goto f_14;
  y_3 :
  goto t_2;
  x_3 :
  Rpush(b_4);
  goto i_14;
  b_4 :
  goto a_4;
  t_2 :
  Cpop();
  a_4 :
  goto m_1;
  m_1 :
  goto l_1;
  i_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_8;
  s_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_4);
  goto j_14;
  d_4 :
  goto c_4;
  j_14 :
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
  f_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_8;
  p_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(f_4);
  goto g_14;
  f_4 :
  goto e_4;
  g_14 :
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
  c_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_8;
  m_8 :
  TestStr(1,1,"--help",&&fail);
  Rpush(h_4);
  goto d_14;
  h_4 :
  goto g_4;
  d_14 :
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
  z_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_8;
  j_8 :
  TestStr(1,1,"-s",&&fail);
  Rpush(b_6);
  goto a_14;
  b_6 :
  goto y_5;
  a_14 :
  Return();
  y_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  w_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_8;
  g_8 :
  TestStr(1,1,"-b",&&fail);
  Rpush(h_6);
  goto x_13;
  h_6 :
  goto d_6;
  x_13 :
  Return();
  d_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  s_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_8;
  c_8 :
  TestStr(1,1,"--output",&&fail);
  Rpush(j_6);
  goto t_13;
  j_6 :
  goto i_6;
  t_13 :
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
  o_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_7;
  y_7 :
  TestStr(1,1,"-o",&&fail);
  Rpush(l_6);
  goto p_13;
  l_6 :
  goto k_6;
  p_13 :
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
  k_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_7;
  u_7 :
  TestStr(1,1,"--input",&&fail);
  Rpush(n_6);
  goto l_13;
  n_6 :
  goto m_6;
  l_13 :
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
  g_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_7;
  q_7 :
  TestStr(1,1,"-i",&&fail);
  Rpush(p_6);
  goto h_13;
  p_6 :
  goto o_6;
  h_13 :
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
  c_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_7;
  m_7 :
  TestStr(1,1,"@version",&&fail);
  Rpush(r_6);
  goto d_13;
  r_6 :
  goto q_6;
  d_13 :
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
  z_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_7;
  j_7 :
  TestStr(1,1,"--version",&&fail);
  Rpush(t_6);
  goto a_13;
  t_6 :
  goto s_6;
  a_13 :
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
  w_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_7;
  g_7 :
  TestStr(1,1,"-v",&&fail);
  Rpush(v_6);
  goto x_12;
  v_6 :
  goto u_6;
  x_12 :
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
  t_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_7;
  d_7 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(y_6);
  goto u_12;
  y_6 :
  goto w_6;
  u_12 :
  Return();
  w_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  q_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_7;
  a_7 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(b_7);
  goto r_12;
  b_7 :
  goto z_6;
  r_12 :
  Return();
  z_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  n_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_6;
  x_6 :
  TestStr(1,1,"-S",&&fail);
  Rpush(e_7);
  goto o_12;
  e_7 :
  goto c_7;
  o_12 :
  Return();
  c_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_k_4)
  Tdupl();
  f_7 :
  TestFunTop(a_0);
  Cpush(h_7);
  Arg(0);
  Cpush(l_7);
  Ccall(_stratego_l_4);
  goto k_7;
  l_7 :
  Epushd(0,2);
  MoveTop(0,1);
  goto m_14;
  m_14 :
  TestFunFC(r_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(p_7);
  goto q_14;
  p_7 :
  goto o_7;
  q_14 :
  Return();
  o_7 :
  Epopd(0,2);
  goto n_7;
  k_7 :
  Cpop();
  n_7 :
  Tpop();
  Cpop();
  goto i_7;
  h_7 :
  Arg(1);
  Tdrop();
  goto f_7;
  i_7 :
  Tpop();
  Ccall(_stratego_m_4);
ENDPROC

PROC(_stratego_l_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_14;
  s_14 :
  TestFunFC(v_7,&&fail,Egetd(0,1));
  Rpush(t_7);
  goto u_14;
  t_7 :
  goto s_7;
  u_14 :
  Return();
  s_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,1);
  Tdupl();
  Rpush(w_7);
  d_15 :
  Cpush(z_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_14;
  w_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_14;
  x_14 :
  TestFunFC(d_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_8);
  goto e_15;
  b_8 :
  goto a_8;
  e_15 :
  Move(0,1,1,3);
  Return();
  a_8 :
  Epopd(1,4);
  goto x_7;
  z_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_8);
  goto d_15;
  f_8 :
  AllBuild();
  goto e_8;
  x_7 :
  Cpop();
  e_8 :
  Return();
  w_7 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_n_4);
  Tset(MakeInt(1));
  Ccall(_stratego_o_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_o_4)
  _ST_exit();
ENDPROC

PROC(_stratego_p_4)
  Epushd(0,3);
  Tdupl();
  Cpush(i_8);
  Rpush(k_8);
  y_15 :
  Cpush(n_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_15;
  g_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_15;
  h_15 :
  TestFunFC(r_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_8);
  goto z_15;
  q_8 :
  goto o_8;
  z_15 :
  Move(0,1,1,3);
  Return();
  o_8 :
  Epopd(1,4);
  goto l_8;
  n_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_9);
  goto y_15;
  b_9 :
  AllBuild();
  goto t_8;
  l_8 :
  Cpop();
  t_8 :
  Return();
  k_8 :
  goto h_8;
  i_8 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto c_9;
  h_8 :
  Cpop();
  c_9 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_q_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_q_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_r_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_s_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(f_9);
  Rpush(g_9);
  i_17 :
  Cpush(j_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_16;
  f_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_16;
  g_16 :
  TestFunFC(m_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_9);
  goto j_17;
  l_9 :
  goto k_9;
  j_17 :
  Move(0,1,1,3);
  Return();
  k_9 :
  Epopd(1,4);
  goto h_9;
  j_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_9);
  goto i_17;
  p_9 :
  AllBuild();
  goto o_9;
  h_9 :
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
  Ccall(_stratego_x_4);
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
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  Cpush(t_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(u_9);
  o_17 :
  Cpush(w_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto m_16;
  m_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto n_16;
  n_16 :
  TestFunFC(a_10,&&fail,Egetd(1,2));
  Rpush(z_9);
  goto p_17;
  z_9 :
  goto y_9;
  p_17 :
  Return();
  y_9 :
  Epopd(1,3);
  goto v_9;
  w_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_10);
  goto o_17;
  c_10 :
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
  Ccall(_stratego_t_4);
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  goto r_9;
  t_9 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  goto e_10;
  r_9 :
  Cpop();
  e_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_u_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_v_4)
  Epushd(0,2);
  Tdupl();
  Cpush(g_10);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(h_10);
  Tdupl();
  Rpush(i_10);
  m_18 :
  Cpush(k_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_17;
  r_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_17;
  s_17 :
  TestFunFC(o_10,&&fail,Egetd(1,2));
  Rpush(n_10);
  goto n_18;
  n_10 :
  goto m_10;
  n_18 :
  Return();
  m_10 :
  Epopd(1,3);
  goto j_10;
  k_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_10);
  goto m_18;
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
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(r_10);
  o_18 :
  Cpush(u_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_17;
  u_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_17;
  v_17 :
  TestFunFC(x_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_10);
  goto p_18;
  w_10 :
  goto v_10;
  p_18 :
  Move(0,2,1,3);
  Return();
  v_10 :
  Epopd(1,4);
  goto s_10;
  u_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_10);
  goto o_18;
  z_10 :
  AllBuild();
  goto y_10;
  s_10 :
  Cpop();
  y_10 :
  Return();
  r_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(a_11);
  q_18 :
  Cpush(d_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_17;
  x_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_17;
  y_17 :
  TestFunFC(d_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_11);
  goto r_18;
  f_11 :
  goto e_11;
  r_18 :
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
  goto q_18;
  h_11 :
  AllBuild();
  goto g_11;
  c_11 :
  Cpop();
  g_11 :
  Return();
  a_11 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_n_4);
  goto f_10;
  g_10 :
  goto i_11;
  f_10 :
  Cpop();
  i_11 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_o_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_w_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_n_4);
  Tset(MakeInt(1));
  Ccall(_stratego_o_4);
ENDPROC

PROC(_stratego_x_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_18;
  t_18 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(l_11);
  goto v_18;
  l_11 :
  goto k_11;
  v_18 :
  Return();
  k_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_4)
  Epushd(0,1);
  Rpush(m_11);
  a_20 :
  Cpush(o_11);
  TestFunTop(p_11);
  TravInit();
  OneNextSon();
  Rpush(r_11);
  b_20 :
  Cpush(t_11);
  Ccall(_stratego_i_4);
  goto s_11;
  t_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(w_11);
  goto a_20;
  w_11 :
  OneNextSon();
  Rpush(x_11);
  goto b_20;
  x_11 :
  AllBuild();
  goto u_11;
  s_11 :
  Cpop();
  u_11 :
  Return();
  r_11 :
  AllBuild();
  goto n_11;
  o_11 :
  Ccontinue(y_11);
  Epushd(1,3);
  MoveTop(1,1);
  goto x_18;
  x_18 :
  TestFunFC(c_12,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(b_12);
  goto c_20;
  b_12 :
  goto z_11;
  c_20 :
  Move(0,1,1,2);
  Return();
  z_11 :
  Epopd(1,3);
  goto n_11;
  y_11 :
  Ccontinue(d_12);
  TestFunTop(e_12);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  d_12 :
  Ccontinue(g_12);
  TestFunTop(h_12);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  g_12 :
  Ccontinue(i_12);
  Ccall(_stratego_z_4);
  goto n_11;
  i_12 :
  Ccontinue(j_12);
  TestFunTop(l_12);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  OneNextSon();
  Ccall(_stratego_i_4);
  AllBuild();
  goto n_11;
  j_12 :
  Ccontinue(m_12);
  Epushd(1,4);
  MoveTop(1,2);
  goto b_19;
  b_19 :
  TestFunFC(e_13,&&b_13,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,1,1,2,2);
  Rpush(y_12);
  goto d_20;
  b_13 :
  TestFunFC(i_13,&&f_13,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_12);
  goto e_20;
  f_13 :
  TestFunFC(j_13,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  Rpush(y_12);
  goto f_20;
  y_12 :
  goto v_12;
  f_20 :
  Return();
  v_12 :
  goto s_12;
  e_20 :
  Return();
  s_12 :
  goto p_12;
  d_20 :
  Return();
  p_12 :
  Epopd(1,4);
  goto n_11;
  m_12 :
  Ccontinue(m_13);
  Ccall(_stratego_a_5);
  goto n_11;
  m_13 :
  Ccontinue(n_13);
  Ccall(_stratego_b_5);
  goto n_11;
  n_13 :
  Ccontinue(q_13);
  TestFunTop(r_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  q_13 :
  Ccontinue(u_13);
  TestFunTop(v_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto n_11;
  u_13 :
  Ccontinue(y_13);
  TestFunTop(b_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto n_11;
  y_13 :
  Ccontinue(e_14);
  TestFunTop(h_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto n_11;
  e_14 :
  Ccontinue(k_14);
  TestFunTop(l_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  k_14 :
  Ccontinue(r_14);
  TestFunTop(v_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto n_11;
  r_14 :
  Ccontinue(f_15);
  Ccall(_stratego_c_5);
  goto n_11;
  f_15 :
  Ccontinue(i_15);
  Ccall(_stratego_d_5);
  goto n_11;
  i_15 :
  Ccontinue(j_15);
  TestFunTop(k_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  j_15 :
  Ccontinue(l_15);
  Ccall(_stratego_e_5);
  goto n_11;
  l_15 :
  Ccontinue(r_15);
  TestFunTop(t_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto n_11;
  r_15 :
  Ccontinue(u_15);
  TestFunTop(v_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto n_11;
  u_15 :
  Ccontinue(x_15);
  TestFunTop(a_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  x_15 :
  Ccontinue(b_16);
  TestFunTop(c_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  b_16 :
  Ccontinue(d_16);
  Ccall(_stratego_f_5);
  goto n_11;
  d_16 :
  Ccontinue(e_16);
  Ccall(_stratego_f_5);
  goto n_11;
  e_16 :
  Ccontinue(h_16);
  Ccall(_stratego_f_5);
  goto n_11;
  h_16 :
  Ccontinue(i_16);
  Ccall(_stratego_f_5);
  goto n_11;
  i_16 :
  Ccontinue(j_16);
  TestFunTop(k_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  j_16 :
  Ccontinue(l_16);
  Ccall(_stratego_g_5);
  goto n_11;
  l_16 :
  Ccontinue(t_16);
  Ccall(_stratego_h_5);
  goto n_11;
  t_16 :
  Ccontinue(v_16);
  Ccall(_stratego_i_5);
  goto n_11;
  v_16 :
  Ccontinue(w_16);
  Ccall(_stratego_j_5);
  goto n_11;
  w_16 :
  Ccontinue(x_16);
  Ccall(_stratego_k_5);
  goto n_11;
  x_16 :
  Ccontinue(y_16);
  TestFunTop(z_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  y_16 :
  Ccontinue(a_17);
  Ccall(_stratego_l_5);
  goto n_11;
  a_17 :
  Ccontinue(b_17);
  Ccall(_stratego_m_5);
  goto n_11;
  b_17 :
  Ccontinue(e_17);
  Ccall(_stratego_n_5);
  goto n_11;
  e_17 :
  Ccontinue(f_17);
  Ccall(_stratego_o_5);
  goto n_11;
  f_17 :
  Ccontinue(g_17);
  Ccall(_stratego_p_5);
  goto n_11;
  g_17 :
  Ccontinue(k_17);
  Ccall(_stratego_q_5);
  goto n_11;
  k_17 :
  Ccontinue(l_17);
  Ccall(_stratego_r_5);
  goto n_11;
  l_17 :
  Ccontinue(m_17);
  TestFunTop(n_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  m_17 :
  Ccontinue(q_17);
  Ccall(_stratego_s_5);
  goto n_11;
  q_17 :
  Ccontinue(t_17);
  Ccall(_stratego_t_5);
  goto n_11;
  t_17 :
  Ccontinue(w_17);
  TestFunTop(s_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto n_11;
  w_17 :
  Ccontinue(w_18);
  TestFunTop(y_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_v_5);
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  w_18 :
  Ccontinue(z_18);
  TestFunTop(a_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  z_18 :
  Ccontinue(c_19);
  TestFunTop(d_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  c_19 :
  Ccontinue(e_19);
  TestFunTop(f_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto n_11;
  e_19 :
  Ccontinue(g_19);
  TestFunTop(i_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto n_11;
  g_19 :
  Ccontinue(r_19);
  TestFunTop(s_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto n_11;
  r_19 :
  Ccontinue(t_19);
  TestFunTop(u_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto n_11;
  t_19 :
  Ccontinue(v_19);
  TestFunTop(w_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_5);
  AllBuild();
  goto n_11;
  v_19 :
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not an instruction: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_n_4);
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

PROC(_stratego_z_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_20;
  m_20 :
  TestFunFC(g_20,&&fail,Egetd(0,1));
  Rpush(z_19);
  goto o_20;
  z_19 :
  goto y_19;
  o_20 :
  Return();
  y_19 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_20;
  q_20 :
  TestFunFC(j_20,&&fail,Egetd(0,1));
  Rpush(i_20);
  goto s_20;
  i_20 :
  goto h_20;
  s_20 :
  Return();
  h_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_20;
  u_20 :
  TestFunFC(p_20,&&fail,Egetd(0,1));
  Rpush(l_20);
  goto w_20;
  l_20 :
  goto k_20;
  w_20 :
  Return();
  k_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_20;
  y_20 :
  TestFunFC(b_21,&&fail,Egetd(0,1));
  Rpush(x_20);
  goto a_21;
  x_20 :
  goto t_20;
  a_21 :
  Return();
  t_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_21;
  c_21 :
  TestFunFC(n_21,&&fail,Egetd(0,1));
  Rpush(j_21);
  goto e_21;
  j_21 :
  goto f_21;
  e_21 :
  Return();
  f_21 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_21;
  g_21 :
  TestFunFC(z_21,&&fail,Egetd(0,1));
  Rpush(v_21);
  goto i_21;
  v_21 :
  goto r_21;
  i_21 :
  Return();
  r_21 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_21;
  k_21 :
  TestFunFC(l_22,&&fail,Egetd(0,1));
  Rpush(h_22);
  goto m_21;
  h_22 :
  goto d_22;
  m_21 :
  Return();
  d_22 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_21;
  o_21 :
  TestFunFC(x_22,&&fail,Egetd(0,1));
  Rpush(t_22);
  goto q_21;
  t_22 :
  goto p_22;
  q_21 :
  Return();
  p_22 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_21;
  s_21 :
  TestFunFC(j_23,&&fail,Egetd(0,1));
  Rpush(f_23);
  goto u_21;
  f_23 :
  goto b_23;
  u_21 :
  Return();
  b_23 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_21;
  w_21 :
  TestFunFC(t_23,&&fail,Egetd(0,1));
  Rpush(r_23);
  goto y_21;
  r_23 :
  goto n_23;
  y_21 :
  Return();
  n_23 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_22;
  a_22 :
  TestFunFC(z_23,&&fail,Egetd(0,1));
  Rpush(x_23);
  goto c_22;
  x_23 :
  goto v_23;
  c_22 :
  Return();
  v_23 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_22;
  e_22 :
  TestFunFC(e_24,&&fail,Egetd(0,1));
  Rpush(d_24);
  goto g_22;
  d_24 :
  goto b_24;
  g_22 :
  Return();
  b_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_22;
  i_22 :
  TestFunFC(h_24,&&fail,Egetd(0,1));
  Rpush(g_24);
  goto k_22;
  g_24 :
  goto f_24;
  k_22 :
  Return();
  f_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_22;
  m_22 :
  TestFunFC(r_24,&&fail,Egetd(0,1));
  Rpush(q_24);
  goto o_22;
  q_24 :
  goto p_24;
  o_22 :
  Return();
  p_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_22;
  q_22 :
  TestFunFC(u_24,&&fail,Egetd(0,1));
  Rpush(t_24);
  goto s_22;
  t_24 :
  goto s_24;
  s_22 :
  Return();
  s_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_22;
  u_22 :
  TestFunFC(x_24,&&fail,Egetd(0,1));
  Rpush(w_24);
  goto w_22;
  w_24 :
  goto v_24;
  w_22 :
  Return();
  v_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_22;
  y_22 :
  TestFunFC(i_25,&&fail,Egetd(0,1));
  Rpush(h_25);
  goto a_23;
  h_25 :
  goto g_25;
  a_23 :
  Return();
  g_25 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_23;
  c_23 :
  TestFunFC(l_25,&&fail,Egetd(0,1));
  Rpush(k_25);
  goto e_23;
  k_25 :
  goto j_25;
  e_23 :
  Return();
  j_25 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_23;
  g_23 :
  TestFunFC(o_25,&&fail,Egetd(0,1));
  Rpush(n_25);
  goto i_23;
  n_25 :
  goto m_25;
  i_23 :
  Return();
  m_25 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_23;
  k_23 :
  TestFunFC(r_25,&&fail,Egetd(0,1));
  Rpush(q_25);
  goto m_23;
  q_25 :
  goto p_25;
  m_23 :
  Return();
  p_25 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_23;
  o_23 :
  TestFunFC(u_25,&&fail,Egetd(0,1));
  Rpush(t_25);
  goto q_23;
  t_25 :
  goto s_25;
  q_23 :
  Return();
  s_25 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_5)
  _ST_is_real();
ENDPROC

PROC(_stratego_v_5)
  _ST_is_string();
ENDPROC

PROC(_stratego_w_5)
  _ST_is_int();
ENDPROC

PROC(_stratego_x_5)
  Rpush(v_25);
  y_24 :
  Cpush(x_25);
  TestFunTop(y_25);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto w_25;
  x_25 :
  Ccontinue(z_25);
  TestFunTop(a_26);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  OneNextSon();
  Rpush(b_26);
  goto y_24;
  b_26 :
  AllBuild();
  goto w_25;
  z_25 :
  Ccontinue(c_26);
  TestFunTop(d_26);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  OneNextSon();
  Rpush(e_26);
  goto y_24;
  e_26 :
  OneNextSon();
  Rpush(f_26);
  goto y_24;
  f_26 :
  AllBuild();
  goto w_25;
  c_26 :
  Ccontinue(g_26);
  TestFunTop(h_26);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  OneNextSon();
  Rpush(i_26);
  goto y_24;
  i_26 :
  OneNextSon();
  Rpush(j_26);
  goto y_24;
  j_26 :
  OneNextSon();
  Rpush(k_26);
  goto y_24;
  k_26 :
  AllBuild();
  goto w_25;
  g_26 :
  Ccontinue(l_26);
  TestFunTop(m_26);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  OneNextSon();
  Rpush(n_26);
  goto y_24;
  n_26 :
  OneNextSon();
  Rpush(o_26);
  goto y_24;
  o_26 :
  OneNextSon();
  Rpush(p_26);
  goto y_24;
  p_26 :
  OneNextSon();
  Rpush(q_26);
  goto y_24;
  q_26 :
  AllBuild();
  goto w_25;
  l_26 :
  Ccontinue(r_26);
  TestFunTop(s_26);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  OneNextSon();
  Rpush(t_26);
  goto y_24;
  t_26 :
  OneNextSon();
  Rpush(u_26);
  goto y_24;
  u_26 :
  OneNextSon();
  Rpush(v_26);
  goto y_24;
  v_26 :
  OneNextSon();
  Rpush(w_26);
  goto y_24;
  w_26 :
  OneNextSon();
  Rpush(x_26);
  goto y_24;
  x_26 :
  AllBuild();
  goto w_25;
  r_26 :
  Ccontinue(y_26);
  TestFunTop(z_26);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  OneNextSon();
  Rpush(a_27);
  goto y_24;
  a_27 :
  OneNextSon();
  Rpush(b_27);
  goto y_24;
  b_27 :
  OneNextSon();
  Rpush(c_27);
  goto y_24;
  c_27 :
  OneNextSon();
  Rpush(d_27);
  goto y_24;
  d_27 :
  OneNextSon();
  Rpush(e_27);
  goto y_24;
  e_27 :
  OneNextSon();
  Rpush(f_27);
  goto y_24;
  f_27 :
  AllBuild();
  goto w_25;
  y_26 :
  Ccontinue(g_27);
  TestFunTop(h_27);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  OneNextSon();
  Rpush(i_27);
  goto y_24;
  i_27 :
  AllBuild();
  goto w_25;
  g_27 :
  Ccontinue(j_27);
  _ST_explode_term();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto s_23;
  s_23 :
  TestStr(0,1,"ATmakeList",&&fail);
  Rpush(l_27);
  goto z_24;
  l_27 :
  goto k_27;
  z_24 :
  Return();
  k_27 :
  Epopd(0,1);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Rpush(m_27);
  a_25 :
  Cpush(o_27);
  Ccall(_stratego_i_4);
  goto n_27;
  o_27 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(q_27);
  goto y_24;
  q_27 :
  OneNextSon();
  Rpush(r_27);
  goto a_25;
  r_27 :
  AllBuild();
  goto p_27;
  n_27 :
  Cpop();
  p_27 :
  Return();
  m_27 :
  AllBuild();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto u_23;
  u_23 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(t_27);
  goto b_25;
  t_27 :
  goto s_27;
  b_25 :
  Return();
  s_27 :
  Epopd(0,1);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  goto w_25;
  j_27 :
  Ccontinue(u_27);
  _ST_explode_term();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto w_23;
  w_23 :
  TestStr(0,1,"ATmakeReal",&&fail);
  Rpush(w_27);
  goto c_25;
  w_27 :
  goto v_27;
  c_25 :
  Return();
  v_27 :
  Epopd(0,1);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_5);
  OneNextSon();
  Ccall(_stratego_i_4);
  AllBuild();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto y_23;
  y_23 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(y_27);
  goto d_25;
  y_27 :
  goto x_27;
  d_25 :
  Return();
  x_27 :
  Epopd(0,1);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  goto w_25;
  u_27 :
  Ccontinue(z_27);
  _ST_explode_term();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto a_24;
  a_24 :
  TestStr(0,1,"ATmakeInt",&&fail);
  Rpush(b_28);
  goto e_25;
  b_28 :
  goto a_28;
  e_25 :
  Return();
  a_28 :
  Epopd(0,1);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_i_4);
  AllBuild();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto c_24;
  c_24 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(d_28);
  goto f_25;
  d_28 :
  goto c_28;
  f_25 :
  Return();
  c_28 :
  Epopd(0,1);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  goto w_25;
  z_27 :
  Ccontinue(e_28);
  TestFunTop(f_28);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto w_25;
  e_28 :
  Ccontinue(g_28);
  TestFunTop(h_28);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto w_25;
  g_28 :
  Ccontinue(i_28);
  TestFunTop(j_28);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto w_25;
  i_28 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a build-term-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_n_4);
  Epopd(0,1);
  Tpop();
  goto k_28;
  w_25 :
  Cpop();
  k_28 :
  Return();
  v_25 :
ENDPROC

DOIT

