#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,v_50);
VARDECL(AFun,t_50);
VARDECL(AFun,e_50);
VARDECL(AFun,u_49);
VARDECL(AFun,s_49);
VARDECL(AFun,r_49);
VARDECL(AFun,q_49);
VARDECL(AFun,n_49);
VARDECL(AFun,i_49);
VARDECL(AFun,u_44);
VARDECL(AFun,g_43);
VARDECL(AFun,j_41);
VARDECL(AFun,i_41);
VARDECL(AFun,y_35);
VARDECL(AFun,r_35);
VARDECL(AFun,o_24);
VARDECL(AFun,n_24);
VARDECL(AFun,l_24);
VARDECL(AFun,i_24);
VARDECL(AFun,b_24);
VARDECL(AFun,z_23);
VARDECL(AFun,x_23);
VARDECL(AFun,v_23);
VARDECL(AFun,t_23);
VARDECL(AFun,r_23);
VARDECL(AFun,p_23);
VARDECL(AFun,n_23);
VARDECL(AFun,l_23);
VARDECL(AFun,i_23);
VARDECL(AFun,e_23);
VARDECL(AFun,z_22);
VARDECL(AFun,w_22);
VARDECL(AFun,r_22);
VARDECL(AFun,d_22);
VARDECL(AFun,v_21);
VARDECL(AFun,t_21);
VARDECL(AFun,s_21);
VARDECL(AFun,n_21);
VARDECL(AFun,l_21);
VARDECL(AFun,e_21);
VARDECL(AFun,r_20);
VARDECL(AFun,p_20);
VARDECL(AFun,b_20);
VARDECL(AFun,w_19);
VARDECL(AFun,r_16);
VARDECL(AFun,k_16);
VARDECL(AFun,b_16);
VARDECL(AFun,j_15);
VARDECL(AFun,e_15);
VARDECL(AFun,i_14);
VARDECL(AFun,f_13);
VARDECL(AFun,j_12);
VARDECL(AFun,i_12);
VARDECL(AFun,v_11);
VARDECL(AFun,o_11);
VARDECL(AFun,n_11);
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
PROCDECL(_stratego_v_28);
PROCDECL(_stratego_w_28);
PROCDECL(_stratego_x_28);
PROCDECL(_stratego_y_28);
PROCDECL(_stratego_z_28);
PROCDECL(_stratego_b_29);
PROCDECL(_stratego_c_29);
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
PROCDECL(_stratego_d_30);
PROCDECL(_stratego_e_30);
PROCDECL(_stratego_f_30);
PROCDECL(_stratego_g_30);
PROCDECL(_stratego_h_30);
PROCDECL(_stratego_i_30);
PROCDECL(_stratego_s_30);
PROCDECL(_stratego_z_30);
PROCDECL(_stratego_a_31);
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
PROCDECL(_stratego_a_32);
PROCDECL(_stratego_b_32);
PROCDECL(_stratego_e_32);
PROCDECL(_stratego_j_32);
PROCDECL(_stratego_p_32);
PROCDECL(_stratego_q_32);
PROCDECL(_stratego_r_32);

PROC(_stratego_init_afuns)
  MOVE(v_50,ATmakeAFun("Tpop",0,0));
  MOVE(t_50,ATmakeAFun("Arg",1,0));
  MOVE(e_50,ATmakeAFun("Epop",1,0));
  MOVE(u_49,ATmakeAFun("Epush",1,0));
  MOVE(s_49,ATmakeAFun("AllBuild",0,0));
  MOVE(r_49,ATmakeAFun("TravInit",0,0));
  MOVE(q_49,ATmakeAFun("MatchFun",2,0));
  MOVE(n_49,ATmakeAFun("BuildVar",1,0));
  MOVE(i_49,ATmakeAFun("MatchVar",1,0));
  MOVE(u_44,ATmakeAFun("Block",1,0));
  MOVE(g_43,ATmakeAFun("Continue",1,0));
  MOVE(j_41,ATmakeAFun("Rule",3,0));
  MOVE(i_41,ATmakeAFun("LRule",1,0));
  MOVE(y_35,ATmakeAFun("Fun",2,0));
  MOVE(r_35,ATmakeAFun("Branch",4,0));
  MOVE(o_24,ATmakeAFun("App",2,0));
  MOVE(n_24,ATmakeAFun("Op",2,0));
  MOVE(l_24,ATmakeAFun("BuildDefault",1,0));
  MOVE(i_24,ATmakeAFun("Real",1,0));
  MOVE(b_24,ATmakeAFun("Int",1,0));
  MOVE(z_23,ATmakeAFun("Str",1,0));
  MOVE(x_23,ATmakeAFun("BuildTerm",3,0));
  MOVE(v_23,ATmakeAFun("Prim2",2,0));
  MOVE(t_23,ATmakeAFun("Prim",1,0));
  MOVE(r_23,ATmakeAFun("Where",1,0));
  MOVE(p_23,ATmakeAFun("Scope",2,0));
  MOVE(n_23,ATmakeAFun("Thread",1,0));
  MOVE(l_23,ATmakeAFun("Some",1,0));
  MOVE(i_23,ATmakeAFun("All",1,0));
  MOVE(e_23,ATmakeAFun("CongKids",1,0));
  MOVE(z_22,ATmakeAFun("CongWld",1,0));
  MOVE(w_22,ATmakeAFun("Path",2,0));
  MOVE(r_22,ATmakeAFun("Let",2,0));
  MOVE(d_22,ATmakeAFun("Case",4,0));
  MOVE(v_21,ATmakeAFun("Assign",2,0));
  MOVE(t_21,ATmakeAFun("Var",1,0));
  MOVE(s_21,ATmakeAFun("Assign",1,0));
  MOVE(n_21,ATmakeAFun("Not",1,0));
  MOVE(l_21,ATmakeAFun("Test",1,0));
  MOVE(e_21,ATmakeAFun("Fail",0,0));
  MOVE(r_20,ATmakeAFun("Alt",3,0));
  MOVE(p_20,ATmakeAFun("Alts",6,0));
  MOVE(b_20,ATmakeAFun("Choice",2,0));
  MOVE(w_19,ATmakeAFun("Choices",4,0));
  MOVE(r_16,ATmakeAFun("AFun",2,0));
  MOVE(k_16,ATmakeAFun("Id",0,0));
  MOVE(b_16,ATmakeAFun("CountRule",1,0));
  MOVE(j_15,ATmakeAFun("Cong",2,0));
  MOVE(e_15,ATmakeAFun("Build",1,0));
  MOVE(i_14,ATmakeAFun("One",1,0));
  MOVE(f_13,ATmakeAFun("Countrule",1,0));
  MOVE(j_12,ATmakeAFun("Call",2,0));
  MOVE(i_12,ATmakeAFun("SVar",1,0));
  MOVE(v_11,ATmakeAFun("Seq",2,0));
  MOVE(o_11,ATmakeAFun("LChoice",2,0));
  MOVE(n_11,ATmakeAFun("Rec",2,0));
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
  Ccall(_stratego_v_28);
  goto f_0;
  g_0 :
  Ccall(_stratego_w_28);
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
  Ccall(_stratego_x_28);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_d_29);
  Tdupl();
  Ccall(_stratego_f_29);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_29);
  OneNextSon();
  Ccall(_stratego_l_29);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_f_29);
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
  Ccall(_stratego_g_29);
  Ccall(_stratego_j_29);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_k_29);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_v_28)
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

PROC(_stratego_w_28)
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
  goto c_14;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto g_14;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto j_14;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto m_14;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto p_14;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto s_14;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto w_14;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto g_15;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto k_15;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto o_15;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto s_15;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto m_16;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto p_16;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto s_16;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto v_16;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto c_14;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto g_14;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto j_14;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto m_14;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto p_14;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto s_15;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto m_16;
  r_3 :
  goto t_2;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto p_16;
  t_3 :
  goto t_2;
  s_3 :
  Ccontinue(y_3);
  Rpush(z_3);
  goto s_16;
  z_3 :
  goto t_2;
  y_3 :
  Rpush(b_4);
  goto v_16;
  b_4 :
  goto a_4;
  t_2 :
  Cpop();
  a_4 :
  goto m_1;
  m_1 :
  goto l_1;
  v_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_8;
  m_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_4);
  goto w_16;
  d_4 :
  goto c_4;
  w_16 :
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
  s_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_8;
  c_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(h_4);
  goto t_16;
  h_4 :
  goto e_4;
  t_16 :
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
  p_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_7;
  y_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(n_4);
  goto q_16;
  n_4 :
  goto j_4;
  q_16 :
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
  m_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_7;
  o_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(p_4);
  goto n_16;
  p_4 :
  goto o_4;
  n_16 :
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
  s_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_7;
  k_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_4);
  goto t_15;
  r_4 :
  goto q_4;
  t_15 :
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
  o_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_7;
  a_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto p_15;
  t_4 :
  goto s_4;
  p_15 :
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
  k_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_6;
  e_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto l_15;
  v_4 :
  goto u_4;
  l_15 :
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
  g_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_6;
  a_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto h_15;
  x_4 :
  goto w_4;
  h_15 :
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
  w_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_5;
  w_5 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto x_14;
  z_4 :
  goto y_4;
  x_14 :
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
  s_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_5;
  s_5 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_5);
  goto t_14;
  b_5 :
  goto a_5;
  t_14 :
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
  p_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_5;
  p_5 :
  TestStr(1,1,"--version",&&fail);
  Rpush(e_5);
  goto q_14;
  e_5 :
  goto c_5;
  q_14 :
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
  m_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_5;
  m_5 :
  TestStr(1,1,"-v",&&fail);
  Rpush(h_5);
  goto n_14;
  h_5 :
  goto f_5;
  n_14 :
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
  j_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_5;
  j_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(k_5);
  goto k_14;
  k_5 :
  goto i_5;
  k_14 :
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
  g_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_5;
  g_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(n_5);
  goto h_14;
  n_5 :
  goto l_5;
  h_14 :
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
  c_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_5;
  d_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(q_5);
  goto e_14;
  q_5 :
  goto o_5;
  e_14 :
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

PROC(_stratego_x_28)
  Tdupl();
  r_5 :
  TestFunTop(a_0);
  Cpush(t_5);
  Arg(0);
  Cpush(x_5);
  Ccall(_stratego_y_28);
  goto v_5;
  x_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto z_16;
  z_16 :
  TestFunFC(c_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(b_6);
  goto d_17;
  b_6 :
  goto z_5;
  d_17 :
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
  Ccall(_stratego_z_28);
ENDPROC

PROC(_stratego_y_28)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_17;
  f_17 :
  TestFunFC(g_6,&&fail,Egetd(0,1));
  Rpush(f_6);
  goto i_17;
  f_6 :
  goto d_6;
  i_17 :
  Return();
  d_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_28)
  Epushd(0,1);
  Tdupl();
  Rpush(h_6);
  r_17 :
  Cpush(j_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_17;
  k_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_17;
  l_17 :
  TestFunFC(m_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_6);
  goto s_17;
  l_6 :
  goto k_6;
  s_17 :
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
  goto r_17;
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
  Ccall(_stratego_b_29);
  Tset(MakeInt(1));
  Ccall(_stratego_c_29);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_29)
  _ST_printnl();
ENDPROC

PROC(_stratego_c_29)
  _ST_exit();
ENDPROC

PROC(_stratego_d_29)
  Epushd(0,3);
  Tdupl();
  Cpush(q_6);
  Rpush(r_6);
  z_19 :
  Cpush(t_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_17;
  u_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_18;
  n_18 :
  TestFunFC(w_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_6);
  goto a_20;
  v_6 :
  goto u_6;
  a_20 :
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
  goto z_19;
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
  Ccall(_stratego_e_29);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_e_29)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_f_29)
  _ST_dtime();
ENDPROC

PROC(_stratego_g_29)
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
  goto i_20;
  i_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_20;
  j_20 :
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
  Ccall(_stratego_l_29);
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
  Ccall(_stratego_l_29);
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
  goto a_21;
  a_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_21;
  b_21 :
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
  Ccall(_stratego_h_29);
  OneNextSon();
  Ccall(_stratego_l_29);
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
  Ccall(_stratego_i_29);
  OneNextSon();
  Ccall(_stratego_l_29);
  AllBuild();
  AllBuild();
  goto z_7;
  n_7 :
  Cpop();
  z_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_29)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_i_29)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_j_29)
  Epushd(0,2);
  Tdupl();
  Cpush(b_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(d_8);
  Tdupl();
  Rpush(e_8);
  m_25 :
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
  goto o_25;
  i_8 :
  goto h_8;
  o_25 :
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
  goto m_25;
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
  Ccall(_stratego_l_29);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(n_8);
  p_25 :
  Cpush(r_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_23;
  f_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_24;
  c_24 :
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
  goto p_25;
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
  Ccall(_stratego_l_29);
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
  goto e_24;
  e_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_24;
  f_24 :
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
  Ccall(_stratego_l_29);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_b_29);
  goto a_8;
  b_8 :
  goto m_9;
  a_8 :
  Cpop();
  m_9 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_c_29);
  Epopd(0,2);
ENDPROC

PROC(_stratego_k_29)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_b_29);
  Tset(MakeInt(1));
  Ccall(_stratego_c_29);
ENDPROC

PROC(_stratego_l_29)
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

PROC(_stratego_m_29)
  Epushd(0,4);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_n_29);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_u_29);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,5);
  Ccall(_stratego_j_32);
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
  goto h_28;
  q_9 :
  goto p_9;
  h_28 :
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

PROC(_stratego_n_29)
  Tdupl();
  Tset(ATmakeString("symbol-table"));
  Ccall(_stratego_o_29);
  Tpop();
  Rpush(r_9);
  m_28 :
  Cpush(t_9);
  Ccall(_stratego_v_28);
  goto s_9;
  t_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_29);
  OneNextSon();
  Rpush(w_9);
  goto m_28;
  w_9 :
  AllBuild();
  goto v_9;
  s_9 :
  Cpop();
  v_9 :
  Return();
  r_9 :
ENDPROC

PROC(_stratego_o_29)
  _ST_create_table();
ENDPROC

PROC(_stratego_p_29)
  Epushd(0,4);
  MoveTop(0,1);
  goto s_28;
  s_28 :
  TestFunFC(z_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  goto a_29;
  a_29 :
  TestFunFC(w_0,&&fail,Egetd(0,3));
  Rpush(y_9);
  goto n_30;
  y_9 :
  goto x_9;
  n_30 :
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(App2("TCons",ATmakeString("_stratego_"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_r_29);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_q_29);
  NotNULLd(0,2);
  Tset(App1("PROCDECL",Egetd(0,2)));
  Epopd(1,1);
  Return();
  x_9 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_q_29)
  _ST_table_put();
ENDPROC

PROC(_stratego_r_29)
  Epushd(0,5);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_29);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_29);
  OneNextSon();
  Ccall(_stratego_l_29);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto q_30;
  q_30 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_30;
  r_30 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto t_30;
  t_30 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(c_10);
  goto t_31;
  c_10 :
  goto b_10;
  t_31 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(d_10);
  u_31 :
  Cpush(f_10);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_10);
  goto u_31;
  h_10 :
  AllBuild();
  goto e_10;
  f_10 :
  Ccall(_stratego_v_28);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto i_10;
  e_10 :
  Cpop();
  i_10 :
  Return();
  d_10 :
  Ccall(_stratego_t_29);
  Return();
  b_10 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_s_29)
  _ST_explode_string();
ENDPROC

PROC(_stratego_t_29)
  _ST_implode_string();
ENDPROC

PROC(_stratego_u_29)
  Rpush(j_10);
  y_31 :
  Cpush(l_10);
  Ccall(_stratego_v_28);
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
  Ccall(_stratego_v_29);
  goto n_10;
  p_10 :
  goto q_10;
  n_10 :
  Cpop();
  q_10 :
  Rpush(r_10);
  c_32 :
  Cpush(t_10);
  s_10 :
  Cpush(v_10);
  Ccall(_stratego_w_29);
  goto u_10;
  v_10 :
  Ccall(_stratego_i_30);
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
  goto c_32;
  a_11 :
  goto y_10;
  z_10 :
  AllBuild();
  Return();
  r_10 :
  Ccall(_stratego_a_32);
  Ccall(_stratego_b_32);
  Epopd(0,1);
  OneNextSon();
  Rpush(b_11);
  goto y_31;
  b_11 :
  AllBuild();
  goto m_10;
  k_10 :
  Cpop();
  m_10 :
  Return();
  j_10 :
ENDPROC

PROC(_stratego_v_29)
  Epushd(0,8);
  MoveTop(0,1);
  goto m_32;
  m_32 :
  TestFunFC(f_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  MoveArg(0,8,0,1,2);
  goto n_32;
  n_32 :
  TestFunFC(z_9,&&g_11,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  goto o_32;
  o_32 :
  TestFunFC(w_0,&&fail,Egetd(0,4));
  Rpush(e_11);
  goto k_33;
  g_11 :
  TestFunFC(h_11,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  MoveArg(0,6,0,2,3);
  goto s_32;
  s_32 :
  TestFunFC(w_0,&&fail,Egetd(0,5));
  Rpush(e_11);
  goto l_33;
  e_11 :
  goto d_11;
  l_33 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App3("Instr",App3("SDef",Egetd(0,4),App0("Nil"),Egetd(0,6)),Egetd(0,7),Egetd(0,8)));
  Return();
  d_11 :
  goto c_11;
  k_33 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App1("Block",App2("Cons",App1("PROC",Egetd(0,3)),App2("Cons",App3("Instr",Egetd(0,5),Egetd(0,7),Egetd(0,8)),App2("Cons",App0("ENDPROC"),App0("Nil"))))));
  Return();
  c_11 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_w_29)
  Cpush(j_11);
  Epushd(0,6);
  TestFunTop(f_11);
  TravInit();
  OneNextSon();
  Cpush(m_11);
  Epushd(1,1);
  TestFunTop(n_11);
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
  h_47 :
  Cpush(r_11);
  Epushd(2,5);
  MoveTop(2,1);
  goto o_33;
  o_33 :
  TestFunFC(v_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_33;
  p_33 :
  TestFunFC(v_11,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  Rpush(u_11);
  goto i_47;
  u_11 :
  goto t_11;
  i_47 :
  NotNULLd(2,2);
  NotNULLd(2,4);
  NotNULLd(2,5);
  Tset(App2("Seq",App2("Seq",Egetd(2,2),Egetd(2,4)),Egetd(2,5)));
  Rpush(w_11);
  goto h_47;
  w_11 :
  Return();
  t_11 :
  Epopd(2,5);
  goto q_11;
  r_11 :
  goto x_11;
  q_11 :
  Cpop();
  x_11 :
  Return();
  p_11 :
  TestFunTop(v_11);
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
  goto r_33;
  r_33 :
  TestFunFC(i_12,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(h_12);
  goto k_47;
  h_12 :
  goto f_12;
  k_47 :
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
  goto u_33;
  u_33 :
  TestFunFC(i_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(l_12);
  goto m_47;
  l_12 :
  goto k_12;
  m_47 :
  Move(1,1,2,2);
  Return();
  k_12 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_v_28);
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
  goto w_33;
  w_33 :
  TestFunFC(i_12,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(u_12);
  goto o_47;
  u_12 :
  goto t_12;
  o_47 :
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
  goto l_11;
  m_11 :
  Epushd(1,3);
  TestFunTop(n_11);
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
  r_47 :
  Cpush(z_12);
  Epushd(3,5);
  MoveTop(3,1);
  goto a_34;
  a_34 :
  TestFunFC(v_11,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto n_37;
  n_37 :
  TestFunFC(v_11,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(b_13);
  goto s_47;
  b_13 :
  goto a_13;
  s_47 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  NotNULLd(3,5);
  Tset(App2("Seq",App2("Seq",Egetd(3,2),Egetd(3,4)),Egetd(3,5)));
  Rpush(c_13);
  goto r_47;
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
  goto r_39;
  r_39 :
  TestFunFC(v_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto s_39;
  s_39 :
  TestFunFC(v_11,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,8,2,3,1);
  goto t_39;
  t_39 :
  TestFunFC(j_12,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto u_39;
  u_39 :
  TestFunFC(i_12,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  goto v_39;
  v_39 :
  TestFunFC(w_0,&&fail,Egetd(2,7));
  goto o_43;
  o_43 :
  TestFunFC(f_13,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  Rpush(e_13);
  goto t_47;
  e_13 :
  goto w_12;
  t_47 :
  Move(1,2,2,2);
  Move(1,1,2,6);
  Move(1,3,2,9);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  Tset(App2("Seq",App2("Seq",Egetd(1,2),App1("CountRule",Egetd(1,3))),App2("Call",App1("SVar",Egetd(1,1)),App0("Nil"))));
  TestFunTop(v_11);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  Cpush(g_13);
  Tdupl();
  Rpush(n_13);
  h_13 :
  Cpush(i_13);
  Epushd(4,2);
  MoveTop(4,1);
  goto q_37;
  q_37 :
  TestFunFC(i_12,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(q_13);
  goto v_47;
  q_13 :
  goto o_13;
  v_47 :
  Move(1,1,4,2);
  Return();
  o_13 :
  Epopd(4,2);
  Cpop();
  goto m_13;
  i_13 :
  IsAppl();
  MatchTravInit();
  j_13 :
  OneMatchNextSon();
  Cpush(j_13);
  Rpush(l_13);
  goto h_13;
  l_13 :
  Cpop();
  MatchTravEnd();
  m_13 :
  Return();
  n_13 :
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
  Cpush(r_13);
  Tdupl();
  Rpush(y_13);
  s_13 :
  Cpush(t_13);
  Epushd(3,2);
  MoveTop(3,1);
  goto q_43;
  q_43 :
  TestFunFC(i_12,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(b_14);
  goto y_47;
  b_14 :
  goto a_14;
  y_47 :
  Move(1,1,3,2);
  Return();
  a_14 :
  Epopd(3,2);
  Cpop();
  goto x_13;
  t_13 :
  IsAppl();
  MatchTravInit();
  v_13 :
  OneMatchNextSon();
  Cpush(v_13);
  Rpush(w_13);
  goto s_13;
  w_13 :
  Cpop();
  MatchTravEnd();
  x_13 :
  Return();
  y_13 :
  Cpop();
  Crestore();
  Cjump();
  r_13 :
  MoveTop(2,1);
  Move(0,2,2,1);
  Epopd(2,1);
  AllBuild();
  AllBuild();
  Epopd(1,3);
  goto v_12;
  l_11 :
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
  Ccall(_stratego_x_29);
  MoveTop(1,1);
  Move(0,5,1,1);
  Ccall(_stratego_x_29);
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
  Ccontinue(d_14);
  Ccall(_stratego_y_29);
  goto i_11;
  d_14 :
  Ccall(_stratego_e_30);
  goto f_14;
  i_11 :
  Cpop();
  f_14 :
ENDPROC

PROC(_stratego_x_29)
  _ST_new();
ENDPROC

PROC(_stratego_y_29)
  Epushd(0,9);
  TestFunTop(f_11);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  TestFunTop(n_11);
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
  Ccall(_stratego_d_30);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(i_14);
  TravInit();
  OneNextSon();
  TestFunTop(j_12);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto h_48;
  h_48 :
  TestFunFC(i_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(o_14);
  goto p_49;
  o_14 :
  goto l_14;
  p_49 :
  Move(1,1,2,2);
  Return();
  l_14 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_v_28);
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
  Ccall(_stratego_x_29);
  MoveTop(1,1);
  Move(0,4,1,1);
  Ccall(_stratego_x_29);
  MoveTop(1,2);
  Move(0,5,1,2);
  Ccall(_stratego_x_29);
  MoveTop(1,3);
  Move(0,6,1,3);
  Ccall(_stratego_x_29);
  MoveTop(1,4);
  Move(0,7,1,4);
  Ccall(_stratego_x_29);
  MoveTop(1,5);
  Move(0,8,1,5);
  Ccall(_stratego_x_29);
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

PROC(_stratego_d_30)
  Cpush(r_14);
  Tdupl();
  Rpush(b_15);
  u_14 :
  Cpush(v_14);
  Epushd(0,2);
  MoveTop(0,1);
  goto k_50;
  k_50 :
  TestFunFC(e_15,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_15);
  goto o_50;
  d_15 :
  goto c_15;
  o_50 :
  Return();
  c_15 :
  Epopd(0,2);
  Cpop();
  goto a_15;
  v_14 :
  IsAppl();
  MatchTravInit();
  y_14 :
  OneMatchNextSon();
  Cpush(y_14);
  Rpush(z_14);
  goto u_14;
  z_14 :
  Cpop();
  MatchTravEnd();
  a_15 :
  Return();
  b_15 :
  Cpop();
  Crestore();
  Cjump();
  r_14 :
ENDPROC

PROC(_stratego_e_30)
  Epushd(0,7);
  TestFunTop(f_11);
  TravInit();
  OneNextSon();
  Cpush(i_15);
  Epushd(1,1);
  TestFunTop(n_11);
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
  TestFunTop(j_15);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto r_50;
  r_50 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(n_15);
  goto x_52;
  n_15 :
  goto m_15;
  x_52 :
  Return();
  m_15 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_d_30);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_30);
  OneNextSon();
  Ccall(_stratego_v_28);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  TestFunTop(j_15);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto u_50;
  u_50 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(r_15);
  goto z_52;
  r_15 :
  goto q_15;
  z_52 :
  Return();
  q_15 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_30);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(j_12);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto w_50;
  w_50 :
  TestFunFC(i_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(v_15);
  goto a_53;
  v_15 :
  goto u_15;
  a_53 :
  Move(1,1,2,2);
  Return();
  u_15 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_v_28);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_v_28);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto f_15;
  i_15 :
  Epushd(1,1);
  TestFunTop(n_11);
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
  TestFunTop(v_11);
  TravInit();
  OneNextSon();
  TestFunTop(j_15);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto z_50;
  z_50 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(y_15);
  goto c_53;
  y_15 :
  goto x_15;
  c_53 :
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
  Ccall(_stratego_d_30);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_30);
  OneNextSon();
  Ccall(_stratego_v_28);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto c_51;
  c_51 :
  TestFunFC(b_16,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto d_51;
  d_51 :
  TestStr(2,2,"Cons",&&fail);
  Rpush(a_16);
  goto e_53;
  a_16 :
  goto z_15;
  e_53 :
  Return();
  z_15 :
  Epopd(2,2);
  AllBuild();
  OneNextSon();
  TestFunTop(v_11);
  TravInit();
  OneNextSon();
  TestFunTop(j_15);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto f_51;
  f_51 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(d_16);
  goto f_53;
  d_16 :
  goto c_16;
  f_53 :
  Return();
  c_16 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_30);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(j_12);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto h_51;
  h_51 :
  TestFunFC(i_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(f_16);
  goto g_53;
  f_16 :
  goto e_16;
  g_53 :
  Move(1,1,2,2);
  Return();
  e_16 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_v_28);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_v_28);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto j_51;
  j_51 :
  TestFunFC(b_16,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto k_51;
  k_51 :
  TestStr(2,2,"Cons",&&fail);
  Rpush(h_16);
  goto h_53;
  h_16 :
  goto g_16;
  h_53 :
  Return();
  g_16 :
  Epopd(2,2);
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto w_15;
  f_15 :
  Cpop();
  w_15 :
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
  Ccall(_stratego_x_29);
  MoveTop(1,1);
  Move(0,4,1,1);
  Ccall(_stratego_x_29);
  MoveTop(1,2);
  Move(0,5,1,2);
  Ccall(_stratego_x_29);
  MoveTop(1,3);
  Move(0,6,1,3);
  Tset(App2("AFun",ATmakeString("Cons"),MakeInt(2)));
  Ccall(_stratego_g_30);
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

PROC(_stratego_f_30)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_53;
  p_53 :
  TestFunFC(k_16,&&fail,Egetd(0,1));
  Rpush(j_16);
  goto r_53;
  j_16 :
  goto i_16;
  r_53 :
  Return();
  i_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_30)
  Epushd(0,3);
  MoveTop(0,1);
  goto v_53;
  v_53 :
  TestFunFC(r_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(o_16);
  goto e_54;
  o_16 :
  goto l_16;
  e_54 :
  Epushd(1,1);
  Tdupl();
  Cpush(x_16);
  Epushd(2,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(0,2),Egetd(0,3)),App0("TNil"))));
  Ccall(_stratego_h_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  goto u_16;
  x_16 :
  Epushd(2,1);
  Ccall(_stratego_x_29);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(0,2),Egetd(0,3)),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_q_29);
  Epopd(2,1);
  goto y_16;
  u_16 :
  Cpop();
  y_16 :
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  l_16 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_h_30)
  _ST_table_get();
ENDPROC

PROC(_stratego_i_30)
  Cpush(g_17);
  Epushd(0,15);
  MoveTop(0,10);
  goto l_64;
  l_64 :
  TestFunFC(w_19,&&v_19,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  MoveArg(0,3,0,10,3);
  goto m_64;
  m_64 :
  TestFunFC(b_20,&&y_19,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(d_20);
  Rpush(e_20);
  goto w_87;
  e_20 :
  goto c_20;
  d_20 :
  Rpush(g_20);
  goto z_87;
  g_20 :
  goto f_20;
  c_20 :
  Cpop();
  f_20 :
  goto t_19;
  y_19 :
  TestFunFC(o_11,&&x_19,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(k_20);
  Rpush(l_20);
  goto y_87;
  l_20 :
  goto h_20;
  k_20 :
  Rpush(n_20);
  goto z_87;
  n_20 :
  goto m_20;
  h_20 :
  Cpop();
  m_20 :
  goto t_19;
  x_19 :
  Rpush(t_19);
  goto z_87;
  v_19 :
  TestFunFC(p_20,&&o_20,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  MoveArg(0,3,0,10,3);
  MoveArg(0,4,0,10,4);
  MoveArg(0,5,0,10,5);
  goto n_64;
  n_64 :
  TestFunFC(w_0,&&q_20,Egetd(0,11));
  Rpush(t_19);
  goto d_89;
  q_20 :
  TestFunFC(a_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto o_64;
  o_64 :
  TestFunFC(r_20,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  MoveArg(0,9,0,12,1);
  MoveArg(0,2,0,12,2);
  goto p_64;
  p_64 :
  TestFunFC(w_0,&&s_20,Egetd(0,13));
  Cpush(u_20);
  Rpush(v_20);
  goto e_89;
  v_20 :
  goto t_20;
  u_20 :
  Rpush(x_20);
  goto z_89;
  x_20 :
  goto w_20;
  t_20 :
  Cpop();
  w_20 :
  goto t_19;
  s_20 :
  Rpush(t_19);
  goto z_89;
  o_20 :
  TestFunFC(f_11,&&y_20,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  goto q_64;
  q_64 :
  TestFunFC(k_16,&&z_20,Egetd(0,11));
  Rpush(t_19);
  goto m_87;
  z_20 :
  TestFunFC(e_21,&&d_21,Egetd(0,11));
  Rpush(t_19);
  goto n_87;
  d_21 :
  TestFunFC(l_21,&&j_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto o_87;
  j_21 :
  TestFunFC(n_21,&&m_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto p_87;
  m_21 :
  TestFunFC(v_11,&&o_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto r_87;
  o_21 :
  TestFunFC(o_11,&&p_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto s_87;
  p_21 :
  TestFunFC(b_20,&&q_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto t_87;
  q_21 :
  TestFunFC(s_21,&&r_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto r_64;
  r_64 :
  TestFunFC(t_21,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  Rpush(t_19);
  goto d_88;
  r_21 :
  TestFunFC(v_21,&&u_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto s_64;
  s_64 :
  TestFunFC(t_21,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  goto t_64;
  t_64 :
  TestFunFC(t_21,&&w_21,Egetd(0,13));
  MoveArg(0,1,0,13,0);
  Cpush(y_21);
  Rpush(z_21);
  goto k_88;
  z_21 :
  goto x_21;
  y_21 :
  Rpush(b_22);
  goto x_88;
  b_22 :
  goto a_22;
  x_21 :
  Cpop();
  a_22 :
  goto t_19;
  w_21 :
  Rpush(t_19);
  goto x_88;
  u_21 :
  TestFunFC(d_22,&&c_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  MoveArg(0,7,0,11,3);
  Rpush(t_19);
  goto b_89;
  c_22 :
  TestFunFC(n_11,&&e_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto t_90;
  e_22 :
  TestFunFC(j_12,&&f_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto u_64;
  u_64 :
  TestFunFC(i_12,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  goto v_64;
  v_64 :
  TestFunFC(w_0,&&fail,Egetd(0,13));
  Cpush(h_22);
  Rpush(i_22);
  goto v_90;
  i_22 :
  goto g_22;
  h_22 :
  Rpush(p_22);
  goto x_90;
  p_22 :
  goto o_22;
  g_22 :
  Cpop();
  o_22 :
  goto t_19;
  f_22 :
  TestFunFC(r_22,&&q_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto z_90;
  q_22 :
  TestFunFC(z_9,&&s_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  goto w_64;
  w_64 :
  TestFunFC(w_0,&&fail,Egetd(0,13));
  Rpush(t_19);
  goto b_91;
  s_22 :
  TestFunFC(h_11,&&u_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  MoveArg(0,7,0,11,3);
  goto x_64;
  x_64 :
  TestFunFC(w_0,&&fail,Egetd(0,6));
  Rpush(t_19);
  goto c_91;
  u_22 :
  TestFunFC(w_22,&&v_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto d_91;
  v_22 :
  TestFunFC(j_15,&&x_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto e_91;
  x_22 :
  TestFunFC(z_22,&&y_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto h_91;
  y_22 :
  TestFunFC(e_23,&&b_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto y_64;
  y_64 :
  TestFunFC(w_0,&&g_23,Egetd(0,12));
  Rpush(t_19);
  goto i_91;
  g_23 :
  TestFunFC(a_0,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  MoveArg(0,9,0,12,1);
  Rpush(t_19);
  goto j_91;
  b_23 :
  TestFunFC(i_23,&&h_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto k_91;
  h_23 :
  TestFunFC(i_14,&&j_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto n_91;
  j_23 :
  TestFunFC(l_23,&&k_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto q_91;
  k_23 :
  TestFunFC(n_23,&&m_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto t_91;
  m_23 :
  TestFunFC(p_23,&&o_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto w_91;
  o_23 :
  TestFunFC(r_23,&&q_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto z_91;
  q_23 :
  TestFunFC(t_23,&&s_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto a_92;
  s_23 :
  TestFunFC(v_23,&&u_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto b_92;
  u_23 :
  TestFunFC(b_16,&&w_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto c_92;
  w_23 :
  TestFunFC(e_15,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto d_92;
  y_20 :
  TestFunFC(x_23,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  goto z_64;
  z_64 :
  TestFunFC(z_23,&&y_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto q_92;
  y_23 :
  TestFunFC(b_24,&&a_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto r_92;
  a_24 :
  TestFunFC(i_24,&&d_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto s_92;
  d_24 :
  TestFunFC(t_21,&&j_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto t_92;
  j_24 :
  TestFunFC(l_24,&&k_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(t_19);
  goto b_93;
  k_24 :
  TestFunFC(n_24,&&m_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto c_93;
  m_24 :
  TestFunFC(o_24,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(t_19);
  goto j_93;
  t_19 :
  goto s_19;
  j_93 :
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compiler.r: App encountered"),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_b_29);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,13);
  Tset(App1("AppEncountered",App2("App",Egetd(0,12),Egetd(0,13))));
  Return();
  s_19 :
  goto r_19;
  c_93 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_i_31);
  Ccall(_stratego_j_31);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",ATmakeString("App"),App2("TCons",Egetd(2,1),App0("TNil"))));
  Ccall(_stratego_r_29);
  MoveTop(2,2);
  Move(1,1,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Rpush(p_24);
  f_93 :
  Cpush(r_24);
  Ccall(_stratego_v_28);
  goto q_24;
  r_24 :
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
  Rpush(z_24);
  goto f_93;
  z_24 :
  AllBuild();
  goto y_24;
  q_24 :
  Cpop();
  y_24 :
  Return();
  p_24 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,12);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",App2("Cons",Egetd(0,12),Egetd(1,2)),App0("TNil"))));
  _ST_mkterm();
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Epopd(1,3);
  Return();
  r_19 :
  goto p_19;
  b_93 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("BuildTerm",Egetd(0,12),Egetd(0,14),Egetd(0,15)));
  Return();
  p_19 :
  goto o_19;
  t_92 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,12);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,12),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto y_63;
  y_63 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto z_63;
  z_63 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto a_64;
  a_64 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(b_25);
  goto u_92;
  b_25 :
  goto a_25;
  u_92 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(c_25);
  v_92 :
  Cpush(e_25);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto p_63;
  p_63 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto q_63;
  q_63 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto s_63;
  s_63 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(j_25);
  goto w_92;
  j_25 :
  goto i_25;
  w_92 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_g_31);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto m_63;
  m_63 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto n_63;
  n_63 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto o_63;
  o_63 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(q_25);
  goto y_92;
  q_25 :
  goto n_25;
  y_92 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  n_25 :
  Epopd(5,6);
  Return();
  i_25 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto d_25;
  e_25 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_25);
  goto v_92;
  s_25 :
  AllBuild();
  goto r_25;
  d_25 :
  Cpop();
  r_25 :
  Return();
  c_25 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto v_63;
  v_63 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_63;
  w_63 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto x_63;
  x_63 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(u_25);
  goto z_92;
  u_25 :
  goto t_25;
  z_92 :
  Move(1,1,3,4);
  Move(1,2,3,6);
  Cpush(w_25);
  NotNULLd(1,1);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,15),App0("TNil"))));
  Ccall(_stratego_h_31);
  NotNULLd(1,2);
  Tset(App1("Eget",Egetd(1,2)));
  goto v_25;
  w_25 :
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Egetd",Egetd(1,1),Egetd(1,2)));
  Tdupl();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Egetd",Egetd(1,1),Egetd(1,2)));
  MoveTop(1,3);
  Tpop();
  goto x_25;
  v_25 :
  Cpop();
  x_25 :
  Return();
  t_25 :
  Epopd(3,7);
  Return();
  a_25 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Epopd(1,3);
  Return();
  o_19 :
  goto n_19;
  s_92 :
  NotNULLd(0,12);
  Tset(App1("ATmakeReal",Egetd(0,12)));
  Return();
  n_19 :
  goto m_19;
  r_92 :
  NotNULLd(0,12);
  Tset(App1("MakeInt",Egetd(0,12)));
  Return();
  m_19 :
  goto k_19;
  q_92 :
  NotNULLd(0,12);
  Tset(App1("ATmakeString",Egetd(0,12)));
  Return();
  k_19 :
  goto j_19;
  d_92 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_c_31);
  Rpush(y_25);
  e_92 :
  Cpush(a_26);
  Ccall(_stratego_v_28);
  goto z_25;
  a_26 :
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
  goto e_63;
  e_63 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto f_63;
  f_63 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto g_63;
  g_63 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(d_26);
  goto h_92;
  d_26 :
  goto c_26;
  h_92 :
  Epushd(5,7);
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(e_26);
  i_92 :
  Cpush(g_26);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,5);
  MoveTop(6,1);
  goto v_62;
  v_62 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto w_62;
  w_62 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto x_62;
  x_62 :
  TestFunFC(s_0,&&fail,Egetd(6,5));
  Rpush(i_26);
  goto j_92;
  i_26 :
  goto h_26;
  j_92 :
  Epushd(7,6);
  NotNULLd(4,2);
  NotNULLd(6,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(6,4),App0("TNil"))));
  Ccall(_stratego_g_31);
  MoveTop(7,1);
  NotNULLd(6,2);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(7,1),App0("TNil"))));
  MoveTop(7,2);
  goto s_62;
  s_62 :
  TestFunFC(p_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto t_62;
  t_62 :
  TestFunFC(p_0,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto u_62;
  u_62 :
  TestFunFC(s_0,&&fail,Egetd(7,6));
  Rpush(k_26);
  goto l_92;
  k_26 :
  goto j_26;
  l_92 :
  Move(5,1,7,3);
  Move(5,2,7,5);
  Return();
  j_26 :
  Epopd(7,6);
  Return();
  h_26 :
  Epopd(6,5);
  OneNextSon();
  AllBuild();
  goto f_26;
  g_26 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_26);
  goto i_92;
  n_26 :
  AllBuild();
  goto l_26;
  f_26 :
  Cpop();
  l_26 :
  Return();
  e_26 :
  Tpop();
  NotNULLd(5,1);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,3);
  goto b_63;
  b_63 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto c_63;
  c_63 :
  TestFunFC(p_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto d_63;
  d_63 :
  TestFunFC(s_0,&&fail,Egetd(5,7));
  Rpush(p_26);
  goto m_92;
  p_26 :
  goto o_26;
  m_92 :
  Move(3,2,5,4);
  Move(3,3,5,6);
  Cpush(w_26);
  NotNULLd(3,2);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(0,15),App0("TNil"))));
  Ccall(_stratego_h_31);
  NotNULLd(3,3);
  Tset(App1("NotNULL",Egetd(3,3)));
  goto s_26;
  w_26 :
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("NotNULLd",Egetd(3,2),Egetd(3,3)));
  Tdupl();
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("NotNULLd",Egetd(3,2),Egetd(3,3)));
  MoveTop(3,4);
  Tpop();
  goto x_26;
  s_26 :
  Cpop();
  x_26 :
  Return();
  o_26 :
  Epopd(5,7);
  Return();
  c_26 :
  Epopd(4,5);
  Tpop();
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Epopd(3,4);
  OneNextSon();
  Rpush(y_26);
  goto e_92;
  y_26 :
  AllBuild();
  goto b_26;
  z_25 :
  Cpop();
  b_26 :
  Return();
  y_25 :
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
  j_19 :
  goto i_19;
  c_92 :
  NotNULLd(0,12);
  Tset(App1("ICountRule",Egetd(0,12)));
  Return();
  i_19 :
  goto h_19;
  b_92 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  Tset(App2("Iprim2",Egetd(0,12),Egetd(0,13)));
  Return();
  h_19 :
  goto g_19;
  a_92 :
  NotNULLd(0,12);
  Tset(App1("Iprim",Egetd(0,12)));
  Return();
  g_19 :
  goto f_19;
  z_91 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Tpop"),App0("Nil"))))));
  Return();
  f_19 :
  goto e_19;
  w_91 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_i_31);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(0,15),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_b_31);
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
  e_19 :
  goto d_19;
  t_91 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_x_29);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_x_29);
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
  d_19 :
  goto c_19;
  q_91 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_x_29);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_x_29);
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
  c_19 :
  goto z_18;
  n_91 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_x_29);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_x_29);
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
  z_18 :
  goto x_18;
  k_91 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_x_29);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_x_29);
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
  goto w_18;
  j_91 :
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("OneNextSon"),App2("Cons",App3("Instr",Egetd(0,8),Egetd(0,14),Egetd(0,15)),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,9)),Egetd(0,14),Egetd(0,15)),App0("Nil"))))));
  Return();
  w_18 :
  goto v_18;
  i_91 :
  Tset(App1("Block",App0("Nil")));
  Return();
  v_18 :
  goto u_18;
  h_91 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("TravInit"),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,12)),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("AllBuild"),App0("Nil"))))));
  Return();
  u_18 :
  goto s_18;
  e_91 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_i_31);
  MoveTop(2,1);
  NotNULLd(0,12);
  NotNULLd(2,1);
  Tset(App2("AFun",Egetd(0,12),Egetd(2,1)));
  Ccall(_stratego_g_30);
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
  d_91 :
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(0,12);
  Tset(App1("Block",App2("Cons",App1("TpushIthSon",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,13),Egetd(0,14),Egetd(0,15)),App2("Cons",App1("TputIthSon",Egetd(0,12)),App0("Nil"))))));
  Return();
  r_18 :
  goto q_18;
  c_91 :
  NotNULLd(0,13);
  NotNULLd(0,7);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App3("SDef",Egetd(0,13),App0("Nil"),Egetd(0,7)),Egetd(0,14),Egetd(0,15)));
  Return();
  q_18 :
  goto p_18;
  b_91 :
  NotNULLd(0,12);
  NotNULLd(0,6);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App1("Label",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,6),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Return"),App0("Nil"))))));
  Return();
  p_18 :
  goto o_18;
  z_90 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_x_29);
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
  o_18 :
  goto m_18;
  x_90 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Cpush(z_26);
  Tdupl();
  Ccall(_stratego_a_31);
  Cpop();
  Crestore();
  Cjump();
  z_26 :
  Ccall(_stratego_x_29);
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
  v_90 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Ccall(_stratego_a_31);
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
  t_90 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_x_29);
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
  z_89 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  MoveTop(2,1);
  goto u_61;
  u_61 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(b_27);
  goto a_90;
  b_27 :
  goto a_27;
  a_90 :
  Epushd(3,2);
  Ccall(_stratego_x_29);
  MoveTop(3,1);
  Move(1,1,3,1);
  NotNULLd(0,9);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,9),App0("TNil"))));
  Rpush(c_27);
  d_90 :
  Epushd(4,7);
  MoveTop(4,1);
  goto o_61;
  o_61 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto p_61;
  p_61 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,7,4,3,1);
  goto q_61;
  q_61 :
  TestFunFC(w_0,&&m_27,Egetd(4,4));
  goto r_61;
  r_61 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(l_27);
  goto e_90;
  m_27 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto s_61;
  s_61 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(l_27);
  goto f_90;
  l_27 :
  goto k_27;
  f_90 :
  Epushd(5,6);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_z_30);
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
  goto g_61;
  g_61 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto h_61;
  h_61 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,6,6,3,1);
  goto i_61;
  i_61 :
  TestFunFC(t_21,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  goto j_61;
  j_61 :
  TestFunFC(s_0,&&fail,Egetd(6,6));
  Rpush(p_27);
  goto h_90;
  p_27 :
  goto o_27;
  h_90 :
  Epushd(7,4);
  Tdupl();
  Epushd(8,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  NotNULLd(6,5);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(6,5),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(8,1);
  goto c_61;
  c_61 :
  TestFunFC(p_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto e_61;
  e_61 :
  TestFunFC(p_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto f_61;
  f_61 :
  TestFunFC(s_0,&&fail,Egetd(8,5));
  Rpush(u_27);
  goto j_90;
  u_27 :
  goto q_27;
  j_90 :
  Epushd(9,7);
  Tdupl();
  NotNULLd(8,4);
  Tset(Egetd(8,4));
  Rpush(v_27);
  k_90 :
  Cpush(x_27);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(10,5);
  MoveTop(10,1);
  goto r_60;
  r_60 :
  TestFunFC(p_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  goto s_60;
  s_60 :
  TestFunFC(p_0,&&fail,Egetd(10,3));
  MoveArg(10,4,10,3,0);
  MoveArg(10,5,10,3,1);
  goto t_60;
  t_60 :
  TestFunFC(s_0,&&fail,Egetd(10,5));
  Rpush(b_28);
  goto l_90;
  b_28 :
  goto a_28;
  l_90 :
  Epushd(11,6);
  NotNULLd(8,2);
  NotNULLd(10,4);
  Tset(App2("TCons",Egetd(8,2),App2("TCons",Egetd(10,4),App0("TNil"))));
  Ccall(_stratego_g_31);
  MoveTop(11,1);
  NotNULLd(10,2);
  NotNULLd(11,1);
  Tset(App2("TCons",Egetd(10,2),App2("TCons",Egetd(11,1),App0("TNil"))));
  MoveTop(11,2);
  goto o_60;
  o_60 :
  TestFunFC(p_0,&&fail,Egetd(11,2));
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  goto p_60;
  p_60 :
  TestFunFC(p_0,&&fail,Egetd(11,4));
  MoveArg(11,5,11,4,0);
  MoveArg(11,6,11,4,1);
  goto q_60;
  q_60 :
  TestFunFC(s_0,&&fail,Egetd(11,6));
  Rpush(g_28);
  goto n_90;
  g_28 :
  goto f_28;
  n_90 :
  Move(9,1,11,3);
  Move(9,2,11,5);
  Return();
  f_28 :
  Epopd(11,6);
  Return();
  a_28 :
  Epopd(10,5);
  OneNextSon();
  AllBuild();
  goto w_27;
  x_27 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_28);
  goto k_90;
  j_28 :
  AllBuild();
  goto i_28;
  w_27 :
  Cpop();
  i_28 :
  Return();
  v_27 :
  Tpop();
  NotNULLd(9,1);
  NotNULLd(9,2);
  Tset(App2("TCons",Egetd(9,1),App2("TCons",Egetd(9,2),App0("TNil"))));
  MoveTop(9,3);
  goto z_60;
  z_60 :
  TestFunFC(p_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto a_61;
  a_61 :
  TestFunFC(p_0,&&fail,Egetd(9,5));
  MoveArg(9,6,9,5,0);
  MoveArg(9,7,9,5,1);
  goto b_61;
  b_61 :
  TestFunFC(s_0,&&fail,Egetd(9,7));
  Rpush(l_28);
  goto o_90;
  l_28 :
  goto k_28;
  o_90 :
  Epushd(10,5);
  Move(7,1,9,4);
  Move(7,2,9,6);
  NotNULLd(0,14);
  Tset(Egetd(0,14));
  MoveTop(10,1);
  goto w_60;
  w_60 :
  TestFunFC(p_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  goto x_60;
  x_60 :
  TestFunFC(p_0,&&fail,Egetd(10,3));
  MoveArg(10,4,10,3,0);
  MoveArg(10,5,10,3,1);
  goto y_60;
  y_60 :
  TestFunFC(s_0,&&fail,Egetd(10,5));
  Rpush(o_28);
  goto p_90;
  o_28 :
  goto n_28;
  p_90 :
  Move(7,3,10,2);
  Move(7,4,10,4);
  Return();
  n_28 :
  Epopd(10,5);
  Return();
  k_28 :
  Epopd(9,7);
  Return();
  q_27 :
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
  o_27 :
  Epopd(6,6);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(p_28);
  goto d_90;
  p_28 :
  OneNextSon();
  Ccall(_stratego_l_29);
  AllBuild();
  AllBuild();
  MoveTop(5,2);
  goto l_61;
  l_61 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto m_61;
  m_61 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto n_61;
  n_61 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(q_28);
  goto q_90;
  q_28 :
  goto n_27;
  q_90 :
  NotNULLd(5,3);
  NotNULLd(5,5);
  Tset(App2("Cons",Egetd(5,3),Egetd(5,5)));
  Return();
  n_27 :
  Epopd(5,6);
  Return();
  k_27 :
  goto d_27;
  e_90 :
  Tset(App0("Nil"));
  Return();
  d_27 :
  Epopd(4,7);
  Return();
  c_27 :
  MoveTop(3,2);
  Move(1,2,3,2);
  Epopd(3,2);
  Return();
  a_27 :
  Epopd(2,3);
  Tpop();
  NotNULLd(0,14);
  NotNULLd(0,8);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",Egetd(0,8),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_s_30);
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
  e_89 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,9);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,9),App0("TNil"))));
  Rpush(r_28);
  g_89 :
  Epushd(3,7);
  MoveTop(3,1);
  goto v_59;
  v_59 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto w_59;
  w_59 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,7,3,3,1);
  goto x_59;
  x_59 :
  TestFunFC(w_0,&&k_30,Egetd(3,4));
  goto y_59;
  y_59 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(j_30);
  goto h_89;
  k_30 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto z_59;
  z_59 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(j_30);
  goto i_89;
  j_30 :
  goto u_28;
  i_89 :
  Epushd(4,6);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_z_30);
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
  goto n_59;
  n_59 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto o_59;
  o_59 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,6,5,3,1);
  goto p_59;
  p_59 :
  TestFunFC(t_21,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  goto q_59;
  q_59 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(p_30);
  goto k_89;
  p_30 :
  goto o_30;
  k_89 :
  Epushd(6,4);
  Tdupl();
  Epushd(7,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  NotNULLd(5,5);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(5,5),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(7,1);
  goto k_59;
  k_59 :
  TestFunFC(p_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto l_59;
  l_59 :
  TestFunFC(p_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto m_59;
  m_59 :
  TestFunFC(s_0,&&fail,Egetd(7,5));
  Rpush(s_31);
  goto m_89;
  s_31 :
  goto r_31;
  m_89 :
  Epushd(8,7);
  Tdupl();
  NotNULLd(7,4);
  Tset(Egetd(7,4));
  Rpush(v_31);
  n_89 :
  Cpush(z_31);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(9,5);
  MoveTop(9,1);
  goto z_58;
  z_58 :
  TestFunFC(p_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  goto a_59;
  a_59 :
  TestFunFC(p_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto b_59;
  b_59 :
  TestFunFC(s_0,&&fail,Egetd(9,5));
  Rpush(g_32);
  goto o_89;
  g_32 :
  goto f_32;
  o_89 :
  Epushd(10,6);
  NotNULLd(7,2);
  NotNULLd(9,4);
  Tset(App2("TCons",Egetd(7,2),App2("TCons",Egetd(9,4),App0("TNil"))));
  Ccall(_stratego_g_31);
  MoveTop(10,1);
  NotNULLd(9,2);
  NotNULLd(10,1);
  Tset(App2("TCons",Egetd(9,2),App2("TCons",Egetd(10,1),App0("TNil"))));
  MoveTop(10,2);
  goto w_58;
  w_58 :
  TestFunFC(p_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto x_58;
  x_58 :
  TestFunFC(p_0,&&fail,Egetd(10,4));
  MoveArg(10,5,10,4,0);
  MoveArg(10,6,10,4,1);
  goto y_58;
  y_58 :
  TestFunFC(s_0,&&fail,Egetd(10,6));
  Rpush(i_32);
  goto s_89;
  i_32 :
  goto h_32;
  s_89 :
  Move(8,1,10,3);
  Move(8,2,10,5);
  Return();
  h_32 :
  Epopd(10,6);
  Return();
  f_32 :
  Epopd(9,5);
  OneNextSon();
  AllBuild();
  goto x_31;
  z_31 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_32);
  goto n_89;
  l_32 :
  AllBuild();
  goto k_32;
  x_31 :
  Cpop();
  k_32 :
  Return();
  v_31 :
  Tpop();
  NotNULLd(8,1);
  NotNULLd(8,2);
  Tset(App2("TCons",Egetd(8,1),App2("TCons",Egetd(8,2),App0("TNil"))));
  MoveTop(8,3);
  goto h_59;
  h_59 :
  TestFunFC(p_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto i_59;
  i_59 :
  TestFunFC(p_0,&&fail,Egetd(8,5));
  MoveArg(8,6,8,5,0);
  MoveArg(8,7,8,5,1);
  goto j_59;
  j_59 :
  TestFunFC(s_0,&&fail,Egetd(8,7));
  Rpush(c_33);
  goto t_89;
  c_33 :
  goto b_33;
  t_89 :
  Epushd(9,5);
  Move(6,1,8,4);
  Move(6,2,8,6);
  NotNULLd(0,14);
  Tset(Egetd(0,14));
  MoveTop(9,1);
  goto e_59;
  e_59 :
  TestFunFC(p_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  goto f_59;
  f_59 :
  TestFunFC(p_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto g_59;
  g_59 :
  TestFunFC(s_0,&&fail,Egetd(9,5));
  Rpush(e_33);
  goto u_89;
  e_33 :
  goto d_33;
  u_89 :
  Move(6,3,9,2);
  Move(6,4,9,4);
  Return();
  d_33 :
  Epopd(9,5);
  Return();
  b_33 :
  Epopd(8,7);
  Return();
  r_31 :
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
  o_30 :
  Epopd(5,6);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(f_33);
  goto g_89;
  f_33 :
  OneNextSon();
  Ccall(_stratego_l_29);
  AllBuild();
  AllBuild();
  MoveTop(4,2);
  goto s_59;
  s_59 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto t_59;
  t_59 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto u_59;
  u_59 :
  TestFunFC(s_0,&&fail,Egetd(4,6));
  Rpush(g_33);
  goto v_89;
  g_33 :
  goto m_30;
  v_89 :
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("Cons",Egetd(4,3),Egetd(4,5)));
  Return();
  m_30 :
  Epopd(4,6);
  Return();
  u_28 :
  goto t_28;
  h_89 :
  Tset(App0("Nil"));
  Return();
  t_28 :
  Epopd(3,7);
  Return();
  r_28 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,14);
  NotNULLd(0,8);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,15),App0("TNil")))));
  Ccall(_stratego_s_30);
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
  d_89 :
  Tset(App1("Block",App0("Nil")));
  Return();
  h_18 :
  goto g_18;
  b_89 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_x_29);
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
  x_88 :
  Tdupl();
  Epushd(1,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  MoveTop(1,2);
  goto k_58;
  k_58 :
  TestFunFC(n_24,&&n_33,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,1,1,2,1);
  Rpush(m_33);
  goto y_88;
  n_33 :
  TestFunFC(b_24,&&q_33,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_33);
  goto z_88;
  q_33 :
  TestFunFC(z_23,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_33);
  goto a_89;
  m_33 :
  goto j_33;
  a_89 :
  Return();
  j_33 :
  goto i_33;
  z_88 :
  Return();
  i_33 :
  goto h_33;
  y_88 :
  Return();
  h_33 :
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
  k_88 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,8);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto e_58;
  e_58 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto f_58;
  f_58 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto g_58;
  g_58 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(t_33);
  goto l_88;
  t_33 :
  goto s_33;
  l_88 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(v_33);
  m_88 :
  Cpush(y_33);
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
  Rpush(b_34);
  goto n_88;
  b_34 :
  goto z_33;
  n_88 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_g_31);
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
  Rpush(d_34);
  goto p_88;
  d_34 :
  goto c_34;
  p_88 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  c_34 :
  Epopd(5,6);
  Return();
  z_33 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto x_33;
  y_33 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_34);
  goto m_88;
  f_34 :
  AllBuild();
  goto e_34;
  x_33 :
  Cpop();
  e_34 :
  Return();
  v_33 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto b_58;
  b_58 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto c_58;
  c_58 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto d_58;
  d_58 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(h_34);
  goto q_88;
  h_34 :
  goto g_34;
  q_88 :
  Epushd(4,5);
  Move(1,1,3,4);
  Move(1,2,3,6);
  NotNULLd(0,1);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(4,1);
  goto y_57;
  y_57 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto z_57;
  z_57 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto a_58;
  a_58 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(j_34);
  goto r_88;
  j_34 :
  goto i_34;
  r_88 :
  Epushd(5,7);
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(k_34);
  s_88 :
  Cpush(m_34);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,5);
  MoveTop(6,1);
  goto r_57;
  r_57 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto s_57;
  s_57 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto t_57;
  t_57 :
  TestFunFC(s_0,&&fail,Egetd(6,5));
  Rpush(o_34);
  goto t_88;
  o_34 :
  goto n_34;
  t_88 :
  Epushd(7,6);
  NotNULLd(4,2);
  NotNULLd(6,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(6,4),App0("TNil"))));
  Ccall(_stratego_g_31);
  MoveTop(7,1);
  NotNULLd(6,2);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(7,1),App0("TNil"))));
  MoveTop(7,2);
  goto o_57;
  o_57 :
  TestFunFC(p_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto p_57;
  p_57 :
  TestFunFC(p_0,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto q_57;
  q_57 :
  TestFunFC(s_0,&&fail,Egetd(7,6));
  Rpush(q_34);
  goto v_88;
  q_34 :
  goto p_34;
  v_88 :
  Move(5,1,7,3);
  Move(5,2,7,5);
  Return();
  p_34 :
  Epopd(7,6);
  Return();
  n_34 :
  Epopd(6,5);
  OneNextSon();
  AllBuild();
  goto l_34;
  m_34 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_34);
  goto s_88;
  s_34 :
  AllBuild();
  goto r_34;
  l_34 :
  Cpop();
  r_34 :
  Return();
  k_34 :
  Tpop();
  NotNULLd(5,1);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,3);
  goto v_57;
  v_57 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto w_57;
  w_57 :
  TestFunFC(p_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto x_57;
  x_57 :
  TestFunFC(s_0,&&fail,Egetd(5,7));
  Rpush(u_34);
  goto w_88;
  u_34 :
  goto t_34;
  w_88 :
  Move(1,3,5,4);
  Move(1,4,5,6);
  Return();
  t_34 :
  Epopd(5,7);
  Return();
  i_34 :
  Epopd(4,5);
  Return();
  g_34 :
  Epopd(3,7);
  Return();
  s_33 :
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
  d_88 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,8);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto w_56;
  w_56 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto x_56;
  x_56 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto y_56;
  y_56 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(w_34);
  goto e_88;
  w_34 :
  goto v_34;
  e_88 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(x_34);
  f_88 :
  Cpush(z_34);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto p_56;
  p_56 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto q_56;
  q_56 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto r_56;
  r_56 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(b_35);
  goto g_88;
  b_35 :
  goto a_35;
  g_88 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_g_31);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto m_56;
  m_56 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto n_56;
  n_56 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto o_56;
  o_56 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(d_35);
  goto i_88;
  d_35 :
  goto c_35;
  i_88 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  c_35 :
  Epopd(5,6);
  Return();
  a_35 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto y_34;
  z_34 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_35);
  goto f_88;
  f_35 :
  AllBuild();
  goto e_35;
  y_34 :
  Cpop();
  e_35 :
  Return();
  x_34 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto t_56;
  t_56 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto u_56;
  u_56 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto v_56;
  v_56 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(h_35);
  goto j_88;
  h_35 :
  goto g_35;
  j_88 :
  Move(1,1,3,4);
  Move(1,2,3,6);
  Return();
  g_35 :
  Epopd(3,7);
  Return();
  v_34 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("MoveTop",Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  d_18 :
  goto c_18;
  z_87 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Cpush(i_35);
  Tdupl();
  Epushd(3,3);
  NotNULLd(0,11);
  Tset(Egetd(0,11));
  MoveTop(3,1);
  goto g_56;
  g_56 :
  TestFunFC(b_20,&&m_35,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_35);
  goto a_88;
  m_35 :
  TestFunFC(o_11,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_35);
  goto b_88;
  l_35 :
  goto k_35;
  b_88 :
  Return();
  k_35 :
  goto j_35;
  a_88 :
  Return();
  j_35 :
  Epopd(3,3);
  Cpop();
  Crestore();
  Cjump();
  i_35 :
  Ccall(_stratego_x_29);
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
  y_87 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(0,3);
  Tset(App4("Choices",App2("Choice",Egetd(0,12),Egetd(0,13)),Egetd(0,14),Egetd(0,15),Egetd(0,3)));
  Return();
  b_18 :
  goto a_18;
  w_87 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_x_29);
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
  t_87 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_x_29);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_x_29);
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
  s_87 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App2("Choice",Egetd(0,12),Egetd(0,13)),Egetd(0,14),Egetd(0,15)));
  Return();
  y_17 :
  goto x_17;
  r_87 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App3("Instr",Egetd(0,13),Egetd(0,14),Egetd(0,15)),App0("Nil")))));
  Return();
  x_17 :
  goto w_17;
  p_87 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_x_29);
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
  w_17 :
  goto v_17;
  o_87 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Tpop"),App0("Nil"))))));
  Return();
  v_17 :
  goto t_17;
  n_87 :
  Tset(App1("Goto",ATmakeString("fail")));
  Return();
  t_17 :
  goto j_17;
  m_87 :
  Tset(App1("Block",App0("Nil")));
  Return();
  j_17 :
  Epopd(0,15);
  goto e_17;
  g_17 :
  Ccontinue(n_35);
  Ccall(_stratego_p_31);
  goto e_17;
  n_35 :
  Epushd(0,5);
  MoveTop(0,1);
  goto b_65;
  b_65 :
  TestFunFC(r_35,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  MoveArg(0,5,0,1,3);
  Rpush(q_35);
  goto p_93;
  q_35 :
  goto p_35;
  p_93 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,2),Egetd(0,4),Egetd(0,5)),App2("Cons",App1("Goto",Egetd(0,3)),App0("Nil")))));
  Return();
  p_35 :
  Epopd(0,5);
  goto o_35;
  e_17 :
  Cpop();
  o_35 :
ENDPROC

PROC(_stratego_s_30)
  Epushd(0,13);
  MoveTop(0,2);
  goto v_93;
  v_93 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,8,0,2,1);
  goto w_93;
  w_93 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_93;
  x_93 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto y_93;
  y_93 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  goto z_93;
  z_93 :
  TestFunFC(p_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,11,0,8,1);
  goto a_94;
  a_94 :
  TestFunFC(y_35,&&x_35,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,1,0,9,1);
  goto b_94;
  b_94 :
  TestFunFC(p_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto c_94;
  c_94 :
  TestFunFC(s_0,&&fail,Egetd(0,13));
  Rpush(w_35);
  goto p_95;
  x_35 :
  TestFunFC(b_24,&&z_35,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto d_94;
  d_94 :
  TestFunFC(p_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto e_94;
  e_94 :
  TestFunFC(s_0,&&fail,Egetd(0,13));
  Rpush(w_35);
  goto r_95;
  z_35 :
  TestFunFC(i_24,&&a_36,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto f_94;
  f_94 :
  TestFunFC(p_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto g_94;
  g_94 :
  TestFunFC(s_0,&&fail,Egetd(0,13));
  Rpush(w_35);
  goto s_95;
  a_36 :
  TestFunFC(z_23,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto h_94;
  h_94 :
  TestFunFC(p_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto i_94;
  i_94 :
  TestFunFC(s_0,&&fail,Egetd(0,13));
  Rpush(w_35);
  goto t_95;
  w_35 :
  goto v_35;
  t_95 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,10);
  NotNULLd(0,12);
  Tset(App4("TestStr",Egetd(0,4),Egetd(0,6),Egetd(0,10),Egetd(0,12)));
  Return();
  v_35 :
  goto u_35;
  s_95 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,10);
  NotNULLd(0,12);
  Tset(App4("TestReal",Egetd(0,4),Egetd(0,6),Egetd(0,10),Egetd(0,12)));
  Return();
  u_35 :
  goto t_35;
  r_95 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,10);
  NotNULLd(0,12);
  Tset(App4("TestInt",Egetd(0,4),Egetd(0,6),Egetd(0,10),Egetd(0,12)));
  Return();
  t_35 :
  goto s_35;
  p_95 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  NotNULLd(0,1);
  Tset(App2("AFun",Egetd(0,10),Egetd(0,1)));
  Ccall(_stratego_g_30);
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
  s_35 :
  Epopd(0,13);
ENDPROC

PROC(_stratego_z_30)
  _ST_plus();
ENDPROC

PROC(_stratego_a_31)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_h_30);
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_31)
  _ST_add();
ENDPROC

PROC(_stratego_c_31)
  Rpush(b_36);
  m_100 :
  Cpush(d_36);
  Epushd(0,2);
  MoveTop(0,1);
  goto z_95;
  z_95 :
  TestFunFC(t_21,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_36);
  goto n_100;
  f_36 :
  goto e_36;
  n_100 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  e_36 :
  Epopd(0,2);
  goto c_36;
  d_36 :
  Ccontinue(g_36);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_f_31);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(p_23);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(h_36);
  goto m_100;
  h_36 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_d_31);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto g_96;
  g_96 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_96;
  h_96 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto i_96;
  i_96 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(j_36);
  goto t_100;
  j_36 :
  goto i_36;
  t_100 :
  Move(0,3,1,4);
  Return();
  i_36 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_36);
  u_100 :
  Cpush(m_36);
  Ccall(_stratego_v_28);
  Tset(App0("Nil"));
  goto l_36;
  m_36 :
  Epushd(1,3);
  MoveTop(1,1);
  goto v_96;
  v_96 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(p_36);
  goto v_100;
  p_36 :
  goto o_36;
  v_100 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(q_36);
  goto u_100;
  q_36 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto s_96;
  s_96 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto t_96;
  t_96 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto u_96;
  u_96 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(s_36);
  goto y_100;
  s_36 :
  goto r_36;
  y_100 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(t_36);
  z_100 :
  Cpush(v_36);
  Ccall(_stratego_v_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto u_36;
  v_36 :
  Ccontinue(w_36);
  Epushd(3,3);
  MoveTop(3,1);
  goto q_96;
  q_96 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_36);
  goto b_101;
  y_36 :
  goto x_36;
  b_101 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(z_36);
  c_101 :
  Cpush(b_37);
  Epushd(4,3);
  MoveTop(4,1);
  goto p_96;
  p_96 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(d_37);
  goto d_101;
  d_37 :
  goto c_37;
  d_101 :
  Move(3,2,4,2);
  Return();
  c_37 :
  Epopd(4,3);
  goto a_37;
  b_37 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_37);
  goto c_101;
  f_37 :
  AllBuild();
  goto e_37;
  a_37 :
  Cpop();
  e_37 :
  Return();
  z_36 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(g_37);
  goto z_100;
  g_37 :
  Return();
  x_36 :
  Epopd(3,3);
  goto u_36;
  w_36 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_37);
  goto z_100;
  i_37 :
  AllBuild();
  goto h_37;
  u_36 :
  Cpop();
  h_37 :
  Return();
  t_36 :
  Return();
  r_36 :
  Epopd(2,6);
  Return();
  o_36 :
  Epopd(1,3);
  goto n_36;
  l_36 :
  Cpop();
  n_36 :
  Return();
  k_36 :
  Epopd(0,3);
  goto c_36;
  g_36 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto y_96;
  y_96 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_96;
  z_96 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto a_97;
  a_97 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(l_37);
  goto f_101;
  l_37 :
  goto k_37;
  f_101 :
  Move(0,2,1,4);
  Return();
  k_37 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(m_37);
  g_101 :
  Cpush(p_37);
  Ccall(_stratego_v_28);
  Tset(App0("Nil"));
  goto o_37;
  p_37 :
  Epushd(1,3);
  MoveTop(1,1);
  goto n_97;
  n_97 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(t_37);
  goto h_101;
  t_37 :
  goto s_37;
  h_101 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(u_37);
  goto m_100;
  u_37 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(v_37);
  goto g_101;
  v_37 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto j_97;
  j_97 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_97;
  l_97 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto m_97;
  m_97 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(x_37);
  goto k_101;
  x_37 :
  goto w_37;
  k_101 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(y_37);
  l_101 :
  Cpush(a_38);
  Ccall(_stratego_v_28);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto z_37;
  a_38 :
  Ccontinue(b_38);
  Epushd(3,3);
  MoveTop(3,1);
  goto i_97;
  i_97 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(d_38);
  goto m_101;
  d_38 :
  goto c_38;
  m_101 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(e_38);
  n_101 :
  Cpush(g_38);
  Epushd(4,3);
  MoveTop(4,1);
  goto h_97;
  h_97 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(i_38);
  goto o_101;
  i_38 :
  goto h_38;
  o_101 :
  Move(3,2,4,2);
  Return();
  h_38 :
  Epopd(4,3);
  goto f_38;
  g_38 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_38);
  goto n_101;
  k_38 :
  AllBuild();
  goto j_38;
  f_38 :
  Cpop();
  j_38 :
  Return();
  e_38 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(l_38);
  goto l_101;
  l_38 :
  Return();
  c_38 :
  Epopd(3,3);
  goto z_37;
  b_38 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_38);
  goto l_101;
  n_38 :
  AllBuild();
  goto m_38;
  z_37 :
  Cpop();
  m_38 :
  Return();
  y_37 :
  Return();
  w_37 :
  Epopd(2,7);
  Return();
  s_37 :
  Epopd(1,3);
  goto r_37;
  o_37 :
  Cpop();
  r_37 :
  Return();
  m_37 :
  Epopd(0,2);
  goto j_37;
  c_36 :
  Cpop();
  j_37 :
  Return();
  b_36 :
ENDPROC

PROC(_stratego_d_31)
  Epushd(0,5);
  MoveTop(0,5);
  goto f_102;
  f_102 :
  TestFunFC(p_0,&&r_38,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto g_102;
  g_102 :
  TestFunFC(p_0,&&s_38,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto h_102;
  h_102 :
  TestFunFC(s_0,&&t_38,Egetd(0,4));
  Cpush(v_38);
  Rpush(w_38);
  goto s_103;
  w_38 :
  goto u_38;
  v_38 :
  Rpush(y_38);
  goto y_103;
  y_38 :
  goto x_38;
  u_38 :
  Cpop();
  x_38 :
  goto q_38;
  t_38 :
  Rpush(q_38);
  goto y_103;
  s_38 :
  Rpush(q_38);
  goto y_103;
  r_38 :
  Rpush(q_38);
  goto y_103;
  q_38 :
  goto p_38;
  y_103 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(z_38);
  z_103 :
  Cpush(b_39);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(d_39);
  Epushd(1,7);
  MoveTop(1,1);
  goto w_101;
  w_101 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto x_101;
  x_101 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto y_101;
  y_101 :
  TestFunFC(p_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto z_101;
  z_101 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  Rpush(f_39);
  goto a_104;
  f_39 :
  goto e_39;
  a_104 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  e_39 :
  Epopd(1,7);
  goto c_39;
  d_39 :
  Ccall(_stratego_e_31);
  goto g_39;
  c_39 :
  Cpop();
  g_39 :
  OneNextSon();
  Ccall(_stratego_l_29);
  AllBuild();
  AllBuild();
  goto a_39;
  b_39 :
  Epushd(1,7);
  MoveTop(1,1);
  goto b_102;
  b_102 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_102;
  c_102 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto d_102;
  d_102 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto e_102;
  e_102 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(j_39);
  goto b_104;
  j_39 :
  goto i_39;
  b_104 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  i_39 :
  Epopd(1,7);
  goto h_39;
  a_39 :
  Cpop();
  h_39 :
  Cpush(l_39);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_28);
  OneNextSon();
  Ccall(_stratego_l_29);
  AllBuild();
  AllBuild();
  goto k_39;
  l_39 :
  Rpush(n_39);
  goto z_103;
  n_39 :
  goto m_39;
  k_39 :
  Cpop();
  m_39 :
  Return();
  z_38 :
  Return();
  p_38 :
  goto o_38;
  s_103 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(o_39);
  t_103 :
  Cpush(q_39);
  Ccall(_stratego_v_28);
  goto p_39;
  q_39 :
  Ccontinue(w_39);
  Epushd(1,3);
  MoveTop(1,1);
  goto u_101;
  u_101 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(y_39);
  goto v_103;
  y_39 :
  goto x_39;
  v_103 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(z_39);
  w_103 :
  Cpush(b_40);
  Epushd(2,3);
  MoveTop(2,1);
  goto t_101;
  t_101 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(d_40);
  goto x_103;
  d_40 :
  goto c_40;
  x_103 :
  Move(1,2,2,2);
  Return();
  c_40 :
  Epopd(2,3);
  goto a_40;
  b_40 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_40);
  goto w_103;
  f_40 :
  AllBuild();
  goto e_40;
  a_40 :
  Cpop();
  e_40 :
  Return();
  z_39 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(g_40);
  goto t_103;
  g_40 :
  Return();
  x_39 :
  Epopd(1,3);
  goto p_39;
  w_39 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_40);
  goto t_103;
  i_40 :
  AllBuild();
  goto h_40;
  p_39 :
  Cpop();
  h_40 :
  Return();
  o_39 :
  Return();
  o_38 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_e_31)
  Epushd(0,7);
  MoveTop(0,1);
  goto f_105;
  f_105 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto g_105;
  g_105 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto h_105;
  h_105 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto i_105;
  i_105 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(k_40);
  goto j_107;
  k_40 :
  goto j_40;
  j_107 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto f_104;
  f_104 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto g_104;
  g_104 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto h_104;
  h_104 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(m_40);
  goto k_107;
  m_40 :
  goto l_40;
  k_107 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  l_40 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto j_104;
  j_104 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto k_104;
  k_104 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_104;
  l_104 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(o_40);
  goto l_107;
  o_40 :
  goto n_40;
  l_107 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  n_40 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(p_40);
  m_107 :
  Epushd(2,9);
  MoveTop(2,1);
  goto s_104;
  s_104 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto t_104;
  t_104 :
  TestFunFC(w_0,&&t_40,Egetd(2,2));
  goto u_104;
  u_104 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto v_104;
  v_104 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto w_104;
  w_104 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(s_40);
  goto n_107;
  t_40 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto x_104;
  x_104 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto y_104;
  y_104 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto z_104;
  z_104 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(s_40);
  goto o_107;
  s_40 :
  goto r_40;
  o_107 :
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
  Rpush(v_40);
  goto m_107;
  v_40 :
  OneNextSon();
  Ccall(_stratego_l_29);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto p_104;
  p_104 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto q_104;
  q_104 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto r_104;
  r_104 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(w_40);
  goto p_107;
  w_40 :
  goto u_40;
  p_107 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  u_40 :
  Epopd(3,5);
  Return();
  r_40 :
  goto q_40;
  n_107 :
  Tset(App0("Nil"));
  Return();
  q_40 :
  Epopd(2,9);
  Return();
  p_40 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto c_105;
  c_105 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto d_105;
  d_105 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto e_105;
  e_105 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(y_40);
  goto r_107;
  y_40 :
  goto x_40;
  r_107 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(z_40);
  s_107 :
  Cpush(b_41);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_41);
  goto s_107;
  c_41 :
  AllBuild();
  goto a_41;
  b_41 :
  Ccall(_stratego_v_28);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto d_41;
  a_41 :
  Cpop();
  d_41 :
  Return();
  z_40 :
  Return();
  x_40 :
  Epopd(1,9);
  Return();
  j_40 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_f_31)
  Epushd(0,6);
  MoveTop(0,2);
  goto w_107;
  w_107 :
  TestFunFC(p_23,&&h_41,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(g_41);
  goto j_108;
  h_41 :
  TestFunFC(i_41,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto x_107;
  x_107 :
  TestFunFC(j_41,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(g_41);
  goto k_108;
  g_41 :
  goto f_41;
  k_108 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_c_31);
  Return();
  f_41 :
  goto e_41;
  j_108 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  e_41 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_g_31)
  Epushd(0,5);
  MoveTop(0,1);
  goto u_108;
  u_108 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto v_108;
  v_108 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto w_108;
  w_108 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(l_41);
  goto w_109;
  l_41 :
  goto k_41;
  w_109 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",MakeInt(1),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil")))));
  Rpush(m_41);
  x_109 :
  Epushd(1,9);
  MoveTop(1,1);
  goto p_108;
  p_108 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_108;
  q_108 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto r_108;
  r_108 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,9,1,5,1);
  goto s_108;
  s_108 :
  TestFunFC(a_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto t_108;
  t_108 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Cpush(r_41);
  Rpush(s_41);
  goto y_109;
  s_41 :
  goto q_41;
  r_41 :
  Rpush(u_41);
  goto z_109;
  u_41 :
  goto t_41;
  q_41 :
  Cpop();
  t_41 :
  goto p_41;
  p_41 :
  goto o_41;
  z_109 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_z_30);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  NotNULLd(1,8);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,8),App0("TNil")))));
  Rpush(v_41);
  goto x_109;
  v_41 :
  Epopd(2,1);
  Return();
  o_41 :
  goto n_41;
  y_109 :
  Epushd(2,1);
  Move(1,4,1,7);
  Move(2,1,1,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Epopd(2,1);
  Return();
  n_41 :
  Epopd(1,9);
  Return();
  m_41 :
  Return();
  k_41 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_31)
  Epushd(0,5);
  MoveTop(0,1);
  goto c_110;
  c_110 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto d_110;
  d_110 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto e_110;
  e_110 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(x_41);
  goto l_110;
  x_41 :
  goto w_41;
  l_110 :
  Move(0,2,0,4);
  Return();
  w_41 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_i_31)
  Rpush(y_41);
  w_110 :
  Cpush(a_42);
  Ccall(_stratego_v_28);
  Tset(MakeInt(0));
  goto z_41;
  a_42 :
  Epushd(0,3);
  MoveTop(0,1);
  goto o_110;
  o_110 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_42);
  goto x_110;
  d_42 :
  goto c_42;
  x_110 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(e_42);
  goto w_110;
  e_42 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_b_31);
  Epopd(1,1);
  Return();
  c_42 :
  Epopd(0,3);
  goto b_42;
  z_41 :
  Cpop();
  b_42 :
  Return();
  y_41 :
ENDPROC

PROC(_stratego_j_31)
  Rpush(f_42);
  d_112 :
  Epushd(0,4);
  MoveTop(0,1);
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_k_31);
  MoveTop(0,2);
  Tset(MakeInt(48));
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_b_31);
  MoveTop(0,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_l_31);
  Ccall(_stratego_m_31);
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
  Cpush(h_42);
  Epushd(1,1);
  MoveTop(1,1);
  goto j_111;
  j_111 :
  TestInt(1,1,0,&&fail);
  Rpush(j_42);
  goto n_112;
  j_42 :
  goto i_42;
  n_112 :
  Tset(App0("Nil"));
  Return();
  i_42 :
  Epopd(1,1);
  goto g_42;
  h_42 :
  Rpush(l_42);
  goto d_112;
  l_42 :
  goto k_42;
  g_42 :
  Cpop();
  k_42 :
  OneNextSon();
  Ccall(_stratego_l_29);
  AllBuild();
  AllBuild();
  Ccall(_stratego_n_31);
  Epopd(0,4);
  Return();
  f_42 :
  Ccall(_stratego_o_31);
  Ccall(_stratego_t_29);
ENDPROC

PROC(_stratego_k_31)
  _ST_mod();
ENDPROC

PROC(_stratego_l_31)
  _ST_div();
ENDPROC

PROC(_stratego_m_31)
  _ST_int();
ENDPROC

PROC(_stratego_n_31)
  Epushd(0,7);
  MoveTop(0,1);
  goto q_112;
  q_112 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_112;
  r_112 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto s_112;
  s_112 :
  TestFunFC(w_0,&&p_42,Egetd(0,4));
  goto t_112;
  t_112 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(o_42);
  goto g_113;
  p_42 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto u_112;
  u_112 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(o_42);
  goto h_113;
  o_42 :
  goto n_42;
  h_113 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  n_42 :
  goto m_42;
  g_113 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  m_42 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_o_31)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(r_42);
  m_114 :
  Cpush(t_42);
  Epushd(1,7);
  MoveTop(1,1);
  goto k_113;
  k_113 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto l_113;
  l_113 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto m_113;
  m_113 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto n_113;
  n_113 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(v_42);
  goto n_114;
  v_42 :
  goto u_42;
  n_114 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(w_42);
  goto m_114;
  w_42 :
  Return();
  u_42 :
  Epopd(1,7);
  goto s_42;
  t_42 :
  goto x_42;
  s_42 :
  Cpop();
  x_42 :
  Return();
  r_42 :
  MoveTop(0,2);
  goto p_113;
  p_113 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_113;
  q_113 :
  TestFunFC(w_0,&&fail,Egetd(0,3));
  goto r_113;
  r_113 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_113;
  s_113 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(y_42);
  goto o_114;
  y_42 :
  goto q_42;
  o_114 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  q_42 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_p_31)
  Epushd(0,11);
  MoveTop(0,4);
  goto q_115;
  q_115 :
  TestFunFC(r_35,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  MoveArg(0,10,0,4,2);
  MoveArg(0,11,0,4,3);
  goto r_115;
  r_115 :
  TestFunFC(d_22,&&e_43,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  MoveArg(0,2,0,5,2);
  MoveArg(0,3,0,5,3);
  goto s_115;
  s_115 :
  TestFunFC(t_21,&&fail,Egetd(0,8));
  MoveArg(0,1,0,8,0);
  Rpush(d_43);
  goto o_118;
  e_43 :
  TestFunFC(g_43,&&f_43,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(d_43);
  goto w_118;
  f_43 :
  TestFunFC(j_12,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto t_115;
  t_115 :
  TestFunFC(i_12,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto u_115;
  u_115 :
  TestFunFC(w_0,&&fail,Egetd(0,8));
  Cpush(i_43);
  Rpush(j_43);
  goto x_118;
  j_43 :
  goto h_43;
  i_43 :
  Rpush(l_43);
  goto z_118;
  l_43 :
  goto k_43;
  h_43 :
  Cpop();
  k_43 :
  goto d_43;
  d_43 :
  goto c_43;
  z_118 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Ccall(_stratego_a_31);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,7);
  Tset(App2("Ccall",Egetd(0,7),App0("Nil")));
  Epopd(1,1);
  Return();
  c_43 :
  goto b_43;
  x_118 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Cpush(m_43);
  Tdupl();
  Ccall(_stratego_a_31);
  Cpop();
  Crestore();
  Cjump();
  m_43 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,9);
  NotNULLd(0,7);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(0,9)),App2("Cons",App1("Goto",Egetd(0,7)),App0("Nil")))));
  Epopd(1,1);
  Return();
  b_43 :
  goto a_43;
  w_118 :
  NotNULLd(0,6);
  Tset(App1("Goto",Egetd(0,6)));
  Return();
  a_43 :
  goto z_42;
  o_118 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,1);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto l_115;
  l_115 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_115;
  m_115 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_115;
  n_115 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(p_43);
  goto p_118;
  p_43 :
  goto n_43;
  p_118 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(r_43);
  q_118 :
  Cpush(t_43);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto a_115;
  a_115 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto b_115;
  b_115 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto c_115;
  c_115 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(v_43);
  goto r_118;
  v_43 :
  goto u_43;
  r_118 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_g_31);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto x_114;
  x_114 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto y_114;
  y_114 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto z_114;
  z_114 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(x_43);
  goto t_118;
  x_43 :
  goto w_43;
  t_118 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  w_43 :
  Epopd(5,6);
  Return();
  u_43 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto s_43;
  t_43 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_43);
  goto q_118;
  z_43 :
  AllBuild();
  goto y_43;
  s_43 :
  Cpop();
  y_43 :
  Return();
  r_43 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto i_115;
  i_115 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto j_115;
  j_115 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto k_115;
  k_115 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(b_44);
  goto u_118;
  b_44 :
  goto a_44;
  u_118 :
  Epushd(4,5);
  Move(1,1,3,4);
  Move(1,2,3,6);
  NotNULLd(0,3);
  NotNULLd(0,9);
  NotNULLd(0,10);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,9),App2("TCons",Egetd(0,10),App2("TCons",Egetd(0,11),App0("TNil"))))));
  Ccall(_stratego_q_31);
  MoveTop(4,1);
  goto f_115;
  f_115 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto g_115;
  g_115 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto h_115;
  h_115 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(d_44);
  goto v_118;
  d_44 :
  goto c_44;
  v_118 :
  Move(1,3,4,2);
  Move(1,4,4,4);
  Return();
  c_44 :
  Epopd(4,5);
  Return();
  a_44 :
  Epopd(3,7);
  Return();
  n_43 :
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
  z_42 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_q_31)
  Epushd(0,9);
  MoveTop(0,1);
  goto e_119;
  e_119 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_119;
  f_119 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_119;
  g_119 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto h_119;
  h_119 :
  TestFunFC(p_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto i_119;
  i_119 :
  TestFunFC(s_0,&&fail,Egetd(0,9));
  goto j_119;
  j_119 :
  TestFunFC(e_21,&&h_44,Egetd(0,2));
  Cpush(j_44);
  Rpush(k_44);
  goto c_120;
  k_44 :
  goto i_44;
  j_44 :
  Rpush(m_44);
  goto d_120;
  m_44 :
  goto l_44;
  i_44 :
  Cpop();
  l_44 :
  goto g_44;
  h_44 :
  Rpush(g_44);
  goto d_120;
  g_44 :
  goto f_44;
  d_120 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App0("Fail"),App0("TNil"))));
  Cpush(n_44);
  Tdupl();
  Ccall(_stratego_h_31);
  Cpop();
  Crestore();
  Cjump();
  n_44 :
  Ccall(_stratego_x_29);
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
  f_44 :
  goto e_44;
  c_120 :
  Tset(App2("TCons",ATmakeString("fail"),App2("TCons",App1("Block",App0("Nil")),App0("TNil"))));
  Return();
  e_44 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_a_32)
  Rpush(o_44);
  u_120 :
  Cpush(q_44);
  Cpush(s_44);
  Ccall(_stratego_v_28);
  goto r_44;
  s_44 :
  Ccontinue(t_44);
  TestFunTop(u_44);
  TravInit();
  OneNextSon();
  Rpush(v_44);
  goto u_120;
  v_44 :
  AllBuild();
  goto r_44;
  t_44 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_44);
  goto u_120;
  y_44 :
  AllBuild();
  Rpush(j_45);
  v_120 :
  Cpush(l_45);
  Epushd(0,6);
  MoveTop(0,1);
  goto h_120;
  h_120 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto i_120;
  i_120 :
  TestFunFC(u_44,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_120;
  j_120 :
  TestFunFC(w_0,&&j_46,Egetd(0,3));
  Rpush(f_46);
  goto w_120;
  j_46 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(f_46);
  goto x_120;
  f_46 :
  goto e_46;
  x_120 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,4),App2("Cons",App1("Block",Egetd(0,5)),Egetd(0,6))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_46);
  goto v_120;
  k_46 :
  AllBuild();
  Rpush(o_46);
  goto v_120;
  o_46 :
  Return();
  e_46 :
  goto d_46;
  w_120 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  d_46 :
  Epopd(0,6);
  goto k_45;
  l_45 :
  goto p_46;
  k_45 :
  Cpop();
  p_46 :
  Return();
  j_45 :
  goto w_44;
  r_44 :
  Cpop();
  w_44 :
  goto p_44;
  q_44 :
  goto q_46;
  p_44 :
  Cpop();
  q_46 :
  Return();
  o_44 :
ENDPROC

PROC(_stratego_b_32)
  Cpush(l_47);
  TestFunTop(u_44);
  TravInit();
  OneNextSon();
  Rpush(p_47);
  y_120 :
  Cpush(w_47);
  q_47 :
  Ccall(_stratego_e_32);
  Tduplinv();
  goto q_47;
  w_47 :
  Cpush(a_48);
  Ccall(_stratego_v_28);
  goto z_47;
  a_48 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_48);
  goto y_120;
  c_48 :
  AllBuild();
  goto b_48;
  z_47 :
  Cpop();
  b_48 :
  Cpush(e_48);
  d_48 :
  Ccall(_stratego_e_32);
  Tduplinv();
  goto d_48;
  e_48 :
  Return();
  p_47 :
  AllBuild();
  goto g_47;
  l_47 :
  goto f_48;
  g_47 :
  Cpop();
  f_48 :
ENDPROC

PROC(_stratego_e_32)
  Epushd(0,10);
  MoveTop(0,5);
  goto k_121;
  k_121 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto l_121;
  l_121 :
  TestFunFC(i_49,&&p_48,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto m_121;
  m_121 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto n_121;
  n_121 :
  TestFunFC(n_49,&&fail,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  Rpush(o_48);
  goto f_123;
  p_48 :
  TestFunFC(q_49,&&o_49,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,1,0,6,1);
  goto o_121;
  o_121 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto p_121;
  p_121 :
  TestFunFC(r_49,&&fail,Egetd(0,9));
  goto q_121;
  q_121 :
  TestFunFC(a_0,&&fail,Egetd(0,10));
  MoveArg(0,2,0,10,0);
  MoveArg(0,3,0,10,1);
  goto r_121;
  r_121 :
  TestFunFC(s_49,&&fail,Egetd(0,2));
  Rpush(o_48);
  goto g_123;
  o_49 :
  TestFunFC(u_49,&&t_49,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto s_121;
  s_121 :
  TestFunFC(a_0,&&v_49,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto t_121;
  t_121 :
  TestFunFC(u_49,&&w_49,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  goto u_121;
  u_121 :
  TestInt(0,7,0,&&x_49);
  Cpush(z_49);
  Rpush(a_50);
  goto h_123;
  a_50 :
  goto y_49;
  z_49 :
  Rpush(c_50);
  goto j_123;
  c_50 :
  goto b_50;
  y_49 :
  Cpop();
  b_50 :
  goto o_48;
  x_49 :
  Rpush(o_48);
  goto j_123;
  w_49 :
  goto v_121;
  v_121 :
  TestInt(0,7,0,&&fail);
  Rpush(o_48);
  goto h_123;
  v_49 :
  goto v_121;
  t_49 :
  TestFunFC(e_50,&&d_50,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto w_121;
  w_121 :
  TestFunFC(a_0,&&f_50,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto x_121;
  x_121 :
  TestFunFC(e_50,&&g_50,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  goto y_121;
  y_121 :
  TestInt(0,7,0,&&h_50);
  Cpush(j_50);
  Rpush(p_50);
  goto i_123;
  p_50 :
  goto i_50;
  j_50 :
  Rpush(s_50);
  goto l_123;
  s_50 :
  goto q_50;
  i_50 :
  Cpop();
  q_50 :
  goto o_48;
  h_50 :
  Rpush(o_48);
  goto l_123;
  g_50 :
  goto z_121;
  z_121 :
  TestInt(0,7,0,&&fail);
  Rpush(o_48);
  goto i_123;
  f_50 :
  goto z_121;
  d_50 :
  TestFunFC(t_50,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto a_122;
  a_122 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto b_122;
  b_122 :
  TestFunFC(v_50,&&fail,Egetd(0,9));
  Rpush(o_48);
  goto n_123;
  o_48 :
  goto n_48;
  n_123 :
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Return();
  n_48 :
  goto m_48;
  l_123 :
  Epushd(1,1);
  NotNULLd(0,7);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,4),App0("TNil"))));
  Ccall(_stratego_z_30);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("Cons",App1("Epop",Egetd(1,1)),Egetd(0,10)));
  Epopd(1,1);
  Return();
  m_48 :
  goto l_48;
  j_123 :
  Epushd(1,1);
  NotNULLd(0,7);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,4),App0("TNil"))));
  Ccall(_stratego_z_30);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("Cons",App1("Epush",Egetd(1,1)),Egetd(0,10)));
  Epopd(1,1);
  Return();
  l_48 :
  goto k_48;
  i_123 :
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  k_48 :
  goto j_48;
  h_123 :
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  j_48 :
  goto i_48;
  g_123 :
  NotNULLd(0,7);
  NotNULLd(0,1);
  NotNULLd(0,3);
  Tset(App2("Cons",App2("MatchFun",Egetd(0,7),Egetd(0,1)),Egetd(0,3)));
  Return();
  i_48 :
  goto g_48;
  f_123 :
  Epushd(1,1);
  Move(0,7,0,4);
  Move(1,1,0,10);
  NotNULLd(0,7);
  NotNULLd(1,1);
  Tset(App2("Cons",App1("MatchVar",Egetd(0,7)),Egetd(1,1)));
  Epopd(1,1);
  Return();
  g_48 :
  Epopd(0,10);
ENDPROC

PROC(_stratego_j_32)
  Tset(ATmakeString("symbol-table"));
  Ccall(_stratego_p_32);
  Rpush(x_50);
  w_124 :
  Cpush(a_51);
  Ccall(_stratego_v_28);
  goto y_50;
  a_51 :
  Ccontinue(b_51);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,7);
  MoveTop(0,1);
  goto p_123;
  p_123 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto q_123;
  q_123 :
  TestFunFC(r_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto r_123;
  r_123 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto s_123;
  s_123 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(g_51);
  goto x_124;
  g_51 :
  goto e_51;
  x_124 :
  Return();
  e_51 :
  Epopd(0,7);
  OneNextSon();
  Rpush(i_51);
  goto w_124;
  i_51 :
  AllBuild();
  goto y_50;
  b_51 :
  Epushd(0,3);
  MoveTop(0,1);
  goto u_123;
  u_123 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(n_51);
  goto y_124;
  n_51 :
  goto m_51;
  y_124 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(o_51);
  goto w_124;
  o_51 :
  Return();
  m_51 :
  Epopd(0,3);
  goto l_51;
  y_50 :
  Cpop();
  l_51 :
  Return();
  x_50 :
  Rpush(p_51);
  z_124 :
  Cpush(w_52);
  Ccall(_stratego_v_28);
  goto q_51;
  w_52 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,7);
  MoveTop(0,1);
  goto w_123;
  w_123 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto x_123;
  x_123 :
  TestFunFC(r_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_123;
  y_123 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto z_123;
  z_123 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(d_53);
  goto a_125;
  d_53 :
  goto b_53;
  a_125 :
  NotNULLd(0,6);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",App2("VARDECL",App0("ATerm"),Egetd(0,6)),App2("TCons",App2("MOVE",Egetd(0,6),App3("ATmakeAFun",Egetd(0,3),Egetd(0,4),MakeInt(0))),App0("TNil"))));
  Return();
  b_53 :
  Epopd(0,7);
  OneNextSon();
  Rpush(i_53);
  goto z_124;
  i_53 :
  AllBuild();
  goto y_52;
  q_51 :
  Cpop();
  y_52 :
  Return();
  p_51 :
  Ccall(_stratego_r_32);
ENDPROC

PROC(_stratego_p_32)
  Epushd(0,1);
  MoveTop(0,1);
  Ccall(_stratego_q_32);
  Rpush(j_53);
  l_125 :
  Cpush(l_53);
  Ccall(_stratego_v_28);
  goto k_53;
  l_53 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_h_30);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,2),App0("TNil"))));
  Epopd(1,2);
  OneNextSon();
  Rpush(n_53);
  goto l_125;
  n_53 :
  AllBuild();
  goto m_53;
  k_53 :
  Cpop();
  m_53 :
  Return();
  j_53 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_32)
  _ST_table_keys();
ENDPROC

PROC(_stratego_r_32)
  Rpush(o_53);
  x_126 :
  Epushd(0,3);
  MoveTop(0,1);
  goto a_126;
  a_126 :
  TestFunFC(w_0,&&z_53,Egetd(0,1));
  Rpush(u_53);
  goto y_126;
  z_53 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(u_53);
  goto z_126;
  u_53 :
  goto t_53;
  z_126 :
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
  Rpush(f_54);
  goto x_126;
  f_54 :
  OneNextSon();
  Ccall(_stratego_l_29);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto r_125;
  r_125 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto s_125;
  s_125 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto t_125;
  t_125 :
  TestFunFC(p_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto u_125;
  u_125 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  goto v_125;
  v_125 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto w_125;
  w_125 :
  TestFunFC(p_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto x_125;
  x_125 :
  TestFunFC(p_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto y_125;
  y_125 :
  TestFunFC(s_0,&&fail,Egetd(1,12));
  goto z_125;
  z_125 :
  TestFunFC(s_0,&&fail,Egetd(1,13));
  Rpush(g_54);
  goto a_127;
  g_54 :
  goto a_54;
  a_127 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset(App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,9)),App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,11)),App0("TNil"))));
  Return();
  a_54 :
  Epopd(1,13);
  Return();
  t_53 :
  goto s_53;
  y_126 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  s_53 :
  Epopd(0,3);
  Return();
  o_53 :
ENDPROC
