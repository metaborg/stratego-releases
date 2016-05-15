#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,p_58);
VARDECL(AFun,d_58);
VARDECL(AFun,s_55);
VARDECL(AFun,f_54);
VARDECL(AFun,u_52);
VARDECL(AFun,l_51);
VARDECL(AFun,u_50);
VARDECL(AFun,v_48);
VARDECL(AFun,w_43);
VARDECL(AFun,t_32);
VARDECL(AFun,y_31);
VARDECL(AFun,v_31);
VARDECL(AFun,o_31);
VARDECL(AFun,n_31);
VARDECL(AFun,j_31);
VARDECL(AFun,h_31);
VARDECL(AFun,f_31);
VARDECL(AFun,d_31);
VARDECL(AFun,a_31);
VARDECL(AFun,y_30);
VARDECL(AFun,h_30);
VARDECL(AFun,a_30);
VARDECL(AFun,s_29);
VARDECL(AFun,d_29);
VARDECL(AFun,z_28);
VARDECL(AFun,t_28);
VARDECL(AFun,o_28);
VARDECL(AFun,l_28);
VARDECL(AFun,j_28);
VARDECL(AFun,y_27);
VARDECL(AFun,z_26);
VARDECL(AFun,q_26);
VARDECL(AFun,m_26);
VARDECL(AFun,k_26);
VARDECL(AFun,i_26);
VARDECL(AFun,f_26);
VARDECL(AFun,d_26);
VARDECL(AFun,v_25);
VARDECL(AFun,k_25);
VARDECL(AFun,n_24);
VARDECL(AFun,h_23);
VARDECL(AFun,e_23);
VARDECL(AFun,z_14);
VARDECL(AFun,y_14);
VARDECL(AFun,w_14);
VARDECL(AFun,u_14);
VARDECL(AFun,c_9);
VARDECL(AFun,b_9);
VARDECL(AFun,a_9);
VARDECL(AFun,k_5);
VARDECL(AFun,j_5);
VARDECL(AFun,i_5);
VARDECL(AFun,g_5);
VARDECL(AFun,f_5);
VARDECL(AFun,d_5);
VARDECL(AFun,o_4);
VARDECL(AFun,f_3);
VARDECL(AFun,c_3);
VARDECL(AFun,b_3);
VARDECL(AFun,s_2);
VARDECL(AFun,i_2);
VARDECL(AFun,g_2);
VARDECL(AFun,f_2);
VARDECL(AFun,e_2);
VARDECL(AFun,c_2);
VARDECL(AFun,b_2);
VARDECL(AFun,c_1);
VARDECL(AFun,q_0);
VARDECL(AFun,n_0);
VARDECL(AFun,j_0);
VARDECL(AFun,i_0);
PROCDECL(_stratego_x_15);
PROCDECL(_stratego_y_15);
PROCDECL(_stratego_z_15);
PROCDECL(_stratego_a_16);
PROCDECL(_stratego_b_16);
PROCDECL(_stratego_c_16);
PROCDECL(_stratego_d_16);
PROCDECL(_stratego_e_16);
PROCDECL(_stratego_f_16);
PROCDECL(_stratego_g_16);
PROCDECL(_stratego_h_16);
PROCDECL(_stratego_i_16);
PROCDECL(_stratego_j_16);
PROCDECL(_stratego_k_16);
PROCDECL(_stratego_l_16);
PROCDECL(_stratego_m_16);
PROCDECL(_stratego_n_16);
PROCDECL(_stratego_o_16);
PROCDECL(_stratego_p_16);
PROCDECL(_stratego_q_16);
PROCDECL(_stratego_r_16);
PROCDECL(_stratego_s_16);
PROCDECL(_stratego_t_16);
PROCDECL(_stratego_u_16);
PROCDECL(_stratego_v_16);
PROCDECL(_stratego_w_16);
PROCDECL(_stratego_x_16);
PROCDECL(_stratego_y_16);
PROCDECL(_stratego_z_16);
PROCDECL(_stratego_a_17);
PROCDECL(_stratego_b_17);
PROCDECL(_stratego_c_17);
PROCDECL(_stratego_d_17);
PROCDECL(_stratego_e_17);
PROCDECL(_stratego_f_17);
PROCDECL(_stratego_g_17);
PROCDECL(_stratego_h_17);
PROCDECL(_stratego_i_17);
PROCDECL(_stratego_j_17);
PROCDECL(_stratego_k_17);
PROCDECL(_stratego_l_17);
PROCDECL(_stratego_m_17);
PROCDECL(_stratego_n_17);
PROCDECL(_stratego_o_17);
PROCDECL(_stratego_p_17);
PROCDECL(_stratego_q_17);
PROCDECL(_stratego_r_17);
PROCDECL(_stratego_s_17);
PROCDECL(_stratego_t_17);
PROCDECL(_stratego_u_17);
PROCDECL(_stratego_v_17);
PROCDECL(_stratego_w_17);
PROCDECL(_stratego_x_17);
PROCDECL(_stratego_y_17);
PROCDECL(_stratego_z_17);
PROCDECL(_stratego_a_18);
PROCDECL(_stratego_b_18);
PROCDECL(_stratego_c_18);
PROCDECL(_stratego_d_18);
PROCDECL(_stratego_e_18);
PROCDECL(_stratego_f_18);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(p_58,ATmakeAFun("Undefined",1,0));
  MOVE(d_58,ATmakeAFun("Help",0,0));
  MOVE(s_55,ATmakeAFun("Input",1,0));
  MOVE(f_54,ATmakeAFun("Binary",0,0));
  MOVE(u_52,ATmakeAFun("Output",1,0));
  MOVE(l_51,ATmakeAFun("Program",1,0));
  MOVE(u_50,ATmakeAFun("Runtime",1,0));
  MOVE(v_48,ATmakeAFun("Silent",0,0));
  MOVE(w_43,ATmakeAFun("Countrule",1,0));
  MOVE(t_32,ATmakeAFun("App",2,0));
  MOVE(y_31,ATmakeAFun("Op",2,0));
  MOVE(v_31,ATmakeAFun("BuildDefault",1,0));
  MOVE(o_31,ATmakeAFun("BuildTerm",3,0));
  MOVE(n_31,ATmakeAFun("Build",1,0));
  MOVE(j_31,ATmakeAFun("CountRule",1,0));
  MOVE(h_31,ATmakeAFun("Prim2",2,0));
  MOVE(f_31,ATmakeAFun("Prim",1,0));
  MOVE(d_31,ATmakeAFun("Where",1,0));
  MOVE(a_31,ATmakeAFun("Thread",1,0));
  MOVE(y_30,ATmakeAFun("Some",1,0));
  MOVE(h_30,ATmakeAFun("One",1,0));
  MOVE(a_30,ATmakeAFun("All",1,0));
  MOVE(s_29,ATmakeAFun("CongKids",1,0));
  MOVE(d_29,ATmakeAFun("CongWld",1,0));
  MOVE(z_28,ATmakeAFun("Cong",2,0));
  MOVE(t_28,ATmakeAFun("Path",2,0));
  MOVE(o_28,ATmakeAFun("SDef",4,0));
  MOVE(l_28,ATmakeAFun("SDef",3,0));
  MOVE(j_28,ATmakeAFun("Let",2,0));
  MOVE(y_27,ATmakeAFun("Rec",2,0));
  MOVE(z_26,ATmakeAFun("Assign",2,0));
  MOVE(q_26,ATmakeAFun("Assign",1,0));
  MOVE(m_26,ATmakeAFun("Seq",2,0));
  MOVE(k_26,ATmakeAFun("Not",1,0));
  MOVE(i_26,ATmakeAFun("Test",1,0));
  MOVE(f_26,ATmakeAFun("Id",0,0));
  MOVE(d_26,ATmakeAFun("Instr",3,0));
  MOVE(v_25,ATmakeAFun("Alt",3,0));
  MOVE(k_25,ATmakeAFun("Alts",6,0));
  MOVE(n_24,ATmakeAFun("LChoice",2,0));
  MOVE(h_23,ATmakeAFun("Choice",2,0));
  MOVE(e_23,ATmakeAFun("Choices",4,0));
  MOVE(z_14,ATmakeAFun("Str",1,0));
  MOVE(y_14,ATmakeAFun("Real",1,0));
  MOVE(w_14,ATmakeAFun("Int",1,0));
  MOVE(u_14,ATmakeAFun("Fun",2,0));
  MOVE(c_9,ATmakeAFun("Rule",3,0));
  MOVE(b_9,ATmakeAFun("LRule",1,0));
  MOVE(a_9,ATmakeAFun("Scope",2,0));
  MOVE(k_5,ATmakeAFun("SVar",1,0));
  MOVE(j_5,ATmakeAFun("Call",2,0));
  MOVE(i_5,ATmakeAFun("Continue",1,0));
  MOVE(g_5,ATmakeAFun("Var",1,0));
  MOVE(f_5,ATmakeAFun("Case",4,0));
  MOVE(d_5,ATmakeAFun("Branch",4,0));
  MOVE(o_4,ATmakeAFun("Fail",0,0));
  MOVE(f_3,ATmakeAFun("Block",1,0));
  MOVE(c_3,ATmakeAFun("Tpop",0,0));
  MOVE(b_3,ATmakeAFun("Arg",1,0));
  MOVE(s_2,ATmakeAFun("Epop",1,0));
  MOVE(i_2,ATmakeAFun("Epush",1,0));
  MOVE(g_2,ATmakeAFun("AllBuild",0,0));
  MOVE(f_2,ATmakeAFun("TravInit",0,0));
  MOVE(e_2,ATmakeAFun("MatchFun",2,0));
  MOVE(c_2,ATmakeAFun("BuildVar",1,0));
  MOVE(b_2,ATmakeAFun("MatchVar",1,0));
  MOVE(c_1,ATmakeAFun("AFun",2,0));
  MOVE(q_0,ATmakeAFun("TNil",0,0));
  MOVE(n_0,ATmakeAFun("TCons",2,0));
  MOVE(j_0,ATmakeAFun("Cons",2,0));
  MOVE(i_0,ATmakeAFun("Nil",0,0));
ENDPROC

PROC(_stratego_x_15)
  Rpush(d_0);
  b_10 :
  Epushd(0,3);
  MoveTop(0,1);
  goto m_5;
  m_5 :
  TestFunFC(i_0,&&h_0,Egetd(0,1));
  Rpush(g_0);
  goto a_0;
  h_0 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(g_0);
  goto b_0;
  g_0 :
  goto f_0;
  b_0 :
  Epushd(1,13);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Rpush(o_0);
  goto b_10;
  o_0 :
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto l_0;
  l_0 :
  TestFunFC(n_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto m_0;
  m_0 :
  TestFunFC(n_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto j_1;
  j_1 :
  TestFunFC(n_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto k_1;
  k_1 :
  TestFunFC(q_0,&&fail,Egetd(1,6));
  goto l_1;
  l_1 :
  TestFunFC(n_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto a_5;
  a_5 :
  TestFunFC(n_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto b_5;
  b_5 :
  TestFunFC(n_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto c_5;
  c_5 :
  TestFunFC(q_0,&&fail,Egetd(1,12));
  goto l_5;
  l_5 :
  TestFunFC(q_0,&&fail,Egetd(1,13));
  Rpush(p_0);
  goto c_0;
  p_0 :
  goto k_0;
  c_0 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset(App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,9)),App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,11)),App0("TNil"))));
  Return();
  k_0 :
  Epopd(1,13);
  Return();
  f_0 :
  goto e_0;
  a_0 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  e_0 :
  Epopd(0,3);
  Return();
  d_0 :
ENDPROC

PROC(_stratego_y_15)
  _ST_table_keys();
ENDPROC

PROC(_stratego_z_15)
  Tset(ATmakeString("symbol-table"));
  Ccall(_stratego_y_15);
  Rpush(r_0);
  j_19 :
  Cpush(t_0);
  Ccall(_stratego_f_18);
  goto s_0;
  t_0 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_a_17);
  MoveTop(0,2);
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,2),App0("TNil"))));
  Epopd(0,2);
  OneNextSon();
  Rpush(v_0);
  goto j_19;
  v_0 :
  AllBuild();
  goto u_0;
  s_0 :
  Cpop();
  u_0 :
  Return();
  r_0 :
  Rpush(w_0);
  k_19 :
  Cpush(y_0);
  Ccall(_stratego_f_18);
  goto x_0;
  y_0 :
  Ccontinue(z_0);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(0,7);
  MoveTop(0,1);
  goto r_10;
  r_10 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto w_10;
  w_10 :
  TestFunFC(c_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_10;
  x_10 :
  TestFunFC(n_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto d_11;
  d_11 :
  TestFunFC(q_0,&&fail,Egetd(0,7));
  Rpush(b_1);
  goto q_10;
  b_1 :
  goto a_1;
  q_10 :
  Return();
  a_1 :
  Epopd(0,7);
  OneNextSon();
  Rpush(d_1);
  goto k_19;
  d_1 :
  AllBuild();
  goto x_0;
  z_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_12;
  n_12 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(g_1);
  goto m_12;
  g_1 :
  goto f_1;
  m_12 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(h_1);
  goto k_19;
  h_1 :
  Return();
  f_1 :
  Epopd(0,3);
  goto e_1;
  x_0 :
  Cpop();
  e_1 :
  Return();
  w_0 :
  Rpush(i_1);
  l_19 :
  Cpush(n_1);
  Ccall(_stratego_f_18);
  goto m_1;
  n_1 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(0,7);
  MoveTop(0,1);
  goto p_12;
  p_12 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto o_15;
  o_15 :
  TestFunFC(c_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto p_15;
  p_15 :
  TestFunFC(n_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto g_18;
  g_18 :
  TestFunFC(q_0,&&fail,Egetd(0,7));
  Rpush(q_1);
  goto o_12;
  q_1 :
  goto p_1;
  o_12 :
  NotNULLd(0,6);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",App2("VARDECL",App0("ATerm"),Egetd(0,6)),App2("TCons",App2("MOVE",Egetd(0,6),App3("ATmakeAFun",Egetd(0,3),Egetd(0,4),MakeInt(0))),App0("TNil"))));
  Return();
  p_1 :
  Epopd(0,7);
  OneNextSon();
  Rpush(r_1);
  goto l_19;
  r_1 :
  AllBuild();
  goto o_1;
  m_1 :
  Cpop();
  o_1 :
  Return();
  i_1 :
  Ccall(_stratego_x_15);
ENDPROC

PROC(_stratego_a_16)
  Epushd(0,10);
  MoveTop(0,5);
  goto v_19;
  v_19 :
  TestFunFC(j_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto w_19;
  w_19 :
  TestFunFC(b_2,&&a_2,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto x_19;
  x_19 :
  TestFunFC(j_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto y_19;
  y_19 :
  TestFunFC(c_2,&&fail,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  Rpush(z_1);
  goto m_19;
  a_2 :
  TestFunFC(e_2,&&d_2,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,1,0,6,1);
  goto z_19;
  z_19 :
  TestFunFC(j_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto a_20;
  a_20 :
  TestFunFC(f_2,&&fail,Egetd(0,9));
  goto b_20;
  b_20 :
  TestFunFC(j_0,&&fail,Egetd(0,10));
  MoveArg(0,2,0,10,0);
  MoveArg(0,3,0,10,1);
  goto c_20;
  c_20 :
  TestFunFC(g_2,&&fail,Egetd(0,2));
  Rpush(z_1);
  goto n_19;
  d_2 :
  TestFunFC(i_2,&&h_2,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto d_20;
  d_20 :
  TestFunFC(j_0,&&j_2,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto e_20;
  e_20 :
  TestFunFC(i_2,&&k_2,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  goto f_20;
  f_20 :
  TestInt(0,7,0,&&l_2);
  Cpush(n_2);
  Rpush(o_2);
  goto o_19;
  o_2 :
  goto m_2;
  n_2 :
  Rpush(q_2);
  goto q_19;
  q_2 :
  goto p_2;
  m_2 :
  Cpop();
  p_2 :
  goto z_1;
  l_2 :
  Rpush(z_1);
  goto q_19;
  k_2 :
  goto g_20;
  g_20 :
  TestInt(0,7,0,&&fail);
  Rpush(z_1);
  goto o_19;
  j_2 :
  goto g_20;
  h_2 :
  TestFunFC(s_2,&&r_2,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto h_20;
  h_20 :
  TestFunFC(j_0,&&t_2,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto i_20;
  i_20 :
  TestFunFC(s_2,&&u_2,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  goto j_20;
  j_20 :
  TestInt(0,7,0,&&v_2);
  Cpush(x_2);
  Rpush(y_2);
  goto p_19;
  y_2 :
  goto w_2;
  x_2 :
  Rpush(a_3);
  goto r_19;
  a_3 :
  goto z_2;
  w_2 :
  Cpop();
  z_2 :
  goto z_1;
  v_2 :
  Rpush(z_1);
  goto r_19;
  u_2 :
  goto k_20;
  k_20 :
  TestInt(0,7,0,&&fail);
  Rpush(z_1);
  goto p_19;
  t_2 :
  goto k_20;
  r_2 :
  TestFunFC(b_3,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto l_20;
  l_20 :
  TestFunFC(j_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto m_20;
  m_20 :
  TestFunFC(c_3,&&fail,Egetd(0,9));
  Rpush(z_1);
  goto s_19;
  z_1 :
  goto y_1;
  s_19 :
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Return();
  y_1 :
  goto x_1;
  r_19 :
  Epushd(1,1);
  NotNULLd(0,7);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,4),App0("TNil"))));
  Ccall(_stratego_y_16);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("Cons",App1("Epop",Egetd(1,1)),Egetd(0,10)));
  Epopd(1,1);
  Return();
  x_1 :
  goto w_1;
  q_19 :
  Epushd(1,1);
  NotNULLd(0,7);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,4),App0("TNil"))));
  Ccall(_stratego_y_16);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("Cons",App1("Epush",Egetd(1,1)),Egetd(0,10)));
  Epopd(1,1);
  Return();
  w_1 :
  goto v_1;
  p_19 :
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  v_1 :
  goto u_1;
  o_19 :
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  u_1 :
  goto t_1;
  n_19 :
  NotNULLd(0,7);
  NotNULLd(0,1);
  NotNULLd(0,3);
  Tset(App2("Cons",App2("MatchFun",Egetd(0,7),Egetd(0,1)),Egetd(0,3)));
  Return();
  t_1 :
  goto s_1;
  m_19 :
  Epushd(1,1);
  Move(0,7,0,4);
  Move(1,1,0,10);
  NotNULLd(0,7);
  NotNULLd(1,1);
  Tset(App2("Cons",App1("MatchVar",Egetd(0,7)),Egetd(1,1)));
  Epopd(1,1);
  Return();
  s_1 :
  Epopd(0,10);
ENDPROC

PROC(_stratego_b_16)
  Cpush(e_3);
  TestFunTop(f_3);
  TravInit();
  OneNextSon();
  Rpush(g_3);
  q_21 :
  Cpush(i_3);
  h_3 :
  Ccall(_stratego_a_16);
  Tduplinv();
  goto h_3;
  i_3 :
  Cpush(k_3);
  Ccall(_stratego_f_18);
  goto j_3;
  k_3 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_3);
  goto q_21;
  m_3 :
  AllBuild();
  goto l_3;
  j_3 :
  Cpop();
  l_3 :
  Cpush(o_3);
  n_3 :
  Ccall(_stratego_a_16);
  Tduplinv();
  goto n_3;
  o_3 :
  Return();
  g_3 :
  AllBuild();
  goto d_3;
  e_3 :
  goto p_3;
  d_3 :
  Cpop();
  p_3 :
ENDPROC

PROC(_stratego_c_16)
  Rpush(q_3);
  i_22 :
  Cpush(s_3);
  Cpush(u_3);
  Ccall(_stratego_f_18);
  goto t_3;
  u_3 :
  Ccontinue(v_3);
  TestFunTop(f_3);
  TravInit();
  OneNextSon();
  Rpush(w_3);
  goto i_22;
  w_3 :
  AllBuild();
  goto t_3;
  v_3 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_3);
  goto i_22;
  y_3 :
  AllBuild();
  Rpush(z_3);
  j_22 :
  Cpush(b_4);
  Epushd(0,6);
  MoveTop(0,1);
  goto v_21;
  v_21 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto w_21;
  w_21 :
  TestFunFC(f_3,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto x_21;
  x_21 :
  TestFunFC(i_0,&&f_4,Egetd(0,3));
  Rpush(e_4);
  goto t_21;
  f_4 :
  TestFunFC(j_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(e_4);
  goto u_21;
  e_4 :
  goto d_4;
  u_21 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,4),App2("Cons",App1("Block",Egetd(0,5)),Egetd(0,6))));
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_4);
  goto j_22;
  g_4 :
  AllBuild();
  Rpush(h_4);
  goto j_22;
  h_4 :
  Return();
  d_4 :
  goto c_4;
  t_21 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  c_4 :
  Epopd(0,6);
  goto a_4;
  b_4 :
  goto i_4;
  a_4 :
  Cpop();
  i_4 :
  Return();
  z_3 :
  goto x_3;
  t_3 :
  Cpop();
  x_3 :
  goto r_3;
  s_3 :
  goto j_4;
  r_3 :
  Cpop();
  j_4 :
  Return();
  q_3 :
ENDPROC

PROC(_stratego_d_16)
  Epushd(0,9);
  MoveTop(0,1);
  goto n_22;
  n_22 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_22;
  o_22 :
  TestFunFC(n_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto p_22;
  p_22 :
  TestFunFC(n_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto q_22;
  q_22 :
  TestFunFC(n_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto r_22;
  r_22 :
  TestFunFC(q_0,&&fail,Egetd(0,9));
  goto s_22;
  s_22 :
  TestFunFC(o_4,&&n_4,Egetd(0,2));
  Cpush(q_4);
  Rpush(r_4);
  goto k_22;
  r_4 :
  goto p_4;
  q_4 :
  Rpush(t_4);
  goto l_22;
  t_4 :
  goto s_4;
  p_4 :
  Cpop();
  s_4 :
  goto m_4;
  n_4 :
  Rpush(m_4);
  goto l_22;
  m_4 :
  goto l_4;
  l_22 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App0("Fail"),App0("TNil"))));
  Cpush(u_4);
  Tdupl();
  Ccall(_stratego_o_16);
  Cpop();
  Crestore();
  Cjump();
  u_4 :
  Ccall(_stratego_f_17);
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
  l_4 :
  goto k_4;
  k_22 :
  Tset(App2("TCons",ATmakeString("fail"),App2("TCons",App1("Block",App0("Nil")),App0("TNil"))));
  Return();
  k_4 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_e_16)
  Epushd(0,11);
  MoveTop(0,4);
  goto o_24;
  o_24 :
  TestFunFC(d_5,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  MoveArg(0,10,0,4,2);
  MoveArg(0,11,0,4,3);
  goto p_24;
  p_24 :
  TestFunFC(f_5,&&e_5,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  MoveArg(0,2,0,5,2);
  MoveArg(0,3,0,5,3);
  goto q_24;
  q_24 :
  TestFunFC(g_5,&&fail,Egetd(0,8));
  MoveArg(0,1,0,8,0);
  Rpush(z_4);
  goto l_23;
  e_5 :
  TestFunFC(i_5,&&h_5,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(z_4);
  goto m_23;
  h_5 :
  TestFunFC(j_5,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto r_24;
  r_24 :
  TestFunFC(k_5,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto s_24;
  s_24 :
  TestFunFC(i_0,&&fail,Egetd(0,8));
  Cpush(p_5);
  Rpush(q_5);
  goto n_23;
  q_5 :
  goto o_5;
  p_5 :
  Rpush(s_5);
  goto o_23;
  s_5 :
  goto r_5;
  o_5 :
  Cpop();
  r_5 :
  goto z_4;
  z_4 :
  goto y_4;
  o_23 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(0,7),App0("TNil"))));
  Ccall(_stratego_a_17);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,7);
  Tset(App2("Ccall",Egetd(0,7),App0("Nil")));
  Epopd(1,1);
  Return();
  y_4 :
  goto x_4;
  n_23 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Cpush(t_5);
  Tdupl();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_a_17);
  Epopd(3,1);
  Cpop();
  Crestore();
  Cjump();
  t_5 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,9);
  NotNULLd(0,7);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(0,9)),App2("Cons",App1("Goto",Egetd(0,7)),App0("Nil")))));
  Epopd(1,1);
  Return();
  x_4 :
  goto w_4;
  m_23 :
  NotNULLd(0,6);
  Tset(App1("Goto",Egetd(0,6)));
  Return();
  w_4 :
  goto v_4;
  l_23 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,1);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto h_24;
  h_24 :
  TestFunFC(n_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto i_24;
  i_24 :
  TestFunFC(n_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto j_24;
  j_24 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  Rpush(v_5);
  goto p_23;
  v_5 :
  goto u_5;
  p_23 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(y_5);
  r_28 :
  Cpush(a_6);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto w_23;
  w_23 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto x_23;
  x_23 :
  TestFunFC(n_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto y_23;
  y_23 :
  TestFunFC(q_0,&&fail,Egetd(4,5));
  Rpush(c_6);
  goto q_23;
  c_6 :
  goto b_6;
  q_23 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_p_16);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto t_23;
  t_23 :
  TestFunFC(n_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto u_23;
  u_23 :
  TestFunFC(n_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto v_23;
  v_23 :
  TestFunFC(q_0,&&fail,Egetd(5,6));
  Rpush(e_6);
  goto s_23;
  e_6 :
  goto d_6;
  s_23 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  d_6 :
  Epopd(5,6);
  Return();
  b_6 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto z_5;
  a_6 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_6);
  goto r_28;
  g_6 :
  AllBuild();
  goto f_6;
  z_5 :
  Cpop();
  f_6 :
  Return();
  y_5 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto e_24;
  e_24 :
  TestFunFC(n_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto f_24;
  f_24 :
  TestFunFC(n_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto g_24;
  g_24 :
  TestFunFC(q_0,&&fail,Egetd(3,7));
  Rpush(i_6);
  goto z_23;
  i_6 :
  goto h_6;
  z_23 :
  Epushd(4,5);
  Move(1,1,3,4);
  Move(1,2,3,6);
  NotNULLd(0,3);
  NotNULLd(0,9);
  NotNULLd(0,10);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,9),App2("TCons",Egetd(0,10),App2("TCons",Egetd(0,11),App0("TNil"))))));
  Ccall(_stratego_d_16);
  MoveTop(4,1);
  goto b_24;
  b_24 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto c_24;
  c_24 :
  TestFunFC(n_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto d_24;
  d_24 :
  TestFunFC(q_0,&&fail,Egetd(4,5));
  Rpush(k_6);
  goto a_24;
  k_6 :
  goto j_6;
  a_24 :
  Move(1,3,4,2);
  Move(1,4,4,4);
  Return();
  j_6 :
  Epopd(4,5);
  Return();
  h_6 :
  Epopd(3,7);
  Return();
  u_5 :
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
  v_4 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_f_16)
  _ST_gt();
ENDPROC

PROC(_stratego_g_16)
  Rpush(l_6);
  c_29 :
  Cpush(n_6);
  Ccall(_stratego_f_18);
  Tset(MakeInt(0));
  goto m_6;
  n_6 :
  Epushd(0,3);
  MoveTop(0,1);
  goto u_28;
  u_28 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_6);
  goto s_28;
  q_6 :
  goto p_6;
  s_28 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(r_6);
  goto c_29;
  r_6 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_w_16);
  Epopd(1,1);
  Return();
  p_6 :
  Epopd(0,3);
  goto o_6;
  m_6 :
  Cpop();
  o_6 :
  Return();
  l_6 :
ENDPROC

PROC(_stratego_h_16)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(t_6);
  i_30 :
  Cpush(v_6);
  Epushd(1,7);
  MoveTop(1,1);
  goto f_29;
  f_29 :
  TestFunFC(n_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto g_29;
  g_29 :
  TestFunFC(j_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto h_29;
  h_29 :
  TestFunFC(n_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto i_29;
  i_29 :
  TestFunFC(q_0,&&fail,Egetd(1,7));
  Rpush(z_6);
  goto e_29;
  z_6 :
  goto y_6;
  e_29 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(a_7);
  goto i_30;
  a_7 :
  Return();
  y_6 :
  Epopd(1,7);
  goto u_6;
  v_6 :
  goto b_7;
  u_6 :
  Cpop();
  b_7 :
  Return();
  t_6 :
  MoveTop(0,2);
  goto k_29;
  k_29 :
  TestFunFC(n_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_29;
  l_29 :
  TestFunFC(i_0,&&fail,Egetd(0,3));
  goto m_29;
  m_29 :
  TestFunFC(n_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto n_29;
  n_29 :
  TestFunFC(q_0,&&fail,Egetd(0,6));
  Rpush(c_7);
  goto j_29;
  c_7 :
  goto s_6;
  j_29 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  s_6 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_i_16)
  Epushd(0,7);
  MoveTop(0,1);
  goto l_30;
  l_30 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto m_30;
  m_30 :
  TestFunFC(n_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto n_30;
  n_30 :
  TestFunFC(i_0,&&g_7,Egetd(0,4));
  goto o_30;
  o_30 :
  TestFunFC(q_0,&&fail,Egetd(0,7));
  Rpush(f_7);
  goto j_30;
  g_7 :
  TestFunFC(j_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto p_30;
  p_30 :
  TestFunFC(q_0,&&fail,Egetd(0,7));
  Rpush(f_7);
  goto k_30;
  f_7 :
  goto e_7;
  k_30 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  e_7 :
  goto d_7;
  j_30 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  d_7 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_j_16)
  _ST_int();
ENDPROC

PROC(_stratego_k_16)
  _ST_div();
ENDPROC

PROC(_stratego_l_16)
  _ST_mod();
ENDPROC

PROC(_stratego_m_16)
  Rpush(h_7);
  f_32 :
  Epushd(0,4);
  MoveTop(0,1);
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_l_16);
  MoveTop(0,2);
  Tset(MakeInt(48));
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_w_16);
  MoveTop(0,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_k_16);
  Ccall(_stratego_j_16);
  MoveTop(0,4);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,4),App0("TNil"))));
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Cpush(j_7);
  Epushd(1,1);
  MoveTop(1,1);
  goto l_31;
  l_31 :
  TestInt(1,1,0,&&fail);
  Rpush(l_7);
  goto k_31;
  l_7 :
  goto k_7;
  k_31 :
  Tset(App0("Nil"));
  Return();
  k_7 :
  Epopd(1,1);
  goto i_7;
  j_7 :
  Rpush(n_7);
  goto f_32;
  n_7 :
  goto m_7;
  i_7 :
  Cpop();
  m_7 :
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  Ccall(_stratego_i_16);
  Epopd(0,4);
  Return();
  h_7 :
  Ccall(_stratego_h_16);
  Ccall(_stratego_k_17);
ENDPROC

PROC(_stratego_n_16)
  Cpush(o_7);
  Tdupl();
  Ccall(_stratego_f_16);
  Cpop();
  Crestore();
  Cjump();
  o_7 :
ENDPROC

PROC(_stratego_o_16)
  Epushd(0,5);
  MoveTop(0,1);
  goto h_32;
  h_32 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_32;
  i_32 :
  TestFunFC(n_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_32;
  j_32 :
  TestFunFC(q_0,&&fail,Egetd(0,5));
  Rpush(q_7);
  goto g_32;
  q_7 :
  goto p_7;
  g_32 :
  Move(0,2,0,4);
  Return();
  p_7 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_16)
  Epushd(0,5);
  MoveTop(0,1);
  goto z_32;
  z_32 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_33;
  a_33 :
  TestFunFC(n_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto b_33;
  b_33 :
  TestFunFC(q_0,&&fail,Egetd(0,5));
  Rpush(s_7);
  goto q_32;
  s_7 :
  goto r_7;
  q_32 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",MakeInt(1),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil")))));
  Rpush(t_7);
  f_34 :
  Epushd(1,9);
  MoveTop(1,1);
  goto u_32;
  u_32 :
  TestFunFC(n_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_32;
  v_32 :
  TestFunFC(n_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_32;
  w_32 :
  TestFunFC(n_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,9,1,5,1);
  goto x_32;
  x_32 :
  TestFunFC(j_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto y_32;
  y_32 :
  TestFunFC(q_0,&&fail,Egetd(1,9));
  Cpush(b_8);
  Rpush(c_8);
  goto r_32;
  c_8 :
  goto a_8;
  b_8 :
  Rpush(e_8);
  goto s_32;
  e_8 :
  goto d_8;
  a_8 :
  Cpop();
  d_8 :
  goto z_7;
  z_7 :
  goto v_7;
  s_32 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_16);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  NotNULLd(1,8);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,8),App0("TNil")))));
  Rpush(f_8);
  goto f_34;
  f_8 :
  Epopd(2,1);
  Return();
  v_7 :
  goto u_7;
  r_32 :
  Epushd(2,1);
  Move(1,4,1,7);
  Move(2,1,1,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Epopd(2,1);
  Return();
  u_7 :
  Epopd(1,9);
  Return();
  t_7 :
  Return();
  r_7 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_16)
  Epushd(0,3);
  MoveTop(0,1);
  goto j_34;
  j_34 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto k_34;
  k_34 :
  TestInt(0,2,34,&&k_8);
  Rpush(j_8);
  goto g_34;
  k_8 :
  TestInt(0,2,92,&&l_8);
  Rpush(j_8);
  goto h_34;
  l_8 :
  TestInt(0,2,10,&&fail);
  Rpush(j_8);
  goto i_34;
  j_8 :
  goto i_8;
  i_34 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(110),Egetd(0,3))));
  Return();
  i_8 :
  goto h_8;
  h_34 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(92),Egetd(0,3))));
  Return();
  h_8 :
  goto g_8;
  g_34 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(34),Egetd(0,3))));
  Return();
  g_8 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_r_16)
  Ccall(_stratego_l_17);
  Rpush(m_8);
  r_34 :
  Cpush(o_8);
  Ccall(_stratego_q_16);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_8);
  goto r_34;
  p_8 :
  AllBuild();
  AllBuild();
  goto n_8;
  o_8 :
  Ccontinue(q_8);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_8);
  goto r_34;
  r_8 :
  AllBuild();
  goto n_8;
  q_8 :
  Ccall(_stratego_f_18);
  goto s_8;
  n_8 :
  Cpop();
  s_8 :
  Return();
  m_8 :
  Ccall(_stratego_k_17);
ENDPROC

PROC(_stratego_s_16)
  Epushd(0,6);
  MoveTop(0,2);
  goto u_34;
  u_34 :
  TestFunFC(a_9,&&z_8,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(y_8);
  goto s_34;
  z_8 :
  TestFunFC(b_9,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto v_34;
  v_34 :
  TestFunFC(c_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(y_8);
  goto t_34;
  y_8 :
  goto u_8;
  t_34 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_v_16);
  Return();
  u_8 :
  goto t_8;
  s_34 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  t_8 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_t_16)
  Epushd(0,7);
  MoveTop(0,1);
  goto u_46;
  u_46 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto v_46;
  v_46 :
  TestFunFC(n_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_46;
  w_46 :
  TestFunFC(n_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_46;
  x_46 :
  TestFunFC(q_0,&&fail,Egetd(0,6));
  Rpush(e_9);
  goto s_40;
  e_9 :
  goto d_9;
  s_40 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto u_40;
  u_40 :
  TestFunFC(n_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_40;
  v_40 :
  TestFunFC(n_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_40;
  w_40 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  Rpush(j_9);
  goto t_40;
  j_9 :
  goto f_9;
  t_40 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  f_9 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto q_44;
  q_44 :
  TestFunFC(n_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_44;
  r_44 :
  TestFunFC(n_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_44;
  s_44 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  Rpush(l_9);
  goto p_44;
  l_9 :
  goto k_9;
  p_44 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  k_9 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(m_9);
  d_49 :
  Epushd(2,9);
  MoveTop(2,1);
  goto h_46;
  h_46 :
  TestFunFC(n_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto i_46;
  i_46 :
  TestFunFC(i_0,&&s_9,Egetd(2,2));
  goto j_46;
  j_46 :
  TestFunFC(n_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto k_46;
  k_46 :
  TestFunFC(i_0,&&fail,Egetd(2,6));
  goto l_46;
  l_46 :
  TestFunFC(q_0,&&fail,Egetd(2,9));
  Rpush(r_9);
  goto r_45;
  s_9 :
  TestFunFC(j_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto m_46;
  m_46 :
  TestFunFC(n_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto n_46;
  n_46 :
  TestFunFC(j_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto o_46;
  o_46 :
  TestFunFC(q_0,&&fail,Egetd(2,9));
  Rpush(r_9);
  goto y_45;
  r_9 :
  goto q_9;
  y_45 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Rpush(u_9);
  goto d_49;
  u_9 :
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto e_46;
  e_46 :
  TestFunFC(n_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto f_46;
  f_46 :
  TestFunFC(n_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto g_46;
  g_46 :
  TestFunFC(q_0,&&fail,Egetd(3,5));
  Rpush(v_9);
  goto d_46;
  v_9 :
  goto t_9;
  d_46 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  t_9 :
  Epopd(3,5);
  Return();
  q_9 :
  goto p_9;
  r_45 :
  Tset(App0("Nil"));
  Return();
  p_9 :
  Epopd(2,9);
  Return();
  m_9 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto r_46;
  r_46 :
  TestFunFC(n_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto s_46;
  s_46 :
  TestFunFC(n_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto t_46;
  t_46 :
  TestFunFC(q_0,&&fail,Egetd(1,9));
  Rpush(x_9);
  goto q_46;
  x_9 :
  goto w_9;
  q_46 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(y_9);
  e_49 :
  Cpush(a_10);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_10);
  goto e_49;
  c_10 :
  AllBuild();
  goto z_9;
  a_10 :
  Ccall(_stratego_f_18);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto d_10;
  z_9 :
  Cpop();
  d_10 :
  Return();
  y_9 :
  Return();
  w_9 :
  Epopd(1,9);
  Return();
  d_9 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_u_16)
  Epushd(0,5);
  MoveTop(0,5);
  goto v_49;
  v_49 :
  TestFunFC(n_0,&&h_10,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto w_49;
  w_49 :
  TestFunFC(n_0,&&i_10,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_49;
  x_49 :
  TestFunFC(q_0,&&j_10,Egetd(0,4));
  Cpush(l_10);
  Rpush(m_10);
  goto f_49;
  m_10 :
  goto k_10;
  l_10 :
  Rpush(o_10);
  goto g_49;
  o_10 :
  goto n_10;
  k_10 :
  Cpop();
  n_10 :
  goto g_10;
  j_10 :
  Rpush(g_10);
  goto g_49;
  i_10 :
  Rpush(g_10);
  goto g_49;
  h_10 :
  Rpush(g_10);
  goto g_49;
  g_10 :
  goto f_10;
  g_49 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(p_10);
  p_51 :
  Cpush(t_10);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Cpush(v_10);
  Epushd(1,7);
  MoveTop(1,1);
  goto m_49;
  m_49 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto n_49;
  n_49 :
  TestFunFC(n_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto o_49;
  o_49 :
  TestFunFC(n_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto p_49;
  p_49 :
  TestFunFC(q_0,&&fail,Egetd(1,6));
  Rpush(z_10);
  goto l_49;
  z_10 :
  goto y_10;
  l_49 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  y_10 :
  Epopd(1,7);
  goto u_10;
  v_10 :
  Ccall(_stratego_t_16);
  goto a_11;
  u_10 :
  Cpop();
  a_11 :
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  goto s_10;
  t_10 :
  Epushd(1,7);
  MoveTop(1,1);
  goto r_49;
  r_49 :
  TestFunFC(n_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_49;
  s_49 :
  TestFunFC(n_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto t_49;
  t_49 :
  TestFunFC(j_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto u_49;
  u_49 :
  TestFunFC(q_0,&&fail,Egetd(1,7));
  Rpush(e_11);
  goto q_49;
  e_11 :
  goto c_11;
  q_49 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  c_11 :
  Epopd(1,7);
  goto b_11;
  s_10 :
  Cpop();
  b_11 :
  Cpush(g_11);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_18);
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  goto f_11;
  g_11 :
  Rpush(i_11);
  goto p_51;
  i_11 :
  goto h_11;
  f_11 :
  Cpop();
  h_11 :
  Return();
  p_10 :
  Return();
  f_10 :
  goto e_10;
  f_49 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(j_11);
  n_51 :
  Cpush(l_11);
  Ccall(_stratego_f_18);
  goto k_11;
  l_11 :
  Ccontinue(m_11);
  Epushd(1,3);
  MoveTop(1,1);
  goto k_49;
  k_49 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(o_11);
  goto h_49;
  o_11 :
  goto n_11;
  h_49 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_11);
  o_51 :
  Cpush(r_11);
  Epushd(2,3);
  MoveTop(2,1);
  goto j_49;
  j_49 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(t_11);
  goto i_49;
  t_11 :
  goto s_11;
  i_49 :
  Move(1,2,2,2);
  Return();
  s_11 :
  Epopd(2,3);
  goto q_11;
  r_11 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_11);
  goto o_51;
  v_11 :
  AllBuild();
  goto u_11;
  q_11 :
  Cpop();
  u_11 :
  Return();
  p_11 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(w_11);
  goto n_51;
  w_11 :
  Return();
  n_11 :
  Epopd(1,3);
  goto k_11;
  m_11 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_11);
  goto n_51;
  y_11 :
  AllBuild();
  goto x_11;
  k_11 :
  Cpop();
  x_11 :
  Return();
  j_11 :
  Return();
  e_10 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_16)
  Rpush(z_11);
  b_56 :
  Cpush(b_12);
  Epushd(0,2);
  MoveTop(0,1);
  goto r_51;
  r_51 :
  TestFunFC(g_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_12);
  goto q_51;
  d_12 :
  goto c_12;
  q_51 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  c_12 :
  Epopd(0,2);
  goto a_12;
  b_12 :
  Ccontinue(e_12);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_s_16);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(a_9);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(f_12);
  goto b_56;
  f_12 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_u_16);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto y_51;
  y_51 :
  TestFunFC(n_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_51;
  z_51 :
  TestFunFC(n_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto a_52;
  a_52 :
  TestFunFC(q_0,&&fail,Egetd(1,5));
  Rpush(h_12);
  goto x_51;
  h_12 :
  goto g_12;
  x_51 :
  Move(0,3,1,4);
  Return();
  g_12 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(i_12);
  c_56 :
  Cpush(k_12);
  Ccall(_stratego_f_18);
  Tset(App0("Nil"));
  goto j_12;
  k_12 :
  Epushd(1,3);
  MoveTop(1,1);
  goto m_52;
  m_52 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(r_12);
  goto b_52;
  r_12 :
  goto q_12;
  b_52 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(s_12);
  goto c_56;
  s_12 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto j_52;
  j_52 :
  TestFunFC(n_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto k_52;
  k_52 :
  TestFunFC(n_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto l_52;
  l_52 :
  TestFunFC(q_0,&&fail,Egetd(2,6));
  Rpush(u_12);
  goto e_52;
  u_12 :
  goto t_12;
  e_52 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(v_12);
  d_56 :
  Cpush(x_12);
  Ccall(_stratego_f_18);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto w_12;
  x_12 :
  Ccontinue(y_12);
  Epushd(3,3);
  MoveTop(3,1);
  goto i_52;
  i_52 :
  TestFunFC(j_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(a_13);
  goto f_52;
  a_13 :
  goto z_12;
  f_52 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(b_13);
  e_56 :
  Cpush(d_13);
  Epushd(4,3);
  MoveTop(4,1);
  goto h_52;
  h_52 :
  TestFunFC(j_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(f_13);
  goto g_52;
  f_13 :
  goto e_13;
  g_52 :
  Move(3,2,4,2);
  Return();
  e_13 :
  Epopd(4,3);
  goto c_13;
  d_13 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_13);
  goto e_56;
  h_13 :
  AllBuild();
  goto g_13;
  c_13 :
  Cpop();
  g_13 :
  Return();
  b_13 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(i_13);
  goto d_56;
  i_13 :
  Return();
  z_12 :
  Epopd(3,3);
  goto w_12;
  y_12 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_13);
  goto d_56;
  k_13 :
  AllBuild();
  goto j_13;
  w_12 :
  Cpop();
  j_13 :
  Return();
  v_12 :
  Return();
  t_12 :
  Epopd(2,6);
  Return();
  q_12 :
  Epopd(1,3);
  goto l_12;
  j_12 :
  Cpop();
  l_12 :
  Return();
  i_12 :
  Epopd(0,3);
  goto a_12;
  e_12 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto p_52;
  p_52 :
  TestFunFC(n_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_52;
  q_52 :
  TestFunFC(n_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto r_52;
  r_52 :
  TestFunFC(q_0,&&fail,Egetd(1,5));
  Rpush(n_13);
  goto o_52;
  n_13 :
  goto m_13;
  o_52 :
  Move(0,2,1,4);
  Return();
  m_13 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(o_13);
  f_56 :
  Cpush(q_13);
  Ccall(_stratego_f_18);
  Tset(App0("Nil"));
  goto p_13;
  q_13 :
  Epushd(1,3);
  MoveTop(1,1);
  goto d_53;
  d_53 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(t_13);
  goto s_52;
  t_13 :
  goto s_13;
  s_52 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(u_13);
  goto b_56;
  u_13 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(v_13);
  goto f_56;
  v_13 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto a_53;
  a_53 :
  TestFunFC(n_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_53;
  b_53 :
  TestFunFC(n_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto c_53;
  c_53 :
  TestFunFC(q_0,&&fail,Egetd(2,7));
  Rpush(x_13);
  goto v_52;
  x_13 :
  goto w_13;
  v_52 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(y_13);
  g_56 :
  Cpush(a_14);
  Ccall(_stratego_f_18);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto z_13;
  a_14 :
  Ccontinue(b_14);
  Epushd(3,3);
  MoveTop(3,1);
  goto z_52;
  z_52 :
  TestFunFC(j_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(d_14);
  goto w_52;
  d_14 :
  goto c_14;
  w_52 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(e_14);
  h_56 :
  Cpush(g_14);
  Epushd(4,3);
  MoveTop(4,1);
  goto y_52;
  y_52 :
  TestFunFC(j_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(i_14);
  goto x_52;
  i_14 :
  goto h_14;
  x_52 :
  Move(3,2,4,2);
  Return();
  h_14 :
  Epopd(4,3);
  goto f_14;
  g_14 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_14);
  goto h_56;
  k_14 :
  AllBuild();
  goto j_14;
  f_14 :
  Cpop();
  j_14 :
  Return();
  e_14 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(l_14);
  goto g_56;
  l_14 :
  Return();
  c_14 :
  Epopd(3,3);
  goto z_13;
  b_14 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_14);
  goto g_56;
  n_14 :
  AllBuild();
  goto m_14;
  z_13 :
  Cpop();
  m_14 :
  Return();
  y_13 :
  Return();
  w_13 :
  Epopd(2,7);
  Return();
  s_13 :
  Epopd(1,3);
  goto r_13;
  p_13 :
  Cpop();
  r_13 :
  Return();
  o_13 :
  Epopd(0,2);
  goto l_13;
  a_12 :
  Cpop();
  l_13 :
  Return();
  z_11 :
ENDPROC

PROC(_stratego_w_16)
  _ST_add();
ENDPROC

PROC(_stratego_x_16)
  Epushd(0,13);
  MoveTop(0,2);
  goto s_56;
  s_56 :
  TestFunFC(n_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,8,0,2,1);
  goto t_56;
  t_56 :
  TestFunFC(n_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto u_56;
  u_56 :
  TestFunFC(n_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto v_56;
  v_56 :
  TestFunFC(q_0,&&fail,Egetd(0,7));
  goto w_56;
  w_56 :
  TestFunFC(n_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,11,0,8,1);
  goto x_56;
  x_56 :
  TestFunFC(u_14,&&t_14,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,1,0,9,1);
  goto y_56;
  y_56 :
  TestFunFC(n_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto z_56;
  z_56 :
  TestFunFC(q_0,&&fail,Egetd(0,13));
  Rpush(s_14);
  goto i_56;
  t_14 :
  TestFunFC(w_14,&&v_14,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto a_57;
  a_57 :
  TestFunFC(n_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto b_57;
  b_57 :
  TestFunFC(q_0,&&fail,Egetd(0,13));
  Rpush(s_14);
  goto j_56;
  v_14 :
  TestFunFC(y_14,&&x_14,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto c_57;
  c_57 :
  TestFunFC(n_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto d_57;
  d_57 :
  TestFunFC(q_0,&&fail,Egetd(0,13));
  Rpush(s_14);
  goto k_56;
  x_14 :
  TestFunFC(z_14,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto e_57;
  e_57 :
  TestFunFC(n_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto f_57;
  f_57 :
  TestFunFC(q_0,&&fail,Egetd(0,13));
  Rpush(s_14);
  goto l_56;
  s_14 :
  goto r_14;
  l_56 :
  Epushd(1,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Ccall(_stratego_r_16);
  MoveTop(1,1);
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(1,1);
  NotNULLd(0,12);
  Tset(App4("TestStr",Egetd(0,4),Egetd(0,6),Egetd(1,1),Egetd(0,12)));
  Epopd(1,1);
  Return();
  r_14 :
  goto q_14;
  k_56 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,10);
  NotNULLd(0,12);
  Tset(App4("TestReal",Egetd(0,4),Egetd(0,6),Egetd(0,10),Egetd(0,12)));
  Return();
  q_14 :
  goto p_14;
  j_56 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,10);
  NotNULLd(0,12);
  Tset(App4("TestInt",Egetd(0,4),Egetd(0,6),Egetd(0,10),Egetd(0,12)));
  Return();
  p_14 :
  goto o_14;
  i_56 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,10);
  NotNULLd(0,1);
  Tset(App2("AFun",Egetd(0,10),Egetd(0,1)));
  MoveTop(2,1);
  goto q_56;
  q_56 :
  TestFunFC(c_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(b_15);
  goto m_56;
  b_15 :
  goto a_15;
  m_56 :
  Epushd(3,1);
  Tdupl();
  Cpush(d_15);
  Epushd(4,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(2,2),Egetd(2,3)),App0("TNil"))));
  Ccall(_stratego_a_17);
  MoveTop(4,1);
  Move(3,1,4,1);
  Epopd(4,1);
  goto c_15;
  d_15 :
  Epushd(4,1);
  Ccall(_stratego_f_17);
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(2,2),Egetd(2,3)),App2("TCons",Egetd(3,1),App0("TNil")))));
  Ccall(_stratego_j_17);
  Epopd(4,1);
  goto e_15;
  c_15 :
  Cpop();
  e_15 :
  Tpop();
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  a_15 :
  Epopd(2,3);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,12);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App3("TestFunFC",App1("VAR",Egetd(1,1)),Egetd(0,12),App2("Egetd",Egetd(0,4),Egetd(0,6))));
  Epopd(1,1);
  Return();
  o_14 :
  Epopd(0,13);
ENDPROC

PROC(_stratego_y_16)
  _ST_plus();
ENDPROC

PROC(_stratego_z_16)
  Cpush(g_15);
  Epushd(0,15);
  MoveTop(0,10);
  goto q_69;
  q_69 :
  TestFunFC(e_23,&&d_23,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  MoveArg(0,3,0,10,3);
  goto r_69;
  r_69 :
  TestFunFC(h_23,&&g_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(r_23);
  Rpush(k_24);
  goto d_59;
  k_24 :
  goto i_23;
  r_23 :
  Rpush(m_24);
  goto f_59;
  m_24 :
  goto l_24;
  i_23 :
  Cpop();
  l_24 :
  goto c_23;
  g_23 :
  TestFunFC(n_24,&&f_23,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(f_25);
  Rpush(g_25);
  goto e_59;
  g_25 :
  goto e_25;
  f_25 :
  Rpush(i_25);
  goto f_59;
  i_25 :
  goto h_25;
  e_25 :
  Cpop();
  h_25 :
  goto c_23;
  f_23 :
  Rpush(c_23);
  goto f_59;
  d_23 :
  TestFunFC(k_25,&&j_25,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  MoveArg(0,3,0,10,3);
  MoveArg(0,4,0,10,4);
  MoveArg(0,5,0,10,5);
  goto s_69;
  s_69 :
  TestFunFC(i_0,&&u_25,Egetd(0,11));
  Rpush(c_23);
  goto k_59;
  u_25 :
  TestFunFC(j_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto t_69;
  t_69 :
  TestFunFC(v_25,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  MoveArg(0,9,0,12,1);
  MoveArg(0,2,0,12,2);
  goto u_69;
  u_69 :
  TestFunFC(i_0,&&w_25,Egetd(0,13));
  Cpush(y_25);
  Rpush(z_25);
  goto l_59;
  z_25 :
  goto x_25;
  y_25 :
  Rpush(b_26);
  goto m_59;
  b_26 :
  goto a_26;
  x_25 :
  Cpop();
  a_26 :
  goto c_23;
  w_25 :
  Rpush(c_23);
  goto m_59;
  j_25 :
  TestFunFC(d_26,&&c_26,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  goto v_69;
  v_69 :
  TestFunFC(f_26,&&e_26,Egetd(0,11));
  Rpush(c_23);
  goto w_58;
  e_26 :
  TestFunFC(o_4,&&g_26,Egetd(0,11));
  Rpush(c_23);
  goto x_58;
  g_26 :
  TestFunFC(i_26,&&h_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto y_58;
  h_26 :
  TestFunFC(k_26,&&j_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto z_58;
  j_26 :
  TestFunFC(m_26,&&l_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(c_23);
  goto a_59;
  l_26 :
  TestFunFC(n_24,&&n_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(c_23);
  goto b_59;
  n_26 :
  TestFunFC(h_23,&&o_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(c_23);
  goto c_59;
  o_26 :
  TestFunFC(q_26,&&p_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto w_69;
  w_69 :
  TestFunFC(g_5,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  Rpush(c_23);
  goto g_59;
  p_26 :
  TestFunFC(z_26,&&r_26,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto x_69;
  x_69 :
  TestFunFC(g_5,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  goto y_69;
  y_69 :
  TestFunFC(g_5,&&a_27,Egetd(0,13));
  MoveArg(0,1,0,13,0);
  Cpush(s_27);
  Rpush(t_27);
  goto h_59;
  t_27 :
  goto c_27;
  s_27 :
  Rpush(v_27);
  goto i_59;
  v_27 :
  goto u_27;
  c_27 :
  Cpop();
  u_27 :
  goto c_23;
  a_27 :
  Rpush(c_23);
  goto i_59;
  r_26 :
  TestFunFC(f_5,&&w_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  MoveArg(0,7,0,11,3);
  Rpush(c_23);
  goto j_59;
  w_27 :
  TestFunFC(y_27,&&x_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(c_23);
  goto n_59;
  x_27 :
  TestFunFC(j_5,&&z_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto z_69;
  z_69 :
  TestFunFC(k_5,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  goto a_70;
  a_70 :
  TestFunFC(i_0,&&fail,Egetd(0,13));
  Cpush(e_28);
  Rpush(f_28);
  goto o_59;
  f_28 :
  goto c_28;
  e_28 :
  Rpush(h_28);
  goto p_59;
  h_28 :
  goto g_28;
  c_28 :
  Cpop();
  g_28 :
  goto c_23;
  z_27 :
  TestFunFC(j_28,&&i_28,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(c_23);
  goto q_59;
  i_28 :
  TestFunFC(l_28,&&k_28,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  goto b_70;
  b_70 :
  TestFunFC(i_0,&&fail,Egetd(0,13));
  Rpush(c_23);
  goto r_59;
  k_28 :
  TestFunFC(o_28,&&m_28,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  MoveArg(0,7,0,11,3);
  goto c_70;
  c_70 :
  TestFunFC(i_0,&&fail,Egetd(0,6));
  Rpush(c_23);
  goto s_59;
  m_28 :
  TestFunFC(t_28,&&p_28,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(c_23);
  goto t_59;
  p_28 :
  TestFunFC(z_28,&&y_28,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(c_23);
  goto u_59;
  y_28 :
  TestFunFC(d_29,&&b_29,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto v_59;
  b_29 :
  TestFunFC(s_29,&&p_29,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto d_70;
  d_70 :
  TestFunFC(i_0,&&t_29,Egetd(0,12));
  Rpush(c_23);
  goto w_59;
  t_29 :
  TestFunFC(j_0,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  MoveArg(0,9,0,12,1);
  Rpush(c_23);
  goto x_59;
  p_29 :
  TestFunFC(a_30,&&z_29,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto y_59;
  z_29 :
  TestFunFC(h_30,&&b_30,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto z_59;
  b_30 :
  TestFunFC(y_30,&&x_30,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto a_60;
  x_30 :
  TestFunFC(a_31,&&z_30,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto b_60;
  z_30 :
  TestFunFC(a_9,&&b_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(c_23);
  goto c_60;
  b_31 :
  TestFunFC(d_31,&&c_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto d_60;
  c_31 :
  TestFunFC(f_31,&&e_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto e_60;
  e_31 :
  TestFunFC(h_31,&&g_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(c_23);
  goto f_60;
  g_31 :
  TestFunFC(j_31,&&i_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto g_60;
  i_31 :
  TestFunFC(n_31,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto h_60;
  c_26 :
  TestFunFC(o_31,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  goto e_70;
  e_70 :
  TestFunFC(z_14,&&p_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto i_60;
  p_31 :
  TestFunFC(w_14,&&q_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto j_60;
  q_31 :
  TestFunFC(y_14,&&r_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto k_60;
  r_31 :
  TestFunFC(g_5,&&t_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto l_60;
  t_31 :
  TestFunFC(v_31,&&u_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(c_23);
  goto m_60;
  u_31 :
  TestFunFC(y_31,&&x_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(a_32);
  Rpush(b_32);
  goto n_60;
  b_32 :
  goto z_31;
  a_32 :
  Rpush(p_32);
  goto o_60;
  p_32 :
  goto d_32;
  z_31 :
  Cpop();
  d_32 :
  goto c_23;
  x_31 :
  TestFunFC(t_32,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(c_23);
  goto p_60;
  c_23 :
  goto m_22;
  p_60 :
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compiler.r: App encountered: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_18);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,13);
  Tset(App1("AppEncountered",App2("App",Egetd(0,12),Egetd(0,13))));
  Return();
  m_22 :
  goto h_22;
  o_60 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_g_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(6),App0("TNil"))));
  Ccall(_stratego_f_16);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Rpush(g_33);
  g_94 :
  Cpush(i_33);
  Ccall(_stratego_f_18);
  goto h_33;
  i_33 :
  TestFunTop(j_0);
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
  Rpush(l_33);
  goto g_94;
  l_33 :
  AllBuild();
  goto j_33;
  h_33 :
  Cpop();
  j_33 :
  Return();
  g_33 :
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
  h_22 :
  goto g_22;
  n_60 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_g_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(6),App0("TNil"))));
  Ccall(_stratego_n_16);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_m_16);
  MoveTop(2,2);
  NotNULLd(2,2);
  Tset(App2("TCons",ATmakeString("App"),App2("TCons",Egetd(2,2),App0("TNil"))));
  Ccall(_stratego_m_17);
  MoveTop(2,3);
  Move(1,2,2,3);
  Epopd(2,3);
  Tpop();
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Rpush(m_33);
  f_94 :
  Cpush(y_33);
  Ccall(_stratego_f_18);
  goto w_33;
  y_33 :
  TestFunTop(j_0);
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
  Rpush(a_34);
  goto f_94;
  a_34 :
  AllBuild();
  goto z_33;
  w_33 :
  Cpop();
  z_33 :
  Return();
  m_33 :
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
  g_22 :
  goto f_22;
  m_60 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("BuildTerm",Egetd(0,12),Egetd(0,14),Egetd(0,15)));
  Return();
  f_22 :
  goto e_22;
  l_60 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,12);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,12),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto y_68;
  y_68 :
  TestFunFC(n_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto z_68;
  z_68 :
  TestFunFC(n_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto a_69;
  a_69 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  Rpush(c_34);
  goto j_68;
  c_34 :
  goto b_34;
  j_68 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(e_34);
  e_94 :
  Cpush(p_34);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto q_68;
  q_68 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto r_68;
  r_68 :
  TestFunFC(n_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto s_68;
  s_68 :
  TestFunFC(q_0,&&fail,Egetd(4,5));
  Rpush(c_35);
  goto k_68;
  c_35 :
  goto q_34;
  k_68 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_p_16);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto n_68;
  n_68 :
  TestFunFC(n_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto o_68;
  o_68 :
  TestFunFC(n_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto p_68;
  p_68 :
  TestFunFC(q_0,&&fail,Egetd(5,6));
  Rpush(e_35);
  goto m_68;
  e_35 :
  goto d_35;
  m_68 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  d_35 :
  Epopd(5,6);
  Return();
  q_34 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto o_34;
  p_34 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_35);
  goto e_94;
  g_35 :
  AllBuild();
  goto f_35;
  o_34 :
  Cpop();
  f_35 :
  Return();
  e_34 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto v_68;
  v_68 :
  TestFunFC(n_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_68;
  w_68 :
  TestFunFC(n_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto x_68;
  x_68 :
  TestFunFC(q_0,&&fail,Egetd(3,7));
  Rpush(i_35);
  goto t_68;
  i_35 :
  goto h_35;
  t_68 :
  Move(1,1,3,4);
  Move(1,2,3,6);
  Cpush(k_35);
  NotNULLd(1,1);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,15),App0("TNil"))));
  Ccall(_stratego_o_16);
  NotNULLd(1,2);
  Tset(App1("Eget",Egetd(1,2)));
  goto j_35;
  k_35 :
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Egetd",Egetd(1,1),Egetd(1,2)));
  Tdupl();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Egetd",Egetd(1,1),Egetd(1,2)));
  MoveTop(1,3);
  Tpop();
  goto l_35;
  j_35 :
  Cpop();
  l_35 :
  Return();
  h_35 :
  Epopd(3,7);
  Return();
  b_34 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Epopd(1,3);
  Return();
  e_22 :
  goto p_21;
  k_60 :
  NotNULLd(0,12);
  Tset(App1("ATmakeReal",Egetd(0,12)));
  Return();
  p_21 :
  goto o_21;
  j_60 :
  NotNULLd(0,12);
  Tset(App1("MakeInt",Egetd(0,12)));
  Return();
  o_21 :
  goto n_21;
  i_60 :
  Epushd(1,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_r_16);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("ATmakeString",Egetd(1,1)));
  Epopd(1,1);
  Return();
  n_21 :
  goto l_21;
  h_60 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_v_16);
  Rpush(m_35);
  c_94 :
  Cpush(o_35);
  Ccall(_stratego_f_18);
  goto n_35;
  o_35 :
  TestFunTop(j_0);
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
  goto e_68;
  e_68 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto f_68;
  f_68 :
  TestFunFC(n_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto g_68;
  g_68 :
  TestFunFC(q_0,&&fail,Egetd(4,5));
  Rpush(r_35);
  goto o_67;
  r_35 :
  goto q_35;
  o_67 :
  Epushd(5,7);
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(s_35);
  d_94 :
  Cpush(u_35);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(6,5);
  MoveTop(6,1);
  goto v_67;
  v_67 :
  TestFunFC(n_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto w_67;
  w_67 :
  TestFunFC(n_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto x_67;
  x_67 :
  TestFunFC(q_0,&&fail,Egetd(6,5));
  Rpush(w_35);
  goto p_67;
  w_35 :
  goto v_35;
  p_67 :
  Epushd(7,6);
  NotNULLd(4,2);
  NotNULLd(6,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(6,4),App0("TNil"))));
  Ccall(_stratego_p_16);
  MoveTop(7,1);
  NotNULLd(6,2);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(7,1),App0("TNil"))));
  MoveTop(7,2);
  goto s_67;
  s_67 :
  TestFunFC(n_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto t_67;
  t_67 :
  TestFunFC(n_0,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto u_67;
  u_67 :
  TestFunFC(q_0,&&fail,Egetd(7,6));
  Rpush(y_35);
  goto r_67;
  y_35 :
  goto x_35;
  r_67 :
  Move(5,1,7,3);
  Move(5,2,7,5);
  Return();
  x_35 :
  Epopd(7,6);
  Return();
  v_35 :
  Epopd(6,5);
  OneNextSon();
  AllBuild();
  goto t_35;
  u_35 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_36);
  goto d_94;
  a_36 :
  AllBuild();
  goto z_35;
  t_35 :
  Cpop();
  z_35 :
  Return();
  s_35 :
  Tpop();
  NotNULLd(5,1);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,3);
  goto b_68;
  b_68 :
  TestFunFC(n_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto c_68;
  c_68 :
  TestFunFC(n_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto d_68;
  d_68 :
  TestFunFC(q_0,&&fail,Egetd(5,7));
  Rpush(c_36);
  goto y_67;
  c_36 :
  goto b_36;
  y_67 :
  Move(3,2,5,4);
  Move(3,3,5,6);
  Cpush(e_36);
  NotNULLd(3,2);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(0,15),App0("TNil"))));
  Ccall(_stratego_o_16);
  NotNULLd(3,3);
  Tset(App1("NotNULL",Egetd(3,3)));
  goto d_36;
  e_36 :
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("NotNULLd",Egetd(3,2),Egetd(3,3)));
  Tdupl();
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("NotNULLd",Egetd(3,2),Egetd(3,3)));
  MoveTop(3,4);
  Tpop();
  goto f_36;
  d_36 :
  Cpop();
  f_36 :
  Return();
  b_36 :
  Epopd(5,7);
  Return();
  q_35 :
  Epopd(4,5);
  Tpop();
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Epopd(3,4);
  OneNextSon();
  Rpush(g_36);
  goto c_94;
  g_36 :
  AllBuild();
  goto p_35;
  n_35 :
  Cpop();
  p_35 :
  Return();
  m_35 :
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
  l_21 :
  goto k_21;
  g_60 :
  NotNULLd(0,12);
  Tset(App1("ICountRule",Egetd(0,12)));
  Return();
  k_21 :
  goto j_21;
  f_60 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  Tset(App2("Iprim2",Egetd(0,12),Egetd(0,13)));
  Return();
  j_21 :
  goto i_21;
  e_60 :
  NotNULLd(0,12);
  Tset(App1("Iprim",Egetd(0,12)));
  Return();
  i_21 :
  goto g_21;
  d_60 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Tpop"),App0("Nil"))))));
  Return();
  g_21 :
  goto f_21;
  c_60 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_g_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(0,15),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_w_16);
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
  f_21 :
  goto e_21;
  b_60 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_f_17);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_f_17);
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
  e_21 :
  goto d_21;
  a_60 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_f_17);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_f_17);
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
  d_21 :
  goto c_21;
  z_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_f_17);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_f_17);
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
  c_21 :
  goto b_21;
  y_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_f_17);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_f_17);
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
  b_21 :
  goto a_21;
  x_59 :
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("OneNextSon"),App2("Cons",App3("Instr",Egetd(0,8),Egetd(0,14),Egetd(0,15)),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,9)),Egetd(0,14),Egetd(0,15)),App0("Nil"))))));
  Return();
  a_21 :
  goto z_20;
  w_59 :
  Tset(App1("Block",App0("Nil")));
  Return();
  z_20 :
  goto x_20;
  v_59 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("TravInit"),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,12)),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("AllBuild"),App0("Nil"))))));
  Return();
  x_20 :
  goto u_19;
  u_59 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_g_16);
  MoveTop(2,1);
  NotNULLd(0,12);
  NotNULLd(2,1);
  Tset(App2("AFun",Egetd(0,12),Egetd(2,1)));
  MoveTop(2,2);
  goto a_67;
  a_67 :
  TestFunFC(c_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  Rpush(i_36);
  goto w_66;
  i_36 :
  goto h_36;
  w_66 :
  Epushd(3,1);
  Tdupl();
  Cpush(k_36);
  Epushd(4,1);
  NotNULLd(2,3);
  NotNULLd(2,4);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(2,3),Egetd(2,4)),App0("TNil"))));
  Ccall(_stratego_a_17);
  MoveTop(4,1);
  Move(3,1,4,1);
  Epopd(4,1);
  goto j_36;
  k_36 :
  Epushd(4,1);
  Ccall(_stratego_f_17);
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(2,3);
  NotNULLd(2,4);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(2,3),Egetd(2,4)),App2("TCons",Egetd(3,1),App0("TNil")))));
  Ccall(_stratego_j_17);
  Epopd(4,1);
  goto l_36;
  j_36 :
  Cpop();
  l_36 :
  Tpop();
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  h_36 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App1("TestFunTop",App1("VAR",Egetd(1,1))),App2("Cons",App0("TravInit"),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,13)),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("AllBuild"),App0("Nil")))))));
  Epopd(1,1);
  Return();
  u_19 :
  goto t_19;
  t_59 :
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(0,12);
  Tset(App1("Block",App2("Cons",App1("TpushIthSon",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,13),Egetd(0,14),Egetd(0,15)),App2("Cons",App1("TputIthSon",Egetd(0,12)),App0("Nil"))))));
  Return();
  t_19 :
  goto i_19;
  s_59 :
  NotNULLd(0,13);
  NotNULLd(0,7);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App3("SDef",Egetd(0,13),App0("Nil"),Egetd(0,7)),Egetd(0,14),Egetd(0,15)));
  Return();
  i_19 :
  goto h_19;
  r_59 :
  NotNULLd(0,12);
  NotNULLd(0,6);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App1("Label",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,6),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Return"),App0("Nil"))))));
  Return();
  h_19 :
  goto g_19;
  q_59 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_f_17);
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
  g_19 :
  goto y_18;
  p_59 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Cpush(m_36);
  Tdupl();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_a_17);
  Epopd(3,1);
  Cpop();
  Crestore();
  Cjump();
  m_36 :
  Ccall(_stratego_f_17);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,8);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(1,1)),App2("Cons",App1("Goto",Egetd(0,8)),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil"))))));
  Epopd(1,1);
  Return();
  y_18 :
  goto x_18;
  o_59 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,8);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(0,8),App0("TNil"))));
  Ccall(_stratego_a_17);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(App2("Ccall",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  x_18 :
  goto m_18;
  n_59 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_f_17);
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
  m_18 :
  goto k_18;
  m_59 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  MoveTop(2,1);
  goto n_66;
  n_66 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_36);
  goto u_64;
  o_36 :
  goto n_36;
  u_64 :
  Epushd(3,2);
  Ccall(_stratego_f_17);
  MoveTop(3,1);
  Move(1,1,3,1);
  NotNULLd(0,9);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,9),App0("TNil"))));
  Rpush(p_36);
  a_94 :
  Epushd(4,7);
  MoveTop(4,1);
  goto h_66;
  h_66 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto i_66;
  i_66 :
  TestFunFC(n_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,7,4,3,1);
  goto j_66;
  j_66 :
  TestFunFC(i_0,&&t_36,Egetd(4,4));
  goto k_66;
  k_66 :
  TestFunFC(q_0,&&fail,Egetd(4,7));
  Rpush(s_36);
  goto x_64;
  t_36 :
  TestFunFC(j_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto l_66;
  l_66 :
  TestFunFC(q_0,&&fail,Egetd(4,7));
  Rpush(s_36);
  goto y_64;
  s_36 :
  goto r_36;
  y_64 :
  Epushd(5,6);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_16);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(4,5);
  NotNULLd(5,1);
  NotNULLd(4,6);
  Tset(App2("TCons",App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(6,6);
  MoveTop(6,1);
  goto z_65;
  z_65 :
  TestFunFC(n_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto a_66;
  a_66 :
  TestFunFC(n_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,6,6,3,1);
  goto b_66;
  b_66 :
  TestFunFC(g_5,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  goto c_66;
  c_66 :
  TestFunFC(q_0,&&fail,Egetd(6,6));
  Rpush(w_36);
  goto a_65;
  w_36 :
  goto v_36;
  a_65 :
  Epushd(7,4);
  Tdupl();
  Epushd(8,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  NotNULLd(6,5);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(6,5),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(8,1);
  goto w_65;
  w_65 :
  TestFunFC(n_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto x_65;
  x_65 :
  TestFunFC(n_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto y_65;
  y_65 :
  TestFunFC(q_0,&&fail,Egetd(8,5));
  Rpush(y_36);
  goto c_65;
  y_36 :
  goto x_36;
  c_65 :
  Epushd(9,7);
  Tdupl();
  NotNULLd(8,4);
  Tset(Egetd(8,4));
  Rpush(z_36);
  b_94 :
  Cpush(b_37);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(10,5);
  MoveTop(10,1);
  goto j_65;
  j_65 :
  TestFunFC(n_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  goto k_65;
  k_65 :
  TestFunFC(n_0,&&fail,Egetd(10,3));
  MoveArg(10,4,10,3,0);
  MoveArg(10,5,10,3,1);
  goto l_65;
  l_65 :
  TestFunFC(q_0,&&fail,Egetd(10,5));
  Rpush(d_37);
  goto d_65;
  d_37 :
  goto c_37;
  d_65 :
  Epushd(11,6);
  NotNULLd(8,2);
  NotNULLd(10,4);
  Tset(App2("TCons",Egetd(8,2),App2("TCons",Egetd(10,4),App0("TNil"))));
  Ccall(_stratego_p_16);
  MoveTop(11,1);
  NotNULLd(10,2);
  NotNULLd(11,1);
  Tset(App2("TCons",Egetd(10,2),App2("TCons",Egetd(11,1),App0("TNil"))));
  MoveTop(11,2);
  goto g_65;
  g_65 :
  TestFunFC(n_0,&&fail,Egetd(11,2));
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  goto h_65;
  h_65 :
  TestFunFC(n_0,&&fail,Egetd(11,4));
  MoveArg(11,5,11,4,0);
  MoveArg(11,6,11,4,1);
  goto i_65;
  i_65 :
  TestFunFC(q_0,&&fail,Egetd(11,6));
  Rpush(f_37);
  goto f_65;
  f_37 :
  goto e_37;
  f_65 :
  Move(9,1,11,3);
  Move(9,2,11,5);
  Return();
  e_37 :
  Epopd(11,6);
  Return();
  c_37 :
  Epopd(10,5);
  OneNextSon();
  AllBuild();
  goto a_37;
  b_37 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_37);
  goto b_94;
  h_37 :
  AllBuild();
  goto g_37;
  a_37 :
  Cpop();
  g_37 :
  Return();
  z_36 :
  Tpop();
  NotNULLd(9,1);
  NotNULLd(9,2);
  Tset(App2("TCons",Egetd(9,1),App2("TCons",Egetd(9,2),App0("TNil"))));
  MoveTop(9,3);
  goto t_65;
  t_65 :
  TestFunFC(n_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto u_65;
  u_65 :
  TestFunFC(n_0,&&fail,Egetd(9,5));
  MoveArg(9,6,9,5,0);
  MoveArg(9,7,9,5,1);
  goto v_65;
  v_65 :
  TestFunFC(q_0,&&fail,Egetd(9,7));
  Rpush(j_37);
  goto m_65;
  j_37 :
  goto i_37;
  m_65 :
  Epushd(10,5);
  Move(7,1,9,4);
  Move(7,2,9,6);
  NotNULLd(0,14);
  Tset(Egetd(0,14));
  MoveTop(10,1);
  goto o_65;
  o_65 :
  TestFunFC(n_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  goto r_65;
  r_65 :
  TestFunFC(n_0,&&fail,Egetd(10,3));
  MoveArg(10,4,10,3,0);
  MoveArg(10,5,10,3,1);
  goto s_65;
  s_65 :
  TestFunFC(q_0,&&fail,Egetd(10,5));
  Rpush(l_37);
  goto n_65;
  l_37 :
  goto k_37;
  n_65 :
  Move(7,3,10,2);
  Move(7,4,10,4);
  Return();
  k_37 :
  Epopd(10,5);
  Return();
  i_37 :
  Epopd(9,7);
  Return();
  x_36 :
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
  v_36 :
  Epopd(6,6);
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Rpush(m_37);
  goto a_94;
  m_37 :
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  MoveTop(5,2);
  goto e_66;
  e_66 :
  TestFunFC(n_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto f_66;
  f_66 :
  TestFunFC(n_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto g_66;
  g_66 :
  TestFunFC(q_0,&&fail,Egetd(5,6));
  Rpush(n_37);
  goto d_66;
  n_37 :
  goto u_36;
  d_66 :
  NotNULLd(5,3);
  NotNULLd(5,5);
  Tset(App2("Cons",Egetd(5,3),Egetd(5,5)));
  Return();
  u_36 :
  Epopd(5,6);
  Return();
  r_36 :
  goto q_36;
  x_64 :
  Tset(App0("Nil"));
  Return();
  q_36 :
  Epopd(4,7);
  Return();
  p_36 :
  MoveTop(3,2);
  Move(1,2,3,2);
  Epopd(3,2);
  Return();
  n_36 :
  Epopd(2,3);
  Tpop();
  NotNULLd(0,14);
  NotNULLd(0,8);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",Egetd(0,8),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_x_16);
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
  k_18 :
  goto i_18;
  l_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,9);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,9),App0("TNil"))));
  Rpush(o_37);
  y_93 :
  Epushd(3,7);
  MoveTop(3,1);
  goto n_64;
  n_64 :
  TestFunFC(n_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto o_64;
  o_64 :
  TestFunFC(n_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,7,3,3,1);
  goto p_64;
  p_64 :
  TestFunFC(i_0,&&s_37,Egetd(3,4));
  goto q_64;
  q_64 :
  TestFunFC(q_0,&&fail,Egetd(3,7));
  Rpush(r_37);
  goto f_63;
  s_37 :
  TestFunFC(j_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto r_64;
  r_64 :
  TestFunFC(q_0,&&fail,Egetd(3,7));
  Rpush(r_37);
  goto g_63;
  r_37 :
  goto q_37;
  g_63 :
  Epushd(4,6);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_16);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(3,5);
  NotNULLd(4,1);
  NotNULLd(3,6);
  Tset(App2("TCons",App2("TCons",Egetd(3,2),App2("TCons",Egetd(3,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,1),App2("TCons",Egetd(3,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(5,6);
  MoveTop(5,1);
  goto f_64;
  f_64 :
  TestFunFC(n_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto g_64;
  g_64 :
  TestFunFC(n_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,6,5,3,1);
  goto h_64;
  h_64 :
  TestFunFC(g_5,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  goto i_64;
  i_64 :
  TestFunFC(q_0,&&fail,Egetd(5,6));
  Rpush(v_37);
  goto i_63;
  v_37 :
  goto u_37;
  i_63 :
  Epushd(6,4);
  Tdupl();
  Epushd(7,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  NotNULLd(5,5);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(5,5),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(7,1);
  goto c_64;
  c_64 :
  TestFunFC(n_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto d_64;
  d_64 :
  TestFunFC(n_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto e_64;
  e_64 :
  TestFunFC(q_0,&&fail,Egetd(7,5));
  Rpush(x_37);
  goto k_63;
  x_37 :
  goto w_37;
  k_63 :
  Epushd(8,7);
  Tdupl();
  NotNULLd(7,4);
  Tset(Egetd(7,4));
  Rpush(y_37);
  z_93 :
  Cpush(a_38);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(9,5);
  MoveTop(9,1);
  goto r_63;
  r_63 :
  TestFunFC(n_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  goto s_63;
  s_63 :
  TestFunFC(n_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto t_63;
  t_63 :
  TestFunFC(q_0,&&fail,Egetd(9,5));
  Rpush(c_38);
  goto l_63;
  c_38 :
  goto b_38;
  l_63 :
  Epushd(10,6);
  NotNULLd(7,2);
  NotNULLd(9,4);
  Tset(App2("TCons",Egetd(7,2),App2("TCons",Egetd(9,4),App0("TNil"))));
  Ccall(_stratego_p_16);
  MoveTop(10,1);
  NotNULLd(9,2);
  NotNULLd(10,1);
  Tset(App2("TCons",Egetd(9,2),App2("TCons",Egetd(10,1),App0("TNil"))));
  MoveTop(10,2);
  goto o_63;
  o_63 :
  TestFunFC(n_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto p_63;
  p_63 :
  TestFunFC(n_0,&&fail,Egetd(10,4));
  MoveArg(10,5,10,4,0);
  MoveArg(10,6,10,4,1);
  goto q_63;
  q_63 :
  TestFunFC(q_0,&&fail,Egetd(10,6));
  Rpush(e_38);
  goto n_63;
  e_38 :
  goto d_38;
  n_63 :
  Move(8,1,10,3);
  Move(8,2,10,5);
  Return();
  d_38 :
  Epopd(10,6);
  Return();
  b_38 :
  Epopd(9,5);
  OneNextSon();
  AllBuild();
  goto z_37;
  a_38 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_38);
  goto z_93;
  g_38 :
  AllBuild();
  goto f_38;
  z_37 :
  Cpop();
  f_38 :
  Return();
  y_37 :
  Tpop();
  NotNULLd(8,1);
  NotNULLd(8,2);
  Tset(App2("TCons",Egetd(8,1),App2("TCons",Egetd(8,2),App0("TNil"))));
  MoveTop(8,3);
  goto z_63;
  z_63 :
  TestFunFC(n_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto a_64;
  a_64 :
  TestFunFC(n_0,&&fail,Egetd(8,5));
  MoveArg(8,6,8,5,0);
  MoveArg(8,7,8,5,1);
  goto b_64;
  b_64 :
  TestFunFC(q_0,&&fail,Egetd(8,7));
  Rpush(i_38);
  goto u_63;
  i_38 :
  goto h_38;
  u_63 :
  Epushd(9,5);
  Move(6,1,8,4);
  Move(6,2,8,6);
  NotNULLd(0,14);
  Tset(Egetd(0,14));
  MoveTop(9,1);
  goto w_63;
  w_63 :
  TestFunFC(n_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  goto x_63;
  x_63 :
  TestFunFC(n_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto y_63;
  y_63 :
  TestFunFC(q_0,&&fail,Egetd(9,5));
  Rpush(k_38);
  goto v_63;
  k_38 :
  goto j_38;
  v_63 :
  Move(6,3,9,2);
  Move(6,4,9,4);
  Return();
  j_38 :
  Epopd(9,5);
  Return();
  h_38 :
  Epopd(8,7);
  Return();
  w_37 :
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
  u_37 :
  Epopd(5,6);
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Rpush(l_38);
  goto y_93;
  l_38 :
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  MoveTop(4,2);
  goto k_64;
  k_64 :
  TestFunFC(n_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto l_64;
  l_64 :
  TestFunFC(n_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto m_64;
  m_64 :
  TestFunFC(q_0,&&fail,Egetd(4,6));
  Rpush(m_38);
  goto j_64;
  m_38 :
  goto t_37;
  j_64 :
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("Cons",Egetd(4,3),Egetd(4,5)));
  Return();
  t_37 :
  Epopd(4,6);
  Return();
  q_37 :
  goto p_37;
  f_63 :
  Tset(App0("Nil"));
  Return();
  p_37 :
  Epopd(3,7);
  Return();
  o_37 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,14);
  NotNULLd(0,8);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,15),App0("TNil")))));
  Ccall(_stratego_x_16);
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
  k_59 :
  Tset(App1("Block",App0("Nil")));
  Return();
  h_18 :
  goto w_15;
  j_59 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_f_17);
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
  w_15 :
  goto v_15;
  i_59 :
  Tdupl();
  Epushd(1,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  MoveTop(1,2);
  goto c_63;
  c_63 :
  TestFunFC(y_31,&&s_38,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,1,1,2,1);
  Rpush(r_38);
  goto y_62;
  s_38 :
  TestFunFC(w_14,&&t_38,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_38);
  goto z_62;
  t_38 :
  TestFunFC(z_14,&&u_38,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_38);
  goto a_63;
  u_38 :
  TestFunFC(y_14,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_38);
  goto b_63;
  r_38 :
  goto q_38;
  b_63 :
  Return();
  q_38 :
  goto p_38;
  a_63 :
  Return();
  p_38 :
  goto o_38;
  z_62 :
  Return();
  o_38 :
  goto n_38;
  y_62 :
  Return();
  n_38 :
  Epopd(1,3);
  Tpop();
  NotNULLd(0,13);
  NotNULLd(0,8);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App1("Where",App2("Seq",App1("Build",Egetd(0,13)),App1("Assign",App1("Var",Egetd(0,8))))),Egetd(0,14),Egetd(0,15)));
  Return();
  v_15 :
  goto u_15;
  h_59 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,8);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto v_62;
  v_62 :
  TestFunFC(n_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto w_62;
  w_62 :
  TestFunFC(n_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_62;
  x_62 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  Rpush(w_38);
  goto p_61;
  w_38 :
  goto v_38;
  p_61 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(x_38);
  w_93 :
  Cpush(z_38);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto w_61;
  w_61 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto x_61;
  x_61 :
  TestFunFC(n_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto y_61;
  y_61 :
  TestFunFC(q_0,&&fail,Egetd(4,5));
  Rpush(b_39);
  goto q_61;
  b_39 :
  goto a_39;
  q_61 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_p_16);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto t_61;
  t_61 :
  TestFunFC(n_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto u_61;
  u_61 :
  TestFunFC(n_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto v_61;
  v_61 :
  TestFunFC(q_0,&&fail,Egetd(5,6));
  Rpush(d_39);
  goto s_61;
  d_39 :
  goto c_39;
  s_61 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  c_39 :
  Epopd(5,6);
  Return();
  a_39 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto y_38;
  z_38 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_39);
  goto w_93;
  f_39 :
  AllBuild();
  goto e_39;
  y_38 :
  Cpop();
  e_39 :
  Return();
  x_38 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto r_62;
  r_62 :
  TestFunFC(n_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto t_62;
  t_62 :
  TestFunFC(n_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto u_62;
  u_62 :
  TestFunFC(q_0,&&fail,Egetd(3,7));
  Rpush(h_39);
  goto z_61;
  h_39 :
  goto g_39;
  z_61 :
  Epushd(4,5);
  Move(1,1,3,4);
  Move(1,2,3,6);
  NotNULLd(0,1);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(4,1);
  goto o_62;
  o_62 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto p_62;
  p_62 :
  TestFunFC(n_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto q_62;
  q_62 :
  TestFunFC(q_0,&&fail,Egetd(4,5));
  Rpush(j_39);
  goto a_62;
  j_39 :
  goto i_39;
  a_62 :
  Epushd(5,7);
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(k_39);
  x_93 :
  Cpush(m_39);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(6,5);
  MoveTop(6,1);
  goto h_62;
  h_62 :
  TestFunFC(n_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto i_62;
  i_62 :
  TestFunFC(n_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto j_62;
  j_62 :
  TestFunFC(q_0,&&fail,Egetd(6,5));
  Rpush(o_39);
  goto b_62;
  o_39 :
  goto n_39;
  b_62 :
  Epushd(7,6);
  NotNULLd(4,2);
  NotNULLd(6,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(6,4),App0("TNil"))));
  Ccall(_stratego_p_16);
  MoveTop(7,1);
  NotNULLd(6,2);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(7,1),App0("TNil"))));
  MoveTop(7,2);
  goto e_62;
  e_62 :
  TestFunFC(n_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto f_62;
  f_62 :
  TestFunFC(n_0,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto g_62;
  g_62 :
  TestFunFC(q_0,&&fail,Egetd(7,6));
  Rpush(q_39);
  goto d_62;
  q_39 :
  goto p_39;
  d_62 :
  Move(5,1,7,3);
  Move(5,2,7,5);
  Return();
  p_39 :
  Epopd(7,6);
  Return();
  n_39 :
  Epopd(6,5);
  OneNextSon();
  AllBuild();
  goto l_39;
  m_39 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_39);
  goto x_93;
  s_39 :
  AllBuild();
  goto r_39;
  l_39 :
  Cpop();
  r_39 :
  Return();
  k_39 :
  Tpop();
  NotNULLd(5,1);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,3);
  goto l_62;
  l_62 :
  TestFunFC(n_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto m_62;
  m_62 :
  TestFunFC(n_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto n_62;
  n_62 :
  TestFunFC(q_0,&&fail,Egetd(5,7));
  Rpush(u_39);
  goto k_62;
  u_39 :
  goto t_39;
  k_62 :
  Move(1,3,5,4);
  Move(1,4,5,6);
  Return();
  t_39 :
  Epopd(5,7);
  Return();
  i_39 :
  Epopd(4,5);
  Return();
  g_39 :
  Epopd(3,7);
  Return();
  v_38 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App4("Move",Egetd(1,1),Egetd(1,2),Egetd(1,3),Egetd(1,4)));
  Epopd(1,4);
  Return();
  u_15 :
  goto t_15;
  g_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,8);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto m_61;
  m_61 :
  TestFunFC(n_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_61;
  n_61 :
  TestFunFC(n_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_61;
  o_61 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  Rpush(w_39);
  goto y_60;
  w_39 :
  goto v_39;
  y_60 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(x_39);
  v_93 :
  Cpush(z_39);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto f_61;
  f_61 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto g_61;
  g_61 :
  TestFunFC(n_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto h_61;
  h_61 :
  TestFunFC(q_0,&&fail,Egetd(4,5));
  Rpush(b_40);
  goto z_60;
  b_40 :
  goto a_40;
  z_60 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_p_16);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto c_61;
  c_61 :
  TestFunFC(n_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto d_61;
  d_61 :
  TestFunFC(n_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto e_61;
  e_61 :
  TestFunFC(q_0,&&fail,Egetd(5,6));
  Rpush(d_40);
  goto b_61;
  d_40 :
  goto c_40;
  b_61 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  c_40 :
  Epopd(5,6);
  Return();
  a_40 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto y_39;
  z_39 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_40);
  goto v_93;
  f_40 :
  AllBuild();
  goto e_40;
  y_39 :
  Cpop();
  e_40 :
  Return();
  x_39 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto j_61;
  j_61 :
  TestFunFC(n_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto k_61;
  k_61 :
  TestFunFC(n_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto l_61;
  l_61 :
  TestFunFC(q_0,&&fail,Egetd(3,7));
  Rpush(h_40);
  goto i_61;
  h_40 :
  goto g_40;
  i_61 :
  Move(1,1,3,4);
  Move(1,2,3,6);
  Return();
  g_40 :
  Epopd(3,7);
  Return();
  v_39 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("MoveTop",Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  t_15 :
  goto s_15;
  f_59 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Cpush(i_40);
  Tdupl();
  Epushd(3,3);
  NotNULLd(0,11);
  Tset(Egetd(0,11));
  MoveTop(3,1);
  goto w_60;
  w_60 :
  TestFunFC(h_23,&&m_40,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_40);
  goto u_60;
  m_40 :
  TestFunFC(n_24,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_40);
  goto v_60;
  l_40 :
  goto k_40;
  v_60 :
  Return();
  k_40 :
  goto j_40;
  u_60 :
  Return();
  j_40 :
  Epopd(3,3);
  Cpop();
  Crestore();
  Cjump();
  i_40 :
  Ccall(_stratego_f_17);
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
  s_15 :
  goto r_15;
  e_59 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(0,3);
  Tset(App4("Choices",App2("Choice",Egetd(0,12),Egetd(0,13)),Egetd(0,14),Egetd(0,15),Egetd(0,3)));
  Return();
  r_15 :
  goto q_15;
  d_59 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_f_17);
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
  q_15 :
  goto n_15;
  c_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_f_17);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_f_17);
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
  n_15 :
  goto m_15;
  b_59 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App2("Choice",Egetd(0,12),Egetd(0,13)),Egetd(0,14),Egetd(0,15)));
  Return();
  m_15 :
  goto l_15;
  a_59 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App3("Instr",Egetd(0,13),Egetd(0,14),Egetd(0,15)),App0("Nil")))));
  Return();
  l_15 :
  goto k_15;
  z_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_f_17);
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
  k_15 :
  goto j_15;
  y_58 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Tpop"),App0("Nil"))))));
  Return();
  j_15 :
  goto i_15;
  x_58 :
  Tset(App1("Goto",ATmakeString("fail")));
  Return();
  i_15 :
  goto h_15;
  w_58 :
  Tset(App1("Block",App0("Nil")));
  Return();
  h_15 :
  Epopd(0,15);
  goto f_15;
  g_15 :
  Ccontinue(n_40);
  Ccall(_stratego_e_16);
  goto f_15;
  n_40 :
  Epushd(0,5);
  MoveTop(0,1);
  goto g_70;
  g_70 :
  TestFunFC(d_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  MoveArg(0,5,0,1,3);
  Rpush(q_40);
  goto f_70;
  q_40 :
  goto p_40;
  f_70 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,2),Egetd(0,4),Egetd(0,5)),App2("Cons",App1("Goto",Egetd(0,3)),App0("Nil")))));
  Return();
  p_40 :
  Epopd(0,5);
  goto o_40;
  f_15 :
  Cpop();
  o_40 :
ENDPROC

PROC(_stratego_a_17)
  _ST_table_get();
ENDPROC

PROC(_stratego_b_17)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_94;
  i_94 :
  TestFunFC(f_26,&&fail,Egetd(0,1));
  Rpush(x_40);
  goto h_94;
  x_40 :
  goto r_40;
  h_94 :
  Return();
  r_40 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_17)
  Epushd(0,7);
  TestFunTop(d_26);
  TravInit();
  OneNextSon();
  Cpush(z_40);
  Epushd(1,1);
  TestFunTop(y_27);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(n_24);
  TravInit();
  OneNextSon();
  TestFunTop(z_28);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto m_94;
  m_94 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(b_41);
  goto l_94;
  b_41 :
  goto a_41;
  l_94 :
  Return();
  a_41 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_d_17);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_17);
  OneNextSon();
  Ccall(_stratego_f_18);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  TestFunTop(z_28);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto p_94;
  p_94 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(d_41);
  goto o_94;
  d_41 :
  goto c_41;
  o_94 :
  Return();
  c_41 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_17);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  TestFunTop(j_5);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto r_94;
  r_94 :
  TestFunFC(k_5,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(f_41);
  goto q_94;
  f_41 :
  goto e_41;
  q_94 :
  Move(1,1,2,2);
  Return();
  e_41 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_f_18);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_f_18);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto y_40;
  z_40 :
  Epushd(1,1);
  TestFunTop(y_27);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(n_24);
  TravInit();
  OneNextSon();
  TestFunTop(m_26);
  TravInit();
  OneNextSon();
  TestFunTop(z_28);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto u_94;
  u_94 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(i_41);
  goto t_94;
  i_41 :
  goto h_41;
  t_94 :
  Return();
  h_41 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_d_17);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_17);
  OneNextSon();
  Ccall(_stratego_f_18);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto x_94;
  x_94 :
  TestFunFC(j_31,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto y_94;
  y_94 :
  TestStr(2,2,"Cons",&&fail);
  Rpush(k_41);
  goto w_94;
  k_41 :
  goto j_41;
  w_94 :
  Return();
  j_41 :
  Epopd(2,2);
  AllBuild();
  OneNextSon();
  TestFunTop(m_26);
  TravInit();
  OneNextSon();
  TestFunTop(z_28);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto a_95;
  a_95 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(m_41);
  goto z_94;
  m_41 :
  goto l_41;
  z_94 :
  Return();
  l_41 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_17);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  TestFunTop(j_5);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto c_95;
  c_95 :
  TestFunFC(k_5,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(o_41);
  goto b_95;
  o_41 :
  goto n_41;
  b_95 :
  Move(1,1,2,2);
  Return();
  n_41 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_f_18);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_f_18);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto e_95;
  e_95 :
  TestFunFC(j_31,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto f_95;
  f_95 :
  TestStr(2,2,"Cons",&&fail);
  Rpush(q_41);
  goto d_95;
  q_41 :
  goto p_41;
  d_95 :
  Return();
  p_41 :
  Epopd(2,2);
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto g_41;
  y_40 :
  Cpop();
  g_41 :
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
  Ccall(_stratego_f_17);
  MoveTop(1,1);
  Move(0,4,1,1);
  Ccall(_stratego_f_17);
  MoveTop(1,2);
  Move(0,5,1,2);
  Ccall(_stratego_f_17);
  MoveTop(1,3);
  Move(0,6,1,3);
  Tset(App2("AFun",ATmakeString("Cons"),MakeInt(2)));
  MoveTop(1,4);
  goto p_95;
  p_95 :
  TestFunFC(c_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  Rpush(s_41);
  goto l_95;
  s_41 :
  goto r_41;
  l_95 :
  Epushd(2,1);
  Tdupl();
  Cpush(u_41);
  Epushd(3,1);
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(1,5),Egetd(1,6)),App0("TNil"))));
  Ccall(_stratego_a_17);
  MoveTop(3,1);
  Move(2,1,3,1);
  Epopd(3,1);
  goto t_41;
  u_41 :
  Epushd(3,1);
  Ccall(_stratego_f_17);
  MoveTop(3,1);
  Move(2,1,3,1);
  NotNULLd(1,5);
  NotNULLd(1,6);
  NotNULLd(2,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(1,5),Egetd(1,6)),App2("TCons",Egetd(2,1),App0("TNil")))));
  Ccall(_stratego_j_17);
  Epopd(3,1);
  goto v_41;
  t_41 :
  Cpop();
  v_41 :
  Tpop();
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Move(0,7,2,1);
  Epopd(2,1);
  Return();
  r_41 :
  Epopd(1,6);
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

PROC(_stratego_d_17)
  Cpush(w_41);
  Tdupl();
  Rpush(c_42);
  x_41 :
  Cpush(y_41);
  Epushd(0,2);
  MoveTop(0,1);
  goto e_97;
  e_97 :
  TestFunFC(n_31,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(e_42);
  goto d_97;
  e_42 :
  goto d_42;
  d_97 :
  Return();
  d_42 :
  Epopd(0,2);
  Cpop();
  goto b_42;
  y_41 :
  IsAppl();
  MatchTravInit();
  z_41 :
  OneMatchNextSon();
  Cpush(z_41);
  Rpush(a_42);
  goto x_41;
  a_42 :
  Cpop();
  MatchTravEnd();
  b_42 :
  Return();
  c_42 :
  Cpop();
  Crestore();
  Cjump();
  w_41 :
ENDPROC

PROC(_stratego_e_17)
  Epushd(0,9);
  TestFunTop(d_26);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  TestFunTop(y_27);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(n_24);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_d_17);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(h_30);
  TravInit();
  OneNextSon();
  TestFunTop(j_5);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto l_97;
  l_97 :
  TestFunFC(k_5,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(g_42);
  goto k_97;
  g_42 :
  goto f_42;
  k_97 :
  Move(1,1,2,2);
  Return();
  f_42 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_f_18);
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
  Ccall(_stratego_f_17);
  MoveTop(1,1);
  Move(0,4,1,1);
  Ccall(_stratego_f_17);
  MoveTop(1,2);
  Move(0,5,1,2);
  Ccall(_stratego_f_17);
  MoveTop(1,3);
  Move(0,6,1,3);
  Ccall(_stratego_f_17);
  MoveTop(1,4);
  Move(0,7,1,4);
  Ccall(_stratego_f_17);
  MoveTop(1,5);
  Move(0,8,1,5);
  Ccall(_stratego_f_17);
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

PROC(_stratego_f_17)
  _ST_new();
ENDPROC

PROC(_stratego_g_17)
  Cpush(i_42);
  Epushd(0,6);
  TestFunTop(d_26);
  TravInit();
  OneNextSon();
  Cpush(k_42);
  Epushd(1,1);
  TestFunTop(y_27);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(n_24);
  TravInit();
  OneNextSon();
  Rpush(l_42);
  a_102 :
  Cpush(n_42);
  Epushd(2,5);
  MoveTop(2,1);
  goto s_98;
  s_98 :
  TestFunFC(m_26,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto t_98;
  t_98 :
  TestFunFC(m_26,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  Rpush(p_42);
  goto r_98;
  p_42 :
  goto o_42;
  r_98 :
  NotNULLd(2,2);
  NotNULLd(2,4);
  NotNULLd(2,5);
  Tset(App2("Seq",App2("Seq",Egetd(2,2),Egetd(2,4)),Egetd(2,5)));
  Rpush(q_42);
  goto a_102;
  q_42 :
  Return();
  o_42 :
  Epopd(2,5);
  goto m_42;
  n_42 :
  goto r_42;
  m_42 :
  Cpop();
  r_42 :
  Return();
  l_42 :
  TestFunTop(m_26);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  Cpush(s_42);
  Tdupl();
  Rpush(y_42);
  t_42 :
  Cpush(u_42);
  Epushd(3,2);
  MoveTop(3,1);
  goto v_98;
  v_98 :
  TestFunFC(k_5,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(a_43);
  goto u_98;
  a_43 :
  goto z_42;
  u_98 :
  Move(1,1,3,2);
  Return();
  z_42 :
  Epopd(3,2);
  Cpop();
  goto x_42;
  u_42 :
  IsAppl();
  MatchTravInit();
  v_42 :
  OneMatchNextSon();
  Cpush(v_42);
  Rpush(w_42);
  goto t_42;
  w_42 :
  Cpop();
  MatchTravEnd();
  x_42 :
  Return();
  y_42 :
  Cpop();
  Crestore();
  Cjump();
  s_42 :
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(j_5);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto y_98;
  y_98 :
  TestFunFC(k_5,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(c_43);
  goto x_98;
  c_43 :
  goto b_43;
  x_98 :
  Move(1,1,2,2);
  Return();
  b_43 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_f_18);
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,1);
  Cpush(d_43);
  Tdupl();
  Rpush(j_43);
  e_43 :
  Cpush(f_43);
  Epushd(3,2);
  MoveTop(3,1);
  goto a_99;
  a_99 :
  TestFunFC(k_5,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(l_43);
  goto z_98;
  l_43 :
  goto k_43;
  z_98 :
  Move(1,1,3,2);
  Return();
  k_43 :
  Epopd(3,2);
  Cpop();
  goto i_43;
  f_43 :
  IsAppl();
  MatchTravInit();
  g_43 :
  OneMatchNextSon();
  Cpush(g_43);
  Rpush(h_43);
  goto e_43;
  h_43 :
  Cpop();
  MatchTravEnd();
  i_43 :
  Return();
  j_43 :
  Cpop();
  Crestore();
  Cjump();
  d_43 :
  MoveTop(2,1);
  Move(0,2,2,1);
  Epopd(2,1);
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto j_42;
  k_42 :
  Epushd(1,3);
  TestFunTop(y_27);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(n_24);
  TravInit();
  OneNextSon();
  Epushd(2,9);
  Rpush(o_43);
  d_102 :
  Cpush(q_43);
  Epushd(3,5);
  MoveTop(3,1);
  goto e_99;
  e_99 :
  TestFunFC(m_26,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto f_99;
  f_99 :
  TestFunFC(m_26,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(s_43);
  goto d_99;
  s_43 :
  goto r_43;
  d_99 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  NotNULLd(3,5);
  Tset(App2("Seq",App2("Seq",Egetd(3,2),Egetd(3,4)),Egetd(3,5)));
  Rpush(t_43);
  goto d_102;
  t_43 :
  Return();
  r_43 :
  Epopd(3,5);
  goto p_43;
  q_43 :
  goto u_43;
  p_43 :
  Cpop();
  u_43 :
  Return();
  o_43 :
  MoveTop(2,1);
  goto k_99;
  k_99 :
  TestFunFC(m_26,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_99;
  l_99 :
  TestFunFC(m_26,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,8,2,3,1);
  goto m_99;
  m_99 :
  TestFunFC(j_5,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto n_99;
  n_99 :
  TestFunFC(k_5,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  goto o_99;
  o_99 :
  TestFunFC(i_0,&&fail,Egetd(2,7));
  goto p_99;
  p_99 :
  TestFunFC(w_43,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  Rpush(v_43);
  goto g_99;
  v_43 :
  goto n_43;
  g_99 :
  Move(1,2,2,2);
  Move(1,1,2,6);
  Move(1,3,2,9);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  Tset(App2("Seq",App2("Seq",Egetd(1,2),App1("CountRule",Egetd(1,3))),App2("Call",App1("SVar",Egetd(1,1)),App0("Nil"))));
  TestFunTop(m_26);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  Cpush(x_43);
  Tdupl();
  Rpush(d_44);
  y_43 :
  Cpush(z_43);
  Epushd(4,2);
  MoveTop(4,1);
  goto i_99;
  i_99 :
  TestFunFC(k_5,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(f_44);
  goto h_99;
  f_44 :
  goto e_44;
  h_99 :
  Move(1,1,4,2);
  Return();
  e_44 :
  Epopd(4,2);
  Cpop();
  goto c_44;
  z_43 :
  IsAppl();
  MatchTravInit();
  a_44 :
  OneMatchNextSon();
  Cpush(a_44);
  Rpush(b_44);
  goto y_43;
  b_44 :
  Cpop();
  MatchTravEnd();
  c_44 :
  Return();
  d_44 :
  Cpop();
  Crestore();
  Cjump();
  x_43 :
  MoveTop(3,1);
  Move(0,1,3,1);
  Epopd(3,1);
  OneNextSon();
  AllBuild();
  Return();
  n_43 :
  Epopd(2,9);
  OneNextSon();
  Epushd(2,1);
  Cpush(g_44);
  Tdupl();
  Rpush(m_44);
  h_44 :
  Cpush(i_44);
  Epushd(3,2);
  MoveTop(3,1);
  goto r_99;
  r_99 :
  TestFunFC(k_5,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(o_44);
  goto q_99;
  o_44 :
  goto n_44;
  q_99 :
  Move(1,1,3,2);
  Return();
  n_44 :
  Epopd(3,2);
  Cpop();
  goto l_44;
  i_44 :
  IsAppl();
  MatchTravInit();
  j_44 :
  OneMatchNextSon();
  Cpush(j_44);
  Rpush(k_44);
  goto h_44;
  k_44 :
  Cpop();
  MatchTravEnd();
  l_44 :
  Return();
  m_44 :
  Cpop();
  Crestore();
  Cjump();
  g_44 :
  MoveTop(2,1);
  Move(0,2,2,1);
  Epopd(2,1);
  AllBuild();
  AllBuild();
  Epopd(1,3);
  goto m_43;
  j_42 :
  Cpop();
  m_43 :
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
  Ccall(_stratego_f_17);
  MoveTop(1,1);
  Move(0,5,1,1);
  Ccall(_stratego_f_17);
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
  goto h_42;
  i_42 :
  Ccontinue(t_44);
  Ccall(_stratego_e_17);
  goto h_42;
  t_44 :
  Ccall(_stratego_c_17);
  goto u_44;
  h_42 :
  Cpop();
  u_44 :
ENDPROC

PROC(_stratego_h_17)
  Epushd(0,8);
  MoveTop(0,1);
  goto i_102;
  i_102 :
  TestFunFC(d_26,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  MoveArg(0,8,0,1,2);
  goto j_102;
  j_102 :
  TestFunFC(l_28,&&y_44,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  goto k_102;
  k_102 :
  TestFunFC(i_0,&&fail,Egetd(0,4));
  Rpush(x_44);
  goto g_102;
  y_44 :
  TestFunFC(o_28,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  MoveArg(0,6,0,2,3);
  goto l_102;
  l_102 :
  TestFunFC(i_0,&&fail,Egetd(0,5));
  Rpush(x_44);
  goto h_102;
  x_44 :
  goto w_44;
  h_102 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App3("Instr",App3("SDef",Egetd(0,4),App0("Nil"),Egetd(0,6)),Egetd(0,7),Egetd(0,8)));
  Return();
  w_44 :
  goto v_44;
  g_102 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App1("Block",App2("Cons",App1("PROC",Egetd(0,3)),App2("Cons",App3("Instr",Egetd(0,5),Egetd(0,7),Egetd(0,8)),App2("Cons",App0("ENDPROC"),App0("Nil"))))));
  Return();
  v_44 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_i_17)
  Rpush(z_44);
  g_103 :
  Cpush(b_45);
  Ccall(_stratego_f_18);
  goto a_45;
  b_45 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App3("Instr",Egetd(0,1),App0("Nil"),MakeInt(0)));
  Cpush(e_45);
  Ccall(_stratego_h_17);
  goto d_45;
  e_45 :
  goto f_45;
  d_45 :
  Cpop();
  f_45 :
  Rpush(g_45);
  h_103 :
  Cpush(i_45);
  h_45 :
  Cpush(k_45);
  Ccall(_stratego_g_17);
  goto j_45;
  k_45 :
  Ccall(_stratego_z_16);
  goto l_45;
  j_45 :
  Cpop();
  l_45 :
  Tduplinv();
  goto h_45;
  i_45 :
  AllInit();
  m_45 :
  AllNextSon(&&n_45);
  Rpush(o_45);
  goto h_103;
  o_45 :
  goto m_45;
  n_45 :
  AllBuild();
  Return();
  g_45 :
  Ccall(_stratego_c_16);
  Ccall(_stratego_b_16);
  Epopd(0,1);
  OneNextSon();
  Rpush(p_45);
  goto g_103;
  p_45 :
  AllBuild();
  goto c_45;
  a_45 :
  Cpop();
  c_45 :
  Return();
  z_44 :
ENDPROC

PROC(_stratego_j_17)
  _ST_table_put();
ENDPROC

PROC(_stratego_k_17)
  _ST_implode_string();
ENDPROC

PROC(_stratego_l_17)
  _ST_explode_string();
ENDPROC

PROC(_stratego_m_17)
  Epushd(0,5);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_17);
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_17);
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto k_103;
  k_103 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto l_103;
  l_103 :
  TestFunFC(n_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto m_103;
  m_103 :
  TestFunFC(q_0,&&fail,Egetd(0,5));
  Rpush(s_45);
  goto j_103;
  s_45 :
  goto q_45;
  j_103 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(t_45);
  u_103 :
  Cpush(v_45);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_45);
  goto u_103;
  w_45 :
  AllBuild();
  goto u_45;
  v_45 :
  Ccall(_stratego_f_18);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto x_45;
  u_45 :
  Cpop();
  x_45 :
  Return();
  t_45 :
  Ccall(_stratego_k_17);
  Return();
  q_45 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_17)
  _ST_create_table();
ENDPROC

PROC(_stratego_o_17)
  Tdupl();
  Tset(ATmakeString("symbol-table"));
  Ccall(_stratego_n_17);
  Tpop();
  Rpush(z_45);
  h_104 :
  Cpush(b_46);
  Ccall(_stratego_f_18);
  goto a_46;
  b_46 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(0,4);
  MoveTop(0,1);
  goto x_103;
  x_103 :
  TestFunFC(l_28,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  goto y_103;
  y_103 :
  TestFunFC(i_0,&&fail,Egetd(0,3));
  Rpush(i_47);
  goto v_103;
  i_47 :
  goto p_46;
  v_103 :
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(App2("TCons",ATmakeString("_stratego_"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_m_17);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_j_17);
  NotNULLd(0,2);
  Tset(App1("PROCDECL",Egetd(0,2)));
  Epopd(1,1);
  Return();
  p_46 :
  Epopd(0,4);
  OneNextSon();
  Rpush(j_47);
  goto h_104;
  j_47 :
  AllBuild();
  goto c_46;
  a_46 :
  Cpop();
  c_46 :
  Return();
  z_45 :
ENDPROC

PROC(_stratego_p_17)
  Epushd(0,4);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_o_17);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_i_17);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,5);
  Ccall(_stratego_z_15);
  MoveTop(1,1);
  goto l_104;
  l_104 :
  TestFunFC(n_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_104;
  m_104 :
  TestFunFC(n_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto n_104;
  n_104 :
  TestFunFC(q_0,&&fail,Egetd(1,5));
  Rpush(u_47);
  goto k_104;
  u_47 :
  goto k_47;
  k_104 :
  Move(0,3,1,2);
  Move(0,4,1,4);
  Return();
  k_47 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,1);
  NotNULLd(0,4);
  NotNULLd(0,2);
  Tset(App1("Block",App2("Cons",App1("Block",Egetd(0,3)),App2("Cons",App1("Block",Egetd(0,1)),App2("Cons",App1("Block",App2("Cons",App1("PROC",ATmakeString("init_afuns")),App2("Cons",App1("Block",Egetd(0,4)),App2("Cons",App0("ENDPROC"),App0("Nil"))))),App2("Cons",App1("Block",Egetd(0,2)),App0("Nil")))))));
  Epopd(0,4);
ENDPROC

PROC(_stratego_q_17)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_105;
  a_105 :
  TestFunFC(q_0,&&fail,Egetd(0,1));
  Rpush(z_47);
  goto z_104;
  z_47 :
  goto v_47;
  z_104 :
  Return();
  v_47 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_17)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_a_18);
  Tset(MakeInt(1));
  Ccall(_stratego_z_17);
ENDPROC

PROC(_stratego_s_17)
  Epushd(0,2);
  Tdupl();
  Cpush(b_48);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Cpush(j_48);
  Tdupl();
  Rpush(k_48);
  y_105 :
  Cpush(m_48);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_105;
  d_105 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_105;
  e_105 :
  TestFunFC(v_48,&&fail,Egetd(1,2));
  Rpush(t_48);
  goto c_105;
  t_48 :
  goto s_48;
  c_105 :
  Return();
  s_48 :
  Epopd(1,3);
  goto l_48;
  m_48 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_49);
  goto y_105;
  c_49 :
  AllBuild();
  goto b_49;
  l_48 :
  Cpop();
  b_49 :
  Return();
  k_48 :
  Cpop();
  Crestore();
  Cjump();
  j_48 :
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Rpush(d_50);
  z_105 :
  Cpush(i_50);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_105;
  g_105 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_105;
  h_105 :
  TestFunFC(u_50,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_50);
  goto f_105;
  n_50 :
  goto j_50;
  f_105 :
  Move(0,2,1,3);
  Return();
  j_50 :
  Epopd(1,4);
  goto e_50;
  i_50 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_51);
  goto z_105;
  e_51 :
  AllBuild();
  goto w_50;
  e_50 :
  Cpop();
  w_50 :
  Return();
  d_50 :
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Rpush(g_51);
  a_106 :
  Cpush(i_51);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_105;
  j_105 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_105;
  k_105 :
  TestFunFC(l_51,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(k_51);
  goto i_105;
  k_51 :
  goto j_51;
  i_105 :
  Move(0,1,1,3);
  Return();
  j_51 :
  Epopd(1,4);
  goto h_51;
  i_51 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_51);
  goto a_106;
  s_51 :
  AllBuild();
  goto m_51;
  h_51 :
  Cpop();
  m_51 :
  Return();
  g_51 :
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_a_18);
  goto a_48;
  b_48 :
  goto t_51;
  a_48 :
  Cpop();
  t_51 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_z_17);
  Epopd(0,2);
ENDPROC

PROC(_stratego_t_17)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_u_17)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_v_17)
  Epushd(0,1);
  Tdupl();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Cpush(v_51);
  Rpush(w_51);
  a_107 :
  Cpush(d_52);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_106;
  c_106 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_106;
  d_106 :
  TestFunFC(u_52,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_52);
  goto b_106;
  t_52 :
  goto n_52;
  b_106 :
  Move(0,1,1,3);
  Return();
  n_52 :
  Epopd(1,4);
  goto c_52;
  d_52 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_53);
  goto a_107;
  k_53 :
  AllBuild();
  goto g_53;
  c_52 :
  Cpop();
  g_53 :
  Return();
  w_51 :
  goto u_51;
  v_51 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto m_53;
  u_51 :
  Cpop();
  m_53 :
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  Cpush(o_53);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Rpush(r_53);
  b_107 :
  Cpush(b_54);
  Epushd(1,3);
  MoveTop(1,1);
  goto j_106;
  j_106 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_106;
  k_106 :
  TestFunFC(f_54,&&fail,Egetd(1,2));
  Rpush(d_54);
  goto i_106;
  d_54 :
  goto c_54;
  i_106 :
  Return();
  c_54 :
  Epopd(1,3);
  goto a_54;
  b_54 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_54);
  goto b_107;
  m_54 :
  AllBuild();
  goto l_54;
  a_54 :
  Cpop();
  l_54 :
  Return();
  r_53 :
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_17);
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  goto n_53;
  o_53 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_17);
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  goto q_54;
  n_53 :
  Cpop();
  q_54 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_17)
  _ST_dtime();
ENDPROC

PROC(_stratego_x_17)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_y_17)
  Epushd(0,3);
  Tdupl();
  Cpush(x_54);
  Rpush(g_55);
  v_107 :
  Cpush(j_55);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_107;
  d_107 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_107;
  e_107 :
  TestFunFC(s_55,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_55);
  goto c_107;
  r_55 :
  goto l_55;
  c_107 :
  Move(0,1,1,3);
  Return();
  l_55 :
  Epopd(1,4);
  goto h_55;
  j_55 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_55);
  goto v_107;
  x_55 :
  AllBuild();
  goto w_55;
  h_55 :
  Cpop();
  w_55 :
  Return();
  g_55 :
  goto r_54;
  x_54 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto n_56;
  r_54 :
  Cpop();
  n_56 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_x_17);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_z_17)
  _ST_exit();
ENDPROC

PROC(_stratego_a_18)
  _ST_printnl();
ENDPROC

PROC(_stratego_b_18)
  Epushd(0,1);
  Tdupl();
  Rpush(o_56);
  e_108 :
  Cpush(r_56);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_107;
  x_107 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_107;
  y_107 :
  TestFunFC(l_51,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(u_57);
  goto w_107;
  u_57 :
  goto t_57;
  w_107 :
  Move(0,1,1,3);
  Return();
  t_57 :
  Epopd(1,4);
  goto p_56;
  r_56 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_57);
  goto e_108;
  w_57 :
  AllBuild();
  goto v_57;
  p_56 :
  Cpop();
  v_57 :
  Return();
  o_56 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_a_18);
  Tset(MakeInt(1));
  Ccall(_stratego_z_17);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_18)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_108;
  g_108 :
  TestFunFC(d_58,&&fail,Egetd(0,1));
  Rpush(c_58);
  goto f_108;
  c_58 :
  goto x_57;
  f_108 :
  Return();
  x_57 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_18)
  Tdupl();
  h_58 :
  TestFunTop(j_0);
  Cpush(i_58);
  Arg(0);
  Cpush(l_58);
  Ccall(_stratego_c_18);
  goto k_58;
  l_58 :
  Epushd(0,2);
  MoveTop(0,1);
  goto j_108;
  j_108 :
  TestFunFC(p_58,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(o_58);
  goto i_108;
  o_58 :
  goto n_58;
  i_108 :
  Return();
  n_58 :
  Epopd(0,2);
  goto m_58;
  k_58 :
  Cpop();
  m_58 :
  Tpop();
  Cpop();
  goto j_58;
  i_58 :
  Arg(1);
  Tdrop();
  goto h_58;
  j_58 :
  Tpop();
  Ccall(_stratego_b_18);
ENDPROC

PROC(_stratego_e_18)
  Epushd(0,5);
  MoveTop(0,3);
  goto a_111;
  a_111 :
  TestFunFC(j_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto b_111;
  b_111 :
  TestFunFC(j_0,&&h_63,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(m_63);
  Rpush(s_64);
  goto n_108;
  s_64 :
  goto j_63;
  m_63 :
  Ccontinue(t_64);
  Rpush(v_64);
  goto o_108;
  v_64 :
  goto j_63;
  t_64 :
  Ccontinue(w_64);
  Rpush(z_64);
  goto p_108;
  z_64 :
  goto j_63;
  w_64 :
  Ccontinue(b_65);
  Rpush(e_65);
  goto q_108;
  e_65 :
  goto j_63;
  b_65 :
  Ccontinue(p_65);
  Rpush(q_65);
  goto r_108;
  q_65 :
  goto j_63;
  p_65 :
  Ccontinue(m_66);
  Rpush(o_66);
  goto s_108;
  o_66 :
  goto j_63;
  m_66 :
  Ccontinue(p_66);
  Rpush(q_66);
  goto t_108;
  q_66 :
  goto j_63;
  p_66 :
  Ccontinue(r_66);
  Rpush(s_66);
  goto u_108;
  s_66 :
  goto j_63;
  r_66 :
  Ccontinue(t_66);
  Rpush(u_66);
  goto v_108;
  u_66 :
  goto j_63;
  t_66 :
  Ccontinue(v_66);
  Rpush(x_66);
  goto w_108;
  x_66 :
  goto j_63;
  v_66 :
  Ccontinue(y_66);
  Rpush(z_66);
  goto x_108;
  z_66 :
  goto j_63;
  y_66 :
  Ccontinue(b_67);
  Rpush(c_67);
  goto y_108;
  c_67 :
  goto j_63;
  b_67 :
  Ccontinue(d_67);
  Rpush(e_67);
  goto z_108;
  e_67 :
  goto j_63;
  d_67 :
  Ccontinue(f_67);
  Rpush(g_67);
  goto a_109;
  g_67 :
  goto j_63;
  f_67 :
  Rpush(i_67);
  goto b_109;
  i_67 :
  goto h_67;
  j_63 :
  Cpop();
  h_67 :
  goto e_63;
  h_63 :
  Cpush(k_67);
  Rpush(l_67);
  goto n_108;
  l_67 :
  goto j_67;
  k_67 :
  Ccontinue(m_67);
  Rpush(n_67);
  goto o_108;
  n_67 :
  goto j_67;
  m_67 :
  Ccontinue(q_67);
  Rpush(z_67);
  goto p_108;
  z_67 :
  goto j_67;
  q_67 :
  Ccontinue(a_68);
  Rpush(h_68);
  goto q_108;
  h_68 :
  goto j_67;
  a_68 :
  Ccontinue(i_68);
  Rpush(l_68);
  goto r_108;
  l_68 :
  goto j_67;
  i_68 :
  Ccontinue(u_68);
  Rpush(b_69);
  goto x_108;
  b_69 :
  goto j_67;
  u_68 :
  Ccontinue(c_69);
  Rpush(d_69);
  goto y_108;
  d_69 :
  goto j_67;
  c_69 :
  Ccontinue(e_69);
  Rpush(f_69);
  goto z_108;
  f_69 :
  goto j_67;
  e_69 :
  Ccontinue(g_69);
  Rpush(h_69);
  goto a_109;
  h_69 :
  goto j_67;
  g_69 :
  Rpush(j_69);
  goto b_109;
  j_69 :
  goto i_69;
  j_67 :
  Cpop();
  i_69 :
  goto e_63;
  e_63 :
  goto d_63;
  b_109 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_110;
  y_110 :
  TestStr(1,1,"-?",&&fail);
  Rpush(l_69);
  goto x_110;
  l_69 :
  goto k_69;
  x_110 :
  Return();
  k_69 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  d_63 :
  goto s_62;
  a_109 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_110;
  v_110 :
  TestStr(1,1,"-h",&&fail);
  Rpush(n_69);
  goto u_110;
  n_69 :
  goto m_69;
  u_110 :
  Return();
  m_69 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  s_62 :
  goto c_62;
  z_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_110;
  s_110 :
  TestStr(1,1,"--help",&&fail);
  Rpush(p_69);
  goto r_110;
  p_69 :
  goto o_69;
  r_110 :
  Return();
  o_69 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  c_62 :
  goto r_61;
  y_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_110;
  p_110 :
  TestStr(1,1,"-s",&&fail);
  Rpush(x_70);
  goto o_110;
  x_70 :
  goto w_70;
  o_110 :
  Return();
  w_70 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  r_61 :
  goto a_61;
  x_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_110;
  m_110 :
  TestStr(1,1,"-b",&&fail);
  Rpush(z_70);
  goto l_110;
  z_70 :
  goto y_70;
  l_110 :
  Return();
  y_70 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  a_61 :
  goto x_60;
  w_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_110;
  i_110 :
  TestStr(1,1,"--output",&&fail);
  Rpush(b_71);
  goto h_110;
  b_71 :
  goto a_71;
  h_110 :
  Return();
  a_71 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  x_60 :
  goto t_60;
  v_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_110;
  e_110 :
  TestStr(1,1,"-o",&&fail);
  Rpush(d_71);
  goto d_110;
  d_71 :
  goto c_71;
  d_110 :
  Return();
  c_71 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  t_60 :
  goto s_60;
  u_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_110;
  a_110 :
  TestStr(1,1,"--input",&&fail);
  Rpush(f_71);
  goto z_109;
  f_71 :
  goto e_71;
  z_109 :
  Return();
  e_71 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  s_60 :
  goto r_60;
  t_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_109;
  w_109 :
  TestStr(1,1,"-i",&&fail);
  Rpush(j_71);
  goto v_109;
  j_71 :
  goto i_71;
  v_109 :
  Return();
  i_71 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  r_60 :
  goto q_60;
  s_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_109;
  s_109 :
  TestStr(1,1,"@version",&&fail);
  Rpush(l_71);
  goto r_109;
  l_71 :
  goto k_71;
  r_109 :
  Return();
  k_71 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  q_60 :
  goto v_58;
  r_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_109;
  p_109 :
  TestStr(1,1,"--version",&&fail);
  Rpush(n_71);
  goto o_109;
  n_71 :
  goto m_71;
  o_109 :
  Return();
  m_71 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  v_58 :
  goto t_58;
  q_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_109;
  m_109 :
  TestStr(1,1,"-v",&&fail);
  Rpush(p_71);
  goto l_109;
  p_71 :
  goto o_71;
  l_109 :
  Return();
  o_71 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  t_58 :
  goto s_58;
  p_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_109;
  j_109 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(r_71);
  goto i_109;
  r_71 :
  goto q_71;
  i_109 :
  Return();
  q_71 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  s_58 :
  goto r_58;
  o_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_109;
  g_109 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(t_71);
  goto f_109;
  t_71 :
  goto s_71;
  f_109 :
  Return();
  s_71 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  r_58 :
  goto q_58;
  n_108 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_109;
  d_109 :
  TestStr(1,1,"-S",&&fail);
  Rpush(z_71);
  goto c_109;
  z_71 :
  goto y_71;
  c_109 :
  Return();
  y_71 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  q_58 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_f_18)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_114;
  u_114 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  Rpush(b_72);
  goto t_114;
  b_72 :
  goto a_72;
  t_114 :
  Return();
  a_72 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(c_72);
  u_115 :
  Cpush(g_72);
  Cpush(i_72);
  Ccall(_stratego_f_18);
  goto h_72;
  i_72 :
  Ccall(_stratego_e_18);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_72);
  goto u_115;
  k_72 :
  AllBuild();
  goto j_72;
  h_72 :
  Cpop();
  j_72 :
  goto f_72;
  g_72 :
  Epushd(0,3);
  MoveTop(0,1);
  goto y_114;
  y_114 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(n_72);
  goto x_114;
  n_72 :
  goto m_72;
  x_114 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  m_72 :
  Epopd(0,3);
  goto l_72;
  f_72 :
  Cpop();
  l_72 :
  Return();
  c_72 :
  AllBuild();
  Cpush(u_72);
  Ccall(_stratego_d_18);
  goto t_72;
  u_72 :
  Ccontinue(v_72);
  Epushd(0,6);
  Ccall(_stratego_y_17);
  Tdupl();
  Ccall(_stratego_w_17);
  Tpop();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_17);
  OneNextSon();
  Ccall(_stratego_q_17);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_17);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto b_115;
  b_115 :
  TestFunFC(n_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto c_115;
  c_115 :
  TestFunFC(n_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto d_115;
  d_115 :
  TestFunFC(q_0,&&fail,Egetd(0,6));
  Rpush(e_73);
  goto a_115;
  e_73 :
  goto d_73;
  a_115 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  d_73 :
  Ccall(_stratego_v_17);
  Ccall(_stratego_s_17);
  Epopd(0,6);
  goto t_72;
  v_72 :
  Ccall(_stratego_r_17);
  goto m_73;
  t_72 :
  Cpop();
  m_73 :
ENDPROC

DOIT

