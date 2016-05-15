#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,q_19);
VARDECL(AFun,k_14);
VARDECL(AFun,q_13);
VARDECL(AFun,n_12);
VARDECL(AFun,c_10);
VARDECL(AFun,a_9);
VARDECL(AFun,j_7);
VARDECL(AFun,a_7);
VARDECL(AFun,r_6);
VARDECL(AFun,h_6);
VARDECL(AFun,e_6);
VARDECL(AFun,j_5);
VARDECL(AFun,f_4);
VARDECL(AFun,c_4);
VARDECL(AFun,u_3);
VARDECL(AFun,s_3);
VARDECL(AFun,q_3);
VARDECL(AFun,n_3);
VARDECL(AFun,k_3);
VARDECL(AFun,f_3);
VARDECL(AFun,c_3);
VARDECL(AFun,u_2);
VARDECL(AFun,r_2);
VARDECL(AFun,o_2);
VARDECL(AFun,m_2);
VARDECL(AFun,l_2);
VARDECL(AFun,h_2);
VARDECL(AFun,d_2);
VARDECL(AFun,z_1);
VARDECL(AFun,w_1);
VARDECL(AFun,t_1);
VARDECL(AFun,n_1);
VARDECL(AFun,k_1);
VARDECL(AFun,e_1);
VARDECL(AFun,y_0);
VARDECL(AFun,v_0);
VARDECL(AFun,s_0);
VARDECL(AFun,q_0);
VARDECL(AFun,o_0);
VARDECL(AFun,m_0);
VARDECL(AFun,k_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_h_4);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(q_19,ATmakeAFun("Nil",0,0));
  MOVE(k_14,ATmakeAFun("Undefined",1,0));
  MOVE(q_13,ATmakeAFun("Help",0,0));
  MOVE(n_12,ATmakeAFun("Input",1,0));
  MOVE(c_10,ATmakeAFun("Binary",0,0));
  MOVE(a_9,ATmakeAFun("Output",1,0));
  MOVE(j_7,ATmakeAFun("Program",1,0));
  MOVE(a_7,ATmakeAFun("Runtime",1,0));
  MOVE(r_6,ATmakeAFun("Silent",0,0));
  MOVE(h_6,ATmakeAFun("TCons",2,0));
  MOVE(e_6,ATmakeAFun("TNil",0,0));
  MOVE(j_5,ATmakeAFun("SDef",3,0));
  MOVE(f_4,ATmakeAFun("Prim",1,0));
  MOVE(c_4,ATmakeAFun("Where",1,0));
  MOVE(u_3,ATmakeAFun("Scope",2,0));
  MOVE(s_3,ATmakeAFun("Build",1,0));
  MOVE(q_3,ATmakeAFun("Match",1,0));
  MOVE(n_3,ATmakeAFun("Thread",1,0));
  MOVE(k_3,ATmakeAFun("All",1,0));
  MOVE(f_3,ATmakeAFun("Some",1,0));
  MOVE(c_3,ATmakeAFun("One",1,0));
  MOVE(u_2,ATmakeAFun("Cong",2,0));
  MOVE(r_2,ATmakeAFun("Path",2,0));
  MOVE(o_2,ATmakeAFun("Rec",2,0));
  MOVE(m_2,ATmakeAFun("SVar",1,0));
  MOVE(l_2,ATmakeAFun("Call",2,0));
  MOVE(h_2,ATmakeAFun("LChoice",2,0));
  MOVE(d_2,ATmakeAFun("Choice",2,0));
  MOVE(z_1,ATmakeAFun("Seq",2,0));
  MOVE(w_1,ATmakeAFun("Test",1,0));
  MOVE(t_1,ATmakeAFun("Not",1,0));
  MOVE(n_1,ATmakeAFun("Id",0,0));
  MOVE(k_1,ATmakeAFun("Fail",0,0));
  MOVE(e_1,ATmakeAFun("Cons",2,0));
  MOVE(y_0,ATmakeAFun("Op",2,0));
  MOVE(v_0,ATmakeAFun("As",2,0));
  MOVE(s_0,ATmakeAFun("BuildDefault",1,0));
  MOVE(q_0,ATmakeAFun("Str",1,0));
  MOVE(o_0,ATmakeAFun("Real",1,0));
  MOVE(m_0,ATmakeAFun("Int",1,0));
  MOVE(k_0,ATmakeAFun("Var",1,0));
  MOVE(f_0,ATmakeAFun("Wld",0,0));
ENDPROC

PROC(_stratego_h_4)
  _ST_is_real();
ENDPROC

PROC(_stratego_i_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  Rpush(e_0);
  goto a_0;
  e_0 :
  goto b_0;
  a_0 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_4)
  Rpush(g_0);
  o_5 :
  Cpush(i_0);
  Ccall(_stratego_i_4);
  goto h_0;
  i_0 :
  Ccontinue(j_0);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_4);
  AllBuild();
  goto h_0;
  j_0 :
  Ccontinue(l_0);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_4);
  AllBuild();
  goto h_0;
  l_0 :
  Ccontinue(n_0);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_4);
  AllBuild();
  goto h_0;
  n_0 :
  Ccontinue(p_0);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_4);
  AllBuild();
  goto h_0;
  p_0 :
  Ccontinue(r_0);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Rpush(t_0);
  goto o_5;
  t_0 :
  AllBuild();
  goto h_0;
  r_0 :
  Ccontinue(u_0);
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_4);
  AllBuild();
  OneNextSon();
  Rpush(w_0);
  goto o_5;
  w_0 :
  AllBuild();
  goto h_0;
  u_0 :
  Ccontinue(x_0);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_4);
  OneNextSon();
  Rpush(z_0);
  p_5 :
  Cpush(c_1);
  Ccall(_stratego_g_5);
  goto a_1;
  c_1 :
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Rpush(f_1);
  goto o_5;
  f_1 :
  OneNextSon();
  Rpush(g_1);
  goto p_5;
  g_1 :
  AllBuild();
  goto d_1;
  a_1 :
  Cpop();
  d_1 :
  Return();
  z_0 :
  AllBuild();
  goto h_0;
  x_0 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("not a term-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_b_5);
  Epopd(0,1);
  Tpop();
  goto h_1;
  h_0 :
  Cpop();
  h_1 :
  Return();
  g_0 :
ENDPROC

PROC(_stratego_k_4)
  _ST_is_int();
ENDPROC

PROC(_stratego_l_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_5;
  r_5 :
  TestFunFC(k_1,&&fail,Egetd(0,1));
  Rpush(j_1);
  goto q_5;
  j_1 :
  goto i_1;
  q_5 :
  Return();
  i_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_5;
  u_5 :
  TestFunFC(n_1,&&fail,Egetd(0,1));
  Rpush(m_1);
  goto t_5;
  m_1 :
  goto l_1;
  t_5 :
  Return();
  l_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_4)
  Rpush(o_1);
  l_6 :
  Cpush(q_1);
  Ccall(_stratego_m_4);
  goto p_1;
  q_1 :
  Ccontinue(r_1);
  Ccall(_stratego_l_4);
  goto p_1;
  r_1 :
  Ccontinue(s_1);
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Rpush(u_1);
  goto l_6;
  u_1 :
  AllBuild();
  goto p_1;
  s_1 :
  Ccontinue(v_1);
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Rpush(x_1);
  goto l_6;
  x_1 :
  AllBuild();
  goto p_1;
  v_1 :
  Ccontinue(y_1);
  TestFunTop(z_1);
  TravInit();
  OneNextSon();
  Rpush(a_2);
  goto l_6;
  a_2 :
  OneNextSon();
  Rpush(b_2);
  goto l_6;
  b_2 :
  AllBuild();
  goto p_1;
  y_1 :
  Ccontinue(c_2);
  TestFunTop(d_2);
  TravInit();
  OneNextSon();
  Rpush(e_2);
  goto l_6;
  e_2 :
  OneNextSon();
  Rpush(f_2);
  goto l_6;
  f_2 :
  AllBuild();
  goto p_1;
  c_2 :
  Ccontinue(g_2);
  TestFunTop(h_2);
  TravInit();
  OneNextSon();
  Rpush(i_2);
  goto l_6;
  i_2 :
  OneNextSon();
  Rpush(j_2);
  goto l_6;
  j_2 :
  AllBuild();
  goto p_1;
  g_2 :
  Ccontinue(k_2);
  TestFunTop(l_2);
  TravInit();
  OneNextSon();
  TestFunTop(m_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_4);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_g_5);
  AllBuild();
  goto p_1;
  k_2 :
  Ccontinue(n_2);
  TestFunTop(o_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_4);
  OneNextSon();
  Rpush(p_2);
  goto l_6;
  p_2 :
  AllBuild();
  goto p_1;
  n_2 :
  Ccontinue(q_2);
  TestFunTop(r_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_4);
  OneNextSon();
  Rpush(s_2);
  goto l_6;
  s_2 :
  AllBuild();
  goto p_1;
  q_2 :
  Ccontinue(t_2);
  TestFunTop(u_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_4);
  OneNextSon();
  Rpush(v_2);
  m_6 :
  Cpush(x_2);
  Ccall(_stratego_g_5);
  goto w_2;
  x_2 :
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Rpush(z_2);
  goto l_6;
  z_2 :
  OneNextSon();
  Rpush(a_3);
  goto m_6;
  a_3 :
  AllBuild();
  goto y_2;
  w_2 :
  Cpop();
  y_2 :
  Return();
  v_2 :
  AllBuild();
  goto p_1;
  t_2 :
  Ccontinue(b_3);
  TestFunTop(c_3);
  TravInit();
  OneNextSon();
  Rpush(d_3);
  goto l_6;
  d_3 :
  AllBuild();
  goto p_1;
  b_3 :
  Ccontinue(e_3);
  TestFunTop(f_3);
  TravInit();
  OneNextSon();
  Rpush(g_3);
  goto l_6;
  g_3 :
  AllBuild();
  goto p_1;
  e_3 :
  Ccontinue(h_3);
  TestFunTop(f_3);
  TravInit();
  OneNextSon();
  Rpush(i_3);
  goto l_6;
  i_3 :
  AllBuild();
  goto p_1;
  h_3 :
  Ccontinue(j_3);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Rpush(l_3);
  goto l_6;
  l_3 :
  AllBuild();
  goto p_1;
  j_3 :
  Ccontinue(m_3);
  TestFunTop(n_3);
  TravInit();
  OneNextSon();
  Rpush(o_3);
  goto l_6;
  o_3 :
  AllBuild();
  goto p_1;
  m_3 :
  Ccontinue(p_3);
  TestFunTop(q_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_4);
  AllBuild();
  goto p_1;
  p_3 :
  Ccontinue(r_3);
  TestFunTop(s_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_4);
  AllBuild();
  goto p_1;
  r_3 :
  Ccontinue(t_3);
  TestFunTop(u_3);
  TravInit();
  OneNextSon();
  Rpush(v_3);
  n_6 :
  Cpush(x_3);
  Ccall(_stratego_g_5);
  goto w_3;
  x_3 :
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_4);
  OneNextSon();
  Rpush(z_3);
  goto n_6;
  z_3 :
  AllBuild();
  goto y_3;
  w_3 :
  Cpop();
  y_3 :
  Return();
  v_3 :
  OneNextSon();
  Rpush(a_4);
  goto l_6;
  a_4 :
  AllBuild();
  goto p_1;
  t_3 :
  Ccontinue(b_4);
  TestFunTop(c_4);
  TravInit();
  OneNextSon();
  Rpush(d_4);
  goto l_6;
  d_4 :
  AllBuild();
  goto p_1;
  b_4 :
  Ccontinue(e_4);
  TestFunTop(f_4);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_4);
  AllBuild();
  goto p_1;
  e_4 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("not a strategy-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_b_5);
  Epopd(0,1);
  Tpop();
  goto g_4;
  p_1 :
  Cpop();
  g_4 :
  Return();
  o_1 :
ENDPROC

PROC(_stratego_o_4)
  _ST_is_string();
ENDPROC

PROC(_stratego_p_4)
  Cpush(i_5);
  TestFunTop(j_5);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_4);
  OneNextSon();
  Ccall(_stratego_g_5);
  OneNextSon();
  Ccall(_stratego_n_4);
  AllBuild();
  goto h_5;
  i_5 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("not a strategy-definition: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_b_5);
  Epopd(0,1);
  Tpop();
  goto k_5;
  h_5 :
  Cpop();
  k_5 :
ENDPROC

PROC(_stratego_q_4)
  Cpush(m_5);
  Rpush(n_5);
  s_7 :
  Cpush(x_5);
  Ccall(_stratego_g_5);
  goto w_5;
  x_5 :
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  OneNextSon();
  Rpush(z_5);
  goto s_7;
  z_5 :
  AllBuild();
  goto y_5;
  w_5 :
  Cpop();
  y_5 :
  Return();
  n_5 :
  goto l_5;
  m_5 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("not a stratego-specification: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_b_5);
  Epopd(0,1);
  Tpop();
  goto a_6;
  l_5 :
  Cpop();
  a_6 :
ENDPROC

PROC(_stratego_r_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_7;
  u_7 :
  TestFunFC(e_6,&&fail,Egetd(0,1));
  Rpush(d_6);
  goto t_7;
  d_6 :
  goto c_6;
  t_7 :
  Return();
  c_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_b_5);
  Tset(MakeInt(1));
  Ccall(_stratego_a_5);
ENDPROC

PROC(_stratego_t_4)
  Epushd(0,2);
  Tdupl();
  Cpush(g_6);
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  Cpush(i_6);
  Tdupl();
  Rpush(j_6);
  s_8 :
  Cpush(o_6);
  Epushd(1,3);
  MoveTop(1,1);
  goto x_7;
  x_7 :
  TestFunFC(e_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_7;
  y_7 :
  TestFunFC(r_6,&&fail,Egetd(1,2));
  Rpush(q_6);
  goto w_7;
  q_6 :
  goto p_6;
  w_7 :
  Return();
  p_6 :
  Epopd(1,3);
  goto k_6;
  o_6 :
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_6);
  goto s_8;
  u_6 :
  AllBuild();
  goto s_6;
  k_6 :
  Cpop();
  s_6 :
  Return();
  j_6 :
  Cpop();
  Crestore();
  Cjump();
  i_6 :
  OneNextSon();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  Rpush(v_6);
  t_8 :
  Cpush(x_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_8;
  a_8 :
  TestFunFC(e_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_8;
  b_8 :
  TestFunFC(a_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_6);
  goto z_7;
  z_6 :
  goto y_6;
  z_7 :
  Move(0,2,1,3);
  Return();
  y_6 :
  Epopd(1,4);
  goto w_6;
  x_6 :
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_7);
  goto t_8;
  c_7 :
  AllBuild();
  goto b_7;
  w_6 :
  Cpop();
  b_7 :
  Return();
  v_6 :
  OneNextSon();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  Rpush(d_7);
  u_8 :
  Cpush(f_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_8;
  d_8 :
  TestFunFC(e_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_8;
  e_8 :
  TestFunFC(j_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_7);
  goto c_8;
  h_7 :
  goto g_7;
  c_8 :
  Move(0,1,1,3);
  Return();
  g_7 :
  Epopd(1,4);
  goto e_7;
  f_7 :
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_7);
  goto u_8;
  l_7 :
  AllBuild();
  goto k_7;
  e_7 :
  Cpop();
  k_7 :
  Return();
  d_7 :
  OneNextSon();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_b_5);
  goto f_6;
  g_6 :
  goto m_7;
  f_6 :
  Cpop();
  m_7 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_a_5);
  Epopd(0,2);
ENDPROC

PROC(_stratego_u_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_v_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_w_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  Cpush(o_7);
  Rpush(p_7);
  u_9 :
  Cpush(r_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_8;
  w_8 :
  TestFunFC(e_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_8;
  x_8 :
  TestFunFC(a_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_8);
  goto v_8;
  z_8 :
  goto y_8;
  v_8 :
  Move(0,1,1,3);
  Return();
  y_8 :
  Epopd(1,4);
  goto q_7;
  r_7 :
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_9);
  goto u_9;
  k_9 :
  AllBuild();
  goto b_9;
  q_7 :
  Cpop();
  b_9 :
  Return();
  p_7 :
  goto n_7;
  o_7 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto m_9;
  n_7 :
  Cpop();
  m_9 :
  OneNextSon();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  Cpush(o_9);
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  Rpush(p_9);
  v_9 :
  Cpush(z_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_9;
  d_9 :
  TestFunFC(e_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_9;
  e_9 :
  TestFunFC(c_10,&&fail,Egetd(1,2));
  Rpush(b_10);
  goto c_9;
  b_10 :
  goto a_10;
  c_9 :
  Return();
  a_10 :
  Epopd(1,3);
  goto q_9;
  z_9 :
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_10);
  goto v_9;
  k_10 :
  AllBuild();
  goto i_10;
  q_9 :
  Cpop();
  i_10 :
  Return();
  p_9 :
  OneNextSon();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  goto n_9;
  o_9 :
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  goto l_10;
  n_9 :
  Cpop();
  l_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_y_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_z_4)
  Epushd(0,3);
  Tdupl();
  Cpush(o_10);
  Rpush(y_11);
  p_10 :
  Cpush(e_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_9;
  x_9 :
  TestFunFC(e_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_9;
  y_9 :
  TestFunFC(n_12,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(k_12);
  goto w_9;
  k_12 :
  goto h_12;
  w_9 :
  Move(0,1,1,3);
  Return();
  h_12 :
  Epopd(1,4);
  goto b_12;
  e_12 :
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_12);
  goto p_10;
  r_12 :
  AllBuild();
  goto o_12;
  b_12 :
  Cpop();
  o_12 :
  Return();
  y_11 :
  goto m_10;
  o_10 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto s_12;
  m_10 :
  Cpop();
  s_12 :
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

PROC(_stratego_a_5)
  _ST_exit();
ENDPROC

PROC(_stratego_b_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_c_5)
  Epushd(0,1);
  Tdupl();
  Rpush(v_12);
  y_10 :
  Cpush(z_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_10;
  r_10 :
  TestFunFC(e_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_10;
  s_10 :
  TestFunFC(j_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_13);
  goto q_10;
  d_13 :
  goto a_13;
  q_10 :
  Move(0,1,1,3);
  Return();
  a_13 :
  Epopd(1,4);
  goto w_12;
  z_12 :
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_13);
  goto y_10;
  h_13 :
  AllBuild();
  goto e_13;
  w_12 :
  Cpop();
  e_13 :
  Return();
  v_12 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_b_5);
  Tset(MakeInt(1));
  Ccall(_stratego_a_5);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_11;
  a_11 :
  TestFunFC(q_13,&&fail,Egetd(0,1));
  Rpush(n_13);
  goto z_10;
  n_13 :
  goto k_13;
  z_10 :
  Return();
  k_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_5)
  Tdupl();
  t_13 :
  TestFunTop(e_1);
  Cpush(b_14);
  Arg(0);
  Cpush(f_14);
  Ccall(_stratego_d_5);
  goto e_14;
  f_14 :
  Epushd(0,2);
  MoveTop(0,1);
  goto d_11;
  d_11 :
  TestFunFC(k_14,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(j_14);
  goto c_11;
  j_14 :
  goto h_14;
  c_11 :
  Return();
  h_14 :
  Epopd(0,2);
  goto g_14;
  e_14 :
  Cpop();
  g_14 :
  Tpop();
  Cpop();
  goto c_14;
  b_14 :
  Arg(1);
  Tdrop();
  goto t_13;
  c_14 :
  Tpop();
  Ccall(_stratego_c_5);
ENDPROC

PROC(_stratego_f_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto u_13;
  u_13 :
  TestFunFC(e_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_13;
  v_13 :
  TestFunFC(e_1,&&f_15,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(h_15);
  Rpush(i_15);
  goto h_11;
  i_15 :
  goto g_15;
  h_15 :
  Ccontinue(j_15);
  Rpush(k_15);
  goto i_11;
  k_15 :
  goto g_15;
  j_15 :
  Ccontinue(m_15);
  Rpush(n_15);
  goto j_11;
  n_15 :
  goto g_15;
  m_15 :
  Ccontinue(o_15);
  Rpush(p_15);
  goto k_11;
  p_15 :
  goto g_15;
  o_15 :
  Ccontinue(q_15);
  Rpush(r_15);
  goto l_11;
  r_15 :
  goto g_15;
  q_15 :
  Ccontinue(s_15);
  Rpush(u_15);
  goto m_11;
  u_15 :
  goto g_15;
  s_15 :
  Ccontinue(v_15);
  Rpush(w_15);
  goto n_11;
  w_15 :
  goto g_15;
  v_15 :
  Ccontinue(x_15);
  Rpush(y_15);
  goto o_11;
  y_15 :
  goto g_15;
  x_15 :
  Ccontinue(z_15);
  Rpush(a_16);
  goto p_11;
  a_16 :
  goto g_15;
  z_15 :
  Ccontinue(c_16);
  Rpush(d_16);
  goto q_11;
  d_16 :
  goto g_15;
  c_16 :
  Ccontinue(e_16);
  Rpush(f_16);
  goto r_11;
  f_16 :
  goto g_15;
  e_16 :
  Ccontinue(g_16);
  Rpush(h_16);
  goto s_11;
  h_16 :
  goto g_15;
  g_16 :
  Ccontinue(i_16);
  Rpush(k_16);
  goto t_11;
  k_16 :
  goto g_15;
  i_16 :
  Ccontinue(l_16);
  Rpush(m_16);
  goto u_11;
  m_16 :
  goto g_15;
  l_16 :
  Rpush(o_16);
  goto v_11;
  o_16 :
  goto n_16;
  g_15 :
  Cpop();
  n_16 :
  goto e_15;
  f_15 :
  Cpush(r_16);
  Rpush(s_16);
  goto h_11;
  s_16 :
  goto p_16;
  r_16 :
  Ccontinue(t_16);
  Rpush(u_16);
  goto i_11;
  u_16 :
  goto p_16;
  t_16 :
  Ccontinue(w_16);
  Rpush(x_16);
  goto j_11;
  x_16 :
  goto p_16;
  w_16 :
  Ccontinue(y_16);
  Rpush(z_16);
  goto k_11;
  z_16 :
  goto p_16;
  y_16 :
  Ccontinue(b_17);
  Rpush(c_17);
  goto l_11;
  c_17 :
  goto p_16;
  b_17 :
  Ccontinue(d_17);
  Rpush(e_17);
  goto r_11;
  e_17 :
  goto p_16;
  d_17 :
  Ccontinue(f_17);
  Rpush(g_17);
  goto s_11;
  g_17 :
  goto p_16;
  f_17 :
  Ccontinue(h_17);
  Rpush(i_17);
  goto t_11;
  i_17 :
  goto p_16;
  h_17 :
  Ccontinue(j_17);
  Rpush(l_17);
  goto u_11;
  l_17 :
  goto p_16;
  j_17 :
  Rpush(n_17);
  goto v_11;
  n_17 :
  goto m_17;
  p_16 :
  Cpop();
  m_17 :
  goto e_15;
  e_15 :
  goto c_15;
  v_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_13;
  s_13 :
  TestStr(1,1,"-?",&&fail);
  Rpush(q_17);
  goto r_13;
  q_17 :
  goto o_17;
  r_13 :
  Return();
  o_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  c_15 :
  goto b_15;
  u_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_13;
  p_13 :
  TestStr(1,1,"-h",&&fail);
  Rpush(v_17);
  goto o_13;
  v_17 :
  goto r_17;
  o_13 :
  Return();
  r_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  b_15 :
  goto a_15;
  t_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_13;
  m_13 :
  TestStr(1,1,"--help",&&fail);
  Rpush(e_18);
  goto l_13;
  e_18 :
  goto y_17;
  l_13 :
  Return();
  y_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  a_15 :
  goto z_14;
  s_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_13;
  j_13 :
  TestStr(1,1,"-s",&&fail);
  Rpush(j_18);
  goto i_13;
  j_18 :
  goto i_18;
  i_13 :
  Return();
  i_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  z_14 :
  goto y_14;
  r_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_13;
  g_13 :
  TestStr(1,1,"-b",&&fail);
  Rpush(s_18);
  goto f_13;
  s_18 :
  goto r_18;
  f_13 :
  Return();
  r_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  y_14 :
  goto w_14;
  q_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_13;
  c_13 :
  TestStr(1,1,"--output",&&fail);
  Rpush(v_18);
  goto b_13;
  v_18 :
  goto u_18;
  b_13 :
  Return();
  u_18 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  w_14 :
  goto v_14;
  p_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_12;
  y_12 :
  TestStr(1,1,"-o",&&fail);
  Rpush(x_18);
  goto x_12;
  x_18 :
  goto w_18;
  x_12 :
  Return();
  w_18 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  v_14 :
  goto u_14;
  o_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_12;
  u_12 :
  TestStr(1,1,"--input",&&fail);
  Rpush(z_18);
  goto t_12;
  z_18 :
  goto y_18;
  t_12 :
  Return();
  y_18 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  u_14 :
  goto t_14;
  n_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_12;
  q_12 :
  TestStr(1,1,"-i",&&fail);
  Rpush(b_19);
  goto p_12;
  b_19 :
  goto a_19;
  p_12 :
  Return();
  a_19 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  t_14 :
  goto r_14;
  m_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_12;
  m_12 :
  TestStr(1,1,"@version",&&fail);
  Rpush(d_19);
  goto l_12;
  d_19 :
  goto c_19;
  l_12 :
  Return();
  c_19 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  r_14 :
  goto q_14;
  l_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_12;
  j_12 :
  TestStr(1,1,"--version",&&fail);
  Rpush(f_19);
  goto i_12;
  f_19 :
  goto e_19;
  i_12 :
  Return();
  e_19 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  q_14 :
  goto p_14;
  k_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_12;
  g_12 :
  TestStr(1,1,"-v",&&fail);
  Rpush(h_19);
  goto f_12;
  h_19 :
  goto g_19;
  f_12 :
  Return();
  g_19 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  p_14 :
  goto o_14;
  j_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_12;
  d_12 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(j_19);
  goto c_12;
  j_19 :
  goto i_19;
  c_12 :
  Return();
  i_19 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  o_14 :
  goto m_14;
  i_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_12;
  a_12 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(l_19);
  goto z_11;
  l_19 :
  goto k_19;
  z_11 :
  Return();
  k_19 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  m_14 :
  goto l_14;
  h_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_11;
  x_11 :
  TestStr(1,1,"-S",&&fail);
  Rpush(n_19);
  goto w_11;
  n_19 :
  goto m_19;
  w_11 :
  Return();
  m_19 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  l_14 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_17;
  t_17 :
  TestFunFC(q_19,&&fail,Egetd(0,1));
  Rpush(p_19);
  goto s_17;
  p_19 :
  goto o_19;
  s_17 :
  Return();
  o_19 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(r_19);
  t_18 :
  Cpush(t_19);
  Cpush(v_19);
  Ccall(_stratego_g_5);
  goto u_19;
  v_19 :
  Ccall(_stratego_f_5);
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_19);
  goto t_18;
  x_19 :
  AllBuild();
  goto w_19;
  u_19 :
  Cpop();
  w_19 :
  goto s_19;
  t_19 :
  Epushd(0,3);
  MoveTop(0,1);
  goto x_17;
  x_17 :
  TestFunFC(e_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(a_20);
  goto w_17;
  a_20 :
  goto z_19;
  w_17 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  z_19 :
  Epopd(0,3);
  goto y_19;
  s_19 :
  Cpop();
  y_19 :
  Return();
  r_19 :
  AllBuild();
  Cpush(c_20);
  Ccall(_stratego_e_5);
  goto b_20;
  c_20 :
  Ccontinue(d_20);
  Epushd(0,6);
  Ccall(_stratego_z_4);
  Tdupl();
  Ccall(_stratego_x_4);
  Tpop();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(h_6);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_4);
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_x_4);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto a_18;
  a_18 :
  TestFunFC(h_6,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto b_18;
  b_18 :
  TestFunFC(h_6,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto c_18;
  c_18 :
  TestFunFC(e_6,&&fail,Egetd(0,6));
  Rpush(f_20);
  goto z_17;
  f_20 :
  goto e_20;
  z_17 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  e_20 :
  Ccall(_stratego_w_4);
  Ccall(_stratego_t_4);
  Epopd(0,6);
  goto b_20;
  d_20 :
  Ccall(_stratego_s_4);
  goto g_20;
  b_20 :
  Cpop();
  g_20 :
ENDPROC

DOIT

