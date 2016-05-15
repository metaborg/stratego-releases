#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,r_24);
VARDECL(AFun,j_24);
VARDECL(AFun,a_19);
VARDECL(AFun,x_18);
VARDECL(AFun,k_10);
VARDECL(AFun,c_9);
VARDECL(AFun,g_8);
VARDECL(AFun,l_2);
VARDECL(AFun,k_2);
VARDECL(AFun,s_1);
VARDECL(AFun,j_1);
VARDECL(AFun,i_1);
VARDECL(AFun,g_1);
VARDECL(AFun,d_1);
VARDECL(AFun,l_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_v_24);
PROCDECL(_stratego_w_24);
PROCDECL(_stratego_x_24);
PROCDECL(_stratego_y_24);
PROCDECL(_stratego_z_24);
PROCDECL(_stratego_a_25);
PROCDECL(_stratego_b_25);
PROCDECL(_stratego_c_25);
PROCDECL(_stratego_d_25);
PROCDECL(_stratego_e_25);
PROCDECL(_stratego_g_25);
PROCDECL(_stratego_h_25);
PROCDECL(_stratego_i_25);
PROCDECL(_stratego_k_25);
PROCDECL(_stratego_l_25);
PROCDECL(_stratego_m_25);
PROCDECL(_stratego_n_25);
PROCDECL(_stratego_o_25);
PROCDECL(_stratego_r_25);
PROCDECL(_stratego_s_25);
PROCDECL(_stratego_z_25);
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
PROCDECL(_stratego_o_26);
PROCDECL(_stratego_p_26);
PROCDECL(_stratego_q_26);
PROCDECL(_stratego_r_26);
PROCDECL(_stratego_x_26);
PROCDECL(_stratego_y_26);
PROCDECL(_stratego_z_26);

PROC(_stratego_init_afuns)
  MOVE(r_24,ATmakeAFun("Imports",1,0));
  MOVE(j_24,ATmakeAFun("Specification",1,0));
  MOVE(a_19,ATmakeAFun("Version",0,0));
  MOVE(x_18,ATmakeAFun("Help",0,0));
  MOVE(k_10,ATmakeAFun("NoDependency",0,0));
  MOVE(c_9,ATmakeAFun("Binary",0,0));
  MOVE(g_8,ATmakeAFun("Nil",0,0));
  MOVE(l_2,ATmakeAFun("TNil",0,0));
  MOVE(k_2,ATmakeAFun("TCons",2,0));
  MOVE(s_1,ATmakeAFun("Include",1,0));
  MOVE(j_1,ATmakeAFun("Dependency",1,0));
  MOVE(i_1,ATmakeAFun("Output",1,0));
  MOVE(g_1,ATmakeAFun("Input",1,0));
  MOVE(d_1,ATmakeAFun("Program",1,0));
  MOVE(l_0,ATmakeAFun("Undefined",1,0));
  MOVE(f_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Epushd(0,15);
  Ccall(_stratego_v_24);
  MoveTop(0,1);
  Cpush(b_0);
  Tdupl();
  c_0 :
  TestFunTop(f_0);
  Cpush(d_0);
  Arg(0);
  Cpush(h_0);
  Ccall(_stratego_y_24);
  goto g_0;
  h_0 :
  Ccontinue(i_0);
  Epushd(1,2);
  MoveTop(1,1);
  goto r_0;
  r_0 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(k_0);
  goto t_16;
  k_0 :
  goto j_0;
  t_16 :
  Return();
  j_0 :
  Epopd(1,2);
  goto g_0;
  i_0 :
  Ccall(_stratego_z_24);
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
  Ccall(_stratego_a_25);
  goto a_0;
  b_0 :
  goto n_0;
  a_0 :
  Cpop();
  n_0 :
  Rpush(o_0);
  u_16 :
  Cpush(q_0);
  Ccall(_stratego_w_24);
  goto p_0;
  q_0 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(u_0);
  Epushd(1,2);
  MoveTop(1,1);
  goto a_1;
  a_1 :
  TestFunFC(d_1,&&b_1,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(z_0);
  goto v_16;
  b_1 :
  TestFunFC(g_1,&&f_1,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(z_0);
  goto w_16;
  f_1 :
  TestFunFC(i_1,&&h_1,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(z_0);
  goto x_16;
  h_1 :
  TestFunFC(j_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(z_0);
  goto y_16;
  z_0 :
  goto y_0;
  y_16 :
  Move(0,5,1,2);
  Return();
  y_0 :
  goto x_0;
  x_16 :
  Move(0,4,1,2);
  Return();
  x_0 :
  goto w_0;
  w_16 :
  Move(0,3,1,2);
  Return();
  w_0 :
  goto v_0;
  v_16 :
  Move(0,2,1,2);
  Return();
  v_0 :
  Epopd(1,2);
  goto t_0;
  u_0 :
  goto k_1;
  t_0 :
  Cpop();
  k_1 :
  OneNextSon();
  Rpush(l_1);
  goto u_16;
  l_1 :
  AllBuild();
  goto s_0;
  p_0 :
  Cpop();
  s_0 :
  Return();
  o_0 :
  Rpush(m_1);
  z_16 :
  Cpush(o_1);
  Ccall(_stratego_w_24);
  goto n_1;
  o_1 :
  Ccontinue(p_1);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto c_1;
  c_1 :
  TestFunFC(s_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(r_1);
  goto a_17;
  r_1 :
  goto q_1;
  a_17 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  q_1 :
  Epopd(1,2);
  OneNextSon();
  Rpush(t_1);
  goto z_16;
  t_1 :
  AllBuild();
  goto n_1;
  p_1 :
  Epushd(1,3);
  MoveTop(1,1);
  goto e_1;
  e_1 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(w_1);
  goto b_17;
  w_1 :
  goto v_1;
  b_17 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(x_1);
  goto z_16;
  x_1 :
  Return();
  v_1 :
  Epopd(1,3);
  goto u_1;
  n_1 :
  Cpop();
  u_1 :
  Return();
  m_1 :
  MoveTop(0,6);
  Cpush(d_2);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  goto c_2;
  d_2 :
  Tset(App0("stdin"));
  goto e_2;
  c_2 :
  Cpop();
  e_2 :
  MoveTop(0,7);
  Cpush(g_2);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto f_2;
  g_2 :
  Tset(App0("stdout"));
  goto h_2;
  f_2 :
  Cpop();
  h_2 :
  MoveTop(0,8);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",App0("TNil"),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(0,9);
  goto b_5;
  b_5 :
  TestFunFC(k_2,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto c_5;
  c_5 :
  TestFunFC(k_2,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto d_5;
  d_5 :
  TestFunFC(k_2,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,15,0,13,1);
  goto e_5;
  e_5 :
  TestFunFC(l_2,&&fail,Egetd(0,15));
  Rpush(j_2);
  goto i_18;
  j_2 :
  goto i_2;
  i_18 :
  Epushd(1,5);
  NotNULLd(0,10);
  NotNULLd(0,12);
  NotNULLd(0,14);
  Tset(App2("TCons",App2("Cons",Egetd(0,10),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,10),App0("Nil")),App2("TCons",Egetd(0,12),App2("TCons",Egetd(0,14),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(n_2);
  j_18 :
  Epushd(2,13);
  MoveTop(2,1);
  goto i_3;
  i_3 :
  TestFunFC(k_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto j_3;
  j_3 :
  TestFunFC(f_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto k_3;
  k_3 :
  TestFunFC(k_2,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto l_3;
  l_3 :
  TestFunFC(k_2,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto m_3;
  m_3 :
  TestFunFC(k_2,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto n_3;
  n_3 :
  TestFunFC(k_2,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto o_3;
  o_3 :
  TestFunFC(l_2,&&fail,Egetd(2,13));
  Cpush(w_2);
  Rpush(x_2);
  goto k_18;
  x_2 :
  goto v_2;
  w_2 :
  Rpush(x_3);
  goto q_22;
  x_3 :
  goto p_3;
  v_2 :
  Cpop();
  p_3 :
  goto u_2;
  u_2 :
  goto t_2;
  q_22 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App2("TCons",Egetd(2,10),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,12)),App0("TNil")))))));
  Return();
  t_2 :
  goto s_2;
  k_18 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,8),App0("TNil"))));
  MoveTop(4,1);
  goto r_2;
  r_2 :
  TestFunFC(k_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(z_3);
  goto l_18;
  z_3 :
  goto y_3;
  l_18 :
  Epushd(5,6);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Ccall(_stratego_z_26);
  MoveTop(5,1);
  Tset(ATmakeString("r"));
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",ATmakeString("r"),App0("TNil"))));
  MoveTop(5,2);
  goto o_2;
  o_2 :
  TestFunFC(k_2,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto p_2;
  p_2 :
  TestFunFC(k_2,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto q_2;
  q_2 :
  TestFunFC(l_2,&&fail,Egetd(5,6));
  Rpush(f_4);
  goto o_20;
  f_4 :
  goto c_4;
  o_20 :
  Epushd(6,5);
  NotNULLd(5,3);
  NotNULLd(5,5);
  Tset(App2("Cons",Egetd(5,3),App2("Cons",ATmakeString("."),App2("Cons",Egetd(5,5),App0("Nil")))));
  Ccall(_stratego_e_25);
  Cpush(h_4);
  Ccall(_stratego_r_25);
  goto g_4;
  h_4 :
  Epushd(7,1);
  MoveTop(7,1);
  Cpush(k_4);
  Epushd(8,5);
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  NotNULLd(7,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(7,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  MoveTop(8,1);
  goto z_1;
  z_1 :
  TestFunFC(k_2,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto a_2;
  a_2 :
  TestFunFC(k_2,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto b_2;
  b_2 :
  TestFunFC(l_2,&&fail,Egetd(8,5));
  Rpush(n_4);
  goto u_20;
  n_4 :
  goto l_4;
  u_20 :
  NotNULLd(8,4);
  Tset(Egetd(8,4));
  Rpush(u_4);
  v_20 :
  Epushd(9,3);
  MoveTop(9,1);
  goto y_1;
  y_1 :
  TestFunFC(f_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Cpush(u_5);
  Rpush(v_5);
  goto w_20;
  v_5 :
  goto t_5;
  u_5 :
  Rpush(a_6);
  goto x_20;
  a_6 :
  goto z_5;
  t_5 :
  Cpop();
  z_5 :
  goto s_5;
  s_5 :
  goto r_5;
  x_20 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(c_6);
  goto v_20;
  c_6 :
  Return();
  r_5 :
  goto g_5;
  w_20 :
  NotNULLd(9,2);
  NotNULLd(8,2);
  Tset(App2("Cons",Egetd(9,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,2),App0("Nil")))));
  Ccall(_stratego_e_25);
  Ccall(_stratego_r_25);
  Return();
  g_5 :
  Epopd(9,3);
  Return();
  u_4 :
  Return();
  l_4 :
  Epopd(8,5);
  goto j_4;
  k_4 :
  NotNULLd(7,1);
  Tset(App2("Cons",ATmakeString("no such file: "),App2("Cons",Egetd(7,1),App0("Nil"))));
  Ccall(_stratego_s_25);
  goto e_6;
  j_4 :
  Cpop();
  e_6 :
  Epopd(7,1);
  goto i_4;
  g_4 :
  Cpop();
  i_4 :
  MoveTop(6,1);
  NotNULLd(6,1);
  Tset(Egetd(6,1));
  Tdupl();
  Epushd(7,3);
  Tset(App0("TNil"));
  Ccall(_stratego_b_26);
  Ccall(_stratego_c_26);
  MoveTop(7,1);
  NotNULLd(7,1);
  Tset(App2("TCons",ATmakeString("pack-stratego"),App2("TCons",Egetd(7,1),App0("TNil"))));
  Ccall(_stratego_a_26);
  MoveTop(7,2);
  Move(6,3,7,2);
  NotNULLd(6,1);
  NotNULLd(6,3);
  Tset(App2("TCons",ATmakeString("parse-mod"),App2("TCons",App2("Cons",ATmakeString("-silent"),App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(6,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(6,3),App0("Nil")))))),App0("TNil"))));
  Ccall(_stratego_j_26);
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Ccall(_stratego_o_26);
  MoveTop(7,3);
  Move(6,2,7,3);
  NotNULLd(6,3);
  Tset(App2("Cons",Egetd(6,3),App0("Nil")));
  Ccall(_stratego_p_26);
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
  Ccall(_stratego_q_26);
  MoveTop(6,4);
  Move(3,2,6,4);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(2,6),App0("TNil"))));
  Ccall(_stratego_n_25);
  MoveTop(6,5);
  Move(3,3,6,5);
  Epopd(6,5);
  Return();
  c_4 :
  Epopd(5,6);
  Return();
  y_3 :
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,4),App0("TNil"))));
  MoveTop(3,4);
  goto f_3;
  f_3 :
  TestFunFC(k_2,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto g_3;
  g_3 :
  TestFunFC(k_2,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto h_3;
  h_3 :
  TestFunFC(l_2,&&fail,Egetd(3,8));
  Rpush(h_6);
  goto m_21;
  h_6 :
  goto g_6;
  m_21 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(i_6);
  t_21 :
  Cpush(r_6);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_6);
  goto t_21;
  s_6 :
  AllBuild();
  goto q_6;
  r_6 :
  Ccall(_stratego_w_24);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto g_7;
  q_6 :
  Cpop();
  g_7 :
  Return();
  i_6 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,6),App0("TNil"))));
  MoveTop(4,2);
  goto c_3;
  c_3 :
  TestFunFC(k_2,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto d_3;
  d_3 :
  TestFunFC(k_2,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto e_3;
  e_3 :
  TestFunFC(l_2,&&fail,Egetd(4,6));
  Rpush(i_7);
  goto v_21;
  i_7 :
  goto h_7;
  v_21 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(j_7);
  w_21 :
  Cpush(l_7);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_7);
  goto w_21;
  s_7 :
  AllBuild();
  goto k_7;
  l_7 :
  Ccall(_stratego_w_24);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto t_7;
  k_7 :
  Cpop();
  t_7 :
  Return();
  j_7 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil")))));
  MoveTop(5,2);
  goto y_2;
  y_2 :
  TestFunFC(k_2,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto z_2;
  z_2 :
  TestFunFC(k_2,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto a_3;
  a_3 :
  TestFunFC(k_2,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto b_3;
  b_3 :
  TestFunFC(l_2,&&fail,Egetd(5,8));
  Rpush(w_7);
  goto y_21;
  w_7 :
  goto v_7;
  y_21 :
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
  v_7 :
  Epopd(5,8);
  Return();
  h_7 :
  Epopd(4,6);
  Return();
  g_6 :
  Epopd(3,8);
  Return();
  s_2 :
  Cpush(y_7);
  Epushd(3,11);
  MoveTop(3,1);
  goto q_3;
  q_3 :
  TestFunFC(k_2,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto r_3;
  r_3 :
  TestFunFC(g_8,&&fail,Egetd(3,2));
  goto s_3;
  s_3 :
  TestFunFC(k_2,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto t_3;
  t_3 :
  TestFunFC(k_2,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto u_3;
  u_3 :
  TestFunFC(k_2,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto v_3;
  v_3 :
  TestFunFC(k_2,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto w_3;
  w_3 :
  TestFunFC(l_2,&&fail,Egetd(3,11));
  Rpush(f_8);
  goto r_22;
  f_8 :
  goto z_7;
  r_22 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App0("TNil"))));
  Return();
  z_7 :
  Epopd(3,11);
  goto x_7;
  y_7 :
  Rpush(j_8);
  goto j_18;
  j_8 :
  goto i_8;
  x_7 :
  Cpop();
  i_8 :
  Epopd(2,13);
  Return();
  n_2 :
  MoveTop(1,1);
  goto y_4;
  y_4 :
  TestFunFC(k_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_4;
  z_4 :
  TestFunFC(k_2,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto a_5;
  a_5 :
  TestFunFC(l_2,&&fail,Egetd(1,5));
  Rpush(k_8);
  goto s_22;
  k_8 :
  goto m_2;
  s_22 :
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_r_26);
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_26);
  OneNextSon();
  Ccall(_stratego_y_26);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto v_4;
  v_4 :
  TestFunFC(k_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto w_4;
  w_4 :
  TestFunFC(k_2,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_4;
  x_4 :
  TestFunFC(l_2,&&fail,Egetd(2,5));
  Rpush(m_8);
  goto t_22;
  m_8 :
  goto l_8;
  t_22 :
  Epushd(3,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(o_8);
  Rpush(p_8);
  u_22 :
  Cpush(w_8);
  Epushd(4,3);
  MoveTop(4,1);
  goto a_4;
  a_4 :
  TestFunFC(f_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto b_4;
  b_4 :
  TestFunFC(c_9,&&fail,Egetd(4,2));
  Rpush(b_9);
  goto f_23;
  b_9 :
  goto a_9;
  f_23 :
  Return();
  a_9 :
  Epopd(4,3);
  goto v_8;
  w_8 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_9);
  goto u_22;
  f_9 :
  AllBuild();
  goto d_9;
  v_8 :
  Cpop();
  d_9 :
  Return();
  p_8 :
  NotNULLd(0,8);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_c_25);
  goto n_8;
  o_8 :
  NotNULLd(0,8);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_d_25);
  goto g_9;
  n_8 :
  Cpop();
  g_9 :
  Cpush(i_9);
  Epushd(4,6);
  Cpush(n_9);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  goto j_9;
  n_9 :
  Cpush(r_9);
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(s_9);
  g_23 :
  Cpush(b_10);
  Epushd(5,3);
  MoveTop(5,1);
  goto d_4;
  d_4 :
  TestFunFC(f_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto e_4;
  e_4 :
  TestFunFC(k_10,&&fail,Egetd(5,2));
  Rpush(j_10);
  goto h_23;
  j_10 :
  goto d_10;
  h_23 :
  Return();
  d_10 :
  Epopd(5,3);
  goto a_10;
  b_10 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_10);
  goto g_23;
  u_10 :
  AllBuild();
  goto m_10;
  a_10 :
  Cpop();
  m_10 :
  Return();
  s_9 :
  Cpop();
  Crestore();
  Cjump();
  r_9 :
  Ccall(_stratego_z_26);
  goto q_9;
  j_9 :
  Cpop();
  q_9 :
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(0,8);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(4,2);
  goto r_4;
  r_4 :
  TestFunFC(k_2,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto s_4;
  s_4 :
  TestFunFC(k_2,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto t_4;
  t_4 :
  TestFunFC(l_2,&&fail,Egetd(4,6));
  Rpush(w_10);
  goto j_23;
  w_10 :
  goto v_10;
  j_23 :
  Epushd(5,2);
  Tdupl();
  Epushd(6,5);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Move(5,2,3,1);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",ATmakeString("dep"),App0("TNil"))));
  MoveTop(6,1);
  goto o_4;
  o_4 :
  TestFunFC(k_2,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto p_4;
  p_4 :
  TestFunFC(k_2,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto q_4;
  q_4 :
  TestFunFC(l_2,&&fail,Egetd(6,5));
  Rpush(y_10);
  goto r_23;
  y_10 :
  goto x_10;
  r_23 :
  Epushd(7,2);
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),App2("Cons",ATmakeString("."),App2("Cons",Egetd(6,4),App0("Nil")))));
  Ccall(_stratego_e_25);
  Ccall(_stratego_k_25);
  MoveTop(7,1);
  Move(5,1,7,1);
  NotNULLd(5,2);
  NotNULLd(4,5);
  Tset(App2("Cons",Egetd(5,2),App2("Cons",ATmakeString(":"),Egetd(4,5))));
  Cpush(a_11);
  Ccall(_stratego_w_24);
  goto z_10;
  a_11 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_11);
  w_23 :
  Cpush(e_11);
  Ccall(_stratego_w_24);
  goto d_11;
  e_11 :
  Epushd(8,3);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_11);
  goto w_23;
  h_11 :
  AllBuild();
  MoveTop(8,1);
  goto m_4;
  m_4 :
  TestFunFC(f_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(i_11);
  goto x_23;
  i_11 :
  goto g_11;
  x_23 :
  Tset(ATmakeString(" "));
  NotNULLd(8,2);
  NotNULLd(8,3);
  Tset(App2("Cons",ATmakeString(" "),App2("Cons",Egetd(8,2),Egetd(8,3))));
  Return();
  g_11 :
  Epopd(8,3);
  goto f_11;
  d_11 :
  Cpop();
  f_11 :
  Return();
  c_11 :
  AllBuild();
  goto b_11;
  z_10 :
  Cpop();
  b_11 :
  MoveTop(7,2);
  NotNULLd(5,1);
  NotNULLd(7,2);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(7,2),App0("TNil"))));
  Ccall(_stratego_m_25);
  Epopd(7,2);
  Return();
  x_10 :
  Epopd(6,5);
  Tpop();
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,5),App0("TNil"))));
  Epopd(5,2);
  Return();
  v_10 :
  Epopd(4,6);
  goto h_9;
  i_9 :
  goto j_11;
  h_9 :
  Cpop();
  j_11 :
  Ccall(_stratego_l_25);
  MoveTop(3,2);
  NotNULLd(0,2);
  NotNULLd(3,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(3,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_m_25);
  Epopd(3,2);
  Return();
  l_8 :
  Epopd(2,5);
  Return();
  m_2 :
  Epopd(1,5);
  Return();
  i_2 :
  Epopd(0,15);
ENDPROC

PROC(_stratego_v_24)
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(k_11);
  c_28 :
  Cpush(m_11);
  Cpush(o_11);
  Ccall(_stratego_w_24);
  goto n_11;
  o_11 :
  Cpush(r_11);
  Ccall(_stratego_x_24);
  goto q_11;
  r_11 :
  Epushd(0,5);
  MoveTop(0,1);
  goto x_25;
  x_25 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto y_25;
  y_25 :
  TestFunFC(f_0,&&x_11,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Cpush(z_11);
  Rpush(a_12);
  goto d_28;
  a_12 :
  goto y_11;
  z_11 :
  Ccontinue(b_12);
  Rpush(c_12);
  goto h_28;
  c_12 :
  goto y_11;
  b_12 :
  Rpush(e_12);
  goto k_28;
  e_12 :
  goto d_12;
  y_11 :
  Cpop();
  d_12 :
  goto w_11;
  x_11 :
  Rpush(w_11);
  goto h_28;
  w_11 :
  goto v_11;
  k_28 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto u_25;
  u_25 :
  TestStr(1,1,"-dep",&&fail);
  Rpush(g_12);
  goto l_28;
  g_12 :
  goto f_12;
  l_28 :
  Return();
  f_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,4);
  Tset(App1("Dependency",Egetd(0,4)));
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Cons",App1("Dependency",Egetd(0,4)),Egetd(0,5)));
  Return();
  v_11 :
  goto u_11;
  h_28 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto p_25;
  p_25 :
  TestStr(1,1,"-nodep",&&fail);
  Rpush(i_12);
  goto i_28;
  i_12 :
  goto h_12;
  i_28 :
  Return();
  h_12 :
  Epopd(1,1);
  Tpop();
  Tset(App0("NoDependency"));
  NotNULLd(0,3);
  Tset(App2("Cons",App0("NoDependency"),Egetd(0,3)));
  Return();
  u_11 :
  goto t_11;
  d_28 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto o_24;
  o_24 :
  TestStr(1,1,"-I",&&fail);
  Rpush(k_12);
  goto e_28;
  k_12 :
  goto j_12;
  e_28 :
  Return();
  j_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,4);
  Tset(App1("Include",Egetd(0,4)));
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Cons",App1("Include",Egetd(0,4)),Egetd(0,5)));
  Return();
  t_11 :
  Epopd(0,5);
  goto s_11;
  q_11 :
  Cpop();
  s_11 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_12);
  goto c_28;
  l_12 :
  AllBuild();
  goto p_11;
  n_11 :
  Cpop();
  p_11 :
  goto l_11;
  m_11 :
  Epushd(0,3);
  MoveTop(0,1);
  goto l_26;
  l_26 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(o_12);
  goto o_28;
  o_12 :
  goto n_12;
  o_28 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  n_12 :
  Epopd(0,3);
  goto m_12;
  l_11 :
  Cpop();
  m_12 :
  Return();
  k_11 :
  AllBuild();
ENDPROC

PROC(_stratego_w_24)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_28;
  q_28 :
  TestFunFC(g_8,&&fail,Egetd(0,1));
  Rpush(q_12);
  goto s_28;
  q_12 :
  goto p_12;
  s_28 :
  Return();
  p_12 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_24)
  Epushd(0,5);
  MoveTop(0,3);
  goto g_31;
  g_31 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto h_31;
  h_31 :
  TestFunFC(f_0,&&k_13,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(m_13);
  Rpush(n_13);
  goto a_35;
  n_13 :
  goto l_13;
  m_13 :
  Ccontinue(o_13);
  Rpush(x_13);
  goto d_35;
  x_13 :
  goto l_13;
  o_13 :
  Ccontinue(y_13);
  Rpush(z_13);
  goto g_35;
  z_13 :
  goto l_13;
  y_13 :
  Ccontinue(a_14);
  Rpush(f_14);
  goto j_35;
  f_14 :
  goto l_13;
  a_14 :
  Ccontinue(g_14);
  Rpush(h_14);
  goto m_35;
  h_14 :
  goto l_13;
  g_14 :
  Ccontinue(j_14);
  Rpush(k_14);
  goto p_35;
  k_14 :
  goto l_13;
  j_14 :
  Ccontinue(l_14);
  Rpush(m_14);
  goto t_35;
  m_14 :
  goto l_13;
  l_14 :
  Ccontinue(n_14);
  Rpush(o_14);
  goto x_35;
  o_14 :
  goto l_13;
  n_14 :
  Ccontinue(p_14);
  Rpush(q_14);
  goto b_36;
  q_14 :
  goto l_13;
  p_14 :
  Ccontinue(v_14);
  Rpush(w_14);
  goto f_36;
  w_14 :
  goto l_13;
  v_14 :
  Ccontinue(x_14);
  Rpush(y_14);
  goto j_36;
  y_14 :
  goto l_13;
  x_14 :
  Ccontinue(z_14);
  Rpush(b_15);
  goto m_36;
  b_15 :
  goto l_13;
  z_14 :
  Ccontinue(c_15);
  Rpush(e_15);
  goto p_36;
  e_15 :
  goto l_13;
  c_15 :
  Ccontinue(f_15);
  Rpush(s_15);
  goto s_36;
  s_15 :
  goto l_13;
  f_15 :
  Rpush(w_15);
  goto v_36;
  w_15 :
  goto t_15;
  l_13 :
  Cpop();
  t_15 :
  goto j_13;
  k_13 :
  Cpush(d_16);
  Rpush(h_16);
  goto a_35;
  h_16 :
  goto c_16;
  d_16 :
  Ccontinue(j_16);
  Rpush(k_16);
  goto d_35;
  k_16 :
  goto c_16;
  j_16 :
  Ccontinue(l_16);
  Rpush(m_16);
  goto g_35;
  m_16 :
  goto c_16;
  l_16 :
  Ccontinue(o_16);
  Rpush(q_16);
  goto j_35;
  q_16 :
  goto c_16;
  o_16 :
  Ccontinue(r_16);
  Rpush(c_17);
  goto m_35;
  c_17 :
  goto c_16;
  r_16 :
  Ccontinue(d_17);
  Rpush(e_17);
  goto j_36;
  e_17 :
  goto c_16;
  d_17 :
  Ccontinue(f_17);
  Rpush(g_17);
  goto m_36;
  g_17 :
  goto c_16;
  f_17 :
  Ccontinue(h_17);
  Rpush(i_17);
  goto p_36;
  i_17 :
  goto c_16;
  h_17 :
  Ccontinue(j_17);
  Rpush(k_17);
  goto s_36;
  k_17 :
  goto c_16;
  j_17 :
  Rpush(m_17);
  goto v_36;
  m_17 :
  goto l_17;
  c_16 :
  Cpop();
  l_17 :
  goto j_13;
  j_13 :
  goto i_13;
  v_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_31;
  e_31 :
  TestStr(1,1,"-?",&&fail);
  Rpush(o_17);
  goto w_36;
  o_17 :
  goto n_17;
  w_36 :
  Return();
  n_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  i_13 :
  goto h_13;
  s_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_31;
  b_31 :
  TestStr(1,1,"-h",&&fail);
  Rpush(q_17);
  goto t_36;
  q_17 :
  goto p_17;
  t_36 :
  Return();
  p_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  h_13 :
  goto g_13;
  p_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_30;
  y_30 :
  TestStr(1,1,"--help",&&fail);
  Rpush(s_17);
  goto q_36;
  s_17 :
  goto r_17;
  q_36 :
  Return();
  r_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  g_13 :
  goto f_13;
  m_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_30;
  v_30 :
  TestStr(1,1,"-s",&&fail);
  Rpush(u_17);
  goto n_36;
  u_17 :
  goto t_17;
  n_36 :
  Return();
  t_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  f_13 :
  goto e_13;
  j_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_30;
  s_30 :
  TestStr(1,1,"-b",&&fail);
  Rpush(w_17);
  goto k_36;
  w_17 :
  goto v_17;
  k_36 :
  Return();
  v_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  e_13 :
  goto d_13;
  f_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_30;
  o_30 :
  TestStr(1,1,"--output",&&fail);
  Rpush(y_17);
  goto g_36;
  y_17 :
  goto x_17;
  g_36 :
  Return();
  x_17 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  d_13 :
  goto c_13;
  b_36 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_30;
  k_30 :
  TestStr(1,1,"-o",&&fail);
  Rpush(a_18);
  goto c_36;
  a_18 :
  goto z_17;
  c_36 :
  Return();
  z_17 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  c_13 :
  goto b_13;
  x_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_30;
  g_30 :
  TestStr(1,1,"--input",&&fail);
  Rpush(c_18);
  goto y_35;
  c_18 :
  goto b_18;
  y_35 :
  Return();
  b_18 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  b_13 :
  goto a_13;
  t_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_30;
  c_30 :
  TestStr(1,1,"-i",&&fail);
  Rpush(e_18);
  goto u_35;
  e_18 :
  goto d_18;
  u_35 :
  Return();
  d_18 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  a_13 :
  goto z_12;
  p_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_29;
  y_29 :
  TestStr(1,1,"@version",&&fail);
  Rpush(g_18);
  goto q_35;
  g_18 :
  goto f_18;
  q_35 :
  Return();
  f_18 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  z_12 :
  goto y_12;
  m_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_29;
  v_29 :
  TestStr(1,1,"--version",&&fail);
  Rpush(m_18);
  goto n_35;
  m_18 :
  goto h_18;
  n_35 :
  Return();
  h_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  y_12 :
  goto x_12;
  j_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_29;
  s_29 :
  TestStr(1,1,"-v",&&fail);
  Rpush(o_18);
  goto k_35;
  o_18 :
  goto n_18;
  k_35 :
  Return();
  n_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  x_12 :
  goto t_12;
  g_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_29;
  p_29 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(q_18);
  goto h_35;
  q_18 :
  goto p_18;
  h_35 :
  Return();
  p_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  t_12 :
  goto s_12;
  d_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_29;
  m_29 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(s_18);
  goto e_35;
  s_18 :
  goto r_18;
  e_35 :
  Return();
  r_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  s_12 :
  goto r_12;
  a_35 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_29;
  j_29 :
  TestStr(1,1,"-S",&&fail);
  Rpush(u_18);
  goto b_35;
  u_18 :
  goto t_18;
  b_35 :
  Return();
  t_18 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  r_12 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_y_24)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_36;
  z_36 :
  TestFunFC(x_18,&&fail,Egetd(0,1));
  Rpush(w_18);
  goto b_37;
  w_18 :
  goto v_18;
  b_37 :
  Return();
  v_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_24)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_37;
  d_37 :
  TestFunFC(a_19,&&fail,Egetd(0,1));
  Rpush(z_18);
  goto f_37;
  z_18 :
  goto y_18;
  f_37 :
  Return();
  y_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_25)
  Epushd(0,1);
  Rpush(b_19);
  o_37 :
  Cpush(d_19);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_37;
  h_37 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_37;
  i_37 :
  TestFunFC(d_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_19);
  goto p_37;
  f_19 :
  goto e_19;
  p_37 :
  Move(0,1,1,3);
  Return();
  e_19 :
  Epopd(1,4);
  goto c_19;
  d_19 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_19);
  goto o_37;
  h_19 :
  AllBuild();
  goto g_19;
  c_19 :
  Cpop();
  g_19 :
  Return();
  b_19 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-I dir] [-i file]"),App2("Cons",ATmakeString(" [-o file] [-b] [-s] [--help|-h|-?]"),App2("Cons",ATmakeString(" [-dep target | -nodep]"),App0("Nil")))))),App0("TNil"))));
  Ccall(_stratego_m_25);
  Tset(MakeInt(1));
  Ccall(_stratego_b_25);
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_25)
  _ST_exit();
ENDPROC

PROC(_stratego_c_25)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_d_25)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_e_25)
  Rpush(i_19);
  q_37 :
  Cpush(k_19);
  Ccall(_stratego_w_24);
  goto j_19;
  k_19 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_25);
  OneNextSon();
  Rpush(m_19);
  goto q_37;
  m_19 :
  AllBuild();
  goto l_19;
  j_19 :
  Cpop();
  l_19 :
  Return();
  i_19 :
  Ccall(_stratego_h_25);
  Ccall(_stratego_i_25);
ENDPROC

PROC(_stratego_g_25)
  _ST_explode_string();
ENDPROC

PROC(_stratego_h_25)
  Rpush(n_19);
  y_37 :
  Cpush(p_19);
  Ccall(_stratego_w_24);
  goto o_19;
  p_19 :
  Epushd(0,3);
  MoveTop(0,1);
  goto s_37;
  s_37 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(s_19);
  goto z_37;
  s_19 :
  goto r_19;
  z_37 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(t_19);
  a_38 :
  Cpush(v_19);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_19);
  goto a_38;
  w_19 :
  AllBuild();
  goto u_19;
  v_19 :
  Ccall(_stratego_w_24);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(y_19);
  goto y_37;
  y_19 :
  goto x_19;
  u_19 :
  Cpop();
  x_19 :
  Return();
  t_19 :
  Return();
  r_19 :
  Epopd(0,3);
  goto q_19;
  o_19 :
  Cpop();
  q_19 :
  Return();
  n_19 :
ENDPROC

PROC(_stratego_i_25)
  _ST_implode_string();
ENDPROC

PROC(_stratego_k_25)
  _ST_open_file();
ENDPROC

PROC(_stratego_l_25)
  _ST_dtime();
ENDPROC

PROC(_stratego_m_25)
  _ST_printnl();
ENDPROC

PROC(_stratego_n_25)
  Epushd(0,5);
  MoveTop(0,5);
  goto s_38;
  s_38 :
  TestFunFC(k_2,&&c_20,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto t_38;
  t_38 :
  TestFunFC(k_2,&&d_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto u_38;
  u_38 :
  TestFunFC(l_2,&&e_20,Egetd(0,4));
  Cpush(g_20);
  Rpush(h_20);
  goto e_40;
  h_20 :
  goto f_20;
  g_20 :
  Rpush(j_20);
  goto j_40;
  j_20 :
  goto i_20;
  f_20 :
  Cpop();
  i_20 :
  goto b_20;
  e_20 :
  Rpush(b_20);
  goto j_40;
  d_20 :
  Rpush(b_20);
  goto j_40;
  c_20 :
  Rpush(b_20);
  goto j_40;
  b_20 :
  goto a_20;
  j_40 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(k_20);
  k_40 :
  Cpush(m_20);
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  Cpush(p_20);
  Epushd(1,7);
  MoveTop(1,1);
  goto i_38;
  i_38 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto j_38;
  j_38 :
  TestFunFC(k_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto k_38;
  k_38 :
  TestFunFC(k_2,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto l_38;
  l_38 :
  TestFunFC(l_2,&&fail,Egetd(1,6));
  Rpush(r_20);
  goto l_40;
  r_20 :
  goto q_20;
  l_40 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  q_20 :
  Epopd(1,7);
  goto n_20;
  p_20 :
  Ccall(_stratego_o_25);
  goto s_20;
  n_20 :
  Cpop();
  s_20 :
  OneNextSon();
  Ccall(_stratego_y_26);
  AllBuild();
  AllBuild();
  goto l_20;
  m_20 :
  Epushd(1,7);
  MoveTop(1,1);
  goto n_38;
  n_38 :
  TestFunFC(k_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_38;
  o_38 :
  TestFunFC(k_2,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto p_38;
  p_38 :
  TestFunFC(f_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto r_38;
  r_38 :
  TestFunFC(l_2,&&fail,Egetd(1,7));
  Rpush(z_20);
  goto m_40;
  z_20 :
  goto y_20;
  m_40 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  y_20 :
  Epopd(1,7);
  goto t_20;
  l_20 :
  Cpop();
  t_20 :
  Cpush(b_21);
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_24);
  OneNextSon();
  Ccall(_stratego_y_26);
  AllBuild();
  AllBuild();
  goto a_21;
  b_21 :
  Rpush(d_21);
  goto k_40;
  d_21 :
  goto c_21;
  a_21 :
  Cpop();
  c_21 :
  Return();
  k_20 :
  Return();
  a_20 :
  goto z_19;
  e_40 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(e_21);
  f_40 :
  Cpush(g_21);
  Ccall(_stratego_w_24);
  goto f_21;
  g_21 :
  Ccontinue(h_21);
  Epushd(1,3);
  MoveTop(1,1);
  goto g_38;
  g_38 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(j_21);
  goto g_40;
  j_21 :
  goto i_21;
  g_40 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_21);
  h_40 :
  Cpush(n_21);
  Epushd(2,3);
  MoveTop(2,1);
  goto f_38;
  f_38 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(p_21);
  goto i_40;
  p_21 :
  goto o_21;
  i_40 :
  Move(1,2,2,2);
  Return();
  o_21 :
  Epopd(2,3);
  goto l_21;
  n_21 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_21);
  goto h_40;
  r_21 :
  AllBuild();
  goto q_21;
  l_21 :
  Cpop();
  q_21 :
  Return();
  k_21 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(s_21);
  goto f_40;
  s_21 :
  Return();
  i_21 :
  Epopd(1,3);
  goto f_21;
  h_21 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_21);
  goto f_40;
  x_21 :
  AllBuild();
  goto u_21;
  f_21 :
  Cpop();
  u_21 :
  Return();
  e_21 :
  Return();
  z_19 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_25)
  Epushd(0,7);
  MoveTop(0,1);
  goto p_41;
  p_41 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto q_41;
  q_41 :
  TestFunFC(k_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto r_41;
  r_41 :
  TestFunFC(k_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_41;
  s_41 :
  TestFunFC(l_2,&&fail,Egetd(0,6));
  Rpush(a_22);
  goto t_43;
  a_22 :
  goto z_21;
  t_43 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto p_40;
  p_40 :
  TestFunFC(k_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_40;
  q_40 :
  TestFunFC(k_2,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_40;
  r_40 :
  TestFunFC(l_2,&&fail,Egetd(2,5));
  Rpush(c_22);
  goto u_43;
  c_22 :
  goto b_22;
  u_43 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  b_22 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto t_40;
  t_40 :
  TestFunFC(k_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto u_40;
  u_40 :
  TestFunFC(k_2,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_40;
  v_40 :
  TestFunFC(l_2,&&fail,Egetd(2,5));
  Rpush(e_22);
  goto v_43;
  e_22 :
  goto d_22;
  v_43 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  d_22 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(f_22);
  w_43 :
  Epushd(2,9);
  MoveTop(2,1);
  goto c_41;
  c_41 :
  TestFunFC(k_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto d_41;
  d_41 :
  TestFunFC(g_8,&&j_22,Egetd(2,2));
  goto e_41;
  e_41 :
  TestFunFC(k_2,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto f_41;
  f_41 :
  TestFunFC(g_8,&&fail,Egetd(2,6));
  goto g_41;
  g_41 :
  TestFunFC(l_2,&&fail,Egetd(2,9));
  Rpush(i_22);
  goto x_43;
  j_22 :
  TestFunFC(f_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_41;
  h_41 :
  TestFunFC(k_2,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto i_41;
  i_41 :
  TestFunFC(f_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto j_41;
  j_41 :
  TestFunFC(l_2,&&fail,Egetd(2,9));
  Rpush(i_22);
  goto y_43;
  i_22 :
  goto h_22;
  y_43 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  Rpush(l_22);
  goto w_43;
  l_22 :
  OneNextSon();
  Ccall(_stratego_y_26);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto z_40;
  z_40 :
  TestFunFC(k_2,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto a_41;
  a_41 :
  TestFunFC(k_2,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto b_41;
  b_41 :
  TestFunFC(l_2,&&fail,Egetd(3,5));
  Rpush(m_22);
  goto z_43;
  m_22 :
  goto k_22;
  z_43 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  k_22 :
  Epopd(3,5);
  Return();
  h_22 :
  goto g_22;
  x_43 :
  Tset(App0("Nil"));
  Return();
  g_22 :
  Epopd(2,9);
  Return();
  f_22 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto m_41;
  m_41 :
  TestFunFC(k_2,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto n_41;
  n_41 :
  TestFunFC(k_2,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto o_41;
  o_41 :
  TestFunFC(l_2,&&fail,Egetd(1,9));
  Rpush(o_22);
  goto b_44;
  o_22 :
  goto n_22;
  b_44 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(p_22);
  c_44 :
  Cpush(w_22);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_22);
  goto c_44;
  x_22 :
  AllBuild();
  goto v_22;
  w_22 :
  Ccall(_stratego_w_24);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto y_22;
  v_22 :
  Cpop();
  y_22 :
  Return();
  p_22 :
  Return();
  n_22 :
  Epopd(1,9);
  Return();
  z_21 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_r_25)
  _ST_file_exists();
ENDPROC

PROC(_stratego_s_25)
  Tdupl();
  Ccall(_stratego_z_25);
  Tset(MakeInt(1));
  Ccall(_stratego_b_25);
  Tpop();
ENDPROC

PROC(_stratego_z_25)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_m_25);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_a_26)
  Epushd(0,5);
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_25);
  OneNextSon();
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_25);
  OneNextSon();
  Ccall(_stratego_y_26);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto q_44;
  q_44 :
  TestFunFC(k_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_44;
  r_44 :
  TestFunFC(k_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto s_44;
  s_44 :
  TestFunFC(l_2,&&fail,Egetd(0,5));
  Rpush(a_23);
  goto a_45;
  a_23 :
  goto z_22;
  a_45 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(b_23);
  b_45 :
  Cpush(d_23);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_23);
  goto b_45;
  e_23 :
  AllBuild();
  goto c_23;
  d_23 :
  Ccall(_stratego_w_24);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto i_23;
  c_23 :
  Cpop();
  i_23 :
  Return();
  b_23 :
  Ccall(_stratego_i_25);
  Return();
  z_22 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_26)
  _ST_get_pid();
ENDPROC

PROC(_stratego_c_26)
  Rpush(k_23);
  g_46 :
  Epushd(0,4);
  MoveTop(0,1);
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_d_26);
  MoveTop(0,2);
  Tset(MakeInt(48));
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_e_26);
  MoveTop(0,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_f_26);
  Ccall(_stratego_g_26);
  MoveTop(0,4);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,4),App0("TNil"))));
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  Cpush(m_23);
  Epushd(1,1);
  MoveTop(1,1);
  goto m_45;
  m_45 :
  TestInt(1,1,0,&&fail);
  Rpush(o_23);
  goto q_46;
  o_23 :
  goto n_23;
  q_46 :
  Tset(App0("Nil"));
  Return();
  n_23 :
  Epopd(1,1);
  goto l_23;
  m_23 :
  Rpush(q_23);
  goto g_46;
  q_23 :
  goto p_23;
  l_23 :
  Cpop();
  p_23 :
  OneNextSon();
  Ccall(_stratego_y_26);
  AllBuild();
  AllBuild();
  Ccall(_stratego_h_26);
  Epopd(0,4);
  Return();
  k_23 :
  Ccall(_stratego_i_26);
  Ccall(_stratego_i_25);
ENDPROC

PROC(_stratego_d_26)
  _ST_mod();
ENDPROC

PROC(_stratego_e_26)
  _ST_add();
ENDPROC

PROC(_stratego_f_26)
  _ST_div();
ENDPROC

PROC(_stratego_g_26)
  _ST_int();
ENDPROC

PROC(_stratego_h_26)
  Epushd(0,7);
  MoveTop(0,1);
  goto t_46;
  t_46 :
  TestFunFC(k_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto u_46;
  u_46 :
  TestFunFC(k_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto v_46;
  v_46 :
  TestFunFC(g_8,&&v_23,Egetd(0,4));
  goto w_46;
  w_46 :
  TestFunFC(l_2,&&fail,Egetd(0,7));
  Rpush(u_23);
  goto j_47;
  v_23 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_46;
  x_46 :
  TestFunFC(l_2,&&fail,Egetd(0,7));
  Rpush(u_23);
  goto k_47;
  u_23 :
  goto t_23;
  k_47 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  t_23 :
  goto s_23;
  j_47 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  s_23 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_i_26)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(z_23);
  p_48 :
  Cpush(b_24);
  Epushd(1,7);
  MoveTop(1,1);
  goto n_47;
  n_47 :
  TestFunFC(k_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto o_47;
  o_47 :
  TestFunFC(f_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto p_47;
  p_47 :
  TestFunFC(k_2,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto q_47;
  q_47 :
  TestFunFC(l_2,&&fail,Egetd(1,7));
  Rpush(d_24);
  goto q_48;
  d_24 :
  goto c_24;
  q_48 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(e_24);
  goto p_48;
  e_24 :
  Return();
  c_24 :
  Epopd(1,7);
  goto a_24;
  b_24 :
  goto f_24;
  a_24 :
  Cpop();
  f_24 :
  Return();
  z_23 :
  MoveTop(0,2);
  goto s_47;
  s_47 :
  TestFunFC(k_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto t_47;
  t_47 :
  TestFunFC(g_8,&&fail,Egetd(0,3));
  goto u_47;
  u_47 :
  TestFunFC(k_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto v_47;
  v_47 :
  TestFunFC(l_2,&&fail,Egetd(0,6));
  Rpush(g_24);
  goto r_48;
  g_24 :
  goto y_23;
  r_48 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  y_23 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_j_26)
  _ST_call();
ENDPROC

PROC(_stratego_o_26)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_p_26)
  Epushd(0,1);
  MoveTop(0,1);
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("rm"),App2("TCons",App2("Cons",ATmakeString("-f"),Egetd(0,1)),App0("TNil"))));
  Ccall(_stratego_j_26);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_26)
  Epushd(0,6);
  MoveTop(0,1);
  goto b_49;
  b_49 :
  TestFunFC(k_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto c_49;
  c_49 :
  TestFunFC(k_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto d_49;
  d_49 :
  TestFunFC(j_24,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto e_49;
  e_49 :
  TestFunFC(l_2,&&fail,Egetd(0,6));
  Rpush(i_24);
  goto x_49;
  i_24 :
  goto h_24;
  x_49 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(k_24);
  y_49 :
  Cpush(m_24);
  Ccall(_stratego_w_24);
  goto l_24;
  m_24 :
  Ccontinue(n_24);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto y_48;
  y_48 :
  TestFunFC(r_24,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(q_24);
  goto z_49;
  q_24 :
  goto p_24;
  z_49 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  p_24 :
  Epopd(1,2);
  OneNextSon();
  Rpush(s_24);
  goto y_49;
  s_24 :
  AllBuild();
  goto l_24;
  n_24 :
  Epushd(1,3);
  MoveTop(1,1);
  goto a_49;
  a_49 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(f_25);
  goto a_50;
  f_25 :
  goto u_24;
  a_50 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(j_25);
  goto y_49;
  j_25 :
  Return();
  u_24 :
  Epopd(1,3);
  goto t_24;
  l_24 :
  Cpop();
  t_24 :
  Return();
  k_24 :
  Ccall(_stratego_h_25);
  Return();
  h_24 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_r_26)
  Rpush(q_25);
  k_51 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_50;
  n_50 :
  TestFunFC(g_8,&&k_26,Egetd(0,1));
  Rpush(w_25);
  goto l_51;
  k_26 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_25);
  goto m_51;
  w_25 :
  goto v_25;
  m_51 :
  Epushd(1,13);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  Rpush(a_27);
  goto k_51;
  a_27 :
  OneNextSon();
  Ccall(_stratego_y_26);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto e_50;
  e_50 :
  TestFunFC(k_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto f_50;
  f_50 :
  TestFunFC(k_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto g_50;
  g_50 :
  TestFunFC(k_2,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto h_50;
  h_50 :
  TestFunFC(l_2,&&fail,Egetd(1,6));
  goto i_50;
  i_50 :
  TestFunFC(k_2,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto j_50;
  j_50 :
  TestFunFC(k_2,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto k_50;
  k_50 :
  TestFunFC(k_2,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto l_50;
  l_50 :
  TestFunFC(l_2,&&fail,Egetd(1,12));
  goto m_50;
  m_50 :
  TestFunFC(l_2,&&fail,Egetd(1,13));
  Rpush(b_27);
  goto n_51;
  b_27 :
  goto n_26;
  n_51 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset(App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,9)),App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,11)),App0("TNil"))));
  Return();
  n_26 :
  Epopd(1,13);
  Return();
  v_25 :
  goto t_25;
  l_51 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  t_25 :
  Epopd(0,3);
  Return();
  q_25 :
ENDPROC

PROC(_stratego_x_26)
  Epushd(0,1);
  Rpush(c_27);
  h_52 :
  Cpush(f_27);
  Ccall(_stratego_w_24);
  goto e_27;
  f_27 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto t_51;
  t_51 :
  TestFunFC(j_24,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(i_27);
  goto i_52;
  i_27 :
  goto h_27;
  i_52 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(j_27);
  j_52 :
  Cpush(m_27);
  Ccall(_stratego_w_24);
  goto k_27;
  m_27 :
  Ccontinue(n_27);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(o_27);
  Tdupl();
  Epushd(2,2);
  MoveTop(2,1);
  goto q_51;
  q_51 :
  TestFunFC(r_24,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(q_27);
  goto k_52;
  q_27 :
  goto p_27;
  k_52 :
  Return();
  p_27 :
  Epopd(2,2);
  Cpop();
  Crestore();
  Cjump();
  o_27 :
  OneNextSon();
  Rpush(s_27);
  goto j_52;
  s_27 :
  AllBuild();
  goto k_27;
  n_27 :
  Epushd(2,3);
  MoveTop(2,1);
  goto s_51;
  s_51 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(v_27);
  goto l_52;
  v_27 :
  goto u_27;
  l_52 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(z_27);
  goto j_52;
  z_27 :
  Return();
  u_27 :
  Epopd(2,3);
  goto t_27;
  k_27 :
  Cpop();
  t_27 :
  Return();
  j_27 :
  Return();
  h_27 :
  Epopd(1,2);
  OneNextSon();
  Rpush(a_28);
  goto h_52;
  a_28 :
  AllBuild();
  goto g_27;
  e_27 :
  Cpop();
  g_27 :
  Return();
  c_27 :
  Ccall(_stratego_h_25);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Specification",Egetd(0,1)));
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_26)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_52;
  o_52 :
  TestFunFC(l_2,&&fail,Egetd(0,1));
  Rpush(f_28);
  goto q_52;
  f_28 :
  goto b_28;
  q_52 :
  Return();
  b_28 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_26)
  Ccall(_stratego_g_25);
  Cpush(j_28);
  Rpush(m_28);
  x_52 :
  Cpush(p_28);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_28);
  goto x_52;
  t_28 :
  AllBuild();
  goto n_28;
  p_28 :
  Epushd(0,3);
  MoveTop(0,1);
  goto s_52;
  s_52 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto t_52;
  t_52 :
  TestInt(0,2,46,&&fail);
  Rpush(w_28);
  goto y_52;
  w_28 :
  goto v_28;
  y_52 :
  Tset(App0("Nil"));
  Return();
  v_28 :
  Epopd(0,3);
  goto u_28;
  n_28 :
  Cpop();
  u_28 :
  Return();
  m_28 :
  goto g_28;
  j_28 :
  goto x_28;
  g_28 :
  Cpop();
  x_28 :
  Ccall(_stratego_i_25);
ENDPROC

DOIT

