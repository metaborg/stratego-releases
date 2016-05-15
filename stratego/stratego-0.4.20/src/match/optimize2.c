#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,z_45);
VARDECL(AFun,y_45);
VARDECL(AFun,p_20);
VARDECL(AFun,m_20);
VARDECL(AFun,l_20);
VARDECL(AFun,u_19);
VARDECL(AFun,r_19);
VARDECL(AFun,l_19);
VARDECL(AFun,f_19);
VARDECL(AFun,b_19);
VARDECL(AFun,x_18);
VARDECL(AFun,u_18);
VARDECL(AFun,q_18);
VARDECL(AFun,x_14);
VARDECL(AFun,v_14);
VARDECL(AFun,t_14);
VARDECL(AFun,r_14);
VARDECL(AFun,p_14);
VARDECL(AFun,i_14);
VARDECL(AFun,o_13);
VARDECL(AFun,n_13);
VARDECL(AFun,m_13);
VARDECL(AFun,k_13);
VARDECL(AFun,i_13);
VARDECL(AFun,f_13);
VARDECL(AFun,d_13);
VARDECL(AFun,l_12);
VARDECL(AFun,i_12);
VARDECL(AFun,h_12);
VARDECL(AFun,z_10);
VARDECL(AFun,y_10);
VARDECL(AFun,q_10);
VARDECL(AFun,p_10);
VARDECL(AFun,e_10);
VARDECL(AFun,v_9);
VARDECL(AFun,u_9);
VARDECL(AFun,q_8);
VARDECL(AFun,e_8);
VARDECL(AFun,q_7);
VARDECL(AFun,f_7);
VARDECL(AFun,u_6);
VARDECL(AFun,h_6);
VARDECL(AFun,x_5);
VARDECL(AFun,u_5);
VARDECL(AFun,g_1);
VARDECL(AFun,c_1);
VARDECL(AFun,y_0);
VARDECL(AFun,t_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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

PROC(_stratego_init_afuns)
  MOVE(z_45,ATmakeAFun("Rule",3,0));
  MOVE(y_45,ATmakeAFun("LRule",1,0));
  MOVE(p_20,ATmakeAFun("Assign",1,0));
  MOVE(m_20,ATmakeAFun("Var",1,0));
  MOVE(l_20,ATmakeAFun("Assign",2,0));
  MOVE(u_19,ATmakeAFun("BAM",3,0));
  MOVE(r_19,ATmakeAFun("AM",2,0));
  MOVE(l_19,ATmakeAFun("MA",2,0));
  MOVE(f_19,ATmakeAFun("BA",2,0));
  MOVE(b_19,ATmakeAFun("Lets",2,0));
  MOVE(x_18,ATmakeAFun("LChoices",1,0));
  MOVE(u_18,ATmakeAFun("Choices",1,0));
  MOVE(q_18,ATmakeAFun("Seqs",1,0));
  MOVE(x_14,ATmakeAFun("Choice",2,0));
  MOVE(v_14,ATmakeAFun("Cong",2,0));
  MOVE(t_14,ATmakeAFun("Path",2,0));
  MOVE(r_14,ATmakeAFun("One",1,0));
  MOVE(p_14,ATmakeAFun("Some",1,0));
  MOVE(i_14,ATmakeAFun("Fail",0,0));
  MOVE(o_13,ATmakeAFun("Wld",0,0));
  MOVE(n_13,ATmakeAFun("Match",1,0));
  MOVE(m_13,ATmakeAFun("Where",1,0));
  MOVE(k_13,ATmakeAFun("All",1,0));
  MOVE(i_13,ATmakeAFun("Rec",2,0));
  MOVE(f_13,ATmakeAFun("Scope",2,0));
  MOVE(d_13,ATmakeAFun("LChoice",2,0));
  MOVE(l_12,ATmakeAFun("Not",1,0));
  MOVE(i_12,ATmakeAFun("Id",0,0));
  MOVE(h_12,ATmakeAFun("Test",1,0));
  MOVE(z_10,ATmakeAFun("Matrix",2,0));
  MOVE(y_10,ATmakeAFun("Case",4,0));
  MOVE(q_10,ATmakeAFun("SVar",1,0));
  MOVE(p_10,ATmakeAFun("Call",2,0));
  MOVE(e_10,ATmakeAFun("Build",1,0));
  MOVE(v_9,ATmakeAFun("Let",2,0));
  MOVE(u_9,ATmakeAFun("Seq",2,0));
  MOVE(q_8,ATmakeAFun("Runtime",1,0));
  MOVE(e_8,ATmakeAFun("Silent",0,0));
  MOVE(q_7,ATmakeAFun("Binary",0,0));
  MOVE(f_7,ATmakeAFun("Output",1,0));
  MOVE(u_6,ATmakeAFun("Input",1,0));
  MOVE(h_6,ATmakeAFun("Program",1,0));
  MOVE(x_5,ATmakeAFun("Help",0,0));
  MOVE(u_5,ATmakeAFun("Undefined",1,0));
  MOVE(g_1,ATmakeAFun("Nil",0,0));
  MOVE(c_1,ATmakeAFun("TNil",0,0));
  MOVE(y_0,ATmakeAFun("SDef",3,0));
  MOVE(t_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_a_16);
ENDPROC

PROC(_stratego_a_16)
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
  a_6 :
  Cpush(e_0);
  Cpush(j_0);
  Ccall(_stratego_b_16);
  goto i_0;
  j_0 :
  Ccall(_stratego_c_16);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_0);
  goto a_6;
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
  goto d_6;
  p_0 :
  goto o_0;
  d_6 :
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
  Ccall(_stratego_d_16);
  goto q_0;
  r_0 :
  Ccontinue(s_0);
  Epushd(0,6);
  Ccall(_stratego_i_16);
  Tdupl();
  Ccall(_stratego_k_16);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(u_0);
  e_6 :
  Cpush(w_0);
  Ccall(_stratego_b_16);
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
  Ccall(_stratego_r_16);
  Ccall(_stratego_g_17);
  AllBuild();
  OneNextSon();
  Rpush(z_0);
  goto e_6;
  z_0 :
  AllBuild();
  goto x_0;
  v_0 :
  Cpop();
  x_0 :
  Return();
  u_0 :
  OneNextSon();
  Ccall(_stratego_q_16);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_k_16);
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
  goto g_6;
  b_1 :
  goto a_1;
  g_6 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  a_1 :
  Ccall(_stratego_l_16);
  Ccall(_stratego_o_16);
  Epopd(0,6);
  goto q_0;
  s_0 :
  Ccall(_stratego_p_16);
  goto d_1;
  q_0 :
  Cpop();
  d_1 :
ENDPROC

PROC(_stratego_b_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_6;
  n_6 :
  TestFunFC(g_1,&&fail,Egetd(0,1));
  Rpush(f_1);
  goto p_6;
  f_1 :
  goto e_1;
  p_6 :
  Return();
  e_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_16)
  Epushd(0,5);
  MoveTop(0,3);
  goto p_12;
  p_12 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_12;
  q_12 :
  TestFunFC(a_0,&&x_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(z_1);
  Rpush(a_2);
  goto g_19;
  a_2 :
  goto y_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto j_19;
  c_2 :
  goto y_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto m_19;
  e_2 :
  goto y_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto p_19;
  g_2 :
  goto y_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto s_19;
  i_2 :
  goto y_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto v_19;
  k_2 :
  goto y_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto z_19;
  m_2 :
  goto y_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto d_20;
  o_2 :
  goto y_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto h_20;
  q_2 :
  goto y_1;
  p_2 :
  Ccontinue(r_2);
  Rpush(s_2);
  goto n_20;
  s_2 :
  goto y_1;
  r_2 :
  Ccontinue(t_2);
  Rpush(u_2);
  goto r_20;
  u_2 :
  goto y_1;
  t_2 :
  Ccontinue(v_2);
  Rpush(w_2);
  goto u_20;
  w_2 :
  goto y_1;
  v_2 :
  Ccontinue(x_2);
  Rpush(y_2);
  goto x_20;
  y_2 :
  goto y_1;
  x_2 :
  Ccontinue(z_2);
  Rpush(a_3);
  goto a_21;
  a_3 :
  goto y_1;
  z_2 :
  Rpush(f_3);
  goto d_21;
  f_3 :
  goto b_3;
  y_1 :
  Cpop();
  b_3 :
  goto w_1;
  x_1 :
  Cpush(i_3);
  Rpush(j_3);
  goto g_19;
  j_3 :
  goto g_3;
  i_3 :
  Ccontinue(k_3);
  Rpush(m_3);
  goto j_19;
  m_3 :
  goto g_3;
  k_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto m_19;
  t_3 :
  goto g_3;
  s_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto p_19;
  v_3 :
  goto g_3;
  u_3 :
  Ccontinue(w_3);
  Rpush(x_3);
  goto s_19;
  x_3 :
  goto g_3;
  w_3 :
  Ccontinue(y_3);
  Rpush(z_3);
  goto r_20;
  z_3 :
  goto g_3;
  y_3 :
  Ccontinue(a_4);
  Rpush(b_4);
  goto u_20;
  b_4 :
  goto g_3;
  a_4 :
  Ccontinue(c_4);
  Rpush(d_4);
  goto x_20;
  d_4 :
  goto g_3;
  c_4 :
  Ccontinue(e_4);
  Rpush(f_4);
  goto a_21;
  f_4 :
  goto g_3;
  e_4 :
  Rpush(h_4);
  goto d_21;
  h_4 :
  goto g_4;
  g_3 :
  Cpop();
  g_4 :
  goto w_1;
  w_1 :
  goto v_1;
  d_21 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_12;
  j_12 :
  TestStr(1,1,"-?",&&fail);
  Rpush(j_4);
  goto e_21;
  j_4 :
  goto i_4;
  e_21 :
  Return();
  i_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  v_1 :
  goto u_1;
  a_21 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_11;
  y_11 :
  TestStr(1,1,"-h",&&fail);
  Rpush(l_4);
  goto b_21;
  l_4 :
  goto k_4;
  b_21 :
  Return();
  k_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  u_1 :
  goto t_1;
  x_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_11;
  m_11 :
  TestStr(1,1,"--help",&&fail);
  Rpush(n_4);
  goto y_20;
  n_4 :
  goto m_4;
  y_20 :
  Return();
  m_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  t_1 :
  goto s_1;
  u_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_11;
  h_11 :
  TestStr(1,1,"-s",&&fail);
  Rpush(p_4);
  goto v_20;
  p_4 :
  goto o_4;
  v_20 :
  Return();
  o_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  s_1 :
  goto r_1;
  r_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_10;
  t_10 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_4);
  goto s_20;
  r_4 :
  goto q_4;
  s_20 :
  Return();
  q_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  r_1 :
  goto q_1;
  n_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_9;
  g_9 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto o_20;
  t_4 :
  goto s_4;
  o_20 :
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
  q_1 :
  goto p_1;
  h_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_9;
  c_9 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto k_20;
  v_4 :
  goto u_4;
  k_20 :
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
  p_1 :
  goto o_1;
  d_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_8;
  y_8 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto e_20;
  x_4 :
  goto w_4;
  e_20 :
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
  o_1 :
  goto n_1;
  z_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_8;
  u_8 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto a_20;
  z_4 :
  goto y_4;
  a_20 :
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
  n_1 :
  goto m_1;
  v_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_8;
  p_8 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_5);
  goto w_19;
  b_5 :
  goto a_5;
  w_19 :
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
  m_1 :
  goto l_1;
  s_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_8;
  m_8 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_5);
  goto t_19;
  d_5 :
  goto c_5;
  t_19 :
  Return();
  c_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  p_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_8;
  j_8 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_5);
  goto q_19;
  f_5 :
  goto e_5;
  q_19 :
  Return();
  e_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  m_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_8;
  f_8 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_5);
  goto n_19;
  h_5 :
  goto g_5;
  n_19 :
  Return();
  g_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  j_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_8;
  c_8 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_5);
  goto k_19;
  j_5 :
  goto i_5;
  k_19 :
  Return();
  i_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  g_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_7;
  v_7 :
  TestStr(1,1,"-S",&&fail);
  Rpush(l_5);
  goto h_19;
  l_5 :
  goto k_5;
  h_19 :
  Return();
  k_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  h_1 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_16)
  Tdupl();
  m_5 :
  TestFunTop(a_0);
  Cpush(n_5);
  Arg(0);
  Cpush(q_5);
  Ccall(_stratego_e_16);
  goto p_5;
  q_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto h_21;
  h_21 :
  TestFunFC(u_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_5);
  goto l_21;
  t_5 :
  goto s_5;
  l_21 :
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
  Ccall(_stratego_f_16);
ENDPROC

PROC(_stratego_e_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_21;
  n_21 :
  TestFunFC(x_5,&&fail,Egetd(0,1));
  Rpush(w_5);
  goto p_21;
  w_5 :
  goto v_5;
  p_21 :
  Return();
  v_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_16)
  Epushd(0,1);
  Tdupl();
  Rpush(y_5);
  y_21 :
  Cpush(b_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_21;
  r_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_21;
  s_21 :
  TestFunFC(h_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_6);
  goto z_21;
  f_6 :
  goto c_6;
  z_21 :
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
  Rpush(j_6);
  goto y_21;
  j_6 :
  AllBuild();
  goto i_6;
  z_5 :
  Cpop();
  i_6 :
  Return();
  y_5 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_g_16);
  Tset(MakeInt(1));
  Ccall(_stratego_h_16);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_16)
  _ST_printnl();
ENDPROC

PROC(_stratego_h_16)
  _ST_exit();
ENDPROC

PROC(_stratego_i_16)
  Epushd(0,3);
  Tdupl();
  Cpush(l_6);
  Rpush(m_6);
  t_22 :
  Cpush(r_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_22;
  b_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_22;
  c_22 :
  TestFunFC(u_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_6);
  goto u_22;
  t_6 :
  goto s_6;
  u_22 :
  Move(0,1,1,3);
  Return();
  s_6 :
  Epopd(1,4);
  goto q_6;
  r_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_6);
  goto t_22;
  w_6 :
  AllBuild();
  goto v_6;
  q_6 :
  Cpop();
  v_6 :
  Return();
  m_6 :
  goto k_6;
  l_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto x_6;
  k_6 :
  Cpop();
  x_6 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_j_16);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_j_16)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_k_16)
  _ST_dtime();
ENDPROC

PROC(_stratego_l_16)
  Epushd(0,1);
  Tdupl();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Cpush(z_6);
  Rpush(a_7);
  y_23 :
  Cpush(c_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_23;
  a_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_23;
  b_23 :
  TestFunFC(f_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_7);
  goto z_23;
  e_7 :
  goto d_7;
  z_23 :
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
  Rpush(h_7);
  goto y_23;
  h_7 :
  AllBuild();
  goto g_7;
  b_7 :
  Cpop();
  g_7 :
  Return();
  a_7 :
  goto y_6;
  z_6 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto i_7;
  y_6 :
  Cpop();
  i_7 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_16);
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
  Ccall(_stratego_q_16);
  AllBuild();
  AllBuild();
  Cpush(k_7);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(l_7);
  e_24 :
  Cpush(n_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto h_23;
  h_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_23;
  i_23 :
  TestFunFC(q_7,&&fail,Egetd(1,2));
  Rpush(p_7);
  goto f_24;
  p_7 :
  goto o_7;
  f_24 :
  Return();
  o_7 :
  Epopd(1,3);
  goto m_7;
  n_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_7);
  goto e_24;
  s_7 :
  AllBuild();
  goto r_7;
  m_7 :
  Cpop();
  r_7 :
  Return();
  l_7 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_16);
  OneNextSon();
  Ccall(_stratego_q_16);
  AllBuild();
  AllBuild();
  goto j_7;
  k_7 :
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_16);
  OneNextSon();
  Ccall(_stratego_q_16);
  AllBuild();
  AllBuild();
  goto t_7;
  j_7 :
  Cpop();
  t_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_16)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_n_16)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_o_16)
  Epushd(0,2);
  Tdupl();
  Cpush(w_7);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Cpush(x_7);
  Tdupl();
  Rpush(y_7);
  c_25 :
  Cpush(a_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto h_24;
  h_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_24;
  i_24 :
  TestFunFC(e_8,&&fail,Egetd(1,2));
  Rpush(d_8);
  goto d_25;
  d_8 :
  goto b_8;
  d_25 :
  Return();
  b_8 :
  Epopd(1,3);
  goto z_7;
  a_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_8);
  goto c_25;
  h_8 :
  AllBuild();
  goto g_8;
  z_7 :
  Cpop();
  g_8 :
  Return();
  y_7 :
  Cpop();
  Crestore();
  Cjump();
  x_7 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_16);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(i_8);
  j_25 :
  Cpush(l_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_24;
  k_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_24;
  l_24 :
  TestFunFC(q_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_8);
  goto k_25;
  o_8 :
  goto n_8;
  k_25 :
  Move(0,2,1,3);
  Return();
  n_8 :
  Epopd(1,4);
  goto k_8;
  l_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_8);
  goto j_25;
  s_8 :
  AllBuild();
  goto r_8;
  k_8 :
  Cpop();
  r_8 :
  Return();
  i_8 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_16);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(t_8);
  l_25 :
  Cpush(w_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_24;
  n_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_24;
  o_24 :
  TestFunFC(h_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_8);
  goto m_25;
  z_8 :
  goto x_8;
  m_25 :
  Move(0,1,1,3);
  Return();
  x_8 :
  Epopd(1,4);
  goto v_8;
  w_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_9);
  goto l_25;
  b_9 :
  AllBuild();
  goto a_9;
  v_8 :
  Cpop();
  a_9 :
  Return();
  t_8 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_16);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_g_16);
  goto u_7;
  w_7 :
  goto d_9;
  u_7 :
  Cpop();
  d_9 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_h_16);
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_16)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_g_16);
  Tset(MakeInt(1));
  Ccall(_stratego_h_16);
ENDPROC

PROC(_stratego_q_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_25;
  o_25 :
  TestFunFC(c_1,&&fail,Egetd(0,1));
  Rpush(f_9);
  goto q_25;
  f_9 :
  goto e_9;
  q_25 :
  Return();
  e_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_16)
  Rpush(h_9);
  r_25 :
  Cpush(j_9);
  i_9 :
  Ccall(_stratego_s_16);
  Tduplinv();
  goto i_9;
  j_9 :
  AllInit();
  k_9 :
  AllNextSon(&&l_9);
  Rpush(m_9);
  goto r_25;
  m_9 :
  goto k_9;
  l_9 :
  AllBuild();
  Cpush(o_9);
  n_9 :
  Ccall(_stratego_s_16);
  Tduplinv();
  goto n_9;
  o_9 :
  Return();
  h_9 :
ENDPROC

PROC(_stratego_s_16)
  Cpush(q_9);
  Ccall(_stratego_t_16);
  goto p_9;
  q_9 :
  Ccontinue(r_9);
  Epushd(0,5);
  MoveTop(0,1);
  goto o_26;
  o_26 :
  TestFunFC(u_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto p_26;
  p_26 :
  TestFunFC(v_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(t_9);
  goto f_29;
  t_9 :
  goto s_9;
  f_29 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,4),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  s_9 :
  Epopd(0,5);
  goto p_9;
  r_9 :
  Ccontinue(w_9);
  Ccall(_stratego_z_16);
  goto p_9;
  w_9 :
  Ccontinue(x_9);
  Ccall(_stratego_f_17);
  goto p_9;
  x_9 :
  Epushd(0,9);
  MoveTop(0,4);
  goto g_27;
  g_27 :
  TestFunFC(u_9,&&d_10,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto h_27;
  h_27 :
  TestFunFC(e_10,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto i_27;
  i_27 :
  TestFunFC(u_9,&&fail,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,3,0,9,1);
  goto j_27;
  j_27 :
  TestFunFC(e_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(c_10);
  goto g_29;
  d_10 :
  TestFunFC(v_9,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto k_27;
  k_27 :
  TestFunFC(y_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  MoveArg(0,8,0,5,2);
  goto l_27;
  l_27 :
  TestFunFC(g_1,&&fail,Egetd(0,7));
  Cpush(g_10);
  Rpush(h_10);
  goto h_29;
  h_10 :
  goto f_10;
  g_10 :
  Rpush(j_10);
  goto q_29;
  j_10 :
  goto i_10;
  f_10 :
  Cpop();
  i_10 :
  goto c_10;
  c_10 :
  goto b_10;
  q_29 :
  NotNULLd(0,6);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App2("Let",App4("SDef",App2("Cons",App0("DontInline"),App0("Nil")),Egetd(0,6),App0("Nil"),Egetd(0,8)),Egetd(0,9)));
  Return();
  b_10 :
  goto a_10;
  h_29 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,9);
  Tset(Egetd(0,9));
  Rpush(k_10);
  i_29 :
  Cpush(m_10);
  Epushd(3,4);
  MoveTop(3,1);
  goto u_26;
  u_26 :
  TestFunFC(p_10,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,4,3,1,1);
  goto v_26;
  v_26 :
  TestFunFC(q_10,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  goto w_26;
  w_26 :
  TestFunFC(g_1,&&fail,Egetd(3,4));
  Rpush(o_10);
  goto j_29;
  o_10 :
  goto n_10;
  j_29 :
  Move(0,6,3,3);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  n_10 :
  Epopd(3,4);
  goto l_10;
  m_10 :
  Cpush(s_10);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,3);
  goto z_26;
  z_26 :
  TestFunFC(y_10,&&x_10,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  MoveArg(3,1,3,3,2);
  MoveArg(3,2,3,3,3);
  Rpush(w_10);
  goto k_29;
  x_10 :
  TestFunFC(z_10,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(w_10);
  goto l_29;
  w_10 :
  goto v_10;
  l_29 :
  Return();
  v_10 :
  goto u_10;
  k_29 :
  Return();
  u_10 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  s_10 :
  IsAppl();
  OneInit();
  a_11 :
  OneNextSon();
  Cpush(a_11);
  Rpush(c_11);
  goto i_29;
  c_11 :
  Cpop();
  OneBuild();
  goto r_10;
  l_10 :
  Cpop();
  r_10 :
  Return();
  k_10 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Call",App1("SVar",Egetd(0,6)),App0("Nil")),App2("TCons",Egetd(1,1),App0("TNil"))));
  Cpush(d_11);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,1);
  goto d_27;
  d_27 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto e_27;
  e_27 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto f_27;
  f_27 :
  TestFunFC(c_1,&&fail,Egetd(3,5));
  Rpush(f_11);
  goto n_29;
  f_11 :
  goto e_11;
  n_29 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(n_11);
  g_11 :
  Cpush(i_11);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,2,4,1);
  Epopd(4,1);
  Cpop();
  goto l_11;
  i_11 :
  IsAppl();
  MatchTravInit();
  j_11 :
  OneMatchNextSon();
  Cpush(j_11);
  Rpush(k_11);
  goto g_11;
  k_11 :
  Cpop();
  MatchTravEnd();
  l_11 :
  Return();
  n_11 :
  Return();
  e_11 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  d_11 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  a_10 :
  goto z_9;
  g_29 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,2)),Egetd(0,3)));
  Return();
  z_9 :
  Epopd(0,9);
  goto y_9;
  p_9 :
  Cpop();
  y_9 :
ENDPROC

PROC(_stratego_t_16)
  Cpush(p_11);
  Ccall(_stratego_u_16);
  goto o_11;
  p_11 :
  Ccontinue(q_11);
  Ccall(_stratego_v_16);
  goto o_11;
  q_11 :
  Ccontinue(r_11);
  Ccall(_stratego_w_16);
  goto o_11;
  r_11 :
  Ccontinue(s_11);
  Ccall(_stratego_x_16);
  goto o_11;
  s_11 :
  Ccall(_stratego_y_16);
  goto t_11;
  o_11 :
  Cpop();
  t_11 :
ENDPROC

PROC(_stratego_u_16)
  Epushd(0,3);
  MoveTop(0,2);
  goto b_30;
  b_30 :
  TestFunFC(h_12,&&g_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto c_30;
  c_30 :
  TestFunFC(i_12,&&fail,Egetd(0,3));
  Rpush(f_12);
  goto v_30;
  g_12 :
  TestFunFC(l_12,&&k_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto d_30;
  d_30 :
  TestFunFC(i_12,&&fail,Egetd(0,3));
  Rpush(f_12);
  goto w_30;
  k_12 :
  TestFunFC(u_9,&&m_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto e_30;
  e_30 :
  TestFunFC(i_12,&&n_12,Egetd(0,1));
  goto f_30;
  f_30 :
  TestFunFC(i_12,&&o_12,Egetd(0,3));
  Cpush(x_12);
  Rpush(y_12);
  goto x_30;
  y_12 :
  goto w_12;
  x_12 :
  Rpush(a_13);
  goto y_30;
  a_13 :
  goto z_12;
  w_12 :
  Cpop();
  z_12 :
  goto f_12;
  o_12 :
  Rpush(f_12);
  goto y_30;
  n_12 :
  goto g_30;
  g_30 :
  TestFunFC(i_12,&&fail,Egetd(0,3));
  Rpush(f_12);
  goto x_30;
  m_12 :
  TestFunFC(d_13,&&b_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto h_30;
  h_30 :
  TestFunFC(i_12,&&fail,Egetd(0,3));
  Rpush(f_12);
  goto z_30;
  b_13 :
  TestFunFC(f_13,&&e_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto i_30;
  i_30 :
  TestFunFC(i_12,&&fail,Egetd(0,1));
  Rpush(f_12);
  goto a_31;
  e_13 :
  TestFunFC(i_13,&&g_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto j_30;
  j_30 :
  TestFunFC(i_12,&&fail,Egetd(0,1));
  Rpush(f_12);
  goto b_31;
  g_13 :
  TestFunFC(k_13,&&j_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto k_30;
  k_30 :
  TestFunFC(i_12,&&fail,Egetd(0,3));
  Rpush(f_12);
  goto c_31;
  j_13 :
  TestFunFC(m_13,&&l_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto l_30;
  l_30 :
  TestFunFC(i_12,&&fail,Egetd(0,3));
  Rpush(f_12);
  goto d_31;
  l_13 :
  TestFunFC(n_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto m_30;
  m_30 :
  TestFunFC(o_13,&&fail,Egetd(0,3));
  Rpush(f_12);
  goto e_31;
  f_12 :
  goto e_12;
  e_31 :
  Tset(App0("Id"));
  Return();
  e_12 :
  goto d_12;
  d_31 :
  Tset(App0("Id"));
  Return();
  d_12 :
  goto c_12;
  c_31 :
  Tset(App0("Id"));
  Return();
  c_12 :
  goto b_12;
  b_31 :
  Tset(App0("Id"));
  Return();
  b_12 :
  goto a_12;
  a_31 :
  Tset(App0("Id"));
  Return();
  a_12 :
  goto z_11;
  z_30 :
  Tset(App0("Id"));
  Return();
  z_11 :
  goto x_11;
  y_30 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  x_11 :
  goto w_11;
  x_30 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  w_11 :
  goto v_11;
  w_30 :
  Tset(App0("Fail"));
  Return();
  v_11 :
  goto u_11;
  v_30 :
  Tset(App0("Id"));
  Return();
  u_11 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_v_16)
  Epushd(0,3);
  MoveTop(0,2);
  goto w_31;
  w_31 :
  TestFunFC(h_12,&&h_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto x_31;
  x_31 :
  TestFunFC(i_14,&&fail,Egetd(0,3));
  Rpush(f_14);
  goto h_33;
  h_14 :
  TestFunFC(l_12,&&j_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto y_31;
  y_31 :
  TestFunFC(i_14,&&fail,Egetd(0,3));
  Rpush(f_14);
  goto i_33;
  j_14 :
  TestFunFC(u_9,&&k_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto z_31;
  z_31 :
  TestFunFC(i_14,&&fail,Egetd(0,3));
  Rpush(f_14);
  goto j_33;
  k_14 :
  TestFunFC(f_13,&&l_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto a_32;
  a_32 :
  TestFunFC(i_14,&&fail,Egetd(0,1));
  Rpush(f_14);
  goto k_33;
  l_14 :
  TestFunFC(i_13,&&m_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto b_32;
  b_32 :
  TestFunFC(i_14,&&fail,Egetd(0,1));
  Rpush(f_14);
  goto l_33;
  m_14 :
  TestFunFC(p_14,&&n_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto c_32;
  c_32 :
  TestFunFC(i_14,&&fail,Egetd(0,3));
  Rpush(f_14);
  goto m_33;
  n_14 :
  TestFunFC(r_14,&&q_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto d_32;
  d_32 :
  TestFunFC(i_14,&&fail,Egetd(0,3));
  Rpush(f_14);
  goto n_33;
  q_14 :
  TestFunFC(t_14,&&s_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto e_32;
  e_32 :
  TestFunFC(i_14,&&fail,Egetd(0,1));
  Rpush(f_14);
  goto o_33;
  s_14 :
  TestFunFC(v_14,&&u_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(f_14);
  goto p_33;
  u_14 :
  TestFunFC(x_14,&&w_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto f_32;
  f_32 :
  TestFunFC(i_14,&&y_14,Egetd(0,1));
  goto g_32;
  g_32 :
  TestFunFC(i_14,&&z_14,Egetd(0,3));
  Cpush(b_15);
  Rpush(c_15);
  goto s_33;
  c_15 :
  goto a_15;
  b_15 :
  Rpush(e_15);
  goto t_33;
  e_15 :
  goto d_15;
  a_15 :
  Cpop();
  d_15 :
  goto f_14;
  z_14 :
  Rpush(f_14);
  goto t_33;
  y_14 :
  goto h_32;
  h_32 :
  TestFunFC(i_14,&&fail,Egetd(0,3));
  Rpush(f_14);
  goto s_33;
  w_14 :
  TestFunFC(d_13,&&f_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto i_32;
  i_32 :
  TestFunFC(i_14,&&g_15,Egetd(0,1));
  goto j_32;
  j_32 :
  TestFunFC(i_14,&&h_15,Egetd(0,3));
  Cpush(k_15);
  Rpush(l_15);
  goto u_33;
  l_15 :
  goto i_15;
  k_15 :
  Rpush(n_15);
  goto v_33;
  n_15 :
  goto m_15;
  i_15 :
  Cpop();
  m_15 :
  goto f_14;
  h_15 :
  Rpush(f_14);
  goto v_33;
  g_15 :
  goto k_32;
  k_32 :
  TestFunFC(i_14,&&fail,Egetd(0,3));
  Rpush(f_14);
  goto u_33;
  f_15 :
  TestFunFC(m_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto l_32;
  l_32 :
  TestFunFC(i_14,&&fail,Egetd(0,3));
  Rpush(f_14);
  goto w_33;
  f_14 :
  goto e_14;
  w_33 :
  Tset(App0("Fail"));
  Return();
  e_14 :
  goto d_14;
  v_33 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  d_14 :
  goto c_14;
  u_33 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  c_14 :
  goto b_14;
  t_33 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  b_14 :
  goto a_14;
  s_33 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  a_14 :
  goto z_13;
  p_33 :
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(o_15);
  q_33 :
  Cpush(q_15);
  Epushd(1,3);
  MoveTop(1,1);
  goto u_31;
  u_31 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_31;
  v_31 :
  TestFunFC(i_14,&&fail,Egetd(1,2));
  Rpush(s_15);
  goto r_33;
  s_15 :
  goto r_15;
  r_33 :
  Return();
  r_15 :
  Epopd(1,3);
  goto p_15;
  q_15 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_15);
  goto q_33;
  u_15 :
  AllBuild();
  goto t_15;
  p_15 :
  Cpop();
  t_15 :
  Return();
  o_15 :
  Tpop();
  Tset(App0("Fail"));
  Return();
  z_13 :
  goto x_13;
  o_33 :
  Tset(App0("Fail"));
  Return();
  x_13 :
  goto w_13;
  n_33 :
  Tset(App0("Fail"));
  Return();
  w_13 :
  goto v_13;
  m_33 :
  Tset(App0("Fail"));
  Return();
  v_13 :
  goto u_13;
  l_33 :
  Tset(App0("Fail"));
  Return();
  u_13 :
  goto s_13;
  k_33 :
  Tset(App0("Fail"));
  Return();
  s_13 :
  goto r_13;
  j_33 :
  Tset(App0("Fail"));
  Return();
  r_13 :
  goto q_13;
  i_33 :
  Tset(App0("Id"));
  Return();
  q_13 :
  goto p_13;
  h_33 :
  Tset(App0("Fail"));
  Return();
  p_13 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_w_16)
  Epushd(0,5);
  MoveTop(0,1);
  goto a_34;
  a_34 :
  TestFunFC(x_14,&&z_15,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto b_34;
  b_34 :
  TestFunFC(x_14,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(y_15);
  goto s_34;
  z_15 :
  TestFunFC(u_9,&&k_17,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto c_34;
  c_34 :
  TestFunFC(u_9,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(y_15);
  goto t_34;
  k_17 :
  TestFunFC(d_13,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto d_34;
  d_34 :
  TestFunFC(d_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(y_15);
  goto u_34;
  y_15 :
  goto x_15;
  u_34 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("LChoice",Egetd(0,3),App2("LChoice",Egetd(0,4),Egetd(0,5))));
  Return();
  x_15 :
  goto w_15;
  t_34 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,3),App2("Seq",Egetd(0,4),Egetd(0,5))));
  Return();
  w_15 :
  goto v_15;
  s_34 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Choice",Egetd(0,3),App2("Choice",Egetd(0,4),Egetd(0,5))));
  Return();
  v_15 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_x_16)
  Epushd(0,9);
  MoveTop(0,2);
  goto b_35;
  b_35 :
  TestFunFC(x_14,&&t_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(s_17);
  goto e_36;
  t_17 :
  TestFunFC(d_13,&&v_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(s_17);
  goto f_36;
  v_17 :
  TestFunFC(l_12,&&w_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto c_35;
  c_35 :
  TestFunFC(l_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(s_17);
  goto h_36;
  w_17 :
  TestFunFC(h_12,&&x_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto d_35;
  d_35 :
  TestFunFC(h_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(s_17);
  goto i_36;
  x_17 :
  TestFunFC(m_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto e_35;
  e_35 :
  TestFunFC(m_13,&&y_17,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(s_17);
  goto g_36;
  y_17 :
  TestFunFC(u_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto f_35;
  f_35 :
  TestFunFC(m_13,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto g_35;
  g_35 :
  TestFunFC(u_9,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,9,0,6,1);
  goto h_35;
  h_35 :
  TestFunFC(e_10,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  Rpush(s_17);
  goto j_36;
  s_17 :
  goto r_17;
  j_36 :
  NotNULLd(0,5);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App1("Where",App2("Seq",Egetd(0,5),App2("Seq",App1("Build",Egetd(0,8)),Egetd(0,9)))));
  Return();
  r_17 :
  goto q_17;
  i_36 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  q_17 :
  goto p_17;
  h_36 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  p_17 :
  goto o_17;
  g_36 :
  NotNULLd(0,4);
  Tset(App1("Where",Egetd(0,4)));
  Return();
  o_17 :
  goto n_17;
  f_36 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  n_17 :
  goto l_17;
  e_36 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  l_17 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_y_16)
  Epushd(0,6);
  MoveTop(0,3);
  goto w_36;
  w_36 :
  TestFunFC(q_18,&&p_18,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto x_36;
  x_36 :
  TestFunFC(g_1,&&r_18,Egetd(0,4));
  Rpush(n_18);
  goto a_38;
  r_18 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(n_18);
  goto b_38;
  p_18 :
  TestFunFC(u_18,&&s_18,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto y_36;
  y_36 :
  TestFunFC(g_1,&&v_18,Egetd(0,4));
  Rpush(n_18);
  goto c_38;
  v_18 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(n_18);
  goto d_38;
  s_18 :
  TestFunFC(x_18,&&w_18,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto z_36;
  z_36 :
  TestFunFC(g_1,&&z_18,Egetd(0,4));
  Rpush(n_18);
  goto e_38;
  z_18 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(n_18);
  goto f_38;
  w_18 :
  TestFunFC(b_19,&&a_19,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_37;
  a_37 :
  TestFunFC(g_1,&&c_19,Egetd(0,4));
  Rpush(n_18);
  goto g_38;
  c_19 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(n_18);
  goto h_38;
  a_19 :
  TestFunFC(f_19,&&e_19,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_18);
  goto i_38;
  e_19 :
  TestFunFC(l_19,&&i_19,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_18);
  goto j_38;
  i_19 :
  TestFunFC(r_19,&&o_19,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_18);
  goto k_38;
  o_19 :
  TestFunFC(u_19,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(n_18);
  goto l_38;
  n_18 :
  goto m_18;
  l_38 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  m_18 :
  goto l_18;
  k_38 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  l_18 :
  goto k_18;
  j_38 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  k_18 :
  goto i_18;
  i_38 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  i_18 :
  goto h_18;
  h_38 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  h_18 :
  goto g_18;
  g_38 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  g_18 :
  goto f_18;
  f_38 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  f_18 :
  goto e_18;
  e_38 :
  Tset(App0("Fail"));
  Return();
  e_18 :
  goto d_18;
  d_38 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  d_18 :
  goto b_18;
  c_38 :
  Tset(App0("Fail"));
  Return();
  b_18 :
  goto a_18;
  b_38 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  a_18 :
  goto z_17;
  a_38 :
  Tset(App0("Id"));
  Return();
  z_17 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_z_16)
  Epushd(0,17);
  MoveTop(0,9);
  goto d_40;
  d_40 :
  TestFunFC(f_13,&&i_20,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto e_40;
  e_40 :
  TestFunFC(u_9,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto f_40;
  f_40 :
  TestFunFC(l_20,&&j_20,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  MoveArg(0,1,0,14,1);
  goto g_40;
  g_40 :
  TestFunFC(m_20,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto h_40;
  h_40 :
  TestFunFC(m_20,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(g_20);
  goto z_44;
  j_20 :
  TestFunFC(p_20,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto i_40;
  i_40 :
  TestFunFC(m_20,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto j_40;
  j_40 :
  TestFunFC(u_9,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto k_40;
  k_40 :
  TestFunFC(p_20,&&q_20,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto l_40;
  l_40 :
  TestFunFC(m_20,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_20);
  goto f_45;
  q_20 :
  TestFunFC(l_20,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto m_40;
  m_40 :
  TestFunFC(m_20,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto n_40;
  n_40 :
  TestFunFC(m_20,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(g_20);
  goto o_45;
  i_20 :
  TestFunFC(u_9,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto o_40;
  o_40 :
  TestFunFC(e_10,&&t_20,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto p_40;
  p_40 :
  TestFunFC(f_13,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto q_40;
  q_40 :
  TestFunFC(u_9,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto r_40;
  r_40 :
  TestFunFC(p_20,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto s_40;
  s_40 :
  TestFunFC(m_20,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_20);
  goto t_44;
  t_20 :
  TestFunFC(p_20,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto t_40;
  t_40 :
  TestFunFC(m_20,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto u_40;
  u_40 :
  TestFunFC(u_9,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto v_40;
  v_40 :
  TestFunFC(e_10,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto w_40;
  w_40 :
  TestFunFC(m_20,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  Rpush(g_20);
  goto x_45;
  g_20 :
  goto f_20;
  x_45 :
  Epushd(1,1);
  Move(0,12,0,16);
  Move(1,1,0,17);
  NotNULLd(0,12);
  NotNULLd(1,1);
  Tset(App2("Seq",App1("Assign",App1("Var",Egetd(0,12))),Egetd(1,1)));
  Epopd(1,1);
  Return();
  f_20 :
  goto c_20;
  o_45 :
  Epushd(1,3);
  Move(0,16,0,7);
  Move(1,1,0,8);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto z_39;
  z_39 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto a_40;
  a_40 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_40;
  b_40 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(z_20);
  goto p_45;
  z_20 :
  goto w_20;
  p_45 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(a_22);
  c_21 :
  Cpush(f_21);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto q_21;
  f_21 :
  IsAppl();
  MatchTravInit();
  g_21 :
  OneMatchNextSon();
  Cpush(g_21);
  Rpush(m_21);
  goto c_21;
  m_21 :
  Cpop();
  MatchTravEnd();
  q_21 :
  Return();
  a_22 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(3,1);
  goto w_39;
  w_39 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto x_39;
  x_39 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto y_39;
  y_39 :
  TestFunFC(c_1,&&fail,Egetd(3,5));
  Rpush(e_22);
  goto s_45;
  e_22 :
  goto d_22;
  s_45 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(q_22);
  f_22 :
  Cpush(g_22);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  Cpop();
  goto p_22;
  g_22 :
  IsAppl();
  MatchTravInit();
  m_22 :
  OneMatchNextSon();
  Cpush(m_22);
  Rpush(o_22);
  goto f_22;
  o_22 :
  Cpop();
  MatchTravEnd();
  p_22 :
  Return();
  q_22 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_d_17);
  MoveTop(4,1);
  Move(1,2,4,1);
  Epopd(4,1);
  Return();
  d_22 :
  Epopd(3,5);
  Return();
  w_20 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,16)),App0("Nil")),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_a_17);
  MoveTop(1,3);
  NotNULLd(1,2);
  NotNULLd(0,16);
  NotNULLd(1,3);
  Tset(App2("Scope",Egetd(1,2),App2("Seq",App1("Assign",App1("Var",Egetd(0,16))),Egetd(1,3))));
  Epopd(1,3);
  Return();
  c_20 :
  goto b_20;
  f_45 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto n_39;
  n_39 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_39;
  o_39 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_39;
  p_39 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(v_22);
  goto g_45;
  v_22 :
  goto s_22;
  g_45 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(d_23);
  w_22 :
  Cpush(x_22);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto c_23;
  x_22 :
  IsAppl();
  MatchTravInit();
  y_22 :
  OneMatchNextSon();
  Cpush(y_22);
  Rpush(z_22);
  goto w_22;
  z_22 :
  Cpop();
  MatchTravEnd();
  c_23 :
  Return();
  d_23 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(3,1);
  goto k_39;
  k_39 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto l_39;
  l_39 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto m_39;
  m_39 :
  TestFunFC(c_1,&&fail,Egetd(3,5));
  Rpush(f_23);
  goto j_45;
  f_23 :
  goto e_23;
  j_45 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(t_23);
  g_23 :
  Cpush(o_23);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  Cpop();
  goto s_23;
  o_23 :
  IsAppl();
  MatchTravInit();
  q_23 :
  OneMatchNextSon();
  Cpush(q_23);
  Rpush(r_23);
  goto g_23;
  r_23 :
  Cpop();
  MatchTravEnd();
  s_23 :
  Return();
  t_23 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_d_17);
  MoveTop(4,1);
  Move(1,1,4,1);
  Epopd(4,1);
  Return();
  e_23 :
  Epopd(3,5);
  Return();
  s_22 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,16)),App0("Nil")),App2("TCons",Egetd(0,8),App0("TNil")))));
  Ccall(_stratego_a_17);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,16);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(1,1),App2("Seq",App1("Assign",App1("Var",Egetd(0,16))),Egetd(1,2))));
  Epopd(1,2);
  Return();
  b_20 :
  goto y_19;
  z_44 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto b_39;
  b_39 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_39;
  c_39 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_39;
  d_39 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(a_24);
  goto a_45;
  a_24 :
  goto u_23;
  a_45 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(m_24);
  b_24 :
  Cpush(c_24);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto j_24;
  c_24 :
  IsAppl();
  MatchTravInit();
  d_24 :
  OneMatchNextSon();
  Cpush(d_24);
  Rpush(g_24);
  goto b_24;
  g_24 :
  Cpop();
  MatchTravEnd();
  j_24 :
  Return();
  m_24 :
  NotNULLd(0,10);
  NotNULLd(0,16);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,16),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_d_17);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  u_23 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,16);
  NotNULLd(0,2);
  NotNULLd(0,17);
  Tset(App2("TCons",App2("Cons",Egetd(0,16),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,2)),App0("Nil")),App2("TCons",Egetd(0,17),App0("TNil")))));
  Ccall(_stratego_a_17);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  y_19 :
  goto x_19;
  t_44 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto u_38;
  u_38 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_38;
  v_38 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_38;
  w_38 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(f_25);
  goto u_44;
  f_25 :
  goto e_25;
  u_44 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(t_25);
  g_25 :
  Cpush(h_25);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto s_25;
  h_25 :
  IsAppl();
  MatchTravInit();
  i_25 :
  OneMatchNextSon();
  Cpush(i_25);
  Rpush(n_25);
  goto g_25;
  n_25 :
  Cpop();
  MatchTravEnd();
  s_25 :
  Return();
  t_25 :
  NotNULLd(0,14);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_d_17);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  e_25 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,11);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,11),App0("Nil")),App2("TCons",Egetd(0,8),App0("TNil")))));
  Ccall(_stratego_a_17);
  MoveTop(1,2);
  NotNULLd(0,11);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Seq",App1("Build",Egetd(0,11)),App2("Scope",Egetd(1,1),Egetd(1,2))));
  Epopd(1,2);
  Return();
  x_19 :
  Epopd(0,17);
ENDPROC

PROC(_stratego_a_17)
  Epushd(0,5);
  Ccall(_stratego_b_17);
  MoveTop(0,1);
  goto e_46;
  e_46 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_46;
  f_46 :
  TestFunFC(t_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_46;
  g_46 :
  TestFunFC(c_1,&&fail,Egetd(0,5));
  Rpush(v_25);
  goto x_46;
  v_25 :
  goto u_25;
  x_46 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(w_25);
  y_46 :
  Cpush(y_25);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto d_46;
  d_46 :
  TestFunFC(m_20,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(a_26);
  goto a_47;
  a_26 :
  goto z_25;
  a_47 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(1,2,2,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  z_25 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_c_17);
  Epopd(1,3);
  goto x_25;
  y_25 :
  AllInit();
  e_26 :
  AllNextSon(&&f_26);
  Rpush(g_26);
  goto y_46;
  g_26 :
  goto e_26;
  f_26 :
  AllBuild();
  goto b_26;
  x_25 :
  Cpop();
  b_26 :
  Return();
  w_25 :
  Return();
  u_25 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_17)
  Epushd(0,7);
  MoveTop(0,1);
  goto u_47;
  u_47 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto v_47;
  v_47 :
  TestFunFC(t_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto w_47;
  w_47 :
  TestFunFC(c_1,&&k_26,Egetd(0,5));
  Rpush(j_26);
  goto i_49;
  k_26 :
  TestFunFC(t_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto x_47;
  x_47 :
  TestFunFC(c_1,&&fail,Egetd(0,7));
  Rpush(j_26);
  goto j_49;
  j_26 :
  goto i_26;
  j_49 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(l_26);
  k_49 :
  Epushd(2,9);
  MoveTop(2,1);
  goto l_47;
  l_47 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto m_47;
  m_47 :
  TestFunFC(g_1,&&r_26,Egetd(2,2));
  goto n_47;
  n_47 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto o_47;
  o_47 :
  TestFunFC(g_1,&&fail,Egetd(2,6));
  goto p_47;
  p_47 :
  TestFunFC(c_1,&&fail,Egetd(2,9));
  Rpush(q_26);
  goto l_49;
  r_26 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto q_47;
  q_47 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto r_47;
  r_47 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto s_47;
  s_47 :
  TestFunFC(c_1,&&fail,Egetd(2,9));
  Rpush(q_26);
  goto m_49;
  q_26 :
  goto n_26;
  m_49 :
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
  Rpush(t_26);
  goto k_49;
  t_26 :
  OneNextSon();
  Ccall(_stratego_q_16);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto i_47;
  i_47 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto j_47;
  j_47 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto k_47;
  k_47 :
  TestFunFC(c_1,&&fail,Egetd(3,5));
  Rpush(x_26);
  goto n_49;
  x_26 :
  goto s_26;
  n_49 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  s_26 :
  Epopd(3,5);
  Return();
  n_26 :
  goto m_26;
  l_49 :
  Tset(App0("Nil"));
  Return();
  m_26 :
  Epopd(2,9);
  Return();
  l_26 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  i_26 :
  goto h_26;
  i_49 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  h_26 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_c_17)
  Rpush(y_26);
  n_50 :
  Epushd(0,11);
  MoveTop(0,5);
  goto r_49;
  r_49 :
  TestFunFC(t_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto s_49;
  s_49 :
  TestFunFC(t_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto t_49;
  t_49 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto u_49;
  u_49 :
  TestFunFC(c_1,&&fail,Egetd(0,11));
  goto v_49;
  v_49 :
  TestFunFC(t_0,&&r_27,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto w_49;
  w_49 :
  TestFunFC(t_0,&&s_27,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_49;
  x_49 :
  TestFunFC(c_1,&&t_27,Egetd(0,4));
  Cpush(e_28);
  Rpush(f_28);
  goto o_50;
  f_28 :
  goto d_28;
  e_28 :
  Rpush(h_28);
  goto p_50;
  h_28 :
  goto g_28;
  d_28 :
  Cpop();
  g_28 :
  goto c_27;
  t_27 :
  Rpush(c_27);
  goto p_50;
  s_27 :
  Rpush(c_27);
  goto p_50;
  r_27 :
  Rpush(c_27);
  goto p_50;
  c_27 :
  goto b_27;
  p_50 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(i_28);
  goto n_50;
  i_28 :
  Return();
  b_27 :
  goto a_27;
  o_50 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  a_27 :
  Epopd(0,11);
  Return();
  y_26 :
ENDPROC

PROC(_stratego_d_17)
  Epushd(0,5);
  MoveTop(0,5);
  goto h_51;
  h_51 :
  TestFunFC(t_0,&&d_29,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto i_51;
  i_51 :
  TestFunFC(t_0,&&e_29,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto j_51;
  j_51 :
  TestFunFC(c_1,&&m_29,Egetd(0,4));
  Cpush(r_29);
  Rpush(s_29);
  goto t_52;
  s_29 :
  goto p_29;
  r_29 :
  Rpush(u_29);
  goto y_52;
  u_29 :
  goto t_29;
  p_29 :
  Cpop();
  t_29 :
  goto c_29;
  m_29 :
  Rpush(c_29);
  goto y_52;
  e_29 :
  Rpush(c_29);
  goto y_52;
  d_29 :
  Rpush(c_29);
  goto y_52;
  c_29 :
  goto a_29;
  y_52 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(v_29);
  z_52 :
  Cpush(x_29);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Cpush(z_29);
  Epushd(1,7);
  MoveTop(1,1);
  goto y_50;
  y_50 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto z_50;
  z_50 :
  TestFunFC(t_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto a_51;
  a_51 :
  TestFunFC(t_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto b_51;
  b_51 :
  TestFunFC(c_1,&&fail,Egetd(1,6));
  Rpush(q_30);
  goto a_53;
  q_30 :
  goto a_30;
  a_53 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  a_30 :
  Epopd(1,7);
  goto y_29;
  z_29 :
  Ccall(_stratego_e_17);
  goto r_30;
  y_29 :
  Cpop();
  r_30 :
  OneNextSon();
  Ccall(_stratego_q_16);
  AllBuild();
  AllBuild();
  goto w_29;
  x_29 :
  Epushd(1,7);
  MoveTop(1,1);
  goto d_51;
  d_51 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_51;
  e_51 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto f_51;
  f_51 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto g_51;
  g_51 :
  TestFunFC(c_1,&&fail,Egetd(1,7));
  Rpush(u_30);
  goto b_53;
  u_30 :
  goto t_30;
  b_53 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  t_30 :
  Epopd(1,7);
  goto s_30;
  w_29 :
  Cpop();
  s_30 :
  Cpush(g_31);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_16);
  OneNextSon();
  Ccall(_stratego_q_16);
  AllBuild();
  AllBuild();
  goto f_31;
  g_31 :
  Rpush(i_31);
  goto z_52;
  i_31 :
  goto h_31;
  f_31 :
  Cpop();
  h_31 :
  Return();
  v_29 :
  Return();
  a_29 :
  goto z_28;
  t_52 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(j_31);
  u_52 :
  Cpush(l_31);
  Ccall(_stratego_b_16);
  goto k_31;
  l_31 :
  Ccontinue(m_31);
  Epushd(1,3);
  MoveTop(1,1);
  goto v_50;
  v_50 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(o_31);
  goto v_52;
  o_31 :
  goto n_31;
  v_52 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_31);
  w_52 :
  Cpush(r_31);
  Epushd(2,3);
  MoveTop(2,1);
  goto u_50;
  u_50 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(t_31);
  goto x_52;
  t_31 :
  goto s_31;
  x_52 :
  Move(1,2,2,2);
  Return();
  s_31 :
  Epopd(2,3);
  goto q_31;
  r_31 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_32);
  goto w_52;
  q_32 :
  AllBuild();
  goto p_32;
  q_31 :
  Cpop();
  p_32 :
  Return();
  p_31 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(r_32);
  goto u_52;
  r_32 :
  Return();
  n_31 :
  Epopd(1,3);
  goto k_31;
  m_31 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_32);
  goto u_52;
  t_32 :
  AllBuild();
  goto s_32;
  k_31 :
  Cpop();
  s_32 :
  Return();
  j_31 :
  Return();
  z_28 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_e_17)
  Epushd(0,7);
  MoveTop(0,1);
  goto e_54;
  e_54 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto f_54;
  f_54 :
  TestFunFC(t_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto g_54;
  g_54 :
  TestFunFC(t_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto h_54;
  h_54 :
  TestFunFC(c_1,&&fail,Egetd(0,6));
  Rpush(v_32);
  goto i_56;
  v_32 :
  goto u_32;
  i_56 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto e_53;
  e_53 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto f_53;
  f_53 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto g_53;
  g_53 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(a_33);
  goto j_56;
  a_33 :
  goto w_32;
  j_56 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  w_32 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto i_53;
  i_53 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_53;
  j_53 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_53;
  k_53 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(c_33);
  goto k_56;
  c_33 :
  goto b_33;
  k_56 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  b_33 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(d_33);
  l_56 :
  Epushd(2,9);
  MoveTop(2,1);
  goto r_53;
  r_53 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto s_53;
  s_53 :
  TestFunFC(g_1,&&x_33,Egetd(2,2));
  goto t_53;
  t_53 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto u_53;
  u_53 :
  TestFunFC(g_1,&&fail,Egetd(2,6));
  goto v_53;
  v_53 :
  TestFunFC(c_1,&&fail,Egetd(2,9));
  Rpush(g_33);
  goto m_56;
  x_33 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_53;
  w_53 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto x_53;
  x_53 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto y_53;
  y_53 :
  TestFunFC(c_1,&&fail,Egetd(2,9));
  Rpush(g_33);
  goto n_56;
  g_33 :
  goto f_33;
  n_56 :
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
  Rpush(z_33);
  goto l_56;
  z_33 :
  OneNextSon();
  Ccall(_stratego_q_16);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto o_53;
  o_53 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto p_53;
  p_53 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto q_53;
  q_53 :
  TestFunFC(c_1,&&fail,Egetd(3,5));
  Rpush(j_34);
  goto o_56;
  j_34 :
  goto y_33;
  o_56 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  y_33 :
  Epopd(3,5);
  Return();
  f_33 :
  goto e_33;
  m_56 :
  Tset(App0("Nil"));
  Return();
  e_33 :
  Epopd(2,9);
  Return();
  d_33 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto b_54;
  b_54 :
  TestFunFC(t_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto c_54;
  c_54 :
  TestFunFC(t_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto d_54;
  d_54 :
  TestFunFC(c_1,&&fail,Egetd(1,9));
  Rpush(l_34);
  goto q_56;
  l_34 :
  goto k_34;
  q_56 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(m_34);
  r_56 :
  Cpush(o_34);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_34);
  goto r_56;
  p_34 :
  AllBuild();
  goto n_34;
  o_34 :
  Ccall(_stratego_b_16);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto q_34;
  n_34 :
  Cpop();
  q_34 :
  Return();
  m_34 :
  Return();
  k_34 :
  Epopd(1,9);
  Return();
  u_32 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_f_17)
  Epushd(0,5);
  MoveTop(0,1);
  goto z_56;
  z_56 :
  TestFunFC(f_13,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_57;
  a_57 :
  TestFunFC(f_13,&&x_34,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto b_57;
  b_57 :
  TestFunFC(g_1,&&y_34,Egetd(0,2));
  Cpush(a_35);
  Rpush(n_35);
  goto v_57;
  n_35 :
  goto z_34;
  a_35 :
  Rpush(p_35);
  goto w_57;
  p_35 :
  goto o_35;
  z_34 :
  Cpop();
  o_35 :
  goto w_34;
  y_34 :
  Rpush(w_34);
  goto w_57;
  x_34 :
  goto c_57;
  c_57 :
  TestFunFC(g_1,&&fail,Egetd(0,2));
  Rpush(w_34);
  goto v_57;
  w_34 :
  goto v_34;
  w_57 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(1,1);
  goto w_56;
  w_56 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto x_56;
  x_56 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto y_56;
  y_56 :
  TestFunFC(c_1,&&fail,Egetd(1,5));
  Rpush(r_35);
  goto x_57;
  r_35 :
  goto q_35;
  x_57 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(w_35);
  y_57 :
  Cpush(y_35);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_35);
  goto y_57;
  z_35 :
  AllBuild();
  goto x_35;
  y_35 :
  Ccall(_stratego_b_16);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto a_36;
  x_35 :
  Cpop();
  a_36 :
  Return();
  w_35 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(2,1),Egetd(0,5)));
  Epopd(2,1);
  Return();
  q_35 :
  Epopd(1,5);
  Return();
  v_34 :
  goto r_34;
  v_57 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  r_34 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_17)
  Rpush(b_36);
  d_59 :
  Cpush(d_36);
  c_36 :
  Cpush(l_36);
  Ccall(_stratego_s_16);
  goto k_36;
  l_36 :
  Ccall(_stratego_h_17);
  goto m_36;
  k_36 :
  Cpop();
  m_36 :
  Tduplinv();
  goto c_36;
  d_36 :
  AllInit();
  n_36 :
  AllNextSon(&&o_36);
  Rpush(p_36);
  goto d_59;
  p_36 :
  goto n_36;
  o_36 :
  AllBuild();
  Cpush(r_36);
  q_36 :
  Cpush(t_36);
  Ccall(_stratego_s_16);
  goto s_36;
  t_36 :
  Ccall(_stratego_h_17);
  goto u_36;
  s_36 :
  Cpop();
  u_36 :
  Tduplinv();
  goto q_36;
  r_36 :
  Return();
  b_36 :
  Rpush(v_36);
  g_59 :
  Cpush(i_37);
  Epushd(0,3);
  MoveTop(0,1);
  goto j_58;
  j_58 :
  TestFunFC(f_13,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_37);
  goto h_59;
  k_37 :
  goto j_37;
  h_59 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_i_17);
  MoveTop(2,1);
  NotNULLd(0,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto g_58;
  g_58 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_58;
  h_58 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto i_58;
  i_58 :
  TestFunFC(c_1,&&fail,Egetd(2,6));
  Rpush(m_37);
  goto j_59;
  m_37 :
  goto l_37;
  j_59 :
  Epushd(3,2);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App0("TNil"))));
  Ccall(_stratego_d_17);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_d_17);
  MoveTop(3,2);
  Move(1,1,3,2);
  Cpush(n_37);
  Tdupl();
  Epushd(4,1);
  MoveTop(4,1);
  Move(0,2,4,1);
  Epopd(4,1);
  Cpop();
  Crestore();
  Cjump();
  n_37 :
  Epopd(3,2);
  Return();
  l_37 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,3);
  Tset(App2("Scope",Egetd(1,1),Egetd(0,3)));
  Cpush(p_37);
  Ccall(_stratego_f_17);
  goto o_37;
  p_37 :
  goto q_37;
  o_37 :
  Cpop();
  q_37 :
  Epopd(1,1);
  Return();
  j_37 :
  Epopd(0,3);
  goto h_37;
  i_37 :
  goto r_37;
  h_37 :
  Cpop();
  r_37 :
  AllInit();
  s_37 :
  AllNextSon(&&t_37);
  Rpush(u_37);
  goto g_59;
  u_37 :
  goto s_37;
  t_37 :
  AllBuild();
  Return();
  v_36 :
ENDPROC

PROC(_stratego_h_17)
  Epushd(0,7);
  MoveTop(0,3);
  goto p_59;
  p_59 :
  TestFunFC(u_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_59;
  q_59 :
  TestFunFC(f_13,&&y_37,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto r_59;
  r_59 :
  TestFunFC(f_13,&&z_37,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Cpush(n_38);
  Rpush(o_38);
  goto g_60;
  o_38 :
  goto m_38;
  n_38 :
  Rpush(q_38);
  goto h_60;
  q_38 :
  goto p_38;
  m_38 :
  Cpop();
  p_38 :
  goto x_37;
  z_37 :
  Rpush(x_37);
  goto h_60;
  y_37 :
  goto s_59;
  s_59 :
  TestFunFC(f_13,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(x_37);
  goto g_60;
  x_37 :
  goto w_37;
  h_60 :
  NotNULLd(0,6);
  NotNULLd(0,4);
  NotNULLd(0,7);
  Tset(App2("Scope",Egetd(0,6),App2("Seq",Egetd(0,4),Egetd(0,7))));
  Return();
  w_37 :
  goto v_37;
  g_60 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(0,1),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  v_37 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_i_17)
  Rpush(r_38);
  u_64 :
  Cpush(t_38);
  Epushd(0,2);
  MoveTop(0,1);
  goto j_60;
  j_60 :
  TestFunFC(m_20,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(y_38);
  goto v_64;
  y_38 :
  goto x_38;
  v_64 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  x_38 :
  Epopd(0,2);
  goto s_38;
  t_38 :
  Ccontinue(z_38);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_j_17);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(f_13);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(a_39);
  goto u_64;
  a_39 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_d_17);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto q_60;
  q_60 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_60;
  r_60 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto s_60;
  s_60 :
  TestFunFC(c_1,&&fail,Egetd(1,5));
  Rpush(f_39);
  goto d_65;
  f_39 :
  goto e_39;
  d_65 :
  Move(0,3,1,4);
  Return();
  e_39 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(g_39);
  e_65 :
  Cpush(i_39);
  Ccall(_stratego_b_16);
  Tset(App0("Nil"));
  goto h_39;
  i_39 :
  Epushd(1,3);
  MoveTop(1,1);
  goto e_61;
  e_61 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(r_39);
  goto f_65;
  r_39 :
  goto q_39;
  f_65 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(s_39);
  goto e_65;
  s_39 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto b_61;
  b_61 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_61;
  c_61 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto d_61;
  d_61 :
  TestFunFC(c_1,&&fail,Egetd(2,6));
  Rpush(u_39);
  goto j_65;
  u_39 :
  goto t_39;
  j_65 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(v_39);
  k_65 :
  Cpush(o_41);
  Ccall(_stratego_b_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto c_40;
  o_41 :
  Ccontinue(p_41);
  Epushd(3,3);
  MoveTop(3,1);
  goto a_61;
  a_61 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_41);
  goto l_65;
  r_41 :
  goto q_41;
  l_65 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(y_41);
  m_65 :
  Cpush(d_42);
  Epushd(4,3);
  MoveTop(4,1);
  goto z_60;
  z_60 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(f_42);
  goto n_65;
  f_42 :
  goto e_42;
  n_65 :
  Move(3,2,4,2);
  Return();
  e_42 :
  Epopd(4,3);
  goto z_41;
  d_42 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_42);
  goto m_65;
  h_42 :
  AllBuild();
  goto g_42;
  z_41 :
  Cpop();
  g_42 :
  Return();
  y_41 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(o_42);
  goto k_65;
  o_42 :
  Return();
  q_41 :
  Epopd(3,3);
  goto c_40;
  p_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_42);
  goto k_65;
  t_42 :
  AllBuild();
  goto p_42;
  c_40 :
  Cpop();
  p_42 :
  Return();
  v_39 :
  Return();
  t_39 :
  Epopd(2,6);
  Return();
  q_39 :
  Epopd(1,3);
  goto j_39;
  h_39 :
  Cpop();
  j_39 :
  Return();
  g_39 :
  Epopd(0,3);
  goto s_38;
  z_38 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto h_61;
  h_61 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_61;
  i_61 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto j_61;
  j_61 :
  TestFunFC(c_1,&&fail,Egetd(1,5));
  Rpush(w_42);
  goto p_65;
  w_42 :
  goto v_42;
  p_65 :
  Move(0,2,1,4);
  Return();
  v_42 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(x_42);
  q_65 :
  Cpush(f_43);
  Ccall(_stratego_b_16);
  Tset(App0("Nil"));
  goto e_43;
  f_43 :
  Epushd(1,3);
  MoveTop(1,1);
  goto v_61;
  v_61 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(o_43);
  goto r_65;
  o_43 :
  goto n_43;
  r_65 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(s_43);
  goto u_64;
  s_43 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(t_43);
  goto q_65;
  t_43 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto s_61;
  s_61 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_61;
  t_61 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto u_61;
  u_61 :
  TestFunFC(c_1,&&fail,Egetd(2,7));
  Rpush(v_43);
  goto u_65;
  v_43 :
  goto u_43;
  u_65 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(d_44);
  v_65 :
  Cpush(l_44);
  Ccall(_stratego_b_16);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto e_44;
  l_44 :
  Ccontinue(m_44);
  Epushd(3,3);
  MoveTop(3,1);
  goto r_61;
  r_61 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_44);
  goto w_65;
  r_44 :
  goto q_44;
  w_65 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(w_44);
  x_65 :
  Cpush(y_44);
  Epushd(4,3);
  MoveTop(4,1);
  goto q_61;
  q_61 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(d_45);
  goto y_65;
  d_45 :
  goto c_45;
  y_65 :
  Move(3,2,4,2);
  Return();
  c_45 :
  Epopd(4,3);
  goto x_44;
  y_44 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_45);
  goto x_65;
  i_45 :
  AllBuild();
  goto e_45;
  x_44 :
  Cpop();
  e_45 :
  Return();
  w_44 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(l_45);
  goto v_65;
  l_45 :
  Return();
  q_44 :
  Epopd(3,3);
  goto e_44;
  m_44 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_45);
  goto v_65;
  n_45 :
  AllBuild();
  goto m_45;
  e_44 :
  Cpop();
  m_45 :
  Return();
  d_44 :
  Return();
  u_43 :
  Epopd(2,7);
  Return();
  n_43 :
  Epopd(1,3);
  goto m_43;
  e_43 :
  Cpop();
  m_43 :
  Return();
  x_42 :
  Epopd(0,2);
  goto u_42;
  s_38 :
  Cpop();
  u_42 :
  Return();
  r_38 :
ENDPROC

PROC(_stratego_j_17)
  Epushd(0,6);
  MoveTop(0,2);
  goto b_66;
  b_66 :
  TestFunFC(f_13,&&w_45,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(v_45);
  goto o_66;
  w_45 :
  TestFunFC(y_45,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto c_66;
  c_66 :
  TestFunFC(z_45,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(v_45);
  goto p_66;
  v_45 :
  goto u_45;
  p_66 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_i_17);
  Return();
  u_45 :
  goto r_45;
  o_66 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  r_45 :
  Epopd(0,6);
ENDPROC
