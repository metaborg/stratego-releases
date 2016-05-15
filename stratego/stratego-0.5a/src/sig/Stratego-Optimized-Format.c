#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,o_22);
VARDECL(AFun,q_17);
VARDECL(AFun,g_17);
VARDECL(AFun,r_16);
VARDECL(AFun,e_16);
VARDECL(AFun,q_15);
VARDECL(AFun,u_14);
VARDECL(AFun,a_14);
VARDECL(AFun,i_13);
VARDECL(AFun,m_11);
VARDECL(AFun,e_11);
VARDECL(AFun,n_8);
VARDECL(AFun,i_8);
VARDECL(AFun,y_7);
VARDECL(AFun,v_7);
VARDECL(AFun,h_7);
VARDECL(AFun,a_7);
VARDECL(AFun,q_5);
VARDECL(AFun,l_4);
VARDECL(AFun,k_4);
VARDECL(AFun,i_4);
VARDECL(AFun,f_4);
VARDECL(AFun,p_3);
VARDECL(AFun,n_3);
VARDECL(AFun,k_3);
VARDECL(AFun,h_3);
VARDECL(AFun,c_3);
VARDECL(AFun,z_2);
VARDECL(AFun,r_2);
VARDECL(AFun,o_2);
VARDECL(AFun,l_2);
VARDECL(AFun,j_2);
VARDECL(AFun,i_2);
VARDECL(AFun,e_2);
VARDECL(AFun,a_2);
VARDECL(AFun,w_1);
VARDECL(AFun,t_1);
VARDECL(AFun,q_1);
VARDECL(AFun,k_1);
VARDECL(AFun,h_1);
VARDECL(AFun,c_1);
VARDECL(AFun,x_0);
VARDECL(AFun,s_0);
VARDECL(AFun,q_0);
VARDECL(AFun,o_0);
VARDECL(AFun,m_0);
VARDECL(AFun,k_0);
VARDECL(AFun,f_0);
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
PROCDECL(_stratego_i_5);
PROCDECL(_stratego_j_5);
PROCDECL(_stratego_k_5);
PROCDECL(_stratego_l_5);
PROCDECL(_stratego_m_5);
PROCDECL(_stratego_n_5);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(o_22,ATmakeAFun("Nil",0,0));
  MOVE(q_17,ATmakeAFun("Undefined",1,0));
  MOVE(g_17,ATmakeAFun("Help",0,0));
  MOVE(r_16,ATmakeAFun("Input",1,0));
  MOVE(e_16,ATmakeAFun("Binary",0,0));
  MOVE(q_15,ATmakeAFun("Output",1,0));
  MOVE(u_14,ATmakeAFun("Program",1,0));
  MOVE(a_14,ATmakeAFun("Runtime",1,0));
  MOVE(i_13,ATmakeAFun("Silent",0,0));
  MOVE(m_11,ATmakeAFun("TCons",2,0));
  MOVE(e_11,ATmakeAFun("TNil",0,0));
  MOVE(n_8,ATmakeAFun("DontInline",0,0));
  MOVE(i_8,ATmakeAFun("Assign",1,0));
  MOVE(y_7,ATmakeAFun("Assign",2,0));
  MOVE(v_7,ATmakeAFun("Continue",1,0));
  MOVE(h_7,ATmakeAFun("Alt",3,0));
  MOVE(a_7,ATmakeAFun("Case",4,0));
  MOVE(q_5,ATmakeAFun("SDef",4,0));
  MOVE(l_4,ATmakeAFun("SDef",3,0));
  MOVE(k_4,ATmakeAFun("Let",2,0));
  MOVE(i_4,ATmakeAFun("Prim",1,0));
  MOVE(f_4,ATmakeAFun("Where",1,0));
  MOVE(p_3,ATmakeAFun("Scope",2,0));
  MOVE(n_3,ATmakeAFun("Build",1,0));
  MOVE(k_3,ATmakeAFun("Thread",1,0));
  MOVE(h_3,ATmakeAFun("All",1,0));
  MOVE(c_3,ATmakeAFun("Some",1,0));
  MOVE(z_2,ATmakeAFun("One",1,0));
  MOVE(r_2,ATmakeAFun("Cong",2,0));
  MOVE(o_2,ATmakeAFun("Path",2,0));
  MOVE(l_2,ATmakeAFun("Rec",2,0));
  MOVE(j_2,ATmakeAFun("SVar",1,0));
  MOVE(i_2,ATmakeAFun("Call",2,0));
  MOVE(e_2,ATmakeAFun("LChoice",2,0));
  MOVE(a_2,ATmakeAFun("Choice",2,0));
  MOVE(w_1,ATmakeAFun("Seq",2,0));
  MOVE(t_1,ATmakeAFun("Test",1,0));
  MOVE(q_1,ATmakeAFun("Not",1,0));
  MOVE(k_1,ATmakeAFun("Id",0,0));
  MOVE(h_1,ATmakeAFun("Fail",0,0));
  MOVE(c_1,ATmakeAFun("BuildDefault",1,0));
  MOVE(x_0,ATmakeAFun("Cons",2,0));
  MOVE(s_0,ATmakeAFun("Op",2,0));
  MOVE(q_0,ATmakeAFun("Str",1,0));
  MOVE(o_0,ATmakeAFun("Real",1,0));
  MOVE(m_0,ATmakeAFun("Int",1,0));
  MOVE(k_0,ATmakeAFun("Var",1,0));
  MOVE(f_0,ATmakeAFun("Wld",0,0));
ENDPROC

PROC(_stratego_n_4)
  _ST_is_real();
ENDPROC

PROC(_stratego_o_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_0;
  b_0 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  Rpush(e_0);
  goto a_0;
  e_0 :
  goto d_0;
  a_0 :
  Return();
  d_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_4)
  Rpush(g_0);
  t_5 :
  Cpush(i_0);
  Ccall(_stratego_o_4);
  goto h_0;
  i_0 :
  Ccontinue(j_0);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  AllBuild();
  goto h_0;
  j_0 :
  Ccontinue(l_0);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  goto h_0;
  l_0 :
  Ccontinue(n_0);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_4);
  AllBuild();
  goto h_0;
  n_0 :
  Ccontinue(p_0);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  AllBuild();
  goto h_0;
  p_0 :
  Ccontinue(r_0);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Rpush(t_0);
  u_5 :
  Cpush(v_0);
  Ccall(_stratego_n_5);
  goto u_0;
  v_0 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Rpush(y_0);
  goto t_5;
  y_0 :
  OneNextSon();
  Rpush(a_1);
  goto u_5;
  a_1 :
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
  Ccontinue(b_1);
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Rpush(d_1);
  goto t_5;
  d_1 :
  AllBuild();
  goto h_0;
  b_1 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a term-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_5);
  Epopd(0,1);
  Tpop();
  goto e_1;
  h_0 :
  Cpop();
  e_1 :
  Return();
  g_0 :
ENDPROC

PROC(_stratego_q_4)
  _ST_is_int();
ENDPROC

PROC(_stratego_r_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_5;
  w_5 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  Rpush(g_1);
  goto v_5;
  g_1 :
  goto f_1;
  v_5 :
  Return();
  f_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_5;
  z_5 :
  TestFunFC(k_1,&&fail,Egetd(0,1));
  Rpush(j_1);
  goto y_5;
  j_1 :
  goto i_1;
  y_5 :
  Return();
  i_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_4)
  Rpush(l_1);
  i_7 :
  Cpush(n_1);
  Ccall(_stratego_s_4);
  goto m_1;
  n_1 :
  Ccontinue(o_1);
  Ccall(_stratego_r_4);
  goto m_1;
  o_1 :
  Ccontinue(p_1);
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Rpush(r_1);
  goto i_7;
  r_1 :
  AllBuild();
  goto m_1;
  p_1 :
  Ccontinue(s_1);
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Rpush(u_1);
  goto i_7;
  u_1 :
  AllBuild();
  goto m_1;
  s_1 :
  Ccontinue(v_1);
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Rpush(x_1);
  goto i_7;
  x_1 :
  OneNextSon();
  Rpush(y_1);
  goto i_7;
  y_1 :
  AllBuild();
  goto m_1;
  v_1 :
  Ccontinue(z_1);
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Rpush(b_2);
  goto i_7;
  b_2 :
  OneNextSon();
  Rpush(c_2);
  goto i_7;
  c_2 :
  AllBuild();
  goto m_1;
  z_1 :
  Ccontinue(d_2);
  TestFunTop(e_2);
  TravInit();
  OneNextSon();
  Rpush(f_2);
  goto i_7;
  f_2 :
  OneNextSon();
  Rpush(g_2);
  goto i_7;
  g_2 :
  AllBuild();
  goto m_1;
  d_2 :
  Ccontinue(h_2);
  TestFunTop(i_2);
  TravInit();
  OneNextSon();
  TestFunTop(j_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_n_5);
  AllBuild();
  goto m_1;
  h_2 :
  Ccontinue(k_2);
  TestFunTop(l_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Rpush(m_2);
  goto i_7;
  m_2 :
  AllBuild();
  goto m_1;
  k_2 :
  Ccontinue(n_2);
  TestFunTop(o_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_4);
  OneNextSon();
  Rpush(p_2);
  goto i_7;
  p_2 :
  AllBuild();
  goto m_1;
  n_2 :
  Ccontinue(q_2);
  TestFunTop(r_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Rpush(s_2);
  j_7 :
  Cpush(u_2);
  Ccall(_stratego_n_5);
  goto t_2;
  u_2 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Rpush(w_2);
  goto i_7;
  w_2 :
  OneNextSon();
  Rpush(x_2);
  goto j_7;
  x_2 :
  AllBuild();
  goto v_2;
  t_2 :
  Cpop();
  v_2 :
  Return();
  s_2 :
  AllBuild();
  goto m_1;
  q_2 :
  Ccontinue(y_2);
  TestFunTop(z_2);
  TravInit();
  OneNextSon();
  Rpush(a_3);
  goto i_7;
  a_3 :
  AllBuild();
  goto m_1;
  y_2 :
  Ccontinue(b_3);
  TestFunTop(c_3);
  TravInit();
  OneNextSon();
  Rpush(d_3);
  goto i_7;
  d_3 :
  AllBuild();
  goto m_1;
  b_3 :
  Ccontinue(e_3);
  TestFunTop(c_3);
  TravInit();
  OneNextSon();
  Rpush(f_3);
  goto i_7;
  f_3 :
  AllBuild();
  goto m_1;
  e_3 :
  Ccontinue(g_3);
  TestFunTop(h_3);
  TravInit();
  OneNextSon();
  Rpush(i_3);
  goto i_7;
  i_3 :
  AllBuild();
  goto m_1;
  g_3 :
  Ccontinue(j_3);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Rpush(l_3);
  goto i_7;
  l_3 :
  AllBuild();
  goto m_1;
  j_3 :
  Ccontinue(m_3);
  TestFunTop(n_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  goto m_1;
  m_3 :
  Ccontinue(o_3);
  TestFunTop(p_3);
  TravInit();
  OneNextSon();
  Rpush(q_3);
  k_7 :
  Cpush(s_3);
  Ccall(_stratego_n_5);
  goto r_3;
  s_3 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Cpush(v_3);
  Ccall(_stratego_u_4);
  goto u_3;
  v_3 :
  Rpush(x_3);
  l_7 :
  Cpush(z_3);
  Ccall(_stratego_n_5);
  goto y_3;
  z_3 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_4);
  OneNextSon();
  Rpush(b_4);
  goto l_7;
  b_4 :
  AllBuild();
  goto a_4;
  y_3 :
  Cpop();
  a_4 :
  Return();
  x_3 :
  goto w_3;
  u_3 :
  Cpop();
  w_3 :
  OneNextSon();
  Rpush(c_4);
  goto k_7;
  c_4 :
  AllBuild();
  goto t_3;
  r_3 :
  Cpop();
  t_3 :
  Return();
  q_3 :
  OneNextSon();
  Rpush(d_4);
  goto i_7;
  d_4 :
  AllBuild();
  goto m_1;
  o_3 :
  Ccontinue(e_4);
  TestFunTop(f_4);
  TravInit();
  OneNextSon();
  Rpush(g_4);
  goto i_7;
  g_4 :
  AllBuild();
  goto m_1;
  e_4 :
  Ccontinue(h_4);
  TestFunTop(i_4);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  AllBuild();
  goto m_1;
  h_4 :
  Ccontinue(j_4);
  TestFunTop(k_4);
  TravInit();
  OneNextSon();
  TestFunTop(l_4);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Ccall(_stratego_n_5);
  OneNextSon();
  Rpush(m_4);
  goto i_7;
  m_4 :
  AllBuild();
  OneNextSon();
  Rpush(o_5);
  goto i_7;
  o_5 :
  AllBuild();
  goto m_1;
  j_4 :
  Ccontinue(p_5);
  TestFunTop(k_4);
  TravInit();
  OneNextSon();
  TestFunTop(q_5);
  TravInit();
  OneNextSon();
  Rpush(r_5);
  m_7 :
  Cpush(k_6);
  Ccall(_stratego_n_5);
  goto s_5;
  k_6 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_6);
  goto m_7;
  m_6 :
  AllBuild();
  goto l_6;
  s_5 :
  Cpop();
  l_6 :
  Return();
  r_5 :
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Ccall(_stratego_n_5);
  OneNextSon();
  Rpush(n_6);
  goto i_7;
  n_6 :
  AllBuild();
  OneNextSon();
  Rpush(o_6);
  goto i_7;
  o_6 :
  AllBuild();
  goto m_1;
  p_5 :
  Ccontinue(z_6);
  TestFunTop(a_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  goto c_6;
  c_6 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(c_7);
  goto b_6;
  c_7 :
  goto b_7;
  b_6 :
  Return();
  b_7 :
  Epopd(0,2);
  OneNextSon();
  Rpush(d_7);
  n_7 :
  Cpush(f_7);
  Ccall(_stratego_n_5);
  goto e_7;
  f_7 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  TestFunTop(h_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Rpush(r_7);
  goto i_7;
  r_7 :
  AllBuild();
  OneNextSon();
  Rpush(s_7);
  goto n_7;
  s_7 :
  AllBuild();
  goto g_7;
  e_7 :
  Cpop();
  g_7 :
  Return();
  d_7 :
  OneNextSon();
  Rpush(t_7);
  goto i_7;
  t_7 :
  AllBuild();
  goto m_1;
  z_6 :
  Ccontinue(u_7);
  TestFunTop(v_7);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  AllBuild();
  goto m_1;
  u_7 :
  Ccontinue(x_7);
  TestFunTop(y_7);
  TravInit();
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  goto e_6;
  e_6 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(a_8);
  goto d_6;
  a_8 :
  goto z_7;
  d_6 :
  Return();
  z_7 :
  Epopd(0,2);
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  goto m_1;
  x_7 :
  Ccontinue(b_8);
  TestFunTop(y_7);
  TravInit();
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  goto g_6;
  g_6 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_8);
  goto f_6;
  d_8 :
  goto c_8;
  f_6 :
  Return();
  c_8 :
  Epopd(0,2);
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  goto m_1;
  b_8 :
  Ccontinue(e_8);
  Epushd(0,3);
  MoveTop(0,1);
  goto i_6;
  i_6 :
  TestFunFC(i_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto j_6;
  j_6 :
  TestFunFC(k_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(h_8);
  goto h_6;
  h_8 :
  goto f_8;
  h_6 :
  Return();
  f_8 :
  Epopd(0,3);
  goto m_1;
  e_8 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a strategy-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_5);
  Epopd(0,1);
  Tpop();
  goto j_8;
  m_1 :
  Cpop();
  j_8 :
  Return();
  l_1 :
ENDPROC

PROC(_stratego_u_4)
  _ST_is_string();
ENDPROC

PROC(_stratego_v_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_7;
  p_7 :
  TestFunFC(n_8,&&fail,Egetd(0,1));
  Rpush(l_8);
  goto o_7;
  l_8 :
  goto k_8;
  o_7 :
  Return();
  k_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_4)
  Cpush(p_8);
  TestFunTop(l_4);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Ccall(_stratego_n_5);
  OneNextSon();
  Ccall(_stratego_t_4);
  AllBuild();
  goto o_8;
  p_8 :
  Ccontinue(q_8);
  TestFunTop(q_5);
  TravInit();
  OneNextSon();
  Rpush(r_8);
  g_8 :
  Cpush(t_8);
  Ccall(_stratego_n_5);
  goto s_8;
  t_8 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Rpush(v_8);
  goto g_8;
  v_8 :
  AllBuild();
  goto u_8;
  s_8 :
  Cpop();
  u_8 :
  Return();
  r_8 :
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Ccall(_stratego_n_5);
  OneNextSon();
  Ccall(_stratego_t_4);
  AllBuild();
  goto o_8;
  q_8 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a strategy-definition: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_5);
  Epopd(0,1);
  Tpop();
  goto c_10;
  o_8 :
  Cpop();
  c_10 :
ENDPROC

PROC(_stratego_x_4)
  Cpush(e_10);
  Rpush(f_10);
  w_8 :
  Cpush(q_10);
  Ccall(_stratego_n_5);
  goto o_10;
  q_10 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_4);
  OneNextSon();
  Rpush(s_10);
  goto w_8;
  s_10 :
  AllBuild();
  goto r_10;
  o_10 :
  Cpop();
  r_10 :
  Return();
  f_10 :
  goto d_10;
  e_10 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a strategy-specification: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_5);
  Epopd(0,1);
  Tpop();
  goto t_10;
  d_10 :
  Cpop();
  t_10 :
ENDPROC

PROC(_stratego_y_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_8;
  y_8 :
  TestFunFC(e_11,&&fail,Egetd(0,1));
  Rpush(d_11);
  goto x_8;
  d_11 :
  goto u_10;
  x_8 :
  Return();
  u_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_i_5);
  Tset(MakeInt(1));
  Ccall(_stratego_h_5);
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,2);
  Tdupl();
  Cpush(g_11);
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Cpush(o_11);
  Tdupl();
  Rpush(p_11);
  w_9 :
  Cpush(s_11);
  Epushd(1,3);
  MoveTop(1,1);
  goto b_9;
  b_9 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_9;
  c_9 :
  TestFunFC(i_13,&&fail,Egetd(1,2));
  Rpush(f_13);
  goto a_9;
  f_13 :
  goto c_13;
  a_9 :
  Return();
  c_13 :
  Epopd(1,3);
  goto q_11;
  s_11 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_13);
  goto w_9;
  o_13 :
  AllBuild();
  goto l_13;
  q_11 :
  Cpop();
  l_13 :
  Return();
  p_11 :
  Cpop();
  Crestore();
  Cjump();
  o_11 :
  OneNextSon();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Rpush(r_13);
  x_9 :
  Cpush(v_13);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_9;
  e_9 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_9;
  f_9 :
  TestFunFC(a_14,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_13);
  goto d_9;
  z_13 :
  goto w_13;
  d_9 :
  Move(0,2,1,3);
  Return();
  w_13 :
  Epopd(1,4);
  goto s_13;
  v_13 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_14);
  goto x_9;
  e_14 :
  AllBuild();
  goto d_14;
  s_13 :
  Cpop();
  d_14 :
  Return();
  r_13 :
  OneNextSon();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Rpush(h_14);
  y_9 :
  Cpush(l_14);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_9;
  h_9 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_9;
  i_9 :
  TestFunFC(u_14,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_14);
  goto g_9;
  r_14 :
  goto o_14;
  g_9 :
  Move(0,1,1,3);
  Return();
  o_14 :
  Epopd(1,4);
  goto i_14;
  l_14 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_15);
  goto y_9;
  f_15 :
  AllBuild();
  goto x_14;
  i_14 :
  Cpop();
  x_14 :
  Return();
  h_14 :
  OneNextSon();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_i_5);
  goto f_11;
  g_11 :
  goto g_15;
  f_11 :
  Cpop();
  g_15 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_h_5);
  Epopd(0,2);
ENDPROC

PROC(_stratego_b_5)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_c_5)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,1);
  Tdupl();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Cpush(j_15);
  Rpush(k_15);
  y_10 :
  Cpush(n_15);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_10;
  a_10 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_10;
  b_10 :
  TestFunFC(q_15,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_15);
  goto z_9;
  p_15 :
  goto o_15;
  z_9 :
  Move(0,1,1,3);
  Return();
  o_15 :
  Epopd(1,4);
  goto l_15;
  n_15 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_15);
  goto y_10;
  t_15 :
  AllBuild();
  goto s_15;
  l_15 :
  Cpop();
  s_15 :
  Return();
  k_15 :
  goto i_15;
  j_15 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto u_15;
  i_15 :
  Cpop();
  u_15 :
  OneNextSon();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  Cpush(x_15);
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Rpush(y_15);
  z_10 :
  Cpush(a_16);
  Epushd(1,3);
  MoveTop(1,1);
  goto h_10;
  h_10 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_10;
  i_10 :
  TestFunFC(e_16,&&fail,Egetd(1,2));
  Rpush(d_16);
  goto g_10;
  d_16 :
  goto c_16;
  g_10 :
  Return();
  c_16 :
  Epopd(1,3);
  goto z_15;
  a_16 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_16);
  goto z_10;
  g_16 :
  AllBuild();
  goto f_16;
  z_15 :
  Cpop();
  f_16 :
  Return();
  y_15 :
  OneNextSon();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_5);
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  goto v_15;
  x_15 :
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_5);
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  goto i_16;
  v_15 :
  Cpop();
  i_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_5)
  _ST_dtime();
ENDPROC

PROC(_stratego_f_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_g_5)
  Epushd(0,3);
  Tdupl();
  Cpush(k_16);
  Rpush(l_16);
  t_11 :
  Cpush(n_16);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_11;
  b_11 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_11;
  c_11 :
  TestFunFC(r_16,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_16);
  goto a_11;
  q_16 :
  goto o_16;
  a_11 :
  Move(0,1,1,3);
  Return();
  o_16 :
  Epopd(1,4);
  goto m_16;
  n_16 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_16);
  goto t_11;
  t_16 :
  AllBuild();
  goto s_16;
  m_16 :
  Cpop();
  s_16 :
  Return();
  l_16 :
  goto j_16;
  k_16 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto u_16;
  j_16 :
  Cpop();
  u_16 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_f_5);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_h_5)
  _ST_exit();
ENDPROC

PROC(_stratego_i_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_j_5)
  Epushd(0,1);
  Tdupl();
  Rpush(v_16);
  c_12 :
  Cpush(y_16);
  Epushd(1,4);
  MoveTop(1,1);
  goto v_11;
  v_11 :
  TestFunFC(x_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto w_11;
  w_11 :
  TestFunFC(u_14,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(a_17);
  goto u_11;
  a_17 :
  goto z_16;
  u_11 :
  Move(0,1,1,3);
  Return();
  z_16 :
  Epopd(1,4);
  goto w_16;
  y_16 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_17);
  goto c_12;
  c_17 :
  AllBuild();
  goto b_17;
  w_16 :
  Cpop();
  b_17 :
  Return();
  v_16 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_i_5);
  Tset(MakeInt(1));
  Ccall(_stratego_h_5);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_12;
  e_12 :
  TestFunFC(g_17,&&fail,Egetd(0,1));
  Rpush(e_17);
  goto d_12;
  e_17 :
  goto d_17;
  d_12 :
  Return();
  d_17 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_5)
  Tdupl();
  h_17 :
  TestFunTop(x_0);
  Cpush(i_17);
  Arg(0);
  Cpush(l_17);
  Ccall(_stratego_k_5);
  goto k_17;
  l_17 :
  Epushd(0,2);
  MoveTop(0,1);
  goto h_12;
  h_12 :
  TestFunFC(q_17,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(o_17);
  goto g_12;
  o_17 :
  goto n_17;
  g_12 :
  Return();
  n_17 :
  Epopd(0,2);
  goto m_17;
  k_17 :
  Cpop();
  m_17 :
  Tpop();
  Cpop();
  goto j_17;
  i_17 :
  Arg(1);
  Tdrop();
  goto h_17;
  j_17 :
  Tpop();
  Ccall(_stratego_j_5);
ENDPROC

PROC(_stratego_m_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto y_14;
  y_14 :
  TestFunFC(x_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto z_14;
  z_14 :
  TestFunFC(x_0,&&k_18,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(m_18);
  Rpush(n_18);
  goto l_12;
  n_18 :
  goto l_18;
  m_18 :
  Ccontinue(p_18);
  Rpush(q_18);
  goto m_12;
  q_18 :
  goto l_18;
  p_18 :
  Ccontinue(r_18);
  Rpush(s_18);
  goto n_12;
  s_18 :
  goto l_18;
  r_18 :
  Ccontinue(u_18);
  Rpush(v_18);
  goto o_12;
  v_18 :
  goto l_18;
  u_18 :
  Ccontinue(z_18);
  Rpush(c_19);
  goto p_12;
  c_19 :
  goto l_18;
  z_18 :
  Ccontinue(i_19);
  Rpush(m_19);
  goto q_12;
  m_19 :
  goto l_18;
  i_19 :
  Ccontinue(n_19);
  Rpush(v_19);
  goto r_12;
  v_19 :
  goto l_18;
  n_19 :
  Ccontinue(w_19);
  Rpush(y_19);
  goto s_12;
  y_19 :
  goto l_18;
  w_19 :
  Ccontinue(z_19);
  Rpush(a_20);
  goto t_12;
  a_20 :
  goto l_18;
  z_19 :
  Ccontinue(b_20);
  Rpush(c_20);
  goto u_12;
  c_20 :
  goto l_18;
  b_20 :
  Ccontinue(d_20);
  Rpush(e_20);
  goto v_12;
  e_20 :
  goto l_18;
  d_20 :
  Ccontinue(f_20);
  Rpush(g_20);
  goto w_12;
  g_20 :
  goto l_18;
  f_20 :
  Ccontinue(h_20);
  Rpush(i_20);
  goto x_12;
  i_20 :
  goto l_18;
  h_20 :
  Ccontinue(j_20);
  Rpush(k_20);
  goto y_12;
  k_20 :
  goto l_18;
  j_20 :
  Rpush(m_20);
  goto z_12;
  m_20 :
  goto l_20;
  l_18 :
  Cpop();
  l_20 :
  goto i_18;
  k_18 :
  Cpush(o_20);
  Rpush(p_20);
  goto l_12;
  p_20 :
  goto n_20;
  o_20 :
  Ccontinue(q_20);
  Rpush(r_20);
  goto m_12;
  r_20 :
  goto n_20;
  q_20 :
  Ccontinue(s_20);
  Rpush(t_20);
  goto n_12;
  t_20 :
  goto n_20;
  s_20 :
  Ccontinue(u_20);
  Rpush(v_20);
  goto o_12;
  v_20 :
  goto n_20;
  u_20 :
  Ccontinue(w_20);
  Rpush(x_20);
  goto p_12;
  x_20 :
  goto n_20;
  w_20 :
  Ccontinue(y_20);
  Rpush(z_20);
  goto v_12;
  z_20 :
  goto n_20;
  y_20 :
  Ccontinue(a_21);
  Rpush(b_21);
  goto w_12;
  b_21 :
  goto n_20;
  a_21 :
  Ccontinue(c_21);
  Rpush(d_21);
  goto x_12;
  d_21 :
  goto n_20;
  c_21 :
  Ccontinue(e_21);
  Rpush(f_21);
  goto y_12;
  f_21 :
  goto n_20;
  e_21 :
  Rpush(h_21);
  goto z_12;
  h_21 :
  goto g_21;
  n_20 :
  Cpop();
  g_21 :
  goto i_18;
  i_18 :
  goto h_18;
  z_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_14;
  w_14 :
  TestStr(1,1,"-?",&&fail);
  Rpush(j_21);
  goto v_14;
  j_21 :
  goto i_21;
  v_14 :
  Return();
  i_21 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  h_18 :
  goto g_18;
  y_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_14;
  t_14 :
  TestStr(1,1,"-h",&&fail);
  Rpush(l_21);
  goto s_14;
  l_21 :
  goto k_21;
  s_14 :
  Return();
  k_21 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  g_18 :
  goto f_18;
  x_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_14;
  q_14 :
  TestStr(1,1,"--help",&&fail);
  Rpush(n_21);
  goto p_14;
  n_21 :
  goto m_21;
  p_14 :
  Return();
  m_21 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  f_18 :
  goto d_18;
  w_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_14;
  n_14 :
  TestStr(1,1,"-s",&&fail);
  Rpush(p_21);
  goto m_14;
  p_21 :
  goto o_21;
  m_14 :
  Return();
  o_21 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  d_18 :
  goto c_18;
  v_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_14;
  k_14 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_21);
  goto j_14;
  r_21 :
  goto q_21;
  j_14 :
  Return();
  q_21 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  c_18 :
  goto b_18;
  u_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_14;
  g_14 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_21);
  goto f_14;
  t_21 :
  goto s_21;
  f_14 :
  Return();
  s_21 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  b_18 :
  goto a_18;
  t_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_14;
  c_14 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_21);
  goto b_14;
  v_21 :
  goto u_21;
  b_14 :
  Return();
  u_21 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  a_18 :
  goto y_17;
  s_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_13;
  y_13 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_21);
  goto x_13;
  x_21 :
  goto w_21;
  x_13 :
  Return();
  w_21 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  y_17 :
  goto x_17;
  r_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_13;
  u_13 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_21);
  goto t_13;
  z_21 :
  goto y_21;
  t_13 :
  Return();
  y_21 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  x_17 :
  goto w_17;
  q_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_13;
  q_13 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_22);
  goto p_13;
  b_22 :
  goto a_22;
  p_13 :
  Return();
  a_22 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  w_17 :
  goto v_17;
  p_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_13;
  n_13 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_22);
  goto m_13;
  d_22 :
  goto c_22;
  m_13 :
  Return();
  c_22 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  v_17 :
  goto u_17;
  o_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_13;
  k_13 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_22);
  goto j_13;
  f_22 :
  goto e_22;
  j_13 :
  Return();
  e_22 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  u_17 :
  goto t_17;
  n_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_13;
  h_13 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_22);
  goto g_13;
  h_22 :
  goto g_22;
  g_13 :
  Return();
  g_22 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  t_17 :
  goto s_17;
  m_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_13;
  e_13 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_22);
  goto d_13;
  j_22 :
  goto i_22;
  d_13 :
  Return();
  i_22 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  s_17 :
  goto r_17;
  l_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_13;
  b_13 :
  TestStr(1,1,"-S",&&fail);
  Rpush(l_22);
  goto a_13;
  l_22 :
  goto k_22;
  a_13 :
  Return();
  k_22 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  r_17 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_18;
  x_18 :
  TestFunFC(o_22,&&fail,Egetd(0,1));
  Rpush(n_22);
  goto w_18;
  n_22 :
  goto m_22;
  w_18 :
  Return();
  m_22 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(p_22);
  x_19 :
  Cpush(r_22);
  Cpush(t_22);
  Ccall(_stratego_n_5);
  goto s_22;
  t_22 :
  Ccall(_stratego_m_5);
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_22);
  goto x_19;
  v_22 :
  AllBuild();
  goto u_22;
  s_22 :
  Cpop();
  u_22 :
  goto q_22;
  r_22 :
  Epushd(0,3);
  MoveTop(0,1);
  goto b_19;
  b_19 :
  TestFunFC(x_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(y_22);
  goto a_19;
  y_22 :
  goto x_22;
  a_19 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  x_22 :
  Epopd(0,3);
  goto w_22;
  q_22 :
  Cpop();
  w_22 :
  Return();
  p_22 :
  AllBuild();
  Cpush(a_23);
  Ccall(_stratego_l_5);
  goto z_22;
  a_23 :
  Ccontinue(b_23);
  Epushd(0,6);
  Ccall(_stratego_g_5);
  Tdupl();
  Ccall(_stratego_e_5);
  Tpop();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(m_11);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_4);
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_e_5);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto e_19;
  e_19 :
  TestFunFC(m_11,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto f_19;
  f_19 :
  TestFunFC(m_11,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto g_19;
  g_19 :
  TestFunFC(e_11,&&fail,Egetd(0,6));
  Rpush(d_23);
  goto d_19;
  d_23 :
  goto c_23;
  d_19 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  c_23 :
  Ccall(_stratego_d_5);
  Ccall(_stratego_a_5);
  Epopd(0,6);
  goto z_22;
  b_23 :
  Ccall(_stratego_z_4);
  goto e_23;
  z_22 :
  Cpop();
  e_23 :
ENDPROC

DOIT

