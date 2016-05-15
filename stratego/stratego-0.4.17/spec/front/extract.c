#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,q_68);
VARDECL(AFun,a_68);
VARDECL(AFun,x_67);
VARDECL(AFun,i_65);
VARDECL(AFun,g_65);
VARDECL(AFun,z_64);
VARDECL(AFun,t_64);
VARDECL(AFun,m_64);
VARDECL(AFun,j_64);
VARDECL(AFun,e_64);
VARDECL(AFun,b_63);
VARDECL(AFun,w_60);
VARDECL(AFun,u_58);
VARDECL(AFun,k_56);
VARDECL(AFun,r_55);
VARDECL(AFun,q_55);
VARDECL(AFun,p_42);
VARDECL(AFun,z_29);
VARDECL(AFun,h_26);
VARDECL(AFun,s_24);
VARDECL(AFun,q_24);
VARDECL(AFun,t_18);
VARDECL(AFun,s_18);
VARDECL(AFun,o_12);
VARDECL(AFun,m_12);
VARDECL(AFun,u_11);
VARDECL(AFun,t_11);
VARDECL(AFun,r_11);
VARDECL(AFun,h_11);
VARDECL(AFun,f_11);
VARDECL(AFun,t_9);
VARDECL(AFun,j_9);
VARDECL(AFun,c_9);
VARDECL(AFun,a_9);
VARDECL(AFun,z_8);
VARDECL(AFun,y_8);
VARDECL(AFun,i_8);
VARDECL(AFun,a_8);
VARDECL(AFun,n_7);
VARDECL(AFun,c_7);
VARDECL(AFun,p_6);
VARDECL(AFun,f_6);
VARDECL(AFun,x_5);
VARDECL(AFun,u_5);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_m_56);
PROCDECL(_stratego_n_56);
PROCDECL(_stratego_o_56);
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
PROCDECL(_stratego_j_58);
PROCDECL(_stratego_k_58);
PROCDECL(_stratego_l_58);
PROCDECL(_stratego_m_58);
PROCDECL(_stratego_n_58);
PROCDECL(_stratego_o_58);
PROCDECL(_stratego_p_58);
PROCDECL(_stratego_q_58);
PROCDECL(_stratego_r_58);

PROC(_stratego_init_afuns)
  MOVE(q_68,ATmakeAFun("Explode",2,0));
  MOVE(a_68,ATmakeAFun("ExplodeCong",2,0));
  MOVE(x_67,ATmakeAFun("Match",1,0));
  MOVE(i_65,ATmakeAFun("BAM",3,0));
  MOVE(g_65,ATmakeAFun("AM",2,0));
  MOVE(z_64,ATmakeAFun("MA",2,0));
  MOVE(t_64,ATmakeAFun("BA",2,0));
  MOVE(m_64,ATmakeAFun("LChoices",1,0));
  MOVE(j_64,ATmakeAFun("Choices",1,0));
  MOVE(e_64,ATmakeAFun("Seqs",1,0));
  MOVE(b_63,ATmakeAFun("Wld",0,0));
  MOVE(w_60,ATmakeAFun("StratRule",3,0));
  MOVE(u_58,ATmakeAFun("Con",3,0));
  MOVE(k_56,ATmakeAFun("SRule",1,0));
  MOVE(r_55,ATmakeAFun("App",2,0));
  MOVE(q_55,ATmakeAFun("Build",1,0));
  MOVE(p_42,ATmakeAFun("Call",2,0));
  MOVE(z_29,ATmakeAFun("Mod",2,0));
  MOVE(h_26,ATmakeAFun("SVar",1,0));
  MOVE(s_24,ATmakeAFun("Rec",2,0));
  MOVE(q_24,ATmakeAFun("Let",2,0));
  MOVE(t_18,ATmakeAFun("Rule",3,0));
  MOVE(s_18,ATmakeAFun("LRule",1,0));
  MOVE(o_12,ATmakeAFun("Scope",2,0));
  MOVE(m_12,ATmakeAFun("Var",1,0));
  MOVE(u_11,ATmakeAFun("FunType",2,0));
  MOVE(t_11,ATmakeAFun("ConstType",1,0));
  MOVE(r_11,ATmakeAFun("OpDecl",2,0));
  MOVE(h_11,ATmakeAFun("Operations",1,0));
  MOVE(f_11,ATmakeAFun("Sorts",1,0));
  MOVE(t_9,ATmakeAFun("SDef",3,0));
  MOVE(j_9,ATmakeAFun("RDef",3,0));
  MOVE(c_9,ATmakeAFun("Strategies",1,0));
  MOVE(a_9,ATmakeAFun("Rules",1,0));
  MOVE(z_8,ATmakeAFun("Signature",1,0));
  MOVE(y_8,ATmakeAFun("Specification",1,0));
  MOVE(i_8,ATmakeAFun("Runtime",1,0));
  MOVE(a_8,ATmakeAFun("Silent",0,0));
  MOVE(n_7,ATmakeAFun("Binary",0,0));
  MOVE(c_7,ATmakeAFun("Output",1,0));
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
  Ccall(_stratego_m_56);
ENDPROC

PROC(_stratego_m_56)
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
  Ccall(_stratego_n_56);
  goto f_0;
  g_0 :
  Ccall(_stratego_o_56);
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
  Ccall(_stratego_r_56);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_w_56);
  Tdupl();
  Ccall(_stratego_y_56);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_57);
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_y_56);
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
  Ccall(_stratego_z_56);
  Ccall(_stratego_c_57);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_d_57);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_n_56)
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

PROC(_stratego_o_56)
  Epushd(0,5);
  MoveTop(0,3);
  goto x_10;
  x_10 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_10;
  y_10 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto d_16;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto g_16;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto j_16;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto m_16;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto p_16;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto s_16;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto w_16;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto h_17;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto n_17;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto r_17;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto a_18;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto l_18;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto u_18;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto g_19;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto j_19;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto d_16;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto g_16;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto j_16;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto m_16;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto p_16;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto a_18;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto l_18;
  r_3 :
  goto t_2;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto u_18;
  t_3 :
  goto t_2;
  s_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto g_19;
  v_3 :
  goto t_2;
  u_3 :
  Rpush(b_4);
  goto j_19;
  b_4 :
  goto w_3;
  t_2 :
  Cpop();
  w_3 :
  goto m_1;
  m_1 :
  goto l_1;
  j_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_10;
  v_10 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_4);
  goto k_19;
  d_4 :
  goto c_4;
  k_19 :
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
  g_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_10;
  l_10 :
  TestStr(1,1,"-h",&&fail);
  Rpush(g_4);
  goto h_19;
  g_4 :
  goto e_4;
  h_19 :
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
  u_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_10;
  e_10 :
  TestStr(1,1,"--help",&&fail);
  Rpush(i_4);
  goto e_19;
  i_4 :
  goto h_4;
  e_19 :
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
  l_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_10;
  b_10 :
  TestStr(1,1,"-s",&&fail);
  Rpush(l_4);
  goto m_18;
  l_4 :
  goto j_4;
  m_18 :
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
  a_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_9;
  y_9 :
  TestStr(1,1,"-b",&&fail);
  Rpush(o_4);
  goto j_18;
  o_4 :
  goto n_4;
  j_18 :
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
  r_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_9;
  u_9 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto s_17;
  t_4 :
  goto s_4;
  s_17 :
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
  n_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_9;
  q_9 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto o_17;
  v_4 :
  goto u_4;
  o_17 :
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
  h_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_9;
  m_9 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto i_17;
  x_4 :
  goto w_4;
  i_17 :
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
  w_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_9;
  b_9 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto x_16;
  z_4 :
  goto y_4;
  x_16 :
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
  s_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_8;
  x_8 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_5);
  goto t_16;
  b_5 :
  goto a_5;
  t_16 :
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
  p_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_7;
  q_7 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_5);
  goto q_16;
  d_5 :
  goto c_5;
  q_16 :
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
  m_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_6;
  u_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_5);
  goto n_16;
  f_5 :
  goto e_5;
  n_16 :
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
  j_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_6;
  r_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_5);
  goto k_16;
  h_5 :
  goto g_5;
  k_16 :
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
  g_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_6;
  d_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_5);
  goto h_16;
  j_5 :
  goto i_5;
  h_16 :
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
  d_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_6;
  a_6 :
  TestStr(1,1,"-S",&&fail);
  Rpush(l_5);
  goto e_16;
  l_5 :
  goto k_5;
  e_16 :
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

PROC(_stratego_r_56)
  Tdupl();
  m_5 :
  TestFunTop(a_0);
  Cpush(n_5);
  Arg(0);
  Cpush(q_5);
  Ccall(_stratego_s_56);
  goto p_5;
  q_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto p_19;
  p_19 :
  TestFunFC(u_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_5);
  goto t_19;
  t_5 :
  goto s_5;
  t_19 :
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
  Ccall(_stratego_t_56);
ENDPROC

PROC(_stratego_s_56)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_19;
  v_19 :
  TestFunFC(x_5,&&fail,Egetd(0,1));
  Rpush(w_5);
  goto x_19;
  w_5 :
  goto v_5;
  x_19 :
  Return();
  v_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_56)
  Epushd(0,1);
  Tdupl();
  Rpush(y_5);
  g_20 :
  Cpush(b_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_19;
  z_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_20;
  a_20 :
  TestFunFC(f_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_6);
  goto h_20;
  e_6 :
  goto c_6;
  h_20 :
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
  goto g_20;
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
  Ccall(_stratego_u_56);
  Tset(MakeInt(1));
  Ccall(_stratego_v_56);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_56)
  _ST_printnl();
ENDPROC

PROC(_stratego_v_56)
  _ST_exit();
ENDPROC

PROC(_stratego_w_56)
  Epushd(0,3);
  Tdupl();
  Cpush(j_6);
  Rpush(k_6);
  b_21 :
  Cpush(m_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_20;
  j_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_20;
  k_20 :
  TestFunFC(p_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_6);
  goto c_21;
  o_6 :
  goto n_6;
  c_21 :
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
  goto b_21;
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
  Ccall(_stratego_x_56);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_x_56)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_y_56)
  _ST_dtime();
ENDPROC

PROC(_stratego_z_56)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(w_6);
  Rpush(x_6);
  g_22 :
  Cpush(z_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_21;
  i_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_21;
  j_21 :
  TestFunFC(c_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_7);
  goto h_22;
  b_7 :
  goto a_7;
  h_22 :
  Move(0,1,1,3);
  Return();
  a_7 :
  Epopd(1,4);
  goto y_6;
  z_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_7);
  goto g_22;
  e_7 :
  AllBuild();
  goto d_7;
  y_6 :
  Cpop();
  d_7 :
  Return();
  x_6 :
  goto v_6;
  w_6 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto f_7;
  v_6 :
  Cpop();
  f_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_57);
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
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  Cpush(h_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(i_7);
  m_22 :
  Cpush(k_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto p_21;
  p_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_21;
  q_21 :
  TestFunFC(n_7,&&fail,Egetd(1,2));
  Rpush(m_7);
  goto n_22;
  m_7 :
  goto l_7;
  n_22 :
  Return();
  l_7 :
  Epopd(1,3);
  goto j_7;
  k_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_7);
  goto m_22;
  p_7 :
  AllBuild();
  goto o_7;
  j_7 :
  Cpop();
  o_7 :
  Return();
  i_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_57);
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  goto g_7;
  h_7 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_57);
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  goto r_7;
  g_7 :
  Cpop();
  r_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_57)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_b_57)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_c_57)
  Epushd(0,2);
  Tdupl();
  Cpush(t_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(u_7);
  Tdupl();
  Rpush(v_7);
  x_23 :
  Cpush(x_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto u_22;
  u_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_22;
  v_22 :
  TestFunFC(a_8,&&fail,Egetd(1,2));
  Rpush(z_7);
  goto y_23;
  z_7 :
  goto y_7;
  y_23 :
  Return();
  y_7 :
  Epopd(1,3);
  goto w_7;
  x_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_8);
  goto x_23;
  c_8 :
  AllBuild();
  goto b_8;
  w_7 :
  Cpop();
  b_8 :
  Return();
  v_7 :
  Cpop();
  Crestore();
  Cjump();
  u_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(d_8);
  b_24 :
  Cpush(f_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_22;
  x_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_22;
  y_22 :
  TestFunFC(i_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_8);
  goto c_24;
  h_8 :
  goto g_8;
  c_24 :
  Move(0,2,1,3);
  Return();
  g_8 :
  Epopd(1,4);
  goto e_8;
  f_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_8);
  goto b_24;
  k_8 :
  AllBuild();
  goto j_8;
  e_8 :
  Cpop();
  j_8 :
  Return();
  d_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(l_8);
  d_24 :
  Cpush(n_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_23;
  a_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_23;
  b_23 :
  TestFunFC(f_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_8);
  goto e_24;
  p_8 :
  goto o_8;
  e_24 :
  Move(0,1,1,3);
  Return();
  o_8 :
  Epopd(1,4);
  goto m_8;
  n_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_8);
  goto d_24;
  r_8 :
  AllBuild();
  goto q_8;
  m_8 :
  Cpop();
  q_8 :
  Return();
  l_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_u_56);
  goto s_7;
  t_7 :
  goto s_8;
  s_7 :
  Cpop();
  s_8 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_v_56);
  Epopd(0,2);
ENDPROC

PROC(_stratego_d_57)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_u_56);
  Tset(MakeInt(1));
  Ccall(_stratego_v_56);
ENDPROC

PROC(_stratego_e_57)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_24;
  g_24 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(u_8);
  goto p_24;
  u_8 :
  goto t_8;
  p_24 :
  Return();
  t_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_57)
  Epushd(0,11);
  MoveTop(0,1);
  goto z_26;
  z_26 :
  TestFunFC(y_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto a_27;
  a_27 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto b_27;
  b_27 :
  TestFunFC(z_8,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto c_27;
  c_27 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto d_27;
  d_27 :
  TestFunFC(a_9,&&fail,Egetd(0,6));
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
  goto g_27;
  g_27 :
  TestFunFC(w_0,&&fail,Egetd(0,11));
  Rpush(w_8);
  goto p_29;
  w_8 :
  goto v_8;
  p_29 :
  Epushd(1,11);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_h_57);
  MoveTop(1,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(d_9);
  r_29 :
  Cpush(f_9);
  Ccall(_stratego_n_56);
  goto e_9;
  f_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto x_25;
  x_25 :
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
  Ccall(_stratego_l_57);
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
  Cpush(o_9);
  Ccall(_stratego_n_56);
  goto n_9;
  o_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto d_26;
  d_26 :
  TestFunFC(t_9,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(s_9);
  goto w_29;
  s_9 :
  goto r_9;
  w_29 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_l_57);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,4);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),App2("Scope",Egetd(3,1),Egetd(2,4))));
  Epopd(3,1);
  Return();
  r_9 :
  Epopd(2,4);
  OneNextSon();
  Rpush(v_9);
  goto v_29;
  v_9 :
  AllBuild();
  goto p_9;
  n_9 :
  Cpop();
  p_9 :
  Return();
  l_9 :
  MoveTop(1,3);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",Egetd(1,1),App2("Cons",Egetd(1,2),App2("Cons",Egetd(1,3),App0("Nil")))));
  Ccall(_stratego_g_57);
  MoveTop(1,4);
  NotNULLd(0,4);
  NotNULLd(1,4);
  Tset(App1("Specification",App2("Cons",App1("Signature",Egetd(0,4)),App2("Cons",App1("Strategies",Egetd(1,4)),App0("Nil")))));
  Ccall(_stratego_p_57);
  MoveTop(1,5);
  goto t_26;
  t_26 :
  TestFunFC(y_8,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  goto u_26;
  u_26 :
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
  Rpush(x_9);
  goto a_30;
  x_9 :
  goto w_9;
  a_30 :
  NotNULLd(1,10);
  Tset(Egetd(1,10));
  Ccall(_stratego_t_57);
  Ccall(_stratego_g_58);
  Return();
  w_9 :
  Epopd(1,11);
  Return();
  v_8 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_g_57)
  Rpush(z_9);
  i_30 :
  Cpush(c_10);
  Ccall(_stratego_n_56);
  goto a_10;
  c_10 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_30;
  c_30 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(g_10);
  goto j_30;
  g_10 :
  goto f_10;
  j_30 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(h_10);
  k_30 :
  Cpush(j_10);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_10);
  goto k_30;
  k_10 :
  AllBuild();
  goto i_10;
  j_10 :
  Ccall(_stratego_n_56);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(n_10);
  goto i_30;
  n_10 :
  goto m_10;
  i_10 :
  Cpop();
  m_10 :
  Return();
  h_10 :
  Return();
  f_10 :
  Epopd(0,3);
  goto d_10;
  a_10 :
  Cpop();
  d_10 :
  Return();
  z_9 :
ENDPROC

PROC(_stratego_h_57)
  Rpush(o_10);
  l_30 :
  Cpush(q_10);
  Ccall(_stratego_n_56);
  goto p_10;
  q_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_57);
  OneNextSon();
  Rpush(s_10);
  goto l_30;
  s_10 :
  AllBuild();
  goto r_10;
  p_10 :
  Cpop();
  r_10 :
  Return();
  o_10 :
  Ccall(_stratego_g_57);
ENDPROC

PROC(_stratego_i_57)
  Epushd(0,2);
  MoveTop(0,1);
  goto o_30;
  o_30 :
  TestFunFC(f_11,&&e_11,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(w_10);
  goto t_30;
  e_11 :
  TestFunFC(h_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(w_10);
  goto u_30;
  w_10 :
  goto u_10;
  u_30 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(i_11);
  q_31 :
  Cpush(k_11);
  Ccall(_stratego_n_56);
  goto j_11;
  k_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_57);
  OneNextSon();
  Rpush(n_11);
  goto q_31;
  n_11 :
  AllBuild();
  goto l_11;
  j_11 :
  Cpop();
  l_11 :
  Return();
  i_11 :
  Return();
  u_10 :
  goto t_10;
  t_30 :
  Tset(App0("Nil"));
  Return();
  t_10 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_j_57)
  Epushd(0,5);
  MoveTop(0,1);
  goto j_32;
  j_32 :
  TestFunFC(r_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto k_32;
  k_32 :
  TestFunFC(t_11,&&s_11,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(q_11);
  goto q_33;
  s_11 :
  TestFunFC(u_11,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(q_11);
  goto r_33;
  q_11 :
  goto p_11;
  r_33 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(v_11);
  u_33 :
  Cpush(y_11);
  Ccall(_stratego_n_56);
  goto w_11;
  y_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_57);
  OneNextSon();
  Rpush(a_12);
  goto u_33;
  a_12 :
  AllBuild();
  goto z_11;
  w_11 :
  Cpop();
  z_11 :
  Return();
  v_11 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(b_12);
  w_33 :
  Cpush(e_12);
  Ccall(_stratego_n_56);
  goto d_12;
  e_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("Call",App1("SVar",Egetd(2,1)),App0("Nil")));
  Epopd(2,1);
  OneNextSon();
  Rpush(g_12);
  goto w_33;
  g_12 :
  AllBuild();
  goto f_12;
  d_12 :
  Cpop();
  f_12 :
  Return();
  b_12 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(1,2);
  Tset(App3("SDef",Egetd(0,2),Egetd(1,1),App2("Cong",Egetd(0,2),Egetd(1,2))));
  Epopd(1,2);
  Return();
  p_11 :
  goto o_11;
  q_33 :
  NotNULLd(0,2);
  Tset(App3("SDef",Egetd(0,2),App0("Nil"),App2("Cong",Egetd(0,2),App0("Nil"))));
  Return();
  o_11 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_k_57)
  _ST_new();
ENDPROC

PROC(_stratego_l_57)
  Rpush(h_12);
  i_40 :
  Cpush(j_12);
  Epushd(0,2);
  MoveTop(0,1);
  goto i_34;
  i_34 :
  TestFunFC(m_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_12);
  goto m_40;
  l_12 :
  goto k_12;
  m_40 :
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
  Ccall(_stratego_o_57);
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
  goto i_40;
  p_12 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_m_57);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto p_34;
  p_34 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_34;
  q_34 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto r_34;
  r_34 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(r_12);
  goto s_40;
  r_12 :
  goto q_12;
  s_40 :
  Move(0,3,1,4);
  Return();
  q_12 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_12);
  v_40 :
  Cpush(v_12);
  Ccall(_stratego_n_56);
  Tset(App0("Nil"));
  goto u_12;
  v_12 :
  Epushd(1,3);
  MoveTop(1,1);
  goto e_35;
  e_35 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(y_12);
  goto w_40;
  y_12 :
  goto x_12;
  w_40 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(a_13);
  goto v_40;
  a_13 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto a_35;
  a_35 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto b_35;
  b_35 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto d_35;
  d_35 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(c_13);
  goto z_40;
  c_13 :
  goto b_13;
  z_40 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(d_13);
  h_41 :
  Cpush(f_13);
  Ccall(_stratego_n_56);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto e_13;
  f_13 :
  Ccontinue(g_13);
  Epushd(3,3);
  MoveTop(3,1);
  goto z_34;
  z_34 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_13);
  goto i_41;
  j_13 :
  goto i_13;
  i_41 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(k_13);
  j_41 :
  Cpush(m_13);
  Epushd(4,3);
  MoveTop(4,1);
  goto y_34;
  y_34 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(o_13);
  goto k_41;
  o_13 :
  goto n_13;
  k_41 :
  Move(3,2,4,2);
  Return();
  n_13 :
  Epopd(4,3);
  goto l_13;
  m_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_13);
  goto j_41;
  r_13 :
  AllBuild();
  goto q_13;
  l_13 :
  Cpop();
  q_13 :
  Return();
  k_13 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(s_13);
  goto h_41;
  s_13 :
  Return();
  i_13 :
  Epopd(3,3);
  goto e_13;
  g_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_13);
  goto h_41;
  u_13 :
  AllBuild();
  goto t_13;
  e_13 :
  Cpop();
  t_13 :
  Return();
  d_13 :
  Return();
  b_13 :
  Epopd(2,6);
  Return();
  x_12 :
  Epopd(1,3);
  goto w_12;
  u_12 :
  Cpop();
  w_12 :
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
  goto h_35;
  h_35 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_35;
  i_35 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto j_35;
  j_35 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(x_13);
  goto m_41;
  x_13 :
  goto w_13;
  m_41 :
  Move(0,2,1,4);
  Return();
  w_13 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(y_13);
  n_41 :
  Cpush(a_14);
  Ccall(_stratego_n_56);
  Tset(App0("Nil"));
  goto z_13;
  a_14 :
  Epushd(1,3);
  MoveTop(1,1);
  goto x_35;
  x_35 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(d_14);
  goto r_41;
  d_14 :
  goto c_14;
  r_41 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(e_14);
  goto i_40;
  e_14 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(f_14);
  goto n_41;
  f_14 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto u_35;
  u_35 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_35;
  v_35 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto w_35;
  w_35 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(i_14);
  goto u_41;
  i_14 :
  goto h_14;
  u_41 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(j_14);
  v_41 :
  Cpush(l_14);
  Ccall(_stratego_n_56);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto k_14;
  l_14 :
  Ccontinue(m_14);
  Epushd(3,3);
  MoveTop(3,1);
  goto t_35;
  t_35 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_14);
  goto w_41;
  o_14 :
  goto n_14;
  w_41 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(p_14);
  x_41 :
  Cpush(r_14);
  Epushd(4,3);
  MoveTop(4,1);
  goto s_35;
  s_35 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(t_14);
  goto y_41;
  t_14 :
  goto s_14;
  y_41 :
  Move(3,2,4,2);
  Return();
  s_14 :
  Epopd(4,3);
  goto q_14;
  r_14 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_14);
  goto x_41;
  v_14 :
  AllBuild();
  goto u_14;
  q_14 :
  Cpop();
  u_14 :
  Return();
  p_14 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(w_14);
  goto v_41;
  w_14 :
  Return();
  n_14 :
  Epopd(3,3);
  goto k_14;
  m_14 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_14);
  goto v_41;
  y_14 :
  AllBuild();
  goto x_14;
  k_14 :
  Cpop();
  x_14 :
  Return();
  j_14 :
  Return();
  h_14 :
  Epopd(2,7);
  Return();
  c_14 :
  Epopd(1,3);
  goto b_14;
  z_13 :
  Cpop();
  b_14 :
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

PROC(_stratego_m_57)
  Epushd(0,5);
  MoveTop(0,5);
  goto q_43;
  q_43 :
  TestFunFC(p_0,&&d_15,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto r_43;
  r_43 :
  TestFunFC(p_0,&&e_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto s_43;
  s_43 :
  TestFunFC(s_0,&&f_15,Egetd(0,4));
  Cpush(i_15);
  Rpush(j_15);
  goto v_45;
  j_15 :
  goto h_15;
  i_15 :
  Rpush(m_15);
  goto b_46;
  m_15 :
  goto k_15;
  h_15 :
  Cpop();
  k_15 :
  goto c_15;
  f_15 :
  Rpush(c_15);
  goto b_46;
  e_15 :
  Rpush(c_15);
  goto b_46;
  d_15 :
  Rpush(c_15);
  goto b_46;
  c_15 :
  goto b_15;
  b_46 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(n_15);
  c_46 :
  Cpush(p_15);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(s_15);
  Epushd(1,7);
  MoveTop(1,1);
  goto g_42;
  g_42 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto h_42;
  h_42 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto i_42;
  i_42 :
  TestFunFC(p_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto u_42;
  u_42 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  Rpush(u_15);
  goto d_46;
  u_15 :
  goto t_15;
  d_46 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  t_15 :
  Epopd(1,7);
  goto r_15;
  s_15 :
  Ccall(_stratego_n_57);
  goto w_15;
  r_15 :
  Cpop();
  w_15 :
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  goto o_15;
  p_15 :
  Epushd(1,7);
  MoveTop(1,1);
  goto b_43;
  b_43 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_43;
  l_43 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto m_43;
  m_43 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto o_43;
  o_43 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(z_15);
  goto e_46;
  z_15 :
  goto y_15;
  e_46 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  y_15 :
  Epopd(1,7);
  goto x_15;
  o_15 :
  Cpop();
  x_15 :
  Cpush(c_16);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_56);
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  goto b_16;
  c_16 :
  Rpush(i_16);
  goto c_46;
  i_16 :
  goto f_16;
  b_16 :
  Cpop();
  f_16 :
  Return();
  n_15 :
  Return();
  b_15 :
  goto a_15;
  v_45 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(l_16);
  w_45 :
  Cpush(r_16);
  Ccall(_stratego_n_56);
  goto o_16;
  r_16 :
  Ccontinue(u_16);
  Epushd(1,3);
  MoveTop(1,1);
  goto e_42;
  e_42 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(y_16);
  goto x_45;
  y_16 :
  goto v_16;
  x_45 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(z_16);
  z_45 :
  Cpush(b_17);
  Epushd(2,3);
  MoveTop(2,1);
  goto d_42;
  d_42 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(d_17);
  goto a_46;
  d_17 :
  goto c_17;
  a_46 :
  Move(1,2,2,2);
  Return();
  c_17 :
  Epopd(2,3);
  goto a_17;
  b_17 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_17);
  goto z_45;
  f_17 :
  AllBuild();
  goto e_17;
  a_17 :
  Cpop();
  e_17 :
  Return();
  z_16 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(g_17);
  goto w_45;
  g_17 :
  Return();
  v_16 :
  Epopd(1,3);
  goto o_16;
  u_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_17);
  goto w_45;
  k_17 :
  AllBuild();
  goto j_17;
  o_16 :
  Cpop();
  j_17 :
  Return();
  l_16 :
  Return();
  a_15 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_57)
  Epushd(0,7);
  MoveTop(0,1);
  goto i_47;
  i_47 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto j_47;
  j_47 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_47;
  k_47 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_47;
  l_47 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(m_17);
  goto m_49;
  m_17 :
  goto l_17;
  m_49 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto h_46;
  h_46 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto i_46;
  i_46 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_46;
  k_46 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(q_17);
  goto n_49;
  q_17 :
  goto p_17;
  n_49 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  p_17 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
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
  Rpush(u_17);
  goto o_49;
  u_17 :
  goto t_17;
  o_49 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  t_17 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(v_17);
  p_49 :
  Epushd(2,9);
  MoveTop(2,1);
  goto v_46;
  v_46 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto w_46;
  w_46 :
  TestFunFC(w_0,&&z_17,Egetd(2,2));
  goto x_46;
  x_46 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto y_46;
  y_46 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto z_46;
  z_46 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(y_17);
  goto q_49;
  z_17 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_47;
  a_47 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto b_47;
  b_47 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto c_47;
  c_47 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(y_17);
  goto r_49;
  y_17 :
  goto x_17;
  r_49 :
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
  Rpush(c_18);
  goto p_49;
  c_18 :
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto s_46;
  s_46 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto t_46;
  t_46 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto u_46;
  u_46 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(d_18);
  goto s_49;
  d_18 :
  goto b_18;
  s_49 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  b_18 :
  Epopd(3,5);
  Return();
  x_17 :
  goto w_17;
  q_49 :
  Tset(App0("Nil"));
  Return();
  w_17 :
  Epopd(2,9);
  Return();
  v_17 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto f_47;
  f_47 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto g_47;
  g_47 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto h_47;
  h_47 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(f_18);
  goto u_49;
  f_18 :
  goto e_18;
  u_49 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(g_18);
  v_49 :
  Cpush(i_18);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_18);
  goto v_49;
  k_18 :
  AllBuild();
  goto h_18;
  i_18 :
  Ccall(_stratego_n_56);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto n_18;
  h_18 :
  Cpop();
  n_18 :
  Return();
  g_18 :
  Return();
  e_18 :
  Epopd(1,9);
  Return();
  l_17 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_o_57)
  Epushd(0,6);
  MoveTop(0,2);
  goto y_49;
  y_49 :
  TestFunFC(o_12,&&r_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(q_18);
  goto l_50;
  r_18 :
  TestFunFC(s_18,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto z_49;
  z_49 :
  TestFunFC(t_18,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(q_18);
  goto m_50;
  q_18 :
  goto p_18;
  m_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_l_57);
  Return();
  p_18 :
  goto o_18;
  l_50 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  o_18 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_p_57)
  Ccall(_stratego_q_57);
  Ccall(_stratego_s_57);
ENDPROC

PROC(_stratego_q_57)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(v_18);
  y_60 :
  Rpush(w_18);
  z_60 :
  Epushd(1,5);
  MoveTop(1,1);
  goto y_51;
  y_51 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_51;
  z_51 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto a_52;
  a_52 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Cpush(c_19);
  Rpush(d_19);
  goto a_61;
  d_19 :
  goto b_19;
  c_19 :
  Ccontinue(f_19);
  Rpush(i_19);
  goto e_61;
  i_19 :
  goto b_19;
  f_19 :
  Rpush(m_19);
  goto t_61;
  m_19 :
  goto l_19;
  b_19 :
  Cpop();
  l_19 :
  goto a_19;
  a_19 :
  goto z_18;
  t_61 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  n_19 :
  AllNextSon(&&o_19);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(u_19);
  goto z_60;
  u_19 :
  Epopd(2,1);
  goto n_19;
  o_19 :
  AllBuild();
  Return();
  z_18 :
  goto y_18;
  e_61 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_o_57);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(y_19);
  g_61 :
  Cpush(l_20);
  Ccall(_stratego_n_56);
  goto i_20;
  l_20 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_57);
  OneNextSon();
  Rpush(n_20);
  goto g_61;
  n_20 :
  AllBuild();
  goto m_20;
  i_20 :
  Cpop();
  m_20 :
  Return();
  y_19 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(o_20);
  i_61 :
  Epushd(4,9);
  MoveTop(4,1);
  goto c_51;
  c_51 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto d_51;
  d_51 :
  TestFunFC(w_0,&&y_20,Egetd(4,2));
  goto e_51;
  e_51 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto f_51;
  f_51 :
  TestFunFC(w_0,&&fail,Egetd(4,6));
  goto g_51;
  g_51 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(x_20);
  goto j_61;
  y_20 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto h_51;
  h_51 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto i_51;
  i_51 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto j_51;
  j_51 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(x_20);
  goto k_61;
  x_20 :
  goto w_20;
  k_61 :
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
  Rpush(d_21);
  goto i_61;
  d_21 :
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto z_50;
  z_50 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto a_51;
  a_51 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto b_51;
  b_51 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(e_21);
  goto l_61;
  e_21 :
  goto a_21;
  l_61 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  a_21 :
  Epopd(5,5);
  Return();
  w_20 :
  goto u_20;
  j_61 :
  Tset(App0("Nil"));
  Return();
  u_20 :
  Epopd(4,9);
  Return();
  o_20 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto n_51;
  n_51 :
  TestFunFC(p_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto o_51;
  o_51 :
  TestFunFC(p_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto p_51;
  p_51 :
  TestFunFC(s_0,&&fail,Egetd(3,8));
  Rpush(g_21);
  goto n_61;
  g_21 :
  goto f_21;
  n_61 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(h_21);
  o_61 :
  Cpush(l_21);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_21);
  goto o_61;
  m_21 :
  AllBuild();
  goto k_21;
  l_21 :
  Ccall(_stratego_n_56);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto n_21;
  k_21 :
  Cpop();
  n_21 :
  Return();
  h_21 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  f_21 :
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
  goto t_51;
  t_51 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto u_51;
  u_51 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto v_51;
  v_51 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto w_51;
  w_51 :
  TestFunFC(s_0,&&fail,Egetd(2,11));
  Rpush(w_21);
  goto r_61;
  w_21 :
  goto o_21;
  r_61 :
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
  Rpush(y_21);
  goto y_60;
  y_21 :
  Epopd(3,1);
  AllBuild();
  Return();
  o_21 :
  Epopd(2,11);
  Return();
  y_18 :
  goto x_18;
  a_61 :
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
  Ccall(_stratego_r_57);
  Epopd(2,1);
  AllBuild();
  Return();
  x_18 :
  Epopd(1,5);
  Return();
  w_18 :
  Return();
  v_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_57)
  Rpush(z_21);
  t_62 :
  Epushd(0,11);
  MoveTop(0,5);
  goto x_61;
  x_61 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto y_61;
  y_61 :
  TestFunFC(p_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto z_61;
  z_61 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto a_62;
  a_62 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto b_62;
  b_62 :
  TestFunFC(p_0,&&i_22,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto c_62;
  c_62 :
  TestFunFC(p_0,&&j_22,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto d_62;
  d_62 :
  TestFunFC(s_0,&&k_22,Egetd(0,4));
  Cpush(o_22);
  Rpush(p_22);
  goto u_62;
  p_22 :
  goto l_22;
  o_22 :
  Rpush(r_22);
  goto v_62;
  r_22 :
  goto q_22;
  l_22 :
  Cpop();
  q_22 :
  goto c_22;
  k_22 :
  Rpush(c_22);
  goto v_62;
  j_22 :
  Rpush(c_22);
  goto v_62;
  i_22 :
  Rpush(c_22);
  goto v_62;
  c_22 :
  goto b_22;
  v_62 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(s_22);
  goto t_62;
  s_22 :
  Return();
  b_22 :
  goto a_22;
  u_62 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  a_22 :
  Epopd(0,11);
  Return();
  z_21 :
ENDPROC

PROC(_stratego_s_57)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(t_22);
  y_68 :
  Rpush(w_22);
  z_68 :
  Epushd(1,5);
  MoveTop(1,1);
  goto u_64;
  u_64 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_64;
  v_64 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_64;
  w_64 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Cpush(h_23);
  Rpush(i_23);
  goto a_69;
  i_23 :
  goto g_23;
  h_23 :
  Ccontinue(j_23);
  Rpush(k_23);
  goto e_69;
  k_23 :
  goto g_23;
  j_23 :
  Rpush(a_24);
  goto b_70;
  a_24 :
  goto z_23;
  g_23 :
  Cpop();
  z_23 :
  goto f_23;
  f_23 :
  goto e_23;
  b_70 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  f_24 :
  AllNextSon(&&h_24);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(i_24);
  goto z_68;
  i_24 :
  Epopd(2,1);
  goto f_24;
  h_24 :
  AllBuild();
  Return();
  e_23 :
  goto d_23;
  e_69 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto g_63;
  g_63 :
  TestFunFC(q_24,&&n_24,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto h_63;
  h_63 :
  TestFunFC(t_9,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(m_24);
  goto f_69;
  n_24 :
  TestFunFC(t_9,&&r_24,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(m_24);
  goto g_69;
  r_24 :
  TestFunFC(s_24,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(m_24);
  goto h_69;
  m_24 :
  goto l_24;
  h_69 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  l_24 :
  goto k_24;
  g_69 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  k_24 :
  goto j_24;
  f_69 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  j_24 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(t_24);
  j_69 :
  Cpush(v_24);
  Ccall(_stratego_n_56);
  goto u_24;
  v_24 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_57);
  OneNextSon();
  Rpush(x_24);
  goto j_69;
  x_24 :
  AllBuild();
  goto w_24;
  u_24 :
  Cpop();
  w_24 :
  Return();
  t_24 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(y_24);
  l_69 :
  Epushd(4,9);
  MoveTop(4,1);
  goto q_63;
  q_63 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto r_63;
  r_63 :
  TestFunFC(w_0,&&c_25,Egetd(4,2));
  goto s_63;
  s_63 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto t_63;
  t_63 :
  TestFunFC(w_0,&&fail,Egetd(4,6));
  goto u_63;
  u_63 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(b_25);
  goto m_69;
  c_25 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto v_63;
  v_63 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto w_63;
  w_63 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto x_63;
  x_63 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(b_25);
  goto n_69;
  b_25 :
  goto a_25;
  n_69 :
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
  Rpush(e_25);
  goto l_69;
  e_25 :
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto n_63;
  n_63 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto o_63;
  o_63 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto p_63;
  p_63 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(f_25);
  goto o_69;
  f_25 :
  goto d_25;
  o_69 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  d_25 :
  Epopd(5,5);
  Return();
  a_25 :
  goto z_24;
  m_69 :
  Tset(App0("Nil"));
  Return();
  z_24 :
  Epopd(4,9);
  Return();
  y_24 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto b_64;
  b_64 :
  TestFunFC(p_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto c_64;
  c_64 :
  TestFunFC(p_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto d_64;
  d_64 :
  TestFunFC(s_0,&&fail,Egetd(3,15));
  Rpush(h_25);
  goto q_69;
  h_25 :
  goto g_25;
  q_69 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(i_25);
  r_69 :
  Cpush(k_25);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_25);
  goto r_69;
  l_25 :
  AllBuild();
  goto j_25;
  k_25 :
  Ccall(_stratego_n_56);
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
  TestFunTop(q_24);
  TravInit();
  OneNextSon();
  TestFunTop(t_9);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto f_64;
  f_64 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(q_25);
  goto t_69;
  q_25 :
  goto p_25;
  t_69 :
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
  TestFunTop(t_9);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto n_25;
  r_25 :
  TestFunTop(s_24);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto h_64;
  h_64 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(u_25);
  goto u_69;
  u_25 :
  goto t_25;
  u_69 :
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
  goto o_64;
  o_64 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto q_64;
  q_64 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto r_64;
  r_64 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto s_64;
  s_64 :
  TestFunFC(s_0,&&fail,Egetd(2,11));
  Rpush(w_25);
  goto w_69;
  w_25 :
  goto v_25;
  w_69 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(z_25);
  TestFunTop(q_24);
  TravInit();
  OneNextSon();
  TestFunTop(t_9);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(a_26);
  goto y_68;
  a_26 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(b_26);
  goto y_68;
  b_26 :
  Epopd(3,1);
  AllBuild();
  goto y_25;
  z_25 :
  Ccontinue(c_26);
  TestFunTop(t_9);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(e_26);
  goto y_68;
  e_26 :
  Epopd(3,1);
  AllBuild();
  goto y_25;
  c_26 :
  TestFunTop(s_24);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(g_26);
  goto y_68;
  g_26 :
  Epopd(3,1);
  AllBuild();
  goto f_26;
  y_25 :
  Cpop();
  f_26 :
  Return();
  v_25 :
  Epopd(2,11);
  Return();
  d_23 :
  goto z_22;
  a_69 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(h_26);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_r_57);
  Epopd(2,1);
  AllBuild();
  Return();
  z_22 :
  Epopd(1,5);
  Return();
  w_22 :
  Return();
  t_22 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_57)
  Epushd(0,8);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App2("TCons",ATmakeString("main"),App2("TCons",MakeInt(0),App0("TNil"))),App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(0,2);
  goto c_72;
  c_72 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto d_72;
  d_72 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto e_72;
  e_72 :
  TestFunFC(p_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto f_72;
  f_72 :
  TestFunFC(s_0,&&fail,Egetd(0,8));
  Rpush(j_26);
  goto r_76;
  j_26 :
  goto i_26;
  r_76 :
  Epushd(1,7);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,7),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(m_26);
  s_76 :
  Epushd(2,13);
  MoveTop(2,1);
  goto a_71;
  a_71 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto b_71;
  b_71 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_71;
  c_71 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto d_71;
  d_71 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto e_71;
  e_71 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto f_71;
  f_71 :
  TestFunFC(p_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto g_71;
  g_71 :
  TestFunFC(s_0,&&fail,Egetd(2,13));
  Cpush(r_26);
  Rpush(s_26);
  goto t_76;
  s_26 :
  goto q_26;
  r_26 :
  Rpush(s_27);
  goto f_77;
  s_27 :
  goto v_26;
  q_26 :
  Cpop();
  v_26 :
  goto p_26;
  p_26 :
  goto o_26;
  f_77 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App2("TCons",Egetd(2,10),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,12)),App0("TNil")))))));
  Return();
  o_26 :
  goto n_26;
  t_76 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,8),App0("TNil"))));
  Ccall(_stratego_u_57);
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Ccall(_stratego_e_58);
  MoveTop(4,2);
  Move(3,2,4,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(2,6),App0("TNil"))));
  Ccall(_stratego_m_57);
  MoveTop(4,3);
  Move(3,3,4,3);
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,4),App0("TNil"))));
  MoveTop(3,4);
  goto x_70;
  x_70 :
  TestFunFC(p_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto y_70;
  y_70 :
  TestFunFC(p_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto z_70;
  z_70 :
  TestFunFC(s_0,&&fail,Egetd(3,8));
  Rpush(u_27);
  goto x_76;
  u_27 :
  goto t_27;
  x_76 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(w_27);
  y_76 :
  Cpush(c_28);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_28);
  goto y_76;
  d_28 :
  AllBuild();
  goto b_28;
  c_28 :
  Ccall(_stratego_n_56);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto f_28;
  b_28 :
  Cpop();
  f_28 :
  Return();
  w_27 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,6),App0("TNil"))));
  MoveTop(4,2);
  goto u_70;
  u_70 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto v_70;
  v_70 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto w_70;
  w_70 :
  TestFunFC(s_0,&&fail,Egetd(4,6));
  Rpush(i_28);
  goto a_77;
  i_28 :
  goto h_28;
  a_77 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(k_28);
  b_77 :
  Cpush(p_28);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_28);
  goto b_77;
  q_28 :
  AllBuild();
  goto l_28;
  p_28 :
  Ccall(_stratego_n_56);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto r_28;
  l_28 :
  Cpop();
  r_28 :
  Return();
  k_28 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil")))));
  MoveTop(5,2);
  goto q_70;
  q_70 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto r_70;
  r_70 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto s_70;
  s_70 :
  TestFunFC(p_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto t_70;
  t_70 :
  TestFunFC(s_0,&&fail,Egetd(5,8));
  Rpush(u_28);
  goto d_77;
  u_28 :
  goto t_28;
  d_77 :
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
  t_28 :
  Epopd(5,8);
  Return();
  h_28 :
  Epopd(4,6);
  Return();
  t_27 :
  Epopd(3,8);
  Return();
  n_26 :
  Cpush(w_28);
  Epushd(3,11);
  MoveTop(3,1);
  goto i_71;
  i_71 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto j_71;
  j_71 :
  TestFunFC(w_0,&&fail,Egetd(3,2));
  goto k_71;
  k_71 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto l_71;
  l_71 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto m_71;
  m_71 :
  TestFunFC(p_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto n_71;
  n_71 :
  TestFunFC(p_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto o_71;
  o_71 :
  TestFunFC(s_0,&&fail,Egetd(3,11));
  Rpush(y_28);
  goto g_77;
  y_28 :
  goto x_28;
  g_77 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App0("TNil"))));
  Return();
  x_28 :
  Epopd(3,11);
  goto v_28;
  w_28 :
  Rpush(c_29);
  goto s_76;
  c_29 :
  goto a_29;
  v_28 :
  Cpop();
  a_29 :
  Epopd(2,13);
  Return();
  m_26 :
  MoveTop(1,1);
  goto x_71;
  x_71 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_71;
  y_71 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto z_71;
  z_71 :
  TestFunFC(w_0,&&g_29,Egetd(1,4));
  goto a_72;
  a_72 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(d_29);
  goto h_77;
  g_29 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto b_72;
  b_72 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(d_29);
  goto i_77;
  d_29 :
  goto l_26;
  i_77 :
  Tdupl();
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App2("Cons",Egetd(1,5),Egetd(1,6)));
  Rpush(h_29);
  j_77 :
  Cpush(o_29);
  Ccall(_stratego_n_56);
  goto j_29;
  o_29 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,3);
  goto t_71;
  t_71 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto u_71;
  u_71 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto v_71;
  v_71 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  goto w_71;
  w_71 :
  TestFunFC(z_29,&&y_29,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Cpush(g_30);
  Rpush(h_30);
  goto k_77;
  h_30 :
  goto b_30;
  g_30 :
  Rpush(n_30);
  goto l_77;
  n_30 :
  goto m_30;
  b_30 :
  Cpop();
  m_30 :
  goto x_29;
  y_29 :
  Rpush(x_29);
  goto l_77;
  x_29 :
  goto u_29;
  l_77 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,4),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))));
  Ccall(_stratego_f_58);
  Return();
  u_29 :
  goto t_29;
  k_77 :
  NotNULLd(2,1);
  NotNULLd(2,2);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,1),App2("Cons",ATmakeString("^"),App2("Cons",Egetd(2,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))))));
  Ccall(_stratego_f_58);
  Return();
  t_29 :
  Epopd(2,7);
  OneNextSon();
  Rpush(r_30);
  goto j_77;
  r_30 :
  AllBuild();
  goto q_29;
  j_29 :
  Cpop();
  q_29 :
  Return();
  h_29 :
  Tpop();
  Tset(MakeInt(1));
  Ccall(_stratego_v_56);
  Return();
  l_26 :
  goto k_26;
  h_77 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  k_26 :
  Epopd(1,7);
  Return();
  i_26 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_u_57)
  Epushd(0,11);
  MoveTop(0,3);
  goto a_78;
  a_78 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,9,0,3,1);
  goto b_78;
  b_78 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto c_78;
  c_78 :
  TestFunFC(p_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto d_78;
  d_78 :
  TestFunFC(s_0,&&fail,Egetd(0,8));
  goto e_78;
  e_78 :
  TestFunFC(p_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto f_78;
  f_78 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto g_78;
  g_78 :
  TestInt(0,7,0,&&y_30);
  goto h_78;
  h_78 :
  TestFunFC(z_29,&&z_30,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(b_31);
  Rpush(c_31);
  goto z_79;
  c_31 :
  goto a_31;
  b_31 :
  Ccontinue(d_31);
  Rpush(e_31);
  goto b_80;
  e_31 :
  goto a_31;
  d_31 :
  Rpush(g_31);
  goto h_80;
  g_31 :
  goto f_31;
  a_31 :
  Cpop();
  f_31 :
  goto x_30;
  z_30 :
  Cpush(i_31);
  Rpush(j_31);
  goto b_80;
  j_31 :
  goto h_31;
  i_31 :
  Rpush(l_31);
  goto h_80;
  l_31 :
  goto k_31;
  h_31 :
  Cpop();
  k_31 :
  goto x_30;
  y_30 :
  goto i_78;
  i_78 :
  TestFunFC(z_29,&&m_31,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(o_31);
  Rpush(p_31);
  goto z_79;
  p_31 :
  goto n_31;
  o_31 :
  Rpush(s_31);
  goto b_80;
  s_31 :
  goto r_31;
  n_31 :
  Cpop();
  r_31 :
  goto x_30;
  m_31 :
  Rpush(x_30);
  goto b_80;
  x_30 :
  goto w_30;
  h_80 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(t_31);
  i_80 :
  Cpush(v_31);
  Ccall(_stratego_n_56);
  goto u_31;
  v_31 :
  Ccontinue(w_31);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto w_77;
  w_77 :
  TestFunFC(t_9,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(y_31);
  goto j_80;
  y_31 :
  goto x_31;
  j_80 :
  Move(0,5,3,2);
  Return();
  x_31 :
  Epopd(3,4);
  OneNextSon();
  Rpush(z_31);
  goto i_80;
  z_31 :
  AllBuild();
  goto u_31;
  w_31 :
  Epushd(3,3);
  MoveTop(3,1);
  goto y_77;
  y_77 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(c_32);
  goto k_80;
  c_32 :
  goto b_32;
  k_80 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(d_32);
  goto i_80;
  d_32 :
  Return();
  b_32 :
  Epopd(3,3);
  goto a_32;
  u_31 :
  Cpop();
  a_32 :
  Return();
  t_31 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_b_58);
  Epopd(1,1);
  Return();
  w_30 :
  goto v_30;
  b_80 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(e_32);
  c_80 :
  Cpush(g_32);
  Ccall(_stratego_n_56);
  goto f_32;
  g_32 :
  Ccontinue(h_32);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(t_9);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(0,5,3,1);
  Epopd(3,1);
  OneNextSon();
  Tdupl();
  Epushd(3,1);
  Ccall(_stratego_a_58);
  MoveTop(3,1);
  Move(0,7,3,1);
  Epopd(3,1);
  Tpop();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(i_32);
  goto c_80;
  i_32 :
  AllBuild();
  goto f_32;
  h_32 :
  Epushd(3,3);
  MoveTop(3,1);
  goto t_77;
  t_77 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_32);
  goto f_80;
  s_32 :
  goto r_32;
  f_80 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(t_32);
  goto c_80;
  t_32 :
  Return();
  r_32 :
  Epopd(3,3);
  goto o_32;
  f_32 :
  Cpop();
  o_32 :
  Return();
  e_32 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_b_58);
  Epopd(1,1);
  Return();
  v_30 :
  goto s_30;
  z_79 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,7),App0("TNil")))));
  Ccall(_stratego_v_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  s_30 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_v_57)
  Epushd(0,7);
  MoveTop(0,1);
  goto r_84;
  r_84 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_84;
  s_84 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto t_84;
  t_84 :
  TestStr(0,4,"D",&&a_33);
  goto u_84;
  u_84 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto v_84;
  v_84 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(w_32);
  goto i_93;
  a_33 :
  TestStr(0,4,"T",&&fail);
  goto w_84;
  w_84 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto x_84;
  x_84 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(w_32);
  goto i_94;
  w_32 :
  goto v_32;
  i_94 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_57);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",App0("TNil"),App0("TNil"))));
  MoveTop(2,2);
  goto n_84;
  n_84 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto o_84;
  o_84 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto p_84;
  p_84 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(c_33);
  goto k_94;
  c_33 :
  goto b_33;
  k_94 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(f_33);
  l_94 :
  Epushd(4,7);
  MoveTop(4,1);
  goto t_82;
  t_82 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto u_82;
  u_82 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto v_82;
  v_82 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto w_82;
  w_82 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(h_33);
  goto m_94;
  h_33 :
  goto g_33;
  m_94 :
  Epushd(5,2);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_x_57);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_w_57);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_k_57);
  MoveTop(5,2);
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",Egetd(5,2),Egetd(4,6)),App0("TNil")))));
  Cpush(j_33);
  Epushd(6,7);
  MoveTop(6,1);
  goto o_82;
  o_82 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto p_82;
  p_82 :
  TestInt(6,2,0,&&fail);
  goto q_82;
  q_82 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto r_82;
  r_82 :
  TestFunFC(p_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto s_82;
  s_82 :
  TestFunFC(s_0,&&fail,Egetd(6,7));
  Rpush(l_33);
  goto p_94;
  l_33 :
  goto k_33;
  p_94 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  k_33 :
  Epopd(6,7);
  goto i_33;
  j_33 :
  Rpush(n_33);
  goto l_94;
  n_33 :
  goto m_33;
  i_33 :
  Cpop();
  m_33 :
  Epopd(5,2);
  Return();
  g_33 :
  Epopd(4,7);
  Return();
  f_33 :
  MoveTop(3,1);
  goto m_84;
  m_84 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_33);
  goto q_94;
  o_33 :
  goto e_33;
  q_94 :
  Epushd(4,14);
  Move(1,2,3,2);
  Move(1,3,3,3);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_z_57);
  MoveTop(4,1);
  Move(1,1,4,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",App2("Cons",Egetd(1,2),Egetd(1,3)),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(p_33);
  s_94 :
  Epushd(5,9);
  MoveTop(5,1);
  goto m_83;
  m_83 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto n_83;
  n_83 :
  TestFunFC(p_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto o_83;
  o_83 :
  TestFunFC(w_0,&&x_33,Egetd(5,6));
  goto p_83;
  p_83 :
  TestFunFC(s_0,&&fail,Egetd(5,9));
  goto q_83;
  q_83 :
  y_33 :
  Rpush(v_33);
  goto t_94;
  x_33 :
  TestFunFC(a_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto r_83;
  r_83 :
  TestFunFC(a_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto s_83;
  s_83 :
  TestFunFC(s_0,&&fail,Egetd(5,9));
  Rpush(v_33);
  goto u_94;
  v_33 :
  goto t_33;
  u_94 :
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
  goto f_83;
  f_83 :
  TestFunFC(p_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto g_83;
  g_83 :
  TestFunFC(p_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto h_83;
  h_83 :
  TestFunFC(s_0,&&fail,Egetd(7,5));
  Rpush(b_34);
  goto v_94;
  b_34 :
  goto a_34;
  v_94 :
  Epushd(8,3);
  Tdupl();
  Epushd(9,3);
  Ccall(_stratego_k_57);
  MoveTop(9,1);
  Move(8,1,9,1);
  Ccall(_stratego_k_57);
  MoveTop(9,2);
  Move(8,2,9,2);
  Ccall(_stratego_k_57);
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
  a_34 :
  Epopd(7,5);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(c_34);
  goto s_94;
  c_34 :
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto j_83;
  j_83 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto k_83;
  k_83 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto l_83;
  l_83 :
  TestFunFC(s_0,&&fail,Egetd(6,5));
  Rpush(d_34);
  goto z_94;
  d_34 :
  goto z_33;
  z_94 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),Egetd(6,4)));
  Return();
  z_33 :
  Epopd(6,5);
  Return();
  t_33 :
  goto s_33;
  t_94 :
  Tset(App0("Nil"));
  Return();
  s_33 :
  Epopd(5,9);
  Return();
  p_33 :
  Rpush(f_34);
  a_95 :
  Cpush(h_34);
  Epushd(5,8);
  MoveTop(5,1);
  Rpush(j_34);
  c_95 :
  Cpush(l_34);
  Ccall(_stratego_n_56);
  goto k_34;
  l_34 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto v_83;
  v_83 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(o_34);
  goto d_95;
  o_34 :
  goto n_34;
  d_95 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  n_34 :
  Epopd(6,3);
  OneNextSon();
  Rpush(s_34);
  goto c_95;
  s_34 :
  AllBuild();
  goto m_34;
  k_34 :
  Cpop();
  m_34 :
  Return();
  j_34 :
  MoveTop(5,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  Rpush(t_34);
  f_95 :
  Cpush(v_34);
  Ccall(_stratego_n_56);
  goto u_34;
  v_34 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto y_83;
  y_83 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(c_35);
  goto g_95;
  c_35 :
  goto x_34;
  g_95 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  x_34 :
  Epopd(6,3);
  OneNextSon();
  Rpush(f_35);
  goto f_95;
  f_35 :
  AllBuild();
  goto w_34;
  u_34 :
  Cpop();
  w_34 :
  Return();
  t_34 :
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
  Rpush(k_35);
  goto a_95;
  k_35 :
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  MoveTop(5,4);
  goto b_84;
  b_84 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto c_84;
  c_84 :
  TestFunFC(p_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto d_84;
  d_84 :
  TestFunFC(s_0,&&fail,Egetd(5,8));
  Rpush(l_35);
  goto i_95;
  l_35 :
  goto g_35;
  i_95 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("TCons",Egetd(5,5),Egetd(5,7)));
  Return();
  g_35 :
  Epopd(5,8);
  goto g_34;
  h_34 :
  Rpush(n_35);
  j_95 :
  Cpush(p_35);
  Ccall(_stratego_n_56);
  goto o_35;
  p_35 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_57);
  OneNextSon();
  Rpush(r_35);
  goto j_95;
  r_35 :
  AllBuild();
  goto q_35;
  o_35 :
  Cpop();
  q_35 :
  Return();
  n_35 :
  Tset(App0("TNil"));
  goto m_35;
  g_34 :
  Cpop();
  m_35 :
  Return();
  f_34 :
  MoveTop(4,2);
  goto f_84;
  f_84 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto g_84;
  g_84 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto h_84;
  h_84 :
  TestFunFC(p_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto i_84;
  i_84 :
  TestFunFC(p_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto j_84;
  j_84 :
  TestFunFC(p_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto k_84;
  k_84 :
  TestFunFC(p_0,&&fail,Egetd(4,12));
  MoveArg(4,13,4,12,0);
  MoveArg(4,14,4,12,1);
  goto l_84;
  l_84 :
  TestFunFC(s_0,&&fail,Egetd(4,14));
  Rpush(a_36);
  goto k_95;
  a_36 :
  goto e_34;
  k_95 :
  Move(1,4,4,3);
  Move(1,5,4,5);
  Move(1,6,4,7);
  Move(1,7,4,9);
  Move(1,8,4,11);
  Move(1,9,4,13);
  Return();
  e_34 :
  Epopd(4,14);
  Return();
  e_33 :
  Epopd(3,3);
  Return();
  b_33 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App2("Cons",Egetd(1,3),App2("Cons",Egetd(1,6),App2("Cons",Egetd(1,8),App0("Nil")))));
  Ccall(_stratego_g_57);
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
  v_32 :
  goto u_32;
  i_93 :
  Epushd(1,12);
  Tdupl();
  Epushd(2,6);
  Ccall(_stratego_k_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",App1("Var",Egetd(1,1)),App0("TNil"))));
  MoveTop(2,2);
  goto a_82;
  a_82 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto b_82;
  b_82 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto c_82;
  c_82 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(f_36);
  goto k_93;
  f_36 :
  goto c_36;
  k_93 :
  Epushd(3,13);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(h_36);
  l_93 :
  Epushd(4,7);
  MoveTop(4,1);
  goto d_81;
  d_81 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto e_81;
  e_81 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto f_81;
  f_81 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto g_81;
  g_81 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  Rpush(j_36);
  goto m_93;
  j_36 :
  goto i_36;
  m_93 :
  Epushd(5,4);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_x_57);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_w_57);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Tdupl();
  Epushd(6,3);
  Ccall(_stratego_k_57);
  MoveTop(6,1);
  Move(5,2,6,1);
  Ccall(_stratego_k_57);
  MoveTop(6,2);
  Move(5,3,6,2);
  Ccall(_stratego_k_57);
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
  Cpush(l_36);
  Epushd(6,7);
  MoveTop(6,1);
  goto y_80;
  y_80 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto z_80;
  z_80 :
  TestInt(6,2,0,&&fail);
  goto a_81;
  a_81 :
  TestFunFC(p_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto b_81;
  b_81 :
  TestFunFC(p_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto c_81;
  c_81 :
  TestFunFC(s_0,&&fail,Egetd(6,7));
  Rpush(n_36);
  goto t_93;
  n_36 :
  goto m_36;
  t_93 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  m_36 :
  Epopd(6,7);
  goto k_36;
  l_36 :
  Rpush(p_36);
  goto l_93;
  p_36 :
  goto o_36;
  k_36 :
  Cpop();
  o_36 :
  Epopd(5,4);
  Return();
  i_36 :
  Epopd(4,7);
  Return();
  h_36 :
  Rpush(r_36);
  u_93 :
  Cpush(t_36);
  Epushd(4,8);
  MoveTop(4,1);
  Rpush(u_36);
  w_93 :
  Cpush(w_36);
  Ccall(_stratego_n_56);
  goto v_36;
  w_36 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto j_81;
  j_81 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(b_37);
  goto x_93;
  b_37 :
  goto y_36;
  x_93 :
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Return();
  y_36 :
  Epopd(5,3);
  OneNextSon();
  Rpush(k_37);
  goto w_93;
  k_37 :
  AllBuild();
  goto x_36;
  v_36 :
  Cpop();
  x_36 :
  Return();
  u_36 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(l_37);
  z_93 :
  Cpush(n_37);
  Ccall(_stratego_n_56);
  goto m_37;
  n_37 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto m_81;
  m_81 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(t_37);
  goto a_94;
  t_37 :
  goto s_37;
  a_94 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Return();
  s_37 :
  Epopd(5,3);
  OneNextSon();
  Rpush(u_37);
  goto z_93;
  u_37 :
  AllBuild();
  goto p_37;
  m_37 :
  Cpop();
  p_37 :
  Return();
  l_37 :
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
  Rpush(w_37);
  goto u_93;
  w_37 :
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  MoveTop(4,4);
  goto p_81;
  p_81 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto q_81;
  q_81 :
  TestFunFC(p_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto r_81;
  r_81 :
  TestFunFC(s_0,&&fail,Egetd(4,8));
  Rpush(x_37);
  goto c_94;
  x_37 :
  goto v_37;
  c_94 :
  NotNULLd(4,5);
  NotNULLd(4,7);
  Tset(App2("TCons",Egetd(4,5),Egetd(4,7)));
  Return();
  v_37 :
  Epopd(4,8);
  goto s_36;
  t_36 :
  Rpush(z_37);
  d_94 :
  Cpush(b_38);
  Ccall(_stratego_n_56);
  goto a_38;
  b_38 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_57);
  OneNextSon();
  Rpush(d_38);
  goto d_94;
  d_38 :
  AllBuild();
  goto c_38;
  a_38 :
  Cpop();
  c_38 :
  Return();
  z_37 :
  Tset(App0("TNil"));
  goto y_37;
  s_36 :
  Cpop();
  y_37 :
  Return();
  r_36 :
  MoveTop(3,1);
  goto t_81;
  t_81 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto u_81;
  u_81 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto v_81;
  v_81 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto w_81;
  w_81 :
  TestFunFC(p_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto x_81;
  x_81 :
  TestFunFC(p_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto y_81;
  y_81 :
  TestFunFC(p_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto z_81;
  z_81 :
  TestFunFC(s_0,&&fail,Egetd(3,13));
  Rpush(e_38);
  goto e_94;
  e_38 :
  goto q_36;
  e_94 :
  Move(1,2,3,2);
  Move(1,3,3,4);
  Move(1,4,3,6);
  Move(1,5,3,8);
  Move(1,6,3,10);
  Move(1,7,3,12);
  Return();
  q_36 :
  Epopd(3,13);
  Return();
  c_36 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  MoveTop(1,8);
  goto f_82;
  f_82 :
  TestFunFC(p_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto g_82;
  g_82 :
  TestFunFC(p_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto h_82;
  h_82 :
  TestFunFC(s_0,&&fail,Egetd(1,12));
  Rpush(j_38);
  goto f_94;
  j_38 :
  goto i_38;
  f_94 :
  Epushd(2,1);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  Rpush(n_38);
  g_94 :
  Cpush(p_38);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_38);
  goto g_94;
  q_38 :
  AllBuild();
  goto o_38;
  p_38 :
  Ccall(_stratego_n_56);
  NotNULLd(1,11);
  Tset(Egetd(1,11));
  goto w_38;
  o_38 :
  Cpop();
  w_38 :
  Return();
  n_38 :
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
  i_38 :
  Epopd(1,12);
  Return();
  u_32 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_w_57)
  _ST_subt();
ENDPROC

PROC(_stratego_x_57)
  _ST_geq();
ENDPROC

PROC(_stratego_y_57)
  _ST_add();
ENDPROC

PROC(_stratego_z_57)
  Rpush(e_39);
  w_95 :
  Epushd(0,3);
  MoveTop(0,1);
  goto o_95;
  o_95 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto p_95;
  p_95 :
  TestFunFC(w_0,&&i_39,Egetd(0,3));
  Cpush(l_39);
  Rpush(m_39);
  goto x_95;
  m_39 :
  goto j_39;
  l_39 :
  Rpush(o_39);
  goto y_95;
  o_39 :
  goto n_39;
  j_39 :
  Cpop();
  n_39 :
  goto h_39;
  i_39 :
  Rpush(h_39);
  goto y_95;
  h_39 :
  goto g_39;
  y_95 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_39);
  goto w_95;
  q_39 :
  Return();
  g_39 :
  goto f_39;
  x_95 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  f_39 :
  Epopd(0,3);
  Return();
  e_39 :
ENDPROC

PROC(_stratego_a_58)
  Rpush(s_39);
  j_96 :
  Cpush(z_39);
  Ccall(_stratego_n_56);
  Tset(MakeInt(0));
  goto y_39;
  z_39 :
  Epushd(0,3);
  MoveTop(0,1);
  goto b_96;
  b_96 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(j_40);
  goto k_96;
  j_40 :
  goto e_40;
  k_96 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_40);
  goto j_96;
  k_40 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_57);
  Epopd(1,1);
  Return();
  e_40 :
  Epopd(0,3);
  goto d_40;
  y_39 :
  Cpop();
  d_40 :
  Return();
  s_39 :
ENDPROC

PROC(_stratego_b_58)
  Epushd(0,6);
  MoveTop(0,1);
  goto u_96;
  u_96 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto v_96;
  v_96 :
  TestFunFC(w_0,&&p_40,Egetd(0,6));
  goto w_96;
  w_96 :
  TestFunFC(t_9,&&q_40,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Cpush(t_40);
  Rpush(u_40);
  goto x_97;
  u_40 :
  goto r_40;
  t_40 :
  Rpush(y_40);
  goto y_97;
  y_40 :
  goto x_40;
  r_40 :
  Cpop();
  x_40 :
  goto o_40;
  q_40 :
  Rpush(o_40);
  goto x_97;
  p_40 :
  goto x_96;
  x_96 :
  TestFunFC(t_9,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(o_40);
  goto y_97;
  o_40 :
  goto n_40;
  y_97 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(a_41);
  z_97 :
  Cpush(c_41);
  Ccall(_stratego_n_56);
  goto b_41;
  c_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_57);
  OneNextSon();
  Rpush(e_41);
  goto z_97;
  e_41 :
  AllBuild();
  goto d_41;
  b_41 :
  Cpop();
  d_41 :
  Return();
  a_41 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(f_41);
  b_98 :
  Cpush(l_41);
  Ccall(_stratego_n_56);
  goto g_41;
  l_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Call",App1("SVar",Egetd(3,1)),App0("Nil")));
  Epopd(3,1);
  OneNextSon();
  Rpush(p_41);
  goto b_98;
  p_41 :
  AllBuild();
  goto o_41;
  g_41 :
  Cpop();
  o_41 :
  Return();
  f_41 :
  MoveTop(2,2);
  Move(1,2,2,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(q_41);
  e_98 :
  Cpush(t_41);
  Ccall(_stratego_n_56);
  goto s_41;
  t_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto s_96;
  s_96 :
  TestFunFC(t_9,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(b_42);
  goto f_98;
  b_42 :
  goto a_42;
  f_98 :
  Epushd(4,2);
  Move(0,3,3,2);
  Move(4,1,3,3);
  Move(4,2,3,4);
  NotNULLd(4,1);
  NotNULLd(1,2);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(1,2),App2("TCons",Egetd(4,2),App0("TNil")))));
  Ccall(_stratego_c_58);
  Epopd(4,2);
  Return();
  a_42 :
  Epopd(3,4);
  OneNextSon();
  Rpush(c_42);
  goto e_98;
  c_42 :
  AllBuild();
  goto z_41;
  s_41 :
  Cpop();
  z_41 :
  Return();
  q_41 :
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
  n_40 :
  goto l_40;
  x_97 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  l_40 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_c_58)
  Epushd(0,5);
  Ccall(_stratego_d_58);
  MoveTop(0,1);
  goto p_98;
  p_98 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto q_98;
  q_98 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto r_98;
  r_98 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(j_42);
  goto k_99;
  j_42 :
  goto f_42;
  k_99 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(k_42);
  l_99 :
  Cpush(m_42);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto m_98;
  m_98 :
  TestFunFC(p_42,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto n_98;
  n_98 :
  TestFunFC(h_26,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto o_98;
  o_98 :
  TestFunFC(w_0,&&fail,Egetd(2,4));
  Rpush(o_42);
  goto n_99;
  o_42 :
  goto n_42;
  n_99 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Move(1,2,2,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  n_42 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_r_57);
  Epopd(1,3);
  goto l_42;
  m_42 :
  AllInit();
  r_42 :
  AllNextSon(&&s_42);
  Rpush(t_42);
  goto l_99;
  t_42 :
  goto r_42;
  s_42 :
  AllBuild();
  goto q_42;
  l_42 :
  Cpop();
  q_42 :
  Return();
  k_42 :
  Return();
  f_42 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_58)
  Epushd(0,7);
  MoveTop(0,1);
  goto h_100;
  h_100 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_100;
  i_100 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_100;
  j_100 :
  TestFunFC(s_0,&&y_42,Egetd(0,5));
  Rpush(x_42);
  goto v_101;
  y_42 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto k_100;
  k_100 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(x_42);
  goto w_101;
  x_42 :
  goto w_42;
  w_101 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(z_42);
  x_101 :
  Epushd(2,9);
  MoveTop(2,1);
  goto y_99;
  y_99 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto z_99;
  z_99 :
  TestFunFC(w_0,&&e_43,Egetd(2,2));
  goto a_100;
  a_100 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto b_100;
  b_100 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto c_100;
  c_100 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(d_43);
  goto y_101;
  e_43 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto d_100;
  d_100 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto e_100;
  e_100 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto f_100;
  f_100 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(d_43);
  goto z_101;
  d_43 :
  goto c_43;
  z_101 :
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
  Rpush(g_43);
  goto x_101;
  g_43 :
  OneNextSon();
  Ccall(_stratego_e_57);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto v_99;
  v_99 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto w_99;
  w_99 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto x_99;
  x_99 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(h_43);
  goto a_102;
  h_43 :
  goto f_43;
  a_102 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  f_43 :
  Epopd(3,5);
  Return();
  c_43 :
  goto a_43;
  y_101 :
  Tset(App0("Nil"));
  Return();
  a_43 :
  Epopd(2,9);
  Return();
  z_42 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  w_42 :
  goto v_42;
  v_101 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  v_42 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_e_58)
  Rpush(i_43);
  x_113 :
  Epushd(0,8);
  MoveTop(0,1);
  Cpush(k_43);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_102;
  f_102 :
  TestFunFC(p_42,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_102;
  g_102 :
  TestFunFC(h_26,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_43);
  goto z_113;
  p_43 :
  goto n_43;
  z_113 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_a_58);
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  Tset(App2("Cons",App2("TCons",Egetd(1,3),App2("TCons",Egetd(2,1),App0("TNil"))),App0("Nil")));
  Epopd(2,1);
  Return();
  n_43 :
  Epopd(1,4);
  goto j_43;
  k_43 :
  Tset(App0("Nil"));
  goto x_43;
  j_43 :
  Cpop();
  x_43 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(a_44);
  Epushd(1,3);
  Tdupl();
  Epushd(2,8);
  MoveTop(2,5);
  goto l_102;
  l_102 :
  TestFunFC(q_24,&&h_44,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto m_102;
  m_102 :
  TestFunFC(t_9,&&fail,Egetd(2,6));
  MoveArg(2,1,2,6,0);
  MoveArg(2,2,2,6,1);
  MoveArg(2,3,2,6,2);
  Rpush(g_44);
  goto c_114;
  h_44 :
  TestFunFC(t_9,&&j_44,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  MoveArg(2,4,2,5,2);
  Rpush(g_44);
  goto d_114;
  j_44 :
  TestFunFC(s_24,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  Rpush(g_44);
  goto e_114;
  g_44 :
  goto d_44;
  e_114 :
  NotNULLd(2,6);
  Tset(App2("Cons",Egetd(2,6),App0("Nil")));
  Return();
  d_44 :
  goto c_44;
  d_114 :
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Return();
  c_44 :
  goto b_44;
  c_114 :
  NotNULLd(2,1);
  Tset(App2("Cons",Egetd(2,1),App0("Nil")));
  Return();
  b_44 :
  MoveTop(2,8);
  Move(1,1,2,8);
  Epopd(2,8);
  Tpop();
  Cpush(n_44);
  TestFunTop(q_24);
  TravInit();
  OneNextSon();
  TestFunTop(t_9);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Rpush(o_44);
  goto x_113;
  o_44 :
  AllBuild();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(p_44);
  goto x_113;
  p_44 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto c_103;
  c_103 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_103;
  d_103 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto e_103;
  e_103 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(r_44);
  goto j_114;
  r_44 :
  goto q_44;
  j_114 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(t_44);
  k_114 :
  Cpush(z_44);
  Ccall(_stratego_n_56);
  goto y_44;
  z_44 :
  Ccontinue(c_45);
  Epushd(3,3);
  MoveTop(3,1);
  goto b_103;
  b_103 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(f_45);
  goto l_114;
  f_45 :
  goto d_45;
  l_114 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(g_45);
  m_114 :
  Cpush(i_45);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto v_102;
  v_102 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto w_102;
  w_102 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto x_102;
  x_102 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto y_102;
  y_102 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  goto z_102;
  z_102 :
  TestFunFC(p_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto a_103;
  a_103 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(s_45);
  goto o_114;
  s_45 :
  goto m_45;
  o_114 :
  Move(4,4,4,9);
  Return();
  m_45 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto h_45;
  i_45 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_45);
  goto m_114;
  u_45 :
  AllBuild();
  goto t_45;
  h_45 :
  Cpop();
  t_45 :
  Return();
  g_45 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(y_45);
  goto k_114;
  y_45 :
  Return();
  d_45 :
  Epopd(3,3);
  goto y_44;
  c_45 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_46);
  goto k_114;
  g_46 :
  AllBuild();
  goto f_46;
  y_44 :
  Cpop();
  f_46 :
  Return();
  t_44 :
  Return();
  q_44 :
  Epopd(2,7);
  AllBuild();
  goto k_44;
  n_44 :
  Ccontinue(j_46);
  TestFunTop(t_9);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(l_46);
  goto x_113;
  l_46 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto t_103;
  t_103 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto u_103;
  u_103 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto v_103;
  v_103 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(q_46);
  goto s_114;
  q_46 :
  goto p_46;
  s_114 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(r_46);
  t_114 :
  Cpush(e_47);
  Ccall(_stratego_n_56);
  goto d_47;
  e_47 :
  Ccontinue(w_47);
  Epushd(3,3);
  MoveTop(3,1);
  goto s_103;
  s_103 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_47);
  goto u_114;
  y_47 :
  goto x_47;
  u_114 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(s_48);
  v_114 :
  Cpush(u_48);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto m_103;
  m_103 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto n_103;
  n_103 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto o_103;
  o_103 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto p_103;
  p_103 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  goto q_103;
  q_103 :
  TestFunFC(p_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto r_103;
  r_103 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(b_49);
  goto x_114;
  b_49 :
  goto v_48;
  x_114 :
  Move(4,4,4,9);
  Return();
  v_48 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto t_48;
  u_48 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_49);
  goto v_114;
  e_49 :
  AllBuild();
  goto c_49;
  t_48 :
  Cpop();
  c_49 :
  Return();
  s_48 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(k_49);
  goto t_114;
  k_49 :
  Return();
  x_47 :
  Epopd(3,3);
  goto d_47;
  w_47 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_49);
  goto t_114;
  t_49 :
  AllBuild();
  goto l_49;
  d_47 :
  Cpop();
  l_49 :
  Return();
  r_46 :
  Return();
  p_46 :
  Epopd(2,7);
  AllBuild();
  goto k_44;
  j_46 :
  TestFunTop(s_24);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(x_49);
  goto x_113;
  x_49 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto k_104;
  k_104 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_104;
  l_104 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto m_104;
  m_104 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(h_50);
  goto b_115;
  h_50 :
  goto g_50;
  b_115 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(i_50);
  c_115 :
  Cpush(k_50);
  Ccall(_stratego_n_56);
  goto j_50;
  k_50 :
  Ccontinue(n_50);
  Epushd(3,3);
  MoveTop(3,1);
  goto j_104;
  j_104 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_50);
  goto d_115;
  p_50 :
  goto o_50;
  d_115 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(q_50);
  e_115 :
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
  goto d_104;
  d_104 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto e_104;
  e_104 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto f_104;
  f_104 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto g_104;
  g_104 :
  TestFunFC(s_0,&&fail,Egetd(4,7));
  goto h_104;
  h_104 :
  TestFunFC(p_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto i_104;
  i_104 :
  TestFunFC(s_0,&&fail,Egetd(4,10));
  Rpush(u_50);
  goto g_115;
  u_50 :
  goto t_50;
  g_115 :
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
  goto e_115;
  w_50 :
  AllBuild();
  goto v_50;
  r_50 :
  Cpop();
  v_50 :
  Return();
  q_50 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(x_50);
  goto c_115;
  x_50 :
  Return();
  o_50 :
  Epopd(3,3);
  goto j_50;
  n_50 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_51);
  goto c_115;
  k_51 :
  AllBuild();
  goto y_50;
  j_50 :
  Cpop();
  y_50 :
  Return();
  i_50 :
  Return();
  g_50 :
  Epopd(2,7);
  AllBuild();
  goto w_49;
  k_44 :
  Cpop();
  w_49 :
  MoveTop(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto p_104;
  p_104 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_104;
  q_104 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_104;
  r_104 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(m_51);
  goto i_115;
  m_51 :
  goto l_51;
  i_115 :
  Move(1,3,2,4);
  Return();
  l_51 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(q_51);
  j_115 :
  Cpush(s_51);
  Ccall(_stratego_n_56);
  Tset(App0("Nil"));
  goto r_51;
  s_51 :
  Epushd(2,3);
  MoveTop(2,1);
  goto d_105;
  d_105 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(i_52);
  goto k_115;
  i_52 :
  goto c_52;
  k_115 :
  Epushd(3,6);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(j_52);
  goto j_115;
  j_52 :
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(3,2);
  goto a_105;
  a_105 :
  TestFunFC(p_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto b_105;
  b_105 :
  TestFunFC(p_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto c_105;
  c_105 :
  TestFunFC(s_0,&&fail,Egetd(3,6));
  Rpush(l_52);
  goto n_115;
  l_52 :
  goto k_52;
  n_115 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(m_52);
  o_115 :
  Cpush(o_52);
  Ccall(_stratego_n_56);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  goto n_52;
  o_52 :
  Ccontinue(p_52);
  Epushd(4,3);
  MoveTop(4,1);
  goto z_104;
  z_104 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(r_52);
  goto p_115;
  r_52 :
  goto q_52;
  p_115 :
  Tdupl();
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(s_52);
  q_115 :
  Cpush(u_52);
  Epushd(5,3);
  MoveTop(5,1);
  goto y_104;
  y_104 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(w_52);
  goto r_115;
  w_52 :
  goto v_52;
  r_115 :
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
  goto q_115;
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
  goto o_115;
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
  Rpush(b_53);
  goto o_115;
  b_53 :
  AllBuild();
  goto a_53;
  n_52 :
  Cpop();
  a_53 :
  Return();
  m_52 :
  Return();
  k_52 :
  Epopd(3,6);
  Return();
  c_52 :
  Epopd(2,3);
  goto x_51;
  r_51 :
  Cpop();
  x_51 :
  Return();
  q_51 :
  Epopd(1,3);
  goto y_43;
  a_44 :
  Epushd(1,2);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  _ST_explode_term();
  MoveTop(2,1);
  goto g_105;
  g_105 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto h_105;
  h_105 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto i_105;
  i_105 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(e_53);
  goto t_115;
  e_53 :
  goto d_53;
  t_115 :
  Move(1,2,2,4);
  Return();
  d_53 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(f_53);
  u_115 :
  Cpush(h_53);
  Ccall(_stratego_n_56);
  Tset(App0("Nil"));
  goto g_53;
  h_53 :
  Epushd(2,3);
  MoveTop(2,1);
  goto u_105;
  u_105 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(k_53);
  goto v_115;
  k_53 :
  goto j_53;
  v_115 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(l_53);
  goto x_113;
  l_53 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(m_53);
  goto u_115;
  m_53 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto r_105;
  r_105 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto s_105;
  s_105 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto t_105;
  t_105 :
  TestFunFC(s_0,&&fail,Egetd(3,7));
  Rpush(o_53);
  goto y_115;
  o_53 :
  goto n_53;
  y_115 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(p_53);
  z_115 :
  Cpush(r_53);
  Ccall(_stratego_n_56);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto q_53;
  r_53 :
  Ccontinue(s_53);
  Epushd(4,3);
  MoveTop(4,1);
  goto q_105;
  q_105 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(u_53);
  goto a_116;
  u_53 :
  goto t_53;
  a_116 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(v_53);
  b_116 :
  Cpush(x_53);
  Epushd(5,3);
  MoveTop(5,1);
  goto p_105;
  p_105 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(z_53);
  goto c_116;
  z_53 :
  goto y_53;
  c_116 :
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
  goto b_116;
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
  goto z_115;
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
  goto z_115;
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
  y_43 :
  Cpop();
  c_53 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  MoveTop(0,4);
  goto b_106;
  b_106 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto c_106;
  c_106 :
  TestFunFC(p_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto d_106;
  d_106 :
  TestFunFC(s_0,&&fail,Egetd(0,8));
  Rpush(g_54);
  goto e_116;
  g_54 :
  goto f_54;
  e_116 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(h_54);
  f_116 :
  Cpush(j_54);
  Ccall(_stratego_n_56);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  goto i_54;
  j_54 :
  Ccontinue(k_54);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_106;
  a_106 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(m_54);
  goto g_116;
  m_54 :
  goto l_54;
  g_116 :
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(n_54);
  h_116 :
  Cpush(p_54);
  Epushd(2,3);
  MoveTop(2,1);
  goto z_105;
  z_105 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(r_54);
  goto i_116;
  r_54 :
  goto q_54;
  i_116 :
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
  goto h_116;
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
  goto f_116;
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
  goto f_116;
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
  i_43 :
ENDPROC

PROC(_stratego_f_58)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_u_56);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_g_58)
  Rpush(x_54);
  v_116 :
  Cpush(z_54);
  Ccall(_stratego_n_56);
  goto y_54;
  z_54 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(t_9);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_58);
  AllBuild();
  OneNextSon();
  Rpush(b_55);
  goto v_116;
  b_55 :
  AllBuild();
  goto a_55;
  y_54 :
  Cpop();
  a_55 :
  Return();
  x_54 :
ENDPROC

PROC(_stratego_h_58)
  Rpush(c_55);
  f_117 :
  Cpush(e_55);
  Ccall(_stratego_i_58);
  goto d_55;
  e_55 :
  goto f_55;
  d_55 :
  Cpop();
  f_55 :
  Cpush(h_55);
  g_55 :
  Cpush(j_55);
  Ccall(_stratego_o_58);
  goto i_55;
  j_55 :
  Ccontinue(k_55);
  Cpush(m_55);
  Ccall(_stratego_p_58);
  goto l_55;
  m_55 :
  Ccontinue(n_55);
  Epushd(0,4);
  MoveTop(0,1);
  goto x_116;
  x_116 :
  TestFunFC(q_55,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto y_116;
  y_116 :
  TestFunFC(r_55,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_55);
  goto h_117;
  p_55 :
  goto o_55;
  h_117 :
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,4)),Egetd(0,3)));
  Return();
  o_55 :
  Epopd(0,4);
  goto l_55;
  n_55 :
  Ccall(_stratego_q_58);
  goto s_55;
  l_55 :
  Cpop();
  s_55 :
  goto i_55;
  k_55 :
  Ccall(_stratego_r_58);
  goto t_55;
  i_55 :
  Cpop();
  t_55 :
  Tduplinv();
  goto g_55;
  h_55 :
  AllInit();
  u_55 :
  AllNextSon(&&w_55);
  Rpush(x_55);
  goto f_117;
  x_55 :
  goto u_55;
  w_55 :
  AllBuild();
  Return();
  c_55 :
ENDPROC

PROC(_stratego_i_58)
  Rpush(y_55);
  i_117 :
  Cpush(a_56);
  Cpush(c_56);
  Ccall(_stratego_j_58);
  Rpush(d_56);
  goto i_117;
  d_56 :
  goto b_56;
  c_56 :
  Ccontinue(e_56);
  TestFunTop(o_12);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_56);
  goto i_117;
  f_56 :
  AllBuild();
  goto b_56;
  e_56 :
  Ccall(_stratego_k_58);
  goto g_56;
  b_56 :
  Cpop();
  g_56 :
  goto z_55;
  a_56 :
  goto h_56;
  z_55 :
  Cpop();
  h_56 :
  Return();
  y_55 :
ENDPROC

PROC(_stratego_j_58)
  Epushd(0,5);
  MoveTop(0,1);
  goto v_117;
  v_117 :
  TestFunFC(k_56,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto w_117;
  w_117 :
  TestFunFC(t_18,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(j_56);
  goto c_119;
  j_56 :
  goto i_56;
  c_119 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_k_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(l_56);
  e_119 :
  Cpush(q_56);
  Epushd(2,5);
  MoveTop(2,1);
  goto m_117;
  m_117 :
  TestFunFC(u_58,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto n_117;
  n_117 :
  TestFunFC(m_12,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(t_58);
  goto f_119;
  t_58 :
  goto s_58;
  f_119 :
  Move(1,4,2,3);
  Move(1,2,2,4);
  Move(1,3,2,5);
  NotNULLd(1,4);
  Tset(App1("Var",Egetd(1,4)));
  Return();
  s_58 :
  Epopd(2,5);
  goto p_56;
  q_56 :
  IsAppl();
  OneInit();
  k_59 :
  OneNextSon();
  Cpush(k_59);
  Rpush(m_59);
  goto e_119;
  m_59 :
  Cpop();
  OneBuild();
  goto j_59;
  p_56 :
  Cpop();
  j_59 :
  Return();
  l_56 :
  MoveTop(1,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(s_59);
  h_119 :
  Cpush(v_59);
  Epushd(2,7);
  MoveTop(2,1);
  goto q_117;
  q_117 :
  TestFunFC(u_58,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto r_117;
  r_117 :
  TestFunFC(m_12,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto s_117;
  s_117 :
  TestFunFC(p_42,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto t_117;
  t_117 :
  TestFunFC(w_0,&&fail,Egetd(2,7));
  Rpush(c_60);
  goto i_119;
  c_60 :
  goto x_59;
  i_119 :
  Move(1,4,2,3);
  Move(1,6,2,4);
  Move(1,7,2,6);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  x_59 :
  Epopd(2,7);
  goto t_59;
  v_59 :
  IsAppl();
  OneInit();
  g_60 :
  OneNextSon();
  Cpush(g_60);
  Rpush(p_60);
  goto h_119;
  p_60 :
  Cpop();
  OneBuild();
  goto d_60;
  t_59 :
  Cpop();
  d_60 :
  Return();
  s_59 :
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

PROC(_stratego_k_58)
  Epushd(0,5);
  MoveTop(0,1);
  goto m_119;
  m_119 :
  TestFunFC(k_56,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto n_119;
  n_119 :
  TestFunFC(t_18,&&u_60,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(t_60);
  goto z_119;
  u_60 :
  TestFunFC(w_60,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(t_60);
  goto a_120;
  t_60 :
  goto s_60;
  a_120 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",Egetd(0,3),App2("Cons",App1("Where",Egetd(0,5)),App2("Cons",Egetd(0,4),App0("Nil"))))));
  Return();
  s_60 :
  goto q_60;
  z_119 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_l_58);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_m_58);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",App1("Match",Egetd(0,3)),App2("Cons",App1("Where",Egetd(0,5)),App2("Cons",App1("Build",Egetd(0,4)),App0("Nil"))))));
  Return();
  q_60 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_l_58)
  Cpush(x_60);
  Tdupl();
  Rpush(b_61);
  i_120 :
  Epushd(0,4);
  MoveTop(0,2);
  goto d_120;
  d_120 :
  TestFunFC(u_58,&&h_61,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  Rpush(f_61);
  goto j_120;
  h_61 :
  TestFunFC(r_55,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(f_61);
  goto k_120;
  f_61 :
  goto d_61;
  k_120 :
  Return();
  d_61 :
  goto c_61;
  j_120 :
  Return();
  c_61 :
  AllInit();
  m_61 :
  AllNextSon(&&p_61);
  Rpush(q_61);
  goto i_120;
  q_61 :
  goto m_61;
  p_61 :
  AllBuild();
  Epopd(0,4);
  Return();
  b_61 :
  Cpop();
  Crestore();
  Cjump();
  x_60 :
ENDPROC

PROC(_stratego_m_58)
  Cpush(s_61);
  Tdupl();
  Rpush(u_61);
  r_120 :
  Cpush(w_61);
  Epushd(0,4);
  MoveTop(0,1);
  goto m_120;
  m_120 :
  TestFunFC(u_58,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(r_62);
  goto s_120;
  r_62 :
  goto p_62;
  s_120 :
  Return();
  p_62 :
  Epopd(0,4);
  goto v_61;
  w_61 :
  Ccall(_stratego_n_58);
  goto s_62;
  v_61 :
  Cpop();
  s_62 :
  AllInit();
  w_62 :
  AllNextSon(&&x_62);
  Rpush(y_62);
  goto r_120;
  y_62 :
  goto w_62;
  x_62 :
  AllBuild();
  Return();
  u_61 :
  Cpop();
  Crestore();
  Cjump();
  s_61 :
ENDPROC

PROC(_stratego_n_58)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_120;
  u_120 :
  TestFunFC(b_63,&&fail,Egetd(0,1));
  Rpush(a_63);
  goto w_120;
  a_63 :
  goto z_62;
  w_120 :
  Return();
  z_62 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_58)
  Epushd(0,6);
  MoveTop(0,3);
  goto h_121;
  h_121 :
  TestFunFC(e_64,&&a_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto i_121;
  i_121 :
  TestFunFC(w_0,&&g_64,Egetd(0,4));
  Rpush(z_63);
  goto g_122;
  g_64 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(z_63);
  goto h_122;
  a_64 :
  TestFunFC(j_64,&&i_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto j_121;
  j_121 :
  TestFunFC(w_0,&&k_64,Egetd(0,4));
  Rpush(z_63);
  goto i_122;
  k_64 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(z_63);
  goto j_122;
  i_64 :
  TestFunFC(m_64,&&l_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto k_121;
  k_121 :
  TestFunFC(w_0,&&n_64,Egetd(0,4));
  Rpush(z_63);
  goto k_122;
  n_64 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(z_63);
  goto l_122;
  l_64 :
  TestFunFC(t_64,&&p_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(z_63);
  goto m_122;
  p_64 :
  TestFunFC(z_64,&&x_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(z_63);
  goto n_122;
  x_64 :
  TestFunFC(g_65,&&f_65,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(z_63);
  goto o_122;
  f_65 :
  TestFunFC(i_65,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(z_63);
  goto p_122;
  z_63 :
  goto y_63;
  p_122 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  y_63 :
  goto m_63;
  o_122 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  m_63 :
  goto l_63;
  n_122 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  l_63 :
  goto k_63;
  m_122 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  k_63 :
  goto j_63;
  l_122 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  j_63 :
  goto i_63;
  k_122 :
  Tset(App0("Fail"));
  Return();
  i_63 :
  goto f_63;
  j_122 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  f_63 :
  goto e_63;
  i_122 :
  Tset(App0("Fail"));
  Return();
  e_63 :
  goto d_63;
  h_122 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  d_63 :
  goto c_63;
  g_122 :
  Tset(App0("Id"));
  Return();
  c_63 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_p_58)
  Epushd(0,2);
  MoveTop(0,1);
  goto v_122;
  v_122 :
  TestFunFC(q_55,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(k_65);
  goto h_123;
  k_65 :
  goto j_65;
  h_123 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(l_65);
  i_123 :
  Cpush(n_65);
  Epushd(2,4);
  MoveTop(2,1);
  goto s_122;
  s_122 :
  TestFunFC(r_55,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto t_122;
  t_122 :
  TestFunFC(q_55,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(p_65);
  goto j_123;
  p_65 :
  goto o_65;
  j_123 :
  Move(1,2,2,3);
  Move(1,1,2,4);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  o_65 :
  Epopd(2,4);
  goto m_65;
  n_65 :
  IsAppl();
  OneInit();
  b_66 :
  OneNextSon();
  Cpush(b_66);
  Rpush(d_66);
  goto i_123;
  d_66 :
  Cpop();
  OneBuild();
  goto a_66;
  m_65 :
  Cpop();
  a_66 :
  Return();
  l_65 :
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(App1("Build",Egetd(1,3)));
  Epopd(1,3);
  Return();
  j_65 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_q_58)
  Epushd(0,2);
  MoveTop(0,1);
  goto q_123;
  q_123 :
  TestFunFC(q_55,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_66);
  goto d_124;
  f_66 :
  goto e_66;
  d_124 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_k_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(g_66);
  f_124 :
  Cpush(i_66);
  Epushd(2,3);
  MoveTop(2,1);
  goto o_123;
  o_123 :
  TestFunFC(r_55,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(v_66);
  goto g_124;
  v_66 :
  goto u_66;
  g_124 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  u_66 :
  Epopd(2,3);
  goto h_66;
  i_66 :
  IsAppl();
  OneInit();
  x_66 :
  OneNextSon();
  Cpush(x_66);
  Rpush(e_67);
  goto f_124;
  e_67 :
  Cpop();
  OneBuild();
  goto w_66;
  h_66 :
  Cpop();
  w_66 :
  Return();
  g_66 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",Egetd(1,2),Egetd(1,3),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  e_66 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_r_58)
  Epushd(0,3);
  MoveTop(0,1);
  goto t_124;
  t_124 :
  TestFunFC(x_67,&&t_67,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(s_67);
  goto t_125;
  t_67 :
  TestFunFC(q_55,&&y_67,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(s_67);
  goto y_125;
  y_67 :
  TestFunFC(a_68,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(s_67);
  goto d_126;
  s_67 :
  goto n_67;
  d_126 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Prim",ATmakeString("_ST_explode_term")),App2("Seq",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,2),App2("Cons",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,3),App2("Cons",App2("Cong",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Prim",ATmakeString("_ST_mkterm")))));
  Return();
  n_67 :
  goto m_67;
  y_125 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_k_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(i_68);
  a_126 :
  Cpush(k_68);
  Epushd(2,3);
  MoveTop(2,1);
  goto r_124;
  r_124 :
  TestFunFC(q_68,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_68);
  goto b_126;
  o_68 :
  goto m_68;
  b_126 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  m_68 :
  Epopd(2,3);
  goto j_68;
  k_68 :
  IsAppl();
  OneInit();
  t_68 :
  OneNextSon();
  Cpush(t_68);
  Rpush(w_68);
  goto a_126;
  w_68 :
  Cpop();
  OneBuild();
  goto s_68;
  j_68 :
  Cpop();
  s_68 :
  Return();
  i_68 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",App1("Prim",ATmakeString("_ST_mkterm")),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  m_67 :
  goto g_67;
  t_125 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_k_57);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(x_68);
  v_125 :
  Cpush(c_69);
  Epushd(2,3);
  MoveTop(2,1);
  goto n_124;
  n_124 :
  TestFunFC(q_68,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(i_69);
  goto w_125;
  i_69 :
  goto d_69;
  w_125 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  d_69 :
  Epopd(2,3);
  goto b_69;
  c_69 :
  IsAppl();
  OneInit();
  p_69 :
  OneNextSon();
  Cpush(p_69);
  Rpush(v_69);
  goto v_125;
  v_69 :
  Cpop();
  OneBuild();
  goto k_69;
  b_69 :
  Cpop();
  k_69 :
  Return();
  x_68 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App1("Match",Egetd(1,4)),App1("Where",App3("BAM",App1("Prim",ATmakeString("_ST_explode_term")),App1("Var",Egetd(1,1)),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))))))));
  Epopd(1,4);
  Return();
  g_67 :
  Epopd(0,3);
ENDPROC
