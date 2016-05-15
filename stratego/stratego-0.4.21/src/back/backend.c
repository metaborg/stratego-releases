#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,o_53);
VARDECL(AFun,m_53);
VARDECL(AFun,u_51);
VARDECL(AFun,z_50);
VARDECL(AFun,x_50);
VARDECL(AFun,w_50);
VARDECL(AFun,v_50);
VARDECL(AFun,t_50);
VARDECL(AFun,s_50);
VARDECL(AFun,w_47);
VARDECL(AFun,i_44);
VARDECL(AFun,u_41);
VARDECL(AFun,t_41);
VARDECL(AFun,m_36);
VARDECL(AFun,f_36);
VARDECL(AFun,b_25);
VARDECL(AFun,r_24);
VARDECL(AFun,p_24);
VARDECL(AFun,j_24);
VARDECL(AFun,h_24);
VARDECL(AFun,b_24);
VARDECL(AFun,y_23);
VARDECL(AFun,w_23);
VARDECL(AFun,u_23);
VARDECL(AFun,s_23);
VARDECL(AFun,q_23);
VARDECL(AFun,o_23);
VARDECL(AFun,m_23);
VARDECL(AFun,j_23);
VARDECL(AFun,g_23);
VARDECL(AFun,b_23);
VARDECL(AFun,x_22);
VARDECL(AFun,s_22);
VARDECL(AFun,e_22);
VARDECL(AFun,w_21);
VARDECL(AFun,u_21);
VARDECL(AFun,t_21);
VARDECL(AFun,k_21);
VARDECL(AFun,e_21);
VARDECL(AFun,c_21);
VARDECL(AFun,s_20);
VARDECL(AFun,q_20);
VARDECL(AFun,a_20);
VARDECL(AFun,w_19);
VARDECL(AFun,n_16);
VARDECL(AFun,k_16);
VARDECL(AFun,b_16);
VARDECL(AFun,h_15);
VARDECL(AFun,e_15);
VARDECL(AFun,e_14);
VARDECL(AFun,f_13);
VARDECL(AFun,j_12);
VARDECL(AFun,h_12);
VARDECL(AFun,u_11);
VARDECL(AFun,o_11);
VARDECL(AFun,m_11);
VARDECL(AFun,h_11);
VARDECL(AFun,f_11);
VARDECL(AFun,z_9);
VARDECL(AFun,z_8);
VARDECL(AFun,j_8);
VARDECL(AFun,v_7);
VARDECL(AFun,i_7);
VARDECL(AFun,w_6);
VARDECL(AFun,m_6);
VARDECL(AFun,g_6);
VARDECL(AFun,c_6);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_b_29);
PROCDECL(_stratego_d_29);
PROCDECL(_stratego_e_29);
PROCDECL(_stratego_f_29);
PROCDECL(_stratego_g_29);
PROCDECL(_stratego_h_29);
PROCDECL(_stratego_i_29);
PROCDECL(_stratego_j_29);
PROCDECL(_stratego_k_29);
PROCDECL(_stratego_l_29);
PROCDECL(_stratego_m_29);
PROCDECL(_stratego_n_29);
PROCDECL(_stratego_o_29);
PROCDECL(_stratego_p_29);
PROCDECL(_stratego_q_29);
PROCDECL(_stratego_r_29);
PROCDECL(_stratego_s_29);
PROCDECL(_stratego_t_29);
PROCDECL(_stratego_u_29);
PROCDECL(_stratego_v_29);
PROCDECL(_stratego_w_29);
PROCDECL(_stratego_x_29);
PROCDECL(_stratego_y_29);
PROCDECL(_stratego_z_29);
PROCDECL(_stratego_a_30);
PROCDECL(_stratego_f_30);
PROCDECL(_stratego_g_30);
PROCDECL(_stratego_h_30);
PROCDECL(_stratego_i_30);
PROCDECL(_stratego_j_30);
PROCDECL(_stratego_k_30);
PROCDECL(_stratego_u_30);
PROCDECL(_stratego_b_31);
PROCDECL(_stratego_c_31);
PROCDECL(_stratego_d_31);
PROCDECL(_stratego_e_31);
PROCDECL(_stratego_f_31);
PROCDECL(_stratego_g_31);
PROCDECL(_stratego_h_31);
PROCDECL(_stratego_i_31);
PROCDECL(_stratego_j_31);
PROCDECL(_stratego_k_31);
PROCDECL(_stratego_l_31);
PROCDECL(_stratego_m_31);
PROCDECL(_stratego_n_31);
PROCDECL(_stratego_o_31);
PROCDECL(_stratego_p_31);
PROCDECL(_stratego_q_31);
PROCDECL(_stratego_r_31);
PROCDECL(_stratego_s_31);
PROCDECL(_stratego_c_32);
PROCDECL(_stratego_d_32);
PROCDECL(_stratego_g_32);
PROCDECL(_stratego_l_32);
PROCDECL(_stratego_r_32);
PROCDECL(_stratego_s_32);
PROCDECL(_stratego_t_32);
PROCDECL(_stratego_u_32);
PROCDECL(_stratego_v_32);
PROCDECL(_stratego_y_32);
PROCDECL(_stratego_z_32);
PROCDECL(_stratego_a_33);
PROCDECL(_stratego_b_33);
PROCDECL(_stratego_c_33);
PROCDECL(_stratego_d_33);

PROC(_stratego_init_afuns)
  MOVE(o_53,ATmakeAFun("Tpop",0,0));
  MOVE(m_53,ATmakeAFun("Arg",1,0));
  MOVE(u_51,ATmakeAFun("Epop",1,0));
  MOVE(z_50,ATmakeAFun("Epush",1,0));
  MOVE(x_50,ATmakeAFun("AllBuild",0,0));
  MOVE(w_50,ATmakeAFun("TravInit",0,0));
  MOVE(v_50,ATmakeAFun("MatchFun",2,0));
  MOVE(t_50,ATmakeAFun("BuildVar",1,0));
  MOVE(s_50,ATmakeAFun("MatchVar",1,0));
  MOVE(w_47,ATmakeAFun("Block",1,0));
  MOVE(i_44,ATmakeAFun("Continue",1,0));
  MOVE(u_41,ATmakeAFun("Rule",3,0));
  MOVE(t_41,ATmakeAFun("LRule",1,0));
  MOVE(m_36,ATmakeAFun("Fun",2,0));
  MOVE(f_36,ATmakeAFun("Branch",4,0));
  MOVE(b_25,ATmakeAFun("App",2,0));
  MOVE(r_24,ATmakeAFun("Op",2,0));
  MOVE(p_24,ATmakeAFun("BuildDefault",1,0));
  MOVE(j_24,ATmakeAFun("Real",1,0));
  MOVE(h_24,ATmakeAFun("Int",1,0));
  MOVE(b_24,ATmakeAFun("Str",1,0));
  MOVE(y_23,ATmakeAFun("BuildTerm",3,0));
  MOVE(w_23,ATmakeAFun("Prim2",2,0));
  MOVE(u_23,ATmakeAFun("Prim",1,0));
  MOVE(s_23,ATmakeAFun("Where",1,0));
  MOVE(q_23,ATmakeAFun("Scope",2,0));
  MOVE(o_23,ATmakeAFun("Thread",1,0));
  MOVE(m_23,ATmakeAFun("Some",1,0));
  MOVE(j_23,ATmakeAFun("All",1,0));
  MOVE(g_23,ATmakeAFun("CongKids",1,0));
  MOVE(b_23,ATmakeAFun("CongWld",1,0));
  MOVE(x_22,ATmakeAFun("Path",2,0));
  MOVE(s_22,ATmakeAFun("Let",2,0));
  MOVE(e_22,ATmakeAFun("Case",4,0));
  MOVE(w_21,ATmakeAFun("Assign",2,0));
  MOVE(u_21,ATmakeAFun("Var",1,0));
  MOVE(t_21,ATmakeAFun("Assign",1,0));
  MOVE(k_21,ATmakeAFun("Not",1,0));
  MOVE(e_21,ATmakeAFun("Test",1,0));
  MOVE(c_21,ATmakeAFun("Fail",0,0));
  MOVE(s_20,ATmakeAFun("Alt",3,0));
  MOVE(q_20,ATmakeAFun("Alts",6,0));
  MOVE(a_20,ATmakeAFun("Choice",2,0));
  MOVE(w_19,ATmakeAFun("Choices",4,0));
  MOVE(n_16,ATmakeAFun("AFun",2,0));
  MOVE(k_16,ATmakeAFun("Id",0,0));
  MOVE(b_16,ATmakeAFun("CountRule",1,0));
  MOVE(h_15,ATmakeAFun("Cong",2,0));
  MOVE(e_15,ATmakeAFun("Build",1,0));
  MOVE(e_14,ATmakeAFun("One",1,0));
  MOVE(f_13,ATmakeAFun("Countrule",1,0));
  MOVE(j_12,ATmakeAFun("Call",2,0));
  MOVE(h_12,ATmakeAFun("SVar",1,0));
  MOVE(u_11,ATmakeAFun("Seq",2,0));
  MOVE(o_11,ATmakeAFun("LChoice",2,0));
  MOVE(m_11,ATmakeAFun("Rec",2,0));
  MOVE(h_11,ATmakeAFun("SDef",4,0));
  MOVE(f_11,ATmakeAFun("Instr",3,0));
  MOVE(z_9,ATmakeAFun("SDef",3,0));
  MOVE(z_8,ATmakeAFun("Runtime",1,0));
  MOVE(j_8,ATmakeAFun("Silent",0,0));
  MOVE(v_7,ATmakeAFun("Binary",0,0));
  MOVE(i_7,ATmakeAFun("Output",1,0));
  MOVE(w_6,ATmakeAFun("Input",1,0));
  MOVE(m_6,ATmakeAFun("Program",1,0));
  MOVE(g_6,ATmakeAFun("Help",0,0));
  MOVE(c_6,ATmakeAFun("Undefined",1,0));
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
  f_4 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_b_29);
  goto f_0;
  g_0 :
  Ccall(_stratego_d_29);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto f_4;
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
  goto g_4;
  l_0 :
  goto k_0;
  g_4 :
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
  Ccall(_stratego_e_29);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_j_29);
  Tdupl();
  Ccall(_stratego_l_29);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_29);
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_l_29);
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
  goto i_4;
  r_0 :
  goto q_0;
  i_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_m_29);
  Ccall(_stratego_p_29);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_q_29);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_b_29)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_4;
  k_4 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto m_4;
  v_0 :
  goto u_0;
  m_4 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_29)
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
  goto f_14;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto j_14;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto m_14;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto p_14;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto s_14;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto v_14;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto z_14;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto j_15;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto n_15;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto r_15;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto v_15;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto p_16;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto s_16;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto v_16;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto y_16;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto f_14;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto j_14;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto m_14;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto p_14;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto s_14;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto v_15;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto p_16;
  r_3 :
  goto t_2;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto s_16;
  t_3 :
  goto t_2;
  s_3 :
  Ccontinue(y_3);
  Rpush(z_3);
  goto v_16;
  z_3 :
  goto t_2;
  y_3 :
  Rpush(b_4);
  goto y_16;
  b_4 :
  goto a_4;
  t_2 :
  Cpop();
  a_4 :
  goto m_1;
  m_1 :
  goto l_1;
  y_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_8;
  m_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_4);
  goto z_16;
  d_4 :
  goto c_4;
  z_16 :
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
  v_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_8;
  c_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(h_4);
  goto w_16;
  h_4 :
  goto e_4;
  w_16 :
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
  s_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_7;
  y_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(n_4);
  goto t_16;
  n_4 :
  goto j_4;
  t_16 :
  Return();
  j_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  p_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_7;
  o_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(p_4);
  goto q_16;
  p_4 :
  goto o_4;
  q_16 :
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
  v_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_7;
  k_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_4);
  goto w_15;
  r_4 :
  goto q_4;
  w_15 :
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
  r_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_7;
  a_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto s_15;
  t_4 :
  goto s_4;
  s_15 :
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
  n_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_6;
  e_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto o_15;
  v_4 :
  goto u_4;
  o_15 :
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
  j_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_6;
  a_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto k_15;
  x_4 :
  goto w_4;
  k_15 :
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
  z_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_5;
  w_5 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto a_15;
  z_4 :
  goto y_4;
  a_15 :
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
  v_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_5;
  s_5 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_5);
  goto w_14;
  b_5 :
  goto a_5;
  w_14 :
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
  s_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_5;
  p_5 :
  TestStr(1,1,"--version",&&fail);
  Rpush(e_5);
  goto t_14;
  e_5 :
  goto c_5;
  t_14 :
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
  p_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_5;
  m_5 :
  TestStr(1,1,"-v",&&fail);
  Rpush(h_5);
  goto q_14;
  h_5 :
  goto f_5;
  q_14 :
  Return();
  f_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  m_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_5;
  j_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(k_5);
  goto n_14;
  k_5 :
  goto i_5;
  n_14 :
  Return();
  i_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  j_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_5;
  g_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(n_5);
  goto k_14;
  n_5 :
  goto l_5;
  k_14 :
  Return();
  l_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  f_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_5;
  d_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(q_5);
  goto h_14;
  q_5 :
  goto o_5;
  h_14 :
  Return();
  o_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_e_29)
  Tdupl();
  r_5 :
  TestFunTop(a_0);
  Cpush(t_5);
  Arg(0);
  Cpush(x_5);
  Ccall(_stratego_f_29);
  goto v_5;
  x_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto c_17;
  c_17 :
  TestFunFC(c_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(b_6);
  goto g_17;
  b_6 :
  goto z_5;
  g_17 :
  Return();
  z_5 :
  Epopd(0,2);
  goto y_5;
  v_5 :
  Cpop();
  y_5 :
  Tpop();
  Cpop();
  goto u_5;
  t_5 :
  Arg(1);
  Tdrop();
  goto r_5;
  u_5 :
  Tpop();
  Ccall(_stratego_g_29);
ENDPROC

PROC(_stratego_f_29)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_17;
  i_17 :
  TestFunFC(g_6,&&fail,Egetd(0,1));
  Rpush(f_6);
  goto l_17;
  f_6 :
  goto d_6;
  l_17 :
  Return();
  d_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_29)
  Epushd(0,1);
  Tdupl();
  Rpush(h_6);
  u_17 :
  Cpush(j_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_17;
  n_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_17;
  o_17 :
  TestFunFC(m_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_6);
  goto v_17;
  l_6 :
  goto k_6;
  v_17 :
  Move(0,1,1,3);
  Return();
  k_6 :
  Epopd(1,4);
  goto i_6;
  j_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_6);
  goto u_17;
  o_6 :
  AllBuild();
  goto n_6;
  i_6 :
  Cpop();
  n_6 :
  Return();
  h_6 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_h_29);
  Tset(MakeInt(1));
  Ccall(_stratego_i_29);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_29)
  _ST_printnl();
ENDPROC

PROC(_stratego_i_29)
  _ST_exit();
ENDPROC

PROC(_stratego_j_29)
  Epushd(0,3);
  Tdupl();
  Cpush(q_6);
  Rpush(r_6);
  e_20 :
  Cpush(t_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_17;
  x_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_18;
  q_18 :
  TestFunFC(w_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_6);
  goto f_20;
  v_6 :
  goto u_6;
  f_20 :
  Move(0,1,1,3);
  Return();
  u_6 :
  Epopd(1,4);
  goto s_6;
  t_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_6);
  goto e_20;
  y_6 :
  AllBuild();
  goto x_6;
  s_6 :
  Cpop();
  x_6 :
  Return();
  r_6 :
  goto p_6;
  q_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto z_6;
  p_6 :
  Cpop();
  z_6 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_k_29);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_k_29)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_l_29)
  _ST_dtime();
ENDPROC

PROC(_stratego_m_29)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(c_7);
  Rpush(d_7);
  m_22 :
  Cpush(f_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_20;
  n_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_20;
  o_20 :
  TestFunFC(i_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_7);
  goto n_22;
  h_7 :
  goto g_7;
  n_22 :
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
  Rpush(l_7);
  goto m_22;
  l_7 :
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
  goto m_7;
  b_7 :
  Cpop();
  m_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_29);
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
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  Cpush(p_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(q_7);
  t_22 :
  Cpush(s_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto f_21;
  f_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_21;
  g_21 :
  TestFunFC(v_7,&&fail,Egetd(1,2));
  Rpush(u_7);
  goto a_23;
  u_7 :
  goto t_7;
  a_23 :
  Return();
  t_7 :
  Epopd(1,3);
  goto r_7;
  s_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_7);
  goto t_22;
  x_7 :
  AllBuild();
  goto w_7;
  r_7 :
  Cpop();
  w_7 :
  Return();
  q_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_29);
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  goto n_7;
  p_7 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_29);
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  goto z_7;
  n_7 :
  Cpop();
  z_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_29)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_o_29)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_p_29)
  Epushd(0,2);
  Tdupl();
  Cpush(b_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(d_8);
  Tdupl();
  Rpush(e_8);
  i_26 :
  Cpush(g_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_23;
  c_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_23;
  d_23 :
  TestFunFC(j_8,&&fail,Egetd(1,2));
  Rpush(i_8);
  goto k_26;
  i_8 :
  goto h_8;
  k_26 :
  Return();
  h_8 :
  Epopd(1,3);
  goto f_8;
  g_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_8);
  goto i_26;
  l_8 :
  AllBuild();
  goto k_8;
  f_8 :
  Cpop();
  k_8 :
  Return();
  e_8 :
  Cpop();
  Crestore();
  Cjump();
  d_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(n_8);
  l_26 :
  Cpush(r_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_23;
  f_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_24;
  a_24 :
  TestFunFC(z_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_8);
  goto m_26;
  t_8 :
  goto s_8;
  m_26 :
  Move(0,2,1,3);
  Return();
  s_8 :
  Epopd(1,4);
  goto o_8;
  r_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_9);
  goto l_26;
  c_9 :
  AllBuild();
  goto a_9;
  o_8 :
  Cpop();
  a_9 :
  Return();
  n_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(d_9);
  q_26 :
  Cpush(f_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_24;
  c_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_24;
  d_24 :
  TestFunFC(m_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_9);
  goto r_26;
  i_9 :
  goto h_9;
  r_26 :
  Move(0,1,1,3);
  Return();
  h_9 :
  Epopd(1,4);
  goto e_9;
  f_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_9);
  goto q_26;
  k_9 :
  AllBuild();
  goto j_9;
  e_9 :
  Cpop();
  j_9 :
  Return();
  d_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_h_29);
  goto a_8;
  b_8 :
  goto m_9;
  a_8 :
  Cpop();
  m_9 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_i_29);
  Epopd(0,2);
ENDPROC

PROC(_stratego_q_29)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_h_29);
  Tset(MakeInt(1));
  Ccall(_stratego_i_29);
ENDPROC

PROC(_stratego_r_29)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_26;
  t_26 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(o_9);
  goto v_26;
  o_9 :
  goto n_9;
  v_26 :
  Return();
  n_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_29)
  Epushd(0,4);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_t_29);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_a_30);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,5);
  Ccall(_stratego_a_33);
  MoveTop(1,1);
  goto e_27;
  e_27 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_27;
  f_27 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto g_27;
  g_27 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(q_9);
  goto m_28;
  q_9 :
  goto p_9;
  m_28 :
  Move(0,3,1,2);
  Move(0,4,1,4);
  Return();
  p_9 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,1);
  NotNULLd(0,4);
  NotNULLd(0,2);
  Tset(App1("Block",App2("Cons",App1("Block",Egetd(0,3)),App2("Cons",App1("Block",Egetd(0,1)),App2("Cons",App1("Block",App2("Cons",App1("PROC",ATmakeString("init_afuns")),App2("Cons",App1("Block",Egetd(0,4)),App2("Cons",App0("ENDPROC"),App0("Nil"))))),App2("Cons",App1("Block",Egetd(0,2)),App0("Nil")))))));
  Epopd(0,4);
ENDPROC

PROC(_stratego_t_29)
  Tdupl();
  Tset(ATmakeString("symbol-table"));
  Ccall(_stratego_u_29);
  Tpop();
  Rpush(r_9);
  n_28 :
  Cpush(t_9);
  Ccall(_stratego_b_29);
  goto s_9;
  t_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_29);
  OneNextSon();
  Rpush(w_9);
  goto n_28;
  w_9 :
  AllBuild();
  goto v_9;
  s_9 :
  Cpop();
  v_9 :
  Return();
  r_9 :
ENDPROC

PROC(_stratego_u_29)
  _ST_create_table();
ENDPROC

PROC(_stratego_v_29)
  Epushd(0,4);
  MoveTop(0,1);
  goto t_28;
  t_28 :
  TestFunFC(z_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  goto u_28;
  u_28 :
  TestFunFC(w_0,&&fail,Egetd(0,3));
  Rpush(y_9);
  goto o_30;
  y_9 :
  goto x_9;
  o_30 :
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(App2("TCons",ATmakeString("_stratego_"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_x_29);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_w_29);
  NotNULLd(0,2);
  Tset(App1("PROCDECL",Egetd(0,2)));
  Epopd(1,1);
  Return();
  x_9 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_w_29)
  _ST_table_put();
ENDPROC

PROC(_stratego_x_29)
  Epushd(0,5);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_29);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_29);
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto r_30;
  r_30 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_30;
  s_30 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto t_30;
  t_30 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(c_10);
  goto u_31;
  c_10 :
  goto b_10;
  u_31 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(d_10);
  v_31 :
  Cpush(f_10);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_10);
  goto v_31;
  h_10 :
  AllBuild();
  goto e_10;
  f_10 :
  Ccall(_stratego_b_29);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto i_10;
  e_10 :
  Cpop();
  i_10 :
  Return();
  d_10 :
  Ccall(_stratego_z_29);
  Return();
  b_10 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_y_29)
  _ST_explode_string();
ENDPROC

PROC(_stratego_z_29)
  _ST_implode_string();
ENDPROC

PROC(_stratego_a_30)
  Rpush(j_10);
  z_31 :
  Cpush(l_10);
  Ccall(_stratego_b_29);
  goto k_10;
  l_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App3("Instr",Egetd(0,1),App0("Nil"),MakeInt(0)));
  Cpush(p_10);
  Ccall(_stratego_f_30);
  goto n_10;
  p_10 :
  goto q_10;
  n_10 :
  Cpop();
  q_10 :
  Rpush(r_10);
  b_32 :
  Cpush(t_10);
  s_10 :
  Cpush(v_10);
  Ccall(_stratego_g_30);
  goto u_10;
  v_10 :
  Ccall(_stratego_d_31);
  goto x_10;
  u_10 :
  Cpop();
  x_10 :
  Tduplinv();
  goto s_10;
  t_10 :
  AllInit();
  y_10 :
  AllNextSon(&&z_10);
  Rpush(a_11);
  goto b_32;
  a_11 :
  goto y_10;
  z_10 :
  AllBuild();
  Return();
  r_10 :
  Ccall(_stratego_v_32);
  Ccall(_stratego_y_32);
  Epopd(0,1);
  OneNextSon();
  Rpush(b_11);
  goto z_31;
  b_11 :
  AllBuild();
  goto m_10;
  k_10 :
  Cpop();
  m_10 :
  Return();
  j_10 :
ENDPROC

PROC(_stratego_f_30)
  Epushd(0,8);
  MoveTop(0,1);
  goto n_32;
  n_32 :
  TestFunFC(f_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  MoveArg(0,8,0,1,2);
  goto o_32;
  o_32 :
  TestFunFC(z_9,&&g_11,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  goto p_32;
  p_32 :
  TestFunFC(w_0,&&fail,Egetd(0,4));
  Rpush(e_11);
  goto t_33;
  g_11 :
  TestFunFC(h_11,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  MoveArg(0,6,0,2,3);
  goto q_32;
  q_32 :
  TestFunFC(w_0,&&fail,Egetd(0,5));
  Rpush(e_11);
  goto u_33;
  e_11 :
  goto d_11;
  u_33 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App3("Instr",App3("SDef",Egetd(0,4),App0("Nil"),Egetd(0,6)),Egetd(0,7),Egetd(0,8)));
  Return();
  d_11 :
  goto c_11;
  t_33 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App1("Block",App2("Cons",App1("PROC",Egetd(0,3)),App2("Cons",App3("Instr",Egetd(0,5),Egetd(0,7),Egetd(0,8)),App2("Cons",App0("ENDPROC"),App0("Nil"))))));
  Return();
  c_11 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_g_30)
  Cpush(j_11);
  Epushd(0,6);
  TestFunTop(f_11);
  TravInit();
  OneNextSon();
  Cpush(l_11);
  Epushd(1,1);
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(o_11);
  TravInit();
  OneNextSon();
  Rpush(p_11);
  x_47 :
  Cpush(r_11);
  Epushd(2,5);
  MoveTop(2,1);
  goto x_33;
  x_33 :
  TestFunFC(u_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto y_33;
  y_33 :
  TestFunFC(u_11,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  Rpush(t_11);
  goto y_47;
  t_11 :
  goto s_11;
  y_47 :
  NotNULLd(2,2);
  NotNULLd(2,4);
  NotNULLd(2,5);
  Tset(App2("Seq",App2("Seq",Egetd(2,2),Egetd(2,4)),Egetd(2,5)));
  Rpush(w_11);
  goto x_47;
  w_11 :
  Return();
  s_11 :
  Epopd(2,5);
  goto q_11;
  r_11 :
  goto x_11;
  q_11 :
  Cpop();
  x_11 :
  Return();
  p_11 :
  TestFunTop(u_11);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  Cpush(y_11);
  Tdupl();
  Rpush(e_12);
  z_11 :
  Cpush(a_12);
  Epushd(3,2);
  MoveTop(3,1);
  goto a_34;
  a_34 :
  TestFunFC(h_12,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(g_12);
  goto a_48;
  g_12 :
  goto f_12;
  a_48 :
  Move(1,1,3,2);
  Return();
  f_12 :
  Epopd(3,2);
  Cpop();
  goto d_12;
  a_12 :
  IsAppl();
  MatchTravInit();
  b_12 :
  OneMatchNextSon();
  Cpush(b_12);
  Rpush(c_12);
  goto z_11;
  c_12 :
  Cpop();
  MatchTravEnd();
  d_12 :
  Return();
  e_12 :
  Cpop();
  Crestore();
  Cjump();
  y_11 :
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(j_12);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto p_37;
  p_37 :
  TestFunFC(h_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(l_12);
  goto c_48;
  l_12 :
  goto k_12;
  c_48 :
  Move(1,1,2,2);
  Return();
  k_12 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_b_29);
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,1);
  Cpush(m_12);
  Tdupl();
  Rpush(s_12);
  n_12 :
  Cpush(o_12);
  Epushd(3,2);
  MoveTop(3,1);
  goto r_37;
  r_37 :
  TestFunFC(h_12,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(u_12);
  goto e_48;
  u_12 :
  goto t_12;
  e_48 :
  Move(1,1,3,2);
  Return();
  t_12 :
  Epopd(3,2);
  Cpop();
  goto r_12;
  o_12 :
  IsAppl();
  MatchTravInit();
  p_12 :
  OneMatchNextSon();
  Cpush(p_12);
  Rpush(q_12);
  goto n_12;
  q_12 :
  Cpop();
  MatchTravEnd();
  r_12 :
  Return();
  s_12 :
  Cpop();
  Crestore();
  Cjump();
  m_12 :
  MoveTop(2,1);
  Move(0,2,2,1);
  Epopd(2,1);
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto k_11;
  l_11 :
  Epushd(1,3);
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(o_11);
  TravInit();
  OneNextSon();
  Epushd(2,9);
  Rpush(x_12);
  h_48 :
  Cpush(z_12);
  Epushd(3,5);
  MoveTop(3,1);
  goto u_39;
  u_39 :
  TestFunFC(u_11,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto v_39;
  v_39 :
  TestFunFC(u_11,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(b_13);
  goto i_48;
  b_13 :
  goto a_13;
  i_48 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  NotNULLd(3,5);
  Tset(App2("Seq",App2("Seq",Egetd(3,2),Egetd(3,4)),Egetd(3,5)));
  Rpush(c_13);
  goto h_48;
  c_13 :
  Return();
  a_13 :
  Epopd(3,5);
  goto y_12;
  z_12 :
  goto d_13;
  y_12 :
  Cpop();
  d_13 :
  Return();
  x_12 :
  MoveTop(2,1);
  goto s_43;
  s_43 :
  TestFunFC(u_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto t_43;
  t_43 :
  TestFunFC(u_11,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,8,2,3,1);
  goto s_44;
  s_44 :
  TestFunFC(j_12,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto z_44;
  z_44 :
  TestFunFC(h_12,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  goto e_45;
  e_45 :
  TestFunFC(w_0,&&fail,Egetd(2,7));
  goto f_45;
  f_45 :
  TestFunFC(f_13,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  Rpush(e_13);
  goto j_48;
  e_13 :
  goto w_12;
  j_48 :
  Move(1,2,2,2);
  Move(1,1,2,6);
  Move(1,3,2,9);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  Tset(App2("Seq",App2("Seq",Egetd(1,2),App1("CountRule",Egetd(1,3))),App2("Call",App1("SVar",Egetd(1,1)),App0("Nil"))));
  TestFunTop(u_11);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  Cpush(g_13);
  Tdupl();
  Rpush(m_13);
  h_13 :
  Cpush(i_13);
  Epushd(4,2);
  MoveTop(4,1);
  goto q_43;
  q_43 :
  TestFunFC(h_12,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(p_13);
  goto l_48;
  p_13 :
  goto o_13;
  l_48 :
  Move(1,1,4,2);
  Return();
  o_13 :
  Epopd(4,2);
  Cpop();
  goto l_13;
  i_13 :
  IsAppl();
  MatchTravInit();
  j_13 :
  OneMatchNextSon();
  Cpush(j_13);
  Rpush(k_13);
  goto h_13;
  k_13 :
  Cpop();
  MatchTravEnd();
  l_13 :
  Return();
  m_13 :
  Cpop();
  Crestore();
  Cjump();
  g_13 :
  MoveTop(3,1);
  Move(0,1,3,1);
  Epopd(3,1);
  OneNextSon();
  AllBuild();
  Return();
  w_12 :
  Epopd(2,9);
  OneNextSon();
  Epushd(2,1);
  Cpush(q_13);
  Tdupl();
  Rpush(y_13);
  r_13 :
  Cpush(t_13);
  Epushd(3,2);
  MoveTop(3,1);
  goto h_45;
  h_45 :
  TestFunFC(h_12,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(a_14);
  goto o_48;
  a_14 :
  goto z_13;
  o_48 :
  Move(1,1,3,2);
  Return();
  z_13 :
  Epopd(3,2);
  Cpop();
  goto w_13;
  t_13 :
  IsAppl();
  MatchTravInit();
  u_13 :
  OneMatchNextSon();
  Cpush(u_13);
  Rpush(v_13);
  goto r_13;
  v_13 :
  Cpop();
  MatchTravEnd();
  w_13 :
  Return();
  y_13 :
  Cpop();
  Crestore();
  Cjump();
  q_13 :
  MoveTop(2,1);
  Move(0,2,2,1);
  Epopd(2,1);
  AllBuild();
  AllBuild();
  Epopd(1,3);
  goto v_12;
  k_11 :
  Cpop();
  v_12 :
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
  Ccall(_stratego_h_30);
  MoveTop(1,1);
  Move(0,5,1,1);
  Ccall(_stratego_h_30);
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
  goto i_11;
  j_11 :
  Ccontinue(b_14);
  Ccall(_stratego_i_30);
  goto i_11;
  b_14 :
  Ccall(_stratego_k_30);
  goto d_14;
  i_11 :
  Cpop();
  d_14 :
ENDPROC

PROC(_stratego_h_30)
  _ST_new();
ENDPROC

PROC(_stratego_i_30)
  Epushd(0,9);
  TestFunTop(f_11);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(o_11);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_j_30);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(e_14);
  TravInit();
  OneNextSon();
  TestFunTop(j_12);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto x_48;
  x_48 :
  TestFunFC(h_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(i_14);
  goto q_50;
  i_14 :
  goto g_14;
  q_50 :
  Move(1,1,2,2);
  Return();
  g_14 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_b_29);
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
  Ccall(_stratego_h_30);
  MoveTop(1,1);
  Move(0,4,1,1);
  Ccall(_stratego_h_30);
  MoveTop(1,2);
  Move(0,5,1,2);
  Ccall(_stratego_h_30);
  MoveTop(1,3);
  Move(0,6,1,3);
  Ccall(_stratego_h_30);
  MoveTop(1,4);
  Move(0,7,1,4);
  Ccall(_stratego_h_30);
  MoveTop(1,5);
  Move(0,8,1,5);
  Ccall(_stratego_h_30);
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

PROC(_stratego_j_30)
  Cpush(l_14);
  Tdupl();
  Rpush(b_15);
  o_14 :
  Cpush(r_14);
  Epushd(0,2);
  MoveTop(0,1);
  goto a_51;
  a_51 :
  TestFunFC(e_15,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_15);
  goto e_51;
  d_15 :
  goto c_15;
  e_51 :
  Return();
  c_15 :
  Epopd(0,2);
  Cpop();
  goto y_14;
  r_14 :
  IsAppl();
  MatchTravInit();
  u_14 :
  OneMatchNextSon();
  Cpush(u_14);
  Rpush(x_14);
  goto o_14;
  x_14 :
  Cpop();
  MatchTravEnd();
  y_14 :
  Return();
  b_15 :
  Cpop();
  Crestore();
  Cjump();
  l_14 :
ENDPROC

PROC(_stratego_k_30)
  Epushd(0,7);
  TestFunTop(f_11);
  TravInit();
  OneNextSon();
  Cpush(g_15);
  Epushd(1,1);
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(o_11);
  TravInit();
  OneNextSon();
  TestFunTop(h_15);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto h_51;
  h_51 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(l_15);
  goto n_53;
  l_15 :
  goto i_15;
  n_53 :
  Return();
  i_15 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_j_30);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_30);
  OneNextSon();
  Ccall(_stratego_b_29);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  TestFunTop(h_15);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto k_51;
  k_51 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(p_15);
  goto p_53;
  p_15 :
  goto m_15;
  p_53 :
  Return();
  m_15 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_30);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(j_12);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto m_51;
  m_51 :
  TestFunFC(h_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(t_15);
  goto q_53;
  t_15 :
  goto q_15;
  q_53 :
  Move(1,1,2,2);
  Return();
  q_15 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_b_29);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_b_29);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto f_15;
  g_15 :
  Epushd(1,1);
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(o_11);
  TravInit();
  OneNextSon();
  TestFunTop(u_11);
  TravInit();
  OneNextSon();
  TestFunTop(h_15);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto p_51;
  p_51 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(y_15);
  goto s_53;
  y_15 :
  goto x_15;
  s_53 :
  Return();
  x_15 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_j_30);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_30);
  OneNextSon();
  Ccall(_stratego_b_29);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto s_51;
  s_51 :
  TestFunFC(b_16,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto t_51;
  t_51 :
  TestStr(2,2,"Cons",&&fail);
  Rpush(a_16);
  goto u_53;
  a_16 :
  goto z_15;
  u_53 :
  Return();
  z_15 :
  Epopd(2,2);
  AllBuild();
  OneNextSon();
  TestFunTop(u_11);
  TravInit();
  OneNextSon();
  TestFunTop(h_15);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto v_51;
  v_51 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(d_16);
  goto v_53;
  d_16 :
  goto c_16;
  v_53 :
  Return();
  c_16 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_30);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(j_12);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto x_51;
  x_51 :
  TestFunFC(h_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(f_16);
  goto w_53;
  f_16 :
  goto e_16;
  w_53 :
  Move(1,1,2,2);
  Return();
  e_16 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_b_29);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_b_29);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto z_51;
  z_51 :
  TestFunFC(b_16,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto a_52;
  a_52 :
  TestStr(2,2,"Cons",&&fail);
  Rpush(h_16);
  goto x_53;
  h_16 :
  goto g_16;
  x_53 :
  Return();
  g_16 :
  Epopd(2,2);
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto u_15;
  f_15 :
  Cpop();
  u_15 :
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
  Epushd(1,4);
  Ccall(_stratego_h_30);
  MoveTop(1,1);
  Move(0,4,1,1);
  Ccall(_stratego_h_30);
  MoveTop(1,2);
  Move(0,5,1,2);
  Ccall(_stratego_h_30);
  MoveTop(1,3);
  Move(0,6,1,3);
  Tset(App2("AFun",ATmakeString("Cons"),MakeInt(2)));
  Ccall(_stratego_b_31);
  MoveTop(1,4);
  Move(0,7,1,4);
  Epopd(1,4);
  Tpop();
  NotNULLd(0,7);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App1("Label",Egetd(0,4)),App2("Cons",App1("TestFunTop",App1("VAR",Egetd(0,7))),App2("Cons",App1("Cpush",Egetd(0,5)),App2("Cons",App1("Arg",MakeInt(0)),App2("Cons",App3("Instr",Egetd(0,1),Egetd(0,2),Egetd(0,3)),App2("Cons",App0("Tpop"),App2("Cons",App0("Cpop"),App2("Cons",App1("Goto",Egetd(0,6)),App2("Cons",App1("Label",Egetd(0,5)),App2("Cons",App1("Arg",MakeInt(1)),App2("Cons",App0("Tdrop"),App2("Cons",App1("Goto",Egetd(0,4)),App2("Cons",App1("Label",Egetd(0,6)),App2("Cons",App0("Tpop"),App0("Nil"))))))))))))))))));
  Epopd(0,7);
ENDPROC

PROC(_stratego_u_30)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_54;
  f_54 :
  TestFunFC(k_16,&&fail,Egetd(0,1));
  Rpush(j_16);
  goto h_54;
  j_16 :
  goto i_16;
  h_54 :
  Return();
  i_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_31)
  Epushd(0,3);
  MoveTop(0,1);
  goto l_54;
  l_54 :
  TestFunFC(n_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_16);
  goto u_54;
  m_16 :
  goto l_16;
  u_54 :
  Epushd(1,1);
  Tdupl();
  Cpush(r_16);
  Epushd(2,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(0,2),Egetd(0,3)),App0("TNil"))));
  Ccall(_stratego_c_31);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  goto o_16;
  r_16 :
  Epushd(2,1);
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(0,2),Egetd(0,3)),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_w_29);
  Epopd(2,1);
  goto u_16;
  o_16 :
  Cpop();
  u_16 :
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  l_16 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_c_31)
  _ST_table_get();
ENDPROC

PROC(_stratego_d_31)
  Cpush(a_17);
  Epushd(0,15);
  MoveTop(0,10);
  goto k_65;
  k_65 :
  TestFunFC(w_19,&&u_19,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  MoveArg(0,3,0,10,3);
  goto l_65;
  l_65 :
  TestFunFC(a_20,&&y_19,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(c_20);
  Rpush(d_20);
  goto l_89;
  d_20 :
  goto b_20;
  c_20 :
  Rpush(h_20);
  goto o_89;
  h_20 :
  goto g_20;
  b_20 :
  Cpop();
  g_20 :
  goto t_19;
  y_19 :
  TestFunFC(o_11,&&x_19,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(j_20);
  Rpush(k_20);
  goto n_89;
  k_20 :
  goto i_20;
  j_20 :
  Rpush(m_20);
  goto o_89;
  m_20 :
  goto l_20;
  i_20 :
  Cpop();
  l_20 :
  goto t_19;
  x_19 :
  Rpush(t_19);
  goto o_89;
  u_19 :
  TestFunFC(q_20,&&p_20,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  MoveArg(0,3,0,10,3);
  MoveArg(0,4,0,10,4);
  MoveArg(0,5,0,10,5);
  goto m_65;
  m_65 :
  TestFunFC(w_0,&&r_20,Egetd(0,11));
  Rpush(t_19);
  goto t_90;
  r_20 :
  TestFunFC(a_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto n_65;
  n_65 :
  TestFunFC(s_20,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  MoveArg(0,9,0,12,1);
  MoveArg(0,2,0,12,2);
  goto o_65;
  o_65 :
  TestFunFC(w_0,&&t_20,Egetd(0,13));
  Cpush(v_20);
  Rpush(w_20);
  goto w_90;
  w_20 :
  goto u_20;
  v_20 :
  Rpush(y_20);
  goto p_91;
  y_20 :
  goto x_20;
  u_20 :
  Cpop();
  x_20 :
  goto t_19;
  t_20 :
  Rpush(t_19);
  goto p_91;
  p_20 :
  TestFunFC(f_11,&&z_20,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  goto p_65;
  p_65 :
  TestFunFC(k_16,&&a_21,Egetd(0,11));
  Rpush(t_19);
  goto b_89;
  a_21 :
  TestFunFC(c_21,&&b_21,Egetd(0,11));
  Rpush(t_19);
  goto c_89;
  b_21 :
  TestFunFC(e_21,&&d_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto d_89;
  d_21 :
  TestFunFC(k_21,&&j_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto e_89;
  j_21 :
  TestFunFC(u_11,&&o_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto g_89;
  o_21 :
  TestFunFC(o_11,&&q_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto h_89;
  q_21 :
  TestFunFC(a_20,&&r_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto i_89;
  r_21 :
  TestFunFC(t_21,&&s_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto q_65;
  q_65 :
  TestFunFC(u_21,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  Rpush(t_19);
  goto s_89;
  s_21 :
  TestFunFC(w_21,&&v_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto r_65;
  r_65 :
  TestFunFC(u_21,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  goto s_65;
  s_65 :
  TestFunFC(u_21,&&x_21,Egetd(0,13));
  MoveArg(0,1,0,13,0);
  Cpush(z_21);
  Rpush(a_22);
  goto z_89;
  a_22 :
  goto y_21;
  z_21 :
  Rpush(c_22);
  goto m_90;
  c_22 :
  goto b_22;
  y_21 :
  Cpop();
  b_22 :
  goto t_19;
  x_21 :
  Rpush(t_19);
  goto m_90;
  v_21 :
  TestFunFC(e_22,&&d_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  MoveArg(0,7,0,11,3);
  Rpush(t_19);
  goto r_90;
  d_22 :
  TestFunFC(m_11,&&f_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto j_92;
  f_22 :
  TestFunFC(j_12,&&g_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto t_65;
  t_65 :
  TestFunFC(h_12,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  goto v_65;
  v_65 :
  TestFunFC(w_0,&&fail,Egetd(0,13));
  Cpush(i_22);
  Rpush(o_22);
  goto l_92;
  o_22 :
  goto h_22;
  i_22 :
  Rpush(q_22);
  goto n_92;
  q_22 :
  goto p_22;
  h_22 :
  Cpop();
  p_22 :
  goto t_19;
  g_22 :
  TestFunFC(s_22,&&r_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto p_92;
  r_22 :
  TestFunFC(z_9,&&u_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  goto w_65;
  w_65 :
  TestFunFC(w_0,&&fail,Egetd(0,13));
  Rpush(t_19);
  goto r_92;
  u_22 :
  TestFunFC(h_11,&&v_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  MoveArg(0,7,0,11,3);
  goto x_65;
  x_65 :
  TestFunFC(w_0,&&fail,Egetd(0,6));
  Rpush(t_19);
  goto s_92;
  v_22 :
  TestFunFC(x_22,&&w_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto t_92;
  w_22 :
  TestFunFC(h_15,&&y_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto u_92;
  y_22 :
  TestFunFC(b_23,&&z_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto x_92;
  z_22 :
  TestFunFC(g_23,&&e_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto y_65;
  y_65 :
  TestFunFC(w_0,&&h_23,Egetd(0,12));
  Rpush(t_19);
  goto y_92;
  h_23 :
  TestFunFC(a_0,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  MoveArg(0,9,0,12,1);
  Rpush(t_19);
  goto z_92;
  e_23 :
  TestFunFC(j_23,&&i_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto a_93;
  i_23 :
  TestFunFC(e_14,&&k_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto d_93;
  k_23 :
  TestFunFC(m_23,&&l_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto g_93;
  l_23 :
  TestFunFC(o_23,&&n_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto j_93;
  n_23 :
  TestFunFC(q_23,&&p_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto m_93;
  p_23 :
  TestFunFC(s_23,&&r_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto p_93;
  r_23 :
  TestFunFC(u_23,&&t_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto q_93;
  t_23 :
  TestFunFC(w_23,&&v_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto r_93;
  v_23 :
  TestFunFC(b_16,&&x_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto s_93;
  x_23 :
  TestFunFC(e_15,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto t_93;
  z_20 :
  TestFunFC(y_23,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  goto z_65;
  z_65 :
  TestFunFC(b_24,&&z_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto g_94;
  z_23 :
  TestFunFC(h_24,&&g_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto j_94;
  g_24 :
  TestFunFC(j_24,&&i_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto k_94;
  i_24 :
  TestFunFC(u_21,&&k_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto l_94;
  k_24 :
  TestFunFC(p_24,&&l_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto t_94;
  l_24 :
  TestFunFC(r_24,&&q_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(x_24);
  Rpush(y_24);
  goto u_94;
  y_24 :
  goto s_24;
  x_24 :
  Rpush(a_25);
  goto c_95;
  a_25 :
  goto z_24;
  s_24 :
  Cpop();
  z_24 :
  goto t_19;
  q_24 :
  TestFunFC(b_25,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto i_95;
  t_19 :
  goto s_19;
  i_95 :
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compiler.r: App encountered"),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_h_29);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,13);
  Tset(App1("AppEncountered",App2("App",Egetd(0,12),Egetd(0,13))));
  Return();
  s_19 :
  goto r_19;
  c_95 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_r_32);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(6),App0("TNil"))));
  Ccall(_stratego_s_32);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Rpush(c_25);
  e_95 :
  Cpush(e_25);
  Ccall(_stratego_b_29);
  goto d_25;
  e_25 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("BuildTerm",Egetd(3,1),Egetd(0,14),Egetd(0,15)));
  Epopd(3,1);
  OneNextSon();
  Rpush(g_25);
  goto e_95;
  g_25 :
  AllBuild();
  goto f_25;
  d_25 :
  Cpop();
  f_25 :
  Return();
  c_25 :
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",ATmakeString("ATmakeList"),App2("TCons",App2("Cons",Egetd(1,1),Egetd(1,2)),App0("TNil"))));
  _ST_mkterm();
  MoveTop(1,3);
  NotNULLd(0,12);
  NotNULLd(1,3);
  Tset(App2("AppN",Egetd(0,12),Egetd(1,3)));
  Epopd(1,3);
  Return();
  r_19 :
  goto q_19;
  u_94 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_r_32);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(6),App0("TNil"))));
  Ccall(_stratego_q_31);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_r_31);
  MoveTop(2,2);
  NotNULLd(2,2);
  Tset(App2("TCons",ATmakeString("App"),App2("TCons",Egetd(2,2),App0("TNil"))));
  Ccall(_stratego_x_29);
  MoveTop(2,3);
  Move(1,2,2,3);
  Epopd(2,3);
  Tpop();
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Rpush(h_25);
  y_94 :
  Cpush(j_25);
  Ccall(_stratego_b_29);
  goto i_25;
  j_25 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("BuildTerm",Egetd(2,1),Egetd(0,14),Egetd(0,15)));
  Epopd(2,1);
  OneNextSon();
  Rpush(l_25);
  goto y_94;
  l_25 :
  AllBuild();
  goto k_25;
  i_25 :
  Cpop();
  k_25 :
  Return();
  h_25 :
  MoveTop(1,3);
  NotNULLd(1,2);
  NotNULLd(0,12);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",App2("Cons",Egetd(0,12),Egetd(1,3)),App0("TNil"))));
  _ST_mkterm();
  MoveTop(1,4);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Epopd(1,4);
  Return();
  q_19 :
  goto p_19;
  t_94 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("BuildTerm",Egetd(0,12),Egetd(0,14),Egetd(0,15)));
  Return();
  p_19 :
  goto o_19;
  l_94 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,12);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,12),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto s_64;
  s_64 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto t_64;
  t_64 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto u_64;
  u_64 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(n_25);
  goto m_94;
  n_25 :
  goto m_25;
  m_94 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(o_25);
  n_94 :
  Cpush(q_25);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto k_64;
  k_64 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto l_64;
  l_64 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto m_64;
  m_64 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(s_25);
  goto o_94;
  s_25 :
  goto r_25;
  o_94 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_o_31);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto h_64;
  h_64 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto i_64;
  i_64 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto j_64;
  j_64 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(w_25);
  goto q_94;
  w_25 :
  goto v_25;
  q_94 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  v_25 :
  Epopd(5,6);
  Return();
  r_25 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto p_25;
  q_25 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_25);
  goto n_94;
  y_25 :
  AllBuild();
  goto x_25;
  p_25 :
  Cpop();
  x_25 :
  Return();
  o_25 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto p_64;
  p_64 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto q_64;
  q_64 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto r_64;
  r_64 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(a_26);
  goto r_94;
  a_26 :
  goto z_25;
  r_94 :
  Move(1,1,3,4);
  Move(1,2,3,6);
  Cpush(c_26);
  NotNULLd(1,1);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,15),App0("TNil"))));
  Ccall(_stratego_p_31);
  NotNULLd(1,2);
  Tset(App1("Eget",Egetd(1,2)));
  goto b_26;
  c_26 :
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Egetd",Egetd(1,1),Egetd(1,2)));
  Tdupl();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Egetd",Egetd(1,1),Egetd(1,2)));
  MoveTop(1,3);
  Tpop();
  goto d_26;
  b_26 :
  Cpop();
  d_26 :
  Return();
  z_25 :
  Epopd(3,7);
  Return();
  m_25 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Epopd(1,3);
  Return();
  o_19 :
  goto n_19;
  k_94 :
  NotNULLd(0,12);
  Tset(App1("ATmakeReal",Egetd(0,12)));
  Return();
  n_19 :
  goto m_19;
  j_94 :
  NotNULLd(0,12);
  Tset(App1("MakeInt",Egetd(0,12)));
  Return();
  m_19 :
  goto l_19;
  g_94 :
  Epushd(1,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_m_31);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("ATmakeString",Egetd(1,1)));
  Epopd(1,1);
  Return();
  l_19 :
  goto k_19;
  t_93 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_i_31);
  Rpush(e_26);
  u_93 :
  Cpush(j_26);
  Ccall(_stratego_b_29);
  goto f_26;
  j_26 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  Tdupl();
  Epushd(4,5);
  NotNULLd(0,14);
  Tset(Egetd(0,14));
  NotNULLd(3,1);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(4,1);
  goto w_63;
  w_63 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto x_63;
  x_63 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto y_63;
  y_63 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(p_26);
  goto x_93;
  p_26 :
  goto o_26;
  x_93 :
  Epushd(5,7);
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(s_26);
  y_93 :
  Cpush(x_26);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,5);
  MoveTop(6,1);
  goto n_63;
  n_63 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto o_63;
  o_63 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto p_63;
  p_63 :
  TestFunFC(s_0,&&fail,Egetd(6,5));
  Rpush(z_26);
  goto z_93;
  z_26 :
  goto y_26;
  z_93 :
  Epushd(7,6);
  NotNULLd(4,2);
  NotNULLd(6,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(6,4),App0("TNil"))));
  Ccall(_stratego_o_31);
  MoveTop(7,1);
  NotNULLd(6,2);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(7,1),App0("TNil"))));
  MoveTop(7,2);
  goto k_63;
  k_63 :
  TestFunFC(p_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto l_63;
  l_63 :
  TestFunFC(p_0,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto m_63;
  m_63 :
  TestFunFC(s_0,&&fail,Egetd(7,6));
  Rpush(b_27);
  goto b_94;
  b_27 :
  goto a_27;
  b_94 :
  Move(5,1,7,3);
  Move(5,2,7,5);
  Return();
  a_27 :
  Epopd(7,6);
  Return();
  y_26 :
  Epopd(6,5);
  OneNextSon();
  AllBuild();
  goto w_26;
  x_26 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_27);
  goto y_93;
  d_27 :
  AllBuild();
  goto c_27;
  w_26 :
  Cpop();
  c_27 :
  Return();
  s_26 :
  Tpop();
  NotNULLd(5,1);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,3);
  goto t_63;
  t_63 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto u_63;
  u_63 :
  TestFunFC(p_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto v_63;
  v_63 :
  TestFunFC(s_0,&&fail,Egetd(5,7));
  Rpush(k_27);
  goto c_94;
  k_27 :
  goto j_27;
  c_94 :
  Move(3,2,5,4);
  Move(3,3,5,6);
  Cpush(m_27);
  NotNULLd(3,2);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(0,15),App0("TNil"))));
  Ccall(_stratego_p_31);
  NotNULLd(3,3);
  Tset(App1("NotNULL",Egetd(3,3)));
  goto l_27;
  m_27 :
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("NotNULLd",Egetd(3,2),Egetd(3,3)));
  Tdupl();
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("NotNULLd",Egetd(3,2),Egetd(3,3)));
  MoveTop(3,4);
  Tpop();
  goto n_27;
  l_27 :
  Cpop();
  n_27 :
  Return();
  j_27 :
  Epopd(5,7);
  Return();
  o_26 :
  Epopd(4,5);
  Tpop();
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Epopd(3,4);
  OneNextSon();
  Rpush(q_27);
  goto u_93;
  q_27 :
  AllBuild();
  goto n_26;
  f_26 :
  Cpop();
  n_26 :
  Return();
  e_26 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App1("Block",Egetd(1,1)),App2("Cons",App1("Tset",App3("BuildTerm",Egetd(0,12),Egetd(0,14),Egetd(0,15))),App0("Nil")))));
  Epopd(1,1);
  Return();
  k_19 :
  goto j_19;
  s_93 :
  NotNULLd(0,12);
  Tset(App1("ICountRule",Egetd(0,12)));
  Return();
  j_19 :
  goto i_19;
  r_93 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  Tset(App2("Iprim2",Egetd(0,12),Egetd(0,13)));
  Return();
  i_19 :
  goto f_19;
  q_93 :
  NotNULLd(0,12);
  Tset(App1("Iprim",Egetd(0,12)));
  Return();
  f_19 :
  goto d_19;
  p_93 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Tpop"),App0("Nil"))))));
  Return();
  d_19 :
  goto c_19;
  m_93 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_r_32);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(0,15),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_h_31);
  MoveTop(1,2);
  NotNULLd(0,13);
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(1,2);
  NotNULLd(0,15);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App2("Epushd",Egetd(0,15),Egetd(1,1)),App2("Cons",App3("Instr",Egetd(0,13),App2("Cons",App2("TCons",Egetd(0,15),App2("TCons",Egetd(0,12),App0("TNil"))),Egetd(0,14)),Egetd(1,2)),App2("Cons",App2("Epopd",Egetd(0,15),Egetd(1,1)),App0("Nil"))))));
  Epopd(1,2);
  Return();
  c_19 :
  goto a_19;
  j_93 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_h_30);
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App1("Block",App2("Cons",App0("ThreadInit"),App2("Cons",App1("Label",Egetd(1,1)),App2("Cons",App1("ThreadNextSon",Egetd(1,2)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("ThreadSetEnv"),App2("Cons",App1("Goto",Egetd(1,1)),App2("Cons",App1("Label",Egetd(1,2)),App2("Cons",App0("ThreadBuild"),App0("Nil")))))))))));
  Epopd(1,2);
  Return();
  a_19 :
  goto z_18;
  g_93 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_h_30);
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App1("Block",App2("Cons",App0("IsAppl"),App2("Cons",App0("SomeInit"),App2("Cons",App1("Label",Egetd(1,1)),App2("Cons",App1("SomeNextSon",Egetd(1,2)),App2("Cons",App1("Cpush",Egetd(1,1)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Cpop"),App2("Cons",App0("CounterOK"),App2("Cons",App1("Goto",Egetd(1,1)),App2("Cons",App1("Label",Egetd(1,2)),App2("Cons",App0("SomeBuild"),App0("Nil"))))))))))))));
  Epopd(1,2);
  Return();
  z_18 :
  goto y_18;
  d_93 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_h_30);
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("IsAppl"),App2("Cons",App0("OneInit"),App2("Cons",App1("Label",Egetd(1,1)),App2("Cons",App0("OneNextSon"),App2("Cons",App1("Cpush",Egetd(1,1)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Cpop"),App2("Cons",App0("OneBuild"),App0("Nil")))))))))));
  Epopd(1,2);
  Return();
  y_18 :
  goto x_18;
  a_93 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_h_30);
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App1("Block",App2("Cons",App0("AllInit"),App2("Cons",App1("Label",Egetd(1,1)),App2("Cons",App1("AllNextSon",Egetd(1,2)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App1("Goto",Egetd(1,1)),App2("Cons",App1("Label",Egetd(1,2)),App2("Cons",App0("AllBuild"),App0("Nil"))))))))));
  Epopd(1,2);
  Return();
  x_18 :
  goto v_18;
  z_92 :
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("OneNextSon"),App2("Cons",App3("Instr",Egetd(0,8),Egetd(0,14),Egetd(0,15)),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,9)),Egetd(0,14),Egetd(0,15)),App0("Nil"))))));
  Return();
  v_18 :
  goto u_18;
  y_92 :
  Tset(App1("Block",App0("Nil")));
  Return();
  u_18 :
  goto t_18;
  x_92 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("TravInit"),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,12)),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("AllBuild"),App0("Nil"))))));
  Return();
  t_18 :
  goto s_18;
  u_92 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_r_32);
  MoveTop(2,1);
  NotNULLd(0,12);
  NotNULLd(2,1);
  Tset(App2("AFun",Egetd(0,12),Egetd(2,1)));
  Ccall(_stratego_b_31);
  MoveTop(2,2);
  Move(1,1,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App1("TestFunTop",App1("VAR",Egetd(1,1))),App2("Cons",App0("TravInit"),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,13)),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("AllBuild"),App0("Nil")))))));
  Epopd(1,1);
  Return();
  s_18 :
  goto r_18;
  t_92 :
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(0,12);
  Tset(App1("Block",App2("Cons",App1("TpushIthSon",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,13),Egetd(0,14),Egetd(0,15)),App2("Cons",App1("TputIthSon",Egetd(0,12)),App0("Nil"))))));
  Return();
  r_18 :
  goto p_18;
  s_92 :
  NotNULLd(0,13);
  NotNULLd(0,7);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App3("SDef",Egetd(0,13),App0("Nil"),Egetd(0,7)),Egetd(0,14),Egetd(0,15)));
  Return();
  p_18 :
  goto o_18;
  r_92 :
  NotNULLd(0,12);
  NotNULLd(0,6);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App1("Label",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,6),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Return"),App0("Nil"))))));
  Return();
  o_18 :
  goto n_18;
  p_92 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,13);
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,13),Egetd(0,14),Egetd(0,15)),App2("Cons",App1("Goto",Egetd(1,1)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil")))))));
  Epopd(1,1);
  Return();
  n_18 :
  goto m_18;
  n_92 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Cpush(r_27);
  Tdupl();
  Ccall(_stratego_g_31);
  Cpop();
  Crestore();
  Cjump();
  r_27 :
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,8);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(1,1)),App2("Cons",App1("Goto",Egetd(0,8)),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil"))))));
  Epopd(1,1);
  Return();
  m_18 :
  goto l_18;
  l_92 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Ccall(_stratego_g_31);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(App2("Ccall",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  l_18 :
  goto k_18;
  j_92 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(1,1)),App2("Cons",App1("Label",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,13),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Return"),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil"))))))));
  Epopd(1,1);
  Return();
  k_18 :
  goto j_18;
  p_91 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  MoveTop(2,1);
  goto m_62;
  m_62 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(t_27);
  goto q_91;
  t_27 :
  goto s_27;
  q_91 :
  Epushd(3,2);
  Ccall(_stratego_h_30);
  MoveTop(3,1);
  Move(1,1,3,1);
  NotNULLd(0,9);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,9),App0("TNil"))));
  Rpush(u_27);
  t_91 :
  Epushd(4,7);
  MoveTop(4,1);
  goto g_62;
  g_62 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto h_62;
  h_62 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,7,4,3,1);
  goto i_62;
  i_62 :
  TestFunFC(w_0,&&b_28,Egetd(4,4));
  goto j_62;
  j_62 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(a_28);
  goto u_91;
  b_28 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto k_62;
  k_62 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(a_28);
  goto v_91;
  a_28 :
  goto w_27;
  v_91 :
  Epushd(5,6);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_f_31);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(4,5);
  NotNULLd(5,1);
  NotNULLd(4,6);
  Tset(App2("TCons",App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Epushd(6,6);
  MoveTop(6,1);
  goto y_61;
  y_61 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto z_61;
  z_61 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,6,6,3,1);
  goto a_62;
  a_62 :
  TestFunFC(u_21,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  goto b_62;
  b_62 :
  TestFunFC(s_0,&&fail,Egetd(6,6));
  Rpush(g_28);
  goto x_91;
  g_28 :
  goto d_28;
  x_91 :
  Epushd(7,4);
  Tdupl();
  Epushd(8,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  NotNULLd(6,5);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(6,5),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(8,1);
  goto v_61;
  v_61 :
  TestFunFC(p_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto w_61;
  w_61 :
  TestFunFC(p_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto x_61;
  x_61 :
  TestFunFC(s_0,&&fail,Egetd(8,5));
  Rpush(k_28);
  goto z_91;
  k_28 :
  goto h_28;
  z_91 :
  Epushd(9,7);
  Tdupl();
  NotNULLd(8,4);
  Tset(Egetd(8,4));
  Rpush(l_28);
  a_92 :
  Cpush(p_28);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(10,5);
  MoveTop(10,1);
  goto j_61;
  j_61 :
  TestFunFC(p_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  goto k_61;
  k_61 :
  TestFunFC(p_0,&&fail,Egetd(10,3));
  MoveArg(10,4,10,3,0);
  MoveArg(10,5,10,3,1);
  goto l_61;
  l_61 :
  TestFunFC(s_0,&&fail,Egetd(10,5));
  Rpush(r_28);
  goto b_92;
  r_28 :
  goto q_28;
  b_92 :
  Epushd(11,6);
  NotNULLd(8,2);
  NotNULLd(10,4);
  Tset(App2("TCons",Egetd(8,2),App2("TCons",Egetd(10,4),App0("TNil"))));
  Ccall(_stratego_o_31);
  MoveTop(11,1);
  NotNULLd(10,2);
  NotNULLd(11,1);
  Tset(App2("TCons",Egetd(10,2),App2("TCons",Egetd(11,1),App0("TNil"))));
  MoveTop(11,2);
  goto g_61;
  g_61 :
  TestFunFC(p_0,&&fail,Egetd(11,2));
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  goto h_61;
  h_61 :
  TestFunFC(p_0,&&fail,Egetd(11,4));
  MoveArg(11,5,11,4,0);
  MoveArg(11,6,11,4,1);
  goto i_61;
  i_61 :
  TestFunFC(s_0,&&fail,Egetd(11,6));
  Rpush(v_28);
  goto d_92;
  v_28 :
  goto s_28;
  d_92 :
  Move(9,1,11,3);
  Move(9,2,11,5);
  Return();
  s_28 :
  Epopd(11,6);
  Return();
  q_28 :
  Epopd(10,5);
  OneNextSon();
  AllBuild();
  goto o_28;
  p_28 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_28);
  goto a_92;
  x_28 :
  AllBuild();
  goto w_28;
  o_28 :
  Cpop();
  w_28 :
  Return();
  l_28 :
  Tpop();
  NotNULLd(9,1);
  NotNULLd(9,2);
  Tset(App2("TCons",Egetd(9,1),App2("TCons",Egetd(9,2),App0("TNil"))));
  MoveTop(9,3);
  goto s_61;
  s_61 :
  TestFunFC(p_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto t_61;
  t_61 :
  TestFunFC(p_0,&&fail,Egetd(9,5));
  MoveArg(9,6,9,5,0);
  MoveArg(9,7,9,5,1);
  goto u_61;
  u_61 :
  TestFunFC(s_0,&&fail,Egetd(9,7));
  Rpush(z_28);
  goto e_92;
  z_28 :
  goto y_28;
  e_92 :
  Epushd(10,5);
  Move(7,1,9,4);
  Move(7,2,9,6);
  NotNULLd(0,14);
  Tset(Egetd(0,14));
  MoveTop(10,1);
  goto o_61;
  o_61 :
  TestFunFC(p_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  goto q_61;
  q_61 :
  TestFunFC(p_0,&&fail,Egetd(10,3));
  MoveArg(10,4,10,3,0);
  MoveArg(10,5,10,3,1);
  goto r_61;
  r_61 :
  TestFunFC(s_0,&&fail,Egetd(10,5));
  Rpush(e_30);
  goto f_92;
  e_30 :
  goto a_29;
  f_92 :
  Move(7,3,10,2);
  Move(7,4,10,4);
  Return();
  a_29 :
  Epopd(10,5);
  Return();
  y_28 :
  Epopd(9,7);
  Return();
  h_28 :
  Epopd(8,5);
  Tpop();
  NotNULLd(7,1);
  NotNULLd(7,2);
  NotNULLd(7,3);
  NotNULLd(7,4);
  NotNULLd(6,2);
  Tset(App5("MoveArg",Egetd(7,1),Egetd(7,2),Egetd(7,3),Egetd(7,4),Egetd(6,2)));
  Epopd(7,4);
  Return();
  d_28 :
  Epopd(6,6);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(l_30);
  goto t_91;
  l_30 :
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  MoveTop(5,2);
  goto d_62;
  d_62 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto e_62;
  e_62 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto f_62;
  f_62 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(n_30);
  goto g_92;
  n_30 :
  goto c_28;
  g_92 :
  NotNULLd(5,3);
  NotNULLd(5,5);
  Tset(App2("Cons",Egetd(5,3),Egetd(5,5)));
  Return();
  c_28 :
  Epopd(5,6);
  Return();
  w_27 :
  goto v_27;
  u_91 :
  Tset(App0("Nil"));
  Return();
  v_27 :
  Epopd(4,7);
  Return();
  u_27 :
  MoveTop(3,2);
  Move(1,2,3,2);
  Epopd(3,2);
  Return();
  s_27 :
  Epopd(2,3);
  Tpop();
  NotNULLd(0,14);
  NotNULLd(0,8);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",Egetd(0,8),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_e_31);
  MoveTop(1,3);
  NotNULLd(1,3);
  NotNULLd(1,2);
  NotNULLd(0,2);
  NotNULLd(1,1);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App1("Block",App2("Cons",Egetd(1,3),App2("Cons",App1("Block",Egetd(1,2)),App2("Cons",App4("Branch",Egetd(0,2),Egetd(0,3),Egetd(0,4),Egetd(0,5)),App2("Cons",App1("Label",Egetd(1,1)),App2("Cons",App6("Alts",Egetd(0,13),Egetd(0,14),Egetd(0,15),Egetd(0,3),Egetd(0,4),Egetd(0,5)),App0("Nil"))))))));
  Epopd(1,3);
  Return();
  j_18 :
  goto i_18;
  w_90 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,9);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,9),App0("TNil"))));
  Rpush(p_30);
  y_90 :
  Epushd(3,7);
  MoveTop(3,1);
  goto n_60;
  n_60 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto o_60;
  o_60 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,7,3,3,1);
  goto p_60;
  p_60 :
  TestFunFC(w_0,&&w_31,Egetd(3,4));
  goto q_60;
  q_60 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(t_31);
  goto z_90;
  w_31 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto r_60;
  r_60 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(t_31);
  goto a_91;
  t_31 :
  goto a_31;
  a_91 :
  Epushd(4,6);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_f_31);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(3,5);
  NotNULLd(4,1);
  NotNULLd(3,6);
  Tset(App2("TCons",App2("TCons",Egetd(3,2),App2("TCons",Egetd(3,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,1),App2("TCons",Egetd(3,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Epushd(5,6);
  MoveTop(5,1);
  goto f_60;
  f_60 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto g_60;
  g_60 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,6,5,3,1);
  goto h_60;
  h_60 :
  TestFunFC(u_21,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  goto i_60;
  i_60 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(f_32);
  goto c_91;
  f_32 :
  goto a_32;
  c_91 :
  Epushd(6,4);
  Tdupl();
  Epushd(7,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  NotNULLd(5,5);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(5,5),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(7,1);
  goto c_60;
  c_60 :
  TestFunFC(p_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto d_60;
  d_60 :
  TestFunFC(p_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto e_60;
  e_60 :
  TestFunFC(s_0,&&fail,Egetd(7,5));
  Rpush(i_32);
  goto f_91;
  i_32 :
  goto h_32;
  f_91 :
  Epushd(8,7);
  Tdupl();
  NotNULLd(7,4);
  Tset(Egetd(7,4));
  Rpush(j_32);
  g_91 :
  Cpush(m_32);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(9,5);
  MoveTop(9,1);
  goto r_59;
  r_59 :
  TestFunFC(p_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  goto s_59;
  s_59 :
  TestFunFC(p_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto t_59;
  t_59 :
  TestFunFC(s_0,&&fail,Egetd(9,5));
  Rpush(l_33);
  goto h_91;
  l_33 :
  goto k_33;
  h_91 :
  Epushd(10,6);
  NotNULLd(7,2);
  NotNULLd(9,4);
  Tset(App2("TCons",Egetd(7,2),App2("TCons",Egetd(9,4),App0("TNil"))));
  Ccall(_stratego_o_31);
  MoveTop(10,1);
  NotNULLd(9,2);
  NotNULLd(10,1);
  Tset(App2("TCons",Egetd(9,2),App2("TCons",Egetd(10,1),App0("TNil"))));
  MoveTop(10,2);
  goto o_59;
  o_59 :
  TestFunFC(p_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto p_59;
  p_59 :
  TestFunFC(p_0,&&fail,Egetd(10,4));
  MoveArg(10,5,10,4,0);
  MoveArg(10,6,10,4,1);
  goto q_59;
  q_59 :
  TestFunFC(s_0,&&fail,Egetd(10,6));
  Rpush(n_33);
  goto j_91;
  n_33 :
  goto m_33;
  j_91 :
  Move(8,1,10,3);
  Move(8,2,10,5);
  Return();
  m_33 :
  Epopd(10,6);
  Return();
  k_33 :
  Epopd(9,5);
  OneNextSon();
  AllBuild();
  goto k_32;
  m_32 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_33);
  goto g_91;
  p_33 :
  AllBuild();
  goto o_33;
  k_32 :
  Cpop();
  o_33 :
  Return();
  j_32 :
  Tpop();
  NotNULLd(8,1);
  NotNULLd(8,2);
  Tset(App2("TCons",Egetd(8,1),App2("TCons",Egetd(8,2),App0("TNil"))));
  MoveTop(8,3);
  goto z_59;
  z_59 :
  TestFunFC(p_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto a_60;
  a_60 :
  TestFunFC(p_0,&&fail,Egetd(8,5));
  MoveArg(8,6,8,5,0);
  MoveArg(8,7,8,5,1);
  goto b_60;
  b_60 :
  TestFunFC(s_0,&&fail,Egetd(8,7));
  Rpush(r_33);
  goto k_91;
  r_33 :
  goto q_33;
  k_91 :
  Epushd(9,5);
  Move(6,1,8,4);
  Move(6,2,8,6);
  NotNULLd(0,14);
  Tset(Egetd(0,14));
  MoveTop(9,1);
  goto w_59;
  w_59 :
  TestFunFC(p_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  goto x_59;
  x_59 :
  TestFunFC(p_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto y_59;
  y_59 :
  TestFunFC(s_0,&&fail,Egetd(9,5));
  Rpush(v_33);
  goto l_91;
  v_33 :
  goto s_33;
  l_91 :
  Move(6,3,9,2);
  Move(6,4,9,4);
  Return();
  s_33 :
  Epopd(9,5);
  Return();
  q_33 :
  Epopd(8,7);
  Return();
  h_32 :
  Epopd(7,5);
  Tpop();
  NotNULLd(6,1);
  NotNULLd(6,2);
  NotNULLd(6,3);
  NotNULLd(6,4);
  NotNULLd(5,2);
  Tset(App5("MoveArg",Egetd(6,1),Egetd(6,2),Egetd(6,3),Egetd(6,4),Egetd(5,2)));
  Epopd(6,4);
  Return();
  a_32 :
  Epopd(5,6);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(w_33);
  goto y_90;
  w_33 :
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  MoveTop(4,2);
  goto k_60;
  k_60 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto l_60;
  l_60 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto m_60;
  m_60 :
  TestFunFC(s_0,&&fail,Egetd(4,6));
  Rpush(z_33);
  goto m_91;
  z_33 :
  goto y_31;
  m_91 :
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("Cons",Egetd(4,3),Egetd(4,5)));
  Return();
  y_31 :
  Epopd(4,6);
  Return();
  a_31 :
  goto q_30;
  z_90 :
  Tset(App0("Nil"));
  Return();
  q_30 :
  Epopd(3,7);
  Return();
  p_30 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,14);
  NotNULLd(0,8);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,15),App0("TNil")))));
  Ccall(_stratego_e_31);
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App1("Block",App2("Cons",Egetd(1,2),App2("Cons",App1("Block",Egetd(1,1)),App2("Cons",App4("Branch",Egetd(0,2),Egetd(0,3),Egetd(0,4),Egetd(0,5)),App0("Nil"))))));
  Epopd(1,2);
  Return();
  i_18 :
  goto h_18;
  t_90 :
  Tset(App1("Block",App0("Nil")));
  Return();
  h_18 :
  goto g_18;
  r_90 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App4("Branch",App4("Case",Egetd(0,12),Egetd(0,13),Egetd(0,6),Egetd(0,7)),Egetd(1,1),Egetd(0,14),Egetd(0,15)),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil")))));
  Epopd(1,1);
  Return();
  g_18 :
  goto f_18;
  m_90 :
  Tdupl();
  Epushd(1,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  MoveTop(1,2);
  goto c_59;
  c_59 :
  TestFunFC(r_24,&&g_34,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,1,1,2,1);
  Rpush(f_34);
  goto n_90;
  g_34 :
  TestFunFC(h_24,&&h_34,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_34);
  goto o_90;
  h_34 :
  TestFunFC(b_24,&&i_34,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_34);
  goto p_90;
  i_34 :
  TestFunFC(j_24,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_34);
  goto q_90;
  f_34 :
  goto e_34;
  q_90 :
  Return();
  e_34 :
  goto d_34;
  p_90 :
  Return();
  d_34 :
  goto c_34;
  o_90 :
  Return();
  c_34 :
  goto b_34;
  n_90 :
  Return();
  b_34 :
  Epopd(1,3);
  Tpop();
  NotNULLd(0,13);
  NotNULLd(0,8);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App1("Where",App2("Seq",App1("Build",Egetd(0,13)),App1("Assign",App1("Var",Egetd(0,8))))),Egetd(0,14),Egetd(0,15)));
  Return();
  f_18 :
  goto e_18;
  z_89 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,8);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto v_58;
  v_58 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto w_58;
  w_58 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_58;
  x_58 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(k_34);
  goto a_90;
  k_34 :
  goto j_34;
  a_90 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(l_34);
  b_90 :
  Cpush(n_34);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto x_57;
  x_57 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto y_57;
  y_57 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto z_57;
  z_57 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(p_34);
  goto c_90;
  p_34 :
  goto o_34;
  c_90 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_o_31);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto u_57;
  u_57 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto v_57;
  v_57 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto w_57;
  w_57 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(r_34);
  goto e_90;
  r_34 :
  goto q_34;
  e_90 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  q_34 :
  Epopd(5,6);
  Return();
  o_34 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto m_34;
  n_34 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_34);
  goto b_90;
  t_34 :
  AllBuild();
  goto s_34;
  m_34 :
  Cpop();
  s_34 :
  Return();
  l_34 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto s_58;
  s_58 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto t_58;
  t_58 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto u_58;
  u_58 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(v_34);
  goto f_90;
  v_34 :
  goto u_34;
  f_90 :
  Epushd(4,5);
  Move(1,1,3,4);
  Move(1,2,3,6);
  NotNULLd(0,1);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(4,1);
  goto p_58;
  p_58 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto q_58;
  q_58 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto r_58;
  r_58 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(x_34);
  goto g_90;
  x_34 :
  goto w_34;
  g_90 :
  Epushd(5,7);
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(y_34);
  h_90 :
  Cpush(a_35);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,5);
  MoveTop(6,1);
  goto i_58;
  i_58 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto j_58;
  j_58 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto k_58;
  k_58 :
  TestFunFC(s_0,&&fail,Egetd(6,5));
  Rpush(c_35);
  goto i_90;
  c_35 :
  goto b_35;
  i_90 :
  Epushd(7,6);
  NotNULLd(4,2);
  NotNULLd(6,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(6,4),App0("TNil"))));
  Ccall(_stratego_o_31);
  MoveTop(7,1);
  NotNULLd(6,2);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(7,1),App0("TNil"))));
  MoveTop(7,2);
  goto f_58;
  f_58 :
  TestFunFC(p_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto g_58;
  g_58 :
  TestFunFC(p_0,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto h_58;
  h_58 :
  TestFunFC(s_0,&&fail,Egetd(7,6));
  Rpush(e_35);
  goto k_90;
  e_35 :
  goto d_35;
  k_90 :
  Move(5,1,7,3);
  Move(5,2,7,5);
  Return();
  d_35 :
  Epopd(7,6);
  Return();
  b_35 :
  Epopd(6,5);
  OneNextSon();
  AllBuild();
  goto z_34;
  a_35 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_35);
  goto h_90;
  g_35 :
  AllBuild();
  goto f_35;
  z_34 :
  Cpop();
  f_35 :
  Return();
  y_34 :
  Tpop();
  NotNULLd(5,1);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,3);
  goto m_58;
  m_58 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto n_58;
  n_58 :
  TestFunFC(p_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto o_58;
  o_58 :
  TestFunFC(s_0,&&fail,Egetd(5,7));
  Rpush(i_35);
  goto l_90;
  i_35 :
  goto h_35;
  l_90 :
  Move(1,3,5,4);
  Move(1,4,5,6);
  Return();
  h_35 :
  Epopd(5,7);
  Return();
  w_34 :
  Epopd(4,5);
  Return();
  u_34 :
  Epopd(3,7);
  Return();
  j_34 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App4("Move",Egetd(1,1),Egetd(1,2),Egetd(1,3),Egetd(1,4)));
  Epopd(1,4);
  Return();
  e_18 :
  goto d_18;
  s_89 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,8);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto n_57;
  n_57 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_57;
  o_57 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_57;
  p_57 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(k_35);
  goto t_89;
  k_35 :
  goto j_35;
  t_89 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(l_35);
  u_89 :
  Cpush(n_35);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto g_57;
  g_57 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto h_57;
  h_57 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto i_57;
  i_57 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(p_35);
  goto v_89;
  p_35 :
  goto o_35;
  v_89 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_o_31);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto d_57;
  d_57 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto e_57;
  e_57 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto f_57;
  f_57 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(r_35);
  goto x_89;
  r_35 :
  goto q_35;
  x_89 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  q_35 :
  Epopd(5,6);
  Return();
  o_35 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto m_35;
  n_35 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_35);
  goto u_89;
  t_35 :
  AllBuild();
  goto s_35;
  m_35 :
  Cpop();
  s_35 :
  Return();
  l_35 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto k_57;
  k_57 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto l_57;
  l_57 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto m_57;
  m_57 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(v_35);
  goto y_89;
  v_35 :
  goto u_35;
  y_89 :
  Move(1,1,3,4);
  Move(1,2,3,6);
  Return();
  u_35 :
  Epopd(3,7);
  Return();
  j_35 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("MoveTop",Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  d_18 :
  goto c_18;
  o_89 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Cpush(w_35);
  Tdupl();
  Epushd(3,3);
  NotNULLd(0,11);
  Tset(Egetd(0,11));
  MoveTop(3,1);
  goto x_56;
  x_56 :
  TestFunFC(a_20,&&a_36,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(z_35);
  goto p_89;
  a_36 :
  TestFunFC(o_11,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(z_35);
  goto q_89;
  z_35 :
  goto y_35;
  q_89 :
  Return();
  y_35 :
  goto x_35;
  p_89 :
  Return();
  x_35 :
  Epopd(3,3);
  Cpop();
  Crestore();
  Cjump();
  w_35 :
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,11);
  NotNULLd(0,15);
  NotNULLd(0,3);
  NotNULLd(0,14);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,11),Egetd(0,15),Egetd(0,3)),App2("Cons",App1("Goto",Egetd(1,1)),App2("Cons",App1("Label",Egetd(0,14)),App2("Cons",App0("Cpop"),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil"))))))));
  Epopd(1,1);
  Return();
  c_18 :
  goto b_18;
  n_89 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(0,3);
  Tset(App4("Choices",App2("Choice",Egetd(0,12),Egetd(0,13)),Egetd(0,14),Egetd(0,15),Egetd(0,3)));
  Return();
  b_18 :
  goto a_18;
  l_89 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(1,1);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(0,3);
  Tset(App1("Block",App2("Cons",App1("Ccontinue",Egetd(1,1)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,15),Egetd(0,3)),App2("Cons",App1("Goto",Egetd(0,14)),App2("Cons",App1("Label",Egetd(1,1)),App2("Cons",App4("Choices",Egetd(0,13),Egetd(0,14),Egetd(0,15),Egetd(0,3)),App0("Nil"))))))));
  Epopd(1,1);
  Return();
  a_18 :
  goto z_17;
  i_89 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_h_30);
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(1,2);
  NotNULLd(0,13);
  NotNULLd(1,1);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App1("Cpush",Egetd(1,2)),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App1("Goto",Egetd(1,1)),App2("Cons",App1("Label",Egetd(1,2)),App2("Cons",App4("Choices",Egetd(0,13),Egetd(1,1),Egetd(0,14),Egetd(0,15)),App0("Nil"))))))));
  Epopd(1,2);
  Return();
  z_17 :
  goto y_17;
  h_89 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App2("Choice",Egetd(0,12),Egetd(0,13)),Egetd(0,14),Egetd(0,15)));
  Return();
  y_17 :
  goto w_17;
  g_89 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App3("Instr",Egetd(0,13),Egetd(0,14),Egetd(0,15)),App0("Nil")))));
  Return();
  w_17 :
  goto m_17;
  e_89 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App1("Cpush",Egetd(1,1)),App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Cpop"),App2("Cons",App0("Crestore"),App2("Cons",App0("Cjump"),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil"))))))))));
  Epopd(1,1);
  Return();
  m_17 :
  goto j_17;
  d_89 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Tpop"),App0("Nil"))))));
  Return();
  j_17 :
  goto h_17;
  c_89 :
  Tset(App1("Goto",ATmakeString("fail")));
  Return();
  h_17 :
  goto b_17;
  b_89 :
  Tset(App1("Block",App0("Nil")));
  Return();
  b_17 :
  Epopd(0,15);
  goto x_16;
  a_17 :
  Ccontinue(b_36);
  Ccall(_stratego_t_32);
  goto x_16;
  b_36 :
  Epushd(0,5);
  MoveTop(0,1);
  goto b_66;
  b_66 :
  TestFunFC(f_36,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  MoveArg(0,5,0,1,3);
  Rpush(e_36);
  goto o_95;
  e_36 :
  goto d_36;
  o_95 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,2),Egetd(0,4),Egetd(0,5)),App2("Cons",App1("Goto",Egetd(0,3)),App0("Nil")))));
  Return();
  d_36 :
  Epopd(0,5);
  goto c_36;
  x_16 :
  Cpop();
  c_36 :
ENDPROC

PROC(_stratego_e_31)
  Epushd(0,13);
  MoveTop(0,2);
  goto v_95;
  v_95 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,8,0,2,1);
  goto w_95;
  w_95 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_95;
  x_95 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto y_95;
  y_95 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  goto z_95;
  z_95 :
  TestFunFC(p_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,11,0,8,1);
  goto a_96;
  a_96 :
  TestFunFC(m_36,&&l_36,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,1,0,9,1);
  goto b_96;
  b_96 :
  TestFunFC(p_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto c_96;
  c_96 :
  TestFunFC(s_0,&&fail,Egetd(0,13));
  Rpush(k_36);
  goto r_97;
  l_36 :
  TestFunFC(h_24,&&n_36,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto d_96;
  d_96 :
  TestFunFC(p_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto e_96;
  e_96 :
  TestFunFC(s_0,&&fail,Egetd(0,13));
  Rpush(k_36);
  goto t_97;
  n_36 :
  TestFunFC(j_24,&&o_36,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto f_96;
  f_96 :
  TestFunFC(p_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto g_96;
  g_96 :
  TestFunFC(s_0,&&fail,Egetd(0,13));
  Rpush(k_36);
  goto u_97;
  o_36 :
  TestFunFC(b_24,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto h_96;
  h_96 :
  TestFunFC(p_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto i_96;
  i_96 :
  TestFunFC(s_0,&&fail,Egetd(0,13));
  Rpush(k_36);
  goto v_97;
  k_36 :
  goto j_36;
  v_97 :
  Epushd(1,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Ccall(_stratego_m_31);
  MoveTop(1,1);
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(1,1);
  NotNULLd(0,12);
  Tset(App4("TestStr",Egetd(0,4),Egetd(0,6),Egetd(1,1),Egetd(0,12)));
  Epopd(1,1);
  Return();
  j_36 :
  goto i_36;
  u_97 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,10);
  NotNULLd(0,12);
  Tset(App4("TestReal",Egetd(0,4),Egetd(0,6),Egetd(0,10),Egetd(0,12)));
  Return();
  i_36 :
  goto h_36;
  t_97 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,10);
  NotNULLd(0,12);
  Tset(App4("TestInt",Egetd(0,4),Egetd(0,6),Egetd(0,10),Egetd(0,12)));
  Return();
  h_36 :
  goto g_36;
  r_97 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  NotNULLd(0,1);
  Tset(App2("AFun",Egetd(0,10),Egetd(0,1)));
  Ccall(_stratego_b_31);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,12);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App3("TestFunFC",App1("VAR",Egetd(1,1)),Egetd(0,12),App2("Egetd",Egetd(0,4),Egetd(0,6))));
  Epopd(1,1);
  Return();
  g_36 :
  Epopd(0,13);
ENDPROC

PROC(_stratego_f_31)
  _ST_plus();
ENDPROC

PROC(_stratego_g_31)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_c_31);
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_31)
  _ST_add();
ENDPROC

PROC(_stratego_i_31)
  Rpush(p_36);
  q_102 :
  Cpush(r_36);
  Epushd(0,2);
  MoveTop(0,1);
  goto d_98;
  d_98 :
  TestFunFC(u_21,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_36);
  goto r_102;
  t_36 :
  goto s_36;
  r_102 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  s_36 :
  Epopd(0,2);
  goto q_36;
  r_36 :
  Ccontinue(u_36);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_l_31);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(q_23);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(v_36);
  goto q_102;
  v_36 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_j_31);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto k_98;
  k_98 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_98;
  l_98 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto m_98;
  m_98 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(x_36);
  goto x_102;
  x_36 :
  goto w_36;
  x_102 :
  Move(0,3,1,4);
  Return();
  w_36 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(y_36);
  y_102 :
  Cpush(a_37);
  Ccall(_stratego_b_29);
  Tset(App0("Nil"));
  goto z_36;
  a_37 :
  Epushd(1,3);
  MoveTop(1,1);
  goto z_98;
  z_98 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(d_37);
  goto z_102;
  d_37 :
  goto c_37;
  z_102 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(e_37);
  goto y_102;
  e_37 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto w_98;
  w_98 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto x_98;
  x_98 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto y_98;
  y_98 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(g_37);
  goto c_103;
  g_37 :
  goto f_37;
  c_103 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(h_37);
  d_103 :
  Cpush(j_37);
  Ccall(_stratego_b_29);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto i_37;
  j_37 :
  Ccontinue(k_37);
  Epushd(3,3);
  MoveTop(3,1);
  goto v_98;
  v_98 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(m_37);
  goto e_103;
  m_37 :
  goto l_37;
  e_103 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(n_37);
  f_103 :
  Cpush(q_37);
  Epushd(4,3);
  MoveTop(4,1);
  goto t_98;
  t_98 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(t_37);
  goto g_103;
  t_37 :
  goto s_37;
  g_103 :
  Move(3,2,4,2);
  Return();
  s_37 :
  Epopd(4,3);
  goto o_37;
  q_37 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_37);
  goto f_103;
  v_37 :
  AllBuild();
  goto u_37;
  o_37 :
  Cpop();
  u_37 :
  Return();
  n_37 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(w_37);
  goto d_103;
  w_37 :
  Return();
  l_37 :
  Epopd(3,3);
  goto i_37;
  k_37 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_37);
  goto d_103;
  y_37 :
  AllBuild();
  goto x_37;
  i_37 :
  Cpop();
  x_37 :
  Return();
  h_37 :
  Return();
  f_37 :
  Epopd(2,6);
  Return();
  c_37 :
  Epopd(1,3);
  goto b_37;
  z_36 :
  Cpop();
  b_37 :
  Return();
  y_36 :
  Epopd(0,3);
  goto q_36;
  u_36 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto c_99;
  c_99 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_99;
  d_99 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_99;
  e_99 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(b_38);
  goto i_103;
  b_38 :
  goto a_38;
  i_103 :
  Move(0,2,1,4);
  Return();
  a_38 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(c_38);
  j_103 :
  Cpush(e_38);
  Ccall(_stratego_b_29);
  Tset(App0("Nil"));
  goto d_38;
  e_38 :
  Epushd(1,3);
  MoveTop(1,1);
  goto q_99;
  q_99 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(h_38);
  goto k_103;
  h_38 :
  goto g_38;
  k_103 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(i_38);
  goto q_102;
  i_38 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(j_38);
  goto j_103;
  j_38 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto n_99;
  n_99 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_99;
  o_99 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_99;
  p_99 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(l_38);
  goto n_103;
  l_38 :
  goto k_38;
  n_103 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(m_38);
  o_103 :
  Cpush(o_38);
  Ccall(_stratego_b_29);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto n_38;
  o_38 :
  Ccontinue(p_38);
  Epushd(3,3);
  MoveTop(3,1);
  goto m_99;
  m_99 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_38);
  goto p_103;
  r_38 :
  goto q_38;
  p_103 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(s_38);
  q_103 :
  Cpush(u_38);
  Epushd(4,3);
  MoveTop(4,1);
  goto l_99;
  l_99 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(w_38);
  goto r_103;
  w_38 :
  goto v_38;
  r_103 :
  Move(3,2,4,2);
  Return();
  v_38 :
  Epopd(4,3);
  goto t_38;
  u_38 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_38);
  goto q_103;
  y_38 :
  AllBuild();
  goto x_38;
  t_38 :
  Cpop();
  x_38 :
  Return();
  s_38 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(z_38);
  goto o_103;
  z_38 :
  Return();
  q_38 :
  Epopd(3,3);
  goto n_38;
  p_38 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_39);
  goto o_103;
  b_39 :
  AllBuild();
  goto a_39;
  n_38 :
  Cpop();
  a_39 :
  Return();
  m_38 :
  Return();
  k_38 :
  Epopd(2,7);
  Return();
  g_38 :
  Epopd(1,3);
  goto f_38;
  d_38 :
  Cpop();
  f_38 :
  Return();
  c_38 :
  Epopd(0,2);
  goto z_37;
  q_36 :
  Cpop();
  z_37 :
  Return();
  p_36 :
ENDPROC

PROC(_stratego_j_31)
  Epushd(0,5);
  MoveTop(0,5);
  goto j_104;
  j_104 :
  TestFunFC(p_0,&&f_39,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto k_104;
  k_104 :
  TestFunFC(p_0,&&g_39,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_104;
  l_104 :
  TestFunFC(s_0,&&h_39,Egetd(0,4));
  Cpush(j_39);
  Rpush(k_39);
  goto y_105;
  k_39 :
  goto i_39;
  j_39 :
  Rpush(m_39);
  goto d_106;
  m_39 :
  goto l_39;
  i_39 :
  Cpop();
  l_39 :
  goto e_39;
  h_39 :
  Rpush(e_39);
  goto d_106;
  g_39 :
  Rpush(e_39);
  goto d_106;
  f_39 :
  Rpush(e_39);
  goto d_106;
  e_39 :
  goto d_39;
  d_106 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(n_39);
  e_106 :
  Cpush(p_39);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(r_39);
  Epushd(1,7);
  MoveTop(1,1);
  goto a_104;
  a_104 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto b_104;
  b_104 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto c_104;
  c_104 :
  TestFunFC(p_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto d_104;
  d_104 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  Rpush(t_39);
  goto f_106;
  t_39 :
  goto s_39;
  f_106 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  s_39 :
  Epopd(1,7);
  goto q_39;
  r_39 :
  Ccall(_stratego_k_31);
  goto w_39;
  q_39 :
  Cpop();
  w_39 :
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  goto o_39;
  p_39 :
  Epushd(1,7);
  MoveTop(1,1);
  goto f_104;
  f_104 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_104;
  g_104 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto h_104;
  h_104 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto i_104;
  i_104 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(z_39);
  goto g_106;
  z_39 :
  goto y_39;
  g_106 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  y_39 :
  Epopd(1,7);
  goto x_39;
  o_39 :
  Cpop();
  x_39 :
  Cpush(b_40);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_29);
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  goto a_40;
  b_40 :
  Rpush(d_40);
  goto e_106;
  d_40 :
  goto c_40;
  a_40 :
  Cpop();
  c_40 :
  Return();
  n_39 :
  Return();
  d_39 :
  goto c_39;
  y_105 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(e_40);
  z_105 :
  Cpush(g_40);
  Ccall(_stratego_b_29);
  goto f_40;
  g_40 :
  Ccontinue(h_40);
  Epushd(1,3);
  MoveTop(1,1);
  goto y_103;
  y_103 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(j_40);
  goto a_106;
  j_40 :
  goto i_40;
  a_106 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_40);
  b_106 :
  Cpush(m_40);
  Epushd(2,3);
  MoveTop(2,1);
  goto x_103;
  x_103 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_40);
  goto c_106;
  o_40 :
  goto n_40;
  c_106 :
  Move(1,2,2,2);
  Return();
  n_40 :
  Epopd(2,3);
  goto l_40;
  m_40 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_40);
  goto b_106;
  q_40 :
  AllBuild();
  goto p_40;
  l_40 :
  Cpop();
  p_40 :
  Return();
  k_40 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(r_40);
  goto z_105;
  r_40 :
  Return();
  i_40 :
  Epopd(1,3);
  goto f_40;
  h_40 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_40);
  goto z_105;
  t_40 :
  AllBuild();
  goto s_40;
  f_40 :
  Cpop();
  s_40 :
  Return();
  e_40 :
  Return();
  c_39 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_k_31)
  Epushd(0,7);
  MoveTop(0,1);
  goto k_107;
  k_107 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto l_107;
  l_107 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto m_107;
  m_107 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto n_107;
  n_107 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(v_40);
  goto o_109;
  v_40 :
  goto u_40;
  o_109 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto j_106;
  j_106 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto k_106;
  k_106 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_106;
  l_106 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(x_40);
  goto p_109;
  x_40 :
  goto w_40;
  p_109 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  w_40 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto n_106;
  n_106 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_106;
  o_106 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_106;
  p_106 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(z_40);
  goto q_109;
  z_40 :
  goto y_40;
  q_109 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  y_40 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(a_41);
  r_109 :
  Epushd(2,9);
  MoveTop(2,1);
  goto x_106;
  x_106 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto y_106;
  y_106 :
  TestFunFC(w_0,&&e_41,Egetd(2,2));
  goto z_106;
  z_106 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto a_107;
  a_107 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto b_107;
  b_107 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(d_41);
  goto s_109;
  e_41 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_107;
  c_107 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto d_107;
  d_107 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto e_107;
  e_107 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(d_41);
  goto t_109;
  d_41 :
  goto c_41;
  t_109 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(g_41);
  goto r_109;
  g_41 :
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto u_106;
  u_106 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto v_106;
  v_106 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_106;
  w_106 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(h_41);
  goto u_109;
  h_41 :
  goto f_41;
  u_109 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  f_41 :
  Epopd(3,5);
  Return();
  c_41 :
  goto b_41;
  s_109 :
  Tset(App0("Nil"));
  Return();
  b_41 :
  Epopd(2,9);
  Return();
  a_41 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto h_107;
  h_107 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto i_107;
  i_107 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto j_107;
  j_107 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(j_41);
  goto w_109;
  j_41 :
  goto i_41;
  w_109 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(k_41);
  x_109 :
  Cpush(m_41);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_41);
  goto x_109;
  n_41 :
  AllBuild();
  goto l_41;
  m_41 :
  Ccall(_stratego_b_29);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto o_41;
  l_41 :
  Cpop();
  o_41 :
  Return();
  k_41 :
  Return();
  i_41 :
  Epopd(1,9);
  Return();
  u_40 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_l_31)
  Epushd(0,6);
  MoveTop(0,2);
  goto a_110;
  a_110 :
  TestFunFC(q_23,&&s_41,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(r_41);
  goto o_110;
  s_41 :
  TestFunFC(t_41,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto b_110;
  b_110 :
  TestFunFC(u_41,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(r_41);
  goto p_110;
  r_41 :
  goto q_41;
  p_110 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_i_31);
  Return();
  q_41 :
  goto p_41;
  o_110 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  p_41 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_m_31)
  Ccall(_stratego_y_29);
  Rpush(v_41);
  q_110 :
  Cpush(x_41);
  Ccall(_stratego_n_31);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_41);
  goto q_110;
  y_41 :
  AllBuild();
  AllBuild();
  goto w_41;
  x_41 :
  Ccontinue(z_41);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_42);
  goto q_110;
  a_42 :
  AllBuild();
  goto w_41;
  z_41 :
  Ccall(_stratego_b_29);
  goto b_42;
  w_41 :
  Cpop();
  b_42 :
  Return();
  v_41 :
  Ccall(_stratego_z_29);
ENDPROC

PROC(_stratego_n_31)
  Epushd(0,3);
  MoveTop(0,1);
  goto u_110;
  u_110 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto v_110;
  v_110 :
  TestInt(0,2,34,&&g_42);
  Rpush(f_42);
  goto c_111;
  g_42 :
  TestInt(0,2,92,&&h_42);
  Rpush(f_42);
  goto d_111;
  h_42 :
  TestInt(0,2,10,&&fail);
  Rpush(f_42);
  goto e_111;
  f_42 :
  goto e_42;
  e_111 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(110),Egetd(0,3))));
  Return();
  e_42 :
  goto d_42;
  d_111 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(92),Egetd(0,3))));
  Return();
  d_42 :
  goto c_42;
  c_111 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(34),Egetd(0,3))));
  Return();
  c_42 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_o_31)
  Epushd(0,5);
  MoveTop(0,1);
  goto o_111;
  o_111 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto p_111;
  p_111 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_111;
  q_111 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(j_42);
  goto q_112;
  j_42 :
  goto i_42;
  q_112 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",MakeInt(1),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil")))));
  Rpush(k_42);
  r_112 :
  Epushd(1,9);
  MoveTop(1,1);
  goto j_111;
  j_111 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_111;
  k_111 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_111;
  l_111 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,9,1,5,1);
  goto m_111;
  m_111 :
  TestFunFC(a_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto n_111;
  n_111 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Cpush(p_42);
  Rpush(q_42);
  goto s_112;
  q_42 :
  goto o_42;
  p_42 :
  Rpush(s_42);
  goto t_112;
  s_42 :
  goto r_42;
  o_42 :
  Cpop();
  r_42 :
  goto n_42;
  n_42 :
  goto m_42;
  t_112 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_f_31);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  NotNULLd(1,8);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,8),App0("TNil")))));
  Rpush(t_42);
  goto r_112;
  t_42 :
  Epopd(2,1);
  Return();
  m_42 :
  goto l_42;
  s_112 :
  Epushd(2,1);
  Move(1,4,1,7);
  Move(2,1,1,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Epopd(2,1);
  Return();
  l_42 :
  Epopd(1,9);
  Return();
  k_42 :
  Return();
  i_42 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_31)
  Epushd(0,5);
  MoveTop(0,1);
  goto w_112;
  w_112 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_112;
  x_112 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_112;
  y_112 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(v_42);
  goto f_113;
  v_42 :
  goto u_42;
  f_113 :
  Move(0,2,0,4);
  Return();
  u_42 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_31)
  Cpush(w_42);
  Tdupl();
  Ccall(_stratego_s_32);
  Cpop();
  Crestore();
  Cjump();
  w_42 :
ENDPROC

PROC(_stratego_r_31)
  Rpush(x_42);
  k_114 :
  Epushd(0,4);
  MoveTop(0,1);
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_s_31);
  MoveTop(0,2);
  Tset(MakeInt(48));
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_h_31);
  MoveTop(0,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_c_32);
  Ccall(_stratego_d_32);
  MoveTop(0,4);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,4),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(z_42);
  Epushd(1,1);
  MoveTop(1,1);
  goto q_113;
  q_113 :
  TestInt(1,1,0,&&fail);
  Rpush(b_43);
  goto u_114;
  b_43 :
  goto a_43;
  u_114 :
  Tset(App0("Nil"));
  Return();
  a_43 :
  Epopd(1,1);
  goto y_42;
  z_42 :
  Rpush(d_43);
  goto k_114;
  d_43 :
  goto c_43;
  y_42 :
  Cpop();
  c_43 :
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  Ccall(_stratego_g_32);
  Epopd(0,4);
  Return();
  x_42 :
  Ccall(_stratego_l_32);
  Ccall(_stratego_z_29);
ENDPROC

PROC(_stratego_s_31)
  _ST_mod();
ENDPROC

PROC(_stratego_c_32)
  _ST_div();
ENDPROC

PROC(_stratego_d_32)
  _ST_int();
ENDPROC

PROC(_stratego_g_32)
  Epushd(0,7);
  MoveTop(0,1);
  goto x_114;
  x_114 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto y_114;
  y_114 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto z_114;
  z_114 :
  TestFunFC(w_0,&&h_43,Egetd(0,4));
  goto a_115;
  a_115 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(g_43);
  goto n_115;
  h_43 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto b_115;
  b_115 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(g_43);
  goto o_115;
  g_43 :
  goto f_43;
  o_115 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  f_43 :
  goto e_43;
  n_115 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  e_43 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_l_32)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(j_43);
  t_116 :
  Cpush(l_43);
  Epushd(1,7);
  MoveTop(1,1);
  goto r_115;
  r_115 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto s_115;
  s_115 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto t_115;
  t_115 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto u_115;
  u_115 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(n_43);
  goto u_116;
  n_43 :
  goto m_43;
  u_116 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(o_43);
  goto t_116;
  o_43 :
  Return();
  m_43 :
  Epopd(1,7);
  goto k_43;
  l_43 :
  goto p_43;
  k_43 :
  Cpop();
  p_43 :
  Return();
  j_43 :
  MoveTop(0,2);
  goto w_115;
  w_115 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_115;
  x_115 :
  TestFunFC(w_0,&&fail,Egetd(0,3));
  goto y_115;
  y_115 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto z_115;
  z_115 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(r_43);
  goto v_116;
  r_43 :
  goto i_43;
  v_116 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  i_43 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_r_32)
  Rpush(u_43);
  g_117 :
  Cpush(w_43);
  Ccall(_stratego_b_29);
  Tset(MakeInt(0));
  goto v_43;
  w_43 :
  Epushd(0,3);
  MoveTop(0,1);
  goto y_116;
  y_116 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(z_43);
  goto h_117;
  z_43 :
  goto y_43;
  h_117 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(a_44);
  goto g_117;
  a_44 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_h_31);
  Epopd(1,1);
  Return();
  y_43 :
  Epopd(0,3);
  goto x_43;
  v_43 :
  Cpop();
  x_43 :
  Return();
  u_43 :
ENDPROC

PROC(_stratego_s_32)
  _ST_gt();
ENDPROC

PROC(_stratego_t_32)
  Epushd(0,11);
  MoveTop(0,4);
  goto k_118;
  k_118 :
  TestFunFC(f_36,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  MoveArg(0,10,0,4,2);
  MoveArg(0,11,0,4,3);
  goto l_118;
  l_118 :
  TestFunFC(e_22,&&g_44,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  MoveArg(0,2,0,5,2);
  MoveArg(0,3,0,5,3);
  goto m_118;
  m_118 :
  TestFunFC(u_21,&&fail,Egetd(0,8));
  MoveArg(0,1,0,8,0);
  Rpush(f_44);
  goto i_121;
  g_44 :
  TestFunFC(i_44,&&h_44,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(f_44);
  goto q_121;
  h_44 :
  TestFunFC(j_12,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto n_118;
  n_118 :
  TestFunFC(h_12,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto o_118;
  o_118 :
  TestFunFC(w_0,&&fail,Egetd(0,8));
  Cpush(k_44);
  Rpush(l_44);
  goto r_121;
  l_44 :
  goto j_44;
  k_44 :
  Rpush(n_44);
  goto t_121;
  n_44 :
  goto m_44;
  j_44 :
  Cpop();
  m_44 :
  goto f_44;
  f_44 :
  goto e_44;
  t_121 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Ccall(_stratego_g_31);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,7);
  Tset(App2("Ccall",Egetd(0,7),App0("Nil")));
  Epopd(1,1);
  Return();
  e_44 :
  goto d_44;
  r_121 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Cpush(o_44);
  Tdupl();
  Ccall(_stratego_g_31);
  Cpop();
  Crestore();
  Cjump();
  o_44 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,9);
  NotNULLd(0,7);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(0,9)),App2("Cons",App1("Goto",Egetd(0,7)),App0("Nil")))));
  Epopd(1,1);
  Return();
  d_44 :
  goto c_44;
  q_121 :
  NotNULLd(0,6);
  Tset(App1("Goto",Egetd(0,6)));
  Return();
  c_44 :
  goto b_44;
  i_121 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,1);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto f_118;
  f_118 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto g_118;
  g_118 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto h_118;
  h_118 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(q_44);
  goto j_121;
  q_44 :
  goto p_44;
  j_121 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(r_44);
  k_121 :
  Cpush(u_44);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto u_117;
  u_117 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto v_117;
  v_117 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto w_117;
  w_117 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(w_44);
  goto l_121;
  w_44 :
  goto v_44;
  l_121 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_o_31);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto r_117;
  r_117 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto s_117;
  s_117 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto t_117;
  t_117 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(y_44);
  goto n_121;
  y_44 :
  goto x_44;
  n_121 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  x_44 :
  Epopd(5,6);
  Return();
  v_44 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto t_44;
  u_44 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_45);
  goto k_121;
  b_45 :
  AllBuild();
  goto a_45;
  t_44 :
  Cpop();
  a_45 :
  Return();
  r_44 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto c_118;
  c_118 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto d_118;
  d_118 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto e_118;
  e_118 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(d_45);
  goto o_121;
  d_45 :
  goto c_45;
  o_121 :
  Epushd(4,5);
  Move(1,1,3,4);
  Move(1,2,3,6);
  NotNULLd(0,3);
  NotNULLd(0,9);
  NotNULLd(0,10);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,9),App2("TCons",Egetd(0,10),App2("TCons",Egetd(0,11),App0("TNil"))))));
  Ccall(_stratego_u_32);
  MoveTop(4,1);
  goto z_117;
  z_117 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto a_118;
  a_118 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto b_118;
  b_118 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(i_45);
  goto p_121;
  i_45 :
  goto g_45;
  p_121 :
  Move(1,3,4,2);
  Move(1,4,4,4);
  Return();
  g_45 :
  Epopd(4,5);
  Return();
  c_45 :
  Epopd(3,7);
  Return();
  p_44 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,6);
  NotNULLd(0,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(0,9);
  NotNULLd(0,10);
  NotNULLd(0,11);
  NotNULLd(1,4);
  Tset(App1("Block",App2("Cons",App1("Goto",Egetd(0,6)),App2("Cons",App1("Label",Egetd(0,6)),App2("Cons",App6("Alts",Egetd(0,2),App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,2),App0("TNil"))),Egetd(1,3),Egetd(0,9),Egetd(0,10),Egetd(0,11)),App2("Cons",Egetd(1,4),App0("Nil")))))));
  Epopd(1,4);
  Return();
  b_44 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_u_32)
  Epushd(0,9);
  MoveTop(0,1);
  goto y_121;
  y_121 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto z_121;
  z_121 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_122;
  a_122 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto b_122;
  b_122 :
  TestFunFC(p_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto c_122;
  c_122 :
  TestFunFC(s_0,&&fail,Egetd(0,9));
  goto d_122;
  d_122 :
  TestFunFC(c_21,&&m_45,Egetd(0,2));
  Cpush(z_45);
  Rpush(a_46);
  goto w_122;
  a_46 :
  goto n_45;
  z_45 :
  Rpush(t_46);
  goto x_122;
  t_46 :
  goto b_46;
  n_45 :
  Cpop();
  b_46 :
  goto l_45;
  m_45 :
  Rpush(l_45);
  goto x_122;
  l_45 :
  goto k_45;
  x_122 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App0("Fail"),App0("TNil"))));
  Cpush(u_46);
  Tdupl();
  Ccall(_stratego_p_31);
  Cpop();
  Crestore();
  Cjump();
  u_46 :
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,8);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",App1("Block",App2("Cons",App1("Label",Egetd(1,1)),App2("Cons",App4("Branch",Egetd(0,2),Egetd(0,4),Egetd(0,6),Egetd(0,8)),App0("Nil")))),App0("TNil"))));
  Epopd(1,1);
  Return();
  k_45 :
  goto j_45;
  w_122 :
  Tset(App2("TCons",ATmakeString("fail"),App2("TCons",App1("Block",App0("Nil")),App0("TNil"))));
  Return();
  j_45 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_v_32)
  Rpush(v_46);
  o_123 :
  Cpush(x_46);
  Cpush(z_46);
  Ccall(_stratego_b_29);
  goto y_46;
  z_46 :
  Ccontinue(a_47);
  TestFunTop(w_47);
  TravInit();
  OneNextSon();
  Rpush(b_48);
  goto o_123;
  b_48 :
  AllBuild();
  goto y_46;
  a_47 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_48);
  goto o_123;
  g_48 :
  AllBuild();
  Rpush(m_48);
  p_123 :
  Cpush(q_48);
  Epushd(0,6);
  MoveTop(0,1);
  goto b_123;
  b_123 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto c_123;
  c_123 :
  TestFunFC(w_47,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto d_123;
  d_123 :
  TestFunFC(w_0,&&u_48,Egetd(0,3));
  Rpush(t_48);
  goto q_123;
  u_48 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(t_48);
  goto r_123;
  t_48 :
  goto s_48;
  r_123 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,4),App2("Cons",App1("Block",Egetd(0,5)),Egetd(0,6))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_48);
  goto p_123;
  v_48 :
  AllBuild();
  Rpush(w_48);
  goto p_123;
  w_48 :
  Return();
  s_48 :
  goto r_48;
  q_123 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  r_48 :
  Epopd(0,6);
  goto p_48;
  q_48 :
  goto y_48;
  p_48 :
  Cpop();
  y_48 :
  Return();
  m_48 :
  goto f_48;
  y_46 :
  Cpop();
  f_48 :
  goto w_46;
  x_46 :
  goto z_48;
  w_46 :
  Cpop();
  z_48 :
  Return();
  v_46 :
ENDPROC

PROC(_stratego_y_32)
  Cpush(b_49);
  TestFunTop(w_47);
  TravInit();
  OneNextSon();
  Rpush(c_49);
  s_123 :
  Cpush(e_49);
  d_49 :
  Ccall(_stratego_z_32);
  Tduplinv();
  goto d_49;
  e_49 :
  Cpush(s_49);
  Ccall(_stratego_b_29);
  goto f_49;
  s_49 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_50);
  goto s_123;
  e_50 :
  AllBuild();
  goto c_50;
  f_49 :
  Cpop();
  c_50 :
  Cpush(g_50);
  f_50 :
  Ccall(_stratego_z_32);
  Tduplinv();
  goto f_50;
  g_50 :
  Return();
  c_49 :
  AllBuild();
  goto a_49;
  b_49 :
  goto h_50;
  a_49 :
  Cpop();
  h_50 :
ENDPROC

PROC(_stratego_z_32)
  Epushd(0,10);
  MoveTop(0,5);
  goto e_124;
  e_124 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto f_124;
  f_124 :
  TestFunFC(s_50,&&r_50,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto g_124;
  g_124 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto h_124;
  h_124 :
  TestFunFC(t_50,&&fail,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  Rpush(p_50);
  goto z_125;
  r_50 :
  TestFunFC(v_50,&&u_50,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,1,0,6,1);
  goto i_124;
  i_124 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto j_124;
  j_124 :
  TestFunFC(w_50,&&fail,Egetd(0,9));
  goto k_124;
  k_124 :
  TestFunFC(a_0,&&fail,Egetd(0,10));
  MoveArg(0,2,0,10,0);
  MoveArg(0,3,0,10,1);
  goto l_124;
  l_124 :
  TestFunFC(x_50,&&fail,Egetd(0,2));
  Rpush(p_50);
  goto a_126;
  u_50 :
  TestFunFC(z_50,&&y_50,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto m_124;
  m_124 :
  TestFunFC(a_0,&&f_51,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto n_124;
  n_124 :
  TestFunFC(z_50,&&g_51,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  goto o_124;
  o_124 :
  TestInt(0,7,0,&&i_51);
  Cpush(l_51);
  Rpush(n_51);
  goto b_126;
  n_51 :
  goto j_51;
  l_51 :
  Rpush(q_51);
  goto d_126;
  q_51 :
  goto o_51;
  j_51 :
  Cpop();
  o_51 :
  goto p_50;
  i_51 :
  Rpush(p_50);
  goto d_126;
  g_51 :
  goto p_124;
  p_124 :
  TestInt(0,7,0,&&fail);
  Rpush(p_50);
  goto b_126;
  f_51 :
  goto p_124;
  y_50 :
  TestFunFC(u_51,&&r_51,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto q_124;
  q_124 :
  TestFunFC(a_0,&&w_51,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto r_124;
  r_124 :
  TestFunFC(u_51,&&y_51,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  goto s_124;
  s_124 :
  TestInt(0,7,0,&&b_52);
  Cpush(d_52);
  Rpush(e_52);
  goto c_126;
  e_52 :
  goto c_52;
  d_52 :
  Rpush(g_52);
  goto f_126;
  g_52 :
  goto f_52;
  c_52 :
  Cpop();
  f_52 :
  goto p_50;
  b_52 :
  Rpush(p_50);
  goto f_126;
  y_51 :
  goto t_124;
  t_124 :
  TestInt(0,7,0,&&fail);
  Rpush(p_50);
  goto c_126;
  w_51 :
  goto t_124;
  r_51 :
  TestFunFC(m_53,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto u_124;
  u_124 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto v_124;
  v_124 :
  TestFunFC(o_53,&&fail,Egetd(0,9));
  Rpush(p_50);
  goto h_126;
  p_50 :
  goto o_50;
  h_126 :
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Return();
  o_50 :
  goto n_50;
  f_126 :
  Epushd(1,1);
  NotNULLd(0,7);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,4),App0("TNil"))));
  Ccall(_stratego_f_31);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("Cons",App1("Epop",Egetd(1,1)),Egetd(0,10)));
  Epopd(1,1);
  Return();
  n_50 :
  goto m_50;
  d_126 :
  Epushd(1,1);
  NotNULLd(0,7);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,4),App0("TNil"))));
  Ccall(_stratego_f_31);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("Cons",App1("Epush",Egetd(1,1)),Egetd(0,10)));
  Epopd(1,1);
  Return();
  m_50 :
  goto l_50;
  c_126 :
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  l_50 :
  goto k_50;
  b_126 :
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  k_50 :
  goto j_50;
  a_126 :
  NotNULLd(0,7);
  NotNULLd(0,1);
  NotNULLd(0,3);
  Tset(App2("Cons",App2("MatchFun",Egetd(0,7),Egetd(0,1)),Egetd(0,3)));
  Return();
  j_50 :
  goto i_50;
  z_125 :
  Epushd(1,1);
  Move(0,7,0,4);
  Move(1,1,0,10);
  NotNULLd(0,7);
  NotNULLd(1,1);
  Tset(App2("Cons",App1("MatchVar",Egetd(0,7)),Egetd(1,1)));
  Epopd(1,1);
  Return();
  i_50 :
  Epopd(0,10);
ENDPROC

PROC(_stratego_a_33)
  Tset(ATmakeString("symbol-table"));
  Ccall(_stratego_b_33);
  Rpush(r_53);
  q_127 :
  Cpush(y_53);
  Ccall(_stratego_b_29);
  goto t_53;
  y_53 :
  Ccontinue(z_53);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,7);
  MoveTop(0,1);
  goto j_126;
  j_126 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto k_126;
  k_126 :
  TestFunFC(n_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_126;
  l_126 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto m_126;
  m_126 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(b_54);
  goto r_127;
  b_54 :
  goto a_54;
  r_127 :
  Return();
  a_54 :
  Epopd(0,7);
  OneNextSon();
  Rpush(c_54);
  goto q_127;
  c_54 :
  AllBuild();
  goto t_53;
  z_53 :
  Epushd(0,3);
  MoveTop(0,1);
  goto o_126;
  o_126 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(i_54);
  goto s_127;
  i_54 :
  goto e_54;
  s_127 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(j_54);
  goto q_127;
  j_54 :
  Return();
  e_54 :
  Epopd(0,3);
  goto d_54;
  t_53 :
  Cpop();
  d_54 :
  Return();
  r_53 :
  Rpush(k_54);
  t_127 :
  Cpush(q_54);
  Ccall(_stratego_b_29);
  goto p_54;
  q_54 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,7);
  MoveTop(0,1);
  goto q_126;
  q_126 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto r_126;
  r_126 :
  TestFunFC(n_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto s_126;
  s_126 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto t_126;
  t_126 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(x_54);
  goto u_127;
  x_54 :
  goto w_54;
  u_127 :
  NotNULLd(0,6);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",App2("VARDECL",App0("ATerm"),Egetd(0,6)),App2("TCons",App2("MOVE",Egetd(0,6),App3("ATmakeAFun",Egetd(0,3),Egetd(0,4),MakeInt(0))),App0("TNil"))));
  Return();
  w_54 :
  Epopd(0,7);
  OneNextSon();
  Rpush(y_54);
  goto t_127;
  y_54 :
  AllBuild();
  goto v_54;
  p_54 :
  Cpop();
  v_54 :
  Return();
  k_54 :
  Ccall(_stratego_d_33);
ENDPROC

PROC(_stratego_b_33)
  Epushd(0,1);
  MoveTop(0,1);
  Ccall(_stratego_c_33);
  Rpush(z_54);
  f_128 :
  Cpush(b_55);
  Ccall(_stratego_b_29);
  goto a_55;
  b_55 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_c_31);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,2),App0("TNil"))));
  Epopd(1,2);
  OneNextSon();
  Rpush(d_55);
  goto f_128;
  d_55 :
  AllBuild();
  goto c_55;
  a_55 :
  Cpop();
  c_55 :
  Return();
  z_54 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_33)
  _ST_table_keys();
ENDPROC

PROC(_stratego_d_33)
  Rpush(e_55);
  r_129 :
  Epushd(0,3);
  MoveTop(0,1);
  goto u_128;
  u_128 :
  TestFunFC(w_0,&&i_55,Egetd(0,1));
  Rpush(h_55);
  goto s_129;
  i_55 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(h_55);
  goto t_129;
  h_55 :
  goto g_55;
  t_129 :
  Epushd(1,13);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(k_55);
  goto r_129;
  k_55 :
  OneNextSon();
  Ccall(_stratego_r_29);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto l_128;
  l_128 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto m_128;
  m_128 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto n_128;
  n_128 :
  TestFunFC(p_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto o_128;
  o_128 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  goto p_128;
  p_128 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto q_128;
  q_128 :
  TestFunFC(p_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto r_128;
  r_128 :
  TestFunFC(p_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto s_128;
  s_128 :
  TestFunFC(s_0,&&fail,Egetd(1,12));
  goto t_128;
  t_128 :
  TestFunFC(s_0,&&fail,Egetd(1,13));
  Rpush(l_55);
  goto u_129;
  l_55 :
  goto j_55;
  u_129 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset(App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,9)),App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,11)),App0("TNil"))));
  Return();
  j_55 :
  Epopd(1,13);
  Return();
  g_55 :
  goto f_55;
  s_129 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  f_55 :
  Epopd(0,3);
  Return();
  e_55 :
ENDPROC

DOIT

