#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,o_1);
VARDECL(AFun,m_1);
VARDECL(AFun,z_0);
VARDECL(AFun,n_0);
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
PROCDECL(_stratego_o_5);
PROCDECL(_stratego_p_5);
PROCDECL(_stratego_q_5);
PROCDECL(_stratego_r_5);
PROCDECL(_stratego_s_5);
PROCDECL(_stratego_t_5);
PROCDECL(_stratego_u_5);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(o_1,ATmakeAFun("TNil",0,0));
  MOVE(m_1,ATmakeAFun("TCons",2,0));
  MOVE(z_0,ATmakeAFun("Nil",0,0));
  MOVE(n_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_b_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_c_5)
  Rpush(a_0);
  l_0 :
  Cpush(c_0);
  Ccall(_stratego_h_5);
  goto b_0;
  c_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto f_0;
  f_0 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_0);
  goto e_0;
  k_0 :
  goto j_0;
  e_0 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(o_0);
  m_0 :
  Cpush(q_0);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_0);
  goto m_0;
  r_0 :
  AllBuild();
  goto p_0;
  q_0 :
  Ccall(_stratego_h_5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(t_0);
  goto l_0;
  t_0 :
  goto s_0;
  p_0 :
  Cpop();
  s_0 :
  Return();
  o_0 :
  Return();
  j_0 :
  Epopd(0,3);
  goto d_0;
  b_0 :
  Cpop();
  d_0 :
  Return();
  a_0 :
ENDPROC

PROC(_stratego_d_5)
  Rpush(u_0);
  s_3 :
  Epushd(0,3);
  MoveTop(0,1);
  goto t_1;
  t_1 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto u_1;
  u_1 :
  TestFunFC(z_0,&&y_0,Egetd(0,3));
  Cpush(b_1);
  Rpush(c_1);
  goto r_1;
  c_1 :
  goto a_1;
  b_1 :
  Rpush(e_1);
  goto s_1;
  e_1 :
  goto d_1;
  a_1 :
  Cpop();
  d_1 :
  goto x_0;
  y_0 :
  Rpush(x_0);
  goto s_1;
  x_0 :
  goto w_0;
  s_1 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(f_1);
  goto s_3;
  f_1 :
  Return();
  w_0 :
  goto v_0;
  r_1 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  v_0 :
  Epopd(0,3);
  Return();
  u_0 :
ENDPROC

PROC(_stratego_e_5)
  _ST_new();
ENDPROC

PROC(_stratego_f_5)
  _ST_subt();
ENDPROC

PROC(_stratego_g_5)
  _ST_geq();
ENDPROC

PROC(_stratego_h_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_3;
  z_3 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  Rpush(h_1);
  goto t_3;
  h_1 :
  goto g_1;
  t_3 :
  Return();
  g_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_5)
  Epushd(0,7);
  MoveTop(0,1);
  goto w_9;
  w_9 :
  TestFunFC(m_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_9;
  x_9 :
  TestFunFC(m_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_9;
  y_9 :
  TestStr(0,4,"D",&&n_1);
  goto z_9;
  z_9 :
  TestFunFC(m_1,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto a_10;
  a_10 :
  TestFunFC(o_1,&&fail,Egetd(0,7));
  Rpush(l_1);
  goto g_4;
  n_1 :
  TestStr(0,4,"T",&&fail);
  goto b_10;
  b_10 :
  TestFunFC(m_1,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto c_10;
  c_10 :
  TestFunFC(o_1,&&fail,Egetd(0,7));
  goto d_10;
  d_10 :
  TestInt(0,6,0,&&p_1);
  Cpush(y_1);
  Rpush(z_1);
  goto h_4;
  z_1 :
  goto q_1;
  y_1 :
  Rpush(b_2);
  goto n_4;
  b_2 :
  goto a_2;
  q_1 :
  Cpop();
  a_2 :
  goto l_1;
  p_1 :
  Rpush(l_1);
  goto n_4;
  l_1 :
  goto k_1;
  n_4 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_m_5);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",App0("TNil"),App0("TNil"))));
  MoveTop(2,2);
  goto s_9;
  s_9 :
  TestFunFC(m_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto t_9;
  t_9 :
  TestFunFC(m_1,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto u_9;
  u_9 :
  TestFunFC(o_1,&&fail,Egetd(2,6));
  Rpush(d_2);
  goto o_7;
  d_2 :
  goto c_2;
  o_7 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(f_2);
  t_19 :
  Epushd(4,7);
  MoveTop(4,1);
  goto y_7;
  y_7 :
  TestFunFC(m_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto z_7;
  z_7 :
  TestFunFC(m_1,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto a_8;
  a_8 :
  TestFunFC(m_1,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto b_8;
  b_8 :
  TestFunFC(o_1,&&fail,Egetd(4,7));
  Rpush(h_2);
  goto p_7;
  h_2 :
  goto g_2;
  p_7 :
  Epushd(5,2);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_g_5);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_f_5);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_e_5);
  MoveTop(5,2);
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",Egetd(5,2),Egetd(4,6)),App0("TNil")))));
  Cpush(j_2);
  Epushd(6,7);
  MoveTop(6,1);
  goto t_7;
  t_7 :
  TestFunFC(m_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto u_7;
  u_7 :
  TestInt(6,2,0,&&fail);
  goto v_7;
  v_7 :
  TestFunFC(m_1,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto w_7;
  w_7 :
  TestFunFC(m_1,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto x_7;
  x_7 :
  TestFunFC(o_1,&&fail,Egetd(6,7));
  Rpush(l_2);
  goto s_7;
  l_2 :
  goto k_2;
  s_7 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  k_2 :
  Epopd(6,7);
  goto i_2;
  j_2 :
  Rpush(n_2);
  goto t_19;
  n_2 :
  goto m_2;
  i_2 :
  Cpop();
  m_2 :
  Epopd(5,2);
  Return();
  g_2 :
  Epopd(4,7);
  Return();
  f_2 :
  MoveTop(3,1);
  goto r_9;
  r_9 :
  TestFunFC(n_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_2);
  goto c_8;
  o_2 :
  goto e_2;
  c_8 :
  Epushd(4,14);
  Move(1,2,3,2);
  Move(1,3,3,3);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_d_5);
  MoveTop(4,1);
  Move(1,1,4,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",App2("Cons",Egetd(1,2),Egetd(1,3)),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(p_2);
  u_19 :
  Epushd(5,9);
  MoveTop(5,1);
  goto r_8;
  r_8 :
  TestFunFC(m_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto s_8;
  s_8 :
  TestFunFC(m_1,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto t_8;
  t_8 :
  TestFunFC(z_0,&&t_2,Egetd(5,6));
  goto u_8;
  u_8 :
  TestFunFC(o_1,&&fail,Egetd(5,9));
  goto v_8;
  v_8 :
  u_2 :
  Rpush(s_2);
  goto e_8;
  t_2 :
  TestFunFC(n_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto w_8;
  w_8 :
  TestFunFC(n_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto x_8;
  x_8 :
  TestFunFC(o_1,&&fail,Egetd(5,9));
  Rpush(s_2);
  goto f_8;
  s_2 :
  goto r_2;
  f_8 :
  Epushd(6,5);
  NotNULLd(5,3);
  NotNULLd(5,7);
  NotNULLd(5,4);
  NotNULLd(5,8);
  Tset(App2("TCons",App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(5,4),App2("TCons",Egetd(5,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  Epushd(7,5);
  MoveTop(7,1);
  goto k_8;
  k_8 :
  TestFunFC(m_1,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto l_8;
  l_8 :
  TestFunFC(m_1,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto m_8;
  m_8 :
  TestFunFC(o_1,&&fail,Egetd(7,5));
  Rpush(x_2);
  goto g_8;
  x_2 :
  goto w_2;
  g_8 :
  Epushd(8,3);
  Tdupl();
  Epushd(9,3);
  Ccall(_stratego_e_5);
  MoveTop(9,1);
  Move(8,1,9,1);
  Ccall(_stratego_e_5);
  MoveTop(9,2);
  Move(8,2,9,2);
  Ccall(_stratego_e_5);
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
  w_2 :
  Epopd(7,5);
  OneNextSon();
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  Rpush(y_2);
  goto u_19;
  y_2 :
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto o_8;
  o_8 :
  TestFunFC(m_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto p_8;
  p_8 :
  TestFunFC(m_1,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto q_8;
  q_8 :
  TestFunFC(o_1,&&fail,Egetd(6,5));
  Rpush(z_2);
  goto n_8;
  z_2 :
  goto v_2;
  n_8 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),Egetd(6,4)));
  Return();
  v_2 :
  Epopd(6,5);
  Return();
  r_2 :
  goto q_2;
  e_8 :
  Tset(App0("Nil"));
  Return();
  q_2 :
  Epopd(5,9);
  Return();
  p_2 :
  Rpush(b_3);
  v_19 :
  Cpush(d_3);
  Epushd(5,8);
  MoveTop(5,1);
  Rpush(e_3);
  w_19 :
  Cpush(g_3);
  Ccall(_stratego_h_5);
  goto f_3;
  g_3 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto a_9;
  a_9 :
  TestFunFC(m_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(j_3);
  goto z_8;
  j_3 :
  goto i_3;
  z_8 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  i_3 :
  Epopd(6,3);
  OneNextSon();
  Rpush(k_3);
  goto w_19;
  k_3 :
  AllBuild();
  goto h_3;
  f_3 :
  Cpop();
  h_3 :
  Return();
  e_3 :
  MoveTop(5,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  Rpush(l_3);
  x_19 :
  Cpush(n_3);
  Ccall(_stratego_h_5);
  goto m_3;
  n_3 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto d_9;
  d_9 :
  TestFunFC(m_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(q_3);
  goto c_9;
  q_3 :
  goto p_3;
  c_9 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  p_3 :
  Epopd(6,3);
  OneNextSon();
  Rpush(r_3);
  goto x_19;
  r_3 :
  AllBuild();
  goto o_3;
  m_3 :
  Cpop();
  o_3 :
  Return();
  l_3 :
  MoveTop(5,3);
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,3),App0("TNil"))));
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  Rpush(v_3);
  goto v_19;
  v_3 :
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  MoveTop(5,4);
  goto g_9;
  g_9 :
  TestFunFC(m_1,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto h_9;
  h_9 :
  TestFunFC(m_1,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto i_9;
  i_9 :
  TestFunFC(o_1,&&fail,Egetd(5,8));
  Rpush(w_3);
  goto f_9;
  w_3 :
  goto u_3;
  f_9 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("TCons",Egetd(5,5),Egetd(5,7)));
  Return();
  u_3 :
  Epopd(5,8);
  goto c_3;
  d_3 :
  Rpush(y_3);
  y_19 :
  Cpush(c_4);
  Ccall(_stratego_h_5);
  goto b_4;
  c_4 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  OneNextSon();
  Rpush(e_4);
  goto y_19;
  e_4 :
  AllBuild();
  goto d_4;
  b_4 :
  Cpop();
  d_4 :
  Return();
  y_3 :
  Tset(App0("TNil"));
  goto x_3;
  c_3 :
  Cpop();
  x_3 :
  Return();
  b_3 :
  MoveTop(4,2);
  goto k_9;
  k_9 :
  TestFunFC(m_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto l_9;
  l_9 :
  TestFunFC(m_1,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto m_9;
  m_9 :
  TestFunFC(m_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto n_9;
  n_9 :
  TestFunFC(m_1,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto o_9;
  o_9 :
  TestFunFC(m_1,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto p_9;
  p_9 :
  TestFunFC(m_1,&&fail,Egetd(4,12));
  MoveArg(4,13,4,12,0);
  MoveArg(4,14,4,12,1);
  goto q_9;
  q_9 :
  TestFunFC(o_1,&&fail,Egetd(4,14));
  Rpush(f_4);
  goto j_9;
  f_4 :
  goto a_3;
  j_9 :
  Move(1,4,4,3);
  Move(1,5,4,5);
  Move(1,6,4,7);
  Move(1,7,4,9);
  Move(1,8,4,11);
  Move(1,9,4,13);
  Return();
  a_3 :
  Epopd(4,14);
  Return();
  e_2 :
  Epopd(3,3);
  Return();
  c_2 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App2("Cons",Egetd(1,3),App2("Cons",Egetd(1,6),App2("Cons",Egetd(1,8),App0("Nil")))));
  Ccall(_stratego_c_5);
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
  k_1 :
  goto j_1;
  h_4 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_5);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("T")),App0("Nil"),App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),App0("Nil")),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),App0("Nil")),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App0("Id"))))));
  Epopd(1,1);
  Return();
  j_1 :
  goto i_1;
  g_4 :
  Epushd(1,12);
  Tdupl();
  Epushd(2,6);
  Ccall(_stratego_e_5);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",App1("Var",Egetd(1,1)),App0("TNil"))));
  MoveTop(2,2);
  goto e_7;
  e_7 :
  TestFunFC(m_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto f_7;
  f_7 :
  TestFunFC(m_1,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto g_7;
  g_7 :
  TestFunFC(o_1,&&fail,Egetd(2,6));
  Rpush(j_4);
  goto u_4;
  j_4 :
  goto i_4;
  u_4 :
  Epushd(3,13);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(k_4);
  n_19 :
  Epushd(4,7);
  MoveTop(4,1);
  goto h_6;
  h_6 :
  TestFunFC(m_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto i_6;
  i_6 :
  TestFunFC(m_1,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto j_6;
  j_6 :
  TestFunFC(m_1,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto k_6;
  k_6 :
  TestFunFC(o_1,&&fail,Egetd(4,7));
  Rpush(m_4);
  goto v_4;
  m_4 :
  goto l_4;
  v_4 :
  Epushd(5,4);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_g_5);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_f_5);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Tdupl();
  Epushd(6,3);
  Ccall(_stratego_e_5);
  MoveTop(6,1);
  Move(5,2,6,1);
  Ccall(_stratego_e_5);
  MoveTop(6,2);
  Move(5,3,6,2);
  Ccall(_stratego_e_5);
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
  Cpush(p_4);
  Epushd(6,7);
  MoveTop(6,1);
  goto c_6;
  c_6 :
  TestFunFC(m_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto d_6;
  d_6 :
  TestInt(6,2,0,&&fail);
  goto e_6;
  e_6 :
  TestFunFC(m_1,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto f_6;
  f_6 :
  TestFunFC(m_1,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto g_6;
  g_6 :
  TestFunFC(o_1,&&fail,Egetd(6,7));
  Rpush(r_4);
  goto b_6;
  r_4 :
  goto q_4;
  b_6 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  q_4 :
  Epopd(6,7);
  goto o_4;
  p_4 :
  Rpush(t_4);
  goto n_19;
  t_4 :
  goto s_4;
  o_4 :
  Cpop();
  s_4 :
  Epopd(5,4);
  Return();
  l_4 :
  Epopd(4,7);
  Return();
  k_4 :
  Rpush(x_4);
  o_19 :
  Cpush(z_4);
  Epushd(4,8);
  MoveTop(4,1);
  Rpush(a_5);
  p_19 :
  Cpush(w_5);
  Ccall(_stratego_h_5);
  goto v_5;
  w_5 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto n_6;
  n_6 :
  TestFunFC(m_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(z_5);
  goto m_6;
  z_5 :
  goto y_5;
  m_6 :
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Return();
  y_5 :
  Epopd(5,3);
  OneNextSon();
  Rpush(a_6);
  goto p_19;
  a_6 :
  AllBuild();
  goto x_5;
  v_5 :
  Cpop();
  x_5 :
  Return();
  a_5 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(l_6);
  q_19 :
  Cpush(r_6);
  Ccall(_stratego_h_5);
  goto o_6;
  r_6 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto q_6;
  q_6 :
  TestFunFC(m_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(n_7);
  goto p_6;
  n_7 :
  goto m_7;
  p_6 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Return();
  m_7 :
  Epopd(5,3);
  OneNextSon();
  Rpush(q_7);
  goto q_19;
  q_7 :
  AllBuild();
  goto i_7;
  o_6 :
  Cpop();
  i_7 :
  Return();
  l_6 :
  MoveTop(4,3);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,3),App0("TNil"))));
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  Rpush(d_8);
  goto o_19;
  d_8 :
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  MoveTop(4,4);
  goto t_6;
  t_6 :
  TestFunFC(m_1,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto u_6;
  u_6 :
  TestFunFC(m_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto v_6;
  v_6 :
  TestFunFC(o_1,&&fail,Egetd(4,8));
  Rpush(h_8);
  goto s_6;
  h_8 :
  goto r_7;
  s_6 :
  NotNULLd(4,5);
  NotNULLd(4,7);
  Tset(App2("TCons",Egetd(4,5),Egetd(4,7)));
  Return();
  r_7 :
  Epopd(4,8);
  goto y_4;
  z_4 :
  Rpush(j_8);
  r_19 :
  Cpush(b_9);
  Ccall(_stratego_h_5);
  goto y_8;
  b_9 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  OneNextSon();
  Rpush(v_9);
  goto r_19;
  v_9 :
  AllBuild();
  goto e_9;
  y_8 :
  Cpop();
  e_9 :
  Return();
  j_8 :
  Tset(App0("TNil"));
  goto i_8;
  y_4 :
  Cpop();
  i_8 :
  Return();
  x_4 :
  MoveTop(3,1);
  goto x_6;
  x_6 :
  TestFunFC(m_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto y_6;
  y_6 :
  TestFunFC(m_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_6;
  z_6 :
  TestFunFC(m_1,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto a_7;
  a_7 :
  TestFunFC(m_1,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto b_7;
  b_7 :
  TestFunFC(m_1,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto c_7;
  c_7 :
  TestFunFC(m_1,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto d_7;
  d_7 :
  TestFunFC(o_1,&&fail,Egetd(3,13));
  Rpush(l_10);
  goto w_6;
  l_10 :
  goto w_4;
  w_6 :
  Move(1,2,3,2);
  Move(1,3,3,4);
  Move(1,4,3,6);
  Move(1,5,3,8);
  Move(1,6,3,10);
  Move(1,7,3,12);
  Return();
  w_4 :
  Epopd(3,13);
  Return();
  i_4 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  MoveTop(1,8);
  goto j_7;
  j_7 :
  TestFunFC(m_1,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto k_7;
  k_7 :
  TestFunFC(m_1,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto l_7;
  l_7 :
  TestFunFC(o_1,&&fail,Egetd(1,12));
  Rpush(a_11);
  goto h_7;
  a_11 :
  goto m_10;
  h_7 :
  Epushd(2,1);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  Rpush(b_11);
  s_19 :
  Cpush(k_11);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_11);
  goto s_19;
  l_11 :
  AllBuild();
  goto j_11;
  k_11 :
  Ccall(_stratego_h_5);
  NotNULLd(1,11);
  Tset(Egetd(1,11));
  goto n_11;
  j_11 :
  Cpop();
  n_11 :
  Return();
  b_11 :
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
  m_10 :
  Epopd(1,12);
  Return();
  i_1 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_j_5)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto b_20;
  b_20 :
  TestFunFC(m_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto c_20;
  c_20 :
  TestFunFC(m_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto d_20;
  d_20 :
  TestFunFC(o_1,&&fail,Egetd(0,6));
  Rpush(p_11);
  goto a_20;
  p_11 :
  goto o_11;
  a_20 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  o_11 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_k_5)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_u_5);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_l_5)
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_m_5);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_m_5)
  _ST_add();
ENDPROC

PROC(_stratego_n_5)
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_m_5);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_o_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("define-congruence-test"));
  Ccall(_stratego_k_5);
  Tpop();
  Cpush(x_11);
  Tdupl();
  Epushd(1,1);
  Cpush(g_12);
  Epushd(2,1);
  Tset(App2("TCons",ATmakeString("If"),App2("TCons",ATmakeString("T"),App2("TCons",MakeInt(3),App0("TNil")))));
  Ccall(_stratego_i_5);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto f_12;
  g_12 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_k_5);
  Ccall(_stratego_j_5);
  goto i_12;
  f_12 :
  Cpop();
  i_12 :
  Tset(ATmakeString("data/if-congruence.trm"));
  Ccall(_stratego_b_5);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(n_12);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto m_12;
  n_12 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_u_5);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_u_5);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_j_5);
  goto p_12;
  m_12 :
  Cpop();
  p_12 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_n_5);
  goto w_11;
  x_11 :
  Ccall(_stratego_l_5);
  goto t_12;
  w_11 :
  Cpop();
  t_12 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_5)
  _ST_exit();
ENDPROC

PROC(_stratego_q_5)
  Cpush(w_12);
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto q_22;
  q_22 :
  TestInt(0,1,0,&&fail);
  Rpush(d_13);
  goto p_22;
  d_13 :
  goto c_13;
  p_22 :
  Return();
  c_13 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_p_5);
  goto u_12;
  w_12 :
  Tset(MakeInt(1));
  Ccall(_stratego_p_5);
  goto w_13;
  u_12 :
  Cpop();
  w_13 :
ENDPROC

PROC(_stratego_r_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_22;
  t_22 :
  TestFunFC(o_1,&&fail,Egetd(0,1));
  Rpush(z_13);
  goto s_22;
  z_13 :
  goto x_13;
  s_22 :
  Return();
  x_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_5)
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_u_5);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(m_1);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_u_5);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_t_5)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_u_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("needed-defs-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_u_5);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_t_5);
  Ccall(_stratego_o_5);
  Ccall(_stratego_s_5);
  Ccall(_stratego_q_5);
ENDPROC

DOIT

