#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,z_112);
VARDECL(AFun,i_110);
VARDECL(AFun,t_108);
VARDECL(AFun,f_108);
VARDECL(AFun,l_107);
VARDECL(AFun,n_105);
VARDECL(AFun,q_104);
VARDECL(AFun,r_103);
VARDECL(AFun,u_37);
VARDECL(AFun,m_37);
VARDECL(AFun,l_37);
VARDECL(AFun,k_37);
VARDECL(AFun,j_37);
VARDECL(AFun,g_37);
VARDECL(AFun,s_33);
VARDECL(AFun,k_33);
VARDECL(AFun,s_20);
VARDECL(AFun,q_20);
VARDECL(AFun,y_16);
VARDECL(AFun,x_16);
VARDECL(AFun,v_16);
VARDECL(AFun,t_16);
VARDECL(AFun,r_16);
VARDECL(AFun,e_14);
VARDECL(AFun,d_14);
VARDECL(AFun,k_13);
VARDECL(AFun,j_13);
VARDECL(AFun,h_13);
VARDECL(AFun,i_10);
VARDECL(AFun,q_8);
VARDECL(AFun,o_8);
VARDECL(AFun,d_7);
VARDECL(AFun,c_7);
VARDECL(AFun,u_6);
VARDECL(AFun,t_5);
VARDECL(AFun,g_5);
VARDECL(AFun,w_4);
VARDECL(AFun,o_4);
VARDECL(AFun,n_4);
VARDECL(AFun,l_4);
VARDECL(AFun,u_3);
VARDECL(AFun,m_3);
VARDECL(AFun,j_3);
VARDECL(AFun,i_3);
VARDECL(AFun,g_3);
VARDECL(AFun,e_3);
VARDECL(AFun,b_3);
VARDECL(AFun,y_2);
VARDECL(AFun,v_2);
VARDECL(AFun,t_2);
VARDECL(AFun,s_2);
VARDECL(AFun,q_2);
VARDECL(AFun,k_1);
VARDECL(AFun,p_0);
VARDECL(AFun,j_0);
VARDECL(AFun,i_0);
VARDECL(AFun,g_0);
PROCDECL(_stratego_b_46);
PROCDECL(_stratego_c_46);
PROCDECL(_stratego_d_46);
PROCDECL(_stratego_e_46);
PROCDECL(_stratego_h_46);
PROCDECL(_stratego_i_46);
PROCDECL(_stratego_j_46);
PROCDECL(_stratego_k_46);
PROCDECL(_stratego_l_46);
PROCDECL(_stratego_m_46);
PROCDECL(_stratego_q_46);
PROCDECL(_stratego_r_46);
PROCDECL(_stratego_s_46);
PROCDECL(_stratego_v_46);
PROCDECL(_stratego_w_46);
PROCDECL(_stratego_x_46);
PROCDECL(_stratego_y_46);
PROCDECL(_stratego_z_46);
PROCDECL(_stratego_a_47);
PROCDECL(_stratego_b_47);
PROCDECL(_stratego_c_47);
PROCDECL(_stratego_d_47);
PROCDECL(_stratego_e_47);
PROCDECL(_stratego_f_47);
PROCDECL(_stratego_g_47);
PROCDECL(_stratego_h_47);
PROCDECL(_stratego_i_47);
PROCDECL(_stratego_j_47);
PROCDECL(_stratego_k_47);
PROCDECL(_stratego_l_47);
PROCDECL(_stratego_m_47);
PROCDECL(_stratego_n_47);
PROCDECL(_stratego_o_47);
PROCDECL(_stratego_q_47);
PROCDECL(_stratego_r_47);
PROCDECL(_stratego_u_47);
PROCDECL(_stratego_v_47);
PROCDECL(_stratego_w_47);
PROCDECL(_stratego_x_47);
PROCDECL(_stratego_y_47);
PROCDECL(_stratego_z_47);
PROCDECL(_stratego_a_48);
PROCDECL(_stratego_b_48);
PROCDECL(_stratego_c_48);
PROCDECL(_stratego_d_48);
PROCDECL(_stratego_e_48);
PROCDECL(_stratego_f_48);
PROCDECL(_stratego_g_48);
PROCDECL(_stratego_h_48);
PROCDECL(_stratego_i_48);
PROCDECL(_stratego_j_48);
PROCDECL(_stratego_k_48);
PROCDECL(_stratego_l_48);
PROCDECL(_stratego_o_48);
PROCDECL(_stratego_p_48);
PROCDECL(_stratego_q_48);
PROCDECL(_stratego_r_48);
PROCDECL(_stratego_s_48);
PROCDECL(_stratego_t_48);
PROCDECL(_stratego_u_48);
PROCDECL(_stratego_v_48);
PROCDECL(_stratego_w_48);
PROCDECL(_stratego_x_48);
PROCDECL(_stratego_y_48);
PROCDECL(_stratego_z_48);
PROCDECL(_stratego_a_49);
PROCDECL(_stratego_b_49);
PROCDECL(_stratego_c_49);
PROCDECL(_stratego_d_49);
PROCDECL(_stratego_e_49);
PROCDECL(_stratego_f_49);
PROCDECL(_stratego_g_49);
PROCDECL(_stratego_h_49);
PROCDECL(_stratego_i_49);
PROCDECL(_stratego_j_49);
PROCDECL(_stratego_k_49);
PROCDECL(_stratego_l_49);
PROCDECL(_stratego_m_49);
PROCDECL(_stratego_n_49);
PROCDECL(_stratego_o_49);
PROCDECL(_stratego_p_49);
PROCDECL(_stratego_q_49);
PROCDECL(_stratego_r_49);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(z_112,ATmakeAFun("Undefined",1,0));
  MOVE(i_110,ATmakeAFun("Help",0,0));
  MOVE(t_108,ATmakeAFun("Input",1,0));
  MOVE(f_108,ATmakeAFun("Binary",0,0));
  MOVE(l_107,ATmakeAFun("Output",1,0));
  MOVE(n_105,ATmakeAFun("Program",1,0));
  MOVE(q_104,ATmakeAFun("Runtime",1,0));
  MOVE(r_103,ATmakeAFun("Silent",0,0));
  MOVE(u_37,ATmakeAFun("LRule",1,0));
  MOVE(m_37,ATmakeAFun("Strategies",1,0));
  MOVE(l_37,ATmakeAFun("Rules",1,0));
  MOVE(k_37,ATmakeAFun("Overlays",1,0));
  MOVE(j_37,ATmakeAFun("Signature",1,0));
  MOVE(g_37,ATmakeAFun("Specification",1,0));
  MOVE(s_33,ATmakeAFun("Cong",2,0));
  MOVE(k_33,ATmakeAFun("Seq",2,0));
  MOVE(s_20,ATmakeAFun("Overlay",3,0));
  MOVE(q_20,ATmakeAFun("RDef",3,0));
  MOVE(y_16,ATmakeAFun("BuildDefault",1,0));
  MOVE(x_16,ATmakeAFun("Real",1,0));
  MOVE(v_16,ATmakeAFun("Int",1,0));
  MOVE(t_16,ATmakeAFun("Str",1,0));
  MOVE(r_16,ATmakeAFun("Op",2,0));
  MOVE(e_14,ATmakeAFun("Operations",1,0));
  MOVE(d_14,ATmakeAFun("Sorts",1,0));
  MOVE(k_13,ATmakeAFun("FunType",2,0));
  MOVE(j_13,ATmakeAFun("ConstType",1,0));
  MOVE(h_13,ATmakeAFun("OpDecl",2,0));
  MOVE(i_10,ATmakeAFun("SVar",1,0));
  MOVE(q_8,ATmakeAFun("Rec",2,0));
  MOVE(o_8,ATmakeAFun("Let",2,0));
  MOVE(d_7,ATmakeAFun("TNil",0,0));
  MOVE(c_7,ATmakeAFun("TCons",2,0));
  MOVE(u_6,ATmakeAFun("SDef",3,0));
  MOVE(t_5,ATmakeAFun("Scope",2,0));
  MOVE(g_5,ATmakeAFun("Call",2,0));
  MOVE(w_4,ATmakeAFun("Var",1,0));
  MOVE(o_4,ATmakeAFun("StratRule",3,0));
  MOVE(n_4,ATmakeAFun("Rule",3,0));
  MOVE(l_4,ATmakeAFun("SRule",1,0));
  MOVE(u_3,ATmakeAFun("Con",3,0));
  MOVE(m_3,ATmakeAFun("Wld",0,0));
  MOVE(j_3,ATmakeAFun("BAM",3,0));
  MOVE(i_3,ATmakeAFun("AM",2,0));
  MOVE(g_3,ATmakeAFun("MA",2,0));
  MOVE(e_3,ATmakeAFun("BA",2,0));
  MOVE(b_3,ATmakeAFun("Lets",2,0));
  MOVE(y_2,ATmakeAFun("LChoices",1,0));
  MOVE(v_2,ATmakeAFun("Choices",1,0));
  MOVE(t_2,ATmakeAFun("Cons",2,0));
  MOVE(s_2,ATmakeAFun("Nil",0,0));
  MOVE(q_2,ATmakeAFun("Seqs",1,0));
  MOVE(k_1,ATmakeAFun("App",2,0));
  MOVE(p_0,ATmakeAFun("Explode",2,0));
  MOVE(j_0,ATmakeAFun("ExplodeCong",2,0));
  MOVE(i_0,ATmakeAFun("Build",1,0));
  MOVE(g_0,ATmakeAFun("Match",1,0));
ENDPROC

PROC(_stratego_b_46)
  Epushd(0,3);
  MoveTop(0,1);
  goto k_7;
  k_7 :
  TestFunFC(g_0,&&f_0,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(e_0);
  goto a_0;
  f_0 :
  TestFunFC(i_0,&&h_0,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(e_0);
  goto e_2;
  h_0 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(e_0);
  goto f_2;
  e_0 :
  goto d_0;
  f_2 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Prim",ATmakeString("_ST_explode_term")),App2("Seq",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,2),App2("Cons",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,3),App2("Cons",App2("Cong",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Prim",ATmakeString("_ST_mkterm")))));
  Return();
  d_0 :
  goto c_0;
  e_2 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_n_47);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(k_0);
  w_9 :
  Cpush(m_0);
  Epushd(2,3);
  MoveTop(2,1);
  goto i_7;
  i_7 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_0);
  goto h_7;
  o_0 :
  goto n_0;
  h_7 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  n_0 :
  Epopd(2,3);
  goto l_0;
  m_0 :
  IsAppl();
  OneInit();
  r_0 :
  OneNextSon();
  Cpush(r_0);
  Rpush(t_0);
  goto w_9;
  t_0 :
  Cpop();
  OneBuild();
  goto q_0;
  l_0 :
  Cpop();
  q_0 :
  Return();
  k_0 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",App1("Prim",ATmakeString("_ST_mkterm")),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  c_0 :
  goto b_0;
  a_0 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_n_47);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(u_0);
  v_9 :
  Cpush(w_0);
  Epushd(2,3);
  MoveTop(2,1);
  goto n_5;
  n_5 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(y_0);
  goto r_3;
  y_0 :
  goto x_0;
  r_3 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  x_0 :
  Epopd(2,3);
  goto v_0;
  w_0 :
  IsAppl();
  OneInit();
  a_1 :
  OneNextSon();
  Cpush(a_1);
  Rpush(c_1);
  goto v_9;
  c_1 :
  Cpop();
  OneBuild();
  goto z_0;
  v_0 :
  Cpop();
  z_0 :
  Return();
  u_0 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App1("Match",Egetd(1,4)),App1("Where",App3("BAM",App1("Prim",ATmakeString("_ST_explode_term")),App1("Var",Egetd(1,1)),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))))))));
  Epopd(1,4);
  Return();
  b_0 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_c_46)
  Epushd(0,2);
  MoveTop(0,1);
  goto p_10;
  p_10 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(e_1);
  goto x_9;
  e_1 :
  goto d_1;
  x_9 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_n_47);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(f_1);
  w_11 :
  Cpush(h_1);
  Epushd(2,3);
  MoveTop(2,1);
  goto j_10;
  j_10 :
  TestFunFC(k_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(j_1);
  goto z_9;
  j_1 :
  goto i_1;
  z_9 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  i_1 :
  Epopd(2,3);
  goto g_1;
  h_1 :
  IsAppl();
  OneInit();
  m_1 :
  OneNextSon();
  Cpush(m_1);
  Rpush(o_1);
  goto w_11;
  o_1 :
  Cpop();
  OneBuild();
  goto l_1;
  g_1 :
  Cpop();
  l_1 :
  Return();
  f_1 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",Egetd(1,2),Egetd(1,3),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  d_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_d_46)
  Epushd(0,2);
  MoveTop(0,1);
  goto c_12;
  c_12 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(q_1);
  goto x_11;
  q_1 :
  goto p_1;
  x_11 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(r_1);
  v_12 :
  Cpush(t_1);
  Epushd(2,4);
  MoveTop(2,1);
  goto z_11;
  z_11 :
  TestFunFC(k_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto a_12;
  a_12 :
  TestFunFC(i_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(v_1);
  goto y_11;
  v_1 :
  goto u_1;
  y_11 :
  Move(1,2,2,3);
  Move(1,1,2,4);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  u_1 :
  Epopd(2,4);
  goto s_1;
  t_1 :
  IsAppl();
  OneInit();
  x_1 :
  OneNextSon();
  Cpush(x_1);
  Rpush(z_1);
  goto v_12;
  z_1 :
  Cpop();
  OneBuild();
  goto w_1;
  s_1 :
  Cpop();
  w_1 :
  Return();
  r_1 :
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(App1("Build",Egetd(1,3)));
  Epopd(1,3);
  Return();
  p_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_e_46)
  Epushd(0,6);
  MoveTop(0,3);
  goto k_14;
  k_14 :
  TestFunFC(q_2,&&p_2,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto l_14;
  l_14 :
  TestFunFC(s_2,&&r_2,Egetd(0,4));
  Rpush(o_2);
  goto w_12;
  r_2 :
  TestFunFC(t_2,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(o_2);
  goto x_12;
  p_2 :
  TestFunFC(v_2,&&u_2,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto m_14;
  m_14 :
  TestFunFC(s_2,&&w_2,Egetd(0,4));
  Rpush(o_2);
  goto y_12;
  w_2 :
  TestFunFC(t_2,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(o_2);
  goto d_13;
  u_2 :
  TestFunFC(y_2,&&x_2,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto n_14;
  n_14 :
  TestFunFC(s_2,&&z_2,Egetd(0,4));
  Rpush(o_2);
  goto e_13;
  z_2 :
  TestFunFC(t_2,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(o_2);
  goto f_13;
  x_2 :
  TestFunFC(b_3,&&a_3,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto o_14;
  o_14 :
  TestFunFC(s_2,&&c_3,Egetd(0,4));
  Rpush(o_2);
  goto q_13;
  c_3 :
  TestFunFC(t_2,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(o_2);
  goto r_13;
  a_3 :
  TestFunFC(e_3,&&d_3,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(o_2);
  goto x_13;
  d_3 :
  TestFunFC(g_3,&&f_3,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(o_2);
  goto y_13;
  f_3 :
  TestFunFC(i_3,&&h_3,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(o_2);
  goto i_14;
  h_3 :
  TestFunFC(j_3,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(o_2);
  goto j_14;
  o_2 :
  goto n_2;
  j_14 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  n_2 :
  goto m_2;
  i_14 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  m_2 :
  goto l_2;
  y_13 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  l_2 :
  goto k_2;
  x_13 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  k_2 :
  goto j_2;
  r_13 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  j_2 :
  goto i_2;
  q_13 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  i_2 :
  goto h_2;
  f_13 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  h_2 :
  goto g_2;
  e_13 :
  Tset(App0("Fail"));
  Return();
  g_2 :
  goto d_2;
  d_13 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  d_2 :
  goto c_2;
  y_12 :
  Tset(App0("Fail"));
  Return();
  c_2 :
  goto b_2;
  x_12 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  b_2 :
  goto a_2;
  w_12 :
  Tset(App0("Id"));
  Return();
  a_2 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_h_46)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_17;
  z_17 :
  TestFunFC(m_3,&&fail,Egetd(0,1));
  Rpush(l_3);
  goto y_17;
  l_3 :
  goto k_3;
  y_17 :
  Return();
  k_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_46)
  Cpush(n_3);
  Tdupl();
  Rpush(o_3);
  k_18 :
  Cpush(q_3);
  Epushd(0,4);
  MoveTop(0,1);
  goto e_18;
  e_18 :
  TestFunFC(u_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(t_3);
  goto b_18;
  t_3 :
  goto s_3;
  b_18 :
  Return();
  s_3 :
  Epopd(0,4);
  goto p_3;
  q_3 :
  Ccall(_stratego_h_46);
  goto v_3;
  p_3 :
  Cpop();
  v_3 :
  AllInit();
  w_3 :
  AllNextSon(&&x_3);
  Rpush(y_3);
  goto k_18;
  y_3 :
  goto w_3;
  x_3 :
  AllBuild();
  Return();
  o_3 :
  Cpop();
  Crestore();
  Cjump();
  n_3 :
ENDPROC

PROC(_stratego_j_46)
  Cpush(z_3);
  Tdupl();
  Rpush(a_4);
  w_19 :
  Epushd(0,4);
  MoveTop(0,2);
  goto q_18;
  q_18 :
  TestFunFC(u_3,&&e_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  Rpush(d_4);
  goto o_18;
  e_4 :
  TestFunFC(k_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(d_4);
  goto p_18;
  d_4 :
  goto c_4;
  p_18 :
  Return();
  c_4 :
  goto b_4;
  o_18 :
  Return();
  b_4 :
  AllInit();
  f_4 :
  AllNextSon(&&g_4);
  Rpush(h_4);
  goto w_19;
  h_4 :
  goto f_4;
  g_4 :
  AllBuild();
  Epopd(0,4);
  Return();
  a_4 :
  Cpop();
  Crestore();
  Cjump();
  z_3 :
ENDPROC

PROC(_stratego_k_46)
  Epushd(0,5);
  MoveTop(0,1);
  goto z_20;
  z_20 :
  TestFunFC(l_4,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto a_21;
  a_21 :
  TestFunFC(n_4,&&m_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(k_4);
  goto d_20;
  m_4 :
  TestFunFC(o_4,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(k_4);
  goto e_20;
  k_4 :
  goto j_4;
  e_20 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,5),App2("Cons",Egetd(0,4),App0("Nil"))))));
  Return();
  j_4 :
  goto i_4;
  d_20 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_j_46);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_i_46);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",App1("Match",Egetd(0,3)),App2("Cons",Egetd(0,5),App2("Cons",App1("Build",Egetd(0,4)),App0("Nil"))))));
  Return();
  i_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_l_46)
  Epushd(0,5);
  MoveTop(0,1);
  goto q_23;
  q_23 :
  TestFunFC(l_4,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto r_23;
  r_23 :
  TestFunFC(n_4,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(q_4);
  goto o_22;
  q_4 :
  goto p_4;
  o_22 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_n_47);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(r_4);
  z_27 :
  Cpush(t_4);
  Epushd(2,5);
  MoveTop(2,1);
  goto t_22;
  t_22 :
  TestFunFC(u_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto u_22;
  u_22 :
  TestFunFC(w_4,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(v_4);
  goto s_22;
  v_4 :
  goto u_4;
  s_22 :
  Move(1,4,2,3);
  Move(1,2,2,4);
  Move(1,3,2,5);
  NotNULLd(1,4);
  Tset(App1("Var",Egetd(1,4)));
  Return();
  u_4 :
  Epopd(2,5);
  goto s_4;
  t_4 :
  IsAppl();
  OneInit();
  y_4 :
  OneNextSon();
  Cpush(y_4);
  Rpush(a_5);
  goto z_27;
  a_5 :
  Cpop();
  OneBuild();
  goto x_4;
  s_4 :
  Cpop();
  x_4 :
  Return();
  r_4 :
  MoveTop(1,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(b_5);
  d_29 :
  Cpush(d_5);
  Epushd(2,7);
  MoveTop(2,1);
  goto l_23;
  l_23 :
  TestFunFC(u_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto m_23;
  m_23 :
  TestFunFC(w_4,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto n_23;
  n_23 :
  TestFunFC(g_5,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto o_23;
  o_23 :
  TestFunFC(s_2,&&fail,Egetd(2,7));
  Rpush(f_5);
  goto k_23;
  f_5 :
  goto e_5;
  k_23 :
  Move(1,4,2,3);
  Move(1,6,2,4);
  Move(1,7,2,6);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  e_5 :
  Epopd(2,7);
  goto c_5;
  d_5 :
  IsAppl();
  OneInit();
  i_5 :
  OneNextSon();
  Cpush(i_5);
  Rpush(k_5);
  goto d_29;
  k_5 :
  Cpop();
  OneBuild();
  goto h_5;
  c_5 :
  Cpop();
  h_5 :
  Return();
  b_5 :
  MoveTop(1,8);
  NotNULLd(1,5);
  NotNULLd(1,8);
  NotNULLd(0,5);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(1,6);
  NotNULLd(1,4);
  NotNULLd(1,1);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App1("SRule",App3("Rule",Egetd(1,5),Egetd(1,8),App2("Seq",Egetd(0,5),App3("BAM",App2("Call",Egetd(1,7),App2("Cons",App1("SRule",App3("Rule",Egetd(1,2),Egetd(1,6),App0("Id"))),App0("Nil"))),App1("Var",Egetd(1,4)),App1("Var",Egetd(1,1))))))));
  Epopd(1,8);
  Return();
  p_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_m_46)
  Rpush(l_5);
  g_29 :
  Cpush(o_5);
  Cpush(q_5);
  Ccall(_stratego_l_46);
  Rpush(r_5);
  goto g_29;
  r_5 :
  goto p_5;
  q_5 :
  Ccontinue(s_5);
  TestFunTop(t_5);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_5);
  goto g_29;
  u_5 :
  AllBuild();
  goto p_5;
  s_5 :
  Ccall(_stratego_k_46);
  goto v_5;
  p_5 :
  Cpop();
  v_5 :
  goto m_5;
  o_5 :
  goto w_5;
  m_5 :
  Cpop();
  w_5 :
  Return();
  l_5 :
ENDPROC

PROC(_stratego_q_46)
  Rpush(x_5);
  c_30 :
  Cpush(z_5);
  Ccall(_stratego_m_46);
  goto y_5;
  z_5 :
  goto a_6;
  y_5 :
  Cpop();
  a_6 :
  Cpush(c_6);
  b_6 :
  Cpush(e_6);
  Ccall(_stratego_e_46);
  goto d_6;
  e_6 :
  Ccontinue(f_6);
  Cpush(h_6);
  Ccall(_stratego_d_46);
  goto g_6;
  h_6 :
  Ccontinue(i_6);
  Epushd(0,4);
  MoveTop(0,1);
  goto n_29;
  n_29 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto v_29;
  v_29 :
  TestFunFC(k_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(k_6);
  goto m_29;
  k_6 :
  goto j_6;
  m_29 :
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,4)),Egetd(0,3)));
  Return();
  j_6 :
  Epopd(0,4);
  goto g_6;
  i_6 :
  Ccall(_stratego_c_46);
  goto l_6;
  g_6 :
  Cpop();
  l_6 :
  goto d_6;
  f_6 :
  Ccall(_stratego_b_46);
  goto m_6;
  d_6 :
  Cpop();
  m_6 :
  Tduplinv();
  goto b_6;
  c_6 :
  AllInit();
  n_6 :
  AllNextSon(&&o_6);
  Rpush(p_6);
  goto c_30;
  p_6 :
  goto n_6;
  o_6 :
  AllBuild();
  Return();
  x_5 :
ENDPROC

PROC(_stratego_r_46)
  Rpush(q_6);
  e_30 :
  Cpush(s_6);
  Ccall(_stratego_q_49);
  goto r_6;
  s_6 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  TestFunTop(u_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_46);
  AllBuild();
  OneNextSon();
  Rpush(v_6);
  goto e_30;
  v_6 :
  AllBuild();
  goto t_6;
  r_6 :
  Cpop();
  t_6 :
  Return();
  q_6 :
ENDPROC

PROC(_stratego_s_46)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(w_6);
  t_46 :
  Rpush(x_6);
  u_46 :
  Epushd(1,5);
  MoveTop(1,1);
  goto x_33;
  x_33 :
  TestFunFC(c_7,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_33;
  y_33 :
  TestFunFC(c_7,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_33;
  z_33 :
  TestFunFC(d_7,&&fail,Egetd(1,5));
  Cpush(f_7);
  Rpush(g_7);
  goto g_30;
  g_7 :
  goto e_7;
  f_7 :
  Ccontinue(j_7);
  Rpush(o_7);
  goto h_30;
  o_7 :
  goto e_7;
  j_7 :
  Rpush(y_7);
  goto i_30;
  y_7 :
  goto x_7;
  e_7 :
  Cpop();
  x_7 :
  goto b_7;
  b_7 :
  goto a_7;
  i_30 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  g_8 :
  AllNextSon(&&h_8);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(i_8);
  goto u_46;
  i_8 :
  Epopd(2,1);
  goto g_8;
  h_8 :
  AllBuild();
  Return();
  a_7 :
  goto z_6;
  h_30 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto y_30;
  y_30 :
  TestFunFC(o_8,&&n_8,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto z_30;
  z_30 :
  TestFunFC(u_6,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(m_8);
  goto v_30;
  n_8 :
  TestFunFC(u_6,&&p_8,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(m_8);
  goto w_30;
  p_8 :
  TestFunFC(q_8,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(m_8);
  goto x_30;
  m_8 :
  goto l_8;
  x_30 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  l_8 :
  goto k_8;
  w_30 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  k_8 :
  goto j_8;
  v_30 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  j_8 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(r_8);
  s_47 :
  Cpush(t_8);
  Ccall(_stratego_q_49);
  goto s_8;
  t_8 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_47);
  OneNextSon();
  Rpush(v_8);
  goto s_47;
  v_8 :
  AllBuild();
  goto u_8;
  s_8 :
  Cpop();
  u_8 :
  Return();
  r_8 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(w_8);
  t_47 :
  Epushd(4,9);
  MoveTop(4,1);
  goto j_31;
  j_31 :
  TestFunFC(c_7,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto m_31;
  m_31 :
  TestFunFC(s_2,&&a_9,Egetd(4,2));
  goto n_31;
  n_31 :
  TestFunFC(c_7,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto q_31;
  q_31 :
  TestFunFC(s_2,&&fail,Egetd(4,6));
  goto r_31;
  r_31 :
  TestFunFC(d_7,&&fail,Egetd(4,9));
  Rpush(z_8);
  goto c_31;
  a_9 :
  TestFunFC(t_2,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto s_31;
  s_31 :
  TestFunFC(c_7,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto u_31;
  u_31 :
  TestFunFC(t_2,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto v_31;
  v_31 :
  TestFunFC(d_7,&&fail,Egetd(4,9));
  Rpush(z_8);
  goto d_31;
  z_8 :
  goto y_8;
  d_31 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(c_9);
  goto t_47;
  c_9 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto g_31;
  g_31 :
  TestFunFC(c_7,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto h_31;
  h_31 :
  TestFunFC(c_7,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto i_31;
  i_31 :
  TestFunFC(d_7,&&fail,Egetd(5,5));
  Rpush(d_9);
  goto e_31;
  d_9 :
  goto b_9;
  e_31 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  b_9 :
  Epopd(5,5);
  Return();
  y_8 :
  goto x_8;
  c_31 :
  Tset(App0("Nil"));
  Return();
  x_8 :
  Epopd(4,9);
  Return();
  w_8 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto g_32;
  g_32 :
  TestFunFC(c_7,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto h_32;
  h_32 :
  TestFunFC(c_7,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto i_32;
  i_32 :
  TestFunFC(d_7,&&fail,Egetd(3,15));
  Rpush(g_9);
  goto x_31;
  g_9 :
  goto e_9;
  x_31 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(h_9);
  m_48 :
  Cpush(j_9);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_9);
  goto m_48;
  k_9 :
  AllBuild();
  goto i_9;
  j_9 :
  Ccall(_stratego_q_49);
  NotNULLd(3,14);
  Tset(Egetd(3,14));
  goto l_9;
  i_9 :
  Cpop();
  l_9 :
  Return();
  h_9 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  e_9 :
  Epopd(3,15);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(n_9);
  TestFunTop(o_8);
  TravInit();
  OneNextSon();
  TestFunTop(u_6);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto k_32;
  k_32 :
  TestFunFC(t_2,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_9);
  goto j_32;
  p_9 :
  goto o_9;
  j_32 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  o_9 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto m_9;
  n_9 :
  Ccontinue(q_9);
  TestFunTop(u_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto m_9;
  q_9 :
  TestFunTop(q_8);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto m_32;
  m_32 :
  TestFunFC(t_2,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(t_9);
  goto l_32;
  t_9 :
  goto s_9;
  l_32 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  s_9 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto r_9;
  m_9 :
  Cpop();
  r_9 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto e_33;
  e_33 :
  TestFunFC(c_7,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto f_33;
  f_33 :
  TestFunFC(c_7,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto i_33;
  i_33 :
  TestFunFC(c_7,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto j_33;
  j_33 :
  TestFunFC(d_7,&&fail,Egetd(2,11));
  Rpush(y_9);
  goto w_32;
  y_9 :
  goto u_9;
  w_32 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(b_10);
  TestFunTop(o_8);
  TravInit();
  OneNextSon();
  TestFunTop(u_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(c_10);
  goto t_46;
  c_10 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(d_10);
  goto t_46;
  d_10 :
  Epopd(3,1);
  AllBuild();
  goto a_10;
  b_10 :
  Ccontinue(e_10);
  TestFunTop(u_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(f_10);
  goto t_46;
  f_10 :
  Epopd(3,1);
  AllBuild();
  goto a_10;
  e_10 :
  TestFunTop(q_8);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(h_10);
  goto t_46;
  h_10 :
  Epopd(3,1);
  AllBuild();
  goto g_10;
  a_10 :
  Cpop();
  g_10 :
  Return();
  u_9 :
  Epopd(2,11);
  Return();
  z_6 :
  goto y_6;
  g_30 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(i_10);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_p_48);
  Epopd(2,1);
  AllBuild();
  Return();
  y_6 :
  Epopd(1,5);
  Return();
  x_6 :
  Return();
  w_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_46)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(k_10);
  x_53 :
  Rpush(l_10);
  y_53 :
  Epushd(1,5);
  MoveTop(1,1);
  goto c_51;
  c_51 :
  TestFunFC(c_7,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_51;
  d_51 :
  TestFunFC(c_7,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_51;
  e_51 :
  TestFunFC(d_7,&&fail,Egetd(1,5));
  Cpush(s_10);
  Rpush(t_10);
  goto s_49;
  t_10 :
  goto r_10;
  s_10 :
  Ccontinue(u_10);
  Rpush(x_10);
  goto t_49;
  x_10 :
  goto r_10;
  u_10 :
  Rpush(f_11);
  goto u_49;
  f_11 :
  goto e_11;
  r_10 :
  Cpop();
  e_11 :
  goto q_10;
  q_10 :
  goto o_10;
  u_49 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  g_11 :
  AllNextSon(&&h_11);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(i_11);
  goto y_53;
  i_11 :
  Epopd(2,1);
  goto g_11;
  h_11 :
  AllBuild();
  Return();
  o_10 :
  goto n_10;
  t_49 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_i_48);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(j_11);
  z_53 :
  Cpush(l_11);
  Ccall(_stratego_q_49);
  goto k_11;
  l_11 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_47);
  OneNextSon();
  Rpush(p_11);
  goto z_53;
  p_11 :
  AllBuild();
  goto o_11;
  k_11 :
  Cpop();
  o_11 :
  Return();
  j_11 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(q_11);
  a_54 :
  Epushd(4,9);
  MoveTop(4,1);
  goto g_50;
  g_50 :
  TestFunFC(c_7,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto h_50;
  h_50 :
  TestFunFC(s_2,&&u_11,Egetd(4,2));
  goto i_50;
  i_50 :
  TestFunFC(c_7,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto j_50;
  j_50 :
  TestFunFC(s_2,&&fail,Egetd(4,6));
  goto k_50;
  k_50 :
  TestFunFC(d_7,&&fail,Egetd(4,9));
  Rpush(t_11);
  goto a_50;
  u_11 :
  TestFunFC(t_2,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto l_50;
  l_50 :
  TestFunFC(c_7,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto m_50;
  m_50 :
  TestFunFC(t_2,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto n_50;
  n_50 :
  TestFunFC(d_7,&&fail,Egetd(4,9));
  Rpush(t_11);
  goto b_50;
  t_11 :
  goto s_11;
  b_50 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(b_12);
  goto a_54;
  b_12 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto d_50;
  d_50 :
  TestFunFC(c_7,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto e_50;
  e_50 :
  TestFunFC(c_7,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto f_50;
  f_50 :
  TestFunFC(d_7,&&fail,Egetd(5,5));
  Rpush(f_12);
  goto c_50;
  f_12 :
  goto v_11;
  c_50 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  v_11 :
  Epopd(5,5);
  Return();
  s_11 :
  goto r_11;
  a_50 :
  Tset(App0("Nil"));
  Return();
  r_11 :
  Epopd(4,9);
  Return();
  q_11 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto r_50;
  r_50 :
  TestFunFC(c_7,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto s_50;
  s_50 :
  TestFunFC(c_7,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto t_50;
  t_50 :
  TestFunFC(d_7,&&fail,Egetd(3,8));
  Rpush(j_12);
  goto p_50;
  j_12 :
  goto i_12;
  p_50 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(k_12);
  b_54 :
  Cpush(m_12);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_12);
  goto b_54;
  n_12 :
  AllBuild();
  goto l_12;
  m_12 :
  Ccall(_stratego_q_49);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto o_12;
  l_12 :
  Cpop();
  o_12 :
  Return();
  k_12 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  i_12 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(t_5);
  TravInit();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto x_50;
  x_50 :
  TestFunFC(c_7,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto y_50;
  y_50 :
  TestFunFC(c_7,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto z_50;
  z_50 :
  TestFunFC(c_7,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto a_51;
  a_51 :
  TestFunFC(d_7,&&fail,Egetd(2,11));
  Rpush(z_12);
  goto v_50;
  z_12 :
  goto u_12;
  v_50 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(t_5);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(a_13);
  goto x_53;
  a_13 :
  Epopd(3,1);
  AllBuild();
  Return();
  u_12 :
  Epopd(2,11);
  Return();
  n_10 :
  goto m_10;
  s_49 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(w_4);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_p_48);
  Epopd(2,1);
  AllBuild();
  Return();
  m_10 :
  Epopd(1,5);
  Return();
  l_10 :
  Return();
  k_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_46)
  Ccall(_stratego_v_46);
  Ccall(_stratego_s_46);
ENDPROC

PROC(_stratego_x_46)
  Epushd(0,5);
  MoveTop(0,1);
  goto h_54;
  h_54 :
  TestFunFC(h_13,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_54;
  i_54 :
  TestFunFC(j_13,&&i_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(g_13);
  goto c_54;
  i_13 :
  TestFunFC(k_13,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(g_13);
  goto d_54;
  g_13 :
  goto c_13;
  d_54 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(l_13);
  a_55 :
  Cpush(n_13);
  Ccall(_stratego_q_49);
  goto m_13;
  n_13 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_47);
  OneNextSon();
  Rpush(p_13);
  goto a_55;
  p_13 :
  AllBuild();
  goto o_13;
  m_13 :
  Cpop();
  o_13 :
  Return();
  l_13 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(s_13);
  b_55 :
  Cpush(u_13);
  Ccall(_stratego_q_49);
  goto t_13;
  u_13 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("Call",App1("SVar",Egetd(2,1)),App0("Nil")));
  Epopd(2,1);
  OneNextSon();
  Rpush(w_13);
  goto b_55;
  w_13 :
  AllBuild();
  goto v_13;
  t_13 :
  Cpop();
  v_13 :
  Return();
  s_13 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(1,2);
  Tset(App3("SDef",Egetd(0,2),Egetd(1,1),App2("Cong",Egetd(0,2),Egetd(1,2))));
  Epopd(1,2);
  Return();
  c_13 :
  goto b_13;
  c_54 :
  NotNULLd(0,2);
  Tset(App3("SDef",Egetd(0,2),App0("Nil"),App2("Cong",Egetd(0,2),App0("Nil"))));
  Return();
  b_13 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_y_46)
  Epushd(0,2);
  MoveTop(0,1);
  goto e_55;
  e_55 :
  TestFunFC(d_14,&&c_14,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(b_14);
  goto c_55;
  c_14 :
  TestFunFC(e_14,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(b_14);
  goto d_55;
  b_14 :
  goto a_14;
  d_55 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(f_14);
  k_55 :
  Cpush(h_14);
  Ccall(_stratego_q_49);
  goto g_14;
  h_14 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_46);
  OneNextSon();
  Rpush(w_14);
  goto k_55;
  w_14 :
  AllBuild();
  goto v_14;
  g_14 :
  Cpop();
  v_14 :
  Return();
  f_14 :
  Return();
  a_14 :
  goto z_13;
  c_55 :
  Tset(App0("Nil"));
  Return();
  z_13 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_z_46)
  Rpush(x_14);
  l_55 :
  Cpush(z_14);
  Ccall(_stratego_q_49);
  goto y_14;
  z_14 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_46);
  OneNextSon();
  Rpush(b_15);
  goto l_55;
  b_15 :
  AllBuild();
  goto a_15;
  y_14 :
  Cpop();
  a_15 :
  Return();
  x_14 :
  Ccall(_stratego_v_48);
ENDPROC

PROC(_stratego_a_47)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(d_15);
  r_56 :
  Cpush(f_15);
  Epushd(1,7);
  MoveTop(1,1);
  goto o_55;
  o_55 :
  TestFunFC(c_7,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto p_55;
  p_55 :
  TestFunFC(t_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto q_55;
  q_55 :
  TestFunFC(c_7,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto r_55;
  r_55 :
  TestFunFC(d_7,&&fail,Egetd(1,7));
  Rpush(h_15);
  goto n_55;
  h_15 :
  goto g_15;
  n_55 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(i_15);
  goto r_56;
  i_15 :
  Return();
  g_15 :
  Epopd(1,7);
  goto e_15;
  f_15 :
  goto j_15;
  e_15 :
  Cpop();
  j_15 :
  Return();
  d_15 :
  MoveTop(0,2);
  goto t_55;
  t_55 :
  TestFunFC(c_7,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto u_55;
  u_55 :
  TestFunFC(s_2,&&fail,Egetd(0,3));
  goto w_55;
  w_55 :
  TestFunFC(c_7,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_55;
  x_55 :
  TestFunFC(d_7,&&fail,Egetd(0,6));
  Rpush(k_15);
  goto s_55;
  k_15 :
  goto c_15;
  s_55 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  c_15 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_b_47)
  Epushd(0,7);
  MoveTop(0,1);
  goto u_56;
  u_56 :
  TestFunFC(c_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto v_56;
  v_56 :
  TestFunFC(c_7,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto w_56;
  w_56 :
  TestFunFC(s_2,&&o_15,Egetd(0,4));
  goto x_56;
  x_56 :
  TestFunFC(d_7,&&fail,Egetd(0,7));
  Rpush(n_15);
  goto s_56;
  o_15 :
  TestFunFC(t_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_56;
  y_56 :
  TestFunFC(d_7,&&fail,Egetd(0,7));
  Rpush(n_15);
  goto t_56;
  n_15 :
  goto m_15;
  t_56 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  m_15 :
  goto l_15;
  s_56 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  l_15 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_c_47)
  _ST_int();
ENDPROC

PROC(_stratego_d_47)
  _ST_div();
ENDPROC

PROC(_stratego_e_47)
  _ST_mod();
ENDPROC

PROC(_stratego_f_47)
  Rpush(p_15);
  q_58 :
  Epushd(0,4);
  MoveTop(0,1);
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_e_47);
  MoveTop(0,2);
  Tset(MakeInt(48));
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_g_47);
  MoveTop(0,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_d_47);
  Ccall(_stratego_c_47);
  MoveTop(0,4);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,4),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Cpush(r_15);
  Epushd(1,1);
  MoveTop(1,1);
  goto w_57;
  w_57 :
  TestInt(1,1,0,&&fail);
  Rpush(t_15);
  goto v_57;
  t_15 :
  goto s_15;
  v_57 :
  Tset(App0("Nil"));
  Return();
  s_15 :
  Epopd(1,1);
  goto q_15;
  r_15 :
  Rpush(v_15);
  goto q_58;
  v_15 :
  goto u_15;
  q_15 :
  Cpop();
  u_15 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  Ccall(_stratego_b_47);
  Epopd(0,4);
  Return();
  p_15 :
  Ccall(_stratego_a_47);
  Ccall(_stratego_i_47);
ENDPROC

PROC(_stratego_g_47)
  _ST_add();
ENDPROC

PROC(_stratego_h_47)
  Rpush(w_15);
  b_59 :
  Cpush(y_15);
  Ccall(_stratego_q_49);
  Tset(MakeInt(0));
  goto x_15;
  y_15 :
  Epushd(0,3);
  MoveTop(0,1);
  goto t_58;
  t_58 :
  TestFunFC(t_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(b_16);
  goto r_58;
  b_16 :
  goto a_16;
  r_58 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(c_16);
  goto b_59;
  c_16 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_g_47);
  Epopd(1,1);
  Return();
  a_16 :
  Epopd(0,3);
  goto z_15;
  x_15 :
  Cpop();
  z_15 :
  Return();
  w_15 :
ENDPROC

PROC(_stratego_i_47)
  _ST_implode_string();
ENDPROC

PROC(_stratego_j_47)
  _ST_explode_string();
ENDPROC

PROC(_stratego_k_47)
  Rpush(d_16);
  c_59 :
  Cpush(f_16);
  Ccall(_stratego_q_49);
  goto e_16;
  f_16 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_47);
  OneNextSon();
  Rpush(h_16);
  goto c_59;
  h_16 :
  AllBuild();
  goto g_16;
  e_16 :
  Cpop();
  g_16 :
  Return();
  d_16 :
  Ccall(_stratego_v_48);
  Ccall(_stratego_i_47);
ENDPROC

PROC(_stratego_l_47)
  Epushd(0,3);
  MoveTop(0,2);
  goto j_59;
  j_59 :
  TestFunFC(w_4,&&p_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(o_16);
  goto d_59;
  p_16 :
  TestFunFC(r_16,&&q_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(o_16);
  goto e_59;
  q_16 :
  TestFunFC(t_16,&&s_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(o_16);
  goto f_59;
  s_16 :
  TestFunFC(v_16,&&u_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(o_16);
  goto g_59;
  u_16 :
  TestFunFC(x_16,&&w_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(o_16);
  goto h_59;
  w_16 :
  TestFunFC(y_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(o_16);
  goto i_59;
  o_16 :
  goto n_16;
  i_59 :
  Tset(App0("Id"));
  Return();
  n_16 :
  goto m_16;
  h_59 :
  NotNULLd(0,3);
  Tset(App1("Match",App1("Real",Egetd(0,3))));
  Return();
  m_16 :
  goto l_16;
  g_59 :
  NotNULLd(0,3);
  Tset(App1("Match",App1("Int",Egetd(0,3))));
  Return();
  l_16 :
  goto k_16;
  f_59 :
  NotNULLd(0,3);
  Tset(App1("Match",App1("Str",Egetd(0,3))));
  Return();
  k_16 :
  goto j_16;
  e_59 :
  NotNULLd(0,3);
  NotNULLd(0,1);
  Tset(App2("Call",App1("SVar",Egetd(0,3)),Egetd(0,1)));
  Return();
  j_16 :
  goto i_16;
  d_59 :
  NotNULLd(0,3);
  Tset(App2("Call",App1("SVar",Egetd(0,3)),App0("Nil")));
  Return();
  i_16 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_m_47)
  Rpush(z_16);
  u_59 :
  Cpush(b_17);
  TestFunTop(r_16);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_17);
  v_59 :
  Cpush(e_17);
  Ccall(_stratego_q_49);
  goto d_17;
  e_17 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Rpush(g_17);
  goto u_59;
  g_17 :
  OneNextSon();
  Rpush(h_17);
  goto v_59;
  h_17 :
  AllBuild();
  goto f_17;
  d_17 :
  Cpop();
  f_17 :
  Return();
  c_17 :
  AllBuild();
  goto a_17;
  b_17 :
  goto i_17;
  a_17 :
  Cpop();
  i_17 :
  Ccall(_stratego_l_47);
  Return();
  z_16 :
ENDPROC

PROC(_stratego_n_47)
  _ST_new();
ENDPROC

PROC(_stratego_o_47)
  Epushd(0,5);
  Ccall(_stratego_q_48);
  MoveTop(0,1);
  goto q_61;
  q_61 :
  TestFunFC(c_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_61;
  r_61 :
  TestFunFC(c_7,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto s_61;
  s_61 :
  TestFunFC(d_7,&&fail,Egetd(0,5));
  Rpush(k_17);
  goto w_59;
  k_17 :
  goto j_17;
  w_59 :
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(l_17);
  c_65 :
  Rpush(m_17);
  d_65 :
  Epushd(1,5);
  MoveTop(1,1);
  goto n_61;
  n_61 :
  TestFunFC(c_7,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_61;
  o_61 :
  TestFunFC(c_7,&&s_17,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_61;
  p_61 :
  TestFunFC(d_7,&&t_17,Egetd(1,5));
  Cpush(v_17);
  Rpush(w_17);
  goto x_59;
  w_17 :
  goto u_17;
  v_17 :
  Ccontinue(x_17);
  Rpush(c_18);
  goto y_59;
  c_18 :
  goto u_17;
  x_17 :
  Ccontinue(d_18);
  Rpush(i_18);
  goto z_59;
  i_18 :
  goto u_17;
  d_18 :
  Rpush(m_18);
  goto a_60;
  m_18 :
  goto l_18;
  u_17 :
  Cpop();
  l_18 :
  goto r_17;
  t_17 :
  Rpush(r_17);
  goto y_59;
  s_17 :
  Rpush(r_17);
  goto y_59;
  r_17 :
  goto q_17;
  a_60 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  n_18 :
  AllNextSon(&&r_18);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(t_18);
  goto d_65;
  t_18 :
  Epopd(2,1);
  goto n_18;
  r_18 :
  AllBuild();
  Return();
  q_17 :
  goto p_17;
  z_59 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_i_48);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(u_18);
  e_65 :
  Cpush(w_18);
  Ccall(_stratego_q_49);
  goto v_18;
  w_18 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_47);
  OneNextSon();
  Rpush(y_18);
  goto e_65;
  y_18 :
  AllBuild();
  goto x_18;
  v_18 :
  Cpop();
  x_18 :
  Return();
  u_18 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(z_18);
  f_65 :
  Epushd(4,9);
  MoveTop(4,1);
  goto r_60;
  r_60 :
  TestFunFC(c_7,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto s_60;
  s_60 :
  TestFunFC(s_2,&&d_19,Egetd(4,2));
  goto t_60;
  t_60 :
  TestFunFC(c_7,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto u_60;
  u_60 :
  TestFunFC(s_2,&&fail,Egetd(4,6));
  goto v_60;
  v_60 :
  TestFunFC(d_7,&&fail,Egetd(4,9));
  Rpush(c_19);
  goto l_60;
  d_19 :
  TestFunFC(t_2,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto w_60;
  w_60 :
  TestFunFC(c_7,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto x_60;
  x_60 :
  TestFunFC(t_2,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto y_60;
  y_60 :
  TestFunFC(d_7,&&fail,Egetd(4,9));
  Rpush(c_19);
  goto m_60;
  c_19 :
  goto b_19;
  m_60 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(f_19);
  goto f_65;
  f_19 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto o_60;
  o_60 :
  TestFunFC(c_7,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto p_60;
  p_60 :
  TestFunFC(c_7,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto q_60;
  q_60 :
  TestFunFC(d_7,&&fail,Egetd(5,5));
  Rpush(g_19);
  goto n_60;
  g_19 :
  goto e_19;
  n_60 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  e_19 :
  Epopd(5,5);
  Return();
  b_19 :
  goto a_19;
  l_60 :
  Tset(App0("Nil"));
  Return();
  a_19 :
  Epopd(4,9);
  Return();
  z_18 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto c_61;
  c_61 :
  TestFunFC(c_7,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto d_61;
  d_61 :
  TestFunFC(c_7,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto e_61;
  e_61 :
  TestFunFC(d_7,&&fail,Egetd(3,8));
  Rpush(i_19);
  goto a_61;
  i_19 :
  goto h_19;
  a_61 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(j_19);
  g_65 :
  Cpush(l_19);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_19);
  goto g_65;
  m_19 :
  AllBuild();
  goto k_19;
  l_19 :
  Ccall(_stratego_q_49);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto n_19;
  k_19 :
  Cpop();
  n_19 :
  Return();
  j_19 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  h_19 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(t_5);
  TravInit();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto i_61;
  i_61 :
  TestFunFC(c_7,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto j_61;
  j_61 :
  TestFunFC(c_7,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto k_61;
  k_61 :
  TestFunFC(c_7,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto l_61;
  l_61 :
  TestFunFC(d_7,&&fail,Egetd(2,11));
  Rpush(p_19);
  goto g_61;
  p_19 :
  goto o_19;
  g_61 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(t_5);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(q_19);
  goto c_65;
  q_19 :
  Epopd(3,1);
  AllBuild();
  Return();
  o_19 :
  Epopd(2,11);
  Return();
  p_17 :
  goto o_17;
  y_59 :
  Epushd(2,2);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,1);
  goto i_60;
  i_60 :
  TestFunFC(w_4,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(s_19);
  goto f_60;
  s_19 :
  goto r_19;
  f_60 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Move(2,1,3,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(2,2,0,2);
  Return();
  r_19 :
  Epopd(3,2);
  Tpop();
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Ccall(_stratego_p_48);
  Epopd(2,2);
  Return();
  o_17 :
  goto n_17;
  x_59 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(w_4);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_p_48);
  Epopd(2,1);
  AllBuild();
  Return();
  n_17 :
  Epopd(1,5);
  Return();
  m_17 :
  Return();
  l_17 :
  Return();
  j_17 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_47)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_l_49);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_r_47)
  Tdupl();
  Ccall(_stratego_q_47);
  Tset(MakeInt(1));
  Ccall(_stratego_k_49);
  Tpop();
ENDPROC

PROC(_stratego_u_47)
  Epushd(0,5);
  MoveTop(0,1);
  goto t_65;
  t_65 :
  TestFunFC(s_2,&&b_20,Egetd(0,1));
  Rpush(a_20);
  goto q_65;
  b_20 :
  TestFunFC(t_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto u_65;
  u_65 :
  TestFunFC(s_2,&&c_20,Egetd(0,3));
  Rpush(a_20);
  goto r_65;
  c_20 :
  TestFunFC(t_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(a_20);
  goto s_65;
  a_20 :
  goto z_19;
  s_65 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Cons",ATmakeString("variables "),App2("Cons",App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),Egetd(0,5))),App2("Cons",ATmakeString(": declared, but not bound"),App0("Nil")))));
  Return();
  z_19 :
  goto y_19;
  r_65 :
  NotNULLd(0,2);
  Tset(App2("Cons",ATmakeString("variable "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(": declared, but not bound"),App0("Nil")))));
  Return();
  y_19 :
  goto x_19;
  q_65 :
  Tset(App0("Nil"));
  Return();
  x_19 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_47)
  Epushd(0,5);
  MoveTop(0,1);
  goto h_66;
  h_66 :
  TestFunFC(s_2,&&j_20,Egetd(0,1));
  Rpush(i_20);
  goto e_66;
  j_20 :
  TestFunFC(t_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_66;
  i_66 :
  TestFunFC(s_2,&&k_20,Egetd(0,3));
  Rpush(i_20);
  goto f_66;
  k_20 :
  TestFunFC(t_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(i_20);
  goto g_66;
  i_20 :
  goto h_20;
  g_66 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Cons",ATmakeString("variables "),App2("Cons",App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),Egetd(0,5))),App2("Cons",ATmakeString(": used, but not bound"),App0("Nil")))));
  Return();
  h_20 :
  goto g_20;
  f_66 :
  NotNULLd(0,2);
  Tset(App2("Cons",ATmakeString("variable "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(": used, but not bound"),App0("Nil")))));
  Return();
  g_20 :
  goto f_20;
  e_66 :
  Tset(App0("Nil"));
  Return();
  f_20 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_w_47)
  Epushd(0,4);
  MoveTop(0,1);
  goto t_67;
  t_67 :
  TestFunFC(q_20,&&p_20,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(o_20);
  goto s_66;
  p_20 :
  TestFunFC(u_6,&&r_20,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(o_20);
  goto t_66;
  r_20 :
  TestFunFC(s_20,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(o_20);
  goto u_66;
  o_20 :
  goto n_20;
  u_66 :
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(t_20);
  i_70 :
  Cpush(v_20);
  Ccall(_stratego_q_49);
  goto u_20;
  v_20 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  goto o_67;
  o_67 :
  TestFunFC(c_7,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_67;
  p_67 :
  TestFunFC(c_7,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_67;
  q_67 :
  TestFunFC(c_7,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto r_67;
  r_67 :
  TestFunFC(d_7,&&fail,Egetd(2,7));
  Rpush(y_20);
  goto l_67;
  y_20 :
  goto x_20;
  l_67 :
  Epushd(3,2);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_v_47);
  MoveTop(3,1);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Ccall(_stratego_u_47);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("Cons",Egetd(3,1),App2("Cons",Egetd(3,2),App0("Nil"))));
  Ccall(_stratego_v_48);
  Epopd(3,2);
  Return();
  x_20 :
  Epopd(2,7);
  OneNextSon();
  Rpush(d_21);
  goto i_70;
  d_21 :
  AllBuild();
  goto w_20;
  u_20 :
  Cpop();
  w_20 :
  Return();
  t_20 :
  Ccall(_stratego_v_48);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("error in overlay "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" : "),Egetd(1,1)))));
  Epopd(1,1);
  Return();
  n_20 :
  goto m_20;
  t_66 :
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(e_21);
  h_70 :
  Cpush(g_21);
  Ccall(_stratego_q_49);
  goto f_21;
  g_21 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  goto g_67;
  g_67 :
  TestFunFC(c_7,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto h_67;
  h_67 :
  TestFunFC(c_7,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto i_67;
  i_67 :
  TestFunFC(c_7,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto j_67;
  j_67 :
  TestFunFC(d_7,&&fail,Egetd(2,7));
  Rpush(j_21);
  goto d_67;
  j_21 :
  goto i_21;
  d_67 :
  Epushd(3,2);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_v_47);
  MoveTop(3,1);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Ccall(_stratego_u_47);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("Cons",Egetd(3,1),App2("Cons",Egetd(3,2),App0("Nil"))));
  Ccall(_stratego_v_48);
  Epopd(3,2);
  Return();
  i_21 :
  Epopd(2,7);
  OneNextSon();
  Rpush(k_21);
  goto h_70;
  k_21 :
  AllBuild();
  goto h_21;
  f_21 :
  Cpop();
  h_21 :
  Return();
  e_21 :
  Ccall(_stratego_v_48);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("error in definition "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" : "),Egetd(1,1)))));
  Epopd(1,1);
  Return();
  m_20 :
  goto l_20;
  s_66 :
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(l_21);
  g_70 :
  Cpush(n_21);
  Ccall(_stratego_q_49);
  goto m_21;
  n_21 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  goto y_66;
  y_66 :
  TestFunFC(c_7,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto z_66;
  z_66 :
  TestFunFC(c_7,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto a_67;
  a_67 :
  TestFunFC(c_7,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto b_67;
  b_67 :
  TestFunFC(d_7,&&fail,Egetd(2,7));
  Rpush(q_21);
  goto v_66;
  q_21 :
  goto p_21;
  v_66 :
  Epushd(3,2);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_v_47);
  MoveTop(3,1);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Ccall(_stratego_u_47);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("Cons",Egetd(3,1),App2("Cons",Egetd(3,2),App0("Nil"))));
  Ccall(_stratego_v_48);
  Epopd(3,2);
  Return();
  p_21 :
  Epopd(2,7);
  OneNextSon();
  Rpush(r_21);
  goto g_70;
  r_21 :
  AllBuild();
  goto o_21;
  m_21 :
  Cpop();
  o_21 :
  Return();
  l_21 :
  Ccall(_stratego_v_48);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("error in rule "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" : "),Egetd(1,1)))));
  Epopd(1,1);
  Return();
  l_20 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_x_47)
  Ccall(_stratego_w_47);
  Ccall(_stratego_r_47);
ENDPROC

PROC(_stratego_y_47)
  _ST_explode_term();
ENDPROC

PROC(_stratego_z_47)
  Epushd(0,5);
  Ccall(_stratego_y_47);
  MoveTop(0,1);
  goto q_72;
  q_72 :
  TestFunFC(c_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_72;
  r_72 :
  TestFunFC(c_7,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(t_21);
  goto j_70;
  t_21 :
  goto s_21;
  j_70 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(x_21);
  j_77 :
  Cpush(z_21);
  Ccall(_stratego_q_49);
  Tset(App2("Cons",App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil")))),App0("Nil")));
  goto y_21;
  z_21 :
  Epushd(1,3);
  MoveTop(1,1);
  goto p_72;
  p_72 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(c_22);
  goto k_70;
  c_22 :
  goto b_22;
  k_70 :
  Epushd(2,5);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(e_22);
  goto j_77;
  e_22 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto m_72;
  m_72 :
  TestFunFC(c_7,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_72;
  n_72 :
  TestFunFC(c_7,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_72;
  o_72 :
  TestFunFC(d_7,&&fail,Egetd(2,5));
  Rpush(f_22);
  goto l_70;
  f_22 :
  goto d_22;
  l_70 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(g_22);
  k_77 :
  Cpush(i_22);
  Ccall(_stratego_q_49);
  goto h_22;
  i_22 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(k_22);
  l_77 :
  Cpush(m_22);
  Ccall(_stratego_q_49);
  goto l_22;
  m_22 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(4,18);
  MoveTop(4,1);
  NotNULLd(3,1);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto r_71;
  r_71 :
  TestFunFC(c_7,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,10,4,2,1);
  goto s_71;
  s_71 :
  TestFunFC(c_7,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto t_71;
  t_71 :
  TestFunFC(c_7,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto u_71;
  u_71 :
  TestFunFC(c_7,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  MoveArg(4,9,4,7,1);
  goto v_71;
  v_71 :
  TestFunFC(d_7,&&fail,Egetd(4,9));
  goto w_71;
  w_71 :
  TestFunFC(c_7,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,18,4,10,1);
  goto x_71;
  x_71 :
  TestFunFC(c_7,&&fail,Egetd(4,11));
  MoveArg(4,12,4,11,0);
  MoveArg(4,13,4,11,1);
  goto y_71;
  y_71 :
  TestFunFC(c_7,&&fail,Egetd(4,13));
  MoveArg(4,14,4,13,0);
  MoveArg(4,15,4,13,1);
  goto z_71;
  z_71 :
  TestFunFC(c_7,&&fail,Egetd(4,15));
  MoveArg(4,16,4,15,0);
  MoveArg(4,17,4,15,1);
  goto a_72;
  a_72 :
  TestFunFC(d_7,&&fail,Egetd(4,17));
  goto b_72;
  b_72 :
  TestFunFC(d_7,&&fail,Egetd(4,18));
  Rpush(q_22);
  goto o_70;
  q_22 :
  goto p_22;
  o_70 :
  Epushd(5,5);
  NotNULLd(4,4);
  NotNULLd(4,12);
  Tset(App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,12),App0("TNil"))));
  MoveTop(5,1);
  goto o_71;
  o_71 :
  TestFunFC(c_7,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto p_71;
  p_71 :
  TestFunFC(c_7,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto q_71;
  q_71 :
  TestFunFC(d_7,&&fail,Egetd(5,5));
  Rpush(v_22);
  goto p_70;
  v_22 :
  goto r_22;
  p_70 :
  Epushd(6,6);
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Rpush(w_22);
  m_77 :
  Cpush(y_22);
  Ccall(_stratego_q_49);
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  goto x_22;
  y_22 :
  Ccontinue(z_22);
  Epushd(7,3);
  MoveTop(7,1);
  goto t_70;
  t_70 :
  TestFunFC(t_2,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(b_23);
  goto q_70;
  b_23 :
  goto a_23;
  q_70 :
  Tdupl();
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  Rpush(c_23);
  n_77 :
  Cpush(e_23);
  Epushd(8,3);
  MoveTop(8,1);
  goto s_70;
  s_70 :
  TestFunFC(t_2,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(g_23);
  goto r_70;
  g_23 :
  goto f_23;
  r_70 :
  Move(7,2,8,2);
  Return();
  f_23 :
  Epopd(8,3);
  goto d_23;
  e_23 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_23);
  goto n_77;
  i_23 :
  AllBuild();
  goto h_23;
  d_23 :
  Cpop();
  h_23 :
  Return();
  c_23 :
  Tpop();
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(j_23);
  goto m_77;
  j_23 :
  Return();
  a_23 :
  Epopd(7,3);
  goto x_22;
  z_22 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_23);
  goto m_77;
  w_23 :
  AllBuild();
  goto p_23;
  x_22 :
  Cpop();
  p_23 :
  Return();
  w_22 :
  MoveTop(6,1);
  NotNULLd(4,6);
  NotNULLd(4,14);
  Tset(App2("TCons",Egetd(4,6),App2("TCons",Egetd(4,14),App0("TNil"))));
  MoveTop(6,2);
  goto l_71;
  l_71 :
  TestFunFC(c_7,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto m_71;
  m_71 :
  TestFunFC(c_7,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto n_71;
  n_71 :
  TestFunFC(d_7,&&fail,Egetd(6,6));
  Rpush(z_23);
  goto v_70;
  z_23 :
  goto y_23;
  v_70 :
  Epushd(7,6);
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Rpush(a_24);
  o_77 :
  Cpush(c_24);
  Ccall(_stratego_q_49);
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  goto b_24;
  c_24 :
  Ccontinue(d_24);
  Epushd(8,3);
  MoveTop(8,1);
  goto z_70;
  z_70 :
  TestFunFC(t_2,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(i_24);
  goto w_70;
  i_24 :
  goto e_24;
  w_70 :
  Tdupl();
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  Rpush(j_24);
  p_77 :
  Cpush(l_24);
  Epushd(9,3);
  MoveTop(9,1);
  goto y_70;
  y_70 :
  TestFunFC(t_2,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(o_24);
  goto x_70;
  o_24 :
  goto m_24;
  x_70 :
  Move(8,2,9,2);
  Return();
  m_24 :
  Epopd(9,3);
  goto k_24;
  l_24 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_24);
  goto p_77;
  q_24 :
  AllBuild();
  goto p_24;
  k_24 :
  Cpop();
  p_24 :
  Return();
  j_24 :
  Tpop();
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(s_24);
  goto o_77;
  s_24 :
  Return();
  e_24 :
  Epopd(8,3);
  goto b_24;
  d_24 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_24);
  goto o_77;
  u_24 :
  AllBuild();
  goto t_24;
  b_24 :
  Cpop();
  t_24 :
  Return();
  a_24 :
  MoveTop(7,1);
  NotNULLd(4,8);
  NotNULLd(4,16);
  Tset(App2("TCons",Egetd(4,8),App2("TCons",Egetd(4,16),App0("TNil"))));
  MoveTop(7,2);
  goto i_71;
  i_71 :
  TestFunFC(c_7,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto j_71;
  j_71 :
  TestFunFC(c_7,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto k_71;
  k_71 :
  TestFunFC(d_7,&&fail,Egetd(7,6));
  Rpush(w_24);
  goto c_71;
  w_24 :
  goto v_24;
  c_71 :
  Epushd(8,1);
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(x_24);
  q_77 :
  Cpush(a_25);
  Ccall(_stratego_q_49);
  NotNULLd(7,5);
  Tset(Egetd(7,5));
  goto z_24;
  a_25 :
  Ccontinue(b_25);
  Epushd(9,3);
  MoveTop(9,1);
  goto g_71;
  g_71 :
  TestFunFC(t_2,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(d_25);
  goto d_71;
  d_25 :
  goto c_25;
  d_71 :
  Tdupl();
  NotNULLd(7,5);
  Tset(Egetd(7,5));
  Rpush(i_25);
  r_77 :
  Cpush(k_25);
  Epushd(10,3);
  MoveTop(10,1);
  goto f_71;
  f_71 :
  TestFunFC(t_2,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(m_25);
  goto e_71;
  m_25 :
  goto l_25;
  e_71 :
  Move(9,2,10,2);
  Return();
  l_25 :
  Epopd(10,3);
  goto j_25;
  k_25 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_25);
  goto r_77;
  o_25 :
  AllBuild();
  goto n_25;
  j_25 :
  Cpop();
  n_25 :
  Return();
  i_25 :
  Tpop();
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(p_25);
  goto q_77;
  p_25 :
  Return();
  c_25 :
  Epopd(9,3);
  goto z_24;
  b_25 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_25);
  goto q_77;
  r_25 :
  AllBuild();
  goto q_25;
  z_24 :
  Cpop();
  q_25 :
  Return();
  x_24 :
  MoveTop(8,1);
  NotNULLd(6,1);
  NotNULLd(7,1);
  NotNULLd(8,1);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",Egetd(7,1),App2("TCons",Egetd(8,1),App0("TNil")))));
  Epopd(8,1);
  Return();
  v_24 :
  Epopd(7,6);
  Return();
  y_23 :
  Epopd(6,6);
  Return();
  r_22 :
  Epopd(5,5);
  Return();
  p_22 :
  Epopd(4,18);
  OneNextSon();
  Rpush(s_25);
  goto l_77;
  s_25 :
  AllBuild();
  goto n_22;
  l_22 :
  Cpop();
  n_22 :
  Return();
  k_22 :
  Epopd(3,1);
  OneNextSon();
  Rpush(t_25);
  goto k_77;
  t_25 :
  AllBuild();
  goto j_22;
  h_22 :
  Cpop();
  j_22 :
  Return();
  g_22 :
  Rpush(u_25);
  s_77 :
  Cpush(w_25);
  Ccall(_stratego_q_49);
  Tset(App0("Nil"));
  goto v_25;
  w_25 :
  Epushd(3,3);
  MoveTop(3,1);
  goto l_72;
  l_72 :
  TestFunFC(t_2,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(z_25);
  goto c_72;
  z_25 :
  goto y_25;
  c_72 :
  Epushd(4,5);
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(3,3),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(b_26);
  goto s_77;
  b_26 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(4,1);
  goto i_72;
  i_72 :
  TestFunFC(c_7,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto j_72;
  j_72 :
  TestFunFC(c_7,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto k_72;
  k_72 :
  TestFunFC(d_7,&&fail,Egetd(4,5));
  Rpush(c_26);
  goto d_72;
  c_26 :
  goto a_26;
  d_72 :
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Rpush(d_26);
  t_77 :
  Cpush(f_26);
  Ccall(_stratego_q_49);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  goto e_26;
  f_26 :
  Ccontinue(g_26);
  Epushd(5,3);
  MoveTop(5,1);
  goto h_72;
  h_72 :
  TestFunFC(t_2,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(i_26);
  goto e_72;
  i_26 :
  goto h_26;
  e_72 :
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(j_26);
  u_77 :
  Cpush(l_26);
  Epushd(6,3);
  MoveTop(6,1);
  goto g_72;
  g_72 :
  TestFunFC(t_2,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(o_26);
  goto f_72;
  o_26 :
  goto m_26;
  f_72 :
  Move(5,2,6,2);
  Return();
  m_26 :
  Epopd(6,3);
  goto k_26;
  l_26 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_26);
  goto u_77;
  u_26 :
  AllBuild();
  goto t_26;
  k_26 :
  Cpop();
  t_26 :
  Return();
  j_26 :
  Tpop();
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(y_26);
  goto t_77;
  y_26 :
  Return();
  h_26 :
  Epopd(5,3);
  goto e_26;
  g_26 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_27);
  goto t_77;
  a_27 :
  AllBuild();
  goto z_26;
  e_26 :
  Cpop();
  z_26 :
  Return();
  d_26 :
  Return();
  a_26 :
  Epopd(4,5);
  Return();
  y_25 :
  Epopd(3,3);
  goto x_25;
  v_25 :
  Cpop();
  x_25 :
  Return();
  u_25 :
  Return();
  d_22 :
  Epopd(2,5);
  Return();
  b_22 :
  Epopd(1,3);
  goto a_22;
  y_21 :
  Cpop();
  a_22 :
  Return();
  x_21 :
  Return();
  s_21 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_a_48)
  Rpush(b_27);
  j_84 :
  Cpush(e_27);
  Ccall(_stratego_q_49);
  Tset(App2("Cons",App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil")))),App0("Nil")));
  goto c_27;
  e_27 :
  Epushd(0,3);
  MoveTop(0,1);
  goto a_80;
  a_80 :
  TestFunFC(t_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(h_27);
  goto v_77;
  h_27 :
  goto g_27;
  v_77 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(j_27);
  goto j_84;
  j_27 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto x_79;
  x_79 :
  TestFunFC(c_7,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_79;
  y_79 :
  TestFunFC(c_7,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_79;
  z_79 :
  TestFunFC(d_7,&&fail,Egetd(1,5));
  Rpush(k_27);
  goto w_77;
  k_27 :
  goto i_27;
  w_77 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(l_27);
  k_84 :
  Cpush(n_27);
  Ccall(_stratego_q_49);
  goto m_27;
  n_27 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(p_27);
  l_84 :
  Cpush(t_27);
  Ccall(_stratego_q_49);
  goto q_27;
  t_27 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(3,18);
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(3,2);
  goto c_79;
  c_79 :
  TestFunFC(c_7,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,10,3,2,1);
  goto d_79;
  d_79 :
  TestFunFC(c_7,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto e_79;
  e_79 :
  TestFunFC(c_7,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto f_79;
  f_79 :
  TestFunFC(c_7,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto g_79;
  g_79 :
  TestFunFC(d_7,&&fail,Egetd(3,9));
  goto h_79;
  h_79 :
  TestFunFC(c_7,&&fail,Egetd(3,10));
  MoveArg(3,11,3,10,0);
  MoveArg(3,18,3,10,1);
  goto i_79;
  i_79 :
  TestFunFC(c_7,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto j_79;
  j_79 :
  TestFunFC(c_7,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto k_79;
  k_79 :
  TestFunFC(c_7,&&fail,Egetd(3,15));
  MoveArg(3,16,3,15,0);
  MoveArg(3,17,3,15,1);
  goto l_79;
  l_79 :
  TestFunFC(d_7,&&fail,Egetd(3,17));
  goto m_79;
  m_79 :
  TestFunFC(d_7,&&fail,Egetd(3,18));
  Rpush(w_27);
  goto z_77;
  w_27 :
  goto v_27;
  z_77 :
  Epushd(4,6);
  NotNULLd(3,12);
  NotNULLd(3,6);
  Tset(App2("TCons",Egetd(3,12),App2("TCons",Egetd(3,6),App0("TNil"))));
  Ccall(_stratego_k_48);
  MoveTop(4,1);
  NotNULLd(3,4);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,4),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto z_78;
  z_78 :
  TestFunFC(c_7,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto a_79;
  a_79 :
  TestFunFC(c_7,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto b_79;
  b_79 :
  TestFunFC(d_7,&&fail,Egetd(4,6));
  Rpush(y_27);
  goto b_78;
  y_27 :
  goto x_27;
  b_78 :
  Epushd(5,6);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(a_28);
  m_84 :
  Cpush(c_28);
  Ccall(_stratego_q_49);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto b_28;
  c_28 :
  Ccontinue(d_28);
  Epushd(6,3);
  MoveTop(6,1);
  goto f_78;
  f_78 :
  TestFunFC(t_2,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(f_28);
  goto c_78;
  f_28 :
  goto e_28;
  c_78 :
  Tdupl();
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  Rpush(g_28);
  n_84 :
  Cpush(i_28);
  Epushd(7,3);
  MoveTop(7,1);
  goto e_78;
  e_78 :
  TestFunFC(t_2,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(k_28);
  goto d_78;
  k_28 :
  goto j_28;
  d_78 :
  Move(6,2,7,2);
  Return();
  j_28 :
  Epopd(7,3);
  goto h_28;
  i_28 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_28);
  goto n_84;
  m_28 :
  AllBuild();
  goto l_28;
  h_28 :
  Cpop();
  l_28 :
  Return();
  g_28 :
  Tpop();
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Rpush(n_28);
  goto m_84;
  n_28 :
  Return();
  e_28 :
  Epopd(6,3);
  goto b_28;
  d_28 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_28);
  goto m_84;
  p_28 :
  AllBuild();
  goto o_28;
  b_28 :
  Cpop();
  o_28 :
  Return();
  a_28 :
  MoveTop(5,1);
  NotNULLd(3,6);
  NotNULLd(3,14);
  Tset(App2("TCons",Egetd(3,6),App2("TCons",Egetd(3,14),App0("TNil"))));
  MoveTop(5,2);
  goto w_78;
  w_78 :
  TestFunFC(c_7,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto x_78;
  x_78 :
  TestFunFC(c_7,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto y_78;
  y_78 :
  TestFunFC(d_7,&&fail,Egetd(5,6));
  Rpush(r_28);
  goto h_78;
  r_28 :
  goto q_28;
  h_78 :
  Epushd(6,6);
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(s_28);
  o_84 :
  Cpush(u_28);
  Ccall(_stratego_q_49);
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  goto t_28;
  u_28 :
  Ccontinue(v_28);
  Epushd(7,3);
  MoveTop(7,1);
  goto l_78;
  l_78 :
  TestFunFC(t_2,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(x_28);
  goto i_78;
  x_28 :
  goto w_28;
  i_78 :
  Tdupl();
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  Rpush(y_28);
  p_84 :
  Cpush(a_29);
  Epushd(8,3);
  MoveTop(8,1);
  goto k_78;
  k_78 :
  TestFunFC(t_2,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(c_29);
  goto j_78;
  c_29 :
  goto b_29;
  j_78 :
  Move(7,2,8,2);
  Return();
  b_29 :
  Epopd(8,3);
  goto z_28;
  a_29 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_29);
  goto p_84;
  f_29 :
  AllBuild();
  goto e_29;
  z_28 :
  Cpop();
  e_29 :
  Return();
  y_28 :
  Tpop();
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(h_29);
  goto o_84;
  h_29 :
  Return();
  w_28 :
  Epopd(7,3);
  goto t_28;
  v_28 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_29);
  goto o_84;
  j_29 :
  AllBuild();
  goto i_29;
  t_28 :
  Cpop();
  i_29 :
  Return();
  s_28 :
  MoveTop(6,1);
  NotNULLd(3,8);
  NotNULLd(3,16);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,16),App0("TNil"))));
  MoveTop(6,2);
  goto t_78;
  t_78 :
  TestFunFC(c_7,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto u_78;
  u_78 :
  TestFunFC(c_7,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto v_78;
  v_78 :
  TestFunFC(d_7,&&fail,Egetd(6,6));
  Rpush(l_29);
  goto n_78;
  l_29 :
  goto k_29;
  n_78 :
  Epushd(7,1);
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Rpush(o_29);
  q_84 :
  Cpush(q_29);
  Ccall(_stratego_q_49);
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  goto p_29;
  q_29 :
  Ccontinue(r_29);
  Epushd(8,3);
  MoveTop(8,1);
  goto r_78;
  r_78 :
  TestFunFC(t_2,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(t_29);
  goto o_78;
  t_29 :
  goto s_29;
  o_78 :
  Tdupl();
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  Rpush(u_29);
  r_84 :
  Cpush(b_30);
  Epushd(9,3);
  MoveTop(9,1);
  goto q_78;
  q_78 :
  TestFunFC(t_2,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(j_30);
  goto p_78;
  j_30 :
  goto f_30;
  p_78 :
  Move(8,2,9,2);
  Return();
  f_30 :
  Epopd(9,3);
  goto a_30;
  b_30 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_30);
  goto r_84;
  l_30 :
  AllBuild();
  goto k_30;
  a_30 :
  Cpop();
  k_30 :
  Return();
  u_29 :
  Tpop();
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(m_30);
  goto q_84;
  m_30 :
  Return();
  s_29 :
  Epopd(8,3);
  goto p_29;
  r_29 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_30);
  goto q_84;
  o_30 :
  AllBuild();
  goto n_30;
  p_29 :
  Cpop();
  n_30 :
  Return();
  o_29 :
  MoveTop(7,1);
  NotNULLd(5,1);
  NotNULLd(6,1);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(6,1),App2("TCons",Egetd(7,1),App0("TNil")))));
  Epopd(7,1);
  Return();
  k_29 :
  Epopd(6,6);
  Return();
  q_28 :
  Epopd(5,6);
  Return();
  x_27 :
  Epopd(4,6);
  Return();
  v_27 :
  Epopd(3,18);
  OneNextSon();
  Rpush(p_30);
  goto l_84;
  p_30 :
  AllBuild();
  goto u_27;
  q_27 :
  Cpop();
  u_27 :
  Return();
  p_27 :
  Epopd(2,1);
  OneNextSon();
  Rpush(q_30);
  goto k_84;
  q_30 :
  AllBuild();
  goto o_27;
  m_27 :
  Cpop();
  o_27 :
  Return();
  l_27 :
  Rpush(r_30);
  s_84 :
  Cpush(t_30);
  Ccall(_stratego_q_49);
  Tset(App0("Nil"));
  goto s_30;
  t_30 :
  Epushd(2,3);
  MoveTop(2,1);
  goto w_79;
  w_79 :
  TestFunFC(t_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(b_31);
  goto n_79;
  b_31 :
  goto a_31;
  n_79 :
  Epushd(3,5);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(k_31);
  goto s_84;
  k_31 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto t_79;
  t_79 :
  TestFunFC(c_7,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto u_79;
  u_79 :
  TestFunFC(c_7,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto v_79;
  v_79 :
  TestFunFC(d_7,&&fail,Egetd(3,5));
  Rpush(l_31);
  goto o_79;
  l_31 :
  goto f_31;
  o_79 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Rpush(o_31);
  t_84 :
  Cpush(t_31);
  Ccall(_stratego_q_49);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  goto p_31;
  t_31 :
  Ccontinue(w_31);
  Epushd(4,3);
  MoveTop(4,1);
  goto s_79;
  s_79 :
  TestFunFC(t_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(z_31);
  goto p_79;
  z_31 :
  goto y_31;
  p_79 :
  Tdupl();
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(a_32);
  u_84 :
  Cpush(c_32);
  Epushd(5,3);
  MoveTop(5,1);
  goto r_79;
  r_79 :
  TestFunFC(t_2,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(e_32);
  goto q_79;
  e_32 :
  goto d_32;
  q_79 :
  Move(4,2,5,2);
  Return();
  d_32 :
  Epopd(5,3);
  goto b_32;
  c_32 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_32);
  goto u_84;
  n_32 :
  AllBuild();
  goto f_32;
  b_32 :
  Cpop();
  f_32 :
  Return();
  a_32 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(o_32);
  goto t_84;
  o_32 :
  Return();
  y_31 :
  Epopd(4,3);
  goto p_31;
  w_31 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_32);
  goto t_84;
  q_32 :
  AllBuild();
  goto p_32;
  p_31 :
  Cpop();
  p_32 :
  Return();
  o_31 :
  Return();
  f_31 :
  Epopd(3,5);
  Return();
  a_31 :
  Epopd(2,3);
  goto u_30;
  s_30 :
  Cpop();
  u_30 :
  Return();
  r_30 :
  Return();
  i_27 :
  Epopd(1,5);
  Return();
  g_27 :
  Epopd(0,3);
  goto f_27;
  c_27 :
  Cpop();
  f_27 :
  Return();
  b_27 :
ENDPROC

PROC(_stratego_b_48)
  Epushd(0,4);
  MoveTop(0,1);
  goto a_86;
  a_86 :
  TestFunFC(q_2,&&g_33,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_33);
  goto v_84;
  g_33 :
  TestFunFC(k_33,&&h_33,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_33);
  goto w_84;
  h_33 :
  TestFunFC(n_4,&&l_33,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(d_33);
  goto x_84;
  l_33 :
  TestFunFC(o_4,&&m_33,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(d_33);
  goto y_84;
  m_33 :
  TestFunFC(g_3,&&n_33,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_33);
  goto z_84;
  n_33 :
  TestFunFC(i_3,&&o_33,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_33);
  goto a_85;
  o_33 :
  TestFunFC(e_3,&&p_33,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_33);
  goto b_85;
  p_33 :
  TestFunFC(j_3,&&q_33,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(d_33);
  goto c_85;
  q_33 :
  TestFunFC(s_33,&&r_33,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_33);
  goto d_85;
  r_33 :
  TestFunFC(t_5,&&t_33,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_33);
  goto e_85;
  t_33 :
  TestFunFC(s_20,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(d_33);
  goto f_85;
  d_33 :
  goto c_33;
  f_85 :
  Epushd(1,1);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("Cons",App2("TCons",App0("Nil"),App2("TCons",Egetd(0,3),App2("TCons",App0("Nil"),App0("TNil")))),App2("Cons",Egetd(0,4),App0("Nil"))));
  Ccall(_stratego_a_48);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(1,1);
  Tset(App3("Overlay",Egetd(0,2),Egetd(0,3),Egetd(1,1)));
  Epopd(1,1);
  Return();
  c_33 :
  goto b_33;
  e_85 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(u_33);
  q_88 :
  Cpush(w_33);
  Ccall(_stratego_q_49);
  goto v_33;
  w_33 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  goto v_85;
  v_85 :
  TestFunFC(c_7,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_85;
  w_85 :
  TestFunFC(c_7,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto x_85;
  x_85 :
  TestFunFC(c_7,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto y_85;
  y_85 :
  TestFunFC(d_7,&&fail,Egetd(1,7));
  Rpush(c_34);
  goto g_85;
  c_34 :
  goto b_34;
  g_85 :
  Epushd(2,11);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  NotNULLd(1,4);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_k_48);
  MoveTop(2,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  NotNULLd(1,2);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,2),App0("TNil"))));
  MoveTop(2,2);
  goto n_85;
  n_85 :
  TestFunFC(c_7,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto o_85;
  o_85 :
  TestFunFC(c_7,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto p_85;
  p_85 :
  TestFunFC(d_7,&&fail,Egetd(2,6));
  Rpush(g_34);
  goto k_85;
  g_34 :
  goto f_34;
  k_85 :
  Epushd(3,2);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App0("TNil"))));
  Ccall(_stratego_k_48);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_k_48);
  MoveTop(3,2);
  NotNULLd(3,2);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(1,6),App0("TNil"))));
  Epopd(3,2);
  Return();
  f_34 :
  MoveTop(2,7);
  goto s_85;
  s_85 :
  TestFunFC(c_7,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto t_85;
  t_85 :
  TestFunFC(c_7,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto u_85;
  u_85 :
  TestFunFC(d_7,&&fail,Egetd(2,11));
  Rpush(m_34);
  goto q_85;
  m_34 :
  goto e_34;
  q_85 :
  Epushd(3,1);
  NotNULLd(2,8);
  Tset(Egetd(2,8));
  Rpush(n_34);
  r_88 :
  Cpush(q_34);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_34);
  goto r_88;
  r_34 :
  AllBuild();
  goto p_34;
  q_34 :
  Ccall(_stratego_q_49);
  NotNULLd(2,10);
  Tset(Egetd(2,10));
  goto s_34;
  p_34 :
  Cpop();
  s_34 :
  Return();
  n_34 :
  MoveTop(3,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil")))));
  Epopd(3,1);
  Return();
  e_34 :
  Epopd(2,11);
  Return();
  b_34 :
  Epopd(1,7);
  OneNextSon();
  Rpush(t_34);
  goto q_88;
  t_34 :
  AllBuild();
  goto a_34;
  v_33 :
  Cpop();
  a_34 :
  Return();
  u_33 :
  Return();
  b_33 :
  goto a_33;
  d_85 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_a_48);
  Return();
  a_33 :
  goto z_32;
  c_85 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),App0("Nil")))));
  Ccall(_stratego_a_48);
  Return();
  z_32 :
  goto y_32;
  b_85 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,2),App0("Nil"))));
  Ccall(_stratego_a_48);
  Return();
  y_32 :
  goto x_32;
  a_85 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,3),App0("Nil"))));
  Ccall(_stratego_a_48);
  Return();
  x_32 :
  goto v_32;
  z_84 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,3),App0("Nil"))));
  Ccall(_stratego_a_48);
  Return();
  v_32 :
  goto u_32;
  y_84 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),App2("Cons",Egetd(0,3),App0("Nil")))));
  Ccall(_stratego_a_48);
  Return();
  u_32 :
  goto t_32;
  x_84 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),App2("Cons",Egetd(0,3),App0("Nil")))));
  Ccall(_stratego_a_48);
  Return();
  t_32 :
  goto s_32;
  w_84 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,3),App0("Nil"))));
  Ccall(_stratego_a_48);
  Return();
  s_32 :
  goto r_32;
  v_84 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_a_48);
  Return();
  r_32 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_c_48)
  Epushd(0,2);
  MoveTop(0,1);
  Ccall(_stratego_l_48);
  MoveTop(0,2);
  NotNULLd(0,2);
  Tset(App2("Cons",App2("TCons",Egetd(0,2),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil")))),App0("Nil")));
  Epopd(0,2);
ENDPROC

PROC(_stratego_d_48)
  Epushd(0,2);
  MoveTop(0,1);
  Ccall(_stratego_l_48);
  MoveTop(0,2);
  NotNULLd(0,2);
  Tset(App2("Cons",App2("TCons",App0("Nil"),App2("TCons",Egetd(0,2),App2("TCons",App0("Nil"),App0("TNil")))),App0("Nil")));
  Epopd(0,2);
ENDPROC

PROC(_stratego_e_48)
  Rpush(u_34);
  e_89 :
  Cpush(w_34);
  Cpush(z_34);
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_48);
  AllBuild();
  goto x_34;
  z_34 :
  Ccontinue(a_35);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_48);
  AllBuild();
  goto x_34;
  a_35 :
  Ccontinue(b_35);
  TestFunTop(g_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_48);
  OneNextSon();
  Rpush(c_35);
  goto e_89;
  c_35 :
  AllBuild();
  goto x_34;
  b_35 :
  Ccontinue(d_35);
  TestFunTop(i_3);
  TravInit();
  OneNextSon();
  Rpush(e_35);
  goto e_89;
  e_35 :
  OneNextSon();
  Ccall(_stratego_d_48);
  AllBuild();
  goto x_34;
  d_35 :
  Ccontinue(f_35);
  TestFunTop(e_3);
  TravInit();
  OneNextSon();
  Rpush(g_35);
  goto e_89;
  g_35 :
  OneNextSon();
  Ccall(_stratego_c_48);
  AllBuild();
  goto x_34;
  f_35 :
  Ccontinue(i_35);
  TestFunTop(j_3);
  TravInit();
  OneNextSon();
  Rpush(j_35);
  goto e_89;
  j_35 :
  OneNextSon();
  Ccall(_stratego_c_48);
  OneNextSon();
  Ccall(_stratego_d_48);
  AllBuild();
  goto x_34;
  i_35 :
  Ccontinue(l_35);
  TestFunTop(t_5);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_35);
  goto e_89;
  m_35 :
  AllBuild();
  goto x_34;
  l_35 :
  Ccontinue(n_35);
  TestFunTop(n_4);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_48);
  OneNextSon();
  Ccall(_stratego_c_48);
  OneNextSon();
  Rpush(o_35);
  goto e_89;
  o_35 :
  AllBuild();
  goto x_34;
  n_35 :
  Ccontinue(p_35);
  TestFunTop(s_20);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_48);
  AllBuild();
  goto x_34;
  p_35 :
  TestFunTop(s_33);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_35);
  f_89 :
  Cpush(w_35);
  Ccall(_stratego_q_49);
  goto v_35;
  w_35 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Rpush(y_35);
  goto e_89;
  y_35 :
  OneNextSon();
  Rpush(z_35);
  goto f_89;
  z_35 :
  AllBuild();
  goto x_35;
  v_35 :
  Cpop();
  x_35 :
  Return();
  u_35 :
  AllBuild();
  goto t_35;
  x_34 :
  Cpop();
  t_35 :
  goto v_34;
  w_34 :
  AllInit();
  b_36 :
  AllNextSon(&&c_36);
  Rpush(d_36);
  goto e_89;
  d_36 :
  goto b_36;
  c_36 :
  AllBuild();
  goto a_36;
  v_34 :
  Cpop();
  a_36 :
  Cpush(g_36);
  Ccall(_stratego_b_48);
  goto f_36;
  g_36 :
  Ccall(_stratego_z_47);
  goto j_36;
  f_36 :
  Cpop();
  j_36 :
  Return();
  u_34 :
ENDPROC

PROC(_stratego_f_48)
  Cpush(l_36);
  TestFunTop(u_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_48);
  Cpush(n_36);
  Tdupl();
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_49);
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_49);
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_q_49);
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  n_36 :
  AllBuild();
  Ccall(_stratego_x_47);
  goto k_36;
  l_36 :
  Ccontinue(o_36);
  TestFunTop(q_20);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_48);
  Cpush(p_36);
  Tdupl();
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_49);
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_49);
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_q_49);
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  p_36 :
  AllBuild();
  Ccall(_stratego_x_47);
  goto k_36;
  o_36 :
  Epushd(0,4);
  MoveTop(0,1);
  goto h_89;
  h_89 :
  TestFunFC(s_20,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(s_36);
  goto g_89;
  s_36 :
  goto r_36;
  g_89 :
  Ccall(_stratego_e_48);
  Cpush(t_36);
  Tdupl();
  TestFunTop(s_20);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_49);
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_49);
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_49);
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_q_49);
  AllBuild();
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  t_36 :
  Ccall(_stratego_x_47);
  Return();
  r_36 :
  Epopd(0,4);
  goto q_36;
  k_36 :
  Cpop();
  q_36 :
ENDPROC

PROC(_stratego_g_48)
  Epushd(0,1);
  Rpush(v_36);
  w_89 :
  Cpush(x_36);
  Ccall(_stratego_q_49);
  goto w_36;
  x_36 :
  Ccontinue(y_36);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_48);
  OneNextSon();
  Rpush(z_36);
  goto w_89;
  z_36 :
  AllBuild();
  goto w_36;
  y_36 :
  Epushd(1,3);
  MoveTop(1,1);
  goto n_89;
  n_89 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(c_37);
  goto m_89;
  c_37 :
  goto b_37;
  m_89 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_37);
  goto w_89;
  d_37 :
  Return();
  b_37 :
  Epopd(1,3);
  goto a_37;
  w_36 :
  Cpop();
  a_37 :
  Return();
  v_36 :
  MoveTop(0,1);
  goto p_89;
  p_89 :
  TestFunFC(s_2,&&fail,Egetd(0,1));
  Rpush(e_37);
  goto o_89;
  e_37 :
  goto u_36;
  o_89 :
  Return();
  u_36 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_48)
  TestFunTop(g_37);
  TravInit();
  OneNextSon();
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  goto y_89;
  y_89 :
  TestFunFC(j_37,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_37);
  goto x_89;
  i_37 :
  goto h_37;
  x_89 :
  Return();
  h_37 :
  Epopd(0,2);
  OneNextSon();
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  TestFunTop(k_37);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_48);
  AllBuild();
  OneNextSon();
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  TestFunTop(l_37);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_48);
  AllBuild();
  OneNextSon();
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  TestFunTop(m_37);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_48);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_q_49);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_i_48)
  Epushd(0,6);
  MoveTop(0,2);
  goto d_90;
  d_90 :
  TestFunFC(t_5,&&t_37,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(s_37);
  goto b_90;
  t_37 :
  TestFunFC(u_37,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto e_90;
  e_90 :
  TestFunFC(n_4,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(s_37);
  goto c_90;
  s_37 :
  goto p_37;
  c_90 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_l_48);
  Return();
  p_37 :
  goto n_37;
  b_90 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  n_37 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_j_48)
  Epushd(0,7);
  MoveTop(0,1);
  goto s_91;
  s_91 :
  TestFunFC(t_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto t_91;
  t_91 :
  TestFunFC(c_7,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto u_91;
  u_91 :
  TestFunFC(c_7,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto v_91;
  v_91 :
  TestFunFC(d_7,&&fail,Egetd(0,6));
  Rpush(a_38);
  goto q_90;
  a_38 :
  goto z_37;
  q_90 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto s_90;
  s_90 :
  TestFunFC(c_7,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto t_90;
  t_90 :
  TestFunFC(c_7,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto u_90;
  u_90 :
  TestFunFC(d_7,&&fail,Egetd(2,5));
  Rpush(c_38);
  goto r_90;
  c_38 :
  goto b_38;
  r_90 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  b_38 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto w_90;
  w_90 :
  TestFunFC(c_7,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto x_90;
  x_90 :
  TestFunFC(c_7,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto y_90;
  y_90 :
  TestFunFC(d_7,&&fail,Egetd(2,5));
  Rpush(e_38);
  goto v_90;
  e_38 :
  goto d_38;
  v_90 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  d_38 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(f_38);
  w_93 :
  Epushd(2,9);
  MoveTop(2,1);
  goto f_91;
  f_91 :
  TestFunFC(c_7,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto g_91;
  g_91 :
  TestFunFC(s_2,&&l_38,Egetd(2,2));
  goto h_91;
  h_91 :
  TestFunFC(c_7,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto i_91;
  i_91 :
  TestFunFC(s_2,&&fail,Egetd(2,6));
  goto j_91;
  j_91 :
  TestFunFC(d_7,&&fail,Egetd(2,9));
  Rpush(k_38);
  goto z_90;
  l_38 :
  TestFunFC(t_2,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto k_91;
  k_91 :
  TestFunFC(c_7,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto l_91;
  l_91 :
  TestFunFC(t_2,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto m_91;
  m_91 :
  TestFunFC(d_7,&&fail,Egetd(2,9));
  Rpush(k_38);
  goto a_91;
  k_38 :
  goto j_38;
  a_91 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(n_38);
  goto w_93;
  n_38 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto c_91;
  c_91 :
  TestFunFC(c_7,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto d_91;
  d_91 :
  TestFunFC(c_7,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto e_91;
  e_91 :
  TestFunFC(d_7,&&fail,Egetd(3,5));
  Rpush(o_38);
  goto b_91;
  o_38 :
  goto m_38;
  b_91 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  m_38 :
  Epopd(3,5);
  Return();
  j_38 :
  goto i_38;
  z_90 :
  Tset(App0("Nil"));
  Return();
  i_38 :
  Epopd(2,9);
  Return();
  f_38 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto p_91;
  p_91 :
  TestFunFC(c_7,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto q_91;
  q_91 :
  TestFunFC(c_7,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto r_91;
  r_91 :
  TestFunFC(d_7,&&fail,Egetd(1,9));
  Rpush(q_38);
  goto o_91;
  q_38 :
  goto p_38;
  o_91 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(r_38);
  x_93 :
  Cpush(t_38);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_38);
  goto x_93;
  u_38 :
  AllBuild();
  goto s_38;
  t_38 :
  Ccall(_stratego_q_49);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto v_38;
  s_38 :
  Cpop();
  v_38 :
  Return();
  r_38 :
  Return();
  p_38 :
  Epopd(1,9);
  Return();
  z_37 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_k_48)
  Epushd(0,5);
  MoveTop(0,5);
  goto o_94;
  o_94 :
  TestFunFC(c_7,&&z_38,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto p_94;
  p_94 :
  TestFunFC(c_7,&&a_39,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_94;
  q_94 :
  TestFunFC(d_7,&&c_39,Egetd(0,4));
  Cpush(e_39);
  Rpush(f_39);
  goto y_93;
  f_39 :
  goto d_39;
  e_39 :
  Rpush(m_39);
  goto z_93;
  m_39 :
  goto l_39;
  d_39 :
  Cpop();
  l_39 :
  goto y_38;
  c_39 :
  Rpush(y_38);
  goto z_93;
  a_39 :
  Rpush(y_38);
  goto z_93;
  z_38 :
  Rpush(y_38);
  goto z_93;
  y_38 :
  goto x_38;
  z_93 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(o_39);
  c_96 :
  Cpush(v_39);
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Cpush(x_39);
  Epushd(1,7);
  MoveTop(1,1);
  goto f_94;
  f_94 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto g_94;
  g_94 :
  TestFunFC(c_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto h_94;
  h_94 :
  TestFunFC(c_7,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto i_94;
  i_94 :
  TestFunFC(d_7,&&fail,Egetd(1,6));
  Rpush(z_39);
  goto e_94;
  z_39 :
  goto y_39;
  e_94 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  y_39 :
  Epopd(1,7);
  goto w_39;
  x_39 :
  Ccall(_stratego_j_48);
  goto a_40;
  w_39 :
  Cpop();
  a_40 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  goto u_39;
  v_39 :
  Epushd(1,7);
  MoveTop(1,1);
  goto k_94;
  k_94 :
  TestFunFC(c_7,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_94;
  l_94 :
  TestFunFC(c_7,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto m_94;
  m_94 :
  TestFunFC(t_2,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto n_94;
  n_94 :
  TestFunFC(d_7,&&fail,Egetd(1,7));
  Rpush(d_40);
  goto j_94;
  d_40 :
  goto c_40;
  j_94 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  c_40 :
  Epopd(1,7);
  goto b_40;
  u_39 :
  Cpop();
  b_40 :
  Cpush(f_40);
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_49);
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  goto e_40;
  f_40 :
  Rpush(l_40);
  goto c_96;
  l_40 :
  goto k_40;
  e_40 :
  Cpop();
  k_40 :
  Return();
  o_39 :
  Return();
  x_38 :
  goto w_38;
  y_93 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(m_40);
  a_96 :
  Cpush(q_40);
  Ccall(_stratego_q_49);
  goto p_40;
  q_40 :
  Ccontinue(r_40);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_94;
  d_94 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(u_40);
  goto a_94;
  u_40 :
  goto t_40;
  a_94 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(v_40);
  b_96 :
  Cpush(x_40);
  Epushd(2,3);
  MoveTop(2,1);
  goto c_94;
  c_94 :
  TestFunFC(t_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(z_40);
  goto b_94;
  z_40 :
  goto y_40;
  b_94 :
  Move(1,2,2,2);
  Return();
  y_40 :
  Epopd(2,3);
  goto w_40;
  x_40 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_41);
  goto b_96;
  b_41 :
  AllBuild();
  goto a_41;
  w_40 :
  Cpop();
  a_41 :
  Return();
  v_40 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(c_41);
  goto a_96;
  c_41 :
  Return();
  t_40 :
  Epopd(1,3);
  goto p_40;
  r_40 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_41);
  goto a_96;
  e_41 :
  AllBuild();
  goto d_41;
  p_40 :
  Cpop();
  d_41 :
  Return();
  m_40 :
  Return();
  w_38 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_l_48)
  Rpush(f_41);
  o_100 :
  Cpush(h_41);
  Epushd(0,2);
  MoveTop(0,1);
  goto e_96;
  e_96 :
  TestFunFC(w_4,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(j_41);
  goto d_96;
  j_41 :
  goto i_41;
  d_96 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  i_41 :
  Epopd(0,2);
  goto g_41;
  h_41 :
  Ccontinue(l_41);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_i_48);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(t_5);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(m_41);
  goto o_100;
  m_41 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_k_48);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto l_96;
  l_96 :
  TestFunFC(c_7,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_96;
  m_96 :
  TestFunFC(c_7,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto n_96;
  n_96 :
  TestFunFC(d_7,&&fail,Egetd(1,5));
  Rpush(o_41);
  goto k_96;
  o_41 :
  goto n_41;
  k_96 :
  Move(0,3,1,4);
  Return();
  n_41 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_41);
  p_100 :
  Cpush(r_41);
  Ccall(_stratego_q_49);
  Tset(App0("Nil"));
  goto q_41;
  r_41 :
  Epushd(1,3);
  MoveTop(1,1);
  goto z_96;
  z_96 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(u_41);
  goto o_96;
  u_41 :
  goto t_41;
  o_96 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(v_41);
  goto p_100;
  v_41 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto w_96;
  w_96 :
  TestFunFC(c_7,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto x_96;
  x_96 :
  TestFunFC(c_7,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto y_96;
  y_96 :
  TestFunFC(d_7,&&fail,Egetd(2,6));
  Rpush(x_41);
  goto r_96;
  x_41 :
  goto w_41;
  r_96 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(y_41);
  q_100 :
  Cpush(a_42);
  Ccall(_stratego_q_49);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto z_41;
  a_42 :
  Ccontinue(b_42);
  Epushd(3,3);
  MoveTop(3,1);
  goto v_96;
  v_96 :
  TestFunFC(t_2,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(d_42);
  goto s_96;
  d_42 :
  goto c_42;
  s_96 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(e_42);
  r_100 :
  Cpush(i_42);
  Epushd(4,3);
  MoveTop(4,1);
  goto u_96;
  u_96 :
  TestFunFC(t_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(k_42);
  goto t_96;
  k_42 :
  goto j_42;
  t_96 :
  Move(3,2,4,2);
  Return();
  j_42 :
  Epopd(4,3);
  goto h_42;
  i_42 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_42);
  goto r_100;
  m_42 :
  AllBuild();
  goto l_42;
  h_42 :
  Cpop();
  l_42 :
  Return();
  e_42 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(n_42);
  goto q_100;
  n_42 :
  Return();
  c_42 :
  Epopd(3,3);
  goto z_41;
  b_42 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_42);
  goto q_100;
  p_42 :
  AllBuild();
  goto o_42;
  z_41 :
  Cpop();
  o_42 :
  Return();
  y_41 :
  Return();
  w_41 :
  Epopd(2,6);
  Return();
  t_41 :
  Epopd(1,3);
  goto s_41;
  q_41 :
  Cpop();
  s_41 :
  Return();
  p_41 :
  Epopd(0,3);
  goto g_41;
  l_41 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto c_97;
  c_97 :
  TestFunFC(c_7,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_97;
  d_97 :
  TestFunFC(c_7,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_97;
  e_97 :
  TestFunFC(d_7,&&fail,Egetd(1,5));
  Rpush(s_42);
  goto b_97;
  s_42 :
  goto r_42;
  b_97 :
  Move(0,2,1,4);
  Return();
  r_42 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(y_42);
  s_100 :
  Cpush(a_43);
  Ccall(_stratego_q_49);
  Tset(App0("Nil"));
  goto z_42;
  a_43 :
  Epushd(1,3);
  MoveTop(1,1);
  goto q_97;
  q_97 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(d_43);
  goto f_97;
  d_43 :
  goto c_43;
  f_97 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(e_43);
  goto o_100;
  e_43 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(f_43);
  goto s_100;
  f_43 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto n_97;
  n_97 :
  TestFunFC(c_7,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_97;
  o_97 :
  TestFunFC(c_7,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_97;
  p_97 :
  TestFunFC(d_7,&&fail,Egetd(2,7));
  Rpush(h_43);
  goto i_97;
  h_43 :
  goto g_43;
  i_97 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(i_43);
  t_100 :
  Cpush(k_43);
  Ccall(_stratego_q_49);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto j_43;
  k_43 :
  Ccontinue(l_43);
  Epushd(3,3);
  MoveTop(3,1);
  goto m_97;
  m_97 :
  TestFunFC(t_2,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(n_43);
  goto j_97;
  n_43 :
  goto m_43;
  j_97 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(o_43);
  u_100 :
  Cpush(q_43);
  Epushd(4,3);
  MoveTop(4,1);
  goto l_97;
  l_97 :
  TestFunFC(t_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(s_43);
  goto k_97;
  s_43 :
  goto r_43;
  k_97 :
  Move(3,2,4,2);
  Return();
  r_43 :
  Epopd(4,3);
  goto p_43;
  q_43 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_43);
  goto u_100;
  u_43 :
  AllBuild();
  goto t_43;
  p_43 :
  Cpop();
  t_43 :
  Return();
  o_43 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(v_43);
  goto t_100;
  v_43 :
  Return();
  m_43 :
  Epopd(3,3);
  goto j_43;
  l_43 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_43);
  goto t_100;
  x_43 :
  AllBuild();
  goto w_43;
  j_43 :
  Cpop();
  w_43 :
  Return();
  i_43 :
  Return();
  g_43 :
  Epopd(2,7);
  Return();
  c_43 :
  Epopd(1,3);
  goto b_43;
  z_42 :
  Cpop();
  b_43 :
  Return();
  y_42 :
  Epopd(0,2);
  goto q_42;
  g_41 :
  Cpop();
  q_42 :
  Return();
  f_41 :
ENDPROC

PROC(_stratego_o_48)
  Rpush(y_43);
  j_101 :
  Cpush(a_44);
  Epushd(0,5);
  MoveTop(0,1);
  goto x_100;
  x_100 :
  TestFunFC(u_37,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto y_100;
  y_100 :
  TestFunFC(n_4,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(c_44);
  goto v_100;
  c_44 :
  goto b_44;
  v_100 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_l_48);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(1,1),App1("SRule",App3("Rule",Egetd(0,3),Egetd(0,4),Egetd(0,5)))));
  Epopd(1,1);
  Return();
  b_44 :
  Epopd(0,5);
  goto z_43;
  a_44 :
  goto d_44;
  z_43 :
  Cpop();
  d_44 :
  AllInit();
  e_44 :
  AllNextSon(&&f_44);
  Rpush(g_44);
  goto j_101;
  g_44 :
  goto e_44;
  f_44 :
  AllBuild();
  Return();
  y_43 :
ENDPROC

PROC(_stratego_p_48)
  Rpush(h_44);
  i_102 :
  Epushd(0,11);
  MoveTop(0,5);
  goto m_101;
  m_101 :
  TestFunFC(c_7,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto n_101;
  n_101 :
  TestFunFC(c_7,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto o_101;
  o_101 :
  TestFunFC(t_2,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto p_101;
  p_101 :
  TestFunFC(d_7,&&fail,Egetd(0,11));
  goto q_101;
  q_101 :
  TestFunFC(c_7,&&l_44,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto r_101;
  r_101 :
  TestFunFC(c_7,&&m_44,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto s_101;
  s_101 :
  TestFunFC(d_7,&&n_44,Egetd(0,4));
  Cpush(p_44);
  Rpush(q_44);
  goto k_101;
  q_44 :
  goto o_44;
  p_44 :
  Rpush(t_44);
  goto l_101;
  t_44 :
  goto r_44;
  o_44 :
  Cpop();
  r_44 :
  goto k_44;
  n_44 :
  Rpush(k_44);
  goto l_101;
  m_44 :
  Rpush(k_44);
  goto l_101;
  l_44 :
  Rpush(k_44);
  goto l_101;
  k_44 :
  goto j_44;
  l_101 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(v_44);
  goto i_102;
  v_44 :
  Return();
  j_44 :
  goto i_44;
  k_101 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  i_44 :
  Epopd(0,11);
  Return();
  h_44 :
ENDPROC

PROC(_stratego_q_48)
  Epushd(0,7);
  MoveTop(0,1);
  goto a_103;
  a_103 :
  TestFunFC(c_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_103;
  b_103 :
  TestFunFC(c_7,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_103;
  c_103 :
  TestFunFC(d_7,&&a_45,Egetd(0,5));
  Rpush(z_44);
  goto j_102;
  a_45 :
  TestFunFC(c_7,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto d_103;
  d_103 :
  TestFunFC(d_7,&&fail,Egetd(0,7));
  Rpush(z_44);
  goto k_102;
  z_44 :
  goto y_44;
  k_102 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(b_45);
  o_104 :
  Epushd(2,9);
  MoveTop(2,1);
  goto r_102;
  r_102 :
  TestFunFC(c_7,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto s_102;
  s_102 :
  TestFunFC(s_2,&&f_45,Egetd(2,2));
  goto t_102;
  t_102 :
  TestFunFC(c_7,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto u_102;
  u_102 :
  TestFunFC(s_2,&&fail,Egetd(2,6));
  goto v_102;
  v_102 :
  TestFunFC(d_7,&&fail,Egetd(2,9));
  Rpush(e_45);
  goto l_102;
  f_45 :
  TestFunFC(t_2,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_102;
  w_102 :
  TestFunFC(c_7,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto x_102;
  x_102 :
  TestFunFC(t_2,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto y_102;
  y_102 :
  TestFunFC(d_7,&&fail,Egetd(2,9));
  Rpush(e_45);
  goto m_102;
  e_45 :
  goto d_45;
  m_102 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(h_45);
  goto o_104;
  h_45 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto o_102;
  o_102 :
  TestFunFC(c_7,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto p_102;
  p_102 :
  TestFunFC(c_7,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto q_102;
  q_102 :
  TestFunFC(d_7,&&fail,Egetd(3,5));
  Rpush(i_45);
  goto n_102;
  i_45 :
  goto g_45;
  n_102 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  g_45 :
  Epopd(3,5);
  Return();
  d_45 :
  goto c_45;
  l_102 :
  Tset(App0("Nil"));
  Return();
  c_45 :
  Epopd(2,9);
  Return();
  b_45 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  y_44 :
  goto x_44;
  j_102 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  x_44 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_r_48)
  Epushd(0,5);
  Ccall(_stratego_q_48);
  MoveTop(0,1);
  goto v_104;
  v_104 :
  TestFunFC(c_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_104;
  w_104 :
  TestFunFC(c_7,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_104;
  x_104 :
  TestFunFC(d_7,&&fail,Egetd(0,5));
  Rpush(k_45);
  goto p_104;
  k_45 :
  goto j_45;
  p_104 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(l_45);
  o_105 :
  Cpush(n_45);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto u_104;
  u_104 :
  TestFunFC(w_4,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(p_45);
  goto r_104;
  p_45 :
  goto o_45;
  r_104 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(1,2,2,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  o_45 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_p_48);
  Epopd(1,3);
  goto m_45;
  n_45 :
  AllInit();
  r_45 :
  AllNextSon(&&t_45);
  Rpush(u_45);
  goto o_105;
  u_45 :
  goto r_45;
  t_45 :
  AllBuild();
  goto q_45;
  m_45 :
  Cpop();
  q_45 :
  Return();
  l_45 :
  Return();
  j_45 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_s_48)
  Epushd(0,2);
  MoveTop(0,1);
  goto f_106;
  f_106 :
  TestFunFC(j_37,&&y_45,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(x_45);
  goto p_105;
  y_45 :
  TestFunFC(k_37,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(x_45);
  goto q_105;
  x_45 :
  goto w_45;
  q_105 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(z_45);
  p_107 :
  Cpush(f_46);
  Ccall(_stratego_q_49);
  goto a_46;
  f_46 :
  Ccontinue(g_46);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(1,4);
  MoveTop(1,1);
  goto b_106;
  b_106 :
  TestFunFC(s_20,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  goto c_106;
  c_106 :
  TestFunFC(s_2,&&fail,Egetd(1,3));
  Rpush(p_46);
  goto a_106;
  p_46 :
  goto n_46;
  a_106 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  n_46 :
  Epopd(1,4);
  OneNextSon();
  Rpush(p_47);
  goto p_107;
  p_47 :
  AllBuild();
  goto a_46;
  g_46 :
  Epushd(1,3);
  MoveTop(1,1);
  goto e_106;
  e_106 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(w_49);
  goto d_106;
  w_49 :
  goto v_49;
  d_106 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(x_49);
  goto p_107;
  x_49 :
  Return();
  v_49 :
  Epopd(1,3);
  goto n_48;
  a_46 :
  Cpop();
  n_48 :
  Return();
  z_45 :
  Return();
  w_45 :
  goto v_45;
  p_105 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(y_49);
  n_107 :
  Cpush(o_50);
  Ccall(_stratego_q_49);
  goto z_49;
  o_50 :
  Ccontinue(q_50);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto x_105;
  x_105 :
  TestFunFC(e_14,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(w_50);
  goto r_105;
  w_50 :
  goto u_50;
  r_105 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(b_51);
  o_107 :
  Cpush(m_51);
  Ccall(_stratego_q_49);
  goto g_51;
  m_51 :
  Ccontinue(n_51);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto t_105;
  t_105 :
  TestFunFC(h_13,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto u_105;
  u_105 :
  TestFunFC(j_13,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  Rpush(q_51);
  goto s_105;
  q_51 :
  goto p_51;
  s_105 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Return();
  p_51 :
  Epopd(2,4);
  OneNextSon();
  Rpush(r_51);
  goto o_107;
  r_51 :
  AllBuild();
  goto g_51;
  n_51 :
  Epushd(2,3);
  MoveTop(2,1);
  goto w_105;
  w_105 :
  TestFunFC(t_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(u_51);
  goto v_105;
  u_51 :
  goto t_51;
  v_105 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(v_51);
  goto o_107;
  v_51 :
  Return();
  t_51 :
  Epopd(2,3);
  goto s_51;
  g_51 :
  Cpop();
  s_51 :
  Return();
  b_51 :
  Return();
  u_50 :
  Epopd(1,2);
  OneNextSon();
  Rpush(k_52);
  goto n_107;
  k_52 :
  AllBuild();
  goto z_49;
  q_50 :
  Epushd(1,3);
  MoveTop(1,1);
  goto z_105;
  z_105 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(n_52);
  goto y_105;
  n_52 :
  goto m_52;
  y_105 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(t_52);
  goto n_107;
  t_52 :
  Return();
  m_52 :
  Epopd(1,3);
  goto l_52;
  z_49 :
  Cpop();
  l_52 :
  Return();
  y_49 :
  Ccall(_stratego_v_48);
  Return();
  v_45 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_t_48)
  Rpush(u_52);
  x_107 :
  Cpush(c_53);
  Ccall(_stratego_q_49);
  goto w_52;
  c_53 :
  Ccontinue(d_53);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_48);
  OneNextSon();
  Rpush(g_53);
  goto x_107;
  g_53 :
  AllBuild();
  goto w_52;
  d_53 :
  Epushd(0,3);
  MoveTop(0,1);
  goto r_107;
  r_107 :
  TestFunFC(t_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_53);
  goto q_107;
  q_53 :
  goto p_53;
  q_107 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_53);
  goto x_107;
  s_53 :
  Return();
  p_53 :
  Epopd(0,3);
  goto o_53;
  w_52 :
  Cpop();
  o_53 :
  Return();
  u_52 :
  Ccall(_stratego_v_48);
ENDPROC

PROC(_stratego_u_48)
  Epushd(0,2);
  MoveTop(0,1);
  Ccall(_stratego_t_48);
  Rpush(t_53);
  u_108 :
  Cpush(w_53);
  Ccall(_stratego_q_49);
  goto u_53;
  w_53 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Op",Egetd(1,1),App0("Nil")));
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",App2("Op",Egetd(1,1),App0("Nil")),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Rpush(f_54);
  goto u_108;
  f_54 :
  AllBuild();
  goto e_54;
  u_53 :
  Cpop();
  e_54 :
  Return();
  t_53 :
  MoveTop(0,2);
  NotNULLd(0,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_r_48);
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_48)
  Rpush(g_54);
  c_109 :
  Cpush(p_54);
  Ccall(_stratego_q_49);
  goto o_54;
  p_54 :
  Epushd(0,3);
  MoveTop(0,1);
  goto w_108;
  w_108 :
  TestFunFC(t_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(s_54);
  goto v_108;
  s_54 :
  goto r_54;
  v_108 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(t_54);
  d_109 :
  Cpush(z_54);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_55);
  goto d_109;
  h_55 :
  AllBuild();
  goto x_54;
  z_54 :
  Ccall(_stratego_q_49);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(j_55);
  goto c_109;
  j_55 :
  goto i_55;
  x_54 :
  Cpop();
  i_55 :
  Return();
  t_54 :
  Return();
  r_54 :
  Epopd(0,3);
  goto q_54;
  o_54 :
  Cpop();
  q_54 :
  Return();
  g_54 :
ENDPROC

PROC(_stratego_w_48)
  Epushd(0,2);
  MoveTop(0,1);
  goto g_109;
  g_109 :
  TestFunFC(e_14,&&h_56,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(z_55);
  goto e_109;
  h_56 :
  TestFunFC(d_14,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(z_55);
  goto f_109;
  z_55 :
  goto v_55;
  f_109 :
  Tset(App0("Nil"));
  Return();
  v_55 :
  goto m_55;
  e_109 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  m_55 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_x_48)
  Rpush(i_56);
  l_109 :
  Cpush(k_56);
  Ccall(_stratego_q_49);
  goto j_56;
  k_56 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_48);
  OneNextSon();
  Rpush(g_57);
  goto l_109;
  g_57 :
  AllBuild();
  goto q_56;
  j_56 :
  Cpop();
  q_56 :
  Return();
  i_56 :
  Ccall(_stratego_v_48);
ENDPROC

PROC(_stratego_y_48)
  Epushd(0,2);
  MoveTop(0,1);
  goto r_109;
  r_109 :
  TestFunFC(j_37,&&m_57,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_57);
  goto m_109;
  m_57 :
  TestFunFC(m_37,&&n_57,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_57);
  goto n_109;
  n_57 :
  TestFunFC(l_37,&&o_57,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_57);
  goto o_109;
  o_57 :
  TestFunFC(k_37,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_57);
  goto p_109;
  l_57 :
  goto k_57;
  p_109 :
  NotNULLd(0,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,2),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))))));
  Return();
  k_57 :
  goto j_57;
  o_109 :
  NotNULLd(0,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,2),App2("TCons",App0("Nil"),App0("TNil"))))));
  Return();
  j_57 :
  goto i_57;
  n_109 :
  NotNULLd(0,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,2),App0("TNil"))))));
  Return();
  i_57 :
  goto h_57;
  m_109 :
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_x_48);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))))));
  Epopd(1,1);
  Return();
  h_57 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_z_48)
  Epushd(0,2);
  MoveTop(0,1);
  goto t_111;
  t_111 :
  TestFunFC(g_37,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(q_57);
  goto a_110;
  q_57 :
  goto p_57;
  a_110 :
  Epushd(1,9);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(r_57);
  d_115 :
  Cpush(t_57);
  Ccall(_stratego_q_49);
  goto s_57;
  t_57 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_48);
  OneNextSon();
  Rpush(y_57);
  goto d_115;
  y_57 :
  AllBuild();
  goto u_57;
  s_57 :
  Cpop();
  u_57 :
  Return();
  r_57 :
  Rpush(a_58);
  e_115 :
  Cpush(c_58);
  Ccall(_stratego_q_49);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))))));
  goto b_58;
  c_58 :
  Epushd(2,3);
  MoveTop(2,1);
  goto l_111;
  l_111 :
  TestFunFC(t_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(g_58);
  goto b_110;
  g_58 :
  goto f_58;
  b_110 :
  Epushd(3,21);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(j_58);
  goto e_115;
  j_58 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto x_110;
  x_110 :
  TestFunFC(c_7,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,11,3,1,1);
  goto y_110;
  y_110 :
  TestFunFC(c_7,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto z_110;
  z_110 :
  TestFunFC(c_7,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto a_111;
  a_111 :
  TestFunFC(c_7,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto b_111;
  b_111 :
  TestFunFC(c_7,&&fail,Egetd(3,8));
  MoveArg(3,9,3,8,0);
  MoveArg(3,10,3,8,1);
  goto c_111;
  c_111 :
  TestFunFC(d_7,&&fail,Egetd(3,10));
  goto d_111;
  d_111 :
  TestFunFC(c_7,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,21,3,11,1);
  goto e_111;
  e_111 :
  TestFunFC(c_7,&&fail,Egetd(3,12));
  MoveArg(3,13,3,12,0);
  MoveArg(3,14,3,12,1);
  goto f_111;
  f_111 :
  TestFunFC(c_7,&&fail,Egetd(3,14));
  MoveArg(3,15,3,14,0);
  MoveArg(3,16,3,14,1);
  goto g_111;
  g_111 :
  TestFunFC(c_7,&&fail,Egetd(3,16));
  MoveArg(3,17,3,16,0);
  MoveArg(3,18,3,16,1);
  goto i_111;
  i_111 :
  TestFunFC(c_7,&&fail,Egetd(3,18));
  MoveArg(3,19,3,18,0);
  MoveArg(3,20,3,18,1);
  goto j_111;
  j_111 :
  TestFunFC(d_7,&&fail,Egetd(3,20));
  goto k_111;
  k_111 :
  TestFunFC(d_7,&&fail,Egetd(3,21));
  Rpush(k_58);
  goto c_110;
  k_58 :
  goto i_58;
  c_110 :
  Epushd(4,5);
  NotNULLd(3,3);
  NotNULLd(3,13);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,13),App0("TNil"))));
  MoveTop(4,1);
  goto u_110;
  u_110 :
  TestFunFC(c_7,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto v_110;
  v_110 :
  TestFunFC(c_7,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto w_110;
  w_110 :
  TestFunFC(d_7,&&fail,Egetd(4,5));
  Rpush(m_58);
  goto d_110;
  m_58 :
  goto l_58;
  d_110 :
  Epushd(5,6);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Rpush(o_58);
  f_115 :
  Cpush(x_58);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_58);
  goto f_115;
  y_58 :
  AllBuild();
  goto s_58;
  x_58 :
  Ccall(_stratego_q_49);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  goto a_59;
  s_58 :
  Cpop();
  a_59 :
  Return();
  o_58 :
  MoveTop(5,1);
  NotNULLd(3,5);
  NotNULLd(3,15);
  Tset(App2("TCons",Egetd(3,5),App2("TCons",Egetd(3,15),App0("TNil"))));
  MoveTop(5,2);
  goto r_110;
  r_110 :
  TestFunFC(c_7,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto s_110;
  s_110 :
  TestFunFC(c_7,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto t_110;
  t_110 :
  TestFunFC(d_7,&&fail,Egetd(5,6));
  Rpush(o_59);
  goto f_110;
  o_59 :
  goto n_59;
  f_110 :
  Epushd(6,6);
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(p_59);
  g_115 :
  Cpush(r_59);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_59);
  goto g_115;
  s_59 :
  AllBuild();
  goto q_59;
  r_59 :
  Ccall(_stratego_q_49);
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  goto t_59;
  q_59 :
  Cpop();
  t_59 :
  Return();
  p_59 :
  MoveTop(6,1);
  NotNULLd(3,7);
  NotNULLd(3,17);
  Tset(App2("TCons",Egetd(3,7),App2("TCons",Egetd(3,17),App0("TNil"))));
  MoveTop(6,2);
  goto o_110;
  o_110 :
  TestFunFC(c_7,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto p_110;
  p_110 :
  TestFunFC(c_7,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto q_110;
  q_110 :
  TestFunFC(d_7,&&fail,Egetd(6,6));
  Rpush(c_60);
  goto h_110;
  c_60 :
  goto b_60;
  h_110 :
  Epushd(7,6);
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Rpush(d_60);
  h_115 :
  Cpush(g_60);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_60);
  goto h_115;
  h_60 :
  AllBuild();
  goto e_60;
  g_60 :
  Ccall(_stratego_q_49);
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  goto j_60;
  e_60 :
  Cpop();
  j_60 :
  Return();
  d_60 :
  MoveTop(7,1);
  NotNULLd(3,9);
  NotNULLd(3,19);
  Tset(App2("TCons",Egetd(3,9),App2("TCons",Egetd(3,19),App0("TNil"))));
  MoveTop(7,2);
  goto l_110;
  l_110 :
  TestFunFC(c_7,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto m_110;
  m_110 :
  TestFunFC(c_7,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto n_110;
  n_110 :
  TestFunFC(d_7,&&fail,Egetd(7,6));
  Rpush(z_60);
  goto j_110;
  z_60 :
  goto k_60;
  j_110 :
  Epushd(8,1);
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(b_61);
  i_115 :
  Cpush(h_61);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_61);
  goto i_115;
  m_61 :
  AllBuild();
  goto f_61;
  h_61 :
  Ccall(_stratego_q_49);
  NotNULLd(7,5);
  Tset(Egetd(7,5));
  goto y_61;
  f_61 :
  Cpop();
  y_61 :
  Return();
  b_61 :
  MoveTop(8,1);
  NotNULLd(5,1);
  NotNULLd(6,1);
  NotNULLd(7,1);
  NotNULLd(8,1);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(6,1),App2("TCons",Egetd(7,1),App2("TCons",Egetd(8,1),App0("TNil"))))));
  Epopd(8,1);
  Return();
  k_60 :
  Epopd(7,6);
  Return();
  b_60 :
  Epopd(6,6);
  Return();
  n_59 :
  Epopd(5,6);
  Return();
  l_58 :
  Epopd(4,5);
  Return();
  i_58 :
  Epopd(3,21);
  Return();
  f_58 :
  Epopd(2,3);
  goto e_58;
  b_58 :
  Cpop();
  e_58 :
  Return();
  a_58 :
  MoveTop(1,1);
  goto n_111;
  n_111 :
  TestFunFC(c_7,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_111;
  p_111 :
  TestFunFC(c_7,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto q_111;
  q_111 :
  TestFunFC(c_7,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto r_111;
  r_111 :
  TestFunFC(c_7,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto s_111;
  s_111 :
  TestFunFC(d_7,&&fail,Egetd(1,9));
  Rpush(z_61);
  goto m_111;
  z_61 :
  goto z_57;
  m_111 :
  NotNULLd(1,2);
  NotNULLd(1,4);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App1("Specification",App2("Cons",App1("Signature",App2("Cons",App1("Operations",Egetd(1,2)),App0("Nil"))),App2("Cons",App1("Overlays",Egetd(1,4)),App2("Cons",App1("Rules",Egetd(1,6)),App2("Cons",App1("Strategies",Egetd(1,8)),App0("Nil")))))));
  TestFunTop(g_37);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_48);
  AllBuild();
  Ccall(_stratego_o_48);
  Return();
  z_57 :
  Epopd(1,9);
  Return();
  p_57 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_a_49)
  Epushd(0,14);
  Ccall(_stratego_z_48);
  Tdupl();
  Ccall(_stratego_h_48);
  Tpop();
  MoveTop(0,1);
  goto c_125;
  c_125 :
  TestFunFC(g_37,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto d_125;
  d_125 :
  TestFunFC(t_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto e_125;
  e_125 :
  TestFunFC(j_37,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto f_125;
  f_125 :
  TestFunFC(t_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto g_125;
  g_125 :
  TestFunFC(k_37,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto h_125;
  h_125 :
  TestFunFC(t_2,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,11,0,8,1);
  goto i_125;
  i_125 :
  TestFunFC(l_37,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto j_125;
  j_125 :
  TestFunFC(t_2,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,14,0,11,1);
  goto k_125;
  k_125 :
  TestFunFC(m_37,&&fail,Egetd(0,12));
  MoveArg(0,13,0,12,0);
  goto l_125;
  l_125 :
  TestFunFC(s_2,&&fail,Egetd(0,14));
  Rpush(g_62);
  goto j_115;
  g_62 :
  goto f_62;
  j_115 :
  Epushd(1,20);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Cpush(j_62);
  Tdupl();
  Cpush(k_62);
  Tdupl();
  Epushd(3,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  MoveTop(3,1);
  goto l_115;
  l_115 :
  TestFunFC(s_2,&&fail,Egetd(3,1));
  Rpush(m_62);
  goto k_115;
  m_62 :
  goto l_62;
  k_115 :
  Return();
  l_62 :
  Epopd(3,1);
  Cpop();
  Crestore();
  Cjump();
  k_62 :
  Tpop();
  Rpush(n_62);
  r_142 :
  Rpush(o_62);
  s_142 :
  Cpush(q_62);
  Epushd(3,3);
  MoveTop(3,1);
  goto i_116;
  i_116 :
  TestFunFC(r_16,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_62);
  goto m_115;
  w_62 :
  goto v_62;
  m_115 :
  Epushd(4,2);
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(x_62);
  t_142 :
  Cpush(z_62);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(5,4);
  MoveTop(5,1);
  goto h_116;
  h_116 :
  TestFunFC(s_20,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  MoveArg(5,4,5,1,2);
  Rpush(p_63);
  goto n_115;
  p_63 :
  goto o_63;
  n_115 :
  Epushd(6,8);
  Move(3,2,5,2);
  Move(6,1,5,3);
  Move(6,2,5,4);
  NotNULLd(6,1);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",Egetd(3,3),App0("TNil"))));
  Rpush(q_63);
  u_142 :
  Epushd(7,9);
  MoveTop(7,1);
  goto u_115;
  u_115 :
  TestFunFC(c_7,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,5,7,1,1);
  goto v_115;
  v_115 :
  TestFunFC(s_2,&&a_64,Egetd(7,2));
  goto w_115;
  w_115 :
  TestFunFC(c_7,&&fail,Egetd(7,5));
  MoveArg(7,6,7,5,0);
  MoveArg(7,9,7,5,1);
  goto x_115;
  x_115 :
  TestFunFC(s_2,&&fail,Egetd(7,6));
  goto y_115;
  y_115 :
  TestFunFC(d_7,&&fail,Egetd(7,9));
  Rpush(y_63);
  goto o_115;
  a_64 :
  TestFunFC(t_2,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto z_115;
  z_115 :
  TestFunFC(c_7,&&fail,Egetd(7,5));
  MoveArg(7,6,7,5,0);
  MoveArg(7,9,7,5,1);
  goto a_116;
  a_116 :
  TestFunFC(t_2,&&fail,Egetd(7,6));
  MoveArg(7,7,7,6,0);
  MoveArg(7,8,7,6,1);
  goto b_116;
  b_116 :
  TestFunFC(d_7,&&fail,Egetd(7,9));
  Rpush(y_63);
  goto p_115;
  y_63 :
  goto x_63;
  p_115 :
  Epushd(8,5);
  NotNULLd(7,3);
  NotNULLd(7,7);
  NotNULLd(7,4);
  NotNULLd(7,8);
  Tset(App2("TCons",App2("TCons",Egetd(7,3),App2("TCons",Egetd(7,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(7,4),App2("TCons",Egetd(7,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(h_64);
  goto u_142;
  h_64 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(8,1);
  goto r_115;
  r_115 :
  TestFunFC(c_7,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto s_115;
  s_115 :
  TestFunFC(c_7,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto t_115;
  t_115 :
  TestFunFC(d_7,&&fail,Egetd(8,5));
  Rpush(k_64);
  goto q_115;
  k_64 :
  goto g_64;
  q_115 :
  NotNULLd(8,2);
  NotNULLd(8,4);
  Tset(App2("Cons",Egetd(8,2),Egetd(8,4)));
  Return();
  g_64 :
  Epopd(8,5);
  Return();
  x_63 :
  goto r_63;
  o_115 :
  Tset(App0("Nil"));
  Return();
  r_63 :
  Epopd(7,9);
  Return();
  q_63 :
  MoveTop(6,3);
  NotNULLd(6,3);
  NotNULLd(6,2);
  Tset(App2("TCons",Egetd(6,3),App2("TCons",Egetd(6,2),App0("TNil"))));
  MoveTop(6,4);
  goto e_116;
  e_116 :
  TestFunFC(c_7,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto f_116;
  f_116 :
  TestFunFC(c_7,&&fail,Egetd(6,6));
  MoveArg(6,7,6,6,0);
  MoveArg(6,8,6,6,1);
  goto g_116;
  g_116 :
  TestFunFC(d_7,&&fail,Egetd(6,8));
  Rpush(t_64);
  goto d_116;
  t_64 :
  goto m_64;
  d_116 :
  Move(4,1,6,5);
  Move(4,2,6,7);
  Return();
  m_64 :
  Epopd(6,8);
  Return();
  o_63 :
  Epopd(5,4);
  Tpop();
  OneNextSon();
  AllBuild();
  goto y_62;
  z_62 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_64);
  goto t_142;
  v_64 :
  AllBuild();
  goto u_64;
  y_62 :
  Cpop();
  u_64 :
  Return();
  x_62 :
  Tpop();
  NotNULLd(4,1);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(4,2),App0("TNil"))));
  Ccall(_stratego_o_47);
  Rpush(x_64);
  goto s_142;
  x_64 :
  Epopd(4,2);
  Return();
  v_62 :
  Epopd(3,3);
  goto p_62;
  q_62 :
  goto y_64;
  p_62 :
  Cpop();
  y_64 :
  Return();
  o_62 :
  AllInit();
  z_64 :
  AllNextSon(&&b_65);
  Rpush(h_65);
  goto r_142;
  h_65 :
  goto z_64;
  b_65 :
  AllBuild();
  Return();
  n_62 :
  goto i_62;
  j_62 :
  goto i_65;
  i_62 :
  Cpop();
  i_65 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Cpush(l_65);
  Tdupl();
  Cpush(m_65);
  Tdupl();
  Epushd(2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto l_116;
  l_116 :
  TestFunFC(s_2,&&fail,Egetd(2,1));
  Rpush(o_65);
  goto k_116;
  o_65 :
  goto n_65;
  k_116 :
  Return();
  n_65 :
  Epopd(2,1);
  Cpop();
  Crestore();
  Cjump();
  m_65 :
  Tpop();
  Rpush(p_65);
  v_142 :
  Cpush(b_66);
  Epushd(2,3);
  MoveTop(2,1);
  goto i_117;
  i_117 :
  TestFunFC(r_16,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(d_66);
  goto m_116;
  d_66 :
  goto c_66;
  m_116 :
  Epushd(3,2);
  Tdupl();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(o_66);
  w_142 :
  Cpush(q_66);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(4,4);
  MoveTop(4,1);
  goto h_117;
  h_117 :
  TestFunFC(s_20,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(w_66);
  goto n_116;
  w_66 :
  goto r_66;
  n_116 :
  Epushd(5,8);
  Move(2,2,4,2);
  Move(5,1,4,3);
  Move(5,2,4,4);
  NotNULLd(5,1);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(2,3),App0("TNil"))));
  Rpush(x_66);
  x_142 :
  Epushd(6,9);
  MoveTop(6,1);
  goto u_116;
  u_116 :
  TestFunFC(c_7,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,5,6,1,1);
  goto v_116;
  v_116 :
  TestFunFC(s_2,&&k_67,Egetd(6,2));
  goto w_116;
  w_116 :
  TestFunFC(c_7,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  goto x_116;
  x_116 :
  TestFunFC(s_2,&&fail,Egetd(6,6));
  goto y_116;
  y_116 :
  TestFunFC(d_7,&&fail,Egetd(6,9));
  Rpush(f_67);
  goto o_116;
  k_67 :
  TestFunFC(t_2,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto z_116;
  z_116 :
  TestFunFC(c_7,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  goto a_117;
  a_117 :
  TestFunFC(t_2,&&fail,Egetd(6,6));
  MoveArg(6,7,6,6,0);
  MoveArg(6,8,6,6,1);
  goto b_117;
  b_117 :
  TestFunFC(d_7,&&fail,Egetd(6,9));
  Rpush(f_67);
  goto p_116;
  f_67 :
  goto e_67;
  p_116 :
  Epushd(7,5);
  NotNULLd(6,3);
  NotNULLd(6,7);
  NotNULLd(6,4);
  NotNULLd(6,8);
  Tset(App2("TCons",App2("TCons",Egetd(6,3),App2("TCons",Egetd(6,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(6,4),App2("TCons",Egetd(6,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(n_67);
  goto x_142;
  n_67 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(7,1);
  goto r_116;
  r_116 :
  TestFunFC(c_7,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto s_116;
  s_116 :
  TestFunFC(c_7,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto t_116;
  t_116 :
  TestFunFC(d_7,&&fail,Egetd(7,5));
  Rpush(s_67);
  goto q_116;
  s_67 :
  goto m_67;
  q_116 :
  NotNULLd(7,2);
  NotNULLd(7,4);
  Tset(App2("Cons",Egetd(7,2),Egetd(7,4)));
  Return();
  m_67 :
  Epopd(7,5);
  Return();
  e_67 :
  goto c_67;
  o_116 :
  Tset(App0("Nil"));
  Return();
  c_67 :
  Epopd(6,9);
  Return();
  x_66 :
  MoveTop(5,3);
  NotNULLd(5,3);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,4);
  goto e_117;
  e_117 :
  TestFunFC(c_7,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto f_117;
  f_117 :
  TestFunFC(c_7,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto g_117;
  g_117 :
  TestFunFC(d_7,&&fail,Egetd(5,8));
  Rpush(z_67);
  goto d_117;
  z_67 :
  goto y_67;
  d_117 :
  Move(3,1,5,5);
  Move(3,2,5,7);
  Return();
  y_67 :
  Epopd(5,8);
  Return();
  r_66 :
  Epopd(4,4);
  Tpop();
  OneNextSon();
  AllBuild();
  goto p_66;
  q_66 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_68);
  goto w_142;
  b_68 :
  AllBuild();
  goto a_68;
  p_66 :
  Cpop();
  a_68 :
  Return();
  o_66 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  Ccall(_stratego_o_47);
  Epopd(3,2);
  Return();
  c_66 :
  Epopd(2,3);
  goto a_66;
  b_66 :
  goto i_68;
  a_66 :
  Cpop();
  i_68 :
  AllInit();
  k_68 :
  AllNextSon(&&l_68);
  Rpush(m_68);
  goto v_142;
  m_68 :
  goto k_68;
  l_68 :
  AllBuild();
  Return();
  p_65 :
  goto j_65;
  l_65 :
  goto o_68;
  j_65 :
  Cpop();
  o_68 :
  MoveTop(1,2);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(q_68);
  y_142 :
  Cpush(t_68);
  Ccall(_stratego_q_49);
  goto r_68;
  t_68 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto m_117;
  m_117 :
  TestFunFC(s_20,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(w_68);
  goto k_117;
  w_68 :
  goto v_68;
  k_117 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_m_47);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),Egetd(3,1)));
  Epopd(3,1);
  Return();
  v_68 :
  Epopd(2,4);
  OneNextSon();
  Rpush(e_69);
  goto y_142;
  e_69 :
  AllBuild();
  goto u_68;
  r_68 :
  Cpop();
  u_68 :
  Return();
  q_68 :
  MoveTop(1,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Cpush(g_69);
  Tdupl();
  Cpush(i_69);
  Tdupl();
  Epushd(2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto p_117;
  p_117 :
  TestFunFC(s_2,&&fail,Egetd(2,1));
  Rpush(m_69);
  goto o_117;
  m_69 :
  goto k_69;
  o_117 :
  Return();
  k_69 :
  Epopd(2,1);
  Cpop();
  Crestore();
  Cjump();
  i_69 :
  Tpop();
  Rpush(n_69);
  z_142 :
  Cpush(p_69);
  Epushd(2,3);
  MoveTop(2,1);
  goto m_118;
  m_118 :
  TestFunFC(r_16,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(y_69);
  goto q_117;
  y_69 :
  goto x_69;
  q_117 :
  Epushd(3,2);
  Tdupl();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(z_69);
  a_143 :
  Cpush(d_70);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(4,4);
  MoveTop(4,1);
  goto l_118;
  l_118 :
  TestFunFC(s_20,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(m_70);
  goto r_117;
  m_70 :
  goto f_70;
  r_117 :
  Epushd(5,8);
  Move(2,2,4,2);
  Move(5,1,4,3);
  Move(5,2,4,4);
  NotNULLd(5,1);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(2,3),App0("TNil"))));
  Rpush(n_70);
  b_143 :
  Epushd(6,9);
  MoveTop(6,1);
  goto y_117;
  y_117 :
  TestFunFC(c_7,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,5,6,1,1);
  goto z_117;
  z_117 :
  TestFunFC(s_2,&&h_71,Egetd(6,2));
  goto a_118;
  a_118 :
  TestFunFC(c_7,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  goto b_118;
  b_118 :
  TestFunFC(s_2,&&fail,Egetd(6,6));
  goto c_118;
  c_118 :
  TestFunFC(d_7,&&fail,Egetd(6,9));
  Rpush(b_71);
  goto s_117;
  h_71 :
  TestFunFC(t_2,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto d_118;
  d_118 :
  TestFunFC(c_7,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  goto e_118;
  e_118 :
  TestFunFC(t_2,&&fail,Egetd(6,6));
  MoveArg(6,7,6,6,0);
  MoveArg(6,8,6,6,1);
  goto f_118;
  f_118 :
  TestFunFC(d_7,&&fail,Egetd(6,9));
  Rpush(b_71);
  goto t_117;
  b_71 :
  goto a_71;
  t_117 :
  Epushd(7,5);
  NotNULLd(6,3);
  NotNULLd(6,7);
  NotNULLd(6,4);
  NotNULLd(6,8);
  Tset(App2("TCons",App2("TCons",Egetd(6,3),App2("TCons",Egetd(6,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(6,4),App2("TCons",Egetd(6,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(y_72);
  goto b_143;
  y_72 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(7,1);
  goto v_117;
  v_117 :
  TestFunFC(c_7,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto w_117;
  w_117 :
  TestFunFC(c_7,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto x_117;
  x_117 :
  TestFunFC(d_7,&&fail,Egetd(7,5));
  Rpush(z_72);
  goto u_117;
  z_72 :
  goto x_72;
  u_117 :
  NotNULLd(7,2);
  NotNULLd(7,4);
  Tset(App2("Cons",Egetd(7,2),Egetd(7,4)));
  Return();
  x_72 :
  Epopd(7,5);
  Return();
  a_71 :
  goto u_70;
  s_117 :
  Tset(App0("Nil"));
  Return();
  u_70 :
  Epopd(6,9);
  Return();
  n_70 :
  MoveTop(5,3);
  NotNULLd(5,3);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,4);
  goto i_118;
  i_118 :
  TestFunFC(c_7,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto j_118;
  j_118 :
  TestFunFC(c_7,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto k_118;
  k_118 :
  TestFunFC(d_7,&&fail,Egetd(5,8));
  Rpush(e_73);
  goto h_118;
  e_73 :
  goto d_73;
  h_118 :
  Move(3,1,5,5);
  Move(3,2,5,7);
  Return();
  d_73 :
  Epopd(5,8);
  Return();
  f_70 :
  Epopd(4,4);
  Tpop();
  OneNextSon();
  AllBuild();
  goto b_70;
  d_70 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_73);
  goto a_143;
  l_73 :
  AllBuild();
  goto k_73;
  b_70 :
  Cpop();
  k_73 :
  Return();
  z_69 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  Ccall(_stratego_o_47);
  Epopd(3,2);
  Return();
  x_69 :
  Epopd(2,3);
  goto o_69;
  p_69 :
  goto n_73;
  o_69 :
  Cpop();
  n_73 :
  AllInit();
  p_73 :
  AllNextSon(&&h_74);
  Rpush(i_74);
  goto z_142;
  i_74 :
  goto p_73;
  h_74 :
  AllBuild();
  Return();
  n_69 :
  goto f_69;
  g_69 :
  goto j_74;
  f_69 :
  Cpop();
  j_74 :
  MoveTop(1,4);
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(1,5);
  goto q_118;
  q_118 :
  TestFunFC(c_7,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto r_118;
  r_118 :
  TestFunFC(c_7,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto s_118;
  s_118 :
  TestFunFC(d_7,&&fail,Egetd(1,9));
  Rpush(l_74);
  goto o_118;
  l_74 :
  goto k_74;
  o_118 :
  Epushd(2,1);
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(m_74);
  c_143 :
  Cpush(t_74);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_74);
  goto c_143;
  x_74 :
  AllBuild();
  goto s_74;
  t_74 :
  Ccall(_stratego_q_49);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto y_74;
  s_74 :
  Cpop();
  y_74 :
  Return();
  m_74 :
  MoveTop(2,1);
  NotNULLd(0,4);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App1("Specification",App2("Cons",App1("Signature",Egetd(0,4)),App2("Cons",App1("Rules",Egetd(1,2)),App2("Cons",App1("Strategies",Egetd(2,1)),App0("Nil"))))));
  Epopd(2,1);
  Return();
  k_74 :
  Cpush(k_75);
  Epushd(2,14);
  MoveTop(2,1);
  goto s_123;
  s_123 :
  TestFunFC(g_37,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto t_123;
  t_123 :
  TestFunFC(t_2,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,8,2,2,1);
  goto u_123;
  u_123 :
  TestFunFC(j_37,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  goto v_123;
  v_123 :
  TestFunFC(t_2,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto w_123;
  w_123 :
  TestFunFC(e_14,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  goto x_123;
  x_123 :
  TestFunFC(s_2,&&fail,Egetd(2,7));
  goto y_123;
  y_123 :
  TestFunFC(t_2,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  MoveArg(2,11,2,8,1);
  goto z_123;
  z_123 :
  TestFunFC(l_37,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  goto a_124;
  a_124 :
  TestFunFC(t_2,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,14,2,11,1);
  goto b_124;
  b_124 :
  TestFunFC(m_37,&&fail,Egetd(2,12));
  MoveArg(2,13,2,12,0);
  goto c_124;
  c_124 :
  TestFunFC(s_2,&&fail,Egetd(2,14));
  Rpush(p_75);
  goto t_118;
  p_75 :
  goto o_75;
  t_118 :
  Tdupl();
  Epushd(3,5);
  NotNULLd(2,10);
  NotNULLd(2,13);
  Tset(App2("TCons",Egetd(2,10),App2("TCons",Egetd(2,13),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(a_76);
  d_143 :
  Cpush(f_76);
  Ccall(_stratego_q_49);
  goto b_76;
  f_76 :
  Ccontinue(g_76);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(4,4);
  MoveTop(4,1);
  goto a_121;
  a_121 :
  TestFunFC(q_20,&&t_76,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(q_76);
  goto u_118;
  t_76 :
  TestFunFC(u_6,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(q_76);
  goto v_118;
  q_76 :
  goto p_76;
  v_118 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  NotNULLd(4,2);
  Tset(App2("Cons",ATmakeString("warning: in definition "),App2("Cons",Egetd(4,2),App2("Cons",ATmakeString(": "),App0("Nil")))));
  Ccall(_stratego_k_47);
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(u_76);
  h_143 :
  Cpush(z_76);
  Epushd(7,3);
  MoveTop(7,1);
  goto z_120;
  z_120 :
  TestFunFC(r_16,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(e_77);
  goto z_119;
  e_77 :
  goto c_77;
  z_119 :
  Tdupl();
  Epushd(8,1);
  Cpush(f_77);
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(x_77);
  i_143 :
  Cpush(a_78);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(9,1);
  TestFunTop(h_13);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MoveTop(10,1);
  Move(7,2,10,1);
  Epopd(10,1);
  OneNextSon();
  Epushd(10,3);
  MoveTop(10,1);
  goto e_120;
  e_120 :
  TestFunFC(j_13,&&e_80,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(s_78);
  goto b_120;
  e_80 :
  TestFunFC(k_13,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(s_78);
  goto c_120;
  s_78 :
  goto m_78;
  c_120 :
  Move(9,1,10,2);
  Return();
  m_78 :
  goto g_78;
  b_120 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(9,1);
  Tpop();
  Return();
  g_78 :
  Epopd(10,3);
  AllBuild();
  NotNULLd(7,3);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(7,3),App2("TCons",Egetd(9,1),App0("TNil"))));
  Rpush(f_80);
  j_143 :
  Epushd(10,9);
  MoveTop(10,1);
  goto l_120;
  l_120 :
  TestFunFC(c_7,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  goto m_120;
  m_120 :
  TestFunFC(s_2,&&q_80,Egetd(10,2));
  goto n_120;
  n_120 :
  TestFunFC(c_7,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto o_120;
  o_120 :
  TestFunFC(s_2,&&fail,Egetd(10,6));
  goto p_120;
  p_120 :
  TestFunFC(d_7,&&fail,Egetd(10,9));
  Rpush(o_80);
  goto f_120;
  q_80 :
  TestFunFC(t_2,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto q_120;
  q_120 :
  TestFunFC(c_7,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto r_120;
  r_120 :
  TestFunFC(t_2,&&fail,Egetd(10,6));
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  goto s_120;
  s_120 :
  TestFunFC(d_7,&&fail,Egetd(10,9));
  Rpush(o_80);
  goto g_120;
  o_80 :
  goto m_80;
  g_120 :
  Epushd(11,5);
  NotNULLd(10,3);
  NotNULLd(10,7);
  NotNULLd(10,4);
  NotNULLd(10,8);
  Tset(App2("TCons",App2("TCons",Egetd(10,3),App2("TCons",Egetd(10,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(10,4),App2("TCons",Egetd(10,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(j_81);
  goto j_143;
  j_81 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(11,1);
  goto i_120;
  i_120 :
  TestFunFC(c_7,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  goto j_120;
  j_120 :
  TestFunFC(c_7,&&fail,Egetd(11,3));
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  goto k_120;
  k_120 :
  TestFunFC(d_7,&&fail,Egetd(11,5));
  Rpush(k_81);
  goto h_120;
  k_81 :
  goto i_81;
  h_120 :
  NotNULLd(11,2);
  NotNULLd(11,4);
  Tset(App2("Cons",Egetd(11,2),Egetd(11,4)));
  Return();
  i_81 :
  Epopd(11,5);
  Return();
  m_80 :
  goto l_80;
  f_120 :
  Tset(App0("Nil"));
  Return();
  l_80 :
  Epopd(10,9);
  Return();
  f_80 :
  Epopd(9,1);
  OneNextSon();
  AllBuild();
  goto y_77;
  a_78 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_81);
  goto i_143;
  m_81 :
  AllBuild();
  goto l_81;
  y_77 :
  Cpop();
  l_81 :
  Return();
  x_77 :
  Cpop();
  Crestore();
  Cjump();
  f_77 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Ccall(_stratego_h_47);
  Ccall(_stratego_f_47);
  MoveTop(8,1);
  NotNULLd(7,2);
  NotNULLd(8,1);
  Tset(App2("Cons",ATmakeString("constructor "),App2("Cons",Egetd(7,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString(" not declared"),App0("Nil")))))));
  Ccall(_stratego_k_47);
  Tdupl();
  Epushd(9,1);
  MoveTop(9,1);
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_49);
  Epopd(9,1);
  Tpop();
  Epopd(8,1);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Op",Egetd(7,2),Egetd(7,3)));
  AllInit();
  n_81 :
  AllNextSon(&&p_81);
  Cpush(w_81);
  Rpush(a_82);
  goto h_143;
  a_82 :
  goto v_81;
  w_81 :
  goto b_82;
  v_81 :
  Cpop();
  b_82 :
  goto n_81;
  p_81 :
  AllBuild();
  Return();
  c_77 :
  Epopd(7,3);
  goto y_76;
  z_76 :
  IsAppl();
  SomeInit();
  m_82 :
  SomeNextSon(&&n_82);
  Cpush(m_82);
  Rpush(r_82);
  goto h_143;
  r_82 :
  Cpop();
  CounterOK();
  goto m_82;
  n_82 :
  SomeBuild();
  goto g_82;
  y_76 :
  Cpop();
  g_82 :
  Return();
  u_76 :
  Epopd(6,1);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(4,4);
  Tset(App3("SDef",Egetd(4,2),Egetd(4,3),Egetd(4,4)));
  Epopd(5,1);
  Return();
  p_76 :
  goto l_76;
  u_118 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  NotNULLd(4,2);
  Tset(App2("Cons",ATmakeString("warning: in rule "),App2("Cons",Egetd(4,2),App2("Cons",ATmakeString(": "),App0("Nil")))));
  Ccall(_stratego_k_47);
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(s_82);
  e_143 :
  Cpush(d_83);
  Epushd(7,3);
  MoveTop(7,1);
  goto x_119;
  x_119 :
  TestFunFC(r_16,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(i_83);
  goto x_118;
  i_83 :
  goto e_83;
  x_118 :
  Tdupl();
  Epushd(8,1);
  Cpush(j_83);
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(o_83);
  f_143 :
  Cpush(t_83);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(9,1);
  TestFunTop(h_13);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MoveTop(10,1);
  Move(7,2,10,1);
  Epopd(10,1);
  OneNextSon();
  Epushd(10,3);
  MoveTop(10,1);
  goto c_119;
  c_119 :
  TestFunFC(j_13,&&f_84,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(e_84);
  goto z_118;
  f_84 :
  TestFunFC(k_13,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(e_84);
  goto a_119;
  e_84 :
  goto a_84;
  a_119 :
  Move(9,1,10,2);
  Return();
  a_84 :
  goto z_83;
  z_118 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(9,1);
  Tpop();
  Return();
  z_83 :
  Epopd(10,3);
  AllBuild();
  NotNULLd(7,3);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(7,3),App2("TCons",Egetd(9,1),App0("TNil"))));
  Rpush(h_85);
  g_143 :
  Epushd(10,9);
  MoveTop(10,1);
  goto j_119;
  j_119 :
  TestFunFC(c_7,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  goto k_119;
  k_119 :
  TestFunFC(s_2,&&m_85,Egetd(10,2));
  goto l_119;
  l_119 :
  TestFunFC(c_7,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto m_119;
  m_119 :
  TestFunFC(s_2,&&fail,Egetd(10,6));
  goto n_119;
  n_119 :
  TestFunFC(d_7,&&fail,Egetd(10,9));
  Rpush(l_85);
  goto d_119;
  m_85 :
  TestFunFC(t_2,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto o_119;
  o_119 :
  TestFunFC(c_7,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto p_119;
  p_119 :
  TestFunFC(t_2,&&fail,Egetd(10,6));
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  goto q_119;
  q_119 :
  TestFunFC(d_7,&&fail,Egetd(10,9));
  Rpush(l_85);
  goto e_119;
  l_85 :
  goto j_85;
  e_119 :
  Epushd(11,5);
  NotNULLd(10,3);
  NotNULLd(10,7);
  NotNULLd(10,4);
  NotNULLd(10,8);
  Tset(App2("TCons",App2("TCons",Egetd(10,3),App2("TCons",Egetd(10,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(10,4),App2("TCons",Egetd(10,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(z_85);
  goto g_143;
  z_85 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(11,1);
  goto g_119;
  g_119 :
  TestFunFC(c_7,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  goto h_119;
  h_119 :
  TestFunFC(c_7,&&fail,Egetd(11,3));
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  goto i_119;
  i_119 :
  TestFunFC(d_7,&&fail,Egetd(11,5));
  Rpush(f_86);
  goto f_119;
  f_86 :
  goto r_85;
  f_119 :
  NotNULLd(11,2);
  NotNULLd(11,4);
  Tset(App2("Cons",Egetd(11,2),Egetd(11,4)));
  Return();
  r_85 :
  Epopd(11,5);
  Return();
  j_85 :
  goto i_85;
  d_119 :
  Tset(App0("Nil"));
  Return();
  i_85 :
  Epopd(10,9);
  Return();
  h_85 :
  Epopd(9,1);
  OneNextSon();
  AllBuild();
  goto s_83;
  t_83 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_86);
  goto f_143;
  h_86 :
  AllBuild();
  goto g_86;
  s_83 :
  Cpop();
  g_86 :
  Return();
  o_83 :
  Cpop();
  Crestore();
  Cjump();
  j_83 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Ccall(_stratego_h_47);
  Ccall(_stratego_f_47);
  MoveTop(8,1);
  NotNULLd(7,2);
  NotNULLd(8,1);
  Tset(App2("Cons",ATmakeString("constructor "),App2("Cons",Egetd(7,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString(" not declared"),App0("Nil")))))));
  Ccall(_stratego_k_47);
  Tdupl();
  Epushd(9,1);
  MoveTop(9,1);
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_49);
  Epopd(9,1);
  Tpop();
  Epopd(8,1);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Op",Egetd(7,2),Egetd(7,3)));
  AllInit();
  i_86 :
  AllNextSon(&&j_86);
  Cpush(l_86);
  Rpush(m_86);
  goto e_143;
  m_86 :
  goto k_86;
  l_86 :
  goto n_86;
  k_86 :
  Cpop();
  n_86 :
  goto i_86;
  j_86 :
  AllBuild();
  Return();
  e_83 :
  Epopd(7,3);
  goto x_82;
  d_83 :
  IsAppl();
  SomeInit();
  p_86 :
  SomeNextSon(&&q_86);
  Cpush(p_86);
  Rpush(r_86);
  goto e_143;
  r_86 :
  Cpop();
  CounterOK();
  goto p_86;
  q_86 :
  SomeBuild();
  goto o_86;
  x_82 :
  Cpop();
  o_86 :
  Return();
  s_82 :
  Epopd(6,1);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(4,4);
  Tset(App3("RDef",Egetd(4,2),Egetd(4,3),Egetd(4,4)));
  Epopd(5,1);
  Return();
  l_76 :
  Epopd(4,4);
  OneNextSon();
  Rpush(s_86);
  goto d_143;
  s_86 :
  AllBuild();
  goto b_76;
  g_76 :
  Epushd(4,3);
  MoveTop(4,1);
  goto c_121;
  c_121 :
  TestFunFC(t_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(v_86);
  goto b_121;
  v_86 :
  goto u_86;
  b_121 :
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(w_86);
  goto d_143;
  w_86 :
  Return();
  u_86 :
  Epopd(4,3);
  goto t_86;
  b_76 :
  Cpop();
  t_86 :
  Return();
  a_76 :
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(x_86);
  k_143 :
  Cpush(z_86);
  Ccall(_stratego_q_49);
  goto y_86;
  z_86 :
  Ccontinue(a_87);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(4,4);
  MoveTop(4,1);
  goto j_123;
  j_123 :
  TestFunFC(q_20,&&l_87,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(k_87);
  goto d_121;
  l_87 :
  TestFunFC(u_6,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(k_87);
  goto e_121;
  k_87 :
  goto j_87;
  e_121 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  NotNULLd(4,2);
  Tset(App2("Cons",ATmakeString("warning: in definition "),App2("Cons",Egetd(4,2),App2("Cons",ATmakeString(": "),App0("Nil")))));
  Ccall(_stratego_k_47);
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(m_87);
  o_143 :
  Cpush(p_87);
  Epushd(7,3);
  MoveTop(7,1);
  goto i_123;
  i_123 :
  TestFunFC(r_16,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(w_87);
  goto i_122;
  w_87 :
  goto q_87;
  i_122 :
  Tdupl();
  Epushd(8,1);
  Cpush(x_87);
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(z_87);
  p_143 :
  Cpush(h_88);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(9,1);
  TestFunTop(h_13);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MoveTop(10,1);
  Move(7,2,10,1);
  Epopd(10,1);
  OneNextSon();
  Epushd(10,3);
  MoveTop(10,1);
  goto n_122;
  n_122 :
  TestFunFC(j_13,&&m_88,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(l_88);
  goto k_122;
  m_88 :
  TestFunFC(k_13,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(l_88);
  goto l_122;
  l_88 :
  goto k_88;
  l_122 :
  Move(9,1,10,2);
  Return();
  k_88 :
  goto i_88;
  k_122 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(9,1);
  Tpop();
  Return();
  i_88 :
  Epopd(10,3);
  AllBuild();
  NotNULLd(7,3);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(7,3),App2("TCons",Egetd(9,1),App0("TNil"))));
  Rpush(n_88);
  q_143 :
  Epushd(10,9);
  MoveTop(10,1);
  goto u_122;
  u_122 :
  TestFunFC(c_7,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  goto v_122;
  v_122 :
  TestFunFC(s_2,&&v_88,Egetd(10,2));
  goto w_122;
  w_122 :
  TestFunFC(c_7,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto x_122;
  x_122 :
  TestFunFC(s_2,&&fail,Egetd(10,6));
  goto y_122;
  y_122 :
  TestFunFC(d_7,&&fail,Egetd(10,9));
  Rpush(t_88);
  goto o_122;
  v_88 :
  TestFunFC(t_2,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto z_122;
  z_122 :
  TestFunFC(c_7,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto a_123;
  a_123 :
  TestFunFC(t_2,&&fail,Egetd(10,6));
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  goto b_123;
  b_123 :
  TestFunFC(d_7,&&fail,Egetd(10,9));
  Rpush(t_88);
  goto p_122;
  t_88 :
  goto s_88;
  p_122 :
  Epushd(11,5);
  NotNULLd(10,3);
  NotNULLd(10,7);
  NotNULLd(10,4);
  NotNULLd(10,8);
  Tset(App2("TCons",App2("TCons",Egetd(10,3),App2("TCons",Egetd(10,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(10,4),App2("TCons",Egetd(10,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(y_88);
  goto q_143;
  y_88 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(11,1);
  goto r_122;
  r_122 :
  TestFunFC(c_7,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  goto s_122;
  s_122 :
  TestFunFC(c_7,&&fail,Egetd(11,3));
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  goto t_122;
  t_122 :
  TestFunFC(d_7,&&fail,Egetd(11,5));
  Rpush(z_88);
  goto q_122;
  z_88 :
  goto x_88;
  q_122 :
  NotNULLd(11,2);
  NotNULLd(11,4);
  Tset(App2("Cons",Egetd(11,2),Egetd(11,4)));
  Return();
  x_88 :
  Epopd(11,5);
  Return();
  s_88 :
  goto p_88;
  o_122 :
  Tset(App0("Nil"));
  Return();
  p_88 :
  Epopd(10,9);
  Return();
  n_88 :
  Epopd(9,1);
  OneNextSon();
  AllBuild();
  goto b_88;
  h_88 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_89);
  goto p_143;
  d_89 :
  AllBuild();
  goto b_89;
  b_88 :
  Cpop();
  b_89 :
  Return();
  z_87 :
  Cpop();
  Crestore();
  Cjump();
  x_87 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Ccall(_stratego_h_47);
  Ccall(_stratego_f_47);
  MoveTop(8,1);
  NotNULLd(7,2);
  NotNULLd(8,1);
  Tset(App2("Cons",ATmakeString("constructor "),App2("Cons",Egetd(7,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString(" not declared"),App0("Nil")))))));
  Ccall(_stratego_k_47);
  Tdupl();
  Epushd(9,1);
  MoveTop(9,1);
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_49);
  Epopd(9,1);
  Tpop();
  Epopd(8,1);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Op",Egetd(7,2),Egetd(7,3)));
  AllInit();
  t_89 :
  AllNextSon(&&u_89);
  Cpush(m_90);
  Rpush(n_90);
  goto o_143;
  n_90 :
  goto l_90;
  m_90 :
  goto o_90;
  l_90 :
  Cpop();
  o_90 :
  goto t_89;
  u_89 :
  AllBuild();
  Return();
  q_87 :
  Epopd(7,3);
  goto o_87;
  p_87 :
  IsAppl();
  SomeInit();
  n_91 :
  SomeNextSon(&&g_92);
  Cpush(n_91);
  Rpush(h_92);
  goto o_143;
  h_92 :
  Cpop();
  CounterOK();
  goto n_91;
  g_92 :
  SomeBuild();
  goto p_90;
  o_87 :
  Cpop();
  p_90 :
  Return();
  m_87 :
  Epopd(6,1);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(4,4);
  Tset(App3("SDef",Egetd(4,2),Egetd(4,3),Egetd(4,4)));
  Epopd(5,1);
  Return();
  j_87 :
  goto i_87;
  d_121 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  NotNULLd(4,2);
  Tset(App2("Cons",ATmakeString("warning: in rule "),App2("Cons",Egetd(4,2),App2("Cons",ATmakeString(": "),App0("Nil")))));
  Ccall(_stratego_k_47);
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(i_92);
  l_143 :
  Cpush(d_93);
  Epushd(7,3);
  MoveTop(7,1);
  goto g_122;
  g_122 :
  TestFunFC(r_16,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(f_93);
  goto g_121;
  f_93 :
  goto e_93;
  g_121 :
  Tdupl();
  Epushd(8,1);
  Cpush(l_93);
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(m_93);
  m_143 :
  Cpush(u_93);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(9,1);
  TestFunTop(h_13);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MoveTop(10,1);
  Move(7,2,10,1);
  Epopd(10,1);
  OneNextSon();
  Epushd(10,3);
  MoveTop(10,1);
  goto l_121;
  l_121 :
  TestFunFC(j_13,&&b_95,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(x_94);
  goto i_121;
  b_95 :
  TestFunFC(k_13,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(x_94);
  goto j_121;
  x_94 :
  goto w_94;
  j_121 :
  Move(9,1,10,2);
  Return();
  w_94 :
  goto v_93;
  i_121 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(9,1);
  Tpop();
  Return();
  v_93 :
  Epopd(10,3);
  AllBuild();
  NotNULLd(7,3);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(7,3),App2("TCons",Egetd(9,1),App0("TNil"))));
  Rpush(c_95);
  n_143 :
  Epushd(10,9);
  MoveTop(10,1);
  goto s_121;
  s_121 :
  TestFunFC(c_7,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  goto t_121;
  t_121 :
  TestFunFC(s_2,&&y_95,Egetd(10,2));
  goto u_121;
  u_121 :
  TestFunFC(c_7,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto v_121;
  v_121 :
  TestFunFC(s_2,&&fail,Egetd(10,6));
  goto w_121;
  w_121 :
  TestFunFC(d_7,&&fail,Egetd(10,9));
  Rpush(x_95);
  goto m_121;
  y_95 :
  TestFunFC(t_2,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto x_121;
  x_121 :
  TestFunFC(c_7,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto y_121;
  y_121 :
  TestFunFC(t_2,&&fail,Egetd(10,6));
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  goto z_121;
  z_121 :
  TestFunFC(d_7,&&fail,Egetd(10,9));
  Rpush(x_95);
  goto n_121;
  x_95 :
  goto o_95;
  n_121 :
  Epushd(11,5);
  NotNULLd(10,3);
  NotNULLd(10,7);
  NotNULLd(10,4);
  NotNULLd(10,8);
  Tset(App2("TCons",App2("TCons",Egetd(10,3),App2("TCons",Egetd(10,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(10,4),App2("TCons",Egetd(10,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(f_96);
  goto n_143;
  f_96 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(11,1);
  goto p_121;
  p_121 :
  TestFunFC(c_7,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  goto q_121;
  q_121 :
  TestFunFC(c_7,&&fail,Egetd(11,3));
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  goto r_121;
  r_121 :
  TestFunFC(d_7,&&fail,Egetd(11,5));
  Rpush(g_96);
  goto o_121;
  g_96 :
  goto z_95;
  o_121 :
  NotNULLd(11,2);
  NotNULLd(11,4);
  Tset(App2("Cons",Egetd(11,2),Egetd(11,4)));
  Return();
  z_95 :
  Epopd(11,5);
  Return();
  o_95 :
  goto g_95;
  m_121 :
  Tset(App0("Nil"));
  Return();
  g_95 :
  Epopd(10,9);
  Return();
  c_95 :
  Epopd(9,1);
  OneNextSon();
  AllBuild();
  goto o_93;
  u_93 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_96);
  goto m_143;
  i_96 :
  AllBuild();
  goto h_96;
  o_93 :
  Cpop();
  h_96 :
  Return();
  m_93 :
  Cpop();
  Crestore();
  Cjump();
  l_93 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Ccall(_stratego_h_47);
  Ccall(_stratego_f_47);
  MoveTop(8,1);
  NotNULLd(7,2);
  NotNULLd(8,1);
  Tset(App2("Cons",ATmakeString("constructor "),App2("Cons",Egetd(7,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString(" not declared"),App0("Nil")))))));
  Ccall(_stratego_k_47);
  Tdupl();
  Epushd(9,1);
  MoveTop(9,1);
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_l_49);
  Epopd(9,1);
  Tpop();
  Epopd(8,1);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Op",Egetd(7,2),Egetd(7,3)));
  AllInit();
  j_96 :
  AllNextSon(&&p_96);
  Cpush(a_97);
  Rpush(g_97);
  goto l_143;
  g_97 :
  goto q_96;
  a_97 :
  goto h_97;
  q_96 :
  Cpop();
  h_97 :
  goto j_96;
  p_96 :
  AllBuild();
  Return();
  e_93 :
  Epopd(7,3);
  goto c_93;
  d_93 :
  IsAppl();
  SomeInit();
  x_97 :
  SomeNextSon(&&z_97);
  Cpush(x_97);
  Rpush(a_98);
  goto l_143;
  a_98 :
  Cpop();
  CounterOK();
  goto x_97;
  z_97 :
  SomeBuild();
  goto t_97;
  c_93 :
  Cpop();
  t_97 :
  Return();
  i_92 :
  Epopd(6,1);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(4,4);
  Tset(App3("RDef",Egetd(4,2),Egetd(4,3),Egetd(4,4)));
  Epopd(5,1);
  Return();
  i_87 :
  Epopd(4,4);
  OneNextSon();
  Rpush(b_98);
  goto k_143;
  b_98 :
  AllBuild();
  goto y_86;
  a_87 :
  Epushd(4,3);
  MoveTop(4,1);
  goto l_123;
  l_123 :
  TestFunFC(t_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(o_98);
  goto k_123;
  o_98 :
  goto n_98;
  k_123 :
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(p_98);
  goto k_143;
  p_98 :
  Return();
  n_98 :
  Epopd(4,3);
  goto e_98;
  y_86 :
  Cpop();
  e_98 :
  Return();
  x_86 :
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto n_123;
  n_123 :
  TestFunFC(c_7,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto o_123;
  o_123 :
  TestFunFC(s_2,&&fail,Egetd(3,2));
  goto p_123;
  p_123 :
  TestFunFC(c_7,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto q_123;
  q_123 :
  TestFunFC(s_2,&&fail,Egetd(3,4));
  goto r_123;
  r_123 :
  TestFunFC(d_7,&&fail,Egetd(3,5));
  Rpush(q_98);
  goto m_123;
  q_98 :
  goto u_75;
  m_123 :
  Return();
  u_75 :
  Epopd(3,5);
  Tpop();
  NotNULLd(2,6);
  NotNULLd(2,10);
  NotNULLd(2,13);
  Tset(App1("Specification",App2("Cons",App1("Signature",App2("Cons",App1("Operations",Egetd(2,6)),App0("Nil"))),App2("Cons",App1("Rules",Egetd(2,10)),App2("Cons",App1("Strategies",Egetd(2,13)),App0("Nil"))))));
  Return();
  o_75 :
  Epopd(2,14);
  goto j_75;
  k_75 :
  goto s_98;
  j_75 :
  Cpop();
  s_98 :
  MoveTop(1,10);
  goto u_124;
  u_124 :
  TestFunFC(g_37,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  goto v_124;
  v_124 :
  TestFunFC(t_2,&&fail,Egetd(1,11));
  MoveArg(1,12,1,11,0);
  MoveArg(1,14,1,11,1);
  goto w_124;
  w_124 :
  TestFunFC(j_37,&&fail,Egetd(1,12));
  MoveArg(1,13,1,12,0);
  goto x_124;
  x_124 :
  TestFunFC(t_2,&&fail,Egetd(1,14));
  MoveArg(1,15,1,14,0);
  MoveArg(1,17,1,14,1);
  goto y_124;
  y_124 :
  TestFunFC(l_37,&&fail,Egetd(1,15));
  MoveArg(1,16,1,15,0);
  goto z_124;
  z_124 :
  TestFunFC(t_2,&&fail,Egetd(1,17));
  MoveArg(1,18,1,17,0);
  MoveArg(1,20,1,17,1);
  goto a_125;
  a_125 :
  TestFunFC(m_37,&&fail,Egetd(1,18));
  MoveArg(1,19,1,18,0);
  goto b_125;
  b_125 :
  TestFunFC(s_2,&&fail,Egetd(1,20));
  Rpush(y_98);
  goto d_124;
  y_98 :
  goto d_75;
  d_124 :
  Epushd(2,11);
  NotNULLd(1,13);
  Tset(Egetd(1,13));
  Ccall(_stratego_z_46);
  MoveTop(2,1);
  NotNULLd(1,16);
  Tset(Egetd(1,16));
  Rpush(z_98);
  r_143 :
  Cpush(e_99);
  Ccall(_stratego_q_49);
  goto d_99;
  e_99 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto h_124;
  h_124 :
  TestFunFC(q_20,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(u_99);
  goto f_124;
  u_99 :
  goto t_99;
  f_124 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Ccall(_stratego_l_48);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(3,3);
  NotNULLd(4,1);
  NotNULLd(3,4);
  Tset(App3("SDef",Egetd(3,2),Egetd(3,3),App2("Scope",Egetd(4,1),App1("SRule",Egetd(3,4)))));
  Epopd(4,1);
  Return();
  t_99 :
  Epopd(3,4);
  OneNextSon();
  Rpush(w_99);
  goto r_143;
  w_99 :
  AllBuild();
  goto k_99;
  d_99 :
  Cpop();
  k_99 :
  Return();
  z_98 :
  MoveTop(2,2);
  NotNULLd(1,19);
  Tset(Egetd(1,19));
  Rpush(y_99);
  s_143 :
  Cpush(f_100);
  Ccall(_stratego_q_49);
  goto e_100;
  f_100 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto l_124;
  l_124 :
  TestFunFC(u_6,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(w_100);
  goto j_124;
  w_100 :
  goto k_100;
  j_124 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Ccall(_stratego_l_48);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(3,3);
  NotNULLd(4,1);
  NotNULLd(3,4);
  Tset(App3("SDef",Egetd(3,2),Egetd(3,3),App2("Scope",Egetd(4,1),Egetd(3,4))));
  Epopd(4,1);
  Return();
  k_100 :
  Epopd(3,4);
  OneNextSon();
  Rpush(e_101);
  goto s_143;
  e_101 :
  AllBuild();
  goto j_100;
  e_100 :
  Cpop();
  j_100 :
  Return();
  y_99 :
  MoveTop(2,3);
  NotNULLd(2,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("Cons",Egetd(2,1),App2("Cons",Egetd(2,2),App2("Cons",Egetd(2,3),App0("Nil")))));
  Ccall(_stratego_v_48);
  MoveTop(2,4);
  NotNULLd(1,13);
  NotNULLd(2,4);
  Tset(App1("Specification",App2("Cons",App1("Signature",Egetd(1,13)),App2("Cons",App1("Strategies",Egetd(2,4)),App0("Nil")))));
  Ccall(_stratego_w_46);
  MoveTop(2,5);
  goto p_124;
  p_124 :
  TestFunFC(g_37,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  goto q_124;
  q_124 :
  TestFunFC(t_2,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto r_124;
  r_124 :
  TestFunFC(t_2,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  MoveArg(2,11,2,8,1);
  goto s_124;
  s_124 :
  TestFunFC(m_37,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  goto t_124;
  t_124 :
  TestFunFC(s_2,&&fail,Egetd(2,11));
  Rpush(g_101);
  goto o_124;
  g_101 :
  goto f_101;
  o_124 :
  NotNULLd(2,10);
  Tset(Egetd(2,10));
  Ccall(_stratego_r_46);
  Return();
  f_101 :
  Epopd(2,11);
  Return();
  d_75 :
  Epopd(1,20);
  Return();
  f_62 :
  Epopd(0,14);
ENDPROC

PROC(_stratego_b_49)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_143;
  u_143 :
  TestFunFC(d_7,&&fail,Egetd(0,1));
  Rpush(e_102);
  goto t_143;
  e_102 :
  goto i_101;
  t_143 :
  Return();
  i_101 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_49)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_l_49);
  Tset(MakeInt(1));
  Ccall(_stratego_k_49);
ENDPROC

PROC(_stratego_d_49)
  Epushd(0,2);
  Tdupl();
  Cpush(h_102);
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Cpush(z_102);
  Tdupl();
  Rpush(l_103);
  s_144 :
  Cpush(o_103);
  Epushd(1,3);
  MoveTop(1,1);
  goto x_143;
  x_143 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_143;
  y_143 :
  TestFunFC(r_103,&&fail,Egetd(1,2));
  Rpush(q_103);
  goto w_143;
  q_103 :
  goto p_103;
  w_143 :
  Return();
  p_103 :
  Epopd(1,3);
  goto n_103;
  o_103 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_104);
  goto s_144;
  c_104 :
  AllBuild();
  goto b_104;
  n_103 :
  Cpop();
  b_104 :
  Return();
  l_103 :
  Cpop();
  Crestore();
  Cjump();
  z_102 :
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(d_104);
  t_144 :
  Cpush(k_104);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_144;
  a_144 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_144;
  b_144 :
  TestFunFC(q_104,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_104);
  goto z_143;
  n_104 :
  goto l_104;
  z_143 :
  Move(0,2,1,3);
  Return();
  l_104 :
  Epopd(1,4);
  goto e_104;
  k_104 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_104);
  goto t_144;
  t_104 :
  AllBuild();
  goto s_104;
  e_104 :
  Cpop();
  s_104 :
  Return();
  d_104 :
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(d_105);
  u_144 :
  Cpush(g_105);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_144;
  d_144 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_144;
  e_144 :
  TestFunFC(n_105,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_105);
  goto c_144;
  m_105 :
  goto l_105;
  c_144 :
  Move(0,1,1,3);
  Return();
  l_105 :
  Epopd(1,4);
  goto e_105;
  g_105 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_106);
  goto u_144;
  l_106 :
  AllBuild();
  goto i_106;
  e_105 :
  Cpop();
  i_106 :
  Return();
  d_105 :
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_l_49);
  goto g_102;
  h_102 :
  goto q_106;
  g_102 :
  Cpop();
  q_106 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_k_49);
  Epopd(0,2);
ENDPROC

PROC(_stratego_e_49)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_f_49)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_g_49)
  Epushd(0,1);
  Tdupl();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Cpush(v_106);
  Rpush(z_106);
  u_145 :
  Cpush(b_107);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_144;
  w_144 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_144;
  x_144 :
  TestFunFC(l_107,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_107);
  goto v_144;
  h_107 :
  goto g_107;
  v_144 :
  Move(0,1,1,3);
  Return();
  g_107 :
  Epopd(1,4);
  goto a_107;
  b_107 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_107);
  goto u_145;
  v_107 :
  AllBuild();
  goto m_107;
  a_107 :
  Cpop();
  m_107 :
  Return();
  z_106 :
  goto u_106;
  v_106 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto w_107;
  u_106 :
  Cpop();
  w_107 :
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  Cpush(z_107);
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Rpush(a_108);
  v_145 :
  Cpush(c_108);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_145;
  d_145 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_145;
  e_145 :
  TestFunFC(f_108,&&fail,Egetd(1,2));
  Rpush(e_108);
  goto c_145;
  e_108 :
  goto d_108;
  c_145 :
  Return();
  d_108 :
  Epopd(1,3);
  goto b_108;
  c_108 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_108);
  goto v_145;
  j_108 :
  AllBuild();
  goto h_108;
  b_108 :
  Cpop();
  h_108 :
  Return();
  a_108 :
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_49);
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  goto y_107;
  z_107 :
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_49);
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  goto k_108;
  y_107 :
  Cpop();
  k_108 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_49)
  _ST_dtime();
ENDPROC

PROC(_stratego_i_49)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_j_49)
  Epushd(0,3);
  Tdupl();
  Cpush(m_108);
  Rpush(n_108);
  p_146 :
  Cpush(p_108);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_145;
  x_145 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_145;
  y_145 :
  TestFunFC(t_108,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_108);
  goto w_145;
  s_108 :
  goto r_108;
  w_145 :
  Move(0,1,1,3);
  Return();
  r_108 :
  Epopd(1,4);
  goto o_108;
  p_108 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_109);
  goto p_146;
  b_109 :
  AllBuild();
  goto a_109;
  o_108 :
  Cpop();
  a_109 :
  Return();
  n_108 :
  goto l_108;
  m_108 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto j_109;
  l_108 :
  Cpop();
  j_109 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_i_49);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_k_49)
  _ST_exit();
ENDPROC

PROC(_stratego_l_49)
  _ST_printnl();
ENDPROC

PROC(_stratego_m_49)
  Epushd(0,1);
  Tdupl();
  Rpush(k_109);
  y_146 :
  Cpush(u_109);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_146;
  r_146 :
  TestFunFC(t_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_146;
  s_146 :
  TestFunFC(n_105,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(x_109);
  goto q_146;
  x_109 :
  goto w_109;
  q_146 :
  Move(0,1,1,3);
  Return();
  w_109 :
  Epopd(1,4);
  goto q_109;
  u_109 :
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_109);
  goto y_146;
  z_109 :
  AllBuild();
  goto y_109;
  q_109 :
  Cpop();
  y_109 :
  Return();
  k_109 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_l_49);
  Tset(MakeInt(1));
  Ccall(_stratego_k_49);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_49)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_147;
  a_147 :
  TestFunFC(i_110,&&fail,Egetd(0,1));
  Rpush(g_110);
  goto z_146;
  g_110 :
  goto e_110;
  z_146 :
  Return();
  e_110 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_49)
  Tdupl();
  k_110 :
  TestFunTop(t_2);
  Cpush(h_111);
  Arg(0);
  Cpush(a_112);
  Ccall(_stratego_n_49);
  goto w_111;
  a_112 :
  Epushd(0,2);
  MoveTop(0,1);
  goto d_147;
  d_147 :
  TestFunFC(z_112,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(y_112);
  goto c_147;
  y_112 :
  goto x_112;
  c_147 :
  Return();
  x_112 :
  Epopd(0,2);
  goto b_112;
  w_111 :
  Cpop();
  b_112 :
  Tpop();
  Cpop();
  goto o_111;
  h_111 :
  Arg(1);
  Tdrop();
  goto k_110;
  o_111 :
  Tpop();
  Ccall(_stratego_m_49);
ENDPROC

PROC(_stratego_p_49)
  Epushd(0,5);
  MoveTop(0,3);
  goto u_149;
  u_149 :
  TestFunFC(t_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_149;
  v_149 :
  TestFunFC(t_2,&&o_114,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(z_114);
  Rpush(a_115);
  goto h_147;
  a_115 :
  goto x_114;
  z_114 :
  Ccontinue(b_115);
  Rpush(c_115);
  goto i_147;
  c_115 :
  goto x_114;
  b_115 :
  Ccontinue(c_116);
  Rpush(j_116);
  goto j_147;
  j_116 :
  goto x_114;
  c_116 :
  Ccontinue(c_117);
  Rpush(j_117);
  goto k_147;
  j_117 :
  goto x_114;
  c_117 :
  Ccontinue(l_117);
  Rpush(n_117);
  goto l_147;
  n_117 :
  goto x_114;
  l_117 :
  Ccontinue(g_118);
  Rpush(n_118);
  goto m_147;
  n_118 :
  goto x_114;
  g_118 :
  Ccontinue(p_118);
  Rpush(w_118);
  goto n_147;
  w_118 :
  goto x_114;
  p_118 :
  Ccontinue(y_118);
  Rpush(b_119);
  goto o_147;
  b_119 :
  goto x_114;
  y_118 :
  Ccontinue(r_119);
  Rpush(s_119);
  goto p_147;
  s_119 :
  goto x_114;
  r_119 :
  Ccontinue(t_119);
  Rpush(u_119);
  goto q_147;
  u_119 :
  goto x_114;
  t_119 :
  Ccontinue(v_119);
  Rpush(w_119);
  goto r_147;
  w_119 :
  goto x_114;
  v_119 :
  Ccontinue(y_119);
  Rpush(a_120);
  goto s_147;
  a_120 :
  goto x_114;
  y_119 :
  Ccontinue(d_120);
  Rpush(t_120);
  goto t_147;
  t_120 :
  goto x_114;
  d_120 :
  Ccontinue(u_120);
  Rpush(v_120);
  goto u_147;
  v_120 :
  goto x_114;
  u_120 :
  Rpush(x_120);
  goto v_147;
  x_120 :
  goto w_120;
  x_114 :
  Cpop();
  w_120 :
  goto m_114;
  o_114 :
  Cpush(f_121);
  Rpush(h_121);
  goto h_147;
  h_121 :
  goto y_120;
  f_121 :
  Ccontinue(k_121);
  Rpush(a_122);
  goto i_147;
  a_122 :
  goto y_120;
  k_121 :
  Ccontinue(b_122);
  Rpush(c_122);
  goto j_147;
  c_122 :
  goto y_120;
  b_122 :
  Ccontinue(d_122);
  Rpush(e_122);
  goto k_147;
  e_122 :
  goto y_120;
  d_122 :
  Ccontinue(f_122);
  Rpush(h_122);
  goto l_147;
  h_122 :
  goto y_120;
  f_122 :
  Ccontinue(j_122);
  Rpush(m_122);
  goto r_147;
  m_122 :
  goto y_120;
  j_122 :
  Ccontinue(c_123);
  Rpush(d_123);
  goto s_147;
  d_123 :
  goto y_120;
  c_123 :
  Ccontinue(e_123);
  Rpush(f_123);
  goto t_147;
  f_123 :
  goto y_120;
  e_123 :
  Ccontinue(g_123);
  Rpush(h_123);
  goto u_147;
  h_123 :
  goto y_120;
  g_123 :
  Rpush(g_124);
  goto v_147;
  g_124 :
  goto e_124;
  y_120 :
  Cpop();
  e_124 :
  goto m_114;
  m_114 :
  goto l_114;
  v_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_149;
  s_149 :
  TestStr(1,1,"-?",&&fail);
  Rpush(k_124);
  goto r_149;
  k_124 :
  goto i_124;
  r_149 :
  Return();
  i_124 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_114 :
  goto f_114;
  u_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_149;
  p_149 :
  TestStr(1,1,"-h",&&fail);
  Rpush(n_124);
  goto o_149;
  n_124 :
  goto m_124;
  o_149 :
  Return();
  m_124 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  f_114 :
  goto d_114;
  t_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_149;
  m_149 :
  TestStr(1,1,"--help",&&fail);
  Rpush(b_126);
  goto l_149;
  b_126 :
  goto a_126;
  l_149 :
  Return();
  a_126 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  d_114 :
  goto c_114;
  s_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_149;
  j_149 :
  TestStr(1,1,"-s",&&fail);
  Rpush(d_126);
  goto i_149;
  d_126 :
  goto c_126;
  i_149 :
  Return();
  c_126 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  c_114 :
  goto w_113;
  r_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_149;
  g_149 :
  TestStr(1,1,"-b",&&fail);
  Rpush(k_126);
  goto f_149;
  k_126 :
  goto j_126;
  f_149 :
  Return();
  j_126 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  w_113 :
  goto u_113;
  q_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_149;
  c_149 :
  TestStr(1,1,"--output",&&fail);
  Rpush(d_127);
  goto b_149;
  d_127 :
  goto c_127;
  b_149 :
  Return();
  c_127 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  u_113 :
  goto t_113;
  p_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_148;
  y_148 :
  TestStr(1,1,"-o",&&fail);
  Rpush(f_127);
  goto x_148;
  f_127 :
  goto e_127;
  x_148 :
  Return();
  e_127 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  t_113 :
  goto n_113;
  o_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_148;
  u_148 :
  TestStr(1,1,"--input",&&fail);
  Rpush(m_127);
  goto t_148;
  m_127 :
  goto l_127;
  t_148 :
  Return();
  l_127 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  n_113 :
  goto l_113;
  n_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_148;
  q_148 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_127);
  goto p_148;
  z_127 :
  goto o_127;
  p_148 :
  Return();
  o_127 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  l_113 :
  goto k_113;
  m_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_148;
  m_148 :
  TestStr(1,1,"@version",&&fail);
  Rpush(s_128);
  goto l_148;
  s_128 :
  goto a_128;
  l_148 :
  Return();
  a_128 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  k_113 :
  goto e_113;
  l_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_148;
  j_148 :
  TestStr(1,1,"--version",&&fail);
  Rpush(u_128);
  goto i_148;
  u_128 :
  goto t_128;
  i_148 :
  Return();
  t_128 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  e_113 :
  goto d_113;
  k_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_148;
  g_148 :
  TestStr(1,1,"-v",&&fail);
  Rpush(b_129);
  goto f_148;
  b_129 :
  goto v_128;
  f_148 :
  Return();
  v_128 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  d_113 :
  goto c_113;
  j_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_148;
  d_148 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(e_129);
  goto c_148;
  e_129 :
  goto c_129;
  c_148 :
  Return();
  c_129 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  c_113 :
  goto b_113;
  i_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_148;
  a_148 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(q_129);
  goto z_147;
  q_129 :
  goto l_129;
  z_147 :
  Return();
  l_129 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  b_113 :
  goto a_113;
  h_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_147;
  x_147 :
  TestStr(1,1,"-S",&&fail);
  Rpush(s_129);
  goto w_147;
  s_129 :
  goto r_129;
  w_147 :
  Return();
  r_129 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  a_113 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_49)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_153;
  o_153 :
  TestFunFC(s_2,&&fail,Egetd(0,1));
  Rpush(w_129);
  goto n_153;
  w_129 :
  goto u_129;
  n_153 :
  Return();
  u_129 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_49)
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(b_130);
  o_154 :
  Cpush(u_130);
  Cpush(w_130);
  Ccall(_stratego_q_49);
  goto v_130;
  w_130 :
  Ccall(_stratego_p_49);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_131);
  goto o_154;
  d_131 :
  AllBuild();
  goto x_130;
  v_130 :
  Cpop();
  x_130 :
  goto c_130;
  u_130 :
  Epushd(0,3);
  MoveTop(0,1);
  goto s_153;
  s_153 :
  TestFunFC(t_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(n_131);
  goto r_153;
  n_131 :
  goto g_131;
  r_153 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  g_131 :
  Epopd(0,3);
  goto e_131;
  c_130 :
  Cpop();
  e_131 :
  Return();
  b_130 :
  AllBuild();
  Cpush(u_131);
  Ccall(_stratego_o_49);
  goto t_131;
  u_131 :
  Ccontinue(w_131);
  Epushd(0,6);
  Ccall(_stratego_j_49);
  Tdupl();
  Ccall(_stratego_h_49);
  Tpop();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_49);
  OneNextSon();
  Ccall(_stratego_b_49);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_h_49);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto v_153;
  v_153 :
  TestFunFC(c_7,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_153;
  w_153 :
  TestFunFC(c_7,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_153;
  x_153 :
  TestFunFC(d_7,&&fail,Egetd(0,6));
  Rpush(m_132);
  goto u_153;
  m_132 :
  goto l_132;
  u_153 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  l_132 :
  Ccall(_stratego_g_49);
  Ccall(_stratego_d_49);
  Epopd(0,6);
  goto t_131;
  w_131 :
  Ccall(_stratego_c_49);
  goto n_132;
  t_131 :
  Cpop();
  n_132 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_r_49);
ENDPROC

DOIT

