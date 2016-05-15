#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,w_68);
VARDECL(AFun,m_68);
VARDECL(AFun,c_68);
VARDECL(AFun,n_65);
VARDECL(AFun,m_65);
VARDECL(AFun,k_65);
VARDECL(AFun,h_65);
VARDECL(AFun,r_64);
VARDECL(AFun,o_64);
VARDECL(AFun,k_64);
VARDECL(AFun,d_64);
VARDECL(AFun,b_63);
VARDECL(AFun,v_60);
VARDECL(AFun,j_58);
VARDECL(AFun,k_56);
VARDECL(AFun,r_55);
VARDECL(AFun,q_55);
VARDECL(AFun,j_42);
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
  MOVE(w_68,ATmakeAFun("Explode",2,0));
  MOVE(m_68,ATmakeAFun("ExplodeCong",2,0));
  MOVE(c_68,ATmakeAFun("Match",1,0));
  MOVE(n_65,ATmakeAFun("BAM",3,0));
  MOVE(m_65,ATmakeAFun("AM",2,0));
  MOVE(k_65,ATmakeAFun("MA",2,0));
  MOVE(h_65,ATmakeAFun("BA",2,0));
  MOVE(r_64,ATmakeAFun("Lets",2,0));
  MOVE(o_64,ATmakeAFun("LChoices",1,0));
  MOVE(k_64,ATmakeAFun("Choices",1,0));
  MOVE(d_64,ATmakeAFun("Seqs",1,0));
  MOVE(b_63,ATmakeAFun("Wld",0,0));
  MOVE(v_60,ATmakeAFun("StratRule",3,0));
  MOVE(j_58,ATmakeAFun("Con",3,0));
  MOVE(k_56,ATmakeAFun("SRule",1,0));
  MOVE(r_55,ATmakeAFun("App",2,0));
  MOVE(q_55,ATmakeAFun("Build",1,0));
  MOVE(j_42,ATmakeAFun("Call",2,0));
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
  Ccall(_stratego_q_56);
ENDPROC

PROC(_stratego_q_56)
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
  Ccall(_stratego_r_56);
  goto f_0;
  g_0 :
  Ccall(_stratego_s_56);
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
  Ccall(_stratego_t_56);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_y_56);
  Tdupl();
  Ccall(_stratego_a_57);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
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

PROC(_stratego_s_56)
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
  goto h_16;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto k_16;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto n_16;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto q_16;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto b_17;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto e_17;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto i_17;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto x_17;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto d_18;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto h_18;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto q_18;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto b_19;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto h_19;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto k_19;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto n_19;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto h_16;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto k_16;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto n_16;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto q_16;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto b_17;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto q_18;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto b_19;
  r_3 :
  goto t_2;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto h_19;
  t_3 :
  goto t_2;
  s_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto k_19;
  v_3 :
  goto t_2;
  u_3 :
  Rpush(b_4);
  goto n_19;
  b_4 :
  goto w_3;
  t_2 :
  Cpop();
  w_3 :
  goto m_1;
  m_1 :
  goto l_1;
  n_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_10;
  z_10 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_4);
  goto o_19;
  d_4 :
  goto c_4;
  o_19 :
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
  k_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_10;
  s_10 :
  TestStr(1,1,"-h",&&fail);
  Rpush(g_4);
  goto l_19;
  g_4 :
  goto e_4;
  l_19 :
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
  h_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_10;
  p_10 :
  TestStr(1,1,"--help",&&fail);
  Rpush(i_4);
  goto i_19;
  i_4 :
  goto h_4;
  i_19 :
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
  b_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_10;
  m_10 :
  TestStr(1,1,"-s",&&fail);
  Rpush(l_4);
  goto c_19;
  l_4 :
  goto j_4;
  c_19 :
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
  q_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_10;
  j_10 :
  TestStr(1,1,"-b",&&fail);
  Rpush(o_4);
  goto z_18;
  o_4 :
  goto n_4;
  z_18 :
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
  h_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_10;
  f_10 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto i_18;
  t_4 :
  goto s_4;
  i_18 :
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
  d_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_10;
  b_10 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto e_18;
  v_4 :
  goto u_4;
  e_18 :
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
  x_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_9;
  x_9 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto y_17;
  x_4 :
  goto w_4;
  y_17 :
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
  i_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_8;
  d_8 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto j_17;
  z_4 :
  goto y_4;
  j_17 :
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
  e_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_7;
  c_7 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_5);
  goto f_17;
  b_5 :
  goto a_5;
  f_17 :
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
  b_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_6;
  z_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_5);
  goto c_17;
  d_5 :
  goto c_5;
  c_17 :
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
  q_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_6;
  u_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_5);
  goto r_16;
  f_5 :
  goto e_5;
  r_16 :
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
  n_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_6;
  r_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_5);
  goto o_16;
  h_5 :
  goto g_5;
  o_16 :
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
  k_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_6;
  d_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_5);
  goto l_16;
  j_5 :
  goto i_5;
  l_16 :
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
  h_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_6;
  a_6 :
  TestStr(1,1,"-S",&&fail);
  Rpush(l_5);
  goto i_16;
  l_5 :
  goto k_5;
  i_16 :
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

PROC(_stratego_t_56)
  Tdupl();
  m_5 :
  TestFunTop(a_0);
  Cpush(n_5);
  Arg(0);
  Cpush(q_5);
  Ccall(_stratego_u_56);
  goto p_5;
  q_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto t_19;
  t_19 :
  TestFunFC(u_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_5);
  goto x_19;
  t_5 :
  goto s_5;
  x_19 :
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
  Ccall(_stratego_v_56);
ENDPROC

PROC(_stratego_u_56)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_19;
  z_19 :
  TestFunFC(x_5,&&fail,Egetd(0,1));
  Rpush(w_5);
  goto b_20;
  w_5 :
  goto v_5;
  b_20 :
  Return();
  v_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_56)
  Epushd(0,1);
  Tdupl();
  Rpush(y_5);
  k_20 :
  Cpush(b_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_20;
  d_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_20;
  e_20 :
  TestFunFC(f_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_6);
  goto l_20;
  e_6 :
  goto c_6;
  l_20 :
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
  goto k_20;
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
  Epushd(0,3);
  Tdupl();
  Cpush(j_6);
  Rpush(k_6);
  f_21 :
  Cpush(m_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_20;
  n_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_20;
  o_20 :
  TestFunFC(p_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_6);
  goto g_21;
  o_6 :
  goto n_6;
  g_21 :
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
  goto f_21;
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
  Ccall(_stratego_z_56);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
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
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(w_6);
  Rpush(x_6);
  k_22 :
  Cpush(a_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_21;
  m_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_21;
  n_21 :
  TestFunFC(e_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_7);
  goto l_22;
  d_7 :
  goto b_7;
  l_22 :
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
  goto k_22;
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
  Ccall(_stratego_g_57);
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
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  Cpush(j_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(k_7);
  q_22 :
  Cpush(m_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto t_21;
  t_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_21;
  u_21 :
  TestFunFC(p_7,&&fail,Egetd(1,2));
  Rpush(o_7);
  goto r_22;
  o_7 :
  goto n_7;
  r_22 :
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
  goto q_22;
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
  Ccall(_stratego_c_57);
  OneNextSon();
  Ccall(_stratego_g_57);
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
  Ccall(_stratego_d_57);
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  goto s_7;
  i_7 :
  Cpop();
  s_7 :
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
  Cpush(u_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(v_7);
  Tdupl();
  Rpush(w_7);
  b_24 :
  Cpush(y_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto t_22;
  t_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_22;
  u_22 :
  TestFunFC(b_8,&&fail,Egetd(1,2));
  Rpush(a_8);
  goto c_24;
  a_8 :
  goto z_7;
  c_24 :
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
  goto b_24;
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
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(f_8);
  r_24 :
  Cpush(h_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_22;
  w_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_22;
  x_22 :
  TestFunFC(k_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(j_8);
  goto s_24;
  j_8 :
  goto i_8;
  s_24 :
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
  goto r_24;
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
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(n_8);
  t_24 :
  Cpush(p_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_22;
  z_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_23;
  a_23 :
  TestFunFC(f_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_8);
  goto u_24;
  r_8 :
  goto q_8;
  u_24 :
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
  goto t_24;
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
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_w_56);
  goto t_7;
  u_7 :
  goto u_8;
  t_7 :
  Cpop();
  u_8 :
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
  goto w_24;
  w_24 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(w_8);
  goto f_25;
  w_8 :
  goto v_8;
  f_25 :
  Return();
  v_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_57)
  Epushd(0,11);
  MoveTop(0,1);
  goto x_26;
  x_26 :
  TestFunFC(z_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto y_26;
  y_26 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto z_26;
  z_26 :
  TestFunFC(a_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto a_27;
  a_27 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto b_27;
  b_27 :
  TestFunFC(b_9,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto c_27;
  c_27 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,11,0,8,1);
  goto d_27;
  d_27 :
  TestFunFC(c_9,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto g_27;
  g_27 :
  TestFunFC(w_0,&&fail,Egetd(0,11));
  Rpush(y_8);
  goto k_29;
  y_8 :
  goto x_8;
  k_29 :
  Epushd(1,11);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_j_57);
  MoveTop(1,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(d_9);
  p_29 :
  Cpush(f_9);
  Ccall(_stratego_r_56);
  goto e_9;
  f_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto k_26;
  k_26 :
  TestFunFC(j_9,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(i_9);
  goto q_29;
  i_9 :
  goto h_9;
  q_29 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_n_57);
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
  goto p_29;
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
  t_29 :
  Cpush(n_9);
  Ccall(_stratego_r_56);
  goto m_9;
  n_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto o_26;
  o_26 :
  TestFunFC(r_9,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(q_9);
  goto u_29;
  q_9 :
  goto p_9;
  u_29 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_n_57);
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
  goto t_29;
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
  Ccall(_stratego_i_57);
  MoveTop(1,4);
  NotNULLd(0,4);
  NotNULLd(1,4);
  Tset(App1("Specification",App2("Cons",App1("Signature",Egetd(0,4)),App2("Cons",App1("Strategies",Egetd(1,4)),App0("Nil")))));
  Ccall(_stratego_r_57);
  MoveTop(1,5);
  goto s_26;
  s_26 :
  TestFunFC(z_8,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  goto t_26;
  t_26 :
  TestFunFC(a_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto u_26;
  u_26 :
  TestFunFC(a_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,11,1,8,1);
  goto v_26;
  v_26 :
  TestFunFC(c_9,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  goto w_26;
  w_26 :
  TestFunFC(w_0,&&fail,Egetd(1,11));
  Rpush(u_9);
  goto d_30;
  u_9 :
  goto t_9;
  d_30 :
  NotNULLd(1,10);
  Tset(Egetd(1,10));
  Ccall(_stratego_v_57);
  Ccall(_stratego_i_58);
  Return();
  t_9 :
  Epopd(1,11);
  Return();
  x_8 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_i_57)
  Rpush(v_9);
  m_30 :
  Cpush(y_9);
  Ccall(_stratego_r_56);
  goto w_9;
  y_9 :
  Epushd(0,3);
  MoveTop(0,1);
  goto f_30;
  f_30 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(c_10);
  goto n_30;
  c_10 :
  goto a_10;
  n_30 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(d_10);
  o_30 :
  Cpush(g_10);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_10);
  goto o_30;
  h_10 :
  AllBuild();
  goto e_10;
  g_10 :
  Ccall(_stratego_r_56);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_10);
  goto m_30;
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

PROC(_stratego_j_57)
  Rpush(l_10);
  p_30 :
  Cpush(o_10);
  Ccall(_stratego_r_56);
  goto n_10;
  o_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_57);
  OneNextSon();
  Rpush(r_10);
  goto p_30;
  r_10 :
  AllBuild();
  goto q_10;
  n_10 :
  Cpop();
  q_10 :
  Return();
  l_10 :
  Ccall(_stratego_i_57);
ENDPROC

PROC(_stratego_k_57)
  Epushd(0,2);
  MoveTop(0,1);
  goto s_30;
  s_30 :
  TestFunFC(x_10,&&w_10,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_10);
  goto v_31;
  w_10 :
  TestFunFC(y_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_10);
  goto w_31;
  v_10 :
  goto u_10;
  w_31 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(a_11);
  i_32 :
  Cpush(j_11);
  Ccall(_stratego_r_56);
  goto i_11;
  j_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_57);
  OneNextSon();
  Rpush(m_11);
  goto i_32;
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
  v_31 :
  Tset(App0("Nil"));
  Return();
  t_10 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_l_57)
  Epushd(0,5);
  MoveTop(0,1);
  goto p_32;
  p_32 :
  TestFunFC(r_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto q_32;
  q_32 :
  TestFunFC(t_11,&&s_11,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(p_11);
  goto e_34;
  s_11 :
  TestFunFC(u_11,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(p_11);
  goto f_34;
  p_11 :
  goto o_11;
  f_34 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(v_11);
  g_34 :
  Cpush(x_11);
  Ccall(_stratego_r_56);
  goto w_11;
  x_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_57);
  OneNextSon();
  Rpush(z_11);
  goto g_34;
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
  i_34 :
  Cpush(d_12);
  Ccall(_stratego_r_56);
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
  goto i_34;
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
  e_34 :
  NotNULLd(0,2);
  Tset(App3("SDef",Egetd(0,2),App0("Nil"),App2("Cong",Egetd(0,2),App0("Nil"))));
  Return();
  n_11 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_m_57)
  _ST_new();
ENDPROC

PROC(_stratego_n_57)
  Rpush(h_12);
  x_40 :
  Cpush(j_12);
  Epushd(0,2);
  MoveTop(0,1);
  goto m_34;
  m_34 :
  TestFunFC(m_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_12);
  goto y_40;
  l_12 :
  goto k_12;
  y_40 :
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
  Ccall(_stratego_q_57);
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
  goto x_40;
  p_12 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_o_57);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto t_34;
  t_34 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_34;
  w_34 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto x_34;
  x_34 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(r_12);
  goto i_41;
  r_12 :
  goto q_12;
  i_41 :
  Move(0,3,1,4);
  Return();
  q_12 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_12);
  j_41 :
  Cpush(u_12);
  Ccall(_stratego_r_56);
  Tset(App0("Nil"));
  goto t_12;
  u_12 :
  Epushd(1,3);
  MoveTop(1,1);
  goto j_35;
  j_35 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(y_12);
  goto k_41;
  y_12 :
  goto w_12;
  k_41 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(z_12);
  goto j_41;
  z_12 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto g_35;
  g_35 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_35;
  h_35 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto i_35;
  i_35 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(b_13);
  goto n_41;
  b_13 :
  goto a_13;
  n_41 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(c_13);
  o_41 :
  Cpush(f_13);
  Ccall(_stratego_r_56);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto e_13;
  f_13 :
  Ccontinue(g_13);
  Epushd(3,3);
  MoveTop(3,1);
  goto f_35;
  f_35 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_13);
  goto p_41;
  i_13 :
  goto h_13;
  p_41 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(j_13);
  q_41 :
  Cpush(m_13);
  Epushd(4,3);
  MoveTop(4,1);
  goto e_35;
  e_35 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(o_13);
  goto r_41;
  o_13 :
  goto n_13;
  r_41 :
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
  goto q_41;
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
  goto o_41;
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
  goto o_41;
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
  goto m_35;
  m_35 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto n_35;
  n_35 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto t_35;
  t_35 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(x_13);
  goto t_41;
  x_13 :
  goto w_13;
  t_41 :
  Move(0,2,1,4);
  Return();
  w_13 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(y_13);
  u_41 :
  Cpush(a_14);
  Ccall(_stratego_r_56);
  Tset(App0("Nil"));
  goto z_13;
  a_14 :
  Epushd(1,3);
  MoveTop(1,1);
  goto q_36;
  q_36 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(e_14);
  goto y_41;
  e_14 :
  goto d_14;
  y_41 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(f_14);
  goto x_40;
  f_14 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(g_14);
  goto u_41;
  g_14 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto m_36;
  m_36 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_36;
  o_36 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_36;
  p_36 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(i_14);
  goto b_42;
  i_14 :
  goto h_14;
  b_42 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(k_14);
  c_42 :
  Cpush(m_14);
  Ccall(_stratego_r_56);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto l_14;
  m_14 :
  Ccontinue(n_14);
  Epushd(3,3);
  MoveTop(3,1);
  goto l_36;
  l_36 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_14);
  goto d_42;
  p_14 :
  goto o_14;
  d_42 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(q_14);
  e_42 :
  Cpush(s_14);
  Epushd(4,3);
  MoveTop(4,1);
  goto k_36;
  k_36 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(u_14);
  goto t_42;
  u_14 :
  goto t_14;
  t_42 :
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
  goto e_42;
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
  goto c_42;
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
  goto c_42;
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

PROC(_stratego_o_57)
  Epushd(0,5);
  MoveTop(0,5);
  goto w_43;
  w_43 :
  TestFunFC(p_0,&&d_15,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto x_43;
  x_43 :
  TestFunFC(p_0,&&e_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto a_44;
  a_44 :
  TestFunFC(s_0,&&f_15,Egetd(0,4));
  Cpush(h_15);
  Rpush(i_15);
  goto z_45;
  i_15 :
  goto g_15;
  h_15 :
  Rpush(l_15);
  goto e_46;
  l_15 :
  goto j_15;
  g_15 :
  Cpop();
  j_15 :
  goto c_15;
  f_15 :
  Rpush(c_15);
  goto e_46;
  e_15 :
  Rpush(c_15);
  goto e_46;
  d_15 :
  Rpush(c_15);
  goto e_46;
  c_15 :
  goto b_15;
  e_46 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(m_15);
  f_46 :
  Cpush(o_15);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(r_15);
  Epushd(1,7);
  MoveTop(1,1);
  goto h_43;
  h_43 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto j_43;
  j_43 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto l_43;
  l_43 :
  TestFunFC(p_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto o_43;
  o_43 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  Rpush(t_15);
  goto g_46;
  t_15 :
  goto s_15;
  g_46 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  s_15 :
  Epopd(1,7);
  goto q_15;
  r_15 :
  Ccall(_stratego_p_57);
  goto v_15;
  q_15 :
  Cpop();
  v_15 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  goto n_15;
  o_15 :
  Epushd(1,7);
  MoveTop(1,1);
  goto q_43;
  q_43 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_43;
  r_43 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto s_43;
  s_43 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto t_43;
  t_43 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(y_15);
  goto h_46;
  y_15 :
  goto x_15;
  h_46 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  x_15 :
  Epopd(1,7);
  goto w_15;
  n_15 :
  Cpop();
  w_15 :
  Cpush(b_16);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_56);
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  goto a_16;
  b_16 :
  Rpush(d_16);
  goto f_46;
  d_16 :
  goto c_16;
  a_16 :
  Cpop();
  c_16 :
  Return();
  m_15 :
  Return();
  b_15 :
  goto a_15;
  z_45 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(f_16);
  a_46 :
  Cpush(j_16);
  Ccall(_stratego_r_56);
  goto g_16;
  j_16 :
  Ccontinue(m_16);
  Epushd(1,3);
  MoveTop(1,1);
  goto z_42;
  z_42 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(s_16);
  goto b_46;
  s_16 :
  goto p_16;
  b_46 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(t_16);
  c_46 :
  Cpush(v_16);
  Epushd(2,3);
  MoveTop(2,1);
  goto y_42;
  y_42 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(x_16);
  goto d_46;
  x_16 :
  goto w_16;
  d_46 :
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
  goto c_46;
  z_16 :
  AllBuild();
  goto y_16;
  u_16 :
  Cpop();
  y_16 :
  Return();
  t_16 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(a_17);
  goto a_46;
  a_17 :
  Return();
  p_16 :
  Epopd(1,3);
  goto g_16;
  m_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_17);
  goto a_46;
  g_17 :
  AllBuild();
  goto d_17;
  g_16 :
  Cpop();
  d_17 :
  Return();
  f_16 :
  Return();
  a_15 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_57)
  Epushd(0,7);
  MoveTop(0,1);
  goto l_47;
  l_47 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto m_47;
  m_47 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto n_47;
  n_47 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto o_47;
  o_47 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(k_17);
  goto q_49;
  k_17 :
  goto h_17;
  q_49 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto k_46;
  k_46 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_46;
  l_46 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto m_46;
  m_46 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(m_17);
  goto r_49;
  m_17 :
  goto l_17;
  r_49 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  l_17 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto o_46;
  o_46 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_46;
  p_46 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_46;
  q_46 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(o_17);
  goto s_49;
  o_17 :
  goto n_17;
  s_49 :
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
  t_49 :
  Epushd(2,9);
  MoveTop(2,1);
  goto x_46;
  x_46 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto z_46;
  z_46 :
  TestFunFC(w_0,&&t_17,Egetd(2,2));
  goto a_47;
  a_47 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto b_47;
  b_47 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto c_47;
  c_47 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(s_17);
  goto u_49;
  t_17 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto d_47;
  d_47 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto e_47;
  e_47 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto f_47;
  f_47 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(s_17);
  goto v_49;
  s_17 :
  goto r_17;
  v_49 :
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
  goto t_49;
  v_17 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto u_46;
  u_46 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto v_46;
  v_46 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_46;
  w_46 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(w_17);
  goto w_49;
  w_17 :
  goto u_17;
  w_49 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  u_17 :
  Epopd(3,5);
  Return();
  r_17 :
  goto q_17;
  u_49 :
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
  goto i_47;
  i_47 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto j_47;
  j_47 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto k_47;
  k_47 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(a_18);
  goto y_49;
  a_18 :
  goto z_17;
  y_49 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(b_18);
  z_49 :
  Cpush(f_18);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_18);
  goto z_49;
  g_18 :
  AllBuild();
  goto c_18;
  f_18 :
  Ccall(_stratego_r_56);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto j_18;
  c_18 :
  Cpop();
  j_18 :
  Return();
  b_18 :
  Return();
  z_17 :
  Epopd(1,9);
  Return();
  h_17 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_q_57)
  Epushd(0,6);
  MoveTop(0,2);
  goto c_50;
  c_50 :
  TestFunFC(o_12,&&n_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(m_18);
  goto p_50;
  n_18 :
  TestFunFC(o_18,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto d_50;
  d_50 :
  TestFunFC(p_18,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(m_18);
  goto q_50;
  m_18 :
  goto l_18;
  q_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_n_57);
  Return();
  l_18 :
  goto k_18;
  p_50 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  k_18 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_r_57)
  Ccall(_stratego_s_57);
  Ccall(_stratego_u_57);
ENDPROC

PROC(_stratego_s_57)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(r_18);
  b_61 :
  Rpush(s_18);
  c_61 :
  Epushd(1,5);
  MoveTop(1,1);
  goto c_52;
  c_52 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_52;
  d_52 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto r_52;
  r_52 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Cpush(y_18);
  Rpush(a_19);
  goto d_61;
  a_19 :
  goto x_18;
  y_18 :
  Ccontinue(d_19);
  Rpush(e_19);
  goto h_61;
  e_19 :
  goto x_18;
  d_19 :
  Rpush(g_19);
  goto x_61;
  g_19 :
  goto f_19;
  x_18 :
  Cpop();
  f_19 :
  goto w_18;
  w_18 :
  goto v_18;
  x_61 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  j_19 :
  AllNextSon(&&m_19);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(p_19);
  goto c_61;
  p_19 :
  Epopd(2,1);
  goto j_19;
  m_19 :
  AllBuild();
  Return();
  v_18 :
  goto u_18;
  h_61 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_q_57);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(q_19);
  j_61 :
  Cpush(s_19);
  Ccall(_stratego_r_56);
  goto r_19;
  s_19 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_57);
  OneNextSon();
  Rpush(c_20);
  goto j_61;
  c_20 :
  AllBuild();
  goto y_19;
  r_19 :
  Cpop();
  y_19 :
  Return();
  q_19 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(m_20);
  l_61 :
  Epushd(4,9);
  MoveTop(4,1);
  goto g_51;
  g_51 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto h_51;
  h_51 :
  TestFunFC(w_0,&&s_20,Egetd(4,2));
  goto i_51;
  i_51 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto j_51;
  j_51 :
  TestFunFC(w_0,&&fail,Egetd(4,6));
  goto k_51;
  k_51 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(r_20);
  goto m_61;
  s_20 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto l_51;
  l_51 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto m_51;
  m_51 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto n_51;
  n_51 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(r_20);
  goto n_61;
  r_20 :
  goto q_20;
  n_61 :
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
  Rpush(a_21);
  goto l_61;
  a_21 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto d_51;
  d_51 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto e_51;
  e_51 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto f_51;
  f_51 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(b_21);
  goto o_61;
  b_21 :
  goto y_20;
  o_61 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  y_20 :
  Epopd(5,5);
  Return();
  q_20 :
  goto p_20;
  m_61 :
  Tset(App0("Nil"));
  Return();
  p_20 :
  Epopd(4,9);
  Return();
  m_20 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto r_51;
  r_51 :
  TestFunFC(p_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto s_51;
  s_51 :
  TestFunFC(p_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto t_51;
  t_51 :
  TestFunFC(s_0,&&fail,Egetd(3,8));
  Rpush(e_21);
  goto q_61;
  e_21 :
  goto c_21;
  q_61 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(h_21);
  s_61 :
  Cpush(j_21);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_21);
  goto s_61;
  k_21 :
  AllBuild();
  goto i_21;
  j_21 :
  Ccall(_stratego_r_56);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto l_21;
  i_21 :
  Cpop();
  l_21 :
  Return();
  h_21 :
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
  goto x_51;
  x_51 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto y_51;
  y_51 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto z_51;
  z_51 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto a_52;
  a_52 :
  TestFunFC(s_0,&&fail,Egetd(2,11));
  Rpush(p_21);
  goto v_61;
  p_21 :
  goto o_21;
  v_61 :
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
  goto b_61;
  q_21 :
  Epopd(3,1);
  AllBuild();
  Return();
  o_21 :
  Epopd(2,11);
  Return();
  u_18 :
  goto t_18;
  d_61 :
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
  Ccall(_stratego_t_57);
  Epopd(2,1);
  AllBuild();
  Return();
  t_18 :
  Epopd(1,5);
  Return();
  s_18 :
  Return();
  r_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_57)
  Rpush(r_21);
  x_62 :
  Epushd(0,11);
  MoveTop(0,5);
  goto b_62;
  b_62 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto c_62;
  c_62 :
  TestFunFC(p_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto d_62;
  d_62 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto e_62;
  e_62 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto f_62;
  f_62 :
  TestFunFC(p_0,&&d_22,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto g_62;
  g_62 :
  TestFunFC(p_0,&&e_22,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto h_62;
  h_62 :
  TestFunFC(s_0,&&f_22,Egetd(0,4));
  Cpush(m_22);
  Rpush(n_22);
  goto y_62;
  n_22 :
  goto g_22;
  m_22 :
  Rpush(p_22);
  goto z_62;
  p_22 :
  goto o_22;
  g_22 :
  Cpop();
  o_22 :
  goto c_22;
  f_22 :
  Rpush(c_22);
  goto z_62;
  e_22 :
  Rpush(c_22);
  goto z_62;
  d_22 :
  Rpush(c_22);
  goto z_62;
  c_22 :
  goto a_22;
  z_62 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(s_22);
  goto x_62;
  s_22 :
  Return();
  a_22 :
  goto s_21;
  y_62 :
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

PROC(_stratego_u_57)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(v_22);
  c_69 :
  Rpush(y_22);
  d_69 :
  Epushd(1,5);
  MoveTop(1,1);
  goto x_64;
  x_64 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_64;
  y_64 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_64;
  z_64 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Cpush(t_23);
  Rpush(u_23);
  goto e_69;
  u_23 :
  goto j_23;
  t_23 :
  Ccontinue(v_23);
  Rpush(w_23);
  goto i_69;
  w_23 :
  goto j_23;
  v_23 :
  Rpush(y_23);
  goto f_70;
  y_23 :
  goto x_23;
  j_23 :
  Cpop();
  x_23 :
  goto i_23;
  i_23 :
  goto h_23;
  f_70 :
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
  Rpush(d_24);
  goto d_69;
  d_24 :
  Epopd(2,1);
  goto z_23;
  a_24 :
  AllBuild();
  Return();
  h_23 :
  goto g_23;
  i_69 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto k_63;
  k_63 :
  TestFunFC(j_24,&&i_24,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto l_63;
  l_63 :
  TestFunFC(r_9,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(h_24);
  goto j_69;
  i_24 :
  TestFunFC(r_9,&&k_24,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(h_24);
  goto k_69;
  k_24 :
  TestFunFC(l_24,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(h_24);
  goto l_69;
  h_24 :
  goto g_24;
  l_69 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  g_24 :
  goto f_24;
  k_69 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  f_24 :
  goto e_24;
  j_69 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  e_24 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(m_24);
  n_69 :
  Cpush(o_24);
  Ccall(_stratego_r_56);
  goto n_24;
  o_24 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_57);
  OneNextSon();
  Rpush(q_24);
  goto n_69;
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
  Rpush(v_24);
  p_69 :
  Epushd(4,9);
  MoveTop(4,1);
  goto u_63;
  u_63 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto v_63;
  v_63 :
  TestFunFC(w_0,&&a_25,Egetd(4,2));
  goto w_63;
  w_63 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto x_63;
  x_63 :
  TestFunFC(w_0,&&fail,Egetd(4,6));
  goto y_63;
  y_63 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(z_24);
  goto q_69;
  a_25 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto z_63;
  z_63 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto a_64;
  a_64 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto b_64;
  b_64 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(z_24);
  goto r_69;
  z_24 :
  goto y_24;
  r_69 :
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
  goto p_69;
  c_25 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto r_63;
  r_63 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto s_63;
  s_63 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto t_63;
  t_63 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(d_25);
  goto s_69;
  d_25 :
  goto b_25;
  s_69 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  b_25 :
  Epopd(5,5);
  Return();
  y_24 :
  goto x_24;
  q_69 :
  Tset(App0("Nil"));
  Return();
  x_24 :
  Epopd(4,9);
  Return();
  v_24 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto f_64;
  f_64 :
  TestFunFC(p_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto g_64;
  g_64 :
  TestFunFC(p_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto h_64;
  h_64 :
  TestFunFC(s_0,&&fail,Egetd(3,15));
  Rpush(h_25);
  goto u_69;
  h_25 :
  goto g_25;
  u_69 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(i_25);
  v_69 :
  Cpush(k_25);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_25);
  goto v_69;
  l_25 :
  AllBuild();
  goto j_25;
  k_25 :
  Ccall(_stratego_r_56);
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
  g_25 :
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
  goto j_64;
  j_64 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(q_25);
  goto x_69;
  q_25 :
  goto p_25;
  x_69 :
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
  goto l_64;
  l_64 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(u_25);
  goto y_69;
  u_25 :
  goto t_25;
  y_69 :
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
  goto s_64;
  s_64 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto t_64;
  t_64 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto u_64;
  u_64 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto v_64;
  v_64 :
  TestFunFC(s_0,&&fail,Egetd(2,11));
  Rpush(w_25);
  goto a_70;
  w_25 :
  goto v_25;
  a_70 :
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
  goto c_69;
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
  goto c_69;
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
  goto c_69;
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
  goto c_69;
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
  g_23 :
  goto f_23;
  e_69 :
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
  Ccall(_stratego_t_57);
  Epopd(2,1);
  AllBuild();
  Return();
  f_23 :
  Epopd(1,5);
  Return();
  y_22 :
  Return();
  v_22 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_57)
  Epushd(0,8);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App2("TCons",ATmakeString("main"),App2("TCons",MakeInt(0),App0("TNil"))),App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(0,2);
  goto g_72;
  g_72 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto h_72;
  h_72 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto i_72;
  i_72 :
  TestFunFC(p_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto j_72;
  j_72 :
  TestFunFC(s_0,&&fail,Egetd(0,8));
  Rpush(h_26);
  goto u_76;
  h_26 :
  goto g_26;
  u_76 :
  Epushd(1,7);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,7),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(l_26);
  v_76 :
  Epushd(2,13);
  MoveTop(2,1);
  goto e_71;
  e_71 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto f_71;
  f_71 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_71;
  g_71 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto h_71;
  h_71 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto i_71;
  i_71 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto j_71;
  j_71 :
  TestFunFC(p_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto k_71;
  k_71 :
  TestFunFC(s_0,&&fail,Egetd(2,13));
  Cpush(r_26);
  Rpush(e_27);
  goto w_76;
  e_27 :
  goto q_26;
  r_26 :
  Rpush(j_27);
  goto i_77;
  j_27 :
  goto f_27;
  q_26 :
  Cpop();
  f_27 :
  goto p_26;
  p_26 :
  goto n_26;
  i_77 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App2("TCons",Egetd(2,10),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,12)),App0("TNil")))))));
  Return();
  n_26 :
  goto m_26;
  w_76 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,8),App0("TNil"))));
  Ccall(_stratego_w_57);
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Ccall(_stratego_g_58);
  MoveTop(4,2);
  Move(3,2,4,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(2,6),App0("TNil"))));
  Ccall(_stratego_o_57);
  MoveTop(4,3);
  Move(3,3,4,3);
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,4),App0("TNil"))));
  MoveTop(3,4);
  goto b_71;
  b_71 :
  TestFunFC(p_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto c_71;
  c_71 :
  TestFunFC(p_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto d_71;
  d_71 :
  TestFunFC(s_0,&&fail,Egetd(3,8));
  Rpush(l_27);
  goto a_77;
  l_27 :
  goto k_27;
  a_77 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(u_27);
  b_77 :
  Cpush(x_27);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_27);
  goto b_77;
  y_27 :
  AllBuild();
  goto w_27;
  x_27 :
  Ccall(_stratego_r_56);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto a_28;
  w_27 :
  Cpop();
  a_28 :
  Return();
  u_27 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,6),App0("TNil"))));
  MoveTop(4,2);
  goto y_70;
  y_70 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto z_70;
  z_70 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto a_71;
  a_71 :
  TestFunFC(s_0,&&fail,Egetd(4,6));
  Rpush(g_28);
  goto d_77;
  g_28 :
  goto f_28;
  d_77 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(h_28);
  e_77 :
  Cpush(l_28);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_28);
  goto e_77;
  n_28 :
  AllBuild();
  goto j_28;
  l_28 :
  Ccall(_stratego_r_56);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto o_28;
  j_28 :
  Cpop();
  o_28 :
  Return();
  h_28 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil")))));
  MoveTop(5,2);
  goto u_70;
  u_70 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto v_70;
  v_70 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto w_70;
  w_70 :
  TestFunFC(p_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto x_70;
  x_70 :
  TestFunFC(s_0,&&fail,Egetd(5,8));
  Rpush(t_28);
  goto g_77;
  t_28 :
  goto p_28;
  g_77 :
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
  f_28 :
  Epopd(4,6);
  Return();
  k_27 :
  Epopd(3,8);
  Return();
  m_26 :
  Cpush(v_28);
  Epushd(3,11);
  MoveTop(3,1);
  goto m_71;
  m_71 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto n_71;
  n_71 :
  TestFunFC(w_0,&&fail,Egetd(3,2));
  goto o_71;
  o_71 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto p_71;
  p_71 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto q_71;
  q_71 :
  TestFunFC(p_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto r_71;
  r_71 :
  TestFunFC(p_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto s_71;
  s_71 :
  TestFunFC(s_0,&&fail,Egetd(3,11));
  Rpush(z_28);
  goto j_77;
  z_28 :
  goto x_28;
  j_77 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App0("TNil"))));
  Return();
  x_28 :
  Epopd(3,11);
  goto u_28;
  v_28 :
  Rpush(j_29);
  goto v_76;
  j_29 :
  goto b_29;
  u_28 :
  Cpop();
  b_29 :
  Epopd(2,13);
  Return();
  l_26 :
  MoveTop(1,1);
  goto b_72;
  b_72 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_72;
  c_72 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto d_72;
  d_72 :
  TestFunFC(w_0,&&m_29,Egetd(1,4));
  goto e_72;
  e_72 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(l_29);
  goto k_77;
  m_29 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto f_72;
  f_72 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(l_29);
  goto l_77;
  l_29 :
  goto j_26;
  l_77 :
  Tdupl();
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App2("Cons",Egetd(1,5),Egetd(1,6)));
  Rpush(n_29);
  n_77 :
  Cpush(r_29);
  Ccall(_stratego_r_56);
  goto o_29;
  r_29 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,3);
  goto x_71;
  x_71 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto y_71;
  y_71 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto z_71;
  z_71 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  goto a_72;
  a_72 :
  TestFunFC(z_29,&&y_29,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Cpush(b_30);
  Rpush(c_30);
  goto o_77;
  c_30 :
  goto a_30;
  b_30 :
  Rpush(j_30);
  goto p_77;
  j_30 :
  goto e_30;
  a_30 :
  Cpop();
  e_30 :
  goto x_29;
  y_29 :
  Rpush(x_29);
  goto p_77;
  x_29 :
  goto w_29;
  p_77 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,4),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))));
  Ccall(_stratego_h_58);
  Return();
  w_29 :
  goto v_29;
  o_77 :
  NotNULLd(2,1);
  NotNULLd(2,2);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,1),App2("Cons",ATmakeString("^"),App2("Cons",Egetd(2,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))))));
  Ccall(_stratego_h_58);
  Return();
  v_29 :
  Epopd(2,7);
  OneNextSon();
  Rpush(k_30);
  goto n_77;
  k_30 :
  AllBuild();
  goto s_29;
  o_29 :
  Cpop();
  s_29 :
  Return();
  n_29 :
  Tpop();
  Tset(MakeInt(1));
  Ccall(_stratego_x_56);
  Return();
  j_26 :
  goto i_26;
  k_77 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  i_26 :
  Epopd(1,7);
  Return();
  g_26 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_w_57)
  Epushd(0,11);
  MoveTop(0,3);
  goto e_78;
  e_78 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,9,0,3,1);
  goto f_78;
  f_78 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto g_78;
  g_78 :
  TestFunFC(p_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto h_78;
  h_78 :
  TestFunFC(s_0,&&fail,Egetd(0,8));
  goto i_78;
  i_78 :
  TestFunFC(p_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto j_78;
  j_78 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto k_78;
  k_78 :
  TestInt(0,7,0,&&v_30);
  goto l_78;
  l_78 :
  TestFunFC(z_29,&&w_30,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(y_30);
  Rpush(z_30);
  goto d_80;
  z_30 :
  goto x_30;
  y_30 :
  Ccontinue(a_31);
  Rpush(b_31);
  goto f_80;
  b_31 :
  goto x_30;
  a_31 :
  Rpush(d_31);
  goto l_80;
  d_31 :
  goto c_31;
  x_30 :
  Cpop();
  c_31 :
  goto u_30;
  w_30 :
  Cpush(f_31);
  Rpush(g_31);
  goto f_80;
  g_31 :
  goto e_31;
  f_31 :
  Rpush(i_31);
  goto l_80;
  i_31 :
  goto h_31;
  e_31 :
  Cpop();
  h_31 :
  goto u_30;
  v_30 :
  goto m_78;
  m_78 :
  TestFunFC(z_29,&&j_31,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(l_31);
  Rpush(m_31);
  goto d_80;
  m_31 :
  goto k_31;
  l_31 :
  Rpush(o_31);
  goto f_80;
  o_31 :
  goto n_31;
  k_31 :
  Cpop();
  n_31 :
  goto u_30;
  j_31 :
  Rpush(u_30);
  goto f_80;
  u_30 :
  goto r_30;
  l_80 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(p_31);
  m_80 :
  Cpush(r_31);
  Ccall(_stratego_r_56);
  goto q_31;
  r_31 :
  Ccontinue(t_31);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto a_78;
  a_78 :
  TestFunFC(r_9,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(x_31);
  goto n_80;
  x_31 :
  goto u_31;
  n_80 :
  Move(0,5,3,2);
  Return();
  u_31 :
  Epopd(3,4);
  OneNextSon();
  Rpush(y_31);
  goto m_80;
  y_31 :
  AllBuild();
  goto q_31;
  t_31 :
  Epushd(3,3);
  MoveTop(3,1);
  goto c_78;
  c_78 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(b_32);
  goto o_80;
  b_32 :
  goto a_32;
  o_80 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(c_32);
  goto m_80;
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
  Ccall(_stratego_d_58);
  Epopd(1,1);
  Return();
  r_30 :
  goto q_30;
  f_80 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(d_32);
  g_80 :
  Cpush(f_32);
  Ccall(_stratego_r_56);
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
  Ccall(_stratego_c_58);
  MoveTop(3,1);
  Move(0,7,3,1);
  Epopd(3,1);
  Tpop();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(h_32);
  goto g_80;
  h_32 :
  AllBuild();
  goto e_32;
  g_32 :
  Epushd(3,3);
  MoveTop(3,1);
  goto x_77;
  x_77 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_32);
  goto j_80;
  l_32 :
  goto k_32;
  j_80 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(m_32);
  goto g_80;
  m_32 :
  Return();
  k_32 :
  Epopd(3,3);
  goto j_32;
  e_32 :
  Cpop();
  j_32 :
  Return();
  d_32 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_d_58);
  Epopd(1,1);
  Return();
  q_30 :
  goto l_30;
  d_80 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,7),App0("TNil")))));
  Ccall(_stratego_x_57);
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

PROC(_stratego_x_57)
  Epushd(0,7);
  MoveTop(0,1);
  goto v_84;
  v_84 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_84;
  w_84 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_84;
  x_84 :
  TestStr(0,4,"D",&&u_32);
  goto y_84;
  y_84 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto z_84;
  z_84 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(t_32);
  goto m_93;
  u_32 :
  TestStr(0,4,"T",&&fail);
  goto a_85;
  a_85 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto b_85;
  b_85 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(t_32);
  goto m_94;
  t_32 :
  goto o_32;
  m_94 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_a_58);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",App0("TNil"),App0("TNil"))));
  MoveTop(2,2);
  goto r_84;
  r_84 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto s_84;
  s_84 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto t_84;
  t_84 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(z_32);
  goto o_94;
  z_32 :
  goto y_32;
  o_94 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(b_33);
  p_94 :
  Epushd(4,7);
  MoveTop(4,1);
  goto x_82;
  x_82 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto y_82;
  y_82 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto z_82;
  z_82 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto a_83;
  a_83 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(d_33);
  goto q_94;
  d_33 :
  goto c_33;
  q_94 :
  Epushd(5,2);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_z_57);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_57);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_m_57);
  MoveTop(5,2);
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",Egetd(5,2),Egetd(4,6)),App0("TNil")))));
  Cpush(f_33);
  Epushd(6,7);
  MoveTop(6,1);
  goto s_82;
  s_82 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto t_82;
  t_82 :
  TestInt(6,2,0,&&fail);
  goto u_82;
  u_82 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto v_82;
  v_82 :
  TestFunFC(p_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto w_82;
  w_82 :
  TestFunFC(s_0,&&fail,Egetd(6,7));
  Rpush(h_33);
  goto t_94;
  h_33 :
  goto g_33;
  t_94 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  g_33 :
  Epopd(6,7);
  goto e_33;
  f_33 :
  Rpush(j_33);
  goto p_94;
  j_33 :
  goto i_33;
  e_33 :
  Cpop();
  i_33 :
  Epopd(5,2);
  Return();
  c_33 :
  Epopd(4,7);
  Return();
  b_33 :
  MoveTop(3,1);
  goto q_84;
  q_84 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(k_33);
  goto u_94;
  k_33 :
  goto a_33;
  u_94 :
  Epushd(4,14);
  Move(1,2,3,2);
  Move(1,3,3,3);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_b_58);
  MoveTop(4,1);
  Move(1,1,4,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",App2("Cons",Egetd(1,2),Egetd(1,3)),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(l_33);
  w_94 :
  Epushd(5,9);
  MoveTop(5,1);
  goto q_83;
  q_83 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto r_83;
  r_83 :
  TestFunFC(p_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto s_83;
  s_83 :
  TestFunFC(w_0,&&p_33,Egetd(5,6));
  goto t_83;
  t_83 :
  TestFunFC(s_0,&&fail,Egetd(5,9));
  goto u_83;
  u_83 :
  t_33 :
  Rpush(o_33);
  goto x_94;
  p_33 :
  TestFunFC(a_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto v_83;
  v_83 :
  TestFunFC(a_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto w_83;
  w_83 :
  TestFunFC(s_0,&&fail,Egetd(5,9));
  Rpush(o_33);
  goto y_94;
  o_33 :
  goto n_33;
  y_94 :
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
  goto j_83;
  j_83 :
  TestFunFC(p_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto k_83;
  k_83 :
  TestFunFC(p_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto l_83;
  l_83 :
  TestFunFC(s_0,&&fail,Egetd(7,5));
  Rpush(w_33);
  goto z_94;
  w_33 :
  goto v_33;
  z_94 :
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
  v_33 :
  Epopd(7,5);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(x_33);
  goto w_94;
  x_33 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto n_83;
  n_83 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto o_83;
  o_83 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto p_83;
  p_83 :
  TestFunFC(s_0,&&fail,Egetd(6,5));
  Rpush(y_33);
  goto d_95;
  y_33 :
  goto u_33;
  d_95 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),Egetd(6,4)));
  Return();
  u_33 :
  Epopd(6,5);
  Return();
  n_33 :
  goto m_33;
  x_94 :
  Tset(App0("Nil"));
  Return();
  m_33 :
  Epopd(5,9);
  Return();
  l_33 :
  Rpush(a_34);
  e_95 :
  Cpush(d_34);
  Epushd(5,8);
  MoveTop(5,1);
  Rpush(h_34);
  g_95 :
  Cpush(k_34);
  Ccall(_stratego_r_56);
  goto j_34;
  k_34 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto z_83;
  z_83 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(o_34);
  goto h_95;
  o_34 :
  goto n_34;
  h_95 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  n_34 :
  Epopd(6,3);
  OneNextSon();
  Rpush(p_34);
  goto g_95;
  p_34 :
  AllBuild();
  goto l_34;
  j_34 :
  Cpop();
  l_34 :
  Return();
  h_34 :
  MoveTop(5,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  Rpush(q_34);
  j_95 :
  Cpush(s_34);
  Ccall(_stratego_r_56);
  goto r_34;
  s_34 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto c_84;
  c_84 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(y_34);
  goto k_95;
  y_34 :
  goto v_34;
  k_95 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  v_34 :
  Epopd(6,3);
  OneNextSon();
  Rpush(z_34);
  goto j_95;
  z_34 :
  AllBuild();
  goto u_34;
  r_34 :
  Cpop();
  u_34 :
  Return();
  q_34 :
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
  Rpush(b_35);
  goto e_95;
  b_35 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(5,4);
  goto f_84;
  f_84 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto g_84;
  g_84 :
  TestFunFC(p_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto h_84;
  h_84 :
  TestFunFC(s_0,&&fail,Egetd(5,8));
  Rpush(c_35);
  goto m_95;
  c_35 :
  goto a_35;
  m_95 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("TCons",Egetd(5,5),Egetd(5,7)));
  Return();
  a_35 :
  Epopd(5,8);
  goto b_34;
  d_34 :
  Rpush(k_35);
  n_95 :
  Cpush(o_35);
  Ccall(_stratego_r_56);
  goto l_35;
  o_35 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_57);
  OneNextSon();
  Rpush(q_35);
  goto n_95;
  q_35 :
  AllBuild();
  goto p_35;
  l_35 :
  Cpop();
  p_35 :
  Return();
  k_35 :
  Tset(App0("TNil"));
  goto d_35;
  b_34 :
  Cpop();
  d_35 :
  Return();
  a_34 :
  MoveTop(4,2);
  goto j_84;
  j_84 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto k_84;
  k_84 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto l_84;
  l_84 :
  TestFunFC(p_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto m_84;
  m_84 :
  TestFunFC(p_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto n_84;
  n_84 :
  TestFunFC(p_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto o_84;
  o_84 :
  TestFunFC(p_0,&&fail,Egetd(4,12));
  MoveArg(4,13,4,12,0);
  MoveArg(4,14,4,12,1);
  goto p_84;
  p_84 :
  TestFunFC(s_0,&&fail,Egetd(4,14));
  Rpush(r_35);
  goto o_95;
  r_35 :
  goto z_33;
  o_95 :
  Move(1,4,4,3);
  Move(1,5,4,5);
  Move(1,6,4,7);
  Move(1,7,4,9);
  Move(1,8,4,11);
  Move(1,9,4,13);
  Return();
  z_33 :
  Epopd(4,14);
  Return();
  a_33 :
  Epopd(3,3);
  Return();
  y_32 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App2("Cons",Egetd(1,3),App2("Cons",Egetd(1,6),App2("Cons",Egetd(1,8),App0("Nil")))));
  Ccall(_stratego_i_57);
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
  o_32 :
  goto n_32;
  m_93 :
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
  goto e_82;
  e_82 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto f_82;
  f_82 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto g_82;
  g_82 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(u_35);
  goto o_93;
  u_35 :
  goto s_35;
  o_93 :
  Epushd(3,13);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(v_35);
  p_93 :
  Epushd(4,7);
  MoveTop(4,1);
  goto h_81;
  h_81 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto i_81;
  i_81 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto j_81;
  j_81 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto k_81;
  k_81 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(x_35);
  goto q_93;
  x_35 :
  goto w_35;
  q_93 :
  Epushd(5,4);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_z_57);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_57);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Tdupl();
  Epushd(6,3);
  Ccall(_stratego_m_57);
  MoveTop(6,1);
  Move(5,2,6,1);
  Ccall(_stratego_m_57);
  MoveTop(6,2);
  Move(5,3,6,2);
  Ccall(_stratego_m_57);
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
  Cpush(z_35);
  Epushd(6,7);
  MoveTop(6,1);
  goto c_81;
  c_81 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto d_81;
  d_81 :
  TestInt(6,2,0,&&fail);
  goto e_81;
  e_81 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto f_81;
  f_81 :
  TestFunFC(p_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto g_81;
  g_81 :
  TestFunFC(s_0,&&fail,Egetd(6,7));
  Rpush(b_36);
  goto x_93;
  b_36 :
  goto a_36;
  x_93 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  a_36 :
  Epopd(6,7);
  goto y_35;
  z_35 :
  Rpush(d_36);
  goto p_93;
  d_36 :
  goto c_36;
  y_35 :
  Cpop();
  c_36 :
  Epopd(5,4);
  Return();
  w_35 :
  Epopd(4,7);
  Return();
  v_35 :
  Rpush(f_36);
  y_93 :
  Cpush(h_36);
  Epushd(4,8);
  MoveTop(4,1);
  Rpush(i_36);
  a_94 :
  Cpush(n_36);
  Ccall(_stratego_r_56);
  goto j_36;
  n_36 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto n_81;
  n_81 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(z_36);
  goto b_94;
  z_36 :
  goto x_36;
  b_94 :
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Return();
  x_36 :
  Epopd(5,3);
  OneNextSon();
  Rpush(a_37);
  goto a_94;
  a_37 :
  AllBuild();
  goto t_36;
  j_36 :
  Cpop();
  t_36 :
  Return();
  i_36 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(b_37);
  d_94 :
  Cpush(l_37);
  Ccall(_stratego_r_56);
  goto e_37;
  l_37 :
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
  Rpush(q_37);
  goto e_94;
  q_37 :
  goto n_37;
  e_94 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Return();
  n_37 :
  Epopd(5,3);
  OneNextSon();
  Rpush(r_37);
  goto d_94;
  r_37 :
  AllBuild();
  goto m_37;
  e_37 :
  Cpop();
  m_37 :
  Return();
  b_37 :
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
  Rpush(t_37);
  goto y_93;
  t_37 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(4,4);
  goto t_81;
  t_81 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto u_81;
  u_81 :
  TestFunFC(p_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto v_81;
  v_81 :
  TestFunFC(s_0,&&fail,Egetd(4,8));
  Rpush(u_37);
  goto g_94;
  u_37 :
  goto s_37;
  g_94 :
  NotNULLd(4,5);
  NotNULLd(4,7);
  Tset(App2("TCons",Egetd(4,5),Egetd(4,7)));
  Return();
  s_37 :
  Epopd(4,8);
  goto g_36;
  h_36 :
  Rpush(w_37);
  h_94 :
  Cpush(y_37);
  Ccall(_stratego_r_56);
  goto x_37;
  y_37 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_57);
  OneNextSon();
  Rpush(a_38);
  goto h_94;
  a_38 :
  AllBuild();
  goto z_37;
  x_37 :
  Cpop();
  z_37 :
  Return();
  w_37 :
  Tset(App0("TNil"));
  goto v_37;
  g_36 :
  Cpop();
  v_37 :
  Return();
  f_36 :
  MoveTop(3,1);
  goto x_81;
  x_81 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto y_81;
  y_81 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_81;
  z_81 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto a_82;
  a_82 :
  TestFunFC(p_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto b_82;
  b_82 :
  TestFunFC(p_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto c_82;
  c_82 :
  TestFunFC(p_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto d_82;
  d_82 :
  TestFunFC(s_0,&&fail,Egetd(3,13));
  Rpush(b_38);
  goto i_94;
  b_38 :
  goto e_36;
  i_94 :
  Move(1,2,3,2);
  Move(1,3,3,4);
  Move(1,4,3,6);
  Move(1,5,3,8);
  Move(1,6,3,10);
  Move(1,7,3,12);
  Return();
  e_36 :
  Epopd(3,13);
  Return();
  s_35 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  MoveTop(1,8);
  goto j_82;
  j_82 :
  TestFunFC(p_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto k_82;
  k_82 :
  TestFunFC(p_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto l_82;
  l_82 :
  TestFunFC(s_0,&&fail,Egetd(1,12));
  Rpush(d_38);
  goto j_94;
  d_38 :
  goto c_38;
  j_94 :
  Epushd(2,1);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  Rpush(e_38);
  k_94 :
  Cpush(m_38);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_38);
  goto k_94;
  n_38 :
  AllBuild();
  goto g_38;
  m_38 :
  Ccall(_stratego_r_56);
  NotNULLd(1,11);
  Tset(Egetd(1,11));
  goto r_38;
  g_38 :
  Cpop();
  r_38 :
  Return();
  e_38 :
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
  c_38 :
  Epopd(1,12);
  Return();
  n_32 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_y_57)
  _ST_subt();
ENDPROC

PROC(_stratego_z_57)
  _ST_geq();
ENDPROC

PROC(_stratego_a_58)
  _ST_add();
ENDPROC

PROC(_stratego_b_58)
  Rpush(s_38);
  a_96 :
  Epushd(0,3);
  MoveTop(0,1);
  goto s_95;
  s_95 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto t_95;
  t_95 :
  TestFunFC(w_0,&&b_39,Egetd(0,3));
  Cpush(d_39);
  Rpush(e_39);
  goto b_96;
  e_39 :
  goto c_39;
  d_39 :
  Rpush(g_39);
  goto c_96;
  g_39 :
  goto f_39;
  c_39 :
  Cpop();
  f_39 :
  goto a_39;
  b_39 :
  Rpush(a_39);
  goto c_96;
  a_39 :
  goto u_38;
  c_96 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(h_39);
  goto a_96;
  h_39 :
  Return();
  u_38 :
  goto t_38;
  b_96 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  t_38 :
  Epopd(0,3);
  Return();
  s_38 :
ENDPROC

PROC(_stratego_c_58)
  Rpush(i_39);
  n_96 :
  Cpush(s_39);
  Ccall(_stratego_r_56);
  Tset(MakeInt(0));
  goto r_39;
  s_39 :
  Epushd(0,3);
  MoveTop(0,1);
  goto f_96;
  f_96 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(z_39);
  goto o_96;
  z_39 :
  goto w_39;
  o_96 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(a_40);
  goto n_96;
  a_40 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_a_58);
  Epopd(1,1);
  Return();
  w_39 :
  Epopd(0,3);
  goto u_39;
  r_39 :
  Cpop();
  u_39 :
  Return();
  i_39 :
ENDPROC

PROC(_stratego_d_58)
  Epushd(0,6);
  MoveTop(0,1);
  goto y_96;
  y_96 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto z_96;
  z_96 :
  TestFunFC(w_0,&&h_40,Egetd(0,6));
  goto a_97;
  a_97 :
  TestFunFC(r_9,&&i_40,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Cpush(n_40);
  Rpush(q_40);
  goto b_98;
  q_40 :
  goto m_40;
  n_40 :
  Rpush(s_40);
  goto c_98;
  s_40 :
  goto r_40;
  m_40 :
  Cpop();
  r_40 :
  goto g_40;
  i_40 :
  Rpush(g_40);
  goto b_98;
  h_40 :
  goto b_97;
  b_97 :
  TestFunFC(r_9,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(g_40);
  goto c_98;
  g_40 :
  goto f_40;
  c_98 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(t_40);
  d_98 :
  Cpush(v_40);
  Ccall(_stratego_r_56);
  goto u_40;
  v_40 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_57);
  OneNextSon();
  Rpush(a_41);
  goto d_98;
  a_41 :
  AllBuild();
  goto z_40;
  u_40 :
  Cpop();
  z_40 :
  Return();
  t_40 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(b_41);
  f_98 :
  Cpush(d_41);
  Ccall(_stratego_r_56);
  goto c_41;
  d_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Call",App1("SVar",Egetd(3,1)),App0("Nil")));
  Epopd(3,1);
  OneNextSon();
  Rpush(f_41);
  goto f_98;
  f_41 :
  AllBuild();
  goto e_41;
  c_41 :
  Cpop();
  e_41 :
  Return();
  b_41 :
  MoveTop(2,2);
  Move(1,2,2,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(g_41);
  i_98 :
  Cpush(l_41);
  Ccall(_stratego_r_56);
  goto h_41;
  l_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto w_96;
  w_96 :
  TestFunFC(r_9,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(v_41);
  goto j_98;
  v_41 :
  goto s_41;
  j_98 :
  Epushd(4,2);
  Move(0,3,3,2);
  Move(4,1,3,3);
  Move(4,2,3,4);
  NotNULLd(4,1);
  NotNULLd(1,2);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(1,2),App2("TCons",Egetd(4,2),App0("TNil")))));
  Ccall(_stratego_e_58);
  Epopd(4,2);
  Return();
  s_41 :
  Epopd(3,4);
  OneNextSon();
  Rpush(w_41);
  goto i_98;
  w_41 :
  AllBuild();
  goto m_41;
  h_41 :
  Cpop();
  m_41 :
  Return();
  g_41 :
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
  f_40 :
  goto b_40;
  b_98 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  b_40 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_e_58)
  Epushd(0,5);
  Ccall(_stratego_f_58);
  MoveTop(0,1);
  goto t_98;
  t_98 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto u_98;
  u_98 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_98;
  v_98 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(z_41);
  goto o_99;
  z_41 :
  goto x_41;
  o_99 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(a_42);
  p_99 :
  Cpush(g_42);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto q_98;
  q_98 :
  TestFunFC(j_42,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto r_98;
  r_98 :
  TestFunFC(f_26,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto s_98;
  s_98 :
  TestFunFC(w_0,&&fail,Egetd(2,4));
  Rpush(i_42);
  goto r_99;
  i_42 :
  goto h_42;
  r_99 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Move(1,2,2,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  h_42 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_t_57);
  Epopd(1,3);
  goto f_42;
  g_42 :
  AllInit();
  l_42 :
  AllNextSon(&&m_42);
  Rpush(n_42);
  goto p_99;
  n_42 :
  goto l_42;
  m_42 :
  AllBuild();
  goto k_42;
  f_42 :
  Cpop();
  k_42 :
  Return();
  a_42 :
  Return();
  x_41 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_f_58)
  Epushd(0,7);
  MoveTop(0,1);
  goto l_100;
  l_100 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto m_100;
  m_100 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto n_100;
  n_100 :
  TestFunFC(s_0,&&r_42,Egetd(0,5));
  Rpush(q_42);
  goto z_101;
  r_42 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto o_100;
  o_100 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(q_42);
  goto a_102;
  q_42 :
  goto p_42;
  a_102 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(s_42);
  b_102 :
  Epushd(2,9);
  MoveTop(2,1);
  goto c_100;
  c_100 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto d_100;
  d_100 :
  TestFunFC(w_0,&&x_42,Egetd(2,2));
  goto e_100;
  e_100 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto f_100;
  f_100 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto g_100;
  g_100 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(w_42);
  goto c_102;
  x_42 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_100;
  h_100 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto i_100;
  i_100 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto j_100;
  j_100 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(w_42);
  goto d_102;
  w_42 :
  goto v_42;
  d_102 :
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
  Rpush(b_43);
  goto b_102;
  b_43 :
  OneNextSon();
  Ccall(_stratego_g_57);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto z_99;
  z_99 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto a_100;
  a_100 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto b_100;
  b_100 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(c_43);
  goto e_102;
  c_43 :
  goto a_43;
  e_102 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  a_43 :
  Epopd(3,5);
  Return();
  v_42 :
  goto u_42;
  c_102 :
  Tset(App0("Nil"));
  Return();
  u_42 :
  Epopd(2,9);
  Return();
  s_42 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  p_42 :
  goto o_42;
  z_101 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  o_42 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_g_58)
  Rpush(d_43);
  b_114 :
  Epushd(0,8);
  MoveTop(0,1);
  Cpush(f_43);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_102;
  j_102 :
  TestFunFC(j_42,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_102;
  k_102 :
  TestFunFC(f_26,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_43);
  goto d_114;
  i_43 :
  goto g_43;
  d_114 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_c_58);
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  Tset(App2("Cons",App2("TCons",Egetd(1,3),App2("TCons",Egetd(2,1),App0("TNil"))),App0("Nil")));
  Epopd(2,1);
  Return();
  g_43 :
  Epopd(1,4);
  goto e_43;
  f_43 :
  Tset(App0("Nil"));
  goto k_43;
  e_43 :
  Cpop();
  k_43 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(n_43);
  Epushd(1,3);
  Tdupl();
  Epushd(2,8);
  MoveTop(2,5);
  goto p_102;
  p_102 :
  TestFunFC(j_24,&&z_43,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto q_102;
  q_102 :
  TestFunFC(r_9,&&fail,Egetd(2,6));
  MoveArg(2,1,2,6,0);
  MoveArg(2,2,2,6,1);
  MoveArg(2,3,2,6,2);
  Rpush(y_43);
  goto g_114;
  z_43 :
  TestFunFC(r_9,&&f_44,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  MoveArg(2,4,2,5,2);
  Rpush(y_43);
  goto h_114;
  f_44 :
  TestFunFC(l_24,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  Rpush(y_43);
  goto i_114;
  y_43 :
  goto v_43;
  i_114 :
  NotNULLd(2,6);
  Tset(App2("Cons",Egetd(2,6),App0("Nil")));
  Return();
  v_43 :
  goto u_43;
  h_114 :
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Return();
  u_43 :
  goto p_43;
  g_114 :
  NotNULLd(2,1);
  Tset(App2("Cons",Egetd(2,1),App0("Nil")));
  Return();
  p_43 :
  MoveTop(2,8);
  Move(1,1,2,8);
  Epopd(2,8);
  Tpop();
  Cpush(i_44);
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
  Rpush(j_44);
  goto b_114;
  j_44 :
  AllBuild();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(k_44);
  goto b_114;
  k_44 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto g_103;
  g_103 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto h_103;
  h_103 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto i_103;
  i_103 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(m_44);
  goto n_114;
  m_44 :
  goto l_44;
  n_114 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(n_44);
  o_114 :
  Cpush(s_44);
  Ccall(_stratego_r_56);
  goto o_44;
  s_44 :
  Ccontinue(t_44);
  Epushd(3,3);
  MoveTop(3,1);
  goto f_103;
  f_103 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_44);
  goto p_114;
  w_44 :
  goto v_44;
  p_114 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(x_44);
  q_114 :
  Cpush(z_44);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto z_102;
  z_102 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto a_103;
  a_103 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto b_103;
  b_103 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto c_103;
  c_103 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  goto d_103;
  d_103 :
  TestFunFC(p_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto e_103;
  e_103 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(b_45);
  goto s_114;
  b_45 :
  goto a_45;
  s_114 :
  Move(4,4,4,9);
  Return();
  a_45 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto y_44;
  z_44 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_45);
  goto q_114;
  m_45 :
  AllBuild();
  goto e_45;
  y_44 :
  Cpop();
  e_45 :
  Return();
  x_44 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(t_45);
  goto o_114;
  t_45 :
  Return();
  v_44 :
  Epopd(3,3);
  goto o_44;
  t_44 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_45);
  goto o_114;
  x_45 :
  AllBuild();
  goto w_45;
  o_44 :
  Cpop();
  w_45 :
  Return();
  n_44 :
  Return();
  l_44 :
  Epopd(2,7);
  AllBuild();
  goto h_44;
  i_44 :
  Ccontinue(y_45);
  TestFunTop(r_9);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(i_46);
  goto b_114;
  i_46 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto x_103;
  x_103 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto y_103;
  y_103 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto z_103;
  z_103 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(n_46);
  goto w_114;
  n_46 :
  goto j_46;
  w_114 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(r_46);
  x_114 :
  Cpush(t_46);
  Ccall(_stratego_r_56);
  goto s_46;
  t_46 :
  Ccontinue(y_46);
  Epushd(3,3);
  MoveTop(3,1);
  goto w_103;
  w_103 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(h_47);
  goto y_114;
  h_47 :
  goto g_47;
  y_114 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(v_47);
  z_114 :
  Cpush(b_48);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto q_103;
  q_103 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto r_103;
  r_103 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto s_103;
  s_103 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto t_103;
  t_103 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  goto u_103;
  u_103 :
  TestFunFC(p_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto v_103;
  v_103 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(w_48);
  goto b_115;
  w_48 :
  goto c_48;
  b_115 :
  Move(4,4,4,9);
  Return();
  c_48 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto a_48;
  b_48 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_48);
  goto z_114;
  y_48 :
  AllBuild();
  goto x_48;
  a_48 :
  Cpop();
  x_48 :
  Return();
  v_47 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(z_48);
  goto x_114;
  z_48 :
  Return();
  g_47 :
  Epopd(3,3);
  goto s_46;
  y_46 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_49);
  goto x_114;
  g_49 :
  AllBuild();
  goto f_49;
  s_46 :
  Cpop();
  f_49 :
  Return();
  r_46 :
  Return();
  j_46 :
  Epopd(2,7);
  AllBuild();
  goto h_44;
  y_45 :
  TestFunTop(l_24);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(o_49);
  goto b_114;
  o_49 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto o_104;
  o_104 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_104;
  p_104 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto q_104;
  q_104 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(x_49);
  goto f_115;
  x_49 :
  goto p_49;
  f_115 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(a_50);
  g_115 :
  Cpush(k_50);
  Ccall(_stratego_r_56);
  goto b_50;
  k_50 :
  Ccontinue(l_50);
  Epushd(3,3);
  MoveTop(3,1);
  goto n_104;
  n_104 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(n_50);
  goto h_115;
  n_50 :
  goto m_50;
  h_115 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(o_50);
  i_115 :
  Cpush(s_50);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto h_104;
  h_104 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto i_104;
  i_104 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto j_104;
  j_104 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto k_104;
  k_104 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  goto l_104;
  l_104 :
  TestFunFC(p_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto m_104;
  m_104 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(u_50);
  goto k_115;
  u_50 :
  goto t_50;
  k_115 :
  Move(4,4,4,9);
  Return();
  t_50 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto r_50;
  s_50 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_50);
  goto i_115;
  w_50 :
  AllBuild();
  goto v_50;
  r_50 :
  Cpop();
  v_50 :
  Return();
  o_50 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(x_50);
  goto g_115;
  x_50 :
  Return();
  m_50 :
  Epopd(3,3);
  goto b_50;
  l_50 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_50);
  goto g_115;
  z_50 :
  AllBuild();
  goto y_50;
  b_50 :
  Cpop();
  y_50 :
  Return();
  a_50 :
  Return();
  p_49 :
  Epopd(2,7);
  AllBuild();
  goto i_49;
  h_44 :
  Cpop();
  i_49 :
  MoveTop(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto t_104;
  t_104 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto u_104;
  u_104 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_104;
  v_104 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(b_51);
  goto m_115;
  b_51 :
  goto a_51;
  m_115 :
  Move(1,3,2,4);
  Return();
  a_51 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(c_51);
  n_115 :
  Cpush(p_51);
  Ccall(_stratego_r_56);
  Tset(App0("Nil"));
  goto o_51;
  p_51 :
  Epushd(2,3);
  MoveTop(2,1);
  goto h_105;
  h_105 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(v_51);
  goto o_115;
  v_51 :
  goto u_51;
  o_115 :
  Epushd(3,6);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(w_51);
  goto n_115;
  w_51 :
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(3,2);
  goto e_105;
  e_105 :
  TestFunFC(p_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto f_105;
  f_105 :
  TestFunFC(p_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto g_105;
  g_105 :
  TestFunFC(s_0,&&fail,Egetd(3,6));
  Rpush(e_52);
  goto r_115;
  e_52 :
  goto b_52;
  r_115 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(f_52);
  s_115 :
  Cpush(h_52);
  Ccall(_stratego_r_56);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  goto g_52;
  h_52 :
  Ccontinue(i_52);
  Epushd(4,3);
  MoveTop(4,1);
  goto d_105;
  d_105 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(k_52);
  goto t_115;
  k_52 :
  goto j_52;
  t_115 :
  Tdupl();
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(l_52);
  u_115 :
  Cpush(n_52);
  Epushd(5,3);
  MoveTop(5,1);
  goto c_105;
  c_105 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(p_52);
  goto v_115;
  p_52 :
  goto o_52;
  v_115 :
  Move(4,2,5,2);
  Return();
  o_52 :
  Epopd(5,3);
  goto m_52;
  n_52 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_52);
  goto u_115;
  t_52 :
  AllBuild();
  goto q_52;
  m_52 :
  Cpop();
  q_52 :
  Return();
  l_52 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(z_52);
  goto s_115;
  z_52 :
  Return();
  j_52 :
  Epopd(4,3);
  goto g_52;
  i_52 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_53);
  goto s_115;
  b_53 :
  AllBuild();
  goto a_53;
  g_52 :
  Cpop();
  a_53 :
  Return();
  f_52 :
  Return();
  b_52 :
  Epopd(3,6);
  Return();
  u_51 :
  Epopd(2,3);
  goto q_51;
  o_51 :
  Cpop();
  q_51 :
  Return();
  c_51 :
  Epopd(1,3);
  goto m_43;
  n_43 :
  Epushd(1,2);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  _ST_explode_term();
  MoveTop(2,1);
  goto k_105;
  k_105 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_105;
  l_105 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto m_105;
  m_105 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(e_53);
  goto x_115;
  e_53 :
  goto d_53;
  x_115 :
  Move(1,2,2,4);
  Return();
  d_53 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(f_53);
  y_115 :
  Cpush(h_53);
  Ccall(_stratego_r_56);
  Tset(App0("Nil"));
  goto g_53;
  h_53 :
  Epushd(2,3);
  MoveTop(2,1);
  goto y_105;
  y_105 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(k_53);
  goto z_115;
  k_53 :
  goto j_53;
  z_115 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(l_53);
  goto b_114;
  l_53 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(m_53);
  goto y_115;
  m_53 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto v_105;
  v_105 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_105;
  w_105 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto x_105;
  x_105 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(o_53);
  goto c_116;
  o_53 :
  goto n_53;
  c_116 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(p_53);
  d_116 :
  Cpush(r_53);
  Ccall(_stratego_r_56);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto q_53;
  r_53 :
  Ccontinue(s_53);
  Epushd(4,3);
  MoveTop(4,1);
  goto u_105;
  u_105 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(u_53);
  goto e_116;
  u_53 :
  goto t_53;
  e_116 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(v_53);
  f_116 :
  Cpush(x_53);
  Epushd(5,3);
  MoveTop(5,1);
  goto t_105;
  t_105 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(z_53);
  goto g_116;
  z_53 :
  goto y_53;
  g_116 :
  Move(4,2,5,2);
  Return();
  y_53 :
  Epopd(5,3);
  goto w_53;
  x_53 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_54);
  goto f_116;
  b_54 :
  AllBuild();
  goto a_54;
  w_53 :
  Cpop();
  a_54 :
  Return();
  v_53 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(c_54);
  goto d_116;
  c_54 :
  Return();
  t_53 :
  Epopd(4,3);
  goto q_53;
  s_53 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_54);
  goto d_116;
  e_54 :
  AllBuild();
  goto d_54;
  q_53 :
  Cpop();
  d_54 :
  Return();
  p_53 :
  Return();
  n_53 :
  Epopd(3,7);
  Return();
  j_53 :
  Epopd(2,3);
  goto i_53;
  g_53 :
  Cpop();
  i_53 :
  Return();
  f_53 :
  Epopd(1,2);
  goto c_53;
  m_43 :
  Cpop();
  c_53 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  MoveTop(0,4);
  goto f_106;
  f_106 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto g_106;
  g_106 :
  TestFunFC(p_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto h_106;
  h_106 :
  TestFunFC(s_0,&&fail,Egetd(0,8));
  Rpush(g_54);
  goto i_116;
  g_54 :
  goto f_54;
  i_116 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(h_54);
  j_116 :
  Cpush(j_54);
  Ccall(_stratego_r_56);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  goto i_54;
  j_54 :
  Ccontinue(k_54);
  Epushd(1,3);
  MoveTop(1,1);
  goto e_106;
  e_106 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(m_54);
  goto k_116;
  m_54 :
  goto l_54;
  k_116 :
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(n_54);
  l_116 :
  Cpush(p_54);
  Epushd(2,3);
  MoveTop(2,1);
  goto d_106;
  d_106 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(r_54);
  goto m_116;
  r_54 :
  goto q_54;
  m_116 :
  Move(1,2,2,2);
  Return();
  q_54 :
  Epopd(2,3);
  goto o_54;
  p_54 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_54);
  goto l_116;
  t_54 :
  AllBuild();
  goto s_54;
  o_54 :
  Cpop();
  s_54 :
  Return();
  n_54 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(u_54);
  goto j_116;
  u_54 :
  Return();
  l_54 :
  Epopd(1,3);
  goto i_54;
  k_54 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_54);
  goto j_116;
  w_54 :
  AllBuild();
  goto v_54;
  i_54 :
  Cpop();
  v_54 :
  Return();
  h_54 :
  Return();
  f_54 :
  Epopd(0,8);
  Return();
  d_43 :
ENDPROC

PROC(_stratego_h_58)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_w_56);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_i_58)
  Rpush(x_54);
  z_116 :
  Cpush(z_54);
  Ccall(_stratego_r_56);
  goto y_54;
  z_54 :
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
  Rpush(b_55);
  goto z_116;
  b_55 :
  AllBuild();
  goto a_55;
  y_54 :
  Cpop();
  a_55 :
  Return();
  x_54 :
ENDPROC

PROC(_stratego_l_58)
  Rpush(c_55);
  j_117 :
  Cpush(e_55);
  Ccall(_stratego_m_58);
  goto d_55;
  e_55 :
  goto f_55;
  d_55 :
  Cpop();
  f_55 :
  Cpush(h_55);
  g_55 :
  Cpush(j_55);
  Ccall(_stratego_s_58);
  goto i_55;
  j_55 :
  Ccontinue(k_55);
  Cpush(m_55);
  Ccall(_stratego_t_58);
  goto l_55;
  m_55 :
  Ccontinue(n_55);
  Epushd(0,4);
  MoveTop(0,1);
  goto b_117;
  b_117 :
  TestFunFC(q_55,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto c_117;
  c_117 :
  TestFunFC(r_55,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_55);
  goto l_117;
  p_55 :
  goto o_55;
  l_117 :
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,4)),Egetd(0,3)));
  Return();
  o_55 :
  Epopd(0,4);
  goto l_55;
  n_55 :
  Ccall(_stratego_u_58);
  goto s_55;
  l_55 :
  Cpop();
  s_55 :
  goto i_55;
  k_55 :
  Ccall(_stratego_v_58);
  goto t_55;
  i_55 :
  Cpop();
  t_55 :
  Tduplinv();
  goto g_55;
  h_55 :
  AllInit();
  u_55 :
  AllNextSon(&&v_55);
  Rpush(w_55);
  goto j_117;
  w_55 :
  goto u_55;
  v_55 :
  AllBuild();
  Return();
  c_55 :
ENDPROC

PROC(_stratego_m_58)
  Rpush(x_55);
  m_117 :
  Cpush(a_56);
  Cpush(c_56);
  Ccall(_stratego_n_58);
  Rpush(d_56);
  goto m_117;
  d_56 :
  goto b_56;
  c_56 :
  Ccontinue(e_56);
  TestFunTop(o_12);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_56);
  goto m_117;
  f_56 :
  AllBuild();
  goto b_56;
  e_56 :
  Ccall(_stratego_o_58);
  goto g_56;
  b_56 :
  Cpop();
  g_56 :
  goto y_55;
  a_56 :
  goto h_56;
  y_55 :
  Cpop();
  h_56 :
  Return();
  x_55 :
ENDPROC

PROC(_stratego_n_58)
  Epushd(0,5);
  MoveTop(0,1);
  goto z_117;
  z_117 :
  TestFunFC(k_56,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto a_118;
  a_118 :
  TestFunFC(p_18,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(j_56);
  goto g_119;
  j_56 :
  goto i_56;
  g_119 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(l_56);
  i_119 :
  Cpush(n_56);
  Epushd(2,5);
  MoveTop(2,1);
  goto q_117;
  q_117 :
  TestFunFC(j_58,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto r_117;
  r_117 :
  TestFunFC(m_12,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(p_56);
  goto j_119;
  p_56 :
  goto o_56;
  j_119 :
  Move(1,4,2,3);
  Move(1,2,2,4);
  Move(1,3,2,5);
  NotNULLd(1,4);
  Tset(App1("Var",Egetd(1,4)));
  Return();
  o_56 :
  Epopd(2,5);
  goto m_56;
  n_56 :
  IsAppl();
  OneInit();
  w_58 :
  OneNextSon();
  Cpush(w_58);
  Rpush(y_58);
  goto i_119;
  y_58 :
  Cpop();
  OneBuild();
  goto k_58;
  m_56 :
  Cpop();
  k_58 :
  Return();
  l_56 :
  MoveTop(1,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(n_59);
  l_119 :
  Cpush(p_59);
  Epushd(2,7);
  MoveTop(2,1);
  goto u_117;
  u_117 :
  TestFunFC(j_58,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto v_117;
  v_117 :
  TestFunFC(m_12,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto w_117;
  w_117 :
  TestFunFC(j_42,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto x_117;
  x_117 :
  TestFunFC(w_0,&&fail,Egetd(2,7));
  Rpush(w_59);
  goto m_119;
  w_59 :
  goto q_59;
  m_119 :
  Move(1,4,2,3);
  Move(1,6,2,4);
  Move(1,7,2,6);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  q_59 :
  Epopd(2,7);
  goto o_59;
  p_59 :
  IsAppl();
  OneInit();
  z_59 :
  OneNextSon();
  Cpush(z_59);
  Rpush(g_60);
  goto l_119;
  g_60 :
  Cpop();
  OneBuild();
  goto x_59;
  o_59 :
  Cpop();
  x_59 :
  Return();
  n_59 :
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
  i_56 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_58)
  Epushd(0,5);
  MoveTop(0,1);
  goto q_119;
  q_119 :
  TestFunFC(k_56,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto r_119;
  r_119 :
  TestFunFC(p_18,&&t_60,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(s_60);
  goto d_120;
  t_60 :
  TestFunFC(v_60,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(s_60);
  goto e_120;
  s_60 :
  goto r_60;
  e_120 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,5),App2("Cons",Egetd(0,4),App0("Nil"))))));
  Return();
  r_60 :
  goto j_60;
  d_120 :
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
  j_60 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_58)
  Cpush(w_60);
  Tdupl();
  Rpush(x_60);
  m_120 :
  Epushd(0,4);
  MoveTop(0,2);
  goto h_120;
  h_120 :
  TestFunFC(j_58,&&f_61,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  Rpush(e_61);
  goto n_120;
  f_61 :
  TestFunFC(r_55,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(e_61);
  goto o_120;
  e_61 :
  goto a_61;
  o_120 :
  Return();
  a_61 :
  goto z_60;
  n_120 :
  Return();
  z_60 :
  AllInit();
  g_61 :
  AllNextSon(&&i_61);
  Rpush(k_61);
  goto m_120;
  k_61 :
  goto g_61;
  i_61 :
  AllBuild();
  Epopd(0,4);
  Return();
  x_60 :
  Cpop();
  Crestore();
  Cjump();
  w_60 :
ENDPROC

PROC(_stratego_q_58)
  Cpush(p_61);
  Tdupl();
  Rpush(r_61);
  v_120 :
  Cpush(u_61);
  Epushd(0,4);
  MoveTop(0,1);
  goto q_120;
  q_120 :
  TestFunFC(j_58,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(y_61);
  goto w_120;
  y_61 :
  goto w_61;
  w_120 :
  Return();
  w_61 :
  Epopd(0,4);
  goto t_61;
  u_61 :
  Ccall(_stratego_r_58);
  goto z_61;
  t_61 :
  Cpop();
  z_61 :
  AllInit();
  a_62 :
  AllNextSon(&&t_62);
  Rpush(v_62);
  goto v_120;
  v_62 :
  goto a_62;
  t_62 :
  AllBuild();
  Return();
  r_61 :
  Cpop();
  Crestore();
  Cjump();
  p_61 :
ENDPROC

PROC(_stratego_r_58)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_120;
  y_120 :
  TestFunFC(b_63,&&fail,Egetd(0,1));
  Rpush(a_63);
  goto a_121;
  a_63 :
  goto w_62;
  a_121 :
  Return();
  w_62 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_58)
  Epushd(0,6);
  MoveTop(0,3);
  goto n_121;
  n_121 :
  TestFunFC(d_64,&&c_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto o_121;
  o_121 :
  TestFunFC(w_0,&&e_64,Egetd(0,4));
  Rpush(q_63);
  goto r_122;
  e_64 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(q_63);
  goto s_122;
  c_64 :
  TestFunFC(k_64,&&i_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto p_121;
  p_121 :
  TestFunFC(w_0,&&m_64,Egetd(0,4));
  Rpush(q_63);
  goto t_122;
  m_64 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(q_63);
  goto u_122;
  i_64 :
  TestFunFC(o_64,&&n_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto q_121;
  q_121 :
  TestFunFC(w_0,&&p_64,Egetd(0,4));
  Rpush(q_63);
  goto v_122;
  p_64 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(q_63);
  goto w_122;
  n_64 :
  TestFunFC(r_64,&&q_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto r_121;
  r_121 :
  TestFunFC(w_0,&&w_64,Egetd(0,4));
  Rpush(q_63);
  goto x_122;
  w_64 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(q_63);
  goto y_122;
  q_64 :
  TestFunFC(h_65,&&b_65,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(q_63);
  goto z_122;
  b_65 :
  TestFunFC(k_65,&&i_65,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(q_63);
  goto a_123;
  i_65 :
  TestFunFC(m_65,&&l_65,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(q_63);
  goto b_123;
  l_65 :
  TestFunFC(n_65,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(q_63);
  goto c_123;
  q_63 :
  goto p_63;
  c_123 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  p_63 :
  goto o_63;
  b_123 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  o_63 :
  goto n_63;
  a_123 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  n_63 :
  goto m_63;
  z_122 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  m_63 :
  goto j_63;
  y_122 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  j_63 :
  goto i_63;
  x_122 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  i_63 :
  goto h_63;
  w_122 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  h_63 :
  goto g_63;
  v_122 :
  Tset(App0("Fail"));
  Return();
  g_63 :
  goto f_63;
  u_122 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  f_63 :
  goto e_63;
  t_122 :
  Tset(App0("Fail"));
  Return();
  e_63 :
  goto d_63;
  s_122 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  d_63 :
  goto c_63;
  r_122 :
  Tset(App0("Id"));
  Return();
  c_63 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_t_58)
  Epushd(0,2);
  MoveTop(0,1);
  goto i_123;
  i_123 :
  TestFunFC(q_55,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(p_65);
  goto u_123;
  p_65 :
  goto o_65;
  u_123 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(q_65);
  v_123 :
  Cpush(c_66);
  Epushd(2,4);
  MoveTop(2,1);
  goto f_123;
  f_123 :
  TestFunFC(r_55,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto g_123;
  g_123 :
  TestFunFC(q_55,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(e_66);
  goto w_123;
  e_66 :
  goto d_66;
  w_123 :
  Move(1,2,2,3);
  Move(1,1,2,4);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  d_66 :
  Epopd(2,4);
  goto b_66;
  c_66 :
  IsAppl();
  OneInit();
  g_66 :
  OneNextSon();
  Cpush(g_66);
  Rpush(i_66);
  goto v_123;
  i_66 :
  Cpop();
  OneBuild();
  goto f_66;
  b_66 :
  Cpop();
  f_66 :
  Return();
  q_65 :
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(App1("Build",Egetd(1,3)));
  Epopd(1,3);
  Return();
  o_65 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_u_58)
  Epushd(0,2);
  MoveTop(0,1);
  goto d_124;
  d_124 :
  TestFunFC(q_55,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(k_66);
  goto q_124;
  k_66 :
  goto j_66;
  q_124 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(r_66);
  s_124 :
  Cpush(y_66);
  Epushd(2,3);
  MoveTop(2,1);
  goto b_124;
  b_124 :
  TestFunFC(r_55,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(a_67);
  goto t_124;
  a_67 :
  goto z_66;
  t_124 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  z_66 :
  Epopd(2,3);
  goto x_66;
  y_66 :
  IsAppl();
  OneInit();
  h_67 :
  OneNextSon();
  Cpush(h_67);
  Rpush(k_67);
  goto s_124;
  k_67 :
  Cpop();
  OneBuild();
  goto e_67;
  x_66 :
  Cpop();
  e_67 :
  Return();
  r_66 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",Egetd(1,2),Egetd(1,3),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  j_66 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_58)
  Epushd(0,3);
  MoveTop(0,1);
  goto g_125;
  g_125 :
  TestFunFC(c_68,&&b_68,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(x_67);
  goto g_126;
  b_68 :
  TestFunFC(q_55,&&e_68,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(x_67);
  goto l_126;
  e_68 :
  TestFunFC(m_68,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(x_67);
  goto q_126;
  x_67 :
  goto w_67;
  q_126 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Prim",ATmakeString("_ST_explode_term")),App2("Seq",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,2),App2("Cons",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,3),App2("Cons",App2("Cong",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Prim",ATmakeString("_ST_mkterm")))));
  Return();
  w_67 :
  goto r_67;
  l_126 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(n_68);
  n_126 :
  Cpush(q_68);
  Epushd(2,3);
  MoveTop(2,1);
  goto e_125;
  e_125 :
  TestFunFC(w_68,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(u_68);
  goto o_126;
  u_68 :
  goto s_68;
  o_126 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  s_68 :
  Epopd(2,3);
  goto o_68;
  q_68 :
  IsAppl();
  OneInit();
  y_68 :
  OneNextSon();
  Cpush(y_68);
  Rpush(b_69);
  goto n_126;
  b_69 :
  Cpop();
  OneBuild();
  goto x_68;
  o_68 :
  Cpop();
  x_68 :
  Return();
  n_68 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",App1("Prim",ATmakeString("_ST_mkterm")),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  r_67 :
  goto q_67;
  g_126 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(f_69);
  i_126 :
  Cpush(h_69);
  Epushd(2,3);
  MoveTop(2,1);
  goto a_125;
  a_125 :
  TestFunFC(w_68,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_69);
  goto j_126;
  o_69 :
  goto m_69;
  j_126 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  m_69 :
  Epopd(2,3);
  goto g_69;
  h_69 :
  IsAppl();
  OneInit();
  w_69 :
  OneNextSon();
  Cpush(w_69);
  Rpush(b_70);
  goto i_126;
  b_70 :
  Cpop();
  OneBuild();
  goto t_69;
  g_69 :
  Cpop();
  t_69 :
  Return();
  f_69 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App1("Match",Egetd(1,4)),App1("Where",App3("BAM",App1("Prim",ATmakeString("_ST_explode_term")),App1("Var",Egetd(1,1)),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))))))));
  Epopd(1,4);
  Return();
  q_67 :
  Epopd(0,3);
ENDPROC
