#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,w_45);
VARDECL(AFun,v_45);
VARDECL(AFun,c_24);
VARDECL(AFun,b_24);
VARDECL(AFun,v_23);
VARDECL(AFun,e_23);
VARDECL(AFun,d_23);
VARDECL(AFun,z_22);
VARDECL(AFun,x_22);
VARDECL(AFun,r_22);
VARDECL(AFun,n_22);
VARDECL(AFun,f_22);
VARDECL(AFun,r_21);
VARDECL(AFun,p_16);
VARDECL(AFun,m_16);
VARDECL(AFun,k_16);
VARDECL(AFun,h_16);
VARDECL(AFun,b_16);
VARDECL(AFun,j_15);
VARDECL(AFun,i_15);
VARDECL(AFun,g_15);
VARDECL(AFun,d_15);
VARDECL(AFun,a_15);
VARDECL(AFun,q_14);
VARDECL(AFun,o_14);
VARDECL(AFun,g_13);
VARDECL(AFun,f_13);
VARDECL(AFun,w_12);
VARDECL(AFun,v_12);
VARDECL(AFun,j_12);
VARDECL(AFun,a_12);
VARDECL(AFun,n_11);
VARDECL(AFun,l_11);
VARDECL(AFun,e_10);
VARDECL(AFun,d_10);
VARDECL(AFun,t_9);
VARDECL(AFun,t_8);
VARDECL(AFun,j_8);
VARDECL(AFun,v_7);
VARDECL(AFun,i_7);
VARDECL(AFun,x_6);
VARDECL(AFun,n_6);
VARDECL(AFun,h_6);
VARDECL(AFun,e_6);
VARDECL(AFun,g_1);
VARDECL(AFun,c_1);
VARDECL(AFun,y_0);
VARDECL(AFun,t_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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
PROCDECL(_stratego_g_18);
PROCDECL(_stratego_h_18);
PROCDECL(_stratego_i_18);
PROCDECL(_stratego_j_18);
PROCDECL(_stratego_k_18);

PROC(_stratego_init_afuns)
  MOVE(w_45,ATmakeAFun("Rule",3,0));
  MOVE(v_45,ATmakeAFun("LRule",1,0));
  MOVE(c_24,ATmakeAFun("Assign",1,0));
  MOVE(b_24,ATmakeAFun("Var",1,0));
  MOVE(v_23,ATmakeAFun("Assign",2,0));
  MOVE(e_23,ATmakeAFun("BAM",3,0));
  MOVE(d_23,ATmakeAFun("AM",2,0));
  MOVE(z_22,ATmakeAFun("MA",2,0));
  MOVE(x_22,ATmakeAFun("BA",2,0));
  MOVE(r_22,ATmakeAFun("Lets",2,0));
  MOVE(n_22,ATmakeAFun("LChoices",1,0));
  MOVE(f_22,ATmakeAFun("Choices",1,0));
  MOVE(r_21,ATmakeAFun("Seqs",1,0));
  MOVE(p_16,ATmakeAFun("Choice",2,0));
  MOVE(m_16,ATmakeAFun("Path",2,0));
  MOVE(k_16,ATmakeAFun("One",1,0));
  MOVE(h_16,ATmakeAFun("Some",1,0));
  MOVE(b_16,ATmakeAFun("Fail",0,0));
  MOVE(j_15,ATmakeAFun("Wld",0,0));
  MOVE(i_15,ATmakeAFun("Where",1,0));
  MOVE(g_15,ATmakeAFun("All",1,0));
  MOVE(d_15,ATmakeAFun("Rec",2,0));
  MOVE(a_15,ATmakeAFun("LChoice",2,0));
  MOVE(q_14,ATmakeAFun("Not",1,0));
  MOVE(o_14,ATmakeAFun("Test",1,0));
  MOVE(g_13,ATmakeAFun("Matrix",2,0));
  MOVE(f_13,ATmakeAFun("Case",4,0));
  MOVE(w_12,ATmakeAFun("SVar",1,0));
  MOVE(v_12,ATmakeAFun("Call",2,0));
  MOVE(j_12,ATmakeAFun("Build",1,0));
  MOVE(a_12,ATmakeAFun("Let",2,0));
  MOVE(n_11,ATmakeAFun("Seq",2,0));
  MOVE(l_11,ATmakeAFun("Scope",2,0));
  MOVE(e_10,ATmakeAFun("Id",0,0));
  MOVE(d_10,ATmakeAFun("Match",1,0));
  MOVE(t_9,ATmakeAFun("Cong",2,0));
  MOVE(t_8,ATmakeAFun("Runtime",1,0));
  MOVE(j_8,ATmakeAFun("Silent",0,0));
  MOVE(v_7,ATmakeAFun("Binary",0,0));
  MOVE(i_7,ATmakeAFun("Output",1,0));
  MOVE(x_6,ATmakeAFun("Input",1,0));
  MOVE(n_6,ATmakeAFun("Program",1,0));
  MOVE(h_6,ATmakeAFun("Help",0,0));
  MOVE(e_6,ATmakeAFun("Undefined",1,0));
  MOVE(g_1,ATmakeAFun("Nil",0,0));
  MOVE(c_1,ATmakeAFun("TNil",0,0));
  MOVE(y_0,ATmakeAFun("SDef",3,0));
  MOVE(t_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_d_17);
ENDPROC

PROC(_stratego_d_17)
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
  Ccall(_stratego_e_17);
  goto i_0;
  j_0 :
  Ccall(_stratego_f_17);
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
  Ccall(_stratego_g_17);
  goto q_0;
  r_0 :
  Ccontinue(s_0);
  Epushd(0,6);
  Ccall(_stratego_l_17);
  Tdupl();
  Ccall(_stratego_n_17);
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
  Ccall(_stratego_e_17);
  goto v_0;
  w_0 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_17);
  AllBuild();
  OneNextSon();
  Rpush(z_0);
  goto a_4;
  z_0 :
  AllBuild();
  goto x_0;
  v_0 :
  Cpop();
  x_0 :
  Return();
  u_0 :
  OneNextSon();
  Ccall(_stratego_t_17);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_n_17);
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
  TestFunFC(c_1,&&fail,Egetd(0,6));
  Rpush(b_1);
  goto c_4;
  b_1 :
  goto a_1;
  c_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  a_1 :
  Ccall(_stratego_o_17);
  Ccall(_stratego_r_17);
  Epopd(0,6);
  goto q_0;
  s_0 :
  Ccall(_stratego_s_17);
  goto d_1;
  q_0 :
  Cpop();
  d_1 :
ENDPROC

PROC(_stratego_e_17)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_4;
  e_4 :
  TestFunFC(g_1,&&fail,Egetd(0,1));
  Rpush(f_1);
  goto g_4;
  f_1 :
  goto e_1;
  g_4 :
  Return();
  e_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_17)
  Epushd(0,5);
  MoveTop(0,3);
  goto t_10;
  t_10 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto u_10;
  u_10 :
  TestFunFC(a_0,&&x_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(z_1);
  Rpush(a_2);
  goto h_19;
  a_2 :
  goto y_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto k_19;
  c_2 :
  goto y_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto n_19;
  e_2 :
  goto y_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto q_19;
  g_2 :
  goto y_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto t_19;
  i_2 :
  goto y_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto w_19;
  k_2 :
  goto y_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto a_20;
  m_2 :
  goto y_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto e_20;
  o_2 :
  goto y_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto k_20;
  q_2 :
  goto y_1;
  p_2 :
  Ccontinue(r_2);
  Rpush(s_2);
  goto o_20;
  s_2 :
  goto y_1;
  r_2 :
  Ccontinue(t_2);
  Rpush(u_2);
  goto s_20;
  u_2 :
  goto y_1;
  t_2 :
  Ccontinue(v_2);
  Rpush(w_2);
  goto v_20;
  w_2 :
  goto y_1;
  v_2 :
  Ccontinue(x_2);
  Rpush(y_2);
  goto y_20;
  y_2 :
  goto y_1;
  x_2 :
  Ccontinue(z_2);
  Rpush(a_3);
  goto b_21;
  a_3 :
  goto y_1;
  z_2 :
  Rpush(f_3);
  goto e_21;
  f_3 :
  goto b_3;
  y_1 :
  Cpop();
  b_3 :
  goto w_1;
  x_1 :
  Cpush(i_3);
  Rpush(j_3);
  goto h_19;
  j_3 :
  goto g_3;
  i_3 :
  Ccontinue(k_3);
  Rpush(m_3);
  goto k_19;
  m_3 :
  goto g_3;
  k_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto n_19;
  t_3 :
  goto g_3;
  s_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto q_19;
  v_3 :
  goto g_3;
  u_3 :
  Ccontinue(w_3);
  Rpush(x_3);
  goto t_19;
  x_3 :
  goto g_3;
  w_3 :
  Ccontinue(b_4);
  Rpush(d_4);
  goto s_20;
  d_4 :
  goto g_3;
  b_4 :
  Ccontinue(h_4);
  Rpush(i_4);
  goto v_20;
  i_4 :
  goto g_3;
  h_4 :
  Ccontinue(j_4);
  Rpush(k_4);
  goto y_20;
  k_4 :
  goto g_3;
  j_4 :
  Ccontinue(l_4);
  Rpush(m_4);
  goto b_21;
  m_4 :
  goto g_3;
  l_4 :
  Rpush(o_4);
  goto e_21;
  o_4 :
  goto n_4;
  g_3 :
  Cpop();
  n_4 :
  goto w_1;
  w_1 :
  goto v_1;
  e_21 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_9;
  v_9 :
  TestStr(1,1,"-?",&&fail);
  Rpush(q_4);
  goto f_21;
  q_4 :
  goto p_4;
  f_21 :
  Return();
  p_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  v_1 :
  goto u_1;
  b_21 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_9;
  n_9 :
  TestStr(1,1,"-h",&&fail);
  Rpush(s_4);
  goto c_21;
  s_4 :
  goto r_4;
  c_21 :
  Return();
  r_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  u_1 :
  goto t_1;
  y_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_9;
  k_9 :
  TestStr(1,1,"--help",&&fail);
  Rpush(u_4);
  goto z_20;
  u_4 :
  goto t_4;
  z_20 :
  Return();
  t_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  t_1 :
  goto s_1;
  v_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_9;
  f_9 :
  TestStr(1,1,"-s",&&fail);
  Rpush(w_4);
  goto w_20;
  w_4 :
  goto v_4;
  w_20 :
  Return();
  v_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  s_1 :
  goto r_1;
  s_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_9;
  c_9 :
  TestStr(1,1,"-b",&&fail);
  Rpush(y_4);
  goto t_20;
  y_4 :
  goto x_4;
  t_20 :
  Return();
  x_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  r_1 :
  goto q_1;
  o_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_8;
  v_8 :
  TestStr(1,1,"--output",&&fail);
  Rpush(a_5);
  goto p_20;
  a_5 :
  goto z_4;
  p_20 :
  Return();
  z_4 :
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
  k_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_8;
  p_8 :
  TestStr(1,1,"-o",&&fail);
  Rpush(c_5);
  goto l_20;
  c_5 :
  goto b_5;
  l_20 :
  Return();
  b_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  p_1 :
  goto o_1;
  e_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_8;
  l_8 :
  TestStr(1,1,"--input",&&fail);
  Rpush(e_5);
  goto f_20;
  e_5 :
  goto d_5;
  f_20 :
  Return();
  d_5 :
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
  a_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_8;
  h_8 :
  TestStr(1,1,"-i",&&fail);
  Rpush(g_5);
  goto b_20;
  g_5 :
  goto f_5;
  b_20 :
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
  n_1 :
  goto m_1;
  w_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_8;
  c_8 :
  TestStr(1,1,"@version",&&fail);
  Rpush(i_5);
  goto x_19;
  i_5 :
  goto h_5;
  x_19 :
  Return();
  h_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  m_1 :
  goto l_1;
  t_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_7;
  p_7 :
  TestStr(1,1,"--version",&&fail);
  Rpush(l_5);
  goto u_19;
  l_5 :
  goto j_5;
  u_19 :
  Return();
  j_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  q_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_7;
  m_7 :
  TestStr(1,1,"-v",&&fail);
  Rpush(o_5);
  goto r_19;
  o_5 :
  goto m_5;
  r_19 :
  Return();
  m_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  n_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_5;
  q_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(r_5);
  goto o_19;
  r_5 :
  goto p_5;
  o_19 :
  Return();
  p_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  k_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_5;
  n_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(t_5);
  goto l_19;
  t_5 :
  goto s_5;
  l_19 :
  Return();
  s_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  h_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_5;
  k_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(v_5);
  goto i_19;
  v_5 :
  goto u_5;
  i_19 :
  Return();
  u_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  h_1 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_17)
  Tdupl();
  w_5 :
  TestFunTop(a_0);
  Cpush(x_5);
  Arg(0);
  Cpush(a_6);
  Ccall(_stratego_h_17);
  goto z_5;
  a_6 :
  Epushd(0,2);
  MoveTop(0,1);
  goto i_21;
  i_21 :
  TestFunFC(e_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_6);
  goto m_21;
  d_6 :
  goto c_6;
  m_21 :
  Return();
  c_6 :
  Epopd(0,2);
  goto b_6;
  z_5 :
  Cpop();
  b_6 :
  Tpop();
  Cpop();
  goto y_5;
  x_5 :
  Arg(1);
  Tdrop();
  goto w_5;
  y_5 :
  Tpop();
  Ccall(_stratego_i_17);
ENDPROC

PROC(_stratego_h_17)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_21;
  o_21 :
  TestFunFC(h_6,&&fail,Egetd(0,1));
  Rpush(g_6);
  goto q_21;
  g_6 :
  goto f_6;
  q_21 :
  Return();
  f_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_17)
  Epushd(0,1);
  Tdupl();
  Rpush(i_6);
  z_21 :
  Cpush(k_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_21;
  s_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_21;
  t_21 :
  TestFunFC(n_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_6);
  goto a_22;
  m_6 :
  goto l_6;
  a_22 :
  Move(0,1,1,3);
  Return();
  l_6 :
  Epopd(1,4);
  goto j_6;
  k_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_6);
  goto z_21;
  p_6 :
  AllBuild();
  goto o_6;
  j_6 :
  Cpop();
  o_6 :
  Return();
  i_6 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_j_17);
  Tset(MakeInt(1));
  Ccall(_stratego_k_17);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_17)
  _ST_printnl();
ENDPROC

PROC(_stratego_k_17)
  _ST_exit();
ENDPROC

PROC(_stratego_l_17)
  Epushd(0,3);
  Tdupl();
  Cpush(r_6);
  Rpush(s_6);
  u_22 :
  Cpush(u_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_22;
  c_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_22;
  d_22 :
  TestFunFC(x_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_6);
  goto v_22;
  w_6 :
  goto v_6;
  v_22 :
  Move(0,1,1,3);
  Return();
  v_6 :
  Epopd(1,4);
  goto t_6;
  u_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_6);
  goto u_22;
  z_6 :
  AllBuild();
  goto y_6;
  t_6 :
  Cpop();
  y_6 :
  Return();
  s_6 :
  goto q_6;
  r_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto a_7;
  q_6 :
  Cpop();
  a_7 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_m_17);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_m_17)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_n_17)
  _ST_dtime();
ENDPROC

PROC(_stratego_o_17)
  Epushd(0,1);
  Tdupl();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Cpush(c_7);
  Rpush(d_7);
  z_23 :
  Cpush(f_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_23;
  b_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_23;
  c_23 :
  TestFunFC(i_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_7);
  goto a_24;
  h_7 :
  goto g_7;
  a_24 :
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
  Rpush(k_7);
  goto z_23;
  k_7 :
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
  goto l_7;
  b_7 :
  Cpop();
  l_7 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_17);
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
  Ccall(_stratego_t_17);
  AllBuild();
  AllBuild();
  Cpush(o_7);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(q_7);
  f_24 :
  Cpush(s_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto i_23;
  i_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_23;
  j_23 :
  TestFunFC(v_7,&&fail,Egetd(1,2));
  Rpush(u_7);
  goto g_24;
  u_7 :
  goto t_7;
  g_24 :
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
  goto f_24;
  x_7 :
  AllBuild();
  goto w_7;
  r_7 :
  Cpop();
  w_7 :
  Return();
  q_7 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_17);
  OneNextSon();
  Ccall(_stratego_t_17);
  AllBuild();
  AllBuild();
  goto n_7;
  o_7 :
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_17);
  OneNextSon();
  Ccall(_stratego_t_17);
  AllBuild();
  AllBuild();
  goto y_7;
  n_7 :
  Cpop();
  y_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_17)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_q_17)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_r_17)
  Epushd(0,2);
  Tdupl();
  Cpush(a_8);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Cpush(b_8);
  Tdupl();
  Rpush(d_8);
  d_25 :
  Cpush(f_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto i_24;
  i_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_24;
  j_24 :
  TestFunFC(j_8,&&fail,Egetd(1,2));
  Rpush(i_8);
  goto j_25;
  i_8 :
  goto g_8;
  j_25 :
  Return();
  g_8 :
  Epopd(1,3);
  goto e_8;
  f_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_8);
  goto d_25;
  m_8 :
  AllBuild();
  goto k_8;
  e_8 :
  Cpop();
  k_8 :
  Return();
  d_8 :
  Cpop();
  Crestore();
  Cjump();
  b_8 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_17);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(n_8);
  k_25 :
  Cpush(q_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_24;
  l_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_24;
  m_24 :
  TestFunFC(t_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_8);
  goto l_25;
  s_8 :
  goto r_8;
  l_25 :
  Move(0,2,1,3);
  Return();
  r_8 :
  Epopd(1,4);
  goto o_8;
  q_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_8);
  goto k_25;
  w_8 :
  AllBuild();
  goto u_8;
  o_8 :
  Cpop();
  u_8 :
  Return();
  n_8 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_17);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(x_8);
  m_25 :
  Cpush(z_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto o_24;
  o_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto p_24;
  p_24 :
  TestFunFC(n_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_9);
  goto n_25;
  b_9 :
  goto a_9;
  n_25 :
  Move(0,1,1,3);
  Return();
  a_9 :
  Epopd(1,4);
  goto y_8;
  z_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_9);
  goto m_25;
  e_9 :
  AllBuild();
  goto d_9;
  y_8 :
  Cpop();
  d_9 :
  Return();
  x_8 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_17);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_j_17);
  goto z_7;
  a_8 :
  goto g_9;
  z_7 :
  Cpop();
  g_9 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_k_17);
  Epopd(0,2);
ENDPROC

PROC(_stratego_s_17)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_j_17);
  Tset(MakeInt(1));
  Ccall(_stratego_k_17);
ENDPROC

PROC(_stratego_t_17)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_25;
  p_25 :
  TestFunFC(c_1,&&fail,Egetd(0,1));
  Rpush(i_9);
  goto r_25;
  i_9 :
  goto h_9;
  r_25 :
  Return();
  h_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_17)
  Rpush(j_9);
  z_28 :
  Cpush(m_9);
  l_9 :
  Cpush(p_9);
  Ccall(_stratego_v_17);
  goto o_9;
  p_9 :
  Epushd(0,3);
  MoveTop(0,1);
  goto q_26;
  q_26 :
  TestFunFC(t_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(s_9);
  goto b_29;
  s_9 :
  goto r_9;
  b_29 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(u_9);
  c_29 :
  Cpush(x_9);
  Ccall(_stratego_e_17);
  goto w_9;
  x_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,2);
  goto o_26;
  o_26 :
  TestFunFC(d_10,&&c_10,Egetd(3,2));
  MoveArg(3,1,3,2,0);
  Rpush(b_10);
  goto d_29;
  c_10 :
  TestFunFC(e_10,&&fail,Egetd(3,2));
  Rpush(b_10);
  goto e_29;
  b_10 :
  goto a_10;
  e_29 :
  Tset(App0("Wld"));
  Return();
  a_10 :
  goto z_9;
  d_29 :
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Return();
  z_9 :
  Epopd(3,2);
  OneNextSon();
  Rpush(f_10);
  goto c_29;
  f_10 :
  AllBuild();
  goto y_9;
  w_9 :
  Cpop();
  y_9 :
  Return();
  u_9 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App1("Match",App2("Op",Egetd(0,2),Egetd(1,1))));
  Epopd(1,1);
  Return();
  r_9 :
  Epopd(0,3);
  goto q_9;
  o_9 :
  Cpop();
  q_9 :
  Tduplinv();
  goto l_9;
  m_9 :
  AllInit();
  g_10 :
  AllNextSon(&&h_10);
  Rpush(i_10);
  goto z_28;
  i_10 :
  goto g_10;
  h_10 :
  AllBuild();
  Cpush(k_10);
  j_10 :
  Cpush(m_10);
  Ccall(_stratego_v_17);
  goto l_10;
  m_10 :
  Epushd(0,3);
  MoveTop(0,1);
  goto w_26;
  w_26 :
  TestFunFC(t_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_10);
  goto h_29;
  p_10 :
  goto o_10;
  h_29 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_10);
  i_29 :
  Cpush(s_10);
  Ccall(_stratego_e_17);
  goto r_10;
  s_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,2);
  goto u_26;
  u_26 :
  TestFunFC(d_10,&&c_11,Egetd(3,2));
  MoveArg(3,1,3,2,0);
  Rpush(y_10);
  goto j_29;
  c_11 :
  TestFunFC(e_10,&&fail,Egetd(3,2));
  Rpush(y_10);
  goto k_29;
  y_10 :
  goto x_10;
  k_29 :
  Tset(App0("Wld"));
  Return();
  x_10 :
  goto w_10;
  j_29 :
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Return();
  w_10 :
  Epopd(3,2);
  OneNextSon();
  Rpush(d_11);
  goto i_29;
  d_11 :
  AllBuild();
  goto v_10;
  r_10 :
  Cpop();
  v_10 :
  Return();
  q_10 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App1("Match",App2("Op",Egetd(0,2),Egetd(1,1))));
  Epopd(1,1);
  Return();
  o_10 :
  Epopd(0,3);
  goto n_10;
  l_10 :
  Cpop();
  n_10 :
  Tduplinv();
  goto j_10;
  k_10 :
  Return();
  j_9 :
  Rpush(e_11);
  m_29 :
  Cpush(g_11);
  Epushd(0,5);
  MoveTop(0,1);
  goto g_27;
  g_27 :
  TestFunFC(l_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_27;
  h_27 :
  TestFunFC(n_11,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(k_11);
  goto n_29;
  k_11 :
  goto h_11;
  n_29 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_j_18);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(0,2),App0("TNil"))));
  MoveTop(2,2);
  goto d_27;
  d_27 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto e_27;
  e_27 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto f_27;
  f_27 :
  TestFunFC(c_1,&&fail,Egetd(2,6));
  Rpush(p_11);
  goto p_29;
  p_11 :
  goto o_11;
  p_29 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App0("TNil"))));
  Ccall(_stratego_g_18);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_g_18);
  MoveTop(3,2);
  Move(1,1,3,2);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_g_18);
  MoveTop(3,3);
  Move(1,2,3,3);
  Cpush(q_11);
  Tdupl();
  Ccall(_stratego_e_17);
  Cpop();
  Crestore();
  Cjump();
  q_11 :
  Epopd(3,3);
  Return();
  o_11 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,4);
  NotNULLd(1,2);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(1,1),App2("Seq",Egetd(0,4),App2("Scope",Egetd(1,2),Egetd(0,5)))));
  Epopd(1,2);
  Return();
  h_11 :
  Epopd(0,5);
  goto f_11;
  g_11 :
  goto r_11;
  f_11 :
  Cpop();
  r_11 :
  AllInit();
  s_11 :
  AllNextSon(&&t_11);
  Rpush(u_11);
  goto m_29;
  u_11 :
  goto s_11;
  t_11 :
  AllBuild();
  Return();
  e_11 :
ENDPROC

PROC(_stratego_v_17)
  Cpush(w_11);
  Ccall(_stratego_w_17);
  goto v_11;
  w_11 :
  Ccontinue(x_11);
  Epushd(0,5);
  MoveTop(0,1);
  goto u_29;
  u_29 :
  TestFunFC(n_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto v_29;
  v_29 :
  TestFunFC(a_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(z_11);
  goto l_32;
  z_11 :
  goto y_11;
  l_32 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,4),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  y_11 :
  Epopd(0,5);
  goto v_11;
  x_11 :
  Ccontinue(b_12);
  Ccall(_stratego_c_18);
  goto v_11;
  b_12 :
  Ccontinue(c_12);
  Ccall(_stratego_i_18);
  goto v_11;
  c_12 :
  Epushd(0,9);
  MoveTop(0,4);
  goto m_30;
  m_30 :
  TestFunFC(n_11,&&i_12,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto n_30;
  n_30 :
  TestFunFC(j_12,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto o_30;
  o_30 :
  TestFunFC(n_11,&&fail,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,3,0,9,1);
  goto p_30;
  p_30 :
  TestFunFC(j_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(h_12);
  goto m_32;
  i_12 :
  TestFunFC(a_12,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto q_30;
  q_30 :
  TestFunFC(y_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  MoveArg(0,8,0,5,2);
  goto r_30;
  r_30 :
  TestFunFC(g_1,&&fail,Egetd(0,7));
  Cpush(l_12);
  Rpush(m_12);
  goto n_32;
  m_12 :
  goto k_12;
  l_12 :
  Rpush(o_12);
  goto y_32;
  o_12 :
  goto n_12;
  k_12 :
  Cpop();
  n_12 :
  goto h_12;
  h_12 :
  goto g_12;
  y_32 :
  NotNULLd(0,6);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App2("Let",App4("SDef",App2("Cons",App0("DontInline"),App0("Nil")),Egetd(0,6),App0("Nil"),Egetd(0,8)),Egetd(0,9)));
  Return();
  g_12 :
  goto f_12;
  n_32 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,9);
  Tset(Egetd(0,9));
  Rpush(p_12);
  o_32 :
  Cpush(s_12);
  Epushd(3,4);
  MoveTop(3,1);
  goto a_30;
  a_30 :
  TestFunFC(v_12,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,4,3,1,1);
  goto b_30;
  b_30 :
  TestFunFC(w_12,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  goto c_30;
  c_30 :
  TestFunFC(g_1,&&fail,Egetd(3,4));
  Rpush(u_12);
  goto p_32;
  u_12 :
  goto t_12;
  p_32 :
  Move(0,6,3,3);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  t_12 :
  Epopd(3,4);
  goto q_12;
  s_12 :
  Cpush(y_12);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,3);
  goto f_30;
  f_30 :
  TestFunFC(f_13,&&d_13,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  MoveArg(3,1,3,3,2);
  MoveArg(3,2,3,3,3);
  Rpush(c_13);
  goto q_32;
  d_13 :
  TestFunFC(g_13,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(c_13);
  goto r_32;
  c_13 :
  goto b_13;
  r_32 :
  Return();
  b_13 :
  goto a_13;
  q_32 :
  Return();
  a_13 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  y_12 :
  IsAppl();
  OneInit();
  h_13 :
  OneNextSon();
  Cpush(h_13);
  Rpush(k_13);
  goto o_32;
  k_13 :
  Cpop();
  OneBuild();
  goto x_12;
  q_12 :
  Cpop();
  x_12 :
  Return();
  p_12 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Call",App1("SVar",Egetd(0,6)),App0("Nil")),App2("TCons",Egetd(1,1),App0("TNil"))));
  Cpush(l_13);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,1);
  goto j_30;
  j_30 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto k_30;
  k_30 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto l_30;
  l_30 :
  TestFunFC(c_1,&&fail,Egetd(3,5));
  Rpush(n_13);
  goto t_32;
  n_13 :
  goto m_13;
  t_32 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(u_13);
  o_13 :
  Cpush(p_13);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,2,4,1);
  Epopd(4,1);
  Cpop();
  goto t_13;
  p_13 :
  IsAppl();
  MatchTravInit();
  r_13 :
  OneMatchNextSon();
  Cpush(r_13);
  Rpush(s_13);
  goto o_13;
  s_13 :
  Cpop();
  MatchTravEnd();
  t_13 :
  Return();
  u_13 :
  Return();
  m_13 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  l_13 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  f_12 :
  goto e_12;
  m_32 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,2)),Egetd(0,3)));
  Return();
  e_12 :
  Epopd(0,9);
  goto d_12;
  v_11 :
  Cpop();
  d_12 :
ENDPROC

PROC(_stratego_w_17)
  Cpush(w_13);
  Ccall(_stratego_x_17);
  goto v_13;
  w_13 :
  Ccontinue(x_13);
  Ccall(_stratego_y_17);
  goto v_13;
  x_13 :
  Ccontinue(y_13);
  Ccall(_stratego_z_17);
  goto v_13;
  y_13 :
  Ccontinue(z_13);
  Ccall(_stratego_a_18);
  goto v_13;
  z_13 :
  Ccall(_stratego_b_18);
  goto a_14;
  v_13 :
  Cpop();
  a_14 :
ENDPROC

PROC(_stratego_x_17)
  Epushd(0,3);
  MoveTop(0,2);
  goto m_33;
  m_33 :
  TestFunFC(o_14,&&n_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto n_33;
  n_33 :
  TestFunFC(e_10,&&fail,Egetd(0,3));
  Rpush(m_14);
  goto g_34;
  n_14 :
  TestFunFC(q_14,&&p_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto o_33;
  o_33 :
  TestFunFC(e_10,&&fail,Egetd(0,3));
  Rpush(m_14);
  goto h_34;
  p_14 :
  TestFunFC(n_11,&&r_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto p_33;
  p_33 :
  TestFunFC(e_10,&&s_14,Egetd(0,1));
  goto q_33;
  q_33 :
  TestFunFC(e_10,&&t_14,Egetd(0,3));
  Cpush(v_14);
  Rpush(w_14);
  goto i_34;
  w_14 :
  goto u_14;
  v_14 :
  Rpush(y_14);
  goto j_34;
  y_14 :
  goto x_14;
  u_14 :
  Cpop();
  x_14 :
  goto m_14;
  t_14 :
  Rpush(m_14);
  goto j_34;
  s_14 :
  goto r_33;
  r_33 :
  TestFunFC(e_10,&&fail,Egetd(0,3));
  Rpush(m_14);
  goto i_34;
  r_14 :
  TestFunFC(a_15,&&z_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto s_33;
  s_33 :
  TestFunFC(e_10,&&fail,Egetd(0,3));
  Rpush(m_14);
  goto k_34;
  z_14 :
  TestFunFC(l_11,&&b_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto t_33;
  t_33 :
  TestFunFC(e_10,&&fail,Egetd(0,1));
  Rpush(m_14);
  goto l_34;
  b_15 :
  TestFunFC(d_15,&&c_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto u_33;
  u_33 :
  TestFunFC(e_10,&&fail,Egetd(0,1));
  Rpush(m_14);
  goto m_34;
  c_15 :
  TestFunFC(g_15,&&e_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto v_33;
  v_33 :
  TestFunFC(e_10,&&fail,Egetd(0,3));
  Rpush(m_14);
  goto n_34;
  e_15 :
  TestFunFC(i_15,&&h_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto w_33;
  w_33 :
  TestFunFC(e_10,&&fail,Egetd(0,3));
  Rpush(m_14);
  goto o_34;
  h_15 :
  TestFunFC(d_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto x_33;
  x_33 :
  TestFunFC(j_15,&&fail,Egetd(0,3));
  Rpush(m_14);
  goto p_34;
  m_14 :
  goto l_14;
  p_34 :
  Tset(App0("Id"));
  Return();
  l_14 :
  goto k_14;
  o_34 :
  Tset(App0("Id"));
  Return();
  k_14 :
  goto j_14;
  n_34 :
  Tset(App0("Id"));
  Return();
  j_14 :
  goto i_14;
  m_34 :
  Tset(App0("Id"));
  Return();
  i_14 :
  goto h_14;
  l_34 :
  Tset(App0("Id"));
  Return();
  h_14 :
  goto g_14;
  k_34 :
  Tset(App0("Id"));
  Return();
  g_14 :
  goto f_14;
  j_34 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  f_14 :
  goto d_14;
  i_34 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  d_14 :
  goto c_14;
  h_34 :
  Tset(App0("Fail"));
  Return();
  c_14 :
  goto b_14;
  g_34 :
  Tset(App0("Id"));
  Return();
  b_14 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_y_17)
  Epushd(0,3);
  MoveTop(0,2);
  goto h_35;
  h_35 :
  TestFunFC(o_14,&&a_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto i_35;
  i_35 :
  TestFunFC(b_16,&&fail,Egetd(0,3));
  Rpush(z_15);
  goto s_36;
  a_16 :
  TestFunFC(q_14,&&c_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_35;
  j_35 :
  TestFunFC(b_16,&&fail,Egetd(0,3));
  Rpush(z_15);
  goto t_36;
  c_16 :
  TestFunFC(n_11,&&d_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto k_35;
  k_35 :
  TestFunFC(b_16,&&fail,Egetd(0,3));
  Rpush(z_15);
  goto u_36;
  d_16 :
  TestFunFC(l_11,&&e_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto l_35;
  l_35 :
  TestFunFC(b_16,&&fail,Egetd(0,1));
  Rpush(z_15);
  goto v_36;
  e_16 :
  TestFunFC(d_15,&&f_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto m_35;
  m_35 :
  TestFunFC(b_16,&&fail,Egetd(0,1));
  Rpush(z_15);
  goto w_36;
  f_16 :
  TestFunFC(h_16,&&g_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto s_35;
  s_35 :
  TestFunFC(b_16,&&fail,Egetd(0,3));
  Rpush(z_15);
  goto x_36;
  g_16 :
  TestFunFC(k_16,&&j_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto t_35;
  t_35 :
  TestFunFC(b_16,&&fail,Egetd(0,3));
  Rpush(z_15);
  goto y_36;
  j_16 :
  TestFunFC(m_16,&&l_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto u_35;
  u_35 :
  TestFunFC(b_16,&&fail,Egetd(0,1));
  Rpush(z_15);
  goto z_36;
  l_16 :
  TestFunFC(t_9,&&n_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(z_15);
  goto a_37;
  n_16 :
  TestFunFC(p_16,&&o_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto v_35;
  v_35 :
  TestFunFC(b_16,&&q_16,Egetd(0,1));
  goto w_35;
  w_35 :
  TestFunFC(b_16,&&s_16,Egetd(0,3));
  Cpush(u_16);
  Rpush(v_16);
  goto d_37;
  v_16 :
  goto t_16;
  u_16 :
  Rpush(x_16);
  goto e_37;
  x_16 :
  goto w_16;
  t_16 :
  Cpop();
  w_16 :
  goto z_15;
  s_16 :
  Rpush(z_15);
  goto e_37;
  q_16 :
  goto x_35;
  x_35 :
  TestFunFC(b_16,&&fail,Egetd(0,3));
  Rpush(z_15);
  goto d_37;
  o_16 :
  TestFunFC(a_15,&&y_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto y_35;
  y_35 :
  TestFunFC(b_16,&&z_16,Egetd(0,1));
  goto z_35;
  z_35 :
  TestFunFC(b_16,&&a_17,Egetd(0,3));
  Cpush(c_17);
  Rpush(l_18);
  goto f_37;
  l_18 :
  goto b_17;
  c_17 :
  Rpush(n_18);
  goto g_37;
  n_18 :
  goto m_18;
  b_17 :
  Cpop();
  m_18 :
  goto z_15;
  a_17 :
  Rpush(z_15);
  goto g_37;
  z_16 :
  goto a_36;
  a_36 :
  TestFunFC(b_16,&&fail,Egetd(0,3));
  Rpush(z_15);
  goto f_37;
  y_16 :
  TestFunFC(i_15,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto b_36;
  b_36 :
  TestFunFC(b_16,&&fail,Egetd(0,3));
  Rpush(z_15);
  goto h_37;
  z_15 :
  goto y_15;
  h_37 :
  Tset(App0("Fail"));
  Return();
  y_15 :
  goto x_15;
  g_37 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  x_15 :
  goto w_15;
  f_37 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  w_15 :
  goto v_15;
  e_37 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  v_15 :
  goto u_15;
  d_37 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  u_15 :
  goto t_15;
  a_37 :
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(o_18);
  b_37 :
  Cpush(r_18);
  Epushd(1,3);
  MoveTop(1,1);
  goto f_35;
  f_35 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_35;
  g_35 :
  TestFunFC(b_16,&&fail,Egetd(1,2));
  Rpush(t_18);
  goto c_37;
  t_18 :
  goto s_18;
  c_37 :
  Return();
  s_18 :
  Epopd(1,3);
  goto q_18;
  r_18 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_18);
  goto b_37;
  w_18 :
  AllBuild();
  goto v_18;
  q_18 :
  Cpop();
  v_18 :
  Return();
  o_18 :
  Tpop();
  Tset(App0("Fail"));
  Return();
  t_15 :
  goto s_15;
  z_36 :
  Tset(App0("Fail"));
  Return();
  s_15 :
  goto r_15;
  y_36 :
  Tset(App0("Fail"));
  Return();
  r_15 :
  goto q_15;
  x_36 :
  Tset(App0("Fail"));
  Return();
  q_15 :
  goto o_15;
  w_36 :
  Tset(App0("Fail"));
  Return();
  o_15 :
  goto n_15;
  v_36 :
  Tset(App0("Fail"));
  Return();
  n_15 :
  goto m_15;
  u_36 :
  Tset(App0("Fail"));
  Return();
  m_15 :
  goto l_15;
  t_36 :
  Tset(App0("Id"));
  Return();
  l_15 :
  goto k_15;
  s_36 :
  Tset(App0("Fail"));
  Return();
  k_15 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_z_17)
  Epushd(0,5);
  MoveTop(0,1);
  goto l_37;
  l_37 :
  TestFunFC(p_16,&&c_19,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto m_37;
  m_37 :
  TestFunFC(p_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(b_19);
  goto d_38;
  c_19 :
  TestFunFC(n_11,&&d_19,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto n_37;
  n_37 :
  TestFunFC(n_11,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(b_19);
  goto e_38;
  d_19 :
  TestFunFC(a_15,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto o_37;
  o_37 :
  TestFunFC(a_15,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(b_19);
  goto f_38;
  b_19 :
  goto a_19;
  f_38 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("LChoice",Egetd(0,3),App2("LChoice",Egetd(0,4),Egetd(0,5))));
  Return();
  a_19 :
  goto y_18;
  e_38 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,3),App2("Seq",Egetd(0,4),Egetd(0,5))));
  Return();
  y_18 :
  goto x_18;
  d_38 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Choice",Egetd(0,3),App2("Choice",Egetd(0,4),Egetd(0,5))));
  Return();
  x_18 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_a_18)
  Epushd(0,9);
  MoveTop(0,2);
  goto m_38;
  m_38 :
  TestFunFC(p_16,&&y_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(v_19);
  goto k_39;
  y_19 :
  TestFunFC(a_15,&&z_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(v_19);
  goto l_39;
  z_19 :
  TestFunFC(q_14,&&c_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto n_38;
  n_38 :
  TestFunFC(q_14,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(v_19);
  goto n_39;
  c_20 :
  TestFunFC(o_14,&&d_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto o_38;
  o_38 :
  TestFunFC(o_14,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(v_19);
  goto o_39;
  d_20 :
  TestFunFC(i_15,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto p_38;
  p_38 :
  TestFunFC(i_15,&&g_20,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(v_19);
  goto m_39;
  g_20 :
  TestFunFC(n_11,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto q_38;
  q_38 :
  TestFunFC(i_15,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto r_38;
  r_38 :
  TestFunFC(n_11,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,9,0,6,1);
  goto s_38;
  s_38 :
  TestFunFC(j_12,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  Rpush(v_19);
  goto p_39;
  v_19 :
  goto s_19;
  p_39 :
  NotNULLd(0,5);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App1("Where",App2("Seq",Egetd(0,5),App2("Seq",App1("Build",Egetd(0,8)),Egetd(0,9)))));
  Return();
  s_19 :
  goto p_19;
  o_39 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  p_19 :
  goto m_19;
  n_39 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  m_19 :
  goto j_19;
  m_39 :
  NotNULLd(0,4);
  Tset(App1("Where",Egetd(0,4)));
  Return();
  j_19 :
  goto g_19;
  l_39 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  g_19 :
  goto f_19;
  k_39 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  f_19 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_b_18)
  Epushd(0,6);
  MoveTop(0,3);
  goto c_40;
  c_40 :
  TestFunFC(r_21,&&n_21,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto d_40;
  d_40 :
  TestFunFC(g_1,&&b_22,Egetd(0,4));
  Rpush(h_21);
  goto g_41;
  b_22 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(h_21);
  goto h_41;
  n_21 :
  TestFunFC(f_22,&&e_22,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto e_40;
  e_40 :
  TestFunFC(g_1,&&g_22,Egetd(0,4));
  Rpush(h_21);
  goto i_41;
  g_22 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(h_21);
  goto j_41;
  e_22 :
  TestFunFC(n_22,&&h_22,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto f_40;
  f_40 :
  TestFunFC(g_1,&&p_22,Egetd(0,4));
  Rpush(h_21);
  goto k_41;
  p_22 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(h_21);
  goto l_41;
  h_22 :
  TestFunFC(r_22,&&q_22,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_40;
  g_40 :
  TestFunFC(g_1,&&t_22,Egetd(0,4));
  Rpush(h_21);
  goto m_41;
  t_22 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(h_21);
  goto n_41;
  q_22 :
  TestFunFC(x_22,&&w_22,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(h_21);
  goto o_41;
  w_22 :
  TestFunFC(z_22,&&y_22,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(h_21);
  goto p_41;
  y_22 :
  TestFunFC(d_23,&&a_23,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(h_21);
  goto q_41;
  a_23 :
  TestFunFC(e_23,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(h_21);
  goto r_41;
  h_21 :
  goto g_21;
  r_41 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  g_21 :
  goto d_21;
  q_41 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  d_21 :
  goto a_21;
  p_41 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  a_21 :
  goto x_20;
  o_41 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  x_20 :
  goto u_20;
  n_41 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  u_20 :
  goto r_20;
  m_41 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  r_20 :
  goto q_20;
  l_41 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  q_20 :
  goto n_20;
  k_41 :
  Tset(App0("Fail"));
  Return();
  n_20 :
  goto m_20;
  j_41 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  m_20 :
  goto j_20;
  i_41 :
  Tset(App0("Fail"));
  Return();
  j_20 :
  goto i_20;
  h_41 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  i_20 :
  goto h_20;
  g_41 :
  Tset(App0("Id"));
  Return();
  h_20 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_c_18)
  Epushd(0,17);
  MoveTop(0,9);
  goto j_43;
  j_43 :
  TestFunFC(l_11,&&t_23,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto k_43;
  k_43 :
  TestFunFC(n_11,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto l_43;
  l_43 :
  TestFunFC(v_23,&&u_23,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  MoveArg(0,1,0,14,1);
  goto n_43;
  n_43 :
  TestFunFC(b_24,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto o_43;
  o_43 :
  TestFunFC(b_24,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(s_23);
  goto f_48;
  u_23 :
  TestFunFC(c_24,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto p_43;
  p_43 :
  TestFunFC(b_24,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto q_43;
  q_43 :
  TestFunFC(n_11,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto r_43;
  r_43 :
  TestFunFC(c_24,&&d_24,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto s_43;
  s_43 :
  TestFunFC(b_24,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(s_23);
  goto l_48;
  d_24 :
  TestFunFC(v_23,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto t_43;
  t_43 :
  TestFunFC(b_24,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto u_43;
  u_43 :
  TestFunFC(b_24,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(s_23);
  goto u_48;
  t_23 :
  TestFunFC(n_11,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto v_43;
  v_43 :
  TestFunFC(j_12,&&e_24,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto w_43;
  w_43 :
  TestFunFC(l_11,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto x_43;
  x_43 :
  TestFunFC(n_11,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto y_43;
  y_43 :
  TestFunFC(c_24,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto z_43;
  z_43 :
  TestFunFC(b_24,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(s_23);
  goto z_47;
  e_24 :
  TestFunFC(c_24,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto a_44;
  a_44 :
  TestFunFC(b_24,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto b_44;
  b_44 :
  TestFunFC(n_11,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto c_44;
  c_44 :
  TestFunFC(j_12,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto d_44;
  d_44 :
  TestFunFC(b_24,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  Rpush(s_23);
  goto d_49;
  s_23 :
  goto r_23;
  d_49 :
  Epushd(1,1);
  Move(0,12,0,16);
  Move(1,1,0,17);
  NotNULLd(0,12);
  NotNULLd(1,1);
  Tset(App2("Seq",App1("Assign",App1("Var",Egetd(0,12))),Egetd(1,1)));
  Epopd(1,1);
  Return();
  r_23 :
  goto p_23;
  u_48 :
  Epushd(1,3);
  Move(0,16,0,7);
  Move(1,1,0,8);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto f_43;
  f_43 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto g_43;
  g_43 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto h_43;
  h_43 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(k_24);
  goto v_48;
  k_24 :
  goto h_24;
  v_48 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(i_25);
  n_24 :
  Cpush(e_25);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto h_25;
  e_25 :
  IsAppl();
  MatchTravInit();
  f_25 :
  OneMatchNextSon();
  Cpush(f_25);
  Rpush(g_25);
  goto n_24;
  g_25 :
  Cpop();
  MatchTravEnd();
  h_25 :
  Return();
  i_25 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(3,1);
  goto c_43;
  c_43 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto d_43;
  d_43 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto e_43;
  e_43 :
  TestFunFC(c_1,&&fail,Egetd(3,5));
  Rpush(s_25);
  goto y_48;
  s_25 :
  goto o_25;
  y_48 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(y_25);
  t_25 :
  Cpush(u_25);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  Cpop();
  goto x_25;
  u_25 :
  IsAppl();
  MatchTravInit();
  v_25 :
  OneMatchNextSon();
  Cpush(v_25);
  Rpush(w_25);
  goto t_25;
  w_25 :
  Cpop();
  MatchTravEnd();
  x_25 :
  Return();
  y_25 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_g_18);
  MoveTop(4,1);
  Move(1,2,4,1);
  Epopd(4,1);
  Return();
  o_25 :
  Epopd(3,5);
  Return();
  h_24 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,16)),App0("Nil")),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_d_18);
  MoveTop(1,3);
  NotNULLd(1,2);
  NotNULLd(0,16);
  NotNULLd(1,3);
  Tset(App2("Scope",Egetd(1,2),App2("Seq",App1("Assign",App1("Var",Egetd(0,16))),Egetd(1,3))));
  Epopd(1,3);
  Return();
  p_23 :
  goto h_23;
  l_48 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto t_42;
  t_42 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto u_42;
  u_42 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_42;
  v_42 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(a_26);
  goto m_48;
  a_26 :
  goto z_25;
  m_48 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(g_26);
  b_26 :
  Cpush(c_26);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto f_26;
  c_26 :
  IsAppl();
  MatchTravInit();
  d_26 :
  OneMatchNextSon();
  Cpush(d_26);
  Rpush(e_26);
  goto b_26;
  e_26 :
  Cpop();
  MatchTravEnd();
  f_26 :
  Return();
  g_26 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(3,1);
  goto q_42;
  q_42 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto r_42;
  r_42 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto s_42;
  s_42 :
  TestFunFC(c_1,&&fail,Egetd(3,5));
  Rpush(i_26);
  goto p_48;
  i_26 :
  goto h_26;
  p_48 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(p_26);
  j_26 :
  Cpush(k_26);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  Cpop();
  goto n_26;
  k_26 :
  IsAppl();
  MatchTravInit();
  l_26 :
  OneMatchNextSon();
  Cpush(l_26);
  Rpush(m_26);
  goto j_26;
  m_26 :
  Cpop();
  MatchTravEnd();
  n_26 :
  Return();
  p_26 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_g_18);
  MoveTop(4,1);
  Move(1,1,4,1);
  Epopd(4,1);
  Return();
  h_26 :
  Epopd(3,5);
  Return();
  z_25 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,16)),App0("Nil")),App2("TCons",Egetd(0,8),App0("TNil")))));
  Ccall(_stratego_d_18);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,16);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(1,1),App2("Seq",App1("Assign",App1("Var",Egetd(0,16))),Egetd(1,2))));
  Epopd(1,2);
  Return();
  h_23 :
  goto g_23;
  f_48 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto h_42;
  h_42 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto i_42;
  i_42 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto j_42;
  j_42 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(s_26);
  goto g_48;
  s_26 :
  goto r_26;
  g_48 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(a_27);
  t_26 :
  Cpush(v_26);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto z_26;
  v_26 :
  IsAppl();
  MatchTravInit();
  x_26 :
  OneMatchNextSon();
  Cpush(x_26);
  Rpush(y_26);
  goto t_26;
  y_26 :
  Cpop();
  MatchTravEnd();
  z_26 :
  Return();
  a_27 :
  NotNULLd(0,10);
  NotNULLd(0,16);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,16),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_g_18);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  r_26 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,16);
  NotNULLd(0,2);
  NotNULLd(0,17);
  Tset(App2("TCons",App2("Cons",Egetd(0,16),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,2)),App0("Nil")),App2("TCons",Egetd(0,17),App0("TNil")))));
  Ccall(_stratego_d_18);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  g_23 :
  goto f_23;
  z_47 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto a_42;
  a_42 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto b_42;
  b_42 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto c_42;
  c_42 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(c_27);
  goto a_48;
  c_27 :
  goto b_27;
  a_48 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(a_28);
  l_27 :
  Cpush(m_27);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto w_27;
  m_27 :
  IsAppl();
  MatchTravInit();
  q_27 :
  OneMatchNextSon();
  Cpush(q_27);
  Rpush(v_27);
  goto l_27;
  v_27 :
  Cpop();
  MatchTravEnd();
  w_27 :
  Return();
  a_28 :
  NotNULLd(0,14);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_g_18);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  b_27 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,11);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,11),App0("Nil")),App2("TCons",Egetd(0,8),App0("TNil")))));
  Ccall(_stratego_d_18);
  MoveTop(1,2);
  NotNULLd(0,11);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Seq",App1("Build",Egetd(0,11)),App2("Scope",Egetd(1,1),Egetd(1,2))));
  Epopd(1,2);
  Return();
  f_23 :
  Epopd(0,17);
ENDPROC

PROC(_stratego_d_18)
  Epushd(0,5);
  Ccall(_stratego_e_18);
  MoveTop(0,1);
  goto k_49;
  k_49 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto l_49;
  l_49 :
  TestFunFC(t_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto m_49;
  m_49 :
  TestFunFC(c_1,&&fail,Egetd(0,5));
  Rpush(i_28);
  goto d_50;
  i_28 :
  goto h_28;
  d_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(j_28);
  e_50 :
  Cpush(t_28);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto j_49;
  j_49 :
  TestFunFC(b_24,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(w_28);
  goto g_50;
  w_28 :
  goto u_28;
  g_50 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(1,2,2,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  u_28 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_f_18);
  Epopd(1,3);
  goto n_28;
  t_28 :
  AllInit();
  l_29 :
  AllNextSon(&&o_29);
  Rpush(q_29);
  goto e_50;
  q_29 :
  goto l_29;
  o_29 :
  AllBuild();
  goto f_29;
  n_28 :
  Cpop();
  f_29 :
  Return();
  j_28 :
  Return();
  h_28 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_e_18)
  Epushd(0,7);
  MoveTop(0,1);
  goto b_51;
  b_51 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto c_51;
  c_51 :
  TestFunFC(t_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto d_51;
  d_51 :
  TestFunFC(c_1,&&w_29,Egetd(0,5));
  Rpush(t_29);
  goto p_52;
  w_29 :
  TestFunFC(t_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto e_51;
  e_51 :
  TestFunFC(c_1,&&fail,Egetd(0,7));
  Rpush(t_29);
  goto q_52;
  t_29 :
  goto s_29;
  q_52 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(x_29);
  r_52 :
  Epushd(2,9);
  MoveTop(2,1);
  goto r_50;
  r_50 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto s_50;
  s_50 :
  TestFunFC(g_1,&&e_30,Egetd(2,2));
  goto t_50;
  t_50 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto u_50;
  u_50 :
  TestFunFC(g_1,&&fail,Egetd(2,6));
  goto v_50;
  v_50 :
  TestFunFC(c_1,&&fail,Egetd(2,9));
  Rpush(d_30);
  goto s_52;
  e_30 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_50;
  w_50 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto x_50;
  x_50 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto y_50;
  y_50 :
  TestFunFC(c_1,&&fail,Egetd(2,9));
  Rpush(d_30);
  goto t_52;
  d_30 :
  goto z_29;
  t_52 :
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
  Rpush(h_30);
  goto r_52;
  h_30 :
  OneNextSon();
  Ccall(_stratego_t_17);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto o_50;
  o_50 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto p_50;
  p_50 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto q_50;
  q_50 :
  TestFunFC(c_1,&&fail,Egetd(3,5));
  Rpush(i_30);
  goto u_52;
  i_30 :
  goto g_30;
  u_52 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  g_30 :
  Epopd(3,5);
  Return();
  z_29 :
  goto y_29;
  s_52 :
  Tset(App0("Nil"));
  Return();
  y_29 :
  Epopd(2,9);
  Return();
  x_29 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  s_29 :
  goto r_29;
  p_52 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  r_29 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_f_18)
  Rpush(x_30);
  u_53 :
  Epushd(0,11);
  MoveTop(0,5);
  goto y_52;
  y_52 :
  TestFunFC(t_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto z_52;
  z_52 :
  TestFunFC(t_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto a_53;
  a_53 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto b_53;
  b_53 :
  TestFunFC(c_1,&&fail,Egetd(0,11));
  goto c_53;
  c_53 :
  TestFunFC(t_0,&&k_31,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto d_53;
  d_53 :
  TestFunFC(t_0,&&l_31,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto e_53;
  e_53 :
  TestFunFC(c_1,&&m_31,Egetd(0,4));
  Cpush(o_31);
  Rpush(f_32);
  goto v_53;
  f_32 :
  goto n_31;
  o_31 :
  Rpush(i_32);
  goto w_53;
  i_32 :
  goto g_32;
  n_31 :
  Cpop();
  g_32 :
  goto j_31;
  m_31 :
  Rpush(j_31);
  goto w_53;
  l_31 :
  Rpush(j_31);
  goto w_53;
  k_31 :
  Rpush(j_31);
  goto w_53;
  j_31 :
  goto z_30;
  w_53 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(j_32);
  goto u_53;
  j_32 :
  Return();
  z_30 :
  goto y_30;
  v_53 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  y_30 :
  Epopd(0,11);
  Return();
  x_30 :
ENDPROC

PROC(_stratego_g_18)
  Epushd(0,5);
  MoveTop(0,5);
  goto n_54;
  n_54 :
  TestFunFC(t_0,&&w_32,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto o_54;
  o_54 :
  TestFunFC(t_0,&&x_32,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto p_54;
  p_54 :
  TestFunFC(c_1,&&z_32,Egetd(0,4));
  Cpush(b_33);
  Rpush(c_33);
  goto z_55;
  c_33 :
  goto a_33;
  b_33 :
  Rpush(e_33);
  goto e_56;
  e_33 :
  goto d_33;
  a_33 :
  Cpop();
  d_33 :
  goto v_32;
  z_32 :
  Rpush(v_32);
  goto e_56;
  x_32 :
  Rpush(v_32);
  goto e_56;
  w_32 :
  Rpush(v_32);
  goto e_56;
  v_32 :
  goto s_32;
  e_56 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(f_33);
  f_56 :
  Cpush(h_33);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Cpush(j_33);
  Epushd(1,7);
  MoveTop(1,1);
  goto e_54;
  e_54 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto f_54;
  f_54 :
  TestFunFC(t_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto g_54;
  g_54 :
  TestFunFC(t_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto h_54;
  h_54 :
  TestFunFC(c_1,&&fail,Egetd(1,6));
  Rpush(l_33);
  goto g_56;
  l_33 :
  goto k_33;
  g_56 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  k_33 :
  Epopd(1,7);
  goto i_33;
  j_33 :
  Ccall(_stratego_h_18);
  goto b_34;
  i_33 :
  Cpop();
  b_34 :
  OneNextSon();
  Ccall(_stratego_t_17);
  AllBuild();
  AllBuild();
  goto g_33;
  h_33 :
  Epushd(1,7);
  MoveTop(1,1);
  goto j_54;
  j_54 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_54;
  k_54 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto l_54;
  l_54 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto m_54;
  m_54 :
  TestFunFC(c_1,&&fail,Egetd(1,7));
  Rpush(e_34);
  goto h_56;
  e_34 :
  goto d_34;
  h_56 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  d_34 :
  Epopd(1,7);
  goto c_34;
  g_33 :
  Cpop();
  c_34 :
  Cpush(q_34);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_17);
  OneNextSon();
  Ccall(_stratego_t_17);
  AllBuild();
  AllBuild();
  goto f_34;
  q_34 :
  Rpush(s_34);
  goto f_56;
  s_34 :
  goto r_34;
  f_34 :
  Cpop();
  r_34 :
  Return();
  f_33 :
  Return();
  s_32 :
  goto k_32;
  z_55 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(t_34);
  a_56 :
  Cpush(v_34);
  Ccall(_stratego_e_17);
  goto u_34;
  v_34 :
  Ccontinue(w_34);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_54;
  c_54 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(y_34);
  goto b_56;
  y_34 :
  goto x_34;
  b_56 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(z_34);
  c_56 :
  Cpush(b_35);
  Epushd(2,3);
  MoveTop(2,1);
  goto b_54;
  b_54 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(d_35);
  goto d_56;
  d_35 :
  goto c_35;
  d_56 :
  Move(1,2,2,2);
  Return();
  c_35 :
  Epopd(2,3);
  goto a_35;
  b_35 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_35);
  goto c_56;
  n_35 :
  AllBuild();
  goto e_35;
  a_35 :
  Cpop();
  e_35 :
  Return();
  z_34 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(o_35);
  goto a_56;
  o_35 :
  Return();
  x_34 :
  Epopd(1,3);
  goto u_34;
  w_34 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_35);
  goto a_56;
  q_35 :
  AllBuild();
  goto p_35;
  u_34 :
  Cpop();
  p_35 :
  Return();
  t_34 :
  Return();
  k_32 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_18)
  Epushd(0,7);
  MoveTop(0,1);
  goto k_57;
  k_57 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto l_57;
  l_57 :
  TestFunFC(t_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto m_57;
  m_57 :
  TestFunFC(t_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto n_57;
  n_57 :
  TestFunFC(c_1,&&fail,Egetd(0,6));
  Rpush(f_36);
  goto o_59;
  f_36 :
  goto r_35;
  o_59 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto k_56;
  k_56 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_56;
  l_56 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto m_56;
  m_56 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(h_36);
  goto p_59;
  h_36 :
  goto g_36;
  p_59 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  g_36 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto o_56;
  o_56 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_56;
  p_56 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_56;
  q_56 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(j_36);
  goto q_59;
  j_36 :
  goto i_36;
  q_59 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  i_36 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(k_36);
  r_59 :
  Epushd(2,9);
  MoveTop(2,1);
  goto x_56;
  x_56 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto y_56;
  y_56 :
  TestFunFC(g_1,&&r_36,Egetd(2,2));
  goto z_56;
  z_56 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto a_57;
  a_57 :
  TestFunFC(g_1,&&fail,Egetd(2,6));
  goto b_57;
  b_57 :
  TestFunFC(c_1,&&fail,Egetd(2,9));
  Rpush(q_36);
  goto s_59;
  r_36 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_57;
  c_57 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto d_57;
  d_57 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto e_57;
  e_57 :
  TestFunFC(c_1,&&fail,Egetd(2,9));
  Rpush(q_36);
  goto t_59;
  q_36 :
  goto p_36;
  t_59 :
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
  Rpush(j_37);
  goto r_59;
  j_37 :
  OneNextSon();
  Ccall(_stratego_t_17);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto u_56;
  u_56 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto v_56;
  v_56 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_56;
  w_56 :
  TestFunFC(c_1,&&fail,Egetd(3,5));
  Rpush(k_37);
  goto u_59;
  k_37 :
  goto i_37;
  u_59 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  i_37 :
  Epopd(3,5);
  Return();
  p_36 :
  goto o_36;
  s_59 :
  Tset(App0("Nil"));
  Return();
  o_36 :
  Epopd(2,9);
  Return();
  k_36 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto h_57;
  h_57 :
  TestFunFC(t_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto i_57;
  i_57 :
  TestFunFC(t_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto j_57;
  j_57 :
  TestFunFC(c_1,&&fail,Egetd(1,9));
  Rpush(v_37);
  goto w_59;
  v_37 :
  goto u_37;
  w_59 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(w_37);
  x_59 :
  Cpush(y_37);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_37);
  goto x_59;
  z_37 :
  AllBuild();
  goto x_37;
  y_37 :
  Ccall(_stratego_e_17);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto a_38;
  x_37 :
  Cpop();
  a_38 :
  Return();
  w_37 :
  Return();
  u_37 :
  Epopd(1,9);
  Return();
  r_35 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_i_18)
  Epushd(0,5);
  MoveTop(0,1);
  goto f_60;
  f_60 :
  TestFunFC(l_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto g_60;
  g_60 :
  TestFunFC(l_11,&&h_38,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto h_60;
  h_60 :
  TestFunFC(g_1,&&i_38,Egetd(0,2));
  Cpush(k_38);
  Rpush(l_38);
  goto b_61;
  l_38 :
  goto j_38;
  k_38 :
  Rpush(d_39);
  goto c_61;
  d_39 :
  goto c_39;
  j_38 :
  Cpop();
  c_39 :
  goto g_38;
  i_38 :
  Rpush(g_38);
  goto c_61;
  h_38 :
  goto i_60;
  i_60 :
  TestFunFC(g_1,&&fail,Egetd(0,2));
  Rpush(g_38);
  goto b_61;
  g_38 :
  goto c_38;
  c_61 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(1,1);
  goto c_60;
  c_60 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_60;
  d_60 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_60;
  e_60 :
  TestFunFC(c_1,&&fail,Egetd(1,5));
  Rpush(f_39);
  goto d_61;
  f_39 :
  goto e_39;
  d_61 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(g_39);
  e_61 :
  Cpush(i_39);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_39);
  goto e_61;
  j_39 :
  AllBuild();
  goto h_39;
  i_39 :
  Ccall(_stratego_e_17);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto q_39;
  h_39 :
  Cpop();
  q_39 :
  Return();
  g_39 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(2,1),Egetd(0,5)));
  Epopd(2,1);
  Return();
  e_39 :
  Epopd(1,5);
  Return();
  c_38 :
  goto b_38;
  b_61 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  b_38 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_18)
  Rpush(r_39);
  u_65 :
  Cpush(t_39);
  Epushd(0,2);
  MoveTop(0,1);
  goto h_61;
  h_61 :
  TestFunFC(b_24,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_39);
  goto v_65;
  v_39 :
  goto u_39;
  v_65 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  u_39 :
  Epopd(0,2);
  goto s_39;
  t_39 :
  Ccontinue(w_39);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_k_18);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(l_11);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(x_39);
  goto u_65;
  x_39 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_g_18);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto o_61;
  o_61 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_61;
  p_61 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto q_61;
  q_61 :
  TestFunFC(c_1,&&fail,Egetd(1,5));
  Rpush(z_39);
  goto c_66;
  z_39 :
  goto y_39;
  c_66 :
  Move(0,3,1,4);
  Return();
  y_39 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(a_40);
  d_66 :
  Cpush(n_40);
  Ccall(_stratego_e_17);
  Tset(App0("Nil"));
  goto b_40;
  n_40 :
  Epushd(1,3);
  MoveTop(1,1);
  goto c_62;
  c_62 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(q_40);
  goto e_66;
  q_40 :
  goto p_40;
  e_66 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(r_40);
  goto d_66;
  r_40 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto z_61;
  z_61 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_62;
  a_62 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto b_62;
  b_62 :
  TestFunFC(c_1,&&fail,Egetd(2,6));
  Rpush(t_40);
  goto h_66;
  t_40 :
  goto s_40;
  h_66 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(u_40);
  i_66 :
  Cpush(w_40);
  Ccall(_stratego_e_17);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto v_40;
  w_40 :
  Ccontinue(x_40);
  Epushd(3,3);
  MoveTop(3,1);
  goto y_61;
  y_61 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(z_40);
  goto j_66;
  z_40 :
  goto y_40;
  j_66 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(a_41);
  k_66 :
  Cpush(c_41);
  Epushd(4,3);
  MoveTop(4,1);
  goto x_61;
  x_61 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(e_41);
  goto l_66;
  e_41 :
  goto d_41;
  l_66 :
  Move(3,2,4,2);
  Return();
  d_41 :
  Epopd(4,3);
  goto b_41;
  c_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_41);
  goto k_66;
  s_41 :
  AllBuild();
  goto f_41;
  b_41 :
  Cpop();
  f_41 :
  Return();
  a_41 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(t_41);
  goto i_66;
  t_41 :
  Return();
  y_40 :
  Epopd(3,3);
  goto v_40;
  x_40 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_41);
  goto i_66;
  v_41 :
  AllBuild();
  goto u_41;
  v_40 :
  Cpop();
  u_41 :
  Return();
  u_40 :
  Return();
  s_40 :
  Epopd(2,6);
  Return();
  p_40 :
  Epopd(1,3);
  goto o_40;
  b_40 :
  Cpop();
  o_40 :
  Return();
  a_40 :
  Epopd(0,3);
  goto s_39;
  w_39 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto f_62;
  f_62 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_62;
  g_62 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto h_62;
  h_62 :
  TestFunFC(c_1,&&fail,Egetd(1,5));
  Rpush(y_41);
  goto n_66;
  y_41 :
  goto x_41;
  n_66 :
  Move(0,2,1,4);
  Return();
  x_41 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(z_41);
  o_66 :
  Cpush(e_42);
  Ccall(_stratego_e_17);
  Tset(App0("Nil"));
  goto d_42;
  e_42 :
  Epushd(1,3);
  MoveTop(1,1);
  goto t_62;
  t_62 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(k_42);
  goto p_66;
  k_42 :
  goto g_42;
  p_66 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(l_42);
  goto u_65;
  l_42 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(m_42);
  goto o_66;
  m_42 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto q_62;
  q_62 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_62;
  r_62 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto s_62;
  s_62 :
  TestFunFC(c_1,&&fail,Egetd(2,7));
  Rpush(o_42);
  goto s_66;
  o_42 :
  goto n_42;
  s_66 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(p_42);
  t_66 :
  Cpush(x_42);
  Ccall(_stratego_e_17);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto w_42;
  x_42 :
  Ccontinue(y_42);
  Epushd(3,3);
  MoveTop(3,1);
  goto p_62;
  p_62 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(a_43);
  goto u_66;
  a_43 :
  goto z_42;
  u_66 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(b_43);
  v_66 :
  Cpush(m_43);
  Epushd(4,3);
  MoveTop(4,1);
  goto o_62;
  o_62 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(w_44);
  goto w_66;
  w_44 :
  goto v_44;
  w_66 :
  Move(3,2,4,2);
  Return();
  v_44 :
  Epopd(4,3);
  goto i_43;
  m_43 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_44);
  goto v_66;
  y_44 :
  AllBuild();
  goto x_44;
  i_43 :
  Cpop();
  x_44 :
  Return();
  b_43 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(f_45);
  goto t_66;
  f_45 :
  Return();
  z_42 :
  Epopd(3,3);
  goto w_42;
  y_42 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_45);
  goto t_66;
  k_45 :
  AllBuild();
  goto g_45;
  w_42 :
  Cpop();
  g_45 :
  Return();
  p_42 :
  Return();
  n_42 :
  Epopd(2,7);
  Return();
  g_42 :
  Epopd(1,3);
  goto f_42;
  d_42 :
  Cpop();
  f_42 :
  Return();
  z_41 :
  Epopd(0,2);
  goto w_41;
  s_39 :
  Cpop();
  w_41 :
  Return();
  r_39 :
ENDPROC

PROC(_stratego_k_18)
  Epushd(0,6);
  MoveTop(0,2);
  goto z_66;
  z_66 :
  TestFunFC(l_11,&&o_45,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(n_45);
  goto m_67;
  o_45 :
  TestFunFC(v_45,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto a_67;
  a_67 :
  TestFunFC(w_45,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(n_45);
  goto n_67;
  n_45 :
  goto m_45;
  n_67 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_j_18);
  Return();
  m_45 :
  goto l_45;
  m_67 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  l_45 :
  Epopd(0,6);
ENDPROC

DOIT

