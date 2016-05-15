#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,j_2);
VARDECL(AFun,a_1);
VARDECL(AFun,j_0);
VARDECL(AFun,i_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_main);
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
PROCDECL(_stratego_g_3);

PROC(_stratego_init_afuns)
  MOVE(j_2,ATmakeAFun("Nil",0,0));
  MOVE(a_1,ATmakeAFun("Var",1,0));
  MOVE(j_0,ATmakeAFun("TNil",0,0));
  MOVE(i_0,ATmakeAFun("Cons",2,0));
  MOVE(f_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,2);
  Tset(App0("stdin"));
  Ccall(_stratego_w_2);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(c_0);
  k_7 :
  Cpush(e_0);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  goto o_0;
  o_0 :
  TestFunFC(i_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto p_0;
  p_0 :
  TestFunFC(f_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto x_0;
  x_0 :
  TestFunFC(f_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto y_0;
  y_0 :
  TestFunFC(j_0,&&fail,Egetd(1,6));
  Rpush(h_0);
  goto l_7;
  h_0 :
  goto g_0;
  l_7 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  g_0 :
  Epopd(1,7);
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_g_3);
  AllBuild();
  AllBuild();
  goto d_0;
  e_0 :
  Ccontinue(k_0);
  Epushd(1,11);
  MoveTop(1,1);
  goto u_3;
  u_3 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,9,1,1,1);
  goto v_3;
  v_3 :
  TestFunFC(i_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,8,1,2,1);
  goto w_3;
  w_3 :
  TestFunFC(f_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto x_3;
  x_3 :
  TestFunFC(f_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto y_3;
  y_3 :
  TestFunFC(j_0,&&fail,Egetd(1,7));
  goto z_3;
  z_3 :
  TestFunFC(f_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  MoveArg(1,11,1,9,1);
  goto a_4;
  a_4 :
  TestFunFC(j_0,&&fail,Egetd(1,11));
  Cpush(r_0);
  Rpush(s_0);
  goto m_7;
  s_0 :
  goto q_0;
  r_0 :
  Rpush(u_0);
  goto y_7;
  u_0 :
  goto t_0;
  q_0 :
  Cpop();
  t_0 :
  goto n_0;
  n_0 :
  goto m_0;
  y_7 :
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Cpush(v_0);
  Tdupl();
  Epushd(3,2);
  MoveTop(3,1);
  goto r_3;
  r_3 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(z_0);
  goto z_7;
  z_0 :
  goto w_0;
  z_7 :
  Return();
  w_0 :
  Epopd(3,2);
  Cpop();
  Crestore();
  Cjump();
  v_0 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  MoveTop(2,1);
  goto t_3;
  t_3 :
  TestFunFC(a_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(c_1);
  goto a_8;
  c_1 :
  goto b_1;
  a_8 :
  Return();
  b_1 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,6);
  NotNULLd(1,4);
  NotNULLd(1,8);
  NotNULLd(1,10);
  Tset(App2("TCons",App2("Cons",App2("TCons",Egetd(1,6),App2("TCons",Egetd(1,4),App0("TNil"))),Egetd(1,8)),App2("TCons",Egetd(1,10),App0("TNil"))));
  Return();
  m_0 :
  goto l_0;
  m_7 :
  Epushd(2,2);
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  MoveTop(3,1);
  goto p_3;
  p_3 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(h_1);
  goto n_7;
  h_1 :
  goto d_1;
  n_7 :
  Epushd(4,10);
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  Cpush(i_1);
  Tdupl();
  Epushd(5,5);
  MoveTop(5,1);
  goto e_1;
  e_1 :
  TestFunFC(f_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto f_1;
  f_1 :
  TestFunFC(f_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto g_1;
  g_1 :
  TestFunFC(j_0,&&fail,Egetd(5,5));
  Rpush(k_1);
  goto o_7;
  k_1 :
  goto j_1;
  o_7 :
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  Rpush(q_1);
  l_1 :
  Cpush(m_1);
  Epushd(6,1);
  MoveTop(6,1);
  Move(5,2,6,1);
  Epopd(6,1);
  Cpop();
  goto p_1;
  m_1 :
  IsAppl();
  MatchTravInit();
  n_1 :
  OneMatchNextSon();
  Cpush(n_1);
  Rpush(o_1);
  goto l_1;
  o_1 :
  Cpop();
  MatchTravEnd();
  p_1 :
  Return();
  q_1 :
  Return();
  j_1 :
  Epopd(5,5);
  Cpop();
  Crestore();
  Cjump();
  i_1 :
  NotNULLd(1,4);
  NotNULLd(1,6);
  NotNULLd(1,10);
  NotNULLd(1,8);
  Tset(App2("TCons",App2("Cons",App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))),App0("Nil")),App2("TCons",App2("TCons",Egetd(1,10),App2("TCons",Egetd(1,8),App0("TNil"))),App0("TNil"))));
  Ccall(_stratego_c_3);
  MoveTop(4,1);
  goto i_3;
  i_3 :
  TestFunFC(f_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto j_3;
  j_3 :
  TestFunFC(f_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto k_3;
  k_3 :
  TestFunFC(j_0,&&fail,Egetd(4,5));
  Rpush(t_1);
  goto r_7;
  t_1 :
  goto s_1;
  r_7 :
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(u_1);
  s_7 :
  Cpush(w_1);
  Epushd(5,3);
  MoveTop(5,1);
  Tdupl();
  Epushd(6,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  MoveTop(6,1);
  goto h_3;
  h_3 :
  TestFunFC(a_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(y_1);
  goto u_7;
  y_1 :
  goto x_1;
  u_7 :
  Epushd(7,1);
  MoveTop(7,1);
  Move(5,2,7,1);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Move(5,3,4,2);
  Epopd(7,1);
  Return();
  x_1 :
  Epopd(6,2);
  Tpop();
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,3),App0("TNil"))));
  Ccall(_stratego_d_3);
  Epopd(5,3);
  goto v_1;
  w_1 :
  AllInit();
  a_2 :
  AllNextSon(&&b_2);
  Rpush(c_2);
  goto s_7;
  c_2 :
  goto a_2;
  b_2 :
  AllBuild();
  goto z_1;
  v_1 :
  Cpop();
  z_1 :
  Return();
  u_1 :
  Return();
  s_1 :
  MoveTop(4,6);
  goto m_3;
  m_3 :
  TestFunFC(f_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto n_3;
  n_3 :
  TestFunFC(f_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto o_3;
  o_3 :
  TestFunFC(j_0,&&fail,Egetd(4,10));
  Rpush(d_2);
  goto x_7;
  d_2 :
  goto r_1;
  x_7 :
  Move(2,1,4,7);
  Move(2,2,4,9);
  Return();
  r_1 :
  Epopd(4,10);
  Return();
  d_1 :
  Epopd(3,2);
  Tpop();
  NotNULLd(2,2);
  NotNULLd(1,4);
  NotNULLd(1,6);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",App2("Cons",App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))),Egetd(2,1)),App0("TNil"))));
  Epopd(2,2);
  Return();
  l_0 :
  Epopd(1,11);
  goto d_0;
  k_0 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_3);
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_g_3);
  AllBuild();
  AllBuild();
  goto e_2;
  d_0 :
  Cpop();
  e_2 :
  Cpush(g_2);
  Epushd(1,5);
  MoveTop(1,1);
  goto c_4;
  c_4 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_4;
  d_4 :
  TestFunFC(j_2,&&fail,Egetd(1,2));
  goto e_4;
  e_4 :
  TestFunFC(f_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto f_4;
  f_4 :
  TestFunFC(j_0,&&fail,Egetd(1,5));
  Rpush(i_2);
  goto b_8;
  i_2 :
  goto h_2;
  b_8 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Return();
  h_2 :
  Epopd(1,5);
  goto f_2;
  g_2 :
  Rpush(l_2);
  goto k_7;
  l_2 :
  goto k_2;
  f_2 :
  Cpop();
  k_2 :
  Return();
  c_0 :
  MoveTop(0,2);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_x_2);
  Epopd(0,2);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_y_2);
  goto m_2;
  a_0 :
  Cpop();
  m_2 :
ENDPROC

PROC(_stratego_w_2)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_x_2)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_y_2)
  Tdupl();
  Ccall(_stratego_z_2);
  Tset(MakeInt(1));
  Ccall(_stratego_b_3);
  Tpop();
ENDPROC

PROC(_stratego_z_2)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_a_3);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_a_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_b_3)
  _ST_exit();
ENDPROC

PROC(_stratego_c_3)
  Epushd(0,7);
  MoveTop(0,1);
  goto i_9;
  i_9 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_9;
  j_9 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto k_9;
  k_9 :
  TestFunFC(j_0,&&q_2,Egetd(0,5));
  Rpush(p_2);
  goto w_10;
  q_2 :
  TestFunFC(f_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto l_9;
  l_9 :
  TestFunFC(j_0,&&fail,Egetd(0,7));
  Rpush(p_2);
  goto x_10;
  p_2 :
  goto o_2;
  x_10 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(r_2);
  y_10 :
  Epushd(2,9);
  MoveTop(2,1);
  goto z_8;
  z_8 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto a_9;
  a_9 :
  TestFunFC(j_2,&&v_2,Egetd(2,2));
  goto b_9;
  b_9 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto c_9;
  c_9 :
  TestFunFC(j_2,&&fail,Egetd(2,6));
  goto d_9;
  d_9 :
  TestFunFC(j_0,&&fail,Egetd(2,9));
  Rpush(u_2);
  goto e_11;
  v_2 :
  TestFunFC(i_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto e_9;
  e_9 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto f_9;
  f_9 :
  TestFunFC(i_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto g_9;
  g_9 :
  TestFunFC(j_0,&&fail,Egetd(2,9));
  Rpush(u_2);
  goto f_11;
  u_2 :
  goto t_2;
  f_11 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Rpush(q_3);
  goto y_10;
  q_3 :
  OneNextSon();
  Ccall(_stratego_g_3);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto w_8;
  w_8 :
  TestFunFC(f_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto x_8;
  x_8 :
  TestFunFC(f_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto y_8;
  y_8 :
  TestFunFC(j_0,&&fail,Egetd(3,5));
  Rpush(s_3);
  goto g_11;
  s_3 :
  goto l_3;
  g_11 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  l_3 :
  Epopd(3,5);
  Return();
  t_2 :
  goto s_2;
  e_11 :
  Tset(App0("Nil"));
  Return();
  s_2 :
  Epopd(2,9);
  Return();
  r_2 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  o_2 :
  goto n_2;
  w_10 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  n_2 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_d_3)
  Rpush(b_4);
  g_12 :
  Epushd(0,11);
  MoveTop(0,5);
  goto k_11;
  k_11 :
  TestFunFC(f_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto l_11;
  l_11 :
  TestFunFC(f_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto m_11;
  m_11 :
  TestFunFC(i_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto n_11;
  n_11 :
  TestFunFC(j_0,&&fail,Egetd(0,11));
  goto o_11;
  o_11 :
  TestFunFC(f_0,&&k_4,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto p_11;
  p_11 :
  TestFunFC(f_0,&&s_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_11;
  q_11 :
  TestFunFC(j_0,&&f_5,Egetd(0,4));
  Cpush(h_5);
  Rpush(i_5);
  goto h_12;
  i_5 :
  goto g_5;
  h_5 :
  Rpush(t_5);
  goto i_12;
  t_5 :
  goto s_5;
  g_5 :
  Cpop();
  s_5 :
  goto i_4;
  f_5 :
  Rpush(i_4);
  goto i_12;
  s_4 :
  Rpush(i_4);
  goto i_12;
  k_4 :
  Rpush(i_4);
  goto i_12;
  i_4 :
  goto h_4;
  i_12 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(a_6);
  goto g_12;
  a_6 :
  Return();
  h_4 :
  goto g_4;
  h_12 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  g_4 :
  Epopd(0,11);
  Return();
  b_4 :
ENDPROC

PROC(_stratego_e_3)
  Epushd(0,7);
  MoveTop(0,1);
  goto l_13;
  l_13 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto m_13;
  m_13 :
  TestFunFC(f_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto n_13;
  n_13 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto o_13;
  o_13 :
  TestFunFC(j_0,&&fail,Egetd(0,6));
  Rpush(d_6);
  goto p_15;
  d_6 :
  goto b_6;
  p_15 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto l_12;
  l_12 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_12;
  m_12 :
  TestFunFC(f_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_12;
  n_12 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  Rpush(p_6);
  goto q_15;
  p_6 :
  goto j_6;
  q_15 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  j_6 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto p_12;
  p_12 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_12;
  q_12 :
  TestFunFC(f_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_12;
  r_12 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  Rpush(r_6);
  goto r_15;
  r_6 :
  goto q_6;
  r_15 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  q_6 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(s_6);
  s_15 :
  Epushd(2,9);
  MoveTop(2,1);
  goto y_12;
  y_12 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto z_12;
  z_12 :
  TestFunFC(j_2,&&g_7,Egetd(2,2));
  goto a_13;
  a_13 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto b_13;
  b_13 :
  TestFunFC(j_2,&&fail,Egetd(2,6));
  goto c_13;
  c_13 :
  TestFunFC(j_0,&&fail,Egetd(2,9));
  Rpush(f_7);
  goto t_15;
  g_7 :
  TestFunFC(i_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto d_13;
  d_13 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto e_13;
  e_13 :
  TestFunFC(i_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto f_13;
  f_13 :
  TestFunFC(j_0,&&fail,Egetd(2,9));
  Rpush(f_7);
  goto u_15;
  f_7 :
  goto e_7;
  u_15 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Rpush(i_7);
  goto s_15;
  i_7 :
  OneNextSon();
  Ccall(_stratego_g_3);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto v_12;
  v_12 :
  TestFunFC(f_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto w_12;
  w_12 :
  TestFunFC(f_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto x_12;
  x_12 :
  TestFunFC(j_0,&&fail,Egetd(3,5));
  Rpush(j_7);
  goto v_15;
  j_7 :
  goto h_7;
  v_15 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  h_7 :
  Epopd(3,5);
  Return();
  e_7 :
  goto c_7;
  t_15 :
  Tset(App0("Nil"));
  Return();
  c_7 :
  Epopd(2,9);
  Return();
  s_6 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto i_13;
  i_13 :
  TestFunFC(f_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto j_13;
  j_13 :
  TestFunFC(f_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto k_13;
  k_13 :
  TestFunFC(j_0,&&fail,Egetd(1,9));
  Rpush(t_7);
  goto x_15;
  t_7 :
  goto q_7;
  x_15 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(v_7);
  y_15 :
  Cpush(c_8);
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_8);
  goto y_15;
  d_8 :
  AllBuild();
  goto w_7;
  c_8 :
  Ccall(_stratego_f_3);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto e_8;
  w_7 :
  Cpop();
  e_8 :
  Return();
  v_7 :
  Return();
  q_7 :
  Epopd(1,9);
  Return();
  b_6 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_f_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_16;
  a_16 :
  TestFunFC(j_2,&&fail,Egetd(0,1));
  Rpush(g_8);
  goto c_16;
  g_8 :
  goto f_8;
  c_16 :
  Return();
  f_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_16;
  e_16 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  Rpush(j_8);
  goto g_16;
  j_8 :
  goto h_8;
  g_16 :
  Return();
  h_8 :
  Epopd(0,1);
ENDPROC

DOIT

