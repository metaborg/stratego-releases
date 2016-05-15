#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,i_1);
VARDECL(AFun,s_0);
VARDECL(AFun,r_0);
VARDECL(AFun,q_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_r_2);
PROCDECL(_stratego_s_2);
PROCDECL(_stratego_t_2);
PROCDECL(_stratego_u_2);
PROCDECL(_stratego_v_2);
PROCDECL(_stratego_w_2);
PROCDECL(_stratego_x_2);
PROCDECL(_stratego_y_2);
PROCDECL(_stratego_z_2);
PROCDECL(_stratego_a_3);
PROCDECL(_stratego_b_3);
PROCDECL(_stratego_c_3);
PROCDECL(_stratego_d_3);

PROC(_stratego_init_afuns)
  MOVE(i_1,ATmakeAFun("B",0,0));
  MOVE(s_0,ATmakeAFun("A",0,0));
  MOVE(r_0,ATmakeAFun("G",2,0));
  MOVE(q_0,ATmakeAFun("F",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("as-pattern-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_r_2);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_s_2);
  Ccall(_stratego_x_2);
  Ccall(_stratego_d_3);
  Ccall(_stratego_t_2);
  Ccall(_stratego_v_2);
ENDPROC

PROC(_stratego_r_2)
  _ST_printnl();
ENDPROC

PROC(_stratego_s_2)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_t_2)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_r_2);
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
  Ccall(_stratego_r_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_u_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_u_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_4;
  x_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto z_4;
  c_0 :
  goto b_0;
  z_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_2)
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
  goto b_5;
  b_5 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto d_5;
  h_0 :
  goto g_0;
  d_5 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_u_2);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_w_2);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_w_2);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_w_2)
  _ST_exit();
ENDPROC

PROC(_stratego_x_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("as-pattern1"));
  Ccall(_stratego_b_3);
  Tpop();
  Cpush(k_0);
  Tdupl();
  Cpush(m_0);
  Epushd(1,5);
  Tset(App2("F",App0("B"),App2("G",App0("A"),App0("C"))));
  MoveTop(1,1);
  goto g_5;
  g_5 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_5;
  h_5 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto i_5;
  i_5 :
  TestFunFC(s_0,&&fail,Egetd(1,4));
  Rpush(o_0);
  goto c_7;
  o_0 :
  goto n_0;
  c_7 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset(App3("H",Egetd(1,2),Egetd(1,3),Egetd(1,5)));
  Tdupl();
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset(App3("H",Egetd(1,2),Egetd(1,3),Egetd(1,5)));
  MoveTop(0,1);
  Tpop();
  Return();
  n_0 :
  Epopd(1,5);
  goto l_0;
  m_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_b_3);
  Ccall(_stratego_c_3);
  goto t_0;
  l_0 :
  Cpop();
  t_0 :
  Tset(App3("H",App0("B"),App2("G",App0("A"),App0("C")),App0("C")));
  Tdupl();
  Tset(App3("H",App0("B"),App2("G",App0("A"),App0("C")),App0("C")));
  MoveTop(0,2);
  Tpop();
  Cpush(v_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto u_0;
  v_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_r_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_r_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_c_3);
  goto w_0;
  u_0 :
  Cpop();
  w_0 :
  Tpop();
  Ccall(_stratego_y_2);
  goto j_0;
  k_0 :
  Ccall(_stratego_a_3);
  goto x_0;
  j_0 :
  Cpop();
  x_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_2)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_z_2);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_z_2)
  _ST_add();
ENDPROC

PROC(_stratego_a_3)
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
  Ccall(_stratego_z_2);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_u_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_b_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_r_2);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_c_3)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto q_8;
  q_8 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto r_8;
  r_8 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_8;
  s_8 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(z_0);
  goto b_9;
  z_0 :
  goto y_0;
  b_9 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  y_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_d_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("as-pattern2"));
  Ccall(_stratego_b_3);
  Tpop();
  Cpush(b_1);
  Tdupl();
  Cpush(d_1);
  Epushd(1,6);
  Tset(App2("F",App0("B"),App2("G",App0("C"),App0("B"))));
  MoveTop(1,1);
  goto e_9;
  e_9 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_9;
  f_9 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto g_9;
  g_9 :
  TestFunFC(i_1,&&h_1,Egetd(1,5));
  goto h_9;
  h_9 :
  TestFunFC(s_0,&&j_1,Egetd(1,4));
  Cpush(l_1);
  Rpush(m_1);
  goto g_11;
  m_1 :
  goto k_1;
  l_1 :
  Rpush(o_1);
  goto h_11;
  o_1 :
  goto n_1;
  k_1 :
  Cpop();
  n_1 :
  goto g_1;
  j_1 :
  Rpush(g_1);
  goto h_11;
  h_1 :
  goto i_9;
  i_9 :
  TestFunFC(s_0,&&fail,Egetd(1,4));
  Rpush(g_1);
  goto g_11;
  g_1 :
  goto f_1;
  h_11 :
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App3("H",Egetd(1,2),Egetd(1,4),App0("B")));
  Return();
  f_1 :
  goto e_1;
  g_11 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset(App3("H",Egetd(1,2),Egetd(1,3),Egetd(1,5)));
  Return();
  e_1 :
  MoveTop(1,6);
  Move(0,1,1,6);
  Epopd(1,6);
  goto c_1;
  d_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_b_3);
  Ccall(_stratego_c_3);
  goto p_1;
  c_1 :
  Cpop();
  p_1 :
  Tset(App3("H",App0("B"),App0("C"),App0("B")));
  Tdupl();
  Tset(App3("H",App0("B"),App0("C"),App0("B")));
  MoveTop(0,2);
  Tpop();
  Cpush(r_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto q_1;
  r_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_r_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_r_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_c_3);
  goto s_1;
  q_1 :
  Cpop();
  s_1 :
  Tpop();
  Ccall(_stratego_y_2);
  goto a_1;
  b_1 :
  Ccall(_stratego_a_3);
  goto t_1;
  a_1 :
  Cpop();
  t_1 :
  Epopd(0,2);
ENDPROC

DOIT

