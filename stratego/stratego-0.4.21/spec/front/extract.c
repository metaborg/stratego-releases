#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,h_69);
VARDECL(AFun,w_68);
VARDECL(AFun,s_68);
VARDECL(AFun,e_66);
VARDECL(AFun,d_66);
VARDECL(AFun,r_65);
VARDECL(AFun,p_65);
VARDECL(AFun,m_65);
VARDECL(AFun,d_65);
VARDECL(AFun,s_64);
VARDECL(AFun,p_64);
VARDECL(AFun,i_63);
VARDECL(AFun,g_61);
VARDECL(AFun,p_59);
VARDECL(AFun,r_56);
VARDECL(AFun,y_55);
VARDECL(AFun,x_55);
VARDECL(AFun,q_42);
VARDECL(AFun,z_29);
VARDECL(AFun,f_26);
VARDECL(AFun,l_24);
VARDECL(AFun,j_24);
VARDECL(AFun,p_18);
VARDECL(AFun,o_18);
VARDECL(AFun,o_12);
VARDECL(AFun,m_12);
VARDECL(AFun,u_11);
VARDECL(AFun,t_11);
VARDECL(AFun,r_11);
VARDECL(AFun,y_10);
VARDECL(AFun,x_10);
VARDECL(AFun,r_9);
VARDECL(AFun,j_9);
VARDECL(AFun,c_9);
VARDECL(AFun,b_9);
VARDECL(AFun,a_9);
VARDECL(AFun,z_8);
VARDECL(AFun,k_8);
VARDECL(AFun,b_8);
VARDECL(AFun,p_7);
VARDECL(AFun,e_7);
VARDECL(AFun,p_6);
VARDECL(AFun,f_6);
VARDECL(AFun,x_5);
VARDECL(AFun,u_5);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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
PROCDECL(_stratego_o_57);
PROCDECL(_stratego_p_57);
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
PROCDECL(_stratego_u_58);
PROCDECL(_stratego_v_58);
PROCDECL(_stratego_w_58);
PROCDECL(_stratego_x_58);

PROC(_stratego_init_afuns)
  MOVE(h_69,ATmakeAFun("Explode",2,0));
  MOVE(w_68,ATmakeAFun("ExplodeCong",2,0));
  MOVE(s_68,ATmakeAFun("Match",1,0));
  MOVE(e_66,ATmakeAFun("BAM",3,0));
  MOVE(d_66,ATmakeAFun("AM",2,0));
  MOVE(r_65,ATmakeAFun("MA",2,0));
  MOVE(p_65,ATmakeAFun("BA",2,0));
  MOVE(m_65,ATmakeAFun("Lets",2,0));
  MOVE(d_65,ATmakeAFun("LChoices",1,0));
  MOVE(s_64,ATmakeAFun("Choices",1,0));
  MOVE(p_64,ATmakeAFun("Seqs",1,0));
  MOVE(i_63,ATmakeAFun("Wld",0,0));
  MOVE(g_61,ATmakeAFun("StratRule",3,0));
  MOVE(p_59,ATmakeAFun("Con",3,0));
  MOVE(r_56,ATmakeAFun("SRule",1,0));
  MOVE(y_55,ATmakeAFun("App",2,0));
  MOVE(x_55,ATmakeAFun("Build",1,0));
  MOVE(q_42,ATmakeAFun("Call",2,0));
  MOVE(z_29,ATmakeAFun("Mod",2,0));
  MOVE(f_26,ATmakeAFun("SVar",1,0));
  MOVE(l_24,ATmakeAFun("Rec",2,0));
  MOVE(j_24,ATmakeAFun("Let",2,0));
  MOVE(p_18,ATmakeAFun("Rule",3,0));
  MOVE(o_18,ATmakeAFun("LRule",1,0));
  MOVE(o_12,ATmakeAFun("Scope",2,0));
  MOVE(m_12,ATmakeAFun("Var",1,0));
  MOVE(u_11,ATmakeAFun("FunType",2,0));
  MOVE(t_11,ATmakeAFun("ConstType",1,0));
  MOVE(r_11,ATmakeAFun("OpDecl",2,0));
  MOVE(y_10,ATmakeAFun("Operations",1,0));
  MOVE(x_10,ATmakeAFun("Sorts",1,0));
  MOVE(r_9,ATmakeAFun("SDef",3,0));
  MOVE(j_9,ATmakeAFun("RDef",3,0));
  MOVE(c_9,ATmakeAFun("Strategies",1,0));
  MOVE(b_9,ATmakeAFun("Rules",1,0));
  MOVE(a_9,ATmakeAFun("Signature",1,0));
  MOVE(z_8,ATmakeAFun("Specification",1,0));
  MOVE(k_8,ATmakeAFun("Runtime",1,0));
  MOVE(b_8,ATmakeAFun("Silent",0,0));
  MOVE(p_7,ATmakeAFun("Binary",0,0));
  MOVE(e_7,ATmakeAFun("Output",1,0));
  MOVE(p_6,ATmakeAFun("Input",1,0));
  MOVE(f_6,ATmakeAFun("Program",1,0));
  MOVE(x_5,ATmakeAFun("Help",0,0));
  MOVE(u_5,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(p_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_s_56);
ENDPROC

PROC(_stratego_s_56)
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
  Ccall(_stratego_t_56);
  goto f_0;
  g_0 :
  Ccall(_stratego_u_56);
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
  goto k_4;
  l_0 :
  goto k_0;
  k_4 :
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
  Ccall(_stratego_v_56);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_a_57);
  Tdupl();
  Ccall(_stratego_c_57);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_57);
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_c_57);
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
  goto m_4;
  r_0 :
  goto q_0;
  m_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_d_57);
  Ccall(_stratego_g_57);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_h_57);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_t_56)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_4;
  p_4 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto r_4;
  v_0 :
  goto u_0;
  r_4 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_56)
  Epushd(0,5);
  MoveTop(0,3);
  goto b_11;
  b_11 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_11;
  c_11 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto j_16;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto m_16;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto p_16;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto s_16;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto d_17;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto g_17;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto k_17;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto z_17;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto f_18;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto j_18;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto s_18;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto d_19;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto j_19;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto m_19;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto p_19;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto j_16;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto m_16;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto p_16;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto s_16;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto d_17;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto s_18;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto d_19;
  r_3 :
  goto t_2;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto j_19;
  t_3 :
  goto t_2;
  s_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto m_19;
  v_3 :
  goto t_2;
  u_3 :
  Rpush(b_4);
  goto p_19;
  b_4 :
  goto w_3;
  t_2 :
  Cpop();
  w_3 :
  goto m_1;
  m_1 :
  goto l_1;
  p_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_10;
  z_10 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_4);
  goto q_19;
  d_4 :
  goto c_4;
  q_19 :
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
  m_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_10;
  s_10 :
  TestStr(1,1,"-h",&&fail);
  Rpush(g_4);
  goto n_19;
  g_4 :
  goto e_4;
  n_19 :
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
  j_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_10;
  p_10 :
  TestStr(1,1,"--help",&&fail);
  Rpush(i_4);
  goto k_19;
  i_4 :
  goto h_4;
  k_19 :
  Return();
  h_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  d_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_10;
  m_10 :
  TestStr(1,1,"-s",&&fail);
  Rpush(l_4);
  goto e_19;
  l_4 :
  goto j_4;
  e_19 :
  Return();
  j_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  s_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_10;
  j_10 :
  TestStr(1,1,"-b",&&fail);
  Rpush(o_4);
  goto b_19;
  o_4 :
  goto n_4;
  b_19 :
  Return();
  n_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  j_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_10;
  f_10 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto k_18;
  t_4 :
  goto s_4;
  k_18 :
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
  f_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_10;
  b_10 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto g_18;
  v_4 :
  goto u_4;
  g_18 :
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
  z_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_9;
  x_9 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto a_18;
  x_4 :
  goto w_4;
  a_18 :
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
  k_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_8;
  d_8 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto l_17;
  z_4 :
  goto y_4;
  l_17 :
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
  g_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_7;
  c_7 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_5);
  goto h_17;
  b_5 :
  goto a_5;
  h_17 :
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
  d_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_6;
  z_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_5);
  goto e_17;
  d_5 :
  goto c_5;
  e_17 :
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
  s_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_6;
  u_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_5);
  goto t_16;
  f_5 :
  goto e_5;
  t_16 :
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
  p_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_6;
  r_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_5);
  goto q_16;
  h_5 :
  goto g_5;
  q_16 :
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
  m_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_6;
  d_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_5);
  goto n_16;
  j_5 :
  goto i_5;
  n_16 :
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
  j_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_6;
  a_6 :
  TestStr(1,1,"-S",&&fail);
  Rpush(l_5);
  goto k_16;
  l_5 :
  goto k_5;
  k_16 :
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

PROC(_stratego_v_56)
  Tdupl();
  m_5 :
  TestFunTop(a_0);
  Cpush(n_5);
  Arg(0);
  Cpush(q_5);
  Ccall(_stratego_w_56);
  goto p_5;
  q_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto v_19;
  v_19 :
  TestFunFC(u_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_5);
  goto z_19;
  t_5 :
  goto s_5;
  z_19 :
  Return();
  s_5 :
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
  Ccall(_stratego_x_56);
ENDPROC

PROC(_stratego_w_56)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_20;
  b_20 :
  TestFunFC(x_5,&&fail,Egetd(0,1));
  Rpush(w_5);
  goto d_20;
  w_5 :
  goto v_5;
  d_20 :
  Return();
  v_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_56)
  Epushd(0,1);
  Tdupl();
  Rpush(y_5);
  m_20 :
  Cpush(b_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_20;
  f_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_20;
  g_20 :
  TestFunFC(f_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_6);
  goto n_20;
  e_6 :
  goto c_6;
  n_20 :
  Move(0,1,1,3);
  Return();
  c_6 :
  Epopd(1,4);
  goto z_5;
  b_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_6);
  goto m_20;
  h_6 :
  AllBuild();
  goto g_6;
  z_5 :
  Cpop();
  g_6 :
  Return();
  y_5 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_y_56);
  Tset(MakeInt(1));
  Ccall(_stratego_z_56);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_56)
  _ST_printnl();
ENDPROC

PROC(_stratego_z_56)
  _ST_exit();
ENDPROC

PROC(_stratego_a_57)
  Epushd(0,3);
  Tdupl();
  Cpush(j_6);
  Rpush(k_6);
  h_21 :
  Cpush(m_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto p_20;
  p_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_20;
  q_20 :
  TestFunFC(p_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_6);
  goto i_21;
  o_6 :
  goto n_6;
  i_21 :
  Move(0,1,1,3);
  Return();
  n_6 :
  Epopd(1,4);
  goto l_6;
  m_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_6);
  goto h_21;
  s_6 :
  AllBuild();
  goto q_6;
  l_6 :
  Cpop();
  q_6 :
  Return();
  k_6 :
  goto i_6;
  j_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto t_6;
  i_6 :
  Cpop();
  t_6 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_b_57);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_b_57)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_c_57)
  _ST_dtime();
ENDPROC

PROC(_stratego_d_57)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(w_6);
  Rpush(x_6);
  m_22 :
  Cpush(a_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto o_21;
  o_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto p_21;
  p_21 :
  TestFunFC(e_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_7);
  goto n_22;
  d_7 :
  goto b_7;
  n_22 :
  Move(0,1,1,3);
  Return();
  b_7 :
  Epopd(1,4);
  goto y_6;
  a_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_7);
  goto m_22;
  g_7 :
  AllBuild();
  goto f_7;
  y_6 :
  Cpop();
  f_7 :
  Return();
  x_6 :
  goto v_6;
  w_6 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto h_7;
  v_6 :
  Cpop();
  h_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_57);
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
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  Cpush(j_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(k_7);
  s_22 :
  Cpush(m_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto v_21;
  v_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_21;
  w_21 :
  TestFunFC(p_7,&&fail,Egetd(1,2));
  Rpush(o_7);
  goto t_22;
  o_7 :
  goto n_7;
  t_22 :
  Return();
  n_7 :
  Epopd(1,3);
  goto l_7;
  m_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_7);
  goto s_22;
  r_7 :
  AllBuild();
  goto q_7;
  l_7 :
  Cpop();
  q_7 :
  Return();
  k_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_57);
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  goto i_7;
  j_7 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_57);
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  goto s_7;
  i_7 :
  Cpop();
  s_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_57)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_f_57)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_g_57)
  Epushd(0,2);
  Tdupl();
  Cpush(u_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(v_7);
  Tdupl();
  Rpush(w_7);
  d_24 :
  Cpush(y_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto v_22;
  v_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_22;
  w_22 :
  TestFunFC(b_8,&&fail,Egetd(1,2));
  Rpush(a_8);
  goto e_24;
  a_8 :
  goto z_7;
  e_24 :
  Return();
  z_7 :
  Epopd(1,3);
  goto x_7;
  y_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_8);
  goto d_24;
  e_8 :
  AllBuild();
  goto c_8;
  x_7 :
  Cpop();
  c_8 :
  Return();
  w_7 :
  Cpop();
  Crestore();
  Cjump();
  v_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(f_8);
  t_24 :
  Cpush(h_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_22;
  y_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_22;
  z_22 :
  TestFunFC(k_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(j_8);
  goto u_24;
  j_8 :
  goto i_8;
  u_24 :
  Move(0,2,1,3);
  Return();
  i_8 :
  Epopd(1,4);
  goto g_8;
  h_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_8);
  goto t_24;
  m_8 :
  AllBuild();
  goto l_8;
  g_8 :
  Cpop();
  l_8 :
  Return();
  f_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(n_8);
  v_24 :
  Cpush(p_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_23;
  b_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_23;
  c_23 :
  TestFunFC(f_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_8);
  goto w_24;
  r_8 :
  goto q_8;
  w_24 :
  Move(0,1,1,3);
  Return();
  q_8 :
  Epopd(1,4);
  goto o_8;
  p_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_8);
  goto v_24;
  t_8 :
  AllBuild();
  goto s_8;
  o_8 :
  Cpop();
  s_8 :
  Return();
  n_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_y_56);
  goto t_7;
  u_7 :
  goto u_8;
  t_7 :
  Cpop();
  u_8 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_z_56);
  Epopd(0,2);
ENDPROC

PROC(_stratego_h_57)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_y_56);
  Tset(MakeInt(1));
  Ccall(_stratego_z_56);
ENDPROC

PROC(_stratego_i_57)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_24;
  y_24 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(w_8);
  goto h_25;
  w_8 :
  goto v_8;
  h_25 :
  Return();
  v_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_57)
  Epushd(0,11);
  MoveTop(0,1);
  goto z_26;
  z_26 :
  TestFunFC(z_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto a_27;
  a_27 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto b_27;
  b_27 :
  TestFunFC(a_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto c_27;
  c_27 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto d_27;
  d_27 :
  TestFunFC(b_9,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto e_27;
  e_27 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,11,0,8,1);
  goto f_27;
  f_27 :
  TestFunFC(c_9,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto i_27;
  i_27 :
  TestFunFC(w_0,&&fail,Egetd(0,11));
  Rpush(y_8);
  goto m_29;
  y_8 :
  goto x_8;
  m_29 :
  Epushd(1,11);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_l_57);
  MoveTop(1,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(d_9);
  r_29 :
  Cpush(f_9);
  Ccall(_stratego_t_56);
  goto e_9;
  f_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto m_26;
  m_26 :
  TestFunFC(j_9,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(i_9);
  goto s_29;
  i_9 :
  goto h_9;
  s_29 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_p_57);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,4);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),App2("Scope",Egetd(3,1),App1("SRule",Egetd(2,4)))));
  Epopd(3,1);
  Return();
  h_9 :
  Epopd(2,4);
  OneNextSon();
  Rpush(k_9);
  goto r_29;
  k_9 :
  AllBuild();
  goto g_9;
  e_9 :
  Cpop();
  g_9 :
  Return();
  d_9 :
  MoveTop(1,2);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(l_9);
  v_29 :
  Cpush(n_9);
  Ccall(_stratego_t_56);
  goto m_9;
  n_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto q_26;
  q_26 :
  TestFunFC(r_9,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(q_9);
  goto w_29;
  q_9 :
  goto p_9;
  w_29 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_p_57);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,4);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),App2("Scope",Egetd(3,1),Egetd(2,4))));
  Epopd(3,1);
  Return();
  p_9 :
  Epopd(2,4);
  OneNextSon();
  Rpush(s_9);
  goto v_29;
  s_9 :
  AllBuild();
  goto o_9;
  m_9 :
  Cpop();
  o_9 :
  Return();
  l_9 :
  MoveTop(1,3);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",Egetd(1,1),App2("Cons",Egetd(1,2),App2("Cons",Egetd(1,3),App0("Nil")))));
  Ccall(_stratego_k_57);
  MoveTop(1,4);
  NotNULLd(0,4);
  NotNULLd(1,4);
  Tset(App1("Specification",App2("Cons",App1("Signature",Egetd(0,4)),App2("Cons",App1("Strategies",Egetd(1,4)),App0("Nil")))));
  Ccall(_stratego_t_57);
  MoveTop(1,5);
  goto u_26;
  u_26 :
  TestFunFC(z_8,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  goto v_26;
  v_26 :
  TestFunFC(a_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto w_26;
  w_26 :
  TestFunFC(a_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,11,1,8,1);
  goto x_26;
  x_26 :
  TestFunFC(c_9,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  goto y_26;
  y_26 :
  TestFunFC(w_0,&&fail,Egetd(1,11));
  Rpush(u_9);
  goto f_30;
  u_9 :
  goto t_9;
  f_30 :
  NotNULLd(1,10);
  Tset(Egetd(1,10));
  Ccall(_stratego_x_57);
  Ccall(_stratego_k_58);
  Return();
  t_9 :
  Epopd(1,11);
  Return();
  x_8 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_k_57)
  Rpush(v_9);
  o_30 :
  Cpush(y_9);
  Ccall(_stratego_t_56);
  goto w_9;
  y_9 :
  Epushd(0,3);
  MoveTop(0,1);
  goto h_30;
  h_30 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(c_10);
  goto p_30;
  c_10 :
  goto a_10;
  p_30 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(d_10);
  q_30 :
  Cpush(g_10);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_10);
  goto q_30;
  h_10 :
  AllBuild();
  goto e_10;
  g_10 :
  Ccall(_stratego_t_56);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_10);
  goto o_30;
  k_10 :
  goto i_10;
  e_10 :
  Cpop();
  i_10 :
  Return();
  d_10 :
  Return();
  a_10 :
  Epopd(0,3);
  goto z_9;
  w_9 :
  Cpop();
  z_9 :
  Return();
  v_9 :
ENDPROC

PROC(_stratego_l_57)
  Rpush(l_10);
  r_30 :
  Cpush(o_10);
  Ccall(_stratego_t_56);
  goto n_10;
  o_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_57);
  OneNextSon();
  Rpush(r_10);
  goto r_30;
  r_10 :
  AllBuild();
  goto q_10;
  n_10 :
  Cpop();
  q_10 :
  Return();
  l_10 :
  Ccall(_stratego_k_57);
ENDPROC

PROC(_stratego_m_57)
  Epushd(0,2);
  MoveTop(0,1);
  goto u_30;
  u_30 :
  TestFunFC(x_10,&&w_10,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_10);
  goto x_31;
  w_10 :
  TestFunFC(y_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_10);
  goto y_31;
  v_10 :
  goto u_10;
  y_31 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(a_11);
  k_32 :
  Cpush(j_11);
  Ccall(_stratego_t_56);
  goto i_11;
  j_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_57);
  OneNextSon();
  Rpush(m_11);
  goto k_32;
  m_11 :
  AllBuild();
  goto k_11;
  i_11 :
  Cpop();
  k_11 :
  Return();
  a_11 :
  Return();
  u_10 :
  goto t_10;
  x_31 :
  Tset(App0("Nil"));
  Return();
  t_10 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_n_57)
  Epushd(0,5);
  MoveTop(0,1);
  goto r_32;
  r_32 :
  TestFunFC(r_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_32;
  s_32 :
  TestFunFC(t_11,&&s_11,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(p_11);
  goto g_34;
  s_11 :
  TestFunFC(u_11,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(p_11);
  goto h_34;
  p_11 :
  goto o_11;
  h_34 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(v_11);
  i_34 :
  Cpush(x_11);
  Ccall(_stratego_t_56);
  goto w_11;
  x_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_57);
  OneNextSon();
  Rpush(z_11);
  goto i_34;
  z_11 :
  AllBuild();
  goto y_11;
  w_11 :
  Cpop();
  y_11 :
  Return();
  v_11 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(a_12);
  k_34 :
  Cpush(d_12);
  Ccall(_stratego_t_56);
  goto c_12;
  d_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("Call",App1("SVar",Egetd(2,1)),App0("Nil")));
  Epopd(2,1);
  OneNextSon();
  Rpush(f_12);
  goto k_34;
  f_12 :
  AllBuild();
  goto e_12;
  c_12 :
  Cpop();
  e_12 :
  Return();
  a_12 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(1,2);
  Tset(App3("SDef",Egetd(0,2),Egetd(1,1),App2("Cong",Egetd(0,2),Egetd(1,2))));
  Epopd(1,2);
  Return();
  o_11 :
  goto n_11;
  g_34 :
  NotNULLd(0,2);
  Tset(App3("SDef",Egetd(0,2),App0("Nil"),App2("Cong",Egetd(0,2),App0("Nil"))));
  Return();
  n_11 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_57)
  _ST_new();
ENDPROC

PROC(_stratego_p_57)
  Rpush(h_12);
  z_40 :
  Cpush(j_12);
  Epushd(0,2);
  MoveTop(0,1);
  goto o_34;
  o_34 :
  TestFunFC(m_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_12);
  goto a_41;
  l_12 :
  goto k_12;
  a_41 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  k_12 :
  Epopd(0,2);
  goto i_12;
  j_12 :
  Ccontinue(n_12);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_s_57);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(o_12);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(p_12);
  goto z_40;
  p_12 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_q_57);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto v_34;
  v_34 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_34;
  y_34 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_34;
  z_34 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(r_12);
  goto k_41;
  r_12 :
  goto q_12;
  k_41 :
  Move(0,3,1,4);
  Return();
  q_12 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_12);
  l_41 :
  Cpush(u_12);
  Ccall(_stratego_t_56);
  Tset(App0("Nil"));
  goto t_12;
  u_12 :
  Epushd(1,3);
  MoveTop(1,1);
  goto l_35;
  l_35 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(y_12);
  goto m_41;
  y_12 :
  goto w_12;
  m_41 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(z_12);
  goto l_41;
  z_12 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto i_35;
  i_35 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto j_35;
  j_35 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto k_35;
  k_35 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(b_13);
  goto p_41;
  b_13 :
  goto a_13;
  p_41 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(c_13);
  q_41 :
  Cpush(f_13);
  Ccall(_stratego_t_56);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto e_13;
  f_13 :
  Ccontinue(g_13);
  Epushd(3,3);
  MoveTop(3,1);
  goto h_35;
  h_35 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_13);
  goto r_41;
  i_13 :
  goto h_13;
  r_41 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(j_13);
  s_41 :
  Cpush(m_13);
  Epushd(4,3);
  MoveTop(4,1);
  goto g_35;
  g_35 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(o_13);
  goto t_41;
  o_13 :
  goto n_13;
  t_41 :
  Move(3,2,4,2);
  Return();
  n_13 :
  Epopd(4,3);
  goto k_13;
  m_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_13);
  goto s_41;
  q_13 :
  AllBuild();
  goto p_13;
  k_13 :
  Cpop();
  p_13 :
  Return();
  j_13 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(r_13);
  goto q_41;
  r_13 :
  Return();
  h_13 :
  Epopd(3,3);
  goto e_13;
  g_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_13);
  goto q_41;
  u_13 :
  AllBuild();
  goto s_13;
  e_13 :
  Cpop();
  s_13 :
  Return();
  c_13 :
  Return();
  a_13 :
  Epopd(2,6);
  Return();
  w_12 :
  Epopd(1,3);
  goto v_12;
  t_12 :
  Cpop();
  v_12 :
  Return();
  s_12 :
  Epopd(0,3);
  goto i_12;
  n_12 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto o_35;
  o_35 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_35;
  p_35 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto v_35;
  v_35 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(x_13);
  goto v_41;
  x_13 :
  goto w_13;
  v_41 :
  Move(0,2,1,4);
  Return();
  w_13 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(y_13);
  w_41 :
  Cpush(a_14);
  Ccall(_stratego_t_56);
  Tset(App0("Nil"));
  goto z_13;
  a_14 :
  Epushd(1,3);
  MoveTop(1,1);
  goto s_36;
  s_36 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(e_14);
  goto a_42;
  e_14 :
  goto d_14;
  a_42 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(f_14);
  goto z_40;
  f_14 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(g_14);
  goto w_41;
  g_14 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto o_36;
  o_36 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_36;
  q_36 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto r_36;
  r_36 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(i_14);
  goto d_42;
  i_14 :
  goto h_14;
  d_42 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(k_14);
  e_42 :
  Cpush(m_14);
  Ccall(_stratego_t_56);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto l_14;
  m_14 :
  Ccontinue(n_14);
  Epushd(3,3);
  MoveTop(3,1);
  goto n_36;
  n_36 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_14);
  goto f_42;
  p_14 :
  goto o_14;
  f_42 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(q_14);
  g_42 :
  Cpush(s_14);
  Epushd(4,3);
  MoveTop(4,1);
  goto m_36;
  m_36 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(u_14);
  goto v_42;
  u_14 :
  goto t_14;
  v_42 :
  Move(3,2,4,2);
  Return();
  t_14 :
  Epopd(4,3);
  goto r_14;
  s_14 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_14);
  goto g_42;
  w_14 :
  AllBuild();
  goto v_14;
  r_14 :
  Cpop();
  v_14 :
  Return();
  q_14 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(x_14);
  goto e_42;
  x_14 :
  Return();
  o_14 :
  Epopd(3,3);
  goto l_14;
  n_14 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_14);
  goto e_42;
  z_14 :
  AllBuild();
  goto y_14;
  l_14 :
  Cpop();
  y_14 :
  Return();
  k_14 :
  Return();
  h_14 :
  Epopd(2,7);
  Return();
  d_14 :
  Epopd(1,3);
  goto c_14;
  z_13 :
  Cpop();
  c_14 :
  Return();
  y_13 :
  Epopd(0,2);
  goto v_13;
  i_12 :
  Cpop();
  v_13 :
  Return();
  h_12 :
ENDPROC

PROC(_stratego_q_57)
  Epushd(0,5);
  MoveTop(0,5);
  goto y_43;
  y_43 :
  TestFunFC(p_0,&&d_15,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto z_43;
  z_43 :
  TestFunFC(p_0,&&e_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto c_44;
  c_44 :
  TestFunFC(s_0,&&f_15,Egetd(0,4));
  Cpush(h_15);
  Rpush(i_15);
  goto b_46;
  i_15 :
  goto g_15;
  h_15 :
  Rpush(k_15);
  goto g_46;
  k_15 :
  goto j_15;
  g_15 :
  Cpop();
  j_15 :
  goto c_15;
  f_15 :
  Rpush(c_15);
  goto g_46;
  e_15 :
  Rpush(c_15);
  goto g_46;
  d_15 :
  Rpush(c_15);
  goto g_46;
  c_15 :
  goto b_15;
  g_46 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(l_15);
  h_46 :
  Cpush(o_15);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(q_15);
  Epushd(1,7);
  MoveTop(1,1);
  goto j_43;
  j_43 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto l_43;
  l_43 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto n_43;
  n_43 :
  TestFunFC(p_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto q_43;
  q_43 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  Rpush(t_15);
  goto i_46;
  t_15 :
  goto s_15;
  i_46 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  s_15 :
  Epopd(1,7);
  goto p_15;
  q_15 :
  Ccall(_stratego_r_57);
  goto u_15;
  p_15 :
  Cpop();
  u_15 :
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  goto n_15;
  o_15 :
  Epushd(1,7);
  MoveTop(1,1);
  goto s_43;
  s_43 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_43;
  t_43 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto u_43;
  u_43 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto v_43;
  v_43 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(y_15);
  goto j_46;
  y_15 :
  goto x_15;
  j_46 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  x_15 :
  Epopd(1,7);
  goto v_15;
  n_15 :
  Cpop();
  v_15 :
  Cpush(a_16);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_56);
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  goto z_15;
  a_16 :
  Rpush(d_16);
  goto h_46;
  d_16 :
  goto c_16;
  z_15 :
  Cpop();
  c_16 :
  Return();
  l_15 :
  Return();
  b_15 :
  goto a_15;
  b_46 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(e_16);
  c_46 :
  Cpush(h_16);
  Ccall(_stratego_t_56);
  goto f_16;
  h_16 :
  Ccontinue(i_16);
  Epushd(1,3);
  MoveTop(1,1);
  goto b_43;
  b_43 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(o_16);
  goto d_46;
  o_16 :
  goto l_16;
  d_46 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(r_16);
  e_46 :
  Cpush(v_16);
  Epushd(2,3);
  MoveTop(2,1);
  goto a_43;
  a_43 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(x_16);
  goto f_46;
  x_16 :
  goto w_16;
  f_46 :
  Move(1,2,2,2);
  Return();
  w_16 :
  Epopd(2,3);
  goto u_16;
  v_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_16);
  goto e_46;
  z_16 :
  AllBuild();
  goto y_16;
  u_16 :
  Cpop();
  y_16 :
  Return();
  r_16 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(a_17);
  goto c_46;
  a_17 :
  Return();
  l_16 :
  Epopd(1,3);
  goto f_16;
  i_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_17);
  goto c_46;
  c_17 :
  AllBuild();
  goto b_17;
  f_16 :
  Cpop();
  b_17 :
  Return();
  e_16 :
  Return();
  a_15 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_r_57)
  Epushd(0,7);
  MoveTop(0,1);
  goto n_47;
  n_47 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto o_47;
  o_47 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto p_47;
  p_47 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto q_47;
  q_47 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(i_17);
  goto s_49;
  i_17 :
  goto f_17;
  s_49 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto m_46;
  m_46 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_46;
  n_46 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_46;
  o_46 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(m_17);
  goto t_49;
  m_17 :
  goto j_17;
  t_49 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  j_17 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto q_46;
  q_46 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_46;
  r_46 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_46;
  s_46 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(o_17);
  goto u_49;
  o_17 :
  goto n_17;
  u_49 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  n_17 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(p_17);
  v_49 :
  Epushd(2,9);
  MoveTop(2,1);
  goto z_46;
  z_46 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto a_47;
  a_47 :
  TestFunFC(w_0,&&t_17,Egetd(2,2));
  goto b_47;
  b_47 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto d_47;
  d_47 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto e_47;
  e_47 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(s_17);
  goto w_49;
  t_17 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto f_47;
  f_47 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto g_47;
  g_47 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto h_47;
  h_47 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(s_17);
  goto x_49;
  s_17 :
  goto r_17;
  x_49 :
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
  Rpush(v_17);
  goto v_49;
  v_17 :
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto w_46;
  w_46 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto x_46;
  x_46 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto y_46;
  y_46 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(w_17);
  goto y_49;
  w_17 :
  goto u_17;
  y_49 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  u_17 :
  Epopd(3,5);
  Return();
  r_17 :
  goto q_17;
  w_49 :
  Tset(App0("Nil"));
  Return();
  q_17 :
  Epopd(2,9);
  Return();
  p_17 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto k_47;
  k_47 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto l_47;
  l_47 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto m_47;
  m_47 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(y_17);
  goto a_50;
  y_17 :
  goto x_17;
  a_50 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(b_18);
  b_50 :
  Cpush(d_18);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_18);
  goto b_50;
  e_18 :
  AllBuild();
  goto c_18;
  d_18 :
  Ccall(_stratego_t_56);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto h_18;
  c_18 :
  Cpop();
  h_18 :
  Return();
  b_18 :
  Return();
  x_17 :
  Epopd(1,9);
  Return();
  f_17 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_s_57)
  Epushd(0,6);
  MoveTop(0,2);
  goto e_50;
  e_50 :
  TestFunFC(o_12,&&n_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(m_18);
  goto r_50;
  n_18 :
  TestFunFC(o_18,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto f_50;
  f_50 :
  TestFunFC(p_18,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(m_18);
  goto s_50;
  m_18 :
  goto l_18;
  s_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_p_57);
  Return();
  l_18 :
  goto i_18;
  r_50 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  i_18 :
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
  Rpush(q_18);
  d_61 :
  Rpush(r_18);
  e_61 :
  Epushd(1,5);
  MoveTop(1,1);
  goto e_52;
  e_52 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_52;
  f_52 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto a_53;
  a_53 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Cpush(y_18);
  Rpush(z_18);
  goto f_61;
  z_18 :
  goto x_18;
  y_18 :
  Ccontinue(a_19);
  Rpush(c_19);
  goto j_61;
  c_19 :
  goto x_18;
  a_19 :
  Rpush(g_19);
  goto y_61;
  g_19 :
  goto f_19;
  x_18 :
  Cpop();
  f_19 :
  goto w_18;
  w_18 :
  goto v_18;
  y_61 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  h_19 :
  AllNextSon(&&i_19);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(l_19);
  goto e_61;
  l_19 :
  Epopd(2,1);
  goto h_19;
  i_19 :
  AllBuild();
  Return();
  v_18 :
  goto u_18;
  j_61 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_s_57);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(o_19);
  l_61 :
  Cpush(s_19);
  Ccall(_stratego_t_56);
  goto r_19;
  s_19 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_57);
  OneNextSon();
  Rpush(u_19);
  goto l_61;
  u_19 :
  AllBuild();
  goto t_19;
  r_19 :
  Cpop();
  t_19 :
  Return();
  o_19 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(a_20);
  n_61 :
  Epushd(4,9);
  MoveTop(4,1);
  goto i_51;
  i_51 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto j_51;
  j_51 :
  TestFunFC(w_0,&&s_20,Egetd(4,2));
  goto k_51;
  k_51 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto l_51;
  l_51 :
  TestFunFC(w_0,&&fail,Egetd(4,6));
  goto m_51;
  m_51 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(r_20);
  goto o_61;
  s_20 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto n_51;
  n_51 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto o_51;
  o_51 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto p_51;
  p_51 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(r_20);
  goto p_61;
  r_20 :
  goto o_20;
  p_61 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(u_20);
  goto n_61;
  u_20 :
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto f_51;
  f_51 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto g_51;
  g_51 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto h_51;
  h_51 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(a_21);
  goto q_61;
  a_21 :
  goto t_20;
  q_61 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  t_20 :
  Epopd(5,5);
  Return();
  o_20 :
  goto e_20;
  o_61 :
  Tset(App0("Nil"));
  Return();
  e_20 :
  Epopd(4,9);
  Return();
  a_20 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto t_51;
  t_51 :
  TestFunFC(p_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto u_51;
  u_51 :
  TestFunFC(p_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto v_51;
  v_51 :
  TestFunFC(s_0,&&fail,Egetd(3,8));
  Rpush(d_21);
  goto s_61;
  d_21 :
  goto c_21;
  s_61 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(e_21);
  t_61 :
  Cpush(j_21);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_21);
  goto t_61;
  k_21 :
  AllBuild();
  goto g_21;
  j_21 :
  Ccall(_stratego_t_56);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto l_21;
  g_21 :
  Cpop();
  l_21 :
  Return();
  e_21 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  c_21 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(o_12);
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
  goto z_51;
  z_51 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_52;
  a_52 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto b_52;
  b_52 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto c_52;
  c_52 :
  TestFunFC(s_0,&&fail,Egetd(2,11));
  Rpush(n_21);
  goto w_61;
  n_21 :
  goto m_21;
  w_61 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(o_12);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(q_21);
  goto d_61;
  q_21 :
  Epopd(3,1);
  AllBuild();
  Return();
  m_21 :
  Epopd(2,11);
  Return();
  u_18 :
  goto t_18;
  f_61 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(m_12);
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
  t_18 :
  Epopd(1,5);
  Return();
  r_18 :
  Return();
  q_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_57)
  Rpush(r_21);
  z_62 :
  Epushd(0,11);
  MoveTop(0,5);
  goto d_62;
  d_62 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto e_62;
  e_62 :
  TestFunFC(p_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto f_62;
  f_62 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto g_62;
  g_62 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto h_62;
  h_62 :
  TestFunFC(p_0,&&c_22,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto i_62;
  i_62 :
  TestFunFC(p_0,&&e_22,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto j_62;
  j_62 :
  TestFunFC(s_0,&&f_22,Egetd(0,4));
  Cpush(h_22);
  Rpush(i_22);
  goto a_63;
  i_22 :
  goto g_22;
  h_22 :
  Rpush(p_22);
  goto b_63;
  p_22 :
  goto o_22;
  g_22 :
  Cpop();
  o_22 :
  goto u_21;
  f_22 :
  Rpush(u_21);
  goto b_63;
  e_22 :
  Rpush(u_21);
  goto b_63;
  c_22 :
  Rpush(u_21);
  goto b_63;
  u_21 :
  goto t_21;
  b_63 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(q_22);
  goto z_62;
  q_22 :
  Return();
  t_21 :
  goto s_21;
  a_63 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  s_21 :
  Epopd(0,11);
  Return();
  r_21 :
ENDPROC

PROC(_stratego_w_57)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(r_22);
  e_69 :
  Rpush(u_22);
  f_69 :
  Epushd(1,5);
  MoveTop(1,1);
  goto z_64;
  z_64 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto a_65;
  a_65 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto b_65;
  b_65 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Cpush(k_23);
  Rpush(l_23);
  goto g_69;
  l_23 :
  goto j_23;
  k_23 :
  Ccontinue(v_23);
  Rpush(w_23);
  goto k_69;
  w_23 :
  goto j_23;
  v_23 :
  Rpush(y_23);
  goto h_70;
  y_23 :
  goto x_23;
  j_23 :
  Cpop();
  x_23 :
  goto i_23;
  i_23 :
  goto h_23;
  h_70 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  z_23 :
  AllNextSon(&&a_24);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(b_24);
  goto f_69;
  b_24 :
  Epopd(2,1);
  goto z_23;
  a_24 :
  AllBuild();
  Return();
  h_23 :
  goto a_23;
  k_69 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto m_63;
  m_63 :
  TestFunFC(j_24,&&i_24,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto n_63;
  n_63 :
  TestFunFC(r_9,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(h_24);
  goto l_69;
  i_24 :
  TestFunFC(r_9,&&k_24,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(h_24);
  goto m_69;
  k_24 :
  TestFunFC(l_24,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(h_24);
  goto n_69;
  h_24 :
  goto g_24;
  n_69 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  g_24 :
  goto f_24;
  m_69 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  f_24 :
  goto c_24;
  l_69 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  c_24 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(m_24);
  p_69 :
  Cpush(o_24);
  Ccall(_stratego_t_56);
  goto n_24;
  o_24 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_57);
  OneNextSon();
  Rpush(q_24);
  goto p_69;
  q_24 :
  AllBuild();
  goto p_24;
  n_24 :
  Cpop();
  p_24 :
  Return();
  m_24 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(r_24);
  r_69 :
  Epushd(4,9);
  MoveTop(4,1);
  goto w_63;
  w_63 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto x_63;
  x_63 :
  TestFunFC(w_0,&&a_25,Egetd(4,2));
  goto y_63;
  y_63 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto z_63;
  z_63 :
  TestFunFC(w_0,&&fail,Egetd(4,6));
  goto a_64;
  a_64 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(z_24);
  goto s_69;
  a_25 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto b_64;
  b_64 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto c_64;
  c_64 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto d_64;
  d_64 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(z_24);
  goto t_69;
  z_24 :
  goto x_24;
  t_69 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(c_25);
  goto r_69;
  c_25 :
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto t_63;
  t_63 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto u_63;
  u_63 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto v_63;
  v_63 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(d_25);
  goto u_69;
  d_25 :
  goto b_25;
  u_69 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  b_25 :
  Epopd(5,5);
  Return();
  x_24 :
  goto s_24;
  s_69 :
  Tset(App0("Nil"));
  Return();
  s_24 :
  Epopd(4,9);
  Return();
  r_24 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto h_64;
  h_64 :
  TestFunFC(p_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto i_64;
  i_64 :
  TestFunFC(p_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto j_64;
  j_64 :
  TestFunFC(s_0,&&fail,Egetd(3,15));
  Rpush(f_25);
  goto w_69;
  f_25 :
  goto e_25;
  w_69 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(i_25);
  x_69 :
  Cpush(k_25);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_25);
  goto x_69;
  l_25 :
  AllBuild();
  goto j_25;
  k_25 :
  Ccall(_stratego_t_56);
  NotNULLd(3,14);
  Tset(Egetd(3,14));
  goto m_25;
  j_25 :
  Cpop();
  m_25 :
  Return();
  i_25 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  e_25 :
  Epopd(3,15);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(o_25);
  TestFunTop(j_24);
  TravInit();
  OneNextSon();
  TestFunTop(r_9);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto l_64;
  l_64 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(q_25);
  goto z_69;
  q_25 :
  goto p_25;
  z_69 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  p_25 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto n_25;
  o_25 :
  Ccontinue(r_25);
  TestFunTop(r_9);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto n_25;
  r_25 :
  TestFunTop(l_24);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto n_64;
  n_64 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(u_25);
  goto a_70;
  u_25 :
  goto t_25;
  a_70 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  t_25 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto s_25;
  n_25 :
  Cpop();
  s_25 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto u_64;
  u_64 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto v_64;
  v_64 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto w_64;
  w_64 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto x_64;
  x_64 :
  TestFunFC(s_0,&&fail,Egetd(2,11));
  Rpush(w_25);
  goto c_70;
  w_25 :
  goto v_25;
  c_70 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(y_25);
  TestFunTop(j_24);
  TravInit();
  OneNextSon();
  TestFunTop(r_9);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(z_25);
  goto e_69;
  z_25 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(a_26);
  goto e_69;
  a_26 :
  Epopd(3,1);
  AllBuild();
  goto x_25;
  y_25 :
  Ccontinue(b_26);
  TestFunTop(r_9);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(c_26);
  goto e_69;
  c_26 :
  Epopd(3,1);
  AllBuild();
  goto x_25;
  b_26 :
  TestFunTop(l_24);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(e_26);
  goto e_69;
  e_26 :
  Epopd(3,1);
  AllBuild();
  goto d_26;
  x_25 :
  Cpop();
  d_26 :
  Return();
  v_25 :
  Epopd(2,11);
  Return();
  a_23 :
  goto x_22;
  g_69 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(f_26);
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
  x_22 :
  Epopd(1,5);
  Return();
  u_22 :
  Return();
  r_22 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_57)
  Epushd(0,8);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App2("TCons",ATmakeString("main"),App2("TCons",MakeInt(0),App0("TNil"))),App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(0,2);
  goto i_72;
  i_72 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto j_72;
  j_72 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto k_72;
  k_72 :
  TestFunFC(p_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto l_72;
  l_72 :
  TestFunFC(s_0,&&fail,Egetd(0,8));
  Rpush(h_26);
  goto w_76;
  h_26 :
  goto g_26;
  w_76 :
  Epushd(1,7);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,7),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(k_26);
  x_76 :
  Epushd(2,13);
  MoveTop(2,1);
  goto g_71;
  g_71 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto h_71;
  h_71 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto i_71;
  i_71 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto j_71;
  j_71 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto k_71;
  k_71 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto l_71;
  l_71 :
  TestFunFC(p_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto m_71;
  m_71 :
  TestFunFC(s_0,&&fail,Egetd(2,13));
  Cpush(r_26);
  Rpush(s_26);
  goto y_76;
  s_26 :
  goto p_26;
  r_26 :
  Rpush(g_27);
  goto k_77;
  g_27 :
  goto t_26;
  p_26 :
  Cpop();
  t_26 :
  goto o_26;
  o_26 :
  goto n_26;
  k_77 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App2("TCons",Egetd(2,10),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,12)),App0("TNil")))))));
  Return();
  n_26 :
  goto l_26;
  y_76 :
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
  goto d_71;
  d_71 :
  TestFunFC(p_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto e_71;
  e_71 :
  TestFunFC(p_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto f_71;
  f_71 :
  TestFunFC(s_0,&&fail,Egetd(3,8));
  Rpush(l_27);
  goto c_77;
  l_27 :
  goto h_27;
  c_77 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(m_27);
  d_77 :
  Cpush(w_27);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_27);
  goto d_77;
  y_27 :
  AllBuild();
  goto n_27;
  w_27 :
  Ccall(_stratego_t_56);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto z_27;
  n_27 :
  Cpop();
  z_27 :
  Return();
  m_27 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,6),App0("TNil"))));
  MoveTop(4,2);
  goto a_71;
  a_71 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto b_71;
  b_71 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto c_71;
  c_71 :
  TestFunFC(s_0,&&fail,Egetd(4,6));
  Rpush(c_28);
  goto f_77;
  c_28 :
  goto a_28;
  f_77 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(h_28);
  g_77 :
  Cpush(j_28);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_28);
  goto g_77;
  l_28 :
  AllBuild();
  goto i_28;
  j_28 :
  Ccall(_stratego_t_56);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto n_28;
  i_28 :
  Cpop();
  n_28 :
  Return();
  h_28 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil")))));
  MoveTop(5,2);
  goto w_70;
  w_70 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto x_70;
  x_70 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto y_70;
  y_70 :
  TestFunFC(p_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto z_70;
  z_70 :
  TestFunFC(s_0,&&fail,Egetd(5,8));
  Rpush(q_28);
  goto i_77;
  q_28 :
  goto p_28;
  i_77 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("Cons",Egetd(5,5),Egetd(5,7)));
  NotNULLd(4,1);
  NotNULLd(5,1);
  NotNULLd(2,8);
  NotNULLd(5,5);
  NotNULLd(5,7);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(5,1),App2("TCons",Egetd(2,8),App2("TCons",App2("Cons",Egetd(5,5),Egetd(5,7)),App2("TCons",Egetd(2,12),App0("TNil")))))));
  Return();
  p_28 :
  Epopd(5,8);
  Return();
  a_28 :
  Epopd(4,6);
  Return();
  h_27 :
  Epopd(3,8);
  Return();
  l_26 :
  Cpush(v_28);
  Epushd(3,11);
  MoveTop(3,1);
  goto o_71;
  o_71 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto p_71;
  p_71 :
  TestFunFC(w_0,&&fail,Egetd(3,2));
  goto q_71;
  q_71 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto r_71;
  r_71 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto s_71;
  s_71 :
  TestFunFC(p_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto t_71;
  t_71 :
  TestFunFC(p_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto u_71;
  u_71 :
  TestFunFC(s_0,&&fail,Egetd(3,11));
  Rpush(x_28);
  goto l_77;
  x_28 :
  goto w_28;
  l_77 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App0("TNil"))));
  Return();
  w_28 :
  Epopd(3,11);
  goto r_28;
  v_28 :
  Rpush(b_29);
  goto x_76;
  b_29 :
  goto z_28;
  r_28 :
  Cpop();
  z_28 :
  Epopd(2,13);
  Return();
  k_26 :
  MoveTop(1,1);
  goto d_72;
  d_72 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_72;
  e_72 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto f_72;
  f_72 :
  TestFunFC(w_0,&&l_29,Egetd(1,4));
  goto g_72;
  g_72 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(d_29);
  goto m_77;
  l_29 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto h_72;
  h_72 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(d_29);
  goto n_77;
  d_29 :
  goto j_26;
  n_77 :
  Tdupl();
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App2("Cons",Egetd(1,5),Egetd(1,6)));
  Rpush(n_29);
  o_77 :
  Cpush(p_29);
  Ccall(_stratego_t_56);
  goto o_29;
  p_29 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,3);
  goto z_71;
  z_71 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto a_72;
  a_72 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto b_72;
  b_72 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  goto c_72;
  c_72 :
  TestFunFC(z_29,&&y_29,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Cpush(b_30);
  Rpush(c_30);
  goto p_77;
  c_30 :
  goto a_30;
  b_30 :
  Rpush(e_30);
  goto q_77;
  e_30 :
  goto d_30;
  a_30 :
  Cpop();
  d_30 :
  goto x_29;
  y_29 :
  Rpush(x_29);
  goto q_77;
  x_29 :
  goto u_29;
  q_77 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,4),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))));
  Ccall(_stratego_j_58);
  Return();
  u_29 :
  goto t_29;
  p_77 :
  NotNULLd(2,1);
  NotNULLd(2,2);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,1),App2("Cons",ATmakeString("^"),App2("Cons",Egetd(2,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))))));
  Ccall(_stratego_j_58);
  Return();
  t_29 :
  Epopd(2,7);
  OneNextSon();
  Rpush(g_30);
  goto o_77;
  g_30 :
  AllBuild();
  goto q_29;
  o_29 :
  Cpop();
  q_29 :
  Return();
  n_29 :
  Tpop();
  Tset(MakeInt(1));
  Ccall(_stratego_z_56);
  Return();
  j_26 :
  goto i_26;
  m_77 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  i_26 :
  Epopd(1,7);
  Return();
  g_26 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_y_57)
  Epushd(0,11);
  MoveTop(0,3);
  goto g_78;
  g_78 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,9,0,3,1);
  goto h_78;
  h_78 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto i_78;
  i_78 :
  TestFunFC(p_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto j_78;
  j_78 :
  TestFunFC(s_0,&&fail,Egetd(0,8));
  goto k_78;
  k_78 :
  TestFunFC(p_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto l_78;
  l_78 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto m_78;
  m_78 :
  TestInt(0,7,0,&&t_30);
  goto n_78;
  n_78 :
  TestFunFC(z_29,&&w_30,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(y_30);
  Rpush(z_30);
  goto f_80;
  z_30 :
  goto x_30;
  y_30 :
  Ccontinue(a_31);
  Rpush(b_31);
  goto h_80;
  b_31 :
  goto x_30;
  a_31 :
  Rpush(d_31);
  goto n_80;
  d_31 :
  goto c_31;
  x_30 :
  Cpop();
  c_31 :
  goto s_30;
  w_30 :
  Cpush(f_31);
  Rpush(g_31);
  goto h_80;
  g_31 :
  goto e_31;
  f_31 :
  Rpush(i_31);
  goto n_80;
  i_31 :
  goto h_31;
  e_31 :
  Cpop();
  h_31 :
  goto s_30;
  t_30 :
  goto o_78;
  o_78 :
  TestFunFC(z_29,&&j_31,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(l_31);
  Rpush(m_31);
  goto f_80;
  m_31 :
  goto k_31;
  l_31 :
  Rpush(o_31);
  goto h_80;
  o_31 :
  goto n_31;
  k_31 :
  Cpop();
  n_31 :
  goto s_30;
  j_31 :
  Rpush(s_30);
  goto h_80;
  s_30 :
  goto n_30;
  n_80 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(p_31);
  o_80 :
  Cpush(r_31);
  Ccall(_stratego_t_56);
  goto q_31;
  r_31 :
  Ccontinue(s_31);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto c_78;
  c_78 :
  TestFunFC(r_9,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(v_31);
  goto p_80;
  v_31 :
  goto t_31;
  p_80 :
  Move(0,5,3,2);
  Return();
  t_31 :
  Epopd(3,4);
  OneNextSon();
  Rpush(w_31);
  goto o_80;
  w_31 :
  AllBuild();
  goto q_31;
  s_31 :
  Epushd(3,3);
  MoveTop(3,1);
  goto e_78;
  e_78 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(b_32);
  goto q_80;
  b_32 :
  goto a_32;
  q_80 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(c_32);
  goto o_80;
  c_32 :
  Return();
  a_32 :
  Epopd(3,3);
  goto z_31;
  q_31 :
  Cpop();
  z_31 :
  Return();
  p_31 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_f_58);
  Epopd(1,1);
  Return();
  n_30 :
  goto m_30;
  h_80 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(d_32);
  i_80 :
  Cpush(f_32);
  Ccall(_stratego_t_56);
  goto e_32;
  f_32 :
  Ccontinue(g_32);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(r_9);
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
  Rpush(h_32);
  goto i_80;
  h_32 :
  AllBuild();
  goto e_32;
  g_32 :
  Epushd(3,3);
  MoveTop(3,1);
  goto y_77;
  y_77 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_32);
  goto l_80;
  l_32 :
  goto j_32;
  l_80 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(m_32);
  goto i_80;
  m_32 :
  Return();
  j_32 :
  Epopd(3,3);
  goto i_32;
  e_32 :
  Cpop();
  i_32 :
  Return();
  d_32 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_f_58);
  Epopd(1,1);
  Return();
  m_30 :
  goto l_30;
  f_80 :
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
  l_30 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_z_57)
  Epushd(0,7);
  MoveTop(0,1);
  goto z_84;
  z_84 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_85;
  a_85 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto b_85;
  b_85 :
  TestStr(0,4,"D",&&v_32);
  goto c_85;
  c_85 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto d_85;
  d_85 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(q_32);
  goto u_93;
  v_32 :
  TestStr(0,4,"T",&&fail);
  goto e_85;
  e_85 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto f_85;
  f_85 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  goto g_85;
  g_85 :
  TestInt(0,6,0,&&w_32);
  Cpush(b_33);
  Rpush(c_33);
  goto u_94;
  c_33 :
  goto a_33;
  b_33 :
  Rpush(e_33);
  goto w_94;
  e_33 :
  goto d_33;
  a_33 :
  Cpop();
  d_33 :
  goto q_32;
  w_32 :
  Rpush(q_32);
  goto w_94;
  q_32 :
  goto p_32;
  w_94 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_c_58);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",App0("TNil"),App0("TNil"))));
  MoveTop(2,2);
  goto v_84;
  v_84 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_84;
  w_84 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto x_84;
  x_84 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(g_33);
  goto y_94;
  g_33 :
  goto f_33;
  y_94 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(i_33);
  z_94 :
  Epushd(4,7);
  MoveTop(4,1);
  goto b_83;
  b_83 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto c_83;
  c_83 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto d_83;
  d_83 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto e_83;
  e_83 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(k_33);
  goto a_95;
  k_33 :
  goto j_33;
  a_95 :
  Epushd(5,2);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_b_58);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_a_58);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_o_57);
  MoveTop(5,2);
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",Egetd(5,2),Egetd(4,6)),App0("TNil")))));
  Cpush(m_33);
  Epushd(6,7);
  MoveTop(6,1);
  goto w_82;
  w_82 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto x_82;
  x_82 :
  TestInt(6,2,0,&&fail);
  goto y_82;
  y_82 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto z_82;
  z_82 :
  TestFunFC(p_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto a_83;
  a_83 :
  TestFunFC(s_0,&&fail,Egetd(6,7));
  Rpush(o_33);
  goto d_95;
  o_33 :
  goto n_33;
  d_95 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  n_33 :
  Epopd(6,7);
  goto l_33;
  m_33 :
  Rpush(q_33);
  goto z_94;
  q_33 :
  goto p_33;
  l_33 :
  Cpop();
  p_33 :
  Epopd(5,2);
  Return();
  j_33 :
  Epopd(4,7);
  Return();
  i_33 :
  MoveTop(3,1);
  goto u_84;
  u_84 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_33);
  goto e_95;
  r_33 :
  goto h_33;
  e_95 :
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
  Rpush(v_33);
  g_95 :
  Epushd(5,9);
  MoveTop(5,1);
  goto u_83;
  u_83 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto v_83;
  v_83 :
  TestFunFC(p_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto w_83;
  w_83 :
  TestFunFC(w_0,&&z_33,Egetd(5,6));
  goto x_83;
  x_83 :
  TestFunFC(s_0,&&fail,Egetd(5,9));
  goto y_83;
  y_83 :
  a_34 :
  Rpush(y_33);
  goto h_95;
  z_33 :
  TestFunFC(a_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto z_83;
  z_83 :
  TestFunFC(a_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto a_84;
  a_84 :
  TestFunFC(s_0,&&fail,Egetd(5,9));
  Rpush(y_33);
  goto i_95;
  y_33 :
  goto x_33;
  i_95 :
  Epushd(6,5);
  NotNULLd(5,3);
  NotNULLd(5,7);
  NotNULLd(5,4);
  NotNULLd(5,8);
  Tset(App2("TCons",App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(5,4),App2("TCons",Egetd(5,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Epushd(7,5);
  MoveTop(7,1);
  goto n_83;
  n_83 :
  TestFunFC(p_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto o_83;
  o_83 :
  TestFunFC(p_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto p_83;
  p_83 :
  TestFunFC(s_0,&&fail,Egetd(7,5));
  Rpush(d_34);
  goto j_95;
  d_34 :
  goto c_34;
  j_95 :
  Epushd(8,3);
  Tdupl();
  Epushd(9,3);
  Ccall(_stratego_o_57);
  MoveTop(9,1);
  Move(8,1,9,1);
  Ccall(_stratego_o_57);
  MoveTop(9,2);
  Move(8,2,9,2);
  Ccall(_stratego_o_57);
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
  c_34 :
  Epopd(7,5);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(f_34);
  goto g_95;
  f_34 :
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto r_83;
  r_83 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto s_83;
  s_83 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto t_83;
  t_83 :
  TestFunFC(s_0,&&fail,Egetd(6,5));
  Rpush(j_34);
  goto n_95;
  j_34 :
  goto b_34;
  n_95 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),Egetd(6,4)));
  Return();
  b_34 :
  Epopd(6,5);
  Return();
  x_33 :
  goto w_33;
  h_95 :
  Tset(App0("Nil"));
  Return();
  w_33 :
  Epopd(5,9);
  Return();
  v_33 :
  Rpush(m_34);
  o_95 :
  Cpush(p_34);
  Epushd(5,8);
  MoveTop(5,1);
  Rpush(q_34);
  q_95 :
  Cpush(s_34);
  Ccall(_stratego_t_56);
  goto r_34;
  s_34 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto d_84;
  d_84 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(w_34);
  goto r_95;
  w_34 :
  goto u_34;
  r_95 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  u_34 :
  Epopd(6,3);
  OneNextSon();
  Rpush(x_34);
  goto q_95;
  x_34 :
  AllBuild();
  goto t_34;
  r_34 :
  Cpop();
  t_34 :
  Return();
  q_34 :
  MoveTop(5,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  Rpush(a_35);
  t_95 :
  Cpush(c_35);
  Ccall(_stratego_t_56);
  goto b_35;
  c_35 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto g_84;
  g_84 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(f_35);
  goto u_95;
  f_35 :
  goto e_35;
  u_95 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  e_35 :
  Epopd(6,3);
  OneNextSon();
  Rpush(m_35);
  goto t_95;
  m_35 :
  AllBuild();
  goto d_35;
  b_35 :
  Cpop();
  d_35 :
  Return();
  a_35 :
  MoveTop(5,3);
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,3),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(q_35);
  goto o_95;
  q_35 :
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  MoveTop(5,4);
  goto j_84;
  j_84 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto k_84;
  k_84 :
  TestFunFC(p_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto l_84;
  l_84 :
  TestFunFC(s_0,&&fail,Egetd(5,8));
  Rpush(r_35);
  goto w_95;
  r_35 :
  goto n_35;
  w_95 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("TCons",Egetd(5,5),Egetd(5,7)));
  Return();
  n_35 :
  Epopd(5,8);
  goto n_34;
  p_34 :
  Rpush(t_35);
  x_95 :
  Cpush(w_35);
  Ccall(_stratego_t_56);
  goto u_35;
  w_35 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_57);
  OneNextSon();
  Rpush(y_35);
  goto x_95;
  y_35 :
  AllBuild();
  goto x_35;
  u_35 :
  Cpop();
  x_35 :
  Return();
  t_35 :
  Tset(App0("TNil"));
  goto s_35;
  n_34 :
  Cpop();
  s_35 :
  Return();
  m_34 :
  MoveTop(4,2);
  goto n_84;
  n_84 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto o_84;
  o_84 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto p_84;
  p_84 :
  TestFunFC(p_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto q_84;
  q_84 :
  TestFunFC(p_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto r_84;
  r_84 :
  TestFunFC(p_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto s_84;
  s_84 :
  TestFunFC(p_0,&&fail,Egetd(4,12));
  MoveArg(4,13,4,12,0);
  MoveArg(4,14,4,12,1);
  goto t_84;
  t_84 :
  TestFunFC(s_0,&&fail,Egetd(4,14));
  Rpush(z_35);
  goto y_95;
  z_35 :
  goto l_34;
  y_95 :
  Move(1,4,4,3);
  Move(1,5,4,5);
  Move(1,6,4,7);
  Move(1,7,4,9);
  Move(1,8,4,11);
  Move(1,9,4,13);
  Return();
  l_34 :
  Epopd(4,14);
  Return();
  h_33 :
  Epopd(3,3);
  Return();
  f_33 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App2("Cons",Egetd(1,3),App2("Cons",Egetd(1,6),App2("Cons",Egetd(1,8),App0("Nil")))));
  Ccall(_stratego_k_57);
  MoveTop(1,10);
  NotNULLd(1,5);
  NotNULLd(1,10);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(0,2);
  NotNULLd(1,9);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("T")),Egetd(1,5),App2("Scope",App2("Cons",Egetd(1,2),Egetd(1,10)),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,7)),App2("Cons",App1("Var",Egetd(1,2)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,9)),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App1("Seqs",Egetd(1,4)))))));
  Epopd(1,10);
  Return();
  p_32 :
  goto o_32;
  u_94 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_o_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("T")),App0("Nil"),App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),App0("Nil")),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),App0("Nil")),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App0("Id"))))));
  Epopd(1,1);
  Return();
  o_32 :
  goto n_32;
  u_93 :
  Epushd(1,12);
  Tdupl();
  Epushd(2,6);
  Ccall(_stratego_o_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",App1("Var",Egetd(1,1)),App0("TNil"))));
  MoveTop(2,2);
  goto h_82;
  h_82 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto i_82;
  i_82 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto j_82;
  j_82 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(b_36);
  goto w_93;
  b_36 :
  goto a_36;
  w_93 :
  Epushd(3,13);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(c_36);
  x_93 :
  Epushd(4,7);
  MoveTop(4,1);
  goto k_81;
  k_81 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto l_81;
  l_81 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto m_81;
  m_81 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto n_81;
  n_81 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(e_36);
  goto y_93;
  e_36 :
  goto d_36;
  y_93 :
  Epushd(5,4);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_b_58);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_a_58);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Tdupl();
  Epushd(6,3);
  Ccall(_stratego_o_57);
  MoveTop(6,1);
  Move(5,2,6,1);
  Ccall(_stratego_o_57);
  MoveTop(6,2);
  Move(5,3,6,2);
  Ccall(_stratego_o_57);
  MoveTop(6,3);
  Move(5,4,6,3);
  Epopd(6,3);
  Tpop();
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(5,3);
  NotNULLd(5,4);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",App2("TCons",App3("BAM",App2("Call",App1("SVar",Egetd(5,2)),App0("Nil")),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(5,3)),App2("Cons",Egetd(4,4),App0("Nil")))),App1("Var",Egetd(5,4))),App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,3),App2("TCons",App1("Var",Egetd(5,3)),App2("TCons",Egetd(5,4),App2("TCons",App1("Var",Egetd(5,4)),App0("TNil"))))))),Egetd(4,6)),App0("TNil")))));
  Cpush(g_36);
  Epushd(6,7);
  MoveTop(6,1);
  goto f_81;
  f_81 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto g_81;
  g_81 :
  TestInt(6,2,0,&&fail);
  goto h_81;
  h_81 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto i_81;
  i_81 :
  TestFunFC(p_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto j_81;
  j_81 :
  TestFunFC(s_0,&&fail,Egetd(6,7));
  Rpush(i_36);
  goto f_94;
  i_36 :
  goto h_36;
  f_94 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  h_36 :
  Epopd(6,7);
  goto f_36;
  g_36 :
  Rpush(k_36);
  goto x_93;
  k_36 :
  goto j_36;
  f_36 :
  Cpop();
  j_36 :
  Epopd(5,4);
  Return();
  d_36 :
  Epopd(4,7);
  Return();
  c_36 :
  Rpush(p_36);
  g_94 :
  Cpush(z_36);
  Epushd(4,8);
  MoveTop(4,1);
  Rpush(b_37);
  i_94 :
  Cpush(d_37);
  Ccall(_stratego_t_56);
  goto c_37;
  d_37 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto q_81;
  q_81 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(o_37);
  goto j_94;
  o_37 :
  goto n_37;
  j_94 :
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Return();
  n_37 :
  Epopd(5,3);
  OneNextSon();
  Rpush(p_37);
  goto i_94;
  p_37 :
  AllBuild();
  goto g_37;
  c_37 :
  Cpop();
  g_37 :
  Return();
  b_37 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(s_37);
  l_94 :
  Cpush(u_37);
  Ccall(_stratego_t_56);
  goto t_37;
  u_37 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto t_81;
  t_81 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(x_37);
  goto m_94;
  x_37 :
  goto w_37;
  m_94 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Return();
  w_37 :
  Epopd(5,3);
  OneNextSon();
  Rpush(y_37);
  goto l_94;
  y_37 :
  AllBuild();
  goto v_37;
  t_37 :
  Cpop();
  v_37 :
  Return();
  s_37 :
  MoveTop(4,3);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,3),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(a_38);
  goto g_94;
  a_38 :
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  MoveTop(4,4);
  goto w_81;
  w_81 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto x_81;
  x_81 :
  TestFunFC(p_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto y_81;
  y_81 :
  TestFunFC(s_0,&&fail,Egetd(4,8));
  Rpush(b_38);
  goto o_94;
  b_38 :
  goto z_37;
  o_94 :
  NotNULLd(4,5);
  NotNULLd(4,7);
  Tset(App2("TCons",Egetd(4,5),Egetd(4,7)));
  Return();
  z_37 :
  Epopd(4,8);
  goto v_36;
  z_36 :
  Rpush(d_38);
  p_94 :
  Cpush(f_38);
  Ccall(_stratego_t_56);
  goto e_38;
  f_38 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_57);
  OneNextSon();
  Rpush(i_38);
  goto p_94;
  i_38 :
  AllBuild();
  goto g_38;
  e_38 :
  Cpop();
  g_38 :
  Return();
  d_38 :
  Tset(App0("TNil"));
  goto c_38;
  v_36 :
  Cpop();
  c_38 :
  Return();
  p_36 :
  MoveTop(3,1);
  goto a_82;
  a_82 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto b_82;
  b_82 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto c_82;
  c_82 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto d_82;
  d_82 :
  TestFunFC(p_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto e_82;
  e_82 :
  TestFunFC(p_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto f_82;
  f_82 :
  TestFunFC(p_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto g_82;
  g_82 :
  TestFunFC(s_0,&&fail,Egetd(3,13));
  Rpush(o_38);
  goto q_94;
  o_38 :
  goto l_36;
  q_94 :
  Move(1,2,3,2);
  Move(1,3,3,4);
  Move(1,4,3,6);
  Move(1,5,3,8);
  Move(1,6,3,10);
  Move(1,7,3,12);
  Return();
  l_36 :
  Epopd(3,13);
  Return();
  a_36 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  MoveTop(1,8);
  goto m_82;
  m_82 :
  TestFunFC(p_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto n_82;
  n_82 :
  TestFunFC(p_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto o_82;
  o_82 :
  TestFunFC(s_0,&&fail,Egetd(1,12));
  Rpush(t_38);
  goto r_94;
  t_38 :
  goto p_38;
  r_94 :
  Epushd(2,1);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  Rpush(u_38);
  s_94 :
  Cpush(w_38);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_39);
  goto s_94;
  c_39 :
  AllBuild();
  goto v_38;
  w_38 :
  Ccall(_stratego_t_56);
  NotNULLd(1,11);
  Tset(Egetd(1,11));
  goto d_39;
  v_38 :
  Cpop();
  d_39 :
  Return();
  u_38 :
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  NotNULLd(1,5);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(1,7);
  NotNULLd(1,2);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("D")),Egetd(1,3),App2("Scope",App2("Cons",Egetd(1,1),Egetd(2,1)),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,5)),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App2("Op",Egetd(0,2),Egetd(1,7)),App1("Seqs",Egetd(1,2)))))));
  Epopd(2,1);
  Return();
  p_38 :
  Epopd(1,12);
  Return();
  n_32 :
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
  Rpush(e_39);
  k_96 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_96;
  c_96 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto d_96;
  d_96 :
  TestFunFC(w_0,&&i_39,Egetd(0,3));
  Cpush(k_39);
  Rpush(t_39);
  goto l_96;
  t_39 :
  goto j_39;
  k_39 :
  Rpush(w_39);
  goto m_96;
  w_39 :
  goto u_39;
  j_39 :
  Cpop();
  u_39 :
  goto h_39;
  i_39 :
  Rpush(h_39);
  goto m_96;
  h_39 :
  goto g_39;
  m_96 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(y_39);
  goto k_96;
  y_39 :
  Return();
  g_39 :
  goto f_39;
  l_96 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  f_39 :
  Epopd(0,3);
  Return();
  e_39 :
ENDPROC

PROC(_stratego_e_58)
  Rpush(b_40);
  x_96 :
  Cpush(d_40);
  Ccall(_stratego_t_56);
  Tset(MakeInt(0));
  goto c_40;
  d_40 :
  Epushd(0,3);
  MoveTop(0,1);
  goto p_96;
  p_96 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(j_40);
  goto y_96;
  j_40 :
  goto i_40;
  y_96 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_40);
  goto x_96;
  k_40 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_c_58);
  Epopd(1,1);
  Return();
  i_40 :
  Epopd(0,3);
  goto h_40;
  c_40 :
  Cpop();
  h_40 :
  Return();
  b_40 :
ENDPROC

PROC(_stratego_f_58)
  Epushd(0,6);
  MoveTop(0,1);
  goto i_97;
  i_97 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto j_97;
  j_97 :
  TestFunFC(w_0,&&t_40,Egetd(0,6));
  goto k_97;
  k_97 :
  TestFunFC(r_9,&&u_40,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Cpush(w_40);
  Rpush(x_40);
  goto l_98;
  x_40 :
  goto v_40;
  w_40 :
  Rpush(c_41);
  goto m_98;
  c_41 :
  goto b_41;
  v_40 :
  Cpop();
  b_41 :
  goto s_40;
  u_40 :
  Rpush(s_40);
  goto l_98;
  t_40 :
  goto l_97;
  l_97 :
  TestFunFC(r_9,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(s_40);
  goto m_98;
  s_40 :
  goto p_40;
  m_98 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(d_41);
  n_98 :
  Cpush(f_41);
  Ccall(_stratego_t_56);
  goto e_41;
  f_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_57);
  OneNextSon();
  Rpush(h_41);
  goto n_98;
  h_41 :
  AllBuild();
  goto g_41;
  e_41 :
  Cpop();
  g_41 :
  Return();
  d_41 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(i_41);
  p_98 :
  Cpush(n_41);
  Ccall(_stratego_t_56);
  goto j_41;
  n_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Call",App1("SVar",Egetd(3,1)),App0("Nil")));
  Epopd(3,1);
  OneNextSon();
  Rpush(u_41);
  goto p_98;
  u_41 :
  AllBuild();
  goto o_41;
  j_41 :
  Cpop();
  o_41 :
  Return();
  i_41 :
  MoveTop(2,2);
  Move(1,2,2,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(x_41);
  s_98 :
  Cpush(z_41);
  Ccall(_stratego_t_56);
  goto y_41;
  z_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto g_97;
  g_97 :
  TestFunFC(r_9,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(h_42);
  goto t_98;
  h_42 :
  goto c_42;
  t_98 :
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
  c_42 :
  Epopd(3,4);
  OneNextSon();
  Rpush(i_42);
  goto s_98;
  i_42 :
  AllBuild();
  goto b_42;
  y_41 :
  Cpop();
  b_42 :
  Return();
  x_41 :
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
  p_40 :
  goto o_40;
  l_98 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  o_40 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_g_58)
  Epushd(0,5);
  Ccall(_stratego_h_58);
  MoveTop(0,1);
  goto d_99;
  d_99 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto e_99;
  e_99 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto f_99;
  f_99 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(k_42);
  goto y_99;
  k_42 :
  goto j_42;
  y_99 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(l_42);
  z_99 :
  Cpush(n_42);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto a_99;
  a_99 :
  TestFunFC(q_42,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto b_99;
  b_99 :
  TestFunFC(f_26,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto c_99;
  c_99 :
  TestFunFC(w_0,&&fail,Egetd(2,4));
  Rpush(p_42);
  goto b_100;
  p_42 :
  goto o_42;
  b_100 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Move(1,2,2,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  o_42 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_v_57);
  Epopd(1,3);
  goto m_42;
  n_42 :
  AllInit();
  s_42 :
  AllNextSon(&&t_42);
  Rpush(u_42);
  goto z_99;
  u_42 :
  goto s_42;
  t_42 :
  AllBuild();
  goto r_42;
  m_42 :
  Cpop();
  r_42 :
  Return();
  l_42 :
  Return();
  j_42 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_58)
  Epushd(0,7);
  MoveTop(0,1);
  goto v_100;
  v_100 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_100;
  w_100 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_100;
  x_100 :
  TestFunFC(s_0,&&z_42,Egetd(0,5));
  Rpush(y_42);
  goto j_102;
  z_42 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto y_100;
  y_100 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(y_42);
  goto k_102;
  y_42 :
  goto x_42;
  k_102 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(c_43);
  l_102 :
  Epushd(2,9);
  MoveTop(2,1);
  goto m_100;
  m_100 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto n_100;
  n_100 :
  TestFunFC(w_0,&&g_43,Egetd(2,2));
  goto o_100;
  o_100 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto p_100;
  p_100 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto q_100;
  q_100 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(f_43);
  goto m_102;
  g_43 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto r_100;
  r_100 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto s_100;
  s_100 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto t_100;
  t_100 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(f_43);
  goto n_102;
  f_43 :
  goto e_43;
  n_102 :
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
  Rpush(i_43);
  goto l_102;
  i_43 :
  OneNextSon();
  Ccall(_stratego_i_57);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto j_100;
  j_100 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto k_100;
  k_100 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto l_100;
  l_100 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(k_43);
  goto o_102;
  k_43 :
  goto h_43;
  o_102 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  h_43 :
  Epopd(3,5);
  Return();
  e_43 :
  goto d_43;
  m_102 :
  Tset(App0("Nil"));
  Return();
  d_43 :
  Epopd(2,9);
  Return();
  c_43 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  x_42 :
  goto w_42;
  j_102 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  w_42 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_i_58)
  Rpush(m_43);
  l_114 :
  Epushd(0,8);
  MoveTop(0,1);
  Cpush(p_43);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_102;
  t_102 :
  TestFunFC(q_42,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_102;
  u_102 :
  TestFunFC(f_26,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_43);
  goto n_114;
  w_43 :
  goto r_43;
  n_114 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_e_58);
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  Tset(App2("Cons",App2("TCons",Egetd(1,3),App2("TCons",Egetd(2,1),App0("TNil"))),App0("Nil")));
  Epopd(2,1);
  Return();
  r_43 :
  Epopd(1,4);
  goto o_43;
  p_43 :
  Tset(App0("Nil"));
  goto x_43;
  o_43 :
  Cpop();
  x_43 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(b_44);
  Epushd(1,3);
  Tdupl();
  Epushd(2,8);
  MoveTop(2,5);
  goto z_102;
  z_102 :
  TestFunFC(j_24,&&m_44,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_103;
  a_103 :
  TestFunFC(r_9,&&fail,Egetd(2,6));
  MoveArg(2,1,2,6,0);
  MoveArg(2,2,2,6,1);
  MoveArg(2,3,2,6,2);
  Rpush(l_44);
  goto q_114;
  m_44 :
  TestFunFC(r_9,&&n_44,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  MoveArg(2,4,2,5,2);
  Rpush(l_44);
  goto r_114;
  n_44 :
  TestFunFC(l_24,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  Rpush(l_44);
  goto s_114;
  l_44 :
  goto k_44;
  s_114 :
  NotNULLd(2,6);
  Tset(App2("Cons",Egetd(2,6),App0("Nil")));
  Return();
  k_44 :
  goto j_44;
  r_114 :
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Return();
  j_44 :
  goto h_44;
  q_114 :
  NotNULLd(2,1);
  Tset(App2("Cons",Egetd(2,1),App0("Nil")));
  Return();
  h_44 :
  MoveTop(2,8);
  Move(1,1,2,8);
  Epopd(2,8);
  Tpop();
  Cpush(p_44);
  TestFunTop(j_24);
  TravInit();
  OneNextSon();
  TestFunTop(r_9);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Rpush(q_44);
  goto l_114;
  q_44 :
  AllBuild();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(u_44);
  goto l_114;
  u_44 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto q_103;
  q_103 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_103;
  r_103 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto s_103;
  s_103 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(x_44);
  goto x_114;
  x_44 :
  goto v_44;
  x_114 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(y_44);
  y_114 :
  Cpush(a_45);
  Ccall(_stratego_t_56);
  goto z_44;
  a_45 :
  Ccontinue(b_45);
  Epushd(3,3);
  MoveTop(3,1);
  goto p_103;
  p_103 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(d_45);
  goto z_114;
  d_45 :
  goto c_45;
  z_114 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(g_45);
  a_115 :
  Cpush(v_45);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto j_103;
  j_103 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto k_103;
  k_103 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto l_103;
  l_103 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto m_103;
  m_103 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  goto n_103;
  n_103 :
  TestFunFC(p_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto o_103;
  o_103 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(z_45);
  goto c_115;
  z_45 :
  goto y_45;
  c_115 :
  Move(4,4,4,9);
  Return();
  y_45 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto o_45;
  v_45 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_46);
  goto a_115;
  k_46 :
  AllBuild();
  goto a_46;
  o_45 :
  Cpop();
  a_46 :
  Return();
  g_45 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(l_46);
  goto y_114;
  l_46 :
  Return();
  c_45 :
  Epopd(3,3);
  goto z_44;
  b_45 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_46);
  goto y_114;
  t_46 :
  AllBuild();
  goto p_46;
  z_44 :
  Cpop();
  p_46 :
  Return();
  y_44 :
  Return();
  v_44 :
  Epopd(2,7);
  AllBuild();
  goto o_44;
  p_44 :
  Ccontinue(u_46);
  TestFunTop(r_9);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(v_46);
  goto l_114;
  v_46 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto h_104;
  h_104 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto i_104;
  i_104 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto j_104;
  j_104 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(i_47);
  goto g_115;
  i_47 :
  goto c_47;
  g_115 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(j_47);
  h_115 :
  Cpush(c_48);
  Ccall(_stratego_t_56);
  goto b_48;
  c_48 :
  Ccontinue(d_48);
  Epushd(3,3);
  MoveTop(3,1);
  goto g_104;
  g_104 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_48);
  goto i_115;
  y_48 :
  goto e_48;
  i_115 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(z_48);
  j_115 :
  Cpush(b_49);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto a_104;
  a_104 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto b_104;
  b_104 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto c_104;
  c_104 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto d_104;
  d_104 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  goto e_104;
  e_104 :
  TestFunFC(p_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto f_104;
  f_104 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(i_49);
  goto l_115;
  i_49 :
  goto h_49;
  l_115 :
  Move(4,4,4,9);
  Return();
  h_49 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto a_49;
  b_49 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_49);
  goto j_115;
  q_49 :
  AllBuild();
  goto k_49;
  a_49 :
  Cpop();
  k_49 :
  Return();
  z_48 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(r_49);
  goto h_115;
  r_49 :
  Return();
  e_48 :
  Epopd(3,3);
  goto b_48;
  d_48 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_50);
  goto h_115;
  c_50 :
  AllBuild();
  goto z_49;
  b_48 :
  Cpop();
  z_49 :
  Return();
  j_47 :
  Return();
  c_47 :
  Epopd(2,7);
  AllBuild();
  goto o_44;
  u_46 :
  TestFunTop(l_24);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(m_50);
  goto l_114;
  m_50 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto y_104;
  y_104 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_104;
  z_104 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_105;
  a_105 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(o_50);
  goto p_115;
  o_50 :
  goto n_50;
  p_115 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(p_50);
  q_115 :
  Cpush(t_50);
  Ccall(_stratego_t_56);
  goto q_50;
  t_50 :
  Ccontinue(u_50);
  Epushd(3,3);
  MoveTop(3,1);
  goto x_104;
  x_104 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_50);
  goto r_115;
  w_50 :
  goto v_50;
  r_115 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(x_50);
  s_115 :
  Cpush(z_50);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto r_104;
  r_104 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto s_104;
  s_104 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto t_104;
  t_104 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto u_104;
  u_104 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  goto v_104;
  v_104 :
  TestFunFC(p_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto w_104;
  w_104 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(b_51);
  goto u_115;
  b_51 :
  goto a_51;
  u_115 :
  Move(4,4,4,9);
  Return();
  a_51 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto y_50;
  z_50 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_51);
  goto s_115;
  d_51 :
  AllBuild();
  goto c_51;
  y_50 :
  Cpop();
  c_51 :
  Return();
  x_50 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(e_51);
  goto q_115;
  e_51 :
  Return();
  v_50 :
  Epopd(3,3);
  goto q_50;
  u_50 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_51);
  goto q_115;
  r_51 :
  AllBuild();
  goto q_51;
  q_50 :
  Cpop();
  q_51 :
  Return();
  p_50 :
  Return();
  n_50 :
  Epopd(2,7);
  AllBuild();
  goto d_50;
  o_44 :
  Cpop();
  d_50 :
  MoveTop(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto d_105;
  d_105 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto e_105;
  e_105 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto f_105;
  f_105 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(w_51);
  goto w_115;
  w_51 :
  goto s_51;
  w_115 :
  Move(1,3,2,4);
  Return();
  s_51 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(x_51);
  x_115 :
  Cpush(d_52);
  Ccall(_stratego_t_56);
  Tset(App0("Nil"));
  goto y_51;
  d_52 :
  Epushd(2,3);
  MoveTop(2,1);
  goto r_105;
  r_105 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(i_52);
  goto y_115;
  i_52 :
  goto h_52;
  y_115 :
  Epushd(3,6);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(j_52);
  goto x_115;
  j_52 :
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(3,2);
  goto o_105;
  o_105 :
  TestFunFC(p_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto p_105;
  p_105 :
  TestFunFC(p_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto q_105;
  q_105 :
  TestFunFC(s_0,&&fail,Egetd(3,6));
  Rpush(l_52);
  goto b_116;
  l_52 :
  goto k_52;
  b_116 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(m_52);
  c_116 :
  Cpush(o_52);
  Ccall(_stratego_t_56);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  goto n_52;
  o_52 :
  Ccontinue(p_52);
  Epushd(4,3);
  MoveTop(4,1);
  goto n_105;
  n_105 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(r_52);
  goto d_116;
  r_52 :
  goto q_52;
  d_116 :
  Tdupl();
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(s_52);
  e_116 :
  Cpush(u_52);
  Epushd(5,3);
  MoveTop(5,1);
  goto m_105;
  m_105 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(w_52);
  goto f_116;
  w_52 :
  goto v_52;
  f_116 :
  Move(4,2,5,2);
  Return();
  v_52 :
  Epopd(5,3);
  goto t_52;
  u_52 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_52);
  goto e_116;
  y_52 :
  AllBuild();
  goto x_52;
  t_52 :
  Cpop();
  x_52 :
  Return();
  s_52 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(z_52);
  goto c_116;
  z_52 :
  Return();
  q_52 :
  Epopd(4,3);
  goto n_52;
  p_52 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_53);
  goto c_116;
  i_53 :
  AllBuild();
  goto c_53;
  n_52 :
  Cpop();
  c_53 :
  Return();
  m_52 :
  Return();
  k_52 :
  Epopd(3,6);
  Return();
  h_52 :
  Epopd(2,3);
  goto g_52;
  y_51 :
  Cpop();
  g_52 :
  Return();
  x_51 :
  Epopd(1,3);
  goto a_44;
  b_44 :
  Epushd(1,2);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  _ST_explode_term();
  MoveTop(2,1);
  goto u_105;
  u_105 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_105;
  v_105 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_105;
  w_105 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(l_53);
  goto h_116;
  l_53 :
  goto k_53;
  h_116 :
  Move(1,2,2,4);
  Return();
  k_53 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(m_53);
  i_116 :
  Cpush(o_53);
  Ccall(_stratego_t_56);
  Tset(App0("Nil"));
  goto n_53;
  o_53 :
  Epushd(2,3);
  MoveTop(2,1);
  goto i_106;
  i_106 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(r_53);
  goto j_116;
  r_53 :
  goto q_53;
  j_116 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(s_53);
  goto l_114;
  s_53 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(t_53);
  goto i_116;
  t_53 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto f_106;
  f_106 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto g_106;
  g_106 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto h_106;
  h_106 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(v_53);
  goto m_116;
  v_53 :
  goto u_53;
  m_116 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(w_53);
  n_116 :
  Cpush(y_53);
  Ccall(_stratego_t_56);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto x_53;
  y_53 :
  Ccontinue(z_53);
  Epushd(4,3);
  MoveTop(4,1);
  goto e_106;
  e_106 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(b_54);
  goto o_116;
  b_54 :
  goto a_54;
  o_116 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(c_54);
  p_116 :
  Cpush(e_54);
  Epushd(5,3);
  MoveTop(5,1);
  goto d_106;
  d_106 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(g_54);
  goto q_116;
  g_54 :
  goto f_54;
  q_116 :
  Move(4,2,5,2);
  Return();
  f_54 :
  Epopd(5,3);
  goto d_54;
  e_54 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_54);
  goto p_116;
  i_54 :
  AllBuild();
  goto h_54;
  d_54 :
  Cpop();
  h_54 :
  Return();
  c_54 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(j_54);
  goto n_116;
  j_54 :
  Return();
  a_54 :
  Epopd(4,3);
  goto x_53;
  z_53 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_54);
  goto n_116;
  l_54 :
  AllBuild();
  goto k_54;
  x_53 :
  Cpop();
  k_54 :
  Return();
  w_53 :
  Return();
  u_53 :
  Epopd(3,7);
  Return();
  q_53 :
  Epopd(2,3);
  goto p_53;
  n_53 :
  Cpop();
  p_53 :
  Return();
  m_53 :
  Epopd(1,2);
  goto j_53;
  a_44 :
  Cpop();
  j_53 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  MoveTop(0,4);
  goto p_106;
  p_106 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto q_106;
  q_106 :
  TestFunFC(p_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto r_106;
  r_106 :
  TestFunFC(s_0,&&fail,Egetd(0,8));
  Rpush(n_54);
  goto s_116;
  n_54 :
  goto m_54;
  s_116 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(o_54);
  t_116 :
  Cpush(q_54);
  Ccall(_stratego_t_56);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  goto p_54;
  q_54 :
  Ccontinue(r_54);
  Epushd(1,3);
  MoveTop(1,1);
  goto o_106;
  o_106 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(t_54);
  goto u_116;
  t_54 :
  goto s_54;
  u_116 :
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(u_54);
  v_116 :
  Cpush(w_54);
  Epushd(2,3);
  MoveTop(2,1);
  goto n_106;
  n_106 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(y_54);
  goto w_116;
  y_54 :
  goto x_54;
  w_116 :
  Move(1,2,2,2);
  Return();
  x_54 :
  Epopd(2,3);
  goto v_54;
  w_54 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_55);
  goto v_116;
  a_55 :
  AllBuild();
  goto z_54;
  v_54 :
  Cpop();
  z_54 :
  Return();
  u_54 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(b_55);
  goto t_116;
  b_55 :
  Return();
  s_54 :
  Epopd(1,3);
  goto p_54;
  r_54 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_55);
  goto t_116;
  d_55 :
  AllBuild();
  goto c_55;
  p_54 :
  Cpop();
  c_55 :
  Return();
  o_54 :
  Return();
  m_54 :
  Epopd(0,8);
  Return();
  m_43 :
ENDPROC

PROC(_stratego_j_58)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_y_56);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_k_58)
  Rpush(e_55);
  j_117 :
  Cpush(g_55);
  Ccall(_stratego_t_56);
  goto f_55;
  g_55 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(r_9);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_58);
  AllBuild();
  OneNextSon();
  Rpush(i_55);
  goto j_117;
  i_55 :
  AllBuild();
  goto h_55;
  f_55 :
  Cpop();
  h_55 :
  Return();
  e_55 :
ENDPROC

PROC(_stratego_l_58)
  Rpush(j_55);
  t_117 :
  Cpush(l_55);
  Ccall(_stratego_m_58);
  goto k_55;
  l_55 :
  goto m_55;
  k_55 :
  Cpop();
  m_55 :
  Cpush(o_55);
  n_55 :
  Cpush(q_55);
  Ccall(_stratego_u_58);
  goto p_55;
  q_55 :
  Ccontinue(r_55);
  Cpush(t_55);
  Ccall(_stratego_v_58);
  goto s_55;
  t_55 :
  Ccontinue(u_55);
  Epushd(0,4);
  MoveTop(0,1);
  goto l_117;
  l_117 :
  TestFunFC(x_55,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto m_117;
  m_117 :
  TestFunFC(y_55,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(w_55);
  goto v_117;
  w_55 :
  goto v_55;
  v_117 :
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,4)),Egetd(0,3)));
  Return();
  v_55 :
  Epopd(0,4);
  goto s_55;
  u_55 :
  Ccall(_stratego_w_58);
  goto z_55;
  s_55 :
  Cpop();
  z_55 :
  goto p_55;
  r_55 :
  Ccall(_stratego_x_58);
  goto a_56;
  p_55 :
  Cpop();
  a_56 :
  Tduplinv();
  goto n_55;
  o_55 :
  AllInit();
  c_56 :
  AllNextSon(&&d_56);
  Rpush(e_56);
  goto t_117;
  e_56 :
  goto c_56;
  d_56 :
  AllBuild();
  Return();
  j_55 :
ENDPROC

PROC(_stratego_m_58)
  Rpush(f_56);
  w_117 :
  Cpush(h_56);
  Cpush(j_56);
  Ccall(_stratego_n_58);
  Rpush(k_56);
  goto w_117;
  k_56 :
  goto i_56;
  j_56 :
  Ccontinue(l_56);
  TestFunTop(o_12);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_56);
  goto w_117;
  m_56 :
  AllBuild();
  goto i_56;
  l_56 :
  Ccall(_stratego_o_58);
  goto n_56;
  i_56 :
  Cpop();
  n_56 :
  goto g_56;
  h_56 :
  goto o_56;
  g_56 :
  Cpop();
  o_56 :
  Return();
  f_56 :
ENDPROC

PROC(_stratego_n_58)
  Epushd(0,5);
  MoveTop(0,1);
  goto j_118;
  j_118 :
  TestFunFC(r_56,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto k_118;
  k_118 :
  TestFunFC(p_18,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(q_56);
  goto q_119;
  q_56 :
  goto p_56;
  q_119 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_o_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_58);
  s_119 :
  Cpush(y_58);
  Epushd(2,5);
  MoveTop(2,1);
  goto a_118;
  a_118 :
  TestFunFC(p_59,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto b_118;
  b_118 :
  TestFunFC(m_12,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(a_59);
  goto t_119;
  a_59 :
  goto z_58;
  t_119 :
  Move(1,4,2,3);
  Move(1,2,2,4);
  Move(1,3,2,5);
  NotNULLd(1,4);
  Tset(App1("Var",Egetd(1,4)));
  Return();
  z_58 :
  Epopd(2,5);
  goto t_58;
  y_58 :
  IsAppl();
  OneInit();
  r_59 :
  OneNextSon();
  Cpush(r_59);
  Rpush(y_59);
  goto s_119;
  y_59 :
  Cpop();
  OneBuild();
  goto q_59;
  t_58 :
  Cpop();
  q_59 :
  Return();
  s_58 :
  MoveTop(1,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(z_59);
  v_119 :
  Cpush(h_60);
  Epushd(2,7);
  MoveTop(2,1);
  goto e_118;
  e_118 :
  TestFunFC(p_59,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto f_118;
  f_118 :
  TestFunFC(m_12,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto g_118;
  g_118 :
  TestFunFC(q_42,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto h_118;
  h_118 :
  TestFunFC(w_0,&&fail,Egetd(2,7));
  Rpush(l_60);
  goto w_119;
  l_60 :
  goto i_60;
  w_119 :
  Move(1,4,2,3);
  Move(1,6,2,4);
  Move(1,7,2,6);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  i_60 :
  Epopd(2,7);
  goto b_60;
  h_60 :
  IsAppl();
  OneInit();
  u_60 :
  OneNextSon();
  Cpush(u_60);
  Rpush(x_60);
  goto v_119;
  x_60 :
  Cpop();
  OneBuild();
  goto t_60;
  b_60 :
  Cpop();
  t_60 :
  Return();
  z_59 :
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
  p_56 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_58)
  Epushd(0,5);
  MoveTop(0,1);
  goto a_120;
  a_120 :
  TestFunFC(r_56,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto b_120;
  b_120 :
  TestFunFC(p_18,&&c_61,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(b_61);
  goto n_120;
  c_61 :
  TestFunFC(g_61,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(b_61);
  goto o_120;
  b_61 :
  goto z_60;
  o_120 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,5),App2("Cons",Egetd(0,4),App0("Nil"))))));
  Return();
  z_60 :
  goto y_60;
  n_120 :
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
  y_60 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_58)
  Cpush(h_61);
  Tdupl();
  Rpush(i_61);
  w_120 :
  Epushd(0,4);
  MoveTop(0,2);
  goto r_120;
  r_120 :
  TestFunFC(p_59,&&u_61,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  Rpush(r_61);
  goto x_120;
  u_61 :
  TestFunFC(y_55,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(r_61);
  goto y_120;
  r_61 :
  goto m_61;
  y_120 :
  Return();
  m_61 :
  goto k_61;
  x_120 :
  Return();
  k_61 :
  AllInit();
  v_61 :
  AllNextSon(&&x_61);
  Rpush(z_61);
  goto w_120;
  z_61 :
  goto v_61;
  x_61 :
  AllBuild();
  Epopd(0,4);
  Return();
  i_61 :
  Cpop();
  Crestore();
  Cjump();
  h_61 :
ENDPROC

PROC(_stratego_q_58)
  Cpush(a_62);
  Tdupl();
  Rpush(b_62);
  f_121 :
  Cpush(v_62);
  Epushd(0,4);
  MoveTop(0,1);
  goto a_121;
  a_121 :
  TestFunFC(p_59,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(y_62);
  goto g_121;
  y_62 :
  goto x_62;
  g_121 :
  Return();
  x_62 :
  Epopd(0,4);
  goto c_62;
  v_62 :
  Ccall(_stratego_r_58);
  goto c_63;
  c_62 :
  Cpop();
  c_63 :
  AllInit();
  d_63 :
  AllNextSon(&&e_63);
  Rpush(f_63);
  goto f_121;
  f_63 :
  goto d_63;
  e_63 :
  AllBuild();
  Return();
  b_62 :
  Cpop();
  Crestore();
  Cjump();
  a_62 :
ENDPROC

PROC(_stratego_r_58)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_121;
  i_121 :
  TestFunFC(i_63,&&fail,Egetd(0,1));
  Rpush(h_63);
  goto k_121;
  h_63 :
  goto g_63;
  k_121 :
  Return();
  g_63 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_58)
  Epushd(0,6);
  MoveTop(0,3);
  goto x_121;
  x_121 :
  TestFunFC(p_64,&&o_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto y_121;
  y_121 :
  TestFunFC(w_0,&&q_64,Egetd(0,4));
  Rpush(m_64);
  goto b_123;
  q_64 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_64);
  goto c_123;
  o_64 :
  TestFunFC(s_64,&&r_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto z_121;
  z_121 :
  TestFunFC(w_0,&&t_64,Egetd(0,4));
  Rpush(m_64);
  goto d_123;
  t_64 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_64);
  goto e_123;
  r_64 :
  TestFunFC(d_65,&&y_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto a_122;
  a_122 :
  TestFunFC(w_0,&&j_65,Egetd(0,4));
  Rpush(m_64);
  goto f_123;
  j_65 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_64);
  goto g_123;
  y_64 :
  TestFunFC(m_65,&&k_65,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto b_122;
  b_122 :
  TestFunFC(w_0,&&n_65,Egetd(0,4));
  Rpush(m_64);
  goto h_123;
  n_65 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_64);
  goto i_123;
  k_65 :
  TestFunFC(p_65,&&o_65,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_64);
  goto j_123;
  o_65 :
  TestFunFC(r_65,&&q_65,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_64);
  goto k_123;
  q_65 :
  TestFunFC(d_66,&&s_65,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_64);
  goto l_123;
  s_65 :
  TestFunFC(e_66,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(m_64);
  goto m_123;
  m_64 :
  goto k_64;
  m_123 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  k_64 :
  goto g_64;
  l_123 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  g_64 :
  goto f_64;
  k_123 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  f_64 :
  goto e_64;
  j_123 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  e_64 :
  goto s_63;
  i_123 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  s_63 :
  goto r_63;
  h_123 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  r_63 :
  goto q_63;
  g_123 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  q_63 :
  goto p_63;
  f_123 :
  Tset(App0("Fail"));
  Return();
  p_63 :
  goto o_63;
  e_123 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  o_63 :
  goto l_63;
  d_123 :
  Tset(App0("Fail"));
  Return();
  l_63 :
  goto k_63;
  c_123 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  k_63 :
  goto j_63;
  b_123 :
  Tset(App0("Id"));
  Return();
  j_63 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_v_58)
  Epushd(0,2);
  MoveTop(0,1);
  goto s_123;
  s_123 :
  TestFunFC(x_55,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(g_66);
  goto e_124;
  g_66 :
  goto f_66;
  e_124 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(h_66);
  f_124 :
  Cpush(j_66);
  Epushd(2,4);
  MoveTop(2,1);
  goto p_123;
  p_123 :
  TestFunFC(y_55,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto q_123;
  q_123 :
  TestFunFC(x_55,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(l_66);
  goto g_124;
  l_66 :
  goto k_66;
  g_124 :
  Move(1,2,2,3);
  Move(1,1,2,4);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  k_66 :
  Epopd(2,4);
  goto i_66;
  j_66 :
  IsAppl();
  OneInit();
  y_66 :
  OneNextSon();
  Cpush(y_66);
  Rpush(a_67);
  goto f_124;
  a_67 :
  Cpop();
  OneBuild();
  goto s_66;
  i_66 :
  Cpop();
  s_66 :
  Return();
  h_66 :
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(App1("Build",Egetd(1,3)));
  Epopd(1,3);
  Return();
  f_66 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_w_58)
  Epushd(0,2);
  MoveTop(0,1);
  goto n_124;
  n_124 :
  TestFunFC(x_55,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_67);
  goto a_125;
  f_67 :
  goto b_67;
  a_125 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_o_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(i_67);
  c_125 :
  Cpush(l_67);
  Epushd(2,3);
  MoveTop(2,1);
  goto l_124;
  l_124 :
  TestFunFC(y_55,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(s_67);
  goto d_125;
  s_67 :
  goto r_67;
  d_125 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  r_67 :
  Epopd(2,3);
  goto j_67;
  l_67 :
  IsAppl();
  OneInit();
  y_67 :
  OneNextSon();
  Cpush(y_67);
  Rpush(d_68);
  goto c_125;
  d_68 :
  Cpop();
  OneBuild();
  goto t_67;
  j_67 :
  Cpop();
  t_67 :
  Return();
  i_67 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",Egetd(1,2),Egetd(1,3),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  b_67 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_x_58)
  Epushd(0,3);
  MoveTop(0,1);
  goto q_125;
  q_125 :
  TestFunFC(s_68,&&q_68,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(p_68);
  goto q_126;
  q_68 :
  TestFunFC(x_55,&&u_68,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(p_68);
  goto v_126;
  u_68 :
  TestFunFC(w_68,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_68);
  goto a_127;
  p_68 :
  goto o_68;
  a_127 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Prim",ATmakeString("_ST_explode_term")),App2("Seq",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,2),App2("Cons",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,3),App2("Cons",App2("Cong",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Prim",ATmakeString("_ST_mkterm")))));
  Return();
  o_68 :
  goto g_68;
  v_126 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_o_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(y_68);
  x_126 :
  Cpush(a_69);
  Epushd(2,3);
  MoveTop(2,1);
  goto o_125;
  o_125 :
  TestFunFC(h_69,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(d_69);
  goto y_126;
  d_69 :
  goto c_69;
  y_126 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  c_69 :
  Epopd(2,3);
  goto z_68;
  a_69 :
  IsAppl();
  OneInit();
  j_69 :
  OneNextSon();
  Cpush(j_69);
  Rpush(q_69);
  goto x_126;
  q_69 :
  Cpop();
  OneBuild();
  goto i_69;
  z_68 :
  Cpop();
  i_69 :
  Return();
  y_68 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",App1("Prim",ATmakeString("_ST_mkterm")),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  g_68 :
  goto e_68;
  q_126 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_o_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(v_69);
  s_126 :
  Cpush(b_70);
  Epushd(2,3);
  MoveTop(2,1);
  goto k_125;
  k_125 :
  TestFunFC(h_69,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(e_70);
  goto t_126;
  e_70 :
  goto d_70;
  t_126 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  d_70 :
  Epopd(2,3);
  goto y_69;
  b_70 :
  IsAppl();
  OneInit();
  g_70 :
  OneNextSon();
  Cpush(g_70);
  Rpush(j_70);
  goto s_126;
  j_70 :
  Cpop();
  OneBuild();
  goto f_70;
  y_69 :
  Cpop();
  f_70 :
  Return();
  v_69 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App1("Match",Egetd(1,4)),App1("Where",App3("BAM",App1("Prim",ATmakeString("_ST_explode_term")),App1("Var",Egetd(1,1)),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))))))));
  Epopd(1,4);
  Return();
  e_68 :
  Epopd(0,3);
ENDPROC

DOIT

