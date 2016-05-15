#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,l_0);
VARDECL(AFun,g_0);
VARDECL(AFun,e_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_f_2);
PROCDECL(_stratego_g_2);
PROCDECL(_stratego_h_2);
PROCDECL(_stratego_i_2);
PROCDECL(_stratego_j_2);
PROCDECL(_stratego_k_2);
PROCDECL(_stratego_l_2);
PROCDECL(_stratego_m_2);
PROCDECL(_stratego_n_2);
PROCDECL(_stratego_o_2);
PROCDECL(_stratego_p_2);
PROCDECL(_stratego_q_2);
PROCDECL(_stratego_r_2);
PROCDECL(_stratego_s_2);
PROCDECL(_stratego_t_2);
PROCDECL(_stratego_u_2);
PROCDECL(_stratego_v_2);
PROCDECL(_stratego_w_2);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(l_0,ATmakeAFun("Cons",2,0));
  MOVE(g_0,ATmakeAFun("TNil",0,0));
  MOVE(e_0,ATmakeAFun("TCons",2,0));
  MOVE(c_0,ATmakeAFun("Nil",0,0));
ENDPROC

PROC(_stratego_f_2)
  _ST_implode_string();
ENDPROC

PROC(_stratego_g_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_0;
  v_0 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(b_0);
  goto h_0;
  b_0 :
  goto a_0;
  h_0 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_2)
  _ST_explode_string();
ENDPROC

PROC(_stratego_i_2)
  Epushd(0,5);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_2);
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_2);
  OneNextSon();
  Ccall(_stratego_t_2);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto d_1;
  d_1 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto e_1;
  e_1 :
  TestFunFC(e_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto k_1;
  k_1 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  Rpush(f_0);
  goto x_0;
  f_0 :
  goto d_0;
  x_0 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(i_0);
  z_2 :
  Cpush(k_0);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_0);
  goto z_2;
  m_0 :
  AllBuild();
  goto j_0;
  k_0 :
  Ccall(_stratego_g_2);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto n_0;
  j_0 :
  Cpop();
  n_0 :
  Return();
  i_0 :
  Ccall(_stratego_f_2);
  Return();
  d_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_2)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_k_2)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_l_2)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto c_3;
  c_3 :
  TestFunFC(e_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto d_3;
  d_3 :
  TestFunFC(e_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto e_3;
  e_3 :
  TestFunFC(g_0,&&fail,Egetd(0,6));
  Rpush(p_0);
  goto b_3;
  p_0 :
  goto o_0;
  b_3 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  o_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_m_2)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_w_2);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_n_2)
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_o_2);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_t_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_o_2)
  _ST_add();
ENDPROC

PROC(_stratego_p_2)
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_o_2);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_q_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_m_2);
  Tpop();
  Cpush(r_0);
  Tdupl();
  Cpush(t_0);
  Epushd(1,5);
  Tset(App2("TCons",ATmakeString("data/test"),App2("TCons",ATmakeString(".trm"),App0("TNil"))));
  MoveTop(1,1);
  goto r_4;
  r_4 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_4;
  s_4 :
  TestFunFC(e_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto t_4;
  t_4 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  Rpush(y_0);
  goto e_4;
  y_0 :
  goto u_0;
  e_4 :
  Epushd(2,6);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString("data/test2"));
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_2);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto n_4;
  n_4 :
  TestFunFC(e_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_4;
  o_4 :
  TestFunFC(e_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_4;
  p_4 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  Rpush(a_1);
  goto f_4;
  a_1 :
  goto z_0;
  f_4 :
  Tdupl();
  Epushd(3,7);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_i_2);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_i_2);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto k_4;
  k_4 :
  TestFunFC(e_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto l_4;
  l_4 :
  TestFunFC(e_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto m_4;
  m_4 :
  TestFunFC(g_0,&&fail,Egetd(3,7));
  Rpush(c_1);
  goto i_4;
  c_1 :
  goto b_1;
  i_4 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Ccall(_stratego_k_2);
  MoveTop(5,1);
  Move(4,1,5,1);
  Epopd(5,1);
  Tpop();
  Tdupl();
  NotNULLd(3,6);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,6),App2("TCons",Egetd(4,1),App0("TNil"))));
  Ccall(_stratego_j_2);
  Tpop();
  Epopd(4,1);
  Return();
  b_1 :
  Epopd(3,7);
  Tpop();
  Return();
  z_0 :
  MoveTop(2,6);
  Move(0,1,2,6);
  Epopd(2,6);
  Return();
  u_0 :
  Epopd(1,5);
  goto s_0;
  t_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_m_2);
  Ccall(_stratego_l_2);
  goto f_1;
  s_0 :
  Cpop();
  f_1 :
  Tset(App2("TCons",ATmakeString("data/test2"),App2("TCons",ATmakeString(".trm"),App0("TNil"))));
  Tdupl();
  Tset(App2("TCons",ATmakeString("data/test2"),App2("TCons",ATmakeString(".trm"),App0("TNil"))));
  MoveTop(0,2);
  Tpop();
  Cpush(h_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto g_1;
  h_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_w_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_w_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_l_2);
  goto i_1;
  g_1 :
  Cpop();
  i_1 :
  Tpop();
  Ccall(_stratego_p_2);
  goto q_0;
  r_0 :
  Ccall(_stratego_n_2);
  goto j_1;
  q_0 :
  Cpop();
  j_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_r_2)
  _ST_exit();
ENDPROC

PROC(_stratego_s_2)
  Cpush(n_1);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto h_7;
  h_7 :
  TestInt(0,1,0,&&fail);
  Rpush(p_1);
  goto g_7;
  p_1 :
  goto o_1;
  g_7 :
  Return();
  o_1 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_t_2);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_r_2);
  goto m_1;
  n_1 :
  Tset(MakeInt(1));
  Ccall(_stratego_r_2);
  goto q_1;
  m_1 :
  Cpop();
  q_1 :
ENDPROC

PROC(_stratego_t_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_7;
  k_7 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  Rpush(u_1);
  goto j_7;
  u_1 :
  goto t_1;
  j_7 :
  Return();
  t_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_2)
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_w_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_w_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_t_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_v_2)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_w_2)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("exec-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_w_2);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_v_2);
  Ccall(_stratego_q_2);
  Ccall(_stratego_u_2);
  Ccall(_stratego_s_2);
ENDPROC

DOIT

