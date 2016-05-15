#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,n_0);
VARDECL(AFun,l_0);
VARDECL(AFun,k_0);
VARDECL(AFun,i_0);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(n_0,ATmakeAFun("Cons",2,0));
  MOVE(l_0,ATmakeAFun("TNil",0,0));
  MOVE(k_0,ATmakeAFun("Nil",0,0));
  MOVE(i_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_l_4)
  _ST_plus();
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("nzip0-test"));
  Ccall(_stratego_q_4);
  Tpop();
  Cpush(b_0);
  Tdupl();
  Cpush(d_0);
  Epushd(1,1);
  Tset(App2("TCons",MakeInt(0),App2("TCons",App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App2("Cons",ATmakeString("c"),App0("Nil")))),App0("TNil"))));
  Rpush(e_0);
  z_6 :
  Epushd(2,7);
  MoveTop(2,1);
  goto g_2;
  g_2 :
  TestFunFC(i_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto y_2;
  y_2 :
  TestFunFC(i_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,7,2,3,1);
  goto z_2;
  z_2 :
  TestFunFC(k_0,&&j_0,Egetd(2,4));
  goto f_3;
  f_3 :
  TestFunFC(l_0,&&fail,Egetd(2,7));
  Rpush(h_0);
  goto m_0;
  j_0 :
  TestFunFC(n_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto g_3;
  g_3 :
  TestFunFC(l_0,&&fail,Egetd(2,7));
  Rpush(h_0);
  goto s_0;
  h_0 :
  goto g_0;
  s_0 :
  Epushd(3,6);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_l_4);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,5);
  NotNULLd(3,1);
  NotNULLd(2,6);
  Tset(App2("TCons",App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Rpush(p_0);
  goto z_6;
  p_0 :
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  MoveTop(3,2);
  goto p_1;
  p_1 :
  TestFunFC(i_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto v_1;
  v_1 :
  TestFunFC(i_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto w_1;
  w_1 :
  TestFunFC(l_0,&&fail,Egetd(3,6));
  Rpush(q_0);
  goto o_1;
  q_0 :
  goto o_0;
  o_1 :
  NotNULLd(3,3);
  NotNULLd(3,5);
  Tset(App2("Cons",Egetd(3,3),Egetd(3,5)));
  Return();
  o_0 :
  Epopd(3,6);
  Return();
  g_0 :
  goto f_0;
  m_0 :
  Tset(App0("Nil"));
  Return();
  f_0 :
  Epopd(2,7);
  Return();
  e_0 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto c_0;
  d_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_q_4);
  Ccall(_stratego_p_4);
  goto r_0;
  c_0 :
  Cpop();
  r_0 :
  Tset(App2("Cons",App2("TCons",MakeInt(0),App2("TCons",ATmakeString("a"),App0("TNil"))),App2("Cons",App2("TCons",MakeInt(1),App2("TCons",ATmakeString("b"),App0("TNil"))),App2("Cons",App2("TCons",MakeInt(2),App2("TCons",ATmakeString("c"),App0("TNil"))),App0("Nil")))));
  Tdupl();
  Tset(App2("Cons",App2("TCons",MakeInt(0),App2("TCons",ATmakeString("a"),App0("TNil"))),App2("Cons",App2("TCons",MakeInt(1),App2("TCons",ATmakeString("b"),App0("TNil"))),App2("Cons",App2("TCons",MakeInt(2),App2("TCons",ATmakeString("c"),App0("TNil"))),App0("Nil")))));
  MoveTop(0,2);
  Tpop();
  Cpush(u_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto t_0;
  u_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_4);
  goto v_0;
  t_0 :
  Cpop();
  v_0 :
  Tpop();
  Ccall(_stratego_t_4);
  goto a_0;
  b_0 :
  Ccall(_stratego_r_4);
  goto w_0;
  a_0 :
  Cpop();
  w_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_n_4)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("tuple-unzip-test"));
  Ccall(_stratego_q_4);
  Tpop();
  Cpush(y_0);
  Tdupl();
  Cpush(a_1);
  Epushd(1,1);
  Tset(App2("Cons",App2("TCons",MakeInt(1),App2("TCons",MakeInt(4),App2("TCons",MakeInt(7),App0("TNil")))),App2("Cons",App2("TCons",MakeInt(2),App2("TCons",MakeInt(5),App2("TCons",MakeInt(8),App0("TNil")))),App2("Cons",App2("TCons",MakeInt(3),App2("TCons",MakeInt(6),App2("TCons",MakeInt(9),App0("TNil")))),App0("Nil")))));
  Rpush(b_1);
  v_9 :
  Cpush(d_1);
  Epushd(2,8);
  MoveTop(2,1);
  Rpush(e_1);
  w_9 :
  Cpush(g_1);
  Ccall(_stratego_o_4);
  goto f_1;
  g_1 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  MoveTop(3,1);
  goto c_7;
  c_7 :
  TestFunFC(i_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_1);
  goto b_7;
  j_1 :
  goto i_1;
  b_7 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  i_1 :
  Epopd(3,3);
  OneNextSon();
  Rpush(k_1);
  goto w_9;
  k_1 :
  AllBuild();
  goto h_1;
  f_1 :
  Cpop();
  h_1 :
  Return();
  e_1 :
  MoveTop(2,2);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Rpush(l_1);
  x_9 :
  Cpush(n_1);
  Ccall(_stratego_o_4);
  goto m_1;
  n_1 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  MoveTop(3,1);
  goto f_7;
  f_7 :
  TestFunFC(i_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_1);
  goto e_7;
  s_1 :
  goto r_1;
  e_7 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Return();
  r_1 :
  Epopd(3,3);
  OneNextSon();
  Rpush(t_1);
  goto x_9;
  t_1 :
  AllBuild();
  goto q_1;
  m_1 :
  Cpop();
  q_1 :
  Return();
  l_1 :
  MoveTop(2,3);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Rpush(x_1);
  goto v_9;
  x_1 :
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  MoveTop(2,4);
  goto i_7;
  i_7 :
  TestFunFC(i_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto j_7;
  j_7 :
  TestFunFC(i_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto k_7;
  k_7 :
  TestFunFC(l_0,&&fail,Egetd(2,8));
  Rpush(y_1);
  goto h_7;
  y_1 :
  goto u_1;
  h_7 :
  NotNULLd(2,5);
  NotNULLd(2,7);
  Tset(App2("TCons",Egetd(2,5),Egetd(2,7)));
  Return();
  u_1 :
  Epopd(2,8);
  goto c_1;
  d_1 :
  Rpush(a_2);
  y_9 :
  Cpush(c_2);
  Ccall(_stratego_o_4);
  goto b_2;
  c_2 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_4);
  OneNextSon();
  Rpush(e_2);
  goto y_9;
  e_2 :
  AllBuild();
  goto d_2;
  b_2 :
  Cpop();
  d_2 :
  Return();
  a_2 :
  Tset(App0("TNil"));
  goto z_1;
  c_1 :
  Cpop();
  z_1 :
  Return();
  b_1 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto z_0;
  a_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_q_4);
  Ccall(_stratego_p_4);
  goto f_2;
  z_0 :
  Cpop();
  f_2 :
  Tset(App2("TCons",App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(4),App2("Cons",MakeInt(5),App2("Cons",MakeInt(6),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(7),App2("Cons",MakeInt(8),App2("Cons",MakeInt(9),App0("Nil")))),App0("TNil")))));
  Tdupl();
  Tset(App2("TCons",App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(4),App2("Cons",MakeInt(5),App2("Cons",MakeInt(6),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(7),App2("Cons",MakeInt(8),App2("Cons",MakeInt(9),App0("Nil")))),App0("TNil")))));
  MoveTop(0,2);
  Tpop();
  Cpush(i_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto h_2;
  i_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_4);
  goto j_2;
  h_2 :
  Cpop();
  j_2 :
  Tpop();
  Ccall(_stratego_t_4);
  goto x_0;
  y_0 :
  Ccall(_stratego_r_4);
  goto k_2;
  x_0 :
  Cpop();
  k_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_o_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_10;
  a_10 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  Rpush(m_2);
  goto z_9;
  m_2 :
  goto l_2;
  z_9 :
  Return();
  l_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_4)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto e_10;
  e_10 :
  TestFunFC(i_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto f_10;
  f_10 :
  TestFunFC(i_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto g_10;
  g_10 :
  TestFunFC(l_0,&&fail,Egetd(0,6));
  Rpush(o_2);
  goto d_10;
  o_2 :
  goto n_2;
  d_10 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  n_2 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_q_4)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_a_5);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_r_4)
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_s_4);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_s_4)
  _ST_add();
ENDPROC

PROC(_stratego_t_4)
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_s_4);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_u_4)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("tuple-zip-test"));
  Ccall(_stratego_q_4);
  Tpop();
  Cpush(q_2);
  Tdupl();
  Cpush(s_2);
  Epushd(1,1);
  Tset(App2("TCons",App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(4),App2("Cons",MakeInt(5),App2("Cons",MakeInt(6),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(7),App2("Cons",MakeInt(8),App2("Cons",MakeInt(9),App0("Nil")))),App0("TNil")))));
  Rpush(t_2);
  a_14 :
  Cpush(v_2);
  Epushd(2,8);
  MoveTop(2,1);
  Rpush(w_2);
  b_14 :
  Cpush(a_3);
  Ccall(_stratego_x_4);
  goto x_2;
  a_3 :
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  MoveTop(3,1);
  goto i_11;
  i_11 :
  TestFunFC(n_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(d_3);
  goto h_11;
  d_3 :
  goto c_3;
  h_11 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  c_3 :
  Epopd(3,3);
  OneNextSon();
  Rpush(e_3);
  goto b_14;
  e_3 :
  AllBuild();
  goto b_3;
  x_2 :
  Cpop();
  b_3 :
  Return();
  w_2 :
  MoveTop(2,2);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Rpush(h_3);
  c_14 :
  Cpush(j_3);
  Ccall(_stratego_x_4);
  goto i_3;
  j_3 :
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  MoveTop(3,1);
  goto l_11;
  l_11 :
  TestFunFC(n_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(m_3);
  goto k_11;
  m_3 :
  goto l_3;
  k_11 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Return();
  l_3 :
  Epopd(3,3);
  OneNextSon();
  Rpush(n_3);
  goto c_14;
  n_3 :
  AllBuild();
  goto k_3;
  i_3 :
  Cpop();
  k_3 :
  Return();
  h_3 :
  MoveTop(2,3);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Rpush(p_3);
  goto a_14;
  p_3 :
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  MoveTop(2,4);
  goto o_11;
  o_11 :
  TestFunFC(i_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto p_11;
  p_11 :
  TestFunFC(i_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto q_11;
  q_11 :
  TestFunFC(l_0,&&fail,Egetd(2,8));
  Rpush(q_3);
  goto n_11;
  q_3 :
  goto o_3;
  n_11 :
  NotNULLd(2,5);
  NotNULLd(2,7);
  Tset(App2("Cons",Egetd(2,5),Egetd(2,7)));
  Return();
  o_3 :
  Epopd(2,8);
  goto u_2;
  v_2 :
  Rpush(s_3);
  d_14 :
  Cpush(u_3);
  Ccall(_stratego_x_4);
  goto t_3;
  u_3 :
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_4);
  OneNextSon();
  Rpush(w_3);
  goto d_14;
  w_3 :
  AllBuild();
  goto v_3;
  t_3 :
  Cpop();
  v_3 :
  Return();
  s_3 :
  Tset(App0("Nil"));
  goto r_3;
  u_2 :
  Cpop();
  r_3 :
  Return();
  t_2 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto r_2;
  s_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_q_4);
  Ccall(_stratego_p_4);
  goto x_3;
  r_2 :
  Cpop();
  x_3 :
  Tset(App2("Cons",App2("TCons",MakeInt(1),App2("TCons",MakeInt(4),App2("TCons",MakeInt(7),App0("TNil")))),App2("Cons",App2("TCons",MakeInt(2),App2("TCons",MakeInt(5),App2("TCons",MakeInt(8),App0("TNil")))),App2("Cons",App2("TCons",MakeInt(3),App2("TCons",MakeInt(6),App2("TCons",MakeInt(9),App0("TNil")))),App0("Nil")))));
  Tdupl();
  Tset(App2("Cons",App2("TCons",MakeInt(1),App2("TCons",MakeInt(4),App2("TCons",MakeInt(7),App0("TNil")))),App2("Cons",App2("TCons",MakeInt(2),App2("TCons",MakeInt(5),App2("TCons",MakeInt(8),App0("TNil")))),App2("Cons",App2("TCons",MakeInt(3),App2("TCons",MakeInt(6),App2("TCons",MakeInt(9),App0("TNil")))),App0("Nil")))));
  MoveTop(0,2);
  Tpop();
  Cpush(z_3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto y_3;
  z_3 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_4);
  goto a_4;
  y_3 :
  Cpop();
  a_4 :
  Tpop();
  Ccall(_stratego_t_4);
  goto p_2;
  q_2 :
  Ccall(_stratego_r_4);
  goto b_4;
  p_2 :
  Cpop();
  b_4 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_4)
  _ST_exit();
ENDPROC

PROC(_stratego_w_4)
  Cpush(d_4);
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto f_14;
  f_14 :
  TestInt(0,1,0,&&fail);
  Rpush(f_4);
  goto e_14;
  f_4 :
  goto e_4;
  e_14 :
  Return();
  e_4 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_v_4);
  goto c_4;
  d_4 :
  Tset(MakeInt(1));
  Ccall(_stratego_v_4);
  goto g_4;
  c_4 :
  Cpop();
  g_4 :
ENDPROC

PROC(_stratego_x_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_14;
  i_14 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  Rpush(i_4);
  goto h_14;
  i_4 :
  goto h_4;
  h_14 :
  Return();
  h_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_4)
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_5);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_5);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_z_4)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_a_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("list-zip-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_5);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_z_4);
  Ccall(_stratego_u_4);
  Ccall(_stratego_n_4);
  Ccall(_stratego_m_4);
  Ccall(_stratego_y_4);
  Ccall(_stratego_w_4);
ENDPROC

DOIT

