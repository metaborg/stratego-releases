#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,h_20);
VARDECL(AFun,r_19);
VARDECL(AFun,l_19);
VARDECL(AFun,i_19);
VARDECL(AFun,a_16);
VARDECL(AFun,o_15);
VARDECL(AFun,z_14);
VARDECL(AFun,u_14);
VARDECL(AFun,j_14);
VARDECL(AFun,k_13);
VARDECL(AFun,d_13);
VARDECL(AFun,i_12);
VARDECL(AFun,n_11);
VARDECL(AFun,b_10);
VARDECL(AFun,w_8);
VARDECL(AFun,s_8);
VARDECL(AFun,f_8);
VARDECL(AFun,d_8);
VARDECL(AFun,n_7);
VARDECL(AFun,w_6);
VARDECL(AFun,b_6);
VARDECL(AFun,y_5);
VARDECL(AFun,p_5);
VARDECL(AFun,m_4);
VARDECL(AFun,j_4);
VARDECL(AFun,t_3);
VARDECL(AFun,r_3);
VARDECL(AFun,o_3);
VARDECL(AFun,l_3);
VARDECL(AFun,g_3);
VARDECL(AFun,d_3);
VARDECL(AFun,v_2);
VARDECL(AFun,s_2);
VARDECL(AFun,p_2);
VARDECL(AFun,n_2);
VARDECL(AFun,m_2);
VARDECL(AFun,i_2);
VARDECL(AFun,e_2);
VARDECL(AFun,a_2);
VARDECL(AFun,x_1);
VARDECL(AFun,u_1);
VARDECL(AFun,o_1);
VARDECL(AFun,l_1);
VARDECL(AFun,i_1);
VARDECL(AFun,g_1);
VARDECL(AFun,f_1);
VARDECL(AFun,e_1);
VARDECL(AFun,b_1);
VARDECL(AFun,x_0);
VARDECL(AFun,s_0);
VARDECL(AFun,q_0);
VARDECL(AFun,o_0);
VARDECL(AFun,m_0);
VARDECL(AFun,k_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_o_4);
PROCDECL(_stratego_p_4);
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
PROCDECL(_stratego_k_5);
PROCDECL(_stratego_l_5);
PROCDECL(_stratego_m_5);
PROCDECL(_stratego_n_5);
PROCDECL(_stratego_o_5);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(h_20,ATmakeAFun("Statistics",0,0));
  MOVE(r_19,ATmakeAFun("DeclVersion",1,0));
  MOVE(l_19,ATmakeAFun("Version",0,0));
  MOVE(i_19,ATmakeAFun("Verbose",0,0));
  MOVE(a_16,ATmakeAFun("Undefined",1,0));
  MOVE(o_15,ATmakeAFun("Help",0,0));
  MOVE(z_14,ATmakeAFun("stdin",0,0));
  MOVE(u_14,ATmakeAFun("Input",1,0));
  MOVE(j_14,ATmakeAFun("Binary",0,0));
  MOVE(k_13,ATmakeAFun("stdout",0,0));
  MOVE(d_13,ATmakeAFun("Output",1,0));
  MOVE(i_12,ATmakeAFun("Program",1,0));
  MOVE(n_11,ATmakeAFun("Runtime",1,0));
  MOVE(b_10,ATmakeAFun("Silent",0,0));
  MOVE(w_8,ATmakeAFun("DontInline",0,0));
  MOVE(s_8,ATmakeAFun("Assign",1,0));
  MOVE(f_8,ATmakeAFun("Assign",2,0));
  MOVE(d_8,ATmakeAFun("Continue",1,0));
  MOVE(n_7,ATmakeAFun("Alt",3,0));
  MOVE(w_6,ATmakeAFun("Case",4,0));
  MOVE(b_6,ATmakeAFun("SDef",4,0));
  MOVE(y_5,ATmakeAFun("SDef",3,0));
  MOVE(p_5,ATmakeAFun("Let",2,0));
  MOVE(m_4,ATmakeAFun("Prim",1,0));
  MOVE(j_4,ATmakeAFun("Where",1,0));
  MOVE(t_3,ATmakeAFun("Scope",2,0));
  MOVE(r_3,ATmakeAFun("Build",1,0));
  MOVE(o_3,ATmakeAFun("Thread",1,0));
  MOVE(l_3,ATmakeAFun("All",1,0));
  MOVE(g_3,ATmakeAFun("Some",1,0));
  MOVE(d_3,ATmakeAFun("One",1,0));
  MOVE(v_2,ATmakeAFun("Cong",2,0));
  MOVE(s_2,ATmakeAFun("Path",2,0));
  MOVE(p_2,ATmakeAFun("Rec",2,0));
  MOVE(n_2,ATmakeAFun("SVar",1,0));
  MOVE(m_2,ATmakeAFun("Call",2,0));
  MOVE(i_2,ATmakeAFun("LChoice",2,0));
  MOVE(e_2,ATmakeAFun("Choice",2,0));
  MOVE(a_2,ATmakeAFun("Seq",2,0));
  MOVE(x_1,ATmakeAFun("Test",1,0));
  MOVE(u_1,ATmakeAFun("Not",1,0));
  MOVE(o_1,ATmakeAFun("Id",0,0));
  MOVE(l_1,ATmakeAFun("Fail",0,0));
  MOVE(i_1,ATmakeAFun("TNil",0,0));
  MOVE(g_1,ATmakeAFun("Nil",0,0));
  MOVE(f_1,ATmakeAFun("stderr",0,0));
  MOVE(e_1,ATmakeAFun("TCons",2,0));
  MOVE(b_1,ATmakeAFun("BuildDefault",1,0));
  MOVE(x_0,ATmakeAFun("Cons",2,0));
  MOVE(s_0,ATmakeAFun("Op",2,0));
  MOVE(q_0,ATmakeAFun("Str",1,0));
  MOVE(o_0,ATmakeAFun("Real",1,0));
  MOVE(m_0,ATmakeAFun("Int",1,0));
  MOVE(k_0,ATmakeAFun("Var",1,0));
  MOVE(f_0,ATmakeAFun("Wld",0,0));
ENDPROC

PROC(_stratego_o_4)
  _ST_is_real();
ENDPROC

PROC(_stratego_p_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_0;
  b_0 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  Rpush(d_0);
  goto e_0;
  d_0 :
  goto a_0;
  e_0 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_4)
  Rpush(g_0);
  v_5 :
  Cpush(i_0);
  Ccall(_stratego_p_4);
  goto h_0;
  i_0 :
  Ccontinue(j_0);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  goto h_0;
  j_0 :
  Ccontinue(l_0);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  goto h_0;
  l_0 :
  Ccontinue(n_0);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_4);
  AllBuild();
  goto h_0;
  n_0 :
  Ccontinue(p_0);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  goto h_0;
  p_0 :
  Ccontinue(r_0);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Rpush(t_0);
  w_5 :
  Cpush(v_0);
  Ccall(_stratego_o_5);
  goto u_0;
  v_0 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Rpush(y_0);
  goto v_5;
  y_0 :
  OneNextSon();
  Rpush(z_0);
  goto w_5;
  z_0 :
  AllBuild();
  goto w_0;
  u_0 :
  Cpop();
  w_0 :
  Return();
  t_0 :
  AllBuild();
  goto h_0;
  r_0 :
  Ccontinue(a_1);
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Rpush(c_1);
  goto v_5;
  c_1 :
  AllBuild();
  goto h_0;
  a_1 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(x_0,ATmakeString("Not a term-expression: "),(ATerm)ATmakeAppl2(x_0,Egetd(0,1),(ATerm)ATmakeAppl0(g_1))),(ATerm)ATmakeAppl0(i_1))));
  Ccall(_stratego_j_5);
  Epopd(0,1);
  Tpop();
  goto d_1;
  h_0 :
  Cpop();
  d_1 :
  Return();
  g_0 :
ENDPROC

PROC(_stratego_r_4)
  _ST_is_int();
ENDPROC

PROC(_stratego_s_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_6;
  d_6 :
  TestFunFC(l_1,&&fail,Egetd(0,1));
  Rpush(k_1);
  goto f_6;
  k_1 :
  goto j_1;
  f_6 :
  Return();
  j_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_6;
  h_6 :
  TestFunFC(o_1,&&fail,Egetd(0,1));
  Rpush(n_1);
  goto j_6;
  n_1 :
  goto m_1;
  j_6 :
  Return();
  m_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_4)
  Rpush(p_1);
  r_7 :
  Cpush(r_1);
  Ccall(_stratego_t_4);
  goto q_1;
  r_1 :
  Ccontinue(s_1);
  Ccall(_stratego_s_4);
  goto q_1;
  s_1 :
  Ccontinue(t_1);
  TestFunTop(u_1);
  TravInit();
  OneNextSon();
  Rpush(v_1);
  goto r_7;
  v_1 :
  AllBuild();
  goto q_1;
  t_1 :
  Ccontinue(w_1);
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  Rpush(y_1);
  goto r_7;
  y_1 :
  AllBuild();
  goto q_1;
  w_1 :
  Ccontinue(z_1);
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Rpush(b_2);
  goto r_7;
  b_2 :
  OneNextSon();
  Rpush(c_2);
  goto r_7;
  c_2 :
  AllBuild();
  goto q_1;
  z_1 :
  Ccontinue(d_2);
  TestFunTop(e_2);
  TravInit();
  OneNextSon();
  Rpush(f_2);
  goto r_7;
  f_2 :
  OneNextSon();
  Rpush(g_2);
  goto r_7;
  g_2 :
  AllBuild();
  goto q_1;
  d_2 :
  Ccontinue(h_2);
  TestFunTop(i_2);
  TravInit();
  OneNextSon();
  Rpush(j_2);
  goto r_7;
  j_2 :
  OneNextSon();
  Rpush(k_2);
  goto r_7;
  k_2 :
  AllBuild();
  goto q_1;
  h_2 :
  Ccontinue(l_2);
  TestFunTop(m_2);
  TravInit();
  OneNextSon();
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  goto q_1;
  l_2 :
  Ccontinue(o_2);
  TestFunTop(p_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Rpush(q_2);
  goto r_7;
  q_2 :
  AllBuild();
  goto q_1;
  o_2 :
  Ccontinue(r_2);
  TestFunTop(s_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_4);
  OneNextSon();
  Rpush(t_2);
  goto r_7;
  t_2 :
  AllBuild();
  goto q_1;
  r_2 :
  Ccontinue(u_2);
  TestFunTop(v_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Rpush(w_2);
  s_7 :
  Cpush(y_2);
  Ccall(_stratego_o_5);
  goto x_2;
  y_2 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Rpush(a_3);
  goto r_7;
  a_3 :
  OneNextSon();
  Rpush(b_3);
  goto s_7;
  b_3 :
  AllBuild();
  goto z_2;
  x_2 :
  Cpop();
  z_2 :
  Return();
  w_2 :
  AllBuild();
  goto q_1;
  u_2 :
  Ccontinue(c_3);
  TestFunTop(d_3);
  TravInit();
  OneNextSon();
  Rpush(e_3);
  goto r_7;
  e_3 :
  AllBuild();
  goto q_1;
  c_3 :
  Ccontinue(f_3);
  TestFunTop(g_3);
  TravInit();
  OneNextSon();
  Rpush(h_3);
  goto r_7;
  h_3 :
  AllBuild();
  goto q_1;
  f_3 :
  Ccontinue(i_3);
  TestFunTop(g_3);
  TravInit();
  OneNextSon();
  Rpush(j_3);
  goto r_7;
  j_3 :
  AllBuild();
  goto q_1;
  i_3 :
  Ccontinue(k_3);
  TestFunTop(l_3);
  TravInit();
  OneNextSon();
  Rpush(m_3);
  goto r_7;
  m_3 :
  AllBuild();
  goto q_1;
  k_3 :
  Ccontinue(n_3);
  TestFunTop(o_3);
  TravInit();
  OneNextSon();
  Rpush(p_3);
  goto r_7;
  p_3 :
  AllBuild();
  goto q_1;
  n_3 :
  Ccontinue(q_3);
  TestFunTop(r_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  goto q_1;
  q_3 :
  Ccontinue(s_3);
  TestFunTop(t_3);
  TravInit();
  OneNextSon();
  Rpush(u_3);
  t_7 :
  Cpush(w_3);
  Ccall(_stratego_o_5);
  goto v_3;
  w_3 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Cpush(z_3);
  Ccall(_stratego_v_4);
  goto y_3;
  z_3 :
  Rpush(b_4);
  u_7 :
  Cpush(d_4);
  Ccall(_stratego_o_5);
  goto c_4;
  d_4 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_4);
  OneNextSon();
  Rpush(f_4);
  goto u_7;
  f_4 :
  AllBuild();
  goto e_4;
  c_4 :
  Cpop();
  e_4 :
  Return();
  b_4 :
  goto a_4;
  y_3 :
  Cpop();
  a_4 :
  OneNextSon();
  Rpush(g_4);
  goto t_7;
  g_4 :
  AllBuild();
  goto x_3;
  v_3 :
  Cpop();
  x_3 :
  Return();
  u_3 :
  OneNextSon();
  Rpush(h_4);
  goto r_7;
  h_4 :
  AllBuild();
  goto q_1;
  s_3 :
  Ccontinue(i_4);
  TestFunTop(j_4);
  TravInit();
  OneNextSon();
  Rpush(k_4);
  goto r_7;
  k_4 :
  AllBuild();
  goto q_1;
  i_4 :
  Ccontinue(l_4);
  TestFunTop(m_4);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  goto q_1;
  l_4 :
  Ccontinue(n_4);
  TestFunTop(p_5);
  TravInit();
  OneNextSon();
  Rpush(q_5);
  v_7 :
  Cpush(s_5);
  Ccall(_stratego_o_5);
  goto r_5;
  s_5 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Cpush(x_5);
  TestFunTop(y_5);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Ccall(_stratego_o_5);
  OneNextSon();
  Rpush(z_5);
  goto r_7;
  z_5 :
  AllBuild();
  goto u_5;
  x_5 :
  TestFunTop(b_6);
  TravInit();
  OneNextSon();
  Rpush(c_6);
  w_7 :
  Cpush(k_6);
  Ccall(_stratego_o_5);
  goto g_6;
  k_6 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_6);
  goto w_7;
  o_6 :
  AllBuild();
  goto m_6;
  g_6 :
  Cpop();
  m_6 :
  Return();
  c_6 :
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Ccall(_stratego_o_5);
  OneNextSon();
  Rpush(q_6);
  goto r_7;
  q_6 :
  AllBuild();
  goto a_6;
  u_5 :
  Cpop();
  a_6 :
  OneNextSon();
  Rpush(t_6);
  goto v_7;
  t_6 :
  AllBuild();
  goto t_5;
  r_5 :
  Cpop();
  t_5 :
  Return();
  q_5 :
  OneNextSon();
  Rpush(u_6);
  goto r_7;
  u_6 :
  AllBuild();
  goto q_1;
  n_4 :
  Ccontinue(v_6);
  TestFunTop(w_6);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  goto l_6;
  l_6 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_7);
  goto x_7;
  i_7 :
  goto x_6;
  x_7 :
  Return();
  x_6 :
  Epopd(0,2);
  OneNextSon();
  Rpush(j_7);
  y_7 :
  Cpush(l_7);
  Ccall(_stratego_o_5);
  goto k_7;
  l_7 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  TestFunTop(n_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Rpush(o_7);
  goto r_7;
  o_7 :
  AllBuild();
  OneNextSon();
  Rpush(p_7);
  goto y_7;
  p_7 :
  AllBuild();
  goto m_7;
  k_7 :
  Cpop();
  m_7 :
  Return();
  j_7 :
  OneNextSon();
  Rpush(q_7);
  goto r_7;
  q_7 :
  AllBuild();
  goto q_1;
  v_6 :
  Ccontinue(c_8);
  TestFunTop(d_8);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  goto q_1;
  c_8 :
  Ccontinue(e_8);
  TestFunTop(f_8);
  TravInit();
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  goto n_6;
  n_6 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(h_8);
  goto z_7;
  h_8 :
  goto g_8;
  z_7 :
  Return();
  g_8 :
  Epopd(0,2);
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  goto q_1;
  e_8 :
  Ccontinue(l_8);
  TestFunTop(f_8);
  TravInit();
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  goto p_6;
  p_6 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(n_8);
  goto a_8;
  n_8 :
  goto m_8;
  a_8 :
  Return();
  m_8 :
  Epopd(0,2);
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  goto q_1;
  l_8 :
  Ccontinue(o_8);
  Epushd(0,3);
  MoveTop(0,1);
  goto r_6;
  r_6 :
  TestFunFC(s_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto s_6;
  s_6 :
  TestFunFC(k_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(r_8);
  goto b_8;
  r_8 :
  goto p_8;
  b_8 :
  Return();
  p_8 :
  Epopd(0,3);
  goto q_1;
  o_8 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(x_0,ATmakeString("Not a strategy-expression: "),(ATerm)ATmakeAppl2(x_0,Egetd(0,1),(ATerm)ATmakeAppl0(g_1))),(ATerm)ATmakeAppl0(i_1))));
  Ccall(_stratego_j_5);
  Epopd(0,1);
  Tpop();
  goto t_8;
  q_1 :
  Cpop();
  t_8 :
  Return();
  p_1 :
ENDPROC

PROC(_stratego_v_4)
  _ST_is_string();
ENDPROC

PROC(_stratego_w_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_8;
  i_8 :
  TestFunFC(w_8,&&fail,Egetd(0,1));
  Rpush(v_8);
  goto k_8;
  v_8 :
  goto u_8;
  k_8 :
  Return();
  u_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_4)
  Cpush(y_8);
  TestFunTop(y_5);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Ccall(_stratego_o_5);
  OneNextSon();
  Ccall(_stratego_u_4);
  AllBuild();
  goto x_8;
  y_8 :
  Ccontinue(z_8);
  TestFunTop(b_6);
  TravInit();
  OneNextSon();
  Rpush(b_9);
  a_9 :
  Cpush(d_9);
  Ccall(_stratego_o_5);
  goto c_9;
  d_9 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_4);
  OneNextSon();
  Rpush(f_9);
  goto a_9;
  f_9 :
  AllBuild();
  goto e_9;
  c_9 :
  Cpop();
  e_9 :
  Return();
  b_9 :
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Ccall(_stratego_o_5);
  OneNextSon();
  Ccall(_stratego_u_4);
  AllBuild();
  goto x_8;
  z_8 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(x_0,ATmakeString("Not a strategy-definition: "),(ATerm)ATmakeAppl2(x_0,Egetd(0,1),(ATerm)ATmakeAppl0(g_1))),(ATerm)ATmakeAppl0(i_1))));
  Ccall(_stratego_j_5);
  Epopd(0,1);
  Tpop();
  goto g_9;
  x_8 :
  Cpop();
  g_9 :
ENDPROC

PROC(_stratego_y_4)
  Cpush(i_9);
  Rpush(j_9);
  v_9 :
  Cpush(m_9);
  Ccall(_stratego_o_5);
  goto k_9;
  m_9 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_4);
  OneNextSon();
  Rpush(o_9);
  goto v_9;
  o_9 :
  AllBuild();
  goto n_9;
  k_9 :
  Cpop();
  n_9 :
  Return();
  j_9 :
  goto h_9;
  i_9 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(x_0,ATmakeString("Not a strategy-specification: "),(ATerm)ATmakeAppl2(x_0,Egetd(0,1),(ATerm)ATmakeAppl0(g_1))),(ATerm)ATmakeAppl0(i_1))));
  Ccall(_stratego_j_5);
  Epopd(0,1);
  Tpop();
  goto p_9;
  h_9 :
  Cpop();
  p_9 :
ENDPROC

PROC(_stratego_z_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_10;
  c_10 :
  TestFunFC(i_1,&&fail,Egetd(0,1));
  Rpush(r_9);
  goto e_10;
  r_9 :
  goto q_9;
  e_10 :
  Return();
  q_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_5)
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(x_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(g_1)),(ATerm)ATmakeAppl0(i_1))));
  Ccall(_stratego_j_5);
  Tset(MakeInt(1));
  Ccall(_stratego_i_5);
ENDPROC

PROC(_stratego_b_5)
  Epushd(0,2);
  Tdupl();
  Cpush(t_9);
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Cpush(u_9);
  Tdupl();
  Rpush(w_9);
  b_11 :
  Cpush(y_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto g_10;
  g_10 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_10;
  h_10 :
  TestFunFC(b_10,&&fail,Egetd(1,2));
  Rpush(a_10);
  goto c_11;
  a_10 :
  goto z_9;
  c_11 :
  Return();
  z_9 :
  Epopd(1,3);
  goto x_9;
  y_9 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_10);
  goto b_11;
  i_10 :
  AllBuild();
  goto f_10;
  x_9 :
  Cpop();
  f_10 :
  Return();
  w_9 :
  Cpop();
  Crestore();
  Cjump();
  u_9 :
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_4);
  AllBuild();
  AllBuild();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Rpush(l_10);
  d_11 :
  Cpush(k_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_10;
  j_10 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_10;
  k_10 :
  TestFunFC(n_11,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_11);
  goto e_11;
  m_11 :
  goto l_11;
  e_11 :
  Move(0,2,1,3);
  Return();
  l_11 :
  Epopd(1,4);
  goto h_11;
  k_11 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_11);
  goto d_11;
  w_11 :
  AllBuild();
  goto o_11;
  h_11 :
  Cpop();
  o_11 :
  Return();
  l_10 :
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_4);
  AllBuild();
  AllBuild();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Rpush(y_11);
  f_11 :
  Cpush(a_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_10;
  m_10 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_10;
  n_10 :
  TestFunFC(i_12,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_12);
  goto g_11;
  c_12 :
  goto b_12;
  g_11 :
  Move(0,1,1,3);
  Return();
  b_12 :
  Epopd(1,4);
  goto z_11;
  a_12 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_12);
  goto f_11;
  k_12 :
  AllBuild();
  goto j_12;
  z_11 :
  Cpop();
  j_12 :
  Return();
  y_11 :
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(x_0,Egetd(0,1),(ATerm)ATmakeAppl2(x_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(x_0,Egetd(0,2),(ATerm)ATmakeAppl2(x_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(g_1))))),(ATerm)ATmakeAppl0(i_1))));
  Ccall(_stratego_j_5);
  goto s_9;
  t_9 :
  goto l_12;
  s_9 :
  Cpop();
  l_12 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_i_5);
  Epopd(0,2);
ENDPROC

PROC(_stratego_c_5)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_d_5)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_e_5)
  Epushd(0,1);
  Tdupl();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Cpush(r_12);
  Rpush(s_12);
  g_12 :
  Cpush(u_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_11;
  i_11 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_11;
  j_11 :
  TestFunFC(d_13,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_13);
  goto h_12;
  c_13 :
  goto a_13;
  h_12 :
  Move(0,1,1,3);
  Return();
  a_13 :
  Epopd(1,4);
  goto t_12;
  u_12 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_13);
  goto g_12;
  g_13 :
  AllBuild();
  goto e_13;
  t_12 :
  Cpop();
  e_13 :
  Return();
  s_12 :
  goto o_12;
  r_12 :
  Tset((ATerm)ATmakeAppl0(k_13));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(k_13));
  MoveTop(0,1);
  Tpop();
  goto j_13;
  o_12 :
  Cpop();
  j_13 :
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_4);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_1,Egetd(0,1),(ATerm)ATmakeAppl2(e_1,Egetd(1,1),(ATerm)ATmakeAppl0(i_1))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_z_4);
  AllBuild();
  AllBuild();
  Cpush(m_13);
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Rpush(n_13);
  m_12 :
  Cpush(b_14);
  Epushd(1,3);
  MoveTop(1,1);
  goto p_11;
  p_11 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_11;
  q_11 :
  TestFunFC(j_14,&&fail,Egetd(1,2));
  Rpush(i_14);
  goto n_12;
  i_14 :
  goto h_14;
  n_12 :
  Return();
  h_14 :
  Epopd(1,3);
  goto x_13;
  b_14 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_14);
  goto m_12;
  l_14 :
  AllBuild();
  goto k_14;
  x_13 :
  Cpop();
  k_14 :
  Return();
  n_13 :
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_5);
  OneNextSon();
  Ccall(_stratego_z_4);
  AllBuild();
  AllBuild();
  goto l_13;
  m_13 :
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_5);
  OneNextSon();
  Ccall(_stratego_z_4);
  AllBuild();
  AllBuild();
  goto m_14;
  l_13 :
  Cpop();
  m_14 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_5)
  _ST_dtime();
ENDPROC

PROC(_stratego_g_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_h_5)
  Epushd(0,3);
  Tdupl();
  Cpush(o_14);
  Rpush(p_14);
  h_13 :
  Cpush(r_14);
  Epushd(1,4);
  MoveTop(1,1);
  goto p_12;
  p_12 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_12;
  q_12 :
  TestFunFC(u_14,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_14);
  goto i_13;
  t_14 :
  goto s_14;
  i_13 :
  Move(0,1,1,3);
  Return();
  s_14 :
  Epopd(1,4);
  goto q_14;
  r_14 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_14);
  goto h_13;
  w_14 :
  AllBuild();
  goto v_14;
  q_14 :
  Cpop();
  v_14 :
  Return();
  p_14 :
  goto n_14;
  o_14 :
  Tset((ATerm)ATmakeAppl0(z_14));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(z_14));
  MoveTop(0,1);
  Tpop();
  goto y_14;
  n_14 :
  Cpop();
  y_14 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_g_5);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(e_1,Egetd(0,2),(ATerm)ATmakeAppl2(e_1,Egetd(0,3),(ATerm)ATmakeAppl0(i_1))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_i_5)
  _ST_exit();
ENDPROC

PROC(_stratego_j_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_k_5)
  Epushd(0,1);
  Tdupl();
  Rpush(b_15);
  v_13 :
  Cpush(e_15);
  Epushd(1,4);
  MoveTop(1,1);
  goto o_13;
  o_13 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto p_13;
  p_13 :
  TestFunFC(i_12,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_15);
  goto w_13;
  h_15 :
  goto f_15;
  w_13 :
  Move(0,1,1,3);
  Return();
  f_15 :
  Epopd(1,4);
  goto c_15;
  e_15 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_15);
  goto v_13;
  k_15 :
  AllBuild();
  goto i_15;
  c_15 :
  Cpop();
  i_15 :
  Return();
  b_15 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(x_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(x_0,Egetd(0,1),(ATerm)ATmakeAppl2(x_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(g_1)))),(ATerm)ATmakeAppl0(i_1))));
  Ccall(_stratego_j_5);
  Tset(MakeInt(1));
  Ccall(_stratego_i_5);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_13;
  y_13 :
  TestFunFC(o_15,&&fail,Egetd(0,1));
  Rpush(n_15);
  goto a_14;
  n_15 :
  goto l_15;
  a_14 :
  Return();
  l_15 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_5)
  Rpush(p_15);
  f_14 :
  Cpush(s_15);
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Cpush(v_15);
  Ccall(_stratego_l_5);
  goto t_15;
  v_15 :
  Epushd(0,2);
  MoveTop(0,1);
  goto c_14;
  c_14 :
  TestFunFC(a_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(z_15);
  goto g_14;
  z_15 :
  goto x_15;
  g_14 :
  Return();
  x_15 :
  Epopd(0,2);
  goto w_15;
  t_15 :
  Cpop();
  w_15 :
  OneNextSon();
  AllBuild();
  goto r_15;
  s_15 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_16);
  goto f_14;
  d_16 :
  AllBuild();
  goto b_16;
  r_15 :
  Cpop();
  b_16 :
  Return();
  p_15 :
  Ccall(_stratego_k_5);
ENDPROC

PROC(_stratego_n_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto u_16;
  u_16 :
  TestFunFC(x_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_16;
  v_16 :
  TestFunFC(x_0,&&h_16,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(k_16);
  Rpush(l_16);
  goto s_20;
  l_16 :
  goto i_16;
  k_16 :
  Ccontinue(n_16);
  Rpush(o_16);
  goto t_20;
  o_16 :
  goto i_16;
  n_16 :
  Ccontinue(q_16);
  Rpush(r_16);
  goto u_20;
  r_16 :
  goto i_16;
  q_16 :
  Ccontinue(t_16);
  Rpush(b_17);
  goto v_20;
  b_17 :
  goto i_16;
  t_16 :
  Ccontinue(c_17);
  Rpush(e_17);
  goto w_20;
  e_17 :
  goto i_16;
  c_17 :
  Ccontinue(f_17);
  Rpush(g_17);
  goto x_20;
  g_17 :
  goto i_16;
  f_17 :
  Ccontinue(h_17);
  Rpush(j_17);
  goto y_20;
  j_17 :
  goto i_16;
  h_17 :
  Ccontinue(k_17);
  Rpush(l_17);
  goto z_20;
  l_17 :
  goto i_16;
  k_17 :
  Ccontinue(m_17);
  Rpush(n_17);
  goto a_21;
  n_17 :
  goto i_16;
  m_17 :
  Ccontinue(o_17);
  Rpush(q_17);
  goto b_21;
  q_17 :
  goto i_16;
  o_17 :
  Ccontinue(r_17);
  Rpush(s_17);
  goto c_21;
  s_17 :
  goto i_16;
  r_17 :
  Ccontinue(t_17);
  Rpush(u_17);
  goto d_21;
  u_17 :
  goto i_16;
  t_17 :
  Ccontinue(v_17);
  Rpush(w_17);
  goto e_21;
  w_17 :
  goto i_16;
  v_17 :
  Ccontinue(y_17);
  Rpush(z_17);
  goto f_21;
  z_17 :
  goto i_16;
  y_17 :
  Rpush(b_18);
  goto g_21;
  b_18 :
  goto a_18;
  i_16 :
  Cpop();
  a_18 :
  goto f_16;
  h_16 :
  Cpush(e_18);
  Rpush(f_18);
  goto s_20;
  f_18 :
  goto d_18;
  e_18 :
  Ccontinue(g_18);
  Rpush(h_18);
  goto t_20;
  h_18 :
  goto d_18;
  g_18 :
  Ccontinue(j_18);
  Rpush(k_18);
  goto u_20;
  k_18 :
  goto d_18;
  j_18 :
  Ccontinue(l_18);
  Rpush(m_18);
  goto v_20;
  m_18 :
  goto d_18;
  l_18 :
  Ccontinue(n_18);
  Rpush(o_18);
  goto w_20;
  o_18 :
  goto d_18;
  n_18 :
  Ccontinue(p_18);
  Rpush(r_18);
  goto c_21;
  r_18 :
  goto d_18;
  p_18 :
  Ccontinue(s_18);
  Rpush(t_18);
  goto d_21;
  t_18 :
  goto d_18;
  s_18 :
  Ccontinue(u_18);
  Rpush(v_18);
  goto e_21;
  v_18 :
  goto d_18;
  u_18 :
  Ccontinue(w_18);
  Rpush(x_18);
  goto f_21;
  x_18 :
  goto d_18;
  w_18 :
  Rpush(a_19);
  goto g_21;
  a_19 :
  goto z_18;
  d_18 :
  Cpop();
  z_18 :
  goto f_16;
  f_16 :
  goto e_16;
  s_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_14;
  x_14 :
  TestStr(1,1,"-S",&&fail);
  Rpush(c_19);
  goto h_21;
  c_19 :
  goto b_19;
  h_21 :
  Return();
  b_19 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_10));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl0(b_10),Egetd(0,5)));
  Return();
  t_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_15;
  a_15 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(e_19);
  goto j_21;
  e_19 :
  goto d_19;
  j_21 :
  Return();
  d_19 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_10));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl0(b_10),Egetd(0,5)));
  Return();
  u_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_15;
  d_15 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_19);
  goto l_21;
  h_19 :
  goto f_19;
  l_21 :
  Return();
  f_19 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(i_19));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl0(i_19),Egetd(0,5)));
  Return();
  v_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_15;
  g_15 :
  TestStr(1,1,"-v",&&fail);
  Rpush(k_19);
  goto n_21;
  k_19 :
  goto j_19;
  n_21 :
  Return();
  j_19 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(l_19));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl0(l_19),Egetd(0,5)));
  Return();
  w_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_15;
  j_15 :
  TestStr(1,1,"--version",&&fail);
  Rpush(n_19);
  goto p_21;
  n_19 :
  goto m_19;
  p_21 :
  Return();
  m_19 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(l_19));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl0(l_19),Egetd(0,5)));
  Return();
  x_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_15;
  m_15 :
  TestStr(1,1,"@version",&&fail);
  Rpush(q_19);
  goto r_21;
  q_19 :
  goto p_19;
  r_21 :
  Return();
  p_19 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(r_19,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl1(r_19,Egetd(0,1)),Egetd(0,2)));
  Return();
  y_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_15;
  q_15 :
  TestStr(1,1,"-i",&&fail);
  Rpush(t_19);
  goto u_21;
  t_19 :
  goto s_19;
  u_21 :
  Return();
  s_19 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(u_14,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl1(u_14,Egetd(0,1)),Egetd(0,2)));
  Return();
  z_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_15;
  u_15 :
  TestStr(1,1,"--input",&&fail);
  Rpush(w_19);
  goto x_21;
  w_19 :
  goto u_19;
  x_21 :
  Return();
  u_19 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(u_14,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl1(u_14,Egetd(0,1)),Egetd(0,2)));
  Return();
  a_21 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_15;
  y_15 :
  TestStr(1,1,"-o",&&fail);
  Rpush(y_19);
  goto a_22;
  y_19 :
  goto x_19;
  a_22 :
  Return();
  x_19 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(d_13,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl1(d_13,Egetd(0,1)),Egetd(0,2)));
  Return();
  b_21 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_16;
  c_16 :
  TestStr(1,1,"--output",&&fail);
  Rpush(b_20);
  goto d_22;
  b_20 :
  goto z_19;
  d_22 :
  Return();
  z_19 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(d_13,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl1(d_13,Egetd(0,1)),Egetd(0,2)));
  Return();
  c_21 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_16;
  g_16 :
  TestStr(1,1,"-b",&&fail);
  Rpush(d_20);
  goto g_22;
  d_20 :
  goto c_20;
  g_22 :
  Return();
  c_20 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(j_14));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl0(j_14),Egetd(0,5)));
  Return();
  d_21 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_16;
  j_16 :
  TestStr(1,1,"-s",&&fail);
  Rpush(g_20);
  goto i_22;
  g_20 :
  goto e_20;
  i_22 :
  Return();
  e_20 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(h_20));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl0(h_20),Egetd(0,5)));
  Return();
  e_21 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_16;
  m_16 :
  TestStr(1,1,"--help",&&fail);
  Rpush(j_20);
  goto k_22;
  j_20 :
  goto i_20;
  k_22 :
  Return();
  i_20 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_15));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl0(o_15),Egetd(0,5)));
  Return();
  f_21 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_16;
  p_16 :
  TestStr(1,1,"-h",&&fail);
  Rpush(m_20);
  goto m_22;
  m_20 :
  goto l_20;
  m_22 :
  Return();
  l_20 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_15));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl0(o_15),Egetd(0,5)));
  Return();
  g_21 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_16;
  s_16 :
  TestStr(1,1,"-?",&&fail);
  Rpush(o_20);
  goto o_22;
  o_20 :
  goto n_20;
  o_22 :
  Return();
  n_20 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_15));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl0(o_15),Egetd(0,5)));
  Return();
  e_16 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_22;
  r_22 :
  TestFunFC(g_1,&&fail,Egetd(0,1));
  Rpush(r_20);
  goto t_22;
  r_20 :
  goto q_20;
  t_22 :
  Return();
  q_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(i_12,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(i_21);
  t_23 :
  Cpush(m_21);
  Cpush(q_21);
  Ccall(_stratego_o_5);
  goto o_21;
  q_21 :
  Ccall(_stratego_n_5);
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_21);
  goto t_23;
  t_21 :
  AllBuild();
  goto s_21;
  o_21 :
  Cpop();
  s_21 :
  goto k_21;
  m_21 :
  Epushd(0,3);
  MoveTop(0,1);
  goto w_22;
  w_22 :
  TestFunFC(x_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(y_21);
  goto u_23;
  y_21 :
  goto w_21;
  u_23 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl1(a_16,Egetd(0,2)),Egetd(0,3)));
  Return();
  w_21 :
  Epopd(0,3);
  goto v_21;
  k_21 :
  Cpop();
  v_21 :
  Return();
  i_21 :
  AllBuild();
  Cpush(b_22);
  Ccall(_stratego_m_5);
  goto z_21;
  b_22 :
  Ccontinue(c_22);
  Epushd(0,6);
  Ccall(_stratego_h_5);
  Tdupl();
  Ccall(_stratego_f_5);
  Tpop();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_4);
  OneNextSon();
  Ccall(_stratego_z_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_f_5);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto z_22;
  z_22 :
  TestFunFC(e_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto a_23;
  a_23 :
  TestFunFC(e_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto b_23;
  b_23 :
  TestFunFC(i_1,&&fail,Egetd(0,6));
  Rpush(f_22);
  goto w_23;
  f_22 :
  goto e_22;
  w_23 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl1(n_11,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(e_1,Egetd(0,5),(ATerm)ATmakeAppl0(i_1))));
  Return();
  e_22 :
  Ccall(_stratego_e_5);
  Ccall(_stratego_b_5);
  Epopd(0,6);
  goto z_21;
  c_22 :
  Ccall(_stratego_a_5);
  goto h_22;
  z_21 :
  Cpop();
  h_22 :
ENDPROC

DOIT

