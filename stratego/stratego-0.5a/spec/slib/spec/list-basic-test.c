#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,q_1);
VARDECL(AFun,p_0);
VARDECL(AFun,o_0);
PROCDECL(_stratego_p_3);
PROCDECL(_stratego_q_3);
PROCDECL(_stratego_r_3);
PROCDECL(_stratego_s_3);
PROCDECL(_stratego_t_3);
PROCDECL(_stratego_u_3);
PROCDECL(_stratego_v_3);
PROCDECL(_stratego_w_3);
PROCDECL(_stratego_x_3);
PROCDECL(_stratego_y_3);
PROCDECL(_stratego_z_3);
PROCDECL(_stratego_a_4);
PROCDECL(_stratego_b_4);
PROCDECL(_stratego_c_4);
PROCDECL(_stratego_d_4);
PROCDECL(_stratego_e_4);
PROCDECL(_stratego_f_4);
PROCDECL(_stratego_g_4);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(q_1,ATmakeAFun("Cons",2,0));
  MOVE(p_0,ATmakeAFun("TNil",0,0));
  MOVE(o_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_p_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("upto-test2"));
  Ccall(_stratego_w_3);
  Tpop();
  Cpush(b_0);
  Tdupl();
  Cpush(d_0);
  Epushd(1,1);
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(3),App0("TNil"))));
  Ccall(_stratego_q_3);
  Ccall(_stratego_t_3);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto c_0;
  d_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_w_3);
  Ccall(_stratego_v_3);
  goto e_0;
  c_0 :
  Cpop();
  e_0 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(0,2);
  Tpop();
  Cpush(g_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto f_0;
  g_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_4);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_4);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_v_3);
  goto h_0;
  f_0 :
  Cpop();
  h_0 :
  Tpop();
  Ccall(_stratego_z_3);
  goto a_0;
  b_0 :
  Ccall(_stratego_x_3);
  goto i_0;
  a_0 :
  Cpop();
  i_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_q_3)
  _ST_minus();
ENDPROC

PROC(_stratego_r_3)
  _ST_geq();
ENDPROC

PROC(_stratego_s_3)
  Cpush(j_0);
  Tdupl();
  Ccall(_stratego_r_3);
  Cpop();
  Crestore();
  Cjump();
  j_0 :
ENDPROC

PROC(_stratego_t_3)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(k_0);
  o_5 :
  Epushd(1,5);
  MoveTop(1,1);
  goto y_4;
  y_4 :
  TestFunFC(o_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_4;
  z_4 :
  TestFunFC(o_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto a_5;
  a_5 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  Cpush(r_0);
  Rpush(s_0);
  goto v_4;
  s_0 :
  goto q_0;
  r_0 :
  Rpush(u_0);
  goto w_4;
  u_0 :
  goto t_0;
  q_0 :
  Cpop();
  t_0 :
  goto n_0;
  n_0 :
  goto m_0;
  w_4 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_q_3);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",App2("Cons",Egetd(1,2),Egetd(1,4)),App0("TNil"))));
  Rpush(v_0);
  goto o_5;
  v_0 :
  Epopd(2,1);
  Return();
  m_0 :
  goto l_0;
  v_4 :
  Tdupl();
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",MakeInt(0),App0("TNil"))));
  Ccall(_stratego_s_3);
  Tpop();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Return();
  l_0 :
  Epopd(1,5);
  Return();
  k_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("upto-test1"));
  Ccall(_stratego_w_3);
  Tpop();
  Cpush(x_0);
  Tdupl();
  Cpush(z_0);
  Epushd(1,1);
  Tset(MakeInt(5));
  Ccall(_stratego_t_3);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto y_0;
  z_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_w_3);
  Ccall(_stratego_v_3);
  goto a_1;
  y_0 :
  Cpop();
  a_1 :
  Tset(App2("Cons",MakeInt(0),App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App2("Cons",MakeInt(4),App2("Cons",MakeInt(5),App0("Nil"))))))));
  Tdupl();
  Tset(App2("Cons",MakeInt(0),App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App2("Cons",MakeInt(4),App2("Cons",MakeInt(5),App0("Nil"))))))));
  MoveTop(0,2);
  Tpop();
  Cpush(c_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto b_1;
  c_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_4);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_4);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_v_3);
  goto d_1;
  b_1 :
  Cpop();
  d_1 :
  Tpop();
  Ccall(_stratego_z_3);
  goto w_0;
  x_0 :
  Ccall(_stratego_x_3);
  goto e_1;
  w_0 :
  Cpop();
  e_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_3)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto d_7;
  d_7 :
  TestFunFC(o_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto e_7;
  e_7 :
  TestFunFC(o_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto f_7;
  f_7 :
  TestFunFC(p_0,&&fail,Egetd(0,6));
  Rpush(g_1);
  goto c_7;
  g_1 :
  goto f_1;
  c_7 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  f_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_w_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_g_4);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_x_3)
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_3);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_d_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_y_3)
  _ST_add();
ENDPROC

PROC(_stratego_z_3)
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_3);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_d_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_a_4)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_w_3);
  Tpop();
  Cpush(i_1);
  Tdupl();
  Cpush(k_1);
  Epushd(1,2);
  Tset(App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App2("Cons",MakeInt(4),App2("Cons",MakeInt(5),App2("Cons",MakeInt(6),App2("Cons",MakeInt(7),App0("Nil")))))))));
  Rpush(l_1);
  n_10 :
  Cpush(n_1);
  Epushd(2,3);
  MoveTop(2,1);
  goto i_8;
  i_8 :
  TestFunFC(q_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_8;
  j_8 :
  TestInt(2,2,4,&&fail);
  Rpush(p_1);
  goto f_8;
  p_1 :
  goto o_1;
  f_8 :
  Epushd(3,3);
  MoveTop(3,1);
  goto h_8;
  h_8 :
  TestFunFC(q_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_1);
  goto g_8;
  s_1 :
  goto r_1;
  g_8 :
  Move(1,1,3,3);
  Tset(App0("Nil"));
  Return();
  r_1 :
  Epopd(3,3);
  Return();
  o_1 :
  Epopd(2,3);
  goto m_1;
  n_1 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_1);
  goto n_10;
  v_1 :
  AllBuild();
  goto u_1;
  m_1 :
  Cpop();
  u_1 :
  Return();
  l_1 :
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
  goto j_1;
  k_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_w_3);
  Ccall(_stratego_v_3);
  goto x_1;
  j_1 :
  Cpop();
  x_1 :
  Tset(App2("TCons",App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(5),App2("Cons",MakeInt(6),App2("Cons",MakeInt(7),App0("Nil")))),App0("TNil"))));
  Tdupl();
  Tset(App2("TCons",App2("Cons",MakeInt(1),App2("Cons",MakeInt(2),App2("Cons",MakeInt(3),App0("Nil")))),App2("TCons",App2("Cons",MakeInt(5),App2("Cons",MakeInt(6),App2("Cons",MakeInt(7),App0("Nil")))),App0("TNil"))));
  MoveTop(0,2);
  Tpop();
  Cpush(z_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto y_1;
  z_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_4);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_4);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_v_3);
  goto a_2;
  y_1 :
  Cpop();
  a_2 :
  Tpop();
  Ccall(_stratego_z_3);
  goto h_1;
  i_1 :
  Ccall(_stratego_x_3);
  goto b_2;
  h_1 :
  Cpop();
  b_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_b_4)
  _ST_exit();
ENDPROC

PROC(_stratego_c_4)
  Cpush(d_2);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto p_10;
  p_10 :
  TestInt(0,1,0,&&fail);
  Rpush(f_2);
  goto o_10;
  f_2 :
  goto e_2;
  o_10 :
  Return();
  e_2 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_d_4);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_b_4);
  goto c_2;
  d_2 :
  Tset(MakeInt(1));
  Ccall(_stratego_b_4);
  goto h_2;
  c_2 :
  Cpop();
  h_2 :
ENDPROC

PROC(_stratego_d_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_10;
  s_10 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  Rpush(j_2);
  goto r_10;
  j_2 :
  goto i_2;
  r_10 :
  Return();
  i_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_4)
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_4);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_4);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_d_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_f_4)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_g_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("list-basic-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_g_4);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_f_4);
  Ccall(_stratego_a_4);
  Ccall(_stratego_u_3);
  Ccall(_stratego_p_3);
  Ccall(_stratego_e_4);
  Ccall(_stratego_c_4);
ENDPROC

DOIT

