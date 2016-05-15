#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,a_2);
VARDECL(AFun,t_1);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_x_8);
PROCDECL(_stratego_y_8);
PROCDECL(_stratego_z_8);
PROCDECL(_stratego_a_9);
PROCDECL(_stratego_b_9);
PROCDECL(_stratego_c_9);
PROCDECL(_stratego_d_9);
PROCDECL(_stratego_e_9);
PROCDECL(_stratego_f_9);
PROCDECL(_stratego_g_9);
PROCDECL(_stratego_h_9);
PROCDECL(_stratego_i_9);
PROCDECL(_stratego_j_9);
PROCDECL(_stratego_k_9);
PROCDECL(_stratego_l_9);
PROCDECL(_stratego_m_9);
PROCDECL(_stratego_n_9);
PROCDECL(_stratego_o_9);
PROCDECL(_stratego_p_9);
PROCDECL(_stratego_q_9);

PROC(_stratego_init_afuns)
  MOVE(a_2,ATmakeAFun("Nil",0,0));
  MOVE(t_1,ATmakeAFun("Cons",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("needed-defs-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_8);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_y_8);
  Ccall(_stratego_d_9);
  Ccall(_stratego_z_8);
  Ccall(_stratego_b_9);
ENDPROC

PROC(_stratego_x_8)
  _ST_printnl();
ENDPROC

PROC(_stratego_y_8)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_z_8)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_8);
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
  Ccall(_stratego_x_8);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_a_9);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_a_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_3;
  s_3 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto u_3;
  c_0 :
  goto b_0;
  u_3 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_9)
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
  goto l_4;
  l_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto n_4;
  h_0 :
  goto g_0;
  n_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_a_9);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_c_9);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_c_9);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_c_9)
  _ST_exit();
ENDPROC

PROC(_stratego_d_9)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("define-congruence-test"));
  Ccall(_stratego_h_9);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Epushd(1,1);
  Cpush(n_0);
  Epushd(2,1);
  Tset(App2("TCons",ATmakeString("If"),App2("TCons",ATmakeString("T"),App2("TCons",MakeInt(3),App0("TNil")))));
  Ccall(_stratego_j_9);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_h_9);
  Ccall(_stratego_i_9);
  goto o_0;
  m_0 :
  Cpop();
  o_0 :
  Tset(ATmakeString("data/if-congruence.trm"));
  Ccall(_stratego_q_9);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(q_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto p_0;
  q_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_8);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_8);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_i_9);
  goto r_0;
  p_0 :
  Cpop();
  r_0 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_e_9);
  goto j_0;
  l_0 :
  Ccall(_stratego_g_9);
  goto s_0;
  j_0 :
  Cpop();
  s_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_e_9)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_f_9);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_9);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_f_9)
  _ST_add();
ENDPROC

PROC(_stratego_g_9)
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
  Ccall(_stratego_f_9);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_a_9);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_h_9)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_x_8);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_i_9)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto h_10;
  h_10 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto i_10;
  i_10 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto j_10;
  j_10 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(u_0);
  goto s_10;
  u_0 :
  goto t_0;
  s_10 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  t_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_j_9)
  Epushd(0,7);
  MoveTop(0,1);
  goto a_15;
  a_15 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_15;
  b_15 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_15;
  c_15 :
  TestStr(0,4,"D",&&z_0);
  goto d_15;
  d_15 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto e_15;
  e_15 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(y_0);
  goto u_24;
  z_0 :
  TestStr(0,4,"T",&&fail);
  goto f_15;
  f_15 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto g_15;
  g_15 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  goto h_15;
  h_15 :
  TestInt(0,6,0,&&a_1);
  Cpush(c_1);
  Rpush(d_1);
  goto u_25;
  d_1 :
  goto b_1;
  c_1 :
  Rpush(f_1);
  goto w_25;
  f_1 :
  goto e_1;
  b_1 :
  Cpop();
  e_1 :
  goto y_0;
  a_1 :
  Rpush(y_0);
  goto w_25;
  y_0 :
  goto x_0;
  w_25 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_f_9);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",App0("TNil"),App0("TNil"))));
  MoveTop(2,2);
  goto w_14;
  w_14 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto x_14;
  x_14 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto y_14;
  y_14 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(h_1);
  goto y_25;
  h_1 :
  goto g_1;
  y_25 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(j_1);
  z_25 :
  Epushd(4,7);
  MoveTop(4,1);
  goto c_13;
  c_13 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto d_13;
  d_13 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto e_13;
  e_13 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto f_13;
  f_13 :
  TestFunFC(d_0,&&fail,Egetd(4,7));
  Rpush(l_1);
  goto a_26;
  l_1 :
  goto k_1;
  a_26 :
  Epushd(5,2);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_n_9);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_m_9);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_o_9);
  MoveTop(5,2);
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",Egetd(5,2),Egetd(4,6)),App0("TNil")))));
  Cpush(n_1);
  Epushd(6,7);
  MoveTop(6,1);
  goto x_12;
  x_12 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto y_12;
  y_12 :
  TestInt(6,2,0,&&fail);
  goto z_12;
  z_12 :
  TestFunFC(a_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto a_13;
  a_13 :
  TestFunFC(a_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto b_13;
  b_13 :
  TestFunFC(d_0,&&fail,Egetd(6,7));
  Rpush(p_1);
  goto d_26;
  p_1 :
  goto o_1;
  d_26 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  o_1 :
  Epopd(6,7);
  goto m_1;
  n_1 :
  Rpush(r_1);
  goto z_25;
  r_1 :
  goto q_1;
  m_1 :
  Cpop();
  q_1 :
  Epopd(5,2);
  Return();
  k_1 :
  Epopd(4,7);
  Return();
  j_1 :
  MoveTop(3,1);
  goto v_14;
  v_14 :
  TestFunFC(t_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_1);
  goto e_26;
  s_1 :
  goto i_1;
  e_26 :
  Epushd(4,14);
  Move(1,2,3,2);
  Move(1,3,3,3);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_p_9);
  MoveTop(4,1);
  Move(1,1,4,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",App2("Cons",Egetd(1,2),Egetd(1,3)),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(u_1);
  g_26 :
  Epushd(5,9);
  MoveTop(5,1);
  goto v_13;
  v_13 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto w_13;
  w_13 :
  TestFunFC(a_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto x_13;
  x_13 :
  TestFunFC(a_2,&&z_1,Egetd(5,6));
  goto y_13;
  y_13 :
  TestFunFC(d_0,&&fail,Egetd(5,9));
  goto z_13;
  z_13 :
  b_2 :
  Rpush(y_1);
  goto h_26;
  z_1 :
  TestFunFC(t_1,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto a_14;
  a_14 :
  TestFunFC(t_1,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto b_14;
  b_14 :
  TestFunFC(d_0,&&fail,Egetd(5,9));
  Rpush(y_1);
  goto i_26;
  y_1 :
  goto x_1;
  i_26 :
  Epushd(6,5);
  NotNULLd(5,3);
  NotNULLd(5,7);
  NotNULLd(5,4);
  NotNULLd(5,8);
  Tset(App2("TCons",App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(5,4),App2("TCons",Egetd(5,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(7,5);
  MoveTop(7,1);
  goto o_13;
  o_13 :
  TestFunFC(a_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto p_13;
  p_13 :
  TestFunFC(a_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto q_13;
  q_13 :
  TestFunFC(d_0,&&fail,Egetd(7,5));
  Rpush(e_2);
  goto j_26;
  e_2 :
  goto d_2;
  j_26 :
  Epushd(8,3);
  Tdupl();
  Epushd(9,3);
  Ccall(_stratego_o_9);
  MoveTop(9,1);
  Move(8,1,9,1);
  Ccall(_stratego_o_9);
  MoveTop(9,2);
  Move(8,2,9,2);
  Ccall(_stratego_o_9);
  MoveTop(9,3);
  Move(8,3,9,3);
  Epopd(9,3);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,4);
  NotNULLd(8,1);
  NotNULLd(8,2);
  NotNULLd(8,3);
  Tset(App2("TCons",App3("BAM",App2("Call",App1("SVar",Egetd(8,1)),App0("Nil")),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(8,2)),App2("Cons",App1("Var",Egetd(7,2)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(8,3)),App2("Cons",App1("Var",Egetd(7,4)),App0("Nil"))))),App2("TCons",Egetd(8,1),App2("TCons",Egetd(8,2),App2("TCons",App1("Var",Egetd(8,2)),App2("TCons",Egetd(8,3),App2("TCons",App1("Var",Egetd(8,3)),App0("TNil"))))))));
  Epopd(8,3);
  Return();
  d_2 :
  Epopd(7,5);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(f_2);
  goto g_26;
  f_2 :
  OneNextSon();
  Ccall(_stratego_a_9);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto s_13;
  s_13 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto t_13;
  t_13 :
  TestFunFC(a_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto u_13;
  u_13 :
  TestFunFC(d_0,&&fail,Egetd(6,5));
  Rpush(g_2);
  goto n_26;
  g_2 :
  goto c_2;
  n_26 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),Egetd(6,4)));
  Return();
  c_2 :
  Epopd(6,5);
  Return();
  x_1 :
  goto w_1;
  h_26 :
  Tset(App0("Nil"));
  Return();
  w_1 :
  Epopd(5,9);
  Return();
  u_1 :
  Rpush(i_2);
  o_26 :
  Cpush(k_2);
  Epushd(5,8);
  MoveTop(5,1);
  Rpush(l_2);
  q_26 :
  Cpush(n_2);
  Ccall(_stratego_k_9);
  goto m_2;
  n_2 :
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto e_14;
  e_14 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(q_2);
  goto r_26;
  q_2 :
  goto p_2;
  r_26 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  p_2 :
  Epopd(6,3);
  OneNextSon();
  Rpush(r_2);
  goto q_26;
  r_2 :
  AllBuild();
  goto o_2;
  m_2 :
  Cpop();
  o_2 :
  Return();
  l_2 :
  MoveTop(5,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  Rpush(s_2);
  t_26 :
  Cpush(u_2);
  Ccall(_stratego_k_9);
  goto t_2;
  u_2 :
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto h_14;
  h_14 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(y_2);
  goto u_26;
  y_2 :
  goto x_2;
  u_26 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  x_2 :
  Epopd(6,3);
  OneNextSon();
  Rpush(z_2);
  goto t_26;
  z_2 :
  AllBuild();
  goto w_2;
  t_2 :
  Cpop();
  w_2 :
  Return();
  s_2 :
  MoveTop(5,3);
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,3),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(b_3);
  goto o_26;
  b_3 :
  OneNextSon();
  Ccall(_stratego_a_9);
  AllBuild();
  AllBuild();
  MoveTop(5,4);
  goto k_14;
  k_14 :
  TestFunFC(a_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto l_14;
  l_14 :
  TestFunFC(a_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto m_14;
  m_14 :
  TestFunFC(d_0,&&fail,Egetd(5,8));
  Rpush(c_3);
  goto w_26;
  c_3 :
  goto a_3;
  w_26 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("TCons",Egetd(5,5),Egetd(5,7)));
  Return();
  a_3 :
  Epopd(5,8);
  goto j_2;
  k_2 :
  Rpush(e_3);
  x_26 :
  Cpush(g_3);
  Ccall(_stratego_k_9);
  goto f_3;
  g_3 :
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_9);
  OneNextSon();
  Rpush(i_3);
  goto x_26;
  i_3 :
  AllBuild();
  goto h_3;
  f_3 :
  Cpop();
  h_3 :
  Return();
  e_3 :
  Tset(App0("TNil"));
  goto d_3;
  j_2 :
  Cpop();
  d_3 :
  Return();
  i_2 :
  MoveTop(4,2);
  goto o_14;
  o_14 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto p_14;
  p_14 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto q_14;
  q_14 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto r_14;
  r_14 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto s_14;
  s_14 :
  TestFunFC(a_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto t_14;
  t_14 :
  TestFunFC(a_0,&&fail,Egetd(4,12));
  MoveArg(4,13,4,12,0);
  MoveArg(4,14,4,12,1);
  goto u_14;
  u_14 :
  TestFunFC(d_0,&&fail,Egetd(4,14));
  Rpush(j_3);
  goto y_26;
  j_3 :
  goto h_2;
  y_26 :
  Move(1,4,4,3);
  Move(1,5,4,5);
  Move(1,6,4,7);
  Move(1,7,4,9);
  Move(1,8,4,11);
  Move(1,9,4,13);
  Return();
  h_2 :
  Epopd(4,14);
  Return();
  i_1 :
  Epopd(3,3);
  Return();
  g_1 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App2("Cons",Egetd(1,3),App2("Cons",Egetd(1,6),App2("Cons",Egetd(1,8),App0("Nil")))));
  Ccall(_stratego_l_9);
  MoveTop(1,10);
  NotNULLd(1,5);
  NotNULLd(1,10);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(0,2);
  NotNULLd(1,9);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("T")),Egetd(1,5),App2("Scope",App2("Cons",Egetd(1,2),Egetd(1,10)),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,7)),App2("Cons",App1("Var",Egetd(1,2)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,9)),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App1("Seqs",Egetd(1,4)))))));
  Epopd(1,10);
  Return();
  x_0 :
  goto w_0;
  u_25 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_o_9);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("T")),App0("Nil"),App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),App0("Nil")),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),App0("Nil")),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App0("Id"))))));
  Epopd(1,1);
  Return();
  w_0 :
  goto v_0;
  u_24 :
  Epushd(1,12);
  Tdupl();
  Epushd(2,6);
  Ccall(_stratego_o_9);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",App1("Var",Egetd(1,1)),App0("TNil"))));
  MoveTop(2,2);
  goto i_12;
  i_12 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto j_12;
  j_12 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto k_12;
  k_12 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(l_3);
  goto w_24;
  l_3 :
  goto k_3;
  w_24 :
  Epushd(3,13);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(m_3);
  x_24 :
  Epushd(4,7);
  MoveTop(4,1);
  goto l_11;
  l_11 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto m_11;
  m_11 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto n_11;
  n_11 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto o_11;
  o_11 :
  TestFunFC(d_0,&&fail,Egetd(4,7));
  Rpush(o_3);
  goto y_24;
  o_3 :
  goto n_3;
  y_24 :
  Epushd(5,4);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_n_9);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_m_9);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Tdupl();
  Epushd(6,3);
  Ccall(_stratego_o_9);
  MoveTop(6,1);
  Move(5,2,6,1);
  Ccall(_stratego_o_9);
  MoveTop(6,2);
  Move(5,3,6,2);
  Ccall(_stratego_o_9);
  MoveTop(6,3);
  Move(5,4,6,3);
  Epopd(6,3);
  Tpop();
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(5,3);
  NotNULLd(5,4);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",App2("TCons",App3("BAM",App2("Call",App1("SVar",Egetd(5,2)),App0("Nil")),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(5,3)),App2("Cons",Egetd(4,4),App0("Nil")))),App1("Var",Egetd(5,4))),App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,3),App2("TCons",App1("Var",Egetd(5,3)),App2("TCons",Egetd(5,4),App2("TCons",App1("Var",Egetd(5,4)),App0("TNil"))))))),Egetd(4,6)),App0("TNil")))));
  Cpush(q_3);
  Epushd(6,7);
  MoveTop(6,1);
  goto g_11;
  g_11 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto h_11;
  h_11 :
  TestInt(6,2,0,&&fail);
  goto i_11;
  i_11 :
  TestFunFC(a_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto j_11;
  j_11 :
  TestFunFC(a_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto k_11;
  k_11 :
  TestFunFC(d_0,&&fail,Egetd(6,7));
  Rpush(v_3);
  goto f_25;
  v_3 :
  goto r_3;
  f_25 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  r_3 :
  Epopd(6,7);
  goto p_3;
  q_3 :
  Rpush(x_3);
  goto x_24;
  x_3 :
  goto w_3;
  p_3 :
  Cpop();
  w_3 :
  Epopd(5,4);
  Return();
  n_3 :
  Epopd(4,7);
  Return();
  m_3 :
  Rpush(z_3);
  g_25 :
  Cpush(b_4);
  Epushd(4,8);
  MoveTop(4,1);
  Rpush(c_4);
  i_25 :
  Cpush(e_4);
  Ccall(_stratego_k_9);
  goto d_4;
  e_4 :
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto r_11;
  r_11 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(h_4);
  goto j_25;
  h_4 :
  goto g_4;
  j_25 :
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Return();
  g_4 :
  Epopd(5,3);
  OneNextSon();
  Rpush(i_4);
  goto i_25;
  i_4 :
  AllBuild();
  goto f_4;
  d_4 :
  Cpop();
  f_4 :
  Return();
  c_4 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(j_4);
  l_25 :
  Cpush(o_4);
  Ccall(_stratego_k_9);
  goto k_4;
  o_4 :
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto u_11;
  u_11 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(r_4);
  goto m_25;
  r_4 :
  goto q_4;
  m_25 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Return();
  q_4 :
  Epopd(5,3);
  OneNextSon();
  Rpush(s_4);
  goto l_25;
  s_4 :
  AllBuild();
  goto p_4;
  k_4 :
  Cpop();
  p_4 :
  Return();
  j_4 :
  MoveTop(4,3);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,3),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(u_4);
  goto g_25;
  u_4 :
  OneNextSon();
  Ccall(_stratego_a_9);
  AllBuild();
  AllBuild();
  MoveTop(4,4);
  goto x_11;
  x_11 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto y_11;
  y_11 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto z_11;
  z_11 :
  TestFunFC(d_0,&&fail,Egetd(4,8));
  Rpush(v_4);
  goto o_25;
  v_4 :
  goto t_4;
  o_25 :
  NotNULLd(4,5);
  NotNULLd(4,7);
  Tset(App2("TCons",Egetd(4,5),Egetd(4,7)));
  Return();
  t_4 :
  Epopd(4,8);
  goto a_4;
  b_4 :
  Rpush(x_4);
  p_25 :
  Cpush(z_4);
  Ccall(_stratego_k_9);
  goto y_4;
  z_4 :
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_9);
  OneNextSon();
  Rpush(b_5);
  goto p_25;
  b_5 :
  AllBuild();
  goto a_5;
  y_4 :
  Cpop();
  a_5 :
  Return();
  x_4 :
  Tset(App0("TNil"));
  goto w_4;
  a_4 :
  Cpop();
  w_4 :
  Return();
  z_3 :
  MoveTop(3,1);
  goto b_12;
  b_12 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto c_12;
  c_12 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto d_12;
  d_12 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto e_12;
  e_12 :
  TestFunFC(a_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto f_12;
  f_12 :
  TestFunFC(a_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto g_12;
  g_12 :
  TestFunFC(a_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto h_12;
  h_12 :
  TestFunFC(d_0,&&fail,Egetd(3,13));
  Rpush(c_5);
  goto q_25;
  c_5 :
  goto y_3;
  q_25 :
  Move(1,2,3,2);
  Move(1,3,3,4);
  Move(1,4,3,6);
  Move(1,5,3,8);
  Move(1,6,3,10);
  Move(1,7,3,12);
  Return();
  y_3 :
  Epopd(3,13);
  Return();
  k_3 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  MoveTop(1,8);
  goto n_12;
  n_12 :
  TestFunFC(a_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto o_12;
  o_12 :
  TestFunFC(a_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto p_12;
  p_12 :
  TestFunFC(d_0,&&fail,Egetd(1,12));
  Rpush(e_5);
  goto r_25;
  e_5 :
  goto d_5;
  r_25 :
  Epushd(2,1);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  Rpush(f_5);
  s_25 :
  Cpush(h_5);
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_5);
  goto s_25;
  i_5 :
  AllBuild();
  goto g_5;
  h_5 :
  Ccall(_stratego_k_9);
  NotNULLd(1,11);
  Tset(Egetd(1,11));
  goto j_5;
  g_5 :
  Cpop();
  j_5 :
  Return();
  f_5 :
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  NotNULLd(1,5);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(1,7);
  NotNULLd(1,2);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("D")),Egetd(1,3),App2("Scope",App2("Cons",Egetd(1,1),Egetd(2,1)),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,5)),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App2("Op",Egetd(0,2),Egetd(1,7)),App1("Seqs",Egetd(1,2)))))));
  Epopd(2,1);
  Return();
  d_5 :
  Epopd(1,12);
  Return();
  v_0 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_k_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_27;
  b_27 :
  TestFunFC(a_2,&&fail,Egetd(0,1));
  Rpush(l_5);
  goto d_27;
  l_5 :
  goto k_5;
  d_27 :
  Return();
  k_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_9)
  Rpush(m_5);
  l_27 :
  Cpush(s_5);
  Ccall(_stratego_k_9);
  goto n_5;
  s_5 :
  Epushd(0,3);
  MoveTop(0,1);
  goto f_27;
  f_27 :
  TestFunFC(t_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_5);
  goto m_27;
  w_5 :
  goto v_5;
  m_27 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(x_5);
  n_27 :
  Cpush(z_5);
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_6);
  goto n_27;
  a_6 :
  AllBuild();
  goto y_5;
  z_5 :
  Ccall(_stratego_k_9);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(c_6);
  goto l_27;
  c_6 :
  goto b_6;
  y_5 :
  Cpop();
  b_6 :
  Return();
  x_5 :
  Return();
  v_5 :
  Epopd(0,3);
  goto u_5;
  n_5 :
  Cpop();
  u_5 :
  Return();
  m_5 :
ENDPROC

PROC(_stratego_m_9)
  _ST_subt();
ENDPROC

PROC(_stratego_n_9)
  _ST_geq();
ENDPROC

PROC(_stratego_o_9)
  _ST_new();
ENDPROC

PROC(_stratego_p_9)
  Rpush(d_6);
  y_27 :
  Epushd(0,3);
  MoveTop(0,1);
  goto q_27;
  q_27 :
  TestFunFC(t_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_27;
  r_27 :
  TestFunFC(a_2,&&h_6,Egetd(0,3));
  Cpush(j_6);
  Rpush(k_6);
  goto z_27;
  k_6 :
  goto i_6;
  j_6 :
  Rpush(m_6);
  goto a_28;
  m_6 :
  goto l_6;
  i_6 :
  Cpop();
  l_6 :
  goto g_6;
  h_6 :
  Rpush(g_6);
  goto a_28;
  g_6 :
  goto f_6;
  a_28 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(o_6);
  goto y_27;
  o_6 :
  Return();
  f_6 :
  goto e_6;
  z_27 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  e_6 :
  Epopd(0,3);
  Return();
  d_6 :
ENDPROC

PROC(_stratego_q_9)
  _ST_ReadFromFile();
ENDPROC

DOIT

