#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_w_1);
PROCDECL(_stratego_x_1);
PROCDECL(_stratego_y_1);
PROCDECL(_stratego_z_1);
PROCDECL(_stratego_a_2);
PROCDECL(_stratego_b_2);
PROCDECL(_stratego_c_2);
PROCDECL(_stratego_d_2);
PROCDECL(_stratego_e_2);
PROCDECL(_stratego_f_2);
PROCDECL(_stratego_g_2);
PROCDECL(_stratego_h_2);
PROCDECL(_stratego_i_2);
PROCDECL(_stratego_j_2);
PROCDECL(_stratego_k_2);
PROCDECL(_stratego_l_2);
PROCDECL(_stratego_m_2);
PROCDECL(_stratego_n_2);

PROC(_stratego_init_afuns)
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("reals-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_w_1);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_x_1);
  Ccall(_stratego_c_2);
  Ccall(_stratego_i_2);
  Ccall(_stratego_k_2);
  Ccall(_stratego_m_2);
  Ccall(_stratego_y_1);
  Ccall(_stratego_a_2);
ENDPROC

PROC(_stratego_w_1)
  _ST_printnl();
ENDPROC

PROC(_stratego_x_1)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_y_1)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_w_1);
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
  Ccall(_stratego_w_1);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_z_1);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_z_1)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_4;
  a_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto c_4;
  c_0 :
  goto b_0;
  c_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_2)
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
  goto e_4;
  e_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto g_4;
  h_0 :
  goto g_0;
  g_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_z_1);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_b_2);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_b_2);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_b_2)
  _ST_exit();
ENDPROC

PROC(_stratego_c_2)
  Epushd(0,1);
  Tdupl();
  Tset(ATmakeString("id-test"));
  Ccall(_stratego_h_2);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Tset(ATmakeReal(10.80));
  Tdupl();
  Tset(ATmakeReal(10.80));
  MoveTop(0,1);
  Tpop();
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_h_2);
  Ccall(_stratego_g_2);
  goto o_0;
  m_0 :
  Cpop();
  o_0 :
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("  succeeded; result: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Ccall(_stratego_h_2);
  Tpop();
  Ccall(_stratego_d_2);
  goto j_0;
  l_0 :
  Ccall(_stratego_f_2);
  goto p_0;
  j_0 :
  Cpop();
  p_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_2)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_e_2);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_1);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_e_2)
  _ST_add();
ENDPROC

PROC(_stratego_f_2)
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
  Ccall(_stratego_e_2);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_z_1);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_g_2)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto v_4;
  v_4 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_4;
  w_4 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_4;
  x_4 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(r_0);
  goto g_5;
  r_0 :
  goto q_0;
  g_5 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  q_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_h_2)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_w_1);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_i_2)
  Epushd(0,1);
  Tdupl();
  Tset(ATmakeString("cos-test"));
  Ccall(_stratego_h_2);
  Tpop();
  Cpush(t_0);
  Tdupl();
  Cpush(v_0);
  Epushd(1,1);
  Tset(ATmakeReal(10.80));
  Ccall(_stratego_j_2);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto u_0;
  v_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_h_2);
  Ccall(_stratego_g_2);
  goto w_0;
  u_0 :
  Cpop();
  w_0 :
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("  succeeded; result: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Ccall(_stratego_h_2);
  Tpop();
  Ccall(_stratego_d_2);
  goto s_0;
  t_0 :
  Ccall(_stratego_f_2);
  goto x_0;
  s_0 :
  Cpop();
  x_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_2)
  _ST_cos();
ENDPROC

PROC(_stratego_k_2)
  Epushd(0,1);
  Tdupl();
  Tset(ATmakeString("sin-test"));
  Ccall(_stratego_h_2);
  Tpop();
  Cpush(z_0);
  Tdupl();
  Cpush(b_1);
  Epushd(1,1);
  Tset(ATmakeReal(1.60));
  Ccall(_stratego_l_2);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto a_1;
  b_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_h_2);
  Ccall(_stratego_g_2);
  goto c_1;
  a_1 :
  Cpop();
  c_1 :
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("  succeeded; result: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Ccall(_stratego_h_2);
  Tpop();
  Ccall(_stratego_d_2);
  goto y_0;
  z_0 :
  Ccall(_stratego_f_2);
  goto d_1;
  y_0 :
  Cpop();
  d_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_2)
  _ST_sin();
ENDPROC

PROC(_stratego_m_2)
  Epushd(0,1);
  Tdupl();
  Tset(ATmakeString("sqrt-test"));
  Ccall(_stratego_h_2);
  Tpop();
  Cpush(f_1);
  Tdupl();
  Cpush(h_1);
  Epushd(1,1);
  Tset(ATmakeReal(1.60));
  Ccall(_stratego_n_2);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto g_1;
  h_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_h_2);
  Ccall(_stratego_g_2);
  goto i_1;
  g_1 :
  Cpop();
  i_1 :
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("  succeeded; result: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Ccall(_stratego_h_2);
  Tpop();
  Ccall(_stratego_d_2);
  goto e_1;
  f_1 :
  Ccall(_stratego_f_2);
  goto j_1;
  e_1 :
  Cpop();
  j_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_2)
  _ST_sqrt();
ENDPROC
