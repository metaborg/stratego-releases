#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,j_27);
VARDECL(AFun,d_27);
VARDECL(AFun,z_26);
VARDECL(AFun,w_26);
VARDECL(AFun,i_20);
VARDECL(AFun,v_19);
VARDECL(AFun,u_19);
VARDECL(AFun,t_19);
VARDECL(AFun,m_18);
VARDECL(AFun,j_18);
VARDECL(AFun,p_17);
VARDECL(AFun,m_17);
VARDECL(AFun,i_17);
VARDECL(AFun,e_17);
VARDECL(AFun,r_16);
VARDECL(AFun,p_16);
VARDECL(AFun,n_16);
VARDECL(AFun,d_16);
VARDECL(AFun,m_11);
VARDECL(AFun,l_11);
VARDECL(AFun,i_10);
VARDECL(AFun,c_10);
VARDECL(AFun,z_9);
VARDECL(AFun,v_9);
VARDECL(AFun,h_9);
VARDECL(AFun,z_8);
VARDECL(AFun,n_8);
VARDECL(AFun,z_7);
VARDECL(AFun,l_7);
VARDECL(AFun,z_6);
VARDECL(AFun,q_6);
VARDECL(AFun,n_6);
VARDECL(AFun,p_1);
VARDECL(AFun,l_1);
VARDECL(AFun,e_1);
VARDECL(AFun,x_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_u_28);
PROCDECL(_stratego_v_28);
PROCDECL(_stratego_w_28);
PROCDECL(_stratego_x_28);
PROCDECL(_stratego_y_28);
PROCDECL(_stratego_z_28);
PROCDECL(_stratego_a_29);
PROCDECL(_stratego_b_29);
PROCDECL(_stratego_c_29);
PROCDECL(_stratego_d_29);
PROCDECL(_stratego_e_29);
PROCDECL(_stratego_f_29);
PROCDECL(_stratego_g_29);
PROCDECL(_stratego_h_29);
PROCDECL(_stratego_i_29);
PROCDECL(_stratego_j_29);
PROCDECL(_stratego_k_29);
PROCDECL(_stratego_l_29);
PROCDECL(_stratego_m_29);
PROCDECL(_stratego_n_29);
PROCDECL(_stratego_o_29);
PROCDECL(_stratego_p_29);
PROCDECL(_stratego_q_29);
PROCDECL(_stratego_r_29);
PROCDECL(_stratego_s_29);
PROCDECL(_stratego_t_29);
PROCDECL(_stratego_u_29);
PROCDECL(_stratego_v_29);
PROCDECL(_stratego_w_29);
PROCDECL(_stratego_x_29);
PROCDECL(_stratego_y_29);
PROCDECL(_stratego_b_30);
PROCDECL(_stratego_c_30);
PROCDECL(_stratego_d_30);
PROCDECL(_stratego_e_30);
PROCDECL(_stratego_f_30);

PROC(_stratego_init_afuns)
  MOVE(j_27,ATmakeAFun("Accept",1,0));
  MOVE(d_27,ATmakeAFun("Down",2,0));
  MOVE(z_26,ATmakeAFun("Up",1,0));
  MOVE(w_26,ATmakeAFun("Merge2",2,0));
  MOVE(i_20,ATmakeAFun("MatchVars",3,0));
  MOVE(v_19,ATmakeAFun("Case",1,0));
  MOVE(u_19,ATmakeAFun("MatchFunA",4,0));
  MOVE(t_19,ATmakeAFun("Merge",2,0));
  MOVE(m_18,ATmakeAFun("Real",1,0));
  MOVE(j_18,ATmakeAFun("Int",1,0));
  MOVE(p_17,ATmakeAFun("BuildDefault",1,0));
  MOVE(m_17,ATmakeAFun("Op",2,0));
  MOVE(i_17,ATmakeAFun("As",2,0));
  MOVE(e_17,ATmakeAFun("MatchKids",4,0));
  MOVE(r_16,ATmakeAFun("Str",1,0));
  MOVE(p_16,ATmakeAFun("Wld",0,0));
  MOVE(n_16,ATmakeAFun("MatchTerm",3,0));
  MOVE(d_16,ATmakeAFun("Pat",2,0));
  MOVE(m_11,ATmakeAFun("Var",1,0));
  MOVE(l_11,ATmakeAFun("Pair",2,0));
  MOVE(i_10,ATmakeAFun("Seq",2,0));
  MOVE(c_10,ATmakeAFun("Choice",2,0));
  MOVE(z_9,ATmakeAFun("Let",2,0));
  MOVE(v_9,ATmakeAFun("Scope",2,0));
  MOVE(h_9,ATmakeAFun("Runtime",1,0));
  MOVE(z_8,ATmakeAFun("Silent",0,0));
  MOVE(n_8,ATmakeAFun("Binary",0,0));
  MOVE(z_7,ATmakeAFun("Output",1,0));
  MOVE(l_7,ATmakeAFun("Input",1,0));
  MOVE(z_6,ATmakeAFun("Program",1,0));
  MOVE(q_6,ATmakeAFun("Help",0,0));
  MOVE(n_6,ATmakeAFun("Undefined",1,0));
  MOVE(p_1,ATmakeAFun("Nil",0,0));
  MOVE(l_1,ATmakeAFun("TNil",0,0));
  MOVE(e_1,ATmakeAFun("Match",1,0));
  MOVE(x_0,ATmakeAFun("TCons",2,0));
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
  h_4 :
  Cpush(f_0);
  Cpush(l_0);
  Ccall(_stratego_u_28);
  goto g_0;
  l_0 :
  Ccall(_stratego_v_28);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_0);
  goto h_4;
  p_0 :
  AllBuild();
  goto o_0;
  g_0 :
  Cpop();
  o_0 :
  goto d_0;
  f_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(t_0);
  goto i_4;
  t_0 :
  goto r_0;
  i_4 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  r_0 :
  Epopd(0,3);
  goto q_0;
  d_0 :
  Cpop();
  q_0 :
  Return();
  b_0 :
  AllBuild();
  Cpush(v_0);
  Ccall(_stratego_w_28);
  goto u_0;
  v_0 :
  Ccontinue(w_0);
  Epushd(0,6);
  Ccall(_stratego_b_29);
  Tdupl();
  Ccall(_stratego_d_29);
  Tpop();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Rpush(y_0);
  j_4 :
  Cpush(a_1);
  Ccall(_stratego_k_29);
  goto z_0;
  a_1 :
  Ccontinue(b_1);
  Epushd(1,2);
  MoveTop(1,1);
  goto e_0;
  e_0 :
  TestFunFC(e_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(d_1);
  goto k_4;
  d_1 :
  goto c_1;
  k_4 :
  NotNULLd(1,2);
  Tset(App2("Pat",Egetd(1,2),App0("Id")));
  Ccall(_stratego_v_29);
  Return();
  c_1 :
  Epopd(1,2);
  goto z_0;
  b_1 :
  goto f_1;
  z_0 :
  Cpop();
  f_1 :
  AllInit();
  g_1 :
  AllNextSon(&&h_1);
  Rpush(i_1);
  goto j_4;
  i_1 :
  goto g_1;
  h_1 :
  AllBuild();
  Return();
  y_0 :
  OneNextSon();
  Ccall(_stratego_j_29);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_d_29);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto h_0;
  h_0 :
  TestFunFC(x_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto i_0;
  i_0 :
  TestFunFC(x_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto j_0;
  j_0 :
  TestFunFC(l_1,&&fail,Egetd(0,6));
  Rpush(k_1);
  goto m_4;
  k_1 :
  goto j_1;
  m_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  j_1 :
  Ccall(_stratego_e_29);
  Ccall(_stratego_h_29);
  Epopd(0,6);
  goto u_0;
  w_0 :
  Ccall(_stratego_i_29);
  goto m_1;
  u_0 :
  Cpop();
  m_1 :
ENDPROC

PROC(_stratego_u_28)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_4;
  o_4 :
  TestFunFC(p_1,&&fail,Egetd(0,1));
  Rpush(o_1);
  goto q_4;
  o_1 :
  goto n_1;
  q_4 :
  Return();
  n_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_28)
  Epushd(0,5);
  MoveTop(0,3);
  goto z_10;
  z_10 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_11;
  c_11 :
  TestFunFC(a_0,&&g_2,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(i_2);
  Rpush(j_2);
  goto n_17;
  j_2 :
  goto h_2;
  i_2 :
  Ccontinue(k_2);
  Rpush(l_2);
  goto q_17;
  l_2 :
  goto h_2;
  k_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto t_17;
  n_2 :
  goto h_2;
  m_2 :
  Ccontinue(o_2);
  Rpush(p_2);
  goto w_17;
  p_2 :
  goto h_2;
  o_2 :
  Ccontinue(q_2);
  Rpush(r_2);
  goto z_17;
  r_2 :
  goto h_2;
  q_2 :
  Ccontinue(s_2);
  Rpush(t_2);
  goto c_18;
  t_2 :
  goto h_2;
  s_2 :
  Ccontinue(u_2);
  Rpush(v_2);
  goto g_18;
  v_2 :
  goto h_2;
  u_2 :
  Ccontinue(w_2);
  Rpush(x_2);
  goto k_18;
  x_2 :
  goto h_2;
  w_2 :
  Ccontinue(y_2);
  Rpush(z_2);
  goto o_18;
  z_2 :
  goto h_2;
  y_2 :
  Ccontinue(a_3);
  Rpush(b_3);
  goto s_18;
  b_3 :
  goto h_2;
  a_3 :
  Ccontinue(c_3);
  Rpush(d_3);
  goto w_18;
  d_3 :
  goto h_2;
  c_3 :
  Ccontinue(e_3);
  Rpush(f_3);
  goto l_20;
  f_3 :
  goto h_2;
  e_3 :
  Ccontinue(g_3);
  Rpush(h_3);
  goto o_20;
  h_3 :
  goto h_2;
  g_3 :
  Ccontinue(i_3);
  Rpush(j_3);
  goto r_20;
  j_3 :
  goto h_2;
  i_3 :
  Rpush(q_3);
  goto u_20;
  q_3 :
  goto m_3;
  h_2 :
  Cpop();
  m_3 :
  goto f_2;
  g_2 :
  Cpush(s_3);
  Rpush(u_3);
  goto n_17;
  u_3 :
  goto r_3;
  s_3 :
  Ccontinue(y_3);
  Rpush(z_3);
  goto q_17;
  z_3 :
  goto r_3;
  y_3 :
  Ccontinue(a_4);
  Rpush(b_4);
  goto t_17;
  b_4 :
  goto r_3;
  a_4 :
  Ccontinue(c_4);
  Rpush(d_4);
  goto w_17;
  d_4 :
  goto r_3;
  c_4 :
  Ccontinue(e_4);
  Rpush(f_4);
  goto z_17;
  f_4 :
  goto r_3;
  e_4 :
  Ccontinue(g_4);
  Rpush(l_4);
  goto w_18;
  l_4 :
  goto r_3;
  g_4 :
  Ccontinue(n_4);
  Rpush(r_4);
  goto l_20;
  r_4 :
  goto r_3;
  n_4 :
  Ccontinue(s_4);
  Rpush(t_4);
  goto o_20;
  t_4 :
  goto r_3;
  s_4 :
  Ccontinue(u_4);
  Rpush(v_4);
  goto r_20;
  v_4 :
  goto r_3;
  u_4 :
  Rpush(x_4);
  goto u_20;
  x_4 :
  goto w_4;
  r_3 :
  Cpop();
  w_4 :
  goto f_2;
  f_2 :
  goto e_2;
  u_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_9;
  r_9 :
  TestStr(1,1,"-?",&&fail);
  Rpush(z_4);
  goto v_20;
  z_4 :
  goto y_4;
  v_20 :
  Return();
  y_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  e_2 :
  goto d_2;
  r_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_8;
  g_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(b_5);
  goto s_20;
  b_5 :
  goto a_5;
  s_20 :
  Return();
  a_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  d_2 :
  goto c_2;
  o_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_8;
  d_8 :
  TestStr(1,1,"--help",&&fail);
  Rpush(d_5);
  goto p_20;
  d_5 :
  goto c_5;
  p_20 :
  Return();
  c_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  c_2 :
  goto b_2;
  l_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_8;
  a_8 :
  TestStr(1,1,"-s",&&fail);
  Rpush(f_5);
  goto m_20;
  f_5 :
  goto e_5;
  m_20 :
  Return();
  e_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  b_2 :
  goto a_2;
  w_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_7;
  x_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(i_5);
  goto x_18;
  i_5 :
  goto g_5;
  x_18 :
  Return();
  g_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  a_2 :
  goto z_1;
  s_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_7;
  t_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(l_5);
  goto t_18;
  l_5 :
  goto j_5;
  t_18 :
  Return();
  j_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  z_1 :
  goto y_1;
  o_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_7;
  p_7 :
  TestStr(1,1,"-o",&&fail);
  Rpush(o_5);
  goto p_18;
  o_5 :
  goto m_5;
  p_18 :
  Return();
  m_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  y_1 :
  goto x_1;
  k_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_7;
  f_7 :
  TestStr(1,1,"--input",&&fail);
  Rpush(q_5);
  goto l_18;
  q_5 :
  goto p_5;
  l_18 :
  Return();
  p_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  x_1 :
  goto w_1;
  g_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_7;
  b_7 :
  TestStr(1,1,"-i",&&fail);
  Rpush(s_5);
  goto h_18;
  s_5 :
  goto r_5;
  h_18 :
  Return();
  r_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  w_1 :
  goto v_1;
  c_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_6;
  x_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(u_5);
  goto d_18;
  u_5 :
  goto t_5;
  d_18 :
  Return();
  t_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  v_1 :
  goto u_1;
  z_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_6;
  u_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(w_5);
  goto a_18;
  w_5 :
  goto v_5;
  a_18 :
  Return();
  v_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  u_1 :
  goto t_1;
  w_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_6;
  r_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(y_5);
  goto x_17;
  y_5 :
  goto x_5;
  x_17 :
  Return();
  x_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  t_1 :
  goto s_1;
  t_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_5;
  n_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(a_6);
  goto u_17;
  a_6 :
  goto z_5;
  u_17 :
  Return();
  z_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  s_1 :
  goto r_1;
  q_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_5;
  k_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(c_6);
  goto r_17;
  c_6 :
  goto b_6;
  r_17 :
  Return();
  b_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  r_1 :
  goto q_1;
  n_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_5;
  h_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(e_6);
  goto o_17;
  e_6 :
  goto d_6;
  o_17 :
  Return();
  d_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  q_1 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_w_28)
  Tdupl();
  f_6 :
  TestFunTop(a_0);
  Cpush(g_6);
  Arg(0);
  Cpush(j_6);
  Ccall(_stratego_x_28);
  goto i_6;
  j_6 :
  Epushd(0,2);
  MoveTop(0,1);
  goto y_20;
  y_20 :
  TestFunFC(n_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(m_6);
  goto c_21;
  m_6 :
  goto l_6;
  c_21 :
  Return();
  l_6 :
  Epopd(0,2);
  goto k_6;
  i_6 :
  Cpop();
  k_6 :
  Tpop();
  Cpop();
  goto h_6;
  g_6 :
  Arg(1);
  Tdrop();
  goto f_6;
  h_6 :
  Tpop();
  Ccall(_stratego_y_28);
ENDPROC

PROC(_stratego_x_28)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_21;
  e_21 :
  TestFunFC(q_6,&&fail,Egetd(0,1));
  Rpush(p_6);
  goto g_21;
  p_6 :
  goto o_6;
  g_21 :
  Return();
  o_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_28)
  Epushd(0,1);
  Tdupl();
  Rpush(s_6);
  p_21 :
  Cpush(v_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_21;
  i_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_21;
  j_21 :
  TestFunFC(z_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_6);
  goto q_21;
  y_6 :
  goto w_6;
  q_21 :
  Move(0,1,1,3);
  Return();
  w_6 :
  Epopd(1,4);
  goto t_6;
  v_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_7);
  goto p_21;
  c_7 :
  AllBuild();
  goto a_7;
  t_6 :
  Cpop();
  a_7 :
  Return();
  s_6 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_z_28);
  Tset(MakeInt(1));
  Ccall(_stratego_a_29);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_28)
  _ST_printnl();
ENDPROC

PROC(_stratego_a_29)
  _ST_exit();
ENDPROC

PROC(_stratego_b_29)
  Epushd(0,3);
  Tdupl();
  Cpush(e_7);
  Rpush(g_7);
  k_22 :
  Cpush(i_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_21;
  s_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_21;
  t_21 :
  TestFunFC(l_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(k_7);
  goto l_22;
  k_7 :
  goto j_7;
  l_22 :
  Move(0,1,1,3);
  Return();
  j_7 :
  Epopd(1,4);
  goto h_7;
  i_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_7);
  goto k_22;
  n_7 :
  AllBuild();
  goto m_7;
  h_7 :
  Cpop();
  m_7 :
  Return();
  g_7 :
  goto d_7;
  e_7 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto o_7;
  d_7 :
  Cpop();
  o_7 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_c_29);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_c_29)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_d_29)
  _ST_dtime();
ENDPROC

PROC(_stratego_e_29)
  Epushd(0,1);
  Tdupl();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Cpush(r_7);
  Rpush(s_7);
  p_23 :
  Cpush(v_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_22;
  r_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_22;
  s_22 :
  TestFunFC(z_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_7);
  goto q_23;
  y_7 :
  goto w_7;
  q_23 :
  Move(0,1,1,3);
  Return();
  w_7 :
  Epopd(1,4);
  goto u_7;
  v_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_8);
  goto p_23;
  c_8 :
  AllBuild();
  goto b_8;
  u_7 :
  Cpop();
  b_8 :
  Return();
  s_7 :
  goto q_7;
  r_7 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto e_8;
  q_7 :
  Cpop();
  e_8 :
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_29);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_j_29);
  AllBuild();
  AllBuild();
  Cpush(h_8);
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Rpush(i_8);
  v_23 :
  Cpush(k_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto y_22;
  y_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_22;
  z_22 :
  TestFunFC(n_8,&&fail,Egetd(1,2));
  Rpush(m_8);
  goto w_23;
  m_8 :
  goto l_8;
  w_23 :
  Return();
  l_8 :
  Epopd(1,3);
  goto j_8;
  k_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_8);
  goto v_23;
  p_8 :
  AllBuild();
  goto o_8;
  j_8 :
  Cpop();
  o_8 :
  Return();
  i_8 :
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_29);
  OneNextSon();
  Ccall(_stratego_j_29);
  AllBuild();
  AllBuild();
  goto f_8;
  h_8 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_29);
  OneNextSon();
  Ccall(_stratego_j_29);
  AllBuild();
  AllBuild();
  goto q_8;
  f_8 :
  Cpop();
  q_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_29)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_g_29)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_h_29)
  Epushd(0,2);
  Tdupl();
  Cpush(s_8);
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Cpush(t_8);
  Tdupl();
  Rpush(u_8);
  t_24 :
  Cpush(w_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto y_23;
  y_23 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_23;
  z_23 :
  TestFunFC(z_8,&&fail,Egetd(1,2));
  Rpush(y_8);
  goto u_24;
  y_8 :
  goto x_8;
  u_24 :
  Return();
  x_8 :
  Epopd(1,3);
  goto v_8;
  w_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_9);
  goto t_24;
  b_9 :
  AllBuild();
  goto a_9;
  v_8 :
  Cpop();
  a_9 :
  Return();
  u_8 :
  Cpop();
  Crestore();
  Cjump();
  t_8 :
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_29);
  AllBuild();
  AllBuild();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Rpush(c_9);
  v_24 :
  Cpush(e_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_24;
  b_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_24;
  c_24 :
  TestFunFC(h_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_9);
  goto w_24;
  g_9 :
  goto f_9;
  w_24 :
  Move(0,2,1,3);
  Return();
  f_9 :
  Epopd(1,4);
  goto d_9;
  e_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_9);
  goto v_24;
  j_9 :
  AllBuild();
  goto i_9;
  d_9 :
  Cpop();
  i_9 :
  Return();
  c_9 :
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_29);
  AllBuild();
  AllBuild();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Rpush(k_9);
  x_24 :
  Cpush(m_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_24;
  e_24 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_24;
  f_24 :
  TestFunFC(z_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_9);
  goto y_24;
  o_9 :
  goto n_9;
  y_24 :
  Move(0,1,1,3);
  Return();
  n_9 :
  Epopd(1,4);
  goto l_9;
  m_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_9);
  goto x_24;
  q_9 :
  AllBuild();
  goto p_9;
  l_9 :
  Cpop();
  p_9 :
  Return();
  k_9 :
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_29);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_z_28);
  goto r_8;
  s_8 :
  goto s_9;
  r_8 :
  Cpop();
  s_9 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_a_29);
  Epopd(0,2);
ENDPROC

PROC(_stratego_i_29)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_z_28);
  Tset(MakeInt(1));
  Ccall(_stratego_a_29);
ENDPROC

PROC(_stratego_j_29)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_25;
  a_25 :
  TestFunFC(l_1,&&fail,Egetd(0,1));
  Rpush(u_9);
  goto c_25;
  u_9 :
  goto t_9;
  c_25 :
  Return();
  t_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_29)
  Ccall(_stratego_l_29);
  Ccall(_stratego_m_29);
  Ccall(_stratego_o_29);
  TestFunTop(v_9);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_p_29);
  Rpush(w_9);
  d_25 :
  Cpush(y_9);
  TestFunTop(z_9);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_10);
  goto d_25;
  a_10 :
  AllBuild();
  goto x_9;
  y_9 :
  Ccall(_stratego_r_29);
  goto b_10;
  x_9 :
  Cpop();
  b_10 :
  Return();
  w_9 :
  AllBuild();
ENDPROC

PROC(_stratego_l_29)
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  Rpush(d_10);
  j_30 :
  Cpush(f_10);
  Epushd(0,6);
  MoveTop(0,1);
  goto f_25;
  f_25 :
  TestFunFC(v_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto g_25;
  g_25 :
  TestFunFC(i_10,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto h_25;
  h_25 :
  TestFunFC(e_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_10);
  goto k_30;
  h_10 :
  goto g_10;
  k_30 :
  Return();
  g_10 :
  Epopd(0,6);
  goto e_10;
  f_10 :
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  Rpush(k_10);
  goto j_30;
  k_10 :
  OneNextSon();
  Rpush(l_10);
  goto j_30;
  l_10 :
  AllBuild();
  goto j_10;
  e_10 :
  Cpop();
  j_10 :
  Return();
  d_10 :
  OneNextSon();
  Rpush(m_10);
  l_30 :
  Cpush(o_10);
  Epushd(0,6);
  MoveTop(0,1);
  goto v_25;
  v_25 :
  TestFunFC(v_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_26;
  j_26 :
  TestFunFC(i_10,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto k_26;
  k_26 :
  TestFunFC(e_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(q_10);
  goto m_30;
  q_10 :
  goto p_10;
  m_30 :
  Return();
  p_10 :
  Epopd(0,6);
  goto n_10;
  o_10 :
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  Rpush(s_10);
  goto l_30;
  s_10 :
  OneNextSon();
  Rpush(t_10);
  goto l_30;
  t_10 :
  AllBuild();
  goto r_10;
  n_10 :
  Cpop();
  r_10 :
  Return();
  m_10 :
  AllBuild();
ENDPROC

PROC(_stratego_m_29)
  Rpush(u_10);
  j_34 :
  Cpush(w_10);
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  Rpush(x_10);
  goto j_34;
  x_10 :
  OneNextSon();
  Rpush(y_10);
  goto j_34;
  y_10 :
  AllBuild();
  goto v_10;
  w_10 :
  Epushd(0,6);
  MoveTop(0,1);
  goto s_31;
  s_31 :
  TestFunFC(v_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto t_31;
  t_31 :
  TestFunFC(i_10,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto u_31;
  u_31 :
  TestFunFC(e_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(d_11);
  goto k_34;
  d_11 :
  goto b_11;
  k_34 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,9);
  NotNULLd(0,5);
  Tset(App2("Pair",Egetd(0,5),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Id"),App0("TNil"))))));
  Rpush(f_11);
  l_34 :
  Cpush(h_11);
  Epushd(3,10);
  MoveTop(3,1);
  goto b_31;
  b_31 :
  TestFunFC(l_11,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,4,3,1,1);
  goto c_31;
  c_31 :
  TestFunFC(m_11,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  goto d_31;
  d_31 :
  TestFunFC(x_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto e_31;
  e_31 :
  TestFunFC(x_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto f_31;
  f_31 :
  TestFunFC(x_0,&&fail,Egetd(3,8));
  MoveArg(3,9,3,8,0);
  MoveArg(3,10,3,8,1);
  goto g_31;
  g_31 :
  TestFunFC(l_1,&&fail,Egetd(3,10));
  Cpush(o_11);
  Rpush(p_11);
  goto m_34;
  p_11 :
  goto n_11;
  o_11 :
  Rpush(r_11);
  goto q_34;
  r_11 :
  goto q_11;
  n_11 :
  Cpop();
  q_11 :
  goto k_11;
  k_11 :
  goto j_11;
  q_34 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,5);
  NotNULLd(3,3);
  NotNULLd(3,5);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,5),App0("TNil"))));
  MoveTop(5,1);
  goto y_30;
  y_30 :
  TestFunFC(x_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto z_30;
  z_30 :
  TestFunFC(x_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto a_31;
  a_31 :
  TestFunFC(l_1,&&fail,Egetd(5,5));
  Rpush(t_11);
  goto r_34;
  t_11 :
  goto s_11;
  r_34 :
  Epushd(6,1);
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  Rpush(z_11);
  u_11 :
  Cpush(v_11);
  Epushd(7,1);
  MoveTop(7,1);
  Move(5,2,7,1);
  Epopd(7,1);
  Cpop();
  goto y_11;
  v_11 :
  IsAppl();
  MatchTravInit();
  w_11 :
  OneMatchNextSon();
  Cpush(w_11);
  Rpush(x_11);
  goto u_11;
  x_11 :
  Cpop();
  MatchTravEnd();
  y_11 :
  Return();
  z_11 :
  Ccall(_stratego_n_29);
  MoveTop(6,1);
  Move(4,1,6,1);
  Epopd(6,1);
  Return();
  s_11 :
  Epopd(5,5);
  Tpop();
  NotNULLd(3,5);
  NotNULLd(3,7);
  NotNULLd(3,3);
  NotNULLd(4,1);
  NotNULLd(3,9);
  Tset(App2("Pair",App1("Var",Egetd(3,3)),App2("TCons",Egetd(3,5),App2("TCons",App2("Cons",Egetd(4,1),Egetd(3,7)),App2("TCons",App2("Seq",App1("Build",App1("Var",Egetd(3,3))),App2("Seq",App1("Match",App1("Var",Egetd(4,1))),Egetd(3,9))),App0("TNil"))))));
  Epopd(4,1);
  Return();
  j_11 :
  goto i_11;
  m_34 :
  Tdupl();
  NotNULLd(3,3);
  NotNULLd(3,5);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,5),App0("TNil"))));
  Cpush(a_12);
  Tdupl();
  Epushd(4,5);
  MoveTop(4,1);
  goto s_30;
  s_30 :
  TestFunFC(x_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto t_30;
  t_30 :
  TestFunFC(x_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto u_30;
  u_30 :
  TestFunFC(l_1,&&fail,Egetd(4,5));
  Rpush(c_12);
  goto n_34;
  c_12 :
  goto b_12;
  n_34 :
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(i_12);
  d_12 :
  Cpush(e_12);
  Epushd(5,1);
  MoveTop(5,1);
  Move(4,2,5,1);
  Epopd(5,1);
  Cpop();
  goto h_12;
  e_12 :
  IsAppl();
  MatchTravInit();
  f_12 :
  OneMatchNextSon();
  Cpush(f_12);
  Rpush(g_12);
  goto d_12;
  g_12 :
  Cpop();
  MatchTravEnd();
  h_12 :
  Return();
  i_12 :
  Return();
  b_12 :
  Epopd(4,5);
  Cpop();
  Crestore();
  Cjump();
  a_12 :
  Tpop();
  NotNULLd(3,3);
  NotNULLd(3,5);
  NotNULLd(3,7);
  NotNULLd(3,9);
  Tset(App2("Pair",App1("Var",Egetd(3,3)),App2("TCons",App2("Cons",Egetd(3,3),Egetd(3,5)),App2("TCons",Egetd(3,7),App2("TCons",Egetd(3,9),App0("TNil"))))));
  Return();
  i_11 :
  Epopd(3,10);
  goto g_11;
  h_11 :
  ThreadInit();
  k_12 :
  ThreadNextSon(&&l_12);
  Rpush(m_12);
  goto l_34;
  m_12 :
  ThreadSetEnv();
  goto k_12;
  l_12 :
  ThreadBuild();
  goto j_12;
  g_11 :
  Cpop();
  j_12 :
  Return();
  f_11 :
  MoveTop(2,1);
  goto i_31;
  i_31 :
  TestFunFC(l_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_31;
  j_31 :
  TestFunFC(x_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_31;
  k_31 :
  TestFunFC(x_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto l_31;
  l_31 :
  TestFunFC(x_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto m_31;
  m_31 :
  TestFunFC(l_1,&&fail,Egetd(2,9));
  Rpush(n_12);
  goto v_34;
  n_12 :
  goto e_11;
  v_34 :
  Move(1,1,2,2);
  Move(0,2,2,4);
  Move(1,2,2,6);
  Move(1,3,2,8);
  Return();
  e_11 :
  Epopd(2,9);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,2),App0("TNil"))));
  MoveTop(1,4);
  goto p_31;
  p_31 :
  TestFunFC(x_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto q_31;
  q_31 :
  TestFunFC(x_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto r_31;
  r_31 :
  TestFunFC(l_1,&&fail,Egetd(1,8));
  Rpush(p_12);
  goto c_35;
  p_12 :
  goto o_12;
  c_35 :
  Epushd(2,1);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Rpush(q_12);
  d_35 :
  Cpush(x_12);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_12);
  goto d_35;
  y_12 :
  AllBuild();
  goto r_12;
  x_12 :
  Ccall(_stratego_u_28);
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  goto a_13;
  r_12 :
  Cpop();
  a_13 :
  Return();
  q_12 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,1);
  NotNULLd(1,3);
  NotNULLd(0,6);
  Tset(App2("Scope",Egetd(2,1),App2("Seq",App1("Match",Egetd(1,1)),App2("Seq",Egetd(1,3),Egetd(0,6)))));
  Epopd(2,1);
  Return();
  o_12 :
  Epopd(1,8);
  Return();
  b_11 :
  Epopd(0,6);
  goto a_11;
  v_10 :
  Cpop();
  a_11 :
  Return();
  u_10 :
ENDPROC

PROC(_stratego_n_29)
  _ST_new();
ENDPROC

PROC(_stratego_o_29)
  Rpush(b_13);
  i_36 :
  Cpush(d_13);
  Epushd(0,7);
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  Rpush(g_13);
  goto i_36;
  g_13 :
  OneNextSon();
  Rpush(h_13);
  goto i_36;
  h_13 :
  AllBuild();
  MoveTop(0,1);
  goto l_35;
  l_35 :
  TestFunFC(c_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto m_35;
  m_35 :
  TestFunFC(v_9,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto n_35;
  n_35 :
  TestFunFC(v_9,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(i_13);
  goto j_36;
  i_13 :
  goto f_13;
  j_36 :
  Epushd(1,5);
  NotNULLd(0,3);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,6),App0("TNil"))));
  MoveTop(1,1);
  goto i_35;
  i_35 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_35;
  j_35 :
  TestFunFC(x_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto k_35;
  k_35 :
  TestFunFC(l_1,&&fail,Egetd(1,5));
  Rpush(l_13);
  goto k_36;
  l_13 :
  goto k_13;
  k_36 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(m_13);
  l_36 :
  Cpush(o_13);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_13);
  goto l_36;
  p_13 :
  AllBuild();
  goto n_13;
  o_13 :
  Ccall(_stratego_u_28);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto q_13;
  n_13 :
  Cpop();
  q_13 :
  Return();
  m_13 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,4);
  NotNULLd(0,7);
  Tset(App2("Scope",Egetd(2,1),App2("Choice",Egetd(0,4),Egetd(0,7))));
  Epopd(2,1);
  Return();
  k_13 :
  Epopd(1,5);
  Return();
  f_13 :
  Epopd(0,7);
  goto c_13;
  d_13 :
  goto r_13;
  c_13 :
  Cpop();
  r_13 :
  Return();
  b_13 :
ENDPROC

PROC(_stratego_p_29)
  Rpush(s_13);
  z_36 :
  Cpush(v_13);
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  Rpush(w_13);
  goto z_36;
  w_13 :
  OneNextSon();
  Rpush(x_13);
  goto z_36;
  x_13 :
  AllBuild();
  goto t_13;
  v_13 :
  Epushd(0,4);
  MoveTop(0,1);
  goto p_36;
  p_36 :
  TestFunFC(i_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto q_36;
  q_36 :
  TestFunFC(e_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(b_14);
  goto a_37;
  b_14 :
  goto a_14;
  a_37 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_n_29);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,4);
  NotNULLd(0,3);
  NotNULLd(1,1);
  Tset(App2("Let",App3("SDef",Egetd(1,1),App0("Nil"),Egetd(0,4)),App2("Pat",Egetd(0,3),App2("Call",App1("SVar",Egetd(1,1)),App0("Nil")))));
  Epopd(1,1);
  Return();
  a_14 :
  Epopd(0,4);
  goto y_13;
  t_13 :
  Cpop();
  y_13 :
  Return();
  s_13 :
  Rpush(c_14);
  c_37 :
  Rpush(d_14);
  d_37 :
  AllInit();
  e_14 :
  AllNextSon(&&f_14);
  Rpush(g_14);
  goto d_37;
  g_14 :
  goto e_14;
  f_14 :
  AllBuild();
  Cpush(i_14);
  Ccall(_stratego_q_29);
  AllInit();
  j_14 :
  AllNextSon(&&k_14);
  Rpush(l_14);
  goto c_37;
  l_14 :
  goto j_14;
  k_14 :
  AllBuild();
  goto h_14;
  i_14 :
  goto m_14;
  h_14 :
  Cpop();
  m_14 :
  Return();
  d_14 :
  Return();
  c_14 :
ENDPROC

PROC(_stratego_q_29)
  Epushd(0,7);
  MoveTop(0,3);
  goto i_37;
  i_37 :
  TestFunFC(c_10,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_37;
  j_37 :
  TestFunFC(z_9,&&r_14,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto n_37;
  n_37 :
  TestFunFC(z_9,&&s_14,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Cpush(u_14);
  Rpush(v_14);
  goto c_38;
  v_14 :
  goto t_14;
  u_14 :
  Rpush(x_14);
  goto d_38;
  x_14 :
  goto w_14;
  t_14 :
  Cpop();
  w_14 :
  goto q_14;
  s_14 :
  Rpush(q_14);
  goto d_38;
  r_14 :
  goto o_37;
  o_37 :
  TestFunFC(z_9,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(q_14);
  goto c_38;
  q_14 :
  goto p_14;
  d_38 :
  NotNULLd(0,6);
  NotNULLd(0,4);
  NotNULLd(0,7);
  Tset(App2("Let",Egetd(0,6),App2("Choice",Egetd(0,4),Egetd(0,7))));
  Return();
  p_14 :
  goto o_14;
  c_38 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Choice",Egetd(0,2),Egetd(0,5))));
  Return();
  o_14 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_r_29)
  Ccall(_stratego_s_29);
ENDPROC

PROC(_stratego_s_29)
  Ccall(_stratego_t_29);
  Ccall(_stratego_u_29);
  Ccall(_stratego_c_30);
ENDPROC

PROC(_stratego_t_29)
  Rpush(y_14);
  z_38 :
  Cpush(a_15);
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  Rpush(b_15);
  goto z_38;
  b_15 :
  OneNextSon();
  Rpush(c_15);
  goto z_38;
  c_15 :
  AllBuild();
  goto z_14;
  a_15 :
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("Cons",Egetd(0,1),App0("Nil")));
  Epopd(0,1);
  goto e_15;
  z_14 :
  Cpop();
  e_15 :
  Return();
  y_14 :
  Rpush(f_15);
  b_39 :
  Cpush(h_15);
  Epushd(0,3);
  TestFunTop(c_10);
  TravInit();
  OneNextSon();
  Rpush(j_15);
  goto b_39;
  j_15 :
  OneNextSon();
  Rpush(k_15);
  goto b_39;
  k_15 :
  AllBuild();
  MoveTop(0,1);
  goto k_38;
  k_38 :
  TestFunFC(c_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(l_15);
  goto c_39;
  l_15 :
  goto i_15;
  c_39 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  MoveTop(1,1);
  goto h_38;
  h_38 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_38;
  i_38 :
  TestFunFC(x_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto j_38;
  j_38 :
  TestFunFC(l_1,&&fail,Egetd(1,5));
  Rpush(n_15);
  goto d_39;
  n_15 :
  goto m_15;
  d_39 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(o_15);
  e_39 :
  Cpush(q_15);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_15);
  goto e_39;
  r_15 :
  AllBuild();
  goto p_15;
  q_15 :
  Ccall(_stratego_u_28);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto s_15;
  p_15 :
  Cpop();
  s_15 :
  Return();
  o_15 :
  Return();
  m_15 :
  Epopd(1,5);
  Return();
  i_15 :
  Epopd(0,3);
  goto g_15;
  h_15 :
  goto u_15;
  g_15 :
  Cpop();
  u_15 :
  Return();
  f_15 :
ENDPROC

PROC(_stratego_u_29)
  Rpush(v_15);
  f_39 :
  Cpush(x_15);
  Ccall(_stratego_u_28);
  goto w_15;
  x_15 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_29);
  OneNextSon();
  Rpush(z_15);
  goto f_39;
  z_15 :
  AllBuild();
  goto y_15;
  w_15 :
  Cpop();
  y_15 :
  Return();
  v_15 :
ENDPROC

PROC(_stratego_v_29)
  Epushd(0,3);
  MoveTop(0,1);
  goto z_39;
  z_39 :
  TestFunFC(d_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(c_16);
  goto z_41;
  c_16 :
  goto a_16;
  z_41 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App3("MatchTerm",App0("Nil"),Egetd(0,2),App1("Accept",Egetd(0,3))));
  Rpush(e_16);
  a_42 :
  Cpush(g_16);
  f_16 :
  Cpush(i_16);
  Epushd(1,5);
  MoveTop(1,1);
  goto j_39;
  j_39 :
  TestFunFC(n_16,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,5,1,1,2);
  goto k_39;
  k_39 :
  TestFunFC(p_16,&&o_16,Egetd(1,3));
  Rpush(m_16);
  goto c_42;
  o_16 :
  TestFunFC(r_16,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  Rpush(m_16);
  goto d_42;
  m_16 :
  goto l_16;
  d_42 :
  NotNULLd(1,4);
  NotNULLd(1,2);
  NotNULLd(1,5);
  Tset(App4("MatchFunA",App1("Str",Egetd(1,4)),App0("Nil"),Egetd(1,2),Egetd(1,5)));
  Return();
  l_16 :
  goto k_16;
  c_42 :
  NotNULLd(1,2);
  NotNULLd(1,5);
  Tset(App3("MatchVars",App0("Nil"),Egetd(1,2),Egetd(1,5)));
  Return();
  k_16 :
  Epopd(1,5);
  goto h_16;
  i_16 :
  Ccontinue(s_16);
  Ccall(_stratego_w_29);
  goto h_16;
  s_16 :
  Epushd(1,10);
  MoveTop(1,6);
  goto u_39;
  u_39 :
  TestFunFC(e_17,&&d_17,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  MoveArg(1,10,1,6,2);
  MoveArg(1,5,1,6,3);
  goto w_39;
  w_39 :
  TestFunFC(p_1,&&g_17,Egetd(1,10));
  Rpush(c_17);
  goto i_42;
  g_17 :
  TestFunFC(a_0,&&fail,Egetd(1,10));
  MoveArg(1,3,1,10,0);
  MoveArg(1,4,1,10,1);
  Rpush(c_17);
  goto j_42;
  d_17 :
  TestFunFC(n_16,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  MoveArg(1,10,1,6,2);
  goto x_39;
  x_39 :
  TestFunFC(i_17,&&h_17,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,2,1,8,1);
  goto y_39;
  y_39 :
  TestFunFC(m_11,&&fail,Egetd(1,9));
  MoveArg(1,1,1,9,0);
  Rpush(c_17);
  goto e_42;
  h_17 :
  TestFunFC(m_11,&&j_17,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  Rpush(c_17);
  goto f_42;
  j_17 :
  TestFunFC(m_17,&&l_17,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,2,1,8,1);
  Rpush(c_17);
  goto g_42;
  l_17 :
  TestFunFC(p_17,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  Rpush(c_17);
  goto l_42;
  c_17 :
  goto b_17;
  l_42 :
  NotNULLd(1,7);
  NotNULLd(1,10);
  Tset(App3("MatchVars",App0("Nil"),Egetd(1,7),Egetd(1,10)));
  Return();
  b_17 :
  goto z_16;
  j_42 :
  Epushd(2,1);
  NotNULLd(1,7);
  Tset(App2("TCons",Egetd(1,7),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_b_30);
  MoveTop(2,1);
  NotNULLd(1,7);
  NotNULLd(1,3);
  NotNULLd(2,1);
  NotNULLd(1,8);
  NotNULLd(1,4);
  NotNULLd(1,5);
  Tset(App2("Down",Egetd(1,7),App3("MatchTerm",App2("Cons",Egetd(1,7),Egetd(1,8)),Egetd(1,3),App1("Up",App4("MatchKids",Egetd(2,1),Egetd(1,8),Egetd(1,4),Egetd(1,5))))));
  Epopd(2,1);
  Return();
  z_16 :
  goto y_16;
  i_42 :
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Return();
  y_16 :
  goto x_16;
  g_42 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_x_29);
  MoveTop(2,1);
  NotNULLd(1,9);
  NotNULLd(2,1);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(1,10);
  Tset(App4("MatchFunA",App2("Fun",Egetd(1,9),Egetd(2,1)),App0("Nil"),Egetd(1,7),App4("MatchKids",MakeInt(0),Egetd(1,7),Egetd(1,2),Egetd(1,10))));
  Epopd(2,1);
  Return();
  x_16 :
  goto w_16;
  f_42 :
  NotNULLd(1,9);
  NotNULLd(1,7);
  NotNULLd(1,10);
  Tset(App3("MatchVars",App2("Cons",Egetd(1,9),App0("Nil")),Egetd(1,7),Egetd(1,10)));
  Return();
  w_16 :
  goto u_16;
  e_42 :
  NotNULLd(1,1);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(1,10);
  Tset(App3("MatchVars",App2("Cons",Egetd(1,1),App0("Nil")),Egetd(1,7),App3("MatchTerm",Egetd(1,7),Egetd(1,2),Egetd(1,10))));
  Return();
  u_16 :
  Epopd(1,10);
  goto t_16;
  h_16 :
  Cpop();
  t_16 :
  Tduplinv();
  goto f_16;
  g_16 :
  AllInit();
  s_17 :
  AllNextSon(&&v_17);
  Rpush(y_17);
  goto a_42;
  y_17 :
  goto s_17;
  v_17 :
  AllBuild();
  Return();
  e_16 :
  Return();
  a_16 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_w_29)
  Epushd(0,5);
  MoveTop(0,1);
  goto o_42;
  o_42 :
  TestFunFC(n_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,5,0,1,2);
  goto p_42;
  p_42 :
  TestFunFC(j_18,&&i_18,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(f_18);
  goto b_43;
  i_18 :
  TestFunFC(m_18,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(f_18);
  goto c_43;
  f_18 :
  goto e_18;
  c_43 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App4("MatchFunA",App1("Real",Egetd(0,4)),App0("Nil"),Egetd(0,2),Egetd(0,5)));
  Return();
  e_18 :
  goto b_18;
  b_43 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App4("MatchFunA",App1("Int",Egetd(0,4)),App0("Nil"),Egetd(0,2),Egetd(0,5)));
  Return();
  b_18 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_x_29)
  Rpush(n_18);
  n_43 :
  Cpush(r_18);
  Ccall(_stratego_u_28);
  Tset(MakeInt(0));
  goto q_18;
  r_18 :
  Epushd(0,3);
  MoveTop(0,1);
  goto f_43;
  f_43 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(y_18);
  goto o_43;
  y_18 :
  goto v_18;
  o_43 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(z_18);
  goto n_43;
  z_18 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_29);
  Epopd(1,1);
  Return();
  v_18 :
  Epopd(0,3);
  goto u_18;
  q_18 :
  Cpop();
  u_18 :
  Return();
  n_18 :
ENDPROC

PROC(_stratego_y_29)
  _ST_add();
ENDPROC

PROC(_stratego_b_30)
  _ST_plus();
ENDPROC

PROC(_stratego_c_30)
  Rpush(a_19);
  x_43 :
  Cpush(c_19);
  Ccall(_stratego_u_28);
  Tset(App1("Accept",App0("Fail")));
  goto b_19;
  c_19 :
  Epushd(0,3);
  MoveTop(0,1);
  goto r_43;
  r_43 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(f_19);
  goto y_43;
  f_19 :
  goto e_19;
  y_43 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Rpush(g_19);
  goto x_43;
  g_19 :
  OneNextSon();
  Ccall(_stratego_j_29);
  AllBuild();
  AllBuild();
  Ccall(_stratego_d_30);
  Return();
  e_19 :
  Epopd(0,3);
  goto d_19;
  b_19 :
  Cpop();
  d_19 :
  Return();
  a_19 :
ENDPROC

PROC(_stratego_d_30)
  Epushd(0,5);
  MoveTop(0,1);
  goto e_45;
  e_45 :
  TestFunFC(x_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_45;
  f_45 :
  TestFunFC(x_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_45;
  g_45 :
  TestFunFC(l_1,&&fail,Egetd(0,5));
  Rpush(i_19);
  goto k_48;
  i_19 :
  goto h_19;
  k_48 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("Merge",Egetd(0,2),Egetd(0,4)));
  Rpush(j_19);
  l_48 :
  Cpush(l_19);
  k_19 :
  Cpush(n_19);
  Ccall(_stratego_e_30);
  goto m_19;
  n_19 :
  Epushd(1,8);
  MoveTop(1,1);
  goto b_45;
  b_45 :
  TestFunFC(t_19,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto c_45;
  c_45 :
  TestFunFC(u_19,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,5,1,2,2);
  MoveArg(1,6,1,2,3);
  goto d_45;
  d_45 :
  TestFunFC(v_19,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  Cpush(x_19);
  Rpush(y_19);
  goto n_48;
  y_19 :
  goto w_19;
  x_19 :
  Ccontinue(z_19);
  Rpush(a_20);
  goto x_48;
  a_20 :
  goto w_19;
  z_19 :
  Rpush(c_20);
  goto g_49;
  c_20 :
  goto b_20;
  w_19 :
  Cpop();
  b_20 :
  goto s_19;
  s_19 :
  goto r_19;
  g_49 :
  NotNULLd(1,3);
  NotNULLd(1,4);
  NotNULLd(1,5);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App1("Case",App2("Cons",App4("MatchFunA",Egetd(1,3),Egetd(1,4),Egetd(1,5),Egetd(1,6)),Egetd(1,8))));
  Return();
  r_19 :
  goto q_19;
  x_48 :
  Epushd(2,7);
  Tdupl();
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  Rpush(d_20);
  y_48 :
  Cpush(f_20);
  Epushd(3,6);
  MoveTop(3,1);
  goto q_44;
  q_44 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,6,3,1,1);
  goto r_44;
  r_44 :
  TestFunFC(i_20,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  MoveArg(3,5,3,2,2);
  Rpush(h_20);
  goto z_48;
  h_20 :
  goto g_20;
  z_48 :
  Move(2,1,3,3);
  Move(1,5,3,4);
  Move(2,2,3,5);
  Return();
  g_20 :
  Epopd(3,6);
  goto e_20;
  f_20 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_20);
  goto y_48;
  k_20 :
  AllBuild();
  goto j_20;
  e_20 :
  Cpop();
  j_20 :
  Return();
  d_20 :
  Tpop();
  NotNULLd(1,4);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,3);
  goto y_44;
  y_44 :
  TestFunFC(x_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_44;
  z_44 :
  TestFunFC(x_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_45;
  a_45 :
  TestFunFC(l_1,&&fail,Egetd(2,7));
  Rpush(q_20);
  goto a_49;
  q_20 :
  goto n_20;
  a_49 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(t_20);
  b_49 :
  Cpush(x_20);
  Ccall(_stratego_u_28);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto w_20;
  x_20 :
  Ccontinue(d_21);
  Epushd(4,3);
  MoveTop(4,1);
  goto w_44;
  w_44 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(r_21);
  goto c_49;
  r_21 :
  goto h_21;
  c_49 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(u_21);
  d_49 :
  Cpush(w_21);
  Epushd(5,3);
  MoveTop(5,1);
  goto v_44;
  v_44 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(d_22);
  goto e_49;
  d_22 :
  goto x_21;
  e_49 :
  Move(4,2,5,2);
  Return();
  x_21 :
  Epopd(5,3);
  goto v_21;
  w_21 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_22);
  goto d_49;
  g_22 :
  AllBuild();
  goto f_22;
  v_21 :
  Cpop();
  f_22 :
  Return();
  u_21 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(h_22);
  goto b_49;
  h_22 :
  Return();
  h_21 :
  Epopd(4,3);
  goto w_20;
  d_21 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_22);
  goto b_49;
  m_22 :
  AllBuild();
  goto j_22;
  w_20 :
  Cpop();
  j_22 :
  Return();
  t_20 :
  MoveTop(3,1);
  NotNULLd(1,3);
  NotNULLd(3,1);
  NotNULLd(1,5);
  NotNULLd(1,6);
  NotNULLd(2,2);
  NotNULLd(1,8);
  Tset(App1("Case",App2("Cons",App4("MatchFunA",Egetd(1,3),Egetd(3,1),Egetd(1,5),App2("Merge",Egetd(1,6),Egetd(2,2))),Egetd(1,8))));
  Epopd(3,1);
  Return();
  n_20 :
  Epopd(2,7);
  Return();
  q_19 :
  goto p_19;
  n_48 :
  Epushd(2,1);
  Tdupl();
  Epushd(3,1);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  Rpush(n_22);
  o_48 :
  Cpush(p_22);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto n_44;
  n_44 :
  TestFunFC(u_19,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  MoveArg(4,5,4,1,3);
  Rpush(t_22);
  goto p_48;
  t_22 :
  goto q_22;
  p_48 :
  Epushd(5,7);
  Move(1,3,4,2);
  Move(5,1,4,3);
  Move(1,5,4,4);
  Move(5,2,4,5);
  NotNULLd(1,4);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(5,1),App0("TNil"))));
  MoveTop(5,3);
  goto k_44;
  k_44 :
  TestFunFC(x_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto l_44;
  l_44 :
  TestFunFC(x_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto m_44;
  m_44 :
  TestFunFC(l_1,&&fail,Egetd(5,7));
  Rpush(v_22);
  goto q_48;
  v_22 :
  goto u_22;
  q_48 :
  Epushd(6,1);
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  Rpush(w_22);
  r_48 :
  Cpush(f_23);
  Ccall(_stratego_u_28);
  NotNULLd(5,6);
  Tset(Egetd(5,6));
  goto x_22;
  f_23 :
  Ccontinue(h_23);
  Epushd(7,3);
  MoveTop(7,1);
  goto i_44;
  i_44 :
  TestFunFC(a_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(j_23);
  goto s_48;
  j_23 :
  goto i_23;
  s_48 :
  Tdupl();
  NotNULLd(5,6);
  Tset(Egetd(5,6));
  Rpush(k_23);
  t_48 :
  Cpush(r_23);
  Epushd(8,3);
  MoveTop(8,1);
  goto h_44;
  h_44 :
  TestFunFC(a_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(t_23);
  goto u_48;
  t_23 :
  goto s_23;
  u_48 :
  Move(7,2,8,2);
  Return();
  s_23 :
  Epopd(8,3);
  goto l_23;
  r_23 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_23);
  goto t_48;
  x_23 :
  AllBuild();
  goto u_23;
  l_23 :
  Cpop();
  u_23 :
  Return();
  k_23 :
  Tpop();
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(a_24);
  goto r_48;
  a_24 :
  Return();
  i_23 :
  Epopd(7,3);
  goto x_22;
  h_23 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_24);
  goto r_48;
  z_24 :
  AllBuild();
  goto d_24;
  x_22 :
  Cpop();
  d_24 :
  Return();
  w_22 :
  MoveTop(6,1);
  NotNULLd(1,3);
  NotNULLd(6,1);
  NotNULLd(1,5);
  NotNULLd(1,6);
  NotNULLd(5,2);
  Tset(App4("MatchFunA",Egetd(1,3),Egetd(6,1),Egetd(1,5),App2("Merge",Egetd(1,6),Egetd(5,2))));
  Epopd(6,1);
  Return();
  u_22 :
  Epopd(5,7);
  Return();
  q_22 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto o_22;
  p_22 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_25);
  goto o_48;
  i_25 :
  AllBuild();
  goto e_25;
  o_22 :
  Cpop();
  e_25 :
  Return();
  n_22 :
  MoveTop(3,1);
  Move(2,1,3,1);
  Epopd(3,1);
  Tpop();
  NotNULLd(2,1);
  Tset(App1("Case",Egetd(2,1)));
  Epopd(2,1);
  Return();
  p_19 :
  Epopd(1,8);
  goto o_19;
  m_19 :
  Cpop();
  o_19 :
  Tduplinv();
  goto k_19;
  l_19 :
  AllInit();
  j_25 :
  AllNextSon(&&k_25);
  Rpush(l_25);
  goto l_48;
  l_25 :
  goto j_25;
  k_25 :
  AllBuild();
  Return();
  j_19 :
  Return();
  h_19 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_e_30)
  Epushd(0,11);
  MoveTop(0,5);
  goto s_52;
  s_52 :
  TestFunFC(w_26,&&v_26,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,10,0,5,1);
  goto t_52;
  t_52 :
  TestFunFC(i_20,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  MoveArg(0,9,0,6,2);
  goto u_52;
  u_52 :
  TestFunFC(u_19,&&x_26,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  MoveArg(0,4,0,10,2);
  MoveArg(0,2,0,10,3);
  Rpush(u_26);
  goto o_64;
  x_26 :
  TestFunFC(i_20,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  MoveArg(0,4,0,10,2);
  Rpush(u_26);
  goto v_64;
  v_26 :
  TestFunFC(t_19,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,10,0,5,1);
  goto v_52;
  v_52 :
  TestFunFC(z_26,&&y_26,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto w_52;
  w_52 :
  TestFunFC(z_26,&&a_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto h_62;
  a_27 :
  TestFunFC(d_27,&&c_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  Rpush(u_26);
  goto k_62;
  c_27 :
  TestFunFC(u_19,&&f_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  MoveArg(0,4,0,10,2);
  MoveArg(0,2,0,10,3);
  Rpush(u_26);
  goto m_62;
  f_27 :
  TestFunFC(i_20,&&g_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  MoveArg(0,4,0,10,2);
  Rpush(u_26);
  goto o_62;
  g_27 :
  TestFunFC(v_19,&&i_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto p_62;
  i_27 :
  TestFunFC(j_27,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto x_62;
  y_26 :
  TestFunFC(d_27,&&l_27,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto x_52;
  x_52 :
  TestFunFC(d_27,&&m_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  Rpush(u_26);
  goto g_62;
  m_27 :
  TestFunFC(z_26,&&n_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto j_62;
  n_27 :
  TestFunFC(j_27,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto z_62;
  l_27 :
  TestFunFC(j_27,&&o_27,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto y_52;
  y_52 :
  TestFunFC(j_27,&&p_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto i_62;
  p_27 :
  TestFunFC(z_26,&&q_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto y_62;
  q_27 :
  TestFunFC(d_27,&&r_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  Rpush(u_26);
  goto a_63;
  r_27 :
  TestFunFC(u_19,&&s_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  MoveArg(0,4,0,10,2);
  MoveArg(0,2,0,10,3);
  Rpush(u_26);
  goto c_63;
  s_27 :
  TestFunFC(i_20,&&t_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  MoveArg(0,4,0,10,2);
  Rpush(u_26);
  goto e_63;
  t_27 :
  TestFunFC(v_19,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto f_63;
  o_27 :
  TestFunFC(v_19,&&u_27,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto z_52;
  z_52 :
  TestFunFC(z_26,&&v_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto t_62;
  v_27 :
  TestFunFC(j_27,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto j_63;
  u_27 :
  TestFunFC(u_19,&&w_27,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  MoveArg(0,9,0,6,2);
  MoveArg(0,1,0,6,3);
  goto a_53;
  a_53 :
  TestFunFC(z_26,&&x_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto l_62;
  x_27 :
  TestFunFC(j_27,&&y_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto b_63;
  y_27 :
  TestFunFC(u_19,&&z_27,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  MoveArg(0,4,0,10,2);
  MoveArg(0,2,0,10,3);
  Cpush(b_28);
  Rpush(c_28);
  goto r_63;
  c_28 :
  goto a_28;
  b_28 :
  Rpush(e_28);
  goto z_63;
  e_28 :
  goto d_28;
  a_28 :
  Cpop();
  d_28 :
  goto u_26;
  z_27 :
  TestFunFC(i_20,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  MoveArg(0,4,0,10,2);
  Rpush(u_26);
  goto a_64;
  w_27 :
  TestFunFC(i_20,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  MoveArg(0,9,0,6,2);
  goto b_53;
  b_53 :
  TestFunFC(z_26,&&f_28,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto n_62;
  f_28 :
  TestFunFC(j_27,&&g_28,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto d_63;
  g_28 :
  TestFunFC(i_20,&&h_28,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  MoveArg(0,4,0,10,2);
  Rpush(u_26);
  goto n_63;
  h_28 :
  TestFunFC(u_19,&&i_28,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,3,0,10,1);
  MoveArg(0,4,0,10,2);
  MoveArg(0,2,0,10,3);
  Rpush(u_26);
  goto h_64;
  i_28 :
  TestFunFC(v_19,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  Rpush(u_26);
  goto z_64;
  u_26 :
  goto t_26;
  z_64 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,11);
  Tset(Egetd(0,11));
  Rpush(j_28);
  a_65 :
  Cpush(l_28);
  Ccall(_stratego_u_28);
  goto k_28;
  l_28 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(3,1);
  Tset(App2("Merge2",App3("MatchVars",Egetd(0,7),Egetd(0,8),Egetd(0,9)),Egetd(3,1)));
  Epopd(3,1);
  OneNextSon();
  Rpush(n_28);
  goto a_65;
  n_28 :
  AllBuild();
  goto m_28;
  k_28 :
  Cpop();
  m_28 :
  Return();
  j_28 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Cpush(p_28);
  NotNULLd(0,11);
  Tset(Egetd(0,11));
  Rpush(q_28);
  d_65 :
  Cpush(t_28);
  Epushd(3,6);
  MoveTop(3,1);
  goto p_52;
  p_52 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,6,3,1,1);
  goto q_52;
  q_52 :
  TestFunFC(i_20,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  MoveArg(3,5,3,2,2);
  Rpush(o_30);
  goto e_65;
  o_30 :
  goto n_30;
  e_65 :
  Return();
  n_30 :
  Epopd(3,6);
  goto s_28;
  t_28 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_30);
  goto d_65;
  q_30 :
  AllBuild();
  goto p_30;
  s_28 :
  Cpop();
  p_30 :
  Return();
  q_28 :
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  goto o_28;
  p_28 :
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(1,1);
  Tset(App2("Cons",App3("MatchVars",Egetd(0,7),Egetd(0,8),Egetd(0,9)),Egetd(1,1)));
  goto r_30;
  o_28 :
  Cpop();
  r_30 :
  MoveTop(2,2);
  Move(1,2,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(1,2);
  Tset(App1("Case",Egetd(1,2)));
  Epopd(1,2);
  Return();
  t_26 :
  goto s_26;
  v_64 :
  Epushd(1,6);
  Move(0,8,0,3);
  Move(1,1,0,4);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,11),App0("TNil"))));
  MoveTop(1,2);
  goto j_52;
  j_52 :
  TestFunFC(x_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto k_52;
  k_52 :
  TestFunFC(x_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto l_52;
  l_52 :
  TestFunFC(l_1,&&fail,Egetd(1,6));
  Rpush(w_30);
  goto w_64;
  w_30 :
  goto v_30;
  w_64 :
  Epushd(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(x_30);
  x_64 :
  Cpush(n_31);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_31);
  goto x_64;
  o_31 :
  AllBuild();
  goto h_31;
  n_31 :
  Ccall(_stratego_u_28);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto b_32;
  h_31 :
  Cpop();
  b_32 :
  Return();
  x_30 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(1,1);
  Tset(App3("MatchVars",Egetd(2,1),Egetd(0,8),App2("Merge",Egetd(0,9),Egetd(1,1))));
  Epopd(2,1);
  Return();
  v_30 :
  Epopd(1,6);
  Return();
  s_26 :
  goto r_26;
  o_64 :
  Epushd(1,6);
  Move(0,8,0,4);
  Move(1,1,0,2);
  NotNULLd(0,7);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,3),App0("TNil"))));
  MoveTop(1,2);
  goto e_52;
  e_52 :
  TestFunFC(x_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto f_52;
  f_52 :
  TestFunFC(x_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto g_52;
  g_52 :
  TestFunFC(l_1,&&fail,Egetd(1,6));
  Rpush(d_32);
  goto p_64;
  d_32 :
  goto c_32;
  p_64 :
  Epushd(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(r_32);
  q_64 :
  Cpush(t_32);
  Ccall(_stratego_u_28);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto s_32;
  t_32 :
  Ccontinue(u_32);
  Epushd(3,3);
  MoveTop(3,1);
  goto c_52;
  c_52 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(b_33);
  goto r_64;
  b_33 :
  goto a_33;
  r_64 :
  Tdupl();
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Rpush(d_33);
  s_64 :
  Cpush(f_33);
  Epushd(4,3);
  MoveTop(4,1);
  goto b_52;
  b_52 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(n_33);
  goto t_64;
  n_33 :
  goto g_33;
  t_64 :
  Move(3,2,4,2);
  Return();
  g_33 :
  Epopd(4,3);
  goto e_33;
  f_33 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_34);
  goto s_64;
  f_34 :
  AllBuild();
  goto o_33;
  e_33 :
  Cpop();
  o_33 :
  Return();
  d_33 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(g_34);
  goto q_64;
  g_34 :
  Return();
  a_33 :
  Epopd(3,3);
  goto s_32;
  u_32 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_34);
  goto q_64;
  p_34 :
  AllBuild();
  goto i_34;
  s_32 :
  Cpop();
  i_34 :
  Return();
  r_32 :
  MoveTop(2,1);
  NotNULLd(0,11);
  NotNULLd(2,1);
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(1,1);
  Tset(App4("MatchFunA",Egetd(0,11),Egetd(2,1),Egetd(0,8),App2("Merge",Egetd(0,9),Egetd(1,1))));
  Epopd(2,1);
  Return();
  c_32 :
  Epopd(1,6);
  Return();
  r_26 :
  goto q_26;
  h_64 :
  Epushd(1,6);
  Move(0,8,0,4);
  Move(1,1,0,2);
  NotNULLd(0,7);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,3),App0("TNil"))));
  MoveTop(1,2);
  goto v_51;
  v_51 :
  TestFunFC(x_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto w_51;
  w_51 :
  TestFunFC(x_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto x_51;
  x_51 :
  TestFunFC(l_1,&&fail,Egetd(1,6));
  Rpush(u_34);
  goto i_64;
  u_34 :
  goto t_34;
  i_64 :
  Epushd(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(w_34);
  j_64 :
  Cpush(y_34);
  Ccall(_stratego_u_28);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto x_34;
  y_34 :
  Ccontinue(z_34);
  Epushd(3,3);
  MoveTop(3,1);
  goto t_51;
  t_51 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(b_35);
  goto k_64;
  b_35 :
  goto a_35;
  k_64 :
  Tdupl();
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Rpush(e_35);
  l_64 :
  Cpush(g_35);
  Epushd(4,3);
  MoveTop(4,1);
  goto s_51;
  s_51 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(v_35);
  goto m_64;
  v_35 :
  goto h_35;
  m_64 :
  Move(3,2,4,2);
  Return();
  h_35 :
  Epopd(4,3);
  goto f_35;
  g_35 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_35);
  goto l_64;
  x_35 :
  AllBuild();
  goto w_35;
  f_35 :
  Cpop();
  w_35 :
  Return();
  e_35 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(y_35);
  goto j_64;
  y_35 :
  Return();
  a_35 :
  Epopd(3,3);
  goto x_34;
  z_34 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_36);
  goto j_64;
  f_36 :
  AllBuild();
  goto e_36;
  x_34 :
  Cpop();
  e_36 :
  Return();
  w_34 :
  MoveTop(2,1);
  NotNULLd(0,11);
  NotNULLd(2,1);
  NotNULLd(1,1);
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App1("Case",App2("Cons",App4("MatchFunA",Egetd(0,11),Egetd(2,1),Egetd(0,8),App2("Merge",Egetd(0,9),Egetd(1,1))),App2("Cons",App3("MatchVars",Egetd(0,7),Egetd(0,8),Egetd(0,9)),App0("Nil")))));
  Epopd(2,1);
  Return();
  t_34 :
  Epopd(1,6);
  Return();
  q_26 :
  goto n_26;
  a_64 :
  Epushd(1,6);
  Move(0,9,0,3);
  Move(1,1,0,4);
  NotNULLd(0,11);
  NotNULLd(0,8);
  Tset(App2("TCons",Egetd(0,11),App2("TCons",Egetd(0,8),App0("TNil"))));
  MoveTop(1,2);
  goto m_51;
  m_51 :
  TestFunFC(x_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto n_51;
  n_51 :
  TestFunFC(x_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto o_51;
  o_51 :
  TestFunFC(l_1,&&fail,Egetd(1,6));
  Rpush(m_36);
  goto b_64;
  m_36 :
  goto h_36;
  b_64 :
  Epushd(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(n_36);
  c_64 :
  Cpush(v_36);
  Ccall(_stratego_u_28);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto o_36;
  v_36 :
  Ccontinue(w_36);
  Epushd(3,3);
  MoveTop(3,1);
  goto k_51;
  k_51 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(e_37);
  goto d_64;
  e_37 :
  goto b_37;
  d_64 :
  Tdupl();
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Rpush(f_37);
  e_64 :
  Cpush(h_37);
  Epushd(4,3);
  MoveTop(4,1);
  goto j_51;
  j_51 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(l_37);
  goto f_64;
  l_37 :
  goto k_37;
  f_64 :
  Move(3,2,4,2);
  Return();
  k_37 :
  Epopd(4,3);
  goto g_37;
  h_37 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_37);
  goto e_64;
  w_37 :
  AllBuild();
  goto m_37;
  g_37 :
  Cpop();
  m_37 :
  Return();
  f_37 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(x_37);
  goto c_64;
  x_37 :
  Return();
  b_37 :
  Epopd(3,3);
  goto o_36;
  w_36 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_37);
  goto c_64;
  z_37 :
  AllBuild();
  goto y_37;
  o_36 :
  Cpop();
  y_37 :
  Return();
  n_36 :
  MoveTop(2,1);
  NotNULLd(0,7);
  NotNULLd(2,1);
  NotNULLd(0,1);
  NotNULLd(0,11);
  NotNULLd(0,9);
  NotNULLd(1,1);
  Tset(App1("Case",App2("Cons",App4("MatchFunA",Egetd(0,7),Egetd(2,1),Egetd(0,9),App2("Merge",Egetd(0,1),Egetd(1,1))),App2("Cons",App3("MatchVars",Egetd(0,11),Egetd(0,9),Egetd(1,1)),App0("Nil")))));
  Epopd(2,1);
  Return();
  h_36 :
  Epopd(1,6);
  Return();
  n_26 :
  goto m_26;
  z_63 :
  Epushd(1,1);
  Move(0,9,0,4);
  Move(1,1,0,2);
  Tdupl();
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,11),App0("TNil"))));
  Cpush(a_38);
  Tdupl();
  Ccall(_stratego_f_30);
  Cpop();
  Crestore();
  Cjump();
  a_38 :
  Tpop();
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,1);
  NotNULLd(0,11);
  NotNULLd(0,3);
  NotNULLd(0,9);
  NotNULLd(1,1);
  Tset(App1("Case",App2("Cons",App4("MatchFunA",Egetd(0,7),Egetd(0,8),Egetd(0,9),Egetd(0,1)),App2("Cons",App4("MatchFunA",Egetd(0,11),Egetd(0,3),Egetd(0,9),Egetd(1,1)),App0("Nil")))));
  Epopd(1,1);
  Return();
  m_26 :
  goto l_26;
  r_63 :
  Epushd(1,7);
  Move(0,7,0,11);
  Move(1,1,0,3);
  Move(0,9,0,4);
  Move(1,2,0,2);
  NotNULLd(0,8);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(1,3);
  goto d_51;
  d_51 :
  TestFunFC(x_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_51;
  e_51 :
  TestFunFC(x_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto f_51;
  f_51 :
  TestFunFC(l_1,&&fail,Egetd(1,7));
  Rpush(e_38);
  goto s_63;
  e_38 :
  goto b_38;
  s_63 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(f_38);
  u_63 :
  Cpush(m_38);
  Ccall(_stratego_u_28);
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  goto g_38;
  m_38 :
  Ccontinue(q_38);
  Epushd(3,3);
  MoveTop(3,1);
  goto b_51;
  b_51 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(x_38);
  goto v_63;
  x_38 :
  goto r_38;
  v_63 :
  Tdupl();
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(y_38);
  w_63 :
  Cpush(g_39);
  Epushd(4,3);
  MoveTop(4,1);
  goto a_51;
  a_51 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(i_39);
  goto x_63;
  i_39 :
  goto h_39;
  x_63 :
  Move(3,2,4,2);
  Return();
  h_39 :
  Epopd(4,3);
  goto a_39;
  g_39 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_39);
  goto w_63;
  m_39 :
  AllBuild();
  goto l_39;
  a_39 :
  Cpop();
  l_39 :
  Return();
  y_38 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(n_39);
  goto u_63;
  n_39 :
  Return();
  r_38 :
  Epopd(3,3);
  goto g_38;
  q_38 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_39);
  goto u_63;
  p_39 :
  AllBuild();
  goto o_39;
  g_38 :
  Cpop();
  o_39 :
  Return();
  f_38 :
  MoveTop(2,1);
  NotNULLd(0,7);
  NotNULLd(2,1);
  NotNULLd(0,9);
  NotNULLd(0,1);
  NotNULLd(1,2);
  Tset(App4("MatchFunA",Egetd(0,7),Egetd(2,1),Egetd(0,9),App2("Merge",Egetd(0,1),Egetd(1,2))));
  Epopd(2,1);
  Return();
  b_38 :
  Epopd(1,7);
  Return();
  l_26 :
  goto i_26;
  n_63 :
  Epushd(1,6);
  Move(0,8,0,3);
  Move(1,1,0,4);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,11),App0("TNil"))));
  MoveTop(1,2);
  goto u_50;
  u_50 :
  TestFunFC(x_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto v_50;
  v_50 :
  TestFunFC(x_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto w_50;
  w_50 :
  TestFunFC(l_1,&&fail,Egetd(1,6));
  Rpush(r_39);
  goto o_63;
  r_39 :
  goto q_39;
  o_63 :
  Epushd(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(s_39);
  p_63 :
  Cpush(v_39);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_40);
  goto p_63;
  d_40 :
  AllBuild();
  goto t_39;
  v_39 :
  Ccall(_stratego_u_28);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto e_40;
  t_39 :
  Cpop();
  e_40 :
  Return();
  s_39 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(1,1);
  Tset(App3("MatchVars",Egetd(2,1),Egetd(0,8),App2("Merge",Egetd(0,9),Egetd(1,1))));
  Epopd(2,1);
  Return();
  q_39 :
  Epopd(1,6);
  Return();
  i_26 :
  goto h_26;
  j_63 :
  Epushd(1,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(k_40);
  k_63 :
  Cpush(m_40);
  Ccall(_stratego_u_28);
  goto l_40;
  m_40 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,11);
  NotNULLd(2,1);
  Tset(App2("Merge",App1("Accept",Egetd(0,11)),Egetd(2,1)));
  Epopd(2,1);
  OneNextSon();
  Rpush(o_40);
  goto k_63;
  o_40 :
  AllBuild();
  goto n_40;
  l_40 :
  Cpop();
  n_40 :
  Return();
  k_40 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Case",Egetd(1,1)));
  Epopd(1,1);
  Return();
  h_26 :
  goto g_26;
  f_63 :
  Epushd(1,1);
  NotNULLd(0,11);
  Tset(Egetd(0,11));
  Rpush(z_40);
  g_63 :
  Cpush(b_41);
  Ccall(_stratego_u_28);
  goto a_41;
  b_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,7);
  NotNULLd(2,1);
  Tset(App2("Merge",App1("Accept",Egetd(0,7)),Egetd(2,1)));
  Epopd(2,1);
  OneNextSon();
  Rpush(d_41);
  goto g_63;
  d_41 :
  AllBuild();
  goto c_41;
  a_41 :
  Cpop();
  c_41 :
  Return();
  z_40 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Case",Egetd(1,1)));
  Epopd(1,1);
  Return();
  g_26 :
  goto f_26;
  e_63 :
  NotNULLd(0,11);
  NotNULLd(0,3);
  NotNULLd(0,7);
  NotNULLd(0,4);
  Tset(App3("MatchVars",Egetd(0,11),Egetd(0,3),App2("Merge",App1("Accept",Egetd(0,7)),Egetd(0,4))));
  Return();
  f_26 :
  goto e_26;
  d_63 :
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(0,11);
  Tset(App3("MatchVars",Egetd(0,7),Egetd(0,8),App2("Merge",Egetd(0,9),App1("Accept",Egetd(0,11)))));
  Return();
  e_26 :
  goto d_26;
  c_63 :
  NotNULLd(0,11);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,7);
  NotNULLd(0,2);
  Tset(App4("MatchFunA",Egetd(0,11),Egetd(0,3),Egetd(0,4),App2("Merge",App1("Accept",Egetd(0,7)),Egetd(0,2))));
  Return();
  d_26 :
  goto c_26;
  b_63 :
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(0,1);
  NotNULLd(0,11);
  Tset(App4("MatchFunA",Egetd(0,7),Egetd(0,8),Egetd(0,9),App2("Merge",Egetd(0,1),App1("Accept",Egetd(0,11)))));
  Return();
  c_26 :
  goto b_26;
  a_63 :
  NotNULLd(0,11);
  NotNULLd(0,7);
  NotNULLd(0,3);
  Tset(App2("Down",Egetd(0,11),App2("Merge",App1("Up",App1("Accept",Egetd(0,7))),Egetd(0,3))));
  Return();
  b_26 :
  goto a_26;
  z_62 :
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,11);
  Tset(App2("Down",Egetd(0,7),App2("Merge",Egetd(0,8),App1("Up",App1("Accept",Egetd(0,11))))));
  Return();
  a_26 :
  goto z_25;
  y_62 :
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App1("Up",App2("Merge",App1("Accept",Egetd(0,7)),Egetd(0,11))));
  Return();
  z_25 :
  goto y_25;
  x_62 :
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App1("Up",App2("Merge",Egetd(0,7),App1("Accept",Egetd(0,11)))));
  Return();
  y_25 :
  goto x_25;
  t_62 :
  Epushd(1,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(e_41);
  u_62 :
  Cpush(g_41);
  Ccall(_stratego_u_28);
  goto f_41;
  g_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,11);
  NotNULLd(2,1);
  Tset(App2("Merge",App1("Up",Egetd(0,11)),Egetd(2,1)));
  Epopd(2,1);
  OneNextSon();
  Rpush(i_41);
  goto u_62;
  i_41 :
  AllBuild();
  goto h_41;
  f_41 :
  Cpop();
  h_41 :
  Return();
  e_41 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Case",Egetd(1,1)));
  Epopd(1,1);
  Return();
  x_25 :
  goto w_25;
  p_62 :
  Epushd(1,1);
  NotNULLd(0,11);
  Tset(Egetd(0,11));
  Rpush(j_41);
  q_62 :
  Cpush(m_41);
  Ccall(_stratego_u_28);
  goto l_41;
  m_41 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,7);
  NotNULLd(2,1);
  Tset(App2("Merge",App1("Up",Egetd(0,7)),Egetd(2,1)));
  Epopd(2,1);
  OneNextSon();
  Rpush(o_41);
  goto q_62;
  o_41 :
  AllBuild();
  goto n_41;
  l_41 :
  Cpop();
  n_41 :
  Return();
  j_41 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Case",Egetd(1,1)));
  Epopd(1,1);
  Return();
  w_25 :
  goto u_25;
  o_62 :
  NotNULLd(0,11);
  NotNULLd(0,3);
  NotNULLd(0,7);
  NotNULLd(0,4);
  Tset(App3("MatchVars",Egetd(0,11),Egetd(0,3),App2("Merge",App1("Up",Egetd(0,7)),Egetd(0,4))));
  Return();
  u_25 :
  goto t_25;
  n_62 :
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(0,11);
  Tset(App3("MatchVars",Egetd(0,7),Egetd(0,8),App2("Merge",Egetd(0,9),App1("Up",Egetd(0,11)))));
  Return();
  t_25 :
  goto s_25;
  m_62 :
  NotNULLd(0,11);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,7);
  NotNULLd(0,2);
  Tset(App4("MatchFunA",Egetd(0,11),Egetd(0,3),Egetd(0,4),App2("Merge",App1("Up",Egetd(0,7)),Egetd(0,2))));
  Return();
  s_25 :
  goto r_25;
  l_62 :
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,9);
  NotNULLd(0,1);
  NotNULLd(0,11);
  Tset(App4("MatchFunA",Egetd(0,7),Egetd(0,8),Egetd(0,9),App2("Merge",Egetd(0,1),App1("Up",Egetd(0,11)))));
  Return();
  r_25 :
  goto q_25;
  k_62 :
  NotNULLd(0,11);
  NotNULLd(0,7);
  NotNULLd(0,3);
  Tset(App2("Down",Egetd(0,11),App2("Merge",App1("Up",App1("Up",Egetd(0,7))),Egetd(0,3))));
  Return();
  q_25 :
  goto p_25;
  j_62 :
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(0,11);
  Tset(App2("Down",Egetd(0,7),App2("Merge",Egetd(0,8),App1("Up",App1("Up",Egetd(0,11))))));
  Return();
  p_25 :
  goto o_25;
  i_62 :
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App1("Accept",App2("Choice",Egetd(0,7),Egetd(0,11))));
  Return();
  o_25 :
  goto n_25;
  h_62 :
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App1("Up",App2("Merge",Egetd(0,7),Egetd(0,11))));
  Return();
  n_25 :
  goto m_25;
  g_62 :
  Epushd(1,1);
  Move(0,7,0,11);
  Move(1,1,0,3);
  NotNULLd(0,7);
  NotNULLd(0,8);
  NotNULLd(1,1);
  Tset(App2("Down",Egetd(0,7),App2("Merge",Egetd(0,8),Egetd(1,1))));
  Epopd(1,1);
  Return();
  m_25 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_f_30)
  Epushd(0,5);
  MoveTop(0,1);
  goto h_65;
  h_65 :
  TestFunFC(x_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_65;
  i_65 :
  TestFunFC(x_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_65;
  j_65 :
  TestFunFC(l_1,&&fail,Egetd(0,5));
  Rpush(q_41);
  goto q_65;
  q_41 :
  goto p_41;
  q_65 :
  Move(0,2,0,4);
  Return();
  p_41 :
  Epopd(0,5);
ENDPROC
