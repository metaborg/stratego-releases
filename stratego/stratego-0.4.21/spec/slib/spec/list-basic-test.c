#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,t_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_s_5);
PROCDECL(_stratego_t_5);
PROCDECL(_stratego_u_5);
PROCDECL(_stratego_v_5);
PROCDECL(_stratego_w_5);
PROCDECL(_stratego_x_5);
PROCDECL(_stratego_y_5);
PROCDECL(_stratego_z_5);
PROCDECL(_stratego_a_6);
PROCDECL(_stratego_b_6);
PROCDECL(_stratego_c_6);
PROCDECL(_stratego_d_6);
PROCDECL(_stratego_e_6);
PROCDECL(_stratego_f_6);
PROCDECL(_stratego_g_6);
PROCDECL(_stratego_h_6);
PROCDECL(_stratego_i_6);
PROCDECL(_stratego_j_6);

PROC(_stratego_init_afuns)
  MOVE(t_0,ATmakeAFun("Cons",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("list-basic-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_t_5);
  Ccall(_stratego_y_5);
  Ccall(_stratego_e_6);
  Ccall(_stratego_j_6);
  Ccall(_stratego_u_5);
  Ccall(_stratego_w_5);
ENDPROC

PROC(_stratego_s_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_t_5)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_u_5)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
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
  Ccall(_stratego_s_5);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_v_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_3;
  x_3 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto z_3;
  c_0 :
  goto b_0;
  z_3 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_5)
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
  goto b_4;
  b_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto v_4;
  h_0 :
  goto g_0;
  v_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_x_5);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_x_5);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_x_5)
  _ST_exit();
ENDPROC

PROC(_stratego_y_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_c_6);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,2);
  Tset(App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App2("Cons",MakeInt(4),App2("Cons",MakeInt(5),App2("Cons",MakeInt(6),App2("Cons",MakeInt(7),App0("Nil")))))))));
  Rpush(o_0);
  f_8 :
  Cpush(q_0);
  Epushd(2,3);
  MoveTop(2,1);
  goto z_4;
  z_4 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto a_5;
  a_5 :
  TestInt(2,2,4,&&fail);
  Rpush(s_0);
  goto g_8;
  s_0 :
  goto r_0;
  g_8 :
  Epushd(3,3);
  MoveTop(3,1);
  goto y_4;
  y_4 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(v_0);
  goto h_8;
  v_0 :
  goto u_0;
  h_8 :
  Move(1,1,3,3);
  Tset(App0("Nil"));
  Return();
  u_0 :
  Epopd(3,3);
  Return();
  r_0 :
  Epopd(2,3);
  goto p_0;
  q_0 :
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_0);
  goto f_8;
  x_0 :
  AllBuild();
  goto w_0;
  p_0 :
  Cpop();
  w_0 :
  Return();
  o_0 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  Tdupl();
  NotNULLd(1,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(0,1);
  Tpop();
  Epopd(1,2);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_c_6);
  Ccall(_stratego_d_6);
  goto y_0;
  m_0 :
  Cpop();
  y_0 :
  Tset(App2("TCons",App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(5),App2("Cons",MakeInt(6),App2("Cons",MakeInt(7),App0("Nil")))),App0("TNil"))));
  Tdupl();
  Tset(App2("TCons",App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(5),App2("Cons",MakeInt(6),App2("Cons",MakeInt(7),App0("Nil")))),App0("TNil"))));
  MoveTop(0,2);
  Tpop();
  Cpush(a_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto z_0;
  a_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_d_6);
  goto b_1;
  z_0 :
  Cpop();
  b_1 :
  Tpop();
  Ccall(_stratego_z_5);
  goto j_0;
  l_0 :
  Ccall(_stratego_b_6);
  goto c_1;
  j_0 :
  Cpop();
  c_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_z_5)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_a_6);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_a_6)
  _ST_add();
ENDPROC

PROC(_stratego_b_6)
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
  Ccall(_stratego_a_6);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_c_6)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_d_6)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto z_9;
  z_9 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto a_10;
  a_10 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto b_10;
  b_10 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(e_1);
  goto k_10;
  e_1 :
  goto d_1;
  k_10 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  d_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_e_6)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("upto-test1"));
  Ccall(_stratego_c_6);
  Tpop();
  Cpush(g_1);
  Tdupl();
  Cpush(i_1);
  Epushd(1,1);
  Tset(MakeInt(5));
  Ccall(_stratego_f_6);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto h_1;
  i_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_c_6);
  Ccall(_stratego_d_6);
  goto j_1;
  h_1 :
  Cpop();
  j_1 :
  Tset(App2("Cons",MakeInt(0),App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App2("Cons",MakeInt(4),App2("Cons",MakeInt(5),App0("Nil"))))))));
  Tdupl();
  Tset(App2("Cons",MakeInt(0),App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App2("Cons",MakeInt(4),App2("Cons",MakeInt(5),App0("Nil"))))))));
  MoveTop(0,2);
  Tpop();
  Cpush(l_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto k_1;
  l_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_d_6);
  goto m_1;
  k_1 :
  Cpop();
  m_1 :
  Tpop();
  Ccall(_stratego_z_5);
  goto f_1;
  g_1 :
  Ccall(_stratego_b_6);
  goto n_1;
  f_1 :
  Cpop();
  n_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_f_6)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(o_1);
  g_13 :
  Epushd(1,5);
  MoveTop(1,1);
  goto o_12;
  o_12 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_12;
  p_12 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto q_12;
  q_12 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Cpush(u_1);
  Rpush(v_1);
  goto h_13;
  v_1 :
  goto s_1;
  u_1 :
  Rpush(x_1);
  goto i_13;
  x_1 :
  goto w_1;
  s_1 :
  Cpop();
  w_1 :
  goto r_1;
  r_1 :
  goto q_1;
  i_13 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_i_6);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",App2("Cons",Egetd(1,2),Egetd(1,4)),App0("TNil"))));
  Rpush(y_1);
  goto g_13;
  y_1 :
  Epopd(2,1);
  Return();
  q_1 :
  goto p_1;
  h_13 :
  Tdupl();
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",MakeInt(0),App0("TNil"))));
  Ccall(_stratego_g_6);
  Tpop();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Return();
  p_1 :
  Epopd(1,5);
  Return();
  o_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_6)
  Cpush(z_1);
  Tdupl();
  Ccall(_stratego_h_6);
  Cpop();
  Crestore();
  Cjump();
  z_1 :
ENDPROC

PROC(_stratego_h_6)
  _ST_geq();
ENDPROC

PROC(_stratego_i_6)
  _ST_minus();
ENDPROC

PROC(_stratego_j_6)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("upto-test2"));
  Ccall(_stratego_c_6);
  Tpop();
  Cpush(b_2);
  Tdupl();
  Cpush(d_2);
  Epushd(1,1);
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(3),App0("TNil"))));
  Ccall(_stratego_i_6);
  Ccall(_stratego_f_6);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto c_2;
  d_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_c_6);
  Ccall(_stratego_d_6);
  goto e_2;
  c_2 :
  Cpop();
  e_2 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(0,2);
  Tpop();
  Cpush(h_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto g_2;
  h_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_d_6);
  goto i_2;
  g_2 :
  Cpop();
  i_2 :
  Tpop();
  Ccall(_stratego_z_5);
  goto a_2;
  b_2 :
  Ccall(_stratego_b_6);
  goto j_2;
  a_2 :
  Cpop();
  j_2 :
  Epopd(0,2);
ENDPROC
