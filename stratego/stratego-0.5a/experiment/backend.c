#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,y_59);
VARDECL(AFun,u_57);
VARDECL(AFun,e_56);
VARDECL(AFun,u_54);
VARDECL(AFun,f_53);
VARDECL(AFun,k_51);
VARDECL(AFun,c_51);
VARDECL(AFun,p_50);
VARDECL(AFun,e_44);
VARDECL(AFun,k_34);
VARDECL(AFun,j_33);
VARDECL(AFun,h_33);
VARDECL(AFun,b_33);
VARDECL(AFun,z_32);
VARDECL(AFun,p_32);
VARDECL(AFun,a_32);
VARDECL(AFun,k_31);
VARDECL(AFun,h_31);
VARDECL(AFun,e_31);
VARDECL(AFun,b_31);
VARDECL(AFun,y_30);
VARDECL(AFun,w_30);
VARDECL(AFun,q_30);
VARDECL(AFun,o_30);
VARDECL(AFun,m_30);
VARDECL(AFun,k_30);
VARDECL(AFun,i_30);
VARDECL(AFun,g_30);
VARDECL(AFun,e_30);
VARDECL(AFun,k_28);
VARDECL(AFun,v_27);
VARDECL(AFun,p_27);
VARDECL(AFun,j_27);
VARDECL(AFun,h_27);
VARDECL(AFun,f_27);
VARDECL(AFun,n_26);
VARDECL(AFun,k_26);
VARDECL(AFun,c_26);
VARDECL(AFun,a_26);
VARDECL(AFun,t_25);
VARDECL(AFun,g_25);
VARDECL(AFun,u_24);
VARDECL(AFun,t_14);
VARDECL(AFun,r_14);
VARDECL(AFun,p_14);
VARDECL(AFun,n_14);
VARDECL(AFun,a_9);
VARDECL(AFun,z_8);
VARDECL(AFun,y_8);
VARDECL(AFun,i_5);
VARDECL(AFun,h_5);
VARDECL(AFun,g_5);
VARDECL(AFun,e_5);
VARDECL(AFun,d_5);
VARDECL(AFun,y_4);
VARDECL(AFun,j_4);
VARDECL(AFun,a_3);
VARDECL(AFun,x_2);
VARDECL(AFun,w_2);
VARDECL(AFun,n_2);
VARDECL(AFun,d_2);
VARDECL(AFun,b_2);
VARDECL(AFun,a_2);
VARDECL(AFun,z_1);
VARDECL(AFun,x_1);
VARDECL(AFun,w_1);
VARDECL(AFun,x_0);
VARDECL(AFun,l_0);
VARDECL(AFun,i_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_b_15);
PROCDECL(_stratego_c_15);
PROCDECL(_stratego_d_15);
PROCDECL(_stratego_e_15);
PROCDECL(_stratego_f_15);
PROCDECL(_stratego_g_15);
PROCDECL(_stratego_h_15);
PROCDECL(_stratego_i_15);
PROCDECL(_stratego_j_15);
PROCDECL(_stratego_k_15);
PROCDECL(_stratego_l_15);
PROCDECL(_stratego_m_15);
PROCDECL(_stratego_n_15);
PROCDECL(_stratego_o_15);
PROCDECL(_stratego_p_15);
PROCDECL(_stratego_q_15);
PROCDECL(_stratego_r_15);
PROCDECL(_stratego_s_15);
PROCDECL(_stratego_t_15);
PROCDECL(_stratego_u_15);
PROCDECL(_stratego_v_15);
PROCDECL(_stratego_w_15);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(y_59,ATmakeAFun("Undefined",1,0));
  MOVE(u_57,ATmakeAFun("Help",0,0));
  MOVE(e_56,ATmakeAFun("Input",1,0));
  MOVE(u_54,ATmakeAFun("Binary",0,0));
  MOVE(f_53,ATmakeAFun("Output",1,0));
  MOVE(k_51,ATmakeAFun("Program",1,0));
  MOVE(c_51,ATmakeAFun("Runtime",1,0));
  MOVE(p_50,ATmakeAFun("Silent",0,0));
  MOVE(e_44,ATmakeAFun("Countrule",1,0));
  MOVE(k_34,ATmakeAFun("App",2,0));
  MOVE(j_33,ATmakeAFun("Op",2,0));
  MOVE(h_33,ATmakeAFun("BuildDefault",1,0));
  MOVE(b_33,ATmakeAFun("BuildTerm",3,0));
  MOVE(z_32,ATmakeAFun("Build",1,0));
  MOVE(p_32,ATmakeAFun("CountRule",1,0));
  MOVE(a_32,ATmakeAFun("Prim2",2,0));
  MOVE(k_31,ATmakeAFun("Prim",1,0));
  MOVE(h_31,ATmakeAFun("Where",1,0));
  MOVE(e_31,ATmakeAFun("Thread",1,0));
  MOVE(b_31,ATmakeAFun("Some",1,0));
  MOVE(y_30,ATmakeAFun("One",1,0));
  MOVE(w_30,ATmakeAFun("All",1,0));
  MOVE(q_30,ATmakeAFun("CongKids",1,0));
  MOVE(o_30,ATmakeAFun("CongWld",1,0));
  MOVE(m_30,ATmakeAFun("Cong",2,0));
  MOVE(k_30,ATmakeAFun("Path",2,0));
  MOVE(i_30,ATmakeAFun("SDef",4,0));
  MOVE(g_30,ATmakeAFun("SDef",3,0));
  MOVE(e_30,ATmakeAFun("Let",2,0));
  MOVE(k_28,ATmakeAFun("Rec",2,0));
  MOVE(v_27,ATmakeAFun("Assign",2,0));
  MOVE(p_27,ATmakeAFun("Assign",1,0));
  MOVE(j_27,ATmakeAFun("Seq",2,0));
  MOVE(h_27,ATmakeAFun("Not",1,0));
  MOVE(f_27,ATmakeAFun("Test",1,0));
  MOVE(n_26,ATmakeAFun("Id",0,0));
  MOVE(k_26,ATmakeAFun("Instr",3,0));
  MOVE(c_26,ATmakeAFun("Alt",3,0));
  MOVE(a_26,ATmakeAFun("Alts",6,0));
  MOVE(t_25,ATmakeAFun("LChoice",2,0));
  MOVE(g_25,ATmakeAFun("Choice",2,0));
  MOVE(u_24,ATmakeAFun("Choices",4,0));
  MOVE(t_14,ATmakeAFun("Str",1,0));
  MOVE(r_14,ATmakeAFun("Real",1,0));
  MOVE(p_14,ATmakeAFun("Int",1,0));
  MOVE(n_14,ATmakeAFun("Fun",2,0));
  MOVE(a_9,ATmakeAFun("Rule",3,0));
  MOVE(z_8,ATmakeAFun("LRule",1,0));
  MOVE(y_8,ATmakeAFun("Scope",2,0));
  MOVE(i_5,ATmakeAFun("SVar",1,0));
  MOVE(h_5,ATmakeAFun("Call",2,0));
  MOVE(g_5,ATmakeAFun("Continue",1,0));
  MOVE(e_5,ATmakeAFun("Var",1,0));
  MOVE(d_5,ATmakeAFun("Case",4,0));
  MOVE(y_4,ATmakeAFun("Branch",4,0));
  MOVE(j_4,ATmakeAFun("Fail",0,0));
  MOVE(a_3,ATmakeAFun("Block",1,0));
  MOVE(x_2,ATmakeAFun("Tpop",0,0));
  MOVE(w_2,ATmakeAFun("Arg",1,0));
  MOVE(n_2,ATmakeAFun("Epop",1,0));
  MOVE(d_2,ATmakeAFun("Epush",1,0));
  MOVE(b_2,ATmakeAFun("AllBuild",0,0));
  MOVE(a_2,ATmakeAFun("TravInit",0,0));
  MOVE(z_1,ATmakeAFun("MatchFun",2,0));
  MOVE(x_1,ATmakeAFun("BuildVar",1,0));
  MOVE(w_1,ATmakeAFun("MatchVar",1,0));
  MOVE(x_0,ATmakeAFun("AFun",2,0));
  MOVE(l_0,ATmakeAFun("TNil",0,0));
  MOVE(i_0,ATmakeAFun("TCons",2,0));
  MOVE(g_0,ATmakeAFun("Cons",2,0));
  MOVE(f_0,ATmakeAFun("Nil",0,0));
ENDPROC

PROC(_stratego_b_15)
  Rpush(a_0);
  m_10 :
  Epushd(0,3);
  MoveTop(0,1);
  goto k_6;
  k_6 :
  TestFunFC(f_0,&&e_0,Egetd(0,1));
  Rpush(d_0);
  goto d_1;
  e_0 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_0);
  goto e_1;
  d_0 :
  goto c_0;
  e_1 :
  Epushd(1,13);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Rpush(j_0);
  goto m_10;
  j_0 :
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto p_4;
  p_4 :
  TestFunFC(i_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto q_4;
  q_4 :
  TestFunFC(i_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto r_4;
  r_4 :
  TestFunFC(i_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto a_5;
  a_5 :
  TestFunFC(l_0,&&fail,Egetd(1,6));
  goto b_5;
  b_5 :
  TestFunFC(i_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto c_5;
  c_5 :
  TestFunFC(i_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto l_5;
  l_5 :
  TestFunFC(i_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto m_5;
  m_5 :
  TestFunFC(l_0,&&fail,Egetd(1,12));
  goto n_5;
  n_5 :
  TestFunFC(l_0,&&fail,Egetd(1,13));
  Rpush(k_0);
  goto f_1;
  k_0 :
  goto h_0;
  f_1 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset(App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,9)),App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,11)),App0("TNil"))));
  Return();
  h_0 :
  Epopd(1,13);
  Return();
  c_0 :
  goto b_0;
  d_1 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  b_0 :
  Epopd(0,3);
  Return();
  a_0 :
ENDPROC

PROC(_stratego_c_15)
  _ST_table_keys();
ENDPROC

PROC(_stratego_d_15)
  Epushd(0,1);
  MoveTop(0,1);
  Ccall(_stratego_c_15);
  Rpush(m_0);
  o_17 :
  Cpush(o_0);
  Ccall(_stratego_n_17);
  goto n_0;
  o_0 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_g_16);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,2),App0("TNil"))));
  Epopd(1,2);
  OneNextSon();
  Rpush(q_0);
  goto o_17;
  q_0 :
  AllBuild();
  goto p_0;
  n_0 :
  Cpop();
  p_0 :
  Return();
  m_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_15)
  Tset(ATmakeString("symbol-table"));
  Ccall(_stratego_d_15);
  Rpush(r_0);
  x_18 :
  Cpush(t_0);
  Ccall(_stratego_n_17);
  goto s_0;
  t_0 :
  Ccontinue(u_0);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(0,7);
  MoveTop(0,1);
  goto q_17;
  q_17 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto r_17;
  r_17 :
  TestFunFC(x_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto s_17;
  s_17 :
  TestFunFC(i_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto t_17;
  t_17 :
  TestFunFC(l_0,&&fail,Egetd(0,7));
  Rpush(w_0);
  goto p_17;
  w_0 :
  goto v_0;
  p_17 :
  Return();
  v_0 :
  Epopd(0,7);
  OneNextSon();
  Rpush(y_0);
  goto x_18;
  y_0 :
  AllBuild();
  goto s_0;
  u_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto v_17;
  v_17 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(b_1);
  goto u_17;
  b_1 :
  goto a_1;
  u_17 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(c_1);
  goto x_18;
  c_1 :
  Return();
  a_1 :
  Epopd(0,3);
  goto z_0;
  s_0 :
  Cpop();
  z_0 :
  Return();
  r_0 :
  Rpush(g_1);
  y_18 :
  Cpush(i_1);
  Ccall(_stratego_n_17);
  goto h_1;
  i_1 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(0,7);
  MoveTop(0,1);
  goto x_17;
  x_17 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto y_17;
  y_17 :
  TestFunFC(x_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto z_17;
  z_17 :
  TestFunFC(i_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto a_18;
  a_18 :
  TestFunFC(l_0,&&fail,Egetd(0,7));
  Rpush(l_1);
  goto w_17;
  l_1 :
  goto k_1;
  w_17 :
  NotNULLd(0,6);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",App2("VARDECL",App0("ATerm"),Egetd(0,6)),App2("TCons",App2("MOVE",Egetd(0,6),App3("ATmakeAFun",Egetd(0,3),Egetd(0,4),MakeInt(0))),App0("TNil"))));
  Return();
  k_1 :
  Epopd(0,7);
  OneNextSon();
  Rpush(m_1);
  goto y_18;
  m_1 :
  AllBuild();
  goto j_1;
  h_1 :
  Cpop();
  j_1 :
  Return();
  g_1 :
  Ccall(_stratego_b_15);
ENDPROC

PROC(_stratego_f_15)
  Epushd(0,10);
  MoveTop(0,5);
  goto i_19;
  i_19 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto j_19;
  j_19 :
  TestFunFC(w_1,&&v_1,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto k_19;
  k_19 :
  TestFunFC(g_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto l_19;
  l_19 :
  TestFunFC(x_1,&&fail,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  Rpush(u_1);
  goto z_18;
  v_1 :
  TestFunFC(z_1,&&y_1,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,1,0,6,1);
  goto m_19;
  m_19 :
  TestFunFC(g_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto n_19;
  n_19 :
  TestFunFC(a_2,&&fail,Egetd(0,9));
  goto o_19;
  o_19 :
  TestFunFC(g_0,&&fail,Egetd(0,10));
  MoveArg(0,2,0,10,0);
  MoveArg(0,3,0,10,1);
  goto p_19;
  p_19 :
  TestFunFC(b_2,&&fail,Egetd(0,2));
  Rpush(u_1);
  goto a_19;
  y_1 :
  TestFunFC(d_2,&&c_2,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto q_19;
  q_19 :
  TestFunFC(g_0,&&e_2,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto r_19;
  r_19 :
  TestFunFC(d_2,&&f_2,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  goto s_19;
  s_19 :
  TestInt(0,7,0,&&g_2);
  Cpush(i_2);
  Rpush(j_2);
  goto b_19;
  j_2 :
  goto h_2;
  i_2 :
  Rpush(l_2);
  goto d_19;
  l_2 :
  goto k_2;
  h_2 :
  Cpop();
  k_2 :
  goto u_1;
  g_2 :
  Rpush(u_1);
  goto d_19;
  f_2 :
  goto t_19;
  t_19 :
  TestInt(0,7,0,&&fail);
  Rpush(u_1);
  goto b_19;
  e_2 :
  goto t_19;
  c_2 :
  TestFunFC(n_2,&&m_2,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto u_19;
  u_19 :
  TestFunFC(g_0,&&o_2,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto v_19;
  v_19 :
  TestFunFC(n_2,&&p_2,Egetd(0,9));
  MoveArg(0,4,0,9,0);
  goto w_19;
  w_19 :
  TestInt(0,7,0,&&q_2);
  Cpush(s_2);
  Rpush(t_2);
  goto c_19;
  t_2 :
  goto r_2;
  s_2 :
  Rpush(v_2);
  goto e_19;
  v_2 :
  goto u_2;
  r_2 :
  Cpop();
  u_2 :
  goto u_1;
  q_2 :
  Rpush(u_1);
  goto e_19;
  p_2 :
  goto x_19;
  x_19 :
  TestInt(0,7,0,&&fail);
  Rpush(u_1);
  goto c_19;
  o_2 :
  goto x_19;
  m_2 :
  TestFunFC(w_2,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto y_19;
  y_19 :
  TestFunFC(g_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto z_19;
  z_19 :
  TestFunFC(x_2,&&fail,Egetd(0,9));
  Rpush(u_1);
  goto f_19;
  u_1 :
  goto t_1;
  f_19 :
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Return();
  t_1 :
  goto s_1;
  e_19 :
  Epushd(1,1);
  NotNULLd(0,7);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,4),App0("TNil"))));
  Ccall(_stratego_d_16);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("Cons",App1("Epop",Egetd(1,1)),Egetd(0,10)));
  Epopd(1,1);
  Return();
  s_1 :
  goto r_1;
  d_19 :
  Epushd(1,1);
  NotNULLd(0,7);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,4),App0("TNil"))));
  Ccall(_stratego_d_16);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("Cons",App1("Epush",Egetd(1,1)),Egetd(0,10)));
  Epopd(1,1);
  Return();
  r_1 :
  goto q_1;
  c_19 :
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  q_1 :
  goto p_1;
  b_19 :
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  p_1 :
  goto o_1;
  a_19 :
  NotNULLd(0,7);
  NotNULLd(0,1);
  NotNULLd(0,3);
  Tset(App2("Cons",App2("MatchFun",Egetd(0,7),Egetd(0,1)),Egetd(0,3)));
  Return();
  o_1 :
  goto n_1;
  z_18 :
  Epushd(1,1);
  Move(0,7,0,4);
  Move(1,1,0,10);
  NotNULLd(0,7);
  NotNULLd(1,1);
  Tset(App2("Cons",App1("MatchVar",Egetd(0,7)),Egetd(1,1)));
  Epopd(1,1);
  Return();
  n_1 :
  Epopd(0,10);
ENDPROC

PROC(_stratego_g_15)
  Cpush(z_2);
  TestFunTop(a_3);
  TravInit();
  OneNextSon();
  Rpush(b_3);
  d_21 :
  Cpush(d_3);
  c_3 :
  Ccall(_stratego_f_15);
  Tduplinv();
  goto c_3;
  d_3 :
  Cpush(f_3);
  Ccall(_stratego_n_17);
  goto e_3;
  f_3 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_3);
  goto d_21;
  h_3 :
  AllBuild();
  goto g_3;
  e_3 :
  Cpop();
  g_3 :
  Cpush(j_3);
  i_3 :
  Ccall(_stratego_f_15);
  Tduplinv();
  goto i_3;
  j_3 :
  Return();
  b_3 :
  AllBuild();
  goto y_2;
  z_2 :
  goto k_3;
  y_2 :
  Cpop();
  k_3 :
ENDPROC

PROC(_stratego_h_15)
  Rpush(l_3);
  v_21 :
  Cpush(n_3);
  Cpush(p_3);
  Ccall(_stratego_n_17);
  goto o_3;
  p_3 :
  Ccontinue(q_3);
  TestFunTop(a_3);
  TravInit();
  OneNextSon();
  Rpush(r_3);
  goto v_21;
  r_3 :
  AllBuild();
  goto o_3;
  q_3 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_3);
  goto v_21;
  t_3 :
  AllBuild();
  Rpush(u_3);
  w_21 :
  Cpush(w_3);
  Epushd(0,6);
  MoveTop(0,1);
  goto i_21;
  i_21 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto j_21;
  j_21 :
  TestFunFC(a_3,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto k_21;
  k_21 :
  TestFunFC(f_0,&&a_4,Egetd(0,3));
  Rpush(z_3);
  goto g_21;
  a_4 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(z_3);
  goto h_21;
  z_3 :
  goto y_3;
  h_21 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,4),App2("Cons",App1("Block",Egetd(0,5)),Egetd(0,6))));
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_4);
  goto w_21;
  b_4 :
  AllBuild();
  Rpush(c_4);
  goto w_21;
  c_4 :
  Return();
  y_3 :
  goto x_3;
  g_21 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  x_3 :
  Epopd(0,6);
  goto v_3;
  w_3 :
  goto d_4;
  v_3 :
  Cpop();
  d_4 :
  Return();
  u_3 :
  goto s_3;
  o_3 :
  Cpop();
  s_3 :
  goto m_3;
  n_3 :
  goto e_4;
  m_3 :
  Cpop();
  e_4 :
  Return();
  l_3 :
ENDPROC

PROC(_stratego_i_15)
  Epushd(0,9);
  MoveTop(0,1);
  goto a_22;
  a_22 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_22;
  b_22 :
  TestFunFC(i_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_22;
  c_22 :
  TestFunFC(i_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto d_22;
  d_22 :
  TestFunFC(i_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto e_22;
  e_22 :
  TestFunFC(l_0,&&fail,Egetd(0,9));
  goto f_22;
  f_22 :
  TestFunFC(j_4,&&i_4,Egetd(0,2));
  Cpush(l_4);
  Rpush(m_4);
  goto x_21;
  m_4 :
  goto k_4;
  l_4 :
  Rpush(o_4);
  goto y_21;
  o_4 :
  goto n_4;
  k_4 :
  Cpop();
  n_4 :
  goto h_4;
  i_4 :
  Rpush(h_4);
  goto y_21;
  h_4 :
  goto g_4;
  y_21 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App0("Fail"),App0("TNil"))));
  Cpush(s_4);
  Tdupl();
  Ccall(_stratego_t_15);
  Cpop();
  Crestore();
  Cjump();
  s_4 :
  Ccall(_stratego_m_16);
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
  g_4 :
  goto f_4;
  x_21 :
  Tset(App2("TCons",ATmakeString("fail"),App2("TCons",App1("Block",App0("Nil")),App0("TNil"))));
  Return();
  f_4 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_j_15)
  Epushd(0,11);
  MoveTop(0,4);
  goto z_23;
  z_23 :
  TestFunFC(y_4,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  MoveArg(0,10,0,4,2);
  MoveArg(0,11,0,4,3);
  goto a_24;
  a_24 :
  TestFunFC(d_5,&&z_4,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  MoveArg(0,2,0,5,2);
  MoveArg(0,3,0,5,3);
  goto b_24;
  b_24 :
  TestFunFC(e_5,&&fail,Egetd(0,8));
  MoveArg(0,1,0,8,0);
  Rpush(x_4);
  goto y_22;
  z_4 :
  TestFunFC(g_5,&&f_5,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(x_4);
  goto z_22;
  f_5 :
  TestFunFC(h_5,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto c_24;
  c_24 :
  TestFunFC(i_5,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto d_24;
  d_24 :
  TestFunFC(f_0,&&fail,Egetd(0,8));
  Cpush(k_5);
  Rpush(o_5);
  goto a_23;
  o_5 :
  goto j_5;
  k_5 :
  Rpush(q_5);
  goto b_23;
  q_5 :
  goto p_5;
  j_5 :
  Cpop();
  p_5 :
  goto x_4;
  x_4 :
  goto w_4;
  b_23 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Ccall(_stratego_c_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,7);
  Tset(App2("Ccall",Egetd(0,7),App0("Nil")));
  Epopd(1,1);
  Return();
  w_4 :
  goto v_4;
  a_23 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Cpush(r_5);
  Tdupl();
  Ccall(_stratego_c_16);
  Cpop();
  Crestore();
  Cjump();
  r_5 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,9);
  NotNULLd(0,7);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(0,9)),App2("Cons",App1("Goto",Egetd(0,7)),App0("Nil")))));
  Epopd(1,1);
  Return();
  v_4 :
  goto u_4;
  z_22 :
  NotNULLd(0,6);
  Tset(App1("Goto",Egetd(0,6)));
  Return();
  u_4 :
  goto t_4;
  y_22 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,1);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto u_23;
  u_23 :
  TestFunFC(i_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_23;
  v_23 :
  TestFunFC(i_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_23;
  w_23 :
  TestFunFC(l_0,&&fail,Egetd(2,5));
  Rpush(t_5);
  goto c_23;
  t_5 :
  goto s_5;
  c_23 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(u_5);
  t_27 :
  Cpush(w_5);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto j_23;
  j_23 :
  TestFunFC(i_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto k_23;
  k_23 :
  TestFunFC(i_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto l_23;
  l_23 :
  TestFunFC(l_0,&&fail,Egetd(4,5));
  Rpush(y_5);
  goto d_23;
  y_5 :
  goto x_5;
  d_23 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_u_15);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto g_23;
  g_23 :
  TestFunFC(i_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto h_23;
  h_23 :
  TestFunFC(i_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto i_23;
  i_23 :
  TestFunFC(l_0,&&fail,Egetd(5,6));
  Rpush(a_6);
  goto f_23;
  a_6 :
  goto z_5;
  f_23 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  z_5 :
  Epopd(5,6);
  Return();
  x_5 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto v_5;
  w_5 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_6);
  goto t_27;
  c_6 :
  AllBuild();
  goto b_6;
  v_5 :
  Cpop();
  b_6 :
  Return();
  u_5 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto r_23;
  r_23 :
  TestFunFC(i_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto s_23;
  s_23 :
  TestFunFC(i_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto t_23;
  t_23 :
  TestFunFC(l_0,&&fail,Egetd(3,7));
  Rpush(e_6);
  goto m_23;
  e_6 :
  goto d_6;
  m_23 :
  Epushd(4,5);
  Move(1,1,3,4);
  Move(1,2,3,6);
  NotNULLd(0,3);
  NotNULLd(0,9);
  NotNULLd(0,10);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,9),App2("TCons",Egetd(0,10),App2("TCons",Egetd(0,11),App0("TNil"))))));
  Ccall(_stratego_i_15);
  MoveTop(4,1);
  goto o_23;
  o_23 :
  TestFunFC(i_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto p_23;
  p_23 :
  TestFunFC(i_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto q_23;
  q_23 :
  TestFunFC(l_0,&&fail,Egetd(4,5));
  Rpush(g_6);
  goto n_23;
  g_6 :
  goto f_6;
  n_23 :
  Move(1,3,4,2);
  Move(1,4,4,4);
  Return();
  f_6 :
  Epopd(4,5);
  Return();
  d_6 :
  Epopd(3,7);
  Return();
  s_5 :
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
  t_4 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_k_15)
  _ST_gt();
ENDPROC

PROC(_stratego_l_15)
  Rpush(h_6);
  j_28 :
  Cpush(j_6);
  Ccall(_stratego_n_17);
  Tset(MakeInt(0));
  goto i_6;
  j_6 :
  Epushd(0,3);
  MoveTop(0,1);
  goto w_27;
  w_27 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_6);
  goto u_27;
  p_6 :
  goto o_6;
  u_27 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_6);
  goto j_28;
  q_6 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_b_16);
  Epopd(1,1);
  Return();
  o_6 :
  Epopd(0,3);
  goto n_6;
  i_6 :
  Cpop();
  n_6 :
  Return();
  h_6 :
ENDPROC

PROC(_stratego_m_15)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(s_6);
  p_29 :
  Cpush(u_6);
  Epushd(1,7);
  MoveTop(1,1);
  goto m_28;
  m_28 :
  TestFunFC(i_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto n_28;
  n_28 :
  TestFunFC(g_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto o_28;
  o_28 :
  TestFunFC(i_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto p_28;
  p_28 :
  TestFunFC(l_0,&&fail,Egetd(1,7));
  Rpush(w_6);
  goto l_28;
  w_6 :
  goto v_6;
  l_28 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(x_6);
  goto p_29;
  x_6 :
  Return();
  v_6 :
  Epopd(1,7);
  goto t_6;
  u_6 :
  goto y_6;
  t_6 :
  Cpop();
  y_6 :
  Return();
  s_6 :
  MoveTop(0,2);
  goto r_28;
  r_28 :
  TestFunFC(i_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto s_28;
  s_28 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  goto t_28;
  t_28 :
  TestFunFC(i_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto u_28;
  u_28 :
  TestFunFC(l_0,&&fail,Egetd(0,6));
  Rpush(z_6);
  goto q_28;
  z_6 :
  goto r_6;
  q_28 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  r_6 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_n_15)
  Epushd(0,7);
  MoveTop(0,1);
  goto s_29;
  s_29 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto t_29;
  t_29 :
  TestFunFC(i_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto u_29;
  u_29 :
  TestFunFC(f_0,&&d_7,Egetd(0,4));
  goto v_29;
  v_29 :
  TestFunFC(l_0,&&fail,Egetd(0,7));
  Rpush(c_7);
  goto q_29;
  d_7 :
  TestFunFC(g_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto w_29;
  w_29 :
  TestFunFC(l_0,&&fail,Egetd(0,7));
  Rpush(c_7);
  goto r_29;
  c_7 :
  goto b_7;
  r_29 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  b_7 :
  goto a_7;
  q_29 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  a_7 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_o_15)
  _ST_int();
ENDPROC

PROC(_stratego_p_15)
  _ST_div();
ENDPROC

PROC(_stratego_q_15)
  _ST_mod();
ENDPROC

PROC(_stratego_r_15)
  Rpush(e_7);
  m_31 :
  Epushd(0,4);
  MoveTop(0,1);
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_q_15);
  MoveTop(0,2);
  Tset(MakeInt(48));
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_b_16);
  MoveTop(0,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_p_15);
  Ccall(_stratego_o_15);
  MoveTop(0,4);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,4),App0("TNil"))));
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Cpush(g_7);
  Epushd(1,1);
  MoveTop(1,1);
  goto s_30;
  s_30 :
  TestInt(1,1,0,&&fail);
  Rpush(i_7);
  goto r_30;
  i_7 :
  goto h_7;
  r_30 :
  Tset(App0("Nil"));
  Return();
  h_7 :
  Epopd(1,1);
  goto f_7;
  g_7 :
  Rpush(k_7);
  goto m_31;
  k_7 :
  goto j_7;
  f_7 :
  Cpop();
  j_7 :
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  Ccall(_stratego_n_15);
  Epopd(0,4);
  Return();
  e_7 :
  Ccall(_stratego_m_15);
  Ccall(_stratego_q_16);
ENDPROC

PROC(_stratego_s_15)
  Cpush(m_7);
  Tdupl();
  Ccall(_stratego_k_15);
  Cpop();
  Crestore();
  Cjump();
  m_7 :
ENDPROC

PROC(_stratego_t_15)
  Epushd(0,5);
  MoveTop(0,1);
  goto o_31;
  o_31 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto p_31;
  p_31 :
  TestFunFC(i_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_31;
  q_31 :
  TestFunFC(l_0,&&fail,Egetd(0,5));
  Rpush(o_7);
  goto n_31;
  o_7 :
  goto n_7;
  n_31 :
  Move(0,2,0,4);
  Return();
  n_7 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_u_15)
  Epushd(0,5);
  MoveTop(0,1);
  goto g_32;
  g_32 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_32;
  h_32 :
  TestFunFC(i_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto i_32;
  i_32 :
  TestFunFC(l_0,&&fail,Egetd(0,5));
  Rpush(q_7);
  goto x_31;
  q_7 :
  goto p_7;
  x_31 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",MakeInt(1),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil")))));
  Rpush(r_7);
  m_33 :
  Epushd(1,9);
  MoveTop(1,1);
  goto b_32;
  b_32 :
  TestFunFC(i_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_32;
  c_32 :
  TestFunFC(i_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto d_32;
  d_32 :
  TestFunFC(i_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,9,1,5,1);
  goto e_32;
  e_32 :
  TestFunFC(g_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto f_32;
  f_32 :
  TestFunFC(l_0,&&fail,Egetd(1,9));
  Cpush(w_7);
  Rpush(x_7);
  goto y_31;
  x_7 :
  goto v_7;
  w_7 :
  Rpush(z_7);
  goto z_31;
  z_7 :
  goto y_7;
  v_7 :
  Cpop();
  y_7 :
  goto u_7;
  u_7 :
  goto t_7;
  z_31 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_d_16);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  NotNULLd(1,8);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,8),App0("TNil")))));
  Rpush(a_8);
  goto m_33;
  a_8 :
  Epopd(2,1);
  Return();
  t_7 :
  goto s_7;
  y_31 :
  Epushd(2,1);
  Move(1,4,1,7);
  Move(2,1,1,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Epopd(2,1);
  Return();
  s_7 :
  Epopd(1,9);
  Return();
  r_7 :
  Return();
  p_7 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_15)
  Epushd(0,3);
  MoveTop(0,1);
  goto q_33;
  q_33 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_33;
  r_33 :
  TestInt(0,2,34,&&i_8);
  Rpush(e_8);
  goto n_33;
  i_8 :
  TestInt(0,2,92,&&j_8);
  Rpush(e_8);
  goto o_33;
  j_8 :
  TestInt(0,2,10,&&fail);
  Rpush(e_8);
  goto p_33;
  e_8 :
  goto d_8;
  p_33 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(110),Egetd(0,3))));
  Return();
  d_8 :
  goto c_8;
  o_33 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(92),Egetd(0,3))));
  Return();
  c_8 :
  goto b_8;
  n_33 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(34),Egetd(0,3))));
  Return();
  b_8 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_w_15)
  Ccall(_stratego_r_16);
  Rpush(k_8);
  y_33 :
  Cpush(m_8);
  Ccall(_stratego_v_15);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_8);
  goto y_33;
  n_8 :
  AllBuild();
  AllBuild();
  goto l_8;
  m_8 :
  Ccontinue(o_8);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_8);
  goto y_33;
  p_8 :
  AllBuild();
  goto l_8;
  o_8 :
  Ccall(_stratego_n_17);
  goto t_8;
  l_8 :
  Cpop();
  t_8 :
  Return();
  k_8 :
  Ccall(_stratego_q_16);
ENDPROC

PROC(_stratego_x_15)
  Epushd(0,6);
  MoveTop(0,2);
  goto b_34;
  b_34 :
  TestFunFC(y_8,&&x_8,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(w_8);
  goto z_33;
  x_8 :
  TestFunFC(z_8,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto c_34;
  c_34 :
  TestFunFC(a_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(w_8);
  goto a_34;
  w_8 :
  goto v_8;
  a_34 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_a_16);
  Return();
  v_8 :
  goto u_8;
  z_33 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  u_8 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_y_15)
  Epushd(0,7);
  MoveTop(0,1);
  goto b_46;
  b_46 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto d_46;
  d_46 :
  TestFunFC(i_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto e_46;
  e_46 :
  TestFunFC(i_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto f_46;
  f_46 :
  TestFunFC(l_0,&&fail,Egetd(0,6));
  Rpush(e_9);
  goto o_34;
  e_9 :
  goto d_9;
  o_34 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto q_34;
  q_34 :
  TestFunFC(i_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_34;
  r_34 :
  TestFunFC(i_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_34;
  s_34 :
  TestFunFC(l_0,&&fail,Egetd(2,5));
  Rpush(g_9);
  goto p_34;
  g_9 :
  goto f_9;
  p_34 :
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
  goto u_34;
  u_34 :
  TestFunFC(i_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_34;
  v_34 :
  TestFunFC(i_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_34;
  w_34 :
  TestFunFC(l_0,&&fail,Egetd(2,5));
  Rpush(i_9);
  goto t_34;
  i_9 :
  goto h_9;
  t_34 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  h_9 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(j_9);
  l_48 :
  Epushd(2,9);
  MoveTop(2,1);
  goto o_40;
  o_40 :
  TestFunFC(i_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto p_40;
  p_40 :
  TestFunFC(f_0,&&p_9,Egetd(2,2));
  goto q_40;
  q_40 :
  TestFunFC(i_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto r_40;
  r_40 :
  TestFunFC(f_0,&&fail,Egetd(2,6));
  goto k_44;
  k_44 :
  TestFunFC(l_0,&&fail,Egetd(2,9));
  Rpush(m_9);
  goto j_38;
  p_9 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto l_44;
  l_44 :
  TestFunFC(i_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto m_44;
  m_44 :
  TestFunFC(g_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto n_44;
  n_44 :
  TestFunFC(l_0,&&fail,Egetd(2,9));
  Rpush(m_9);
  goto k_38;
  m_9 :
  goto l_9;
  k_38 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Rpush(r_9);
  goto l_48;
  r_9 :
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto m_38;
  m_38 :
  TestFunFC(i_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto m_40;
  m_40 :
  TestFunFC(i_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto n_40;
  n_40 :
  TestFunFC(l_0,&&fail,Egetd(3,5));
  Rpush(s_9);
  goto l_38;
  s_9 :
  goto q_9;
  l_38 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  q_9 :
  Epopd(3,5);
  Return();
  l_9 :
  goto k_9;
  j_38 :
  Tset(App0("Nil"));
  Return();
  k_9 :
  Epopd(2,9);
  Return();
  j_9 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto y_45;
  y_45 :
  TestFunFC(i_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto z_45;
  z_45 :
  TestFunFC(i_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto a_46;
  a_46 :
  TestFunFC(l_0,&&fail,Egetd(1,9));
  Rpush(x_9);
  goto t_45;
  x_9 :
  goto w_9;
  t_45 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(y_9);
  m_48 :
  Cpush(a_10);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_10);
  goto m_48;
  b_10 :
  AllBuild();
  goto z_9;
  a_10 :
  Ccall(_stratego_n_17);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto c_10;
  z_9 :
  Cpop();
  c_10 :
  Return();
  y_9 :
  Return();
  w_9 :
  Epopd(1,9);
  Return();
  d_9 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_z_15)
  Epushd(0,5);
  MoveTop(0,5);
  goto d_49;
  d_49 :
  TestFunFC(i_0,&&g_10,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto e_49;
  e_49 :
  TestFunFC(i_0,&&h_10,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto f_49;
  f_49 :
  TestFunFC(l_0,&&i_10,Egetd(0,4));
  Cpush(k_10);
  Rpush(l_10);
  goto n_48;
  l_10 :
  goto j_10;
  k_10 :
  Rpush(o_10);
  goto o_48;
  o_10 :
  goto n_10;
  j_10 :
  Cpop();
  n_10 :
  goto f_10;
  i_10 :
  Rpush(f_10);
  goto o_48;
  h_10 :
  Rpush(f_10);
  goto o_48;
  g_10 :
  Rpush(f_10);
  goto o_48;
  f_10 :
  goto e_10;
  o_48 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(p_10);
  s_50 :
  Cpush(r_10);
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Cpush(t_10);
  Epushd(1,7);
  MoveTop(1,1);
  goto u_48;
  u_48 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto v_48;
  v_48 :
  TestFunFC(i_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto w_48;
  w_48 :
  TestFunFC(i_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto x_48;
  x_48 :
  TestFunFC(l_0,&&fail,Egetd(1,6));
  Rpush(v_10);
  goto t_48;
  v_10 :
  goto u_10;
  t_48 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  u_10 :
  Epopd(1,7);
  goto s_10;
  t_10 :
  Ccall(_stratego_y_15);
  goto w_10;
  s_10 :
  Cpop();
  w_10 :
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  goto q_10;
  r_10 :
  Epushd(1,7);
  MoveTop(1,1);
  goto z_48;
  z_48 :
  TestFunFC(i_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto a_49;
  a_49 :
  TestFunFC(i_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto b_49;
  b_49 :
  TestFunFC(g_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto c_49;
  c_49 :
  TestFunFC(l_0,&&fail,Egetd(1,7));
  Rpush(z_10);
  goto y_48;
  z_10 :
  goto y_10;
  y_48 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  y_10 :
  Epopd(1,7);
  goto x_10;
  q_10 :
  Cpop();
  x_10 :
  Cpush(b_11);
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_17);
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  goto a_11;
  b_11 :
  Rpush(d_11);
  goto s_50;
  d_11 :
  goto c_11;
  a_11 :
  Cpop();
  c_11 :
  Return();
  p_10 :
  Return();
  e_10 :
  goto d_10;
  n_48 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(e_11);
  q_50 :
  Cpush(g_11);
  Ccall(_stratego_n_17);
  goto f_11;
  g_11 :
  Ccontinue(h_11);
  Epushd(1,3);
  MoveTop(1,1);
  goto s_48;
  s_48 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(j_11);
  goto p_48;
  j_11 :
  goto i_11;
  p_48 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_11);
  r_50 :
  Cpush(m_11);
  Epushd(2,3);
  MoveTop(2,1);
  goto r_48;
  r_48 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_11);
  goto q_48;
  o_11 :
  goto n_11;
  q_48 :
  Move(1,2,2,2);
  Return();
  n_11 :
  Epopd(2,3);
  goto l_11;
  m_11 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_11);
  goto r_50;
  q_11 :
  AllBuild();
  goto p_11;
  l_11 :
  Cpop();
  p_11 :
  Return();
  k_11 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(r_11);
  goto q_50;
  r_11 :
  Return();
  i_11 :
  Epopd(1,3);
  goto f_11;
  h_11 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_11);
  goto q_50;
  t_11 :
  AllBuild();
  goto s_11;
  f_11 :
  Cpop();
  s_11 :
  Return();
  e_11 :
  Return();
  d_10 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_a_16)
  Rpush(u_11);
  p_55 :
  Cpush(w_11);
  Epushd(0,2);
  MoveTop(0,1);
  goto u_50;
  u_50 :
  TestFunFC(e_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(y_11);
  goto t_50;
  y_11 :
  goto x_11;
  t_50 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  x_11 :
  Epopd(0,2);
  goto v_11;
  w_11 :
  Ccontinue(z_11);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_x_15);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(y_8);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(a_12);
  goto p_55;
  a_12 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_z_15);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto m_51;
  m_51 :
  TestFunFC(i_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto n_51;
  n_51 :
  TestFunFC(i_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto o_51;
  o_51 :
  TestFunFC(l_0,&&fail,Egetd(1,5));
  Rpush(c_12);
  goto l_51;
  c_12 :
  goto b_12;
  l_51 :
  Move(0,3,1,4);
  Return();
  b_12 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(d_12);
  q_55 :
  Cpush(f_12);
  Ccall(_stratego_n_17);
  Tset(App0("Nil"));
  goto e_12;
  f_12 :
  Epushd(1,3);
  MoveTop(1,1);
  goto a_52;
  a_52 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(k_12);
  goto p_51;
  k_12 :
  goto i_12;
  p_51 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(l_12);
  goto q_55;
  l_12 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto x_51;
  x_51 :
  TestFunFC(i_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto y_51;
  y_51 :
  TestFunFC(i_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto z_51;
  z_51 :
  TestFunFC(l_0,&&fail,Egetd(2,6));
  Rpush(n_12);
  goto s_51;
  n_12 :
  goto m_12;
  s_51 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(o_12);
  r_55 :
  Cpush(q_12);
  Ccall(_stratego_n_17);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto p_12;
  q_12 :
  Ccontinue(r_12);
  Epushd(3,3);
  MoveTop(3,1);
  goto w_51;
  w_51 :
  TestFunFC(g_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(t_12);
  goto t_51;
  t_12 :
  goto s_12;
  t_51 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(u_12);
  s_55 :
  Cpush(w_12);
  Epushd(4,3);
  MoveTop(4,1);
  goto v_51;
  v_51 :
  TestFunFC(g_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(y_12);
  goto u_51;
  y_12 :
  goto x_12;
  u_51 :
  Move(3,2,4,2);
  Return();
  x_12 :
  Epopd(4,3);
  goto v_12;
  w_12 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_13);
  goto s_55;
  a_13 :
  AllBuild();
  goto z_12;
  v_12 :
  Cpop();
  z_12 :
  Return();
  u_12 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(b_13);
  goto r_55;
  b_13 :
  Return();
  s_12 :
  Epopd(3,3);
  goto p_12;
  r_12 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_13);
  goto r_55;
  d_13 :
  AllBuild();
  goto c_13;
  p_12 :
  Cpop();
  c_13 :
  Return();
  o_12 :
  Return();
  m_12 :
  Epopd(2,6);
  Return();
  i_12 :
  Epopd(1,3);
  goto g_12;
  e_12 :
  Cpop();
  g_12 :
  Return();
  d_12 :
  Epopd(0,3);
  goto v_11;
  z_11 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto d_52;
  d_52 :
  TestFunFC(i_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_52;
  e_52 :
  TestFunFC(i_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto f_52;
  f_52 :
  TestFunFC(l_0,&&fail,Egetd(1,5));
  Rpush(g_13);
  goto c_52;
  g_13 :
  goto f_13;
  c_52 :
  Move(0,2,1,4);
  Return();
  f_13 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(h_13);
  t_55 :
  Cpush(j_13);
  Ccall(_stratego_n_17);
  Tset(App0("Nil"));
  goto i_13;
  j_13 :
  Epushd(1,3);
  MoveTop(1,1);
  goto r_52;
  r_52 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(m_13);
  goto g_52;
  m_13 :
  goto l_13;
  g_52 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(n_13);
  goto p_55;
  n_13 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(o_13);
  goto t_55;
  o_13 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto o_52;
  o_52 :
  TestFunFC(i_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_52;
  p_52 :
  TestFunFC(i_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto q_52;
  q_52 :
  TestFunFC(l_0,&&fail,Egetd(2,7));
  Rpush(q_13);
  goto j_52;
  q_13 :
  goto p_13;
  j_52 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(r_13);
  u_55 :
  Cpush(t_13);
  Ccall(_stratego_n_17);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto s_13;
  t_13 :
  Ccontinue(u_13);
  Epushd(3,3);
  MoveTop(3,1);
  goto n_52;
  n_52 :
  TestFunFC(g_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_13);
  goto k_52;
  w_13 :
  goto v_13;
  k_52 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(x_13);
  v_55 :
  Cpush(z_13);
  Epushd(4,3);
  MoveTop(4,1);
  goto m_52;
  m_52 :
  TestFunFC(g_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(b_14);
  goto l_52;
  b_14 :
  goto a_14;
  l_52 :
  Move(3,2,4,2);
  Return();
  a_14 :
  Epopd(4,3);
  goto y_13;
  z_13 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_14);
  goto v_55;
  d_14 :
  AllBuild();
  goto c_14;
  y_13 :
  Cpop();
  c_14 :
  Return();
  x_13 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(e_14);
  goto u_55;
  e_14 :
  Return();
  v_13 :
  Epopd(3,3);
  goto s_13;
  u_13 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_14);
  goto u_55;
  g_14 :
  AllBuild();
  goto f_14;
  s_13 :
  Cpop();
  f_14 :
  Return();
  r_13 :
  Return();
  p_13 :
  Epopd(2,7);
  Return();
  l_13 :
  Epopd(1,3);
  goto k_13;
  i_13 :
  Cpop();
  k_13 :
  Return();
  h_13 :
  Epopd(0,2);
  goto e_13;
  v_11 :
  Cpop();
  e_13 :
  Return();
  u_11 :
ENDPROC

PROC(_stratego_b_16)
  _ST_add();
ENDPROC

PROC(_stratego_c_16)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_g_16);
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_16)
  _ST_plus();
ENDPROC

PROC(_stratego_e_16)
  Epushd(0,13);
  MoveTop(0,2);
  goto f_56;
  f_56 :
  TestFunFC(i_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,8,0,2,1);
  goto g_56;
  g_56 :
  TestFunFC(i_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto h_56;
  h_56 :
  TestFunFC(i_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto i_56;
  i_56 :
  TestFunFC(l_0,&&fail,Egetd(0,7));
  goto j_56;
  j_56 :
  TestFunFC(i_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,11,0,8,1);
  goto k_56;
  k_56 :
  TestFunFC(n_14,&&m_14,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,1,0,9,1);
  goto l_56;
  l_56 :
  TestFunFC(i_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto m_56;
  m_56 :
  TestFunFC(l_0,&&fail,Egetd(0,13));
  Rpush(l_14);
  goto z_55;
  m_14 :
  TestFunFC(p_14,&&o_14,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto n_56;
  n_56 :
  TestFunFC(i_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto o_56;
  o_56 :
  TestFunFC(l_0,&&fail,Egetd(0,13));
  Rpush(l_14);
  goto a_56;
  o_14 :
  TestFunFC(r_14,&&q_14,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto p_56;
  p_56 :
  TestFunFC(i_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto q_56;
  q_56 :
  TestFunFC(l_0,&&fail,Egetd(0,13));
  Rpush(l_14);
  goto b_56;
  q_14 :
  TestFunFC(t_14,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto r_56;
  r_56 :
  TestFunFC(i_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto s_56;
  s_56 :
  TestFunFC(l_0,&&fail,Egetd(0,13));
  Rpush(l_14);
  goto c_56;
  l_14 :
  goto k_14;
  c_56 :
  Epushd(1,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Ccall(_stratego_w_15);
  MoveTop(1,1);
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(1,1);
  NotNULLd(0,12);
  Tset(App4("TestStr",Egetd(0,4),Egetd(0,6),Egetd(1,1),Egetd(0,12)));
  Epopd(1,1);
  Return();
  k_14 :
  goto j_14;
  b_56 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,10);
  NotNULLd(0,12);
  Tset(App4("TestReal",Egetd(0,4),Egetd(0,6),Egetd(0,10),Egetd(0,12)));
  Return();
  j_14 :
  goto i_14;
  a_56 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,10);
  NotNULLd(0,12);
  Tset(App4("TestInt",Egetd(0,4),Egetd(0,6),Egetd(0,10),Egetd(0,12)));
  Return();
  i_14 :
  goto h_14;
  z_55 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  NotNULLd(0,1);
  Tset(App2("AFun",Egetd(0,10),Egetd(0,1)));
  Ccall(_stratego_h_16);
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
  h_14 :
  Epopd(0,13);
ENDPROC

PROC(_stratego_f_16)
  Cpush(v_14);
  Epushd(0,15);
  MoveTop(0,10);
  goto p_68;
  p_68 :
  TestFunFC(u_24,&&t_24,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  MoveArg(0,3,0,10,3);
  goto q_68;
  q_68 :
  TestFunFC(g_25,&&f_25,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(p_25);
  Rpush(q_25);
  goto i_58;
  q_25 :
  goto o_25;
  p_25 :
  Rpush(s_25);
  goto k_58;
  s_25 :
  goto r_25;
  o_25 :
  Cpop();
  r_25 :
  goto s_24;
  f_25 :
  TestFunFC(t_25,&&v_24,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(v_25);
  Rpush(w_25);
  goto j_58;
  w_25 :
  goto u_25;
  v_25 :
  Rpush(y_25);
  goto k_58;
  y_25 :
  goto x_25;
  u_25 :
  Cpop();
  x_25 :
  goto s_24;
  v_24 :
  Rpush(s_24);
  goto k_58;
  t_24 :
  TestFunFC(a_26,&&z_25,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  MoveArg(0,3,0,10,3);
  MoveArg(0,4,0,10,4);
  MoveArg(0,5,0,10,5);
  goto r_68;
  r_68 :
  TestFunFC(f_0,&&b_26,Egetd(0,11));
  Rpush(s_24);
  goto p_58;
  b_26 :
  TestFunFC(g_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto s_68;
  s_68 :
  TestFunFC(c_26,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  MoveArg(0,9,0,12,1);
  MoveArg(0,2,0,12,2);
  goto t_68;
  t_68 :
  TestFunFC(f_0,&&d_26,Egetd(0,13));
  Cpush(f_26);
  Rpush(g_26);
  goto q_58;
  g_26 :
  goto e_26;
  f_26 :
  Rpush(i_26);
  goto r_58;
  i_26 :
  goto h_26;
  e_26 :
  Cpop();
  h_26 :
  goto s_24;
  d_26 :
  Rpush(s_24);
  goto r_58;
  z_25 :
  TestFunFC(k_26,&&j_26,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  goto u_68;
  u_68 :
  TestFunFC(n_26,&&l_26,Egetd(0,11));
  Rpush(s_24);
  goto b_58;
  l_26 :
  TestFunFC(j_4,&&d_27,Egetd(0,11));
  Rpush(s_24);
  goto c_58;
  d_27 :
  TestFunFC(f_27,&&e_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto d_58;
  e_27 :
  TestFunFC(h_27,&&g_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto e_58;
  g_27 :
  TestFunFC(j_27,&&i_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_24);
  goto f_58;
  i_27 :
  TestFunFC(t_25,&&k_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_24);
  goto g_58;
  k_27 :
  TestFunFC(g_25,&&n_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_24);
  goto h_58;
  n_27 :
  TestFunFC(p_27,&&o_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto v_68;
  v_68 :
  TestFunFC(e_5,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  Rpush(s_24);
  goto l_58;
  o_27 :
  TestFunFC(v_27,&&q_27,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto w_68;
  w_68 :
  TestFunFC(e_5,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  goto x_68;
  x_68 :
  TestFunFC(e_5,&&a_28,Egetd(0,13));
  MoveArg(0,1,0,13,0);
  Cpush(c_28);
  Rpush(d_28);
  goto m_58;
  d_28 :
  goto b_28;
  c_28 :
  Rpush(f_28);
  goto n_58;
  f_28 :
  goto e_28;
  b_28 :
  Cpop();
  e_28 :
  goto s_24;
  a_28 :
  Rpush(s_24);
  goto n_58;
  q_27 :
  TestFunFC(d_5,&&g_28,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  MoveArg(0,7,0,11,3);
  Rpush(s_24);
  goto o_58;
  g_28 :
  TestFunFC(k_28,&&i_28,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_24);
  goto s_58;
  i_28 :
  TestFunFC(h_5,&&w_28,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto y_68;
  y_68 :
  TestFunFC(i_5,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  goto z_68;
  z_68 :
  TestFunFC(f_0,&&fail,Egetd(0,13));
  Cpush(f_29);
  Rpush(g_29);
  goto t_58;
  g_29 :
  goto e_29;
  f_29 :
  Rpush(n_29);
  goto u_58;
  n_29 :
  goto m_29;
  e_29 :
  Cpop();
  m_29 :
  goto s_24;
  w_28 :
  TestFunFC(e_30,&&o_29,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_24);
  goto v_58;
  o_29 :
  TestFunFC(g_30,&&f_30,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  goto a_69;
  a_69 :
  TestFunFC(f_0,&&fail,Egetd(0,13));
  Rpush(s_24);
  goto w_58;
  f_30 :
  TestFunFC(i_30,&&h_30,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  MoveArg(0,6,0,11,2);
  MoveArg(0,7,0,11,3);
  goto b_69;
  b_69 :
  TestFunFC(f_0,&&fail,Egetd(0,6));
  Rpush(s_24);
  goto x_58;
  h_30 :
  TestFunFC(k_30,&&j_30,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_24);
  goto y_58;
  j_30 :
  TestFunFC(m_30,&&l_30,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_24);
  goto z_58;
  l_30 :
  TestFunFC(o_30,&&n_30,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto a_59;
  n_30 :
  TestFunFC(q_30,&&p_30,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto c_69;
  c_69 :
  TestFunFC(f_0,&&u_30,Egetd(0,12));
  Rpush(s_24);
  goto b_59;
  u_30 :
  TestFunFC(g_0,&&fail,Egetd(0,12));
  MoveArg(0,8,0,12,0);
  MoveArg(0,9,0,12,1);
  Rpush(s_24);
  goto c_59;
  p_30 :
  TestFunFC(w_30,&&v_30,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto d_59;
  v_30 :
  TestFunFC(y_30,&&x_30,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto e_59;
  x_30 :
  TestFunFC(b_31,&&a_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto f_59;
  a_31 :
  TestFunFC(e_31,&&c_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto g_59;
  c_31 :
  TestFunFC(y_8,&&f_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_24);
  goto h_59;
  f_31 :
  TestFunFC(h_31,&&g_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto i_59;
  g_31 :
  TestFunFC(k_31,&&i_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto j_59;
  i_31 :
  TestFunFC(a_32,&&w_31,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_24);
  goto k_59;
  w_31 :
  TestFunFC(p_32,&&o_32,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto l_59;
  o_32 :
  TestFunFC(z_32,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto m_59;
  j_26 :
  TestFunFC(b_33,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,14,0,10,1);
  MoveArg(0,15,0,10,2);
  goto d_69;
  d_69 :
  TestFunFC(t_14,&&c_33,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto n_59;
  c_33 :
  TestFunFC(p_14,&&d_33,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto o_59;
  d_33 :
  TestFunFC(r_14,&&e_33,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto p_59;
  e_33 :
  TestFunFC(e_5,&&f_33,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto q_59;
  f_33 :
  TestFunFC(h_33,&&g_33,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  Rpush(s_24);
  goto r_59;
  g_33 :
  TestFunFC(j_33,&&i_33,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Cpush(v_33);
  Rpush(w_33);
  goto s_59;
  w_33 :
  goto l_33;
  v_33 :
  Rpush(j_34);
  goto t_59;
  j_34 :
  goto x_33;
  l_33 :
  Cpop();
  x_33 :
  goto s_24;
  i_33 :
  TestFunFC(k_34,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(s_24);
  goto u_59;
  s_24 :
  goto r_24;
  u_59 :
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compiler.r: App encountered: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_17);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,12);
  NotNULLd(0,13);
  Tset(App1("AppEncountered",App2("App",Egetd(0,12),Egetd(0,13))));
  Return();
  r_24 :
  goto q_24;
  t_59 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_l_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(6),App0("TNil"))));
  Ccall(_stratego_k_15);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Rpush(l_34);
  t_92 :
  Cpush(n_34);
  Ccall(_stratego_n_17);
  goto m_34;
  n_34 :
  TestFunTop(g_0);
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
  Rpush(y_34);
  goto t_92;
  y_34 :
  AllBuild();
  goto x_34;
  m_34 :
  Cpop();
  x_34 :
  Return();
  l_34 :
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
  q_24 :
  goto p_24;
  s_59 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_l_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(6),App0("TNil"))));
  Ccall(_stratego_s_15);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_r_15);
  MoveTop(2,2);
  NotNULLd(2,2);
  Tset(App2("TCons",ATmakeString("App"),App2("TCons",Egetd(2,2),App0("TNil"))));
  Ccall(_stratego_s_16);
  MoveTop(2,3);
  Move(1,2,2,3);
  Epopd(2,3);
  Tpop();
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Rpush(z_34);
  s_92 :
  Cpush(b_35);
  Ccall(_stratego_n_17);
  goto a_35;
  b_35 :
  TestFunTop(g_0);
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
  Rpush(d_35);
  goto s_92;
  d_35 :
  AllBuild();
  goto c_35;
  a_35 :
  Cpop();
  c_35 :
  Return();
  z_34 :
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
  p_24 :
  goto y_23;
  r_59 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("BuildTerm",Egetd(0,12),Egetd(0,14),Egetd(0,15)));
  Return();
  y_23 :
  goto x_23;
  q_59 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,12);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,12),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto x_67;
  x_67 :
  TestFunFC(i_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto y_67;
  y_67 :
  TestFunFC(i_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_67;
  z_67 :
  TestFunFC(l_0,&&fail,Egetd(2,5));
  Rpush(f_35);
  goto i_67;
  f_35 :
  goto e_35;
  i_67 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(g_35);
  r_92 :
  Cpush(i_35);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto p_67;
  p_67 :
  TestFunFC(i_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto q_67;
  q_67 :
  TestFunFC(i_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto r_67;
  r_67 :
  TestFunFC(l_0,&&fail,Egetd(4,5));
  Rpush(k_35);
  goto j_67;
  k_35 :
  goto j_35;
  j_67 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_u_15);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto m_67;
  m_67 :
  TestFunFC(i_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto n_67;
  n_67 :
  TestFunFC(i_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto o_67;
  o_67 :
  TestFunFC(l_0,&&fail,Egetd(5,6));
  Rpush(m_35);
  goto l_67;
  m_35 :
  goto l_35;
  l_67 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  l_35 :
  Epopd(5,6);
  Return();
  j_35 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto h_35;
  i_35 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_35);
  goto r_92;
  o_35 :
  AllBuild();
  goto n_35;
  h_35 :
  Cpop();
  n_35 :
  Return();
  g_35 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto u_67;
  u_67 :
  TestFunFC(i_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto v_67;
  v_67 :
  TestFunFC(i_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto w_67;
  w_67 :
  TestFunFC(l_0,&&fail,Egetd(3,7));
  Rpush(q_35);
  goto s_67;
  q_35 :
  goto p_35;
  s_67 :
  Move(1,1,3,4);
  Move(1,2,3,6);
  Cpush(s_35);
  NotNULLd(1,1);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,15),App0("TNil"))));
  Ccall(_stratego_t_15);
  NotNULLd(1,2);
  Tset(App1("Eget",Egetd(1,2)));
  goto r_35;
  s_35 :
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Egetd",Egetd(1,1),Egetd(1,2)));
  Tdupl();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Egetd",Egetd(1,1),Egetd(1,2)));
  MoveTop(1,3);
  Tpop();
  goto t_35;
  r_35 :
  Cpop();
  t_35 :
  Return();
  p_35 :
  Epopd(3,7);
  Return();
  e_35 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Epopd(1,3);
  Return();
  x_23 :
  goto e_23;
  p_59 :
  NotNULLd(0,12);
  Tset(App1("ATmakeReal",Egetd(0,12)));
  Return();
  e_23 :
  goto v_22;
  o_59 :
  NotNULLd(0,12);
  Tset(App1("MakeInt",Egetd(0,12)));
  Return();
  v_22 :
  goto u_22;
  n_59 :
  Epushd(1,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_w_15);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("ATmakeString",Egetd(1,1)));
  Epopd(1,1);
  Return();
  u_22 :
  goto t_22;
  m_59 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_a_16);
  Rpush(u_35);
  p_92 :
  Cpush(w_35);
  Ccall(_stratego_n_17);
  goto v_35;
  w_35 :
  TestFunTop(g_0);
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
  goto d_67;
  d_67 :
  TestFunFC(i_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto e_67;
  e_67 :
  TestFunFC(i_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto f_67;
  f_67 :
  TestFunFC(l_0,&&fail,Egetd(4,5));
  Rpush(z_35);
  goto m_66;
  z_35 :
  goto y_35;
  m_66 :
  Epushd(5,7);
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(a_36);
  q_92 :
  Cpush(c_36);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(6,5);
  MoveTop(6,1);
  goto t_66;
  t_66 :
  TestFunFC(i_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto u_66;
  u_66 :
  TestFunFC(i_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto w_66;
  w_66 :
  TestFunFC(l_0,&&fail,Egetd(6,5));
  Rpush(e_36);
  goto n_66;
  e_36 :
  goto d_36;
  n_66 :
  Epushd(7,6);
  NotNULLd(4,2);
  NotNULLd(6,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(6,4),App0("TNil"))));
  Ccall(_stratego_u_15);
  MoveTop(7,1);
  NotNULLd(6,2);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(7,1),App0("TNil"))));
  MoveTop(7,2);
  goto q_66;
  q_66 :
  TestFunFC(i_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto r_66;
  r_66 :
  TestFunFC(i_0,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto s_66;
  s_66 :
  TestFunFC(l_0,&&fail,Egetd(7,6));
  Rpush(g_36);
  goto p_66;
  g_36 :
  goto f_36;
  p_66 :
  Move(5,1,7,3);
  Move(5,2,7,5);
  Return();
  f_36 :
  Epopd(7,6);
  Return();
  d_36 :
  Epopd(6,5);
  OneNextSon();
  AllBuild();
  goto b_36;
  c_36 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_36);
  goto q_92;
  i_36 :
  AllBuild();
  goto h_36;
  b_36 :
  Cpop();
  h_36 :
  Return();
  a_36 :
  Tpop();
  NotNULLd(5,1);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,3);
  goto a_67;
  a_67 :
  TestFunFC(i_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto b_67;
  b_67 :
  TestFunFC(i_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto c_67;
  c_67 :
  TestFunFC(l_0,&&fail,Egetd(5,7));
  Rpush(k_36);
  goto x_66;
  k_36 :
  goto j_36;
  x_66 :
  Move(3,2,5,4);
  Move(3,3,5,6);
  Cpush(m_36);
  NotNULLd(3,2);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(0,15),App0("TNil"))));
  Ccall(_stratego_t_15);
  NotNULLd(3,3);
  Tset(App1("NotNULL",Egetd(3,3)));
  goto l_36;
  m_36 :
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("NotNULLd",Egetd(3,2),Egetd(3,3)));
  Tdupl();
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("NotNULLd",Egetd(3,2),Egetd(3,3)));
  MoveTop(3,4);
  Tpop();
  goto n_36;
  l_36 :
  Cpop();
  n_36 :
  Return();
  j_36 :
  Epopd(5,7);
  Return();
  y_35 :
  Epopd(4,5);
  Tpop();
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Epopd(3,4);
  OneNextSon();
  Rpush(o_36);
  goto p_92;
  o_36 :
  AllBuild();
  goto x_35;
  v_35 :
  Cpop();
  x_35 :
  Return();
  u_35 :
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
  t_22 :
  goto s_22;
  l_59 :
  NotNULLd(0,12);
  Tset(App1("ICountRule",Egetd(0,12)));
  Return();
  s_22 :
  goto r_22;
  k_59 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  Tset(App2("Iprim2",Egetd(0,12),Egetd(0,13)));
  Return();
  r_22 :
  goto q_22;
  j_59 :
  NotNULLd(0,12);
  Tset(App1("Iprim",Egetd(0,12)));
  Return();
  q_22 :
  goto p_22;
  i_59 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Tpop"),App0("Nil"))))));
  Return();
  p_22 :
  goto z_21;
  h_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Ccall(_stratego_l_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(0,15),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_b_16);
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
  z_21 :
  goto u_21;
  g_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_m_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_m_16);
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
  u_21 :
  goto t_21;
  f_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_m_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_m_16);
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
  t_21 :
  goto s_21;
  e_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_m_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_m_16);
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
  s_21 :
  goto r_21;
  d_59 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_m_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_m_16);
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
  r_21 :
  goto c_21;
  c_59 :
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("OneNextSon"),App2("Cons",App3("Instr",Egetd(0,8),Egetd(0,14),Egetd(0,15)),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,9)),Egetd(0,14),Egetd(0,15)),App0("Nil"))))));
  Return();
  c_21 :
  goto b_21;
  b_59 :
  Tset(App1("Block",App0("Nil")));
  Return();
  b_21 :
  goto a_21;
  a_59 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("TravInit"),App2("Cons",App3("Instr",App1("CongKids",Egetd(0,12)),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("AllBuild"),App0("Nil"))))));
  Return();
  a_21 :
  goto y_20;
  z_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Ccall(_stratego_l_15);
  MoveTop(2,1);
  NotNULLd(0,12);
  NotNULLd(2,1);
  Tset(App2("AFun",Egetd(0,12),Egetd(2,1)));
  Ccall(_stratego_h_16);
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
  y_20 :
  goto x_20;
  y_58 :
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(0,12);
  Tset(App1("Block",App2("Cons",App1("TpushIthSon",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,13),Egetd(0,14),Egetd(0,15)),App2("Cons",App1("TputIthSon",Egetd(0,12)),App0("Nil"))))));
  Return();
  x_20 :
  goto w_20;
  x_58 :
  NotNULLd(0,13);
  NotNULLd(0,7);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App3("SDef",Egetd(0,13),App0("Nil"),Egetd(0,7)),Egetd(0,14),Egetd(0,15)));
  Return();
  w_20 :
  goto v_20;
  w_58 :
  NotNULLd(0,12);
  NotNULLd(0,6);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App1("Label",Egetd(0,12)),App2("Cons",App3("Instr",Egetd(0,6),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Return"),App0("Nil"))))));
  Return();
  v_20 :
  goto t_20;
  v_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_16);
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
  t_20 :
  goto s_20;
  u_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Cpush(p_36);
  Tdupl();
  Ccall(_stratego_c_16);
  Cpop();
  Crestore();
  Cjump();
  p_36 :
  Ccall(_stratego_m_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,8);
  NotNULLd(1,1);
  Tset(App1("Block",App2("Cons",App1("Rpush",Egetd(1,1)),App2("Cons",App1("Goto",Egetd(0,8)),App2("Cons",App1("Label",Egetd(1,1)),App0("Nil"))))));
  Epopd(1,1);
  Return();
  s_20 :
  goto r_20;
  t_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Ccall(_stratego_c_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(App2("Ccall",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  r_20 :
  goto q_20;
  s_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_16);
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
  q_20 :
  goto p_20;
  r_58 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  MoveTop(2,1);
  goto s_65;
  s_65 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(r_36);
  goto z_63;
  r_36 :
  goto q_36;
  z_63 :
  Epushd(3,2);
  Ccall(_stratego_m_16);
  MoveTop(3,1);
  Move(1,1,3,1);
  NotNULLd(0,9);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,9),App0("TNil"))));
  Rpush(s_36);
  n_92 :
  Epushd(4,7);
  MoveTop(4,1);
  goto m_65;
  m_65 :
  TestFunFC(i_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto n_65;
  n_65 :
  TestFunFC(i_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,7,4,3,1);
  goto o_65;
  o_65 :
  TestFunFC(f_0,&&w_36,Egetd(4,4));
  goto p_65;
  p_65 :
  TestFunFC(l_0,&&fail,Egetd(4,7));
  Rpush(v_36);
  goto c_64;
  w_36 :
  TestFunFC(g_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto q_65;
  q_65 :
  TestFunFC(l_0,&&fail,Egetd(4,7));
  Rpush(v_36);
  goto d_64;
  v_36 :
  goto u_36;
  d_64 :
  Epushd(5,6);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_d_16);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(4,5);
  NotNULLd(5,1);
  NotNULLd(4,6);
  Tset(App2("TCons",App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Epushd(6,6);
  MoveTop(6,1);
  goto c_65;
  c_65 :
  TestFunFC(i_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto d_65;
  d_65 :
  TestFunFC(i_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,6,6,3,1);
  goto g_65;
  g_65 :
  TestFunFC(e_5,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  goto h_65;
  h_65 :
  TestFunFC(l_0,&&fail,Egetd(6,6));
  Rpush(z_36);
  goto f_64;
  z_36 :
  goto y_36;
  f_64 :
  Epushd(7,4);
  Tdupl();
  Epushd(8,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  NotNULLd(6,5);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(6,5),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(8,1);
  goto z_64;
  z_64 :
  TestFunFC(i_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto a_65;
  a_65 :
  TestFunFC(i_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto b_65;
  b_65 :
  TestFunFC(l_0,&&fail,Egetd(8,5));
  Rpush(b_37);
  goto h_64;
  b_37 :
  goto a_37;
  h_64 :
  Epushd(9,7);
  Tdupl();
  NotNULLd(8,4);
  Tset(Egetd(8,4));
  Rpush(c_37);
  o_92 :
  Cpush(e_37);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(10,5);
  MoveTop(10,1);
  goto o_64;
  o_64 :
  TestFunFC(i_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  goto p_64;
  p_64 :
  TestFunFC(i_0,&&fail,Egetd(10,3));
  MoveArg(10,4,10,3,0);
  MoveArg(10,5,10,3,1);
  goto q_64;
  q_64 :
  TestFunFC(l_0,&&fail,Egetd(10,5));
  Rpush(g_37);
  goto i_64;
  g_37 :
  goto f_37;
  i_64 :
  Epushd(11,6);
  NotNULLd(8,2);
  NotNULLd(10,4);
  Tset(App2("TCons",Egetd(8,2),App2("TCons",Egetd(10,4),App0("TNil"))));
  Ccall(_stratego_u_15);
  MoveTop(11,1);
  NotNULLd(10,2);
  NotNULLd(11,1);
  Tset(App2("TCons",Egetd(10,2),App2("TCons",Egetd(11,1),App0("TNil"))));
  MoveTop(11,2);
  goto l_64;
  l_64 :
  TestFunFC(i_0,&&fail,Egetd(11,2));
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  goto m_64;
  m_64 :
  TestFunFC(i_0,&&fail,Egetd(11,4));
  MoveArg(11,5,11,4,0);
  MoveArg(11,6,11,4,1);
  goto n_64;
  n_64 :
  TestFunFC(l_0,&&fail,Egetd(11,6));
  Rpush(i_37);
  goto k_64;
  i_37 :
  goto h_37;
  k_64 :
  Move(9,1,11,3);
  Move(9,2,11,5);
  Return();
  h_37 :
  Epopd(11,6);
  Return();
  f_37 :
  Epopd(10,5);
  OneNextSon();
  AllBuild();
  goto d_37;
  e_37 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_37);
  goto o_92;
  k_37 :
  AllBuild();
  goto j_37;
  d_37 :
  Cpop();
  j_37 :
  Return();
  c_37 :
  Tpop();
  NotNULLd(9,1);
  NotNULLd(9,2);
  Tset(App2("TCons",Egetd(9,1),App2("TCons",Egetd(9,2),App0("TNil"))));
  MoveTop(9,3);
  goto w_64;
  w_64 :
  TestFunFC(i_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto x_64;
  x_64 :
  TestFunFC(i_0,&&fail,Egetd(9,5));
  MoveArg(9,6,9,5,0);
  MoveArg(9,7,9,5,1);
  goto y_64;
  y_64 :
  TestFunFC(l_0,&&fail,Egetd(9,7));
  Rpush(m_37);
  goto r_64;
  m_37 :
  goto l_37;
  r_64 :
  Epushd(10,5);
  Move(7,1,9,4);
  Move(7,2,9,6);
  NotNULLd(0,14);
  Tset(Egetd(0,14));
  MoveTop(10,1);
  goto t_64;
  t_64 :
  TestFunFC(i_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  goto u_64;
  u_64 :
  TestFunFC(i_0,&&fail,Egetd(10,3));
  MoveArg(10,4,10,3,0);
  MoveArg(10,5,10,3,1);
  goto v_64;
  v_64 :
  TestFunFC(l_0,&&fail,Egetd(10,5));
  Rpush(o_37);
  goto s_64;
  o_37 :
  goto n_37;
  s_64 :
  Move(7,3,10,2);
  Move(7,4,10,4);
  Return();
  n_37 :
  Epopd(10,5);
  Return();
  l_37 :
  Epopd(9,7);
  Return();
  a_37 :
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
  y_36 :
  Epopd(6,6);
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Rpush(p_37);
  goto n_92;
  p_37 :
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  MoveTop(5,2);
  goto j_65;
  j_65 :
  TestFunFC(i_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto k_65;
  k_65 :
  TestFunFC(i_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto l_65;
  l_65 :
  TestFunFC(l_0,&&fail,Egetd(5,6));
  Rpush(q_37);
  goto i_65;
  q_37 :
  goto x_36;
  i_65 :
  NotNULLd(5,3);
  NotNULLd(5,5);
  Tset(App2("Cons",Egetd(5,3),Egetd(5,5)));
  Return();
  x_36 :
  Epopd(5,6);
  Return();
  u_36 :
  goto t_36;
  c_64 :
  Tset(App0("Nil"));
  Return();
  t_36 :
  Epopd(4,7);
  Return();
  s_36 :
  MoveTop(3,2);
  Move(1,2,3,2);
  Epopd(3,2);
  Return();
  q_36 :
  Epopd(2,3);
  Tpop();
  NotNULLd(0,14);
  NotNULLd(0,8);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",Egetd(0,8),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_e_16);
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
  p_20 :
  goto o_20;
  q_58 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,9);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,9),App0("TNil"))));
  Rpush(r_37);
  l_92 :
  Epushd(3,7);
  MoveTop(3,1);
  goto s_63;
  s_63 :
  TestFunFC(i_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto t_63;
  t_63 :
  TestFunFC(i_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,7,3,3,1);
  goto u_63;
  u_63 :
  TestFunFC(f_0,&&v_37,Egetd(3,4));
  goto v_63;
  v_63 :
  TestFunFC(l_0,&&fail,Egetd(3,7));
  Rpush(u_37);
  goto k_62;
  v_37 :
  TestFunFC(g_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto w_63;
  w_63 :
  TestFunFC(l_0,&&fail,Egetd(3,7));
  Rpush(u_37);
  goto l_62;
  u_37 :
  goto t_37;
  l_62 :
  Epushd(4,6);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_d_16);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(3,5);
  NotNULLd(4,1);
  NotNULLd(3,6);
  Tset(App2("TCons",App2("TCons",Egetd(3,2),App2("TCons",Egetd(3,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,1),App2("TCons",Egetd(3,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Epushd(5,6);
  MoveTop(5,1);
  goto k_63;
  k_63 :
  TestFunFC(i_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto l_63;
  l_63 :
  TestFunFC(i_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,6,5,3,1);
  goto m_63;
  m_63 :
  TestFunFC(e_5,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  goto n_63;
  n_63 :
  TestFunFC(l_0,&&fail,Egetd(5,6));
  Rpush(y_37);
  goto n_62;
  y_37 :
  goto x_37;
  n_62 :
  Epushd(6,4);
  Tdupl();
  Epushd(7,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  NotNULLd(5,5);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(5,5),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(7,1);
  goto h_63;
  h_63 :
  TestFunFC(i_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto i_63;
  i_63 :
  TestFunFC(i_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto j_63;
  j_63 :
  TestFunFC(l_0,&&fail,Egetd(7,5));
  Rpush(a_38);
  goto p_62;
  a_38 :
  goto z_37;
  p_62 :
  Epushd(8,7);
  Tdupl();
  NotNULLd(7,4);
  Tset(Egetd(7,4));
  Rpush(b_38);
  m_92 :
  Cpush(d_38);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(9,5);
  MoveTop(9,1);
  goto w_62;
  w_62 :
  TestFunFC(i_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  goto x_62;
  x_62 :
  TestFunFC(i_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto y_62;
  y_62 :
  TestFunFC(l_0,&&fail,Egetd(9,5));
  Rpush(f_38);
  goto q_62;
  f_38 :
  goto e_38;
  q_62 :
  Epushd(10,6);
  NotNULLd(7,2);
  NotNULLd(9,4);
  Tset(App2("TCons",Egetd(7,2),App2("TCons",Egetd(9,4),App0("TNil"))));
  Ccall(_stratego_u_15);
  MoveTop(10,1);
  NotNULLd(9,2);
  NotNULLd(10,1);
  Tset(App2("TCons",Egetd(9,2),App2("TCons",Egetd(10,1),App0("TNil"))));
  MoveTop(10,2);
  goto t_62;
  t_62 :
  TestFunFC(i_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto u_62;
  u_62 :
  TestFunFC(i_0,&&fail,Egetd(10,4));
  MoveArg(10,5,10,4,0);
  MoveArg(10,6,10,4,1);
  goto v_62;
  v_62 :
  TestFunFC(l_0,&&fail,Egetd(10,6));
  Rpush(h_38);
  goto s_62;
  h_38 :
  goto g_38;
  s_62 :
  Move(8,1,10,3);
  Move(8,2,10,5);
  Return();
  g_38 :
  Epopd(10,6);
  Return();
  e_38 :
  Epopd(9,5);
  OneNextSon();
  AllBuild();
  goto c_38;
  d_38 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_38);
  goto m_92;
  n_38 :
  AllBuild();
  goto i_38;
  c_38 :
  Cpop();
  i_38 :
  Return();
  b_38 :
  Tpop();
  NotNULLd(8,1);
  NotNULLd(8,2);
  Tset(App2("TCons",Egetd(8,1),App2("TCons",Egetd(8,2),App0("TNil"))));
  MoveTop(8,3);
  goto e_63;
  e_63 :
  TestFunFC(i_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto f_63;
  f_63 :
  TestFunFC(i_0,&&fail,Egetd(8,5));
  MoveArg(8,6,8,5,0);
  MoveArg(8,7,8,5,1);
  goto g_63;
  g_63 :
  TestFunFC(l_0,&&fail,Egetd(8,7));
  Rpush(p_38);
  goto z_62;
  p_38 :
  goto o_38;
  z_62 :
  Epushd(9,5);
  Move(6,1,8,4);
  Move(6,2,8,6);
  NotNULLd(0,14);
  Tset(Egetd(0,14));
  MoveTop(9,1);
  goto b_63;
  b_63 :
  TestFunFC(i_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  goto c_63;
  c_63 :
  TestFunFC(i_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto d_63;
  d_63 :
  TestFunFC(l_0,&&fail,Egetd(9,5));
  Rpush(r_38);
  goto a_63;
  r_38 :
  goto q_38;
  a_63 :
  Move(6,3,9,2);
  Move(6,4,9,4);
  Return();
  q_38 :
  Epopd(9,5);
  Return();
  o_38 :
  Epopd(8,7);
  Return();
  z_37 :
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
  x_37 :
  Epopd(5,6);
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Rpush(s_38);
  goto l_92;
  s_38 :
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  MoveTop(4,2);
  goto p_63;
  p_63 :
  TestFunFC(i_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto q_63;
  q_63 :
  TestFunFC(i_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto r_63;
  r_63 :
  TestFunFC(l_0,&&fail,Egetd(4,6));
  Rpush(t_38);
  goto o_63;
  t_38 :
  goto w_37;
  o_63 :
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("Cons",Egetd(4,3),Egetd(4,5)));
  Return();
  w_37 :
  Epopd(4,6);
  Return();
  t_37 :
  goto s_37;
  k_62 :
  Tset(App0("Nil"));
  Return();
  s_37 :
  Epopd(3,7);
  Return();
  r_37 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,14);
  NotNULLd(0,8);
  NotNULLd(0,15);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,15),App0("TNil")))));
  Ccall(_stratego_e_16);
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
  o_20 :
  goto n_20;
  p_58 :
  Tset(App1("Block",App0("Nil")));
  Return();
  n_20 :
  goto m_20;
  o_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_16);
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
  m_20 :
  goto k_20;
  n_58 :
  Tdupl();
  Epushd(1,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  MoveTop(1,2);
  goto g_62;
  g_62 :
  TestFunFC(j_33,&&z_38,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,1,1,2,1);
  Rpush(y_38);
  goto c_62;
  z_38 :
  TestFunFC(p_14,&&a_39,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_38);
  goto d_62;
  a_39 :
  TestFunFC(t_14,&&b_39,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_38);
  goto e_62;
  b_39 :
  TestFunFC(r_14,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_38);
  goto f_62;
  y_38 :
  goto x_38;
  f_62 :
  Return();
  x_38 :
  goto w_38;
  e_62 :
  Return();
  w_38 :
  goto v_38;
  d_62 :
  Return();
  v_38 :
  goto u_38;
  c_62 :
  Return();
  u_38 :
  Epopd(1,3);
  Tpop();
  NotNULLd(0,13);
  NotNULLd(0,8);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App1("Where",App2("Seq",App1("Build",Egetd(0,13)),App1("Assign",App1("Var",Egetd(0,8))))),Egetd(0,14),Egetd(0,15)));
  Return();
  k_20 :
  goto h_19;
  m_58 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,8);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto z_61;
  z_61 :
  TestFunFC(i_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto a_62;
  a_62 :
  TestFunFC(i_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_62;
  b_62 :
  TestFunFC(l_0,&&fail,Egetd(2,5));
  Rpush(d_39);
  goto u_60;
  d_39 :
  goto c_39;
  u_60 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(e_39);
  j_92 :
  Cpush(g_39);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto b_61;
  b_61 :
  TestFunFC(i_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto c_61;
  c_61 :
  TestFunFC(i_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto d_61;
  d_61 :
  TestFunFC(l_0,&&fail,Egetd(4,5));
  Rpush(i_39);
  goto v_60;
  i_39 :
  goto h_39;
  v_60 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_u_15);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto y_60;
  y_60 :
  TestFunFC(i_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto z_60;
  z_60 :
  TestFunFC(i_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto a_61;
  a_61 :
  TestFunFC(l_0,&&fail,Egetd(5,6));
  Rpush(k_39);
  goto x_60;
  k_39 :
  goto j_39;
  x_60 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  j_39 :
  Epopd(5,6);
  Return();
  h_39 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto f_39;
  g_39 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_39);
  goto j_92;
  m_39 :
  AllBuild();
  goto l_39;
  f_39 :
  Cpop();
  l_39 :
  Return();
  e_39 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto w_61;
  w_61 :
  TestFunFC(i_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto x_61;
  x_61 :
  TestFunFC(i_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto y_61;
  y_61 :
  TestFunFC(l_0,&&fail,Egetd(3,7));
  Rpush(o_39);
  goto e_61;
  o_39 :
  goto n_39;
  e_61 :
  Epushd(4,5);
  Move(1,1,3,4);
  Move(1,2,3,6);
  NotNULLd(0,1);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(4,1);
  goto t_61;
  t_61 :
  TestFunFC(i_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto u_61;
  u_61 :
  TestFunFC(i_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto v_61;
  v_61 :
  TestFunFC(l_0,&&fail,Egetd(4,5));
  Rpush(q_39);
  goto f_61;
  q_39 :
  goto p_39;
  f_61 :
  Epushd(5,7);
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(r_39);
  k_92 :
  Cpush(t_39);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(6,5);
  MoveTop(6,1);
  goto m_61;
  m_61 :
  TestFunFC(i_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto n_61;
  n_61 :
  TestFunFC(i_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto o_61;
  o_61 :
  TestFunFC(l_0,&&fail,Egetd(6,5));
  Rpush(v_39);
  goto g_61;
  v_39 :
  goto u_39;
  g_61 :
  Epushd(7,6);
  NotNULLd(4,2);
  NotNULLd(6,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(6,4),App0("TNil"))));
  Ccall(_stratego_u_15);
  MoveTop(7,1);
  NotNULLd(6,2);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(7,1),App0("TNil"))));
  MoveTop(7,2);
  goto j_61;
  j_61 :
  TestFunFC(i_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto k_61;
  k_61 :
  TestFunFC(i_0,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto l_61;
  l_61 :
  TestFunFC(l_0,&&fail,Egetd(7,6));
  Rpush(x_39);
  goto i_61;
  x_39 :
  goto w_39;
  i_61 :
  Move(5,1,7,3);
  Move(5,2,7,5);
  Return();
  w_39 :
  Epopd(7,6);
  Return();
  u_39 :
  Epopd(6,5);
  OneNextSon();
  AllBuild();
  goto s_39;
  t_39 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_39);
  goto k_92;
  z_39 :
  AllBuild();
  goto y_39;
  s_39 :
  Cpop();
  y_39 :
  Return();
  r_39 :
  Tpop();
  NotNULLd(5,1);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,3);
  goto q_61;
  q_61 :
  TestFunFC(i_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto r_61;
  r_61 :
  TestFunFC(i_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto s_61;
  s_61 :
  TestFunFC(l_0,&&fail,Egetd(5,7));
  Rpush(b_40);
  goto p_61;
  b_40 :
  goto a_40;
  p_61 :
  Move(1,3,5,4);
  Move(1,4,5,6);
  Return();
  a_40 :
  Epopd(5,7);
  Return();
  p_39 :
  Epopd(4,5);
  Return();
  n_39 :
  Epopd(3,7);
  Return();
  c_39 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App4("Move",Egetd(1,1),Egetd(1,2),Egetd(1,3),Egetd(1,4)));
  Epopd(1,4);
  Return();
  h_19 :
  goto g_19;
  l_58 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,8);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto r_60;
  r_60 :
  TestFunFC(i_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto s_60;
  s_60 :
  TestFunFC(i_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_60;
  t_60 :
  TestFunFC(l_0,&&fail,Egetd(2,5));
  Rpush(d_40);
  goto d_60;
  d_40 :
  goto c_40;
  d_60 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(e_40);
  i_92 :
  Cpush(g_40);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto k_60;
  k_60 :
  TestFunFC(i_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto l_60;
  l_60 :
  TestFunFC(i_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto m_60;
  m_60 :
  TestFunFC(l_0,&&fail,Egetd(4,5));
  Rpush(i_40);
  goto e_60;
  i_40 :
  goto h_40;
  e_60 :
  Epushd(5,6);
  NotNULLd(2,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_u_15);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,2);
  goto h_60;
  h_60 :
  TestFunFC(i_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto i_60;
  i_60 :
  TestFunFC(i_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto j_60;
  j_60 :
  TestFunFC(l_0,&&fail,Egetd(5,6));
  Rpush(k_40);
  goto g_60;
  k_40 :
  goto j_40;
  g_60 :
  Move(3,1,5,3);
  Move(3,2,5,5);
  Return();
  j_40 :
  Epopd(5,6);
  Return();
  h_40 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto f_40;
  g_40 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_40);
  goto i_92;
  s_40 :
  AllBuild();
  goto l_40;
  f_40 :
  Cpop();
  l_40 :
  Return();
  e_40 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto o_60;
  o_60 :
  TestFunFC(i_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto p_60;
  p_60 :
  TestFunFC(i_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto q_60;
  q_60 :
  TestFunFC(l_0,&&fail,Egetd(3,7));
  Rpush(u_40);
  goto n_60;
  u_40 :
  goto t_40;
  n_60 :
  Move(1,1,3,4);
  Move(1,2,3,6);
  Return();
  t_40 :
  Epopd(3,7);
  Return();
  c_40 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("MoveTop",Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  g_19 :
  goto w_18;
  k_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Cpush(v_40);
  Tdupl();
  Epushd(3,3);
  NotNULLd(0,11);
  Tset(Egetd(0,11));
  MoveTop(3,1);
  goto b_60;
  b_60 :
  TestFunFC(g_25,&&z_40,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_40);
  goto z_59;
  z_40 :
  TestFunFC(t_25,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_40);
  goto a_60;
  y_40 :
  goto x_40;
  a_60 :
  Return();
  x_40 :
  goto w_40;
  z_59 :
  Return();
  w_40 :
  Epopd(3,3);
  Cpop();
  Crestore();
  Cjump();
  v_40 :
  Ccall(_stratego_m_16);
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
  w_18 :
  goto v_18;
  j_58 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  NotNULLd(0,3);
  Tset(App4("Choices",App2("Choice",Egetd(0,12),Egetd(0,13)),Egetd(0,14),Egetd(0,15),Egetd(0,3)));
  Return();
  v_18 :
  goto u_18;
  i_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_16);
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
  u_18 :
  goto m_18;
  h_58 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  Ccall(_stratego_m_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  Ccall(_stratego_m_16);
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
  m_18 :
  goto l_18;
  g_58 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App3("Instr",App2("Choice",Egetd(0,12),Egetd(0,13)),Egetd(0,14),Egetd(0,15)));
  Return();
  l_18 :
  goto a_15;
  f_58 :
  NotNULLd(0,12);
  NotNULLd(0,13);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App3("Instr",Egetd(0,13),Egetd(0,14),Egetd(0,15)),App0("Nil")))));
  Return();
  a_15 :
  goto z_14;
  e_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_16);
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
  z_14 :
  goto y_14;
  d_58 :
  NotNULLd(0,12);
  NotNULLd(0,14);
  NotNULLd(0,15);
  Tset(App1("Block",App2("Cons",App0("Tdupl"),App2("Cons",App3("Instr",Egetd(0,12),Egetd(0,14),Egetd(0,15)),App2("Cons",App0("Tpop"),App0("Nil"))))));
  Return();
  y_14 :
  goto x_14;
  c_58 :
  Tset(App1("Goto",ATmakeString("fail")));
  Return();
  x_14 :
  goto w_14;
  b_58 :
  Tset(App1("Block",App0("Nil")));
  Return();
  w_14 :
  Epopd(0,15);
  goto u_14;
  v_14 :
  Ccontinue(a_41);
  Ccall(_stratego_j_15);
  goto u_14;
  a_41 :
  Epushd(0,5);
  MoveTop(0,1);
  goto f_69;
  f_69 :
  TestFunFC(y_4,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  MoveArg(0,5,0,1,3);
  Rpush(d_41);
  goto e_69;
  d_41 :
  goto c_41;
  e_69 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App1("Block",App2("Cons",App3("Instr",Egetd(0,2),Egetd(0,4),Egetd(0,5)),App2("Cons",App1("Goto",Egetd(0,3)),App0("Nil")))));
  Return();
  c_41 :
  Epopd(0,5);
  goto b_41;
  u_14 :
  Cpop();
  b_41 :
ENDPROC

PROC(_stratego_g_16)
  _ST_table_get();
ENDPROC

PROC(_stratego_h_16)
  Epushd(0,3);
  MoveTop(0,1);
  goto x_92;
  x_92 :
  TestFunFC(x_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(f_41);
  goto u_92;
  f_41 :
  goto e_41;
  u_92 :
  Epushd(1,1);
  Tdupl();
  Cpush(h_41);
  Epushd(2,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(0,2),Egetd(0,3)),App0("TNil"))));
  Ccall(_stratego_g_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  goto g_41;
  h_41 :
  Epushd(2,1);
  Ccall(_stratego_m_16);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",App2("AFun",Egetd(0,2),Egetd(0,3)),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_t_16);
  Epopd(2,1);
  goto i_41;
  g_41 :
  Cpop();
  i_41 :
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  e_41 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_i_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_93;
  h_93 :
  TestFunFC(n_26,&&fail,Egetd(0,1));
  Rpush(k_41);
  goto g_93;
  k_41 :
  goto j_41;
  g_93 :
  Return();
  j_41 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_16)
  Epushd(0,7);
  TestFunTop(k_26);
  TravInit();
  OneNextSon();
  Cpush(m_41);
  Epushd(1,1);
  TestFunTop(k_28);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(t_25);
  TravInit();
  OneNextSon();
  TestFunTop(m_30);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto l_93;
  l_93 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(o_41);
  goto k_93;
  o_41 :
  goto n_41;
  k_93 :
  Return();
  n_41 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_k_16);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_16);
  OneNextSon();
  Ccall(_stratego_n_17);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  TestFunTop(m_30);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto o_93;
  o_93 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(q_41);
  goto n_93;
  q_41 :
  goto p_41;
  n_93 :
  Return();
  p_41 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_16);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  TestFunTop(h_5);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto q_93;
  q_93 :
  TestFunFC(i_5,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(s_41);
  goto p_93;
  s_41 :
  goto r_41;
  p_93 :
  Move(1,1,2,2);
  Return();
  r_41 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_n_17);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_n_17);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto l_41;
  m_41 :
  Epushd(1,1);
  TestFunTop(k_28);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(t_25);
  TravInit();
  OneNextSon();
  TestFunTop(j_27);
  TravInit();
  OneNextSon();
  TestFunTop(m_30);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto t_93;
  t_93 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(v_41);
  goto s_93;
  v_41 :
  goto u_41;
  s_93 :
  Return();
  u_41 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_k_16);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_16);
  OneNextSon();
  Ccall(_stratego_n_17);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto w_93;
  w_93 :
  TestFunFC(p_32,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto x_93;
  x_93 :
  TestStr(2,2,"Cons",&&fail);
  Rpush(x_41);
  goto v_93;
  x_41 :
  goto w_41;
  v_93 :
  Return();
  w_41 :
  Epopd(2,2);
  AllBuild();
  OneNextSon();
  TestFunTop(j_27);
  TravInit();
  OneNextSon();
  TestFunTop(m_30);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  goto z_93;
  z_93 :
  TestStr(2,1,"Cons",&&fail);
  Rpush(z_41);
  goto y_93;
  z_41 :
  goto y_41;
  y_93 :
  Return();
  y_41 :
  Epopd(2,1);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_16);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  TestFunTop(h_5);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto b_94;
  b_94 :
  TestFunFC(i_5,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(b_42);
  goto a_94;
  b_42 :
  goto a_42;
  a_94 :
  Move(1,1,2,2);
  Return();
  a_42 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_n_17);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_n_17);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto d_94;
  d_94 :
  TestFunFC(p_32,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto e_94;
  e_94 :
  TestStr(2,2,"Cons",&&fail);
  Rpush(d_42);
  goto c_94;
  d_42 :
  goto c_42;
  c_94 :
  Return();
  c_42 :
  Epopd(2,2);
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto t_41;
  l_41 :
  Cpop();
  t_41 :
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
  Ccall(_stratego_m_16);
  MoveTop(1,1);
  Move(0,4,1,1);
  Ccall(_stratego_m_16);
  MoveTop(1,2);
  Move(0,5,1,2);
  Ccall(_stratego_m_16);
  MoveTop(1,3);
  Move(0,6,1,3);
  Tset(App2("AFun",ATmakeString("Cons"),MakeInt(2)));
  Ccall(_stratego_h_16);
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

PROC(_stratego_k_16)
  Cpush(e_42);
  Tdupl();
  Rpush(k_42);
  f_42 :
  Cpush(g_42);
  Epushd(0,2);
  MoveTop(0,1);
  goto s_95;
  s_95 :
  TestFunFC(z_32,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(m_42);
  goto r_95;
  m_42 :
  goto l_42;
  r_95 :
  Return();
  l_42 :
  Epopd(0,2);
  Cpop();
  goto j_42;
  g_42 :
  IsAppl();
  MatchTravInit();
  h_42 :
  OneMatchNextSon();
  Cpush(h_42);
  Rpush(i_42);
  goto f_42;
  i_42 :
  Cpop();
  MatchTravEnd();
  j_42 :
  Return();
  k_42 :
  Cpop();
  Crestore();
  Cjump();
  e_42 :
ENDPROC

PROC(_stratego_l_16)
  Epushd(0,9);
  TestFunTop(k_26);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  TestFunTop(k_28);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(t_25);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(0,1,2,1);
  Ccall(_stratego_k_16);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(y_30);
  TravInit();
  OneNextSon();
  TestFunTop(h_5);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto z_95;
  z_95 :
  TestFunFC(i_5,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(o_42);
  goto y_95;
  o_42 :
  goto n_42;
  y_95 :
  Move(1,1,2,2);
  Return();
  n_42 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_n_17);
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
  Ccall(_stratego_m_16);
  MoveTop(1,1);
  Move(0,4,1,1);
  Ccall(_stratego_m_16);
  MoveTop(1,2);
  Move(0,5,1,2);
  Ccall(_stratego_m_16);
  MoveTop(1,3);
  Move(0,6,1,3);
  Ccall(_stratego_m_16);
  MoveTop(1,4);
  Move(0,7,1,4);
  Ccall(_stratego_m_16);
  MoveTop(1,5);
  Move(0,8,1,5);
  Ccall(_stratego_m_16);
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

PROC(_stratego_m_16)
  _ST_new();
ENDPROC

PROC(_stratego_n_16)
  Cpush(q_42);
  Epushd(0,6);
  TestFunTop(k_26);
  TravInit();
  OneNextSon();
  Cpush(s_42);
  Epushd(1,1);
  TestFunTop(k_28);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(t_25);
  TravInit();
  OneNextSon();
  Rpush(t_42);
  q_100 :
  Cpush(v_42);
  Epushd(2,5);
  MoveTop(2,1);
  goto g_97;
  g_97 :
  TestFunFC(j_27,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto h_97;
  h_97 :
  TestFunFC(j_27,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  Rpush(x_42);
  goto f_97;
  x_42 :
  goto w_42;
  f_97 :
  NotNULLd(2,2);
  NotNULLd(2,4);
  NotNULLd(2,5);
  Tset(App2("Seq",App2("Seq",Egetd(2,2),Egetd(2,4)),Egetd(2,5)));
  Rpush(y_42);
  goto q_100;
  y_42 :
  Return();
  w_42 :
  Epopd(2,5);
  goto u_42;
  v_42 :
  goto z_42;
  u_42 :
  Cpop();
  z_42 :
  Return();
  t_42 :
  TestFunTop(j_27);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  Cpush(a_43);
  Tdupl();
  Rpush(g_43);
  b_43 :
  Cpush(c_43);
  Epushd(3,2);
  MoveTop(3,1);
  goto j_97;
  j_97 :
  TestFunFC(i_5,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(i_43);
  goto i_97;
  i_43 :
  goto h_43;
  i_97 :
  Move(1,1,3,2);
  Return();
  h_43 :
  Epopd(3,2);
  Cpop();
  goto f_43;
  c_43 :
  IsAppl();
  MatchTravInit();
  d_43 :
  OneMatchNextSon();
  Cpush(d_43);
  Rpush(e_43);
  goto b_43;
  e_43 :
  Cpop();
  MatchTravEnd();
  f_43 :
  Return();
  g_43 :
  Cpop();
  Crestore();
  Cjump();
  a_43 :
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(h_5);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MoveTop(2,1);
  goto m_97;
  m_97 :
  TestFunFC(i_5,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(k_43);
  goto l_97;
  k_43 :
  goto j_43;
  l_97 :
  Move(1,1,2,2);
  Return();
  j_43 :
  Epopd(2,2);
  OneNextSon();
  Ccall(_stratego_n_17);
  AllBuild();
  AllBuild();
  OneNextSon();
  Epushd(2,1);
  Cpush(l_43);
  Tdupl();
  Rpush(r_43);
  m_43 :
  Cpush(n_43);
  Epushd(3,2);
  MoveTop(3,1);
  goto o_97;
  o_97 :
  TestFunFC(i_5,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(t_43);
  goto n_97;
  t_43 :
  goto s_43;
  n_97 :
  Move(1,1,3,2);
  Return();
  s_43 :
  Epopd(3,2);
  Cpop();
  goto q_43;
  n_43 :
  IsAppl();
  MatchTravInit();
  o_43 :
  OneMatchNextSon();
  Cpush(o_43);
  Rpush(p_43);
  goto m_43;
  p_43 :
  Cpop();
  MatchTravEnd();
  q_43 :
  Return();
  r_43 :
  Cpop();
  Crestore();
  Cjump();
  l_43 :
  MoveTop(2,1);
  Move(0,2,2,1);
  Epopd(2,1);
  AllBuild();
  AllBuild();
  Epopd(1,1);
  goto r_42;
  s_42 :
  Epushd(1,3);
  TestFunTop(k_28);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  OneNextSon();
  TestFunTop(t_25);
  TravInit();
  OneNextSon();
  Epushd(2,9);
  Rpush(w_43);
  t_100 :
  Cpush(y_43);
  Epushd(3,5);
  MoveTop(3,1);
  goto s_97;
  s_97 :
  TestFunFC(j_27,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto t_97;
  t_97 :
  TestFunFC(j_27,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(a_44);
  goto r_97;
  a_44 :
  goto z_43;
  r_97 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  NotNULLd(3,5);
  Tset(App2("Seq",App2("Seq",Egetd(3,2),Egetd(3,4)),Egetd(3,5)));
  Rpush(b_44);
  goto t_100;
  b_44 :
  Return();
  z_43 :
  Epopd(3,5);
  goto x_43;
  y_43 :
  goto c_44;
  x_43 :
  Cpop();
  c_44 :
  Return();
  w_43 :
  MoveTop(2,1);
  goto y_97;
  y_97 :
  TestFunFC(j_27,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto z_97;
  z_97 :
  TestFunFC(j_27,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,8,2,3,1);
  goto a_98;
  a_98 :
  TestFunFC(h_5,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto b_98;
  b_98 :
  TestFunFC(i_5,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  goto c_98;
  c_98 :
  TestFunFC(f_0,&&fail,Egetd(2,7));
  goto d_98;
  d_98 :
  TestFunFC(e_44,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  Rpush(d_44);
  goto u_97;
  d_44 :
  goto v_43;
  u_97 :
  Move(1,2,2,2);
  Move(1,1,2,6);
  Move(1,3,2,9);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  Tset(App2("Seq",App2("Seq",Egetd(1,2),App1("CountRule",Egetd(1,3))),App2("Call",App1("SVar",Egetd(1,1)),App0("Nil"))));
  TestFunTop(j_27);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  Cpush(f_44);
  Tdupl();
  Rpush(p_44);
  g_44 :
  Cpush(h_44);
  Epushd(4,2);
  MoveTop(4,1);
  goto w_97;
  w_97 :
  TestFunFC(i_5,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(r_44);
  goto v_97;
  r_44 :
  goto q_44;
  v_97 :
  Move(1,1,4,2);
  Return();
  q_44 :
  Epopd(4,2);
  Cpop();
  goto o_44;
  h_44 :
  IsAppl();
  MatchTravInit();
  i_44 :
  OneMatchNextSon();
  Cpush(i_44);
  Rpush(j_44);
  goto g_44;
  j_44 :
  Cpop();
  MatchTravEnd();
  o_44 :
  Return();
  p_44 :
  Cpop();
  Crestore();
  Cjump();
  f_44 :
  MoveTop(3,1);
  Move(0,1,3,1);
  Epopd(3,1);
  OneNextSon();
  AllBuild();
  Return();
  v_43 :
  Epopd(2,9);
  OneNextSon();
  Epushd(2,1);
  Cpush(s_44);
  Tdupl();
  Rpush(y_44);
  t_44 :
  Cpush(u_44);
  Epushd(3,2);
  MoveTop(3,1);
  goto f_98;
  f_98 :
  TestFunFC(i_5,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(a_45);
  goto e_98;
  a_45 :
  goto z_44;
  e_98 :
  Move(1,1,3,2);
  Return();
  z_44 :
  Epopd(3,2);
  Cpop();
  goto x_44;
  u_44 :
  IsAppl();
  MatchTravInit();
  v_44 :
  OneMatchNextSon();
  Cpush(v_44);
  Rpush(w_44);
  goto t_44;
  w_44 :
  Cpop();
  MatchTravEnd();
  x_44 :
  Return();
  y_44 :
  Cpop();
  Crestore();
  Cjump();
  s_44 :
  MoveTop(2,1);
  Move(0,2,2,1);
  Epopd(2,1);
  AllBuild();
  AllBuild();
  Epopd(1,3);
  goto u_43;
  r_42 :
  Cpop();
  u_43 :
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
  Ccall(_stratego_m_16);
  MoveTop(1,1);
  Move(0,5,1,1);
  Ccall(_stratego_m_16);
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
  goto p_42;
  q_42 :
  Ccontinue(b_45);
  Ccall(_stratego_l_16);
  goto p_42;
  b_45 :
  Ccall(_stratego_j_16);
  goto c_45;
  p_42 :
  Cpop();
  c_45 :
ENDPROC

PROC(_stratego_o_16)
  Epushd(0,8);
  MoveTop(0,1);
  goto y_100;
  y_100 :
  TestFunFC(k_26,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  MoveArg(0,8,0,1,2);
  goto z_100;
  z_100 :
  TestFunFC(g_30,&&g_45,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  goto a_101;
  a_101 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  Rpush(f_45);
  goto w_100;
  g_45 :
  TestFunFC(i_30,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  MoveArg(0,6,0,2,3);
  goto b_101;
  b_101 :
  TestFunFC(f_0,&&fail,Egetd(0,5));
  Rpush(f_45);
  goto x_100;
  f_45 :
  goto e_45;
  x_100 :
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App3("Instr",App3("SDef",Egetd(0,4),App0("Nil"),Egetd(0,6)),Egetd(0,7),Egetd(0,8)));
  Return();
  e_45 :
  goto d_45;
  w_100 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App1("Block",App2("Cons",App1("PROC",Egetd(0,3)),App2("Cons",App3("Instr",Egetd(0,5),Egetd(0,7),Egetd(0,8)),App2("Cons",App0("ENDPROC"),App0("Nil"))))));
  Return();
  d_45 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_p_16)
  Rpush(h_45);
  x_101 :
  Cpush(j_45);
  Ccall(_stratego_n_17);
  goto i_45;
  j_45 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App3("Instr",Egetd(0,1),App0("Nil"),MakeInt(0)));
  Cpush(m_45);
  Ccall(_stratego_o_16);
  goto l_45;
  m_45 :
  goto n_45;
  l_45 :
  Cpop();
  n_45 :
  Rpush(o_45);
  y_101 :
  Cpush(q_45);
  p_45 :
  Cpush(s_45);
  Ccall(_stratego_n_16);
  goto r_45;
  s_45 :
  Ccall(_stratego_f_16);
  goto u_45;
  r_45 :
  Cpop();
  u_45 :
  Tduplinv();
  goto p_45;
  q_45 :
  AllInit();
  v_45 :
  AllNextSon(&&w_45);
  Rpush(x_45);
  goto y_101;
  x_45 :
  goto v_45;
  w_45 :
  AllBuild();
  Return();
  o_45 :
  Ccall(_stratego_h_15);
  Ccall(_stratego_g_15);
  Epopd(0,1);
  OneNextSon();
  Rpush(c_46);
  goto x_101;
  c_46 :
  AllBuild();
  goto k_45;
  i_45 :
  Cpop();
  k_45 :
  Return();
  h_45 :
ENDPROC

PROC(_stratego_q_16)
  _ST_implode_string();
ENDPROC

PROC(_stratego_r_16)
  _ST_explode_string();
ENDPROC

PROC(_stratego_s_16)
  Epushd(0,5);
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_16);
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_16);
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto b_102;
  b_102 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto c_102;
  c_102 :
  TestFunFC(i_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto d_102;
  d_102 :
  TestFunFC(l_0,&&fail,Egetd(0,5));
  Rpush(r_46);
  goto a_102;
  r_46 :
  goto q_46;
  a_102 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(s_46);
  l_102 :
  Cpush(n_47);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_47);
  goto l_102;
  o_47 :
  AllBuild();
  goto m_47;
  n_47 :
  Ccall(_stratego_n_17);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto p_47;
  m_47 :
  Cpop();
  p_47 :
  Return();
  s_46 :
  Ccall(_stratego_q_16);
  Return();
  q_46 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_t_16)
  _ST_table_put();
ENDPROC

PROC(_stratego_u_16)
  Epushd(0,4);
  MoveTop(0,1);
  goto o_102;
  o_102 :
  TestFunFC(g_30,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  goto p_102;
  p_102 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  Rpush(r_47);
  goto m_102;
  r_47 :
  goto q_47;
  m_102 :
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(App2("TCons",ATmakeString("_stratego_"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_s_16);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("symbol-table"),App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_t_16);
  NotNULLd(0,2);
  Tset(App1("PROCDECL",Egetd(0,2)));
  Epopd(1,1);
  Return();
  q_47 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_v_16)
  _ST_create_table();
ENDPROC

PROC(_stratego_w_16)
  Tdupl();
  Tset(ATmakeString("symbol-table"));
  Ccall(_stratego_v_16);
  Tpop();
  Rpush(s_47);
  y_102 :
  Cpush(u_47);
  Ccall(_stratego_n_17);
  goto t_47;
  u_47 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_16);
  OneNextSon();
  Rpush(b_48);
  goto y_102;
  b_48 :
  AllBuild();
  goto a_48;
  t_47 :
  Cpop();
  a_48 :
  Return();
  s_47 :
ENDPROC

PROC(_stratego_x_16)
  Epushd(0,4);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_16);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_p_16);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,5);
  Ccall(_stratego_e_15);
  MoveTop(1,1);
  goto c_103;
  c_103 :
  TestFunFC(i_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_103;
  d_103 :
  TestFunFC(i_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_103;
  e_103 :
  TestFunFC(l_0,&&fail,Egetd(1,5));
  Rpush(j_48);
  goto b_103;
  j_48 :
  goto d_48;
  b_103 :
  Move(0,3,1,2);
  Move(0,4,1,4);
  Return();
  d_48 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,1);
  NotNULLd(0,4);
  NotNULLd(0,2);
  Tset(App1("Block",App2("Cons",App1("Block",Egetd(0,3)),App2("Cons",App1("Block",Egetd(0,1)),App2("Cons",App1("Block",App2("Cons",App1("PROC",ATmakeString("init_afuns")),App2("Cons",App1("Block",Egetd(0,4)),App2("Cons",App0("ENDPROC"),App0("Nil"))))),App2("Cons",App1("Block",Egetd(0,2)),App0("Nil")))))));
  Epopd(0,4);
ENDPROC

PROC(_stratego_y_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_103;
  s_103 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  Rpush(l_49);
  goto r_103;
  l_49 :
  goto k_48;
  r_103 :
  Return();
  k_48 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_16)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_i_17);
  Tset(MakeInt(1));
  Ccall(_stratego_h_17);
ENDPROC

PROC(_stratego_a_17)
  Epushd(0,2);
  Tdupl();
  Cpush(q_49);
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Cpush(r_49);
  Tdupl();
  Rpush(v_49);
  q_104 :
  Cpush(m_50);
  Epushd(1,3);
  MoveTop(1,1);
  goto v_103;
  v_103 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_103;
  w_103 :
  TestFunFC(p_50,&&fail,Egetd(1,2));
  Rpush(o_50);
  goto u_103;
  o_50 :
  goto n_50;
  u_103 :
  Return();
  n_50 :
  Epopd(1,3);
  goto d_50;
  m_50 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_50);
  goto q_104;
  w_50 :
  AllBuild();
  goto v_50;
  d_50 :
  Cpop();
  v_50 :
  Return();
  v_49 :
  Cpop();
  Crestore();
  Cjump();
  r_49 :
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Rpush(x_50);
  r_104 :
  Cpush(z_50);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_103;
  y_103 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_103;
  z_103 :
  TestFunFC(c_51,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_51);
  goto x_103;
  b_51 :
  goto a_51;
  x_103 :
  Move(0,2,1,3);
  Return();
  a_51 :
  Epopd(1,4);
  goto y_50;
  z_50 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_51);
  goto r_104;
  e_51 :
  AllBuild();
  goto d_51;
  y_50 :
  Cpop();
  d_51 :
  Return();
  x_50 :
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Rpush(f_51);
  s_104 :
  Cpush(h_51);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_104;
  b_104 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_104;
  c_104 :
  TestFunFC(k_51,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(j_51);
  goto a_104;
  j_51 :
  goto i_51;
  a_104 :
  Move(0,1,1,3);
  Return();
  i_51 :
  Epopd(1,4);
  goto g_51;
  h_51 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_51);
  goto s_104;
  r_51 :
  AllBuild();
  goto q_51;
  g_51 :
  Cpop();
  q_51 :
  Return();
  f_51 :
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_i_17);
  goto m_49;
  q_49 :
  goto b_52;
  m_49 :
  Cpop();
  b_52 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_h_17);
  Epopd(0,2);
ENDPROC

PROC(_stratego_b_17)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_c_17)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_d_17)
  Epushd(0,1);
  Tdupl();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Cpush(i_52);
  Rpush(u_52);
  t_105 :
  Cpush(a_53);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_104;
  u_104 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_104;
  v_104 :
  TestFunFC(f_53,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_53);
  goto t_104;
  c_53 :
  goto b_53;
  t_104 :
  Move(0,1,1,3);
  Return();
  b_53 :
  Epopd(1,4);
  goto y_52;
  a_53 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_53);
  goto t_105;
  p_53 :
  AllBuild();
  goto o_53;
  y_52 :
  Cpop();
  o_53 :
  Return();
  u_52 :
  goto h_52;
  i_52 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto q_53;
  h_52 :
  Cpop();
  q_53 :
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  Cpush(t_53);
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Rpush(z_53);
  u_105 :
  Cpush(e_54);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_105;
  c_105 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_105;
  d_105 :
  TestFunFC(u_54,&&fail,Egetd(1,2));
  Rpush(l_54);
  goto b_105;
  l_54 :
  goto f_54;
  b_105 :
  Return();
  f_54 :
  Epopd(1,3);
  goto a_54;
  e_54 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_54);
  goto u_105;
  x_54 :
  AllBuild();
  goto v_54;
  a_54 :
  Cpop();
  v_54 :
  Return();
  z_53 :
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_17);
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  goto r_53;
  t_53 :
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_17);
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  goto z_54;
  r_53 :
  Cpop();
  z_54 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_17)
  _ST_dtime();
ENDPROC

PROC(_stratego_f_17)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_g_17)
  Epushd(0,3);
  Tdupl();
  Cpush(g_55);
  Rpush(k_55);
  p_106 :
  Cpush(w_55);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_105;
  w_105 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_105;
  x_105 :
  TestFunFC(e_56,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_56);
  goto v_105;
  d_56 :
  goto y_55;
  v_105 :
  Move(0,1,1,3);
  Return();
  y_55 :
  Epopd(1,4);
  goto l_55;
  w_55 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_57);
  goto p_106;
  h_57 :
  AllBuild();
  goto g_57;
  l_55 :
  Cpop();
  g_57 :
  Return();
  k_55 :
  goto f_55;
  g_55 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto i_57;
  f_55 :
  Cpop();
  i_57 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_f_17);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_h_17)
  _ST_exit();
ENDPROC

PROC(_stratego_i_17)
  _ST_printnl();
ENDPROC

PROC(_stratego_j_17)
  Epushd(0,1);
  Tdupl();
  Rpush(j_57);
  a_107 :
  Cpush(n_57);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_106;
  s_106 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_106;
  t_106 :
  TestFunFC(k_51,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_57);
  goto r_106;
  p_57 :
  goto o_57;
  r_106 :
  Move(0,1,1,3);
  Return();
  o_57 :
  Epopd(1,4);
  goto k_57;
  n_57 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_57);
  goto a_107;
  r_57 :
  AllBuild();
  goto q_57;
  k_57 :
  Cpop();
  q_57 :
  Return();
  j_57 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_i_17);
  Tset(MakeInt(1));
  Ccall(_stratego_h_17);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_17)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_107;
  c_107 :
  TestFunFC(u_57,&&fail,Egetd(0,1));
  Rpush(t_57);
  goto b_107;
  t_57 :
  goto s_57;
  b_107 :
  Return();
  s_57 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_17)
  Tdupl();
  v_57 :
  TestFunTop(g_0);
  Cpush(w_57);
  Arg(0);
  Cpush(a_58);
  Ccall(_stratego_k_17);
  goto y_57;
  a_58 :
  Epushd(0,2);
  MoveTop(0,1);
  goto f_107;
  f_107 :
  TestFunFC(y_59,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(x_59);
  goto e_107;
  x_59 :
  goto w_59;
  e_107 :
  Return();
  w_59 :
  Epopd(0,2);
  goto v_59;
  y_57 :
  Cpop();
  v_59 :
  Tpop();
  Cpop();
  goto x_57;
  w_57 :
  Arg(1);
  Tdrop();
  goto v_57;
  x_57 :
  Tpop();
  Ccall(_stratego_j_17);
ENDPROC

PROC(_stratego_m_17)
  Epushd(0,5);
  MoveTop(0,3);
  goto x_109;
  x_109 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_109;
  y_109 :
  TestFunFC(g_0,&&j_64,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(f_65);
  Rpush(r_65);
  goto j_107;
  r_65 :
  goto e_65;
  f_65 :
  Ccontinue(t_65);
  Rpush(u_65);
  goto k_107;
  u_65 :
  goto e_65;
  t_65 :
  Ccontinue(v_65);
  Rpush(w_65);
  goto l_107;
  w_65 :
  goto e_65;
  v_65 :
  Ccontinue(x_65);
  Rpush(y_65);
  goto m_107;
  y_65 :
  goto e_65;
  x_65 :
  Ccontinue(z_65);
  Rpush(a_66);
  goto n_107;
  a_66 :
  goto e_65;
  z_65 :
  Ccontinue(b_66);
  Rpush(c_66);
  goto o_107;
  c_66 :
  goto e_65;
  b_66 :
  Ccontinue(d_66);
  Rpush(e_66);
  goto p_107;
  e_66 :
  goto e_65;
  d_66 :
  Ccontinue(f_66);
  Rpush(g_66);
  goto q_107;
  g_66 :
  goto e_65;
  f_66 :
  Ccontinue(h_66);
  Rpush(i_66);
  goto r_107;
  i_66 :
  goto e_65;
  h_66 :
  Ccontinue(j_66);
  Rpush(k_66);
  goto s_107;
  k_66 :
  goto e_65;
  j_66 :
  Ccontinue(l_66);
  Rpush(o_66);
  goto t_107;
  o_66 :
  goto e_65;
  l_66 :
  Ccontinue(v_66);
  Rpush(y_66);
  goto v_107;
  y_66 :
  goto e_65;
  v_66 :
  Ccontinue(z_66);
  Rpush(g_67);
  goto w_107;
  g_67 :
  goto e_65;
  z_66 :
  Ccontinue(h_67);
  Rpush(k_67);
  goto x_107;
  k_67 :
  goto e_65;
  h_67 :
  Rpush(a_68);
  goto y_107;
  a_68 :
  goto t_67;
  e_65 :
  Cpop();
  t_67 :
  goto g_64;
  j_64 :
  Cpush(c_68);
  Rpush(d_68);
  goto j_107;
  d_68 :
  goto b_68;
  c_68 :
  Ccontinue(e_68);
  Rpush(f_68);
  goto k_107;
  f_68 :
  goto b_68;
  e_68 :
  Ccontinue(g_68);
  Rpush(h_68);
  goto l_107;
  h_68 :
  goto b_68;
  g_68 :
  Ccontinue(i_68);
  Rpush(j_68);
  goto m_107;
  j_68 :
  goto b_68;
  i_68 :
  Ccontinue(k_68);
  Rpush(l_68);
  goto n_107;
  l_68 :
  goto b_68;
  k_68 :
  Ccontinue(m_68);
  Rpush(n_68);
  goto t_107;
  n_68 :
  goto b_68;
  m_68 :
  Ccontinue(o_68);
  Rpush(v_69);
  goto v_107;
  v_69 :
  goto b_68;
  o_68 :
  Ccontinue(w_69);
  Rpush(x_69);
  goto w_107;
  x_69 :
  goto b_68;
  w_69 :
  Ccontinue(y_69);
  Rpush(z_69);
  goto x_107;
  z_69 :
  goto b_68;
  y_69 :
  Rpush(b_70);
  goto y_107;
  b_70 :
  goto a_70;
  b_68 :
  Cpop();
  a_70 :
  goto g_64;
  g_64 :
  goto e_64;
  y_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_109;
  v_109 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_70);
  goto u_109;
  d_70 :
  goto c_70;
  u_109 :
  Return();
  c_70 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  e_64 :
  goto b_64;
  x_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_109;
  s_109 :
  TestStr(1,1,"-h",&&fail);
  Rpush(h_70);
  goto r_109;
  h_70 :
  goto e_70;
  r_109 :
  Return();
  e_70 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  b_64 :
  goto a_64;
  w_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_109;
  p_109 :
  TestStr(1,1,"--help",&&fail);
  Rpush(j_70);
  goto o_109;
  j_70 :
  goto i_70;
  o_109 :
  Return();
  i_70 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  a_64 :
  goto y_63;
  v_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_109;
  m_109 :
  TestStr(1,1,"-s",&&fail);
  Rpush(l_70);
  goto l_109;
  l_70 :
  goto k_70;
  l_109 :
  Return();
  k_70 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  y_63 :
  goto x_63;
  t_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_109;
  j_109 :
  TestStr(1,1,"-b",&&fail);
  Rpush(n_70);
  goto i_109;
  n_70 :
  goto m_70;
  i_109 :
  Return();
  m_70 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  x_63 :
  goto r_62;
  s_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_109;
  f_109 :
  TestStr(1,1,"--output",&&fail);
  Rpush(p_70);
  goto e_109;
  p_70 :
  goto o_70;
  e_109 :
  Return();
  o_70 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  r_62 :
  goto o_62;
  r_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_109;
  b_109 :
  TestStr(1,1,"-o",&&fail);
  Rpush(r_70);
  goto a_109;
  r_70 :
  goto q_70;
  a_109 :
  Return();
  q_70 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  o_62 :
  goto m_62;
  q_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_108;
  x_108 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_70);
  goto w_108;
  x_70 :
  goto s_70;
  w_108 :
  Return();
  s_70 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  m_62 :
  goto j_62;
  p_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_108;
  t_108 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_70);
  goto s_108;
  z_70 :
  goto y_70;
  s_108 :
  Return();
  y_70 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  j_62 :
  goto i_62;
  o_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_108;
  p_108 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_71);
  goto o_108;
  b_71 :
  goto a_71;
  o_108 :
  Return();
  a_71 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  i_62 :
  goto h_62;
  n_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_108;
  m_108 :
  TestStr(1,1,"--version",&&fail);
  Rpush(f_71);
  goto l_108;
  f_71 :
  goto e_71;
  l_108 :
  Return();
  e_71 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  h_62 :
  goto h_61;
  m_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_108;
  j_108 :
  TestStr(1,1,"-v",&&fail);
  Rpush(h_71);
  goto i_108;
  h_71 :
  goto g_71;
  i_108 :
  Return();
  g_71 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  h_61 :
  goto w_60;
  l_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_108;
  g_108 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(j_71);
  goto f_108;
  j_71 :
  goto i_71;
  f_108 :
  Return();
  i_71 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  w_60 :
  goto f_60;
  k_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_108;
  d_108 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(l_71);
  goto c_108;
  l_71 :
  goto k_71;
  c_108 :
  Return();
  k_71 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  f_60 :
  goto c_60;
  j_107 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_108;
  a_108 :
  TestStr(1,1,"-S",&&fail);
  Rpush(s_71);
  goto z_107;
  s_71 :
  goto m_71;
  z_107 :
  Return();
  m_71 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  c_60 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_17)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_113;
  s_113 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  Rpush(u_71);
  goto r_113;
  u_71 :
  goto t_71;
  r_113 :
  Return();
  t_71 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(c_72);
  s_114 :
  Cpush(l_72);
  Cpush(o_72);
  Ccall(_stratego_n_17);
  goto m_72;
  o_72 :
  Ccall(_stratego_m_17);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_73);
  goto s_114;
  a_73 :
  AllBuild();
  goto z_72;
  m_72 :
  Cpop();
  z_72 :
  goto d_72;
  l_72 :
  Epushd(0,3);
  MoveTop(0,1);
  goto w_113;
  w_113 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_73);
  goto v_113;
  m_73 :
  goto c_73;
  v_113 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  c_73 :
  Epopd(0,3);
  goto b_73;
  d_72 :
  Cpop();
  b_73 :
  Return();
  c_72 :
  AllBuild();
  Cpush(v_73);
  Ccall(_stratego_l_17);
  goto n_73;
  v_73 :
  Ccontinue(w_73);
  Epushd(0,6);
  Ccall(_stratego_g_17);
  Tdupl();
  Ccall(_stratego_e_17);
  Tpop();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_16);
  OneNextSon();
  Ccall(_stratego_y_16);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_e_17);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto z_113;
  z_113 :
  TestFunFC(i_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto a_114;
  a_114 :
  TestFunFC(i_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto b_114;
  b_114 :
  TestFunFC(l_0,&&fail,Egetd(0,6));
  Rpush(o_74);
  goto y_113;
  o_74 :
  goto y_73;
  y_113 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  y_73 :
  Ccall(_stratego_d_17);
  Ccall(_stratego_a_17);
  Epopd(0,6);
  goto n_73;
  w_73 :
  Ccall(_stratego_z_16);
  goto p_74;
  n_73 :
  Cpop();
  p_74 :
ENDPROC

DOIT

