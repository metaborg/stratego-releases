#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,b_33);
VARDECL(AFun,s_31);
VARDECL(AFun,p_26);
VARDECL(AFun,f_24);
VARDECL(AFun,e_24);
VARDECL(AFun,u_23);
VARDECL(AFun,g_21);
VARDECL(AFun,o_8);
VARDECL(AFun,l_8);
VARDECL(AFun,e_8);
VARDECL(AFun,q_1);
VARDECL(AFun,o_1);
VARDECL(AFun,c_1);
VARDECL(AFun,u_0);
VARDECL(AFun,n_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_a_12);
PROCDECL(_stratego_b_12);
PROCDECL(_stratego_c_12);
PROCDECL(_stratego_d_12);
PROCDECL(_stratego_e_12);
PROCDECL(_stratego_f_12);
PROCDECL(_stratego_g_12);
PROCDECL(_stratego_h_12);
PROCDECL(_stratego_i_12);
PROCDECL(_stratego_j_12);
PROCDECL(_stratego_k_12);
PROCDECL(_stratego_l_12);
PROCDECL(_stratego_m_12);
PROCDECL(_stratego_n_12);
PROCDECL(_stratego_o_12);
PROCDECL(_stratego_t_12);
PROCDECL(_stratego_u_12);
PROCDECL(_stratego_v_12);
PROCDECL(_stratego_w_12);
PROCDECL(_stratego_x_12);
PROCDECL(_stratego_y_12);
PROCDECL(_stratego_h_13);
PROCDECL(_stratego_i_13);
PROCDECL(_stratego_j_13);
PROCDECL(_stratego_k_13);
PROCDECL(_stratego_l_13);
PROCDECL(_stratego_m_13);
PROCDECL(_stratego_n_13);
PROCDECL(_stratego_o_13);
PROCDECL(_stratego_p_13);
PROCDECL(_stratego_q_13);
PROCDECL(_stratego_r_13);
PROCDECL(_stratego_s_13);
PROCDECL(_stratego_t_13);
PROCDECL(_stratego_u_13);
PROCDECL(_stratego_v_13);
PROCDECL(_stratego_w_13);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(b_33,ATmakeAFun("NoDependency",0,0));
  MOVE(s_31,ATmakeAFun("Binary",0,0));
  MOVE(p_26,ATmakeAFun("Include",1,0));
  MOVE(f_24,ATmakeAFun("Dependency",1,0));
  MOVE(e_24,ATmakeAFun("Output",1,0));
  MOVE(u_23,ATmakeAFun("Input",1,0));
  MOVE(g_21,ATmakeAFun("Undefined",1,0));
  MOVE(o_8,ATmakeAFun("Help",0,0));
  MOVE(l_8,ATmakeAFun("Version",0,0));
  MOVE(e_8,ATmakeAFun("Program",1,0));
  MOVE(q_1,ATmakeAFun("TCons",2,0));
  MOVE(o_1,ATmakeAFun("Nil",0,0));
  MOVE(c_1,ATmakeAFun("Imports",1,0));
  MOVE(u_0,ATmakeAFun("Specification",1,0));
  MOVE(n_0,ATmakeAFun("TNil",0,0));
  MOVE(f_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_a_12)
  Ccall(_stratego_m_13);
  Cpush(b_0);
  Rpush(c_0);
  u_4 :
  Cpush(e_0);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_0);
  goto u_4;
  g_0 :
  AllBuild();
  goto d_0;
  e_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_4;
  n_4 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto q_4;
  q_4 :
  TestInt(0,2,46,&&fail);
  Rpush(j_0);
  goto m_4;
  j_0 :
  goto i_0;
  m_4 :
  Tset(App0("Nil"));
  Return();
  i_0 :
  Epopd(0,3);
  goto h_0;
  d_0 :
  Cpop();
  h_0 :
  Return();
  c_0 :
  goto a_0;
  b_0 :
  goto k_0;
  a_0 :
  Cpop();
  k_0 :
  Ccall(_stratego_k_13);
ENDPROC

PROC(_stratego_b_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_4;
  w_4 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  Rpush(m_0);
  goto v_4;
  m_0 :
  goto l_0;
  v_4 :
  Return();
  l_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_12)
  Epushd(0,1);
  Rpush(o_0);
  s_5 :
  Cpush(q_0);
  Ccall(_stratego_v_13);
  goto p_0;
  q_0 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto e_5;
  e_5 :
  TestFunFC(u_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(t_0);
  goto y_4;
  t_0 :
  goto s_0;
  y_4 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(v_0);
  t_5 :
  Cpush(x_0);
  Ccall(_stratego_v_13);
  goto w_0;
  x_0 :
  Ccontinue(y_0);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(z_0);
  Tdupl();
  Epushd(2,2);
  MoveTop(2,1);
  goto b_5;
  b_5 :
  TestFunFC(c_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(b_1);
  goto a_5;
  b_1 :
  goto a_1;
  a_5 :
  Return();
  a_1 :
  Epopd(2,2);
  Cpop();
  Crestore();
  Cjump();
  z_0 :
  OneNextSon();
  Rpush(d_1);
  goto t_5;
  d_1 :
  AllBuild();
  goto w_0;
  y_0 :
  Epushd(2,3);
  MoveTop(2,1);
  goto d_5;
  d_5 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(g_1);
  goto c_5;
  g_1 :
  goto f_1;
  c_5 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(h_1);
  goto t_5;
  h_1 :
  Return();
  f_1 :
  Epopd(2,3);
  goto e_1;
  w_0 :
  Cpop();
  e_1 :
  Return();
  v_0 :
  Return();
  s_0 :
  Epopd(1,2);
  OneNextSon();
  Rpush(i_1);
  goto s_5;
  i_1 :
  AllBuild();
  goto r_0;
  p_0 :
  Cpop();
  r_0 :
  Return();
  o_0 :
  Ccall(_stratego_l_13);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Specification",Egetd(0,1)));
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_12)
  Rpush(j_1);
  b_13 :
  Epushd(0,3);
  MoveTop(0,1);
  goto u_7;
  u_7 :
  TestFunFC(o_1,&&n_1,Egetd(0,1));
  Rpush(m_1);
  goto u_5;
  n_1 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_1);
  goto z_5;
  m_1 :
  goto l_1;
  z_5 :
  Epushd(1,13);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Rpush(r_1);
  goto b_13;
  r_1 :
  OneNextSon();
  Ccall(_stratego_b_12);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto b_6;
  b_6 :
  TestFunFC(q_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto c_7;
  c_7 :
  TestFunFC(q_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto k_7;
  k_7 :
  TestFunFC(q_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto l_7;
  l_7 :
  TestFunFC(n_0,&&fail,Egetd(1,6));
  goto m_7;
  m_7 :
  TestFunFC(q_1,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto n_7;
  n_7 :
  TestFunFC(q_1,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto r_7;
  r_7 :
  TestFunFC(q_1,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto s_7;
  s_7 :
  TestFunFC(n_0,&&fail,Egetd(1,12));
  goto t_7;
  t_7 :
  TestFunFC(n_0,&&fail,Egetd(1,13));
  Rpush(s_1);
  goto a_6;
  s_1 :
  goto p_1;
  a_6 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset(App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,9)),App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,11)),App0("TNil"))));
  Return();
  p_1 :
  Epopd(1,13);
  Return();
  l_1 :
  goto k_1;
  u_5 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  k_1 :
  Epopd(0,3);
  Return();
  j_1 :
ENDPROC

PROC(_stratego_e_12)
  Epushd(0,6);
  MoveTop(0,1);
  goto x_13;
  x_13 :
  TestFunFC(q_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto y_13;
  y_13 :
  TestFunFC(q_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto z_13;
  z_13 :
  TestFunFC(u_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto a_14;
  a_14 :
  TestFunFC(n_0,&&fail,Egetd(0,6));
  Rpush(u_1);
  goto c_13;
  u_1 :
  goto t_1;
  c_13 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(v_1);
  q_14 :
  Cpush(x_1);
  Ccall(_stratego_v_13);
  goto w_1;
  x_1 :
  Ccontinue(y_1);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto e_13;
  e_13 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(a_2);
  goto d_13;
  a_2 :
  goto z_1;
  d_13 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  z_1 :
  Epopd(1,2);
  OneNextSon();
  Rpush(b_2);
  goto q_14;
  b_2 :
  AllBuild();
  goto w_1;
  y_1 :
  Epushd(1,3);
  MoveTop(1,1);
  goto g_13;
  g_13 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(e_2);
  goto f_13;
  e_2 :
  goto d_2;
  f_13 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(f_2);
  goto q_14;
  f_2 :
  Return();
  d_2 :
  Epopd(1,3);
  goto c_2;
  w_1 :
  Cpop();
  c_2 :
  Return();
  v_1 :
  Ccall(_stratego_l_13);
  Return();
  t_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_f_12)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_h_13);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_g_12)
  Tdupl();
  Ccall(_stratego_f_12);
  Tset(MakeInt(1));
  Ccall(_stratego_q_13);
  Tpop();
ENDPROC

PROC(_stratego_h_12)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_i_12)
  _ST_file_exists();
ENDPROC

PROC(_stratego_j_12)
  _ST_call();
ENDPROC

PROC(_stratego_k_12)
  Epushd(0,5);
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_13);
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_13);
  OneNextSon();
  Ccall(_stratego_b_12);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto f_15;
  f_15 :
  TestFunFC(q_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto g_15;
  g_15 :
  TestFunFC(q_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto h_15;
  h_15 :
  TestFunFC(n_0,&&fail,Egetd(0,5));
  Rpush(h_2);
  goto e_15;
  h_2 :
  goto g_2;
  e_15 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(i_2);
  p_15 :
  Cpush(k_2);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_2);
  goto p_15;
  l_2 :
  AllBuild();
  goto j_2;
  k_2 :
  Ccall(_stratego_v_13);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto m_2;
  j_2 :
  Cpop();
  m_2 :
  Return();
  i_2 :
  Ccall(_stratego_k_13);
  Return();
  g_2 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_l_12)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(o_2);
  u_16 :
  Cpush(q_2);
  Epushd(1,7);
  MoveTop(1,1);
  goto s_15;
  s_15 :
  TestFunFC(q_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto t_15;
  t_15 :
  TestFunFC(f_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto u_15;
  u_15 :
  TestFunFC(q_1,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto v_15;
  v_15 :
  TestFunFC(n_0,&&fail,Egetd(1,7));
  Rpush(s_2);
  goto r_15;
  s_2 :
  goto r_2;
  r_15 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(t_2);
  goto u_16;
  t_2 :
  Return();
  r_2 :
  Epopd(1,7);
  goto p_2;
  q_2 :
  goto u_2;
  p_2 :
  Cpop();
  u_2 :
  Return();
  o_2 :
  MoveTop(0,2);
  goto x_15;
  x_15 :
  TestFunFC(q_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_15;
  y_15 :
  TestFunFC(o_1,&&fail,Egetd(0,3));
  goto z_15;
  z_15 :
  TestFunFC(q_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto a_16;
  a_16 :
  TestFunFC(n_0,&&fail,Egetd(0,6));
  Rpush(v_2);
  goto w_15;
  v_2 :
  goto n_2;
  w_15 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  n_2 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_m_12)
  Epushd(0,7);
  MoveTop(0,1);
  goto x_16;
  x_16 :
  TestFunFC(q_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto y_16;
  y_16 :
  TestFunFC(q_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto z_16;
  z_16 :
  TestFunFC(o_1,&&z_2,Egetd(0,4));
  goto a_17;
  a_17 :
  TestFunFC(n_0,&&fail,Egetd(0,7));
  Rpush(y_2);
  goto v_16;
  z_2 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto b_17;
  b_17 :
  TestFunFC(n_0,&&fail,Egetd(0,7));
  Rpush(y_2);
  goto w_16;
  y_2 :
  goto x_2;
  w_16 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  x_2 :
  goto w_2;
  v_16 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  w_2 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_n_12)
  _ST_int();
ENDPROC

PROC(_stratego_o_12)
  _ST_div();
ENDPROC

PROC(_stratego_t_12)
  _ST_add();
ENDPROC

PROC(_stratego_u_12)
  _ST_mod();
ENDPROC

PROC(_stratego_v_12)
  Rpush(a_3);
  r_18 :
  Epushd(0,4);
  MoveTop(0,1);
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_u_12);
  MoveTop(0,2);
  Tset(MakeInt(48));
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_t_12);
  MoveTop(0,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_o_12);
  Ccall(_stratego_n_12);
  MoveTop(0,4);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,4),App0("TNil"))));
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Cpush(c_3);
  Epushd(1,1);
  MoveTop(1,1);
  goto x_17;
  x_17 :
  TestInt(1,1,0,&&fail);
  Rpush(e_3);
  goto w_17;
  e_3 :
  goto d_3;
  w_17 :
  Tset(App0("Nil"));
  Return();
  d_3 :
  Epopd(1,1);
  goto b_3;
  c_3 :
  Rpush(g_3);
  goto r_18;
  g_3 :
  goto f_3;
  b_3 :
  Cpop();
  f_3 :
  OneNextSon();
  Ccall(_stratego_b_12);
  AllBuild();
  AllBuild();
  Ccall(_stratego_m_12);
  Epopd(0,4);
  Return();
  a_3 :
  Ccall(_stratego_l_12);
  Ccall(_stratego_k_13);
ENDPROC

PROC(_stratego_w_12)
  _ST_get_pid();
ENDPROC

PROC(_stratego_x_12)
  Epushd(0,7);
  MoveTop(0,1);
  goto u_19;
  u_19 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto v_19;
  v_19 :
  TestFunFC(q_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_19;
  w_19 :
  TestFunFC(q_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_19;
  x_19 :
  TestFunFC(n_0,&&fail,Egetd(0,6));
  Rpush(i_3);
  goto s_18;
  i_3 :
  goto h_3;
  s_18 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto u_18;
  u_18 :
  TestFunFC(q_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_18;
  v_18 :
  TestFunFC(q_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_18;
  w_18 :
  TestFunFC(n_0,&&fail,Egetd(2,5));
  Rpush(k_3);
  goto t_18;
  k_3 :
  goto j_3;
  t_18 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  j_3 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto y_18;
  y_18 :
  TestFunFC(q_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto z_18;
  z_18 :
  TestFunFC(q_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto a_19;
  a_19 :
  TestFunFC(n_0,&&fail,Egetd(2,5));
  Rpush(m_3);
  goto x_18;
  m_3 :
  goto l_3;
  x_18 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  l_3 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(n_3);
  c_22 :
  Epushd(2,9);
  MoveTop(2,1);
  goto h_19;
  h_19 :
  TestFunFC(q_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto i_19;
  i_19 :
  TestFunFC(o_1,&&r_3,Egetd(2,2));
  goto j_19;
  j_19 :
  TestFunFC(q_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto k_19;
  k_19 :
  TestFunFC(o_1,&&fail,Egetd(2,6));
  goto l_19;
  l_19 :
  TestFunFC(n_0,&&fail,Egetd(2,9));
  Rpush(q_3);
  goto b_19;
  r_3 :
  TestFunFC(f_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto m_19;
  m_19 :
  TestFunFC(q_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto n_19;
  n_19 :
  TestFunFC(f_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto o_19;
  o_19 :
  TestFunFC(n_0,&&fail,Egetd(2,9));
  Rpush(q_3);
  goto c_19;
  q_3 :
  goto p_3;
  c_19 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Rpush(t_3);
  goto c_22;
  t_3 :
  OneNextSon();
  Ccall(_stratego_b_12);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto e_19;
  e_19 :
  TestFunFC(q_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto f_19;
  f_19 :
  TestFunFC(q_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto g_19;
  g_19 :
  TestFunFC(n_0,&&fail,Egetd(3,5));
  Rpush(u_3);
  goto d_19;
  u_3 :
  goto s_3;
  d_19 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  s_3 :
  Epopd(3,5);
  Return();
  p_3 :
  goto o_3;
  b_19 :
  Tset(App0("Nil"));
  Return();
  o_3 :
  Epopd(2,9);
  Return();
  n_3 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto r_19;
  r_19 :
  TestFunFC(q_1,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto s_19;
  s_19 :
  TestFunFC(q_1,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto t_19;
  t_19 :
  TestFunFC(n_0,&&fail,Egetd(1,9));
  Rpush(w_3);
  goto q_19;
  w_3 :
  goto v_3;
  q_19 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(x_3);
  d_22 :
  Cpush(z_3);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_4);
  goto d_22;
  a_4 :
  AllBuild();
  goto y_3;
  z_3 :
  Ccall(_stratego_v_13);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto b_4;
  y_3 :
  Cpop();
  b_4 :
  Return();
  x_3 :
  Return();
  v_3 :
  Epopd(1,9);
  Return();
  h_3 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_y_12)
  Epushd(0,5);
  MoveTop(0,5);
  goto u_22;
  u_22 :
  TestFunFC(q_1,&&f_4,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto v_22;
  v_22 :
  TestFunFC(q_1,&&g_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_22;
  w_22 :
  TestFunFC(n_0,&&h_4,Egetd(0,4));
  Cpush(j_4);
  Rpush(k_4);
  goto e_22;
  k_4 :
  goto i_4;
  j_4 :
  Rpush(o_4);
  goto f_22;
  o_4 :
  goto l_4;
  i_4 :
  Cpop();
  l_4 :
  goto e_4;
  h_4 :
  Rpush(e_4);
  goto f_22;
  g_4 :
  Rpush(e_4);
  goto f_22;
  f_4 :
  Rpush(e_4);
  goto f_22;
  e_4 :
  goto d_4;
  f_22 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(p_4);
  i_24 :
  Cpush(f_5);
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Cpush(o_5);
  Epushd(1,7);
  MoveTop(1,1);
  goto l_22;
  l_22 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto m_22;
  m_22 :
  TestFunFC(q_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto n_22;
  n_22 :
  TestFunFC(q_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto o_22;
  o_22 :
  TestFunFC(n_0,&&fail,Egetd(1,6));
  Rpush(r_5);
  goto k_22;
  r_5 :
  goto p_5;
  k_22 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  p_5 :
  Epopd(1,7);
  goto i_5;
  o_5 :
  Ccall(_stratego_x_12);
  goto v_5;
  i_5 :
  Cpop();
  v_5 :
  OneNextSon();
  Ccall(_stratego_b_12);
  AllBuild();
  AllBuild();
  goto z_4;
  f_5 :
  Epushd(1,7);
  MoveTop(1,1);
  goto q_22;
  q_22 :
  TestFunFC(q_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_22;
  r_22 :
  TestFunFC(q_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto s_22;
  s_22 :
  TestFunFC(f_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto t_22;
  t_22 :
  TestFunFC(n_0,&&fail,Egetd(1,7));
  Rpush(y_5);
  goto p_22;
  y_5 :
  goto x_5;
  p_22 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  x_5 :
  Epopd(1,7);
  goto w_5;
  z_4 :
  Cpop();
  w_5 :
  Cpush(d_6);
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_13);
  OneNextSon();
  Ccall(_stratego_b_12);
  AllBuild();
  AllBuild();
  goto c_6;
  d_6 :
  Rpush(f_6);
  goto i_24;
  f_6 :
  goto e_6;
  c_6 :
  Cpop();
  e_6 :
  Return();
  p_4 :
  Return();
  d_4 :
  goto c_4;
  e_22 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(g_6);
  g_24 :
  Cpush(i_6);
  Ccall(_stratego_v_13);
  goto h_6;
  i_6 :
  Ccontinue(j_6);
  Epushd(1,3);
  MoveTop(1,1);
  goto j_22;
  j_22 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(l_6);
  goto g_22;
  l_6 :
  goto k_6;
  g_22 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(m_6);
  h_24 :
  Cpush(o_6);
  Epushd(2,3);
  MoveTop(2,1);
  goto i_22;
  i_22 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(q_6);
  goto h_22;
  q_6 :
  goto p_6;
  h_22 :
  Move(1,2,2,2);
  Return();
  p_6 :
  Epopd(2,3);
  goto n_6;
  o_6 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_6);
  goto h_24;
  s_6 :
  AllBuild();
  goto r_6;
  n_6 :
  Cpop();
  r_6 :
  Return();
  m_6 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(t_6);
  goto g_24;
  t_6 :
  Return();
  k_6 :
  Epopd(1,3);
  goto h_6;
  j_6 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_6);
  goto g_24;
  v_6 :
  AllBuild();
  goto u_6;
  h_6 :
  Cpop();
  u_6 :
  Return();
  g_6 :
  Return();
  c_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_13)
  _ST_printnl();
ENDPROC

PROC(_stratego_i_13)
  _ST_dtime();
ENDPROC

PROC(_stratego_j_13)
  _ST_open_file();
ENDPROC

PROC(_stratego_k_13)
  _ST_implode_string();
ENDPROC

PROC(_stratego_l_13)
  Rpush(w_6);
  q_24 :
  Cpush(y_6);
  Ccall(_stratego_v_13);
  goto x_6;
  y_6 :
  Epushd(0,3);
  MoveTop(0,1);
  goto k_24;
  k_24 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(b_7);
  goto j_24;
  b_7 :
  goto a_7;
  j_24 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(d_7);
  r_24 :
  Cpush(f_7);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_7);
  goto r_24;
  g_7 :
  AllBuild();
  goto e_7;
  f_7 :
  Ccall(_stratego_v_13);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(i_7);
  goto q_24;
  i_7 :
  goto h_7;
  e_7 :
  Cpop();
  h_7 :
  Return();
  d_7 :
  Return();
  a_7 :
  Epopd(0,3);
  goto z_6;
  x_6 :
  Cpop();
  z_6 :
  Return();
  w_6 :
ENDPROC

PROC(_stratego_m_13)
  _ST_explode_string();
ENDPROC

PROC(_stratego_n_13)
  Rpush(j_7);
  s_24 :
  Cpush(p_7);
  Ccall(_stratego_v_13);
  goto o_7;
  p_7 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_13);
  OneNextSon();
  Rpush(w_7);
  goto s_24;
  w_7 :
  AllBuild();
  goto q_7;
  o_7 :
  Cpop();
  q_7 :
  Return();
  j_7 :
  Ccall(_stratego_l_13);
  Ccall(_stratego_k_13);
ENDPROC

PROC(_stratego_o_13)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_p_13)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_q_13)
  _ST_exit();
ENDPROC

PROC(_stratego_r_13)
  Epushd(0,1);
  Rpush(x_7);
  b_25 :
  Cpush(z_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_24;
  u_24 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_24;
  v_24 :
  TestFunFC(e_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_8);
  goto t_24;
  d_8 :
  goto c_8;
  t_24 :
  Move(0,1,1,3);
  Return();
  c_8 :
  Epopd(1,4);
  goto y_7;
  z_7 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_8);
  goto b_25;
  i_8 :
  AllBuild();
  goto f_8;
  y_7 :
  Cpop();
  f_8 :
  Return();
  x_7 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-I dir] [-i file]"),App2("Cons",ATmakeString(" [-o file] [-b] [-s] [--help|-h|-?]"),App2("Cons",ATmakeString(" [-dep target | -nodep]"),App0("Nil")))))),App0("TNil"))));
  Ccall(_stratego_h_13);
  Tset(MakeInt(1));
  Ccall(_stratego_q_13);
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_25;
  d_25 :
  TestFunFC(l_8,&&fail,Egetd(0,1));
  Rpush(k_8);
  goto c_25;
  k_8 :
  goto j_8;
  c_25 :
  Return();
  j_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_25;
  g_25 :
  TestFunFC(o_8,&&fail,Egetd(0,1));
  Rpush(n_8);
  goto f_25;
  n_8 :
  goto m_8;
  f_25 :
  Return();
  m_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_13)
  Epushd(0,5);
  MoveTop(0,3);
  goto v_27;
  v_27 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto w_27;
  w_27 :
  TestFunFC(f_0,&&g_9,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(i_9);
  Rpush(j_9);
  goto i_25;
  j_9 :
  goto h_9;
  i_9 :
  Ccontinue(o_9);
  Rpush(p_9);
  goto j_25;
  p_9 :
  goto h_9;
  o_9 :
  Ccontinue(q_9);
  Rpush(r_9);
  goto k_25;
  r_9 :
  goto h_9;
  q_9 :
  Ccontinue(s_9);
  Rpush(t_9);
  goto l_25;
  t_9 :
  goto h_9;
  s_9 :
  Ccontinue(u_9);
  Rpush(v_9);
  goto m_25;
  v_9 :
  goto h_9;
  u_9 :
  Ccontinue(w_9);
  Rpush(x_9);
  goto n_25;
  x_9 :
  goto h_9;
  w_9 :
  Ccontinue(y_9);
  Rpush(z_9);
  goto o_25;
  z_9 :
  goto h_9;
  y_9 :
  Ccontinue(a_10);
  Rpush(c_10);
  goto p_25;
  c_10 :
  goto h_9;
  a_10 :
  Ccontinue(d_10);
  Rpush(e_10);
  goto q_25;
  e_10 :
  goto h_9;
  d_10 :
  Ccontinue(f_10);
  Rpush(g_10);
  goto r_25;
  g_10 :
  goto h_9;
  f_10 :
  Ccontinue(h_10);
  Rpush(i_10);
  goto s_25;
  i_10 :
  goto h_9;
  h_10 :
  Ccontinue(j_10);
  Rpush(k_10);
  goto t_25;
  k_10 :
  goto h_9;
  j_10 :
  Ccontinue(l_10);
  Rpush(m_10);
  goto u_25;
  m_10 :
  goto h_9;
  l_10 :
  Ccontinue(n_10);
  Rpush(o_10);
  goto v_25;
  o_10 :
  goto h_9;
  n_10 :
  Rpush(q_10);
  goto w_25;
  q_10 :
  goto p_10;
  h_9 :
  Cpop();
  p_10 :
  goto f_9;
  g_9 :
  Cpush(s_10);
  Rpush(t_10);
  goto i_25;
  t_10 :
  goto r_10;
  s_10 :
  Ccontinue(u_10);
  Rpush(v_10);
  goto j_25;
  v_10 :
  goto r_10;
  u_10 :
  Ccontinue(w_10);
  Rpush(x_10);
  goto k_25;
  x_10 :
  goto r_10;
  w_10 :
  Ccontinue(y_10);
  Rpush(z_10);
  goto l_25;
  z_10 :
  goto r_10;
  y_10 :
  Ccontinue(c_11);
  Rpush(d_11);
  goto m_25;
  d_11 :
  goto r_10;
  c_11 :
  Ccontinue(e_11);
  Rpush(f_11);
  goto s_25;
  f_11 :
  goto r_10;
  e_11 :
  Ccontinue(g_11);
  Rpush(h_11);
  goto t_25;
  h_11 :
  goto r_10;
  g_11 :
  Ccontinue(i_11);
  Rpush(j_11);
  goto u_25;
  j_11 :
  goto r_10;
  i_11 :
  Ccontinue(k_11);
  Rpush(l_11);
  goto v_25;
  l_11 :
  goto r_10;
  k_11 :
  Rpush(n_11);
  goto w_25;
  n_11 :
  goto m_11;
  r_10 :
  Cpop();
  m_11 :
  goto f_9;
  f_9 :
  goto e_9;
  w_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_27;
  t_27 :
  TestStr(1,1,"-?",&&fail);
  Rpush(p_11);
  goto s_27;
  p_11 :
  goto o_11;
  s_27 :
  Return();
  o_11 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  e_9 :
  goto d_9;
  v_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_27;
  q_27 :
  TestStr(1,1,"-h",&&fail);
  Rpush(r_11);
  goto p_27;
  r_11 :
  goto q_11;
  p_27 :
  Return();
  q_11 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  d_9 :
  goto c_9;
  u_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_27;
  n_27 :
  TestStr(1,1,"--help",&&fail);
  Rpush(t_11);
  goto m_27;
  t_11 :
  goto s_11;
  m_27 :
  Return();
  s_11 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  c_9 :
  goto b_9;
  t_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_27;
  k_27 :
  TestStr(1,1,"-s",&&fail);
  Rpush(w_11);
  goto j_27;
  w_11 :
  goto u_11;
  j_27 :
  Return();
  u_11 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  b_9 :
  goto a_9;
  s_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_27;
  h_27 :
  TestStr(1,1,"-b",&&fail);
  Rpush(y_11);
  goto g_27;
  y_11 :
  goto x_11;
  g_27 :
  Return();
  x_11 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  a_9 :
  goto z_8;
  r_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_27;
  d_27 :
  TestStr(1,1,"--output",&&fail);
  Rpush(r_12);
  goto c_27;
  r_12 :
  goto z_11;
  c_27 :
  Return();
  z_11 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  z_8 :
  goto y_8;
  q_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_26;
  z_26 :
  TestStr(1,1,"-o",&&fail);
  Rpush(z_12);
  goto y_26;
  z_12 :
  goto s_12;
  y_26 :
  Return();
  s_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  y_8 :
  goto x_8;
  p_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_26;
  v_26 :
  TestStr(1,1,"--input",&&fail);
  Rpush(h_14);
  goto u_26;
  h_14 :
  goto a_13;
  u_26 :
  Return();
  a_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  x_8 :
  goto w_8;
  o_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_26;
  r_26 :
  TestStr(1,1,"-i",&&fail);
  Rpush(o_14);
  goto q_26;
  o_14 :
  goto k_14;
  q_26 :
  Return();
  k_14 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  w_8 :
  goto v_8;
  n_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_26;
  n_26 :
  TestStr(1,1,"@version",&&fail);
  Rpush(r_14);
  goto m_26;
  r_14 :
  goto p_14;
  m_26 :
  Return();
  p_14 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  v_8 :
  goto u_8;
  m_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_26;
  k_26 :
  TestStr(1,1,"--version",&&fail);
  Rpush(t_14);
  goto j_26;
  t_14 :
  goto s_14;
  j_26 :
  Return();
  s_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  u_8 :
  goto t_8;
  l_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_26;
  h_26 :
  TestStr(1,1,"-v",&&fail);
  Rpush(w_14);
  goto g_26;
  w_14 :
  goto v_14;
  g_26 :
  Return();
  v_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  t_8 :
  goto s_8;
  k_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_26;
  e_26 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(y_14);
  goto d_26;
  y_14 :
  goto x_14;
  d_26 :
  Return();
  x_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  s_8 :
  goto q_8;
  j_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_26;
  b_26 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(a_15);
  goto a_26;
  a_15 :
  goto z_14;
  a_26 :
  Return();
  z_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  q_8 :
  goto p_8;
  i_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_25;
  y_25 :
  TestStr(1,1,"-S",&&fail);
  Rpush(c_15);
  goto x_25;
  c_15 :
  goto b_15;
  x_25 :
  Return();
  b_15 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  p_8 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_31;
  q_31 :
  TestFunFC(o_1,&&fail,Egetd(0,1));
  Rpush(n_15);
  goto p_31;
  n_15 :
  goto d_15;
  p_31 :
  Return();
  d_15 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_13)
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(o_15);
  t_33 :
  Cpush(c_16);
  Cpush(l_16);
  Ccall(_stratego_v_13);
  goto k_16;
  l_16 :
  Cpush(t_16);
  Ccall(_stratego_u_13);
  goto r_16;
  t_16 :
  Epushd(0,5);
  MoveTop(0,1);
  goto h_32;
  h_32 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_32;
  i_32 :
  TestFunFC(f_0,&&o_17,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Cpush(q_17);
  Rpush(r_17);
  goto t_31;
  r_17 :
  goto p_17;
  q_17 :
  Ccontinue(s_17);
  Rpush(t_17);
  goto u_31;
  t_17 :
  goto p_17;
  s_17 :
  Rpush(v_17);
  goto v_31;
  v_17 :
  goto u_17;
  p_17 :
  Cpop();
  u_17 :
  goto n_17;
  o_17 :
  Rpush(n_17);
  goto u_31;
  n_17 :
  goto m_17;
  v_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto e_32;
  e_32 :
  TestStr(1,1,"-dep",&&fail);
  Rpush(a_18);
  goto d_32;
  a_18 :
  goto z_17;
  d_32 :
  Return();
  z_17 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,4);
  Tset(App1("Dependency",Egetd(0,4)));
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Cons",App1("Dependency",Egetd(0,4)),Egetd(0,5)));
  Return();
  m_17 :
  goto l_17;
  u_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto b_32;
  b_32 :
  TestStr(1,1,"-nodep",&&fail);
  Rpush(c_18);
  goto a_32;
  c_18 :
  goto b_18;
  a_32 :
  Return();
  b_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("NoDependency"));
  NotNULLd(0,3);
  Tset(App2("Cons",App0("NoDependency"),Egetd(0,3)));
  Return();
  l_17 :
  goto k_17;
  t_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto x_31;
  x_31 :
  TestStr(1,1,"-I",&&fail);
  Rpush(f_18);
  goto w_31;
  f_18 :
  goto d_18;
  w_31 :
  Return();
  d_18 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,4);
  Tset(App1("Include",Egetd(0,4)));
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Cons",App1("Include",Egetd(0,4)),Egetd(0,5)));
  Return();
  k_17 :
  Epopd(0,5);
  goto j_17;
  r_16 :
  Cpop();
  j_17 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_18);
  goto t_33;
  g_18 :
  AllBuild();
  goto m_16;
  k_16 :
  Cpop();
  m_16 :
  goto q_15;
  c_16 :
  Epushd(0,3);
  MoveTop(0,1);
  goto k_32;
  k_32 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_18);
  goto j_32;
  k_18 :
  goto j_18;
  j_32 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  j_18 :
  Epopd(0,3);
  goto h_18;
  q_15 :
  Cpop();
  h_18 :
  Return();
  o_15 :
  AllBuild();
ENDPROC

PROC(_stratego_main)
  Epushd(0,15);
  Ccall(_stratego_w_13);
  MoveTop(0,1);
  Cpush(m_18);
  Tdupl();
  n_18 :
  TestFunTop(f_0);
  Cpush(p_18);
  Arg(0);
  Cpush(j_20);
  Ccall(_stratego_t_13);
  goto i_20;
  j_20 :
  Ccontinue(k_20);
  Epushd(1,2);
  MoveTop(1,1);
  goto w_33;
  w_33 :
  TestFunFC(g_21,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(f_21);
  goto v_33;
  f_21 :
  goto e_21;
  v_33 :
  Return();
  e_21 :
  Epopd(1,2);
  goto i_20;
  k_20 :
  Ccall(_stratego_s_13);
  goto h_21;
  i_20 :
  Cpop();
  h_21 :
  Tpop();
  Cpop();
  goto p_19;
  p_18 :
  Arg(1);
  Tdrop();
  goto n_18;
  p_19 :
  Tpop();
  Ccall(_stratego_r_13);
  goto l_18;
  m_18 :
  goto i_21;
  l_18 :
  Cpop();
  i_21 :
  Rpush(j_21);
  g_49 :
  Cpush(q_21);
  Ccall(_stratego_v_13);
  goto p_21;
  q_21 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(u_21);
  Epushd(1,2);
  MoveTop(1,1);
  goto b_34;
  b_34 :
  TestFunFC(e_8,&&i_23,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(h_23);
  goto x_33;
  i_23 :
  TestFunFC(u_23,&&m_23,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(h_23);
  goto y_33;
  m_23 :
  TestFunFC(e_24,&&d_24,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(h_23);
  goto z_33;
  d_24 :
  TestFunFC(f_24,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(h_23);
  goto a_34;
  h_23 :
  goto d_23;
  a_34 :
  Move(0,5,1,2);
  Return();
  d_23 :
  goto c_23;
  z_33 :
  Move(0,4,1,2);
  Return();
  c_23 :
  goto b_22;
  y_33 :
  Move(0,3,1,2);
  Return();
  b_22 :
  goto a_22;
  x_33 :
  Move(0,2,1,2);
  Return();
  a_22 :
  Epopd(1,2);
  goto s_21;
  u_21 :
  goto o_24;
  s_21 :
  Cpop();
  o_24 :
  OneNextSon();
  Rpush(p_24);
  goto g_49;
  p_24 :
  AllBuild();
  goto r_21;
  p_21 :
  Cpop();
  r_21 :
  Return();
  j_21 :
  Rpush(z_25);
  h_49 :
  Cpush(f_26);
  Ccall(_stratego_v_13);
  goto c_26;
  f_26 :
  Ccontinue(i_26);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto d_34;
  d_34 :
  TestFunFC(p_26,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(o_26);
  goto c_34;
  o_26 :
  goto l_26;
  c_34 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  l_26 :
  Epopd(1,2);
  OneNextSon();
  Rpush(s_26);
  goto h_49;
  s_26 :
  AllBuild();
  goto c_26;
  i_26 :
  Epushd(1,3);
  MoveTop(1,1);
  goto f_34;
  f_34 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(x_26);
  goto e_34;
  x_26 :
  goto w_26;
  e_34 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(a_27);
  goto h_49;
  a_27 :
  Return();
  w_26 :
  Epopd(1,3);
  goto t_26;
  c_26 :
  Cpop();
  t_26 :
  Return();
  z_25 :
  MoveTop(0,6);
  Cpush(e_27);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  goto b_27;
  e_27 :
  Tset(App0("stdin"));
  goto f_27;
  b_27 :
  Cpop();
  f_27 :
  MoveTop(0,7);
  Cpush(l_27);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto i_27;
  l_27 :
  Tset(App0("stdout"));
  goto o_27;
  i_27 :
  Cpop();
  o_27 :
  MoveTop(0,8);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",App0("TNil"),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(0,9);
  goto x_38;
  x_38 :
  TestFunFC(q_1,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto y_38;
  y_38 :
  TestFunFC(q_1,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto z_38;
  z_38 :
  TestFunFC(q_1,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,15,0,13,1);
  goto a_39;
  a_39 :
  TestFunFC(n_0,&&fail,Egetd(0,15));
  Rpush(u_27);
  goto k_34;
  u_27 :
  goto r_27;
  k_34 :
  Epushd(1,5);
  NotNULLd(0,10);
  NotNULLd(0,12);
  NotNULLd(0,14);
  Tset(App2("TCons",App2("Cons",Egetd(0,10),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,10),App0("Nil")),App2("TCons",Egetd(0,12),App2("TCons",Egetd(0,14),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(d_28);
  i_49 :
  Epushd(2,13);
  MoveTop(2,1);
  goto e_37;
  e_37 :
  TestFunFC(q_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto f_37;
  f_37 :
  TestFunFC(f_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_37;
  g_37 :
  TestFunFC(q_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto h_37;
  h_37 :
  TestFunFC(q_1,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto i_37;
  i_37 :
  TestFunFC(q_1,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto j_37;
  j_37 :
  TestFunFC(q_1,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto k_37;
  k_37 :
  TestFunFC(n_0,&&fail,Egetd(2,13));
  Cpush(j_28);
  Rpush(l_28);
  goto l_34;
  l_28 :
  goto i_28;
  j_28 :
  Rpush(n_28);
  goto m_34;
  n_28 :
  goto m_28;
  i_28 :
  Cpop();
  m_28 :
  goto h_28;
  h_28 :
  goto g_28;
  m_34 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App2("TCons",Egetd(2,10),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,12)),App0("TNil")))))));
  Return();
  g_28 :
  goto e_28;
  l_34 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,8),App0("TNil"))));
  MoveTop(4,1);
  goto n_36;
  n_36 :
  TestFunFC(q_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(q_28);
  goto n_34;
  q_28 :
  goto o_28;
  n_34 :
  Epushd(5,3);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Cpush(s_28);
  Epushd(6,6);
  Ccall(_stratego_a_12);
  MoveTop(6,1);
  Tset(ATmakeString("r"));
  NotNULLd(6,1);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",ATmakeString("r"),App0("TNil"))));
  MoveTop(6,2);
  goto l_35;
  l_35 :
  TestFunFC(q_1,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto m_35;
  m_35 :
  TestFunFC(q_1,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto n_35;
  n_35 :
  TestFunFC(n_0,&&fail,Egetd(6,6));
  Rpush(v_28);
  goto r_34;
  v_28 :
  goto t_28;
  r_34 :
  Epushd(7,6);
  NotNULLd(6,3);
  NotNULLd(6,5);
  Tset(App2("Cons",Egetd(6,3),App2("Cons",ATmakeString("."),App2("Cons",Egetd(6,5),App0("Nil")))));
  Ccall(_stratego_n_13);
  MoveTop(7,1);
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  NotNULLd(0,6);
  Tset(App2("Cons",ATmakeString("."),Egetd(0,6)));
  NotNULLd(7,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(7,1),App2("TCons",App2("Cons",ATmakeString("."),Egetd(0,6)),App0("TNil"))));
  MoveTop(7,2);
  goto i_35;
  i_35 :
  TestFunFC(q_1,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto j_35;
  j_35 :
  TestFunFC(q_1,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto k_35;
  k_35 :
  TestFunFC(n_0,&&fail,Egetd(7,6));
  Rpush(x_28);
  goto w_34;
  x_28 :
  goto w_28;
  w_34 :
  Epushd(8,3);
  NotNULLd(7,5);
  Tset(Egetd(7,5));
  Rpush(y_28);
  j_49 :
  Epushd(9,3);
  MoveTop(9,1);
  goto z_34;
  z_34 :
  TestFunFC(f_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Cpush(e_29);
  Rpush(g_29);
  goto x_34;
  g_29 :
  goto d_29;
  e_29 :
  Rpush(i_29);
  goto y_34;
  i_29 :
  goto h_29;
  d_29 :
  Cpop();
  h_29 :
  goto c_29;
  c_29 :
  goto b_29;
  y_34 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(j_29);
  goto j_49;
  j_29 :
  Return();
  b_29 :
  goto a_29;
  x_34 :
  NotNULLd(9,2);
  NotNULLd(7,3);
  Tset(App2("Cons",Egetd(9,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(7,3),App0("Nil")))));
  Ccall(_stratego_n_13);
  Ccall(_stratego_i_12);
  Return();
  a_29 :
  Epopd(9,3);
  Return();
  y_28 :
  MoveTop(8,1);
  Tdupl();
  Epushd(9,3);
  Tset(App0("TNil"));
  Ccall(_stratego_w_12);
  Ccall(_stratego_v_12);
  MoveTop(9,1);
  NotNULLd(9,1);
  Tset(App2("TCons",ATmakeString("pack-stratego"),App2("TCons",Egetd(9,1),App0("TNil"))));
  Ccall(_stratego_k_12);
  MoveTop(9,2);
  Move(8,3,9,2);
  NotNULLd(8,1);
  NotNULLd(8,3);
  Tset(App2("TCons",ATmakeString("parse-mod"),App2("TCons",App2("Cons",ATmakeString("-silent"),App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(8,3),App0("Nil")))))),App0("TNil"))));
  Ccall(_stratego_j_12);
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Ccall(_stratego_h_12);
  MoveTop(9,3);
  Move(8,2,9,3);
  NotNULLd(8,3);
  Tset(App2("Cons",Egetd(8,3),App0("Nil")));
  Tdupl();
  NotNULLd(8,3);
  Tset(App2("TCons",ATmakeString("rm"),App2("TCons",App2("Cons",ATmakeString("-f"),App2("Cons",Egetd(8,3),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_j_12);
  Tpop();
  Epopd(9,3);
  Tpop();
  NotNULLd(8,2);
  Tset(Egetd(8,2));
  NotNULLd(8,1);
  NotNULLd(8,2);
  Tset(App2("TCons",Egetd(8,1),App2("TCons",Egetd(8,2),App0("TNil"))));
  Epopd(8,3);
  Return();
  w_28 :
  Epopd(7,6);
  Return();
  t_28 :
  Epopd(6,6);
  goto r_28;
  s_28 :
  Ccontinue(k_29);
  Epushd(6,6);
  Ccall(_stratego_a_12);
  MoveTop(6,1);
  Tset(ATmakeString("tree"));
  NotNULLd(6,1);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",ATmakeString("tree"),App0("TNil"))));
  MoveTop(6,2);
  goto g_36;
  g_36 :
  TestFunFC(q_1,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto h_36;
  h_36 :
  TestFunFC(q_1,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto i_36;
  i_36 :
  TestFunFC(n_0,&&fail,Egetd(6,6));
  Rpush(m_29);
  goto r_35;
  m_29 :
  goto l_29;
  r_35 :
  Epushd(7,6);
  NotNULLd(6,3);
  NotNULLd(6,5);
  Tset(App2("Cons",Egetd(6,3),App2("Cons",ATmakeString("."),App2("Cons",Egetd(6,5),App0("Nil")))));
  Ccall(_stratego_n_13);
  MoveTop(7,1);
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  NotNULLd(0,6);
  Tset(App2("Cons",ATmakeString("."),Egetd(0,6)));
  NotNULLd(7,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(7,1),App2("TCons",App2("Cons",ATmakeString("."),Egetd(0,6)),App0("TNil"))));
  MoveTop(7,2);
  goto d_36;
  d_36 :
  TestFunFC(q_1,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto e_36;
  e_36 :
  TestFunFC(q_1,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto f_36;
  f_36 :
  TestFunFC(n_0,&&fail,Egetd(7,6));
  Rpush(p_29);
  goto w_35;
  p_29 :
  goto o_29;
  w_35 :
  Epushd(8,2);
  NotNULLd(7,5);
  Tset(Egetd(7,5));
  Rpush(q_29);
  k_49 :
  Epushd(9,3);
  MoveTop(9,1);
  goto z_35;
  z_35 :
  TestFunFC(f_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Cpush(w_29);
  Rpush(x_29);
  goto x_35;
  x_29 :
  goto u_29;
  w_29 :
  Rpush(z_29);
  goto y_35;
  z_29 :
  goto y_29;
  u_29 :
  Cpop();
  y_29 :
  goto t_29;
  t_29 :
  goto s_29;
  y_35 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(a_30);
  goto k_49;
  a_30 :
  Return();
  s_29 :
  goto r_29;
  x_35 :
  NotNULLd(9,2);
  NotNULLd(7,3);
  Tset(App2("Cons",Egetd(9,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(7,3),App0("Nil")))));
  Ccall(_stratego_n_13);
  Ccall(_stratego_i_12);
  Return();
  r_29 :
  Epopd(9,3);
  Return();
  q_29 :
  MoveTop(8,1);
  Ccall(_stratego_h_12);
  MoveTop(8,2);
  NotNULLd(8,1);
  NotNULLd(8,2);
  Tset(App2("TCons",Egetd(8,1),App2("TCons",Egetd(8,2),App0("TNil"))));
  Epopd(8,2);
  Return();
  o_29 :
  Epopd(7,6);
  Return();
  l_29 :
  Epopd(6,6);
  goto r_28;
  k_29 :
  Epushd(6,1);
  MoveTop(6,1);
  NotNULLd(6,1);
  Tset(App2("Cons",ATmakeString("module "),App2("Cons",Egetd(6,1),App2("Cons",ATmakeString(" not found"),App0("Nil")))));
  Ccall(_stratego_g_12);
  Epopd(6,1);
  goto b_30;
  r_28 :
  Cpop();
  b_30 :
  MoveTop(5,1);
  Move(3,1,5,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Ccall(_stratego_e_12);
  MoveTop(5,2);
  Move(3,2,5,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(2,6),App0("TNil"))));
  Ccall(_stratego_y_12);
  MoveTop(5,3);
  Move(3,3,5,3);
  Epopd(5,3);
  Return();
  o_28 :
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,4),App0("TNil"))));
  MoveTop(3,4);
  goto b_37;
  b_37 :
  TestFunFC(q_1,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto c_37;
  c_37 :
  TestFunFC(q_1,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto d_37;
  d_37 :
  TestFunFC(n_0,&&fail,Egetd(3,8));
  Rpush(e_30);
  goto o_36;
  e_30 :
  goto c_30;
  o_36 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(f_30);
  l_49 :
  Cpush(h_30);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_30);
  goto l_49;
  i_30 :
  AllBuild();
  goto g_30;
  h_30 :
  Ccall(_stratego_v_13);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto j_30;
  g_30 :
  Cpop();
  j_30 :
  Return();
  f_30 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,6),App0("TNil"))));
  MoveTop(4,2);
  goto y_36;
  y_36 :
  TestFunFC(q_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto z_36;
  z_36 :
  TestFunFC(q_1,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto a_37;
  a_37 :
  TestFunFC(n_0,&&fail,Egetd(4,6));
  Rpush(m_30);
  goto q_36;
  m_30 :
  goto k_30;
  q_36 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(n_30);
  m_49 :
  Cpush(p_30);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_30);
  goto m_49;
  q_30 :
  AllBuild();
  goto o_30;
  p_30 :
  Ccall(_stratego_v_13);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto r_30;
  o_30 :
  Cpop();
  r_30 :
  Return();
  n_30 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil")))));
  MoveTop(5,2);
  goto u_36;
  u_36 :
  TestFunFC(q_1,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto v_36;
  v_36 :
  TestFunFC(q_1,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto w_36;
  w_36 :
  TestFunFC(q_1,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto x_36;
  x_36 :
  TestFunFC(n_0,&&fail,Egetd(5,8));
  Rpush(u_30);
  goto s_36;
  u_30 :
  goto t_30;
  s_36 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("Cons",Egetd(5,5),Egetd(5,7)));
  NotNULLd(4,1);
  NotNULLd(5,1);
  NotNULLd(2,8);
  NotNULLd(5,5);
  NotNULLd(5,7);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(5,1),App2("TCons",Egetd(2,8),App2("TCons",App2("Cons",Egetd(5,5),Egetd(5,7)),App2("TCons",Egetd(2,12),App0("TNil")))))));
  Return();
  t_30 :
  Epopd(5,8);
  Return();
  k_30 :
  Epopd(4,6);
  Return();
  c_30 :
  Epopd(3,8);
  Return();
  e_28 :
  Cpush(w_30);
  Epushd(3,11);
  MoveTop(3,1);
  goto m_37;
  m_37 :
  TestFunFC(q_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto n_37;
  n_37 :
  TestFunFC(o_1,&&fail,Egetd(3,2));
  goto o_37;
  o_37 :
  TestFunFC(q_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto p_37;
  p_37 :
  TestFunFC(q_1,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto q_37;
  q_37 :
  TestFunFC(q_1,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto r_37;
  r_37 :
  TestFunFC(q_1,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto s_37;
  s_37 :
  TestFunFC(n_0,&&fail,Egetd(3,11));
  Rpush(z_30);
  goto l_37;
  z_30 :
  goto y_30;
  l_37 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App0("TNil"))));
  Return();
  y_30 :
  Epopd(3,11);
  goto v_30;
  w_30 :
  Rpush(b_31);
  goto i_49;
  b_31 :
  goto a_31;
  v_30 :
  Cpop();
  a_31 :
  Epopd(2,13);
  Return();
  d_28 :
  MoveTop(1,1);
  goto u_38;
  u_38 :
  TestFunFC(q_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_38;
  v_38 :
  TestFunFC(q_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_38;
  w_38 :
  TestFunFC(n_0,&&fail,Egetd(1,5));
  Rpush(d_31);
  goto t_37;
  d_31 :
  goto y_27;
  t_37 :
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_d_12);
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_12);
  OneNextSon();
  Ccall(_stratego_b_12);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto r_38;
  r_38 :
  TestFunFC(q_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto s_38;
  s_38 :
  TestFunFC(q_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_38;
  t_38 :
  TestFunFC(n_0,&&fail,Egetd(2,5));
  Rpush(f_31);
  goto u_37;
  f_31 :
  goto e_31;
  u_37 :
  Epushd(3,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(i_31);
  Rpush(j_31);
  n_49 :
  Cpush(l_31);
  Epushd(4,3);
  MoveTop(4,1);
  goto w_37;
  w_37 :
  TestFunFC(f_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto x_37;
  x_37 :
  TestFunFC(s_31,&&fail,Egetd(4,2));
  Rpush(o_31);
  goto v_37;
  o_31 :
  goto n_31;
  v_37 :
  Return();
  n_31 :
  Epopd(4,3);
  goto k_31;
  l_31 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_31);
  goto n_49;
  z_31 :
  AllBuild();
  goto y_31;
  k_31 :
  Cpop();
  y_31 :
  Return();
  j_31 :
  NotNULLd(0,8);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_p_13);
  goto g_31;
  i_31 :
  NotNULLd(0,8);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_o_13);
  goto c_32;
  g_31 :
  Cpop();
  c_32 :
  Cpush(g_32);
  Epushd(4,6);
  Cpush(s_32);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  goto m_32;
  s_32 :
  Cpush(u_32);
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(w_32);
  o_49 :
  Cpush(y_32);
  Epushd(5,3);
  MoveTop(5,1);
  goto z_37;
  z_37 :
  TestFunFC(f_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto a_38;
  a_38 :
  TestFunFC(b_33,&&fail,Egetd(5,2));
  Rpush(a_33);
  goto y_37;
  a_33 :
  goto z_32;
  y_37 :
  Return();
  z_32 :
  Epopd(5,3);
  goto x_32;
  y_32 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_33);
  goto o_49;
  e_33 :
  AllBuild();
  goto c_33;
  x_32 :
  Cpop();
  c_33 :
  Return();
  w_32 :
  Cpop();
  Crestore();
  Cjump();
  u_32 :
  Ccall(_stratego_a_12);
  goto t_32;
  m_32 :
  Cpop();
  t_32 :
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(0,8);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(4,2);
  goto n_38;
  n_38 :
  TestFunFC(q_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto o_38;
  o_38 :
  TestFunFC(q_1,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto p_38;
  p_38 :
  TestFunFC(n_0,&&fail,Egetd(4,6));
  Rpush(g_33);
  goto c_38;
  g_33 :
  goto f_33;
  c_38 :
  Epushd(5,2);
  Tdupl();
  Epushd(6,5);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Move(5,2,3,1);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",ATmakeString("dep"),App0("TNil"))));
  MoveTop(6,1);
  goto k_38;
  k_38 :
  TestFunFC(q_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto l_38;
  l_38 :
  TestFunFC(q_1,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto m_38;
  m_38 :
  TestFunFC(n_0,&&fail,Egetd(6,5));
  Rpush(i_33);
  goto e_38;
  i_33 :
  goto h_33;
  e_38 :
  Epushd(7,2);
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),App2("Cons",ATmakeString("."),App2("Cons",Egetd(6,4),App0("Nil")))));
  Ccall(_stratego_n_13);
  Ccall(_stratego_j_13);
  MoveTop(7,1);
  Move(5,1,7,1);
  NotNULLd(5,2);
  NotNULLd(4,5);
  Tset(App2("Cons",Egetd(5,2),App2("Cons",ATmakeString(":"),Egetd(4,5))));
  Cpush(l_33);
  Ccall(_stratego_v_13);
  goto k_33;
  l_33 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_33);
  p_49 :
  Cpush(s_33);
  Ccall(_stratego_v_13);
  goto r_33;
  s_33 :
  Epushd(8,3);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_34);
  goto p_49;
  h_34 :
  AllBuild();
  MoveTop(8,1);
  goto i_38;
  i_38 :
  TestFunFC(f_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(i_34);
  goto g_38;
  i_34 :
  goto g_34;
  g_38 :
  Tset(ATmakeString(" "));
  NotNULLd(8,2);
  NotNULLd(8,3);
  Tset(App2("Cons",ATmakeString(" "),App2("Cons",Egetd(8,2),Egetd(8,3))));
  Return();
  g_34 :
  Epopd(8,3);
  goto u_33;
  r_33 :
  Cpop();
  u_33 :
  Return();
  n_33 :
  AllBuild();
  goto m_33;
  k_33 :
  Cpop();
  m_33 :
  MoveTop(7,2);
  NotNULLd(5,1);
  NotNULLd(7,2);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(7,2),App0("TNil"))));
  Ccall(_stratego_h_13);
  Epopd(7,2);
  Return();
  h_33 :
  Epopd(6,5);
  Tpop();
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,5),App0("TNil"))));
  Epopd(5,2);
  Return();
  f_33 :
  Epopd(4,6);
  goto f_32;
  g_32 :
  goto j_34;
  f_32 :
  Cpop();
  j_34 :
  Ccall(_stratego_i_13);
  MoveTop(3,2);
  NotNULLd(0,2);
  NotNULLd(3,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(3,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_h_13);
  Epopd(3,2);
  Return();
  e_31 :
  Epopd(2,5);
  Return();
  y_27 :
  Epopd(1,5);
  Return();
  r_27 :
  Epopd(0,15);
ENDPROC

DOIT

