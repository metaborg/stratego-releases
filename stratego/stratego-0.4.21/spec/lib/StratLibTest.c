#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,l_28);
VARDECL(AFun,m_27);
VARDECL(AFun,e_24);
VARDECL(AFun,b_24);
VARDECL(AFun,x_17);
VARDECL(AFun,g_1);
VARDECL(AFun,f_1);
VARDECL(AFun,y_0);
VARDECL(AFun,v_0);
VARDECL(AFun,u_0);
VARDECL(AFun,l_0);
VARDECL(AFun,k_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_f_27);
PROCDECL(_stratego_g_27);
PROCDECL(_stratego_h_27);
PROCDECL(_stratego_i_27);
PROCDECL(_stratego_j_27);
PROCDECL(_stratego_k_27);
PROCDECL(_stratego_l_27);
PROCDECL(_stratego_r_27);
PROCDECL(_stratego_s_27);
PROCDECL(_stratego_t_27);
PROCDECL(_stratego_u_27);
PROCDECL(_stratego_v_27);
PROCDECL(_stratego_w_27);
PROCDECL(_stratego_x_27);
PROCDECL(_stratego_y_27);
PROCDECL(_stratego_z_27);
PROCDECL(_stratego_a_28);
PROCDECL(_stratego_b_28);
PROCDECL(_stratego_c_28);
PROCDECL(_stratego_d_28);
PROCDECL(_stratego_e_28);
PROCDECL(_stratego_f_28);
PROCDECL(_stratego_g_28);

PROC(_stratego_init_afuns)
  MOVE(l_28,ATmakeAFun("Rule",3,0));
  MOVE(m_27,ATmakeAFun("LRule",1,0));
  MOVE(e_24,ATmakeAFun("Scope",2,0));
  MOVE(b_24,ATmakeAFun("Var",1,0));
  MOVE(x_17,ATmakeAFun("Nil",0,0));
  MOVE(g_1,ATmakeAFun("TNil",0,0));
  MOVE(f_1,ATmakeAFun("TCons",2,0));
  MOVE(y_0,ATmakeAFun("Rec",2,0));
  MOVE(v_0,ATmakeAFun("SDef",3,0));
  MOVE(u_0,ATmakeAFun("Let",2,0));
  MOVE(l_0,ATmakeAFun("SVar",1,0));
  MOVE(k_0,ATmakeAFun("Call",2,0));
  MOVE(c_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_f_27);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_27);
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_27);
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_27);
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_28);
  OneNextSon();
  Ccall(_stratego_g_28);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_g_27);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_h_27);
  goto d_0;
  a_0 :
  Cpop();
  d_0 :
ENDPROC

PROC(_stratego_f_27)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_g_27)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_h_27)
  Tdupl();
  Ccall(_stratego_i_27);
  Tset(MakeInt(1));
  Ccall(_stratego_k_27);
  Tpop();
ENDPROC

PROC(_stratego_i_27)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_j_27);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_j_27)
  _ST_printnl();
ENDPROC

PROC(_stratego_k_27)
  _ST_exit();
ENDPROC

PROC(_stratego_l_27)
  Ccall(_stratego_r_27);
ENDPROC

PROC(_stratego_r_27)
  Rpush(e_0);
  i_19 :
  Epushd(0,8);
  MoveTop(0,1);
  Cpush(g_0);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_1;
  i_1 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_1;
  j_1 :
  TestFunFC(l_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_0);
  goto k_19;
  i_0 :
  goto h_0;
  k_19 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_s_27);
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  Tset(App2("Cons",App2("TCons",Egetd(1,3),App2("TCons",Egetd(2,1),App0("TNil"))),App0("Nil")));
  Epopd(2,1);
  Return();
  h_0 :
  Epopd(1,4);
  goto f_0;
  g_0 :
  Tset(App0("Nil"));
  goto m_0;
  f_0 :
  Cpop();
  m_0 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(o_0);
  Epushd(1,3);
  Tdupl();
  Epushd(2,8);
  MoveTop(2,5);
  goto o_1;
  o_1 :
  TestFunFC(u_0,&&t_0,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_1;
  p_1 :
  TestFunFC(v_0,&&fail,Egetd(2,6));
  MoveArg(2,1,2,6,0);
  MoveArg(2,2,2,6,1);
  MoveArg(2,3,2,6,2);
  Rpush(s_0);
  goto n_19;
  t_0 :
  TestFunFC(v_0,&&x_0,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  MoveArg(2,4,2,5,2);
  Rpush(s_0);
  goto o_19;
  x_0 :
  TestFunFC(y_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  Rpush(s_0);
  goto p_19;
  s_0 :
  goto r_0;
  p_19 :
  NotNULLd(2,6);
  Tset(App2("Cons",Egetd(2,6),App0("Nil")));
  Return();
  r_0 :
  goto q_0;
  o_19 :
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Return();
  q_0 :
  goto p_0;
  n_19 :
  NotNULLd(2,1);
  Tset(App2("Cons",Egetd(2,1),App0("Nil")));
  Return();
  p_0 :
  MoveTop(2,8);
  Move(1,1,2,8);
  Epopd(2,8);
  Tpop();
  Cpush(a_1);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Rpush(b_1);
  goto i_19;
  b_1 :
  AllBuild();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(c_1);
  goto i_19;
  c_1 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto f_2;
  f_2 :
  TestFunFC(f_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto g_2;
  g_2 :
  TestFunFC(f_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto h_2;
  h_2 :
  TestFunFC(g_1,&&fail,Egetd(2,7));
  Rpush(e_1);
  goto u_19;
  e_1 :
  goto d_1;
  u_19 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(h_1);
  v_19 :
  Cpush(l_1);
  Ccall(_stratego_g_28);
  goto k_1;
  l_1 :
  Ccontinue(m_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto e_2;
  e_2 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(q_1);
  goto w_19;
  q_1 :
  goto n_1;
  w_19 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(r_1);
  x_19 :
  Cpush(t_1);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto y_1;
  y_1 :
  TestFunFC(f_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto z_1;
  z_1 :
  TestFunFC(f_1,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto a_2;
  a_2 :
  TestFunFC(f_1,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto b_2;
  b_2 :
  TestFunFC(g_1,&&fail,Egetd(4,7));
  goto c_2;
  c_2 :
  TestFunFC(f_1,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto d_2;
  d_2 :
  TestFunFC(g_1,&&fail,Egetd(4,10));
  Rpush(v_1);
  goto z_19;
  v_1 :
  goto u_1;
  z_19 :
  Move(4,4,4,9);
  Return();
  u_1 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto s_1;
  t_1 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_1);
  goto x_19;
  x_1 :
  AllBuild();
  goto w_1;
  s_1 :
  Cpop();
  w_1 :
  Return();
  r_1 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(i_2);
  goto v_19;
  i_2 :
  Return();
  n_1 :
  Epopd(3,3);
  goto k_1;
  m_1 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_2);
  goto v_19;
  k_2 :
  AllBuild();
  goto j_2;
  k_1 :
  Cpop();
  j_2 :
  Return();
  h_1 :
  Return();
  d_1 :
  Epopd(2,7);
  AllBuild();
  goto z_0;
  a_1 :
  Ccontinue(l_2);
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(m_2);
  goto i_19;
  m_2 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto a_3;
  a_3 :
  TestFunFC(f_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_3;
  b_3 :
  TestFunFC(f_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto c_3;
  c_3 :
  TestFunFC(g_1,&&fail,Egetd(2,7));
  Rpush(o_2);
  goto d_20;
  o_2 :
  goto n_2;
  d_20 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(r_2);
  e_20 :
  Cpush(t_2);
  Ccall(_stratego_g_28);
  goto s_2;
  t_2 :
  Ccontinue(u_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto z_2;
  z_2 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(e_3);
  goto f_20;
  e_3 :
  goto d_3;
  f_20 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(f_3);
  g_20 :
  Cpush(h_3);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto p_2;
  p_2 :
  TestFunFC(f_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto q_2;
  q_2 :
  TestFunFC(f_1,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto v_2;
  v_2 :
  TestFunFC(f_1,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto w_2;
  w_2 :
  TestFunFC(g_1,&&fail,Egetd(4,7));
  goto x_2;
  x_2 :
  TestFunFC(f_1,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto y_2;
  y_2 :
  TestFunFC(g_1,&&fail,Egetd(4,10));
  Rpush(j_3);
  goto i_20;
  j_3 :
  goto i_3;
  i_20 :
  Move(4,4,4,9);
  Return();
  i_3 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto g_3;
  h_3 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_3);
  goto g_20;
  v_3 :
  AllBuild();
  goto u_3;
  g_3 :
  Cpop();
  u_3 :
  Return();
  f_3 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(z_3);
  goto e_20;
  z_3 :
  Return();
  d_3 :
  Epopd(3,3);
  goto s_2;
  u_2 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_4);
  goto e_20;
  b_4 :
  AllBuild();
  goto a_4;
  s_2 :
  Cpop();
  a_4 :
  Return();
  r_2 :
  Return();
  n_2 :
  Epopd(2,7);
  AllBuild();
  goto z_0;
  l_2 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(d_4);
  goto i_19;
  d_4 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto r_3;
  r_3 :
  TestFunFC(f_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_3;
  s_3 :
  TestFunFC(f_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto t_3;
  t_3 :
  TestFunFC(g_1,&&fail,Egetd(2,7));
  Rpush(l_4);
  goto m_20;
  l_4 :
  goto e_4;
  m_20 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(m_4);
  n_20 :
  Cpush(r_4);
  Ccall(_stratego_g_28);
  goto q_4;
  r_4 :
  Ccontinue(s_4);
  Epushd(3,3);
  MoveTop(3,1);
  goto q_3;
  q_3 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(u_4);
  goto o_20;
  u_4 :
  goto t_4;
  o_20 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(v_4);
  p_20 :
  Cpush(d_5);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto k_3;
  k_3 :
  TestFunFC(f_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto l_3;
  l_3 :
  TestFunFC(f_1,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto m_3;
  m_3 :
  TestFunFC(f_1,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto n_3;
  n_3 :
  TestFunFC(g_1,&&fail,Egetd(4,7));
  goto o_3;
  o_3 :
  TestFunFC(f_1,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto p_3;
  p_3 :
  TestFunFC(g_1,&&fail,Egetd(4,10));
  Rpush(f_5);
  goto r_20;
  f_5 :
  goto e_5;
  r_20 :
  Move(4,4,4,9);
  Return();
  e_5 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto c_5;
  d_5 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_5);
  goto p_20;
  r_5 :
  AllBuild();
  goto m_5;
  c_5 :
  Cpop();
  m_5 :
  Return();
  v_4 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(s_5);
  goto n_20;
  s_5 :
  Return();
  t_4 :
  Epopd(3,3);
  goto q_4;
  s_4 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_5);
  goto n_20;
  w_5 :
  AllBuild();
  goto u_5;
  q_4 :
  Cpop();
  u_5 :
  Return();
  m_4 :
  Return();
  e_4 :
  Epopd(2,7);
  AllBuild();
  goto c_4;
  z_0 :
  Cpop();
  c_4 :
  MoveTop(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto w_3;
  w_3 :
  TestFunFC(f_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto x_3;
  x_3 :
  TestFunFC(f_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto y_3;
  y_3 :
  TestFunFC(g_1,&&fail,Egetd(2,5));
  Rpush(g_6);
  goto t_20;
  g_6 :
  goto f_6;
  t_20 :
  Move(1,3,2,4);
  Return();
  f_6 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(h_6);
  u_20 :
  Cpush(j_6);
  Ccall(_stratego_g_28);
  Tset(App0("Nil"));
  goto i_6;
  j_6 :
  Epushd(2,3);
  MoveTop(2,1);
  goto k_4;
  k_4 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(m_6);
  goto v_20;
  m_6 :
  goto l_6;
  v_20 :
  Epushd(3,6);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(n_6);
  goto u_20;
  n_6 :
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(3,2);
  goto h_4;
  h_4 :
  TestFunFC(f_1,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto i_4;
  i_4 :
  TestFunFC(f_1,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto j_4;
  j_4 :
  TestFunFC(g_1,&&fail,Egetd(3,6));
  Rpush(s_6);
  goto y_20;
  s_6 :
  goto q_6;
  y_20 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(t_6);
  z_20 :
  Cpush(a_7);
  Ccall(_stratego_g_28);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  goto u_6;
  a_7 :
  Ccontinue(b_7);
  Epushd(4,3);
  MoveTop(4,1);
  goto g_4;
  g_4 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(g_7);
  goto a_21;
  g_7 :
  goto f_7;
  a_21 :
  Tdupl();
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(i_7);
  b_21 :
  Cpush(k_7);
  Epushd(5,3);
  MoveTop(5,1);
  goto f_4;
  f_4 :
  TestFunFC(c_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(v_7);
  goto c_21;
  v_7 :
  goto u_7;
  c_21 :
  Move(4,2,5,2);
  Return();
  u_7 :
  Epopd(5,3);
  goto j_7;
  k_7 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_7);
  goto b_21;
  x_7 :
  AllBuild();
  goto w_7;
  j_7 :
  Cpop();
  w_7 :
  Return();
  i_7 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(y_7);
  goto z_20;
  y_7 :
  Return();
  f_7 :
  Epopd(4,3);
  goto u_6;
  b_7 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_8);
  goto z_20;
  a_8 :
  AllBuild();
  goto z_7;
  u_6 :
  Cpop();
  z_7 :
  Return();
  t_6 :
  Return();
  q_6 :
  Epopd(3,6);
  Return();
  l_6 :
  Epopd(2,3);
  goto k_6;
  i_6 :
  Cpop();
  k_6 :
  Return();
  h_6 :
  Epopd(1,3);
  goto n_0;
  o_0 :
  Epushd(1,2);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  _ST_explode_term();
  MoveTop(2,1);
  goto n_4;
  n_4 :
  TestFunFC(f_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_4;
  o_4 :
  TestFunFC(f_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_4;
  p_4 :
  TestFunFC(g_1,&&fail,Egetd(2,5));
  Rpush(d_8);
  goto e_21;
  d_8 :
  goto c_8;
  e_21 :
  Move(1,2,2,4);
  Return();
  c_8 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(e_8);
  f_21 :
  Cpush(g_8);
  Ccall(_stratego_g_28);
  Tset(App0("Nil"));
  goto f_8;
  g_8 :
  Epushd(2,3);
  MoveTop(2,1);
  goto b_5;
  b_5 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(j_8);
  goto g_21;
  j_8 :
  goto i_8;
  g_21 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(k_8);
  goto i_19;
  k_8 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(l_8);
  goto f_21;
  l_8 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto y_4;
  y_4 :
  TestFunFC(f_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_4;
  z_4 :
  TestFunFC(f_1,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto a_5;
  a_5 :
  TestFunFC(g_1,&&fail,Egetd(3,7));
  Rpush(n_8);
  goto j_21;
  n_8 :
  goto m_8;
  j_21 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(o_8);
  k_21 :
  Cpush(s_8);
  Ccall(_stratego_g_28);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto q_8;
  s_8 :
  Ccontinue(t_8);
  Epushd(4,3);
  MoveTop(4,1);
  goto x_4;
  x_4 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(v_8);
  goto l_21;
  v_8 :
  goto u_8;
  l_21 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(w_8);
  m_21 :
  Cpush(y_8);
  Epushd(5,3);
  MoveTop(5,1);
  goto w_4;
  w_4 :
  TestFunFC(c_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(a_9);
  goto n_21;
  a_9 :
  goto z_8;
  n_21 :
  Move(4,2,5,2);
  Return();
  z_8 :
  Epopd(5,3);
  goto x_8;
  y_8 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_9);
  goto m_21;
  c_9 :
  AllBuild();
  goto b_9;
  x_8 :
  Cpop();
  b_9 :
  Return();
  w_8 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(d_9);
  goto k_21;
  d_9 :
  Return();
  u_8 :
  Epopd(4,3);
  goto q_8;
  t_8 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_9);
  goto k_21;
  f_9 :
  AllBuild();
  goto e_9;
  q_8 :
  Cpop();
  e_9 :
  Return();
  o_8 :
  Return();
  m_8 :
  Epopd(3,7);
  Return();
  i_8 :
  Epopd(2,3);
  goto h_8;
  f_8 :
  Cpop();
  h_8 :
  Return();
  e_8 :
  Epopd(1,2);
  goto b_8;
  n_0 :
  Cpop();
  b_8 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  MoveTop(0,4);
  goto i_5;
  i_5 :
  TestFunFC(f_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto j_5;
  j_5 :
  TestFunFC(f_1,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto k_5;
  k_5 :
  TestFunFC(g_1,&&fail,Egetd(0,8));
  Rpush(h_9);
  goto p_21;
  h_9 :
  goto g_9;
  p_21 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(i_9);
  q_21 :
  Cpush(k_9);
  Ccall(_stratego_g_28);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  goto j_9;
  k_9 :
  Ccontinue(l_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto h_5;
  h_5 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(n_9);
  goto r_21;
  n_9 :
  goto m_9;
  r_21 :
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(o_9);
  s_21 :
  Cpush(q_9);
  Epushd(2,3);
  MoveTop(2,1);
  goto g_5;
  g_5 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(s_9);
  goto t_21;
  s_9 :
  goto r_9;
  t_21 :
  Move(1,2,2,2);
  Return();
  r_9 :
  Epopd(2,3);
  goto p_9;
  q_9 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_9);
  goto s_21;
  u_9 :
  AllBuild();
  goto t_9;
  p_9 :
  Cpop();
  t_9 :
  Return();
  o_9 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(v_9);
  goto q_21;
  v_9 :
  Return();
  m_9 :
  Epopd(1,3);
  goto j_9;
  l_9 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_9);
  goto q_21;
  x_9 :
  AllBuild();
  goto w_9;
  j_9 :
  Cpop();
  w_9 :
  Return();
  i_9 :
  Return();
  g_9 :
  Epopd(0,8);
  Return();
  e_0 :
ENDPROC

PROC(_stratego_s_27)
  Rpush(y_9);
  h_24 :
  Cpush(a_10);
  Ccall(_stratego_g_28);
  Tset(MakeInt(0));
  goto z_9;
  a_10 :
  Epushd(0,3);
  MoveTop(0,1);
  goto x_21;
  x_21 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_10);
  goto i_24;
  d_10 :
  goto c_10;
  i_24 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(e_10);
  goto h_24;
  e_10 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_t_27);
  Epopd(1,1);
  Return();
  c_10 :
  Epopd(0,3);
  goto b_10;
  z_9 :
  Cpop();
  b_10 :
  Return();
  y_9 :
ENDPROC

PROC(_stratego_t_27)
  _ST_add();
ENDPROC

PROC(_stratego_u_27)
  Ccall(_stratego_v_27);
ENDPROC

PROC(_stratego_v_27)
  Rpush(f_10);
  k_32 :
  Cpush(h_10);
  Epushd(0,2);
  MoveTop(0,1);
  goto l_24;
  l_24 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(j_10);
  goto l_32;
  j_10 :
  goto i_10;
  l_32 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  i_10 :
  Epopd(0,2);
  goto g_10;
  h_10 :
  Ccontinue(k_10);
  Epushd(0,3);
  Tdupl();
  Epushd(1,8);
  MoveTop(1,5);
  goto s_24;
  s_24 :
  TestFunFC(u_0,&&p_10,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto t_24;
  t_24 :
  TestFunFC(v_0,&&fail,Egetd(1,6));
  MoveArg(1,1,1,6,0);
  MoveArg(1,2,1,6,1);
  MoveArg(1,3,1,6,2);
  Rpush(o_10);
  goto m_32;
  p_10 :
  TestFunFC(v_0,&&u_10,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  MoveArg(1,4,1,5,2);
  Rpush(o_10);
  goto n_32;
  u_10 :
  TestFunFC(y_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  Rpush(o_10);
  goto o_32;
  o_10 :
  goto n_10;
  o_32 :
  NotNULLd(1,6);
  Tset(App2("Cons",Egetd(1,6),App0("Nil")));
  Return();
  n_10 :
  goto m_10;
  n_32 :
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  Return();
  m_10 :
  goto l_10;
  m_32 :
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Return();
  l_10 :
  MoveTop(1,8);
  Move(0,1,1,8);
  Epopd(1,8);
  Tpop();
  Cpush(w_10);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Rpush(x_10);
  goto k_32;
  x_10 :
  AllBuild();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(y_10);
  goto k_32;
  y_10 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_w_27);
  Epopd(1,2);
  AllBuild();
  goto v_10;
  w_10 :
  Ccontinue(z_10);
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(a_11);
  goto k_32;
  a_11 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_w_27);
  Epopd(1,2);
  AllBuild();
  goto v_10;
  z_10 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(c_11);
  goto k_32;
  c_11 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_w_27);
  Epopd(1,2);
  AllBuild();
  goto b_11;
  v_10 :
  Cpop();
  b_11 :
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto t_25;
  t_25 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_25;
  u_25 :
  TestFunFC(f_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto v_25;
  v_25 :
  TestFunFC(g_1,&&fail,Egetd(1,5));
  Rpush(e_11);
  goto a_33;
  e_11 :
  goto d_11;
  a_33 :
  Move(0,3,1,4);
  Return();
  d_11 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(f_11);
  b_33 :
  Cpush(h_11);
  Ccall(_stratego_g_28);
  Tset(App0("Nil"));
  goto g_11;
  h_11 :
  Epushd(1,3);
  MoveTop(1,1);
  goto j_26;
  j_26 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(l_11);
  goto c_33;
  l_11 :
  goto j_11;
  c_33 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(m_11);
  goto b_33;
  m_11 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto e_26;
  e_26 :
  TestFunFC(f_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_26;
  h_26 :
  TestFunFC(f_1,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto i_26;
  i_26 :
  TestFunFC(g_1,&&fail,Egetd(2,6));
  Rpush(r_11);
  goto f_33;
  r_11 :
  goto q_11;
  f_33 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(t_11);
  g_33 :
  Cpush(x_11);
  Ccall(_stratego_g_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto w_11;
  x_11 :
  Ccontinue(y_11);
  Epushd(3,3);
  MoveTop(3,1);
  goto d_26;
  d_26 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(a_12);
  goto h_33;
  a_12 :
  goto z_11;
  h_33 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(b_12);
  i_33 :
  Cpush(e_12);
  Epushd(4,3);
  MoveTop(4,1);
  goto c_26;
  c_26 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(g_12);
  goto j_33;
  g_12 :
  goto f_12;
  j_33 :
  Move(3,2,4,2);
  Return();
  f_12 :
  Epopd(4,3);
  goto c_12;
  e_12 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_12);
  goto i_33;
  i_12 :
  AllBuild();
  goto h_12;
  c_12 :
  Cpop();
  h_12 :
  Return();
  b_12 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(p_12);
  goto g_33;
  p_12 :
  Return();
  z_11 :
  Epopd(3,3);
  goto w_11;
  y_11 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_12);
  goto g_33;
  s_12 :
  AllBuild();
  goto r_12;
  w_11 :
  Cpop();
  r_12 :
  Return();
  t_11 :
  Return();
  q_11 :
  Epopd(2,6);
  Return();
  j_11 :
  Epopd(1,3);
  goto i_11;
  g_11 :
  Cpop();
  i_11 :
  Return();
  f_11 :
  Epopd(0,3);
  goto g_10;
  k_10 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto m_26;
  m_26 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_26;
  r_26 :
  TestFunFC(f_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto s_26;
  s_26 :
  TestFunFC(g_1,&&fail,Egetd(1,5));
  Rpush(v_12);
  goto l_33;
  v_12 :
  goto u_12;
  l_33 :
  Move(0,2,1,4);
  Return();
  u_12 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(w_12);
  m_33 :
  Cpush(y_12);
  Ccall(_stratego_g_28);
  Tset(App0("Nil"));
  goto x_12;
  y_12 :
  Epushd(1,3);
  MoveTop(1,1);
  goto i_28;
  i_28 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(c_13);
  goto n_33;
  c_13 :
  goto b_13;
  n_33 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(d_13);
  goto k_32;
  d_13 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(j_13);
  goto m_33;
  j_13 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto p_27;
  p_27 :
  TestFunFC(f_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_27;
  q_27 :
  TestFunFC(f_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto h_28;
  h_28 :
  TestFunFC(g_1,&&fail,Egetd(2,7));
  Rpush(m_13);
  goto q_33;
  m_13 :
  goto k_13;
  q_33 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(n_13);
  r_33 :
  Cpush(r_13);
  Ccall(_stratego_g_28);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto o_13;
  r_13 :
  Ccontinue(s_13);
  Epushd(3,3);
  MoveTop(3,1);
  goto o_27;
  o_27 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(u_13);
  goto s_33;
  u_13 :
  goto t_13;
  s_33 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(v_13);
  t_33 :
  Cpush(b_14);
  Epushd(4,3);
  MoveTop(4,1);
  goto n_27;
  n_27 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(j_14);
  goto u_33;
  j_14 :
  goto c_14;
  u_33 :
  Move(3,2,4,2);
  Return();
  c_14 :
  Epopd(4,3);
  goto x_13;
  b_14 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_14);
  goto t_33;
  l_14 :
  AllBuild();
  goto k_14;
  x_13 :
  Cpop();
  k_14 :
  Return();
  v_13 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(m_14);
  goto r_33;
  m_14 :
  Return();
  t_13 :
  Epopd(3,3);
  goto o_13;
  s_13 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_14);
  goto r_33;
  o_14 :
  AllBuild();
  goto n_14;
  o_13 :
  Cpop();
  n_14 :
  Return();
  n_13 :
  Return();
  k_13 :
  Epopd(2,7);
  Return();
  b_13 :
  Epopd(1,3);
  goto z_12;
  x_12 :
  Cpop();
  z_12 :
  Return();
  w_12 :
  Epopd(0,2);
  goto t_12;
  g_10 :
  Cpop();
  t_12 :
  Return();
  f_10 :
ENDPROC

PROC(_stratego_w_27)
  Epushd(0,5);
  MoveTop(0,5);
  goto l_34;
  l_34 :
  TestFunFC(f_1,&&s_14,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto m_34;
  m_34 :
  TestFunFC(f_1,&&t_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto n_34;
  n_34 :
  TestFunFC(g_1,&&u_14,Egetd(0,4));
  Cpush(a_15);
  Rpush(b_15);
  goto x_35;
  b_15 :
  goto x_14;
  a_15 :
  Rpush(j_15);
  goto c_36;
  j_15 :
  goto i_15;
  x_14 :
  Cpop();
  i_15 :
  goto r_14;
  u_14 :
  Rpush(r_14);
  goto c_36;
  t_14 :
  Rpush(r_14);
  goto c_36;
  s_14 :
  Rpush(r_14);
  goto c_36;
  r_14 :
  goto q_14;
  c_36 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(k_15);
  d_36 :
  Cpush(m_15);
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Cpush(o_15);
  Epushd(1,7);
  MoveTop(1,1);
  goto c_34;
  c_34 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto d_34;
  d_34 :
  TestFunFC(f_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto e_34;
  e_34 :
  TestFunFC(f_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto f_34;
  f_34 :
  TestFunFC(g_1,&&fail,Egetd(1,6));
  Rpush(q_15);
  goto e_36;
  q_15 :
  goto p_15;
  e_36 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  p_15 :
  Epopd(1,7);
  goto n_15;
  o_15 :
  Ccall(_stratego_x_27);
  goto r_15;
  n_15 :
  Cpop();
  r_15 :
  OneNextSon();
  Ccall(_stratego_y_27);
  AllBuild();
  AllBuild();
  goto l_15;
  m_15 :
  Epushd(1,7);
  MoveTop(1,1);
  goto h_34;
  h_34 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_34;
  i_34 :
  TestFunFC(f_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto j_34;
  j_34 :
  TestFunFC(c_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto k_34;
  k_34 :
  TestFunFC(g_1,&&fail,Egetd(1,7));
  Rpush(u_15);
  goto f_36;
  u_15 :
  goto t_15;
  f_36 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  t_15 :
  Epopd(1,7);
  goto s_15;
  l_15 :
  Cpop();
  s_15 :
  Cpush(x_15);
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_28);
  OneNextSon();
  Ccall(_stratego_y_27);
  AllBuild();
  AllBuild();
  goto v_15;
  x_15 :
  Rpush(z_15);
  goto d_36;
  z_15 :
  goto y_15;
  v_15 :
  Cpop();
  y_15 :
  Return();
  k_15 :
  Return();
  q_14 :
  goto p_14;
  x_35 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(a_16);
  y_35 :
  Cpush(h_16);
  Ccall(_stratego_g_28);
  goto b_16;
  h_16 :
  Ccontinue(i_16);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_34;
  a_34 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(n_16);
  goto z_35;
  n_16 :
  goto k_16;
  z_35 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(o_16);
  a_36 :
  Cpush(r_16);
  Epushd(2,3);
  MoveTop(2,1);
  goto z_33;
  z_33 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(t_16);
  goto b_36;
  t_16 :
  goto s_16;
  b_36 :
  Move(1,2,2,2);
  Return();
  s_16 :
  Epopd(2,3);
  goto q_16;
  r_16 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_16);
  goto a_36;
  v_16 :
  AllBuild();
  goto u_16;
  q_16 :
  Cpop();
  u_16 :
  Return();
  o_16 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(a_17);
  goto y_35;
  a_17 :
  Return();
  k_16 :
  Epopd(1,3);
  goto b_16;
  i_16 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_17);
  goto y_35;
  d_17 :
  AllBuild();
  goto b_17;
  b_16 :
  Cpop();
  b_17 :
  Return();
  a_16 :
  Return();
  p_14 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_x_27)
  Epushd(0,7);
  MoveTop(0,1);
  goto i_37;
  i_37 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto j_37;
  j_37 :
  TestFunFC(f_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_37;
  k_37 :
  TestFunFC(f_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_37;
  l_37 :
  TestFunFC(g_1,&&fail,Egetd(0,6));
  Rpush(f_17);
  goto m_39;
  f_17 :
  goto e_17;
  m_39 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto i_36;
  i_36 :
  TestFunFC(f_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_36;
  j_36 :
  TestFunFC(f_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_36;
  k_36 :
  TestFunFC(g_1,&&fail,Egetd(2,5));
  Rpush(h_17);
  goto n_39;
  h_17 :
  goto g_17;
  n_39 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  g_17 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto m_36;
  m_36 :
  TestFunFC(f_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_36;
  n_36 :
  TestFunFC(f_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_36;
  o_36 :
  TestFunFC(g_1,&&fail,Egetd(2,5));
  Rpush(j_17);
  goto o_39;
  j_17 :
  goto i_17;
  o_39 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  i_17 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(k_17);
  p_39 :
  Epushd(2,9);
  MoveTop(2,1);
  goto v_36;
  v_36 :
  TestFunFC(f_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto w_36;
  w_36 :
  TestFunFC(x_17,&&v_17,Egetd(2,2));
  goto x_36;
  x_36 :
  TestFunFC(f_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto y_36;
  y_36 :
  TestFunFC(x_17,&&fail,Egetd(2,6));
  goto z_36;
  z_36 :
  TestFunFC(g_1,&&fail,Egetd(2,9));
  Rpush(u_17);
  goto q_39;
  v_17 :
  TestFunFC(c_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_37;
  a_37 :
  TestFunFC(f_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto b_37;
  b_37 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto c_37;
  c_37 :
  TestFunFC(g_1,&&fail,Egetd(2,9));
  Rpush(u_17);
  goto r_39;
  u_17 :
  goto m_17;
  r_39 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Rpush(a_18);
  goto p_39;
  a_18 :
  OneNextSon();
  Ccall(_stratego_y_27);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto s_36;
  s_36 :
  TestFunFC(f_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto t_36;
  t_36 :
  TestFunFC(f_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto u_36;
  u_36 :
  TestFunFC(g_1,&&fail,Egetd(3,5));
  Rpush(b_18);
  goto s_39;
  b_18 :
  goto z_17;
  s_39 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  z_17 :
  Epopd(3,5);
  Return();
  m_17 :
  goto l_17;
  q_39 :
  Tset(App0("Nil"));
  Return();
  l_17 :
  Epopd(2,9);
  Return();
  k_17 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto f_37;
  f_37 :
  TestFunFC(f_1,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto g_37;
  g_37 :
  TestFunFC(f_1,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto h_37;
  h_37 :
  TestFunFC(g_1,&&fail,Egetd(1,9));
  Rpush(i_18);
  goto u_39;
  i_18 :
  goto h_18;
  u_39 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(m_18);
  v_39 :
  Cpush(s_18);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_18);
  goto v_39;
  y_18 :
  AllBuild();
  goto n_18;
  s_18 :
  Ccall(_stratego_g_28);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto z_18;
  n_18 :
  Cpop();
  z_18 :
  Return();
  m_18 :
  Return();
  h_18 :
  Epopd(1,9);
  Return();
  e_17 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_y_27)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_39;
  x_39 :
  TestFunFC(g_1,&&fail,Egetd(0,1));
  Rpush(e_19);
  goto z_39;
  e_19 :
  goto d_19;
  z_39 :
  Return();
  d_19 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_27)
  Ccall(_stratego_a_28);
ENDPROC

PROC(_stratego_a_28)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(j_19);
  c_46 :
  Rpush(l_19);
  d_46 :
  Epushd(1,5);
  MoveTop(1,1);
  goto x_41;
  x_41 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_41;
  y_41 :
  TestFunFC(f_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_41;
  z_41 :
  TestFunFC(g_1,&&fail,Egetd(1,5));
  Cpush(y_19);
  Rpush(a_20);
  goto e_46;
  a_20 :
  goto t_19;
  y_19 :
  Ccontinue(b_20);
  Rpush(c_20);
  goto i_46;
  c_20 :
  goto t_19;
  b_20 :
  Rpush(j_20);
  goto f_47;
  j_20 :
  goto h_20;
  t_19 :
  Cpop();
  h_20 :
  goto s_19;
  s_19 :
  goto r_19;
  f_47 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  k_20 :
  AllNextSon(&&l_20);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(q_20);
  goto d_46;
  q_20 :
  Epopd(2,1);
  goto k_20;
  l_20 :
  AllBuild();
  Return();
  r_19 :
  goto q_19;
  i_46 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto k_40;
  k_40 :
  TestFunFC(u_0,&&h_21,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto l_40;
  l_40 :
  TestFunFC(v_0,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(d_21);
  goto j_46;
  h_21 :
  TestFunFC(v_0,&&i_21,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(d_21);
  goto k_46;
  i_21 :
  TestFunFC(y_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(d_21);
  goto l_46;
  d_21 :
  goto x_20;
  l_46 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  x_20 :
  goto w_20;
  k_46 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  w_20 :
  goto s_20;
  j_46 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  s_20 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(o_21);
  n_46 :
  Cpush(v_21);
  Ccall(_stratego_g_28);
  goto u_21;
  v_21 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_28);
  OneNextSon();
  Rpush(y_21);
  goto n_46;
  y_21 :
  AllBuild();
  goto w_21;
  u_21 :
  Cpop();
  w_21 :
  Return();
  o_21 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(z_21);
  p_46 :
  Epushd(4,9);
  MoveTop(4,1);
  goto u_40;
  u_40 :
  TestFunFC(f_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto v_40;
  v_40 :
  TestFunFC(x_17,&&g_22,Egetd(4,2));
  goto w_40;
  w_40 :
  TestFunFC(f_1,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto x_40;
  x_40 :
  TestFunFC(x_17,&&fail,Egetd(4,6));
  goto y_40;
  y_40 :
  TestFunFC(g_1,&&fail,Egetd(4,9));
  Rpush(f_22);
  goto q_46;
  g_22 :
  TestFunFC(c_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto z_40;
  z_40 :
  TestFunFC(f_1,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto a_41;
  a_41 :
  TestFunFC(c_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto b_41;
  b_41 :
  TestFunFC(g_1,&&fail,Egetd(4,9));
  Rpush(f_22);
  goto r_46;
  f_22 :
  goto e_22;
  r_46 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Rpush(i_22);
  goto p_46;
  i_22 :
  OneNextSon();
  Ccall(_stratego_y_27);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto r_40;
  r_40 :
  TestFunFC(f_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto s_40;
  s_40 :
  TestFunFC(f_1,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto t_40;
  t_40 :
  TestFunFC(g_1,&&fail,Egetd(5,5));
  Rpush(j_22);
  goto s_46;
  j_22 :
  goto h_22;
  s_46 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  h_22 :
  Epopd(5,5);
  Return();
  e_22 :
  goto d_22;
  q_46 :
  Tset(App0("Nil"));
  Return();
  d_22 :
  Epopd(4,9);
  Return();
  z_21 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto f_41;
  f_41 :
  TestFunFC(f_1,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto g_41;
  g_41 :
  TestFunFC(f_1,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto h_41;
  h_41 :
  TestFunFC(g_1,&&fail,Egetd(3,15));
  Rpush(l_22);
  goto u_46;
  l_22 :
  goto k_22;
  u_46 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(m_22);
  v_46 :
  Cpush(o_22);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_22);
  goto v_46;
  p_22 :
  AllBuild();
  goto n_22;
  o_22 :
  Ccall(_stratego_g_28);
  NotNULLd(3,14);
  Tset(Egetd(3,14));
  goto q_22;
  n_22 :
  Cpop();
  q_22 :
  Return();
  m_22 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  k_22 :
  Epopd(3,15);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(s_22);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto j_41;
  j_41 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(u_22);
  goto x_46;
  u_22 :
  goto t_22;
  x_46 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  t_22 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto r_22;
  s_22 :
  Ccontinue(v_22);
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto r_22;
  v_22 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto l_41;
  l_41 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_22);
  goto y_46;
  y_22 :
  goto x_22;
  y_46 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  x_22 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto w_22;
  r_22 :
  Cpop();
  w_22 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto s_41;
  s_41 :
  TestFunFC(f_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto t_41;
  t_41 :
  TestFunFC(f_1,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto u_41;
  u_41 :
  TestFunFC(f_1,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto v_41;
  v_41 :
  TestFunFC(g_1,&&fail,Egetd(2,11));
  Rpush(a_23);
  goto a_47;
  a_23 :
  goto z_22;
  a_47 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(c_23);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(d_23);
  goto c_46;
  d_23 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(e_23);
  goto c_46;
  e_23 :
  Epopd(3,1);
  AllBuild();
  goto b_23;
  c_23 :
  Ccontinue(f_23);
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(g_23);
  goto c_46;
  g_23 :
  Epopd(3,1);
  AllBuild();
  goto b_23;
  f_23 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(i_23);
  goto c_46;
  i_23 :
  Epopd(3,1);
  AllBuild();
  goto h_23;
  b_23 :
  Cpop();
  h_23 :
  Return();
  z_22 :
  Epopd(2,11);
  Return();
  q_19 :
  goto m_19;
  e_46 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_b_28);
  Epopd(2,1);
  AllBuild();
  Return();
  m_19 :
  Epopd(1,5);
  Return();
  l_19 :
  Return();
  j_19 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_28)
  Rpush(j_23);
  f_48 :
  Epushd(0,11);
  MoveTop(0,5);
  goto j_47;
  j_47 :
  TestFunFC(f_1,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto k_47;
  k_47 :
  TestFunFC(f_1,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto l_47;
  l_47 :
  TestFunFC(c_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto m_47;
  m_47 :
  TestFunFC(g_1,&&fail,Egetd(0,11));
  goto n_47;
  n_47 :
  TestFunFC(f_1,&&n_23,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto o_47;
  o_47 :
  TestFunFC(f_1,&&o_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto p_47;
  p_47 :
  TestFunFC(g_1,&&p_23,Egetd(0,4));
  Cpush(r_23);
  Rpush(s_23);
  goto g_48;
  s_23 :
  goto q_23;
  r_23 :
  Rpush(u_23);
  goto h_48;
  u_23 :
  goto t_23;
  q_23 :
  Cpop();
  t_23 :
  goto m_23;
  p_23 :
  Rpush(m_23);
  goto h_48;
  o_23 :
  Rpush(m_23);
  goto h_48;
  n_23 :
  Rpush(m_23);
  goto h_48;
  m_23 :
  goto l_23;
  h_48 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(v_23);
  goto f_48;
  v_23 :
  Return();
  l_23 :
  goto k_23;
  g_48 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  k_23 :
  Epopd(0,11);
  Return();
  j_23 :
ENDPROC

PROC(_stratego_c_28)
  _ST_new();
ENDPROC

PROC(_stratego_d_28)
  Ccall(_stratego_e_28);
ENDPROC

PROC(_stratego_e_28)
  Rpush(w_23);
  t_52 :
  Cpush(y_23);
  Epushd(0,2);
  MoveTop(0,1);
  goto j_48;
  j_48 :
  TestFunFC(b_24,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(a_24);
  goto u_52;
  a_24 :
  goto z_23;
  u_52 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  z_23 :
  Epopd(0,2);
  goto x_23;
  y_23 :
  Ccontinue(d_24);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_f_28);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(e_24);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(f_24);
  goto t_52;
  f_24 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_w_27);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto q_48;
  q_48 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_48;
  r_48 :
  TestFunFC(f_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto s_48;
  s_48 :
  TestFunFC(g_1,&&fail,Egetd(1,5));
  Rpush(j_24);
  goto a_53;
  j_24 :
  goto g_24;
  a_53 :
  Move(0,3,1,4);
  Return();
  g_24 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_24);
  b_53 :
  Cpush(n_24);
  Ccall(_stratego_g_28);
  Tset(App0("Nil"));
  goto m_24;
  n_24 :
  Epushd(1,3);
  MoveTop(1,1);
  goto e_49;
  e_49 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(q_24);
  goto c_53;
  q_24 :
  goto p_24;
  c_53 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(r_24);
  goto b_53;
  r_24 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto b_49;
  b_49 :
  TestFunFC(f_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_49;
  c_49 :
  TestFunFC(f_1,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto d_49;
  d_49 :
  TestFunFC(g_1,&&fail,Egetd(2,6));
  Rpush(v_24);
  goto f_53;
  v_24 :
  goto u_24;
  f_53 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(w_24);
  g_53 :
  Cpush(y_24);
  Ccall(_stratego_g_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto x_24;
  y_24 :
  Ccontinue(z_24);
  Epushd(3,3);
  MoveTop(3,1);
  goto a_49;
  a_49 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(b_25);
  goto h_53;
  b_25 :
  goto a_25;
  h_53 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(c_25);
  i_53 :
  Cpush(e_25);
  Epushd(4,3);
  MoveTop(4,1);
  goto z_48;
  z_48 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(g_25);
  goto j_53;
  g_25 :
  goto f_25;
  j_53 :
  Move(3,2,4,2);
  Return();
  f_25 :
  Epopd(4,3);
  goto d_25;
  e_25 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_25);
  goto i_53;
  i_25 :
  AllBuild();
  goto h_25;
  d_25 :
  Cpop();
  h_25 :
  Return();
  c_25 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(j_25);
  goto g_53;
  j_25 :
  Return();
  a_25 :
  Epopd(3,3);
  goto x_24;
  z_24 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_25);
  goto g_53;
  l_25 :
  AllBuild();
  goto k_25;
  x_24 :
  Cpop();
  k_25 :
  Return();
  w_24 :
  Return();
  u_24 :
  Epopd(2,6);
  Return();
  p_24 :
  Epopd(1,3);
  goto o_24;
  m_24 :
  Cpop();
  o_24 :
  Return();
  k_24 :
  Epopd(0,3);
  goto x_23;
  d_24 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto h_49;
  h_49 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_49;
  i_49 :
  TestFunFC(f_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto j_49;
  j_49 :
  TestFunFC(g_1,&&fail,Egetd(1,5));
  Rpush(o_25);
  goto l_53;
  o_25 :
  goto n_25;
  l_53 :
  Move(0,2,1,4);
  Return();
  n_25 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(p_25);
  m_53 :
  Cpush(r_25);
  Ccall(_stratego_g_28);
  Tset(App0("Nil"));
  goto q_25;
  r_25 :
  Epushd(1,3);
  MoveTop(1,1);
  goto v_49;
  v_49 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(x_25);
  goto n_53;
  x_25 :
  goto w_25;
  n_53 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(y_25);
  goto t_52;
  y_25 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(z_25);
  goto m_53;
  z_25 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto s_49;
  s_49 :
  TestFunFC(f_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_49;
  t_49 :
  TestFunFC(f_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto u_49;
  u_49 :
  TestFunFC(g_1,&&fail,Egetd(2,7));
  Rpush(b_26);
  goto q_53;
  b_26 :
  goto a_26;
  q_53 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(f_26);
  r_53 :
  Cpush(k_26);
  Ccall(_stratego_g_28);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto g_26;
  k_26 :
  Ccontinue(l_26);
  Epushd(3,3);
  MoveTop(3,1);
  goto r_49;
  r_49 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_26);
  goto s_53;
  o_26 :
  goto n_26;
  s_53 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(p_26);
  t_53 :
  Cpush(t_26);
  Epushd(4,3);
  MoveTop(4,1);
  goto q_49;
  q_49 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(v_26);
  goto u_53;
  v_26 :
  goto u_26;
  u_53 :
  Move(3,2,4,2);
  Return();
  u_26 :
  Epopd(4,3);
  goto q_26;
  t_26 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_26);
  goto t_53;
  x_26 :
  AllBuild();
  goto w_26;
  q_26 :
  Cpop();
  w_26 :
  Return();
  p_26 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(y_26);
  goto r_53;
  y_26 :
  Return();
  n_26 :
  Epopd(3,3);
  goto g_26;
  l_26 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_27);
  goto r_53;
  a_27 :
  AllBuild();
  goto z_26;
  g_26 :
  Cpop();
  z_26 :
  Return();
  f_26 :
  Return();
  a_26 :
  Epopd(2,7);
  Return();
  w_25 :
  Epopd(1,3);
  goto s_25;
  q_25 :
  Cpop();
  s_25 :
  Return();
  p_25 :
  Epopd(0,2);
  goto m_25;
  x_23 :
  Cpop();
  m_25 :
  Return();
  w_23 :
ENDPROC

PROC(_stratego_f_28)
  Epushd(0,6);
  MoveTop(0,2);
  goto x_53;
  x_53 :
  TestFunFC(e_24,&&e_27,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(d_27);
  goto k_54;
  e_27 :
  TestFunFC(m_27,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto y_53;
  y_53 :
  TestFunFC(l_28,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(d_27);
  goto l_54;
  d_27 :
  goto c_27;
  l_54 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_e_28);
  Return();
  c_27 :
  goto b_27;
  k_54 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  b_27 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_g_28)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_54;
  n_54 :
  TestFunFC(x_17,&&fail,Egetd(0,1));
  Rpush(v_28);
  goto p_54;
  v_28 :
  goto u_28;
  p_54 :
  Return();
  u_28 :
  Epopd(0,1);
ENDPROC

DOIT

