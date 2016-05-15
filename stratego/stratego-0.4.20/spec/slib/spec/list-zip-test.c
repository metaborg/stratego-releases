#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,z_1);
VARDECL(AFun,x_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_g_11);
PROCDECL(_stratego_h_11);
PROCDECL(_stratego_k_11);
PROCDECL(_stratego_l_11);
PROCDECL(_stratego_m_11);
PROCDECL(_stratego_n_11);
PROCDECL(_stratego_o_11);
PROCDECL(_stratego_p_11);
PROCDECL(_stratego_q_11);
PROCDECL(_stratego_r_11);
PROCDECL(_stratego_s_11);
PROCDECL(_stratego_t_11);
PROCDECL(_stratego_u_11);
PROCDECL(_stratego_v_11);
PROCDECL(_stratego_w_11);
PROCDECL(_stratego_x_11);

PROC(_stratego_init_afuns)
  MOVE(z_1,ATmakeAFun("Nil",0,0));
  MOVE(x_0,ATmakeAFun("Cons",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("list-zip-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_11);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_h_11);
  Ccall(_stratego_o_11);
  Ccall(_stratego_v_11);
  Ccall(_stratego_w_11);
  Ccall(_stratego_k_11);
  Ccall(_stratego_m_11);
ENDPROC

PROC(_stratego_g_11)
  _ST_printnl();
ENDPROC

PROC(_stratego_h_11)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_k_11)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_11);
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
  Ccall(_stratego_g_11);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_l_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_3;
  a_3 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto c_3;
  c_0 :
  goto b_0;
  c_3 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_11)
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
  goto e_3;
  e_3 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto g_3;
  h_0 :
  goto g_0;
  g_3 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_n_11);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_n_11);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_n_11)
  _ST_exit();
ENDPROC

PROC(_stratego_o_11)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("tuple-zip-test"));
  Ccall(_stratego_s_11);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,1);
  Tset(App2("TCons",App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(4),App2("Cons",MakeInt(5),App2("Cons",MakeInt(6),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(7),App2("Cons",MakeInt(8),App2("Cons",MakeInt(9),App0("Nil")))),App0("TNil")))));
  Rpush(o_0);
  g_7 :
  Cpush(q_0);
  Epushd(2,8);
  MoveTop(2,1);
  Rpush(r_0);
  i_7 :
  Cpush(t_0);
  Ccall(_stratego_l_11);
  goto s_0;
  t_0 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  MoveTop(3,1);
  goto j_3;
  j_3 :
  TestFunFC(x_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_0);
  goto j_7;
  w_0 :
  goto v_0;
  j_7 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  v_0 :
  Epopd(3,3);
  OneNextSon();
  Rpush(y_0);
  goto i_7;
  y_0 :
  AllBuild();
  goto u_0;
  s_0 :
  Cpop();
  u_0 :
  Return();
  r_0 :
  MoveTop(2,2);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Rpush(z_0);
  l_7 :
  Cpush(b_1);
  Ccall(_stratego_l_11);
  goto a_1;
  b_1 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  MoveTop(3,1);
  goto m_3;
  m_3 :
  TestFunFC(x_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(e_1);
  goto m_7;
  e_1 :
  goto d_1;
  m_7 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Return();
  d_1 :
  Epopd(3,3);
  OneNextSon();
  Rpush(f_1);
  goto l_7;
  f_1 :
  AllBuild();
  goto c_1;
  a_1 :
  Cpop();
  c_1 :
  Return();
  z_0 :
  MoveTop(2,3);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(h_1);
  goto g_7;
  h_1 :
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  MoveTop(2,4);
  goto c_4;
  c_4 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto d_4;
  d_4 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto e_4;
  e_4 :
  TestFunFC(d_0,&&fail,Egetd(2,8));
  Rpush(i_1);
  goto l_8;
  i_1 :
  goto g_1;
  l_8 :
  NotNULLd(2,5);
  NotNULLd(2,7);
  Tset(App2("Cons",Egetd(2,5),Egetd(2,7)));
  Return();
  g_1 :
  Epopd(2,8);
  goto p_0;
  q_0 :
  Rpush(k_1);
  m_8 :
  Cpush(m_1);
  Ccall(_stratego_l_11);
  goto l_1;
  m_1 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_11);
  OneNextSon();
  Rpush(o_1);
  goto m_8;
  o_1 :
  AllBuild();
  goto n_1;
  l_1 :
  Cpop();
  n_1 :
  Return();
  k_1 :
  Tset(App0("Nil"));
  goto j_1;
  p_0 :
  Cpop();
  j_1 :
  Return();
  o_0 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_11);
  Ccall(_stratego_t_11);
  goto p_1;
  m_0 :
  Cpop();
  p_1 :
  Tset(App2("Cons",App2("TCons",MakeInt(1),App2("TCons",MakeInt(4),App2("TCons",MakeInt(7),App0("TNil")))),App2("Cons",App2("TCons",MakeInt(2),App2("TCons",MakeInt(5),App2("TCons",MakeInt(8),App0("TNil")))),App2("Cons",App2("TCons",MakeInt(3),App2("TCons",MakeInt(6),App2("TCons",MakeInt(9),App0("TNil")))),App0("Nil")))));
  Tdupl();
  Tset(App2("Cons",App2("TCons",MakeInt(1),App2("TCons",MakeInt(4),App2("TCons",MakeInt(7),App0("TNil")))),App2("Cons",App2("TCons",MakeInt(2),App2("TCons",MakeInt(5),App2("TCons",MakeInt(8),App0("TNil")))),App2("Cons",App2("TCons",MakeInt(3),App2("TCons",MakeInt(6),App2("TCons",MakeInt(9),App0("TNil")))),App0("Nil")))));
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
  Ccall(_stratego_g_11);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_11);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_11);
  goto s_1;
  q_1 :
  Cpop();
  s_1 :
  Tpop();
  Ccall(_stratego_p_11);
  goto j_0;
  l_0 :
  Ccall(_stratego_r_11);
  goto u_1;
  j_0 :
  Cpop();
  u_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_11)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_q_11);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_q_11)
  _ST_add();
ENDPROC

PROC(_stratego_r_11)
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
  Ccall(_stratego_q_11);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_s_11)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_g_11);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_t_11)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto d_10;
  d_10 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto e_10;
  e_10 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto f_10;
  f_10 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(w_1);
  goto j_11;
  w_1 :
  goto v_1;
  j_11 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  v_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_u_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_11;
  z_11 :
  TestFunFC(z_1,&&fail,Egetd(0,1));
  Rpush(y_1);
  goto b_12;
  y_1 :
  goto x_1;
  b_12 :
  Return();
  x_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_11)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("tuple-unzip-test"));
  Ccall(_stratego_s_11);
  Tpop();
  Cpush(b_2);
  Tdupl();
  Cpush(e_2);
  Epushd(1,1);
  Tset(App2("Cons",App2("TCons",MakeInt(1),App2("TCons",MakeInt(4),App2("TCons",MakeInt(7),App0("TNil")))),App2("Cons",App2("TCons",MakeInt(2),App2("TCons",MakeInt(5),App2("TCons",MakeInt(8),App0("TNil")))),App2("Cons",App2("TCons",MakeInt(3),App2("TCons",MakeInt(6),App2("TCons",MakeInt(9),App0("TNil")))),App0("Nil")))));
  Rpush(f_2);
  w_14 :
  Cpush(h_2);
  Epushd(2,8);
  MoveTop(2,1);
  Rpush(i_2);
  y_14 :
  Cpush(k_2);
  Ccall(_stratego_u_11);
  goto j_2;
  k_2 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  MoveTop(3,1);
  goto e_12;
  e_12 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(n_2);
  goto z_14;
  n_2 :
  goto m_2;
  z_14 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  m_2 :
  Epopd(3,3);
  OneNextSon();
  Rpush(o_2);
  goto y_14;
  o_2 :
  AllBuild();
  goto l_2;
  j_2 :
  Cpop();
  l_2 :
  Return();
  i_2 :
  MoveTop(2,2);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Rpush(p_2);
  b_15 :
  Cpush(r_2);
  Ccall(_stratego_u_11);
  goto q_2;
  r_2 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  MoveTop(3,1);
  goto h_12;
  h_12 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(u_2);
  goto c_15;
  u_2 :
  goto t_2;
  c_15 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Return();
  t_2 :
  Epopd(3,3);
  OneNextSon();
  Rpush(v_2);
  goto b_15;
  v_2 :
  AllBuild();
  goto s_2;
  q_2 :
  Cpop();
  s_2 :
  Return();
  p_2 :
  MoveTop(2,3);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(x_2);
  goto w_14;
  x_2 :
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  MoveTop(2,4);
  goto k_12;
  k_12 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto l_12;
  l_12 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto m_12;
  m_12 :
  TestFunFC(d_0,&&fail,Egetd(2,8));
  Rpush(y_2);
  goto e_15;
  y_2 :
  goto w_2;
  e_15 :
  NotNULLd(2,5);
  NotNULLd(2,7);
  Tset(App2("TCons",Egetd(2,5),Egetd(2,7)));
  Return();
  w_2 :
  Epopd(2,8);
  goto g_2;
  h_2 :
  Rpush(d_3);
  f_15 :
  Cpush(i_3);
  Ccall(_stratego_u_11);
  goto h_3;
  i_3 :
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_11);
  OneNextSon();
  Rpush(l_3);
  goto f_15;
  l_3 :
  AllBuild();
  goto k_3;
  h_3 :
  Cpop();
  k_3 :
  Return();
  d_3 :
  Tset(App0("TNil"));
  goto z_2;
  g_2 :
  Cpop();
  z_2 :
  Return();
  f_2 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto c_2;
  e_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_11);
  Ccall(_stratego_t_11);
  goto n_3;
  c_2 :
  Cpop();
  n_3 :
  Tset(App2("TCons",App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(4),App2("Cons",MakeInt(5),App2("Cons",MakeInt(6),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(7),App2("Cons",MakeInt(8),App2("Cons",MakeInt(9),App0("Nil")))),App0("TNil")))));
  Tdupl();
  Tset(App2("TCons",App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(4),App2("Cons",MakeInt(5),App2("Cons",MakeInt(6),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(7),App2("Cons",MakeInt(8),App2("Cons",MakeInt(9),App0("Nil")))),App0("TNil")))));
  MoveTop(0,2);
  Tpop();
  Cpush(p_3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto o_3;
  p_3 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_11);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_11);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_11);
  goto q_3;
  o_3 :
  Cpop();
  q_3 :
  Tpop();
  Ccall(_stratego_p_11);
  goto a_2;
  b_2 :
  Ccall(_stratego_r_11);
  goto r_3;
  a_2 :
  Cpop();
  r_3 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_w_11)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("nzip0-test"));
  Ccall(_stratego_s_11);
  Tpop();
  Cpush(t_3);
  Tdupl();
  Cpush(v_3);
  Epushd(1,1);
  Tset(App2("TCons",MakeInt(0),App2("TCons",App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App2("Cons",ATmakeString("c"),App0("Nil")))),App0("TNil"))));
  Rpush(w_3);
  p_18 :
  Epushd(2,7);
  MoveTop(2,1);
  goto b_16;
  b_16 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_16;
  c_16 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,7,2,3,1);
  goto d_16;
  d_16 :
  TestFunFC(z_1,&&a_4,Egetd(2,4));
  goto e_16;
  e_16 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(z_3);
  goto q_18;
  a_4 :
  TestFunFC(x_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto f_16;
  f_16 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(z_3);
  goto r_18;
  z_3 :
  goto y_3;
  r_18 :
  Epushd(3,6);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_x_11);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,5);
  NotNULLd(3,1);
  NotNULLd(2,6);
  Tset(App2("TCons",App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(f_4);
  goto p_18;
  f_4 :
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  MoveTop(3,2);
  goto y_15;
  y_15 :
  TestFunFC(a_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto z_15;
  z_15 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto a_16;
  a_16 :
  TestFunFC(d_0,&&fail,Egetd(3,6));
  Rpush(g_4);
  goto t_18;
  g_4 :
  goto b_4;
  t_18 :
  NotNULLd(3,3);
  NotNULLd(3,5);
  Tset(App2("Cons",Egetd(3,3),Egetd(3,5)));
  Return();
  b_4 :
  Epopd(3,6);
  Return();
  y_3 :
  goto x_3;
  q_18 :
  Tset(App0("Nil"));
  Return();
  x_3 :
  Epopd(2,7);
  Return();
  w_3 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto u_3;
  v_3 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_11);
  Ccall(_stratego_t_11);
  goto h_4;
  u_3 :
  Cpop();
  h_4 :
  Tset(App2("Cons",App2("TCons",MakeInt(0),App2("TCons",ATmakeString("a"),App0("TNil"))),App2("Cons",App2("TCons",MakeInt(1),App2("TCons",ATmakeString("b"),App0("TNil"))),App2("Cons",App2("TCons",MakeInt(2),App2("TCons",ATmakeString("c"),App0("TNil"))),App0("Nil")))));
  Tdupl();
  Tset(App2("Cons",App2("TCons",MakeInt(0),App2("TCons",ATmakeString("a"),App0("TNil"))),App2("Cons",App2("TCons",MakeInt(1),App2("TCons",ATmakeString("b"),App0("TNil"))),App2("Cons",App2("TCons",MakeInt(2),App2("TCons",ATmakeString("c"),App0("TNil"))),App0("Nil")))));
  MoveTop(0,2);
  Tpop();
  Cpush(j_4);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto i_4;
  j_4 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_11);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_11);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_11);
  goto k_4;
  i_4 :
  Cpop();
  k_4 :
  Tpop();
  Ccall(_stratego_p_11);
  goto s_3;
  t_3 :
  Ccall(_stratego_r_11);
  goto l_4;
  s_3 :
  Cpop();
  l_4 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_x_11)
  _ST_plus();
ENDPROC
