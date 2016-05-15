#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,q_1);
VARDECL(AFun,u_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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
PROCDECL(_stratego_o_4);
PROCDECL(_stratego_p_4);
PROCDECL(_stratego_q_4);
PROCDECL(_stratego_r_4);
PROCDECL(_stratego_s_4);
PROCDECL(_stratego_t_4);
PROCDECL(_stratego_u_4);
PROCDECL(_stratego_v_4);
PROCDECL(_stratego_w_4);

PROC(_stratego_init_afuns)
  MOVE(q_1,ATmakeAFun("Nil",0,0));
  MOVE(u_0,ATmakeAFun("Cons",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("find-file-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_4);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_e_4);
  Ccall(_stratego_j_4);
  Ccall(_stratego_f_4);
  Ccall(_stratego_h_4);
ENDPROC

PROC(_stratego_d_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_e_4)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_f_4)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_4);
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
  Ccall(_stratego_d_4);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_g_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_g_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_2;
  l_2 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto k_2;
  c_0 :
  goto b_0;
  k_2 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_4)
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
  goto o_2;
  o_2 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto n_2;
  h_0 :
  goto g_0;
  n_2 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_g_4);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_i_4);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_i_4);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_i_4)
  _ST_exit();
ENDPROC

PROC(_stratego_j_4)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_n_4);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Epushd(1,3);
  Cpush(n_0);
  Epushd(2,6);
  Tset(App0("TNil"));
  Ccall(_stratego_v_4);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",ATmakeString("lib.r"),App2("TCons",App2("Cons",ATmakeString("."),App2("Cons",ATmakeString("bla"),App2("Cons",Egetd(2,1),App2("Cons",ATmakeString("blabla"),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto w_2;
  w_2 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto s_3;
  s_3 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto x_4;
  x_4 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(p_0);
  goto r_2;
  p_0 :
  goto o_0;
  r_2 :
  Epushd(3,1);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(q_0);
  h_7 :
  Epushd(4,3);
  MoveTop(4,1);
  goto u_2;
  u_2 :
  TestFunFC(u_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Cpush(w_0);
  Rpush(x_0);
  goto s_2;
  x_0 :
  goto v_0;
  w_0 :
  Rpush(z_0);
  goto t_2;
  z_0 :
  goto y_0;
  v_0 :
  Cpop();
  y_0 :
  goto t_0;
  t_0 :
  goto s_0;
  t_2 :
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(a_1);
  goto h_7;
  a_1 :
  Return();
  s_0 :
  goto r_0;
  s_2 :
  NotNULLd(4,2);
  NotNULLd(2,3);
  Tset(App2("Cons",Egetd(4,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,3),App0("Nil")))));
  Ccall(_stratego_p_4);
  Ccall(_stratego_u_4);
  Return();
  r_0 :
  Epopd(4,3);
  Return();
  q_0 :
  MoveTop(3,1);
  Move(0,1,3,1);
  Epopd(3,1);
  Return();
  o_0 :
  Epopd(2,6);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_n_4);
  Ccall(_stratego_o_4);
  goto b_1;
  m_0 :
  Cpop();
  b_1 :
  MoveTop(1,1);
  Ccall(_stratego_v_4);
  MoveTop(1,2);
  Tset(ATmakeString("/lib.r"));
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",ATmakeString("/lib.r"),App0("TNil"))));
  Ccall(_stratego_w_4);
  MoveTop(1,3);
  Move(0,2,1,3);
  Cpush(d_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto c_1;
  d_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_4);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_d_4);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_o_4);
  goto e_1;
  c_1 :
  Cpop();
  e_1 :
  Epopd(1,3);
  Tpop();
  Ccall(_stratego_k_4);
  goto j_0;
  l_0 :
  Ccall(_stratego_m_4);
  goto f_1;
  j_0 :
  Cpop();
  f_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_k_4)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_l_4);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_g_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_l_4)
  _ST_add();
ENDPROC

PROC(_stratego_m_4)
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
  Ccall(_stratego_l_4);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_g_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_n_4)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_d_4);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_o_4)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto c_8;
  c_8 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto d_8;
  d_8 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto e_8;
  e_8 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(h_1);
  goto b_8;
  h_1 :
  goto g_1;
  b_8 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  g_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_p_4)
  Rpush(i_1);
  m_8 :
  Cpush(k_1);
  Ccall(_stratego_q_4);
  goto j_1;
  k_1 :
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_4);
  OneNextSon();
  Rpush(m_1);
  goto m_8;
  m_1 :
  AllBuild();
  goto l_1;
  j_1 :
  Cpop();
  l_1 :
  Return();
  i_1 :
  Ccall(_stratego_s_4);
  Ccall(_stratego_t_4);
ENDPROC

PROC(_stratego_q_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_8;
  o_8 :
  TestFunFC(q_1,&&fail,Egetd(0,1));
  Rpush(p_1);
  goto n_8;
  p_1 :
  goto n_1;
  n_8 :
  Return();
  n_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_4)
  _ST_explode_string();
ENDPROC

PROC(_stratego_s_4)
  Rpush(r_1);
  x_8 :
  Cpush(t_1);
  Ccall(_stratego_q_4);
  goto s_1;
  t_1 :
  Epushd(0,3);
  MoveTop(0,1);
  goto r_8;
  r_8 :
  TestFunFC(u_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_1);
  goto q_8;
  w_1 :
  goto v_1;
  q_8 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(x_1);
  y_8 :
  Cpush(z_1);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_2);
  goto y_8;
  b_2 :
  AllBuild();
  goto y_1;
  z_1 :
  Ccall(_stratego_q_4);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(d_2);
  goto x_8;
  d_2 :
  goto c_2;
  y_1 :
  Cpop();
  c_2 :
  Return();
  x_1 :
  Return();
  v_1 :
  Epopd(0,3);
  goto u_1;
  s_1 :
  Cpop();
  u_1 :
  Return();
  r_1 :
ENDPROC

PROC(_stratego_t_4)
  _ST_implode_string();
ENDPROC

PROC(_stratego_u_4)
  _ST_file_exists();
ENDPROC

PROC(_stratego_v_4)
  Tset(ATmakeString("/home/visser/res/xt/share/stratego"));
ENDPROC

PROC(_stratego_w_4)
  Epushd(0,5);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_4);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_4);
  OneNextSon();
  Ccall(_stratego_g_4);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto a_9;
  a_9 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_9;
  b_9 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_9;
  c_9 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(f_2);
  goto z_8;
  f_2 :
  goto e_2;
  z_8 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(g_2);
  k_9 :
  Cpush(i_2);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_2);
  goto k_9;
  j_2 :
  AllBuild();
  goto h_2;
  i_2 :
  Ccall(_stratego_q_4);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto q_2;
  h_2 :
  Cpop();
  q_2 :
  Return();
  g_2 :
  Ccall(_stratego_t_4);
  Return();
  e_2 :
  Epopd(0,5);
ENDPROC

DOIT

