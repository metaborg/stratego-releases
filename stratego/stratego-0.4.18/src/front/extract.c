#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT

VARDECL(AFun,g_65);
VARDECL(AFun,q_64);
VARDECL(AFun,j_64);
VARDECL(AFun,f_60);
VARDECL(AFun,e_60);
VARDECL(AFun,b_60);
VARDECL(AFun,m_59);
VARDECL(AFun,i_59);
VARDECL(AFun,e_59);
VARDECL(AFun,a_59);
VARDECL(AFun,x_58);
VARDECL(AFun,d_56);
VARDECL(AFun,g_55);
VARDECL(AFun,o_54);
VARDECL(AFun,i_54);
VARDECL(AFun,q_53);
VARDECL(AFun,p_53);
VARDECL(AFun,w_42);
VARDECL(AFun,v_42);
VARDECL(AFun,n_30);
VARDECL(AFun,a_25);
VARDECL(AFun,y_24);
VARDECL(AFun,b_20);
VARDECL(AFun,a_20);
VARDECL(AFun,z_19);
VARDECL(AFun,g_12);
VARDECL(AFun,l_11);
VARDECL(AFun,i_11);
VARDECL(AFun,e_11);
VARDECL(AFun,t_10);
VARDECL(AFun,q_10);
VARDECL(AFun,h_9);
VARDECL(AFun,z_8);
VARDECL(AFun,s_8);
VARDECL(AFun,r_8);
VARDECL(AFun,q_8);
VARDECL(AFun,p_8);
VARDECL(AFun,z_7);
VARDECL(AFun,r_7);
VARDECL(AFun,f_7);
VARDECL(AFun,r_6);
VARDECL(AFun,g_6);
VARDECL(AFun,t_5);
VARDECL(AFun,m_5);
VARDECL(AFun,i_5);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,r_0);
VARDECL(AFun,l_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_q_56);
PROCDECL(_stratego_r_56);
PROCDECL(_stratego_s_56);
PROCDECL(_stratego_t_56);
PROCDECL(_stratego_u_56);
PROCDECL(_stratego_v_56);
PROCDECL(_stratego_w_56);
PROCDECL(_stratego_x_56);
PROCDECL(_stratego_y_56);
PROCDECL(_stratego_z_56);
PROCDECL(_stratego_a_57);
PROCDECL(_stratego_b_57);
PROCDECL(_stratego_c_57);
PROCDECL(_stratego_d_57);
PROCDECL(_stratego_e_57);
PROCDECL(_stratego_f_57);
PROCDECL(_stratego_g_57);
PROCDECL(_stratego_h_57);
PROCDECL(_stratego_i_57);
PROCDECL(_stratego_j_57);
PROCDECL(_stratego_k_57);
PROCDECL(_stratego_l_57);
PROCDECL(_stratego_m_57);
PROCDECL(_stratego_n_57);
PROCDECL(_stratego_q_57);
PROCDECL(_stratego_r_57);
PROCDECL(_stratego_s_57);
PROCDECL(_stratego_t_57);
PROCDECL(_stratego_u_57);
PROCDECL(_stratego_v_57);
PROCDECL(_stratego_w_57);
PROCDECL(_stratego_x_57);
PROCDECL(_stratego_y_57);
PROCDECL(_stratego_z_57);
PROCDECL(_stratego_a_58);
PROCDECL(_stratego_b_58);
PROCDECL(_stratego_c_58);
PROCDECL(_stratego_d_58);
PROCDECL(_stratego_e_58);
PROCDECL(_stratego_f_58);
PROCDECL(_stratego_g_58);
PROCDECL(_stratego_h_58);
PROCDECL(_stratego_i_58);
PROCDECL(_stratego_j_58);
PROCDECL(_stratego_k_58);
PROCDECL(_stratego_l_58);
PROCDECL(_stratego_m_58);
PROCDECL(_stratego_n_58);
PROCDECL(_stratego_o_58);
PROCDECL(_stratego_p_58);
PROCDECL(_stratego_q_58);
PROCDECL(_stratego_r_58);
PROCDECL(_stratego_s_58);
PROCDECL(_stratego_t_58);
PROCDECL(_stratego_u_58);
PROCDECL(_stratego_v_58);

PROC(_stratego_init_afuns)
  MOVE(g_65,ATmakeAFun("Explode",2,0));
  MOVE(q_64,ATmakeAFun("ExplodeCong",2,0));
  MOVE(j_64,ATmakeAFun("Match",1,0));
  MOVE(f_60,ATmakeAFun("BAM",3,0));
  MOVE(e_60,ATmakeAFun("AM",2,0));
  MOVE(b_60,ATmakeAFun("MA",2,0));
  MOVE(m_59,ATmakeAFun("BA",2,0));
  MOVE(i_59,ATmakeAFun("Lets",2,0));
  MOVE(e_59,ATmakeAFun("LChoices",1,0));
  MOVE(a_59,ATmakeAFun("Choices",1,0));
  MOVE(x_58,ATmakeAFun("Seqs",1,0));
  MOVE(d_56,ATmakeAFun("Wld",0,0));
  MOVE(g_55,ATmakeAFun("StratRule",3,0));
  MOVE(o_54,ATmakeAFun("Con",3,0));
  MOVE(i_54,ATmakeAFun("SRule",1,0));
  MOVE(q_53,ATmakeAFun("App",2,0));
  MOVE(p_53,ATmakeAFun("Build",1,0));
  MOVE(w_42,ATmakeAFun("SVar",1,0));
  MOVE(v_42,ATmakeAFun("Call",2,0));
  MOVE(n_30,ATmakeAFun("Mod",2,0));
  MOVE(a_25,ATmakeAFun("Rec",2,0));
  MOVE(y_24,ATmakeAFun("Let",2,0));
  MOVE(b_20,ATmakeAFun("Rule",3,0));
  MOVE(a_20,ATmakeAFun("LRule",1,0));
  MOVE(z_19,ATmakeAFun("Scope",2,0));
  MOVE(g_12,ATmakeAFun("Var",1,0));
  MOVE(l_11,ATmakeAFun("FunType",2,0));
  MOVE(i_11,ATmakeAFun("ConstType",1,0));
  MOVE(e_11,ATmakeAFun("OpDecl",2,0));
  MOVE(t_10,ATmakeAFun("Operations",1,0));
  MOVE(q_10,ATmakeAFun("Sorts",1,0));
  MOVE(h_9,ATmakeAFun("SDef",3,0));
  MOVE(z_8,ATmakeAFun("RDef",3,0));
  MOVE(s_8,ATmakeAFun("Strategies",1,0));
  MOVE(r_8,ATmakeAFun("Rules",1,0));
  MOVE(q_8,ATmakeAFun("Signature",1,0));
  MOVE(p_8,ATmakeAFun("Specification",1,0));
  MOVE(z_7,ATmakeAFun("Runtime",1,0));
  MOVE(r_7,ATmakeAFun("Silent",0,0));
  MOVE(f_7,ATmakeAFun("Binary",0,0));
  MOVE(r_6,ATmakeAFun("Output",1,0));
  MOVE(g_6,ATmakeAFun("Input",1,0));
  MOVE(t_5,ATmakeAFun("Program",1,0));
  MOVE(m_5,ATmakeAFun("Help",0,0));
  MOVE(i_5,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(r_0,ATmakeAFun("TCons",2,0));
  MOVE(l_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_q_56);
ENDPROC

PROC(_stratego_q_56)
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(a_0);
  e_109 :
  Cpush(d_0);
  Cpush(f_0);
  Ccall(_stratego_r_56);
  goto e_0;
  f_0 :
  Ccall(_stratego_s_56);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_0);
  goto e_109;
  h_0 :
  AllBuild();
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  goto b_0;
  d_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_0);
  goto f_109;
  k_0 :
  goto j_0;
  f_109 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  j_0 :
  Epopd(0,3);
  goto i_0;
  b_0 :
  Cpop();
  i_0 :
  Return();
  a_0 :
  AllBuild();
  Cpush(n_0);
  Ccall(_stratego_t_56);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_y_56);
  Tdupl();
  Ccall(_stratego_a_57);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_57);
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_a_57);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto w_2;
  w_2 :
  TestFunFC(r_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_2;
  x_2 :
  TestFunFC(r_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_2;
  y_2 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(q_0);
  goto h_109;
  q_0 :
  goto p_0;
  h_109 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  p_0 :
  Ccall(_stratego_b_57);
  Ccall(_stratego_e_57);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_f_57);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_r_56)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_3;
  a_3 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto i_109;
  v_0 :
  goto u_0;
  i_109 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_56)
  Epushd(0,5);
  MoveTop(0,3);
  goto a_10;
  a_10 :
  TestFunFC(l_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto b_10;
  b_10 :
  TestFunFC(l_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto j_109;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto m_109;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto p_109;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto s_109;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto v_109;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto y_109;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto c_110;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto g_110;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto k_110;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto o_110;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto s_110;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto v_110;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto y_110;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto b_111;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto e_111;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto j_109;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(z_2);
  Rpush(b_3);
  goto m_109;
  b_3 :
  goto t_2;
  z_2 :
  Ccontinue(c_3);
  Rpush(d_3);
  goto p_109;
  d_3 :
  goto t_2;
  c_3 :
  Ccontinue(e_3);
  Rpush(f_3);
  goto s_109;
  f_3 :
  goto t_2;
  e_3 :
  Ccontinue(g_3);
  Rpush(h_3);
  goto v_109;
  h_3 :
  goto t_2;
  g_3 :
  Ccontinue(i_3);
  Rpush(j_3);
  goto s_110;
  j_3 :
  goto t_2;
  i_3 :
  Ccontinue(k_3);
  Rpush(l_3);
  goto v_110;
  l_3 :
  goto t_2;
  k_3 :
  Ccontinue(m_3);
  Rpush(n_3);
  goto y_110;
  n_3 :
  goto t_2;
  m_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto b_111;
  p_3 :
  goto t_2;
  o_3 :
  Rpush(r_3);
  goto e_111;
  r_3 :
  goto q_3;
  t_2 :
  Cpop();
  q_3 :
  goto m_1;
  m_1 :
  goto l_1;
  e_111 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_9;
  y_9 :
  TestStr(1,1,"-?",&&fail);
  Rpush(t_3);
  goto f_111;
  t_3 :
  goto s_3;
  f_111 :
  Return();
  s_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  b_111 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_9;
  v_9 :
  TestStr(1,1,"-h",&&fail);
  Rpush(v_3);
  goto c_111;
  v_3 :
  goto u_3;
  c_111 :
  Return();
  u_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  y_110 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_8;
  c_8 :
  TestStr(1,1,"--help",&&fail);
  Rpush(x_3);
  goto z_110;
  x_3 :
  goto w_3;
  z_110 :
  Return();
  w_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  v_110 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_7;
  c_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(z_3);
  goto w_110;
  z_3 :
  goto y_3;
  w_110 :
  Return();
  y_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  s_110 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_6;
  z_6 :
  TestStr(1,1,"-b",&&fail);
  Rpush(b_4);
  goto t_110;
  b_4 :
  goto a_4;
  t_110 :
  Return();
  a_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  o_110 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto t_6;
  t_6 :
  TestStr(2,1,"--output",&&fail);
  Rpush(d_4);
  goto p_110;
  d_4 :
  goto c_4;
  p_110 :
  Return();
  c_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  g_1 :
  goto f_1;
  k_110 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto e_6;
  e_6 :
  TestStr(2,1,"-o",&&fail);
  Rpush(f_4);
  goto l_110;
  f_4 :
  goto e_4;
  l_110 :
  Return();
  e_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  f_1 :
  goto e_1;
  g_110 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto a_6;
  a_6 :
  TestStr(2,1,"--input",&&fail);
  Rpush(h_4);
  goto h_110;
  h_4 :
  goto g_4;
  h_110 :
  Return();
  g_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  e_1 :
  goto d_1;
  c_110 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto u_5;
  u_5 :
  TestStr(2,1,"-i",&&fail);
  Rpush(j_4);
  goto d_110;
  j_4 :
  goto i_4;
  d_110 :
  Return();
  i_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  d_1 :
  goto c_1;
  y_109 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto n_5;
  n_5 :
  TestStr(2,1,"@version",&&fail);
  Rpush(m_4);
  goto z_109;
  m_4 :
  goto l_4;
  z_109 :
  Return();
  l_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  c_1 :
  goto b_1;
  v_109 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_5;
  k_5 :
  TestStr(1,1,"--version",&&fail);
  Rpush(p_4);
  goto w_109;
  p_4 :
  goto o_4;
  w_109 :
  Return();
  o_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  s_109 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_5;
  d_5 :
  TestStr(1,1,"-v",&&fail);
  Rpush(s_4);
  goto t_109;
  s_4 :
  goto q_4;
  t_109 :
  Return();
  q_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  p_109 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_4;
  r_4 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(u_4);
  goto q_109;
  u_4 :
  goto t_4;
  q_109 :
  Return();
  t_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  m_109 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_4;
  n_4 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(w_4);
  goto n_109;
  w_4 :
  goto v_4;
  n_109 :
  Return();
  v_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  j_109 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_4;
  k_4 :
  TestStr(1,1,"-S",&&fail);
  Rpush(y_4);
  goto k_109;
  y_4 :
  goto x_4;
  k_109 :
  Return();
  x_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_t_56)
  Tdupl();
  z_4 :
  MatchFun("Cons",2);
  Cpush(a_5);
  Arg(0);
  Cpush(e_5);
  Ccall(_stratego_u_56);
  goto c_5;
  e_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto d_10;
  d_10 :
  TestFunFC(i_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(h_5);
  goto i_111;
  h_5 :
  goto g_5;
  i_111 :
  Return();
  g_5 :
  Epopd(0,2);
  goto f_5;
  c_5 :
  Cpop();
  f_5 :
  Tpop();
  Cpop();
  goto b_5;
  a_5 :
  Arg(1);
  Tdrop();
  goto z_4;
  b_5 :
  Tpop();
  Ccall(_stratego_v_56);
ENDPROC

PROC(_stratego_u_56)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_10;
  f_10 :
  TestFunFC(m_5,&&fail,Egetd(0,1));
  Rpush(l_5);
  goto j_111;
  l_5 :
  goto j_5;
  j_111 :
  Return();
  j_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_56)
  Epushd(0,1);
  Tdupl();
  Rpush(o_5);
  k_111 :
  Cpush(q_5);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_10;
  h_10 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_10;
  i_10 :
  TestFunFC(t_5,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_5);
  goto l_111;
  s_5 :
  goto r_5;
  l_111 :
  Move(0,1,1,3);
  Return();
  r_5 :
  Epopd(1,4);
  goto p_5;
  q_5 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_5);
  goto k_111;
  w_5 :
  AllBuild();
  goto v_5;
  p_5 :
  Cpop();
  v_5 :
  Return();
  o_5 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_w_56);
  Tset(MakeInt(1));
  Ccall(_stratego_x_56);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_56)
  _ST_printnl();
ENDPROC

PROC(_stratego_x_56)
  _ST_exit();
ENDPROC

PROC(_stratego_y_56)
  Epushd(0,4);
  Tdupl();
  Cpush(y_5);
  Rpush(z_5);
  m_111 :
  Cpush(c_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_10;
  k_10 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_10;
  l_10 :
  TestFunFC(g_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_6);
  goto n_111;
  f_6 :
  goto d_6;
  n_111 :
  Move(0,1,1,3);
  Return();
  d_6 :
  Epopd(1,4);
  goto b_6;
  c_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_6);
  goto m_111;
  i_6 :
  AllBuild();
  goto h_6;
  b_6 :
  Cpop();
  h_6 :
  Return();
  z_5 :
  goto x_5;
  y_5 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto j_6;
  x_5 :
  Cpop();
  j_6 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_z_56);
  MoveTop(0,4);
  Move(0,3,0,4);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,4);
ENDPROC

PROC(_stratego_z_56)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_a_57)
  _ST_dtime();
ENDPROC

PROC(_stratego_b_57)
  Epushd(0,1);
  Tdupl();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(l_6);
  Rpush(m_6);
  s_111 :
  Cpush(o_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_10;
  r_10 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_10;
  s_10 :
  TestFunFC(r_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_6);
  goto t_111;
  q_6 :
  goto p_6;
  t_111 :
  Move(0,1,1,3);
  Return();
  p_6 :
  Epopd(1,4);
  goto n_6;
  o_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_6);
  goto s_111;
  u_6 :
  AllBuild();
  goto s_6;
  n_6 :
  Cpop();
  s_6 :
  Return();
  m_6 :
  goto k_6;
  l_6 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto v_6;
  k_6 :
  Cpop();
  v_6 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  Cpush(x_6);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(y_6);
  y_111 :
  Cpush(b_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_11;
  c_11 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_11;
  d_11 :
  TestFunFC(f_7,&&fail,Egetd(1,2));
  Rpush(e_7);
  goto z_111;
  e_7 :
  goto d_7;
  z_111 :
  Return();
  d_7 :
  Epopd(1,3);
  goto a_7;
  b_7 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_7);
  goto y_111;
  h_7 :
  AllBuild();
  goto g_7;
  a_7 :
  Cpop();
  g_7 :
  Return();
  y_6 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_57);
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  goto w_6;
  x_6 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_57);
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  goto i_7;
  w_6 :
  Cpop();
  i_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_57)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_d_57)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_e_57)
  Epushd(0,2);
  Tdupl();
  Cpush(k_7);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(l_7);
  Tdupl();
  Rpush(m_7);
  a_112 :
  Cpush(o_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto f_11;
  f_11 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_11;
  g_11 :
  TestFunFC(r_7,&&fail,Egetd(1,2));
  Rpush(q_7);
  goto b_112;
  q_7 :
  goto p_7;
  b_112 :
  Return();
  p_7 :
  Epopd(1,3);
  goto n_7;
  o_7 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_7);
  goto a_112;
  t_7 :
  AllBuild();
  goto s_7;
  n_7 :
  Cpop();
  s_7 :
  Return();
  m_7 :
  Cpop();
  Crestore();
  Cjump();
  l_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(u_7);
  c_112 :
  Cpush(w_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_11;
  j_11 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_11;
  k_11 :
  TestFunFC(z_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_7);
  goto d_112;
  y_7 :
  goto x_7;
  d_112 :
  Move(0,2,1,3);
  Return();
  x_7 :
  Epopd(1,4);
  goto v_7;
  w_7 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_8);
  goto c_112;
  b_8 :
  AllBuild();
  goto a_8;
  v_7 :
  Cpop();
  a_8 :
  Return();
  u_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(d_8);
  e_112 :
  Cpush(f_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_11;
  m_11 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_11;
  n_11 :
  TestFunFC(t_5,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_8);
  goto f_112;
  h_8 :
  goto g_8;
  f_112 :
  Move(0,1,1,3);
  Return();
  g_8 :
  Epopd(1,4);
  goto e_8;
  f_8 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_8);
  goto e_112;
  j_8 :
  AllBuild();
  goto i_8;
  e_8 :
  Cpop();
  i_8 :
  Return();
  d_8 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_w_56);
  goto j_7;
  k_7 :
  goto k_8;
  j_7 :
  Cpop();
  k_8 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_x_56);
  Epopd(0,2);
ENDPROC

PROC(_stratego_f_57)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_w_56);
  Tset(MakeInt(1));
  Ccall(_stratego_x_56);
ENDPROC

PROC(_stratego_g_57)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_11;
  p_11 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(m_8);
  goto g_112;
  m_8 :
  goto l_8;
  g_112 :
  Return();
  l_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_57)
  Epushd(0,11);
  MoveTop(0,1);
  goto z_12;
  z_12 :
  TestFunFC(p_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto a_13;
  a_13 :
  TestFunFC(l_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto b_13;
  b_13 :
  TestFunFC(q_8,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto c_13;
  c_13 :
  TestFunFC(l_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto d_13;
  d_13 :
  TestFunFC(r_8,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto e_13;
  e_13 :
  TestFunFC(l_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,11,0,8,1);
  goto f_13;
  f_13 :
  TestFunFC(s_8,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto g_13;
  g_13 :
  TestFunFC(w_0,&&fail,Egetd(0,11));
  Rpush(o_8);
  goto h_112;
  o_8 :
  goto n_8;
  h_112 :
  Epushd(1,15);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_j_57);
  MoveTop(1,3);
  Move(1,2,1,3);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(t_8);
  j_112 :
  Cpush(v_8);
  Ccall(_stratego_r_56);
  goto u_8;
  v_8 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto w_11;
  w_11 :
  TestFunFC(z_8,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(y_8);
  goto k_112;
  y_8 :
  goto x_8;
  k_112 :
  Epushd(3,2);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_n_57);
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,4);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),App2("Scope",Egetd(3,1),App1("SRule",Egetd(2,4)))));
  Epopd(3,2);
  Return();
  x_8 :
  Epopd(2,4);
  OneNextSon();
  Rpush(a_9);
  goto j_112;
  a_9 :
  AllBuild();
  goto w_8;
  u_8 :
  Cpop();
  w_8 :
  Return();
  t_8 :
  MoveTop(1,5);
  Move(1,4,1,5);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(b_9);
  n_112 :
  Cpush(d_9);
  Ccall(_stratego_r_56);
  goto c_9;
  d_9 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto e_12;
  e_12 :
  TestFunFC(h_9,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(g_9);
  goto o_112;
  g_9 :
  goto f_9;
  o_112 :
  Epushd(3,2);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_n_57);
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,4);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),App2("Scope",Egetd(3,1),Egetd(2,4))));
  Epopd(3,2);
  Return();
  f_9 :
  Epopd(2,4);
  OneNextSon();
  Rpush(i_9);
  goto n_112;
  i_9 :
  AllBuild();
  goto e_9;
  c_9 :
  Cpop();
  e_9 :
  Return();
  b_9 :
  MoveTop(1,7);
  Move(1,6,1,7);
  NotNULLd(1,2);
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("Cons",Egetd(1,2),App2("Cons",Egetd(1,4),App2("Cons",Egetd(1,6),App0("Nil")))));
  Ccall(_stratego_i_57);
  MoveTop(1,8);
  Move(1,1,1,8);
  NotNULLd(0,4);
  NotNULLd(1,1);
  Tset(App1("Specification",App2("Cons",App1("Signature",Egetd(0,4)),App2("Cons",App1("Strategies",Egetd(1,1)),App0("Nil")))));
  Ccall(_stratego_t_57);
  MoveTop(1,9);
  goto u_12;
  u_12 :
  TestFunFC(p_8,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  goto v_12;
  v_12 :
  TestFunFC(l_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto w_12;
  w_12 :
  TestFunFC(l_0,&&fail,Egetd(1,12));
  MoveArg(1,13,1,12,0);
  MoveArg(1,15,1,12,1);
  goto x_12;
  x_12 :
  TestFunFC(s_8,&&fail,Egetd(1,13));
  MoveArg(1,14,1,13,0);
  goto y_12;
  y_12 :
  TestFunFC(w_0,&&fail,Egetd(1,15));
  Rpush(k_9);
  goto s_112;
  k_9 :
  goto j_9;
  s_112 :
  NotNULLd(1,14);
  Tset(Egetd(1,14));
  Ccall(_stratego_x_57);
  Ccall(_stratego_k_58);
  Return();
  j_9 :
  Epopd(1,15);
  Return();
  n_8 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_i_57)
  Rpush(l_9);
  t_112 :
  Cpush(n_9);
  Ccall(_stratego_r_56);
  goto m_9;
  n_9 :
  Epushd(0,3);
  MoveTop(0,1);
  goto i_13;
  i_13 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_9);
  goto u_112;
  q_9 :
  goto p_9;
  u_112 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(r_9);
  v_112 :
  Cpush(t_9);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_9);
  goto v_112;
  u_9 :
  AllBuild();
  goto s_9;
  t_9 :
  Ccall(_stratego_r_56);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(x_9);
  goto t_112;
  x_9 :
  goto w_9;
  s_9 :
  Cpop();
  w_9 :
  Return();
  r_9 :
  Return();
  p_9 :
  Epopd(0,3);
  goto o_9;
  m_9 :
  Cpop();
  o_9 :
  Return();
  l_9 :
ENDPROC

PROC(_stratego_j_57)
  Rpush(z_9);
  w_112 :
  Cpush(e_10);
  Ccall(_stratego_r_56);
  goto c_10;
  e_10 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_57);
  OneNextSon();
  Rpush(j_10);
  goto w_112;
  j_10 :
  AllBuild();
  goto g_10;
  c_10 :
  Cpop();
  g_10 :
  Return();
  z_9 :
  Ccall(_stratego_i_57);
ENDPROC

PROC(_stratego_k_57)
  Epushd(0,2);
  MoveTop(0,1);
  goto l_13;
  l_13 :
  TestFunFC(q_10,&&p_10,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(o_10);
  goto x_112;
  p_10 :
  TestFunFC(t_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(o_10);
  goto y_112;
  o_10 :
  goto n_10;
  y_112 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(u_10);
  z_112 :
  Cpush(w_10);
  Ccall(_stratego_r_56);
  goto v_10;
  w_10 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_57);
  OneNextSon();
  Rpush(y_10);
  goto z_112;
  y_10 :
  AllBuild();
  goto x_10;
  v_10 :
  Cpop();
  x_10 :
  Return();
  u_10 :
  Return();
  n_10 :
  goto m_10;
  x_112 :
  Tset(App0("Nil"));
  Return();
  m_10 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_l_57)
  Epushd(0,5);
  MoveTop(0,1);
  goto r_13;
  r_13 :
  TestFunFC(e_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_13;
  s_13 :
  TestFunFC(i_11,&&h_11,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(b_11);
  goto a_113;
  h_11 :
  TestFunFC(l_11,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(b_11);
  goto b_113;
  b_11 :
  goto a_11;
  b_113 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(o_11);
  c_113 :
  Cpush(r_11);
  Ccall(_stratego_r_56);
  goto q_11;
  r_11 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_57);
  OneNextSon();
  Rpush(t_11);
  goto c_113;
  t_11 :
  AllBuild();
  goto s_11;
  q_11 :
  Cpop();
  s_11 :
  Return();
  o_11 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(u_11);
  e_113 :
  Cpush(x_11);
  Ccall(_stratego_r_56);
  goto v_11;
  x_11 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("Call",App1("SVar",Egetd(2,1)),App0("Nil")));
  Epopd(2,1);
  OneNextSon();
  Rpush(z_11);
  goto e_113;
  z_11 :
  AllBuild();
  goto y_11;
  v_11 :
  Cpop();
  y_11 :
  Return();
  u_11 :
  MoveTop(1,3);
  Move(1,2,1,3);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(1,2);
  Tset(App3("SDef",Egetd(0,2),Egetd(1,1),App2("Cong",Egetd(0,2),Egetd(1,2))));
  Epopd(1,3);
  Return();
  a_11 :
  goto z_10;
  a_113 :
  NotNULLd(0,2);
  Tset(App3("SDef",Egetd(0,2),App0("Nil"),App2("Cong",Egetd(0,2),App0("Nil"))));
  Return();
  z_10 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_m_57)
  _ST_new();
ENDPROC

PROC(_stratego_n_57)
  Rpush(a_12);
  h_113 :
  Cpush(c_12);
  Epushd(0,2);
  MoveTop(0,1);
  goto u_13;
  u_13 :
  TestFunFC(g_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_12);
  goto i_113;
  f_12 :
  goto d_12;
  i_113 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  d_12 :
  Epopd(0,2);
  goto b_12;
  c_12 :
  Ccontinue(h_12);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_s_57);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,3);
  MoveTop(1,1);
  Rpush(i_12);
  goto h_113;
  i_12 :
  MoveTop(1,3);
  Move(1,2,1,3);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_q_57);
  Epopd(1,3);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto b_14;
  b_14 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_14;
  c_14 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto d_14;
  d_14 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(k_12);
  goto o_113;
  k_12 :
  goto j_12;
  o_113 :
  Move(0,3,1,4);
  Return();
  j_12 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(l_12);
  p_113 :
  Cpush(n_12);
  Ccall(_stratego_r_56);
  Tset(App0("Nil"));
  goto m_12;
  n_12 :
  Epushd(1,3);
  MoveTop(1,1);
  goto j_15;
  j_15 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(q_12);
  goto q_113;
  q_12 :
  goto p_12;
  q_113 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(r_12);
  goto p_113;
  r_12 :
  MoveTop(2,2);
  Move(2,1,2,2);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,3);
  goto g_15;
  g_15 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto h_15;
  h_15 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto i_15;
  i_15 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(t_12);
  goto t_113;
  t_12 :
  goto s_12;
  t_113 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(h_13);
  u_113 :
  Cpush(k_13);
  Ccall(_stratego_r_56);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto j_13;
  k_13 :
  Ccontinue(m_13);
  Epushd(3,3);
  MoveTop(3,1);
  goto u_14;
  u_14 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_13);
  goto v_113;
  o_13 :
  goto n_13;
  v_113 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(p_13);
  w_113 :
  Cpush(t_13);
  Epushd(4,3);
  MoveTop(4,1);
  goto t_14;
  t_14 :
  TestFunFC(l_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(w_13);
  goto x_113;
  w_13 :
  goto v_13;
  x_113 :
  Move(3,2,4,2);
  Return();
  v_13 :
  Epopd(4,3);
  goto q_13;
  t_13 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_13);
  goto w_113;
  y_13 :
  AllBuild();
  goto x_13;
  q_13 :
  Cpop();
  x_13 :
  Return();
  p_13 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(z_13);
  goto u_113;
  z_13 :
  Return();
  n_13 :
  Epopd(3,3);
  goto j_13;
  m_13 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_14);
  goto u_113;
  e_14 :
  AllBuild();
  goto a_14;
  j_13 :
  Cpop();
  a_14 :
  Return();
  h_13 :
  Return();
  s_12 :
  Epopd(2,7);
  Return();
  p_12 :
  Epopd(1,3);
  goto o_12;
  m_12 :
  Cpop();
  o_12 :
  Return();
  l_12 :
  Epopd(0,3);
  goto b_12;
  h_12 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto m_15;
  m_15 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto n_15;
  n_15 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto o_15;
  o_15 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(h_14);
  goto z_113;
  h_14 :
  goto g_14;
  z_113 :
  Move(0,2,1,4);
  Return();
  g_14 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(i_14);
  a_114 :
  Cpush(k_14);
  Ccall(_stratego_r_56);
  Tset(App0("Nil"));
  goto j_14;
  k_14 :
  Epushd(1,3);
  MoveTop(1,1);
  goto a_16;
  a_16 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(n_14);
  goto b_114;
  n_14 :
  goto m_14;
  b_114 :
  Epushd(2,9);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(o_14);
  goto h_113;
  o_14 :
  MoveTop(2,2);
  Move(2,1,2,2);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(p_14);
  goto a_114;
  p_14 :
  MoveTop(2,4);
  Move(2,3,2,4);
  NotNULLd(2,1);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,3),App0("TNil"))));
  MoveTop(2,5);
  goto x_15;
  x_15 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto y_15;
  y_15 :
  TestFunFC(r_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto z_15;
  z_15 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(r_14);
  goto e_114;
  r_14 :
  goto q_14;
  e_114 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(s_14);
  f_114 :
  Cpush(w_14);
  Ccall(_stratego_r_56);
  NotNULLd(2,8);
  Tset(Egetd(2,8));
  goto v_14;
  w_14 :
  Ccontinue(x_14);
  Epushd(3,3);
  MoveTop(3,1);
  goto w_15;
  w_15 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(z_14);
  goto g_114;
  z_14 :
  goto y_14;
  g_114 :
  Tdupl();
  NotNULLd(2,8);
  Tset(Egetd(2,8));
  Rpush(a_15);
  h_114 :
  Cpush(c_15);
  Epushd(4,3);
  MoveTop(4,1);
  goto v_15;
  v_15 :
  TestFunFC(l_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(e_15);
  goto i_114;
  e_15 :
  goto d_15;
  i_114 :
  Move(3,2,4,2);
  Return();
  d_15 :
  Epopd(4,3);
  goto b_15;
  c_15 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_15);
  goto h_114;
  k_15 :
  AllBuild();
  goto f_15;
  b_15 :
  Cpop();
  f_15 :
  Return();
  a_15 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(l_15);
  goto f_114;
  l_15 :
  Return();
  y_14 :
  Epopd(3,3);
  goto v_14;
  x_14 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_15);
  goto f_114;
  q_15 :
  AllBuild();
  goto p_15;
  v_14 :
  Cpop();
  p_15 :
  Return();
  s_14 :
  Return();
  q_14 :
  Epopd(2,9);
  Return();
  m_14 :
  Epopd(1,3);
  goto l_14;
  j_14 :
  Cpop();
  l_14 :
  Return();
  i_14 :
  Epopd(0,2);
  goto f_14;
  b_12 :
  Cpop();
  f_14 :
  Return();
  a_12 :
ENDPROC

PROC(_stratego_q_57)
  Epushd(0,5);
  MoveTop(0,5);
  goto r_16;
  r_16 :
  TestFunFC(r_0,&&u_15,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto s_16;
  s_16 :
  TestFunFC(r_0,&&b_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_16;
  x_16 :
  TestFunFC(s_0,&&c_16,Egetd(0,4));
  Cpush(e_16);
  Rpush(h_16);
  goto j_114;
  h_16 :
  goto d_16;
  e_16 :
  Rpush(t_16);
  goto o_114;
  t_16 :
  goto m_16;
  d_16 :
  Cpop();
  m_16 :
  goto t_15;
  c_16 :
  Rpush(t_15);
  goto o_114;
  b_16 :
  Rpush(t_15);
  goto o_114;
  u_15 :
  Rpush(t_15);
  goto o_114;
  t_15 :
  goto s_15;
  o_114 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(u_16);
  p_114 :
  Cpush(w_16);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(z_16);
  Epushd(1,7);
  MoveTop(1,1);
  goto i_16;
  i_16 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto j_16;
  j_16 :
  TestFunFC(r_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto k_16;
  k_16 :
  TestFunFC(r_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto l_16;
  l_16 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  Rpush(h_17);
  goto q_114;
  h_17 :
  goto d_17;
  q_114 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  d_17 :
  Epopd(1,7);
  goto y_16;
  z_16 :
  Ccall(_stratego_r_57);
  goto i_17;
  y_16 :
  Cpop();
  i_17 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  goto v_16;
  w_16 :
  Epushd(1,7);
  MoveTop(1,1);
  goto n_16;
  n_16 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_16;
  o_16 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto p_16;
  p_16 :
  TestFunFC(l_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto q_16;
  q_16 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(l_17);
  goto r_114;
  l_17 :
  goto k_17;
  r_114 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  k_17 :
  Epopd(1,7);
  goto j_17;
  v_16 :
  Cpop();
  j_17 :
  Cpush(n_17);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_56);
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  goto m_17;
  n_17 :
  Rpush(p_17);
  goto p_114;
  p_17 :
  goto o_17;
  m_17 :
  Cpop();
  o_17 :
  Return();
  u_16 :
  Return();
  s_15 :
  goto r_15;
  j_114 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(q_17);
  k_114 :
  Cpush(s_17);
  Ccall(_stratego_r_56);
  goto r_17;
  s_17 :
  Ccontinue(t_17);
  Epushd(1,3);
  MoveTop(1,1);
  goto g_16;
  g_16 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(w_17);
  goto l_114;
  w_17 :
  goto u_17;
  l_114 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(x_17);
  m_114 :
  Cpush(g_18);
  Epushd(2,3);
  MoveTop(2,1);
  goto f_16;
  f_16 :
  TestFunFC(l_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(k_18);
  goto n_114;
  k_18 :
  goto j_18;
  n_114 :
  Move(1,2,2,2);
  Return();
  j_18 :
  Epopd(2,3);
  goto f_18;
  g_18 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_18);
  goto m_114;
  n_18 :
  AllBuild();
  goto l_18;
  f_18 :
  Cpop();
  l_18 :
  Return();
  x_17 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(o_18);
  goto k_114;
  o_18 :
  Return();
  u_17 :
  Epopd(1,3);
  goto r_17;
  t_17 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_18);
  goto k_114;
  q_18 :
  AllBuild();
  goto p_18;
  r_17 :
  Cpop();
  p_18 :
  Return();
  q_17 :
  Return();
  r_15 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_r_57)
  Epushd(0,7);
  MoveTop(0,1);
  goto g_19;
  g_19 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto i_19;
  i_19 :
  TestFunFC(r_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto j_19;
  j_19 :
  TestFunFC(r_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto k_19;
  k_19 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(s_18);
  goto s_114;
  s_18 :
  goto r_18;
  s_114 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto a_17;
  a_17 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto b_17;
  b_17 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto c_17;
  c_17 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(u_18);
  goto t_114;
  u_18 :
  goto t_18;
  t_114 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  t_18 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto e_17;
  e_17 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto f_17;
  f_17 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto g_17;
  g_17 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(w_18);
  goto u_114;
  w_18 :
  goto v_18;
  u_114 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  v_18 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(z_18);
  v_114 :
  Epushd(2,9);
  MoveTop(2,1);
  goto a_18;
  a_18 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto b_18;
  b_18 :
  TestFunFC(w_0,&&d_19,Egetd(2,2));
  goto c_18;
  c_18 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto d_18;
  d_18 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto e_18;
  e_18 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(c_19);
  goto w_114;
  d_19 :
  TestFunFC(l_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_18;
  h_18 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto i_18;
  i_18 :
  TestFunFC(l_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto m_18;
  m_18 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(c_19);
  goto x_114;
  c_19 :
  goto b_19;
  x_114 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(h_19);
  goto v_114;
  h_19 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto v_17;
  v_17 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto y_17;
  y_17 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_17;
  z_17 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(l_19);
  goto y_114;
  l_19 :
  goto e_19;
  y_114 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  e_19 :
  Epopd(3,5);
  Return();
  b_19 :
  goto a_19;
  w_114 :
  Tset(App0("Nil"));
  Return();
  a_19 :
  Epopd(2,9);
  Return();
  z_18 :
  MoveTop(1,5);
  Move(1,4,1,5);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,6);
  goto x_18;
  x_18 :
  TestFunFC(r_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto y_18;
  y_18 :
  TestFunFC(r_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto f_19;
  f_19 :
  TestFunFC(s_0,&&fail,Egetd(1,10));
  Rpush(p_19);
  goto a_115;
  p_19 :
  goto m_19;
  a_115 :
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  Rpush(q_19);
  b_115 :
  Cpush(s_19);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_19);
  goto b_115;
  t_19 :
  AllBuild();
  goto r_19;
  s_19 :
  Ccall(_stratego_r_56);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  goto u_19;
  r_19 :
  Cpop();
  u_19 :
  Return();
  q_19 :
  Return();
  m_19 :
  Epopd(1,10);
  Return();
  r_18 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_s_57)
  Epushd(0,6);
  MoveTop(0,2);
  goto n_19;
  n_19 :
  TestFunFC(z_19,&&y_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(x_19);
  goto c_115;
  y_19 :
  TestFunFC(a_20,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto o_19;
  o_19 :
  TestFunFC(b_20,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(x_19);
  goto d_115;
  x_19 :
  goto w_19;
  d_115 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_n_57);
  Return();
  w_19 :
  goto v_19;
  c_115 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  v_19 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_t_57)
  Ccall(_stratego_u_57);
  Ccall(_stratego_w_57);
ENDPROC

PROC(_stratego_u_57)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(c_20);
  f_115 :
  Rpush(o_20);
  g_115 :
  Epushd(1,5);
  MoveTop(1,1);
  goto c_21;
  c_21 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_21;
  d_21 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_21;
  e_21 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Cpush(b_21);
  Rpush(f_21);
  goto h_115;
  f_21 :
  goto w_20;
  b_21 :
  Ccontinue(g_21);
  Rpush(o_21);
  goto l_115;
  o_21 :
  goto w_20;
  g_21 :
  Rpush(q_21);
  goto a_116;
  q_21 :
  goto p_21;
  w_20 :
  Cpop();
  p_21 :
  goto v_20;
  v_20 :
  goto u_20;
  a_116 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  r_21 :
  AllNextSon(&&s_21);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(t_21);
  goto g_115;
  t_21 :
  Epopd(2,1);
  goto r_21;
  s_21 :
  AllBuild();
  Return();
  u_20 :
  goto q_20;
  l_115 :
  Epushd(2,12);
  Tdupl();
  Epushd(3,9);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_s_57);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(u_21);
  n_115 :
  Cpush(w_21);
  Ccall(_stratego_r_56);
  goto v_21;
  w_21 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_57);
  OneNextSon();
  Rpush(a_22);
  goto n_115;
  a_22 :
  AllBuild();
  goto x_21;
  v_21 :
  Cpop();
  x_21 :
  Return();
  u_21 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(b_22);
  p_115 :
  Epushd(4,9);
  MoveTop(4,1);
  goto g_20;
  g_20 :
  TestFunFC(r_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto h_20;
  h_20 :
  TestFunFC(w_0,&&q_22,Egetd(4,2));
  goto i_20;
  i_20 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto j_20;
  j_20 :
  TestFunFC(w_0,&&fail,Egetd(4,6));
  goto k_20;
  k_20 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(e_22);
  goto q_115;
  q_22 :
  TestFunFC(l_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto l_20;
  l_20 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto m_20;
  m_20 :
  TestFunFC(l_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto n_20;
  n_20 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(e_22);
  goto r_115;
  e_22 :
  goto d_22;
  r_115 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(s_22);
  goto p_115;
  s_22 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto d_20;
  d_20 :
  TestFunFC(r_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto e_20;
  e_20 :
  TestFunFC(r_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto f_20;
  f_20 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(w_22);
  goto s_115;
  w_22 :
  goto r_22;
  s_115 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  r_22 :
  Epopd(5,5);
  Return();
  d_22 :
  goto c_22;
  q_115 :
  Tset(App0("Nil"));
  Return();
  c_22 :
  Epopd(4,9);
  Return();
  b_22 :
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,5);
  goto r_20;
  r_20 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto s_20;
  s_20 :
  TestFunFC(r_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto t_20;
  t_20 :
  TestFunFC(s_0,&&fail,Egetd(3,9));
  Rpush(a_23);
  goto u_115;
  a_23 :
  goto y_22;
  u_115 :
  Epushd(4,1);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(b_23);
  v_115 :
  Cpush(d_23);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_23);
  goto v_115;
  e_23 :
  AllBuild();
  goto c_23;
  d_23 :
  Ccall(_stratego_r_56);
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  goto f_23;
  c_23 :
  Cpop();
  f_23 :
  Return();
  b_23 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  y_22 :
  Epopd(3,9);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  MoveTop(2,5);
  Move(2,4,2,5);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,6);
  goto x_20;
  x_20 :
  TestFunFC(r_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto y_20;
  y_20 :
  TestFunFC(r_0,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  MoveArg(2,10,2,8,1);
  goto z_20;
  z_20 :
  TestFunFC(r_0,&&fail,Egetd(2,10));
  MoveArg(2,11,2,10,0);
  MoveArg(2,12,2,10,1);
  goto a_21;
  a_21 :
  TestFunFC(s_0,&&fail,Egetd(2,12));
  Rpush(h_23);
  goto y_115;
  h_23 :
  goto g_23;
  y_115 :
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,11);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,11),App0("TNil"))));
  Rpush(i_23);
  goto f_115;
  i_23 :
  Epopd(3,1);
  AllBuild();
  Return();
  g_23 :
  Epopd(2,12);
  Return();
  q_20 :
  goto p_20;
  h_115 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MatchFun("Var",1);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_v_57);
  Epopd(2,1);
  AllBuild();
  Return();
  p_20 :
  Epopd(1,5);
  Return();
  o_20 :
  Return();
  c_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_57)
  Rpush(j_23);
  c_116 :
  Epushd(0,11);
  MoveTop(0,5);
  goto h_21;
  h_21 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto i_21;
  i_21 :
  TestFunFC(r_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto j_21;
  j_21 :
  TestFunFC(l_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto k_21;
  k_21 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto l_21;
  l_21 :
  TestFunFC(r_0,&&r_23,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto m_21;
  m_21 :
  TestFunFC(r_0,&&s_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto n_21;
  n_21 :
  TestFunFC(s_0,&&t_23,Egetd(0,4));
  Cpush(v_23);
  Rpush(w_23);
  goto d_116;
  w_23 :
  goto u_23;
  v_23 :
  Rpush(b_24);
  goto e_116;
  b_24 :
  goto x_23;
  u_23 :
  Cpop();
  x_23 :
  goto q_23;
  t_23 :
  Rpush(q_23);
  goto e_116;
  s_23 :
  Rpush(q_23);
  goto e_116;
  r_23 :
  Rpush(q_23);
  goto e_116;
  q_23 :
  goto p_23;
  e_116 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(c_24);
  goto c_116;
  c_24 :
  Return();
  p_23 :
  goto k_23;
  d_116 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  k_23 :
  Epopd(0,11);
  Return();
  j_23 :
ENDPROC

PROC(_stratego_w_57)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(d_24);
  g_116 :
  Rpush(e_24);
  h_116 :
  Epushd(1,5);
  MoveTop(1,1);
  goto y_23;
  y_23 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_23;
  z_23 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto a_24;
  a_24 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Cpush(k_24);
  Rpush(l_24);
  goto i_116;
  l_24 :
  goto j_24;
  k_24 :
  Ccontinue(m_24);
  Rpush(n_24);
  goto m_116;
  n_24 :
  goto j_24;
  m_24 :
  Rpush(p_24);
  goto j_117;
  p_24 :
  goto o_24;
  j_24 :
  Cpop();
  o_24 :
  goto i_24;
  i_24 :
  goto h_24;
  j_117 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  q_24 :
  AllNextSon(&&r_24);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(s_24);
  goto h_116;
  s_24 :
  Epopd(2,1);
  goto q_24;
  r_24 :
  AllBuild();
  Return();
  h_24 :
  goto g_24;
  m_116 :
  Epushd(2,12);
  Tdupl();
  Epushd(3,16);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto y_21;
  y_21 :
  TestFunFC(y_24,&&x_24,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto z_21;
  z_21 :
  TestFunFC(h_9,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(w_24);
  goto n_116;
  x_24 :
  TestFunFC(h_9,&&z_24,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(w_24);
  goto o_116;
  z_24 :
  TestFunFC(a_25,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(w_24);
  goto p_116;
  w_24 :
  goto v_24;
  p_116 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  v_24 :
  goto u_24;
  o_116 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  u_24 :
  goto t_24;
  n_116 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  t_24 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(b_25);
  r_116 :
  Cpush(d_25);
  Ccall(_stratego_r_56);
  goto c_25;
  d_25 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_57);
  OneNextSon();
  Rpush(f_25);
  goto r_116;
  f_25 :
  AllBuild();
  goto e_25;
  c_25 :
  Cpop();
  e_25 :
  Return();
  b_25 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(g_25);
  t_116 :
  Epushd(4,9);
  MoveTop(4,1);
  goto i_22;
  i_22 :
  TestFunFC(r_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto j_22;
  j_22 :
  TestFunFC(w_0,&&k_25,Egetd(4,2));
  goto k_22;
  k_22 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto l_22;
  l_22 :
  TestFunFC(w_0,&&fail,Egetd(4,6));
  goto m_22;
  m_22 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(j_25);
  goto u_116;
  k_25 :
  TestFunFC(l_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto n_22;
  n_22 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto o_22;
  o_22 :
  TestFunFC(l_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto p_22;
  p_22 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(j_25);
  goto v_116;
  j_25 :
  goto i_25;
  v_116 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_25);
  goto t_116;
  m_25 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto f_22;
  f_22 :
  TestFunFC(r_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto g_22;
  g_22 :
  TestFunFC(r_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto h_22;
  h_22 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(n_25);
  goto w_116;
  n_25 :
  goto l_25;
  w_116 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  l_25 :
  Epopd(5,5);
  Return();
  i_25 :
  goto h_25;
  u_116 :
  Tset(App0("Nil"));
  Return();
  h_25 :
  Epopd(4,9);
  Return();
  g_25 :
  MoveTop(3,11);
  Move(3,10,3,11);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,12);
  goto t_22;
  t_22 :
  TestFunFC(r_0,&&fail,Egetd(3,12));
  MoveArg(3,13,3,12,0);
  MoveArg(3,14,3,12,1);
  goto u_22;
  u_22 :
  TestFunFC(r_0,&&fail,Egetd(3,14));
  MoveArg(3,15,3,14,0);
  MoveArg(3,16,3,14,1);
  goto v_22;
  v_22 :
  TestFunFC(s_0,&&fail,Egetd(3,16));
  Rpush(p_25);
  goto y_116;
  p_25 :
  goto o_25;
  y_116 :
  Epushd(4,1);
  NotNULLd(3,13);
  Tset(Egetd(3,13));
  Rpush(q_25);
  z_116 :
  Cpush(s_25);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_25);
  goto z_116;
  t_25 :
  AllBuild();
  goto r_25;
  s_25 :
  Ccall(_stratego_r_56);
  NotNULLd(3,15);
  Tset(Egetd(3,15));
  goto u_25;
  r_25 :
  Cpop();
  u_25 :
  Return();
  q_25 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  o_25 :
  Epopd(3,16);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(w_25);
  MatchFun("Let",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto x_22;
  x_22 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_25);
  goto b_117;
  y_25 :
  goto x_25;
  b_117 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  x_25 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto v_25;
  w_25 :
  Ccontinue(z_25);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto v_25;
  z_25 :
  MatchFun("Rec",2);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto z_22;
  z_22 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(c_26);
  goto c_117;
  c_26 :
  goto b_26;
  c_117 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  b_26 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto a_26;
  v_25 :
  Cpop();
  a_26 :
  MoveTop(2,5);
  Move(2,4,2,5);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,6);
  goto l_23;
  l_23 :
  TestFunFC(r_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto m_23;
  m_23 :
  TestFunFC(r_0,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  MoveArg(2,10,2,8,1);
  goto n_23;
  n_23 :
  TestFunFC(r_0,&&fail,Egetd(2,10));
  MoveArg(2,11,2,10,0);
  MoveArg(2,12,2,10,1);
  goto o_23;
  o_23 :
  TestFunFC(s_0,&&fail,Egetd(2,12));
  Rpush(e_26);
  goto e_117;
  e_26 :
  goto d_26;
  e_117 :
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Cpush(g_26);
  MatchFun("Let",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,9);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,9),App0("TNil"))));
  Rpush(h_26);
  goto g_116;
  h_26 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,11);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,11),App0("TNil"))));
  Rpush(n_26);
  goto g_116;
  n_26 :
  Epopd(3,1);
  AllBuild();
  goto f_26;
  g_26 :
  Ccontinue(o_26);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,11);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,11),App0("TNil"))));
  Rpush(s_26);
  goto g_116;
  s_26 :
  Epopd(3,1);
  AllBuild();
  goto f_26;
  o_26 :
  MatchFun("Rec",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,11);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,11),App0("TNil"))));
  Rpush(u_26);
  goto g_116;
  u_26 :
  Epopd(3,1);
  AllBuild();
  goto t_26;
  f_26 :
  Cpop();
  t_26 :
  Return();
  d_26 :
  Epopd(2,12);
  Return();
  g_24 :
  goto f_24;
  i_116 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MatchFun("SVar",1);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_v_57);
  Epopd(2,1);
  AllBuild();
  Return();
  f_24 :
  Epopd(1,5);
  Return();
  e_24 :
  Return();
  d_24 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_57)
  Epushd(0,8);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App2("TCons",ATmakeString("main"),App2("TCons",MakeInt(0),App0("TNil"))),App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(0,2);
  goto b_28;
  b_28 :
  TestFunFC(r_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto c_28;
  c_28 :
  TestFunFC(r_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto d_28;
  d_28 :
  TestFunFC(r_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto e_28;
  e_28 :
  TestFunFC(s_0,&&fail,Egetd(0,8));
  Rpush(d_27);
  goto m_117;
  d_27 :
  goto v_26;
  m_117 :
  Epushd(1,7);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,7),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(p_27);
  n_117 :
  Epushd(2,13);
  MoveTop(2,1);
  goto y_26;
  y_26 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto z_26;
  z_26 :
  TestFunFC(l_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_27;
  a_27 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto b_27;
  b_27 :
  TestFunFC(r_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto c_27;
  c_27 :
  TestFunFC(r_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto e_27;
  e_27 :
  TestFunFC(r_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto f_27;
  f_27 :
  TestFunFC(s_0,&&fail,Egetd(2,13));
  Cpush(h_28);
  Rpush(i_28);
  goto o_117;
  i_28 :
  goto g_28;
  h_28 :
  Rpush(k_28);
  goto a_118;
  k_28 :
  goto j_28;
  g_28 :
  Cpop();
  j_28 :
  goto f_28;
  f_28 :
  goto r_27;
  a_118 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App2("TCons",Egetd(2,10),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,12)),App0("TNil")))))));
  Return();
  r_27 :
  goto q_27;
  o_117 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,8),App0("TNil"))));
  Ccall(_stratego_y_57);
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Ccall(_stratego_i_58);
  MoveTop(4,2);
  Move(3,2,4,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(2,6),App0("TNil"))));
  Ccall(_stratego_q_57);
  MoveTop(4,3);
  Move(3,3,4,3);
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,4),App0("TNil"))));
  MoveTop(3,4);
  goto r_26;
  r_26 :
  TestFunFC(r_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto w_26;
  w_26 :
  TestFunFC(r_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto x_26;
  x_26 :
  TestFunFC(s_0,&&fail,Egetd(3,8));
  Rpush(n_28);
  goto s_117;
  n_28 :
  goto l_28;
  s_117 :
  Epushd(4,7);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(o_28);
  t_117 :
  Cpush(s_28);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_28);
  goto t_117;
  u_28 :
  AllBuild();
  goto q_28;
  s_28 :
  Ccall(_stratego_r_56);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto w_28;
  q_28 :
  Cpop();
  w_28 :
  Return();
  o_28 :
  MoveTop(4,2);
  Move(4,1,4,2);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,6),App0("TNil"))));
  MoveTop(4,3);
  goto m_26;
  m_26 :
  TestFunFC(r_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto p_26;
  p_26 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto q_26;
  q_26 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(z_28);
  goto v_117;
  z_28 :
  goto x_28;
  v_117 :
  Epushd(5,9);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(a_29);
  w_117 :
  Cpush(g_29);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_29);
  goto w_117;
  h_29 :
  AllBuild();
  goto b_29;
  g_29 :
  Ccall(_stratego_r_56);
  NotNULLd(4,6);
  Tset(Egetd(4,6));
  goto i_29;
  b_29 :
  Cpop();
  i_29 :
  Return();
  a_29 :
  MoveTop(5,2);
  Move(5,1,5,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil")))));
  MoveTop(5,3);
  goto i_26;
  i_26 :
  TestFunFC(r_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto j_26;
  j_26 :
  TestFunFC(r_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto k_26;
  k_26 :
  TestFunFC(r_0,&&fail,Egetd(5,7));
  MoveArg(5,8,5,7,0);
  MoveArg(5,9,5,7,1);
  goto l_26;
  l_26 :
  TestFunFC(s_0,&&fail,Egetd(5,9));
  Rpush(k_29);
  goto y_117;
  k_29 :
  goto j_29;
  y_117 :
  Epushd(6,1);
  NotNULLd(5,6);
  NotNULLd(5,8);
  Tset(App2("Cons",Egetd(5,6),Egetd(5,8)));
  Tdupl();
  NotNULLd(5,6);
  NotNULLd(5,8);
  Tset(App2("Cons",Egetd(5,6),Egetd(5,8)));
  MoveTop(6,1);
  Tpop();
  NotNULLd(4,1);
  NotNULLd(5,1);
  NotNULLd(2,8);
  NotNULLd(6,1);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(5,1),App2("TCons",Egetd(2,8),App2("TCons",Egetd(6,1),App2("TCons",Egetd(2,12),App0("TNil")))))));
  Epopd(6,1);
  Return();
  j_29 :
  Epopd(5,9);
  Return();
  x_28 :
  Epopd(4,7);
  Return();
  l_28 :
  Epopd(3,8);
  Return();
  q_27 :
  Cpush(o_29);
  Epushd(3,11);
  MoveTop(3,1);
  goto h_27;
  h_27 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto i_27;
  i_27 :
  TestFunFC(w_0,&&fail,Egetd(3,2));
  goto j_27;
  j_27 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto k_27;
  k_27 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto l_27;
  l_27 :
  TestFunFC(r_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto m_27;
  m_27 :
  TestFunFC(r_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto n_27;
  n_27 :
  TestFunFC(s_0,&&fail,Egetd(3,11));
  Rpush(q_29);
  goto b_118;
  q_29 :
  goto p_29;
  b_118 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App0("TNil"))));
  Return();
  p_29 :
  Epopd(3,11);
  goto n_29;
  o_29 :
  Rpush(s_29);
  goto n_117;
  s_29 :
  goto r_29;
  n_29 :
  Cpop();
  r_29 :
  Epopd(2,13);
  Return();
  p_27 :
  MoveTop(1,1);
  goto w_27;
  w_27 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto x_27;
  x_27 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto y_27;
  y_27 :
  TestFunFC(w_0,&&u_29,Egetd(1,4));
  goto z_27;
  z_27 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(t_29);
  goto c_118;
  u_29 :
  TestFunFC(l_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto a_28;
  a_28 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(t_29);
  goto d_118;
  t_29 :
  goto o_27;
  d_118 :
  Tdupl();
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App2("Cons",Egetd(1,5),Egetd(1,6)));
  Rpush(v_29);
  e_118 :
  Cpush(x_29);
  Ccall(_stratego_r_56);
  goto w_29;
  x_29 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,3);
  goto s_27;
  s_27 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_27;
  t_27 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto u_27;
  u_27 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  goto v_27;
  v_27 :
  TestFunFC(n_30,&&m_30,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Cpush(q_30);
  Rpush(u_30);
  goto f_118;
  u_30 :
  goto p_30;
  q_30 :
  Rpush(w_30);
  goto g_118;
  w_30 :
  goto v_30;
  p_30 :
  Cpop();
  v_30 :
  goto k_30;
  m_30 :
  Rpush(k_30);
  goto g_118;
  k_30 :
  goto j_30;
  g_118 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,4),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))));
  Ccall(_stratego_j_58);
  Return();
  j_30 :
  goto z_29;
  f_118 :
  NotNULLd(2,1);
  NotNULLd(2,2);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,1),App2("Cons",ATmakeString("^"),App2("Cons",Egetd(2,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))))));
  Ccall(_stratego_j_58);
  Return();
  z_29 :
  Epopd(2,7);
  OneNextSon();
  Rpush(x_30);
  goto e_118;
  x_30 :
  AllBuild();
  goto y_29;
  w_29 :
  Cpop();
  y_29 :
  Return();
  v_29 :
  Tpop();
  Tset(MakeInt(1));
  Ccall(_stratego_x_56);
  Return();
  o_27 :
  goto g_27;
  c_118 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  g_27 :
  Epopd(1,7);
  Return();
  v_26 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_y_57)
  Epushd(0,11);
  MoveTop(0,3);
  goto t_28;
  t_28 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,9,0,3,1);
  goto v_28;
  v_28 :
  TestFunFC(r_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_28;
  y_28 :
  TestFunFC(r_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto c_29;
  c_29 :
  TestFunFC(s_0,&&fail,Egetd(0,8));
  goto d_29;
  d_29 :
  TestFunFC(r_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto e_29;
  e_29 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto f_29;
  f_29 :
  TestInt(0,7,0,&&g_31);
  goto l_29;
  l_29 :
  TestFunFC(n_30,&&h_31,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(j_31);
  Rpush(k_31);
  goto h_118;
  k_31 :
  goto i_31;
  j_31 :
  Ccontinue(l_31);
  Rpush(m_31);
  goto j_118;
  m_31 :
  goto i_31;
  l_31 :
  Rpush(o_31);
  goto p_118;
  o_31 :
  goto n_31;
  i_31 :
  Cpop();
  n_31 :
  goto b_31;
  h_31 :
  Cpush(q_31);
  Rpush(r_31);
  goto j_118;
  r_31 :
  goto p_31;
  q_31 :
  Rpush(t_31);
  goto p_118;
  t_31 :
  goto s_31;
  p_31 :
  Cpop();
  s_31 :
  goto b_31;
  g_31 :
  goto m_29;
  m_29 :
  TestFunFC(n_30,&&u_31,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(w_31);
  Rpush(x_31);
  goto h_118;
  x_31 :
  goto v_31;
  w_31 :
  Rpush(z_31);
  goto j_118;
  z_31 :
  goto y_31;
  v_31 :
  Cpop();
  y_31 :
  goto b_31;
  u_31 :
  Rpush(b_31);
  goto j_118;
  b_31 :
  goto a_31;
  p_118 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(a_32);
  q_118 :
  Cpush(c_32);
  Ccall(_stratego_r_56);
  goto b_32;
  c_32 :
  Ccontinue(d_32);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto p_28;
  p_28 :
  TestFunFC(h_9,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(i_32);
  goto r_118;
  i_32 :
  goto h_32;
  r_118 :
  Move(0,5,3,2);
  Return();
  h_32 :
  Epopd(3,4);
  OneNextSon();
  Rpush(j_32);
  goto q_118;
  j_32 :
  AllBuild();
  goto b_32;
  d_32 :
  Epushd(3,3);
  MoveTop(3,1);
  goto r_28;
  r_28 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_32);
  goto s_118;
  p_32 :
  goto o_32;
  s_118 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(q_32);
  goto q_118;
  q_32 :
  Return();
  o_32 :
  Epopd(3,3);
  goto k_32;
  b_32 :
  Cpop();
  k_32 :
  Return();
  a_32 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_f_58);
  Epopd(1,1);
  Return();
  a_31 :
  goto z_30;
  j_118 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(u_32);
  k_118 :
  Cpush(w_32);
  Ccall(_stratego_r_56);
  goto v_32;
  w_32 :
  Ccontinue(x_32);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(0,5,3,1);
  Epopd(3,1);
  OneNextSon();
  Tdupl();
  Epushd(3,1);
  Ccall(_stratego_e_58);
  MoveTop(3,1);
  Move(0,7,3,1);
  Epopd(3,1);
  Tpop();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(y_32);
  goto k_118;
  y_32 :
  AllBuild();
  goto v_32;
  x_32 :
  Epushd(3,3);
  MoveTop(3,1);
  goto m_28;
  m_28 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(f_33);
  goto n_118;
  f_33 :
  goto e_33;
  n_118 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(g_33);
  goto k_118;
  g_33 :
  Return();
  e_33 :
  Epopd(3,3);
  goto z_32;
  v_32 :
  Cpop();
  z_32 :
  Return();
  u_32 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_f_58);
  Epopd(1,1);
  Return();
  z_30 :
  goto y_30;
  h_118 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,7),App0("TNil")))));
  Ccall(_stratego_z_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  y_30 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_z_57)
  Epushd(0,7);
  MoveTop(0,1);
  goto d_36;
  d_36 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto k_36;
  k_36 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto l_36;
  l_36 :
  TestStr(0,4,"D",&&k_33);
  goto p_36;
  p_36 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto q_36;
  q_36 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(j_33);
  goto u_118;
  k_33 :
  TestStr(0,4,"T",&&fail);
  goto x_36;
  x_36 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto y_36;
  y_36 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(j_33);
  goto u_119;
  j_33 :
  goto i_33;
  u_119 :
  Epushd(1,11);
  Tdupl();
  Epushd(2,7);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_c_58);
  MoveTop(2,2);
  Move(2,1,2,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",App0("TNil"),App0("TNil"))));
  MoveTop(2,3);
  goto z_35;
  z_35 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto a_36;
  a_36 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto b_36;
  b_36 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(m_33);
  goto w_119;
  m_33 :
  goto l_33;
  w_119 :
  Epushd(3,3);
  NotNULLd(2,4);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(o_33);
  x_119 :
  Epushd(4,7);
  MoveTop(4,1);
  goto x_33;
  x_33 :
  TestFunFC(r_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto d_34;
  d_34 :
  TestFunFC(r_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto e_34;
  e_34 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto f_34;
  f_34 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(q_33);
  goto y_119;
  q_33 :
  goto p_33;
  y_119 :
  Epushd(5,4);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_b_58);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_a_58);
  MoveTop(5,2);
  Move(5,1,5,2);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_m_57);
  MoveTop(5,4);
  Move(5,3,5,4);
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,3);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",Egetd(5,3),Egetd(4,6)),App0("TNil")))));
  Cpush(s_33);
  Epushd(6,7);
  MoveTop(6,1);
  goto a_33;
  a_33 :
  TestFunFC(r_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto b_33;
  b_33 :
  TestInt(6,2,0,&&fail);
  goto c_33;
  c_33 :
  TestFunFC(r_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto d_33;
  d_33 :
  TestFunFC(r_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto w_33;
  w_33 :
  TestFunFC(s_0,&&fail,Egetd(6,7));
  Rpush(u_33);
  goto b_120;
  u_33 :
  goto t_33;
  b_120 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  t_33 :
  Epopd(6,7);
  goto r_33;
  s_33 :
  Rpush(y_33);
  goto x_119;
  y_33 :
  goto v_33;
  r_33 :
  Cpop();
  v_33 :
  Epopd(5,4);
  Return();
  p_33 :
  Epopd(4,7);
  Return();
  o_33 :
  MoveTop(3,1);
  goto y_35;
  y_35 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(z_33);
  goto c_120;
  z_33 :
  goto n_33;
  c_120 :
  Epushd(4,14);
  Move(1,2,3,2);
  Move(1,3,3,3);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_d_58);
  MoveTop(4,1);
  Move(1,1,4,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",App2("Cons",Egetd(1,2),Egetd(1,3)),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(a_34);
  e_120 :
  Epushd(5,9);
  MoveTop(5,1);
  goto v_34;
  v_34 :
  TestFunFC(r_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto w_34;
  w_34 :
  TestFunFC(r_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto x_34;
  x_34 :
  TestFunFC(w_0,&&h_34,Egetd(5,6));
  goto y_34;
  y_34 :
  TestFunFC(s_0,&&fail,Egetd(5,9));
  goto z_34;
  z_34 :
  i_34 :
  Rpush(g_34);
  goto f_120;
  h_34 :
  TestFunFC(l_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto a_35;
  a_35 :
  TestFunFC(l_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto c_35;
  c_35 :
  TestFunFC(s_0,&&fail,Egetd(5,9));
  Rpush(g_34);
  goto g_120;
  g_34 :
  goto c_34;
  g_120 :
  Epushd(6,5);
  NotNULLd(5,3);
  NotNULLd(5,7);
  NotNULLd(5,4);
  NotNULLd(5,8);
  Tset(App2("TCons",App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(5,4),App2("TCons",Egetd(5,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(7,5);
  MoveTop(7,1);
  goto o_34;
  o_34 :
  TestFunFC(r_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto p_34;
  p_34 :
  TestFunFC(r_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto q_34;
  q_34 :
  TestFunFC(s_0,&&fail,Egetd(7,5));
  Rpush(l_34);
  goto h_120;
  l_34 :
  goto k_34;
  h_120 :
  Epushd(8,3);
  Tdupl();
  Epushd(9,3);
  Ccall(_stratego_m_57);
  MoveTop(9,1);
  Move(8,1,9,1);
  Ccall(_stratego_m_57);
  MoveTop(9,2);
  Move(8,2,9,2);
  Ccall(_stratego_m_57);
  MoveTop(9,3);
  Move(8,3,9,3);
  Epopd(9,3);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,4);
  NotNULLd(8,1);
  NotNULLd(8,2);
  NotNULLd(8,3);
  Tset(App2("TCons",App3("BAM",App2("Call",App1("SVar",Egetd(8,1)),App0("Nil")),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(8,2)),App2("Cons",App1("Var",Egetd(7,2)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(8,3)),App2("Cons",App1("Var",Egetd(7,4)),App0("Nil"))))),App2("TCons",Egetd(8,1),App2("TCons",Egetd(8,2),App2("TCons",App1("Var",Egetd(8,2)),App2("TCons",Egetd(8,3),App2("TCons",App1("Var",Egetd(8,3)),App0("TNil"))))))));
  Epopd(8,3);
  Return();
  k_34 :
  Epopd(7,5);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_34);
  goto e_120;
  m_34 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto s_34;
  s_34 :
  TestFunFC(r_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto t_34;
  t_34 :
  TestFunFC(r_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto u_34;
  u_34 :
  TestFunFC(s_0,&&fail,Egetd(6,5));
  Rpush(n_34);
  goto l_120;
  n_34 :
  goto j_34;
  l_120 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),Egetd(6,4)));
  Return();
  j_34 :
  Epopd(6,5);
  Return();
  c_34 :
  goto b_34;
  f_120 :
  Tset(App0("Nil"));
  Return();
  b_34 :
  Epopd(5,9);
  Return();
  a_34 :
  Rpush(b_35);
  m_120 :
  Cpush(e_35);
  Epushd(5,10);
  MoveTop(5,1);
  Rpush(f_35);
  o_120 :
  Cpush(i_35);
  Ccall(_stratego_r_56);
  goto h_35;
  i_35 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto g_35;
  g_35 :
  TestFunFC(r_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(p_35);
  goto p_120;
  p_35 :
  goto l_35;
  p_120 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  l_35 :
  Epopd(6,3);
  OneNextSon();
  Rpush(w_35);
  goto o_120;
  w_35 :
  AllBuild();
  goto k_35;
  h_35 :
  Cpop();
  k_35 :
  Return();
  f_35 :
  MoveTop(5,3);
  Move(5,2,5,3);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  Rpush(c_36);
  r_120 :
  Cpush(f_36);
  Ccall(_stratego_r_56);
  goto e_36;
  f_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto j_35;
  j_35 :
  TestFunFC(r_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(i_36);
  goto s_120;
  i_36 :
  goto h_36;
  s_120 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  h_36 :
  Epopd(6,3);
  OneNextSon();
  Rpush(j_36);
  goto r_120;
  j_36 :
  AllBuild();
  goto g_36;
  e_36 :
  Cpop();
  g_36 :
  Return();
  c_36 :
  MoveTop(5,5);
  Move(5,4,5,5);
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,4),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(n_36);
  goto m_120;
  n_36 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(5,6);
  goto m_35;
  m_35 :
  TestFunFC(r_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto n_35;
  n_35 :
  TestFunFC(r_0,&&fail,Egetd(5,8));
  MoveArg(5,9,5,8,0);
  MoveArg(5,10,5,8,1);
  goto o_35;
  o_35 :
  TestFunFC(s_0,&&fail,Egetd(5,10));
  Rpush(o_36);
  goto u_120;
  o_36 :
  goto m_36;
  u_120 :
  NotNULLd(5,7);
  NotNULLd(5,9);
  Tset(App2("TCons",Egetd(5,7),Egetd(5,9)));
  Return();
  m_36 :
  Epopd(5,10);
  goto d_35;
  e_35 :
  Rpush(s_36);
  v_120 :
  Cpush(u_36);
  Ccall(_stratego_r_56);
  goto t_36;
  u_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_57);
  OneNextSon();
  Rpush(w_36);
  goto v_120;
  w_36 :
  AllBuild();
  goto v_36;
  t_36 :
  Cpop();
  v_36 :
  Return();
  s_36 :
  Tset(App0("TNil"));
  goto r_36;
  d_35 :
  Cpop();
  r_36 :
  Return();
  b_35 :
  MoveTop(4,2);
  goto q_35;
  q_35 :
  TestFunFC(r_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto r_35;
  r_35 :
  TestFunFC(r_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto s_35;
  s_35 :
  TestFunFC(r_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto t_35;
  t_35 :
  TestFunFC(r_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto u_35;
  u_35 :
  TestFunFC(r_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto v_35;
  v_35 :
  TestFunFC(r_0,&&fail,Egetd(4,12));
  MoveArg(4,13,4,12,0);
  MoveArg(4,14,4,12,1);
  goto x_35;
  x_35 :
  TestFunFC(s_0,&&fail,Egetd(4,14));
  Rpush(z_36);
  goto w_120;
  z_36 :
  goto r_34;
  w_120 :
  Move(1,4,4,3);
  Move(1,5,4,5);
  Move(1,6,4,7);
  Move(1,7,4,9);
  Move(1,8,4,11);
  Move(1,9,4,13);
  Return();
  r_34 :
  Epopd(4,14);
  Return();
  n_33 :
  Epopd(3,3);
  Return();
  l_33 :
  Epopd(2,7);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App2("Cons",Egetd(1,3),App2("Cons",Egetd(1,6),App2("Cons",Egetd(1,8),App0("Nil")))));
  Ccall(_stratego_i_57);
  MoveTop(1,11);
  Move(1,10,1,11);
  NotNULLd(1,5);
  NotNULLd(1,10);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(0,2);
  NotNULLd(1,9);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("T")),Egetd(1,5),App2("Scope",App2("Cons",Egetd(1,2),Egetd(1,10)),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,7)),App2("Cons",App1("Var",Egetd(1,2)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,9)),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App1("Seqs",Egetd(1,4)))))));
  Epopd(1,11);
  Return();
  i_33 :
  goto h_33;
  u_118 :
  Epushd(1,12);
  Tdupl();
  Epushd(2,6);
  Ccall(_stratego_m_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",App1("Var",Egetd(1,1)),App0("TNil"))));
  MoveTop(2,2);
  goto l_32;
  l_32 :
  TestFunFC(r_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto m_32;
  m_32 :
  TestFunFC(r_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto n_32;
  n_32 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(b_37);
  goto w_118;
  b_37 :
  goto a_37;
  w_118 :
  Epushd(3,13);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(e_37);
  x_118 :
  Epushd(4,7);
  MoveTop(4,1);
  goto f_30;
  f_30 :
  TestFunFC(r_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto g_30;
  g_30 :
  TestFunFC(r_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto h_30;
  h_30 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto i_30;
  i_30 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(h_37);
  goto y_118;
  h_37 :
  goto f_37;
  y_118 :
  Epushd(5,6);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_b_58);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_a_58);
  MoveTop(5,2);
  Move(5,1,5,2);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Tdupl();
  Epushd(6,3);
  Ccall(_stratego_m_57);
  MoveTop(6,1);
  Move(5,4,6,1);
  Ccall(_stratego_m_57);
  MoveTop(6,2);
  Move(5,5,6,2);
  Ccall(_stratego_m_57);
  MoveTop(6,3);
  Move(5,6,6,3);
  Epopd(6,3);
  Tpop();
  NotNULLd(4,4);
  NotNULLd(5,4);
  NotNULLd(5,5);
  NotNULLd(5,6);
  Tset(App2("TCons",App3("BAM",App2("Call",App1("SVar",Egetd(5,4)),App0("Nil")),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(5,5)),App2("Cons",Egetd(4,4),App0("Nil")))),App1("Var",Egetd(5,6))),App2("TCons",Egetd(5,4),App2("TCons",Egetd(5,5),App2("TCons",App1("Var",Egetd(5,5)),App2("TCons",Egetd(5,6),App2("TCons",App1("Var",Egetd(5,6)),App0("TNil"))))))));
  Tdupl();
  NotNULLd(4,4);
  NotNULLd(5,4);
  NotNULLd(5,5);
  NotNULLd(5,6);
  Tset(App2("TCons",App3("BAM",App2("Call",App1("SVar",Egetd(5,4)),App0("Nil")),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(5,5)),App2("Cons",Egetd(4,4),App0("Nil")))),App1("Var",Egetd(5,6))),App2("TCons",Egetd(5,4),App2("TCons",Egetd(5,5),App2("TCons",App1("Var",Egetd(5,5)),App2("TCons",Egetd(5,6),App2("TCons",App1("Var",Egetd(5,6)),App0("TNil"))))))));
  MoveTop(5,3);
  Tpop();
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,3);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",Egetd(5,3),Egetd(4,6)),App0("TNil")))));
  Cpush(j_37);
  Epushd(6,7);
  MoveTop(6,1);
  goto a_30;
  a_30 :
  TestFunFC(r_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto b_30;
  b_30 :
  TestInt(6,2,0,&&fail);
  goto c_30;
  c_30 :
  TestFunFC(r_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto d_30;
  d_30 :
  TestFunFC(r_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto e_30;
  e_30 :
  TestFunFC(s_0,&&fail,Egetd(6,7));
  Rpush(l_37);
  goto f_119;
  l_37 :
  goto k_37;
  f_119 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  k_37 :
  Epopd(6,7);
  goto i_37;
  j_37 :
  Rpush(o_37);
  goto x_118;
  o_37 :
  goto m_37;
  i_37 :
  Cpop();
  m_37 :
  Epopd(5,6);
  Return();
  f_37 :
  Epopd(4,7);
  Return();
  e_37 :
  Rpush(s_37);
  g_119 :
  Cpush(w_37);
  Epushd(4,10);
  MoveTop(4,1);
  Rpush(x_37);
  i_119 :
  Cpush(z_37);
  Ccall(_stratego_r_56);
  goto y_37;
  z_37 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto l_30;
  l_30 :
  TestFunFC(r_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(c_38);
  goto j_119;
  c_38 :
  goto b_38;
  j_119 :
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Return();
  b_38 :
  Epopd(5,3);
  OneNextSon();
  Rpush(d_38);
  goto i_119;
  d_38 :
  AllBuild();
  goto a_38;
  y_37 :
  Cpop();
  a_38 :
  Return();
  x_37 :
  MoveTop(4,3);
  Move(4,2,4,3);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(e_38);
  l_119 :
  Cpush(g_38);
  Ccall(_stratego_r_56);
  goto f_38;
  g_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto o_30;
  o_30 :
  TestFunFC(r_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(j_38);
  goto m_119;
  j_38 :
  goto i_38;
  m_119 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Return();
  i_38 :
  Epopd(5,3);
  OneNextSon();
  Rpush(k_38);
  goto l_119;
  k_38 :
  AllBuild();
  goto h_38;
  f_38 :
  Cpop();
  h_38 :
  Return();
  e_38 :
  MoveTop(4,5);
  Move(4,4,4,5);
  NotNULLd(4,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(s_38);
  goto g_119;
  s_38 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(4,6);
  goto r_30;
  r_30 :
  TestFunFC(r_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto s_30;
  s_30 :
  TestFunFC(r_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto t_30;
  t_30 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(t_38);
  goto o_119;
  t_38 :
  goto r_38;
  o_119 :
  NotNULLd(4,7);
  NotNULLd(4,9);
  Tset(App2("TCons",Egetd(4,7),Egetd(4,9)));
  Return();
  r_38 :
  Epopd(4,10);
  goto u_37;
  w_37 :
  Rpush(v_38);
  p_119 :
  Cpush(x_38);
  Ccall(_stratego_r_56);
  goto w_38;
  x_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_57);
  OneNextSon();
  Rpush(c_39);
  goto p_119;
  c_39 :
  AllBuild();
  goto b_39;
  w_38 :
  Cpop();
  b_39 :
  Return();
  v_38 :
  Tset(App0("TNil"));
  goto u_38;
  u_37 :
  Cpop();
  u_38 :
  Return();
  s_37 :
  MoveTop(3,1);
  goto c_31;
  c_31 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto d_31;
  d_31 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto e_31;
  e_31 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto f_31;
  f_31 :
  TestFunFC(r_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto e_32;
  e_32 :
  TestFunFC(r_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto f_32;
  f_32 :
  TestFunFC(r_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto g_32;
  g_32 :
  TestFunFC(s_0,&&fail,Egetd(3,13));
  Rpush(d_39);
  goto q_119;
  d_39 :
  goto p_37;
  q_119 :
  Move(1,2,3,2);
  Move(1,3,3,4);
  Move(1,4,3,6);
  Move(1,5,3,8);
  Move(1,6,3,10);
  Move(1,7,3,12);
  Return();
  p_37 :
  Epopd(3,13);
  Return();
  a_37 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  MoveTop(1,8);
  goto r_32;
  r_32 :
  TestFunFC(r_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto s_32;
  s_32 :
  TestFunFC(r_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto t_32;
  t_32 :
  TestFunFC(s_0,&&fail,Egetd(1,12));
  Rpush(f_39);
  goto r_119;
  f_39 :
  goto e_39;
  r_119 :
  Epushd(2,2);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  Rpush(g_39);
  s_119 :
  Cpush(m_39);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_39);
  goto s_119;
  r_39 :
  AllBuild();
  goto l_39;
  m_39 :
  Ccall(_stratego_r_56);
  NotNULLd(1,11);
  Tset(Egetd(1,11));
  goto w_39;
  l_39 :
  Cpop();
  w_39 :
  Return();
  g_39 :
  MoveTop(2,2);
  Move(2,1,2,2);
  NotNULLd(1,3);
  NotNULLd(2,1);
  NotNULLd(1,5);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(1,7);
  NotNULLd(1,2);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("D")),Egetd(1,3),App2("Scope",App2("Cons",Egetd(1,1),Egetd(2,1)),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,5)),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App2("Op",Egetd(0,2),Egetd(1,7)),App1("Seqs",Egetd(1,2)))))));
  Epopd(2,2);
  Return();
  e_39 :
  Epopd(1,12);
  Return();
  h_33 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_a_58)
  _ST_subt();
ENDPROC

PROC(_stratego_b_58)
  _ST_geq();
ENDPROC

PROC(_stratego_c_58)
  _ST_add();
ENDPROC

PROC(_stratego_d_58)
  Rpush(x_39);
  y_120 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_37;
  c_37 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto d_37;
  d_37 :
  TestFunFC(w_0,&&d_40,Egetd(0,3));
  Cpush(h_40);
  Rpush(i_40);
  goto z_120;
  i_40 :
  goto e_40;
  h_40 :
  Rpush(k_40);
  goto a_121;
  k_40 :
  goto j_40;
  e_40 :
  Cpop();
  j_40 :
  goto c_40;
  d_40 :
  Rpush(c_40);
  goto a_121;
  c_40 :
  goto b_40;
  a_121 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(l_40);
  goto y_120;
  l_40 :
  Return();
  b_40 :
  goto y_39;
  z_120 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  y_39 :
  Epopd(0,3);
  Return();
  x_39 :
ENDPROC

PROC(_stratego_e_58)
  Rpush(m_40);
  b_121 :
  Cpush(o_40);
  Ccall(_stratego_r_56);
  Tset(MakeInt(0));
  goto n_40;
  o_40 :
  Epushd(0,3);
  MoveTop(0,1);
  goto g_37;
  g_37 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(r_40);
  goto c_121;
  r_40 :
  goto q_40;
  c_121 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_40);
  goto b_121;
  s_40 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_c_58);
  Epopd(1,1);
  Return();
  q_40 :
  Epopd(0,3);
  goto p_40;
  n_40 :
  Cpop();
  p_40 :
  Return();
  m_40 :
ENDPROC

PROC(_stratego_f_58)
  Epushd(0,6);
  MoveTop(0,1);
  goto q_37;
  q_37 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto r_37;
  r_37 :
  TestFunFC(w_0,&&z_40,Egetd(0,6));
  goto t_37;
  t_37 :
  TestFunFC(h_9,&&a_41,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Cpush(c_41);
  Rpush(k_41);
  goto e_121;
  k_41 :
  goto b_41;
  c_41 :
  Rpush(m_41);
  goto f_121;
  m_41 :
  goto l_41;
  b_41 :
  Cpop();
  l_41 :
  goto y_40;
  a_41 :
  Rpush(y_40);
  goto e_121;
  z_40 :
  goto v_37;
  v_37 :
  TestFunFC(h_9,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(y_40);
  goto f_121;
  y_40 :
  goto x_40;
  f_121 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(n_41);
  g_121 :
  Cpush(p_41);
  Ccall(_stratego_r_56);
  goto o_41;
  p_41 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_57);
  OneNextSon();
  Rpush(r_41);
  goto g_121;
  r_41 :
  AllBuild();
  goto q_41;
  o_41 :
  Cpop();
  q_41 :
  Return();
  n_41 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(s_41);
  i_121 :
  Cpush(u_41);
  Ccall(_stratego_r_56);
  goto t_41;
  u_41 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Call",App1("SVar",Egetd(3,1)),App0("Nil")));
  Epopd(3,1);
  OneNextSon();
  Rpush(g_42);
  goto i_121;
  g_42 :
  AllBuild();
  goto f_42;
  t_41 :
  Cpop();
  f_42 :
  Return();
  s_41 :
  MoveTop(2,2);
  Move(1,2,2,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(h_42);
  l_121 :
  Cpush(j_42);
  Ccall(_stratego_r_56);
  goto i_42;
  j_42 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto n_37;
  n_37 :
  TestFunFC(h_9,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(m_42);
  goto m_121;
  m_42 :
  goto l_42;
  m_121 :
  Epushd(4,2);
  Move(0,3,3,2);
  Move(4,1,3,3);
  Move(4,2,3,4);
  NotNULLd(4,1);
  NotNULLd(1,2);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(1,2),App2("TCons",Egetd(4,2),App0("TNil")))));
  Ccall(_stratego_g_58);
  Epopd(4,2);
  Return();
  l_42 :
  Epopd(3,4);
  OneNextSon();
  Rpush(n_42);
  goto l_121;
  n_42 :
  AllBuild();
  goto k_42;
  i_42 :
  Cpop();
  k_42 :
  Return();
  h_42 :
  MoveTop(2,3);
  Move(1,3,2,3);
  Epopd(2,3);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(1,1);
  NotNULLd(1,3);
  Tset(App3("SDef",Egetd(0,3),Egetd(1,1),App1("Choices",Egetd(1,3))));
  Epopd(1,3);
  Return();
  x_40 :
  goto t_40;
  e_121 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  t_40 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_g_58)
  Epushd(0,5);
  Ccall(_stratego_h_58);
  MoveTop(0,1);
  goto o_38;
  o_38 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto p_38;
  p_38 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_38;
  q_38 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(p_42);
  goto o_121;
  p_42 :
  goto o_42;
  o_121 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(q_42);
  p_121 :
  Cpush(s_42);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto l_38;
  l_38 :
  TestFunFC(v_42,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto m_38;
  m_38 :
  TestFunFC(w_42,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto n_38;
  n_38 :
  TestFunFC(w_0,&&fail,Egetd(2,4));
  Rpush(u_42);
  goto r_121;
  u_42 :
  goto t_42;
  r_121 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Move(1,2,2,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  t_42 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_v_57);
  Epopd(1,3);
  goto r_42;
  s_42 :
  AllInit();
  z_42 :
  AllNextSon(&&a_43);
  Rpush(b_43);
  goto p_121;
  b_43 :
  goto z_42;
  a_43 :
  AllBuild();
  goto y_42;
  r_42 :
  Cpop();
  y_42 :
  Return();
  q_42 :
  Return();
  o_42 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_58)
  Epushd(0,7);
  MoveTop(0,1);
  goto s_39;
  s_39 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto t_39;
  t_39 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto u_39;
  u_39 :
  TestFunFC(s_0,&&f_43,Egetd(0,5));
  Rpush(e_43);
  goto u_121;
  f_43 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto v_39;
  v_39 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(e_43);
  goto v_121;
  e_43 :
  goto d_43;
  v_121 :
  Epushd(1,2);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(g_43);
  w_121 :
  Epushd(2,9);
  MoveTop(2,1);
  goto h_39;
  h_39 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto i_39;
  i_39 :
  TestFunFC(w_0,&&k_43,Egetd(2,2));
  goto j_39;
  j_39 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto k_39;
  k_39 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto n_39;
  n_39 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(j_43);
  goto x_121;
  k_43 :
  TestFunFC(l_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto o_39;
  o_39 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto p_39;
  p_39 :
  TestFunFC(l_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto q_39;
  q_39 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(j_43);
  goto y_121;
  j_43 :
  goto i_43;
  y_121 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(p_43);
  goto w_121;
  p_43 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto y_38;
  y_38 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto z_38;
  z_38 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto a_39;
  a_39 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(t_43);
  goto z_121;
  t_43 :
  goto m_43;
  z_121 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  m_43 :
  Epopd(3,5);
  Return();
  i_43 :
  goto h_43;
  x_121 :
  Tset(App0("Nil"));
  Return();
  h_43 :
  Epopd(2,9);
  Return();
  g_43 :
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,2);
  Return();
  d_43 :
  goto c_43;
  u_121 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  c_43 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_i_58)
  Rpush(v_43);
  b_122 :
  Epushd(0,10);
  MoveTop(0,1);
  Cpush(z_43);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_39;
  z_39 :
  TestFunFC(v_42,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_40;
  a_40 :
  TestFunFC(w_42,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_44);
  goto d_122;
  b_44 :
  goto a_44;
  d_122 :
  Epushd(2,2);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_e_58);
  MoveTop(2,2);
  Move(2,1,2,2);
  NotNULLd(1,3);
  NotNULLd(2,1);
  Tset(App2("Cons",App2("TCons",Egetd(1,3),App2("TCons",Egetd(2,1),App0("TNil"))),App0("Nil")));
  Epopd(2,2);
  Return();
  a_44 :
  Epopd(1,4);
  goto w_43;
  z_43 :
  Tset(App0("Nil"));
  goto c_44;
  w_43 :
  Cpop();
  c_44 :
  MoveTop(0,3);
  Move(0,2,0,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(e_44);
  Epushd(1,3);
  Tdupl();
  Epushd(2,8);
  MoveTop(2,5);
  goto f_40;
  f_40 :
  TestFunFC(y_24,&&m_44,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto g_40;
  g_40 :
  TestFunFC(h_9,&&fail,Egetd(2,6));
  MoveArg(2,1,2,6,0);
  MoveArg(2,2,2,6,1);
  MoveArg(2,3,2,6,2);
  Rpush(l_44);
  goto g_122;
  m_44 :
  TestFunFC(h_9,&&n_44,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  MoveArg(2,4,2,5,2);
  Rpush(l_44);
  goto h_122;
  n_44 :
  TestFunFC(a_25,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  Rpush(l_44);
  goto i_122;
  l_44 :
  goto k_44;
  i_122 :
  NotNULLd(2,6);
  Tset(App2("Cons",Egetd(2,6),App0("Nil")));
  Return();
  k_44 :
  goto j_44;
  h_122 :
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Return();
  j_44 :
  goto i_44;
  g_122 :
  NotNULLd(2,1);
  Tset(App2("Cons",Egetd(2,1),App0("Nil")));
  Return();
  i_44 :
  MoveTop(2,8);
  Move(1,1,2,8);
  Epopd(2,8);
  Tpop();
  Cpush(s_44);
  MatchFun("Let",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Rpush(t_44);
  goto b_122;
  t_44 :
  AllBuild();
  OneNextSon();
  Epushd(2,8);
  MoveTop(2,1);
  Rpush(u_44);
  goto b_122;
  u_44 :
  MoveTop(2,3);
  Move(2,2,2,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,4);
  goto h_41;
  h_41 :
  TestFunFC(r_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto i_41;
  i_41 :
  TestFunFC(r_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto j_41;
  j_41 :
  TestFunFC(s_0,&&fail,Egetd(2,8));
  Rpush(z_44);
  goto n_122;
  z_44 :
  goto v_44;
  n_122 :
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(a_45);
  o_122 :
  Cpush(d_45);
  Ccall(_stratego_r_56);
  goto c_45;
  d_45 :
  Ccontinue(e_45);
  Epushd(3,3);
  MoveTop(3,1);
  goto g_41;
  g_41 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(g_45);
  goto p_122;
  g_45 :
  goto f_45;
  p_122 :
  Tdupl();
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Rpush(h_45);
  q_122 :
  Cpush(l_45);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto u_40;
  u_40 :
  TestFunFC(r_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto v_40;
  v_40 :
  TestFunFC(r_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto w_40;
  w_40 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto d_41;
  d_41 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  goto e_41;
  e_41 :
  TestFunFC(r_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto f_41;
  f_41 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(n_45);
  goto s_122;
  n_45 :
  goto m_45;
  s_122 :
  Move(4,4,4,9);
  Return();
  m_45 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto i_45;
  l_45 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_45);
  goto q_122;
  p_45 :
  AllBuild();
  goto o_45;
  i_45 :
  Cpop();
  o_45 :
  Return();
  h_45 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(q_45);
  goto o_122;
  q_45 :
  Return();
  f_45 :
  Epopd(3,3);
  goto c_45;
  e_45 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_45);
  goto o_122;
  y_45 :
  AllBuild();
  goto x_45;
  c_45 :
  Cpop();
  x_45 :
  Return();
  a_45 :
  Return();
  v_44 :
  Epopd(2,8);
  AllBuild();
  goto r_44;
  s_44 :
  Ccontinue(z_45);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,8);
  MoveTop(2,1);
  Rpush(a_46);
  goto b_122;
  a_46 :
  MoveTop(2,3);
  Move(2,2,2,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,4);
  goto c_42;
  c_42 :
  TestFunFC(r_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto d_42;
  d_42 :
  TestFunFC(r_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto e_42;
  e_42 :
  TestFunFC(s_0,&&fail,Egetd(2,8));
  Rpush(d_46);
  goto w_122;
  d_46 :
  goto b_46;
  w_122 :
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(i_46);
  x_122 :
  Cpush(k_46);
  Ccall(_stratego_r_56);
  goto j_46;
  k_46 :
  Ccontinue(l_46);
  Epushd(3,3);
  MoveTop(3,1);
  goto b_42;
  b_42 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_46);
  goto y_122;
  p_46 :
  goto o_46;
  y_122 :
  Tdupl();
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Rpush(q_46);
  z_122 :
  Cpush(u_46);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto v_41;
  v_41 :
  TestFunFC(r_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto w_41;
  w_41 :
  TestFunFC(r_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto x_41;
  x_41 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto y_41;
  y_41 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  goto z_41;
  z_41 :
  TestFunFC(r_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto a_42;
  a_42 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(a_47);
  goto b_123;
  a_47 :
  goto z_46;
  b_123 :
  Move(4,4,4,9);
  Return();
  z_46 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto t_46;
  u_46 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_47);
  goto z_122;
  e_47 :
  AllBuild();
  goto d_47;
  t_46 :
  Cpop();
  d_47 :
  Return();
  q_46 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(h_47);
  goto x_122;
  h_47 :
  Return();
  o_46 :
  Epopd(3,3);
  goto j_46;
  l_46 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_47);
  goto x_122;
  k_47 :
  AllBuild();
  goto i_47;
  j_46 :
  Cpop();
  i_47 :
  Return();
  i_46 :
  Return();
  b_46 :
  Epopd(2,8);
  AllBuild();
  goto r_44;
  z_45 :
  MatchFun("Rec",2);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,8);
  MoveTop(2,1);
  Rpush(o_47);
  goto b_122;
  o_47 :
  MoveTop(2,3);
  Move(2,2,2,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,4);
  goto u_43;
  u_43 :
  TestFunFC(r_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto x_43;
  x_43 :
  TestFunFC(r_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto y_43;
  y_43 :
  TestFunFC(s_0,&&fail,Egetd(2,8));
  Rpush(q_47);
  goto f_123;
  q_47 :
  goto p_47;
  f_123 :
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(r_47);
  g_123 :
  Cpush(t_47);
  Ccall(_stratego_r_56);
  goto s_47;
  t_47 :
  Ccontinue(u_47);
  Epushd(3,3);
  MoveTop(3,1);
  goto s_43;
  s_43 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_47);
  goto h_123;
  w_47 :
  goto v_47;
  h_123 :
  Tdupl();
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Rpush(x_47);
  i_123 :
  Cpush(z_47);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto x_42;
  x_42 :
  TestFunFC(r_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto l_43;
  l_43 :
  TestFunFC(r_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto n_43;
  n_43 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto o_43;
  o_43 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  goto q_43;
  q_43 :
  TestFunFC(r_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto r_43;
  r_43 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(g_48);
  goto k_123;
  g_48 :
  goto f_48;
  k_123 :
  Move(4,4,4,9);
  Return();
  f_48 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto y_47;
  z_47 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_48);
  goto i_123;
  l_48 :
  AllBuild();
  goto j_48;
  y_47 :
  Cpop();
  j_48 :
  Return();
  x_47 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(m_48);
  goto g_123;
  m_48 :
  Return();
  v_47 :
  Epopd(3,3);
  goto s_47;
  u_47 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_48);
  goto g_123;
  p_48 :
  AllBuild();
  goto n_48;
  s_47 :
  Cpop();
  n_48 :
  Return();
  r_47 :
  Return();
  p_47 :
  Epopd(2,8);
  AllBuild();
  goto m_47;
  r_44 :
  Cpop();
  m_47 :
  MoveTop(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto f_44;
  f_44 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto g_44;
  g_44 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto h_44;
  h_44 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(s_48);
  goto m_123;
  s_48 :
  goto r_48;
  m_123 :
  Move(1,3,2,4);
  Return();
  r_48 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(t_48);
  n_123 :
  Cpush(v_48);
  Ccall(_stratego_r_56);
  Tset(App0("Nil"));
  goto u_48;
  v_48 :
  Epushd(2,3);
  MoveTop(2,1);
  goto y_44;
  y_44 :
  TestFunFC(l_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(z_48);
  goto o_123;
  z_48 :
  goto y_48;
  o_123 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(b_49);
  goto n_123;
  b_49 :
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(3,3);
  goto q_44;
  q_44 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_44;
  w_44 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto x_44;
  x_44 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(i_49);
  goto r_123;
  i_49 :
  goto e_49;
  r_123 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(j_49);
  s_123 :
  Cpush(s_49);
  Ccall(_stratego_r_56);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto r_49;
  s_49 :
  Ccontinue(z_49);
  Epushd(4,3);
  MoveTop(4,1);
  goto p_44;
  p_44 :
  TestFunFC(l_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(c_50);
  goto t_123;
  c_50 :
  goto a_50;
  t_123 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(d_50);
  u_123 :
  Cpush(f_50);
  Epushd(5,3);
  MoveTop(5,1);
  goto o_44;
  o_44 :
  TestFunFC(l_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(i_50);
  goto v_123;
  i_50 :
  goto h_50;
  v_123 :
  Move(4,2,5,2);
  Return();
  h_50 :
  Epopd(5,3);
  goto e_50;
  f_50 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_50);
  goto u_123;
  k_50 :
  AllBuild();
  goto j_50;
  e_50 :
  Cpop();
  j_50 :
  Return();
  d_50 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(m_50);
  goto s_123;
  m_50 :
  Return();
  a_50 :
  Epopd(4,3);
  goto r_49;
  z_49 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_50);
  goto s_123;
  o_50 :
  AllBuild();
  goto n_50;
  r_49 :
  Cpop();
  n_50 :
  Return();
  j_49 :
  Return();
  e_49 :
  Epopd(3,7);
  Return();
  y_48 :
  Epopd(2,3);
  goto x_48;
  u_48 :
  Cpop();
  x_48 :
  Return();
  t_48 :
  Epopd(1,3);
  goto d_44;
  e_44 :
  Epushd(1,2);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  _ST_explode_term();
  MoveTop(2,1);
  goto b_45;
  b_45 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_45;
  j_45 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_45;
  k_45 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(s_50);
  goto x_123;
  s_50 :
  goto r_50;
  x_123 :
  Move(1,2,2,4);
  Return();
  r_50 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(t_50);
  y_123 :
  Cpush(w_50);
  Ccall(_stratego_r_56);
  Tset(App0("Nil"));
  goto u_50;
  w_50 :
  Epushd(2,3);
  MoveTop(2,1);
  goto w_45;
  w_45 :
  TestFunFC(l_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(z_50);
  goto z_123;
  z_50 :
  goto y_50;
  z_123 :
  Epushd(3,9);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(a_51);
  goto b_122;
  a_51 :
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(c_51);
  goto y_123;
  c_51 :
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,1);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,3),App0("TNil"))));
  MoveTop(3,5);
  goto t_45;
  t_45 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto u_45;
  u_45 :
  TestFunFC(r_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto v_45;
  v_45 :
  TestFunFC(s_0,&&fail,Egetd(3,9));
  Rpush(f_51);
  goto c_124;
  f_51 :
  goto e_51;
  c_124 :
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(g_51);
  d_124 :
  Cpush(i_51);
  Ccall(_stratego_r_56);
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  goto h_51;
  i_51 :
  Ccontinue(k_51);
  Epushd(4,3);
  MoveTop(4,1);
  goto s_45;
  s_45 :
  TestFunFC(l_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(n_51);
  goto e_124;
  n_51 :
  goto m_51;
  e_124 :
  Tdupl();
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  Rpush(o_51);
  f_124 :
  Cpush(q_51);
  Epushd(5,3);
  MoveTop(5,1);
  goto r_45;
  r_45 :
  TestFunFC(l_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(u_51);
  goto g_124;
  u_51 :
  goto s_51;
  g_124 :
  Move(4,2,5,2);
  Return();
  s_51 :
  Epopd(5,3);
  goto p_51;
  q_51 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_51);
  goto f_124;
  w_51 :
  AllBuild();
  goto v_51;
  p_51 :
  Cpop();
  v_51 :
  Return();
  o_51 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(x_51);
  goto d_124;
  x_51 :
  Return();
  m_51 :
  Epopd(4,3);
  goto h_51;
  k_51 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_52);
  goto d_124;
  a_52 :
  AllBuild();
  goto y_51;
  h_51 :
  Cpop();
  y_51 :
  Return();
  g_51 :
  Return();
  e_51 :
  Epopd(3,9);
  Return();
  y_50 :
  Epopd(2,3);
  goto x_50;
  u_50 :
  Cpop();
  x_50 :
  Return();
  t_50 :
  Epopd(1,2);
  goto p_50;
  d_44 :
  Cpop();
  p_50 :
  MoveTop(0,5);
  Move(0,4,0,5);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(0,6);
  goto f_46;
  f_46 :
  TestFunFC(r_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto g_46;
  g_46 :
  TestFunFC(r_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto h_46;
  h_46 :
  TestFunFC(s_0,&&fail,Egetd(0,10));
  Rpush(d_52);
  goto i_124;
  d_52 :
  goto c_52;
  i_124 :
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(e_52);
  j_124 :
  Cpush(g_52);
  Ccall(_stratego_r_56);
  NotNULLd(0,9);
  Tset(Egetd(0,9));
  goto f_52;
  g_52 :
  Ccontinue(i_52);
  Epushd(1,3);
  MoveTop(1,1);
  goto e_46;
  e_46 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(l_52);
  goto k_124;
  l_52 :
  goto k_52;
  k_124 :
  Tdupl();
  NotNULLd(0,9);
  Tset(Egetd(0,9));
  Rpush(m_52);
  l_124 :
  Cpush(o_52);
  Epushd(2,3);
  MoveTop(2,1);
  goto c_46;
  c_46 :
  TestFunFC(l_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(q_52);
  goto m_124;
  q_52 :
  goto p_52;
  m_124 :
  Move(1,2,2,2);
  Return();
  p_52 :
  Epopd(2,3);
  goto n_52;
  o_52 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_52);
  goto l_124;
  s_52 :
  AllBuild();
  goto r_52;
  n_52 :
  Cpop();
  r_52 :
  Return();
  m_52 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(t_52);
  goto j_124;
  t_52 :
  Return();
  k_52 :
  Epopd(1,3);
  goto f_52;
  i_52 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_52);
  goto j_124;
  v_52 :
  AllBuild();
  goto u_52;
  f_52 :
  Cpop();
  u_52 :
  Return();
  e_52 :
  Return();
  c_52 :
  Epopd(0,10);
  Return();
  v_43 :
ENDPROC

PROC(_stratego_j_58)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_w_56);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_k_58)
  Rpush(w_52);
  q_124 :
  Cpush(y_52);
  Ccall(_stratego_r_56);
  goto x_52;
  y_52 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_58);
  AllBuild();
  OneNextSon();
  Rpush(a_53);
  goto q_124;
  a_53 :
  AllBuild();
  goto z_52;
  x_52 :
  Cpop();
  z_52 :
  Return();
  w_52 :
ENDPROC

PROC(_stratego_l_58)
  Rpush(b_53);
  r_124 :
  Cpush(d_53);
  Ccall(_stratego_m_58);
  goto c_53;
  d_53 :
  goto e_53;
  c_53 :
  Cpop();
  e_53 :
  Cpush(g_53);
  f_53 :
  Cpush(i_53);
  Ccall(_stratego_s_58);
  goto h_53;
  i_53 :
  Ccontinue(j_53);
  Cpush(l_53);
  Ccall(_stratego_t_58);
  goto k_53;
  l_53 :
  Ccontinue(m_53);
  Epushd(0,4);
  MoveTop(0,1);
  goto m_46;
  m_46 :
  TestFunFC(p_53,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto n_46;
  n_46 :
  TestFunFC(q_53,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(o_53);
  goto t_124;
  o_53 :
  goto n_53;
  t_124 :
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,4)),Egetd(0,3)));
  Return();
  n_53 :
  Epopd(0,4);
  goto k_53;
  m_53 :
  Ccall(_stratego_u_58);
  goto r_53;
  k_53 :
  Cpop();
  r_53 :
  goto h_53;
  j_53 :
  Ccall(_stratego_v_58);
  goto s_53;
  h_53 :
  Cpop();
  s_53 :
  Tduplinv();
  goto f_53;
  g_53 :
  AllInit();
  t_53 :
  AllNextSon(&&u_53);
  Rpush(v_53);
  goto r_124;
  v_53 :
  goto t_53;
  u_53 :
  AllBuild();
  Return();
  b_53 :
ENDPROC

PROC(_stratego_m_58)
  Rpush(w_53);
  u_124 :
  Cpush(y_53);
  Cpush(a_54);
  Ccall(_stratego_n_58);
  Rpush(b_54);
  goto u_124;
  b_54 :
  goto z_53;
  a_54 :
  Ccontinue(c_54);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_54);
  goto u_124;
  d_54 :
  AllBuild();
  goto z_53;
  c_54 :
  Ccall(_stratego_o_58);
  goto e_54;
  z_53 :
  Cpop();
  e_54 :
  goto x_53;
  y_53 :
  goto f_54;
  x_53 :
  Cpop();
  f_54 :
  Return();
  w_53 :
ENDPROC

PROC(_stratego_n_58)
  Epushd(0,5);
  MoveTop(0,1);
  goto b_47;
  b_47 :
  TestFunFC(i_54,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto c_47;
  c_47 :
  TestFunFC(b_20,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(h_54);
  goto v_124;
  h_54 :
  goto g_54;
  v_124 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(j_54);
  x_124 :
  Cpush(l_54);
  Epushd(2,5);
  MoveTop(2,1);
  goto r_46;
  r_46 :
  TestFunFC(o_54,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto s_46;
  s_46 :
  TestFunFC(g_12,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(n_54);
  goto y_124;
  n_54 :
  goto m_54;
  y_124 :
  Move(1,6,2,3);
  Move(1,4,2,4);
  Move(1,2,2,5);
  NotNULLd(1,6);
  Tset(App1("Var",Egetd(1,6)));
  Return();
  m_54 :
  Epopd(2,5);
  goto k_54;
  l_54 :
  IsAppl();
  OneInit();
  q_54 :
  OneNextSon();
  Cpush(q_54);
  Rpush(s_54);
  goto x_124;
  s_54 :
  Cpop();
  OneBuild();
  goto p_54;
  k_54 :
  Cpop();
  p_54 :
  Return();
  j_54 :
  MoveTop(1,9);
  Move(1,7,1,9);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(t_54);
  a_125 :
  Cpush(v_54);
  Epushd(2,7);
  MoveTop(2,1);
  goto v_46;
  v_46 :
  TestFunFC(o_54,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto w_46;
  w_46 :
  TestFunFC(g_12,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto x_46;
  x_46 :
  TestFunFC(v_42,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto y_46;
  y_46 :
  TestFunFC(w_0,&&fail,Egetd(2,7));
  Rpush(x_54);
  goto b_125;
  x_54 :
  goto w_54;
  b_125 :
  Move(1,6,2,3);
  Move(1,5,2,4);
  Move(1,3,2,6);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  w_54 :
  Epopd(2,7);
  goto u_54;
  v_54 :
  IsAppl();
  OneInit();
  z_54 :
  OneNextSon();
  Cpush(z_54);
  Rpush(b_55);
  goto a_125;
  b_55 :
  Cpop();
  OneBuild();
  goto y_54;
  u_54 :
  Cpop();
  y_54 :
  Return();
  t_54 :
  MoveTop(1,10);
  Move(1,8,1,10);
  NotNULLd(1,7);
  NotNULLd(1,8);
  NotNULLd(0,5);
  NotNULLd(1,3);
  NotNULLd(1,4);
  NotNULLd(1,5);
  NotNULLd(1,6);
  NotNULLd(1,1);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App1("SRule",App3("Rule",Egetd(1,7),Egetd(1,8),App2("Seq",Egetd(0,5),App3("BAM",App2("Call",Egetd(1,3),App2("Cons",App1("SRule",App3("Rule",Egetd(1,4),Egetd(1,5),App0("Id"))),App0("Nil"))),App1("Var",Egetd(1,6)),App1("Var",Egetd(1,1))))))));
  Epopd(1,10);
  Return();
  g_54 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_58)
  Epushd(0,5);
  MoveTop(0,1);
  goto f_47;
  f_47 :
  TestFunFC(i_54,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto g_47;
  g_47 :
  TestFunFC(b_20,&&f_55,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(e_55);
  goto d_125;
  f_55 :
  TestFunFC(g_55,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(e_55);
  goto e_125;
  e_55 :
  goto d_55;
  e_125 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,5),App2("Cons",Egetd(0,4),App0("Nil"))))));
  Return();
  d_55 :
  goto c_55;
  d_125 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_p_58);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_q_58);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",App1("Match",Egetd(0,3)),App2("Cons",Egetd(0,5),App2("Cons",App1("Build",Egetd(0,4)),App0("Nil"))))));
  Return();
  c_55 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_58)
  Cpush(h_55);
  Tdupl();
  Rpush(i_55);
  f_125 :
  Epushd(0,4);
  MoveTop(0,2);
  goto j_47;
  j_47 :
  TestFunFC(o_54,&&m_55,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  Rpush(l_55);
  goto g_125;
  m_55 :
  TestFunFC(q_53,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(l_55);
  goto h_125;
  l_55 :
  goto k_55;
  h_125 :
  Return();
  k_55 :
  goto j_55;
  g_125 :
  Return();
  j_55 :
  AllInit();
  n_55 :
  AllNextSon(&&o_55);
  Rpush(p_55);
  goto f_125;
  p_55 :
  goto n_55;
  o_55 :
  AllBuild();
  Epopd(0,4);
  Return();
  i_55 :
  Cpop();
  Crestore();
  Cjump();
  h_55 :
ENDPROC

PROC(_stratego_q_58)
  Cpush(q_55);
  Tdupl();
  Rpush(r_55);
  i_125 :
  Cpush(t_55);
  Epushd(0,4);
  MoveTop(0,1);
  goto l_47;
  l_47 :
  TestFunFC(o_54,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(v_55);
  goto j_125;
  v_55 :
  goto u_55;
  j_125 :
  Return();
  u_55 :
  Epopd(0,4);
  goto s_55;
  t_55 :
  Ccall(_stratego_r_58);
  goto w_55;
  s_55 :
  Cpop();
  w_55 :
  AllInit();
  x_55 :
  AllNextSon(&&y_55);
  Rpush(a_56);
  goto i_125;
  a_56 :
  goto x_55;
  y_55 :
  AllBuild();
  Return();
  r_55 :
  Cpop();
  Crestore();
  Cjump();
  q_55 :
ENDPROC

PROC(_stratego_r_58)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_47;
  n_47 :
  TestFunFC(d_56,&&fail,Egetd(0,1));
  Rpush(c_56);
  goto k_125;
  c_56 :
  goto b_56;
  k_125 :
  Return();
  b_56 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_58)
  Epushd(0,6);
  MoveTop(0,3);
  goto a_48;
  a_48 :
  TestFunFC(x_58,&&p_57,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto b_48;
  b_48 :
  TestFunFC(w_0,&&y_58,Egetd(0,4));
  Rpush(o_57);
  goto l_125;
  y_58 :
  TestFunFC(l_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(o_57);
  goto m_125;
  p_57 :
  TestFunFC(a_59,&&z_58,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto c_48;
  c_48 :
  TestFunFC(w_0,&&c_59,Egetd(0,4));
  Rpush(o_57);
  goto n_125;
  c_59 :
  TestFunFC(l_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(o_57);
  goto o_125;
  z_58 :
  TestFunFC(e_59,&&d_59,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto d_48;
  d_48 :
  TestFunFC(w_0,&&f_59,Egetd(0,4));
  Rpush(o_57);
  goto p_125;
  f_59 :
  TestFunFC(l_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(o_57);
  goto q_125;
  d_59 :
  TestFunFC(i_59,&&h_59,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto e_48;
  e_48 :
  TestFunFC(w_0,&&j_59,Egetd(0,4));
  Rpush(o_57);
  goto r_125;
  j_59 :
  TestFunFC(l_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(o_57);
  goto s_125;
  h_59 :
  TestFunFC(m_59,&&k_59,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(o_57);
  goto t_125;
  k_59 :
  TestFunFC(b_60,&&n_59,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(o_57);
  goto u_125;
  n_59 :
  TestFunFC(e_60,&&d_60,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(o_57);
  goto v_125;
  d_60 :
  TestFunFC(f_60,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(o_57);
  goto w_125;
  o_57 :
  goto p_56;
  w_125 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  p_56 :
  goto o_56;
  v_125 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  o_56 :
  goto n_56;
  u_125 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  n_56 :
  goto m_56;
  t_125 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  m_56 :
  goto l_56;
  s_125 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  l_56 :
  goto k_56;
  r_125 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  k_56 :
  goto j_56;
  q_125 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  j_56 :
  goto i_56;
  p_125 :
  Tset(App0("Fail"));
  Return();
  i_56 :
  goto h_56;
  o_125 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  h_56 :
  goto g_56;
  n_125 :
  Tset(App0("Fail"));
  Return();
  g_56 :
  goto f_56;
  m_125 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  f_56 :
  goto e_56;
  l_125 :
  Tset(App0("Id"));
  Return();
  e_56 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_t_58)
  Epushd(0,2);
  MoveTop(0,1);
  goto k_48;
  k_48 :
  TestFunFC(p_53,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(p_60);
  goto x_125;
  p_60 :
  goto n_60;
  x_125 :
  Epushd(1,4);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(q_60);
  y_125 :
  Cpush(s_60);
  Epushd(2,4);
  MoveTop(2,1);
  goto h_48;
  h_48 :
  TestFunFC(q_53,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto i_48;
  i_48 :
  TestFunFC(p_53,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(w_60);
  goto z_125;
  w_60 :
  goto t_60;
  z_125 :
  Move(1,2,2,3);
  Move(1,1,2,4);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  t_60 :
  Epopd(2,4);
  goto r_60;
  s_60 :
  IsAppl();
  OneInit();
  y_61 :
  OneNextSon();
  Cpush(y_61);
  Rpush(i_62);
  goto y_125;
  i_62 :
  Cpop();
  OneBuild();
  goto x_61;
  r_60 :
  Cpop();
  x_61 :
  Return();
  q_60 :
  MoveTop(1,4);
  Move(1,3,1,4);
  NotNULLd(1,3);
  Tset(App1("Build",Egetd(1,3)));
  Epopd(1,4);
  Return();
  n_60 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_u_58)
  Epushd(0,2);
  MoveTop(0,1);
  goto q_48;
  q_48 :
  TestFunFC(p_53,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(k_62);
  goto b_126;
  k_62 :
  goto j_62;
  b_126 :
  Epushd(1,5);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(t_62);
  d_126 :
  Cpush(v_62);
  Epushd(2,3);
  MoveTop(2,1);
  goto o_48;
  o_48 :
  TestFunFC(q_53,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(l_63);
  goto e_126;
  l_63 :
  goto h_63;
  e_126 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  h_63 :
  Epopd(2,3);
  goto u_62;
  v_62 :
  IsAppl();
  OneInit();
  p_63 :
  OneNextSon();
  Cpush(p_63);
  Rpush(w_63);
  goto d_126;
  w_63 :
  Cpop();
  OneBuild();
  goto m_63;
  u_62 :
  Cpop();
  m_63 :
  Return();
  t_62 :
  MoveTop(1,5);
  Move(1,4,1,5);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",Egetd(1,2),Egetd(1,3),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,5);
  Return();
  j_62 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_58)
  Epushd(0,3);
  MoveTop(0,1);
  goto c_49;
  c_49 :
  TestFunFC(j_64,&&f_64,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(a_64);
  goto g_126;
  f_64 :
  TestFunFC(p_53,&&n_64,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(a_64);
  goto l_126;
  n_64 :
  TestFunFC(q_64,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(a_64);
  goto q_126;
  a_64 :
  goto z_63;
  q_126 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Prim",ATmakeString("_ST_explode_term")),App2("Seq",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,2),App2("Cons",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,3),App2("Cons",App2("Cong",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Prim",ATmakeString("_ST_mkterm")))));
  Return();
  z_63 :
  goto y_63;
  l_126 :
  Epushd(1,5);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(r_64);
  n_126 :
  Cpush(d_65);
  Epushd(2,3);
  MoveTop(2,1);
  goto a_49;
  a_49 :
  TestFunFC(g_65,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(f_65);
  goto o_126;
  f_65 :
  goto e_65;
  o_126 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  e_65 :
  Epopd(2,3);
  goto u_64;
  d_65 :
  IsAppl();
  OneInit();
  p_65 :
  OneNextSon();
  Cpush(p_65);
  Rpush(u_65);
  goto n_126;
  u_65 :
  Cpop();
  OneBuild();
  goto o_65;
  u_64 :
  Cpop();
  o_65 :
  Return();
  r_64 :
  MoveTop(1,5);
  Move(1,4,1,5);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",App1("Prim",ATmakeString("_ST_mkterm")),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,5);
  Return();
  y_63 :
  goto x_63;
  g_126 :
  Epushd(1,5);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(v_65);
  i_126 :
  Cpush(c_66);
  Epushd(2,3);
  MoveTop(2,1);
  goto w_48;
  w_48 :
  TestFunFC(g_65,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(m_66);
  goto j_126;
  m_66 :
  goto j_66;
  j_126 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  j_66 :
  Epopd(2,3);
  goto w_65;
  c_66 :
  IsAppl();
  OneInit();
  x_66 :
  OneNextSon();
  Cpush(x_66);
  Rpush(c_67);
  goto i_126;
  c_67 :
  Cpop();
  OneBuild();
  goto n_66;
  w_65 :
  Cpop();
  n_66 :
  Return();
  v_65 :
  MoveTop(1,5);
  Move(1,4,1,5);
  NotNULLd(1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App1("Match",Egetd(1,4)),App1("Where",App3("BAM",App1("Prim",ATmakeString("_ST_explode_term")),App1("Var",Egetd(1,1)),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))))))));
  Epopd(1,5);
  Return();
  x_63 :
  Epopd(0,3);
ENDPROC
