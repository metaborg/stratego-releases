#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT

PROCDECL(_stratego_main);
PROCDECL(_stratego_r_5);
PROCDECL(_stratego_s_5);
PROCDECL(_stratego_t_5);
PROCDECL(_stratego_u_5);
PROCDECL(_stratego_v_5);
PROCDECL(_stratego_w_5);
PROCDECL(_stratego_x_5);
PROCDECL(_stratego_y_5);
PROCDECL(_stratego_z_5);
PROCDECL(_stratego_a_6);
PROCDECL(_stratego_b_6);
PROCDECL(_stratego_c_6);
PROCDECL(_stratego_d_6);
PROCDECL(_stratego_e_6);
PROCDECL(_stratego_f_6);
PROCDECL(_stratego_g_6);
PROCDECL(_stratego_h_6);

PROC(_stratego_main)
  Epushd(0,3);
  MoveTop(0,1);
  goto s_0;
  s_0 :
  TestFun(0,1,"Cons",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(b_0);
  goto l_17;
  b_0 :
  goto a_0;
  l_17 :
  Epushd(1,3);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(c_0);
  m_17 :
  Cpush(e_0);
  Ccall(_stratego_w_5);
  goto d_0;
  e_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  OneNextSon();
  Rpush(g_0);
  goto m_17;
  g_0 :
  AllBuild();
  goto f_0;
  d_0 :
  Cpop();
  f_0 :
  Return();
  c_0 :
  MoveTop(1,1);
  Ccall(_stratego_b_6);
  MoveTop(1,3);
  Move(1,2,1,3);
  NotNULLd(1,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_d_6);
  Rpush(h_0);
  q_17 :
  Cpush(j_0);
  Ccall(_stratego_w_5);
  goto i_0;
  j_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,5);
  MoveTop(2,1);
  goto p_0;
  p_0 :
  TestFun(2,1,"TCons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_0;
  q_0 :
  TestFun(2,3,"TCons",2,&&fail);
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_0;
  r_0 :
  TestFun(2,5,"TNil",0,&&fail);
  Rpush(m_0);
  goto r_17;
  m_0 :
  goto l_0;
  r_17 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Tdupl();
  Epushd(3,4);
  MoveTop(3,1);
  Tset(App0("stdout"));
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",ATmakeString(": "),App0("TNil"))));
  Ccall(_stratego_f_6);
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,3);
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,3),App2("Cons",Egetd(3,1),App0("Nil"))));
  Tdupl();
  NotNULLd(3,3);
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,3),App2("Cons",Egetd(3,1),App0("Nil"))));
  MoveTop(3,2);
  Tpop();
  NotNULLd(3,2);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(3,2),App0("TNil"))));
  Ccall(_stratego_e_6);
  Epopd(3,4);
  Tpop();
  Return();
  l_0 :
  Epopd(2,5);
  OneNextSon();
  Rpush(n_0);
  goto q_17;
  n_0 :
  AllBuild();
  goto k_0;
  i_0 :
  Cpop();
  k_0 :
  Return();
  h_0 :
  Epopd(1,3);
  Return();
  a_0 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_r_5)
  Epushd(0,9);
  MoveTop(0,1);
  Ccall(_stratego_s_5);
  MoveTop(0,3);
  Ccall(_stratego_v_5);
  MoveTop(0,5);
  Move(0,4,0,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_z_5);
  MoveTop(0,7);
  Move(0,6,0,7);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_a_6);
  MoveTop(0,9);
  Move(0,8,0,9);
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,8);
  Tset(App3("Size",App1("Constructors",Egetd(0,4)),App1("Rules",Egetd(0,6)),App1("Strategies",Egetd(0,8))));
  Tdupl();
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,8);
  Tset(App3("Size",App1("Constructors",Egetd(0,4)),App1("Rules",Egetd(0,6)),App1("Strategies",Egetd(0,8))));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,2),App0("TNil"))));
  Epopd(0,9);
ENDPROC

PROC(_stratego_s_5)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("parse-mod"),App2("TCons",App2("Cons",ATmakeString("-silent"),App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString("-o"),App2("Cons",ATmakeString("pm.bla"),App0("Nil")))))),App0("TNil"))));
  Ccall(_stratego_t_5);
  Tset(ATmakeString("pm.bla"));
  Ccall(_stratego_u_5);
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_5)
  _ST_call();
ENDPROC

PROC(_stratego_u_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_v_5)
  Rpush(o_0);
  g_18 :
  Epushd(0,3);
  MoveTop(0,3);
  goto r_3;
  r_3 :
  TestFun(0,3,"OpDecl",2,&&w_0);
  MoveArg(0,1,0,3,0);
  MoveArg(0,2,0,3,1);
  Cpush(y_0);
  Rpush(z_0);
  goto h_18;
  z_0 :
  goto x_0;
  y_0 :
  Rpush(b_1);
  goto j_18;
  b_1 :
  goto a_1;
  x_0 :
  Cpop();
  a_1 :
  goto v_0;
  w_0 :
  Rpush(v_0);
  goto j_18;
  v_0 :
  goto u_0;
  j_18 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto y_1;
  y_1 :
  TestFun(2,1,"TCons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto z_1;
  z_1 :
  TestFun(2,3,"TCons",2,&&fail);
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto a_2;
  a_2 :
  TestFun(2,5,"TNil",0,&&fail);
  Rpush(d_1);
  goto k_18;
  d_1 :
  goto c_1;
  k_18 :
  Move(1,1,2,4);
  Return();
  c_1 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(e_1);
  l_18 :
  Cpush(g_1);
  Ccall(_stratego_w_5);
  Tset(App0("Nil"));
  goto f_1;
  g_1 :
  Epushd(2,3);
  MoveTop(2,1);
  goto d_3;
  d_3 :
  TestFun(2,1,"Cons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(j_1);
  goto m_18;
  j_1 :
  goto i_1;
  m_18 :
  Epushd(3,9);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(k_1);
  goto g_18;
  k_1 :
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(l_1);
  goto l_18;
  l_1 :
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,1);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,3),App0("TNil"))));
  MoveTop(3,5);
  goto a_3;
  a_3 :
  TestFun(3,5,"TCons",2,&&fail);
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto b_3;
  b_3 :
  TestFun(3,7,"TCons",2,&&fail);
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto c_3;
  c_3 :
  TestFun(3,9,"TNil",0,&&fail);
  Rpush(n_1);
  goto p_18;
  n_1 :
  goto m_1;
  p_18 :
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(o_1);
  q_18 :
  Cpush(q_1);
  Ccall(_stratego_w_5);
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  goto p_1;
  q_1 :
  Ccontinue(r_1);
  Epushd(4,3);
  MoveTop(4,1);
  goto z_2;
  z_2 :
  TestFun(4,1,"Cons",2,&&fail);
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(t_1);
  goto s_18;
  t_1 :
  goto s_1;
  s_18 :
  Tdupl();
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  Rpush(u_1);
  t_18 :
  Cpush(w_1);
  Epushd(5,3);
  MoveTop(5,1);
  goto y_2;
  y_2 :
  TestFun(5,1,"Cons",2,&&fail);
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(b_2);
  goto u_18;
  b_2 :
  goto x_1;
  u_18 :
  Move(4,2,5,2);
  Return();
  x_1 :
  Epopd(5,3);
  goto v_1;
  w_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_2);
  goto t_18;
  d_2 :
  AllBuild();
  goto c_2;
  v_1 :
  Cpop();
  c_2 :
  Return();
  u_1 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(e_2);
  goto q_18;
  e_2 :
  Return();
  s_1 :
  Epopd(4,3);
  goto p_1;
  r_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_2);
  goto q_18;
  g_2 :
  AllBuild();
  goto f_2;
  p_1 :
  Cpop();
  f_2 :
  Return();
  o_1 :
  Return();
  m_1 :
  Epopd(3,9);
  Return();
  i_1 :
  Epopd(2,3);
  goto h_1;
  f_1 :
  Cpop();
  h_1 :
  Return();
  e_1 :
  Epopd(1,1);
  Return();
  u_0 :
  goto t_0;
  h_18 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  t_0 :
  Epopd(0,3);
  Return();
  o_0 :
  Ccall(_stratego_x_5);
ENDPROC

PROC(_stratego_w_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_3;
  t_3 :
  TestFun(0,1,"Nil",0,&&fail);
  Rpush(i_2);
  goto v_18;
  i_2 :
  goto h_2;
  v_18 :
  Return();
  h_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_5)
  Rpush(j_2);
  w_18 :
  Cpush(l_2);
  Ccall(_stratego_w_5);
  Tset(MakeInt(0));
  goto k_2;
  l_2 :
  Epushd(0,3);
  MoveTop(0,1);
  goto w_3;
  w_3 :
  TestFun(0,1,"Cons",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(o_2);
  goto x_18;
  o_2 :
  goto n_2;
  x_18 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_2);
  goto w_18;
  p_2 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_5);
  Epopd(1,1);
  Return();
  n_2 :
  Epopd(0,3);
  goto m_2;
  k_2 :
  Cpop();
  m_2 :
  Return();
  j_2 :
ENDPROC

PROC(_stratego_y_5)
  _ST_add();
ENDPROC

PROC(_stratego_z_5)
  Rpush(q_2);
  b_19 :
  Epushd(0,4);
  MoveTop(0,4);
  goto k_6;
  k_6 :
  TestFun(0,4,"RDef",3,&&u_2);
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  MoveArg(0,3,0,4,2);
  Cpush(w_2);
  Rpush(x_2);
  goto d_19;
  x_2 :
  goto v_2;
  w_2 :
  Rpush(f_3);
  goto g_19;
  f_3 :
  goto e_3;
  v_2 :
  Cpop();
  e_3 :
  goto t_2;
  u_2 :
  Rpush(t_2);
  goto g_19;
  t_2 :
  goto s_2;
  g_19 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  _ST_explode_term();
  MoveTop(2,1);
  goto d_4;
  d_4 :
  TestFun(2,1,"TCons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto e_4;
  e_4 :
  TestFun(2,3,"TCons",2,&&fail);
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_4;
  q_4 :
  TestFun(2,5,"TNil",0,&&fail);
  Rpush(h_3);
  goto h_19;
  h_3 :
  goto g_3;
  h_19 :
  Move(1,1,2,4);
  Return();
  g_3 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(i_3);
  i_19 :
  Cpush(k_3);
  Ccall(_stratego_w_5);
  Tset(App0("Nil"));
  goto j_3;
  k_3 :
  Epushd(2,3);
  MoveTop(2,1);
  goto j_6;
  j_6 :
  TestFun(2,1,"Cons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(n_3);
  goto j_19;
  n_3 :
  goto m_3;
  j_19 :
  Epushd(3,9);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(o_3);
  goto b_19;
  o_3 :
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(p_3);
  goto i_19;
  p_3 :
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,1);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,3),App0("TNil"))));
  MoveTop(3,5);
  goto z_4;
  z_4 :
  TestFun(3,5,"TCons",2,&&fail);
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto a_5;
  a_5 :
  TestFun(3,7,"TCons",2,&&fail);
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto i_6;
  i_6 :
  TestFun(3,9,"TNil",0,&&fail);
  Rpush(s_3);
  goto m_19;
  s_3 :
  goto q_3;
  m_19 :
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(u_3);
  n_19 :
  Cpush(x_3);
  Ccall(_stratego_w_5);
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  goto v_3;
  x_3 :
  Ccontinue(y_3);
  Epushd(4,3);
  MoveTop(4,1);
  goto y_4;
  y_4 :
  TestFun(4,1,"Cons",2,&&fail);
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(a_4);
  goto o_19;
  a_4 :
  goto z_3;
  o_19 :
  Tdupl();
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  Rpush(b_4);
  p_19 :
  Cpush(f_4);
  Epushd(5,3);
  MoveTop(5,1);
  goto x_4;
  x_4 :
  TestFun(5,1,"Cons",2,&&fail);
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(h_4);
  goto q_19;
  h_4 :
  goto g_4;
  q_19 :
  Move(4,2,5,2);
  Return();
  g_4 :
  Epopd(5,3);
  goto c_4;
  f_4 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_4);
  goto p_19;
  j_4 :
  AllBuild();
  goto i_4;
  c_4 :
  Cpop();
  i_4 :
  Return();
  b_4 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(k_4);
  goto n_19;
  k_4 :
  Return();
  z_3 :
  Epopd(4,3);
  goto v_3;
  y_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_4);
  goto n_19;
  m_4 :
  AllBuild();
  goto l_4;
  v_3 :
  Cpop();
  l_4 :
  Return();
  u_3 :
  Return();
  q_3 :
  Epopd(3,9);
  Return();
  m_3 :
  Epopd(2,3);
  goto l_3;
  j_3 :
  Cpop();
  l_3 :
  Return();
  i_3 :
  Epopd(1,1);
  Return();
  s_2 :
  goto r_2;
  d_19 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  r_2 :
  Epopd(0,4);
  Return();
  q_2 :
  Ccall(_stratego_x_5);
ENDPROC

PROC(_stratego_a_6)
  Rpush(n_4);
  r_19 :
  Epushd(0,4);
  MoveTop(0,4);
  goto e_7;
  e_7 :
  TestFun(0,4,"SDef",3,&&s_4);
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  MoveArg(0,3,0,4,2);
  Cpush(u_4);
  Rpush(v_4);
  goto s_19;
  v_4 :
  goto t_4;
  u_4 :
  Rpush(b_5);
  goto u_19;
  b_5 :
  goto w_4;
  t_4 :
  Cpop();
  w_4 :
  goto r_4;
  s_4 :
  Rpush(r_4);
  goto u_19;
  r_4 :
  goto p_4;
  u_19 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  _ST_explode_term();
  MoveTop(2,1);
  goto p_6;
  p_6 :
  TestFun(2,1,"TCons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_6;
  q_6 :
  TestFun(2,3,"TCons",2,&&fail);
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_6;
  r_6 :
  TestFun(2,5,"TNil",0,&&fail);
  Rpush(d_5);
  goto v_19;
  d_5 :
  goto c_5;
  v_19 :
  Move(1,1,2,4);
  Return();
  c_5 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(e_5);
  w_19 :
  Cpush(g_5);
  Ccall(_stratego_w_5);
  Tset(App0("Nil"));
  goto f_5;
  g_5 :
  Epushd(2,3);
  MoveTop(2,1);
  goto d_7;
  d_7 :
  TestFun(2,1,"Cons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(j_5);
  goto x_19;
  j_5 :
  goto i_5;
  x_19 :
  Epushd(3,9);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(k_5);
  goto r_19;
  k_5 :
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(l_5);
  goto w_19;
  l_5 :
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,1);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,3),App0("TNil"))));
  MoveTop(3,5);
  goto a_7;
  a_7 :
  TestFun(3,5,"TCons",2,&&fail);
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto b_7;
  b_7 :
  TestFun(3,7,"TCons",2,&&fail);
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto c_7;
  c_7 :
  TestFun(3,9,"TNil",0,&&fail);
  Rpush(n_5);
  goto a_20;
  n_5 :
  goto m_5;
  a_20 :
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(o_5);
  b_20 :
  Cpush(q_5);
  Ccall(_stratego_w_5);
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  goto p_5;
  q_5 :
  Ccontinue(l_6);
  Epushd(4,3);
  MoveTop(4,1);
  goto z_6;
  z_6 :
  TestFun(4,1,"Cons",2,&&fail);
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(n_6);
  goto c_20;
  n_6 :
  goto m_6;
  c_20 :
  Tdupl();
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  Rpush(o_6);
  d_20 :
  Cpush(t_6);
  Epushd(5,3);
  MoveTop(5,1);
  goto y_6;
  y_6 :
  TestFun(5,1,"Cons",2,&&fail);
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(v_6);
  goto e_20;
  v_6 :
  goto u_6;
  e_20 :
  Move(4,2,5,2);
  Return();
  u_6 :
  Epopd(5,3);
  goto s_6;
  t_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_6);
  goto d_20;
  x_6 :
  AllBuild();
  goto w_6;
  s_6 :
  Cpop();
  w_6 :
  Return();
  o_6 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(f_7);
  goto b_20;
  f_7 :
  Return();
  m_6 :
  Epopd(4,3);
  goto p_5;
  l_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_7);
  goto b_20;
  h_7 :
  AllBuild();
  goto g_7;
  p_5 :
  Cpop();
  g_7 :
  Return();
  o_5 :
  Return();
  m_5 :
  Epopd(3,9);
  Return();
  i_5 :
  Epopd(2,3);
  goto h_5;
  f_5 :
  Cpop();
  h_5 :
  Return();
  e_5 :
  Epopd(1,1);
  Return();
  p_4 :
  goto o_4;
  s_19 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  o_4 :
  Epopd(0,4);
  Return();
  n_4 :
  Ccall(_stratego_x_5);
ENDPROC

PROC(_stratego_b_6)
  Rpush(i_7);
  f_20 :
  Cpush(c_8);
  Ccall(_stratego_w_5);
  Tset(App2("TCons",ATmakeString("all"),App2("TCons",App3("Size",App1("Constructors",MakeInt(0)),App1("Rules",MakeInt(0)),App1("Strategies",MakeInt(0))),App0("TNil"))));
  goto j_7;
  c_8 :
  Epushd(0,3);
  MoveTop(0,1);
  goto b_8;
  b_8 :
  TestFun(0,1,"Cons",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(l_8);
  goto g_20;
  l_8 :
  goto f_8;
  g_20 :
  Epushd(1,25);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(t_8);
  goto f_20;
  t_8 :
  OneNextSon();
  Ccall(_stratego_c_6);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto k_7;
  k_7 :
  TestFun(1,1,"TCons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,13,1,1,1);
  goto l_7;
  l_7 :
  TestFun(1,2,"TCons",2,&&fail);
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto m_7;
  m_7 :
  TestFun(1,4,"TCons",2,&&fail);
  MoveArg(1,5,1,4,0);
  MoveArg(1,12,1,4,1);
  goto n_7;
  n_7 :
  TestFun(1,5,"Size",3,&&fail);
  MoveArg(1,6,1,5,0);
  MoveArg(1,8,1,5,1);
  MoveArg(1,10,1,5,2);
  goto o_7;
  o_7 :
  TestFun(1,6,"Constructors",1,&&fail);
  MoveArg(1,7,1,6,0);
  goto p_7;
  p_7 :
  TestFun(1,8,"Rules",1,&&fail);
  MoveArg(1,9,1,8,0);
  goto q_7;
  q_7 :
  TestFun(1,10,"Strategies",1,&&fail);
  MoveArg(1,11,1,10,0);
  goto r_7;
  r_7 :
  TestFun(1,12,"TNil",0,&&fail);
  goto s_7;
  s_7 :
  TestFun(1,13,"TCons",2,&&fail);
  MoveArg(1,14,1,13,0);
  MoveArg(1,25,1,13,1);
  goto t_7;
  t_7 :
  TestFun(1,14,"TCons",2,&&fail);
  MoveArg(1,15,1,14,0);
  MoveArg(1,16,1,14,1);
  goto u_7;
  u_7 :
  TestFun(1,16,"TCons",2,&&fail);
  MoveArg(1,17,1,16,0);
  MoveArg(1,24,1,16,1);
  goto v_7;
  v_7 :
  TestFun(1,17,"Size",3,&&fail);
  MoveArg(1,18,1,17,0);
  MoveArg(1,20,1,17,1);
  MoveArg(1,22,1,17,2);
  goto w_7;
  w_7 :
  TestFun(1,18,"Constructors",1,&&fail);
  MoveArg(1,19,1,18,0);
  goto x_7;
  x_7 :
  TestFun(1,20,"Rules",1,&&fail);
  MoveArg(1,21,1,20,0);
  goto y_7;
  y_7 :
  TestFun(1,22,"Strategies",1,&&fail);
  MoveArg(1,23,1,22,0);
  goto z_7;
  z_7 :
  TestFun(1,24,"TNil",0,&&fail);
  goto a_8;
  a_8 :
  TestFun(1,25,"TNil",0,&&fail);
  Rpush(v_8);
  goto h_20;
  v_8 :
  goto s_8;
  h_20 :
  Epushd(2,6);
  NotNULLd(1,7);
  NotNULLd(1,19);
  Tset(App2("TCons",Egetd(1,7),App2("TCons",Egetd(1,19),App0("TNil"))));
  Ccall(_stratego_y_5);
  MoveTop(2,2);
  Move(2,1,2,2);
  NotNULLd(1,9);
  NotNULLd(1,21);
  Tset(App2("TCons",Egetd(1,9),App2("TCons",Egetd(1,21),App0("TNil"))));
  Ccall(_stratego_y_5);
  MoveTop(2,4);
  Move(2,3,2,4);
  NotNULLd(1,11);
  NotNULLd(1,23);
  Tset(App2("TCons",Egetd(1,11),App2("TCons",Egetd(1,23),App0("TNil"))));
  Ccall(_stratego_y_5);
  MoveTop(2,6);
  Move(2,5,2,6);
  NotNULLd(1,15);
  NotNULLd(2,1);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(1,15),App2("TCons",App3("Size",App1("Constructors",Egetd(2,1)),App1("Rules",Egetd(2,3)),App1("Strategies",Egetd(2,5))),App0("TNil"))));
  Epopd(2,6);
  Return();
  s_8 :
  Epopd(1,25);
  Return();
  f_8 :
  Epopd(0,3);
  goto e_8;
  j_7 :
  Cpop();
  e_8 :
  Return();
  i_7 :
ENDPROC

PROC(_stratego_c_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_8;
  d_8 :
  TestFun(0,1,"TNil",0,&&fail);
  Rpush(z_8);
  goto l_20;
  z_8 :
  goto y_8;
  l_20 :
  Return();
  y_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_6)
  Epushd(0,7);
  MoveTop(0,1);
  goto g_8;
  g_8 :
  TestFun(0,1,"TCons",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_8;
  h_8 :
  TestFun(0,3,"TCons",2,&&fail);
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto i_8;
  i_8 :
  TestFun(0,4,"Nil",0,&&j_9);
  goto j_8;
  j_8 :
  TestFun(0,7,"TNil",0,&&fail);
  Rpush(i_9);
  goto m_20;
  j_9 :
  TestFun(0,4,"Cons",2,&&fail);
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto k_8;
  k_8 :
  TestFun(0,7,"TNil",0,&&fail);
  Rpush(i_9);
  goto n_20;
  i_9 :
  goto g_9;
  n_20 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  g_9 :
  goto f_9;
  m_20 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  f_9 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_e_6)
  _ST_printnl();
ENDPROC

PROC(_stratego_f_6)
  Epushd(0,5);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_6);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_6);
  OneNextSon();
  Ccall(_stratego_c_6);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto m_8;
  m_8 :
  TestFun(0,1,"TCons",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto n_8;
  n_8 :
  TestFun(0,3,"TCons",2,&&fail);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto o_8;
  o_8 :
  TestFun(0,5,"TNil",0,&&fail);
  Rpush(l_9);
  goto o_20;
  l_9 :
  goto k_9;
  o_20 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(n_9);
  p_20 :
  Cpush(s_9);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_9);
  goto p_20;
  t_9 :
  AllBuild();
  goto q_9;
  s_9 :
  Ccall(_stratego_w_5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto u_9;
  q_9 :
  Cpop();
  u_9 :
  Return();
  n_9 :
  Ccall(_stratego_h_6);
  Return();
  k_9 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_6)
  _ST_explode_string();
ENDPROC

PROC(_stratego_h_6)
  _ST_implode_string();
ENDPROC
