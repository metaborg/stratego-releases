#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,l_1);
VARDECL(AFun,g_1);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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
PROCDECL(_stratego_h_4);
PROCDECL(_stratego_i_4);
PROCDECL(_stratego_j_4);
PROCDECL(_stratego_k_4);
PROCDECL(_stratego_l_4);
PROCDECL(_stratego_m_4);
PROCDECL(_stratego_n_4);

PROC(_stratego_init_afuns)
  MOVE(l_1,ATmakeAFun("Nil",0,0));
  MOVE(g_1,ATmakeAFun("Cons",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("exec-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_w_3);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_x_3);
  Ccall(_stratego_c_4);
  Ccall(_stratego_y_3);
  Ccall(_stratego_a_4);
ENDPROC

PROC(_stratego_w_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_x_3)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_y_3)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_w_3);
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
  Ccall(_stratego_w_3);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_z_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_z_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_4;
  u_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto w_4;
  c_0 :
  goto b_0;
  w_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_4)
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
  goto y_4;
  y_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto a_5;
  h_0 :
  goto g_0;
  a_5 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_z_3);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_b_4);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_b_4);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_b_4)
  _ST_exit();
ENDPROC

PROC(_stratego_c_4)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_g_4);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,6);
  Tset(App2("TCons",ATmakeString("data/test"),App2("TCons",ATmakeString(".trm"),App0("TNil"))));
  Ccall(_stratego_g_4);
  MoveTop(1,1);
  goto n_5;
  n_5 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_5;
  o_5 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_5;
  p_5 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(p_0);
  goto d_8;
  p_0 :
  goto o_0;
  d_8 :
  Epushd(2,5);
  Ccall(_stratego_g_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString("data/test2"));
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_3);
  AllBuild();
  AllBuild();
  Ccall(_stratego_g_4);
  MoveTop(2,1);
  goto k_5;
  k_5 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_5;
  l_5 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto m_5;
  m_5 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(r_0);
  goto e_8;
  r_0 :
  goto q_0;
  e_8 :
  Ccall(_stratego_g_4);
  Tdupl();
  Epushd(3,7);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_k_4);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_k_4);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto h_5;
  h_5 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto i_5;
  i_5 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto j_5;
  j_5 :
  TestFunFC(d_0,&&fail,Egetd(3,7));
  Rpush(t_0);
  goto h_8;
  t_0 :
  goto s_0;
  h_8 :
  Epushd(4,1);
  Ccall(_stratego_g_4);
  Tdupl();
  Epushd(5,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Ccall(_stratego_i_4);
  MoveTop(5,1);
  Move(4,1,5,1);
  Epopd(5,1);
  Tpop();
  Ccall(_stratego_g_4);
  Tdupl();
  NotNULLd(3,6);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,6),App2("TCons",Egetd(4,1),App0("TNil"))));
  Ccall(_stratego_j_4);
  Tpop();
  Ccall(_stratego_g_4);
  Epopd(4,1);
  Return();
  s_0 :
  Epopd(3,7);
  Tpop();
  Return();
  q_0 :
  Epopd(2,5);
  Return();
  o_0 :
  MoveTop(1,6);
  Move(0,1,1,6);
  Epopd(1,6);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_g_4);
  Ccall(_stratego_h_4);
  goto u_0;
  m_0 :
  Cpop();
  u_0 :
  Tset(App2("TCons",ATmakeString("data/test2"),App2("TCons",ATmakeString(".trm"),App0("TNil"))));
  Tdupl();
  Tset(App2("TCons",ATmakeString("data/test2"),App2("TCons",ATmakeString(".trm"),App0("TNil"))));
  MoveTop(0,2);
  Tpop();
  Cpush(w_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto v_0;
  w_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_w_3);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_w_3);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_h_4);
  goto x_0;
  v_0 :
  Cpop();
  x_0 :
  Tpop();
  Ccall(_stratego_d_4);
  goto j_0;
  l_0 :
  Ccall(_stratego_f_4);
  goto y_0;
  j_0 :
  Cpop();
  y_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_d_4)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_e_4);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_e_4)
  _ST_add();
ENDPROC

PROC(_stratego_f_4)
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
  Ccall(_stratego_e_4);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_z_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_g_4)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_w_3);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_h_4)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto x_9;
  x_9 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_9;
  y_9 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto z_9;
  z_9 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(a_1);
  goto i_10;
  a_1 :
  goto z_0;
  i_10 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  z_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_i_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_j_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_k_4)
  Epushd(0,5);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_4);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_4);
  OneNextSon();
  Ccall(_stratego_z_3);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto k_10;
  k_10 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto l_10;
  l_10 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto m_10;
  m_10 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(c_1);
  goto u_10;
  c_1 :
  goto b_1;
  u_10 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(d_1);
  v_10 :
  Cpush(f_1);
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_1);
  goto v_10;
  h_1 :
  AllBuild();
  goto e_1;
  f_1 :
  Ccall(_stratego_m_4);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto i_1;
  e_1 :
  Cpop();
  i_1 :
  Return();
  d_1 :
  Ccall(_stratego_n_4);
  Return();
  b_1 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_l_4)
  _ST_explode_string();
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_10;
  x_10 :
  TestFunFC(l_1,&&fail,Egetd(0,1));
  Rpush(k_1);
  goto z_10;
  k_1 :
  goto j_1;
  z_10 :
  Return();
  j_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_4)
  _ST_implode_string();
ENDPROC
