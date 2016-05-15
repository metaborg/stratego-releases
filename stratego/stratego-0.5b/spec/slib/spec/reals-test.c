#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,z_0);
VARDECL(AFun,y_0);
PROCDECL(_stratego_h_1);
PROCDECL(_stratego_i_1);
PROCDECL(_stratego_j_1);
PROCDECL(_stratego_k_1);
PROCDECL(_stratego_l_1);
PROCDECL(_stratego_m_1);
PROCDECL(_stratego_n_1);
PROCDECL(_stratego_o_1);
PROCDECL(_stratego_p_1);
PROCDECL(_stratego_q_1);
PROCDECL(_stratego_r_1);
PROCDECL(_stratego_s_1);
PROCDECL(_stratego_t_1);
PROCDECL(_stratego_u_1);
PROCDECL(_stratego_v_1);
PROCDECL(_stratego_w_1);
PROCDECL(_stratego_x_1);
PROCDECL(_stratego_y_1);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(z_0,ATmakeAFun("TNil",0,0));
  MOVE(y_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_h_1)
  _ST_sqrt();
ENDPROC

PROC(_stratego_i_1)
  Epushd(0,1);
  Tdupl();
  Tset(ATmakeString("sqrt-test"));
  Ccall(_stratego_n_1);
  Tpop();
  Cpush(b_0);
  Tdupl();
  Cpush(d_0);
  Epushd(1,1);
  Tset((ATerm)ATmakeReal(1.60));
  Ccall(_stratego_h_1);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto c_0;
  d_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_n_1);
  Ccall(_stratego_o_1);
  goto e_0;
  c_0 :
  Cpop();
  e_0 :
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("  succeeded; result: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Ccall(_stratego_n_1);
  Tpop();
  Ccall(_stratego_r_1);
  goto a_0;
  b_0 :
  Ccall(_stratego_p_1);
  goto f_0;
  a_0 :
  Cpop();
  f_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_1)
  _ST_sin();
ENDPROC

PROC(_stratego_k_1)
  Epushd(0,1);
  Tdupl();
  Tset(ATmakeString("sin-test"));
  Ccall(_stratego_n_1);
  Tpop();
  Cpush(h_0);
  Tdupl();
  Cpush(j_0);
  Epushd(1,1);
  Tset((ATerm)ATmakeReal(1.60));
  Ccall(_stratego_j_1);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto i_0;
  j_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_n_1);
  Ccall(_stratego_o_1);
  goto k_0;
  i_0 :
  Cpop();
  k_0 :
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("  succeeded; result: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Ccall(_stratego_n_1);
  Tpop();
  Ccall(_stratego_r_1);
  goto g_0;
  h_0 :
  Ccall(_stratego_p_1);
  goto n_0;
  g_0 :
  Cpop();
  n_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_1)
  _ST_cos();
ENDPROC

PROC(_stratego_m_1)
  Epushd(0,1);
  Tdupl();
  Tset(ATmakeString("cos-test"));
  Ccall(_stratego_n_1);
  Tpop();
  Cpush(p_0);
  Tdupl();
  Cpush(r_0);
  Epushd(1,1);
  Tset((ATerm)ATmakeReal(10.80));
  Ccall(_stratego_l_1);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto q_0;
  r_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_n_1);
  Ccall(_stratego_o_1);
  goto s_0;
  q_0 :
  Cpop();
  s_0 :
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("  succeeded; result: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Ccall(_stratego_n_1);
  Tpop();
  Ccall(_stratego_r_1);
  goto o_0;
  p_0 :
  Ccall(_stratego_p_1);
  goto u_0;
  o_0 :
  Cpop();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_1)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_y_1);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_o_1)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto o_2;
  o_2 :
  TestFunFC(y_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto p_2;
  p_2 :
  TestFunFC(y_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto q_2;
  q_2 :
  TestFunFC(z_0,&&fail,Egetd(0,6));
  Rpush(x_0);
  goto n_2;
  x_0 :
  goto w_0;
  n_2 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  w_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_p_1)
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_q_1);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_v_1);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_q_1)
  _ST_add();
ENDPROC

PROC(_stratego_r_1)
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_q_1);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_1);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_s_1)
  Epushd(0,1);
  Tdupl();
  Tset(ATmakeString("id-test"));
  Ccall(_stratego_n_1);
  Tpop();
  Cpush(c_1);
  Tdupl();
  Cpush(e_1);
  Tset((ATerm)ATmakeReal(10.80));
  Tdupl();
  Tset((ATerm)ATmakeReal(10.80));
  MoveTop(0,1);
  Tpop();
  goto d_1;
  e_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_n_1);
  Ccall(_stratego_o_1);
  goto f_1;
  d_1 :
  Cpop();
  f_1 :
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("  succeeded; result: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Ccall(_stratego_n_1);
  Tpop();
  Ccall(_stratego_r_1);
  goto a_1;
  c_1 :
  Ccall(_stratego_p_1);
  goto g_1;
  a_1 :
  Cpop();
  g_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_1)
  _ST_exit();
ENDPROC

PROC(_stratego_u_1)
  Cpush(b_2);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto i_3;
  i_3 :
  TestInt(0,1,0,&&fail);
  Rpush(d_2);
  goto h_3;
  d_2 :
  goto c_2;
  h_3 :
  Return();
  c_2 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_v_1);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_t_1);
  goto a_2;
  b_2 :
  Tset(MakeInt(1));
  Ccall(_stratego_t_1);
  goto f_2;
  a_2 :
  Cpop();
  f_2 :
ENDPROC

PROC(_stratego_v_1)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_3;
  l_3 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  Rpush(h_2);
  goto k_3;
  h_2 :
  goto g_2;
  k_3 :
  Return();
  g_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_1)
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_y_1);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_y_1);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_v_1);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_x_1)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_y_1)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("reals-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_y_1);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_x_1);
  Ccall(_stratego_s_1);
  Ccall(_stratego_m_1);
  Ccall(_stratego_k_1);
  Ccall(_stratego_i_1);
  Ccall(_stratego_w_1);
  Ccall(_stratego_u_1);
ENDPROC

DOIT

