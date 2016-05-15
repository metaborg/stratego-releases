#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,a_1);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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
PROCDECL(_stratego_g_3);

PROC(_stratego_init_afuns)
  MOVE(a_1,ATmakeAFun("Cons",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("string-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_2);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_t_2);
  Ccall(_stratego_y_2);
  Ccall(_stratego_u_2);
  Ccall(_stratego_w_2);
ENDPROC

PROC(_stratego_s_2)
  _ST_printnl();
ENDPROC

PROC(_stratego_t_2)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_u_2)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_2);
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
  Ccall(_stratego_s_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_v_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_v_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_4;
  g_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto i_4;
  c_0 :
  goto b_0;
  i_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_2)
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
  goto k_4;
  k_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto m_4;
  h_0 :
  goto g_0;
  m_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_v_2);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_x_2);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_x_2);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_x_2)
  _ST_exit();
ENDPROC

PROC(_stratego_y_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("basename-test"));
  Ccall(_stratego_c_3);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,1);
  Tset(ATmakeString("./number.r"));
  Ccall(_stratego_e_3);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_c_3);
  Ccall(_stratego_d_3);
  goto o_0;
  m_0 :
  Cpop();
  o_0 :
  Tset(ATmakeString("./number"));
  Tdupl();
  Tset(ATmakeString("./number"));
  MoveTop(0,2);
  Tpop();
  Cpush(q_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto p_0;
  q_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_d_3);
  goto r_0;
  p_0 :
  Cpop();
  r_0 :
  Tpop();
  Ccall(_stratego_z_2);
  goto j_0;
  l_0 :
  Ccall(_stratego_b_3);
  goto s_0;
  j_0 :
  Cpop();
  s_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_z_2)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_a_3);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_a_3)
  _ST_add();
ENDPROC

PROC(_stratego_b_3)
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
  Ccall(_stratego_a_3);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_v_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_c_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_s_2);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_d_3)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto m_7;
  m_7 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto n_7;
  n_7 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto o_7;
  o_7 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(u_0);
  goto x_7;
  u_0 :
  goto t_0;
  x_7 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  t_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_e_3)
  Ccall(_stratego_f_3);
  Cpush(w_0);
  Rpush(x_0);
  e_8 :
  Cpush(z_0);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_1);
  goto e_8;
  b_1 :
  AllBuild();
  goto y_0;
  z_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto z_7;
  z_7 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_8;
  a_8 :
  TestInt(0,2,46,&&fail);
  Rpush(e_1);
  goto f_8;
  e_1 :
  goto d_1;
  f_8 :
  Tset(App0("Nil"));
  Return();
  d_1 :
  Epopd(0,3);
  goto c_1;
  y_0 :
  Cpop();
  c_1 :
  Return();
  x_0 :
  goto v_0;
  w_0 :
  goto f_1;
  v_0 :
  Cpop();
  f_1 :
  Ccall(_stratego_g_3);
ENDPROC

PROC(_stratego_f_3)
  _ST_explode_string();
ENDPROC

PROC(_stratego_g_3)
  _ST_implode_string();
ENDPROC
