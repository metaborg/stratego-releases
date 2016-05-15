#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,i_24);
VARDECL(AFun,a_24);
VARDECL(AFun,u_18);
VARDECL(AFun,r_18);
VARDECL(AFun,r_9);
VARDECL(AFun,j_8);
VARDECL(AFun,o_2);
VARDECL(AFun,n_2);
VARDECL(AFun,v_1);
VARDECL(AFun,m_1);
VARDECL(AFun,l_1);
VARDECL(AFun,j_1);
VARDECL(AFun,h_1);
VARDECL(AFun,d_1);
VARDECL(AFun,l_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_w_24);
PROCDECL(_stratego_x_24);
PROCDECL(_stratego_y_24);
PROCDECL(_stratego_z_24);
PROCDECL(_stratego_a_25);
PROCDECL(_stratego_b_25);
PROCDECL(_stratego_c_25);
PROCDECL(_stratego_d_25);
PROCDECL(_stratego_e_25);
PROCDECL(_stratego_f_25);
PROCDECL(_stratego_h_25);
PROCDECL(_stratego_i_25);
PROCDECL(_stratego_j_25);
PROCDECL(_stratego_l_25);
PROCDECL(_stratego_m_25);
PROCDECL(_stratego_n_25);
PROCDECL(_stratego_o_25);
PROCDECL(_stratego_p_25);
PROCDECL(_stratego_s_25);
PROCDECL(_stratego_t_25);
PROCDECL(_stratego_a_26);
PROCDECL(_stratego_b_26);
PROCDECL(_stratego_c_26);
PROCDECL(_stratego_d_26);
PROCDECL(_stratego_e_26);
PROCDECL(_stratego_f_26);
PROCDECL(_stratego_g_26);
PROCDECL(_stratego_h_26);
PROCDECL(_stratego_i_26);
PROCDECL(_stratego_j_26);
PROCDECL(_stratego_k_26);
PROCDECL(_stratego_p_26);
PROCDECL(_stratego_q_26);
PROCDECL(_stratego_r_26);
PROCDECL(_stratego_s_26);
PROCDECL(_stratego_y_26);
PROCDECL(_stratego_z_26);
PROCDECL(_stratego_a_27);

PROC(_stratego_init_afuns)
  MOVE(i_24,ATmakeAFun("Imports",1,0));
  MOVE(a_24,ATmakeAFun("Specification",1,0));
  MOVE(u_18,ATmakeAFun("Version",0,0));
  MOVE(r_18,ATmakeAFun("Help",0,0));
  MOVE(r_9,ATmakeAFun("NoDependency",0,0));
  MOVE(j_8,ATmakeAFun("Nil",0,0));
  MOVE(o_2,ATmakeAFun("TNil",0,0));
  MOVE(n_2,ATmakeAFun("TCons",2,0));
  MOVE(v_1,ATmakeAFun("Include",1,0));
  MOVE(m_1,ATmakeAFun("Dependency",1,0));
  MOVE(l_1,ATmakeAFun("Binary",1,0));
  MOVE(j_1,ATmakeAFun("Output",1,0));
  MOVE(h_1,ATmakeAFun("Input",1,0));
  MOVE(d_1,ATmakeAFun("Program",1,0));
  MOVE(l_0,ATmakeAFun("Undefined",1,0));
  MOVE(f_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Epushd(0,16);
  Ccall(_stratego_w_24);
  MoveTop(0,1);
  Cpush(b_0);
  Tdupl();
  c_0 :
  TestFunTop(f_0);
  Cpush(d_0);
  Arg(0);
  Cpush(h_0);
  Ccall(_stratego_z_24);
  goto g_0;
  h_0 :
  Ccontinue(i_0);
  Epushd(1,2);
  MoveTop(1,1);
  goto s_0;
  s_0 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(k_0);
  goto p_16;
  k_0 :
  goto j_0;
  p_16 :
  Return();
  j_0 :
  Epopd(1,2);
  goto g_0;
  i_0 :
  Ccall(_stratego_a_25);
  goto m_0;
  g_0 :
  Cpop();
  m_0 :
  Tpop();
  Cpop();
  goto e_0;
  d_0 :
  Arg(1);
  Tdrop();
  goto c_0;
  e_0 :
  Tpop();
  Ccall(_stratego_b_25);
  goto a_0;
  b_0 :
  goto n_0;
  a_0 :
  Cpop();
  n_0 :
  Rpush(o_0);
  q_16 :
  Cpush(q_0);
  Ccall(_stratego_x_24);
  goto p_0;
  q_0 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(u_0);
  Epushd(1,2);
  MoveTop(1,1);
  goto c_1;
  c_1 :
  TestFunFC(d_1,&&b_1,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(a_1);
  goto r_16;
  b_1 :
  TestFunFC(h_1,&&f_1,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(a_1);
  goto s_16;
  f_1 :
  TestFunFC(j_1,&&i_1,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(a_1);
  goto t_16;
  i_1 :
  TestFunFC(l_1,&&k_1,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(a_1);
  goto u_16;
  k_1 :
  TestFunFC(m_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(a_1);
  goto v_16;
  a_1 :
  goto z_0;
  v_16 :
  Move(0,6,1,2);
  Return();
  z_0 :
  goto y_0;
  u_16 :
  Move(0,5,1,2);
  Return();
  y_0 :
  goto x_0;
  t_16 :
  Move(0,4,1,2);
  Return();
  x_0 :
  goto w_0;
  s_16 :
  Move(0,3,1,2);
  Return();
  w_0 :
  goto v_0;
  r_16 :
  Move(0,2,1,2);
  Return();
  v_0 :
  Epopd(1,2);
  goto t_0;
  u_0 :
  goto n_1;
  t_0 :
  Cpop();
  n_1 :
  OneNextSon();
  Rpush(o_1);
  goto q_16;
  o_1 :
  AllBuild();
  goto r_0;
  p_0 :
  Cpop();
  r_0 :
  Return();
  o_0 :
  Rpush(p_1);
  w_16 :
  Cpush(r_1);
  Ccall(_stratego_x_24);
  goto q_1;
  r_1 :
  Ccontinue(s_1);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto e_1;
  e_1 :
  TestFunFC(v_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(u_1);
  goto x_16;
  u_1 :
  goto t_1;
  x_16 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  t_1 :
  Epopd(1,2);
  OneNextSon();
  Rpush(w_1);
  goto w_16;
  w_1 :
  AllBuild();
  goto q_1;
  s_1 :
  Epushd(1,3);
  MoveTop(1,1);
  goto g_1;
  g_1 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(z_1);
  goto y_16;
  z_1 :
  goto y_1;
  y_16 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(e_2);
  goto w_16;
  e_2 :
  Return();
  y_1 :
  Epopd(1,3);
  goto x_1;
  q_1 :
  Cpop();
  x_1 :
  Return();
  p_1 :
  MoveTop(0,7);
  Cpush(g_2);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  goto f_2;
  g_2 :
  Tset(App0("stdin"));
  goto h_2;
  f_2 :
  Cpop();
  h_2 :
  MoveTop(0,8);
  Cpush(j_2);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto i_2;
  j_2 :
  Tset(App0("stdout"));
  goto k_2;
  i_2 :
  Cpop();
  k_2 :
  MoveTop(0,9);
  NotNULLd(0,8);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",App0("TNil"),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(0,10);
  goto a_5;
  a_5 :
  TestFunFC(n_2,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  goto b_5;
  b_5 :
  TestFunFC(n_2,&&fail,Egetd(0,12));
  MoveArg(0,13,0,12,0);
  MoveArg(0,14,0,12,1);
  goto c_5;
  c_5 :
  TestFunFC(n_2,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  MoveArg(0,16,0,14,1);
  goto d_5;
  d_5 :
  TestFunFC(o_2,&&fail,Egetd(0,16));
  Rpush(m_2);
  goto d_17;
  m_2 :
  goto l_2;
  d_17 :
  Epushd(1,5);
  NotNULLd(0,11);
  NotNULLd(0,13);
  NotNULLd(0,15);
  Tset(App2("TCons",App2("Cons",Egetd(0,11),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,11),App0("Nil")),App2("TCons",Egetd(0,13),App2("TCons",Egetd(0,15),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(u_2);
  e_17 :
  Epushd(2,13);
  MoveTop(2,1);
  goto k_3;
  k_3 :
  TestFunFC(n_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto l_3;
  l_3 :
  TestFunFC(f_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto m_3;
  m_3 :
  TestFunFC(n_2,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto n_3;
  n_3 :
  TestFunFC(n_2,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto o_3;
  o_3 :
  TestFunFC(n_2,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto p_3;
  p_3 :
  TestFunFC(n_2,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto q_3;
  q_3 :
  TestFunFC(o_2,&&fail,Egetd(2,13));
  Cpush(z_2);
  Rpush(r_3);
  goto f_17;
  r_3 :
  goto y_2;
  z_2 :
  Rpush(a_4);
  goto x_21;
  a_4 :
  goto z_3;
  y_2 :
  Cpop();
  z_3 :
  goto x_2;
  x_2 :
  goto w_2;
  x_21 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App2("TCons",Egetd(2,10),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,12)),App0("TNil")))))));
  Return();
  w_2 :
  goto v_2;
  f_17 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,8),App0("TNil"))));
  MoveTop(4,1);
  goto t_2;
  t_2 :
  TestFunFC(n_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(e_4);
  goto g_17;
  e_4 :
  goto b_4;
  g_17 :
  Epushd(5,6);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Ccall(_stratego_a_27);
  MoveTop(5,1);
  Tset(ATmakeString("r"));
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",ATmakeString("r"),App0("TNil"))));
  MoveTop(5,2);
  goto q_2;
  q_2 :
  TestFunFC(n_2,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto r_2;
  r_2 :
  TestFunFC(n_2,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto s_2;
  s_2 :
  TestFunFC(o_2,&&fail,Egetd(5,6));
  Rpush(g_4);
  goto m_18;
  g_4 :
  goto f_4;
  m_18 :
  Epushd(6,5);
  NotNULLd(5,3);
  NotNULLd(5,5);
  Tset(App2("Cons",Egetd(5,3),App2("Cons",ATmakeString("."),App2("Cons",Egetd(5,5),App0("Nil")))));
  Ccall(_stratego_f_25);
  Cpush(i_4);
  Ccall(_stratego_s_25);
  goto h_4;
  i_4 :
  Epushd(7,1);
  MoveTop(7,1);
  Cpush(m_4);
  Epushd(8,5);
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  NotNULLd(7,1);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(7,1),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(8,1);
  goto b_2;
  b_2 :
  TestFunFC(n_2,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto c_2;
  c_2 :
  TestFunFC(n_2,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto d_2;
  d_2 :
  TestFunFC(o_2,&&fail,Egetd(8,5));
  Rpush(f_5);
  goto p_20;
  f_5 :
  goto t_4;
  p_20 :
  NotNULLd(8,4);
  Tset(Egetd(8,4));
  Rpush(r_5);
  q_20 :
  Epushd(9,3);
  MoveTop(9,1);
  goto a_2;
  a_2 :
  TestFunFC(f_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Cpush(z_5);
  Rpush(a_6);
  goto r_20;
  a_6 :
  goto v_5;
  z_5 :
  Rpush(e_6);
  goto s_20;
  e_6 :
  goto c_6;
  v_5 :
  Cpop();
  c_6 :
  goto u_5;
  u_5 :
  goto t_5;
  s_20 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(g_6);
  goto q_20;
  g_6 :
  Return();
  t_5 :
  goto s_5;
  r_20 :
  NotNULLd(9,2);
  NotNULLd(8,2);
  Tset(App2("Cons",Egetd(9,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,2),App0("Nil")))));
  Ccall(_stratego_f_25);
  Ccall(_stratego_s_25);
  Return();
  s_5 :
  Epopd(9,3);
  Return();
  r_5 :
  Return();
  t_4 :
  Epopd(8,5);
  goto k_4;
  m_4 :
  NotNULLd(7,1);
  Tset(App2("Cons",ATmakeString("no such file: "),App2("Cons",Egetd(7,1),App0("Nil"))));
  Ccall(_stratego_t_25);
  goto h_6;
  k_4 :
  Cpop();
  h_6 :
  Epopd(7,1);
  goto j_4;
  h_4 :
  Cpop();
  j_4 :
  MoveTop(6,1);
  NotNULLd(6,1);
  Tset(Egetd(6,1));
  Tdupl();
  Epushd(7,3);
  Tset(App0("TNil"));
  Ccall(_stratego_c_26);
  Ccall(_stratego_d_26);
  MoveTop(7,1);
  NotNULLd(7,1);
  Tset(App2("TCons",ATmakeString("pack-stratego"),App2("TCons",Egetd(7,1),App0("TNil"))));
  Ccall(_stratego_b_26);
  MoveTop(7,2);
  Move(6,3,7,2);
  NotNULLd(6,1);
  NotNULLd(6,3);
  Tset(App2("TCons",ATmakeString("parse-mod"),App2("TCons",App2("Cons",ATmakeString("-silent"),App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(6,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(6,3),App0("Nil")))))),App0("TNil"))));
  Ccall(_stratego_k_26);
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Ccall(_stratego_p_26);
  MoveTop(7,3);
  Move(6,2,7,3);
  NotNULLd(6,3);
  Tset(App2("Cons",Egetd(6,3),App0("Nil")));
  Ccall(_stratego_q_26);
  Epopd(7,3);
  Tpop();
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  NotNULLd(6,1);
  NotNULLd(6,2);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",Egetd(6,2),App0("TNil"))));
  Tdupl();
  NotNULLd(6,1);
  NotNULLd(6,2);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",Egetd(6,2),App0("TNil"))));
  MoveTop(3,1);
  Tpop();
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Ccall(_stratego_r_26);
  MoveTop(6,4);
  Move(3,2,6,4);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(2,6),App0("TNil"))));
  Ccall(_stratego_o_25);
  MoveTop(6,5);
  Move(3,3,6,5);
  Epopd(6,5);
  Return();
  f_4 :
  Epopd(5,6);
  Return();
  b_4 :
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,4),App0("TNil"))));
  MoveTop(3,4);
  goto h_3;
  h_3 :
  TestFunFC(n_2,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto i_3;
  i_3 :
  TestFunFC(n_2,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto j_3;
  j_3 :
  TestFunFC(o_2,&&fail,Egetd(3,8));
  Rpush(q_6);
  goto j_21;
  q_6 :
  goto i_6;
  j_21 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(r_6);
  k_21 :
  Cpush(g_7);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_7);
  goto k_21;
  h_7 :
  AllBuild();
  goto s_6;
  g_7 :
  Ccall(_stratego_x_24);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto i_7;
  s_6 :
  Cpop();
  i_7 :
  Return();
  r_6 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,6),App0("TNil"))));
  MoveTop(4,2);
  goto e_3;
  e_3 :
  TestFunFC(n_2,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto f_3;
  f_3 :
  TestFunFC(n_2,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto g_3;
  g_3 :
  TestFunFC(o_2,&&fail,Egetd(4,6));
  Rpush(k_7);
  goto m_21;
  k_7 :
  goto j_7;
  m_21 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(l_7);
  n_21 :
  Cpush(t_7);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_7);
  goto n_21;
  v_7 :
  AllBuild();
  goto s_7;
  t_7 :
  Ccall(_stratego_x_24);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto w_7;
  s_7 :
  Cpop();
  w_7 :
  Return();
  l_7 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil")))));
  MoveTop(5,2);
  goto a_3;
  a_3 :
  TestFunFC(n_2,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto b_3;
  b_3 :
  TestFunFC(n_2,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto c_3;
  c_3 :
  TestFunFC(n_2,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto d_3;
  d_3 :
  TestFunFC(o_2,&&fail,Egetd(5,8));
  Rpush(y_7);
  goto v_21;
  y_7 :
  goto x_7;
  v_21 :
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
  x_7 :
  Epopd(5,8);
  Return();
  j_7 :
  Epopd(4,6);
  Return();
  i_6 :
  Epopd(3,8);
  Return();
  v_2 :
  Cpush(f_8);
  Epushd(3,11);
  MoveTop(3,1);
  goto s_3;
  s_3 :
  TestFunFC(n_2,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto t_3;
  t_3 :
  TestFunFC(j_8,&&fail,Egetd(3,2));
  goto u_3;
  u_3 :
  TestFunFC(n_2,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto v_3;
  v_3 :
  TestFunFC(n_2,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto w_3;
  w_3 :
  TestFunFC(n_2,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto x_3;
  x_3 :
  TestFunFC(n_2,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto y_3;
  y_3 :
  TestFunFC(o_2,&&fail,Egetd(3,11));
  Rpush(i_8);
  goto y_21;
  i_8 :
  goto g_8;
  y_21 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App0("TNil"))));
  Return();
  g_8 :
  Epopd(3,11);
  goto z_7;
  f_8 :
  Rpush(l_8);
  goto e_17;
  l_8 :
  goto k_8;
  z_7 :
  Cpop();
  k_8 :
  Epopd(2,13);
  Return();
  u_2 :
  MoveTop(1,1);
  goto x_4;
  x_4 :
  TestFunFC(n_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_4;
  y_4 :
  TestFunFC(n_2,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_4;
  z_4 :
  TestFunFC(o_2,&&fail,Egetd(1,5));
  Rpush(m_8);
  goto z_21;
  m_8 :
  goto p_2;
  z_21 :
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_s_26);
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_26);
  OneNextSon();
  Ccall(_stratego_z_26);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto u_4;
  u_4 :
  TestFunFC(n_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_4;
  v_4 :
  TestFunFC(n_2,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_4;
  w_4 :
  TestFunFC(o_2,&&fail,Egetd(2,5));
  Rpush(o_8);
  goto q_22;
  o_8 :
  goto n_8;
  q_22 :
  Epushd(3,2);
  NotNULLd(0,9);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(0,9),App2("TCons",Egetd(2,4),App0("TNil"))));
  Cpush(v_8);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Ccall(_stratego_d_25);
  goto p_8;
  v_8 :
  Ccall(_stratego_e_25);
  goto w_8;
  p_8 :
  Cpop();
  w_8 :
  Cpush(b_9);
  Epushd(4,6);
  Cpush(d_9);
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  goto c_9;
  d_9 :
  Cpush(g_9);
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(h_9);
  r_22 :
  Cpush(j_9);
  Epushd(5,3);
  MoveTop(5,1);
  goto c_4;
  c_4 :
  TestFunFC(f_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto d_4;
  d_4 :
  TestFunFC(r_9,&&fail,Egetd(5,2));
  Rpush(q_9);
  goto s_22;
  q_9 :
  goto n_9;
  s_22 :
  Return();
  n_9 :
  Epopd(5,3);
  goto i_9;
  j_9 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_10);
  goto r_22;
  a_10 :
  AllBuild();
  goto s_9;
  i_9 :
  Cpop();
  s_9 :
  Return();
  h_9 :
  Cpop();
  Crestore();
  Cjump();
  g_9 :
  NotNULLd(0,9);
  Tset(Egetd(0,9));
  goto f_9;
  c_9 :
  Cpop();
  f_9 :
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(3,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(4,2);
  goto q_4;
  q_4 :
  TestFunFC(n_2,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto r_4;
  r_4 :
  TestFunFC(n_2,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto s_4;
  s_4 :
  TestFunFC(o_2,&&fail,Egetd(4,6));
  Rpush(d_10);
  goto u_22;
  d_10 :
  goto b_10;
  u_22 :
  Epushd(5,2);
  Tdupl();
  Epushd(6,6);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Ccall(_stratego_a_27);
  MoveTop(6,1);
  Move(5,2,6,1);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",ATmakeString("dep"),App0("TNil"))));
  MoveTop(6,2);
  goto n_4;
  n_4 :
  TestFunFC(n_2,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto o_4;
  o_4 :
  TestFunFC(n_2,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto p_4;
  p_4 :
  TestFunFC(o_2,&&fail,Egetd(6,6));
  Rpush(k_10);
  goto g_23;
  k_10 :
  goto j_10;
  g_23 :
  Epushd(7,2);
  NotNULLd(6,3);
  NotNULLd(6,5);
  Tset(App2("Cons",Egetd(6,3),App2("Cons",ATmakeString("."),App2("Cons",Egetd(6,5),App0("Nil")))));
  Ccall(_stratego_f_25);
  Ccall(_stratego_l_25);
  MoveTop(7,1);
  Move(5,1,7,1);
  NotNULLd(5,2);
  NotNULLd(4,5);
  Tset(App2("Cons",Egetd(5,2),App2("Cons",ATmakeString(":"),Egetd(4,5))));
  Cpush(u_10);
  Ccall(_stratego_x_24);
  goto m_10;
  u_10 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_10);
  i_23 :
  Cpush(y_10);
  Ccall(_stratego_x_24);
  goto x_10;
  y_10 :
  Epushd(8,3);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_11);
  goto i_23;
  b_11 :
  AllBuild();
  MoveTop(8,1);
  goto l_4;
  l_4 :
  TestFunFC(f_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(c_11);
  goto j_23;
  c_11 :
  goto a_11;
  j_23 :
  Tset(ATmakeString(" "));
  NotNULLd(8,2);
  NotNULLd(8,3);
  Tset(App2("Cons",ATmakeString(" "),App2("Cons",Egetd(8,2),Egetd(8,3))));
  Return();
  a_11 :
  Epopd(8,3);
  goto z_10;
  x_10 :
  Cpop();
  z_10 :
  Return();
  w_10 :
  AllBuild();
  goto v_10;
  m_10 :
  Cpop();
  v_10 :
  MoveTop(7,2);
  NotNULLd(5,1);
  NotNULLd(7,2);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(7,2),App0("TNil"))));
  Ccall(_stratego_n_25);
  Epopd(7,2);
  Return();
  j_10 :
  Epopd(6,6);
  Tpop();
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,5),App0("TNil"))));
  Epopd(5,2);
  Return();
  b_10 :
  Epopd(4,6);
  goto a_9;
  b_9 :
  goto d_11;
  a_9 :
  Cpop();
  d_11 :
  Ccall(_stratego_m_25);
  MoveTop(3,2);
  NotNULLd(0,2);
  NotNULLd(3,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(3,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_n_25);
  Epopd(3,2);
  Return();
  n_8 :
  Epopd(2,5);
  Return();
  p_2 :
  Epopd(1,5);
  Return();
  l_2 :
  Epopd(0,16);
ENDPROC

PROC(_stratego_w_24)
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(e_11);
  x_27 :
  Cpush(g_11);
  Cpush(i_11);
  Ccall(_stratego_x_24);
  goto h_11;
  i_11 :
  Cpush(l_11);
  Ccall(_stratego_y_24);
  goto k_11;
  l_11 :
  Epushd(0,5);
  MoveTop(0,1);
  goto q_25;
  q_25 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_25;
  r_25 :
  TestFunFC(f_0,&&r_11,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Cpush(t_11);
  Rpush(u_11);
  goto y_27;
  u_11 :
  goto s_11;
  t_11 :
  Ccontinue(v_11);
  Rpush(w_11);
  goto c_28;
  w_11 :
  goto s_11;
  v_11 :
  Rpush(y_11);
  goto f_28;
  y_11 :
  goto x_11;
  s_11 :
  Cpop();
  x_11 :
  goto q_11;
  r_11 :
  Rpush(q_11);
  goto c_28;
  q_11 :
  goto p_11;
  f_28 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto q_24;
  q_24 :
  TestStr(1,1,"-dep",&&fail);
  Rpush(a_12);
  goto g_28;
  a_12 :
  goto z_11;
  g_28 :
  Return();
  z_11 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,4);
  Tset(App1("Dependency",Egetd(0,4)));
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Cons",App1("Dependency",Egetd(0,4)),Egetd(0,5)));
  Return();
  p_11 :
  goto o_11;
  c_28 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto n_24;
  n_24 :
  TestStr(1,1,"-nodep",&&fail);
  Rpush(c_12);
  goto d_28;
  c_12 :
  goto b_12;
  d_28 :
  Return();
  b_12 :
  Epopd(1,1);
  Tpop();
  Tset(App0("NoDependency"));
  NotNULLd(0,3);
  Tset(App2("Cons",App0("NoDependency"),Egetd(0,3)));
  Return();
  o_11 :
  goto n_11;
  y_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto b_24;
  b_24 :
  TestStr(1,1,"-I",&&fail);
  Rpush(e_12);
  goto z_27;
  e_12 :
  goto d_12;
  z_27 :
  Return();
  d_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,4);
  Tset(App1("Include",Egetd(0,4)));
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Cons",App1("Include",Egetd(0,4)),Egetd(0,5)));
  Return();
  n_11 :
  Epopd(0,5);
  goto m_11;
  k_11 :
  Cpop();
  m_11 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_12);
  goto x_27;
  f_12 :
  AllBuild();
  goto j_11;
  h_11 :
  Cpop();
  j_11 :
  goto f_11;
  g_11 :
  Epushd(0,3);
  MoveTop(0,1);
  goto v_25;
  v_25 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(i_12);
  goto j_28;
  i_12 :
  goto h_12;
  j_28 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  h_12 :
  Epopd(0,3);
  goto g_12;
  f_11 :
  Cpop();
  g_12 :
  Return();
  e_11 :
  AllBuild();
ENDPROC

PROC(_stratego_x_24)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_28;
  l_28 :
  TestFunFC(j_8,&&fail,Egetd(0,1));
  Rpush(k_12);
  goto n_28;
  k_12 :
  goto j_12;
  n_28 :
  Return();
  j_12 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_24)
  Epushd(0,5);
  MoveTop(0,3);
  goto b_31;
  b_31 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_31;
  c_31 :
  TestFunFC(f_0,&&f_13,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(h_13);
  Rpush(i_13);
  goto v_34;
  i_13 :
  goto g_13;
  h_13 :
  Ccontinue(j_13);
  Rpush(k_13);
  goto y_34;
  k_13 :
  goto g_13;
  j_13 :
  Ccontinue(l_13);
  Rpush(m_13);
  goto b_35;
  m_13 :
  goto g_13;
  l_13 :
  Ccontinue(n_13);
  Rpush(o_13);
  goto e_35;
  o_13 :
  goto g_13;
  n_13 :
  Ccontinue(w_13);
  Rpush(x_13);
  goto h_35;
  x_13 :
  goto g_13;
  w_13 :
  Ccontinue(y_13);
  Rpush(z_13);
  goto k_35;
  z_13 :
  goto g_13;
  y_13 :
  Ccontinue(f_14);
  Rpush(g_14);
  goto o_35;
  g_14 :
  goto g_13;
  f_14 :
  Ccontinue(h_14);
  Rpush(i_14);
  goto s_35;
  i_14 :
  goto g_13;
  h_14 :
  Ccontinue(j_14);
  Rpush(k_14);
  goto w_35;
  k_14 :
  goto g_13;
  j_14 :
  Ccontinue(l_14);
  Rpush(m_14);
  goto a_36;
  m_14 :
  goto g_13;
  l_14 :
  Ccontinue(n_14);
  Rpush(o_14);
  goto e_36;
  o_14 :
  goto g_13;
  n_14 :
  Ccontinue(p_14);
  Rpush(v_14);
  goto h_36;
  v_14 :
  goto g_13;
  p_14 :
  Ccontinue(w_14);
  Rpush(x_14);
  goto k_36;
  x_14 :
  goto g_13;
  w_14 :
  Ccontinue(y_14);
  Rpush(z_14);
  goto n_36;
  z_14 :
  goto g_13;
  y_14 :
  Rpush(b_15);
  goto q_36;
  b_15 :
  goto a_15;
  g_13 :
  Cpop();
  a_15 :
  goto e_13;
  f_13 :
  Cpush(f_15);
  Rpush(o_15);
  goto v_34;
  o_15 :
  goto e_15;
  f_15 :
  Ccontinue(p_15);
  Rpush(y_15);
  goto y_34;
  y_15 :
  goto e_15;
  p_15 :
  Ccontinue(z_15);
  Rpush(e_16);
  goto b_35;
  e_16 :
  goto e_15;
  z_15 :
  Ccontinue(f_16);
  Rpush(g_16);
  goto e_35;
  g_16 :
  goto e_15;
  f_16 :
  Ccontinue(h_16);
  Rpush(i_16);
  goto h_35;
  i_16 :
  goto e_15;
  h_16 :
  Ccontinue(k_16);
  Rpush(m_16);
  goto e_36;
  m_16 :
  goto e_15;
  k_16 :
  Ccontinue(n_16);
  Rpush(z_16);
  goto h_36;
  z_16 :
  goto e_15;
  n_16 :
  Ccontinue(a_17);
  Rpush(b_17);
  goto k_36;
  b_17 :
  goto e_15;
  a_17 :
  Ccontinue(c_17);
  Rpush(h_17);
  goto n_36;
  h_17 :
  goto e_15;
  c_17 :
  Rpush(j_17);
  goto q_36;
  j_17 :
  goto i_17;
  e_15 :
  Cpop();
  i_17 :
  goto e_13;
  e_13 :
  goto d_13;
  q_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_30;
  z_30 :
  TestStr(1,1,"-?",&&fail);
  Rpush(l_17);
  goto r_36;
  l_17 :
  goto k_17;
  r_36 :
  Return();
  k_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  d_13 :
  goto c_13;
  n_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_30;
  w_30 :
  TestStr(1,1,"-h",&&fail);
  Rpush(n_17);
  goto o_36;
  n_17 :
  goto m_17;
  o_36 :
  Return();
  m_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  c_13 :
  goto b_13;
  k_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_30;
  t_30 :
  TestStr(1,1,"--help",&&fail);
  Rpush(p_17);
  goto l_36;
  p_17 :
  goto o_17;
  l_36 :
  Return();
  o_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  b_13 :
  goto a_13;
  h_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_30;
  q_30 :
  TestStr(1,1,"-s",&&fail);
  Rpush(r_17);
  goto i_36;
  r_17 :
  goto q_17;
  i_36 :
  Return();
  q_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  a_13 :
  goto z_12;
  e_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_30;
  n_30 :
  TestStr(1,1,"-b",&&fail);
  Rpush(t_17);
  goto f_36;
  t_17 :
  goto s_17;
  f_36 :
  Return();
  s_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  z_12 :
  goto y_12;
  a_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_30;
  j_30 :
  TestStr(1,1,"--output",&&fail);
  Rpush(v_17);
  goto b_36;
  v_17 :
  goto u_17;
  b_36 :
  Return();
  u_17 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  y_12 :
  goto x_12;
  w_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_30;
  f_30 :
  TestStr(1,1,"-o",&&fail);
  Rpush(x_17);
  goto x_35;
  x_17 :
  goto w_17;
  x_35 :
  Return();
  w_17 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  x_12 :
  goto s_12;
  s_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_30;
  b_30 :
  TestStr(1,1,"--input",&&fail);
  Rpush(z_17);
  goto t_35;
  z_17 :
  goto y_17;
  t_35 :
  Return();
  y_17 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  s_12 :
  goto r_12;
  o_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_29;
  x_29 :
  TestStr(1,1,"-i",&&fail);
  Rpush(b_18);
  goto p_35;
  b_18 :
  goto a_18;
  p_35 :
  Return();
  a_18 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  r_12 :
  goto q_12;
  k_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_29;
  t_29 :
  TestStr(1,1,"@version",&&fail);
  Rpush(d_18);
  goto l_35;
  d_18 :
  goto c_18;
  l_35 :
  Return();
  c_18 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  q_12 :
  goto p_12;
  h_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_29;
  q_29 :
  TestStr(1,1,"--version",&&fail);
  Rpush(f_18);
  goto i_35;
  f_18 :
  goto e_18;
  i_35 :
  Return();
  e_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  p_12 :
  goto o_12;
  e_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_29;
  n_29 :
  TestStr(1,1,"-v",&&fail);
  Rpush(h_18);
  goto f_35;
  h_18 :
  goto g_18;
  f_35 :
  Return();
  g_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  o_12 :
  goto n_12;
  b_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_29;
  k_29 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(j_18);
  goto c_35;
  j_18 :
  goto i_18;
  c_35 :
  Return();
  i_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  n_12 :
  goto m_12;
  y_34 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_29;
  h_29 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(l_18);
  goto z_34;
  l_18 :
  goto k_18;
  z_34 :
  Return();
  k_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  m_12 :
  goto l_12;
  v_34 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_29;
  e_29 :
  TestStr(1,1,"-S",&&fail);
  Rpush(o_18);
  goto w_34;
  o_18 :
  goto n_18;
  w_34 :
  Return();
  n_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  l_12 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_z_24)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_36;
  u_36 :
  TestFunFC(r_18,&&fail,Egetd(0,1));
  Rpush(q_18);
  goto w_36;
  q_18 :
  goto p_18;
  w_36 :
  Return();
  p_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_25)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_36;
  y_36 :
  TestFunFC(u_18,&&fail,Egetd(0,1));
  Rpush(t_18);
  goto a_37;
  t_18 :
  goto s_18;
  a_37 :
  Return();
  s_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_25)
  Epushd(0,1);
  Rpush(v_18);
  j_37 :
  Cpush(x_18);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_37;
  c_37 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_37;
  d_37 :
  TestFunFC(d_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_18);
  goto k_37;
  z_18 :
  goto y_18;
  k_37 :
  Move(0,1,1,3);
  Return();
  y_18 :
  Epopd(1,4);
  goto w_18;
  x_18 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_19);
  goto j_37;
  b_19 :
  AllBuild();
  goto a_19;
  w_18 :
  Cpop();
  a_19 :
  Return();
  v_18 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-I dir] [-i file]"),App2("Cons",ATmakeString(" [-o file] [-b] [-s] [--help|-h|-?]"),App2("Cons",ATmakeString(" [-dep target | -nodep]"),App0("Nil")))))),App0("TNil"))));
  Ccall(_stratego_n_25);
  Tset(MakeInt(1));
  Ccall(_stratego_c_25);
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_25)
  _ST_exit();
ENDPROC

PROC(_stratego_d_25)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_e_25)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_f_25)
  Rpush(c_19);
  l_37 :
  Cpush(e_19);
  Ccall(_stratego_x_24);
  goto d_19;
  e_19 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_25);
  OneNextSon();
  Rpush(g_19);
  goto l_37;
  g_19 :
  AllBuild();
  goto f_19;
  d_19 :
  Cpop();
  f_19 :
  Return();
  c_19 :
  Ccall(_stratego_i_25);
  Ccall(_stratego_j_25);
ENDPROC

PROC(_stratego_h_25)
  _ST_explode_string();
ENDPROC

PROC(_stratego_i_25)
  Rpush(h_19);
  t_37 :
  Cpush(j_19);
  Ccall(_stratego_x_24);
  goto i_19;
  j_19 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_37;
  n_37 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_19);
  goto u_37;
  m_19 :
  goto l_19;
  u_37 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(n_19);
  v_37 :
  Cpush(p_19);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_19);
  goto v_37;
  q_19 :
  AllBuild();
  goto o_19;
  p_19 :
  Ccall(_stratego_x_24);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_19);
  goto t_37;
  s_19 :
  goto r_19;
  o_19 :
  Cpop();
  r_19 :
  Return();
  n_19 :
  Return();
  l_19 :
  Epopd(0,3);
  goto k_19;
  i_19 :
  Cpop();
  k_19 :
  Return();
  h_19 :
ENDPROC

PROC(_stratego_j_25)
  _ST_implode_string();
ENDPROC

PROC(_stratego_l_25)
  _ST_open_file();
ENDPROC

PROC(_stratego_m_25)
  _ST_dtime();
ENDPROC

PROC(_stratego_n_25)
  _ST_printnl();
ENDPROC

PROC(_stratego_o_25)
  Epushd(0,5);
  MoveTop(0,5);
  goto n_38;
  n_38 :
  TestFunFC(n_2,&&w_19,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto o_38;
  o_38 :
  TestFunFC(n_2,&&x_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto p_38;
  p_38 :
  TestFunFC(o_2,&&y_19,Egetd(0,4));
  Cpush(a_20);
  Rpush(b_20);
  goto z_39;
  b_20 :
  goto z_19;
  a_20 :
  Rpush(d_20);
  goto e_40;
  d_20 :
  goto c_20;
  z_19 :
  Cpop();
  c_20 :
  goto v_19;
  y_19 :
  Rpush(v_19);
  goto e_40;
  x_19 :
  Rpush(v_19);
  goto e_40;
  w_19 :
  Rpush(v_19);
  goto e_40;
  v_19 :
  goto u_19;
  e_40 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(e_20);
  f_40 :
  Cpush(g_20);
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  Cpush(i_20);
  Epushd(1,7);
  MoveTop(1,1);
  goto d_38;
  d_38 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto e_38;
  e_38 :
  TestFunFC(n_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto f_38;
  f_38 :
  TestFunFC(n_2,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto g_38;
  g_38 :
  TestFunFC(o_2,&&fail,Egetd(1,6));
  Rpush(k_20);
  goto g_40;
  k_20 :
  goto j_20;
  g_40 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  j_20 :
  Epopd(1,7);
  goto h_20;
  i_20 :
  Ccall(_stratego_p_25);
  goto l_20;
  h_20 :
  Cpop();
  l_20 :
  OneNextSon();
  Ccall(_stratego_z_26);
  AllBuild();
  AllBuild();
  goto f_20;
  g_20 :
  Epushd(1,7);
  MoveTop(1,1);
  goto i_38;
  i_38 :
  TestFunFC(n_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_38;
  j_38 :
  TestFunFC(n_2,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto l_38;
  l_38 :
  TestFunFC(f_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto m_38;
  m_38 :
  TestFunFC(o_2,&&fail,Egetd(1,7));
  Rpush(o_20);
  goto h_40;
  o_20 :
  goto n_20;
  h_40 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  n_20 :
  Epopd(1,7);
  goto m_20;
  f_20 :
  Cpop();
  m_20 :
  Cpush(u_20);
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_24);
  OneNextSon();
  Ccall(_stratego_z_26);
  AllBuild();
  AllBuild();
  goto t_20;
  u_20 :
  Rpush(w_20);
  goto f_40;
  w_20 :
  goto v_20;
  t_20 :
  Cpop();
  v_20 :
  Return();
  e_20 :
  Return();
  u_19 :
  goto t_19;
  z_39 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(x_20);
  a_40 :
  Cpush(z_20);
  Ccall(_stratego_x_24);
  goto y_20;
  z_20 :
  Ccontinue(a_21);
  Epushd(1,3);
  MoveTop(1,1);
  goto b_38;
  b_38 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(c_21);
  goto b_40;
  c_21 :
  goto b_21;
  b_40 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(d_21);
  c_40 :
  Cpush(f_21);
  Epushd(2,3);
  MoveTop(2,1);
  goto a_38;
  a_38 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(h_21);
  goto d_40;
  h_21 :
  goto g_21;
  d_40 :
  Move(1,2,2,2);
  Return();
  g_21 :
  Epopd(2,3);
  goto e_21;
  f_21 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_21);
  goto c_40;
  l_21 :
  AllBuild();
  goto i_21;
  e_21 :
  Cpop();
  i_21 :
  Return();
  d_21 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(o_21);
  goto a_40;
  o_21 :
  Return();
  b_21 :
  Epopd(1,3);
  goto y_20;
  a_21 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_21);
  goto a_40;
  q_21 :
  AllBuild();
  goto p_21;
  y_20 :
  Cpop();
  p_21 :
  Return();
  x_20 :
  Return();
  t_19 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_25)
  Epushd(0,7);
  MoveTop(0,1);
  goto k_41;
  k_41 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto l_41;
  l_41 :
  TestFunFC(n_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto m_41;
  m_41 :
  TestFunFC(n_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto n_41;
  n_41 :
  TestFunFC(o_2,&&fail,Egetd(0,6));
  Rpush(s_21);
  goto o_43;
  s_21 :
  goto r_21;
  o_43 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto k_40;
  k_40 :
  TestFunFC(n_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_40;
  l_40 :
  TestFunFC(n_2,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto m_40;
  m_40 :
  TestFunFC(o_2,&&fail,Egetd(2,5));
  Rpush(u_21);
  goto p_43;
  u_21 :
  goto t_21;
  p_43 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  t_21 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto o_40;
  o_40 :
  TestFunFC(n_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_40;
  p_40 :
  TestFunFC(n_2,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_40;
  q_40 :
  TestFunFC(o_2,&&fail,Egetd(2,5));
  Rpush(a_22);
  goto q_43;
  a_22 :
  goto w_21;
  q_43 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  w_21 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(b_22);
  r_43 :
  Epushd(2,9);
  MoveTop(2,1);
  goto x_40;
  x_40 :
  TestFunFC(n_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto y_40;
  y_40 :
  TestFunFC(j_8,&&f_22,Egetd(2,2));
  goto z_40;
  z_40 :
  TestFunFC(n_2,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto a_41;
  a_41 :
  TestFunFC(j_8,&&fail,Egetd(2,6));
  goto b_41;
  b_41 :
  TestFunFC(o_2,&&fail,Egetd(2,9));
  Rpush(e_22);
  goto s_43;
  f_22 :
  TestFunFC(f_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_41;
  c_41 :
  TestFunFC(n_2,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto d_41;
  d_41 :
  TestFunFC(f_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto e_41;
  e_41 :
  TestFunFC(o_2,&&fail,Egetd(2,9));
  Rpush(e_22);
  goto t_43;
  e_22 :
  goto d_22;
  t_43 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  Rpush(h_22);
  goto r_43;
  h_22 :
  OneNextSon();
  Ccall(_stratego_z_26);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto u_40;
  u_40 :
  TestFunFC(n_2,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto v_40;
  v_40 :
  TestFunFC(n_2,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_40;
  w_40 :
  TestFunFC(o_2,&&fail,Egetd(3,5));
  Rpush(i_22);
  goto u_43;
  i_22 :
  goto g_22;
  u_43 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  g_22 :
  Epopd(3,5);
  Return();
  d_22 :
  goto c_22;
  s_43 :
  Tset(App0("Nil"));
  Return();
  c_22 :
  Epopd(2,9);
  Return();
  b_22 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto h_41;
  h_41 :
  TestFunFC(n_2,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto i_41;
  i_41 :
  TestFunFC(n_2,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto j_41;
  j_41 :
  TestFunFC(o_2,&&fail,Egetd(1,9));
  Rpush(k_22);
  goto w_43;
  k_22 :
  goto j_22;
  w_43 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(l_22);
  x_43 :
  Cpush(n_22);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_22);
  goto x_43;
  o_22 :
  AllBuild();
  goto m_22;
  n_22 :
  Ccall(_stratego_x_24);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto p_22;
  m_22 :
  Cpop();
  p_22 :
  Return();
  l_22 :
  Return();
  j_22 :
  Epopd(1,9);
  Return();
  r_21 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_s_25)
  _ST_file_exists();
ENDPROC

PROC(_stratego_t_25)
  Tdupl();
  Ccall(_stratego_a_26);
  Tset(MakeInt(1));
  Ccall(_stratego_c_25);
  Tpop();
ENDPROC

PROC(_stratego_a_26)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_n_25);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_b_26)
  Epushd(0,5);
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_25);
  OneNextSon();
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_25);
  OneNextSon();
  Ccall(_stratego_z_26);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto l_44;
  l_44 :
  TestFunFC(n_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto m_44;
  m_44 :
  TestFunFC(n_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto n_44;
  n_44 :
  TestFunFC(o_2,&&fail,Egetd(0,5));
  Rpush(v_22);
  goto v_44;
  v_22 :
  goto t_22;
  v_44 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(w_22);
  w_44 :
  Cpush(y_22);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_22);
  goto w_44;
  z_22 :
  AllBuild();
  goto x_22;
  y_22 :
  Ccall(_stratego_x_24);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto a_23;
  x_22 :
  Cpop();
  a_23 :
  Return();
  w_22 :
  Ccall(_stratego_j_25);
  Return();
  t_22 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_c_26)
  _ST_get_pid();
ENDPROC

PROC(_stratego_d_26)
  Rpush(b_23);
  b_46 :
  Epushd(0,4);
  MoveTop(0,1);
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_e_26);
  MoveTop(0,2);
  Tset(MakeInt(48));
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_f_26);
  MoveTop(0,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_g_26);
  Ccall(_stratego_h_26);
  MoveTop(0,4);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,4),App0("TNil"))));
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  Cpush(d_23);
  Epushd(1,1);
  MoveTop(1,1);
  goto h_45;
  h_45 :
  TestInt(1,1,0,&&fail);
  Rpush(f_23);
  goto l_46;
  f_23 :
  goto e_23;
  l_46 :
  Tset(App0("Nil"));
  Return();
  e_23 :
  Epopd(1,1);
  goto c_23;
  d_23 :
  Rpush(k_23);
  goto b_46;
  k_23 :
  goto h_23;
  c_23 :
  Cpop();
  h_23 :
  OneNextSon();
  Ccall(_stratego_z_26);
  AllBuild();
  AllBuild();
  Ccall(_stratego_i_26);
  Epopd(0,4);
  Return();
  b_23 :
  Ccall(_stratego_j_26);
  Ccall(_stratego_j_25);
ENDPROC

PROC(_stratego_e_26)
  _ST_mod();
ENDPROC

PROC(_stratego_f_26)
  _ST_add();
ENDPROC

PROC(_stratego_g_26)
  _ST_div();
ENDPROC

PROC(_stratego_h_26)
  _ST_int();
ENDPROC

PROC(_stratego_i_26)
  Epushd(0,7);
  MoveTop(0,1);
  goto o_46;
  o_46 :
  TestFunFC(n_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto p_46;
  p_46 :
  TestFunFC(n_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto q_46;
  q_46 :
  TestFunFC(j_8,&&o_23,Egetd(0,4));
  goto r_46;
  r_46 :
  TestFunFC(o_2,&&fail,Egetd(0,7));
  Rpush(n_23);
  goto e_47;
  o_23 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_46;
  s_46 :
  TestFunFC(o_2,&&fail,Egetd(0,7));
  Rpush(n_23);
  goto f_47;
  n_23 :
  goto m_23;
  f_47 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  m_23 :
  goto l_23;
  e_47 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  l_23 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_j_26)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(q_23);
  k_48 :
  Cpush(s_23);
  Epushd(1,7);
  MoveTop(1,1);
  goto i_47;
  i_47 :
  TestFunFC(n_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto j_47;
  j_47 :
  TestFunFC(f_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto k_47;
  k_47 :
  TestFunFC(n_2,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto l_47;
  l_47 :
  TestFunFC(o_2,&&fail,Egetd(1,7));
  Rpush(u_23);
  goto l_48;
  u_23 :
  goto t_23;
  l_48 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(v_23);
  goto k_48;
  v_23 :
  Return();
  t_23 :
  Epopd(1,7);
  goto r_23;
  s_23 :
  goto w_23;
  r_23 :
  Cpop();
  w_23 :
  Return();
  q_23 :
  MoveTop(0,2);
  goto n_47;
  n_47 :
  TestFunFC(n_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto o_47;
  o_47 :
  TestFunFC(j_8,&&fail,Egetd(0,3));
  goto p_47;
  p_47 :
  TestFunFC(n_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto q_47;
  q_47 :
  TestFunFC(o_2,&&fail,Egetd(0,6));
  Rpush(x_23);
  goto m_48;
  x_23 :
  goto p_23;
  m_48 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  p_23 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_k_26)
  _ST_call();
ENDPROC

PROC(_stratego_p_26)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_q_26)
  Epushd(0,1);
  MoveTop(0,1);
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("rm"),App2("TCons",App2("Cons",ATmakeString("-f"),Egetd(0,1)),App0("TNil"))));
  Ccall(_stratego_k_26);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_26)
  Epushd(0,6);
  MoveTop(0,1);
  goto w_48;
  w_48 :
  TestFunFC(n_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_48;
  x_48 :
  TestFunFC(n_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto y_48;
  y_48 :
  TestFunFC(a_24,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto z_48;
  z_48 :
  TestFunFC(o_2,&&fail,Egetd(0,6));
  Rpush(z_23);
  goto s_49;
  z_23 :
  goto y_23;
  s_49 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(c_24);
  t_49 :
  Cpush(e_24);
  Ccall(_stratego_x_24);
  goto d_24;
  e_24 :
  Ccontinue(f_24);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto t_48;
  t_48 :
  TestFunFC(i_24,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(h_24);
  goto u_49;
  h_24 :
  goto g_24;
  u_49 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  g_24 :
  Epopd(1,2);
  OneNextSon();
  Rpush(j_24);
  goto t_49;
  j_24 :
  AllBuild();
  goto d_24;
  f_24 :
  Epushd(1,3);
  MoveTop(1,1);
  goto v_48;
  v_48 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(m_24);
  goto v_49;
  m_24 :
  goto l_24;
  v_49 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(o_24);
  goto t_49;
  o_24 :
  Return();
  l_24 :
  Epopd(1,3);
  goto k_24;
  d_24 :
  Cpop();
  k_24 :
  Return();
  c_24 :
  Ccall(_stratego_i_25);
  Return();
  y_23 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_s_26)
  Rpush(p_24);
  f_51 :
  Epushd(0,3);
  MoveTop(0,1);
  goto i_50;
  i_50 :
  TestFunFC(j_8,&&u_24,Egetd(0,1));
  Rpush(t_24);
  goto g_51;
  u_24 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(t_24);
  goto h_51;
  t_24 :
  goto s_24;
  h_51 :
  Epushd(1,13);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(n_2);
  TravInit();
  OneNextSon();
  Rpush(g_25);
  goto f_51;
  g_25 :
  OneNextSon();
  Ccall(_stratego_z_26);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto z_49;
  z_49 :
  TestFunFC(n_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto a_50;
  a_50 :
  TestFunFC(n_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto b_50;
  b_50 :
  TestFunFC(n_2,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto c_50;
  c_50 :
  TestFunFC(o_2,&&fail,Egetd(1,6));
  goto d_50;
  d_50 :
  TestFunFC(n_2,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto e_50;
  e_50 :
  TestFunFC(n_2,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto f_50;
  f_50 :
  TestFunFC(n_2,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto g_50;
  g_50 :
  TestFunFC(o_2,&&fail,Egetd(1,12));
  goto h_50;
  h_50 :
  TestFunFC(o_2,&&fail,Egetd(1,13));
  Rpush(k_25);
  goto i_51;
  k_25 :
  goto v_24;
  i_51 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset(App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,9)),App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,11)),App0("TNil"))));
  Return();
  v_24 :
  Epopd(1,13);
  Return();
  s_24 :
  goto r_24;
  g_51 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  r_24 :
  Epopd(0,3);
  Return();
  p_24 :
ENDPROC

PROC(_stratego_y_26)
  Epushd(0,1);
  Rpush(u_25);
  c_52 :
  Cpush(o_26);
  Ccall(_stratego_x_24);
  goto x_25;
  o_26 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto o_51;
  o_51 :
  TestFunFC(a_24,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(w_26);
  goto d_52;
  w_26 :
  goto u_26;
  d_52 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(x_26);
  e_52 :
  Cpush(c_27);
  Ccall(_stratego_x_24);
  goto b_27;
  c_27 :
  Ccontinue(d_27);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(e_27);
  Tdupl();
  Epushd(2,2);
  MoveTop(2,1);
  goto l_51;
  l_51 :
  TestFunFC(i_24,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(h_27);
  goto f_52;
  h_27 :
  goto g_27;
  f_52 :
  Return();
  g_27 :
  Epopd(2,2);
  Cpop();
  Crestore();
  Cjump();
  e_27 :
  OneNextSon();
  Rpush(i_27);
  goto e_52;
  i_27 :
  AllBuild();
  goto b_27;
  d_27 :
  Epushd(2,3);
  MoveTop(2,1);
  goto n_51;
  n_51 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(l_27);
  goto g_52;
  l_27 :
  goto k_27;
  g_52 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(n_27);
  goto e_52;
  n_27 :
  Return();
  k_27 :
  Epopd(2,3);
  goto j_27;
  b_27 :
  Cpop();
  j_27 :
  Return();
  x_26 :
  Return();
  u_26 :
  Epopd(1,2);
  OneNextSon();
  Rpush(o_27);
  goto c_52;
  o_27 :
  AllBuild();
  goto t_26;
  x_25 :
  Cpop();
  t_26 :
  Return();
  u_25 :
  Ccall(_stratego_i_25);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Specification",Egetd(0,1)));
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_26)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_52;
  j_52 :
  TestFunFC(o_2,&&fail,Egetd(0,1));
  Rpush(q_27);
  goto l_52;
  q_27 :
  goto p_27;
  l_52 :
  Return();
  p_27 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_27)
  Ccall(_stratego_h_25);
  Cpush(v_27);
  Rpush(w_27);
  s_52 :
  Cpush(b_28);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_28);
  goto s_52;
  e_28 :
  AllBuild();
  goto a_28;
  b_28 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_52;
  n_52 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_52;
  o_52 :
  TestInt(0,2,46,&&fail);
  Rpush(k_28);
  goto t_52;
  k_28 :
  goto i_28;
  t_52 :
  Tset(App0("Nil"));
  Return();
  i_28 :
  Epopd(0,3);
  goto h_28;
  a_28 :
  Cpop();
  h_28 :
  Return();
  w_27 :
  goto u_27;
  v_27 :
  goto o_28;
  u_27 :
  Cpop();
  o_28 :
  Ccall(_stratego_j_25);
ENDPROC
