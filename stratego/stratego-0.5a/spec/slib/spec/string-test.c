#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,t_0);
VARDECL(AFun,q_0);
VARDECL(AFun,g_0);
PROCDECL(_stratego_t_1);
PROCDECL(_stratego_u_1);
PROCDECL(_stratego_v_1);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(t_0,ATmakeAFun("TNil",0,0));
  MOVE(q_0,ATmakeAFun("TCons",2,0));
  MOVE(g_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_t_1)
  _ST_implode_string();
ENDPROC

PROC(_stratego_u_1)
  _ST_explode_string();
ENDPROC

PROC(_stratego_v_1)
  Ccall(_stratego_u_1);
  Cpush(b_0);
  Rpush(c_0);
  z_0 :
  Cpush(e_0);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_0);
  goto z_0;
  h_0 :
  AllBuild();
  goto d_0;
  e_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto k_0;
  k_0 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto l_0;
  l_0 :
  TestInt(0,2,46,&&fail);
  Rpush(m_0);
  goto f_0;
  m_0 :
  goto j_0;
  f_0 :
  Tset(App0("Nil"));
  Return();
  j_0 :
  Epopd(0,3);
  goto i_0;
  d_0 :
  Cpop();
  i_0 :
  Return();
  c_0 :
  goto a_0;
  b_0 :
  goto n_0;
  a_0 :
  Cpop();
  n_0 :
  Ccall(_stratego_t_1);
ENDPROC

PROC(_stratego_w_1)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto m_1;
  m_1 :
  TestFunFC(q_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto n_1;
  n_1 :
  TestFunFC(q_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto i_2;
  i_2 :
  TestFunFC(t_0,&&fail,Egetd(0,6));
  Rpush(p_0);
  goto g_1;
  p_0 :
  goto o_0;
  g_1 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  o_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_x_1)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_h_2);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_y_1)
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_z_1);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_e_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_z_1)
  _ST_add();
ENDPROC

PROC(_stratego_a_2)
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_z_1);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_b_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("basename-test"));
  Ccall(_stratego_x_1);
  Tpop();
  Cpush(v_0);
  Tdupl();
  Cpush(x_0);
  Epushd(1,1);
  Tset(ATmakeString("./number.r"));
  Ccall(_stratego_v_1);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto w_0;
  x_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_x_1);
  Ccall(_stratego_w_1);
  goto a_1;
  w_0 :
  Cpop();
  a_1 :
  Tset(ATmakeString("./number"));
  Tdupl();
  Tset(ATmakeString("./number"));
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
  Ccall(_stratego_h_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_h_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_w_1);
  goto d_1;
  b_1 :
  Cpop();
  d_1 :
  Tpop();
  Ccall(_stratego_a_2);
  goto u_0;
  v_0 :
  Ccall(_stratego_y_1);
  goto e_1;
  u_0 :
  Cpop();
  e_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_c_2)
  _ST_exit();
ENDPROC

PROC(_stratego_d_2)
  Cpush(h_1);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto v_4;
  v_4 :
  TestInt(0,1,0,&&fail);
  Rpush(j_1);
  goto u_4;
  j_1 :
  goto i_1;
  u_4 :
  Return();
  i_1 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_e_2);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_c_2);
  goto f_1;
  h_1 :
  Tset(MakeInt(1));
  Ccall(_stratego_c_2);
  goto k_1;
  f_1 :
  Cpop();
  k_1 :
ENDPROC

PROC(_stratego_e_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_4;
  y_4 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  Rpush(o_1);
  goto x_4;
  o_1 :
  goto l_1;
  x_4 :
  Return();
  l_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_2)
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_h_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_h_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_e_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_g_2)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_h_2)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("string-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_h_2);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_g_2);
  Ccall(_stratego_b_2);
  Ccall(_stratego_f_2);
  Ccall(_stratego_d_2);
ENDPROC

DOIT

