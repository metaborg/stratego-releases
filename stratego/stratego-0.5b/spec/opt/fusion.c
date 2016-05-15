#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,o_41);
VARDECL(AFun,t_40);
VARDECL(AFun,z_37);
VARDECL(AFun,y_37);
VARDECL(AFun,w_37);
VARDECL(AFun,u_37);
VARDECL(AFun,n_37);
VARDECL(AFun,k_37);
VARDECL(AFun,h_37);
VARDECL(AFun,v_36);
VARDECL(AFun,h_35);
VARDECL(AFun,h_33);
VARDECL(AFun,d_31);
VARDECL(AFun,m_30);
VARDECL(AFun,w_25);
VARDECL(AFun,j_25);
VARDECL(AFun,d_14);
VARDECL(AFun,e_13);
VARDECL(AFun,c_13);
VARDECL(AFun,f_11);
VARDECL(AFun,e_11);
VARDECL(AFun,y_10);
VARDECL(AFun,x_10);
VARDECL(AFun,v_10);
VARDECL(AFun,u_10);
VARDECL(AFun,g_10);
VARDECL(AFun,f_10);
VARDECL(AFun,e_10);
VARDECL(AFun,d_10);
VARDECL(AFun,c_10);
VARDECL(AFun,b_10);
VARDECL(AFun,a_10);
VARDECL(AFun,j_9);
VARDECL(AFun,b_9);
VARDECL(AFun,o_8);
VARDECL(AFun,t_7);
VARDECL(AFun,f_7);
VARDECL(AFun,v_6);
VARDECL(AFun,p_6);
VARDECL(AFun,m_6);
VARDECL(AFun,h_1);
VARDECL(AFun,d_1);
VARDECL(AFun,t_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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
PROCDECL(_stratego_g_18);
PROCDECL(_stratego_h_18);
PROCDECL(_stratego_i_18);
PROCDECL(_stratego_j_18);
PROCDECL(_stratego_k_18);
PROCDECL(_stratego_l_18);
PROCDECL(_stratego_m_18);
PROCDECL(_stratego_n_18);
PROCDECL(_stratego_o_18);
PROCDECL(_stratego_p_18);
PROCDECL(_stratego_q_18);

PROC(_stratego_init_afuns)
  MOVE(o_41,ATmakeAFun("Explode",2,0));
  MOVE(t_40,ATmakeAFun("ExplodeCong",2,0));
  MOVE(z_37,ATmakeAFun("BAM",3,0));
  MOVE(y_37,ATmakeAFun("AM",2,0));
  MOVE(w_37,ATmakeAFun("MA",2,0));
  MOVE(u_37,ATmakeAFun("BA",2,0));
  MOVE(n_37,ATmakeAFun("Lets",2,0));
  MOVE(k_37,ATmakeAFun("LChoices",1,0));
  MOVE(h_37,ATmakeAFun("Choices",1,0));
  MOVE(v_36,ATmakeAFun("Seqs",1,0));
  MOVE(h_35,ATmakeAFun("Wld",0,0));
  MOVE(h_33,ATmakeAFun("StratRule",3,0));
  MOVE(d_31,ATmakeAFun("Con",3,0));
  MOVE(m_30,ATmakeAFun("SRule",1,0));
  MOVE(w_25,ATmakeAFun("Rule",3,0));
  MOVE(j_25,ATmakeAFun("LRule",1,0));
  MOVE(d_14,ATmakeAFun("Op",2,0));
  MOVE(e_13,ATmakeAFun("Scope",2,0));
  MOVE(c_13,ATmakeAFun("Choice",2,0));
  MOVE(f_11,ATmakeAFun("Var",1,0));
  MOVE(e_11,ATmakeAFun("App",2,0));
  MOVE(y_10,ATmakeAFun("Where",1,0));
  MOVE(x_10,ATmakeAFun("Build",1,0));
  MOVE(v_10,ATmakeAFun("Match",1,0));
  MOVE(u_10,ATmakeAFun("Mark",0,0));
  MOVE(g_10,ATmakeAFun("Id",0,0));
  MOVE(f_10,ATmakeAFun("LChoice",2,0));
  MOVE(e_10,ATmakeAFun("SVar",1,0));
  MOVE(d_10,ATmakeAFun("Call",2,0));
  MOVE(c_10,ATmakeAFun("All",1,0));
  MOVE(b_10,ATmakeAFun("Seq",2,0));
  MOVE(a_10,ATmakeAFun("Rec",2,0));
  MOVE(j_9,ATmakeAFun("Runtime",1,0));
  MOVE(b_9,ATmakeAFun("Silent",0,0));
  MOVE(o_8,ATmakeAFun("Binary",0,0));
  MOVE(t_7,ATmakeAFun("Output",1,0));
  MOVE(f_7,ATmakeAFun("Input",1,0));
  MOVE(v_6,ATmakeAFun("Program",1,0));
  MOVE(p_6,ATmakeAFun("Help",0,0));
  MOVE(m_6,ATmakeAFun("Undefined",1,0));
  MOVE(h_1,ATmakeAFun("Nil",0,0));
  MOVE(d_1,ATmakeAFun("TNil",0,0));
  MOVE(t_0,ATmakeAFun("TCons",2,0));
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
  y_3 :
  Cpush(e_0);
  Cpush(j_0);
  Ccall(_stratego_f_17);
  goto i_0;
  j_0 :
  Ccall(_stratego_g_17);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_0);
  goto y_3;
  l_0 :
  AllBuild();
  goto k_0;
  i_0 :
  Cpop();
  k_0 :
  goto d_0;
  e_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_0);
  goto z_3;
  p_0 :
  goto o_0;
  z_3 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  o_0 :
  Epopd(0,3);
  goto n_0;
  d_0 :
  Cpop();
  n_0 :
  Return();
  b_0 :
  AllBuild();
  Cpush(r_0);
  Ccall(_stratego_h_17);
  goto q_0;
  r_0 :
  Ccontinue(s_0);
  Epushd(0,6);
  Ccall(_stratego_m_17);
  Tdupl();
  Ccall(_stratego_o_17);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(u_0);
  a_4 :
  Cpush(w_0);
  Ccall(_stratego_v_17);
  goto v_0;
  w_0 :
  AllInit();
  y_0 :
  AllNextSon(&&z_0);
  Rpush(a_1);
  goto a_4;
  a_1 :
  goto y_0;
  z_0 :
  AllBuild();
  goto x_0;
  v_0 :
  Cpop();
  x_0 :
  Return();
  u_0 :
  OneNextSon();
  Ccall(_stratego_u_17);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_o_17);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto f_0;
  f_0 :
  TestFunFC(t_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto g_0;
  g_0 :
  TestFunFC(t_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto h_0;
  h_0 :
  TestFunFC(d_1,&&fail,Egetd(0,6));
  Rpush(c_1);
  goto h_4;
  c_1 :
  goto b_1;
  h_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  b_1 :
  Ccall(_stratego_p_17);
  Ccall(_stratego_s_17);
  Epopd(0,6);
  goto q_0;
  s_0 :
  Ccall(_stratego_t_17);
  goto e_1;
  q_0 :
  Cpop();
  e_1 :
ENDPROC

PROC(_stratego_f_17)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_4;
  j_4 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  Rpush(g_1);
  goto l_4;
  g_1 :
  goto f_1;
  l_4 :
  Return();
  f_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_17)
  Epushd(0,5);
  MoveTop(0,3);
  goto e_8;
  e_8 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto f_8;
  f_8 :
  TestFunFC(a_0,&&y_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(a_2);
  Rpush(b_2);
  goto a_19;
  b_2 :
  goto z_1;
  a_2 :
  Ccontinue(c_2);
  Rpush(d_2);
  goto d_19;
  d_2 :
  goto z_1;
  c_2 :
  Ccontinue(e_2);
  Rpush(f_2);
  goto g_19;
  f_2 :
  goto z_1;
  e_2 :
  Ccontinue(g_2);
  Rpush(h_2);
  goto j_19;
  h_2 :
  goto z_1;
  g_2 :
  Ccontinue(i_2);
  Rpush(j_2);
  goto m_19;
  j_2 :
  goto z_1;
  i_2 :
  Ccontinue(k_2);
  Rpush(l_2);
  goto p_19;
  l_2 :
  goto z_1;
  k_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto t_19;
  n_2 :
  goto z_1;
  m_2 :
  Ccontinue(o_2);
  Rpush(p_2);
  goto x_19;
  p_2 :
  goto z_1;
  o_2 :
  Ccontinue(q_2);
  Rpush(r_2);
  goto b_20;
  r_2 :
  goto z_1;
  q_2 :
  Ccontinue(s_2);
  Rpush(t_2);
  goto f_20;
  t_2 :
  goto z_1;
  s_2 :
  Ccontinue(u_2);
  Rpush(v_2);
  goto j_20;
  v_2 :
  goto z_1;
  u_2 :
  Ccontinue(w_2);
  Rpush(x_2);
  goto m_20;
  x_2 :
  goto z_1;
  w_2 :
  Ccontinue(y_2);
  Rpush(z_2);
  goto p_20;
  z_2 :
  goto z_1;
  y_2 :
  Ccontinue(a_3);
  Rpush(b_3);
  goto s_20;
  b_3 :
  goto z_1;
  a_3 :
  Rpush(g_3);
  goto x_20;
  g_3 :
  goto f_3;
  z_1 :
  Cpop();
  f_3 :
  goto x_1;
  y_1 :
  Cpush(j_3);
  Rpush(k_3);
  goto a_19;
  k_3 :
  goto i_3;
  j_3 :
  Ccontinue(m_3);
  Rpush(s_3);
  goto d_19;
  s_3 :
  goto i_3;
  m_3 :
  Ccontinue(t_3);
  Rpush(u_3);
  goto g_19;
  u_3 :
  goto i_3;
  t_3 :
  Ccontinue(v_3);
  Rpush(w_3);
  goto j_19;
  w_3 :
  goto i_3;
  v_3 :
  Ccontinue(x_3);
  Rpush(b_4);
  goto m_19;
  b_4 :
  goto i_3;
  x_3 :
  Ccontinue(c_4);
  Rpush(d_4);
  goto j_20;
  d_4 :
  goto i_3;
  c_4 :
  Ccontinue(e_4);
  Rpush(f_4);
  goto m_20;
  f_4 :
  goto i_3;
  e_4 :
  Ccontinue(g_4);
  Rpush(i_4);
  goto p_20;
  i_4 :
  goto i_3;
  g_4 :
  Ccontinue(m_4);
  Rpush(n_4);
  goto s_20;
  n_4 :
  goto i_3;
  m_4 :
  Rpush(p_4);
  goto x_20;
  p_4 :
  goto o_4;
  i_3 :
  Cpop();
  o_4 :
  goto x_1;
  x_1 :
  goto w_1;
  x_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_8;
  c_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(r_4);
  goto y_20;
  r_4 :
  goto q_4;
  y_20 :
  Return();
  q_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  w_1 :
  goto v_1;
  s_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_7;
  z_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(t_4);
  goto t_20;
  t_4 :
  goto s_4;
  t_20 :
  Return();
  s_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  v_1 :
  goto u_1;
  p_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_7;
  m_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(v_4);
  goto q_20;
  v_4 :
  goto u_4;
  q_20 :
  Return();
  u_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  u_1 :
  goto t_1;
  m_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_7;
  j_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(x_4);
  goto n_20;
  x_4 :
  goto w_4;
  n_20 :
  Return();
  w_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  t_1 :
  goto s_1;
  j_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_7;
  g_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(z_4);
  goto k_20;
  z_4 :
  goto y_4;
  k_20 :
  Return();
  y_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  s_1 :
  goto r_1;
  f_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_6;
  i_6 :
  TestStr(1,1,"--output",&&fail);
  Rpush(b_5);
  goto g_20;
  b_5 :
  goto a_5;
  g_20 :
  Return();
  a_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  r_1 :
  goto q_1;
  b_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_6;
  e_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(e_5);
  goto c_20;
  e_5 :
  goto c_5;
  c_20 :
  Return();
  c_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  q_1 :
  goto p_1;
  x_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_6;
  a_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(h_5);
  goto y_19;
  h_5 :
  goto f_5;
  y_19 :
  Return();
  f_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  p_1 :
  goto o_1;
  t_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_5;
  w_5 :
  TestStr(1,1,"-i",&&fail);
  Rpush(k_5);
  goto u_19;
  k_5 :
  goto i_5;
  u_19 :
  Return();
  i_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  o_1 :
  goto n_1;
  p_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_5;
  s_5 :
  TestStr(1,1,"@version",&&fail);
  Rpush(n_5);
  goto q_19;
  n_5 :
  goto l_5;
  q_19 :
  Return();
  l_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  n_1 :
  goto m_1;
  m_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_5;
  p_5 :
  TestStr(1,1,"--version",&&fail);
  Rpush(q_5);
  goto n_19;
  q_5 :
  goto o_5;
  n_19 :
  Return();
  o_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  m_1 :
  goto l_1;
  j_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_5;
  m_5 :
  TestStr(1,1,"-v",&&fail);
  Rpush(t_5);
  goto k_19;
  t_5 :
  goto r_5;
  k_19 :
  Return();
  r_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  g_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_5;
  j_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(v_5);
  goto h_19;
  v_5 :
  goto u_5;
  h_19 :
  Return();
  u_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  d_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_5;
  g_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(y_5);
  goto e_19;
  y_5 :
  goto x_5;
  e_19 :
  Return();
  x_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  a_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_5;
  d_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(b_6);
  goto b_19;
  b_6 :
  goto z_5;
  b_19 :
  Return();
  z_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  i_1 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_17)
  Tdupl();
  c_6 :
  TestFunTop(a_0);
  Cpush(d_6);
  Arg(0);
  Cpush(h_6);
  Ccall(_stratego_i_17);
  goto g_6;
  h_6 :
  Epushd(0,2);
  MoveTop(0,1);
  goto b_21;
  b_21 :
  TestFunFC(m_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_6);
  goto f_21;
  l_6 :
  goto k_6;
  f_21 :
  Return();
  k_6 :
  Epopd(0,2);
  goto j_6;
  g_6 :
  Cpop();
  j_6 :
  Tpop();
  Cpop();
  goto f_6;
  d_6 :
  Arg(1);
  Tdrop();
  goto c_6;
  f_6 :
  Tpop();
  Ccall(_stratego_j_17);
ENDPROC

PROC(_stratego_i_17)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_21;
  h_21 :
  TestFunFC(p_6,&&fail,Egetd(0,1));
  Rpush(o_6);
  goto j_21;
  o_6 :
  goto n_6;
  j_21 :
  Return();
  n_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_17)
  Epushd(0,1);
  Tdupl();
  Rpush(q_6);
  s_21 :
  Cpush(s_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_21;
  l_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_21;
  m_21 :
  TestFunFC(v_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(u_6);
  goto t_21;
  u_6 :
  goto t_6;
  t_21 :
  Move(0,1,1,3);
  Return();
  t_6 :
  Epopd(1,4);
  goto r_6;
  s_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_6);
  goto s_21;
  x_6 :
  AllBuild();
  goto w_6;
  r_6 :
  Cpop();
  w_6 :
  Return();
  q_6 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_k_17);
  Tset(MakeInt(1));
  Ccall(_stratego_l_17);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_17)
  _ST_printnl();
ENDPROC

PROC(_stratego_l_17)
  _ST_exit();
ENDPROC

PROC(_stratego_m_17)
  Epushd(0,3);
  Tdupl();
  Cpush(z_6);
  Rpush(a_7);
  n_22 :
  Cpush(c_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto v_21;
  v_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto w_21;
  w_21 :
  TestFunFC(f_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_7);
  goto o_22;
  e_7 :
  goto d_7;
  o_22 :
  Move(0,1,1,3);
  Return();
  d_7 :
  Epopd(1,4);
  goto b_7;
  c_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_7);
  goto n_22;
  i_7 :
  AllBuild();
  goto h_7;
  b_7 :
  Cpop();
  h_7 :
  Return();
  a_7 :
  goto y_6;
  z_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto k_7;
  y_6 :
  Cpop();
  k_7 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_n_17);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_n_17)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_o_17)
  _ST_dtime();
ENDPROC

PROC(_stratego_p_17)
  Epushd(0,1);
  Tdupl();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Cpush(n_7);
  Rpush(o_7);
  s_23 :
  Cpush(q_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_22;
  u_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_22;
  v_22 :
  TestFunFC(t_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_7);
  goto t_23;
  s_7 :
  goto r_7;
  t_23 :
  Move(0,1,1,3);
  Return();
  r_7 :
  Epopd(1,4);
  goto p_7;
  q_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_7);
  goto s_23;
  v_7 :
  AllBuild();
  goto u_7;
  p_7 :
  Cpop();
  u_7 :
  Return();
  o_7 :
  goto l_7;
  n_7 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto w_7;
  l_7 :
  Cpop();
  w_7 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_17);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_u_17);
  AllBuild();
  AllBuild();
  Cpush(y_7);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(a_8);
  y_23 :
  Cpush(d_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto b_23;
  b_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_23;
  c_23 :
  TestFunFC(o_8,&&fail,Egetd(1,2));
  Rpush(m_8);
  goto z_23;
  m_8 :
  goto l_8;
  z_23 :
  Return();
  l_8 :
  Epopd(1,3);
  goto b_8;
  d_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_8);
  goto y_23;
  q_8 :
  AllBuild();
  goto p_8;
  b_8 :
  Cpop();
  p_8 :
  Return();
  a_8 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_17);
  OneNextSon();
  Ccall(_stratego_u_17);
  AllBuild();
  AllBuild();
  goto x_7;
  y_7 :
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_17);
  OneNextSon();
  Ccall(_stratego_u_17);
  AllBuild();
  AllBuild();
  goto r_8;
  x_7 :
  Cpop();
  r_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_17)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_r_17)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_s_17)
  Epushd(0,2);
  Tdupl();
  Cpush(t_8);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Cpush(u_8);
  Tdupl();
  Rpush(v_8);
  w_24 :
  Cpush(y_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto b_24;
  b_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_24;
  c_24 :
  TestFunFC(b_9,&&fail,Egetd(1,2));
  Rpush(a_9);
  goto x_24;
  a_9 :
  goto z_8;
  x_24 :
  Return();
  z_8 :
  Epopd(1,3);
  goto w_8;
  y_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_9);
  goto w_24;
  d_9 :
  AllBuild();
  goto c_9;
  w_8 :
  Cpop();
  c_9 :
  Return();
  v_8 :
  Cpop();
  Crestore();
  Cjump();
  u_8 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_17);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(e_9);
  y_24 :
  Cpush(g_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_24;
  e_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_24;
  f_24 :
  TestFunFC(j_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_9);
  goto z_24;
  i_9 :
  goto h_9;
  z_24 :
  Move(0,2,1,3);
  Return();
  h_9 :
  Epopd(1,4);
  goto f_9;
  g_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_9);
  goto y_24;
  l_9 :
  AllBuild();
  goto k_9;
  f_9 :
  Cpop();
  k_9 :
  Return();
  e_9 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_17);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(m_9);
  a_25 :
  Cpush(o_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_24;
  h_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_24;
  i_24 :
  TestFunFC(v_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_9);
  goto b_25;
  q_9 :
  goto p_9;
  b_25 :
  Move(0,1,1,3);
  Return();
  p_9 :
  Epopd(1,4);
  goto n_9;
  o_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_9);
  goto a_25;
  s_9 :
  AllBuild();
  goto r_9;
  n_9 :
  Cpop();
  r_9 :
  Return();
  m_9 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_17);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_k_17);
  goto s_8;
  t_8 :
  goto t_9;
  s_8 :
  Cpop();
  t_9 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_l_17);
  Epopd(0,2);
ENDPROC

PROC(_stratego_t_17)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_k_17);
  Tset(MakeInt(1));
  Ccall(_stratego_l_17);
ENDPROC

PROC(_stratego_u_17)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_25;
  d_25 :
  TestFunFC(d_1,&&fail,Egetd(0,1));
  Rpush(v_9);
  goto f_25;
  v_9 :
  goto u_9;
  f_25 :
  Return();
  u_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_17)
  Epushd(0,1);
  Cpush(x_9);
  Epushd(1,16);
  MoveTop(1,1);
  goto k_25;
  k_25 :
  TestFunFC(a_10,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_25;
  l_25 :
  TestFunFC(b_10,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,9,1,3,1);
  goto m_25;
  m_25 :
  TestFunFC(c_10,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  goto n_25;
  n_25 :
  TestFunFC(d_10,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,8,1,5,1);
  goto o_25;
  o_25 :
  TestFunFC(e_10,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  goto p_25;
  p_25 :
  TestFunFC(h_1,&&fail,Egetd(1,8));
  goto q_25;
  q_25 :
  TestFunFC(f_10,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  MoveArg(1,16,1,9,1);
  goto r_25;
  r_25 :
  TestFunFC(b_10,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto s_25;
  s_25 :
  TestFunFC(d_10,&&fail,Egetd(1,12));
  MoveArg(1,13,1,12,0);
  MoveArg(1,15,1,12,1);
  goto t_25;
  t_25 :
  TestFunFC(e_10,&&fail,Egetd(1,13));
  MoveArg(1,14,1,13,0);
  goto u_25;
  u_25 :
  TestFunFC(h_1,&&fail,Egetd(1,15));
  goto v_25;
  v_25 :
  TestFunFC(g_10,&&fail,Egetd(1,16));
  Rpush(z_9);
  goto g_32;
  z_9 :
  goto y_9;
  g_32 :
  Epushd(2,4);
  Move(1,2,1,7);
  Move(2,1,1,11);
  Move(1,2,1,14);
  Tdupl();
  Epushd(3,3);
  Ccall(_stratego_w_17);
  MoveTop(3,1);
  Move(2,2,3,1);
  Ccall(_stratego_w_17);
  MoveTop(3,2);
  Move(2,3,3,2);
  Ccall(_stratego_w_17);
  MoveTop(3,3);
  Move(2,4,3,3);
  Epopd(3,3);
  Tpop();
  NotNULLd(2,2);
  NotNULLd(2,1);
  NotNULLd(2,4);
  NotNULLd(2,3);
  Tset(App2("Rec",Egetd(2,2),App2("Seq",App1("All",App2("Call",App1("SVar",Egetd(2,2)),App0("Nil"))),App2("Rec",Egetd(2,3),App2("LChoice",App2("Seq",Egetd(2,1),App2("Rec",Egetd(2,4),App2("Seq",App1("All",App2("Call",App1("SVar",Egetd(2,4)),App0("Nil"))),App2("Call",App1("SVar",Egetd(2,3)),App0("Nil"))))),App0("Id"))))));
  Epopd(2,4);
  Return();
  y_9 :
  Epopd(1,16);
  goto w_9;
  x_9 :
  goto h_10;
  w_9 :
  Cpop();
  h_10 :
  TestFunTop(a_10);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(b_10);
  TravInit();
  OneNextSon();
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  TestFunTop(d_10);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto x_25;
  x_25 :
  TestFunFC(e_10,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(j_10);
  goto k_32;
  j_10 :
  goto i_10;
  k_32 :
  Return();
  i_10 :
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_f_17);
  AllBuild();
  AllBuild();
  OneNextSon();
  TestFunTop(a_10);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  OneNextSon();
  TestFunTop(f_10);
  TravInit();
  OneNextSon();
  TestFunTop(b_10);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Seq",App0("Mark"),Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  TestFunTop(a_10);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(b_10);
  TravInit();
  OneNextSon();
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  TestFunTop(d_10);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto k_26;
  k_26 :
  TestFunFC(e_10,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(l_10);
  goto n_32;
  l_10 :
  goto k_10;
  n_32 :
  Return();
  k_10 :
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_f_17);
  AllBuild();
  AllBuild();
  OneNextSon();
  TestFunTop(d_10);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto m_26;
  m_26 :
  TestFunFC(e_10,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(n_10);
  goto o_32;
  n_10 :
  goto m_10;
  o_32 :
  Move(0,1,1,2);
  Return();
  m_10 :
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_f_17);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_x_17);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  Tdupl();
  Tset(ATmakeString("this looks like an innermost"));
  Ccall(_stratego_q_18);
  Tpop();
  Ccall(_stratego_y_17);
  Ccall(_stratego_z_17);
  Rpush(o_10);
  p_32 :
  Cpush(q_10);
  Epushd(1,10);
  MoveTop(1,1);
  goto x_27;
  x_27 :
  TestFunFC(b_10,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_27;
  y_27 :
  TestFunFC(u_10,&&fail,Egetd(1,2));
  goto z_27;
  z_27 :
  TestFunFC(b_10,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,6,1,3,1);
  goto a_28;
  a_28 :
  TestFunFC(v_10,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  goto b_28;
  b_28 :
  TestFunFC(x_10,&&w_10,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  Rpush(t_10);
  goto q_32;
  w_10 :
  TestFunFC(b_10,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,9,1,6,1);
  goto c_28;
  c_28 :
  TestFunFC(y_10,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  goto d_28;
  d_28 :
  TestFunFC(x_10,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  Rpush(t_10);
  goto z_32;
  t_10 :
  goto s_10;
  z_32 :
  Epushd(2,3);
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Ccall(_stratego_b_18);
  MoveTop(3,1);
  Move(2,1,3,1);
  NotNULLd(1,10);
  Tset(Egetd(1,10));
  Rpush(z_10);
  b_33 :
  Cpush(b_11);
  Epushd(4,15);
  MoveTop(4,1);
  goto l_27;
  l_27 :
  TestFunFC(e_11,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,14,4,1,1);
  goto m_27;
  m_27 :
  TestFunFC(a_10,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto n_27;
  n_27 :
  TestFunFC(b_10,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,10,4,4,1);
  goto o_27;
  o_27 :
  TestFunFC(c_10,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  goto p_27;
  p_27 :
  TestFunFC(d_10,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,9,4,6,1);
  goto q_27;
  q_27 :
  TestFunFC(e_10,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  goto r_27;
  r_27 :
  TestFunFC(h_1,&&fail,Egetd(4,9));
  goto s_27;
  s_27 :
  TestFunFC(d_10,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,13,4,10,1);
  goto t_27;
  t_27 :
  TestFunFC(e_10,&&fail,Egetd(4,11));
  MoveArg(4,12,4,11,0);
  goto u_27;
  u_27 :
  TestFunFC(h_1,&&fail,Egetd(4,13));
  goto v_27;
  v_27 :
  TestFunFC(f_11,&&fail,Egetd(4,14));
  MoveArg(4,15,4,14,0);
  Rpush(d_11);
  goto c_33;
  d_11 :
  goto c_11;
  c_33 :
  Tdupl();
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Rpush(g_11);
  d_33 :
  Cpush(i_11);
  Epushd(5,3);
  MoveTop(5,1);
  goto j_27;
  j_27 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(k_11);
  goto e_33;
  k_11 :
  goto j_11;
  e_33 :
  Move(4,15,5,2);
  Return();
  j_11 :
  Epopd(5,3);
  goto h_11;
  i_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_11);
  goto d_33;
  m_11 :
  AllBuild();
  goto l_11;
  h_11 :
  Cpop();
  l_11 :
  Return();
  g_11 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Move(2,2,0,1);
  Tpop();
  NotNULLd(4,15);
  Tset(App1("Var",Egetd(4,15)));
  Return();
  c_11 :
  Epopd(4,15);
  goto a_11;
  b_11 :
  AllInit();
  o_11 :
  AllNextSon(&&p_11);
  Rpush(q_11);
  goto b_33;
  q_11 :
  goto o_11;
  p_11 :
  AllBuild();
  goto n_11;
  a_11 :
  Cpop();
  n_11 :
  Return();
  z_10 :
  MoveTop(3,2);
  Move(2,3,3,2);
  Epopd(3,2);
  Tpop();
  NotNULLd(1,5);
  NotNULLd(1,8);
  NotNULLd(2,3);
  Tset(App2("Seq",App1("Match",Egetd(1,5)),App2("Seq",App1("Where",Egetd(1,8)),App1("Build",Egetd(2,3)))));
  Epopd(2,3);
  Return();
  s_10 :
  goto r_10;
  q_32 :
  Epushd(2,3);
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Ccall(_stratego_b_18);
  MoveTop(3,1);
  Move(2,1,3,1);
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  Rpush(r_11);
  t_32 :
  Cpush(t_11);
  Epushd(4,15);
  MoveTop(4,1);
  goto u_26;
  u_26 :
  TestFunFC(e_11,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,14,4,1,1);
  goto v_26;
  v_26 :
  TestFunFC(a_10,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto w_26;
  w_26 :
  TestFunFC(b_10,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,10,4,4,1);
  goto x_26;
  x_26 :
  TestFunFC(c_10,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  goto y_26;
  y_26 :
  TestFunFC(d_10,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,9,4,6,1);
  goto z_26;
  z_26 :
  TestFunFC(e_10,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  goto a_27;
  a_27 :
  TestFunFC(h_1,&&fail,Egetd(4,9));
  goto b_27;
  b_27 :
  TestFunFC(d_10,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,13,4,10,1);
  goto c_27;
  c_27 :
  TestFunFC(e_10,&&fail,Egetd(4,11));
  MoveArg(4,12,4,11,0);
  goto d_27;
  d_27 :
  TestFunFC(h_1,&&fail,Egetd(4,13));
  goto e_27;
  e_27 :
  TestFunFC(f_11,&&fail,Egetd(4,14));
  MoveArg(4,15,4,14,0);
  Rpush(v_11);
  goto u_32;
  v_11 :
  goto u_11;
  u_32 :
  Tdupl();
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Rpush(x_11);
  v_32 :
  Cpush(z_11);
  Epushd(5,3);
  MoveTop(5,1);
  goto s_26;
  s_26 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(b_12);
  goto w_32;
  b_12 :
  goto a_12;
  w_32 :
  Move(4,15,5,2);
  Return();
  a_12 :
  Epopd(5,3);
  goto y_11;
  z_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_12);
  goto v_32;
  d_12 :
  AllBuild();
  goto c_12;
  y_11 :
  Cpop();
  c_12 :
  Return();
  x_11 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Move(2,2,0,1);
  Tpop();
  NotNULLd(4,15);
  Tset(App1("Var",Egetd(4,15)));
  Return();
  u_11 :
  Epopd(4,15);
  goto s_11;
  t_11 :
  AllInit();
  f_12 :
  AllNextSon(&&h_12);
  Rpush(i_12);
  goto t_32;
  i_12 :
  goto f_12;
  h_12 :
  AllBuild();
  goto e_12;
  s_11 :
  Cpop();
  e_12 :
  Return();
  r_11 :
  MoveTop(3,2);
  Move(2,3,3,2);
  Epopd(3,2);
  Tpop();
  NotNULLd(1,5);
  NotNULLd(2,3);
  Tset(App2("Seq",App1("Match",Egetd(1,5)),App1("Build",Egetd(2,3))));
  Epopd(2,3);
  Return();
  r_10 :
  Epopd(1,10);
  goto p_10;
  q_10 :
  AllInit();
  k_12 :
  AllNextSon(&&m_12);
  Rpush(n_12);
  goto p_32;
  n_12 :
  goto k_12;
  m_12 :
  AllBuild();
  goto j_12;
  p_10 :
  Cpop();
  j_12 :
  Return();
  o_10 :
  Ccall(_stratego_f_18);
  Tdupl();
  Tset(ATmakeString("fused application of innermost"));
  Ccall(_stratego_q_18);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_17)
  _ST_new();
ENDPROC

PROC(_stratego_x_17)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_33;
  i_33 :
  TestFunFC(g_10,&&fail,Egetd(0,1));
  Rpush(p_12);
  goto k_33;
  p_12 :
  goto o_12;
  k_33 :
  Return();
  o_12 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_17)
  Rpush(q_12);
  e_34 :
  AllInit();
  r_12 :
  AllNextSon(&&s_12);
  Rpush(t_12);
  goto e_34;
  t_12 :
  goto r_12;
  s_12 :
  AllBuild();
  Cpush(w_12);
  Epushd(0,5);
  MoveTop(0,1);
  goto o_33;
  o_33 :
  TestFunFC(b_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto p_33;
  p_33 :
  TestFunFC(c_13,&&b_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(a_13);
  goto f_34;
  b_13 :
  TestFunFC(f_10,&&d_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(a_13);
  goto g_34;
  d_13 :
  TestFunFC(e_13,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(a_13);
  goto h_34;
  a_13 :
  goto z_12;
  h_34 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(0,4),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  z_12 :
  goto y_12;
  g_34 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("LChoice",App2("Seq",Egetd(0,2),Egetd(0,4)),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  y_12 :
  goto x_12;
  f_34 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Choice",App2("Seq",Egetd(0,2),Egetd(0,4)),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  x_12 :
  Rpush(f_13);
  goto e_34;
  f_13 :
  Epopd(0,5);
  goto v_12;
  w_12 :
  goto g_13;
  v_12 :
  Cpop();
  g_13 :
  Return();
  q_12 :
ENDPROC

PROC(_stratego_z_17)
  Rpush(h_13);
  l_36 :
  AllInit();
  i_13 :
  AllNextSon(&&j_13);
  Rpush(k_13);
  goto l_36;
  k_13 :
  goto i_13;
  j_13 :
  AllBuild();
  Cpush(m_13);
  Cpush(o_13);
  Epushd(0,5);
  MoveTop(0,1);
  goto l_34;
  l_34 :
  TestFunFC(b_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto m_34;
  m_34 :
  TestFunFC(c_13,&&u_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(t_13);
  goto m_36;
  u_13 :
  TestFunFC(f_10,&&v_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(t_13);
  goto n_36;
  v_13 :
  TestFunFC(e_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(t_13);
  goto o_36;
  t_13 :
  goto s_13;
  o_36 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(0,3),App2("Seq",Egetd(0,4),Egetd(0,5))));
  Return();
  s_13 :
  goto r_13;
  n_36 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("LChoice",App2("Seq",Egetd(0,3),Egetd(0,5)),App2("Seq",Egetd(0,4),Egetd(0,5))));
  Return();
  r_13 :
  goto q_13;
  m_36 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Choice",App2("Seq",Egetd(0,3),Egetd(0,5)),App2("Seq",Egetd(0,4),Egetd(0,5))));
  Return();
  q_13 :
  Epopd(0,5);
  goto n_13;
  o_13 :
  Ccontinue(w_13);
  Ccall(_stratego_a_18);
  goto n_13;
  w_13 :
  Epushd(0,13);
  MoveTop(0,1);
  goto r_34;
  r_34 :
  TestFunFC(b_10,&&c_14,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,11,0,1,1);
  goto s_34;
  s_34 :
  TestFunFC(x_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(b_14);
  goto p_36;
  c_14 :
  TestFunFC(e_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,11,0,1,1);
  goto t_34;
  t_34 :
  TestFunFC(a_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto u_34;
  u_34 :
  TestFunFC(b_10,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,10,0,4,1);
  goto v_34;
  v_34 :
  TestFunFC(c_10,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto w_34;
  w_34 :
  TestFunFC(d_10,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,9,0,6,1);
  goto x_34;
  x_34 :
  TestFunFC(e_10,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  goto y_34;
  y_34 :
  TestFunFC(h_1,&&fail,Egetd(0,9));
  goto z_34;
  z_34 :
  TestFunFC(d_14,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(b_14);
  goto q_36;
  b_14 :
  goto a_14;
  q_36 :
  Epushd(1,4);
  Move(0,3,0,8);
  Move(1,2,0,10);
  Move(1,1,0,12);
  Move(1,3,0,13);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(e_14);
  r_36 :
  Cpush(g_14);
  Ccall(_stratego_f_17);
  goto f_14;
  g_14 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,3);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("App",App2("Rec",Egetd(0,3),App2("Seq",App1("All",App2("Call",App1("SVar",Egetd(0,3)),App0("Nil"))),Egetd(1,2))),Egetd(2,1)));
  Epopd(2,1);
  OneNextSon();
  Rpush(j_14);
  goto r_36;
  j_14 :
  AllBuild();
  goto i_14;
  f_14 :
  Cpop();
  i_14 :
  Return();
  e_14 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("App",Egetd(1,2),App2("Op",Egetd(1,1),Egetd(1,4))));
  Epopd(1,4);
  Return();
  a_14 :
  goto z_13;
  p_36 :
  NotNULLd(0,11);
  NotNULLd(0,3);
  Tset(App1("Build",App2("App",Egetd(0,11),Egetd(0,3))));
  Return();
  z_13 :
  Epopd(0,13);
  goto y_13;
  n_13 :
  Cpop();
  y_13 :
  Rpush(k_14);
  goto l_36;
  k_14 :
  goto l_13;
  m_13 :
  goto l_14;
  l_13 :
  Cpop();
  l_14 :
  Return();
  h_13 :
ENDPROC

PROC(_stratego_a_18)
  Epushd(0,5);
  MoveTop(0,1);
  goto x_36;
  x_36 :
  TestFunFC(c_13,&&q_14,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto y_36;
  y_36 :
  TestFunFC(c_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_14);
  goto p_37;
  q_14 :
  TestFunFC(b_10,&&r_14,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto z_36;
  z_36 :
  TestFunFC(b_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_14);
  goto q_37;
  r_14 :
  TestFunFC(f_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto a_37;
  a_37 :
  TestFunFC(f_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_14);
  goto r_37;
  p_14 :
  goto o_14;
  r_37 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("LChoice",Egetd(0,3),App2("LChoice",Egetd(0,4),Egetd(0,5))));
  Return();
  o_14 :
  goto n_14;
  q_37 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,3),App2("Seq",Egetd(0,4),Egetd(0,5))));
  Return();
  n_14 :
  goto m_14;
  p_37 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Choice",Egetd(0,3),App2("Choice",Egetd(0,4),Egetd(0,5))));
  Return();
  m_14 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_18)
  Rpush(s_14);
  f_42 :
  Cpush(u_14);
  Epushd(0,2);
  MoveTop(0,1);
  goto t_37;
  t_37 :
  TestFunFC(f_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(w_14);
  goto g_42;
  w_14 :
  goto v_14;
  g_42 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  v_14 :
  Epopd(0,2);
  goto t_14;
  u_14 :
  Ccontinue(x_14);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_e_18);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(e_13);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(y_14);
  goto f_42;
  y_14 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_c_18);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto a_38;
  a_38 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_38;
  b_38 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto c_38;
  c_38 :
  TestFunFC(d_1,&&fail,Egetd(1,5));
  Rpush(a_15);
  goto m_42;
  a_15 :
  goto z_14;
  m_42 :
  Move(0,3,1,4);
  Return();
  z_14 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(b_15);
  n_42 :
  Cpush(e_15);
  Ccall(_stratego_f_17);
  Tset(App0("Nil"));
  goto c_15;
  e_15 :
  Epushd(1,3);
  MoveTop(1,1);
  goto o_38;
  o_38 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(h_15);
  goto o_42;
  h_15 :
  goto g_15;
  o_42 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(i_15);
  goto n_42;
  i_15 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto l_38;
  l_38 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto m_38;
  m_38 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto n_38;
  n_38 :
  TestFunFC(d_1,&&fail,Egetd(2,6));
  Rpush(k_15);
  goto r_42;
  k_15 :
  goto j_15;
  r_42 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(m_15);
  s_42 :
  Cpush(o_15);
  Ccall(_stratego_f_17);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto n_15;
  o_15 :
  Ccontinue(p_15);
  Epushd(3,3);
  MoveTop(3,1);
  goto k_38;
  k_38 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_15);
  goto t_42;
  r_15 :
  goto q_15;
  t_42 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(s_15);
  u_42 :
  Cpush(u_15);
  Epushd(4,3);
  MoveTop(4,1);
  goto j_38;
  j_38 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(x_15);
  goto v_42;
  x_15 :
  goto v_15;
  v_42 :
  Move(3,2,4,2);
  Return();
  v_15 :
  Epopd(4,3);
  goto t_15;
  u_15 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_15);
  goto u_42;
  z_15 :
  AllBuild();
  goto y_15;
  t_15 :
  Cpop();
  y_15 :
  Return();
  s_15 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(a_16);
  goto s_42;
  a_16 :
  Return();
  q_15 :
  Epopd(3,3);
  goto n_15;
  p_15 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_16);
  goto s_42;
  c_16 :
  AllBuild();
  goto b_16;
  n_15 :
  Cpop();
  b_16 :
  Return();
  m_15 :
  Return();
  j_15 :
  Epopd(2,6);
  Return();
  g_15 :
  Epopd(1,3);
  goto f_15;
  c_15 :
  Cpop();
  f_15 :
  Return();
  b_15 :
  Epopd(0,3);
  goto t_14;
  x_14 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto s_38;
  s_38 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_38;
  t_38 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto u_38;
  u_38 :
  TestFunFC(d_1,&&fail,Egetd(1,5));
  Rpush(f_16);
  goto x_42;
  f_16 :
  goto e_16;
  x_42 :
  Move(0,2,1,4);
  Return();
  e_16 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(g_16);
  y_42 :
  Cpush(i_16);
  Ccall(_stratego_f_17);
  Tset(App0("Nil"));
  goto h_16;
  i_16 :
  Epushd(1,3);
  MoveTop(1,1);
  goto g_39;
  g_39 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(m_16);
  goto z_42;
  m_16 :
  goto k_16;
  z_42 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(n_16);
  goto f_42;
  n_16 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(o_16);
  goto y_42;
  o_16 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto d_39;
  d_39 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto e_39;
  e_39 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto f_39;
  f_39 :
  TestFunFC(d_1,&&fail,Egetd(2,7));
  Rpush(q_16);
  goto c_43;
  q_16 :
  goto p_16;
  c_43 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(r_16);
  d_43 :
  Cpush(t_16);
  Ccall(_stratego_f_17);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto s_16;
  t_16 :
  Ccontinue(u_16);
  Epushd(3,3);
  MoveTop(3,1);
  goto c_39;
  c_39 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_16);
  goto e_43;
  w_16 :
  goto v_16;
  e_43 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(x_16);
  f_43 :
  Cpush(z_16);
  Epushd(4,3);
  MoveTop(4,1);
  goto b_39;
  b_39 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(b_17);
  goto g_43;
  b_17 :
  goto a_17;
  g_43 :
  Move(3,2,4,2);
  Return();
  a_17 :
  Epopd(4,3);
  goto y_16;
  z_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_17);
  goto f_43;
  d_17 :
  AllBuild();
  goto c_17;
  y_16 :
  Cpop();
  c_17 :
  Return();
  x_16 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(e_17);
  goto d_43;
  e_17 :
  Return();
  v_16 :
  Epopd(3,3);
  goto s_16;
  u_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_18);
  goto d_43;
  t_18 :
  AllBuild();
  goto r_18;
  s_16 :
  Cpop();
  r_18 :
  Return();
  r_16 :
  Return();
  p_16 :
  Epopd(2,7);
  Return();
  k_16 :
  Epopd(1,3);
  goto j_16;
  h_16 :
  Cpop();
  j_16 :
  Return();
  g_16 :
  Epopd(0,2);
  goto d_16;
  t_14 :
  Cpop();
  d_16 :
  Return();
  s_14 :
ENDPROC

PROC(_stratego_c_18)
  Epushd(0,5);
  MoveTop(0,5);
  goto x_43;
  x_43 :
  TestFunFC(t_0,&&y_18,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto y_43;
  y_43 :
  TestFunFC(t_0,&&z_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto z_43;
  z_43 :
  TestFunFC(d_1,&&c_19,Egetd(0,4));
  Cpush(i_19);
  Rpush(l_19);
  goto j_45;
  l_19 :
  goto f_19;
  i_19 :
  Rpush(r_19);
  goto o_45;
  r_19 :
  goto o_19;
  f_19 :
  Cpop();
  o_19 :
  goto w_18;
  c_19 :
  Rpush(w_18);
  goto o_45;
  z_18 :
  Rpush(w_18);
  goto o_45;
  y_18 :
  Rpush(w_18);
  goto o_45;
  w_18 :
  goto v_18;
  o_45 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(s_19);
  p_45 :
  Cpush(w_19);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Cpush(a_20);
  Epushd(1,7);
  MoveTop(1,1);
  goto o_43;
  o_43 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto p_43;
  p_43 :
  TestFunFC(t_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto q_43;
  q_43 :
  TestFunFC(t_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto r_43;
  r_43 :
  TestFunFC(d_1,&&fail,Egetd(1,6));
  Rpush(e_20);
  goto q_45;
  e_20 :
  goto d_20;
  q_45 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  d_20 :
  Epopd(1,7);
  goto z_19;
  a_20 :
  Ccall(_stratego_d_18);
  goto h_20;
  z_19 :
  Cpop();
  h_20 :
  OneNextSon();
  Ccall(_stratego_u_17);
  AllBuild();
  AllBuild();
  goto v_19;
  w_19 :
  Epushd(1,7);
  MoveTop(1,1);
  goto t_43;
  t_43 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_43;
  u_43 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto v_43;
  v_43 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto w_43;
  w_43 :
  TestFunFC(d_1,&&fail,Egetd(1,7));
  Rpush(o_20);
  goto r_45;
  o_20 :
  goto l_20;
  r_45 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  l_20 :
  Epopd(1,7);
  goto i_20;
  v_19 :
  Cpop();
  i_20 :
  Cpush(u_20);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_17);
  OneNextSon();
  Ccall(_stratego_u_17);
  AllBuild();
  AllBuild();
  goto r_20;
  u_20 :
  Rpush(w_20);
  goto p_45;
  w_20 :
  goto v_20;
  r_20 :
  Cpop();
  v_20 :
  Return();
  s_19 :
  Return();
  v_18 :
  goto u_18;
  j_45 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(z_20);
  k_45 :
  Cpush(g_21);
  Ccall(_stratego_f_17);
  goto a_21;
  g_21 :
  Ccontinue(k_21);
  Epushd(1,3);
  MoveTop(1,1);
  goto m_43;
  m_43 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(x_21);
  goto l_45;
  x_21 :
  goto u_21;
  l_45 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(y_21);
  m_45 :
  Cpush(a_22);
  Epushd(2,3);
  MoveTop(2,1);
  goto l_43;
  l_43 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(i_22);
  goto n_45;
  i_22 :
  goto g_22;
  n_45 :
  Move(1,2,2,2);
  Return();
  g_22 :
  Epopd(2,3);
  goto z_21;
  a_22 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_22);
  goto m_45;
  k_22 :
  AllBuild();
  goto j_22;
  z_21 :
  Cpop();
  j_22 :
  Return();
  y_21 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(m_22);
  goto k_45;
  m_22 :
  Return();
  u_21 :
  Epopd(1,3);
  goto a_21;
  k_21 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_22);
  goto k_45;
  q_22 :
  AllBuild();
  goto p_22;
  a_21 :
  Cpop();
  p_22 :
  Return();
  z_20 :
  Return();
  u_18 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_18)
  Epushd(0,7);
  MoveTop(0,1);
  goto u_46;
  u_46 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto v_46;
  v_46 :
  TestFunFC(t_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_46;
  w_46 :
  TestFunFC(t_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_46;
  x_46 :
  TestFunFC(d_1,&&fail,Egetd(0,6));
  Rpush(s_22);
  goto y_48;
  s_22 :
  goto r_22;
  y_48 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto u_45;
  u_45 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_45;
  v_45 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_45;
  w_45 :
  TestFunFC(d_1,&&fail,Egetd(2,5));
  Rpush(w_22);
  goto z_48;
  w_22 :
  goto t_22;
  z_48 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  t_22 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto y_45;
  y_45 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto z_45;
  z_45 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto a_46;
  a_46 :
  TestFunFC(d_1,&&fail,Egetd(2,5));
  Rpush(y_22);
  goto a_49;
  y_22 :
  goto x_22;
  a_49 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  x_22 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(z_22);
  b_49 :
  Epushd(2,9);
  MoveTop(2,1);
  goto h_46;
  h_46 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto i_46;
  i_46 :
  TestFunFC(h_1,&&l_23,Egetd(2,2));
  goto j_46;
  j_46 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto k_46;
  k_46 :
  TestFunFC(h_1,&&fail,Egetd(2,6));
  goto l_46;
  l_46 :
  TestFunFC(d_1,&&fail,Egetd(2,9));
  Rpush(k_23);
  goto c_49;
  l_23 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto m_46;
  m_46 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto n_46;
  n_46 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto o_46;
  o_46 :
  TestFunFC(d_1,&&fail,Egetd(2,9));
  Rpush(k_23);
  goto d_49;
  k_23 :
  goto i_23;
  d_49 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(n_23);
  goto b_49;
  n_23 :
  OneNextSon();
  Ccall(_stratego_u_17);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto e_46;
  e_46 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto f_46;
  f_46 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto g_46;
  g_46 :
  TestFunFC(d_1,&&fail,Egetd(3,5));
  Rpush(o_23);
  goto e_49;
  o_23 :
  goto m_23;
  e_49 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  m_23 :
  Epopd(3,5);
  Return();
  i_23 :
  goto a_23;
  c_49 :
  Tset(App0("Nil"));
  Return();
  a_23 :
  Epopd(2,9);
  Return();
  z_22 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto r_46;
  r_46 :
  TestFunFC(t_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto s_46;
  s_46 :
  TestFunFC(t_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto t_46;
  t_46 :
  TestFunFC(d_1,&&fail,Egetd(1,9));
  Rpush(v_23);
  goto g_49;
  v_23 :
  goto u_23;
  g_49 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(w_23);
  h_49 :
  Cpush(a_24);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_24);
  goto h_49;
  d_24 :
  AllBuild();
  goto x_23;
  a_24 :
  Ccall(_stratego_f_17);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto g_24;
  x_23 :
  Cpop();
  g_24 :
  Return();
  w_23 :
  Return();
  u_23 :
  Epopd(1,9);
  Return();
  r_22 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_e_18)
  Epushd(0,6);
  MoveTop(0,2);
  goto k_49;
  k_49 :
  TestFunFC(e_13,&&i_25,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(h_25);
  goto x_49;
  i_25 :
  TestFunFC(j_25,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto l_49;
  l_49 :
  TestFunFC(w_25,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(h_25);
  goto y_49;
  h_25 :
  goto g_25;
  y_49 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_b_18);
  Return();
  g_25 :
  goto c_25;
  x_49 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  c_25 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_f_18)
  Rpush(y_25);
  i_50 :
  Cpush(a_26);
  Ccall(_stratego_g_18);
  goto z_25;
  a_26 :
  goto b_26;
  z_25 :
  Cpop();
  b_26 :
  Cpush(d_26);
  c_26 :
  Cpush(f_26);
  Ccall(_stratego_m_18);
  goto e_26;
  f_26 :
  Ccontinue(g_26);
  Cpush(i_26);
  Ccall(_stratego_n_18);
  goto h_26;
  i_26 :
  Ccontinue(j_26);
  Epushd(0,4);
  MoveTop(0,1);
  goto a_50;
  a_50 :
  TestFunFC(x_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto b_50;
  b_50 :
  TestFunFC(e_11,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(n_26);
  goto k_50;
  n_26 :
  goto l_26;
  k_50 :
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,4)),Egetd(0,3)));
  Return();
  l_26 :
  Epopd(0,4);
  goto h_26;
  j_26 :
  Ccall(_stratego_o_18);
  goto o_26;
  h_26 :
  Cpop();
  o_26 :
  goto e_26;
  g_26 :
  Ccall(_stratego_p_18);
  goto p_26;
  e_26 :
  Cpop();
  p_26 :
  Tduplinv();
  goto c_26;
  d_26 :
  AllInit();
  q_26 :
  AllNextSon(&&r_26);
  Rpush(t_26);
  goto i_50;
  t_26 :
  goto q_26;
  r_26 :
  AllBuild();
  Return();
  y_25 :
ENDPROC

PROC(_stratego_g_18)
  Rpush(f_27);
  l_50 :
  Cpush(h_27);
  Cpush(k_27);
  Ccall(_stratego_h_18);
  Rpush(w_27);
  goto l_50;
  w_27 :
  goto i_27;
  k_27 :
  Ccontinue(v_28);
  TestFunTop(e_13);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_29);
  goto l_50;
  h_29 :
  AllBuild();
  goto i_27;
  v_28 :
  Ccall(_stratego_i_18);
  goto w_29;
  i_27 :
  Cpop();
  w_29 :
  goto g_27;
  h_27 :
  goto x_29;
  g_27 :
  Cpop();
  x_29 :
  Return();
  f_27 :
ENDPROC

PROC(_stratego_h_18)
  Epushd(0,5);
  MoveTop(0,1);
  goto y_50;
  y_50 :
  TestFunFC(m_30,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto z_50;
  z_50 :
  TestFunFC(w_25,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(i_30);
  goto f_52;
  i_30 :
  goto h_30;
  f_52 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_17);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(n_30);
  h_52 :
  Cpush(w_30);
  Epushd(2,5);
  MoveTop(2,1);
  goto p_50;
  p_50 :
  TestFunFC(d_31,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto q_50;
  q_50 :
  TestFunFC(f_11,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(b_31);
  goto i_52;
  b_31 :
  goto x_30;
  i_52 :
  Move(1,4,2,3);
  Move(1,2,2,4);
  Move(1,3,2,5);
  NotNULLd(1,4);
  Tset(App1("Var",Egetd(1,4)));
  Return();
  x_30 :
  Epopd(2,5);
  goto o_30;
  w_30 :
  IsAppl();
  OneInit();
  f_31 :
  OneNextSon();
  Cpush(f_31);
  Rpush(a_32);
  goto h_52;
  a_32 :
  Cpop();
  OneBuild();
  goto e_31;
  o_30 :
  Cpop();
  e_31 :
  Return();
  n_30 :
  MoveTop(1,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(e_32);
  k_52 :
  Cpush(i_32);
  Epushd(2,7);
  MoveTop(2,1);
  goto t_50;
  t_50 :
  TestFunFC(d_31,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto u_50;
  u_50 :
  TestFunFC(f_11,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto v_50;
  v_50 :
  TestFunFC(d_10,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto w_50;
  w_50 :
  TestFunFC(h_1,&&fail,Egetd(2,7));
  Rpush(l_32);
  goto l_52;
  l_32 :
  goto j_32;
  l_52 :
  Move(1,4,2,3);
  Move(1,6,2,4);
  Move(1,7,2,6);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  j_32 :
  Epopd(2,7);
  goto h_32;
  i_32 :
  IsAppl();
  OneInit();
  r_32 :
  OneNextSon();
  Cpush(r_32);
  Rpush(x_32);
  goto k_52;
  x_32 :
  Cpop();
  OneBuild();
  goto m_32;
  h_32 :
  Cpop();
  m_32 :
  Return();
  e_32 :
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
  h_30 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_i_18)
  Epushd(0,5);
  MoveTop(0,1);
  goto p_52;
  p_52 :
  TestFunFC(m_30,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto q_52;
  q_52 :
  TestFunFC(w_25,&&g_33,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(f_33);
  goto c_53;
  g_33 :
  TestFunFC(h_33,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(f_33);
  goto d_53;
  f_33 :
  goto a_33;
  d_53 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,5),App2("Cons",Egetd(0,4),App0("Nil"))))));
  Return();
  a_33 :
  goto y_32;
  c_53 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_j_18);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_k_18);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",App1("Match",Egetd(0,3)),App2("Cons",Egetd(0,5),App2("Cons",App1("Build",Egetd(0,4)),App0("Nil"))))));
  Return();
  y_32 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_18)
  Cpush(l_33);
  Tdupl();
  Rpush(m_33);
  l_53 :
  Epushd(0,4);
  MoveTop(0,2);
  goto g_53;
  g_53 :
  TestFunFC(d_31,&&x_33,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  Rpush(w_33);
  goto m_53;
  x_33 :
  TestFunFC(e_11,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(w_33);
  goto n_53;
  w_33 :
  goto v_33;
  n_53 :
  Return();
  v_33 :
  goto n_33;
  m_53 :
  Return();
  n_33 :
  AllInit();
  y_33 :
  AllNextSon(&&z_33);
  Rpush(a_34);
  goto l_53;
  a_34 :
  goto y_33;
  z_33 :
  AllBuild();
  Epopd(0,4);
  Return();
  m_33 :
  Cpop();
  Crestore();
  Cjump();
  l_33 :
ENDPROC

PROC(_stratego_k_18)
  Cpush(b_34);
  Tdupl();
  Rpush(c_34);
  u_53 :
  Cpush(i_34);
  Epushd(0,4);
  MoveTop(0,1);
  goto p_53;
  p_53 :
  TestFunFC(d_31,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(k_34);
  goto v_53;
  k_34 :
  goto j_34;
  v_53 :
  Return();
  j_34 :
  Epopd(0,4);
  goto d_34;
  i_34 :
  Ccall(_stratego_l_18);
  goto n_34;
  d_34 :
  Cpop();
  n_34 :
  AllInit();
  o_34 :
  AllNextSon(&&p_34);
  Rpush(q_34);
  goto u_53;
  q_34 :
  goto o_34;
  p_34 :
  AllBuild();
  Return();
  c_34 :
  Cpop();
  Crestore();
  Cjump();
  b_34 :
ENDPROC

PROC(_stratego_l_18)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_53;
  x_53 :
  TestFunFC(h_35,&&fail,Egetd(0,1));
  Rpush(g_35);
  goto z_53;
  g_35 :
  goto f_35;
  z_53 :
  Return();
  f_35 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_18)
  Epushd(0,6);
  MoveTop(0,3);
  goto m_54;
  m_54 :
  TestFunFC(v_36,&&u_36,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto n_54;
  n_54 :
  TestFunFC(h_1,&&w_36,Egetd(0,4));
  Rpush(t_36);
  goto q_55;
  w_36 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(t_36);
  goto r_55;
  u_36 :
  TestFunFC(h_37,&&g_37,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto o_54;
  o_54 :
  TestFunFC(h_1,&&i_37,Egetd(0,4));
  Rpush(t_36);
  goto s_55;
  i_37 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(t_36);
  goto t_55;
  g_37 :
  TestFunFC(k_37,&&j_37,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto p_54;
  p_54 :
  TestFunFC(h_1,&&l_37,Egetd(0,4));
  Rpush(t_36);
  goto u_55;
  l_37 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(t_36);
  goto v_55;
  j_37 :
  TestFunFC(n_37,&&m_37,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_54;
  q_54 :
  TestFunFC(h_1,&&o_37,Egetd(0,4));
  Rpush(t_36);
  goto w_55;
  o_37 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(t_36);
  goto x_55;
  m_37 :
  TestFunFC(u_37,&&s_37,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(t_36);
  goto y_55;
  s_37 :
  TestFunFC(w_37,&&v_37,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(t_36);
  goto z_55;
  v_37 :
  TestFunFC(y_37,&&x_37,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(t_36);
  goto a_56;
  x_37 :
  TestFunFC(z_37,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(t_36);
  goto b_56;
  t_36 :
  goto s_36;
  b_56 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  s_36 :
  goto k_36;
  a_56 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  k_36 :
  goto i_36;
  z_55 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  i_36 :
  goto e_36;
  y_55 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  e_36 :
  goto c_36;
  x_55 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  c_36 :
  goto b_36;
  w_55 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  b_36 :
  goto n_35;
  v_55 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  n_35 :
  goto m_35;
  u_55 :
  Tset(App0("Fail"));
  Return();
  m_35 :
  goto l_35;
  t_55 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  l_35 :
  goto k_35;
  s_55 :
  Tset(App0("Fail"));
  Return();
  k_35 :
  goto j_35;
  r_55 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  j_35 :
  goto i_35;
  q_55 :
  Tset(App0("Id"));
  Return();
  i_35 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_n_18)
  Epushd(0,2);
  MoveTop(0,1);
  goto h_56;
  h_56 :
  TestFunFC(x_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(e_38);
  goto t_56;
  e_38 :
  goto d_38;
  t_56 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(f_38);
  u_56 :
  Cpush(h_38);
  Epushd(2,4);
  MoveTop(2,1);
  goto e_56;
  e_56 :
  TestFunFC(e_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto f_56;
  f_56 :
  TestFunFC(x_10,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(p_38);
  goto v_56;
  p_38 :
  goto i_38;
  v_56 :
  Move(1,2,2,3);
  Move(1,1,2,4);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  i_38 :
  Epopd(2,4);
  goto g_38;
  h_38 :
  IsAppl();
  OneInit();
  r_38 :
  OneNextSon();
  Cpush(r_38);
  Rpush(w_38);
  goto u_56;
  w_38 :
  Cpop();
  OneBuild();
  goto q_38;
  g_38 :
  Cpop();
  q_38 :
  Return();
  f_38 :
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(App1("Build",Egetd(1,3)));
  Epopd(1,3);
  Return();
  d_38 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_o_18)
  Epushd(0,2);
  MoveTop(0,1);
  goto d_57;
  d_57 :
  TestFunFC(x_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(y_38);
  goto r_57;
  y_38 :
  goto x_38;
  r_57 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_17);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(z_38);
  t_57 :
  Cpush(j_39);
  Epushd(2,3);
  MoveTop(2,1);
  goto a_57;
  a_57 :
  TestFunFC(e_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(p_39);
  goto u_57;
  p_39 :
  goto n_39;
  u_57 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  n_39 :
  Epopd(2,3);
  goto a_39;
  j_39 :
  IsAppl();
  OneInit();
  r_39 :
  OneNextSon();
  Cpush(r_39);
  Rpush(d_40);
  goto t_57;
  d_40 :
  Cpop();
  OneBuild();
  goto q_39;
  a_39 :
  Cpop();
  q_39 :
  Return();
  z_38 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",Egetd(1,2),Egetd(1,3),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  x_38 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_18)
  Epushd(0,3);
  MoveTop(0,1);
  goto i_58;
  i_58 :
  TestFunFC(v_10,&&o_40,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_40);
  goto j_59;
  o_40 :
  TestFunFC(x_10,&&p_40,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_40);
  goto o_59;
  p_40 :
  TestFunFC(t_40,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(i_40);
  goto t_59;
  i_40 :
  goto g_40;
  t_59 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Prim",ATmakeString("_ST_explode_term")),App2("Seq",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,2),App2("Cons",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,3),App2("Cons",App2("Cong",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Prim",ATmakeString("_ST_mkterm")))));
  Return();
  g_40 :
  goto f_40;
  o_59 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_17);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(u_40);
  q_59 :
  Cpush(j_41);
  Epushd(2,3);
  MoveTop(2,1);
  goto f_58;
  f_58 :
  TestFunFC(o_41,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(m_41);
  goto r_59;
  m_41 :
  goto k_41;
  r_59 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  k_41 :
  Epopd(2,3);
  goto a_41;
  j_41 :
  IsAppl();
  OneInit();
  v_41 :
  OneNextSon();
  Cpush(v_41);
  Rpush(a_42);
  goto q_59;
  a_42 :
  Cpop();
  OneBuild();
  goto p_41;
  a_41 :
  Cpop();
  p_41 :
  Return();
  u_40 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",App1("Prim",ATmakeString("_ST_mkterm")),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  f_40 :
  goto e_40;
  j_59 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_17);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(b_42);
  l_59 :
  Cpush(i_42);
  Epushd(2,3);
  MoveTop(2,1);
  goto b_58;
  b_58 :
  TestFunFC(o_41,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(k_42);
  goto m_59;
  k_42 :
  goto j_42;
  m_59 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  j_42 :
  Epopd(2,3);
  goto h_42;
  i_42 :
  IsAppl();
  OneInit();
  p_42 :
  OneNextSon();
  Cpush(p_42);
  Rpush(w_42);
  goto l_59;
  w_42 :
  Cpop();
  OneBuild();
  goto l_42;
  h_42 :
  Cpop();
  l_42 :
  Return();
  b_42 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App1("Match",Egetd(1,4)),App1("Where",App3("BAM",App1("Prim",ATmakeString("_ST_explode_term")),App1("Var",Egetd(1,1)),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))))))));
  Epopd(1,4);
  Return();
  e_40 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_q_18)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_k_17);
  Epopd(0,1);
  Tpop();
ENDPROC

DOIT

