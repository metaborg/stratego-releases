#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,r_4);
VARDECL(AFun,q_4);
VARDECL(AFun,l_4);
VARDECL(AFun,m_1);
VARDECL(AFun,c_1);
VARDECL(AFun,a_1);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_z_13);
PROCDECL(_stratego_a_14);
PROCDECL(_stratego_b_14);
PROCDECL(_stratego_c_14);
PROCDECL(_stratego_d_14);
PROCDECL(_stratego_e_14);
PROCDECL(_stratego_f_14);
PROCDECL(_stratego_g_14);
PROCDECL(_stratego_h_14);
PROCDECL(_stratego_i_14);
PROCDECL(_stratego_j_14);
PROCDECL(_stratego_k_14);
PROCDECL(_stratego_l_14);
PROCDECL(_stratego_m_14);
PROCDECL(_stratego_n_14);
PROCDECL(_stratego_u_14);
PROCDECL(_stratego_v_14);
PROCDECL(_stratego_y_14);
PROCDECL(_stratego_z_14);
PROCDECL(_stratego_a_15);
PROCDECL(_stratego_d_15);

PROC(_stratego_init_afuns)
  MOVE(r_4,ATmakeAFun("Rule",3,0));
  MOVE(q_4,ATmakeAFun("LRule",1,0));
  MOVE(l_4,ATmakeAFun("Nil",0,0));
  MOVE(m_1,ATmakeAFun("Cons",2,0));
  MOVE(c_1,ATmakeAFun("Scope",2,0));
  MOVE(a_1,ATmakeAFun("Var",1,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("stratlib-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_z_13);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_a_14);
  Ccall(_stratego_f_14);
  Ccall(_stratego_u_14);
  Ccall(_stratego_v_14);
  Ccall(_stratego_b_14);
  Ccall(_stratego_d_14);
ENDPROC

PROC(_stratego_z_13)
  _ST_printnl();
ENDPROC

PROC(_stratego_a_14)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_b_14)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_z_13);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_z_13);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_c_14);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_c_14)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_4;
  c_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto e_4;
  c_0 :
  goto b_0;
  e_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_14)
  Cpush(f_0);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto g_4;
  g_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto k_4;
  h_0 :
  goto g_0;
  k_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_c_14);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_e_14);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_e_14);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_e_14)
  _ST_exit();
ENDPROC

PROC(_stratego_f_14)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("tvars-test1"));
  Ccall(_stratego_j_14);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,1);
  Tset(App1("Int",MakeInt(1)));
  Ccall(_stratego_l_14);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_j_14);
  Ccall(_stratego_k_14);
  goto o_0;
  m_0 :
  Cpop();
  o_0 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(0,2);
  Tpop();
  Cpush(q_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto p_0;
  q_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_z_13);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_z_13);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_k_14);
  goto r_0;
  p_0 :
  Cpop();
  r_0 :
  Tpop();
  Ccall(_stratego_g_14);
  goto j_0;
  l_0 :
  Ccall(_stratego_i_14);
  goto s_0;
  j_0 :
  Cpop();
  s_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_g_14)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_h_14);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_14);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_h_14)
  _ST_add();
ENDPROC

PROC(_stratego_i_14)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_h_14);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_c_14);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_j_14)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_z_13);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_k_14)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto j_9;
  j_9 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_9;
  k_9 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_9;
  l_9 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(u_0);
  goto u_9;
  u_0 :
  goto t_0;
  u_9 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  t_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_l_14)
  Rpush(v_0);
  f_18 :
  Cpush(x_0);
  Epushd(0,2);
  MoveTop(0,1);
  goto w_9;
  w_9 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(z_0);
  goto g_18;
  z_0 :
  goto y_0;
  g_18 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  y_0 :
  Epopd(0,2);
  goto w_0;
  x_0 :
  Ccontinue(b_1);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_n_14);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  Rpush(d_1);
  goto f_18;
  d_1 :
  MoveTop(1,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  MoveTop(1,3);
  goto g_10;
  g_10 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto h_10;
  h_10 :
  TestFunFC(a_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto i_10;
  i_10 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  Rpush(f_1);
  goto l_18;
  f_1 :
  goto e_1;
  l_18 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(g_1);
  m_18 :
  Cpush(i_1);
  Ccall(_stratego_m_14);
  goto h_1;
  i_1 :
  Ccontinue(j_1);
  Epushd(2,3);
  MoveTop(2,1);
  goto f_10;
  f_10 :
  TestFunFC(m_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(l_1);
  goto n_18;
  l_1 :
  goto k_1;
  n_18 :
  Tdupl();
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(n_1);
  o_18 :
  Cpush(p_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto e_10;
  e_10 :
  TestFunFC(m_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_1);
  goto p_18;
  r_1 :
  goto q_1;
  p_18 :
  Move(2,2,3,2);
  Return();
  q_1 :
  Epopd(3,3);
  goto o_1;
  p_1 :
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_1);
  goto o_18;
  t_1 :
  AllBuild();
  goto s_1;
  o_1 :
  Cpop();
  s_1 :
  Return();
  n_1 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(u_1);
  goto m_18;
  u_1 :
  Return();
  k_1 :
  Epopd(2,3);
  goto h_1;
  j_1 :
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_1);
  goto m_18;
  x_1 :
  AllBuild();
  goto w_1;
  h_1 :
  Cpop();
  w_1 :
  Return();
  g_1 :
  Return();
  e_1 :
  Epopd(1,7);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto l_10;
  l_10 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_10;
  m_10 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto n_10;
  n_10 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(z_1);
  goto r_18;
  z_1 :
  goto y_1;
  r_18 :
  Move(0,3,1,4);
  Return();
  y_1 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(a_2);
  s_18 :
  Cpush(c_2);
  Ccall(_stratego_m_14);
  Tset(App0("Nil"));
  goto b_2;
  c_2 :
  Epushd(1,3);
  MoveTop(1,1);
  goto z_10;
  z_10 :
  TestFunFC(m_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(f_2);
  goto t_18;
  f_2 :
  goto e_2;
  t_18 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(g_2);
  goto s_18;
  g_2 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto w_10;
  w_10 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto x_10;
  x_10 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto y_10;
  y_10 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(i_2);
  goto w_18;
  i_2 :
  goto h_2;
  w_18 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(j_2);
  x_18 :
  Cpush(l_2);
  Ccall(_stratego_m_14);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto k_2;
  l_2 :
  Ccontinue(m_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto v_10;
  v_10 :
  TestFunFC(m_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_2);
  goto y_18;
  o_2 :
  goto n_2;
  y_18 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(p_2);
  z_18 :
  Cpush(r_2);
  Epushd(4,3);
  MoveTop(4,1);
  goto u_10;
  u_10 :
  TestFunFC(m_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(t_2);
  goto a_19;
  t_2 :
  goto s_2;
  a_19 :
  Move(3,2,4,2);
  Return();
  s_2 :
  Epopd(4,3);
  goto q_2;
  r_2 :
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_2);
  goto z_18;
  v_2 :
  AllBuild();
  goto u_2;
  q_2 :
  Cpop();
  u_2 :
  Return();
  p_2 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(w_2);
  goto x_18;
  w_2 :
  Return();
  n_2 :
  Epopd(3,3);
  goto k_2;
  m_2 :
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_2);
  goto x_18;
  z_2 :
  AllBuild();
  goto x_2;
  k_2 :
  Cpop();
  x_2 :
  Return();
  j_2 :
  Return();
  h_2 :
  Epopd(2,6);
  Return();
  e_2 :
  Epopd(1,3);
  goto d_2;
  b_2 :
  Cpop();
  d_2 :
  Return();
  a_2 :
  Epopd(0,3);
  goto w_0;
  b_1 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto c_11;
  c_11 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_11;
  i_11 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto j_11;
  j_11 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(c_3);
  goto c_19;
  c_3 :
  goto b_3;
  c_19 :
  Move(0,2,1,4);
  Return();
  b_3 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(d_3);
  d_19 :
  Cpush(f_3);
  Ccall(_stratego_m_14);
  Tset(App0("Nil"));
  goto e_3;
  f_3 :
  Epushd(1,3);
  MoveTop(1,1);
  goto x_12;
  x_12 :
  TestFunFC(m_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(i_3);
  goto e_19;
  i_3 :
  goto h_3;
  e_19 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(j_3);
  goto f_18;
  j_3 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(k_3);
  goto d_19;
  k_3 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto k_12;
  k_12 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_12;
  l_12 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_12;
  p_12 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(m_3);
  goto h_19;
  m_3 :
  goto l_3;
  h_19 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(n_3);
  i_19 :
  Cpush(p_3);
  Ccall(_stratego_m_14);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto o_3;
  p_3 :
  Ccontinue(q_3);
  Epushd(3,3);
  MoveTop(3,1);
  goto j_12;
  j_12 :
  TestFunFC(m_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_3);
  goto j_19;
  s_3 :
  goto r_3;
  j_19 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(t_3);
  k_19 :
  Cpush(v_3);
  Epushd(4,3);
  MoveTop(4,1);
  goto i_12;
  i_12 :
  TestFunFC(m_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(x_3);
  goto l_19;
  x_3 :
  goto w_3;
  l_19 :
  Move(3,2,4,2);
  Return();
  w_3 :
  Epopd(4,3);
  goto u_3;
  v_3 :
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_3);
  goto k_19;
  z_3 :
  AllBuild();
  goto y_3;
  u_3 :
  Cpop();
  y_3 :
  Return();
  t_3 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(a_4);
  goto i_19;
  a_4 :
  Return();
  r_3 :
  Epopd(3,3);
  goto o_3;
  q_3 :
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_4);
  goto i_19;
  f_4 :
  AllBuild();
  goto b_4;
  o_3 :
  Cpop();
  b_4 :
  Return();
  n_3 :
  Return();
  l_3 :
  Epopd(2,7);
  Return();
  h_3 :
  Epopd(1,3);
  goto g_3;
  e_3 :
  Cpop();
  g_3 :
  Return();
  d_3 :
  Epopd(0,2);
  goto a_3;
  w_0 :
  Cpop();
  a_3 :
  Return();
  v_0 :
ENDPROC

PROC(_stratego_m_14)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_19;
  n_19 :
  TestFunFC(l_4,&&fail,Egetd(0,1));
  Rpush(i_4);
  goto p_19;
  i_4 :
  goto h_4;
  p_19 :
  Return();
  h_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_14)
  Epushd(0,6);
  MoveTop(0,2);
  goto s_19;
  s_19 :
  TestFunFC(c_1,&&p_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(o_4);
  goto f_20;
  p_4 :
  TestFunFC(q_4,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto t_19;
  t_19 :
  TestFunFC(r_4,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(o_4);
  goto g_20;
  o_4 :
  goto n_4;
  g_20 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_l_14);
  Return();
  n_4 :
  goto m_4;
  f_20 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  m_4 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_u_14)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("tvars-test2"));
  Ccall(_stratego_j_14);
  Tpop();
  Cpush(t_4);
  Tdupl();
  Cpush(v_4);
  Epushd(1,1);
  Tset(App1("Real",ATmakeReal(1.10)));
  Ccall(_stratego_l_14);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto u_4;
  v_4 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_j_14);
  Ccall(_stratego_k_14);
  goto w_4;
  u_4 :
  Cpop();
  w_4 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(0,2);
  Tpop();
  Cpush(z_4);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto x_4;
  z_4 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_z_13);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_z_13);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_k_14);
  goto a_5;
  x_4 :
  Cpop();
  a_5 :
  Tpop();
  Ccall(_stratego_g_14);
  goto s_4;
  t_4 :
  Ccall(_stratego_i_14);
  goto b_5;
  s_4 :
  Cpop();
  b_5 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_14)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("tsubstitute-test1"));
  Ccall(_stratego_j_14);
  Tpop();
  Cpush(d_5);
  Tdupl();
  Cpush(h_5);
  Epushd(1,1);
  Tset(App2("TCons",App2("Cons",App2("TCons",ATmakeString("x"),App2("TCons",App1("Var",ATmakeString("a")),App0("TNil"))),App2("Cons",App2("TCons",ATmakeString("y"),App2("TCons",App2("Op",ATmakeString("Add"),App2("Cons",App1("Var",ATmakeString("y")),App2("Cons",App1("Var",ATmakeString("z")),App0("Nil")))),App0("TNil"))),App0("Nil"))),App2("TCons",App2("Op",ATmakeString("BinExp"),App2("Cons",App1("Var",ATmakeString("x")),App2("Cons",App1("Str",ATmakeString("*")),App2("Cons",App1("Var",ATmakeString("y")),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_y_14);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto g_5;
  h_5 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_j_14);
  Ccall(_stratego_k_14);
  goto i_5;
  g_5 :
  Cpop();
  i_5 :
  Tset(App2("Op",ATmakeString("BinExp"),App2("Cons",App1("Var",ATmakeString("a")),App2("Cons",App1("Str",ATmakeString("*")),App2("Cons",App2("Op",ATmakeString("Add"),App2("Cons",App1("Var",ATmakeString("y")),App2("Cons",App1("Var",ATmakeString("z")),App0("Nil")))),App0("Nil"))))));
  Tdupl();
  Tset(App2("Op",ATmakeString("BinExp"),App2("Cons",App1("Var",ATmakeString("a")),App2("Cons",App1("Str",ATmakeString("*")),App2("Cons",App2("Op",ATmakeString("Add"),App2("Cons",App1("Var",ATmakeString("y")),App2("Cons",App1("Var",ATmakeString("z")),App0("Nil")))),App0("Nil"))))));
  MoveTop(0,2);
  Tpop();
  Cpush(l_5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto j_5;
  l_5 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_z_13);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_z_13);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_k_14);
  goto m_5;
  j_5 :
  Cpop();
  m_5 :
  Tpop();
  Ccall(_stratego_g_14);
  goto c_5;
  d_5 :
  Ccall(_stratego_i_14);
  goto n_5;
  c_5 :
  Cpop();
  n_5 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_14)
  Epushd(0,5);
  Ccall(_stratego_z_14);
  MoveTop(0,1);
  goto a_26;
  a_26 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_26;
  b_26 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_26;
  c_26 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(p_5);
  goto l_29;
  p_5 :
  goto o_5;
  l_29 :
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(q_5);
  m_29 :
  Rpush(r_5);
  n_29 :
  Epushd(1,5);
  MoveTop(1,1);
  goto x_25;
  x_25 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_25;
  y_25 :
  TestFunFC(a_0,&&x_5,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_25;
  z_25 :
  TestFunFC(d_0,&&z_5,Egetd(1,5));
  Cpush(b_6);
  Rpush(c_6);
  goto o_29;
  c_6 :
  goto a_6;
  b_6 :
  Ccontinue(d_6);
  Rpush(e_6);
  goto s_29;
  e_6 :
  goto a_6;
  d_6 :
  Ccontinue(f_6);
  Rpush(g_6);
  goto x_29;
  g_6 :
  goto a_6;
  f_6 :
  Rpush(i_6);
  goto m_30;
  i_6 :
  goto h_6;
  a_6 :
  Cpop();
  h_6 :
  goto w_5;
  z_5 :
  Rpush(w_5);
  goto s_29;
  x_5 :
  Rpush(w_5);
  goto s_29;
  w_5 :
  goto v_5;
  m_30 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  j_6 :
  AllNextSon(&&k_6);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(l_6);
  goto n_29;
  l_6 :
  Epopd(2,1);
  goto j_6;
  k_6 :
  AllBuild();
  Return();
  v_5 :
  goto u_5;
  x_29 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_n_14);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(m_6);
  z_29 :
  Cpush(o_6);
  Ccall(_stratego_m_14);
  goto n_6;
  o_6 :
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_15);
  OneNextSon();
  Rpush(q_6);
  goto z_29;
  q_6 :
  AllBuild();
  goto p_6;
  n_6 :
  Cpop();
  p_6 :
  Return();
  m_6 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(r_6);
  b_30 :
  Epushd(4,9);
  MoveTop(4,1);
  goto a_25;
  a_25 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto b_25;
  b_25 :
  TestFunFC(l_4,&&v_6,Egetd(4,2));
  goto c_25;
  c_25 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto d_25;
  d_25 :
  TestFunFC(l_4,&&fail,Egetd(4,6));
  goto f_25;
  f_25 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(u_6);
  goto c_30;
  v_6 :
  TestFunFC(m_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto g_25;
  g_25 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto h_25;
  h_25 :
  TestFunFC(m_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto i_25;
  i_25 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(u_6);
  goto d_30;
  u_6 :
  goto t_6;
  d_30 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(x_6);
  goto b_30;
  x_6 :
  OneNextSon();
  Ccall(_stratego_c_14);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto x_24;
  x_24 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto y_24;
  y_24 :
  TestFunFC(a_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto z_24;
  z_24 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(y_6);
  goto e_30;
  y_6 :
  goto w_6;
  e_30 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  w_6 :
  Epopd(5,5);
  Return();
  t_6 :
  goto s_6;
  c_30 :
  Tset(App0("Nil"));
  Return();
  s_6 :
  Epopd(4,9);
  Return();
  r_6 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto m_25;
  m_25 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto n_25;
  n_25 :
  TestFunFC(a_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto o_25;
  o_25 :
  TestFunFC(d_0,&&fail,Egetd(3,8));
  Rpush(a_7);
  goto g_30;
  a_7 :
  goto z_6;
  g_30 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(b_7);
  h_30 :
  Cpush(d_7);
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_7);
  goto h_30;
  e_7 :
  AllBuild();
  goto c_7;
  d_7 :
  Ccall(_stratego_m_14);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto f_7;
  c_7 :
  Cpop();
  f_7 :
  Return();
  b_7 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  z_6 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(c_1);
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
  goto s_25;
  s_25 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto t_25;
  t_25 :
  TestFunFC(a_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto u_25;
  u_25 :
  TestFunFC(a_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto v_25;
  v_25 :
  TestFunFC(d_0,&&fail,Egetd(2,11));
  Rpush(h_7);
  goto k_30;
  h_7 :
  goto g_7;
  k_30 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(i_7);
  goto m_29;
  i_7 :
  Epopd(3,1);
  AllBuild();
  Return();
  g_7 :
  Epopd(2,11);
  Return();
  u_5 :
  goto t_5;
  s_29 :
  Epushd(2,2);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,1);
  goto r_24;
  r_24 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(k_7);
  goto u_29;
  k_7 :
  goto j_7;
  u_29 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Move(2,1,3,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(2,2,0,2);
  Return();
  j_7 :
  Epopd(3,2);
  Tpop();
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Ccall(_stratego_a_15);
  Epopd(2,2);
  Return();
  t_5 :
  goto s_5;
  o_29 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_a_15);
  Epopd(2,1);
  AllBuild();
  Return();
  s_5 :
  Epopd(1,5);
  Return();
  r_5 :
  Return();
  q_5 :
  Return();
  o_5 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_z_14)
  Epushd(0,7);
  MoveTop(0,1);
  goto f_31;
  f_31 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto g_31;
  g_31 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto h_31;
  h_31 :
  TestFunFC(d_0,&&q_7,Egetd(0,5));
  Rpush(o_7);
  goto t_32;
  q_7 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto i_31;
  i_31 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(o_7);
  goto u_32;
  o_7 :
  goto n_7;
  u_32 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(r_7);
  v_32 :
  Epushd(2,9);
  MoveTop(2,1);
  goto w_30;
  w_30 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto x_30;
  x_30 :
  TestFunFC(l_4,&&v_7,Egetd(2,2));
  goto y_30;
  y_30 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto z_30;
  z_30 :
  TestFunFC(l_4,&&fail,Egetd(2,6));
  goto a_31;
  a_31 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(u_7);
  goto w_32;
  v_7 :
  TestFunFC(m_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto b_31;
  b_31 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto c_31;
  c_31 :
  TestFunFC(m_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto d_31;
  d_31 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(u_7);
  goto x_32;
  u_7 :
  goto t_7;
  x_32 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(x_7);
  goto v_32;
  x_7 :
  OneNextSon();
  Ccall(_stratego_c_14);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto t_30;
  t_30 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto u_30;
  u_30 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto v_30;
  v_30 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(y_7);
  goto y_32;
  y_7 :
  goto w_7;
  y_32 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  w_7 :
  Epopd(3,5);
  Return();
  t_7 :
  goto s_7;
  w_32 :
  Tset(App0("Nil"));
  Return();
  s_7 :
  Epopd(2,9);
  Return();
  r_7 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  n_7 :
  goto m_7;
  t_32 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  m_7 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_a_15)
  Rpush(z_7);
  y_33 :
  Epushd(0,11);
  MoveTop(0,5);
  goto c_33;
  c_33 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto d_33;
  d_33 :
  TestFunFC(a_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto e_33;
  e_33 :
  TestFunFC(m_1,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto f_33;
  f_33 :
  TestFunFC(d_0,&&fail,Egetd(0,11));
  goto g_33;
  g_33 :
  TestFunFC(a_0,&&d_8,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto h_33;
  h_33 :
  TestFunFC(a_0,&&e_8,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto i_33;
  i_33 :
  TestFunFC(d_0,&&f_8,Egetd(0,4));
  Cpush(h_8);
  Rpush(j_8);
  goto z_33;
  j_8 :
  goto g_8;
  h_8 :
  Rpush(l_8);
  goto a_34;
  l_8 :
  goto k_8;
  g_8 :
  Cpop();
  k_8 :
  goto c_8;
  f_8 :
  Rpush(c_8);
  goto a_34;
  e_8 :
  Rpush(c_8);
  goto a_34;
  d_8 :
  Rpush(c_8);
  goto a_34;
  c_8 :
  goto b_8;
  a_34 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(m_8);
  goto y_33;
  m_8 :
  Return();
  b_8 :
  goto a_8;
  z_33 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  a_8 :
  Epopd(0,11);
  Return();
  z_7 :
ENDPROC

PROC(_stratego_d_15)
  _ST_new();
ENDPROC
