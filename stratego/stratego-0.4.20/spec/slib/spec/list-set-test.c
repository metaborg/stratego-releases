#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,k_5);
VARDECL(AFun,e_2);
VARDECL(AFun,q_1);
VARDECL(AFun,b_1);
VARDECL(AFun,y_0);
PROCDECL(_stratego_main);
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

PROC(_stratego_init_afuns)
  MOVE(k_5,ATmakeAFun("H",2,0));
  MOVE(e_2,ATmakeAFun("Nil",0,0));
  MOVE(q_1,ATmakeAFun("Cons",2,0));
  MOVE(b_1,ATmakeAFun("TNil",0,0));
  MOVE(y_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("list-set-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_g_16);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_p_16);
  Tpop();
  Cpush(b_0);
  Tdupl();
  Cpush(d_0);
  Ccall(_stratego_l_16);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  succeeded: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(0,1);
  Tpop();
  goto c_0;
  d_0 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  failed: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_t_16);
  goto e_0;
  c_0 :
  Cpop();
  e_0 :
  Tpop();
  Ccall(_stratego_q_16);
  goto a_0;
  b_0 :
  Ccall(_stratego_s_16);
  goto f_0;
  a_0 :
  Cpop();
  f_0 :
  Tdupl();
  Tset(ATmakeString("test2"));
  Ccall(_stratego_p_16);
  Tpop();
  Cpush(h_0);
  Tdupl();
  Cpush(j_0);
  Ccall(_stratego_n_16);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  succeeded: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(0,1);
  Tpop();
  goto i_0;
  j_0 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  failed: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_t_16);
  goto k_0;
  i_0 :
  Cpop();
  k_0 :
  Tpop();
  Ccall(_stratego_q_16);
  goto g_0;
  h_0 :
  Ccall(_stratego_s_16);
  goto l_0;
  g_0 :
  Cpop();
  l_0 :
  Tdupl();
  Tset(ATmakeString("test3"));
  Ccall(_stratego_p_16);
  Tpop();
  Cpush(n_0);
  Tdupl();
  Cpush(p_0);
  Ccall(_stratego_o_16);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  succeeded: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(0,1);
  Tpop();
  goto o_0;
  p_0 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  failed: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_t_16);
  goto q_0;
  o_0 :
  Cpop();
  q_0 :
  Tpop();
  Ccall(_stratego_q_16);
  goto m_0;
  n_0 :
  Ccall(_stratego_s_16);
  goto r_0;
  m_0 :
  Cpop();
  r_0 :
  Tdupl();
  Tset(ATmakeString("test4"));
  Ccall(_stratego_p_16);
  Tpop();
  Cpush(t_0);
  Tdupl();
  Cpush(v_0);
  Ccall(_stratego_u_16);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  succeeded: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(0,1);
  Tpop();
  goto u_0;
  v_0 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  failed: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_t_16);
  goto w_0;
  u_0 :
  Cpop();
  w_0 :
  Tpop();
  Ccall(_stratego_q_16);
  goto s_0;
  t_0 :
  Ccall(_stratego_s_16);
  goto x_0;
  s_0 :
  Cpop();
  x_0 :
  Ccall(_stratego_v_16);
  Ccall(_stratego_h_16);
  Ccall(_stratego_j_16);
ENDPROC

PROC(_stratego_f_16)
  _ST_printnl();
ENDPROC

PROC(_stratego_g_16)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_h_16)
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_i_16);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_i_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_11;
  x_11 :
  TestFunFC(b_1,&&fail,Egetd(0,1));
  Rpush(a_1);
  goto z_11;
  a_1 :
  goto z_0;
  z_11 :
  Return();
  z_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_16)
  Cpush(d_1);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto b_12;
  b_12 :
  TestInt(0,1,0,&&fail);
  Rpush(f_1);
  goto d_12;
  f_1 :
  goto e_1;
  d_12 :
  Return();
  e_1 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_i_16);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_k_16);
  goto c_1;
  d_1 :
  Tset(MakeInt(1));
  Ccall(_stratego_k_16);
  goto g_1;
  c_1 :
  Cpop();
  g_1 :
ENDPROC

PROC(_stratego_k_16)
  _ST_exit();
ENDPROC

PROC(_stratego_l_16)
  Epushd(0,5);
  Tset(App2("TCons",App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App0("Nil"))),App2("TCons",App2("Cons",ATmakeString("c"),App2("Cons",ATmakeString("d"),App0("Nil"))),App0("TNil"))));
  MoveTop(0,1);
  goto t_12;
  t_12 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto u_12;
  u_12 :
  TestFunFC(y_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_12;
  v_12 :
  TestFunFC(b_1,&&fail,Egetd(0,5));
  Rpush(i_1);
  goto t_15;
  i_1 :
  goto h_1;
  t_15 :
  Epushd(1,9);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(k_1);
  u_15 :
  Cpush(m_1);
  Ccall(_stratego_m_16);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto l_1;
  m_1 :
  Ccontinue(n_1);
  Epushd(2,3);
  MoveTop(2,1);
  goto i_12;
  i_12 :
  TestFunFC(q_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(p_1);
  goto v_15;
  p_1 :
  goto o_1;
  v_15 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(r_1);
  w_15 :
  Cpush(u_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto h_12;
  h_12 :
  TestFunFC(q_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_1);
  goto x_15;
  w_1 :
  goto v_1;
  x_15 :
  Move(2,2,3,2);
  Return();
  v_1 :
  Epopd(3,3);
  goto s_1;
  u_1 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_1);
  goto w_15;
  y_1 :
  AllBuild();
  goto x_1;
  s_1 :
  Cpop();
  x_1 :
  Return();
  r_1 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(z_1);
  goto u_15;
  z_1 :
  Return();
  o_1 :
  Epopd(2,3);
  goto l_1;
  n_1 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_2);
  goto u_15;
  b_2 :
  AllBuild();
  goto a_2;
  l_1 :
  Cpop();
  a_2 :
  Return();
  k_1 :
  MoveTop(1,1);
  goto k_12;
  k_12 :
  TestFunFC(q_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_12;
  l_12 :
  TestStr(1,2,"a",&&fail);
  goto m_12;
  m_12 :
  TestFunFC(q_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto n_12;
  n_12 :
  TestStr(1,4,"b",&&fail);
  goto o_12;
  o_12 :
  TestFunFC(q_1,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto p_12;
  p_12 :
  TestStr(1,6,"c",&&fail);
  goto q_12;
  q_12 :
  TestFunFC(q_1,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto r_12;
  r_12 :
  TestStr(1,8,"d",&&fail);
  goto s_12;
  s_12 :
  TestFunFC(e_2,&&fail,Egetd(1,9));
  Rpush(c_2);
  goto a_17;
  c_2 :
  goto j_1;
  a_17 :
  Return();
  j_1 :
  Epopd(1,9);
  Return();
  h_1 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_m_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_17;
  c_17 :
  TestFunFC(e_2,&&fail,Egetd(0,1));
  Rpush(g_2);
  goto e_17;
  g_2 :
  goto f_2;
  e_17 :
  Return();
  f_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_16)
  Epushd(0,5);
  Tset(App2("TCons",App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App0("Nil"))),App2("TCons",App2("Cons",ATmakeString("b"),App2("Cons",ATmakeString("d"),App0("Nil"))),App0("TNil"))));
  MoveTop(0,1);
  goto s_17;
  s_17 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto t_17;
  t_17 :
  TestFunFC(y_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto u_17;
  u_17 :
  TestFunFC(b_1,&&fail,Egetd(0,5));
  Rpush(i_2);
  goto r_18;
  i_2 :
  goto h_2;
  r_18 :
  Epushd(1,7);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(k_2);
  s_18 :
  Cpush(m_2);
  Ccall(_stratego_m_16);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto l_2;
  m_2 :
  Ccontinue(o_2);
  Epushd(2,3);
  MoveTop(2,1);
  goto j_17;
  j_17 :
  TestFunFC(q_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(q_2);
  goto t_18;
  q_2 :
  goto p_2;
  t_18 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(r_2);
  u_18 :
  Cpush(t_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto i_17;
  i_17 :
  TestFunFC(q_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(v_2);
  goto v_18;
  v_2 :
  goto u_2;
  v_18 :
  Move(2,2,3,2);
  Return();
  u_2 :
  Epopd(3,3);
  goto s_2;
  t_2 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_2);
  goto u_18;
  y_2 :
  AllBuild();
  goto w_2;
  s_2 :
  Cpop();
  w_2 :
  Return();
  r_2 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(z_2);
  goto s_18;
  z_2 :
  Return();
  p_2 :
  Epopd(2,3);
  goto l_2;
  o_2 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_3);
  goto s_18;
  b_3 :
  AllBuild();
  goto a_3;
  l_2 :
  Cpop();
  a_3 :
  Return();
  k_2 :
  MoveTop(1,1);
  goto l_17;
  l_17 :
  TestFunFC(q_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_17;
  m_17 :
  TestStr(1,2,"a",&&fail);
  goto n_17;
  n_17 :
  TestFunFC(q_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto o_17;
  o_17 :
  TestStr(1,4,"b",&&fail);
  goto p_17;
  p_17 :
  TestFunFC(q_1,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto q_17;
  q_17 :
  TestStr(1,6,"d",&&fail);
  goto r_17;
  r_17 :
  TestFunFC(e_2,&&fail,Egetd(1,7));
  Rpush(c_3);
  goto w_18;
  c_3 :
  goto j_2;
  w_18 :
  Return();
  j_2 :
  Epopd(1,7);
  Return();
  h_2 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_16)
  Epushd(0,5);
  Tset(App2("TCons",App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App0("Nil"))),App2("TCons",App2("Cons",ATmakeString("c"),App2("Cons",ATmakeString("d"),App0("Nil"))),App0("TNil"))));
  MoveTop(0,1);
  goto i_19;
  i_19 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_19;
  j_19 :
  TestFunFC(y_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto k_19;
  k_19 :
  TestFunFC(b_1,&&fail,Egetd(0,5));
  Rpush(e_3);
  goto f_20;
  e_3 :
  goto d_3;
  f_20 :
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(g_3);
  g_20 :
  Cpush(j_3);
  Ccall(_stratego_m_16);
  goto i_3;
  j_3 :
  Ccontinue(k_3);
  Epushd(2,3);
  MoveTop(2,1);
  goto b_19;
  b_19 :
  TestFunFC(q_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(m_3);
  goto h_20;
  m_3 :
  goto l_3;
  h_20 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(n_3);
  i_20 :
  Cpush(p_3);
  Epushd(3,3);
  MoveTop(3,1);
  goto a_19;
  a_19 :
  TestFunFC(q_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_3);
  goto j_20;
  s_3 :
  goto q_3;
  j_20 :
  Move(2,2,3,2);
  Return();
  q_3 :
  Epopd(3,3);
  goto o_3;
  p_3 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_3);
  goto i_20;
  u_3 :
  AllBuild();
  goto t_3;
  o_3 :
  Cpop();
  t_3 :
  Return();
  n_3 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(v_3);
  goto g_20;
  v_3 :
  Return();
  l_3 :
  Epopd(2,3);
  goto i_3;
  k_3 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_3);
  goto g_20;
  x_3 :
  AllBuild();
  goto w_3;
  i_3 :
  Cpop();
  w_3 :
  Return();
  g_3 :
  MoveTop(1,1);
  goto d_19;
  d_19 :
  TestFunFC(q_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_19;
  e_19 :
  TestStr(1,2,"a",&&fail);
  goto f_19;
  f_19 :
  TestFunFC(q_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto g_19;
  g_19 :
  TestStr(1,4,"b",&&fail);
  goto h_19;
  h_19 :
  TestFunFC(e_2,&&fail,Egetd(1,5));
  Rpush(y_3);
  goto k_20;
  y_3 :
  goto f_3;
  k_20 :
  Return();
  f_3 :
  Epopd(1,5);
  Return();
  d_3 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_16)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_q_16)
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_r_16);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_16);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_r_16)
  _ST_add();
ENDPROC

PROC(_stratego_s_16)
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_r_16);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_i_16);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_t_16)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto l_21;
  l_21 :
  TestFunFC(y_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto m_21;
  m_21 :
  TestFunFC(y_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto n_21;
  n_21 :
  TestFunFC(b_1,&&fail,Egetd(0,6));
  Rpush(a_4);
  goto w_21;
  a_4 :
  goto z_3;
  w_21 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  z_3 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_u_16)
  Epushd(0,5);
  Tset(App2("TCons",App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App0("Nil"))),App2("TCons",App2("Cons",ATmakeString("b"),App2("Cons",ATmakeString("d"),App0("Nil"))),App0("TNil"))));
  MoveTop(0,1);
  goto g_22;
  g_22 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_22;
  h_22 :
  TestFunFC(y_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto i_22;
  i_22 :
  TestFunFC(b_1,&&fail,Egetd(0,5));
  Rpush(d_4);
  goto b_23;
  d_4 :
  goto c_4;
  b_23 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(f_4);
  c_23 :
  Cpush(h_4);
  Ccall(_stratego_m_16);
  goto g_4;
  h_4 :
  Ccontinue(i_4);
  Epushd(2,3);
  MoveTop(2,1);
  goto b_22;
  b_22 :
  TestFunFC(q_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(k_4);
  goto d_23;
  k_4 :
  goto j_4;
  d_23 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(l_4);
  e_23 :
  Cpush(n_4);
  Epushd(3,3);
  MoveTop(3,1);
  goto a_22;
  a_22 :
  TestFunFC(q_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_4);
  goto f_23;
  p_4 :
  goto o_4;
  f_23 :
  Move(2,2,3,2);
  Return();
  o_4 :
  Epopd(3,3);
  goto m_4;
  n_4 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_4);
  goto e_23;
  r_4 :
  AllBuild();
  goto q_4;
  m_4 :
  Cpop();
  q_4 :
  Return();
  l_4 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(s_4);
  goto c_23;
  s_4 :
  Return();
  j_4 :
  Epopd(2,3);
  goto g_4;
  i_4 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_4);
  goto c_23;
  u_4 :
  AllBuild();
  goto t_4;
  g_4 :
  Cpop();
  t_4 :
  Return();
  f_4 :
  MoveTop(1,1);
  goto d_22;
  d_22 :
  TestFunFC(q_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_22;
  e_22 :
  TestStr(1,2,"a",&&fail);
  goto f_22;
  f_22 :
  TestFunFC(e_2,&&fail,Egetd(1,3));
  Rpush(v_4);
  goto g_23;
  v_4 :
  goto e_4;
  g_23 :
  Return();
  e_4 :
  Epopd(1,3);
  Return();
  c_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_16)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test5"));
  Ccall(_stratego_p_16);
  Tpop();
  Cpush(x_4);
  Tdupl();
  Cpush(z_4);
  Epushd(1,1);
  Tset(App2("F",App2("G",App0("A"),App2("H",App0("A"),App0("B"))),App2("H",App0("B"),App0("C"))));
  Rpush(a_5);
  d_29 :
  Cpush(c_5);
  Epushd(2,3);
  Cpush(e_5);
  Ccall(_stratego_w_16);
  goto d_5;
  e_5 :
  Ccall(_stratego_x_16);
  goto f_5;
  d_5 :
  Cpop();
  f_5 :
  MoveTop(2,1);
  Cpush(h_5);
  Epushd(3,3);
  MoveTop(3,1);
  goto j_23;
  j_23 :
  TestFunFC(k_5,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_5);
  goto f_29;
  j_5 :
  goto i_5;
  f_29 :
  NotNULLd(3,2);
  Tset(App1("I",Egetd(3,2)));
  Return();
  i_5 :
  Epopd(3,3);
  goto g_5;
  h_5 :
  goto l_5;
  g_5 :
  Cpop();
  l_5 :
  MoveTop(2,2);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Cpush(n_5);
  Epushd(3,3);
  MoveTop(3,1);
  goto m_23;
  m_23 :
  TestFunFC(k_5,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_5);
  goto h_29;
  p_5 :
  goto o_5;
  h_29 :
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("Cons",App2("H",Egetd(3,2),Egetd(3,3)),App0("Nil")));
  Return();
  o_5 :
  Epopd(3,3);
  goto m_5;
  n_5 :
  Tset(App0("Nil"));
  goto q_5;
  m_5 :
  Cpop();
  q_5 :
  MoveTop(2,3);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  Epopd(2,3);
  goto b_5;
  c_5 :
  Epushd(2,13);
  MoveTop(2,1);
  Tdupl();
  Epushd(3,5);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  _ST_explode_term();
  MoveTop(3,1);
  goto q_23;
  q_23 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto r_23;
  r_23 :
  TestFunFC(y_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto s_23;
  s_23 :
  TestFunFC(b_1,&&fail,Egetd(3,5));
  Rpush(t_5);
  goto k_29;
  t_5 :
  goto s_5;
  k_29 :
  Move(2,2,3,2);
  Move(2,3,3,4);
  Return();
  s_5 :
  Epopd(3,5);
  Tpop();
  Tdupl();
  Epushd(3,5);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(u_5);
  l_29 :
  Cpush(w_5);
  Ccall(_stratego_m_16);
  goto v_5;
  w_5 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Rpush(y_5);
  goto d_29;
  y_5 :
  OneNextSon();
  Rpush(z_5);
  goto l_29;
  z_5 :
  AllBuild();
  goto x_5;
  v_5 :
  Cpop();
  x_5 :
  Return();
  u_5 :
  Ccall(_stratego_z_16);
  MoveTop(3,1);
  goto g_24;
  g_24 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto h_24;
  h_24 :
  TestFunFC(y_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto i_24;
  i_24 :
  TestFunFC(b_1,&&fail,Egetd(3,5));
  Rpush(b_6);
  goto m_29;
  b_6 :
  goto a_6;
  m_29 :
  Epushd(4,8);
  Move(2,5,3,2);
  Move(2,4,3,4);
  NotNULLd(2,2);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,5),App0("TNil"))));
  _ST_mkterm();
  MoveTop(4,1);
  Cpush(d_6);
  Epushd(5,3);
  MoveTop(5,1);
  goto x_23;
  x_23 :
  TestFunFC(k_5,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(g_6);
  goto p_29;
  g_6 :
  goto f_6;
  p_29 :
  NotNULLd(5,2);
  Tset(App1("I",Egetd(5,2)));
  Return();
  f_6 :
  Epopd(5,3);
  goto c_6;
  d_6 :
  goto h_6;
  c_6 :
  Cpop();
  h_6 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Cpush(j_6);
  Epushd(5,3);
  MoveTop(5,1);
  goto a_24;
  a_24 :
  TestFunFC(k_5,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(l_6);
  goto r_29;
  l_6 :
  goto k_6;
  r_29 :
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset(App2("Cons",App2("H",Egetd(5,2),Egetd(5,3)),App0("Nil")));
  Return();
  k_6 :
  Epopd(5,3);
  goto i_6;
  j_6 :
  Tset(App0("Nil"));
  goto m_6;
  i_6 :
  Cpop();
  m_6 :
  MoveTop(4,3);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,3),App0("TNil"))));
  MoveTop(4,4);
  goto d_24;
  d_24 :
  TestFunFC(y_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto e_24;
  e_24 :
  TestFunFC(y_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto f_24;
  f_24 :
  TestFunFC(b_1,&&fail,Egetd(4,8));
  Rpush(p_6);
  goto t_29;
  p_6 :
  goto n_6;
  t_29 :
  Move(2,6,4,5);
  Move(2,7,4,7);
  Return();
  n_6 :
  Epopd(4,8);
  Return();
  a_6 :
  Epopd(3,5);
  Tpop();
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_y_16);
  MoveTop(2,8);
  NotNULLd(2,7);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,7),App2("TCons",Egetd(2,8),App0("TNil"))));
  MoveTop(2,9);
  goto q_24;
  q_24 :
  TestFunFC(y_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto r_24;
  r_24 :
  TestFunFC(y_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto s_24;
  s_24 :
  TestFunFC(b_1,&&fail,Egetd(2,13));
  Rpush(r_6);
  goto v_29;
  r_6 :
  goto q_6;
  v_29 :
  Epushd(3,1);
  NotNULLd(2,10);
  Tset(Egetd(2,10));
  Rpush(s_6);
  w_29 :
  Cpush(u_6);
  Ccall(_stratego_m_16);
  NotNULLd(2,12);
  Tset(Egetd(2,12));
  goto t_6;
  u_6 :
  Ccontinue(v_6);
  Epushd(4,3);
  MoveTop(4,1);
  goto o_24;
  o_24 :
  TestFunFC(q_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(x_6);
  goto x_29;
  x_6 :
  goto w_6;
  x_29 :
  Tdupl();
  NotNULLd(2,12);
  Tset(Egetd(2,12));
  Rpush(y_6);
  y_29 :
  Cpush(a_7);
  Epushd(5,3);
  MoveTop(5,1);
  goto n_24;
  n_24 :
  TestFunFC(q_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(c_7);
  goto z_29;
  c_7 :
  goto b_7;
  z_29 :
  Move(4,2,5,2);
  Return();
  b_7 :
  Epopd(5,3);
  goto z_6;
  a_7 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_7);
  goto y_29;
  e_7 :
  AllBuild();
  goto d_7;
  z_6 :
  Cpop();
  d_7 :
  Return();
  y_6 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(f_7);
  goto w_29;
  f_7 :
  Return();
  w_6 :
  Epopd(4,3);
  goto t_6;
  v_6 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_7);
  goto w_29;
  h_7 :
  AllBuild();
  goto g_7;
  t_6 :
  Cpop();
  g_7 :
  Return();
  s_6 :
  MoveTop(3,1);
  NotNULLd(2,6);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,6),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  q_6 :
  Epopd(2,13);
  goto r_5;
  b_5 :
  Cpop();
  r_5 :
  Return();
  a_5 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto y_4;
  z_4 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_p_16);
  Ccall(_stratego_t_16);
  goto i_7;
  y_4 :
  Cpop();
  i_7 :
  Tset(App2("TCons",App2("F",App2("G",App0("A"),App1("I",App0("A"))),App1("I",App0("B"))),App2("TCons",App2("Cons",App2("H",App0("A"),App0("B")),App2("Cons",App2("H",App0("B"),App0("C")),App0("Nil"))),App0("TNil"))));
  Tdupl();
  Tset(App2("TCons",App2("F",App2("G",App0("A"),App1("I",App0("A"))),App1("I",App0("B"))),App2("TCons",App2("Cons",App2("H",App0("A"),App0("B")),App2("Cons",App2("H",App0("B"),App0("C")),App0("Nil"))),App0("TNil"))));
  MoveTop(0,2);
  Tpop();
  Cpush(k_7);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto j_7;
  k_7 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_16);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_16);
  goto l_7;
  j_7 :
  Cpop();
  l_7 :
  Tpop();
  Ccall(_stratego_q_16);
  goto w_4;
  x_4 :
  Ccall(_stratego_s_16);
  goto m_7;
  w_4 :
  Cpop();
  m_7 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_w_16)
  _ST_is_string();
ENDPROC

PROC(_stratego_x_16)
  _ST_is_int();
ENDPROC

PROC(_stratego_y_16)
  Rpush(n_7);
  s_31 :
  Cpush(p_7);
  Ccall(_stratego_m_16);
  Tset(App0("Nil"));
  goto o_7;
  p_7 :
  Epushd(0,3);
  MoveTop(0,1);
  goto x_30;
  x_30 :
  TestFunFC(q_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(s_7);
  goto t_31;
  s_7 :
  goto r_7;
  t_31 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(u_7);
  goto s_31;
  u_7 :
  OneNextSon();
  Ccall(_stratego_i_16);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto u_30;
  u_30 :
  TestFunFC(y_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_30;
  v_30 :
  TestFunFC(y_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_30;
  w_30 :
  TestFunFC(b_1,&&fail,Egetd(1,5));
  Rpush(v_7);
  goto u_31;
  v_7 :
  goto t_7;
  u_31 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(w_7);
  v_31 :
  Cpush(y_7);
  Ccall(_stratego_m_16);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto x_7;
  y_7 :
  Ccontinue(z_7);
  Epushd(2,3);
  MoveTop(2,1);
  goto t_30;
  t_30 :
  TestFunFC(q_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(b_8);
  goto w_31;
  b_8 :
  goto a_8;
  w_31 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(c_8);
  x_31 :
  Cpush(e_8);
  Epushd(3,3);
  MoveTop(3,1);
  goto s_30;
  s_30 :
  TestFunFC(q_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(g_8);
  goto y_31;
  g_8 :
  goto f_8;
  y_31 :
  Move(2,2,3,2);
  Return();
  f_8 :
  Epopd(3,3);
  goto d_8;
  e_8 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_8);
  goto x_31;
  i_8 :
  AllBuild();
  goto h_8;
  d_8 :
  Cpop();
  h_8 :
  Return();
  c_8 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(j_8);
  goto v_31;
  j_8 :
  Return();
  a_8 :
  Epopd(2,3);
  goto x_7;
  z_7 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_8);
  goto v_31;
  l_8 :
  AllBuild();
  goto k_8;
  x_7 :
  Cpop();
  k_8 :
  Return();
  w_7 :
  Return();
  t_7 :
  Epopd(1,5);
  Return();
  r_7 :
  Epopd(0,3);
  goto q_7;
  o_7 :
  Cpop();
  q_7 :
  Return();
  n_7 :
ENDPROC

PROC(_stratego_z_16)
  Rpush(m_8);
  i_33 :
  Epushd(0,3);
  MoveTop(0,1);
  goto l_32;
  l_32 :
  TestFunFC(e_2,&&q_8,Egetd(0,1));
  Rpush(p_8);
  goto j_33;
  q_8 :
  TestFunFC(q_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_8);
  goto k_33;
  p_8 :
  goto o_8;
  k_33 :
  Epushd(1,13);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(s_8);
  goto i_33;
  s_8 :
  OneNextSon();
  Ccall(_stratego_i_16);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto c_32;
  c_32 :
  TestFunFC(y_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto d_32;
  d_32 :
  TestFunFC(y_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto e_32;
  e_32 :
  TestFunFC(y_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto f_32;
  f_32 :
  TestFunFC(b_1,&&fail,Egetd(1,6));
  goto g_32;
  g_32 :
  TestFunFC(y_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto h_32;
  h_32 :
  TestFunFC(y_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto i_32;
  i_32 :
  TestFunFC(y_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto j_32;
  j_32 :
  TestFunFC(b_1,&&fail,Egetd(1,12));
  goto k_32;
  k_32 :
  TestFunFC(b_1,&&fail,Egetd(1,13));
  Rpush(t_8);
  goto l_33;
  t_8 :
  goto r_8;
  l_33 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset(App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,9)),App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,11)),App0("TNil"))));
  Return();
  r_8 :
  Epopd(1,13);
  Return();
  o_8 :
  goto n_8;
  j_33 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  n_8 :
  Epopd(0,3);
  Return();
  m_8 :
ENDPROC
