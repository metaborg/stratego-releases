#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,s_51);
VARDECL(AFun,r_51);
VARDECL(AFun,a_51);
VARDECL(AFun,j_50);
VARDECL(AFun,h_50);
VARDECL(AFun,g_50);
VARDECL(AFun,e_50);
VARDECL(AFun,c_50);
VARDECL(AFun,b_50);
VARDECL(AFun,l_46);
VARDECL(AFun,u_43);
VARDECL(AFun,g_41);
VARDECL(AFun,f_41);
VARDECL(AFun,y_35);
VARDECL(AFun,r_35);
VARDECL(AFun,o_24);
VARDECL(AFun,n_24);
VARDECL(AFun,l_24);
VARDECL(AFun,d_24);
VARDECL(AFun,b_24);
VARDECL(AFun,z_23);
VARDECL(AFun,x_23);
VARDECL(AFun,v_23);
VARDECL(AFun,t_23);
VARDECL(AFun,r_23);
VARDECL(AFun,p_23);
VARDECL(AFun,n_23);
VARDECL(AFun,l_23);
VARDECL(AFun,h_23);
VARDECL(AFun,b_23);
VARDECL(AFun,z_22);
VARDECL(AFun,v_22);
VARDECL(AFun,r_22);
VARDECL(AFun,d_22);
VARDECL(AFun,v_21);
VARDECL(AFun,t_21);
VARDECL(AFun,s_21);
VARDECL(AFun,m_21);
VARDECL(AFun,g_21);
VARDECL(AFun,b_21);
VARDECL(AFun,r_20);
VARDECL(AFun,p_20);
VARDECL(AFun,z_19);
VARDECL(AFun,v_19);
VARDECL(AFun,n_16);
VARDECL(AFun,k_16);
VARDECL(AFun,b_16);
VARDECL(AFun,h_15);
VARDECL(AFun,e_15);
VARDECL(AFun,e_14);
VARDECL(AFun,f_13);
VARDECL(AFun,j_12);
VARDECL(AFun,i_12);
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
PROCDECL(_stratego_s_32);
PROCDECL(_stratego_t_32);
PROCDECL(_stratego_w_32);
PROCDECL(_stratego_x_32);
PROCDECL(_stratego_y_32);

PROC(_stratego_init_afuns)
  MOVE(s_51,ATmakeAFun("Tpop",0,0));
  MOVE(r_51,ATmakeAFun("Arg",1,0));
  MOVE(a_51,ATmakeAFun("Epop",1,0));
  MOVE(j_50,ATmakeAFun("Epush",1,0));
  MOVE(h_50,ATmakeAFun("AllBuild",0,0));
  MOVE(g_50,ATmakeAFun("TravInit",0,0));
  MOVE(e_50,ATmakeAFun("MatchFun",2,0));
  MOVE(c_50,ATmakeAFun("BuildVar",1,0));
  MOVE(b_50,ATmakeAFun("MatchVar",1,0));
  MOVE(l_46,ATmakeAFun("Block",1,0));
  MOVE(u_43,ATmakeAFun("Continue",1,0));
  MOVE(g_41,ATmakeAFun("Rule",3,0));
  MOVE(f_41,ATmakeAFun("LRule",1,0));
  MOVE(y_35,ATmakeAFun("Fun",2,0));
  MOVE(r_35,ATmakeAFun("Branch",4,0));
  MOVE(o_24,ATmakeAFun("App",2,0));
  MOVE(n_24,ATmakeAFun("Op",2,0));
  MOVE(l_24,ATmakeAFun("BuildDefault",1,0));
  MOVE(d_24,ATmakeAFun("Real",1,0));
  MOVE(b_24,ATmakeAFun("Int",1,0));
  MOVE(z_23,ATmakeAFun("Str",1,0));
  MOVE(x_23,ATmakeAFun("BuildTerm",3,0));
  MOVE(v_23,ATmakeAFun("Prim2",2,0));
  MOVE(t_23,ATmakeAFun("Prim",1,0));
  MOVE(r_23,ATmakeAFun("Where",1,0));
  MOVE(p_23,ATmakeAFun("Scope",2,0));
  MOVE(n_23,ATmakeAFun("Thread",1,0));
  MOVE(l_23,ATmakeAFun("Some",1,0));
  MOVE(h_23,ATmakeAFun("All",1,0));
  MOVE(b_23,ATmakeAFun("CongKids",1,0));
  MOVE(z_22,ATmakeAFun("CongWld",1,0));
  MOVE(v_22,ATmakeAFun("Path",2,0));
  MOVE(r_22,ATmakeAFun("Let",2,0));
  MOVE(d_22,ATmakeAFun("Case",4,0));
  MOVE(v_21,ATmakeAFun("Assign",2,0));
  MOVE(t_21,ATmakeAFun("Var",1,0));
  MOVE(s_21,ATmakeAFun("Assign",1,0));
  MOVE(m_21,ATmakeAFun("Not",1,0));
  MOVE(g_21,ATmakeAFun("Test",1,0));
  MOVE(b_21,ATmakeAFun("Fail",0,0));
  MOVE(r_20,ATmakeAFun("Alt",3,0));
  MOVE(p_20,ATmakeAFun("Alts",6,0));
  MOVE(z_19,ATmakeAFun("Choice",2,0));
  MOVE(v_19,ATmakeAFun("Choices",4,0));
  MOVE(n_16,ATmakeAFun("AFun",2,0));
  MOVE(k_16,ATmakeAFun("Id",0,0));
  MOVE(b_16,ATmakeAFun("CountRule",1,0));
  MOVE(h_15,ATmakeAFun("Cong",2,0));
  MOVE(e_15,ATmakeAFun("Build",1,0));
  MOVE(e_14,ATmakeAFun("One",1,0));
  MOVE(f_13,ATmakeAFun("Countrule",1,0));
  MOVE(j_12,ATmakeAFun("Call",2,0));
  MOVE(i_12,ATmakeAFun("SVar",1,0));
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
  Ccall(_stratego_y_28);
  goto f_0;
  g_0 :
  Ccall(_stratego_z_28);
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
  Ccall(_stratego_b_29);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_g_29);
  Tdupl();
  Ccall(_stratego_i_29);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_29);
  OneNextSon();
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_i_29);
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
  Ccall(_stratego_j_29);
  Ccall(_stratego_m_29);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_n_29);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_y_28)
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

PROC(_stratego_z_28)
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

PROC(_stratego_b_29)
  Tdupl();
  r_5 :
  TestFunTop(a_0);
  Cpush(t_5);
  Arg(0);
  Cpush(x_5);
  Ccall(_stratego_c_29);
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
  Ccall(_stratego_d_29);
ENDPROC

PROC(_stratego_c_29)
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

PROC(_stratego_d_29)
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
  Ccall(_stratego_e_29);
  Tset(MakeInt(1));
  Ccall(_stratego_f_29);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_29)
  _ST_printnl();
ENDPROC

PROC(_stratego_f_29)
  _ST_exit();
ENDPROC

PROC(_stratego_g_29)
  Epushd(0,3);
  Tdupl();
  Cpush(q_6);
  Rpush(r_6);
  c_20 :
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
  goto d_20;
  v_6 :
  goto u_6;
  d_20 :
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
  goto c_20;
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
  Ccall(_stratego_h_29);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_h_29)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_i_29)
  _ST_dtime();
ENDPROC

PROC(_stratego_j_29)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(c_7);
  Rpush(d_7);
  p_22 :
  Cpush(f_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_20;
  l_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_20;
  m_20 :
  TestFunFC(i_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_7);
  goto q_22;
  h_7 :
  goto g_7;
  q_22 :
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
  goto p_22;
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
  Ccall(_stratego_o_29);
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
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  Cpush(p_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(q_7);
  w_22 :
  Cpush(s_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_21;
  d_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_21;
  e_21 :
  TestFunFC(v_7,&&fail,Egetd(1,2));
  Rpush(u_7);
  goto d_23;
  u_7 :
  goto t_7;
  d_23 :
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
  goto w_22;
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
  Ccall(_stratego_k_29);
  OneNextSon();
  Ccall(_stratego_o_29);
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
  Ccall(_stratego_l_29);
  OneNextSon();
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  goto z_7;
  n_7 :
  Cpop();
  z_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_29)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_l_29)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_m_29)
  Epushd(0,2);
  Tdupl();
  Cpush(b_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(d_8);
  Tdupl();
  Rpush(e_8);
  p_25 :
  Cpush(g_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto f_23;
  f_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_23;
  g_23 :
  TestFunFC(j_8,&&fail,Egetd(1,2));
  Rpush(i_8);
  goto n_26;
  i_8 :
  goto h_8;
  n_26 :
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
  goto p_25;
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
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(n_8);
  o_26 :
  Cpush(r_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_23;
  i_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_24;
  f_24 :
  TestFunFC(z_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_8);
  goto p_26;
  t_8 :
  goto s_8;
  p_26 :
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
  goto o_26;
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
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(d_9);
  t_26 :
  Cpush(f_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_24;
  h_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_24;
  i_24 :
  TestFunFC(m_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_9);
  goto u_26;
  i_9 :
  goto h_9;
  u_26 :
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
  goto t_26;
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
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_e_29);
  goto a_8;
  b_8 :
  goto m_9;
  a_8 :
  Cpop();
  m_9 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_f_29);
  Epopd(0,2);
ENDPROC

PROC(_stratego_n_29)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_e_29);
  Tset(MakeInt(1));
  Ccall(_stratego_f_29);
ENDPROC

PROC(_stratego_o_29)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_26;
  w_26 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(o_9);
  goto y_26;
  o_9 :
  goto n_9;
  y_26 :
  Return();
  n_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_29)
  Epushd(0,4);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_q_29);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_x_29);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,5);
  Ccall(_stratego_t_32);
  MoveTop(1,1);
  goto h_27;
  h_27 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_27;
  i_27 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto j_27;
  j_27 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(q_9);
  goto k_28;
  q_9 :
  goto p_9;
  k_28 :
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

PROC(_stratego_q_29)
  Tdupl();
  Tset(ATmakeString("symbol-table"));
  Ccall(_stratego_r_29);
  Tpop();
  Rpush(r_9);
  m_28 :
  Cpush(t_9);
  Ccall(_stratego_y_28);
  goto s_9;
  t_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_29);
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

PROC(_stratego_r_29)
  _ST_create_table();
ENDPROC

PROC(_stratego_s_29)
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
  Ccall(_stratego_u_29);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_t_29);
  NotNULLd(0,2);
  Tset(App1("PROCDECL",Egetd(0,2)));
  Epopd(1,1);
  Return();
  x_9 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_t_29)
  _ST_table_put();
ENDPROC

PROC(_stratego_u_29)
  Epushd(0,5);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_29);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_29);
  OneNextSon();
  Ccall(_stratego_o_29);
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
  Ccall(_stratego_y_28);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto i_10;
  e_10 :
  Cpop();
  i_10 :
  Return();
  d_10 :
  Ccall(_stratego_w_29);
  Return();
  b_10 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_29)
  _ST_explode_string();
ENDPROC

PROC(_stratego_w_29)
  _ST_implode_string();
ENDPROC

PROC(_stratego_x_29)
  Rpush(j_10);
  y_31 :
  Cpush(l_10);
  Ccall(_stratego_y_28);
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
  Ccall(_stratego_y_29);
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
  Ccall(_stratego_d_30);
  goto u_10;
  v_10 :
  Ccall(_stratego_a_31);
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
  Ccall(_stratego_q_32);
  Ccall(_stratego_r_32);
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

PROC(_stratego_y_29)
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
  goto p_33;
  g_11 :
  TestFunFC(h_11,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  MoveArg(0,6,0,2,3);
  goto u_32;
  u_32 :
  TestFunFC(w_0,&&fail,Egetd(0,5));
  Rpush(e_11);
  goto q_33;
  e_11 :
  goto d_11;
  q_33 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App3("Instr",App3("SDef",Egetd(0,4),App0("Nil"),Egetd(0,6)),Egetd(0,7),Egetd(0,8)));
  Return();
  d_11 :
  goto c_11;
  p_33 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App1("Block",App2("Cons",App1("PROC",Egetd(0,3)),App2("Cons",App3("Instr",Egetd(0,5),Egetd(0,7),Egetd(0,8)),App2("Cons",App0("ENDPROC"),App0("Nil"))))));
  Return();
  c_11 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_d_30)
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
  m_47 :
  Cpush(r_11);
  Epushd(2,5);
  MoveTop(2,1);
  goto t_33;
  t_33 :
  TestFunFC(u_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto u_33;
  u_33 :
  TestFunFC(u_11,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  Rpush(t_11);
  goto n_47;
  t_11 :
  goto s_11;
  n_47 :
  NotNULLd(2,2);
  NotNULLd(2,4);
  NotNULLd(2,5);
  Tset(App2("Seq",App2("Seq",Egetd(2,2),Egetd(2,4)),Egetd(2,5)));
  Rpush(w_11);
  goto m_47;
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
  goto w_33;
  w_33 :
  TestFunFC(i_12,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(h_12);
  goto p_47;
  h_12 :
  goto f_12;
  p_47 :
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
  goto z_33;
  z_33 :
  TestFunFC(i_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(l_12);
  goto r_47;
  l_12 :
  goto k_12;
  r_47 :
  Move(1,1,2,2);
  Return();
  k_12 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_y_28);
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
  goto n_37;
  n_37 :
  TestFunFC(i_12,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(u_12);
  goto t_47;
  u_12 :
  goto t_12;
  t_47 :
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
  w_47 :
  Cpush(z_12);
  Epushd(3,5);
  MoveTop(3,1);
  goto q_39;
  q_39 :
  TestFunFC(u_11,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto r_39;
  r_39 :
  TestFunFC(u_11,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(b_13);
  goto x_47;
  b_13 :
  goto a_13;
  x_47 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  NotNULLd(3,5);
  Tset(App2("Seq",App2("Seq",Egetd(3,2),Egetd(3,4)),Egetd(3,5)));
  Rpush(c_13);
  goto w_47;
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
  goto o_43;
  o_43 :
  TestFunFC(u_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_43;
  p_43 :
  TestFunFC(u_11,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,8,2,3,1);
  goto q_43;
  q_43 :
  TestFunFC(j_12,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto r_43;
  r_43 :
  TestFunFC(i_12,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  goto p_44;
  p_44 :
  TestFunFC(w_0,&&fail,Egetd(2,7));
  goto u_44;
  u_44 :
  TestFunFC(f_13,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  Rpush(e_13);
  goto y_47;
  e_13 :
  goto w_12;
  y_47 :
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
  goto u_39;
  u_39 :
  TestFunFC(i_12,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(p_13);
  goto a_48;
  p_13 :
  goto o_13;
  a_48 :
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
  goto w_44;
  w_44 :
  TestFunFC(i_12,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(a_14);
  goto d_48;
  a_14 :
  goto z_13;
  d_48 :
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
  Ccall(_stratego_e_30);
  MoveTop(1,1);
  Move(0,5,1,1);
  Ccall(_stratego_e_30);
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
  Ccall(_stratego_f_30);
  goto i_11;
  b_14 :
  Ccall(_stratego_h_30);
  goto d_14;
  i_11 :
  Cpop();
  d_14 :
ENDPROC

PROC(_stratego_e_30)
  _ST_new();
ENDPROC

PROC(_stratego_f_30)
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
  Ccall(_stratego_g_30);
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
  goto m_48;
  m_48 :
  TestFunFC(i_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(i_14);
  goto f_50;
  i_14 :
  goto g_14;
  f_50 :
  Move(1,1,2,2);
  Return();
  g_14 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_y_28);
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
  Ccall(_stratego_e_30);
  MoveTop(1,1);
  Move(0,4,1,1);
  Ccall(_stratego_e_30);
  MoveTop(1,2);
  Move(0,5,1,2);
  Ccall(_stratego_e_30);
  MoveTop(1,3);
  Move(0,6,1,3);
  Ccall(_stratego_e_30);
  MoveTop(1,4);
  Move(0,7,1,4);
  Ccall(_stratego_e_30);
  MoveTop(1,5);
  Move(0,8,1,5);
  Ccall(_stratego_e_30);
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

PROC(_stratego_g_30)
  Cpush(l_14);
  Tdupl();
  Rpush(b_15);
  o_14 :
  Cpush(r_14);
  Epushd(0,2);
  MoveTop(0,1);
  goto p_50;
  p_50 :
  TestFunFC(e_15,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_15);
  goto t_50;
  d_15 :
  goto c_15;
  t_50 :
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

PROC(_stratego_h_30)
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
  goto w_50;
  w_50 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(l_15);
  goto c_53;
  l_15 :
  goto i_15;
  c_53 :
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
  Ccall(_stratego_g_30);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_30);
  OneNextSon();
  Ccall(_stratego_y_28);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  TestFunTop(h_15);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto z_50;
  z_50 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(p_15);
  goto e_53;
  p_15 :
  goto m_15;
  e_53 :
  Return();
  m_15 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_30);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(j_12);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto b_51;
  b_51 :
  TestFunFC(i_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(t_15);
  goto f_53;
  t_15 :
  goto q_15;
  f_53 :
  Move(1,1,2,2);
  Return();
  q_15 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_y_28);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_y_28);
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
  goto e_51;
  e_51 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(y_15);
  goto h_53;
  y_15 :
  goto x_15;
  h_53 :
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
  Ccall(_stratego_g_30);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_30);
  OneNextSon();
  Ccall(_stratego_y_28);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto h_51;
  h_51 :
  TestFunFC(b_16,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto i_51;
  i_51 :
  TestStr(2,2,"Cons",&&fail);
  Rpush(a_16);
  goto j_53;
  a_16 :
  goto z_15;
  j_53 :
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
  goto k_51;
  k_51 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(d_16);
  goto k_53;
  d_16 :
  goto c_16;
  k_53 :
  Return();
  c_16 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_30);
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
  TestFunFC(i_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(f_16);
  goto l_53;
  f_16 :
  goto e_16;
  l_53 :
  Move(1,1,2,2);
  Return();
  e_16 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_y_28);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_y_28);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto o_51;
  o_51 :
  TestFunFC(b_16,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto p_51;
  p_51 :
  TestStr(2,2,"Cons",&&fail);
  Rpush(h_16);
  goto m_53;
  h_16 :
  goto g_16;
  m_53 :
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
  Ccall(_stratego_e_30);
  MoveTop(1,1);
  Move(0,4,1,1);
  Ccall(_stratego_e_30);
  MoveTop(1,2);
  Move(0,5,1,2);
  Ccall(_stratego_e_30);
  MoveTop(1,3);
  Move(0,6,1,3);
  Tset(App2("AFun",ATmakeString("Cons"),MakeInt(2)));
  Ccall(_stratego_s_30);
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

PROC(_stratego_i_30)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_53;
  u_53 :
  TestFunFC(k_16,&&fail,Egetd(0,1));
  Rpush(j_16);
  goto w_53;
  j_16 :
  goto i_16;
  w_53 :
  Return();
  i_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_30)
  Epushd(0,3);
  MoveTop(0,1);
  goto a_54;
  a_54 :
  TestFunFC(n_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_16);
  goto j_54;
  m_16 :
  goto l_16;
  j_54 :
  Epushd(1,1);
  Tdupl();
  Cpush(r_16);
  Epushd(2,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(0,2),Egetd(0,3)),App0("TNil"))));
  Ccall(_stratego_z_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  goto o_16;
  r_16 :
  Epushd(2,1);
  Ccall(_stratego_e_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(0,2),Egetd(0,3)),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_t_29);
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

PROC(_stratego_z_30)
  _ST_table_get();
ENDPROC

PROC(_stratego_a_31)
  Cpush(a_17);
  Epushd(0,15);
  MoveTop(0,10);
  goto s_64;
  s_64 :
  TestFunFC(v_19,&&u_19,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  MoveArg(0,3,0,10,3);
  goto t_64;
  t_64 :
  TestFunFC(z_19,&&y_19,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(b_20);
  Rpush(e_20);
  goto f_88;
  e_20 :
  goto a_20;
  b_20 :
  Rpush(g_20);
  goto i_88;
  g_20 :
  goto f_20;
  a_20 :
  Cpop();
  f_20 :
  goto s_19;
  y_19 :
  TestFunFC(o_11,&&w_19,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(i_20);
  Rpush(j_20);
  goto h_88;
  j_20 :
  goto h_20;
  i_20 :
  Rpush(n_20);
  goto i_88;
  n_20 :
  goto k_20;
  h_20 :
  Cpop();
  k_20 :
  goto s_19;
  w_19 :
  Rpush(s_19);
  goto i_88;
  u_19 :
  TestFunFC(p_20,&&o_20,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  MoveArg(0,3,0,10,3);
  MoveArg(0,4,0,10,4);
  MoveArg(0,5,0,10,5);
  goto u_64;
  u_64 :
  TestFunFC(w_0,&&q_20,Egetd(0,11));
  Rpush(s_19);
  goto m_89;
  q_20 :
  TestFunFC(a_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto v_64;
  v_64 :
  TestFunFC(r_20,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  MoveArg(0,9,0,12,1);
  MoveArg(0,2,0,12,2);
  goto w_64;
  w_64 :
  TestFunFC(w_0,&&s_20,Egetd(0,13));
  Cpush(u_20);
  Rpush(v_20);
  goto n_89;
  v_20 :
  goto t_20;
  u_20 :
  Rpush(x_20);
  goto h_90;
  x_20 :
  goto w_20;
  t_20 :
  Cpop();
  w_20 :
  goto s_19;
  s_20 :
  Rpush(s_19);
  goto h_90;
  o_20 :
  TestFunFC(f_11,&&y_20,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  goto x_64;
  x_64 :
  TestFunFC(k_16,&&z_20,Egetd(0,11));
  Rpush(s_19);
  goto v_87;
  z_20 :
  TestFunFC(b_21,&&a_21,Egetd(0,11));
  Rpush(s_19);
  goto w_87;
  a_21 :
  TestFunFC(g_21,&&c_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto x_87;
  c_21 :
  TestFunFC(m_21,&&h_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto y_87;
  h_21 :
  TestFunFC(u_11,&&o_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_19);
  goto a_88;
  o_21 :
  TestFunFC(o_11,&&p_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_19);
  goto b_88;
  p_21 :
  TestFunFC(z_19,&&q_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_19);
  goto c_88;
  q_21 :
  TestFunFC(s_21,&&r_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto y_64;
  y_64 :
  TestFunFC(t_21,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  Rpush(s_19);
  goto m_88;
  r_21 :
  TestFunFC(v_21,&&u_21,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto z_64;
  z_64 :
  TestFunFC(t_21,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  goto a_65;
  a_65 :
  TestFunFC(t_21,&&w_21,Egetd(0,13));
  MoveArg(0,1,0,13,0);
  Cpush(y_21);
  Rpush(z_21);
  goto t_88;
  z_21 :
  goto x_21;
  y_21 :
  Rpush(b_22);
  goto g_89;
  b_22 :
  goto a_22;
  x_21 :
  Cpop();
  a_22 :
  goto s_19;
  w_21 :
  Rpush(s_19);
  goto g_89;
  u_21 :
  TestFunFC(d_22,&&c_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  MoveArg(0,7,0,11,3);
  Rpush(s_19);
  goto k_89;
  c_22 :
  TestFunFC(m_11,&&e_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_19);
  goto c_91;
  e_22 :
  TestFunFC(j_12,&&f_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto b_65;
  b_65 :
  TestFunFC(i_12,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  goto c_65;
  c_65 :
  TestFunFC(w_0,&&fail,Egetd(0,13));
  Cpush(h_22);
  Rpush(i_22);
  goto e_91;
  i_22 :
  goto g_22;
  h_22 :
  Rpush(k_22);
  goto g_91;
  k_22 :
  goto j_22;
  g_22 :
  Cpop();
  j_22 :
  goto s_19;
  f_22 :
  TestFunFC(r_22,&&l_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_19);
  goto i_91;
  l_22 :
  TestFunFC(z_9,&&s_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  goto d_65;
  d_65 :
  TestFunFC(w_0,&&fail,Egetd(0,13));
  Rpush(s_19);
  goto k_91;
  s_22 :
  TestFunFC(h_11,&&t_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  MoveArg(0,7,0,11,3);
  goto e_65;
  e_65 :
  TestFunFC(w_0,&&fail,Egetd(0,6));
  Rpush(s_19);
  goto l_91;
  t_22 :
  TestFunFC(v_22,&&u_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_19);
  goto m_91;
  u_22 :
  TestFunFC(h_15,&&x_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_19);
  goto n_91;
  x_22 :
  TestFunFC(z_22,&&y_22,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto q_91;
  y_22 :
  TestFunFC(b_23,&&a_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto f_65;
  f_65 :
  TestFunFC(w_0,&&c_23,Egetd(0,12));
  Rpush(s_19);
  goto r_91;
  c_23 :
  TestFunFC(a_0,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  MoveArg(0,9,0,12,1);
  Rpush(s_19);
  goto s_91;
  a_23 :
  TestFunFC(h_23,&&e_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto t_91;
  e_23 :
  TestFunFC(e_14,&&j_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto w_91;
  j_23 :
  TestFunFC(l_23,&&k_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto z_91;
  k_23 :
  TestFunFC(n_23,&&m_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto c_92;
  m_23 :
  TestFunFC(p_23,&&o_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_19);
  goto f_92;
  o_23 :
  TestFunFC(r_23,&&q_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto i_92;
  q_23 :
  TestFunFC(t_23,&&s_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto j_92;
  s_23 :
  TestFunFC(v_23,&&u_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_19);
  goto k_92;
  u_23 :
  TestFunFC(b_16,&&w_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto l_92;
  w_23 :
  TestFunFC(e_15,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto m_92;
  y_20 :
  TestFunFC(x_23,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  goto g_65;
  g_65 :
  TestFunFC(z_23,&&y_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto z_92;
  y_23 :
  TestFunFC(b_24,&&a_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto b_93;
  a_24 :
  TestFunFC(d_24,&&c_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto c_93;
  c_24 :
  TestFunFC(t_21,&&e_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto d_93;
  e_24 :
  TestFunFC(l_24,&&g_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_19);
  goto l_93;
  g_24 :
  TestFunFC(n_24,&&m_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_19);
  goto m_93;
  m_24 :
  TestFunFC(o_24,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_19);
  goto u_93;
  s_19 :
  goto r_19;
  u_93 :
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compiler.r: App encountered"),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_29);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,13);
  Tset(App1("AppEncountered",App2("App",Egetd(0,12),Egetd(0,13))));
  Return();
  r_19 :
  goto q_19;
  m_93 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_n_31);
  Ccall(_stratego_o_31);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",ATmakeString("App"),App2("TCons",Egetd(2,1),App0("TNil"))));
  Ccall(_stratego_u_29);
  MoveTop(2,2);
  Move(1,1,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Rpush(p_24);
  q_93 :
  Cpush(r_24);
  Ccall(_stratego_y_28);
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
  Rpush(t_24);
  goto q_93;
  t_24 :
  AllBuild();
  goto s_24;
  q_24 :
  Cpop();
  s_24 :
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
  q_19 :
  goto p_19;
  l_93 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("BuildTerm",Egetd(0,12),Egetd(0,14),Egetd(0,15)));
  Return();
  p_19 :
  goto n_19;
  d_93 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,12);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,12),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto f_64;
  f_64 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto g_64;
  g_64 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto h_64;
  h_64 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(b_25);
  goto e_93;
  b_25 :
  goto u_24;
  e_93 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(c_25);
  f_93 :
  Cpush(e_25);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto x_63;
  x_63 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto y_63;
  y_63 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto z_63;
  z_63 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(j_25);
  goto g_93;
  j_25 :
  goto i_25;
  g_93 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_l_31);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto u_63;
  u_63 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto v_63;
  v_63 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto w_63;
  w_63 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(l_25);
  goto i_93;
  l_25 :
  goto k_25;
  i_93 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  k_25 :
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
  Rpush(q_25);
  goto f_93;
  q_25 :
  AllBuild();
  goto m_25;
  d_25 :
  Cpop();
  m_25 :
  Return();
  c_25 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto c_64;
  c_64 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto d_64;
  d_64 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto e_64;
  e_64 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(s_25);
  goto j_93;
  s_25 :
  goto r_25;
  j_93 :
  Move(1,1,3,4);
  Move(1,2,3,6);
  Cpush(u_25);
  NotNULLd(1,1);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,15),App0("TNil"))));
  Ccall(_stratego_m_31);
  NotNULLd(1,2);
  Tset(App1("Eget",Egetd(1,2)));
  goto t_25;
  u_25 :
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Egetd",Egetd(1,1),Egetd(1,2)));
  Tdupl();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Egetd",Egetd(1,1),Egetd(1,2)));
  MoveTop(1,3);
  Tpop();
  goto v_25;
  t_25 :
  Cpop();
  v_25 :
  Return();
  r_25 :
  Epopd(3,7);
  Return();
  u_24 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Epopd(1,3);
  Return();
  n_19 :
  goto m_19;
  c_93 :
  NotNULLd(0,12);
  Tset(App1("ATmakeReal",Egetd(0,12)));
  Return();
  m_19 :
  goto l_19;
  b_93 :
  NotNULLd(0,12);
  Tset(App1("MakeInt",Egetd(0,12)));
  Return();
  l_19 :
  goto k_19;
  z_92 :
  Epushd(1,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_j_31);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("ATmakeString",Egetd(1,1)));
  Epopd(1,1);
  Return();
  k_19 :
  goto j_19;
  m_92 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_f_31);
  Rpush(w_25);
  n_92 :
  Cpush(y_25);
  Ccall(_stratego_y_28);
  goto x_25;
  y_25 :
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
  goto j_63;
  j_63 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto k_63;
  k_63 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto l_63;
  l_63 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(b_26);
  goto q_92;
  b_26 :
  goto a_26;
  q_92 :
  Epushd(5,7);
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(c_26);
  r_92 :
  Cpush(e_26);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,5);
  MoveTop(6,1);
  goto a_63;
  a_63 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto b_63;
  b_63 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto c_63;
  c_63 :
  TestFunFC(s_0,&&fail,Egetd(6,5));
  Rpush(g_26);
  goto s_92;
  g_26 :
  goto f_26;
  s_92 :
  Epushd(7,6);
  NotNULLd(4,2);
  NotNULLd(6,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(6,4),App0("TNil"))));
  Ccall(_stratego_l_31);
  MoveTop(7,1);
  NotNULLd(6,2);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(7,1),App0("TNil"))));
  MoveTop(7,2);
  goto x_62;
  x_62 :
  TestFunFC(p_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto y_62;
  y_62 :
  TestFunFC(p_0,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto z_62;
  z_62 :
  TestFunFC(s_0,&&fail,Egetd(7,6));
  Rpush(i_26);
  goto u_92;
  i_26 :
  goto h_26;
  u_92 :
  Move(5,1,7,3);
  Move(5,2,7,5);
  Return();
  h_26 :
  Epopd(7,6);
  Return();
  f_26 :
  Epopd(6,5);
  OneNextSon();
  AllBuild();
  goto d_26;
  e_26 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_26);
  goto r_92;
  k_26 :
  AllBuild();
  goto j_26;
  d_26 :
  Cpop();
  j_26 :
  Return();
  c_26 :
  Tpop();
  NotNULLd(5,1);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,3);
  goto g_63;
  g_63 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto h_63;
  h_63 :
  TestFunFC(p_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto i_63;
  i_63 :
  TestFunFC(s_0,&&fail,Egetd(5,7));
  Rpush(m_26);
  goto v_92;
  m_26 :
  goto l_26;
  v_92 :
  Move(3,2,5,4);
  Move(3,3,5,6);
  Cpush(r_26);
  NotNULLd(3,2);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(0,15),App0("TNil"))));
  Ccall(_stratego_m_31);
  NotNULLd(3,3);
  Tset(App1("NotNULL",Egetd(3,3)));
  goto q_26;
  r_26 :
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("NotNULLd",Egetd(3,2),Egetd(3,3)));
  Tdupl();
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("NotNULLd",Egetd(3,2),Egetd(3,3)));
  MoveTop(3,4);
  Tpop();
  goto s_26;
  q_26 :
  Cpop();
  s_26 :
  Return();
  l_26 :
  Epopd(5,7);
  Return();
  a_26 :
  Epopd(4,5);
  Tpop();
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Epopd(3,4);
  OneNextSon();
  Rpush(v_26);
  goto n_92;
  v_26 :
  AllBuild();
  goto z_25;
  x_25 :
  Cpop();
  z_25 :
  Return();
  w_25 :
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
  l_92 :
  NotNULLd(0,12);
  Tset(App1("ICountRule",Egetd(0,12)));
  Return();
  i_19 :
  goto h_19;
  k_92 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  Tset(App2("Iprim2",Egetd(0,12),Egetd(0,13)));
  Return();
  h_19 :
  goto g_19;
  j_92 :
  NotNULLd(0,12);
  Tset(App1("Iprim",Egetd(0,12)));
  Return();
  g_19 :
  goto f_19;
  i_92 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Tpop"),App0("Nil"))))));
  Return();
  f_19 :
  goto c_19;
  f_92 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_n_31);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(0,15),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_e_31);
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
  c_92 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_e_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_e_30);
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
  z_91 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_e_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_e_30);
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
  w_91 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_e_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_e_30);
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
  t_91 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_e_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_e_30);
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
  s_91 :
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("OneNextSon"),App2("Cons",App3("Instr",Egetd(0,8),Egetd(0,14),Egetd(0,15)),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,9)),Egetd(0,14),Egetd(0,15)),App0("Nil"))))));
  Return();
  v_18 :
  goto u_18;
  r_91 :
  Tset(App1("Block",App0("Nil")));
  Return();
  u_18 :
  goto t_18;
  q_91 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("TravInit"),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,12)),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("AllBuild"),App0("Nil"))))));
  Return();
  t_18 :
  goto s_18;
  n_91 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_n_31);
  MoveTop(2,1);
  NotNULLd(0,12);
  NotNULLd(2,1);
  Tset(App2("AFun",Egetd(0,12),Egetd(2,1)));
  Ccall(_stratego_s_30);
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
  m_91 :
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(0,12);
  Tset(App1("Block",App2("Cons",App1("TpushIthSon",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,13),Egetd(0,14),Egetd(0,15)),App2("Cons",App1("TputIthSon",Egetd(0,12)),App0("Nil"))))));
  Return();
  r_18 :
  goto p_18;
  l_91 :
  NotNULLd(0,13);
  NotNULLd(0,7);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App3("SDef",Egetd(0,13),App0("Nil"),Egetd(0,7)),Egetd(0,14),Egetd(0,15)));
  Return();
  p_18 :
  goto o_18;
  k_91 :
  NotNULLd(0,12);
  NotNULLd(0,6);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App1("Label",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,6),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Return"),App0("Nil"))))));
  Return();
  o_18 :
  goto n_18;
  i_91 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_30);
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
  g_91 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Cpush(z_26);
  Tdupl();
  Ccall(_stratego_d_31);
  Cpop();
  Crestore();
  Cjump();
  z_26 :
  Ccall(_stratego_e_30);
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
  e_91 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Ccall(_stratego_d_31);
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
  c_91 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_30);
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
  h_90 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  MoveTop(2,1);
  goto z_61;
  z_61 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(b_27);
  goto i_90;
  b_27 :
  goto a_27;
  i_90 :
  Epushd(3,2);
  Ccall(_stratego_e_30);
  MoveTop(3,1);
  Move(1,1,3,1);
  NotNULLd(0,9);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,9),App0("TNil"))));
  Rpush(c_27);
  m_90 :
  Epushd(4,7);
  MoveTop(4,1);
  goto t_61;
  t_61 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto u_61;
  u_61 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,7,4,3,1);
  goto v_61;
  v_61 :
  TestFunFC(w_0,&&g_27,Egetd(4,4));
  goto w_61;
  w_61 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(f_27);
  goto n_90;
  g_27 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto x_61;
  x_61 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(f_27);
  goto o_90;
  f_27 :
  goto e_27;
  o_90 :
  Epushd(5,6);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_c_31);
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
  goto l_61;
  l_61 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto m_61;
  m_61 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,6,6,3,1);
  goto n_61;
  n_61 :
  TestFunFC(t_21,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  goto o_61;
  o_61 :
  TestFunFC(s_0,&&fail,Egetd(6,6));
  Rpush(p_27);
  goto q_90;
  p_27 :
  goto o_27;
  q_90 :
  Epushd(7,4);
  Tdupl();
  Epushd(8,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  NotNULLd(6,5);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(6,5),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(8,1);
  goto i_61;
  i_61 :
  TestFunFC(p_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto j_61;
  j_61 :
  TestFunFC(p_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto k_61;
  k_61 :
  TestFunFC(s_0,&&fail,Egetd(8,5));
  Rpush(r_27);
  goto s_90;
  r_27 :
  goto q_27;
  s_90 :
  Epushd(9,7);
  Tdupl();
  NotNULLd(8,4);
  Tset(Egetd(8,4));
  Rpush(s_27);
  t_90 :
  Cpush(x_27);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(10,5);
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
  Rpush(z_27);
  goto u_90;
  z_27 :
  goto y_27;
  u_90 :
  Epushd(11,6);
  NotNULLd(8,2);
  NotNULLd(10,4);
  Tset(App2("TCons",Egetd(8,2),App2("TCons",Egetd(10,4),App0("TNil"))));
  Ccall(_stratego_l_31);
  MoveTop(11,1);
  NotNULLd(10,2);
  NotNULLd(11,1);
  Tset(App2("TCons",Egetd(10,2),App2("TCons",Egetd(11,1),App0("TNil"))));
  MoveTop(11,2);
  goto t_60;
  t_60 :
  TestFunFC(p_0,&&fail,Egetd(11,2));
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  goto u_60;
  u_60 :
  TestFunFC(p_0,&&fail,Egetd(11,4));
  MoveArg(11,5,11,4,0);
  MoveArg(11,6,11,4,1);
  goto v_60;
  v_60 :
  TestFunFC(s_0,&&fail,Egetd(11,6));
  Rpush(d_28);
  goto w_90;
  d_28 :
  goto a_28;
  w_90 :
  Move(9,1,11,3);
  Move(9,2,11,5);
  Return();
  a_28 :
  Epopd(11,6);
  Return();
  y_27 :
  Epopd(10,5);
  OneNextSon();
  AllBuild();
  goto t_27;
  x_27 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_28);
  goto t_90;
  i_28 :
  AllBuild();
  goto e_28;
  t_27 :
  Cpop();
  e_28 :
  Return();
  s_27 :
  Tpop();
  NotNULLd(9,1);
  NotNULLd(9,2);
  Tset(App2("TCons",Egetd(9,1),App2("TCons",Egetd(9,2),App0("TNil"))));
  MoveTop(9,3);
  goto f_61;
  f_61 :
  TestFunFC(p_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto g_61;
  g_61 :
  TestFunFC(p_0,&&fail,Egetd(9,5));
  MoveArg(9,6,9,5,0);
  MoveArg(9,7,9,5,1);
  goto h_61;
  h_61 :
  TestFunFC(s_0,&&fail,Egetd(9,7));
  Rpush(l_28);
  goto x_90;
  l_28 :
  goto j_28;
  x_90 :
  Epushd(10,5);
  Move(7,1,9,4);
  Move(7,2,9,6);
  NotNULLd(0,14);
  Tset(Egetd(0,14));
  MoveTop(10,1);
  goto b_61;
  b_61 :
  TestFunFC(p_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  goto c_61;
  c_61 :
  TestFunFC(p_0,&&fail,Egetd(10,3));
  MoveArg(10,4,10,3,0);
  MoveArg(10,5,10,3,1);
  goto e_61;
  e_61 :
  TestFunFC(s_0,&&fail,Egetd(10,5));
  Rpush(o_28);
  goto y_90;
  o_28 :
  goto n_28;
  y_90 :
  Move(7,3,10,2);
  Move(7,4,10,4);
  Return();
  n_28 :
  Epopd(10,5);
  Return();
  j_28 :
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
  goto m_90;
  p_28 :
  OneNextSon();
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  MoveTop(5,2);
  goto q_61;
  q_61 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto r_61;
  r_61 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto s_61;
  s_61 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(q_28);
  goto z_90;
  q_28 :
  goto n_27;
  z_90 :
  NotNULLd(5,3);
  NotNULLd(5,5);
  Tset(App2("Cons",Egetd(5,3),Egetd(5,5)));
  Return();
  n_27 :
  Epopd(5,6);
  Return();
  e_27 :
  goto d_27;
  n_90 :
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
  Ccall(_stratego_b_31);
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
  n_89 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,9);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,9),App0("TNil"))));
  Rpush(r_28);
  p_89 :
  Epushd(3,7);
  MoveTop(3,1);
  goto a_60;
  a_60 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto b_60;
  b_60 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,7,3,3,1);
  goto c_60;
  c_60 :
  TestFunFC(w_0,&&w_28,Egetd(3,4));
  goto d_60;
  d_60 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(v_28);
  goto q_89;
  w_28 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto e_60;
  e_60 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(v_28);
  goto r_89;
  v_28 :
  goto u_28;
  r_89 :
  Epushd(4,6);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_c_31);
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
  goto s_59;
  s_59 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto t_59;
  t_59 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,6,5,3,1);
  goto u_59;
  u_59 :
  TestFunFC(t_21,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  goto v_59;
  v_59 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(k_30);
  goto t_89;
  k_30 :
  goto j_30;
  t_89 :
  Epushd(6,4);
  Tdupl();
  Epushd(7,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  NotNULLd(5,5);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(5,5),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(7,1);
  goto p_59;
  p_59 :
  TestFunFC(p_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto q_59;
  q_59 :
  TestFunFC(p_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto r_59;
  r_59 :
  TestFunFC(s_0,&&fail,Egetd(7,5));
  Rpush(o_30);
  goto v_89;
  o_30 :
  goto m_30;
  v_89 :
  Epushd(8,7);
  Tdupl();
  NotNULLd(7,4);
  Tset(Egetd(7,4));
  Rpush(p_30);
  w_89 :
  Cpush(s_31);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(9,5);
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
  Rpush(x_31);
  goto x_89;
  x_31 :
  goto v_31;
  x_89 :
  Epushd(10,6);
  NotNULLd(7,2);
  NotNULLd(9,4);
  Tset(App2("TCons",Egetd(7,2),App2("TCons",Egetd(9,4),App0("TNil"))));
  Ccall(_stratego_l_31);
  MoveTop(10,1);
  NotNULLd(9,2);
  NotNULLd(10,1);
  Tset(App2("TCons",Egetd(9,2),App2("TCons",Egetd(10,1),App0("TNil"))));
  MoveTop(10,2);
  goto b_59;
  b_59 :
  TestFunFC(p_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto c_59;
  c_59 :
  TestFunFC(p_0,&&fail,Egetd(10,4));
  MoveArg(10,5,10,4,0);
  MoveArg(10,6,10,4,1);
  goto d_59;
  d_59 :
  TestFunFC(s_0,&&fail,Egetd(10,6));
  Rpush(f_32);
  goto z_89;
  f_32 :
  goto z_31;
  z_89 :
  Move(8,1,10,3);
  Move(8,2,10,5);
  Return();
  z_31 :
  Epopd(10,6);
  Return();
  v_31 :
  Epopd(9,5);
  OneNextSon();
  AllBuild();
  goto r_31;
  s_31 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_32);
  goto w_89;
  h_32 :
  AllBuild();
  goto g_32;
  r_31 :
  Cpop();
  g_32 :
  Return();
  p_30 :
  Tpop();
  NotNULLd(8,1);
  NotNULLd(8,2);
  Tset(App2("TCons",Egetd(8,1),App2("TCons",Egetd(8,2),App0("TNil"))));
  MoveTop(8,3);
  goto m_59;
  m_59 :
  TestFunFC(p_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto n_59;
  n_59 :
  TestFunFC(p_0,&&fail,Egetd(8,5));
  MoveArg(8,6,8,5,0);
  MoveArg(8,7,8,5,1);
  goto o_59;
  o_59 :
  TestFunFC(s_0,&&fail,Egetd(8,7));
  Rpush(k_32);
  goto a_90;
  k_32 :
  goto i_32;
  a_90 :
  Epushd(9,5);
  Move(6,1,8,4);
  Move(6,2,8,6);
  NotNULLd(0,14);
  Tset(Egetd(0,14));
  MoveTop(9,1);
  goto j_59;
  j_59 :
  TestFunFC(p_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  goto k_59;
  k_59 :
  TestFunFC(p_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto l_59;
  l_59 :
  TestFunFC(s_0,&&fail,Egetd(9,5));
  Rpush(g_33);
  goto d_90;
  g_33 :
  goto l_32;
  d_90 :
  Move(6,3,9,2);
  Move(6,4,9,4);
  Return();
  l_32 :
  Epopd(9,5);
  Return();
  i_32 :
  Epopd(8,7);
  Return();
  m_30 :
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
  j_30 :
  Epopd(5,6);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(h_33);
  goto p_89;
  h_33 :
  OneNextSon();
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  MoveTop(4,2);
  goto x_59;
  x_59 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto y_59;
  y_59 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto z_59;
  z_59 :
  TestFunFC(s_0,&&fail,Egetd(4,6));
  Rpush(i_33);
  goto e_90;
  i_33 :
  goto x_28;
  e_90 :
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("Cons",Egetd(4,3),Egetd(4,5)));
  Return();
  x_28 :
  Epopd(4,6);
  Return();
  u_28 :
  goto t_28;
  q_89 :
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
  Ccall(_stratego_b_31);
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
  m_89 :
  Tset(App1("Block",App0("Nil")));
  Return();
  h_18 :
  goto g_18;
  k_89 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_30);
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
  g_89 :
  Tdupl();
  Epushd(1,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  MoveTop(1,2);
  goto p_58;
  p_58 :
  TestFunFC(n_24,&&n_33,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,1,1,2,1);
  Rpush(m_33);
  goto h_89;
  n_33 :
  TestFunFC(b_24,&&o_33,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_33);
  goto i_89;
  o_33 :
  TestFunFC(z_23,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_33);
  goto j_89;
  m_33 :
  goto l_33;
  j_89 :
  Return();
  l_33 :
  goto k_33;
  i_89 :
  Return();
  k_33 :
  goto j_33;
  h_89 :
  Return();
  j_33 :
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
  t_88 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,8);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto j_58;
  j_58 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto k_58;
  k_58 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_58;
  l_58 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(s_33);
  goto u_88;
  s_33 :
  goto r_33;
  u_88 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(v_33);
  v_88 :
  Cpush(y_33);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto l_57;
  l_57 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto m_57;
  m_57 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto n_57;
  n_57 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(b_34);
  goto w_88;
  b_34 :
  goto a_34;
  w_88 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_l_31);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto i_57;
  i_57 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto j_57;
  j_57 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto k_57;
  k_57 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(d_34);
  goto y_88;
  d_34 :
  goto c_34;
  y_88 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  c_34 :
  Epopd(5,6);
  Return();
  a_34 :
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
  goto v_88;
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
  goto g_58;
  g_58 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto h_58;
  h_58 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto i_58;
  i_58 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(h_34);
  goto z_88;
  h_34 :
  goto g_34;
  z_88 :
  Epushd(4,5);
  Move(1,1,3,4);
  Move(1,2,3,6);
  NotNULLd(0,1);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(4,1);
  goto d_58;
  d_58 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto e_58;
  e_58 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto f_58;
  f_58 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(j_34);
  goto a_89;
  j_34 :
  goto i_34;
  a_89 :
  Epushd(5,7);
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(k_34);
  b_89 :
  Cpush(m_34);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,5);
  MoveTop(6,1);
  goto w_57;
  w_57 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto x_57;
  x_57 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto y_57;
  y_57 :
  TestFunFC(s_0,&&fail,Egetd(6,5));
  Rpush(o_34);
  goto c_89;
  o_34 :
  goto n_34;
  c_89 :
  Epushd(7,6);
  NotNULLd(4,2);
  NotNULLd(6,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(6,4),App0("TNil"))));
  Ccall(_stratego_l_31);
  MoveTop(7,1);
  NotNULLd(6,2);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(7,1),App0("TNil"))));
  MoveTop(7,2);
  goto t_57;
  t_57 :
  TestFunFC(p_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto u_57;
  u_57 :
  TestFunFC(p_0,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto v_57;
  v_57 :
  TestFunFC(s_0,&&fail,Egetd(7,6));
  Rpush(q_34);
  goto e_89;
  q_34 :
  goto p_34;
  e_89 :
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
  goto b_89;
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
  goto a_58;
  a_58 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto b_58;
  b_58 :
  TestFunFC(p_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto c_58;
  c_58 :
  TestFunFC(s_0,&&fail,Egetd(5,7));
  Rpush(u_34);
  goto f_89;
  u_34 :
  goto t_34;
  f_89 :
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
  r_33 :
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
  m_88 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,8);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto b_57;
  b_57 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_57;
  c_57 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_57;
  d_57 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(w_34);
  goto n_88;
  w_34 :
  goto v_34;
  n_88 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(x_34);
  o_88 :
  Cpush(z_34);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto u_56;
  u_56 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto v_56;
  v_56 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto w_56;
  w_56 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(b_35);
  goto p_88;
  b_35 :
  goto a_35;
  p_88 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_l_31);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto r_56;
  r_56 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto s_56;
  s_56 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto t_56;
  t_56 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(d_35);
  goto r_88;
  d_35 :
  goto c_35;
  r_88 :
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
  goto o_88;
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
  goto y_56;
  y_56 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_56;
  z_56 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto a_57;
  a_57 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(h_35);
  goto s_88;
  h_35 :
  goto g_35;
  s_88 :
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
  i_88 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Cpush(i_35);
  Tdupl();
  Epushd(3,3);
  NotNULLd(0,11);
  Tset(Egetd(0,11));
  MoveTop(3,1);
  goto l_56;
  l_56 :
  TestFunFC(z_19,&&m_35,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_35);
  goto j_88;
  m_35 :
  TestFunFC(o_11,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_35);
  goto k_88;
  l_35 :
  goto k_35;
  k_88 :
  Return();
  k_35 :
  goto j_35;
  j_88 :
  Return();
  j_35 :
  Epopd(3,3);
  Cpop();
  Crestore();
  Cjump();
  i_35 :
  Ccall(_stratego_e_30);
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
  h_88 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(0,3);
  Tset(App4("Choices",App2("Choice",Egetd(0,12),Egetd(0,13)),Egetd(0,14),Egetd(0,15),Egetd(0,3)));
  Return();
  b_18 :
  goto a_18;
  f_88 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_30);
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
  c_88 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_e_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_e_30);
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
  b_88 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App2("Choice",Egetd(0,12),Egetd(0,13)),Egetd(0,14),Egetd(0,15)));
  Return();
  y_17 :
  goto w_17;
  a_88 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App3("Instr",Egetd(0,13),Egetd(0,14),Egetd(0,15)),App0("Nil")))));
  Return();
  w_17 :
  goto m_17;
  y_87 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_30);
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
  x_87 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Tpop"),App0("Nil"))))));
  Return();
  j_17 :
  goto h_17;
  w_87 :
  Tset(App1("Goto",ATmakeString("fail")));
  Return();
  h_17 :
  goto b_17;
  v_87 :
  Tset(App1("Block",App0("Nil")));
  Return();
  b_17 :
  Epopd(0,15);
  goto x_16;
  a_17 :
  Ccontinue(n_35);
  Ccall(_stratego_j_32);
  goto x_16;
  n_35 :
  Epushd(0,5);
  MoveTop(0,1);
  goto j_65;
  j_65 :
  TestFunFC(r_35,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  MoveArg(0,5,0,1,3);
  Rpush(q_35);
  goto a_94;
  q_35 :
  goto p_35;
  a_94 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,2),Egetd(0,4),Egetd(0,5)),App2("Cons",App1("Goto",Egetd(0,3)),App0("Nil")))));
  Return();
  p_35 :
  Epopd(0,5);
  goto o_35;
  x_16 :
  Cpop();
  o_35 :
ENDPROC

PROC(_stratego_b_31)
  Epushd(0,13);
  MoveTop(0,2);
  goto h_94;
  h_94 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,8,0,2,1);
  goto i_94;
  i_94 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_94;
  j_94 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto k_94;
  k_94 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  goto l_94;
  l_94 :
  TestFunFC(p_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,11,0,8,1);
  goto m_94;
  m_94 :
  TestFunFC(y_35,&&x_35,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,1,0,9,1);
  goto n_94;
  n_94 :
  TestFunFC(p_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto o_94;
  o_94 :
  TestFunFC(s_0,&&fail,Egetd(0,13));
  Rpush(w_35);
  goto d_96;
  x_35 :
  TestFunFC(b_24,&&z_35,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto p_94;
  p_94 :
  TestFunFC(p_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto q_94;
  q_94 :
  TestFunFC(s_0,&&fail,Egetd(0,13));
  Rpush(w_35);
  goto f_96;
  z_35 :
  TestFunFC(d_24,&&a_36,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto r_94;
  r_94 :
  TestFunFC(p_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto s_94;
  s_94 :
  TestFunFC(s_0,&&fail,Egetd(0,13));
  Rpush(w_35);
  goto g_96;
  a_36 :
  TestFunFC(z_23,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto t_94;
  t_94 :
  TestFunFC(p_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto u_94;
  u_94 :
  TestFunFC(s_0,&&fail,Egetd(0,13));
  Rpush(w_35);
  goto h_96;
  w_35 :
  goto v_35;
  h_96 :
  Epushd(1,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Ccall(_stratego_j_31);
  MoveTop(1,1);
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(1,1);
  NotNULLd(0,12);
  Tset(App4("TestStr",Egetd(0,4),Egetd(0,6),Egetd(1,1),Egetd(0,12)));
  Epopd(1,1);
  Return();
  v_35 :
  goto u_35;
  g_96 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,10);
  NotNULLd(0,12);
  Tset(App4("TestReal",Egetd(0,4),Egetd(0,6),Egetd(0,10),Egetd(0,12)));
  Return();
  u_35 :
  goto t_35;
  f_96 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,10);
  NotNULLd(0,12);
  Tset(App4("TestInt",Egetd(0,4),Egetd(0,6),Egetd(0,10),Egetd(0,12)));
  Return();
  t_35 :
  goto s_35;
  d_96 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  NotNULLd(0,1);
  Tset(App2("AFun",Egetd(0,10),Egetd(0,1)));
  Ccall(_stratego_s_30);
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

PROC(_stratego_c_31)
  _ST_plus();
ENDPROC

PROC(_stratego_d_31)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_z_30);
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_31)
  _ST_add();
ENDPROC

PROC(_stratego_f_31)
  Rpush(b_36);
  b_101 :
  Cpush(d_36);
  Epushd(0,2);
  MoveTop(0,1);
  goto o_96;
  o_96 :
  TestFunFC(t_21,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_36);
  goto c_101;
  f_36 :
  goto e_36;
  c_101 :
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
  Ccall(_stratego_i_31);
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
  goto b_101;
  h_36 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_g_31);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto v_96;
  v_96 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_96;
  w_96 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto x_96;
  x_96 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(j_36);
  goto i_101;
  j_36 :
  goto i_36;
  i_101 :
  Move(0,3,1,4);
  Return();
  i_36 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_36);
  j_101 :
  Cpush(m_36);
  Ccall(_stratego_y_28);
  Tset(App0("Nil"));
  goto l_36;
  m_36 :
  Epushd(1,3);
  MoveTop(1,1);
  goto k_97;
  k_97 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(p_36);
  goto k_101;
  p_36 :
  goto o_36;
  k_101 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(q_36);
  goto j_101;
  q_36 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto g_97;
  g_97 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto i_97;
  i_97 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto j_97;
  j_97 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(s_36);
  goto n_101;
  s_36 :
  goto r_36;
  n_101 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(t_36);
  o_101 :
  Cpush(v_36);
  Ccall(_stratego_y_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto u_36;
  v_36 :
  Ccontinue(w_36);
  Epushd(3,3);
  MoveTop(3,1);
  goto f_97;
  f_97 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_36);
  goto p_101;
  y_36 :
  goto x_36;
  p_101 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(z_36);
  r_101 :
  Cpush(b_37);
  Epushd(4,3);
  MoveTop(4,1);
  goto e_97;
  e_97 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(d_37);
  goto s_101;
  d_37 :
  goto c_37;
  s_101 :
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
  goto r_101;
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
  goto o_101;
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
  goto o_101;
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
  goto n_97;
  n_97 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_97;
  o_97 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_97;
  p_97 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(l_37);
  goto u_101;
  l_37 :
  goto k_37;
  u_101 :
  Move(0,2,1,4);
  Return();
  k_37 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(m_37);
  v_101 :
  Cpush(p_37);
  Ccall(_stratego_y_28);
  Tset(App0("Nil"));
  goto o_37;
  p_37 :
  Epushd(1,3);
  MoveTop(1,1);
  goto c_98;
  c_98 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(s_37);
  goto w_101;
  s_37 :
  goto r_37;
  w_101 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(t_37);
  goto b_101;
  t_37 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(u_37);
  goto v_101;
  u_37 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto y_97;
  y_97 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_97;
  z_97 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto b_98;
  b_98 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(w_37);
  goto z_101;
  w_37 :
  goto v_37;
  z_101 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(x_37);
  a_102 :
  Cpush(z_37);
  Ccall(_stratego_y_28);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto y_37;
  z_37 :
  Ccontinue(a_38);
  Epushd(3,3);
  MoveTop(3,1);
  goto x_97;
  x_97 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(c_38);
  goto b_102;
  c_38 :
  goto b_38;
  b_102 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(d_38);
  c_102 :
  Cpush(f_38);
  Epushd(4,3);
  MoveTop(4,1);
  goto w_97;
  w_97 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(h_38);
  goto d_102;
  h_38 :
  goto g_38;
  d_102 :
  Move(3,2,4,2);
  Return();
  g_38 :
  Epopd(4,3);
  goto e_38;
  f_38 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_38);
  goto c_102;
  j_38 :
  AllBuild();
  goto i_38;
  e_38 :
  Cpop();
  i_38 :
  Return();
  d_38 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(k_38);
  goto a_102;
  k_38 :
  Return();
  b_38 :
  Epopd(3,3);
  goto y_37;
  a_38 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_38);
  goto a_102;
  m_38 :
  AllBuild();
  goto l_38;
  y_37 :
  Cpop();
  l_38 :
  Return();
  x_37 :
  Return();
  v_37 :
  Epopd(2,7);
  Return();
  r_37 :
  Epopd(1,3);
  goto q_37;
  o_37 :
  Cpop();
  q_37 :
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

PROC(_stratego_g_31)
  Epushd(0,5);
  MoveTop(0,5);
  goto u_102;
  u_102 :
  TestFunFC(p_0,&&q_38,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto v_102;
  v_102 :
  TestFunFC(p_0,&&r_38,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_102;
  w_102 :
  TestFunFC(s_0,&&s_38,Egetd(0,4));
  Cpush(u_38);
  Rpush(v_38);
  goto i_104;
  v_38 :
  goto t_38;
  u_38 :
  Rpush(x_38);
  goto n_104;
  x_38 :
  goto w_38;
  t_38 :
  Cpop();
  w_38 :
  goto p_38;
  s_38 :
  Rpush(p_38);
  goto n_104;
  r_38 :
  Rpush(p_38);
  goto n_104;
  q_38 :
  Rpush(p_38);
  goto n_104;
  p_38 :
  goto o_38;
  n_104 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(y_38);
  p_104 :
  Cpush(a_39);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(c_39);
  Epushd(1,7);
  MoveTop(1,1);
  goto l_102;
  l_102 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto m_102;
  m_102 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto n_102;
  n_102 :
  TestFunFC(p_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto o_102;
  o_102 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  Rpush(e_39);
  goto q_104;
  e_39 :
  goto d_39;
  q_104 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  d_39 :
  Epopd(1,7);
  goto b_39;
  c_39 :
  Ccall(_stratego_h_31);
  goto f_39;
  b_39 :
  Cpop();
  f_39 :
  OneNextSon();
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  goto z_38;
  a_39 :
  Epushd(1,7);
  MoveTop(1,1);
  goto q_102;
  q_102 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_102;
  r_102 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto s_102;
  s_102 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto t_102;
  t_102 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(i_39);
  goto r_104;
  i_39 :
  goto h_39;
  r_104 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  h_39 :
  Epopd(1,7);
  goto g_39;
  z_38 :
  Cpop();
  g_39 :
  Cpush(k_39);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_28);
  OneNextSon();
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  goto j_39;
  k_39 :
  Rpush(m_39);
  goto p_104;
  m_39 :
  goto l_39;
  j_39 :
  Cpop();
  l_39 :
  Return();
  y_38 :
  Return();
  o_38 :
  goto n_38;
  i_104 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(n_39);
  j_104 :
  Cpush(p_39);
  Ccall(_stratego_y_28);
  goto o_39;
  p_39 :
  Ccontinue(s_39);
  Epushd(1,3);
  MoveTop(1,1);
  goto j_102;
  j_102 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(v_39);
  goto k_104;
  v_39 :
  goto t_39;
  k_104 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(w_39);
  l_104 :
  Cpush(y_39);
  Epushd(2,3);
  MoveTop(2,1);
  goto i_102;
  i_102 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(a_40);
  goto m_104;
  a_40 :
  goto z_39;
  m_104 :
  Move(1,2,2,2);
  Return();
  z_39 :
  Epopd(2,3);
  goto x_39;
  y_39 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_40);
  goto l_104;
  c_40 :
  AllBuild();
  goto b_40;
  x_39 :
  Cpop();
  b_40 :
  Return();
  w_39 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_40);
  goto j_104;
  d_40 :
  Return();
  t_39 :
  Epopd(1,3);
  goto o_39;
  s_39 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_40);
  goto j_104;
  f_40 :
  AllBuild();
  goto e_40;
  o_39 :
  Cpop();
  e_40 :
  Return();
  n_39 :
  Return();
  n_38 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_31)
  Epushd(0,7);
  MoveTop(0,1);
  goto v_105;
  v_105 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto w_105;
  w_105 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_105;
  x_105 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_105;
  y_105 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(h_40);
  goto z_107;
  h_40 :
  goto g_40;
  z_107 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto u_104;
  u_104 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_104;
  v_104 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_104;
  w_104 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(j_40);
  goto a_108;
  j_40 :
  goto i_40;
  a_108 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  i_40 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto z_104;
  z_104 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto a_105;
  a_105 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_105;
  b_105 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(l_40);
  goto b_108;
  l_40 :
  goto k_40;
  b_108 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  k_40 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(m_40);
  c_108 :
  Epushd(2,9);
  MoveTop(2,1);
  goto i_105;
  i_105 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto j_105;
  j_105 :
  TestFunFC(w_0,&&q_40,Egetd(2,2));
  goto k_105;
  k_105 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto l_105;
  l_105 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto m_105;
  m_105 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(p_40);
  goto d_108;
  q_40 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto n_105;
  n_105 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto o_105;
  o_105 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto p_105;
  p_105 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(p_40);
  goto e_108;
  p_40 :
  goto o_40;
  e_108 :
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
  Rpush(s_40);
  goto c_108;
  s_40 :
  OneNextSon();
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto f_105;
  f_105 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto g_105;
  g_105 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto h_105;
  h_105 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(t_40);
  goto f_108;
  t_40 :
  goto r_40;
  f_108 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  r_40 :
  Epopd(3,5);
  Return();
  o_40 :
  goto n_40;
  d_108 :
  Tset(App0("Nil"));
  Return();
  n_40 :
  Epopd(2,9);
  Return();
  m_40 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto s_105;
  s_105 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto t_105;
  t_105 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto u_105;
  u_105 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(v_40);
  goto h_108;
  v_40 :
  goto u_40;
  h_108 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(w_40);
  i_108 :
  Cpush(y_40);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_40);
  goto i_108;
  z_40 :
  AllBuild();
  goto x_40;
  y_40 :
  Ccall(_stratego_y_28);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto a_41;
  x_40 :
  Cpop();
  a_41 :
  Return();
  w_40 :
  Return();
  u_40 :
  Epopd(1,9);
  Return();
  g_40 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_i_31)
  Epushd(0,6);
  MoveTop(0,2);
  goto l_108;
  l_108 :
  TestFunFC(p_23,&&e_41,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(d_41);
  goto z_108;
  e_41 :
  TestFunFC(f_41,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto m_108;
  m_108 :
  TestFunFC(g_41,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(d_41);
  goto a_109;
  d_41 :
  goto c_41;
  a_109 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_f_31);
  Return();
  c_41 :
  goto b_41;
  z_108 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  b_41 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_j_31)
  Ccall(_stratego_v_29);
  Rpush(h_41);
  b_109 :
  Cpush(j_41);
  Ccall(_stratego_k_31);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_41);
  goto b_109;
  k_41 :
  AllBuild();
  AllBuild();
  goto i_41;
  j_41 :
  Ccontinue(l_41);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_41);
  goto b_109;
  m_41 :
  AllBuild();
  goto i_41;
  l_41 :
  Ccall(_stratego_y_28);
  goto n_41;
  i_41 :
  Cpop();
  n_41 :
  Return();
  h_41 :
  Ccall(_stratego_w_29);
ENDPROC

PROC(_stratego_k_31)
  Epushd(0,3);
  MoveTop(0,1);
  goto f_109;
  f_109 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto g_109;
  g_109 :
  TestInt(0,2,34,&&s_41);
  Rpush(r_41);
  goto n_109;
  s_41 :
  TestInt(0,2,92,&&t_41);
  Rpush(r_41);
  goto o_109;
  t_41 :
  TestInt(0,2,10,&&fail);
  Rpush(r_41);
  goto p_109;
  r_41 :
  goto q_41;
  p_109 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(110),Egetd(0,3))));
  Return();
  q_41 :
  goto p_41;
  o_109 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(92),Egetd(0,3))));
  Return();
  p_41 :
  goto o_41;
  n_109 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(34),Egetd(0,3))));
  Return();
  o_41 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_l_31)
  Epushd(0,5);
  MoveTop(0,1);
  goto z_109;
  z_109 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_110;
  a_110 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto b_110;
  b_110 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(v_41);
  goto b_111;
  v_41 :
  goto u_41;
  b_111 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",MakeInt(1),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil")))));
  Rpush(w_41);
  c_111 :
  Epushd(1,9);
  MoveTop(1,1);
  goto u_109;
  u_109 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_109;
  v_109 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_109;
  w_109 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,9,1,5,1);
  goto x_109;
  x_109 :
  TestFunFC(a_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto y_109;
  y_109 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Cpush(b_42);
  Rpush(c_42);
  goto d_111;
  c_42 :
  goto a_42;
  b_42 :
  Rpush(e_42);
  goto e_111;
  e_42 :
  goto d_42;
  a_42 :
  Cpop();
  d_42 :
  goto z_41;
  z_41 :
  goto y_41;
  e_111 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_c_31);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  NotNULLd(1,8);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,8),App0("TNil")))));
  Rpush(f_42);
  goto c_111;
  f_42 :
  Epopd(2,1);
  Return();
  y_41 :
  goto x_41;
  d_111 :
  Epushd(2,1);
  Move(1,4,1,7);
  Move(2,1,1,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Epopd(2,1);
  Return();
  x_41 :
  Epopd(1,9);
  Return();
  w_41 :
  Return();
  u_41 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_m_31)
  Epushd(0,5);
  MoveTop(0,1);
  goto h_111;
  h_111 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_111;
  i_111 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_111;
  j_111 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(h_42);
  goto q_111;
  h_42 :
  goto g_42;
  q_111 :
  Move(0,2,0,4);
  Return();
  g_42 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_31)
  Rpush(i_42);
  b_112 :
  Cpush(k_42);
  Ccall(_stratego_y_28);
  Tset(MakeInt(0));
  goto j_42;
  k_42 :
  Epushd(0,3);
  MoveTop(0,1);
  goto t_111;
  t_111 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(n_42);
  goto c_112;
  n_42 :
  goto m_42;
  c_112 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(o_42);
  goto b_112;
  o_42 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_e_31);
  Epopd(1,1);
  Return();
  m_42 :
  Epopd(0,3);
  goto l_42;
  j_42 :
  Cpop();
  l_42 :
  Return();
  i_42 :
ENDPROC

PROC(_stratego_o_31)
  Rpush(p_42);
  i_113 :
  Epushd(0,4);
  MoveTop(0,1);
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_p_31);
  MoveTop(0,2);
  Tset(MakeInt(48));
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_e_31);
  MoveTop(0,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_q_31);
  Ccall(_stratego_a_32);
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
  Cpush(r_42);
  Epushd(1,1);
  MoveTop(1,1);
  goto o_112;
  o_112 :
  TestInt(1,1,0,&&fail);
  Rpush(t_42);
  goto s_113;
  t_42 :
  goto s_42;
  s_113 :
  Tset(App0("Nil"));
  Return();
  s_42 :
  Epopd(1,1);
  goto q_42;
  r_42 :
  Rpush(v_42);
  goto i_113;
  v_42 :
  goto u_42;
  q_42 :
  Cpop();
  u_42 :
  OneNextSon();
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  Ccall(_stratego_b_32);
  Epopd(0,4);
  Return();
  p_42 :
  Ccall(_stratego_e_32);
  Ccall(_stratego_w_29);
ENDPROC

PROC(_stratego_p_31)
  _ST_mod();
ENDPROC

PROC(_stratego_q_31)
  _ST_div();
ENDPROC

PROC(_stratego_a_32)
  _ST_int();
ENDPROC

PROC(_stratego_b_32)
  Epushd(0,7);
  MoveTop(0,1);
  goto v_113;
  v_113 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_113;
  w_113 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto x_113;
  x_113 :
  TestFunFC(w_0,&&z_42,Egetd(0,4));
  goto y_113;
  y_113 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(y_42);
  goto l_114;
  z_42 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto z_113;
  z_113 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(y_42);
  goto m_114;
  y_42 :
  goto x_42;
  m_114 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  x_42 :
  goto w_42;
  l_114 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  w_42 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_e_32)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(b_43);
  r_115 :
  Cpush(d_43);
  Epushd(1,7);
  MoveTop(1,1);
  goto p_114;
  p_114 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto q_114;
  q_114 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto r_114;
  r_114 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto s_114;
  s_114 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(f_43);
  goto s_115;
  f_43 :
  goto e_43;
  s_115 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(g_43);
  goto r_115;
  g_43 :
  Return();
  e_43 :
  Epopd(1,7);
  goto c_43;
  d_43 :
  goto h_43;
  c_43 :
  Cpop();
  h_43 :
  Return();
  b_43 :
  MoveTop(0,2);
  goto u_114;
  u_114 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto v_114;
  v_114 :
  TestFunFC(w_0,&&fail,Egetd(0,3));
  goto w_114;
  w_114 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_114;
  x_114 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(i_43);
  goto t_115;
  i_43 :
  goto a_43;
  t_115 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  a_43 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_j_32)
  Epushd(0,11);
  MoveTop(0,4);
  goto v_116;
  v_116 :
  TestFunFC(r_35,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  MoveArg(0,10,0,4,2);
  MoveArg(0,11,0,4,3);
  goto w_116;
  w_116 :
  TestFunFC(d_22,&&s_43,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  MoveArg(0,2,0,5,2);
  MoveArg(0,3,0,5,3);
  goto x_116;
  x_116 :
  TestFunFC(t_21,&&fail,Egetd(0,8));
  MoveArg(0,1,0,8,0);
  Rpush(n_43);
  goto t_119;
  s_43 :
  TestFunFC(u_43,&&t_43,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(n_43);
  goto b_120;
  t_43 :
  TestFunFC(j_12,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto y_116;
  y_116 :
  TestFunFC(i_12,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto z_116;
  z_116 :
  TestFunFC(w_0,&&fail,Egetd(0,8));
  Cpush(w_43);
  Rpush(x_43);
  goto c_120;
  x_43 :
  goto v_43;
  w_43 :
  Rpush(z_43);
  goto e_120;
  z_43 :
  goto y_43;
  v_43 :
  Cpop();
  y_43 :
  goto n_43;
  n_43 :
  goto m_43;
  e_120 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Ccall(_stratego_d_31);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,7);
  Tset(App2("Ccall",Egetd(0,7),App0("Nil")));
  Epopd(1,1);
  Return();
  m_43 :
  goto l_43;
  c_120 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Cpush(a_44);
  Tdupl();
  Ccall(_stratego_d_31);
  Cpop();
  Crestore();
  Cjump();
  a_44 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,9);
  NotNULLd(0,7);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(0,9)),App2("Cons",App1("Goto",Egetd(0,7)),App0("Nil")))));
  Epopd(1,1);
  Return();
  l_43 :
  goto k_43;
  b_120 :
  NotNULLd(0,6);
  Tset(App1("Goto",Egetd(0,6)));
  Return();
  k_43 :
  goto j_43;
  t_119 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,1);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto q_116;
  q_116 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_116;
  r_116 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_116;
  s_116 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(c_44);
  goto u_119;
  c_44 :
  goto b_44;
  u_119 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(d_44);
  v_119 :
  Cpush(f_44);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto f_116;
  f_116 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto g_116;
  g_116 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto h_116;
  h_116 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(h_44);
  goto w_119;
  h_44 :
  goto g_44;
  w_119 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_l_31);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto c_116;
  c_116 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto d_116;
  d_116 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto e_116;
  e_116 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(j_44);
  goto y_119;
  j_44 :
  goto i_44;
  y_119 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  i_44 :
  Epopd(5,6);
  Return();
  g_44 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto e_44;
  f_44 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_44);
  goto v_119;
  l_44 :
  AllBuild();
  goto k_44;
  e_44 :
  Cpop();
  k_44 :
  Return();
  d_44 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto n_116;
  n_116 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto o_116;
  o_116 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto p_116;
  p_116 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(n_44);
  goto z_119;
  n_44 :
  goto m_44;
  z_119 :
  Epushd(4,5);
  Move(1,1,3,4);
  Move(1,2,3,6);
  NotNULLd(0,3);
  NotNULLd(0,9);
  NotNULLd(0,10);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,9),App2("TCons",Egetd(0,10),App2("TCons",Egetd(0,11),App0("TNil"))))));
  Ccall(_stratego_p_32);
  MoveTop(4,1);
  goto k_116;
  k_116 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto l_116;
  l_116 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto m_116;
  m_116 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(q_44);
  goto a_120;
  q_44 :
  goto o_44;
  a_120 :
  Move(1,3,4,2);
  Move(1,4,4,4);
  Return();
  o_44 :
  Epopd(4,5);
  Return();
  m_44 :
  Epopd(3,7);
  Return();
  b_44 :
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
  j_43 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_p_32)
  Epushd(0,9);
  MoveTop(0,1);
  goto j_120;
  j_120 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto k_120;
  k_120 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto l_120;
  l_120 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto m_120;
  m_120 :
  TestFunFC(p_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto n_120;
  n_120 :
  TestFunFC(s_0,&&fail,Egetd(0,9));
  goto o_120;
  o_120 :
  TestFunFC(b_21,&&v_44,Egetd(0,2));
  Cpush(y_44);
  Rpush(z_44);
  goto h_121;
  z_44 :
  goto x_44;
  y_44 :
  Rpush(b_45);
  goto i_121;
  b_45 :
  goto a_45;
  x_44 :
  Cpop();
  a_45 :
  goto t_44;
  v_44 :
  Rpush(t_44);
  goto i_121;
  t_44 :
  goto s_44;
  i_121 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App0("Fail"),App0("TNil"))));
  Cpush(c_45);
  Tdupl();
  Ccall(_stratego_m_31);
  Cpop();
  Crestore();
  Cjump();
  c_45 :
  Ccall(_stratego_e_30);
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
  s_44 :
  goto r_44;
  h_121 :
  Tset(App2("TCons",ATmakeString("fail"),App2("TCons",App1("Block",App0("Nil")),App0("TNil"))));
  Return();
  r_44 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_q_32)
  Rpush(o_45);
  z_121 :
  Cpush(q_45);
  Cpush(j_46);
  Ccall(_stratego_y_28);
  goto i_46;
  j_46 :
  Ccontinue(k_46);
  TestFunTop(l_46);
  TravInit();
  OneNextSon();
  Rpush(m_46);
  goto z_121;
  m_46 :
  AllBuild();
  goto i_46;
  k_46 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_46);
  goto z_121;
  p_46 :
  AllBuild();
  Rpush(q_46);
  a_122 :
  Cpush(q_47);
  Epushd(0,6);
  MoveTop(0,1);
  goto m_121;
  m_121 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto n_121;
  n_121 :
  TestFunFC(l_46,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto o_121;
  o_121 :
  TestFunFC(w_0,&&e_48,Egetd(0,3));
  Rpush(b_48);
  goto b_122;
  e_48 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(b_48);
  goto c_122;
  b_48 :
  goto v_47;
  c_122 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,4),App2("Cons",App1("Block",Egetd(0,5)),Egetd(0,6))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_48);
  goto a_122;
  f_48 :
  AllBuild();
  Rpush(g_48);
  goto a_122;
  g_48 :
  Return();
  v_47 :
  goto u_47;
  b_122 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  u_47 :
  Epopd(0,6);
  goto l_47;
  q_47 :
  goto h_48;
  l_47 :
  Cpop();
  h_48 :
  Return();
  q_46 :
  goto o_46;
  i_46 :
  Cpop();
  o_46 :
  goto p_45;
  q_45 :
  goto i_48;
  p_45 :
  Cpop();
  i_48 :
  Return();
  o_45 :
ENDPROC

PROC(_stratego_r_32)
  Cpush(k_48);
  TestFunTop(l_46);
  TravInit();
  OneNextSon();
  Rpush(l_48);
  d_122 :
  Cpush(o_48);
  n_48 :
  Ccall(_stratego_s_32);
  Tduplinv();
  goto n_48;
  o_48 :
  Cpush(q_48);
  Ccall(_stratego_y_28);
  goto p_48;
  q_48 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_48);
  goto d_122;
  s_48 :
  AllBuild();
  goto r_48;
  p_48 :
  Cpop();
  r_48 :
  Cpush(u_48);
  t_48 :
  Ccall(_stratego_s_32);
  Tduplinv();
  goto t_48;
  u_48 :
  Return();
  l_48 :
  AllBuild();
  goto j_48;
  k_48 :
  goto i_49;
  j_48 :
  Cpop();
  i_49 :
ENDPROC

PROC(_stratego_s_32)
  Epushd(0,10);
  MoveTop(0,5);
  goto p_122;
  p_122 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto q_122;
  q_122 :
  TestFunFC(b_50,&&a_50,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto r_122;
  r_122 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto s_122;
  s_122 :
  TestFunFC(c_50,&&fail,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  Rpush(z_49);
  goto k_124;
  a_50 :
  TestFunFC(e_50,&&d_50,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,1,0,6,1);
  goto t_122;
  t_122 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto u_122;
  u_122 :
  TestFunFC(g_50,&&fail,Egetd(0,9));
  goto v_122;
  v_122 :
  TestFunFC(a_0,&&fail,Egetd(0,10));
  MoveArg(0,2,0,10,0);
  MoveArg(0,3,0,10,1);
  goto w_122;
  w_122 :
  TestFunFC(h_50,&&fail,Egetd(0,2));
  Rpush(z_49);
  goto l_124;
  d_50 :
  TestFunFC(j_50,&&i_50,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto x_122;
  x_122 :
  TestFunFC(a_0,&&k_50,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto y_122;
  y_122 :
  TestFunFC(j_50,&&l_50,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  goto z_122;
  z_122 :
  TestInt(0,7,0,&&m_50);
  Cpush(o_50);
  Rpush(u_50);
  goto m_124;
  u_50 :
  goto n_50;
  o_50 :
  Rpush(x_50);
  goto o_124;
  x_50 :
  goto v_50;
  n_50 :
  Cpop();
  v_50 :
  goto z_49;
  m_50 :
  Rpush(z_49);
  goto o_124;
  l_50 :
  goto a_123;
  a_123 :
  TestInt(0,7,0,&&fail);
  Rpush(z_49);
  goto m_124;
  k_50 :
  goto a_123;
  i_50 :
  TestFunFC(a_51,&&y_50,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto b_123;
  b_123 :
  TestFunFC(a_0,&&c_51,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto c_123;
  c_123 :
  TestFunFC(a_51,&&d_51,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  goto d_123;
  d_123 :
  TestInt(0,7,0,&&f_51);
  Cpush(j_51);
  Rpush(l_51);
  goto n_124;
  l_51 :
  goto g_51;
  j_51 :
  Rpush(q_51);
  goto q_124;
  q_51 :
  goto n_51;
  g_51 :
  Cpop();
  n_51 :
  goto z_49;
  f_51 :
  Rpush(z_49);
  goto q_124;
  d_51 :
  goto e_123;
  e_123 :
  TestInt(0,7,0,&&fail);
  Rpush(z_49);
  goto n_124;
  c_51 :
  goto e_123;
  y_50 :
  TestFunFC(r_51,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto f_123;
  f_123 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto g_123;
  g_123 :
  TestFunFC(s_51,&&fail,Egetd(0,9));
  Rpush(z_49);
  goto s_124;
  z_49 :
  goto y_49;
  s_124 :
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Return();
  y_49 :
  goto x_49;
  q_124 :
  Epushd(1,1);
  NotNULLd(0,7);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,4),App0("TNil"))));
  Ccall(_stratego_c_31);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("Cons",App1("Epop",Egetd(1,1)),Egetd(0,10)));
  Epopd(1,1);
  Return();
  x_49 :
  goto w_49;
  o_124 :
  Epushd(1,1);
  NotNULLd(0,7);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,4),App0("TNil"))));
  Ccall(_stratego_c_31);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("Cons",App1("Epush",Egetd(1,1)),Egetd(0,10)));
  Epopd(1,1);
  Return();
  w_49 :
  goto v_49;
  n_124 :
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  v_49 :
  goto u_49;
  m_124 :
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  u_49 :
  goto t_49;
  l_124 :
  NotNULLd(0,7);
  NotNULLd(0,1);
  NotNULLd(0,3);
  Tset(App2("Cons",App2("MatchFun",Egetd(0,7),Egetd(0,1)),Egetd(0,3)));
  Return();
  t_49 :
  goto s_49;
  k_124 :
  Epushd(1,1);
  Move(0,7,0,4);
  Move(1,1,0,10);
  NotNULLd(0,7);
  NotNULLd(1,1);
  Tset(App2("Cons",App1("MatchVar",Egetd(0,7)),Egetd(1,1)));
  Epopd(1,1);
  Return();
  s_49 :
  Epopd(0,10);
ENDPROC

PROC(_stratego_t_32)
  Tset(ATmakeString("symbol-table"));
  Ccall(_stratego_w_32);
  Rpush(t_51);
  b_126 :
  Cpush(v_51);
  Ccall(_stratego_y_28);
  goto u_51;
  v_51 :
  Ccontinue(b_53);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,7);
  MoveTop(0,1);
  goto u_124;
  u_124 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto v_124;
  v_124 :
  TestFunFC(n_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_124;
  w_124 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto x_124;
  x_124 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(g_53);
  goto c_126;
  g_53 :
  goto d_53;
  c_126 :
  Return();
  d_53 :
  Epopd(0,7);
  OneNextSon();
  Rpush(i_53);
  goto b_126;
  i_53 :
  AllBuild();
  goto u_51;
  b_53 :
  Epushd(0,3);
  MoveTop(0,1);
  goto z_124;
  z_124 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_53);
  goto d_126;
  p_53 :
  goto o_53;
  d_126 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_53);
  goto b_126;
  q_53 :
  Return();
  o_53 :
  Epopd(0,3);
  goto n_53;
  u_51 :
  Cpop();
  n_53 :
  Return();
  t_51 :
  Rpush(r_53);
  e_126 :
  Cpush(t_53);
  Ccall(_stratego_y_28);
  goto s_53;
  t_53 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,7);
  MoveTop(0,1);
  goto b_125;
  b_125 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto c_125;
  c_125 :
  TestFunFC(n_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto d_125;
  d_125 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto e_125;
  e_125 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(z_53);
  goto f_126;
  z_53 :
  goto y_53;
  f_126 :
  NotNULLd(0,6);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",App2("VARDECL",App0("ATerm"),Egetd(0,6)),App2("TCons",App2("MOVE",Egetd(0,6),App3("ATmakeAFun",Egetd(0,3),Egetd(0,4),MakeInt(0))),App0("TNil"))));
  Return();
  y_53 :
  Epopd(0,7);
  OneNextSon();
  Rpush(e_54);
  goto e_126;
  e_54 :
  AllBuild();
  goto x_53;
  s_53 :
  Cpop();
  x_53 :
  Return();
  r_53 :
  Ccall(_stratego_y_32);
ENDPROC

PROC(_stratego_w_32)
  Epushd(0,1);
  MoveTop(0,1);
  Ccall(_stratego_x_32);
  Rpush(f_54);
  q_126 :
  Cpush(l_54);
  Ccall(_stratego_y_28);
  goto k_54;
  l_54 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_z_30);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,2),App0("TNil"))));
  Epopd(1,2);
  OneNextSon();
  Rpush(n_54);
  goto q_126;
  n_54 :
  AllBuild();
  goto m_54;
  k_54 :
  Cpop();
  m_54 :
  Return();
  f_54 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_32)
  _ST_table_keys();
ENDPROC

PROC(_stratego_y_32)
  Rpush(o_54);
  c_128 :
  Epushd(0,3);
  MoveTop(0,1);
  goto f_127;
  f_127 :
  TestFunFC(w_0,&&s_54,Egetd(0,1));
  Rpush(r_54);
  goto d_128;
  s_54 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(r_54);
  goto e_128;
  r_54 :
  goto q_54;
  e_128 :
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
  Rpush(u_54);
  goto c_128;
  u_54 :
  OneNextSon();
  Ccall(_stratego_o_29);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto w_126;
  w_126 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto x_126;
  x_126 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto y_126;
  y_126 :
  TestFunFC(p_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto z_126;
  z_126 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  goto a_127;
  a_127 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto b_127;
  b_127 :
  TestFunFC(p_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto c_127;
  c_127 :
  TestFunFC(p_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto d_127;
  d_127 :
  TestFunFC(s_0,&&fail,Egetd(1,12));
  goto e_127;
  e_127 :
  TestFunFC(s_0,&&fail,Egetd(1,13));
  Rpush(v_54);
  goto f_128;
  v_54 :
  goto t_54;
  f_128 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset(App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,9)),App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,11)),App0("TNil"))));
  Return();
  t_54 :
  Epopd(1,13);
  Return();
  q_54 :
  goto p_54;
  d_128 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  p_54 :
  Epopd(0,3);
  Return();
  o_54 :
ENDPROC
