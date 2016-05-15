#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,o_19);
VARDECL(AFun,n_19);
VARDECL(AFun,l_19);
VARDECL(AFun,h_19);
VARDECL(AFun,e_19);
VARDECL(AFun,c_19);
VARDECL(AFun,a_19);
VARDECL(AFun,w_18);
VARDECL(AFun,n_18);
VARDECL(AFun,l_18);
VARDECL(AFun,j_18);
VARDECL(AFun,h_18);
VARDECL(AFun,f_18);
VARDECL(AFun,n_16);
VARDECL(AFun,k_16);
VARDECL(AFun,i_16);
VARDECL(AFun,g_16);
VARDECL(AFun,e_16);
VARDECL(AFun,c_16);
VARDECL(AFun,a_16);
VARDECL(AFun,y_15);
VARDECL(AFun,v_15);
VARDECL(AFun,t_15);
VARDECL(AFun,r_15);
VARDECL(AFun,p_15);
VARDECL(AFun,m_11);
VARDECL(AFun,c_11);
VARDECL(AFun,n_10);
VARDECL(AFun,a_10);
VARDECL(AFun,o_9);
VARDECL(AFun,c_9);
VARDECL(AFun,v_8);
VARDECL(AFun,r_8);
VARDECL(AFun,x_0);
VARDECL(AFun,t_0);
VARDECL(AFun,q_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_q_4);
PROCDECL(_stratego_r_4);
PROCDECL(_stratego_s_4);
PROCDECL(_stratego_t_4);
PROCDECL(_stratego_u_4);
PROCDECL(_stratego_v_4);
PROCDECL(_stratego_w_4);
PROCDECL(_stratego_x_4);
PROCDECL(_stratego_y_4);
PROCDECL(_stratego_z_4);
PROCDECL(_stratego_a_5);
PROCDECL(_stratego_b_5);
PROCDECL(_stratego_c_5);
PROCDECL(_stratego_d_5);
PROCDECL(_stratego_e_5);
PROCDECL(_stratego_f_5);
PROCDECL(_stratego_g_5);
PROCDECL(_stratego_h_5);
PROCDECL(_stratego_i_5);
PROCDECL(_stratego_j_5);

PROC(_stratego_init_afuns)
  MOVE(o_19,ATmakeAFun("Comment",3,0));
  MOVE(n_19,ATmakeAFun("FunDecl",3,0));
  MOVE(l_19,ATmakeAFun("VarDecl",1,0));
  MOVE(h_19,ATmakeAFun("Block",2,0));
  MOVE(e_19,ATmakeAFun("If",3,0));
  MOVE(c_19,ATmakeAFun("While",2,0));
  MOVE(a_19,ATmakeAFun("Exp",1,0));
  MOVE(w_18,ATmakeAFun("AsPow",2,0));
  MOVE(n_18,ATmakeAFun("AsMin",2,0));
  MOVE(l_18,ATmakeAFun("AsMul",2,0));
  MOVE(j_18,ATmakeAFun("AsAdd",2,0));
  MOVE(h_18,ATmakeAFun("Assign",2,0));
  MOVE(f_18,ATmakeAFun("Or",2,0));
  MOVE(n_16,ATmakeAFun("And",2,0));
  MOVE(k_16,ATmakeAFun("Neq",2,0));
  MOVE(i_16,ATmakeAFun("Eq",2,0));
  MOVE(g_16,ATmakeAFun("Sub",2,0));
  MOVE(e_16,ATmakeAFun("Add",2,0));
  MOVE(c_16,ATmakeAFun("Mul",2,0));
  MOVE(a_16,ATmakeAFun("Pow",2,0));
  MOVE(y_15,ATmakeAFun("UMin",1,0));
  MOVE(v_15,ATmakeAFun("Seq",3,0));
  MOVE(t_15,ATmakeAFun("Call",2,0));
  MOVE(r_15,ATmakeAFun("Int",1,0));
  MOVE(p_15,ATmakeAFun("Var",1,0));
  MOVE(m_11,ATmakeAFun("Runtime",1,0));
  MOVE(c_11,ATmakeAFun("Silent",0,0));
  MOVE(n_10,ATmakeAFun("Binary",0,0));
  MOVE(a_10,ATmakeAFun("Output",1,0));
  MOVE(o_9,ATmakeAFun("Input",1,0));
  MOVE(c_9,ATmakeAFun("Program",1,0));
  MOVE(v_8,ATmakeAFun("Help",0,0));
  MOVE(r_8,ATmakeAFun("Undefined",1,0));
  MOVE(x_0,ATmakeAFun("Nil",0,0));
  MOVE(t_0,ATmakeAFun("TNil",0,0));
  MOVE(q_0,ATmakeAFun("TCons",2,0));
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
  Rpush(d_0);
  f_4 :
  Cpush(f_0);
  Cpush(h_0);
  Ccall(_stratego_q_4);
  goto g_0;
  h_0 :
  Ccall(_stratego_r_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_0);
  goto f_4;
  j_0 :
  AllBuild();
  goto i_0;
  g_0 :
  Cpop();
  i_0 :
  goto e_0;
  f_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_0);
  goto b_0;
  m_0 :
  goto l_0;
  b_0 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  l_0 :
  Epopd(0,3);
  goto k_0;
  e_0 :
  Cpop();
  k_0 :
  Return();
  d_0 :
  AllBuild();
  Cpush(o_0);
  Ccall(_stratego_s_4);
  goto n_0;
  o_0 :
  Ccontinue(p_0);
  Epushd(0,6);
  Ccall(_stratego_x_4);
  Tdupl();
  Ccall(_stratego_z_4);
  Tpop();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_5);
  OneNextSon();
  Ccall(_stratego_f_5);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_z_4);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto w_2;
  w_2 :
  TestFunFC(q_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_2;
  x_2 :
  TestFunFC(q_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_2;
  y_2 :
  TestFunFC(t_0,&&fail,Egetd(0,6));
  Rpush(s_0);
  goto u_2;
  s_0 :
  goto r_0;
  u_2 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  r_0 :
  Ccall(_stratego_a_5);
  Ccall(_stratego_d_5);
  Epopd(0,6);
  goto n_0;
  p_0 :
  Ccall(_stratego_e_5);
  goto u_0;
  n_0 :
  Cpop();
  u_0 :
ENDPROC

PROC(_stratego_q_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_4;
  h_4 :
  TestFunFC(x_0,&&fail,Egetd(0,1));
  Rpush(w_0);
  goto g_4;
  w_0 :
  goto v_0;
  g_4 :
  Return();
  v_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto v_7;
  v_7 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto w_7;
  w_7 :
  TestFunFC(a_0,&&o_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(q_1);
  Rpush(r_1);
  goto j_4;
  r_1 :
  goto p_1;
  q_1 :
  Ccontinue(s_1);
  Rpush(t_1);
  goto k_4;
  t_1 :
  goto p_1;
  s_1 :
  Ccontinue(u_1);
  Rpush(v_1);
  goto k_5;
  v_1 :
  goto p_1;
  u_1 :
  Ccontinue(w_1);
  Rpush(x_1);
  goto l_5;
  x_1 :
  goto p_1;
  w_1 :
  Ccontinue(y_1);
  Rpush(z_1);
  goto m_5;
  z_1 :
  goto p_1;
  y_1 :
  Ccontinue(a_2);
  Rpush(b_2);
  goto n_5;
  b_2 :
  goto p_1;
  a_2 :
  Ccontinue(c_2);
  Rpush(d_2);
  goto o_5;
  d_2 :
  goto p_1;
  c_2 :
  Ccontinue(e_2);
  Rpush(f_2);
  goto p_5;
  f_2 :
  goto p_1;
  e_2 :
  Ccontinue(g_2);
  Rpush(h_2);
  goto q_5;
  h_2 :
  goto p_1;
  g_2 :
  Ccontinue(i_2);
  Rpush(j_2);
  goto r_5;
  j_2 :
  goto p_1;
  i_2 :
  Ccontinue(k_2);
  Rpush(l_2);
  goto s_5;
  l_2 :
  goto p_1;
  k_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto t_5;
  n_2 :
  goto p_1;
  m_2 :
  Ccontinue(o_2);
  Rpush(p_2);
  goto u_5;
  p_2 :
  goto p_1;
  o_2 :
  Ccontinue(q_2);
  Rpush(r_2);
  goto v_5;
  r_2 :
  goto p_1;
  q_2 :
  Rpush(t_2);
  goto w_5;
  t_2 :
  goto s_2;
  p_1 :
  Cpop();
  s_2 :
  goto n_1;
  o_1 :
  Cpush(a_3);
  Rpush(c_3);
  goto j_4;
  c_3 :
  goto v_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto k_4;
  e_3 :
  goto v_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto k_5;
  i_3 :
  goto v_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto l_5;
  n_3 :
  goto v_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto m_5;
  p_3 :
  goto v_2;
  o_3 :
  Ccontinue(r_3);
  Rpush(s_3);
  goto s_5;
  s_3 :
  goto v_2;
  r_3 :
  Ccontinue(t_3);
  Rpush(v_3);
  goto t_5;
  v_3 :
  goto v_2;
  t_3 :
  Ccontinue(y_3);
  Rpush(z_3);
  goto u_5;
  z_3 :
  goto v_2;
  y_3 :
  Ccontinue(a_4);
  Rpush(b_4);
  goto v_5;
  b_4 :
  goto v_2;
  a_4 :
  Rpush(d_4);
  goto w_5;
  d_4 :
  goto c_4;
  v_2 :
  Cpop();
  c_4 :
  goto n_1;
  n_1 :
  goto m_1;
  w_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_7;
  t_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(l_4);
  goto s_7;
  l_4 :
  goto e_4;
  s_7 :
  Return();
  e_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  m_1 :
  goto l_1;
  v_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_7;
  q_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(n_4);
  goto p_7;
  n_4 :
  goto m_4;
  p_7 :
  Return();
  m_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  u_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_7;
  n_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(p_4);
  goto m_7;
  p_4 :
  goto o_4;
  m_7 :
  Return();
  o_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  t_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_7;
  k_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(c_6);
  goto j_7;
  c_6 :
  goto z_5;
  j_7 :
  Return();
  z_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  s_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_7;
  h_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(i_6);
  goto g_7;
  i_6 :
  goto f_6;
  g_7 :
  Return();
  f_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  r_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_7;
  d_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(o_6);
  goto c_7;
  o_6 :
  goto l_6;
  c_7 :
  Return();
  l_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  h_1 :
  goto g_1;
  q_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_6;
  z_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(s_6);
  goto y_6;
  s_6 :
  goto p_6;
  y_6 :
  Return();
  p_6 :
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
  p_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_6;
  v_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(w_6);
  goto u_6;
  w_6 :
  goto t_6;
  u_6 :
  Return();
  t_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_1 :
  goto e_1;
  o_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_6;
  r_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(a_7);
  goto q_6;
  a_7 :
  goto x_6;
  q_6 :
  Return();
  x_6 :
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
  n_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_6;
  n_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(e_7);
  goto m_6;
  e_7 :
  goto b_7;
  m_6 :
  Return();
  b_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  d_1 :
  goto c_1;
  m_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_6;
  k_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(i_7);
  goto j_6;
  i_7 :
  goto f_7;
  j_6 :
  Return();
  f_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  c_1 :
  goto b_1;
  l_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_6;
  h_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(o_7);
  goto g_6;
  o_7 :
  goto l_7;
  g_6 :
  Return();
  l_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  k_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_6;
  e_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(u_7);
  goto d_6;
  u_7 :
  goto r_7;
  d_6 :
  Return();
  r_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  k_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_6;
  b_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(d_8);
  goto a_6;
  d_8 :
  goto c_8;
  a_6 :
  Return();
  c_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  j_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_5;
  y_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(g_8);
  goto x_5;
  g_8 :
  goto f_8;
  x_5 :
  Return();
  f_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_s_4)
  Tdupl();
  h_8 :
  TestFunTop(a_0);
  Cpush(i_8);
  Arg(0);
  Cpush(m_8);
  Ccall(_stratego_t_4);
  goto l_8;
  m_8 :
  Epushd(0,2);
  MoveTop(0,1);
  goto p_11;
  p_11 :
  TestFunFC(r_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(q_8);
  goto o_11;
  q_8 :
  goto p_8;
  o_11 :
  Return();
  p_8 :
  Epopd(0,2);
  goto n_8;
  l_8 :
  Cpop();
  n_8 :
  Tpop();
  Cpop();
  goto k_8;
  i_8 :
  Arg(1);
  Tdrop();
  goto h_8;
  k_8 :
  Tpop();
  Ccall(_stratego_u_4);
ENDPROC

PROC(_stratego_t_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_11;
  u_11 :
  TestFunFC(v_8,&&fail,Egetd(0,1));
  Rpush(u_8);
  goto t_11;
  u_8 :
  goto s_8;
  t_11 :
  Return();
  s_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_4)
  Epushd(0,1);
  Tdupl();
  Rpush(w_8);
  e_12 :
  Cpush(z_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_11;
  x_11 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_11;
  y_11 :
  TestFunFC(c_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_9);
  goto w_11;
  b_9 :
  goto a_9;
  w_11 :
  Move(0,1,1,3);
  Return();
  a_9 :
  Epopd(1,4);
  goto x_8;
  z_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_9);
  goto e_12;
  f_9 :
  AllBuild();
  goto d_9;
  x_8 :
  Cpop();
  d_9 :
  Return();
  w_8 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_v_4);
  Tset(MakeInt(1));
  Ccall(_stratego_w_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_w_4)
  _ST_exit();
ENDPROC

PROC(_stratego_x_4)
  Epushd(0,3);
  Tdupl();
  Cpush(h_9);
  Rpush(i_9);
  y_12 :
  Cpush(k_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_12;
  g_12 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_12;
  h_12 :
  TestFunFC(o_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_9);
  goto f_12;
  n_9 :
  goto l_9;
  f_12 :
  Move(0,1,1,3);
  Return();
  l_9 :
  Epopd(1,4);
  goto j_9;
  k_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_9);
  goto y_12;
  q_9 :
  AllBuild();
  goto p_9;
  j_9 :
  Cpop();
  p_9 :
  Return();
  i_9 :
  goto g_9;
  h_9 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto r_9;
  g_9 :
  Cpop();
  r_9 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_y_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_y_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_z_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,1);
  Tdupl();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Cpush(t_9);
  Rpush(v_9);
  y_13 :
  Cpush(x_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_13;
  a_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_13;
  b_13 :
  TestFunFC(a_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_9);
  goto z_12;
  z_9 :
  goto y_9;
  z_12 :
  Move(0,1,1,3);
  Return();
  y_9 :
  Epopd(1,4);
  goto w_9;
  x_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_10);
  goto y_13;
  d_10 :
  AllBuild();
  goto b_10;
  w_9 :
  Cpop();
  b_10 :
  Return();
  v_9 :
  goto s_9;
  t_9 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto e_10;
  s_9 :
  Cpop();
  e_10 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_5);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_f_5);
  AllBuild();
  AllBuild();
  Cpush(g_10);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(h_10);
  z_13 :
  Cpush(j_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto h_13;
  h_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_13;
  i_13 :
  TestFunFC(n_10,&&fail,Egetd(1,2));
  Rpush(m_10);
  goto g_13;
  m_10 :
  goto l_10;
  g_13 :
  Return();
  l_10 :
  Epopd(1,3);
  goto i_10;
  j_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_10);
  goto z_13;
  p_10 :
  AllBuild();
  goto o_10;
  i_10 :
  Cpop();
  o_10 :
  Return();
  h_10 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_5);
  OneNextSon();
  Ccall(_stratego_f_5);
  AllBuild();
  AllBuild();
  goto f_10;
  g_10 :
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_5);
  OneNextSon();
  Ccall(_stratego_f_5);
  AllBuild();
  AllBuild();
  goto q_10;
  f_10 :
  Cpop();
  q_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_5)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_c_5)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,2);
  Tdupl();
  Cpush(t_10);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Cpush(u_10);
  Tdupl();
  Rpush(v_10);
  w_16 :
  Cpush(y_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto b_14;
  b_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_14;
  c_14 :
  TestFunFC(c_11,&&fail,Egetd(1,2));
  Rpush(a_11);
  goto a_14;
  a_11 :
  goto z_10;
  a_14 :
  Return();
  z_10 :
  Epopd(1,3);
  goto x_10;
  y_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_11);
  goto w_16;
  e_11 :
  AllBuild();
  goto d_11;
  x_10 :
  Cpop();
  d_11 :
  Return();
  v_10 :
  Cpop();
  Crestore();
  Cjump();
  u_10 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_5);
  AllBuild();
  AllBuild();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(f_11);
  x_16 :
  Cpush(i_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_14;
  e_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_14;
  f_14 :
  TestFunFC(m_11,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(k_11);
  goto d_14;
  k_11 :
  goto j_11;
  d_14 :
  Move(0,2,1,3);
  Return();
  j_11 :
  Epopd(1,4);
  goto h_11;
  i_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_12);
  goto x_16;
  i_12 :
  AllBuild();
  goto n_11;
  h_11 :
  Cpop();
  n_11 :
  Return();
  f_11 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_5);
  AllBuild();
  AllBuild();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(j_12);
  y_16 :
  Cpush(l_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_14;
  h_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_14;
  i_14 :
  TestFunFC(c_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_12);
  goto g_14;
  t_12 :
  goto r_12;
  g_14 :
  Move(0,1,1,3);
  Return();
  r_12 :
  Epopd(1,4);
  goto k_12;
  l_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_12);
  goto y_16;
  v_12 :
  AllBuild();
  goto u_12;
  k_12 :
  Cpop();
  u_12 :
  Return();
  j_12 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_5);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_v_4);
  goto s_10;
  t_10 :
  goto x_12;
  s_10 :
  Cpop();
  x_12 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_w_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_e_5)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_v_4);
  Tset(MakeInt(1));
  Ccall(_stratego_w_4);
ENDPROC

PROC(_stratego_f_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_17;
  a_17 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  Rpush(d_13);
  goto z_16;
  d_13 :
  goto c_13;
  z_16 :
  Return();
  c_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_5)
  Rpush(e_13);
  c_17 :
  Cpush(o_13);
  f_13 :
  Ccall(_stratego_h_5);
  Tduplinv();
  goto f_13;
  o_13 :
  AllInit();
  q_13 :
  AllNextSon(&&r_13);
  Rpush(s_13);
  goto c_17;
  s_13 :
  goto q_13;
  r_13 :
  AllBuild();
  Return();
  e_13 :
ENDPROC

PROC(_stratego_h_5)
  Epushd(0,6);
  MoveTop(0,3);
  goto o_18;
  o_18 :
  TestFunFC(p_15,&&o_15,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(n_15);
  goto e_17;
  o_15 :
  TestFunFC(r_15,&&q_15,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(n_15);
  goto f_17;
  q_15 :
  TestFunFC(t_15,&&s_15,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto g_17;
  s_15 :
  TestFunFC(v_15,&&u_15,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  goto p_18;
  p_18 :
  TestFunFC(x_0,&&w_15,Egetd(0,4));
  Rpush(n_15);
  goto h_17;
  w_15 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(n_15);
  goto i_17;
  u_15 :
  TestFunFC(y_15,&&x_15,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(n_15);
  goto j_17;
  x_15 :
  TestFunFC(a_16,&&z_15,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto k_17;
  z_15 :
  TestFunFC(c_16,&&b_16,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto l_17;
  b_16 :
  TestFunFC(e_16,&&d_16,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto m_17;
  d_16 :
  TestFunFC(g_16,&&f_16,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto n_17;
  f_16 :
  TestFunFC(i_16,&&h_16,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto o_17;
  h_16 :
  TestFunFC(k_16,&&j_16,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto p_17;
  j_16 :
  TestFunFC(n_16,&&m_16,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto q_17;
  m_16 :
  TestFunFC(f_18,&&o_16,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto r_17;
  o_16 :
  TestFunFC(h_18,&&g_18,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto s_17;
  g_18 :
  TestFunFC(j_18,&&i_18,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto t_17;
  i_18 :
  TestFunFC(l_18,&&k_18,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto u_17;
  k_18 :
  TestFunFC(n_18,&&m_18,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto v_17;
  m_18 :
  TestFunFC(w_18,&&v_18,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto w_17;
  v_18 :
  TestFunFC(a_19,&&z_18,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(n_15);
  goto x_17;
  z_18 :
  TestFunFC(c_19,&&b_19,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(n_15);
  goto y_17;
  b_19 :
  TestFunFC(e_19,&&d_19,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(n_15);
  goto z_17;
  d_19 :
  TestFunFC(h_19,&&f_19,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_18;
  q_18 :
  TestFunFC(x_0,&&i_19,Egetd(0,4));
  Rpush(n_15);
  goto a_18;
  i_19 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(n_15);
  goto b_18;
  f_19 :
  TestFunFC(l_19,&&j_19,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(n_15);
  goto c_18;
  j_19 :
  TestFunFC(n_19,&&m_19,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(n_15);
  goto d_18;
  m_19 :
  TestFunFC(o_19,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(n_15);
  goto e_18;
  n_15 :
  goto m_15;
  e_18 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("V",App2("Cons",App2("SOpt",App0("VS"),MakeInt(0)),App0("Nil")),App2("Cons",App2("H",App0("Nil"),App2("Cons",App1("S",ATmakeString("/*")),App2("Cons",App1("S",Egetd(0,4)),App2("Cons",Egetd(0,5),App2("Cons",App1("S",ATmakeString("*/")),App0("Nil")))))),App2("Cons",Egetd(0,6),App0("Nil")))));
  Return();
  m_15 :
  goto l_15;
  d_18 :
  Epushd(1,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(q_19);
  u_21 :
  Cpush(t_19);
  Ccall(_stratego_q_4);
  goto s_19;
  t_19 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App1("S",Egetd(2,1)));
  Epopd(2,1);
  OneNextSon();
  Rpush(v_19);
  goto u_21;
  v_19 :
  AllBuild();
  goto u_19;
  s_19 :
  Cpop();
  u_19 :
  Return();
  q_19 :
  Ccall(_stratego_j_5);
  MoveTop(1,1);
  NotNULLd(0,4);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("V",App2("Cons",App2("SOpt",App0("VS"),MakeInt(0)),App0("Nil")),App2("Cons",App2("H",App0("Nil"),App2("Cons",App1("S",ATmakeString("fun")),App2("Cons",App1("S",Egetd(0,4)),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),Egetd(1,1)),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))),App0("Nil"))))),App2("Cons",Egetd(0,6),App0("Nil")))));
  Epopd(1,1);
  Return();
  l_15 :
  goto k_15;
  c_18 :
  NotNULLd(0,4);
  Tset(App2("H",App0("Nil"),App2("Cons",App1("S",ATmakeString("var")),App2("Cons",App1("S",Egetd(0,4)),App0("Nil")))));
  Return();
  k_15 :
  goto j_15;
  b_18 :
  Epushd(1,2);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_i_5);
  MoveTop(1,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Ccall(_stratego_i_5);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("V",App2("Cons",App2("SOpt",App0("VS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("{")),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("  ")),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App2("V",App2("Cons",App2("SOpt",App0("VS"),MakeInt(0)),App0("Nil")),Egetd(1,1)),App2("Cons",App1("S",ATmakeString(";")),App0("Nil")))),App0("Nil")))),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("  ")),App2("Cons",App2("V",App2("Cons",App2("SOpt",App0("VS"),MakeInt(0)),App0("Nil")),Egetd(1,2)),App0("Nil")))),App2("Cons",App1("S",ATmakeString("}")),App0("Nil")))))));
  Epopd(1,2);
  Return();
  j_15 :
  goto i_15;
  a_18 :
  Epushd(1,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Ccall(_stratego_i_5);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("V",App2("Cons",App2("SOpt",App0("VS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("{")),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("  ")),App2("Cons",App2("V",App2("Cons",App2("SOpt",App0("VS"),MakeInt(0)),App0("Nil")),Egetd(1,1)),App0("Nil")))),App2("Cons",App1("S",ATmakeString("}")),App0("Nil"))))));
  Epopd(1,1);
  Return();
  i_15 :
  goto h_15;
  z_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("V",App2("Cons",App2("SOpt",App0("VS"),MakeInt(0)),App0("Nil")),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("if")),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))),App0("Nil")))),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("  ")),App2("Cons",Egetd(0,5),App0("Nil")))),App2("Cons",App1("S",ATmakeString("else")),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("  ")),App2("Cons",Egetd(0,6),App0("Nil")))),App0("Nil")))))));
  Return();
  h_15 :
  goto g_15;
  y_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("V",App2("Cons",App2("SOpt",App0("VS"),MakeInt(0)),App0("Nil")),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("while")),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))),App0("Nil")))),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("  ")),App2("Cons",Egetd(0,5),App0("Nil")))),App0("Nil")))));
  Return();
  g_15 :
  goto f_15;
  x_17 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  f_15 :
  goto e_15;
  w_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString("^=")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  e_15 :
  goto d_15;
  v_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString("-=")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  d_15 :
  goto c_15;
  u_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString("*=")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  c_15 :
  goto b_15;
  t_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString("+=")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  b_15 :
  goto a_15;
  s_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString(":=")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  a_15 :
  goto z_14;
  r_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString("|")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  z_14 :
  goto y_14;
  q_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString("&")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  y_14 :
  goto x_14;
  p_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString("<>")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  x_14 :
  goto w_14;
  o_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString("==")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  w_14 :
  goto v_14;
  n_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString("-")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  v_14 :
  goto u_14;
  m_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString("+")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  u_14 :
  goto t_14;
  l_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString("*")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  t_14 :
  goto s_14;
  k_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",Egetd(0,4),App2("Cons",App1("S",ATmakeString("-")),App2("Cons",Egetd(0,5),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Return();
  s_14 :
  goto r_14;
  j_17 :
  NotNULLd(0,4);
  Tset(App2("H",App0("Nil"),App2("Cons",App1("S",ATmakeString("-")),App2("Cons",Egetd(0,4),App0("Nil")))));
  Return();
  r_14 :
  goto q_14;
  i_17 :
  Epushd(1,2);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_i_5);
  MoveTop(1,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Ccall(_stratego_i_5);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(0,6);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",App2("H",App0("Nil"),Egetd(1,1)),App2("Cons",App1("S",ATmakeString(";")),App2("Cons",App2("H",App0("Nil"),Egetd(1,2)),App2("Cons",App1("S",ATmakeString(";")),App2("Cons",Egetd(0,6),App0("Nil"))))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Epopd(1,2);
  Return();
  q_14 :
  goto p_14;
  h_17 :
  Epushd(1,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Ccall(_stratego_i_5);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),App2("Cons",App2("H",App0("Nil"),Egetd(1,1)),App2("Cons",App1("S",ATmakeString(";")),App2("Cons",Egetd(0,6),App0("Nil"))))),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))));
  Epopd(1,1);
  Return();
  p_14 :
  goto o_14;
  g_17 :
  Epushd(1,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Ccall(_stratego_j_5);
  MoveTop(1,1);
  NotNULLd(0,4);
  NotNULLd(1,1);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",Egetd(0,4)),App2("Cons",App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",App1("S",ATmakeString("(")),App2("Cons",App2("H",App0("Nil"),Egetd(1,1)),App2("Cons",App1("S",ATmakeString(")")),App0("Nil"))))),App0("Nil")))));
  Epopd(1,1);
  Return();
  o_14 :
  goto u_13;
  f_17 :
  NotNULLd(0,4);
  Tset(App1("S",Egetd(0,4)));
  Return();
  u_13 :
  goto t_13;
  e_17 :
  NotNULLd(0,4);
  Tset(App1("S",Egetd(0,4)));
  Return();
  t_13 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_i_5)
  Rpush(w_19);
  e_22 :
  Cpush(y_19);
  Ccall(_stratego_q_4);
  goto x_19;
  y_19 :
  Ccontinue(z_19);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  goto x_19;
  z_19 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  Tset(App1("S",ATmakeString(";")));
  NotNULLd(0,1);
  Tset(App2("H",App2("Cons",App2("SOpt",App0("HS"),MakeInt(0)),App0("Nil")),App2("Cons",Egetd(0,1),App2("Cons",App1("S",ATmakeString(";")),App0("Nil")))));
  Epopd(0,1);
  OneNextSon();
  Rpush(b_20);
  goto e_22;
  b_20 :
  AllBuild();
  goto a_20;
  x_19 :
  Cpop();
  a_20 :
  Return();
  w_19 :
ENDPROC

PROC(_stratego_j_5)
  Rpush(c_20);
  s_22 :
  Cpush(e_20);
  Ccall(_stratego_q_4);
  goto d_20;
  e_20 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_20);
  goto s_22;
  g_20 :
  AllBuild();
  goto f_20;
  d_20 :
  Cpop();
  f_20 :
  Return();
  c_20 :
  Cpush(i_20);
  Ccall(_stratego_q_4);
  goto h_20;
  i_20 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_20);
  t_22 :
  Cpush(m_20);
  Ccall(_stratego_q_4);
  goto l_20;
  m_20 :
  Epushd(0,3);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_20);
  goto t_22;
  p_20 :
  AllBuild();
  MoveTop(0,1);
  goto i_22;
  i_22 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_20);
  goto f_22;
  q_20 :
  goto o_20;
  f_22 :
  Tset(App1("S",ATmakeString(",")));
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("S",ATmakeString(",")),App2("Cons",Egetd(0,2),Egetd(0,3))));
  Return();
  o_20 :
  Epopd(0,3);
  goto n_20;
  l_20 :
  Cpop();
  n_20 :
  Return();
  k_20 :
  AllBuild();
  goto j_20;
  h_20 :
  Cpop();
  j_20 :
ENDPROC

DOIT

