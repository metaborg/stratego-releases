#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,s_34);
VARDECL(AFun,r_34);
VARDECL(AFun,q_34);
VARDECL(AFun,p_34);
VARDECL(AFun,f_34);
VARDECL(AFun,v_33);
VARDECL(AFun,t_33);
VARDECL(AFun,s_33);
VARDECL(AFun,r_33);
VARDECL(AFun,p_33);
VARDECL(AFun,o_33);
VARDECL(AFun,d_32);
VARDECL(AFun,f_28);
VARDECL(AFun,e_28);
VARDECL(AFun,c_28);
VARDECL(AFun,a_28);
VARDECL(AFun,z_27);
VARDECL(AFun,x_27);
VARDECL(AFun,v_27);
VARDECL(AFun,o_27);
VARDECL(AFun,m_27);
VARDECL(AFun,k_27);
VARDECL(AFun,i_27);
VARDECL(AFun,g_27);
VARDECL(AFun,e_27);
VARDECL(AFun,b_27);
VARDECL(AFun,y_26);
VARDECL(AFun,w_26);
VARDECL(AFun,t_26);
VARDECL(AFun,r_26);
VARDECL(AFun,p_26);
VARDECL(AFun,d_26);
VARDECL(AFun,y_25);
VARDECL(AFun,x_24);
VARDECL(AFun,w_24);
VARDECL(AFun,d_24);
VARDECL(AFun,b_24);
VARDECL(AFun,o_23);
VARDECL(AFun,l_23);
VARDECL(AFun,c_23);
VARDECL(AFun,z_22);
VARDECL(AFun,v_22);
VARDECL(AFun,s_22);
VARDECL(AFun,k_22);
VARDECL(AFun,i_22);
VARDECL(AFun,e_22);
VARDECL(AFun,v_21);
VARDECL(AFun,i_16);
VARDECL(AFun,m_15);
VARDECL(AFun,x_14);
VARDECL(AFun,u_14);
VARDECL(AFun,g_14);
VARDECL(AFun,i_13);
VARDECL(AFun,b_11);
VARDECL(AFun,a_11);
VARDECL(AFun,i_10);
VARDECL(AFun,c_10);
VARDECL(AFun,b_10);
VARDECL(AFun,y_9);
VARDECL(AFun,r_8);
VARDECL(AFun,i_8);
VARDECL(AFun,u_7);
VARDECL(AFun,i_7);
VARDECL(AFun,w_6);
VARDECL(AFun,j_6);
VARDECL(AFun,a_6);
VARDECL(AFun,w_5);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_p_11);
PROCDECL(_stratego_q_11);
PROCDECL(_stratego_r_11);
PROCDECL(_stratego_s_11);
PROCDECL(_stratego_t_11);
PROCDECL(_stratego_u_11);
PROCDECL(_stratego_v_11);
PROCDECL(_stratego_w_11);
PROCDECL(_stratego_x_11);
PROCDECL(_stratego_y_11);
PROCDECL(_stratego_z_11);
PROCDECL(_stratego_a_12);
PROCDECL(_stratego_b_12);
PROCDECL(_stratego_c_12);
PROCDECL(_stratego_d_12);
PROCDECL(_stratego_e_12);
PROCDECL(_stratego_f_12);
PROCDECL(_stratego_g_12);
PROCDECL(_stratego_h_12);
PROCDECL(_stratego_i_12);
PROCDECL(_stratego_j_12);
PROCDECL(_stratego_k_12);
PROCDECL(_stratego_l_12);
PROCDECL(_stratego_m_12);
PROCDECL(_stratego_n_12);
PROCDECL(_stratego_o_12);
PROCDECL(_stratego_p_12);
PROCDECL(_stratego_q_12);
PROCDECL(_stratego_r_12);
PROCDECL(_stratego_s_12);
PROCDECL(_stratego_t_12);
PROCDECL(_stratego_u_12);
PROCDECL(_stratego_v_12);

PROC(_stratego_init_afuns)
  MOVE(s_34,ATmakeAFun("Label",1,0));
  MOVE(r_34,ATmakeAFun("Goto",1,0));
  MOVE(q_34,ATmakeAFun("Tpop",0,0));
  MOVE(p_34,ATmakeAFun("Arg",1,0));
  MOVE(f_34,ATmakeAFun("Epop",1,0));
  MOVE(v_33,ATmakeAFun("Epush",1,0));
  MOVE(t_33,ATmakeAFun("AllBuild",0,0));
  MOVE(s_33,ATmakeAFun("TravInit",0,0));
  MOVE(r_33,ATmakeAFun("MatchFun",2,0));
  MOVE(p_33,ATmakeAFun("BuildVar",1,0));
  MOVE(o_33,ATmakeAFun("MatchVar",1,0));
  MOVE(d_32,ATmakeAFun("Block",1,0));
  MOVE(f_28,ATmakeAFun("AnnRemove",1,0));
  MOVE(e_28,ATmakeAFun("AnnBuild",2,0));
  MOVE(c_28,ATmakeAFun("GetAnn",0,0));
  MOVE(a_28,ATmakeAFun("App",2,0));
  MOVE(z_27,ATmakeAFun("Op",2,0));
  MOVE(x_27,ATmakeAFun("BuildDefault",1,0));
  MOVE(v_27,ATmakeAFun("Var",1,0));
  MOVE(o_27,ATmakeAFun("Prim2",2,0));
  MOVE(m_27,ATmakeAFun("Prim",1,0));
  MOVE(k_27,ATmakeAFun("Where",1,0));
  MOVE(i_27,ATmakeAFun("Scope",2,0));
  MOVE(g_27,ATmakeAFun("Thread",1,0));
  MOVE(e_27,ATmakeAFun("Some",1,0));
  MOVE(b_27,ATmakeAFun("All",1,0));
  MOVE(y_26,ATmakeAFun("CongKids",1,0));
  MOVE(w_26,ATmakeAFun("CongWld",1,0));
  MOVE(t_26,ATmakeAFun("Path",2,0));
  MOVE(r_26,ATmakeAFun("SDef",3,0));
  MOVE(p_26,ATmakeAFun("Let",2,0));
  MOVE(d_26,ATmakeAFun("Cases",2,0));
  MOVE(y_25,ATmakeAFun("Case",1,0));
  MOVE(x_24,ATmakeAFun("Real",1,0));
  MOVE(w_24,ATmakeAFun("Int",1,0));
  MOVE(d_24,ATmakeAFun("Str",1,0));
  MOVE(b_24,ATmakeAFun("Fun",2,0));
  MOVE(o_23,ATmakeAFun("MatchFunA",4,0));
  MOVE(l_23,ATmakeAFun("MatchVars",3,0));
  MOVE(c_23,ATmakeAFun("Accept",1,0));
  MOVE(z_22,ATmakeAFun("Up",1,0));
  MOVE(v_22,ATmakeAFun("Down",2,0));
  MOVE(s_22,ATmakeAFun("Choice",2,0));
  MOVE(k_22,ATmakeAFun("Not",1,0));
  MOVE(i_22,ATmakeAFun("Test",1,0));
  MOVE(e_22,ATmakeAFun("Fail",0,0));
  MOVE(v_21,ATmakeAFun("BuildKids",3,0));
  MOVE(i_16,ATmakeAFun("Id",0,0));
  MOVE(m_15,ATmakeAFun("CountRule",1,0));
  MOVE(x_14,ATmakeAFun("Cong",2,0));
  MOVE(u_14,ATmakeAFun("Build",1,0));
  MOVE(g_14,ATmakeAFun("One",1,0));
  MOVE(i_13,ATmakeAFun("Countrule",1,0));
  MOVE(b_11,ATmakeAFun("Call",2,0));
  MOVE(a_11,ATmakeAFun("SVar",1,0));
  MOVE(i_10,ATmakeAFun("Seq",2,0));
  MOVE(c_10,ATmakeAFun("LChoice",2,0));
  MOVE(b_10,ATmakeAFun("Rec",2,0));
  MOVE(y_9,ATmakeAFun("Instr",3,0));
  MOVE(r_8,ATmakeAFun("Runtime",1,0));
  MOVE(i_8,ATmakeAFun("Silent",0,0));
  MOVE(u_7,ATmakeAFun("Binary",0,0));
  MOVE(i_7,ATmakeAFun("Output",1,0));
  MOVE(w_6,ATmakeAFun("Input",1,0));
  MOVE(j_6,ATmakeAFun("Program",1,0));
  MOVE(a_6,ATmakeAFun("Help",0,0));
  MOVE(w_5,ATmakeAFun("Undefined",1,0));
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
  d_4 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_p_11);
  goto f_0;
  g_0 :
  Ccall(_stratego_q_11);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto d_4;
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
  goto e_4;
  l_0 :
  goto k_0;
  e_4 :
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
  Ccall(_stratego_r_11);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_w_11);
  Tdupl();
  Ccall(_stratego_y_11);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_12);
  OneNextSon();
  Ccall(_stratego_e_12);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_y_11);
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
  goto g_4;
  r_0 :
  goto q_0;
  g_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_z_11);
  Ccall(_stratego_c_12);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_d_12);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_p_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_4;
  i_4 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto k_4;
  v_0 :
  goto u_0;
  k_4 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_11)
  Epushd(0,5);
  MoveTop(0,3);
  goto t_9;
  t_9 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto u_9;
  u_9 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto q_15;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto t_15;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto w_15;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto z_15;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto c_16;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto f_16;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto j_16;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto n_16;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto r_16;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto v_16;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto z_16;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto c_17;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto f_17;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto i_17;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto l_17;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto q_15;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto t_15;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto w_15;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto z_15;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto c_16;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto z_16;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto c_17;
  v_3 :
  goto t_2;
  u_3 :
  Ccontinue(w_3);
  Rpush(x_3);
  goto f_17;
  x_3 :
  goto t_2;
  w_3 :
  Ccontinue(y_3);
  Rpush(z_3);
  goto i_17;
  z_3 :
  goto t_2;
  y_3 :
  Rpush(b_4);
  goto l_17;
  b_4 :
  goto a_4;
  t_2 :
  Cpop();
  a_4 :
  goto m_1;
  m_1 :
  goto l_1;
  l_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_8;
  v_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(f_4);
  goto m_17;
  f_4 :
  goto c_4;
  m_17 :
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
  i_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_8;
  j_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(l_4);
  goto j_17;
  l_4 :
  goto h_4;
  j_17 :
  Return();
  h_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  f_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_8;
  g_8 :
  TestStr(1,1,"--help",&&fail);
  Rpush(n_4);
  goto g_17;
  n_4 :
  goto m_4;
  g_17 :
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
  c_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_8;
  c_8 :
  TestStr(1,1,"-s",&&fail);
  Rpush(p_4);
  goto d_17;
  p_4 :
  goto o_4;
  d_17 :
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
  z_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_7;
  t_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_4);
  goto a_17;
  r_4 :
  goto q_4;
  a_17 :
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
  v_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_6;
  x_6 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto w_16;
  t_4 :
  goto s_4;
  w_16 :
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
  r_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_6;
  t_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto s_16;
  v_4 :
  goto u_4;
  s_16 :
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
  n_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_6;
  p_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto o_16;
  x_4 :
  goto w_4;
  o_16 :
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
  j_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_6;
  l_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto k_16;
  z_4 :
  goto y_4;
  k_16 :
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
  f_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_6;
  h_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_5);
  goto g_16;
  b_5 :
  goto a_5;
  g_16 :
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
  c_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_6;
  e_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_5);
  goto d_16;
  d_5 :
  goto c_5;
  d_16 :
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
  z_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_6;
  b_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_5);
  goto a_16;
  f_5 :
  goto e_5;
  a_16 :
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
  w_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_5;
  y_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_5);
  goto x_15;
  h_5 :
  goto g_5;
  x_15 :
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
  t_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_5;
  v_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_5);
  goto u_15;
  j_5 :
  goto i_5;
  u_15 :
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
  q_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_5;
  s_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(l_5);
  goto r_15;
  l_5 :
  goto k_5;
  r_15 :
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

PROC(_stratego_r_11)
  Tdupl();
  m_5 :
  TestFunTop(a_0);
  Cpush(n_5);
  Arg(0);
  Cpush(q_5);
  Ccall(_stratego_s_11);
  goto p_5;
  q_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto p_17;
  p_17 :
  TestFunFC(w_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(u_5);
  goto t_17;
  u_5 :
  goto t_5;
  t_17 :
  Return();
  t_5 :
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
  Ccall(_stratego_t_11);
ENDPROC

PROC(_stratego_s_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_17;
  v_17 :
  TestFunFC(a_6,&&fail,Egetd(0,1));
  Rpush(z_5);
  goto x_17;
  z_5 :
  goto x_5;
  x_17 :
  Return();
  x_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_11)
  Epushd(0,1);
  Tdupl();
  Rpush(c_6);
  g_18 :
  Cpush(f_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_17;
  z_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_18;
  a_18 :
  TestFunFC(j_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_6);
  goto h_18;
  i_6 :
  goto g_6;
  h_18 :
  Move(0,1,1,3);
  Return();
  g_6 :
  Epopd(1,4);
  goto d_6;
  f_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_6);
  goto g_18;
  m_6 :
  AllBuild();
  goto k_6;
  d_6 :
  Cpop();
  k_6 :
  Return();
  c_6 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_u_11);
  Tset(MakeInt(1));
  Ccall(_stratego_v_11);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_11)
  _ST_printnl();
ENDPROC

PROC(_stratego_v_11)
  _ST_exit();
ENDPROC

PROC(_stratego_w_11)
  Epushd(0,3);
  Tdupl();
  Cpush(o_6);
  Rpush(q_6);
  b_19 :
  Cpush(s_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_18;
  j_18 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_18;
  k_18 :
  TestFunFC(w_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_6);
  goto c_19;
  v_6 :
  goto u_6;
  c_19 :
  Move(0,1,1,3);
  Return();
  u_6 :
  Epopd(1,4);
  goto r_6;
  s_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_6);
  goto b_19;
  z_6 :
  AllBuild();
  goto y_6;
  r_6 :
  Cpop();
  y_6 :
  Return();
  q_6 :
  goto n_6;
  o_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto a_7;
  n_6 :
  Cpop();
  a_7 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_x_11);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_x_11)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_y_11)
  _ST_dtime();
ENDPROC

PROC(_stratego_z_11)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(c_7);
  Rpush(d_7);
  g_20 :
  Cpush(f_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_19;
  i_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_19;
  j_19 :
  TestFunFC(i_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_7);
  goto h_20;
  h_7 :
  goto g_7;
  h_20 :
  Move(0,1,1,3);
  Return();
  g_7 :
  Epopd(1,4);
  goto e_7;
  f_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_7);
  goto g_20;
  k_7 :
  AllBuild();
  goto j_7;
  e_7 :
  Cpop();
  j_7 :
  Return();
  d_7 :
  goto b_7;
  c_7 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto l_7;
  b_7 :
  Cpop();
  l_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_12);
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
  Ccall(_stratego_e_12);
  AllBuild();
  AllBuild();
  Cpush(n_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(o_7);
  m_20 :
  Cpush(q_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto p_19;
  p_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_19;
  q_19 :
  TestFunFC(u_7,&&fail,Egetd(1,2));
  Rpush(s_7);
  goto n_20;
  s_7 :
  goto r_7;
  n_20 :
  Return();
  r_7 :
  Epopd(1,3);
  goto p_7;
  q_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_7);
  goto m_20;
  w_7 :
  AllBuild();
  goto v_7;
  p_7 :
  Cpop();
  v_7 :
  Return();
  o_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_12);
  OneNextSon();
  Ccall(_stratego_e_12);
  AllBuild();
  AllBuild();
  goto m_7;
  n_7 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_12);
  OneNextSon();
  Ccall(_stratego_e_12);
  AllBuild();
  AllBuild();
  goto x_7;
  m_7 :
  Cpop();
  x_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_12)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_b_12)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_c_12)
  Epushd(0,2);
  Tdupl();
  Cpush(z_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(a_8);
  Tdupl();
  Rpush(b_8);
  k_21 :
  Cpush(e_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto p_20;
  p_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_20;
  q_20 :
  TestFunFC(i_8,&&fail,Egetd(1,2));
  Rpush(h_8);
  goto l_21;
  h_8 :
  goto f_8;
  l_21 :
  Return();
  f_8 :
  Epopd(1,3);
  goto d_8;
  e_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_8);
  goto k_21;
  l_8 :
  AllBuild();
  goto k_8;
  d_8 :
  Cpop();
  k_8 :
  Return();
  b_8 :
  Cpop();
  Crestore();
  Cjump();
  a_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_12);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(m_8);
  m_21 :
  Cpush(o_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_20;
  s_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_20;
  t_20 :
  TestFunFC(r_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_8);
  goto n_21;
  q_8 :
  goto p_8;
  n_21 :
  Move(0,2,1,3);
  Return();
  p_8 :
  Epopd(1,4);
  goto n_8;
  o_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_8);
  goto m_21;
  t_8 :
  AllBuild();
  goto s_8;
  n_8 :
  Cpop();
  s_8 :
  Return();
  m_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_12);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(u_8);
  o_21 :
  Cpush(x_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto v_20;
  v_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto w_20;
  w_20 :
  TestFunFC(j_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_8);
  goto p_21;
  z_8 :
  goto y_8;
  p_21 :
  Move(0,1,1,3);
  Return();
  y_8 :
  Epopd(1,4);
  goto w_8;
  x_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_9);
  goto o_21;
  b_9 :
  AllBuild();
  goto a_9;
  w_8 :
  Cpop();
  a_9 :
  Return();
  u_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_12);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_u_11);
  goto y_7;
  z_7 :
  goto c_9;
  y_7 :
  Cpop();
  c_9 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_v_11);
  Epopd(0,2);
ENDPROC

PROC(_stratego_d_12)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_u_11);
  Tset(MakeInt(1));
  Ccall(_stratego_v_11);
ENDPROC

PROC(_stratego_e_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_21;
  r_21 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(e_9);
  goto t_21;
  e_9 :
  goto d_9;
  t_21 :
  Return();
  d_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_12)
  Epushd(0,2);
  Rpush(f_9);
  d_22 :
  Cpush(h_9);
  Ccall(_stratego_p_11);
  goto g_9;
  h_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App3("Instr",Egetd(1,1),App0("Nil"),MakeInt(0)));
  Rpush(j_9);
  f_22 :
  Cpush(l_9);
  k_9 :
  Cpush(n_9);
  Ccall(_stratego_g_12);
  goto m_9;
  n_9 :
  Ccall(_stratego_m_12);
  goto o_9;
  m_9 :
  Cpop();
  o_9 :
  Tduplinv();
  goto k_9;
  l_9 :
  AllInit();
  p_9 :
  AllNextSon(&&q_9);
  Rpush(r_9);
  goto f_22;
  r_9 :
  goto p_9;
  q_9 :
  AllBuild();
  Return();
  j_9 :
  Epopd(1,1);
  OneNextSon();
  Rpush(s_9);
  goto d_22;
  s_9 :
  AllBuild();
  goto i_9;
  g_9 :
  Cpop();
  i_9 :
  Return();
  f_9 :
  Ccall(_stratego_t_12);
  Ccall(_stratego_u_12);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_h_12);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(0,2)),App2("Cons",App1("Goto",ATmakeString("main")),App2("Cons",App1("Block",Egetd(0,1)),App2("Cons",App1("Label",Egetd(0,2)),App0("Nil")))))));
  Epopd(0,2);
ENDPROC

PROC(_stratego_g_12)
  Cpush(x_9);
  Epushd(0,6);
  TestFunTop(y_9);
  TravInit();
  OneNextSon();
  Cpush(a_10);
  Epushd(1,1);
  TestFunTop(b_10);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  Rpush(d_10);
  u_25 :
  Cpush(f_10);
  Epushd(2,5);
  MoveTop(2,1);
  goto l_22;
  l_22 :
  TestFunFC(i_10,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_22;
  m_22 :
  TestFunFC(i_10,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  Rpush(h_10);
  goto v_25;
  h_10 :
  goto g_10;
  v_25 :
  NotNULLd(2,2);
  NotNULLd(2,4);
  NotNULLd(2,5);
  Tset(App2("Seq",App2("Seq",Egetd(2,2),Egetd(2,4)),Egetd(2,5)));
  Rpush(j_10);
  goto u_25;
  j_10 :
  Return();
  g_10 :
  Epopd(2,5);
  goto e_10;
  f_10 :
  goto k_10;
  e_10 :
  Cpop();
  k_10 :
  Return();
  d_10 :
  TestFunTop(i_10);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  Cpush(p_10);
  Tdupl();
  Rpush(x_10);
  q_10 :
  Cpush(s_10);
  Epushd(3,2);
  MoveTop(3,1);
  goto o_22;
  o_22 :
  TestFunFC(a_11,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(z_10);
  goto x_25;
  z_10 :
  goto y_10;
  x_25 :
  Move(1,1,3,2);
  Return();
  y_10 :
  Epopd(3,2);
  Cpop();
  goto v_10;
  s_10 :
  IsAppl();
  MatchTravInit();
  t_10 :
  OneMatchNextSon();
  Cpush(t_10);
  Rpush(u_10);
  goto q_10;
  u_10 :
  Cpop();
  MatchTravEnd();
  v_10 :
  Return();
  x_10 :
  Cpop();
  Crestore();
  Cjump();
  p_10 :
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(b_11);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto r_22;
  r_22 :
  TestFunFC(a_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(d_11);
  goto z_25;
  d_11 :
  goto c_11;
  z_25 :
  Move(1,1,2,2);
  Return();
  c_11 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_p_11);
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,1);
  Cpush(e_11);
  Tdupl();
  Rpush(m_11);
  f_11 :
  Cpush(h_11);
  Epushd(3,2);
  MoveTop(3,1);
  goto t_22;
  t_22 :
  TestFunFC(a_11,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(o_11);
  goto b_26;
  o_11 :
  goto n_11;
  b_26 :
  Move(1,1,3,2);
  Return();
  n_11 :
  Epopd(3,2);
  Cpop();
  goto k_11;
  h_11 :
  IsAppl();
  MatchTravInit();
  i_11 :
  OneMatchNextSon();
  Cpush(i_11);
  Rpush(j_11);
  goto f_11;
  j_11 :
  Cpop();
  MatchTravEnd();
  k_11 :
  Return();
  m_11 :
  Cpop();
  Crestore();
  Cjump();
  e_11 :
  MoveTop(2,1);
  Move(0,2,2,1);
  Epopd(2,1);
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto z_9;
  a_10 :
  Epushd(1,3);
  TestFunTop(b_10);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  Epushd(2,9);
  Rpush(y_12);
  e_26 :
  Cpush(b_13);
  Epushd(3,5);
  MoveTop(3,1);
  goto x_22;
  x_22 :
  TestFunFC(i_10,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto y_22;
  y_22 :
  TestFunFC(i_10,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(d_13);
  goto f_26;
  d_13 :
  goto c_13;
  f_26 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  NotNULLd(3,5);
  Tset(App2("Seq",App2("Seq",Egetd(3,2),Egetd(3,4)),Egetd(3,5)));
  Rpush(e_13);
  goto e_26;
  e_13 :
  Return();
  c_13 :
  Epopd(3,5);
  goto z_12;
  b_13 :
  goto f_13;
  z_12 :
  Cpop();
  f_13 :
  Return();
  y_12 :
  MoveTop(2,1);
  goto d_23;
  d_23 :
  TestFunFC(i_10,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto e_23;
  e_23 :
  TestFunFC(i_10,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,8,2,3,1);
  goto f_23;
  f_23 :
  TestFunFC(b_11,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto g_23;
  g_23 :
  TestFunFC(a_11,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  goto h_23;
  h_23 :
  TestFunFC(w_0,&&fail,Egetd(2,7));
  goto i_23;
  i_23 :
  TestFunFC(i_13,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  Rpush(h_13);
  goto g_26;
  h_13 :
  goto x_12;
  g_26 :
  Move(1,2,2,2);
  Move(1,1,2,6);
  Move(1,3,2,9);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  Tset(App2("Seq",App2("Seq",Egetd(1,2),App1("CountRule",Egetd(1,3))),App2("Call",App1("SVar",Egetd(1,1)),App0("Nil"))));
  TestFunTop(i_10);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  Cpush(j_13);
  Tdupl();
  Rpush(q_13);
  k_13 :
  Cpush(l_13);
  Epushd(4,2);
  MoveTop(4,1);
  goto b_23;
  b_23 :
  TestFunFC(a_11,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(s_13);
  goto i_26;
  s_13 :
  goto r_13;
  i_26 :
  Move(1,1,4,2);
  Return();
  r_13 :
  Epopd(4,2);
  Cpop();
  goto p_13;
  l_13 :
  IsAppl();
  MatchTravInit();
  m_13 :
  OneMatchNextSon();
  Cpush(m_13);
  Rpush(n_13);
  goto k_13;
  n_13 :
  Cpop();
  MatchTravEnd();
  p_13 :
  Return();
  q_13 :
  Cpop();
  Crestore();
  Cjump();
  j_13 :
  MoveTop(3,1);
  Move(0,1,3,1);
  Epopd(3,1);
  OneNextSon();
  AllBuild();
  Return();
  x_12 :
  Epopd(2,9);
  OneNextSon();
  Epushd(2,1);
  Cpush(t_13);
  Tdupl();
  Rpush(a_14);
  u_13 :
  Cpush(v_13);
  Epushd(3,2);
  MoveTop(3,1);
  goto k_23;
  k_23 :
  TestFunFC(a_11,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(c_14);
  goto l_26;
  c_14 :
  goto b_14;
  l_26 :
  Move(1,1,3,2);
  Return();
  b_14 :
  Epopd(3,2);
  Cpop();
  goto z_13;
  v_13 :
  IsAppl();
  MatchTravInit();
  x_13 :
  OneMatchNextSon();
  Cpush(x_13);
  Rpush(y_13);
  goto u_13;
  y_13 :
  Cpop();
  MatchTravEnd();
  z_13 :
  Return();
  a_14 :
  Cpop();
  Crestore();
  Cjump();
  t_13 :
  MoveTop(2,1);
  Move(0,2,2,1);
  Epopd(2,1);
  AllBuild();
  AllBuild();
  Epopd(1,3);
  goto w_12;
  z_9 :
  Cpop();
  w_12 :
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,4,1,1);
  Epopd(1,1);
  AllBuild();
  Tdupl();
  Epushd(1,2);
  Ccall(_stratego_h_12);
  MoveTop(1,1);
  Move(0,5,1,1);
  Ccall(_stratego_h_12);
  MoveTop(1,2);
  Move(0,6,1,2);
  Epopd(1,2);
  Tpop();
  NotNULLd(0,1);
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App1("Block",App2("Cons",App1("Cpush",Egetd(0,6)),App2("Cons",App1("Label",Egetd(0,5)),App2("Cons",App3("Instr",Egetd(0,1),Egetd(0,3),Egetd(0,4)),App2("Cons",App0("Tduplinv"),App2("Cons",App1("Goto",Egetd(0,5)),App2("Cons",App1("Label",Egetd(0,6)),App2("Cons",App3("Instr",Egetd(0,2),Egetd(0,3),Egetd(0,4)),App0("Nil"))))))))));
  Epopd(0,6);
  goto w_9;
  x_9 :
  Ccontinue(d_14);
  Ccall(_stratego_i_12);
  goto w_9;
  d_14 :
  Ccall(_stratego_k_12);
  goto f_14;
  w_9 :
  Cpop();
  f_14 :
ENDPROC

PROC(_stratego_h_12)
  _ST_new();
ENDPROC

PROC(_stratego_i_12)
  Epushd(0,9);
  TestFunTop(y_9);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  TestFunTop(b_10);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_j_12);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(g_14);
  TravInit();
  OneNextSon();
  TestFunTop(b_11);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto s_30;
  s_30 :
  TestFunFC(a_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(i_14);
  goto z_31;
  i_14 :
  goto h_14;
  z_31 :
  Move(1,1,2,2);
  Return();
  h_14 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_p_11);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(1,1);
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  AllBuild();
  Tdupl();
  Epushd(1,6);
  Ccall(_stratego_h_12);
  MoveTop(1,1);
  Move(0,4,1,1);
  Ccall(_stratego_h_12);
  MoveTop(1,2);
  Move(0,5,1,2);
  Ccall(_stratego_h_12);
  MoveTop(1,3);
  Move(0,6,1,3);
  Ccall(_stratego_h_12);
  MoveTop(1,4);
  Move(0,7,1,4);
  Ccall(_stratego_h_12);
  MoveTop(1,5);
  Move(0,8,1,5);
  Ccall(_stratego_h_12);
  MoveTop(1,6);
  Move(0,9,1,6);
  Epopd(1,6);
  Tpop();
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,4);
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(0,9)),App2("Cons",App1("Label",Egetd(0,4)),App2("Cons",App1("Cpush",Egetd(0,5)),App2("Cons",App3("Instr",Egetd(0,1),Egetd(0,2),Egetd(0,3)),App2("Cons",App0("Cpop"),App2("Cons",App1("Goto",Egetd(0,8)),App2("Cons",App1("Label",Egetd(0,5)),App2("Cons",App0("IsAppl"),App2("Cons",App0("MatchTravInit"),App2("Cons",App1("Label",Egetd(0,6)),App2("Cons",App0("OneMatchNextSon"),App2("Cons",App1("Cpush",Egetd(0,6)),App2("Cons",App1("Rpush",Egetd(0,7)),App2("Cons",App1("Goto",Egetd(0,4)),App2("Cons",App1("Label",Egetd(0,7)),App2("Cons",App0("Cpop"),App2("Cons",App0("MatchTravEnd"),App2("Cons",App1("Label",Egetd(0,8)),App2("Cons",App0("Return"),App2("Cons",App1("Label",Egetd(0,9)),App0("Nil")))))))))))))))))))))));
  Epopd(0,9);
ENDPROC

PROC(_stratego_j_12)
  Cpush(j_14);
  Tdupl();
  Rpush(q_14);
  k_14 :
  Cpush(l_14);
  Epushd(0,2);
  MoveTop(0,1);
  goto e_35;
  e_35 :
  TestFunFC(u_14,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(s_14);
  goto i_35;
  s_14 :
  goto r_14;
  i_35 :
  Return();
  r_14 :
  Epopd(0,2);
  Cpop();
  goto p_14;
  l_14 :
  IsAppl();
  MatchTravInit();
  n_14 :
  OneMatchNextSon();
  Cpush(n_14);
  Rpush(o_14);
  goto k_14;
  o_14 :
  Cpop();
  MatchTravEnd();
  p_14 :
  Return();
  q_14 :
  Cpop();
  Crestore();
  Cjump();
  j_14 :
ENDPROC

PROC(_stratego_k_12)
  Epushd(0,6);
  TestFunTop(y_9);
  TravInit();
  OneNextSon();
  Cpush(w_14);
  Epushd(1,1);
  TestFunTop(b_10);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  TestFunTop(x_14);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto l_35;
  l_35 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(a_15);
  goto d_39;
  a_15 :
  goto z_14;
  d_39 :
  Return();
  z_14 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_j_12);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_12);
  OneNextSon();
  Ccall(_stratego_p_11);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  TestFunTop(x_14);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto o_35;
  o_35 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(c_15);
  goto f_39;
  c_15 :
  goto b_15;
  f_39 :
  Return();
  b_15 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_12);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(b_11);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto q_35;
  q_35 :
  TestFunFC(a_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(f_15);
  goto g_39;
  f_15 :
  goto e_15;
  g_39 :
  Move(1,1,2,2);
  Return();
  e_15 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_p_11);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_p_11);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto v_14;
  w_14 :
  Epushd(1,1);
  TestFunTop(b_10);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  TestFunTop(i_10);
  TravInit();
  OneNextSon();
  TestFunTop(x_14);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto t_35;
  t_35 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(j_15);
  goto i_39;
  j_15 :
  goto h_15;
  i_39 :
  Return();
  h_15 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_j_12);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_12);
  OneNextSon();
  Ccall(_stratego_p_11);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto c_37;
  c_37 :
  TestFunFC(m_15,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto d_37;
  d_37 :
  TestStr(2,2,"Cons",&&fail);
  Rpush(l_15);
  goto m_39;
  l_15 :
  goto k_15;
  m_39 :
  Return();
  k_15 :
  Epopd(2,2);
  AllBuild();
  OneNextSon();
  TestFunTop(i_10);
  TravInit();
  OneNextSon();
  TestFunTop(x_14);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto f_37;
  f_37 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(p_15);
  goto n_39;
  p_15 :
  goto o_15;
  n_39 :
  Return();
  o_15 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_12);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(b_11);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto q_37;
  q_37 :
  TestFunFC(a_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(v_15);
  goto o_39;
  v_15 :
  goto s_15;
  o_39 :
  Move(1,1,2,2);
  Return();
  s_15 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_p_11);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_p_11);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto s_37;
  s_37 :
  TestFunFC(m_15,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto t_37;
  t_37 :
  TestStr(2,2,"Cons",&&fail);
  Rpush(b_16);
  goto s_39;
  b_16 :
  goto y_15;
  s_39 :
  Return();
  y_15 :
  Epopd(2,2);
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto g_15;
  v_14 :
  Cpop();
  g_15 :
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  AllBuild();
  Tdupl();
  Epushd(1,3);
  Ccall(_stratego_h_12);
  MoveTop(1,1);
  Move(0,4,1,1);
  Ccall(_stratego_h_12);
  MoveTop(1,2);
  Move(0,5,1,2);
  Ccall(_stratego_h_12);
  MoveTop(1,3);
  Move(0,6,1,3);
  Epopd(1,3);
  Tpop();
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App1("Label",Egetd(0,4)),App2("Cons",App2("MatchFun",ATmakeString("Cons"),MakeInt(2)),App2("Cons",App1("Cpush",Egetd(0,5)),App2("Cons",App1("Arg",MakeInt(0)),App2("Cons",App3("Instr",Egetd(0,1),Egetd(0,2),Egetd(0,3)),App2("Cons",App0("Tpop"),App2("Cons",App0("Cpop"),App2("Cons",App1("Goto",Egetd(0,6)),App2("Cons",App1("Label",Egetd(0,5)),App2("Cons",App1("Arg",MakeInt(1)),App2("Cons",App0("Tdrop"),App2("Cons",App1("Goto",Egetd(0,4)),App2("Cons",App1("Label",Egetd(0,6)),App2("Cons",App0("Tpop"),App0("Nil"))))))))))))))))));
  Epopd(0,6);
ENDPROC

PROC(_stratego_l_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_39;
  z_39 :
  TestFunFC(i_16,&&fail,Egetd(0,1));
  Rpush(h_16);
  goto b_40;
  h_16 :
  goto e_16;
  b_40 :
  Return();
  e_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_12)
  Epushd(0,14);
  MoveTop(0,10);
  goto o_44;
  o_44 :
  TestFunFC(v_21,&&u_21,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,13,0,10,1);
  MoveArg(0,14,0,10,2);
  goto p_44;
  p_44 :
  TestFunFC(w_0,&&w_21,Egetd(0,11));
  Rpush(q_21);
  goto o_60;
  w_21 :
  TestFunFC(a_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  Rpush(q_21);
  goto p_60;
  u_21 :
  TestFunFC(y_9,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,13,0,10,1);
  MoveArg(0,14,0,10,2);
  goto q_44;
  q_44 :
  TestFunFC(i_16,&&y_21,Egetd(0,11));
  Rpush(q_21);
  goto e_57;
  y_21 :
  TestFunFC(e_22,&&a_22,Egetd(0,11));
  Rpush(q_21);
  goto f_57;
  a_22 :
  TestFunFC(i_22,&&h_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto g_57;
  h_22 :
  TestFunFC(k_22,&&j_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto h_57;
  j_22 :
  TestFunFC(i_10,&&n_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  Rpush(q_21);
  goto j_57;
  n_22 :
  TestFunFC(c_10,&&p_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  Rpush(q_21);
  goto k_57;
  p_22 :
  TestFunFC(s_22,&&q_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  Rpush(q_21);
  goto n_57;
  q_22 :
  TestFunFC(v_22,&&u_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  Rpush(q_21);
  goto q_57;
  u_22 :
  TestFunFC(z_22,&&w_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto r_57;
  w_22 :
  TestFunFC(c_23,&&a_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto s_57;
  a_23 :
  TestFunFC(l_23,&&j_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  MoveArg(0,6,0,11,2);
  goto r_44;
  r_44 :
  TestFunFC(w_0,&&m_23,Egetd(0,12));
  Rpush(q_21);
  goto t_57;
  m_23 :
  TestFunFC(a_0,&&fail,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  MoveArg(0,8,0,12,1);
  Rpush(q_21);
  goto u_57;
  j_23 :
  TestFunFC(o_23,&&n_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  MoveArg(0,6,0,11,2);
  MoveArg(0,1,0,11,3);
  goto s_44;
  s_44 :
  TestFunFC(b_24,&&p_23,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  MoveArg(0,8,0,12,1);
  Rpush(q_21);
  goto c_58;
  p_23 :
  TestFunFC(d_24,&&c_24,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  Rpush(q_21);
  goto d_58;
  c_24 :
  TestFunFC(w_24,&&v_24,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  Rpush(q_21);
  goto e_58;
  v_24 :
  TestFunFC(x_24,&&fail,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  Rpush(q_21);
  goto f_58;
  n_23 :
  TestFunFC(y_25,&&t_25,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto g_58;
  t_25 :
  TestFunFC(d_26,&&c_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  goto t_44;
  t_44 :
  TestFunFC(w_0,&&j_26,Egetd(0,12));
  Rpush(q_21);
  goto o_58;
  j_26 :
  TestFunFC(a_0,&&fail,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  MoveArg(0,8,0,12,1);
  goto u_44;
  u_44 :
  TestFunFC(o_23,&&fail,Egetd(0,7));
  MoveArg(0,2,0,7,0);
  MoveArg(0,3,0,7,1);
  MoveArg(0,4,0,7,2);
  MoveArg(0,5,0,7,3);
  Rpush(q_21);
  goto p_58;
  c_26 :
  TestFunFC(b_10,&&m_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  Rpush(q_21);
  goto s_58;
  m_26 :
  TestFunFC(b_11,&&n_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  goto v_44;
  v_44 :
  TestFunFC(a_11,&&fail,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  goto w_44;
  w_44 :
  TestFunFC(w_0,&&fail,Egetd(0,9));
  Rpush(q_21);
  goto v_58;
  n_26 :
  TestFunFC(p_26,&&o_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  Rpush(q_21);
  goto x_58;
  o_26 :
  TestFunFC(r_26,&&q_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  MoveArg(0,6,0,11,2);
  goto x_44;
  x_44 :
  TestFunFC(w_0,&&fail,Egetd(0,9));
  Rpush(q_21);
  goto z_58;
  q_26 :
  TestFunFC(t_26,&&s_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  Rpush(q_21);
  goto a_59;
  s_26 :
  TestFunFC(x_14,&&u_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  Rpush(q_21);
  goto b_59;
  u_26 :
  TestFunFC(w_26,&&v_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto e_59;
  v_26 :
  TestFunFC(y_26,&&x_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto y_44;
  y_44 :
  TestFunFC(w_0,&&z_26,Egetd(0,12));
  Rpush(q_21);
  goto f_59;
  z_26 :
  TestFunFC(a_0,&&fail,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  MoveArg(0,8,0,12,1);
  Rpush(q_21);
  goto g_59;
  x_26 :
  TestFunFC(b_27,&&a_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto h_59;
  a_27 :
  TestFunFC(g_14,&&c_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto k_59;
  c_27 :
  TestFunFC(e_27,&&d_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto n_59;
  d_27 :
  TestFunFC(g_27,&&f_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto q_59;
  f_27 :
  TestFunFC(i_27,&&h_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  Rpush(q_21);
  goto t_59;
  h_27 :
  TestFunFC(k_27,&&j_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto w_59;
  j_27 :
  TestFunFC(m_27,&&l_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto x_59;
  l_27 :
  TestFunFC(o_27,&&n_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  Rpush(q_21);
  goto y_59;
  n_27 :
  TestFunFC(m_15,&&p_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto z_59;
  p_27 :
  TestFunFC(u_14,&&q_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto z_44;
  z_44 :
  TestFunFC(d_24,&&r_27,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  Rpush(q_21);
  goto a_60;
  r_27 :
  TestFunFC(w_24,&&s_27,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  Rpush(q_21);
  goto b_60;
  s_27 :
  TestFunFC(x_24,&&t_27,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  Rpush(q_21);
  goto c_60;
  t_27 :
  TestFunFC(v_27,&&u_27,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  Rpush(q_21);
  goto d_60;
  u_27 :
  TestFunFC(x_27,&&w_27,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  Rpush(q_21);
  goto l_60;
  w_27 :
  TestFunFC(z_27,&&y_27,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  MoveArg(0,8,0,12,1);
  Rpush(q_21);
  goto m_60;
  y_27 :
  TestFunFC(a_28,&&fail,Egetd(0,12));
  MoveArg(0,7,0,12,0);
  MoveArg(0,8,0,12,1);
  Rpush(q_21);
  goto q_60;
  q_27 :
  TestFunFC(c_28,&&b_28,Egetd(0,11));
  Rpush(q_21);
  goto r_60;
  b_28 :
  TestFunFC(e_28,&&d_28,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,9,0,11,1);
  Rpush(q_21);
  goto s_60;
  d_28 :
  TestFunFC(f_28,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(q_21);
  goto t_60;
  q_21 :
  goto u_20;
  t_60 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App0("Tpush"),App2("Cons",App3("Instr",App1("Build",Egetd(0,12)),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("RemoveAnn"),App0("Nil"))))));
  Return();
  u_20 :
  goto r_20;
  s_60 :
  NotNULLd(0,12);
  NotNULLd(0,9);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App0("Tpush"),App2("Cons",App3("Instr",App1("Build",Egetd(0,12)),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("Tpush"),App2("Cons",App3("Instr",App1("Build",Egetd(0,9)),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("SetAnn"),App0("Nil"))))))));
  Return();
  r_20 :
  goto o_20;
  r_60 :
  Tset(App0("GetAnn"));
  Return();
  o_20 :
  goto l_20;
  q_60 :
  NotNULLd(0,8);
  NotNULLd(0,7);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App3("Instr",App1("Build",Egetd(0,8)),Egetd(0,13),Egetd(0,14)),App2("Cons",App3("Instr",Egetd(0,7),Egetd(0,13),Egetd(0,14)),App0("Nil")))));
  Return();
  l_20 :
  goto k_20;
  p_60 :
  NotNULLd(0,12);
  NotNULLd(0,9);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App3("Instr",App1("Build",Egetd(0,12)),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("Tpush"),App2("Cons",App3("BuildKids",Egetd(0,9),Egetd(0,13),Egetd(0,14)),App0("Nil"))))));
  Return();
  k_20 :
  goto j_20;
  o_60 :
  Tset(App1("Block",App0("Nil")));
  Return();
  j_20 :
  goto i_20;
  m_60 :
  Epushd(1,1);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Ccall(_stratego_s_12);
  MoveTop(1,1);
  NotNULLd(0,8);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,7);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App3("BuildKids",Egetd(0,8),Egetd(0,13),Egetd(0,14)),App2("Cons",App2("BuildFun",Egetd(0,7),Egetd(1,1)),App0("Nil")))));
  Epopd(1,1);
  Return();
  i_20 :
  goto c_20;
  l_60 :
  NotNULLd(0,7);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App3("Instr",App1("Build",Egetd(0,7)),Egetd(0,13),Egetd(0,14)));
  Return();
  c_20 :
  goto b_20;
  d_60 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,7);
  NotNULLd(0,13);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,13),App0("TNil"))));
  MoveTop(2,1);
  goto k_44;
  k_44 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_44;
  l_44 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto m_44;
  m_44 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(h_28);
  goto e_60;
  h_28 :
  goto g_28;
  e_60 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(i_28);
  f_60 :
  Cpush(k_28);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto c_44;
  c_44 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto d_44;
  d_44 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto e_44;
  e_44 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(m_28);
  goto g_60;
  m_28 :
  goto l_28;
  g_60 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_p_12);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto z_43;
  z_43 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto a_44;
  a_44 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto b_44;
  b_44 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(o_28);
  goto i_60;
  o_28 :
  goto n_28;
  i_60 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  n_28 :
  Epopd(5,6);
  Return();
  l_28 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto j_28;
  k_28 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_28);
  goto f_60;
  q_28 :
  AllBuild();
  goto p_28;
  j_28 :
  Cpop();
  p_28 :
  Return();
  i_28 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto h_44;
  h_44 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto i_44;
  i_44 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto j_44;
  j_44 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(s_28);
  goto j_60;
  s_28 :
  goto r_28;
  j_60 :
  Move(1,1,3,4);
  Move(1,2,3,6);
  Cpush(u_28);
  NotNULLd(1,1);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,14),App0("TNil"))));
  Ccall(_stratego_r_12);
  NotNULLd(1,2);
  Tset(App1("BuildVar",Egetd(1,2)));
  goto t_28;
  u_28 :
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("BuildVard",Egetd(1,1),Egetd(1,2)));
  Tdupl();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("BuildVard",Egetd(1,1),Egetd(1,2)));
  MoveTop(1,3);
  Tpop();
  goto v_28;
  t_28 :
  Cpop();
  v_28 :
  Return();
  r_28 :
  Epopd(3,7);
  Return();
  g_28 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Epopd(1,3);
  Return();
  b_20 :
  goto a_20;
  c_60 :
  NotNULLd(0,7);
  Tset(App1("BuildReal",Egetd(0,7)));
  Return();
  a_20 :
  goto z_19;
  b_60 :
  NotNULLd(0,7);
  Tset(App1("BuildInt",Egetd(0,7)));
  Return();
  z_19 :
  goto y_19;
  a_60 :
  NotNULLd(0,7);
  Tset(App1("BuildStr",Egetd(0,7)));
  Return();
  y_19 :
  goto w_19;
  z_59 :
  NotNULLd(0,12);
  Tset(App1("ICountRule",Egetd(0,12)));
  Return();
  w_19 :
  goto o_19;
  y_59 :
  NotNULLd(0,12);
  NotNULLd(0,9);
  Tset(App2("Iprim2",Egetd(0,12),Egetd(0,9)));
  Return();
  o_19 :
  goto n_19;
  x_59 :
  NotNULLd(0,12);
  Tset(App1("Iprim",Egetd(0,12)));
  Return();
  n_19 :
  goto m_19;
  w_59 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("Tpop"),App0("Nil"))))));
  Return();
  m_19 :
  goto l_19;
  t_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_s_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_o_12);
  MoveTop(1,2);
  NotNULLd(0,9);
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(1,2);
  NotNULLd(0,14);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App2("Epushd",Egetd(0,14),Egetd(1,1)),App2("Cons",App3("Instr",Egetd(0,9),App2("Cons",App2("TCons",Egetd(0,14),App2("TCons",Egetd(0,12),App0("TNil"))),Egetd(0,13)),Egetd(1,2)),App2("Cons",App2("Epopd",Egetd(0,14),Egetd(1,1)),App0("Nil"))))));
  Epopd(1,2);
  Return();
  l_19 :
  goto k_19;
  q_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_h_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_h_12);
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App1("Block",App2("Cons",App0("ThreadInit"),App2("Cons",App1("Label",Egetd(1,1)),App2("Cons",App1("ThreadNextSon",Egetd(1,2)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("ThreadSetEnv"),App2("Cons",App1("Goto",Egetd(1,1)),App2("Cons",App1("Label",Egetd(1,2)),App2("Cons",App0("ThreadBuild"),App0("Nil")))))))))));
  Epopd(1,2);
  Return();
  k_19 :
  goto h_19;
  n_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_h_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_h_12);
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App1("Block",App2("Cons",App0("IsAppl"),App2("Cons",App0("SomeInit"),App2("Cons",App1("Label",Egetd(1,1)),App2("Cons",App1("SomeNextSon",Egetd(1,2)),App2("Cons",App1("Cpush",Egetd(1,1)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("Cpop"),App2("Cons",App0("CounterOK"),App2("Cons",App1("Goto",Egetd(1,1)),App2("Cons",App1("Label",Egetd(1,2)),App2("Cons",App0("SomeBuild"),App0("Nil"))))))))))))));
  Epopd(1,2);
  Return();
  h_19 :
  goto g_19;
  k_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_h_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_h_12);
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App0("IsAppl"),App2("Cons",App0("OneInit"),App2("Cons",App1("Label",Egetd(1,1)),App2("Cons",App0("OneNextSon"),App2("Cons",App1("Cpush",Egetd(1,1)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("Cpop"),App2("Cons",App0("OneBuild"),App0("Nil")))))))))));
  Epopd(1,2);
  Return();
  g_19 :
  goto f_19;
  h_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_h_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_h_12);
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App1("Block",App2("Cons",App0("AllInit"),App2("Cons",App1("Label",Egetd(1,1)),App2("Cons",App1("AllNextSon",Egetd(1,2)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)),App2("Cons",App1("Goto",Egetd(1,1)),App2("Cons",App1("Label",Egetd(1,2)),App2("Cons",App0("AllBuild"),App0("Nil"))))))))));
  Epopd(1,2);
  Return();
  f_19 :
  goto e_19;
  g_59 :
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App0("OneNextSon"),App2("Cons",App3("Instr",Egetd(0,7),Egetd(0,13),Egetd(0,14)),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,8)),Egetd(0,13),Egetd(0,14)),App0("Nil"))))));
  Return();
  e_19 :
  goto d_19;
  f_59 :
  Tset(App1("Block",App0("Nil")));
  Return();
  d_19 :
  goto a_19;
  e_59 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App0("TravInit"),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,12)),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("AllBuild"),App0("Nil"))))));
  Return();
  a_19 :
  goto y_18;
  b_59 :
  Epushd(1,1);
  NotNULLd(0,9);
  Tset(Egetd(0,9));
  Ccall(_stratego_s_12);
  MoveTop(1,1);
  NotNULLd(0,12);
  NotNULLd(1,1);
  NotNULLd(0,9);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App2("MatchFun",Egetd(0,12),Egetd(1,1)),App2("Cons",App0("TravInit"),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,9)),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("AllBuild"),App0("Nil")))))));
  Epopd(1,1);
  Return();
  y_18 :
  goto x_18;
  a_59 :
  NotNULLd(0,9);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,12);
  Tset(App1("Block",App2("Cons",App1("TpushIthSon",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,9),Egetd(0,13),Egetd(0,14)),App2("Cons",App1("TputIthSon",Egetd(0,12)),App0("Nil"))))));
  Return();
  x_18 :
  goto w_18;
  z_58 :
  NotNULLd(0,12);
  NotNULLd(0,6);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App1("Label",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,6),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("Return"),App0("Nil"))))));
  Return();
  w_18 :
  goto u_18;
  x_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_h_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,9);
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,9),Egetd(0,13),Egetd(0,14)),App2("Cons",App1("Goto",Egetd(1,1)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil")))))));
  Epopd(1,1);
  Return();
  u_18 :
  goto o_18;
  v_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_h_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,7);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(1,1)),App2("Cons",App1("Goto",Egetd(0,7)),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil"))))));
  Epopd(1,1);
  Return();
  o_18 :
  goto n_18;
  s_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_h_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,9);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(1,1)),App2("Cons",App1("Label",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,9),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("Return"),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil"))))))));
  Epopd(1,1);
  Return();
  n_18 :
  goto m_18;
  p_58 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_h_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_n_12);
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(1,1);
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",Egetd(1,2),App2("Cons",App3("Instr",App3("MatchVars",Egetd(0,3),Egetd(0,4),Egetd(0,5)),Egetd(0,13),Egetd(0,14)),App2("Cons",App1("Goto",Egetd(0,9)),App2("Cons",App1("Label",Egetd(1,1)),App2("Cons",App3("Instr",App2("Cases",Egetd(0,8),Egetd(0,9)),Egetd(0,13),Egetd(0,14)),App0("Nil"))))))));
  Epopd(1,2);
  Return();
  m_18 :
  goto l_18;
  o_58 :
  Tset(App1("Block",App0("Nil")));
  Return();
  l_18 :
  goto i_18;
  g_58 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_h_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Cpush(x_28);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Rpush(y_28);
  i_58 :
  Cpush(a_29);
  Epushd(3,1);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,4);
  MoveTop(4,1);
  goto b_43;
  b_43 :
  TestFunFC(l_23,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(c_29);
  goto j_58;
  c_29 :
  goto b_29;
  j_58 :
  Epushd(5,1);
  MoveTop(5,1);
  Move(1,2,5,1);
  Epopd(5,1);
  Return();
  b_29 :
  Epopd(4,4);
  OneNextSon();
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  Epopd(4,1);
  AllBuild();
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Epopd(3,1);
  goto z_28;
  a_29 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_29);
  goto i_58;
  e_29 :
  AllBuild();
  goto d_29;
  z_28 :
  Cpop();
  d_29 :
  Return();
  y_28 :
  goto w_28;
  x_28 :
  Tset(App0("Fail"));
  Tdupl();
  Tset(App0("Fail"));
  MoveTop(1,2);
  Tpop();
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  goto f_29;
  w_28 :
  Cpop();
  f_29 :
  MoveTop(2,2);
  Move(1,3,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,2);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App3("Instr",App2("Cases",Egetd(1,3),Egetd(1,1)),Egetd(0,13),Egetd(0,14)),App2("Cons",App3("Instr",Egetd(1,2),Egetd(0,13),Egetd(0,14)),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil"))))));
  Epopd(1,3);
  Return();
  i_18 :
  goto y_17;
  f_58 :
  NotNULLd(0,7);
  NotNULLd(0,9);
  NotNULLd(0,6);
  NotNULLd(0,1);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App1("MatchReal",Egetd(0,7)),App2("Cons",App3("Instr",App3("MatchVars",Egetd(0,9),Egetd(0,6),Egetd(0,1)),Egetd(0,13),Egetd(0,14)),App0("Nil")))));
  Return();
  y_17 :
  goto u_17;
  e_58 :
  NotNULLd(0,7);
  NotNULLd(0,9);
  NotNULLd(0,6);
  NotNULLd(0,1);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App1("MatchInt",Egetd(0,7)),App2("Cons",App3("Instr",App3("MatchVars",Egetd(0,9),Egetd(0,6),Egetd(0,1)),Egetd(0,13),Egetd(0,14)),App0("Nil")))));
  Return();
  u_17 :
  goto o_17;
  d_58 :
  NotNULLd(0,7);
  NotNULLd(0,9);
  NotNULLd(0,6);
  NotNULLd(0,1);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App1("MatchString",Egetd(0,7)),App2("Cons",App3("Instr",App3("MatchVars",Egetd(0,9),Egetd(0,6),Egetd(0,1)),Egetd(0,13),Egetd(0,14)),App0("Nil")))));
  Return();
  o_17 :
  goto n_17;
  c_58 :
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(0,6);
  NotNULLd(0,1);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App2("MatchFun",Egetd(0,7),Egetd(0,8)),App2("Cons",App3("Instr",App3("MatchVars",Egetd(0,9),Egetd(0,6),Egetd(0,1)),Egetd(0,13),Egetd(0,14)),App0("Nil")))));
  Return();
  n_17 :
  goto k_17;
  u_57 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,7);
  NotNULLd(0,13);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,13),App0("TNil"))));
  MoveTop(2,1);
  goto v_42;
  v_42 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto w_42;
  w_42 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_42;
  x_42 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(h_29);
  goto v_57;
  h_29 :
  goto g_29;
  v_57 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(i_29);
  w_57 :
  Cpush(k_29);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto n_42;
  n_42 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto o_42;
  o_42 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto p_42;
  p_42 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(m_29);
  goto x_57;
  m_29 :
  goto l_29;
  x_57 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_p_12);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto k_42;
  k_42 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto l_42;
  l_42 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto m_42;
  m_42 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(o_29);
  goto z_57;
  o_29 :
  goto n_29;
  z_57 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  n_29 :
  Epopd(5,6);
  Return();
  l_29 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto j_29;
  k_29 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_29);
  goto w_57;
  q_29 :
  AllBuild();
  goto p_29;
  j_29 :
  Cpop();
  p_29 :
  Return();
  i_29 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto s_42;
  s_42 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto t_42;
  t_42 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto u_42;
  u_42 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(s_29);
  goto a_58;
  s_29 :
  goto r_29;
  a_58 :
  Move(1,1,3,4);
  Move(1,2,3,6);
  Cpush(u_29);
  NotNULLd(1,1);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,14),App0("TNil"))));
  Ccall(_stratego_r_12);
  NotNULLd(1,2);
  Tset(App1("MatchVar",Egetd(1,2)));
  goto t_29;
  u_29 :
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("MatchVard",Egetd(1,1),Egetd(1,2)));
  Tdupl();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("MatchVard",Egetd(1,1),Egetd(1,2)));
  MoveTop(1,3);
  Tpop();
  goto v_29;
  t_29 :
  Cpop();
  v_29 :
  Return();
  r_29 :
  Epopd(3,7);
  Return();
  g_29 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(0,6);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",Egetd(1,3),App2("Cons",App3("Instr",App3("MatchVars",Egetd(0,8),Egetd(0,9),Egetd(0,6)),Egetd(0,13),Egetd(0,14)),App0("Nil")))));
  Epopd(1,3);
  Return();
  k_17 :
  goto h_17;
  t_57 :
  NotNULLd(0,6);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App3("Instr",Egetd(0,6),Egetd(0,13),Egetd(0,14)));
  Return();
  h_17 :
  goto e_17;
  s_57 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)));
  Return();
  e_17 :
  goto b_17;
  r_57 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App0("Tpop"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)),App0("Nil")))));
  Return();
  b_17 :
  goto y_16;
  q_57 :
  NotNULLd(0,12);
  NotNULLd(0,9);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App1("Arg",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,9),Egetd(0,13),Egetd(0,14)),App0("Nil")))));
  Return();
  y_16 :
  goto x_16;
  n_57 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_h_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_h_12);
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(1,2);
  NotNULLd(0,9);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App1("Cpush",Egetd(1,2)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("Cpop"),App2("Cons",App1("Goto",Egetd(1,1)),App2("Cons",App1("Label",Egetd(1,2)),App2("Cons",App3("Instr",Egetd(0,9),Egetd(0,13),Egetd(0,14)),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil"))))))))));
  Epopd(1,2);
  Return();
  x_16 :
  goto u_16;
  k_57 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_h_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_h_12);
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(1,2);
  NotNULLd(0,9);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App1("Cpush",Egetd(1,2)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("Cpop"),App2("Cons",App1("Goto",Egetd(1,1)),App2("Cons",App1("Label",Egetd(1,2)),App2("Cons",App3("Instr",Egetd(0,9),Egetd(0,13),Egetd(0,14)),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil"))))))))));
  Epopd(1,2);
  Return();
  u_16 :
  goto t_16;
  j_57 :
  NotNULLd(0,12);
  NotNULLd(0,9);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)),App2("Cons",App3("Instr",Egetd(0,9),Egetd(0,13),Egetd(0,14)),App0("Nil")))));
  Return();
  t_16 :
  goto q_16;
  h_57 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_h_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App1("Cpush",Egetd(1,1)),App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("Cpop"),App2("Cons",App0("Crestore"),App2("Cons",App0("Cjump"),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil"))))))))));
  Epopd(1,1);
  Return();
  q_16 :
  goto p_16;
  g_57 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,13),Egetd(0,14)),App2("Cons",App0("Tpop"),App0("Nil"))))));
  Return();
  p_16 :
  goto m_16;
  f_57 :
  Tset(App1("Goto",ATmakeString("fail")));
  Return();
  m_16 :
  goto l_16;
  e_57 :
  Tset(App1("Block",App0("Nil")));
  Return();
  l_16 :
  Epopd(0,14);
ENDPROC

PROC(_stratego_n_12)
  Epushd(0,7);
  MoveTop(0,2);
  goto y_60;
  y_60 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto z_60;
  z_60 :
  TestFunFC(b_24,&&b_30,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,1,0,3,1);
  goto a_61;
  a_61 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto b_61;
  b_61 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(a_30);
  goto y_61;
  b_30 :
  TestFunFC(w_24,&&c_30,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto c_61;
  c_61 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto d_61;
  d_61 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(a_30);
  goto z_61;
  c_30 :
  TestFunFC(x_24,&&d_30,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto e_61;
  e_61 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto f_61;
  f_61 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(a_30);
  goto a_62;
  d_30 :
  TestFunFC(d_24,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto g_61;
  g_61 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto h_61;
  h_61 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(a_30);
  goto b_62;
  a_30 :
  goto z_29;
  b_62 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App2("MatchStringFC",Egetd(0,4),Egetd(0,6)));
  Return();
  z_29 :
  goto y_29;
  a_62 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App2("MatchRealFC",Egetd(0,4),Egetd(0,6)));
  Return();
  y_29 :
  goto x_29;
  z_61 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App2("MatchIntFC",Egetd(0,4),Egetd(0,6)));
  Return();
  x_29 :
  goto w_29;
  y_61 :
  NotNULLd(0,4);
  NotNULLd(0,1);
  NotNULLd(0,6);
  Tset(App3("MatchFunFC",Egetd(0,4),Egetd(0,1),Egetd(0,6)));
  Return();
  w_29 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_o_12)
  _ST_add();
ENDPROC

PROC(_stratego_p_12)
  Epushd(0,5);
  MoveTop(0,1);
  goto l_62;
  l_62 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto m_62;
  m_62 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto n_62;
  n_62 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(f_30);
  goto n_63;
  f_30 :
  goto e_30;
  n_63 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",MakeInt(1),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil")))));
  Rpush(g_30);
  o_63 :
  Epushd(1,9);
  MoveTop(1,1);
  goto g_62;
  g_62 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_62;
  h_62 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto i_62;
  i_62 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,9,1,5,1);
  goto j_62;
  j_62 :
  TestFunFC(a_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto k_62;
  k_62 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Cpush(l_30);
  Rpush(m_30);
  goto p_63;
  m_30 :
  goto k_30;
  l_30 :
  Rpush(o_30);
  goto q_63;
  o_30 :
  goto n_30;
  k_30 :
  Cpop();
  n_30 :
  goto j_30;
  j_30 :
  goto i_30;
  q_63 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_q_12);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  NotNULLd(1,8);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,8),App0("TNil")))));
  Rpush(p_30);
  goto o_63;
  p_30 :
  Epopd(2,1);
  Return();
  i_30 :
  goto h_30;
  p_63 :
  Epushd(2,1);
  Move(1,4,1,7);
  Move(2,1,1,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Epopd(2,1);
  Return();
  h_30 :
  Epopd(1,9);
  Return();
  g_30 :
  Return();
  e_30 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_12)
  _ST_plus();
ENDPROC

PROC(_stratego_r_12)
  Epushd(0,5);
  MoveTop(0,1);
  goto t_63;
  t_63 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto u_63;
  u_63 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_63;
  v_63 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(r_30);
  goto c_64;
  r_30 :
  goto q_30;
  c_64 :
  Move(0,2,0,4);
  Return();
  q_30 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_s_12)
  Rpush(t_30);
  n_64 :
  Cpush(v_30);
  Ccall(_stratego_p_11);
  Tset(MakeInt(0));
  goto u_30;
  v_30 :
  Epushd(0,3);
  MoveTop(0,1);
  goto f_64;
  f_64 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(y_30);
  goto o_64;
  y_30 :
  goto x_30;
  o_64 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(z_30);
  goto n_64;
  z_30 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_o_12);
  Epopd(1,1);
  Return();
  x_30 :
  Epopd(0,3);
  goto w_30;
  u_30 :
  Cpop();
  w_30 :
  Return();
  t_30 :
ENDPROC

PROC(_stratego_t_12)
  Rpush(a_31);
  h_65 :
  Cpush(y_31);
  Cpush(b_32);
  Ccall(_stratego_p_11);
  goto a_32;
  b_32 :
  Ccontinue(c_32);
  TestFunTop(d_32);
  TravInit();
  OneNextSon();
  Rpush(e_32);
  goto h_65;
  e_32 :
  AllBuild();
  goto a_32;
  c_32 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_32);
  goto h_65;
  g_32 :
  AllBuild();
  Rpush(h_32);
  i_65 :
  Cpush(j_32);
  Epushd(0,6);
  MoveTop(0,1);
  goto s_64;
  s_64 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto t_64;
  t_64 :
  TestFunFC(d_32,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto u_64;
  u_64 :
  TestFunFC(w_0,&&n_32,Egetd(0,3));
  Rpush(m_32);
  goto j_65;
  n_32 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_32);
  goto k_65;
  m_32 :
  goto l_32;
  k_65 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,4),App2("Cons",App1("Block",Egetd(0,5)),Egetd(0,6))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_32);
  goto i_65;
  o_32 :
  AllBuild();
  Rpush(p_32);
  goto i_65;
  p_32 :
  Return();
  l_32 :
  goto k_32;
  j_65 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  k_32 :
  Epopd(0,6);
  goto i_32;
  j_32 :
  goto q_32;
  i_32 :
  Cpop();
  q_32 :
  Return();
  h_32 :
  goto f_32;
  a_32 :
  Cpop();
  f_32 :
  goto x_31;
  y_31 :
  goto r_32;
  x_31 :
  Cpop();
  r_32 :
  Return();
  a_31 :
ENDPROC

PROC(_stratego_u_12)
  Cpush(t_32);
  TestFunTop(d_32);
  TravInit();
  OneNextSon();
  Rpush(u_32);
  l_65 :
  Cpush(w_32);
  v_32 :
  Ccall(_stratego_v_12);
  Tduplinv();
  goto v_32;
  w_32 :
  Cpush(y_32);
  Ccall(_stratego_p_11);
  goto x_32;
  y_32 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_33);
  goto l_65;
  a_33 :
  AllBuild();
  goto z_32;
  x_32 :
  Cpop();
  z_32 :
  Cpush(c_33);
  b_33 :
  Ccall(_stratego_v_12);
  Tduplinv();
  goto b_33;
  c_33 :
  Return();
  u_32 :
  AllBuild();
  goto s_32;
  t_32 :
  goto d_33;
  s_32 :
  Cpop();
  d_33 :
ENDPROC

PROC(_stratego_v_12)
  Epushd(0,10);
  MoveTop(0,4);
  goto y_65;
  y_65 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,7,0,4,1);
  goto z_65;
  z_65 :
  TestFunFC(o_33,&&n_33,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto a_66;
  a_66 :
  TestFunFC(a_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,10,0,7,1);
  goto b_66;
  b_66 :
  TestFunFC(p_33,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  Rpush(m_33);
  goto x_67;
  n_33 :
  TestFunFC(r_33,&&q_33,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,1,0,5,1);
  goto c_66;
  c_66 :
  TestFunFC(a_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,10,0,7,1);
  goto d_66;
  d_66 :
  TestFunFC(s_33,&&fail,Egetd(0,8));
  goto e_66;
  e_66 :
  TestFunFC(a_0,&&fail,Egetd(0,10));
  MoveArg(0,2,0,10,0);
  MoveArg(0,3,0,10,1);
  goto f_66;
  f_66 :
  TestFunFC(t_33,&&fail,Egetd(0,2));
  Rpush(m_33);
  goto y_67;
  q_33 :
  TestFunFC(v_33,&&u_33,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto g_66;
  g_66 :
  TestFunFC(a_0,&&w_33,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,10,0,7,1);
  goto h_66;
  h_66 :
  TestFunFC(v_33,&&x_33,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  goto i_66;
  i_66 :
  TestInt(0,6,0,&&y_33);
  Cpush(a_34);
  Rpush(b_34);
  goto z_67;
  b_34 :
  goto z_33;
  a_34 :
  Rpush(d_34);
  goto b_68;
  d_34 :
  goto c_34;
  z_33 :
  Cpop();
  c_34 :
  goto m_33;
  y_33 :
  Rpush(m_33);
  goto b_68;
  x_33 :
  goto j_66;
  j_66 :
  TestInt(0,6,0,&&fail);
  Rpush(m_33);
  goto z_67;
  w_33 :
  goto j_66;
  u_33 :
  TestFunFC(f_34,&&e_34,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto k_66;
  k_66 :
  TestFunFC(a_0,&&g_34,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,10,0,7,1);
  goto l_66;
  l_66 :
  TestFunFC(f_34,&&h_34,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  goto m_66;
  m_66 :
  TestInt(0,6,0,&&i_34);
  Cpush(k_34);
  Rpush(l_34);
  goto a_68;
  l_34 :
  goto j_34;
  k_34 :
  Rpush(n_34);
  goto d_68;
  n_34 :
  goto m_34;
  j_34 :
  Cpop();
  m_34 :
  goto m_33;
  i_34 :
  Rpush(m_33);
  goto d_68;
  h_34 :
  goto n_66;
  n_66 :
  TestInt(0,6,0,&&fail);
  Rpush(m_33);
  goto a_68;
  g_34 :
  goto n_66;
  e_34 :
  TestFunFC(p_34,&&o_34,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto o_66;
  o_66 :
  TestFunFC(a_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,10,0,7,1);
  goto p_66;
  p_66 :
  TestFunFC(q_34,&&fail,Egetd(0,8));
  Rpush(m_33);
  goto f_68;
  o_34 :
  TestFunFC(r_34,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto q_66;
  q_66 :
  TestFunFC(a_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,10,0,7,1);
  goto r_66;
  r_66 :
  TestFunFC(s_34,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  Rpush(m_33);
  goto g_68;
  m_33 :
  goto l_33;
  g_68 :
  Epushd(1,1);
  Move(0,6,0,9);
  Move(1,1,0,10);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("Cons",App1("Label",Egetd(0,6)),Egetd(1,1)));
  Epopd(1,1);
  Return();
  l_33 :
  goto k_33;
  f_68 :
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Return();
  k_33 :
  goto j_33;
  d_68 :
  Epushd(1,1);
  NotNULLd(0,6);
  NotNULLd(0,9);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,9),App0("TNil"))));
  Ccall(_stratego_q_12);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("Cons",App1("Epop",Egetd(1,1)),Egetd(0,10)));
  Epopd(1,1);
  Return();
  j_33 :
  goto i_33;
  b_68 :
  Epushd(1,1);
  NotNULLd(0,6);
  NotNULLd(0,9);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,9),App0("TNil"))));
  Ccall(_stratego_q_12);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("Cons",App1("Epush",Egetd(1,1)),Egetd(0,10)));
  Epopd(1,1);
  Return();
  i_33 :
  goto h_33;
  a_68 :
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Return();
  h_33 :
  goto g_33;
  z_67 :
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Return();
  g_33 :
  goto f_33;
  y_67 :
  NotNULLd(0,6);
  NotNULLd(0,1);
  NotNULLd(0,3);
  Tset(App2("Cons",App2("MatchFun",Egetd(0,6),Egetd(0,1)),Egetd(0,3)));
  Return();
  f_33 :
  goto e_33;
  x_67 :
  Epushd(1,1);
  Move(0,6,0,9);
  Move(1,1,0,10);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("Cons",App1("MatchVar",Egetd(0,6)),Egetd(1,1)));
  Epopd(1,1);
  Return();
  e_33 :
  Epopd(0,10);
ENDPROC
