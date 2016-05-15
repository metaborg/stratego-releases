#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,f_17);
VARDECL(AFun,r_16);
VARDECL(AFun,l_16);
VARDECL(AFun,h_16);
VARDECL(AFun,o_12);
VARDECL(AFun,t_11);
VARDECL(AFun,z_10);
VARDECL(AFun,q_10);
VARDECL(AFun,w_8);
VARDECL(AFun,k_8);
VARDECL(AFun,g_8);
VARDECL(AFun,u_7);
VARDECL(AFun,m_7);
VARDECL(AFun,d_7);
VARDECL(AFun,s_5);
VARDECL(AFun,l_5);
VARDECL(AFun,j_5);
VARDECL(AFun,g_4);
VARDECL(AFun,x_3);
VARDECL(AFun,v_3);
VARDECL(AFun,t_3);
VARDECL(AFun,q_3);
VARDECL(AFun,n_3);
VARDECL(AFun,i_3);
VARDECL(AFun,f_3);
VARDECL(AFun,x_2);
VARDECL(AFun,u_2);
VARDECL(AFun,r_2);
VARDECL(AFun,p_2);
VARDECL(AFun,o_2);
VARDECL(AFun,k_2);
VARDECL(AFun,g_2);
VARDECL(AFun,c_2);
VARDECL(AFun,z_1);
VARDECL(AFun,w_1);
VARDECL(AFun,q_1);
VARDECL(AFun,n_1);
VARDECL(AFun,k_1);
VARDECL(AFun,j_1);
VARDECL(AFun,i_1);
VARDECL(AFun,h_1);
VARDECL(AFun,d_1);
VARDECL(AFun,y_0);
VARDECL(AFun,v_0);
VARDECL(AFun,s_0);
VARDECL(AFun,q_0);
VARDECL(AFun,o_0);
VARDECL(AFun,l_0);
VARDECL(AFun,j_0);
VARDECL(AFun,e_0);
PROCDECL(_stratego_i_4);
PROCDECL(_stratego_j_4);
PROCDECL(_stratego_k_4);
PROCDECL(_stratego_l_4);
PROCDECL(_stratego_m_4);
PROCDECL(_stratego_n_4);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(f_17,ATmakeAFun("Statistics",0,0));
  MOVE(r_16,ATmakeAFun("DeclVersion",1,0));
  MOVE(l_16,ATmakeAFun("Version",0,0));
  MOVE(h_16,ATmakeAFun("Verbose",0,0));
  MOVE(o_12,ATmakeAFun("Undefined",1,0));
  MOVE(t_11,ATmakeAFun("Help",0,0));
  MOVE(z_10,ATmakeAFun("stdin",0,0));
  MOVE(q_10,ATmakeAFun("Input",1,0));
  MOVE(w_8,ATmakeAFun("Binary",0,0));
  MOVE(k_8,ATmakeAFun("stdout",0,0));
  MOVE(g_8,ATmakeAFun("Output",1,0));
  MOVE(u_7,ATmakeAFun("Program",1,0));
  MOVE(m_7,ATmakeAFun("Runtime",1,0));
  MOVE(d_7,ATmakeAFun("Silent",0,0));
  MOVE(s_5,ATmakeAFun("SDef",3,0));
  MOVE(l_5,ATmakeAFun("Let",2,0));
  MOVE(j_5,ATmakeAFun("Prim",1,0));
  MOVE(g_4,ATmakeAFun("Where",1,0));
  MOVE(x_3,ATmakeAFun("Scope",2,0));
  MOVE(v_3,ATmakeAFun("Build",1,0));
  MOVE(t_3,ATmakeAFun("Match",1,0));
  MOVE(q_3,ATmakeAFun("Thread",1,0));
  MOVE(n_3,ATmakeAFun("All",1,0));
  MOVE(i_3,ATmakeAFun("Some",1,0));
  MOVE(f_3,ATmakeAFun("One",1,0));
  MOVE(x_2,ATmakeAFun("Cong",2,0));
  MOVE(u_2,ATmakeAFun("Path",2,0));
  MOVE(r_2,ATmakeAFun("Rec",2,0));
  MOVE(p_2,ATmakeAFun("SVar",1,0));
  MOVE(o_2,ATmakeAFun("Call",2,0));
  MOVE(k_2,ATmakeAFun("LChoice",2,0));
  MOVE(g_2,ATmakeAFun("Choice",2,0));
  MOVE(c_2,ATmakeAFun("Seq",2,0));
  MOVE(z_1,ATmakeAFun("Test",1,0));
  MOVE(w_1,ATmakeAFun("Not",1,0));
  MOVE(q_1,ATmakeAFun("Id",0,0));
  MOVE(n_1,ATmakeAFun("Fail",0,0));
  MOVE(k_1,ATmakeAFun("TNil",0,0));
  MOVE(j_1,ATmakeAFun("Nil",0,0));
  MOVE(i_1,ATmakeAFun("stderr",0,0));
  MOVE(h_1,ATmakeAFun("TCons",2,0));
  MOVE(d_1,ATmakeAFun("Cons",2,0));
  MOVE(y_0,ATmakeAFun("Op",2,0));
  MOVE(v_0,ATmakeAFun("As",2,0));
  MOVE(s_0,ATmakeAFun("BuildDefault",1,0));
  MOVE(q_0,ATmakeAFun("Str",1,0));
  MOVE(o_0,ATmakeAFun("Real",1,0));
  MOVE(l_0,ATmakeAFun("Int",1,0));
  MOVE(j_0,ATmakeAFun("Var",1,0));
  MOVE(e_0,ATmakeAFun("Wld",0,0));
ENDPROC

PROC(_stratego_i_4)
  _ST_is_real();
ENDPROC

PROC(_stratego_j_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  Rpush(b_0);
  goto m_0;
  b_0 :
  goto a_0;
  m_0 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_4)
  Rpush(f_0);
  q_5 :
  Cpush(h_0);
  Ccall(_stratego_j_4);
  goto g_0;
  h_0 :
  Ccontinue(i_0);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  goto g_0;
  i_0 :
  Ccontinue(k_0);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_4);
  AllBuild();
  goto g_0;
  k_0 :
  Ccontinue(n_0);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_4);
  AllBuild();
  goto g_0;
  n_0 :
  Ccontinue(p_0);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  goto g_0;
  p_0 :
  Ccontinue(r_0);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Rpush(t_0);
  goto q_5;
  t_0 :
  AllBuild();
  goto g_0;
  r_0 :
  Ccontinue(u_0);
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  OneNextSon();
  Rpush(w_0);
  goto q_5;
  w_0 :
  AllBuild();
  goto g_0;
  u_0 :
  Ccontinue(x_0);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  OneNextSon();
  Rpush(z_0);
  r_5 :
  Cpush(b_1);
  Ccall(_stratego_h_5);
  goto a_1;
  b_1 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Rpush(e_1);
  goto q_5;
  e_1 :
  OneNextSon();
  Rpush(f_1);
  goto r_5;
  f_1 :
  AllBuild();
  goto c_1;
  a_1 :
  Cpop();
  c_1 :
  Return();
  z_0 :
  AllBuild();
  goto g_0;
  x_0 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl0(i_1),(ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl2(d_1,ATmakeString("not a term-expression: "),(ATerm)ATmakeAppl2(d_1,Egetd(0,1),(ATerm)ATmakeAppl0(j_1))),(ATerm)ATmakeAppl0(k_1))));
  Ccall(_stratego_c_5);
  Epopd(0,1);
  Tpop();
  goto g_1;
  g_0 :
  Cpop();
  g_1 :
  Return();
  f_0 :
ENDPROC

PROC(_stratego_l_4)
  _ST_is_int();
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_5;
  y_5 :
  TestFunFC(n_1,&&fail,Egetd(0,1));
  Rpush(m_1);
  goto a_6;
  m_1 :
  goto l_1;
  a_6 :
  Return();
  l_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_6;
  c_6 :
  TestFunFC(q_1,&&fail,Egetd(0,1));
  Rpush(p_1);
  goto e_6;
  p_1 :
  goto o_1;
  e_6 :
  Return();
  o_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_4)
  Rpush(r_1);
  u_6 :
  Cpush(t_1);
  Ccall(_stratego_n_4);
  goto s_1;
  t_1 :
  Ccontinue(u_1);
  Ccall(_stratego_m_4);
  goto s_1;
  u_1 :
  Ccontinue(v_1);
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Rpush(x_1);
  goto u_6;
  x_1 :
  AllBuild();
  goto s_1;
  v_1 :
  Ccontinue(y_1);
  TestFunTop(z_1);
  TravInit();
  OneNextSon();
  Rpush(a_2);
  goto u_6;
  a_2 :
  AllBuild();
  goto s_1;
  y_1 :
  Ccontinue(b_2);
  TestFunTop(c_2);
  TravInit();
  OneNextSon();
  Rpush(d_2);
  goto u_6;
  d_2 :
  OneNextSon();
  Rpush(e_2);
  goto u_6;
  e_2 :
  AllBuild();
  goto s_1;
  b_2 :
  Ccontinue(f_2);
  TestFunTop(g_2);
  TravInit();
  OneNextSon();
  Rpush(h_2);
  goto u_6;
  h_2 :
  OneNextSon();
  Rpush(i_2);
  goto u_6;
  i_2 :
  AllBuild();
  goto s_1;
  f_2 :
  Ccontinue(j_2);
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  Rpush(l_2);
  goto u_6;
  l_2 :
  OneNextSon();
  Rpush(m_2);
  goto u_6;
  m_2 :
  AllBuild();
  goto s_1;
  j_2 :
  Ccontinue(n_2);
  TestFunTop(o_2);
  TravInit();
  OneNextSon();
  TestFunTop(p_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_h_5);
  AllBuild();
  goto s_1;
  n_2 :
  Ccontinue(q_2);
  TestFunTop(r_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  OneNextSon();
  Rpush(s_2);
  goto u_6;
  s_2 :
  AllBuild();
  goto s_1;
  q_2 :
  Ccontinue(t_2);
  TestFunTop(u_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_4);
  OneNextSon();
  Rpush(v_2);
  goto u_6;
  v_2 :
  AllBuild();
  goto s_1;
  t_2 :
  Ccontinue(w_2);
  TestFunTop(x_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  OneNextSon();
  Rpush(y_2);
  v_6 :
  Cpush(a_3);
  Ccall(_stratego_h_5);
  goto z_2;
  a_3 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Rpush(c_3);
  goto u_6;
  c_3 :
  OneNextSon();
  Rpush(d_3);
  goto v_6;
  d_3 :
  AllBuild();
  goto b_3;
  z_2 :
  Cpop();
  b_3 :
  Return();
  y_2 :
  AllBuild();
  goto s_1;
  w_2 :
  Ccontinue(e_3);
  TestFunTop(f_3);
  TravInit();
  OneNextSon();
  Rpush(g_3);
  goto u_6;
  g_3 :
  AllBuild();
  goto s_1;
  e_3 :
  Ccontinue(h_3);
  TestFunTop(i_3);
  TravInit();
  OneNextSon();
  Rpush(j_3);
  goto u_6;
  j_3 :
  AllBuild();
  goto s_1;
  h_3 :
  Ccontinue(k_3);
  TestFunTop(i_3);
  TravInit();
  OneNextSon();
  Rpush(l_3);
  goto u_6;
  l_3 :
  AllBuild();
  goto s_1;
  k_3 :
  Ccontinue(m_3);
  TestFunTop(n_3);
  TravInit();
  OneNextSon();
  Rpush(o_3);
  goto u_6;
  o_3 :
  AllBuild();
  goto s_1;
  m_3 :
  Ccontinue(p_3);
  TestFunTop(q_3);
  TravInit();
  OneNextSon();
  Rpush(r_3);
  goto u_6;
  r_3 :
  AllBuild();
  goto s_1;
  p_3 :
  Ccontinue(s_3);
  TestFunTop(t_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_4);
  AllBuild();
  goto s_1;
  s_3 :
  Ccontinue(u_3);
  TestFunTop(v_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_4);
  AllBuild();
  goto s_1;
  u_3 :
  Ccontinue(w_3);
  TestFunTop(x_3);
  TravInit();
  OneNextSon();
  Rpush(y_3);
  w_6 :
  Cpush(b_4);
  Ccall(_stratego_h_5);
  goto a_4;
  b_4 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  OneNextSon();
  Rpush(d_4);
  goto w_6;
  d_4 :
  AllBuild();
  goto c_4;
  a_4 :
  Cpop();
  c_4 :
  Return();
  y_3 :
  OneNextSon();
  Rpush(e_4);
  goto u_6;
  e_4 :
  AllBuild();
  goto s_1;
  w_3 :
  Ccontinue(f_4);
  TestFunTop(g_4);
  TravInit();
  OneNextSon();
  Rpush(h_4);
  goto u_6;
  h_4 :
  AllBuild();
  goto s_1;
  f_4 :
  Ccontinue(i_5);
  TestFunTop(j_5);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  goto s_1;
  i_5 :
  Ccontinue(k_5);
  TestFunTop(l_5);
  TravInit();
  OneNextSon();
  Rpush(m_5);
  x_6 :
  Cpush(o_5);
  Ccall(_stratego_h_5);
  goto n_5;
  o_5 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  TestFunTop(s_5);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  OneNextSon();
  Ccall(_stratego_h_5);
  OneNextSon();
  Rpush(t_5);
  goto u_6;
  t_5 :
  AllBuild();
  OneNextSon();
  Rpush(u_5);
  goto x_6;
  u_5 :
  AllBuild();
  goto p_5;
  n_5 :
  Cpop();
  p_5 :
  Return();
  m_5 :
  OneNextSon();
  Rpush(v_5);
  goto u_6;
  v_5 :
  AllBuild();
  goto s_1;
  k_5 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl0(i_1),(ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl2(d_1,ATmakeString("not a strategy-expression: "),(ATerm)ATmakeAppl2(d_1,Egetd(0,1),(ATerm)ATmakeAppl0(j_1))),(ATerm)ATmakeAppl0(k_1))));
  Ccall(_stratego_c_5);
  Epopd(0,1);
  Tpop();
  goto w_5;
  s_1 :
  Cpop();
  w_5 :
  Return();
  r_1 :
ENDPROC

PROC(_stratego_p_4)
  _ST_is_string();
ENDPROC

PROC(_stratego_q_4)
  Cpush(b_6);
  TestFunTop(s_5);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  OneNextSon();
  Ccall(_stratego_h_5);
  OneNextSon();
  Ccall(_stratego_o_4);
  AllBuild();
  goto x_5;
  b_6 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl0(i_1),(ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl2(d_1,ATmakeString("not a strategy-definition: "),(ATerm)ATmakeAppl2(d_1,Egetd(0,1),(ATerm)ATmakeAppl0(j_1))),(ATerm)ATmakeAppl0(k_1))));
  Ccall(_stratego_c_5);
  Epopd(0,1);
  Tpop();
  goto f_6;
  x_5 :
  Cpop();
  f_6 :
ENDPROC

PROC(_stratego_r_4)
  Cpush(h_6);
  Rpush(i_6);
  m_8 :
  Cpush(l_6);
  Ccall(_stratego_h_5);
  goto j_6;
  l_6 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_4);
  OneNextSon();
  Rpush(n_6);
  goto m_8;
  n_6 :
  AllBuild();
  goto m_6;
  j_6 :
  Cpop();
  m_6 :
  Return();
  i_6 :
  goto g_6;
  h_6 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl0(i_1),(ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl2(d_1,ATmakeString("not a stratego-specification: "),(ATerm)ATmakeAppl2(d_1,Egetd(0,1),(ATerm)ATmakeAppl0(j_1))),(ATerm)ATmakeAppl0(k_1))));
  Ccall(_stratego_c_5);
  Epopd(0,1);
  Tpop();
  goto o_6;
  g_6 :
  Cpop();
  o_6 :
ENDPROC

PROC(_stratego_s_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_8;
  t_8 :
  TestFunFC(k_1,&&fail,Egetd(0,1));
  Rpush(q_6);
  goto v_8;
  q_6 :
  goto p_6;
  v_8 :
  Return();
  p_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_4)
  Tset((ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl0(i_1),(ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl2(d_1,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(j_1)),(ATerm)ATmakeAppl0(k_1))));
  Ccall(_stratego_c_5);
  Tset(MakeInt(1));
  Ccall(_stratego_b_5);
ENDPROC

PROC(_stratego_u_4)
  Epushd(0,2);
  Tdupl();
  Cpush(s_6);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Cpush(t_6);
  Tdupl();
  Rpush(y_6);
  s_9 :
  Cpush(a_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto x_8;
  x_8 :
  TestFunFC(d_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_8;
  y_8 :
  TestFunFC(d_7,&&fail,Egetd(1,2));
  Rpush(c_7);
  goto t_9;
  c_7 :
  goto b_7;
  t_9 :
  Return();
  b_7 :
  Epopd(1,3);
  goto z_6;
  a_7 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_7);
  goto s_9;
  f_7 :
  AllBuild();
  goto e_7;
  z_6 :
  Cpop();
  e_7 :
  Return();
  y_6 :
  Cpop();
  Crestore();
  Cjump();
  t_6 :
  OneNextSon();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Rpush(g_7);
  u_9 :
  Cpush(j_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_9;
  a_9 :
  TestFunFC(d_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_9;
  b_9 :
  TestFunFC(m_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_7);
  goto v_9;
  l_7 :
  goto k_7;
  v_9 :
  Move(0,2,1,3);
  Return();
  k_7 :
  Epopd(1,4);
  goto h_7;
  j_7 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_7);
  goto u_9;
  o_7 :
  AllBuild();
  goto n_7;
  h_7 :
  Cpop();
  n_7 :
  Return();
  g_7 :
  OneNextSon();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Rpush(p_7);
  w_9 :
  Cpush(r_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_9;
  d_9 :
  TestFunFC(d_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_9;
  e_9 :
  TestFunFC(u_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_7);
  goto x_9;
  t_7 :
  goto s_7;
  x_9 :
  Move(0,1,1,3);
  Return();
  s_7 :
  Epopd(1,4);
  goto q_7;
  r_7 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_7);
  goto w_9;
  w_7 :
  AllBuild();
  goto v_7;
  q_7 :
  Cpop();
  v_7 :
  Return();
  p_7 :
  OneNextSon();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl0(i_1),(ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl2(d_1,Egetd(0,1),(ATerm)ATmakeAppl2(d_1,ATmakeString(" ("),(ATerm)ATmakeAppl2(d_1,Egetd(0,2),(ATerm)ATmakeAppl2(d_1,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(j_1))))),(ATerm)ATmakeAppl0(k_1))));
  Ccall(_stratego_c_5);
  goto r_6;
  s_6 :
  goto x_7;
  r_6 :
  Cpop();
  x_7 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_b_5);
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_w_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_x_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Cpush(z_7);
  Rpush(a_8);
  x_10 :
  Cpush(d_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_9;
  z_9 :
  TestFunFC(d_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_10;
  a_10 :
  TestFunFC(g_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_8);
  goto y_10;
  f_8 :
  goto e_8;
  y_10 :
  Move(0,1,1,3);
  Return();
  e_8 :
  Epopd(1,4);
  goto b_8;
  d_8 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_8);
  goto x_10;
  i_8 :
  AllBuild();
  goto h_8;
  b_8 :
  Cpop();
  h_8 :
  Return();
  a_8 :
  goto y_7;
  z_7 :
  Tset((ATerm)ATmakeAppl0(k_8));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(k_8));
  MoveTop(0,1);
  Tpop();
  goto j_8;
  y_7 :
  Cpop();
  j_8 :
  OneNextSon();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(h_1,Egetd(0,1),(ATerm)ATmakeAppl2(h_1,Egetd(1,1),(ATerm)ATmakeAppl0(k_1))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  Cpush(n_8);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Rpush(o_8);
  d_11 :
  Cpush(q_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto g_10;
  g_10 :
  TestFunFC(d_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_10;
  h_10 :
  TestFunFC(w_8,&&fail,Egetd(1,2));
  Rpush(s_8);
  goto e_11;
  s_8 :
  goto r_8;
  e_11 :
  Return();
  r_8 :
  Epopd(1,3);
  goto p_8;
  q_8 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_9);
  goto d_11;
  c_9 :
  AllBuild();
  goto z_8;
  p_8 :
  Cpop();
  z_8 :
  Return();
  o_8 :
  OneNextSon();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_4);
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  goto l_8;
  n_8 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  goto y_9;
  l_8 :
  Cpop();
  y_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_z_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,3);
  Tdupl();
  Cpush(c_10);
  Rpush(d_10);
  y_11 :
  Cpush(f_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_11;
  g_11 :
  TestFunFC(d_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_11;
  h_11 :
  TestFunFC(q_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_10);
  goto z_11;
  p_10 :
  goto n_10;
  z_11 :
  Move(0,1,1,3);
  Return();
  n_10 :
  Epopd(1,4);
  goto e_10;
  f_10 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_10);
  goto y_11;
  s_10 :
  AllBuild();
  goto r_10;
  e_10 :
  Cpop();
  r_10 :
  Return();
  d_10 :
  goto b_10;
  c_10 :
  Tset((ATerm)ATmakeAppl0(z_10));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(z_10));
  MoveTop(0,1);
  Tpop();
  goto t_10;
  b_10 :
  Cpop();
  t_10 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_z_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(h_1,Egetd(0,2),(ATerm)ATmakeAppl2(h_1,Egetd(0,3),(ATerm)ATmakeAppl0(k_1))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_b_5)
  _ST_exit();
ENDPROC

PROC(_stratego_c_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,1);
  Tdupl();
  Rpush(a_11);
  m_12 :
  Cpush(c_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_12;
  f_12 :
  TestFunFC(d_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_12;
  g_12 :
  TestFunFC(u_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_11);
  goto n_12;
  i_11 :
  goto f_11;
  n_12 :
  Move(0,1,1,3);
  Return();
  f_11 :
  Epopd(1,4);
  goto b_11;
  c_11 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_11);
  goto m_12;
  k_11 :
  AllBuild();
  goto j_11;
  b_11 :
  Cpop();
  j_11 :
  Return();
  a_11 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl0(i_1),(ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl2(d_1,ATmakeString("usage : "),(ATerm)ATmakeAppl2(d_1,Egetd(0,1),(ATerm)ATmakeAppl2(d_1,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(j_1)))),(ATerm)ATmakeAppl0(k_1))));
  Ccall(_stratego_c_5);
  Tset(MakeInt(1));
  Ccall(_stratego_b_5);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_12;
  p_12 :
  TestFunFC(t_11,&&fail,Egetd(0,1));
  Rpush(r_11);
  goto r_12;
  r_11 :
  goto l_11;
  r_12 :
  Return();
  l_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_5)
  Rpush(u_11);
  w_12 :
  Cpush(x_11);
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Cpush(b_12);
  Ccall(_stratego_e_5);
  goto a_12;
  b_12 :
  Epushd(0,2);
  MoveTop(0,1);
  goto t_12;
  t_12 :
  TestFunFC(o_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(e_12);
  goto x_12;
  e_12 :
  goto d_12;
  x_12 :
  Return();
  d_12 :
  Epopd(0,2);
  goto c_12;
  a_12 :
  Cpop();
  c_12 :
  OneNextSon();
  AllBuild();
  goto v_11;
  x_11 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_12);
  goto w_12;
  y_12 :
  AllBuild();
  goto s_12;
  v_11 :
  Cpop();
  s_12 :
  Return();
  u_11 :
  Ccall(_stratego_d_5);
ENDPROC

PROC(_stratego_g_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto l_15;
  l_15 :
  TestFunFC(d_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto m_15;
  m_15 :
  TestFunFC(d_1,&&b_13,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(d_13);
  Rpush(e_13);
  goto j_19;
  e_13 :
  goto c_13;
  d_13 :
  Ccontinue(f_13);
  Rpush(g_13);
  goto k_19;
  g_13 :
  goto c_13;
  f_13 :
  Ccontinue(h_13);
  Rpush(i_13);
  goto l_19;
  i_13 :
  goto c_13;
  h_13 :
  Ccontinue(j_13);
  Rpush(k_13);
  goto m_19;
  k_13 :
  goto c_13;
  j_13 :
  Ccontinue(l_13);
  Rpush(m_13);
  goto n_19;
  m_13 :
  goto c_13;
  l_13 :
  Ccontinue(n_13);
  Rpush(p_13);
  goto o_19;
  p_13 :
  goto c_13;
  n_13 :
  Ccontinue(q_13);
  Rpush(s_13);
  goto p_19;
  s_13 :
  goto c_13;
  q_13 :
  Ccontinue(t_13);
  Rpush(v_13);
  goto q_19;
  v_13 :
  goto c_13;
  t_13 :
  Ccontinue(w_13);
  Rpush(y_13);
  goto r_19;
  y_13 :
  goto c_13;
  w_13 :
  Ccontinue(z_13);
  Rpush(b_14);
  goto s_19;
  b_14 :
  goto c_13;
  z_13 :
  Ccontinue(c_14);
  Rpush(e_14);
  goto t_19;
  e_14 :
  goto c_13;
  c_14 :
  Ccontinue(f_14);
  Rpush(g_14);
  goto u_19;
  g_14 :
  goto c_13;
  f_14 :
  Ccontinue(i_14);
  Rpush(j_14);
  goto v_19;
  j_14 :
  goto c_13;
  i_14 :
  Ccontinue(k_14);
  Rpush(m_14);
  goto w_19;
  m_14 :
  goto c_13;
  k_14 :
  Rpush(o_14);
  goto x_19;
  o_14 :
  goto n_14;
  c_13 :
  Cpop();
  n_14 :
  goto a_13;
  b_13 :
  Cpush(r_14);
  Rpush(s_14);
  goto j_19;
  s_14 :
  goto q_14;
  r_14 :
  Ccontinue(u_14);
  Rpush(v_14);
  goto k_19;
  v_14 :
  goto q_14;
  u_14 :
  Ccontinue(w_14);
  Rpush(y_14);
  goto l_19;
  y_14 :
  goto q_14;
  w_14 :
  Ccontinue(z_14);
  Rpush(b_15);
  goto m_19;
  b_15 :
  goto q_14;
  z_14 :
  Ccontinue(c_15);
  Rpush(e_15);
  goto n_19;
  e_15 :
  goto q_14;
  c_15 :
  Ccontinue(f_15);
  Rpush(h_15);
  goto t_19;
  h_15 :
  goto q_14;
  f_15 :
  Ccontinue(i_15);
  Rpush(k_15);
  goto u_19;
  k_15 :
  goto q_14;
  i_15 :
  Ccontinue(s_15);
  Rpush(t_15);
  goto v_19;
  t_15 :
  goto q_14;
  s_15 :
  Ccontinue(v_15);
  Rpush(w_15);
  goto w_19;
  w_15 :
  goto q_14;
  v_15 :
  Rpush(y_15);
  goto x_19;
  y_15 :
  goto x_15;
  q_14 :
  Cpop();
  x_15 :
  goto a_13;
  a_13 :
  goto z_12;
  j_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_13;
  o_13 :
  TestStr(1,1,"-S",&&fail);
  Rpush(b_16);
  goto y_19;
  b_16 :
  goto a_16;
  y_19 :
  Return();
  a_16 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(d_7));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl0(d_7),Egetd(0,5)));
  Return();
  k_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_13;
  r_13 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(d_16);
  goto a_20;
  d_16 :
  goto c_16;
  a_20 :
  Return();
  c_16 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(d_7));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl0(d_7),Egetd(0,5)));
  Return();
  l_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_13;
  u_13 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(g_16);
  goto c_20;
  g_16 :
  goto f_16;
  c_20 :
  Return();
  f_16 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(h_16));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl0(h_16),Egetd(0,5)));
  Return();
  m_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_13;
  x_13 :
  TestStr(1,1,"-v",&&fail);
  Rpush(k_16);
  goto e_20;
  k_16 :
  goto i_16;
  e_20 :
  Return();
  i_16 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(l_16));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl0(l_16),Egetd(0,5)));
  Return();
  n_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_14;
  a_14 :
  TestStr(1,1,"--version",&&fail);
  Rpush(n_16);
  goto g_20;
  n_16 :
  goto m_16;
  g_20 :
  Return();
  m_16 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(l_16));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl0(l_16),Egetd(0,5)));
  Return();
  o_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_14;
  d_14 :
  TestStr(1,1,"@version",&&fail);
  Rpush(q_16);
  goto i_20;
  q_16 :
  goto p_16;
  i_20 :
  Return();
  p_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(r_16,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl1(r_16,Egetd(0,1)),Egetd(0,2)));
  Return();
  p_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_14;
  h_14 :
  TestStr(1,1,"-i",&&fail);
  Rpush(t_16);
  goto l_20;
  t_16 :
  goto s_16;
  l_20 :
  Return();
  s_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(q_10,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl1(q_10,Egetd(0,1)),Egetd(0,2)));
  Return();
  q_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_14;
  l_14 :
  TestStr(1,1,"--input",&&fail);
  Rpush(w_16);
  goto o_20;
  w_16 :
  goto v_16;
  o_20 :
  Return();
  v_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(q_10,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl1(q_10,Egetd(0,1)),Egetd(0,2)));
  Return();
  r_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_14;
  p_14 :
  TestStr(1,1,"-o",&&fail);
  Rpush(y_16);
  goto r_20;
  y_16 :
  goto x_16;
  r_20 :
  Return();
  x_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(g_8,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl1(g_8,Egetd(0,1)),Egetd(0,2)));
  Return();
  s_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_14;
  t_14 :
  TestStr(1,1,"--output",&&fail);
  Rpush(a_17);
  goto u_20;
  a_17 :
  goto z_16;
  u_20 :
  Return();
  z_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(g_8,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl1(g_8,Egetd(0,1)),Egetd(0,2)));
  Return();
  t_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_14;
  x_14 :
  TestStr(1,1,"-b",&&fail);
  Rpush(c_17);
  goto x_20;
  c_17 :
  goto b_17;
  x_20 :
  Return();
  b_17 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_8));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl0(w_8),Egetd(0,5)));
  Return();
  u_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_15;
  a_15 :
  TestStr(1,1,"-s",&&fail);
  Rpush(e_17);
  goto z_20;
  e_17 :
  goto d_17;
  z_20 :
  Return();
  d_17 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(f_17));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl0(f_17),Egetd(0,5)));
  Return();
  v_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_15;
  d_15 :
  TestStr(1,1,"--help",&&fail);
  Rpush(i_17);
  goto b_21;
  i_17 :
  goto g_17;
  b_21 :
  Return();
  g_17 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_11));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl0(t_11),Egetd(0,5)));
  Return();
  w_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_15;
  g_15 :
  TestStr(1,1,"-h",&&fail);
  Rpush(k_17);
  goto d_21;
  k_17 :
  goto j_17;
  d_21 :
  Return();
  j_17 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_11));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl0(t_11),Egetd(0,5)));
  Return();
  x_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_15;
  j_15 :
  TestStr(1,1,"-?",&&fail);
  Rpush(m_17);
  goto f_21;
  m_17 :
  goto l_17;
  f_21 :
  Return();
  l_17 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_11));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl0(t_11),Egetd(0,5)));
  Return();
  z_12 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_21;
  i_21 :
  TestFunFC(j_1,&&fail,Egetd(0,1));
  Rpush(o_17);
  goto k_21;
  o_17 :
  goto n_17;
  k_21 :
  Return();
  n_17 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(u_7,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(q_17);
  k_22 :
  Cpush(s_17);
  Cpush(u_17);
  Ccall(_stratego_h_5);
  goto t_17;
  u_17 :
  Ccall(_stratego_g_5);
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_17);
  goto k_22;
  w_17 :
  AllBuild();
  goto v_17;
  t_17 :
  Cpop();
  v_17 :
  goto r_17;
  s_17 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_21;
  n_21 :
  TestFunFC(d_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(a_18);
  goto l_22;
  a_18 :
  goto z_17;
  l_22 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl1(o_12,Egetd(0,2)),Egetd(0,3)));
  Return();
  z_17 :
  Epopd(0,3);
  goto y_17;
  r_17 :
  Cpop();
  y_17 :
  Return();
  q_17 :
  AllBuild();
  Cpush(c_18);
  Ccall(_stratego_f_5);
  goto b_18;
  c_18 :
  Ccontinue(d_18);
  Epushd(0,6);
  Ccall(_stratego_a_5);
  Tdupl();
  Ccall(_stratego_y_4);
  Tpop();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_4);
  OneNextSon();
  Ccall(_stratego_s_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_y_4);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto q_21;
  q_21 :
  TestFunFC(h_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto r_21;
  r_21 :
  TestFunFC(h_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_21;
  s_21 :
  TestFunFC(k_1,&&fail,Egetd(0,6));
  Rpush(g_18);
  goto n_22;
  g_18 :
  goto e_18;
  n_22 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(h_1,(ATerm)ATmakeAppl2(d_1,(ATerm)ATmakeAppl1(m_7,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(h_1,Egetd(0,5),(ATerm)ATmakeAppl0(k_1))));
  Return();
  e_18 :
  Ccall(_stratego_x_4);
  Ccall(_stratego_u_4);
  Epopd(0,6);
  goto b_18;
  d_18 :
  Ccall(_stratego_t_4);
  goto h_18;
  b_18 :
  Cpop();
  h_18 :
ENDPROC

DOIT

