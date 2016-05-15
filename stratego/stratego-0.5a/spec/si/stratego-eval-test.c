#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,h_2);
VARDECL(AFun,g_2);
VARDECL(AFun,i_0);
VARDECL(AFun,h_0);
VARDECL(AFun,g_0);
VARDECL(AFun,d_0);
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
PROCDECL(_stratego_e_3);
PROCDECL(_stratego_f_3);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(h_2,ATmakeAFun("Var",1,0));
  MOVE(g_2,ATmakeAFun("MatchVar",1,0));
  MOVE(i_0,ATmakeAFun("TNil",0,0));
  MOVE(h_0,ATmakeAFun("TCons",2,0));
  MOVE(g_0,ATmakeAFun("Cons",2,0));
  MOVE(d_0,ATmakeAFun("Nil",0,0));
ENDPROC

PROC(_stratego_r_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_0;
  p_0 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto a_0;
  c_0 :
  goto b_0;
  a_0 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_2)
  Epushd(0,7);
  MoveTop(0,1);
  goto w_3;
  w_3 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto x_3;
  x_3 :
  TestFunFC(h_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_3;
  y_3 :
  TestFunFC(h_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto z_3;
  z_3 :
  TestFunFC(i_0,&&fail,Egetd(0,6));
  Rpush(f_0);
  goto v_0;
  f_0 :
  goto e_0;
  v_0 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto i_1;
  i_1 :
  TestFunFC(h_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_1;
  j_1 :
  TestFunFC(h_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_1;
  p_1 :
  TestFunFC(i_0,&&fail,Egetd(2,5));
  Rpush(k_0);
  goto e_1;
  k_0 :
  goto j_0;
  e_1 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  j_0 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto w_1;
  w_1 :
  TestFunFC(h_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto x_1;
  x_1 :
  TestFunFC(h_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_2;
  d_2 :
  TestFunFC(i_0,&&fail,Egetd(2,5));
  Rpush(m_0);
  goto q_1;
  m_0 :
  goto l_0;
  q_1 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  l_0 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(n_0);
  a_6 :
  Epushd(2,9);
  MoveTop(2,1);
  goto j_3;
  j_3 :
  TestFunFC(h_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto k_3;
  k_3 :
  TestFunFC(d_0,&&s_0,Egetd(2,2));
  goto l_3;
  l_3 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto m_3;
  m_3 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  goto n_3;
  n_3 :
  TestFunFC(i_0,&&fail,Egetd(2,9));
  Rpush(r_0);
  goto e_2;
  s_0 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto o_3;
  o_3 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto p_3;
  p_3 :
  TestFunFC(g_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto q_3;
  q_3 :
  TestFunFC(i_0,&&fail,Egetd(2,9));
  Rpush(r_0);
  goto k_2;
  r_0 :
  goto q_0;
  k_2 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Rpush(w_0);
  goto a_6;
  w_0 :
  OneNextSon();
  Ccall(_stratego_c_3);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto g_3;
  g_3 :
  TestFunFC(h_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto h_3;
  h_3 :
  TestFunFC(h_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto i_3;
  i_3 :
  TestFunFC(i_0,&&fail,Egetd(3,5));
  Rpush(x_0);
  goto l_2;
  x_0 :
  goto t_0;
  l_2 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  t_0 :
  Epopd(3,5);
  Return();
  q_0 :
  goto o_0;
  e_2 :
  Tset(App0("Nil"));
  Return();
  o_0 :
  Epopd(2,9);
  Return();
  n_0 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto t_3;
  t_3 :
  TestFunFC(h_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto u_3;
  u_3 :
  TestFunFC(h_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto v_3;
  v_3 :
  TestFunFC(i_0,&&fail,Egetd(1,9));
  Rpush(z_0);
  goto s_3;
  z_0 :
  goto y_0;
  s_3 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(a_1);
  b_6 :
  Cpush(c_1);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_1);
  goto b_6;
  d_1 :
  AllBuild();
  goto b_1;
  c_1 :
  Ccall(_stratego_r_2);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto f_1;
  b_1 :
  Cpop();
  f_1 :
  Return();
  a_1 :
  Return();
  y_0 :
  Epopd(1,9);
  Return();
  e_0 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_t_2)
  Epushd(0,5);
  MoveTop(0,1);
  goto d_6;
  d_6 :
  TestFunFC(h_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto e_6;
  e_6 :
  TestFunFC(h_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto f_6;
  f_6 :
  TestFunFC(i_0,&&fail,Egetd(0,5));
  Rpush(h_1);
  goto c_6;
  h_1 :
  goto g_1;
  c_6 :
  Move(0,2,0,4);
  Return();
  g_1 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_u_2)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto o_6;
  o_6 :
  TestFunFC(h_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto p_6;
  p_6 :
  TestFunFC(h_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto q_6;
  q_6 :
  TestFunFC(i_0,&&fail,Egetd(0,6));
  Rpush(l_1);
  goto n_6;
  l_1 :
  goto k_1;
  n_6 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  k_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_v_2)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_f_3);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_w_2)
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_x_2);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_c_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_x_2)
  _ST_add();
ENDPROC

PROC(_stratego_y_2)
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_x_2);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_z_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_v_2);
  Tpop();
  Cpush(n_1);
  Tdupl();
  Cpush(r_1);
  Epushd(1,1);
  Tset(App2("TCons",App2("Cons",App2("TCons",App1("Var",ATmakeString("x")),App2("TCons",App2("Op",ATmakeString("F"),App2("Cons",App2("Op",ATmakeString("A"),App0("Nil")),App0("Nil"))),App0("TNil"))),App0("Nil")),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(s_1);
  r_11 :
  Cpush(u_1);
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  goto s_7;
  s_7 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,7,2,1,1);
  goto t_7;
  t_7 :
  TestFunFC(h_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto u_7;
  u_7 :
  TestFunFC(h_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto v_7;
  v_7 :
  TestFunFC(i_0,&&fail,Egetd(2,6));
  Rpush(y_1);
  goto r_7;
  y_1 :
  goto v_1;
  r_7 :
  Epushd(3,1);
  Move(2,3,2,5);
  Move(3,1,2,7);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Epopd(3,1);
  Return();
  v_1 :
  Epopd(2,7);
  OneNextSon();
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_3);
  AllBuild();
  AllBuild();
  goto t_1;
  u_1 :
  Ccontinue(z_1);
  Epushd(2,11);
  MoveTop(2,1);
  goto e_8;
  e_8 :
  TestFunFC(g_2,&&f_2,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto f_8;
  f_8 :
  TestFunFC(h_2,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(c_2);
  goto w_7;
  f_2 :
  TestFunFC(h_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,9,2,1,1);
  goto g_8;
  g_8 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,8,2,2,1);
  goto h_8;
  h_8 :
  TestFunFC(h_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto i_8;
  i_8 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto j_8;
  j_8 :
  TestFunFC(i_0,&&fail,Egetd(2,7));
  goto k_8;
  k_8 :
  TestFunFC(h_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto l_8;
  l_8 :
  TestFunFC(i_0,&&fail,Egetd(2,11));
  Rpush(c_2);
  goto x_7;
  c_2 :
  goto b_2;
  x_7 :
  Tdupl();
  Epushd(3,2);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  MoveTop(3,1);
  goto d_8;
  d_8 :
  TestFunFC(h_2,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(j_2);
  goto y_7;
  j_2 :
  goto i_2;
  y_7 :
  NotNULLd(2,10);
  Tset(Egetd(2,10));
  Cpush(m_2);
  Tdupl();
  Rpush(n_2);
  s_11 :
  Cpush(p_2);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(4,5);
  MoveTop(4,1);
  goto a_8;
  a_8 :
  TestFunFC(h_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto b_8;
  b_8 :
  TestFunFC(h_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto c_8;
  c_8 :
  TestFunFC(i_0,&&fail,Egetd(4,5));
  Rpush(r_3);
  goto z_7;
  r_3 :
  goto q_2;
  z_7 :
  Epushd(5,1);
  Move(2,4,4,2);
  Move(5,1,4,4);
  NotNULLd(2,6);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(2,6),App2("TCons",Egetd(5,1),App0("TNil"))));
  Cpush(k_4);
  Tdupl();
  Ccall(_stratego_t_2);
  Cpop();
  Crestore();
  Cjump();
  k_4 :
  Epopd(5,1);
  Return();
  q_2 :
  Epopd(4,5);
  OneNextSon();
  AllBuild();
  goto o_2;
  p_2 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_4);
  goto s_11;
  m_4 :
  AllBuild();
  goto l_4;
  o_2 :
  Cpop();
  l_4 :
  Return();
  n_2 :
  Cpop();
  Crestore();
  Cjump();
  m_2 :
  Return();
  i_2 :
  Epopd(3,2);
  Tpop();
  NotNULLd(2,8);
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,8),App2("TCons",App2("Cons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App0("TNil"))),Egetd(2,10)),App0("TNil"))));
  Return();
  b_2 :
  goto a_2;
  w_7 :
  Return();
  a_2 :
  Epopd(2,11);
  goto t_1;
  z_1 :
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_2);
  OneNextSon();
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_3);
  AllBuild();
  AllBuild();
  goto g_5;
  t_1 :
  Cpop();
  g_5 :
  Cpush(i_5);
  Epushd(2,5);
  MoveTop(2,1);
  goto n_8;
  n_8 :
  TestFunFC(h_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_8;
  o_8 :
  TestFunFC(d_0,&&fail,Egetd(2,2));
  goto p_8;
  p_8 :
  TestFunFC(h_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_8;
  q_8 :
  TestFunFC(i_0,&&fail,Egetd(2,5));
  Rpush(p_5);
  goto m_8;
  p_5 :
  goto j_5;
  m_8 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Return();
  j_5 :
  Epopd(2,5);
  goto h_5;
  i_5 :
  Rpush(s_5);
  goto r_11;
  s_5 :
  goto q_5;
  h_5 :
  Cpop();
  q_5 :
  Return();
  s_1 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto o_1;
  r_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_v_2);
  Ccall(_stratego_u_2);
  goto y_5;
  o_1 :
  Cpop();
  y_5 :
  Tset(App2("Cons",App2("TCons",App1("Var",ATmakeString("x")),App2("TCons",App2("Op",ATmakeString("F"),App2("Cons",App2("Op",ATmakeString("A"),App0("Nil")),App0("Nil"))),App0("TNil"))),App0("Nil")));
  Tdupl();
  Tset(App2("Cons",App2("TCons",App1("Var",ATmakeString("x")),App2("TCons",App2("Op",ATmakeString("F"),App2("Cons",App2("Op",ATmakeString("A"),App0("Nil")),App0("Nil"))),App0("TNil"))),App0("Nil")));
  MoveTop(0,2);
  Tpop();
  Cpush(l_6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto z_5;
  l_6 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_3);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_3);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_u_2);
  goto m_6;
  z_5 :
  Cpop();
  m_6 :
  Tpop();
  Ccall(_stratego_y_2);
  goto m_1;
  n_1 :
  Ccall(_stratego_w_2);
  goto s_6;
  m_1 :
  Cpop();
  s_6 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_a_3)
  _ST_exit();
ENDPROC

PROC(_stratego_b_3)
  Cpush(z_6);
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto u_11;
  u_11 :
  TestInt(0,1,0,&&fail);
  Rpush(b_7);
  goto t_11;
  b_7 :
  goto a_7;
  t_11 :
  Return();
  a_7 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_c_3);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_a_3);
  goto y_6;
  z_6 :
  Tset(MakeInt(1));
  Ccall(_stratego_a_3);
  goto d_7;
  y_6 :
  Cpop();
  d_7 :
ENDPROC

PROC(_stratego_c_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_11;
  x_11 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  Rpush(f_7);
  goto w_11;
  f_7 :
  goto e_7;
  w_11 :
  Return();
  e_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_3)
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_3);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_3);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_c_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_e_3)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_f_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("stratego-eval-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_3);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_e_3);
  Ccall(_stratego_z_2);
  Ccall(_stratego_d_3);
  Ccall(_stratego_b_3);
ENDPROC

DOIT

