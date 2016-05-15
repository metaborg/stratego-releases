#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,r_1);
VARDECL(AFun,u_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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

PROC(_stratego_init_afuns)
  MOVE(r_1,ATmakeAFun("Nil",0,0));
  MOVE(u_0,ATmakeAFun("Cons",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("list-misc-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_t_3);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_u_3);
  Ccall(_stratego_z_3);
  Ccall(_stratego_v_3);
  Ccall(_stratego_x_3);
ENDPROC

PROC(_stratego_t_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_u_3)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_v_3)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_t_3);
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
  Ccall(_stratego_t_3);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_w_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_w_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_4;
  m_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto o_4;
  c_0 :
  goto b_0;
  o_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_3)
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
  goto q_4;
  q_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto s_4;
  h_0 :
  goto g_0;
  s_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_w_3);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_y_3);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_y_3);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_y_3)
  _ST_exit();
ENDPROC

PROC(_stratego_z_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_d_4);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,1);
  Tset(App2("Cons",ATmakeString("a"),App2("Cons",App2("Cons",ATmakeString("b"),App2("Cons",App2("Cons",ATmakeString("c"),App2("Cons",ATmakeString("d"),App0("Nil"))),App0("Nil"))),App2("Cons",ATmakeString("e"),App0("Nil")))));
  Rpush(o_0);
  a_7 :
  Rpush(p_0);
  b_7 :
  Cpush(r_0);
  Ccall(_stratego_f_4);
  goto q_0;
  r_0 :
  Epushd(2,3);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Cpush(w_0);
  Ccall(_stratego_g_4);
  Rpush(x_0);
  goto a_7;
  x_0 :
  goto v_0;
  w_0 :
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Epopd(3,1);
  goto y_0;
  v_0 :
  Cpop();
  y_0 :
  OneNextSon();
  Rpush(z_0);
  goto b_7;
  z_0 :
  AllBuild();
  MoveTop(2,1);
  goto z_4;
  z_4 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(a_1);
  goto d_7;
  a_1 :
  goto t_0;
  d_7 :
  Epushd(3,5);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  MoveTop(3,1);
  goto w_4;
  w_4 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto x_4;
  x_4 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto y_4;
  y_4 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(c_1);
  goto e_7;
  c_1 :
  goto b_1;
  e_7 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Rpush(d_1);
  f_7 :
  Cpush(f_1);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_1);
  goto f_7;
  g_1 :
  AllBuild();
  goto e_1;
  f_1 :
  Ccall(_stratego_f_4);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  goto h_1;
  e_1 :
  Cpop();
  h_1 :
  Return();
  d_1 :
  Return();
  b_1 :
  Epopd(3,5);
  Return();
  t_0 :
  Epopd(2,3);
  goto s_0;
  q_0 :
  Cpop();
  s_0 :
  Return();
  p_0 :
  Return();
  o_0 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_d_4);
  Ccall(_stratego_e_4);
  goto i_1;
  m_0 :
  Cpop();
  i_1 :
  Tset(App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App2("Cons",ATmakeString("c"),App2("Cons",ATmakeString("d"),App2("Cons",ATmakeString("e"),App0("Nil")))))));
  Tdupl();
  Tset(App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App2("Cons",ATmakeString("c"),App2("Cons",ATmakeString("d"),App2("Cons",ATmakeString("e"),App0("Nil")))))));
  MoveTop(0,2);
  Tpop();
  Cpush(k_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto j_1;
  k_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_t_3);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_t_3);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_e_4);
  goto l_1;
  j_1 :
  Cpop();
  l_1 :
  Tpop();
  Ccall(_stratego_a_4);
  goto j_0;
  l_0 :
  Ccall(_stratego_c_4);
  goto m_1;
  j_0 :
  Cpop();
  m_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_a_4)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_b_4);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_b_4)
  _ST_add();
ENDPROC

PROC(_stratego_c_4)
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
  Ccall(_stratego_b_4);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_w_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_d_4)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_t_3);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_e_4)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto t_8;
  t_8 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto u_8;
  u_8 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto v_8;
  v_8 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(o_1);
  goto e_9;
  o_1 :
  goto n_1;
  e_9 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  n_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_f_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_9;
  g_9 :
  TestFunFC(r_1,&&fail,Egetd(0,1));
  Rpush(q_1);
  goto i_9;
  q_1 :
  goto p_1;
  i_9 :
  Return();
  p_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_4)
  Cpush(u_1);
  Ccall(_stratego_f_4);
  goto s_1;
  u_1 :
  Epushd(0,3);
  MoveTop(0,1);
  goto k_9;
  k_9 :
  TestFunFC(u_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(x_1);
  goto o_9;
  x_1 :
  goto w_1;
  o_9 :
  Return();
  w_1 :
  Epopd(0,3);
  goto v_1;
  s_1 :
  Cpop();
  v_1 :
ENDPROC
