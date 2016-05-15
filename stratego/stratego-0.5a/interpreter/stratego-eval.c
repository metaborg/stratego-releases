#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,v_49);
VARDECL(AFun,a_48);
VARDECL(AFun,p_46);
VARDECL(AFun,q_44);
VARDECL(AFun,h_43);
VARDECL(AFun,i_42);
VARDECL(AFun,o_41);
VARDECL(AFun,j_40);
VARDECL(AFun,m_27);
VARDECL(AFun,m_25);
VARDECL(AFun,g_25);
VARDECL(AFun,u_23);
VARDECL(AFun,z_17);
VARDECL(AFun,p_17);
VARDECL(AFun,n_17);
VARDECL(AFun,m_17);
VARDECL(AFun,r_16);
VARDECL(AFun,d_13);
VARDECL(AFun,g_10);
VARDECL(AFun,u_9);
VARDECL(AFun,f_9);
VARDECL(AFun,x_8);
VARDECL(AFun,r_7);
VARDECL(AFun,o_7);
VARDECL(AFun,y_5);
VARDECL(AFun,r_5);
VARDECL(AFun,q_5);
VARDECL(AFun,o_2);
VARDECL(AFun,h_2);
VARDECL(AFun,g_2);
VARDECL(AFun,f_2);
VARDECL(AFun,d_2);
VARDECL(AFun,o_0);
VARDECL(AFun,e_0);
VARDECL(AFun,d_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_q_10);
PROCDECL(_stratego_r_10);
PROCDECL(_stratego_s_10);
PROCDECL(_stratego_t_10);
PROCDECL(_stratego_u_10);
PROCDECL(_stratego_v_10);
PROCDECL(_stratego_w_10);
PROCDECL(_stratego_x_10);
PROCDECL(_stratego_y_10);
PROCDECL(_stratego_z_10);
PROCDECL(_stratego_a_11);
PROCDECL(_stratego_b_11);
PROCDECL(_stratego_c_11);
PROCDECL(_stratego_d_11);
PROCDECL(_stratego_e_11);
PROCDECL(_stratego_f_11);
PROCDECL(_stratego_g_11);
PROCDECL(_stratego_h_11);
PROCDECL(_stratego_m_11);
PROCDECL(_stratego_n_11);
PROCDECL(_stratego_o_11);
PROCDECL(_stratego_p_11);
PROCDECL(_stratego_q_11);
PROCDECL(_stratego_r_11);
PROCDECL(_stratego_u_11);
PROCDECL(_stratego_v_11);
PROCDECL(_stratego_w_11);
PROCDECL(_stratego_x_11);
PROCDECL(_stratego_y_11);
PROCDECL(_stratego_z_11);
PROCDECL(_stratego_a_12);
PROCDECL(_stratego_b_12);
PROCDECL(_stratego_c_12);
PROCDECL(_stratego_d_12);
PROCDECL(_stratego_e_12);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(v_49,ATmakeAFun("Undefined",1,0));
  MOVE(a_48,ATmakeAFun("Help",0,0));
  MOVE(p_46,ATmakeAFun("Input",1,0));
  MOVE(q_44,ATmakeAFun("Binary",0,0));
  MOVE(h_43,ATmakeAFun("Output",1,0));
  MOVE(i_42,ATmakeAFun("Program",1,0));
  MOVE(o_41,ATmakeAFun("Runtime",1,0));
  MOVE(j_40,ATmakeAFun("Silent",0,0));
  MOVE(m_27,ATmakeAFun("Pair",2,0));
  MOVE(m_25,ATmakeAFun("All",1,0));
  MOVE(g_25,ATmakeAFun("Build",1,0));
  MOVE(u_23,ATmakeAFun("Match",1,0));
  MOVE(z_17,ATmakeAFun("Rec",2,0));
  MOVE(p_17,ATmakeAFun("Let",2,0));
  MOVE(n_17,ATmakeAFun("SVar",1,0));
  MOVE(m_17,ATmakeAFun("Call",2,0));
  MOVE(r_16,ATmakeAFun("Test",1,0));
  MOVE(d_13,ATmakeAFun("Not",1,0));
  MOVE(g_10,ATmakeAFun("Op",2,0));
  MOVE(u_9,ATmakeAFun("Seq",2,0));
  MOVE(f_9,ATmakeAFun("Id",0,0));
  MOVE(x_8,ATmakeAFun("LChoice",2,0));
  MOVE(r_7,ATmakeAFun("Fail",0,0));
  MOVE(o_7,ATmakeAFun("Choice",2,0));
  MOVE(y_5,ATmakeAFun("SDef",3,0));
  MOVE(r_5,ATmakeAFun("UndefineDefs",1,0));
  MOVE(q_5,ATmakeAFun("UndefineOps",1,0));
  MOVE(o_2,ATmakeAFun("Var",1,0));
  MOVE(h_2,ATmakeAFun("Restore",2,0));
  MOVE(g_2,ATmakeAFun("Clos",2,0));
  MOVE(f_2,ATmakeAFun("Scope",2,0));
  MOVE(d_2,ATmakeAFun("App",2,0));
  MOVE(o_0,ATmakeAFun("Nil",0,0));
  MOVE(e_0,ATmakeAFun("TNil",0,0));
  MOVE(d_0,ATmakeAFun("TCons",2,0));
  MOVE(c_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_q_10)
  _ST_destroy_table();
ENDPROC

PROC(_stratego_r_10)
  Ccall(_stratego_q_10);
ENDPROC

PROC(_stratego_s_10)
  Epushd(0,7);
  MoveTop(0,1);
  goto t_6;
  t_6 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto u_6;
  u_6 :
  TestFunFC(d_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto u_8;
  u_8 :
  TestFunFC(d_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto n_9;
  n_9 :
  TestFunFC(e_0,&&fail,Egetd(0,6));
  Rpush(b_0);
  goto y_0;
  b_0 :
  goto a_0;
  y_0 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto s_2;
  s_2 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto t_2;
  t_2 :
  TestFunFC(d_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_3;
  o_3 :
  TestFunFC(e_0,&&fail,Egetd(2,5));
  Rpush(g_0);
  goto e_1;
  g_0 :
  goto f_0;
  e_1 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  f_0 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto e_4;
  e_4 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto f_4;
  f_4 :
  TestFunFC(d_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_4;
  r_4 :
  TestFunFC(e_0,&&fail,Egetd(2,5));
  Rpush(i_0);
  goto p_3;
  i_0 :
  goto h_0;
  p_3 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  h_0 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(j_0);
  u_13 :
  Epushd(2,9);
  MoveTop(2,1);
  goto f_5;
  f_5 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto k_5;
  k_5 :
  TestFunFC(o_0,&&n_0,Egetd(2,2));
  goto l_5;
  l_5 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto h_6;
  h_6 :
  TestFunFC(o_0,&&fail,Egetd(2,6));
  goto i_6;
  i_6 :
  TestFunFC(e_0,&&fail,Egetd(2,9));
  Rpush(m_0);
  goto s_4;
  n_0 :
  TestFunFC(c_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto j_6;
  j_6 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto k_6;
  k_6 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto l_6;
  l_6 :
  TestFunFC(e_0,&&fail,Egetd(2,9));
  Rpush(m_0);
  goto a_5;
  m_0 :
  goto l_0;
  a_5 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(q_0);
  goto u_13;
  q_0 :
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto c_5;
  c_5 :
  TestFunFC(d_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto d_5;
  d_5 :
  TestFunFC(d_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto e_5;
  e_5 :
  TestFunFC(e_0,&&fail,Egetd(3,5));
  Rpush(r_0);
  goto b_5;
  r_0 :
  goto p_0;
  b_5 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  p_0 :
  Epopd(3,5);
  Return();
  l_0 :
  goto k_0;
  s_4 :
  Tset(App0("Nil"));
  Return();
  k_0 :
  Epopd(2,9);
  Return();
  j_0 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto o_6;
  o_6 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto p_6;
  p_6 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto q_6;
  q_6 :
  TestFunFC(e_0,&&fail,Egetd(1,9));
  Rpush(t_0);
  goto n_6;
  t_0 :
  goto s_0;
  n_6 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(u_0);
  v_13 :
  Cpush(w_0);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_0);
  goto v_13;
  x_0 :
  AllBuild();
  goto v_0;
  w_0 :
  Ccall(_stratego_e_12);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto z_0;
  v_0 :
  Cpop();
  z_0 :
  Return();
  u_0 :
  Return();
  s_0 :
  Epopd(1,9);
  Return();
  a_0 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_t_10)
  Rpush(a_1);
  w_14 :
  Epushd(0,11);
  MoveTop(0,5);
  goto y_13;
  y_13 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto z_13;
  z_13 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto a_14;
  a_14 :
  TestFunFC(c_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto b_14;
  b_14 :
  TestFunFC(e_0,&&fail,Egetd(0,11));
  goto c_14;
  c_14 :
  TestFunFC(d_0,&&f_1,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto d_14;
  d_14 :
  TestFunFC(d_0,&&g_1,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto e_14;
  e_14 :
  TestFunFC(e_0,&&h_1,Egetd(0,4));
  Cpush(j_1);
  Rpush(k_1);
  goto w_13;
  k_1 :
  goto i_1;
  j_1 :
  Rpush(m_1);
  goto x_13;
  m_1 :
  goto l_1;
  i_1 :
  Cpop();
  l_1 :
  goto d_1;
  h_1 :
  Rpush(d_1);
  goto x_13;
  g_1 :
  Rpush(d_1);
  goto x_13;
  f_1 :
  Rpush(d_1);
  goto x_13;
  d_1 :
  goto c_1;
  x_13 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(n_1);
  goto w_14;
  n_1 :
  Return();
  c_1 :
  goto b_1;
  w_13 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  b_1 :
  Epopd(0,11);
  Return();
  a_1 :
ENDPROC

PROC(_stratego_u_10)
  Epushd(0,7);
  MoveTop(0,1);
  goto j_16;
  j_16 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto m_16;
  m_16 :
  TestFunFC(d_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto p_16;
  p_16 :
  TestFunFC(e_0,&&r_1,Egetd(0,5));
  Rpush(q_1);
  goto o_15;
  r_1 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto w_16;
  w_16 :
  TestFunFC(e_0,&&fail,Egetd(0,7));
  Rpush(q_1);
  goto p_15;
  q_1 :
  goto p_1;
  p_15 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(s_1);
  m_18 :
  Epushd(2,9);
  MoveTop(2,1);
  goto a_16;
  a_16 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto b_16;
  b_16 :
  TestFunFC(o_0,&&w_1,Egetd(2,2));
  goto c_16;
  c_16 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto d_16;
  d_16 :
  TestFunFC(o_0,&&fail,Egetd(2,6));
  goto e_16;
  e_16 :
  TestFunFC(e_0,&&fail,Egetd(2,9));
  Rpush(v_1);
  goto q_15;
  w_1 :
  TestFunFC(c_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto f_16;
  f_16 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto g_16;
  g_16 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto h_16;
  h_16 :
  TestFunFC(e_0,&&fail,Egetd(2,9));
  Rpush(v_1);
  goto v_15;
  v_1 :
  goto u_1;
  v_15 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(y_1);
  goto m_18;
  y_1 :
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto x_15;
  x_15 :
  TestFunFC(d_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto y_15;
  y_15 :
  TestFunFC(d_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_15;
  z_15 :
  TestFunFC(e_0,&&fail,Egetd(3,5));
  Rpush(z_1);
  goto w_15;
  z_1 :
  goto x_1;
  w_15 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  x_1 :
  Epopd(3,5);
  Return();
  u_1 :
  goto t_1;
  q_15 :
  Tset(App0("Nil"));
  Return();
  t_1 :
  Epopd(2,9);
  Return();
  s_1 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  p_1 :
  goto o_1;
  o_15 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  o_1 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_v_10)
  Epushd(0,7);
  MoveTop(0,1);
  goto i_20;
  i_20 :
  TestFunFC(d_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto j_20;
  j_20 :
  TestFunFC(f_2,&&e_2,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_20;
  k_20 :
  TestFunFC(g_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(c_2);
  goto n_18;
  e_2 :
  TestFunFC(h_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_20;
  l_20 :
  TestFunFC(g_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(c_2);
  goto o_18;
  c_2 :
  goto b_2;
  o_18 :
  Epushd(1,6);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Rpush(i_2);
  b_24 :
  Cpush(k_2);
  Ccall(_stratego_e_12);
  goto j_2;
  k_2 :
  Ccontinue(l_2);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(3,6);
  MoveTop(3,1);
  goto w_19;
  w_19 :
  TestFunFC(d_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,4,3,1,1);
  goto x_19;
  x_19 :
  TestFunFC(o_2,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  goto y_19;
  y_19 :
  TestFunFC(d_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto z_19;
  z_19 :
  TestFunFC(e_0,&&fail,Egetd(3,6));
  Rpush(n_2);
  goto t_19;
  n_2 :
  goto m_2;
  t_19 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Cpush(p_2);
  Tdupl();
  Rpush(q_2);
  c_24 :
  Cpush(u_2);
  Epushd(4,3);
  MoveTop(4,1);
  goto v_19;
  v_19 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(w_2);
  goto u_19;
  w_2 :
  goto v_2;
  u_19 :
  Move(3,3,4,2);
  Return();
  v_2 :
  Epopd(4,3);
  goto r_2;
  u_2 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_2);
  goto c_24;
  y_2 :
  AllBuild();
  goto x_2;
  r_2 :
  Cpop();
  x_2 :
  Return();
  q_2 :
  Cpop();
  Crestore();
  Cjump();
  p_2 :
  Tpop();
  Return();
  m_2 :
  Epopd(3,6);
  OneNextSon();
  Rpush(z_2);
  goto b_24;
  z_2 :
  AllBuild();
  goto j_2;
  l_2 :
  Epushd(3,3);
  MoveTop(3,1);
  goto b_20;
  b_20 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(c_3);
  goto a_20;
  c_3 :
  goto b_3;
  a_20 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(d_3);
  goto b_24;
  d_3 :
  Return();
  b_3 :
  Epopd(3,3);
  goto a_3;
  j_2 :
  Cpop();
  a_3 :
  Return();
  i_2 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,4);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(1,2);
  goto f_20;
  f_20 :
  TestFunFC(d_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto g_20;
  g_20 :
  TestFunFC(d_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto h_20;
  h_20 :
  TestFunFC(e_0,&&fail,Egetd(1,6));
  Rpush(f_3);
  goto d_20;
  f_3 :
  goto e_3;
  d_20 :
  Epushd(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(g_3);
  d_24 :
  Cpush(i_3);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_3);
  goto d_24;
  j_3 :
  AllBuild();
  goto h_3;
  i_3 :
  Ccall(_stratego_e_12);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto k_3;
  h_3 :
  Cpop();
  k_3 :
  Return();
  g_3 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,7);
  Tset(App2("Clos",Egetd(2,1),Egetd(0,7)));
  Epopd(2,1);
  Return();
  e_3 :
  Epopd(1,6);
  Return();
  b_2 :
  goto a_2;
  n_18 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,7);
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Rpush(l_3);
  x_23 :
  Cpush(n_3);
  Ccall(_stratego_e_12);
  goto m_3;
  n_3 :
  Ccontinue(q_3);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(3,6);
  MoveTop(3,1);
  goto t_18;
  t_18 :
  TestFunFC(d_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,4,3,1,1);
  goto u_18;
  u_18 :
  TestFunFC(o_2,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  goto v_18;
  v_18 :
  TestFunFC(d_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto w_18;
  w_18 :
  TestFunFC(e_0,&&fail,Egetd(3,6));
  Rpush(s_3);
  goto q_18;
  s_3 :
  goto r_3;
  q_18 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Cpush(t_3);
  Tdupl();
  Rpush(u_3);
  y_23 :
  Cpush(w_3);
  Epushd(4,3);
  MoveTop(4,1);
  goto s_18;
  s_18 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(y_3);
  goto r_18;
  y_3 :
  goto x_3;
  r_18 :
  Move(3,3,4,2);
  Return();
  x_3 :
  Epopd(4,3);
  goto v_3;
  w_3 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_4);
  goto y_23;
  a_4 :
  AllBuild();
  goto z_3;
  v_3 :
  Cpop();
  z_3 :
  Return();
  u_3 :
  Cpop();
  Crestore();
  Cjump();
  t_3 :
  Tpop();
  Return();
  r_3 :
  Epopd(3,6);
  OneNextSon();
  Rpush(b_4);
  goto x_23;
  b_4 :
  AllBuild();
  goto m_3;
  q_3 :
  Epushd(3,3);
  MoveTop(3,1);
  goto d_19;
  d_19 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(g_4);
  goto c_19;
  g_4 :
  goto d_4;
  c_19 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(h_4);
  goto x_23;
  h_4 :
  Return();
  d_4 :
  Epopd(3,3);
  goto c_4;
  m_3 :
  Cpop();
  c_4 :
  Return();
  l_3 :
  MoveTop(2,1);
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Rpush(i_4);
  z_23 :
  Cpush(k_4);
  Ccall(_stratego_e_12);
  goto j_4;
  k_4 :
  Ccontinue(l_4);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(3,6);
  MoveTop(3,1);
  goto i_19;
  i_19 :
  TestFunFC(d_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,4,3,1,1);
  goto j_19;
  j_19 :
  TestFunFC(o_2,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  goto k_19;
  k_19 :
  TestFunFC(d_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto l_19;
  l_19 :
  TestFunFC(e_0,&&fail,Egetd(3,6));
  Rpush(n_4);
  goto f_19;
  n_4 :
  goto m_4;
  f_19 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(o_4);
  a_24 :
  Cpush(q_4);
  Epushd(4,3);
  MoveTop(4,1);
  goto h_19;
  h_19 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(u_4);
  goto g_19;
  u_4 :
  goto t_4;
  g_19 :
  Move(3,3,4,2);
  Return();
  t_4 :
  Epopd(4,3);
  goto p_4;
  q_4 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_4);
  goto a_24;
  w_4 :
  AllBuild();
  goto v_4;
  p_4 :
  Cpop();
  v_4 :
  Return();
  o_4 :
  Tpop();
  Return();
  m_4 :
  Epopd(3,6);
  OneNextSon();
  Rpush(x_4);
  goto z_23;
  x_4 :
  AllBuild();
  goto j_4;
  l_4 :
  Epushd(3,3);
  MoveTop(3,1);
  goto n_19;
  n_19 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(g_5);
  goto m_19;
  g_5 :
  goto z_4;
  m_19 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(h_5);
  goto z_23;
  h_5 :
  Return();
  z_4 :
  Epopd(3,3);
  goto y_4;
  j_4 :
  Cpop();
  y_4 :
  Return();
  i_4 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto q_19;
  q_19 :
  TestFunFC(d_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_19;
  r_19 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto s_19;
  s_19 :
  TestFunFC(e_0,&&fail,Egetd(2,7));
  Rpush(j_5);
  goto p_19;
  j_5 :
  goto i_5;
  p_19 :
  Move(1,1,2,4);
  Move(1,2,2,6);
  Return();
  i_5 :
  Epopd(2,7);
  Tpop();
  NotNULLd(0,4);
  NotNULLd(0,3);
  NotNULLd(1,2);
  NotNULLd(1,1);
  NotNULLd(0,7);
  Tset(App2("App",App2("Seq",Egetd(0,4),App2("Restore",Egetd(0,3),Egetd(1,2))),App2("Clos",Egetd(1,1),Egetd(0,7))));
  Epopd(1,2);
  Return();
  a_2 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_w_10)
  Epushd(0,4);
  MoveTop(0,1);
  goto x_24;
  x_24 :
  TestFunFC(d_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto y_24;
  y_24 :
  TestFunFC(q_5,&&p_5,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(o_5);
  goto e_24;
  p_5 :
  TestFunFC(r_5,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(o_5);
  goto f_24;
  o_5 :
  goto n_5;
  f_24 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_5);
  r_26 :
  Cpush(u_5);
  Ccall(_stratego_e_12);
  goto t_5;
  u_5 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(1,4);
  MoveTop(1,1);
  goto w_24;
  w_24 :
  TestFunFC(y_5,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  Rpush(x_5);
  goto o_24;
  x_5 :
  goto w_5;
  o_24 :
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",Egetd(1,2),App0("TNil"))));
  MoveTop(2,1);
  goto t_24;
  t_24 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto u_24;
  u_24 :
  TestFunFC(d_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_24;
  v_24 :
  TestFunFC(e_0,&&fail,Egetd(2,5));
  Rpush(a_6);
  goto p_24;
  a_6 :
  goto z_5;
  p_24 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  Cpush(c_6);
  Epushd(5,3);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_y_10);
  MoveTop(5,1);
  goto r_24;
  r_24 :
  TestFunFC(c_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(e_6);
  goto q_24;
  e_6 :
  goto d_6;
  q_24 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Return();
  d_6 :
  Epopd(5,3);
  goto b_6;
  c_6 :
  Tset(App0("Nil"));
  goto f_6;
  b_6 :
  Cpop();
  f_6 :
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(2,2);
  NotNULLd(2,4);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App2("TCons",Egetd(3,1),App0("TNil")))));
  Ccall(_stratego_x_10);
  Epopd(4,1);
  Tpop();
  Epopd(3,1);
  Return();
  z_5 :
  Epopd(2,5);
  Return();
  w_5 :
  Epopd(1,4);
  OneNextSon();
  Rpush(g_6);
  goto r_26;
  g_6 :
  AllBuild();
  goto v_5;
  t_5 :
  Cpop();
  v_5 :
  Return();
  s_5 :
  Tpop();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  n_5 :
  goto m_5;
  e_24 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(m_6);
  q_26 :
  Cpush(s_6);
  Ccall(_stratego_e_12);
  goto r_6;
  s_6 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(1,6);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(1,2);
  goto l_24;
  l_24 :
  TestFunFC(d_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto m_24;
  m_24 :
  TestFunFC(d_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto n_24;
  n_24 :
  TestFunFC(e_0,&&fail,Egetd(1,6));
  Rpush(x_6);
  goto h_24;
  x_6 :
  goto w_6;
  h_24 :
  Epushd(2,1);
  Tdupl();
  Epushd(3,1);
  Cpush(z_6);
  Epushd(4,3);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",Egetd(1,5),App0("TNil"))));
  Ccall(_stratego_y_10);
  MoveTop(4,1);
  goto j_24;
  j_24 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(b_7);
  goto i_24;
  b_7 :
  goto a_7;
  i_24 :
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Return();
  a_7 :
  Epopd(4,3);
  goto y_6;
  z_6 :
  Tset(App0("Nil"));
  goto c_7;
  y_6 :
  Cpop();
  c_7 :
  MoveTop(3,1);
  Move(2,1,3,1);
  NotNULLd(1,3);
  NotNULLd(1,5);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",Egetd(1,5),App2("TCons",Egetd(2,1),App0("TNil")))));
  Ccall(_stratego_x_10);
  Epopd(3,1);
  Tpop();
  Epopd(2,1);
  Return();
  w_6 :
  Epopd(1,6);
  OneNextSon();
  Rpush(d_7);
  goto q_26;
  d_7 :
  AllBuild();
  goto v_6;
  r_6 :
  Cpop();
  v_6 :
  Return();
  m_6 :
  Tpop();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  m_5 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_x_10)
  _ST_table_put();
ENDPROC

PROC(_stratego_y_10)
  _ST_table_get();
ENDPROC

PROC(_stratego_z_10)
  Epushd(0,5);
  MoveTop(0,3);
  goto a_27;
  a_27 :
  TestFunFC(d_2,&&n_7,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto b_27;
  b_27 :
  TestFunFC(o_7,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_7);
  goto s_26;
  n_7 :
  TestFunFC(o_7,&&p_7,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_27;
  c_27 :
  TestFunFC(r_7,&&q_7,Egetd(0,5));
  goto d_27;
  d_27 :
  TestFunFC(r_7,&&s_7,Egetd(0,4));
  Cpush(u_7);
  Rpush(v_7);
  goto t_26;
  v_7 :
  goto t_7;
  u_7 :
  Ccontinue(w_7);
  Rpush(x_7);
  goto u_26;
  x_7 :
  goto t_7;
  w_7 :
  Ccontinue(y_7);
  Rpush(z_7);
  goto v_26;
  z_7 :
  goto t_7;
  y_7 :
  Rpush(b_8);
  goto w_26;
  b_8 :
  goto a_8;
  t_7 :
  Cpop();
  a_8 :
  goto m_7;
  s_7 :
  Cpush(d_8);
  Rpush(e_8);
  goto u_26;
  e_8 :
  goto c_8;
  d_8 :
  Ccontinue(f_8);
  Rpush(g_8);
  goto v_26;
  g_8 :
  goto c_8;
  f_8 :
  Rpush(i_8);
  goto w_26;
  i_8 :
  goto h_8;
  c_8 :
  Cpop();
  h_8 :
  goto m_7;
  q_7 :
  goto e_27;
  e_27 :
  TestFunFC(r_7,&&j_8,Egetd(0,4));
  Cpush(l_8);
  Rpush(m_8);
  goto t_26;
  m_8 :
  goto k_8;
  l_8 :
  Ccontinue(n_8);
  Rpush(o_8);
  goto v_26;
  o_8 :
  goto k_8;
  n_8 :
  Rpush(q_8);
  goto w_26;
  q_8 :
  goto p_8;
  k_8 :
  Cpop();
  p_8 :
  goto m_7;
  j_8 :
  Cpush(s_8);
  Rpush(t_8);
  goto v_26;
  t_8 :
  goto r_8;
  s_8 :
  Rpush(w_8);
  goto w_26;
  w_8 :
  goto v_8;
  r_8 :
  Cpop();
  v_8 :
  goto m_7;
  p_7 :
  TestFunFC(x_8,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto f_27;
  f_27 :
  TestFunFC(r_7,&&z_8,Egetd(0,4));
  Cpush(b_9);
  Rpush(c_9);
  goto x_26;
  c_9 :
  goto a_9;
  b_9 :
  Rpush(e_9);
  goto z_26;
  e_9 :
  goto d_9;
  a_9 :
  Cpop();
  d_9 :
  goto m_7;
  z_8 :
  TestFunFC(f_9,&&y_8,Egetd(0,4));
  Cpush(h_9);
  Rpush(i_9);
  goto y_26;
  i_9 :
  goto g_9;
  h_9 :
  Rpush(k_9);
  goto z_26;
  k_9 :
  goto j_9;
  g_9 :
  Cpop();
  j_9 :
  goto m_7;
  y_8 :
  Rpush(m_7);
  goto z_26;
  m_7 :
  goto l_7;
  z_26 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_c_11);
  Tpop();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  l_7 :
  goto k_7;
  y_26 :
  Tset(App0("Id"));
  Return();
  k_7 :
  goto j_7;
  x_26 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  j_7 :
  goto i_7;
  w_26 :
  Tdupl();
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Ccall(_stratego_c_11);
  Tpop();
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  i_7 :
  goto h_7;
  v_26 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_c_11);
  Tpop();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  h_7 :
  goto g_7;
  u_26 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  g_7 :
  goto f_7;
  t_26 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  f_7 :
  goto e_7;
  s_26 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Choice",App2("App",Egetd(0,1),Egetd(0,5)),App2("App",Egetd(0,2),Egetd(0,5))));
  Return();
  e_7 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_a_11)
  Epushd(0,5);
  MoveTop(0,3);
  goto b_28;
  b_28 :
  TestFunFC(d_2,&&t_9,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_28;
  c_28 :
  TestFunFC(u_9,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(s_9);
  goto y_27;
  t_9 :
  TestFunFC(u_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto d_28;
  d_28 :
  TestFunFC(r_7,&&v_9,Egetd(0,5));
  goto e_28;
  e_28 :
  TestFunFC(r_7,&&w_9,Egetd(0,4));
  Cpush(y_9);
  Rpush(z_9);
  goto z_27;
  z_9 :
  goto x_9;
  y_9 :
  Rpush(b_10);
  goto a_28;
  b_10 :
  goto a_10;
  x_9 :
  Cpop();
  a_10 :
  goto s_9;
  w_9 :
  Rpush(s_9);
  goto a_28;
  v_9 :
  goto f_28;
  f_28 :
  TestFunFC(r_7,&&fail,Egetd(0,4));
  Rpush(s_9);
  goto z_27;
  s_9 :
  goto r_9;
  a_28 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  r_9 :
  goto m_9;
  z_27 :
  Tset(App0("Fail"));
  Return();
  m_9 :
  goto l_9;
  y_27 :
  NotNULLd(0,2);
  NotNULLd(0,1);
  NotNULLd(0,5);
  Tset(App2("App",Egetd(0,2),App2("App",Egetd(0,1),Egetd(0,5))));
  Return();
  l_9 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_11)
  _ST_is_string();
ENDPROC

PROC(_stratego_c_11)
  Rpush(c_10);
  q_28 :
  Cpush(e_10);
  TestFunTop(o_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_11);
  AllBuild();
  goto d_10;
  e_10 :
  Ccontinue(f_10);
  TestFunTop(g_10);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_11);
  OneNextSon();
  Rpush(j_10);
  r_28 :
  Cpush(l_10);
  Ccall(_stratego_e_12);
  goto k_10;
  l_10 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(n_10);
  goto q_28;
  n_10 :
  OneNextSon();
  Rpush(o_10);
  goto r_28;
  o_10 :
  AllBuild();
  goto m_10;
  k_10 :
  Cpop();
  m_10 :
  Return();
  j_10 :
  AllBuild();
  goto d_10;
  f_10 :
  TestFunTop(g_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_11);
  goto q_28;
  t_11 :
  AllBuild();
  goto p_10;
  d_10 :
  Cpop();
  p_10 :
  Return();
  c_10 :
ENDPROC

PROC(_stratego_d_11)
  Epushd(0,4);
  MoveTop(0,3);
  goto v_28;
  v_28 :
  TestFunFC(d_2,&&c_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,2,0,3,1);
  goto w_28;
  w_28 :
  TestFunFC(d_13,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  Rpush(b_13);
  goto s_28;
  c_13 :
  TestFunFC(d_13,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto x_28;
  x_28 :
  TestFunFC(r_7,&&j_13,Egetd(0,4));
  Cpush(m_13);
  Rpush(s_13);
  goto t_28;
  s_13 :
  goto k_13;
  m_13 :
  Rpush(q_14);
  goto u_28;
  q_14 :
  goto t_13;
  k_13 :
  Cpop();
  t_13 :
  goto b_13;
  j_13 :
  Rpush(b_13);
  goto u_28;
  b_13 :
  goto a_13;
  u_28 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_c_11);
  Tpop();
  Tset(App0("Fail"));
  Return();
  a_13 :
  goto g_12;
  t_28 :
  Tset(App0("Id"));
  Return();
  g_12 :
  goto f_12;
  s_28 :
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(s_14);
  Tdupl();
  Ccall(_stratego_c_11);
  Cpop();
  Crestore();
  Cjump();
  s_14 :
  Tpop();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("App",App1("Not",App2("App",Egetd(0,1),Egetd(0,2))),Egetd(0,2)));
  Return();
  f_12 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_e_11)
  Epushd(0,3);
  MoveTop(0,1);
  goto h_29;
  h_29 :
  TestFunFC(d_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_29;
  i_29 :
  TestFunFC(r_7,&&x_14,Egetd(0,3));
  goto j_29;
  j_29 :
  TestFunFC(r_7,&&y_14,Egetd(0,2));
  Cpush(a_15);
  Rpush(b_15);
  goto f_29;
  b_15 :
  goto z_14;
  a_15 :
  Rpush(d_15);
  goto g_29;
  d_15 :
  goto c_15;
  z_14 :
  Cpop();
  c_15 :
  goto v_14;
  y_14 :
  Rpush(v_14);
  goto g_29;
  x_14 :
  goto k_29;
  k_29 :
  TestFunFC(r_7,&&fail,Egetd(0,2));
  Rpush(v_14);
  goto f_29;
  v_14 :
  goto u_14;
  g_29 :
  Tset(App0("Fail"));
  Return();
  u_14 :
  goto t_14;
  f_29 :
  Tset(App0("Fail"));
  Return();
  t_14 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_f_11)
  Rpush(e_15);
  z_43 :
  Cpush(g_15);
  TestFunTop(x_8);
  TravInit();
  OneNextSon();
  Rpush(h_15);
  goto z_43;
  h_15 :
  OneNextSon();
  AllBuild();
  goto f_15;
  g_15 :
  Ccontinue(i_15);
  TestFunTop(o_7);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_15);
  goto z_43;
  j_15 :
  AllBuild();
  goto f_15;
  i_15 :
  AllInit();
  l_15 :
  AllNextSon(&&m_15);
  Rpush(n_15);
  goto z_43;
  n_15 :
  goto l_15;
  m_15 :
  AllBuild();
  goto k_15;
  f_15 :
  Cpop();
  k_15 :
  Cpush(s_15);
  Cpush(u_15);
  Epushd(0,3);
  MoveTop(0,1);
  goto r_29;
  r_29 :
  TestFunFC(d_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_29;
  s_29 :
  TestFunFC(f_9,&&fail,Egetd(0,2));
  Rpush(k_16);
  goto q_29;
  k_16 :
  goto i_16;
  q_29 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  i_16 :
  Epopd(0,3);
  goto t_15;
  u_15 :
  Ccontinue(l_16);
  Ccall(_stratego_e_11);
  goto t_15;
  l_16 :
  Ccontinue(n_16);
  Epushd(0,4);
  MoveTop(0,1);
  goto u_29;
  u_29 :
  TestFunFC(d_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto v_29;
  v_29 :
  TestFunFC(r_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(q_16);
  goto t_29;
  q_16 :
  goto o_16;
  t_29 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("App",App2("Seq",Egetd(0,3),App1("Build",Egetd(0,4))),Egetd(0,4)));
  Return();
  o_16 :
  Epopd(0,4);
  goto t_15;
  n_16 :
  Ccontinue(s_16);
  Ccall(_stratego_d_11);
  goto t_15;
  s_16 :
  Ccontinue(t_16);
  Ccall(_stratego_a_11);
  goto t_15;
  t_16 :
  Ccontinue(u_16);
  Ccall(_stratego_z_10);
  goto t_15;
  u_16 :
  Ccontinue(v_16);
  Epushd(0,6);
  MoveTop(0,2);
  goto o_31;
  o_31 :
  TestFunFC(d_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,6,0,2,1);
  goto p_31;
  p_31 :
  TestFunFC(x_8,&&j_17,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(c_17);
  goto w_29;
  j_17 :
  TestFunFC(m_17,&&l_17,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_31;
  q_31 :
  TestFunFC(n_17,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  Rpush(c_17);
  goto x_29;
  l_17 :
  TestFunFC(p_17,&&o_17,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(c_17);
  goto y_29;
  o_17 :
  TestFunFC(z_17,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(c_17);
  goto z_29;
  c_17 :
  goto b_17;
  z_29 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("App",App2("Let",App2("Cons",App3("SDef",Egetd(0,4),App0("Nil"),Egetd(0,5)),App0("Nil")),Egetd(0,5)),Egetd(0,6)));
  Return();
  b_17 :
  goto a_17;
  y_29 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(a_18);
  b_44 :
  Cpush(c_18);
  Ccall(_stratego_e_12);
  goto b_18;
  c_18 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(1,4);
  MoveTop(1,1);
  goto n_31;
  n_31 :
  TestFunFC(y_5,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  Rpush(l_18);
  goto g_31;
  l_18 :
  goto j_18;
  g_31 :
  Epushd(2,7);
  NotNULLd(1,2);
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,1),App0("TNil")))));
  MoveTop(2,1);
  goto j_31;
  j_31 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto k_31;
  k_31 :
  TestFunFC(d_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_31;
  l_31 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto m_31;
  m_31 :
  TestFunFC(e_0,&&fail,Egetd(2,7));
  Rpush(x_18);
  goto h_31;
  x_18 :
  goto p_18;
  h_31 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  Cpush(z_18);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_y_10);
  goto y_18;
  z_18 :
  Tset(App0("Nil"));
  goto a_19;
  y_18 :
  Cpop();
  a_19 :
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(2,2);
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App2("TCons",App2("Cons",Egetd(2,6),Egetd(3,1)),App0("TNil")))));
  Ccall(_stratego_x_10);
  Epopd(4,1);
  Tpop();
  Epopd(3,1);
  Return();
  p_18 :
  Epopd(2,7);
  Return();
  j_18 :
  Epopd(1,4);
  OneNextSon();
  Rpush(b_19);
  goto b_44;
  b_19 :
  AllBuild();
  goto i_18;
  b_18 :
  Cpop();
  i_18 :
  Return();
  a_18 :
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App2("App",App2("Seq",Egetd(0,5),App1("UndefineDefs",Egetd(0,4))),Egetd(0,6)));
  Return();
  a_17 :
  goto z_16;
  x_29 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",Egetd(0,1),App0("TNil"))));
  MoveTop(2,1);
  goto d_31;
  d_31 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto e_31;
  e_31 :
  TestFunFC(d_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto f_31;
  f_31 :
  TestFunFC(e_0,&&fail,Egetd(2,5));
  Rpush(o_19);
  goto a_30;
  o_19 :
  goto e_19;
  a_30 :
  Epushd(3,7);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_y_10);
  MoveTop(3,1);
  goto c_30;
  c_30 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_20);
  goto b_30;
  r_20 :
  goto e_20;
  b_30 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  e_20 :
  MoveTop(3,4);
  goto c_31;
  c_31 :
  TestFunFC(y_5,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  MoveArg(3,7,3,4,2);
  Rpush(s_20);
  goto d_30;
  s_20 :
  goto c_20;
  d_30 :
  Move(0,1,3,5);
  Move(1,2,3,6);
  Move(1,1,3,7);
  NotNULLd(1,2);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(v_20);
  a_44 :
  Epushd(4,9);
  MoveTop(4,1);
  goto u_30;
  u_30 :
  TestFunFC(d_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto v_30;
  v_30 :
  TestFunFC(o_0,&&z_20,Egetd(4,2));
  goto w_30;
  w_30 :
  TestFunFC(d_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto x_30;
  x_30 :
  TestFunFC(o_0,&&fail,Egetd(4,6));
  goto y_30;
  y_30 :
  TestFunFC(e_0,&&fail,Egetd(4,9));
  Rpush(y_20);
  goto e_30;
  z_20 :
  TestFunFC(c_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto z_30;
  z_30 :
  TestFunFC(d_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto a_31;
  a_31 :
  TestFunFC(c_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto b_31;
  b_31 :
  TestFunFC(e_0,&&fail,Egetd(4,9));
  Rpush(y_20);
  goto f_30;
  y_20 :
  goto x_20;
  f_30 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Epushd(6,5);
  MoveTop(6,1);
  goto n_30;
  n_30 :
  TestFunFC(d_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto o_30;
  o_30 :
  TestFunFC(d_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto p_30;
  p_30 :
  TestFunFC(e_0,&&fail,Egetd(6,5));
  Rpush(e_21);
  goto g_30;
  e_21 :
  goto b_21;
  g_30 :
  Epushd(7,7);
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",Egetd(6,2),App2("TCons",App3("SDef",Egetd(6,2),App0("Nil"),Egetd(6,4)),App0("TNil")))));
  MoveTop(7,1);
  goto j_30;
  j_30 :
  TestFunFC(d_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto k_30;
  k_30 :
  TestFunFC(d_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto l_30;
  l_30 :
  TestFunFC(d_0,&&fail,Egetd(7,5));
  MoveArg(7,6,7,5,0);
  MoveArg(7,7,7,5,1);
  goto m_30;
  m_30 :
  TestFunFC(e_0,&&fail,Egetd(7,7));
  Rpush(m_21);
  goto h_30;
  m_21 :
  goto f_21;
  h_30 :
  Epushd(8,1);
  Tdupl();
  Epushd(9,1);
  Cpush(u_21);
  NotNULLd(7,2);
  NotNULLd(7,4);
  Tset(App2("TCons",Egetd(7,2),App2("TCons",Egetd(7,4),App0("TNil"))));
  Ccall(_stratego_y_10);
  goto t_21;
  u_21 :
  Tset(App0("Nil"));
  goto w_21;
  t_21 :
  Cpop();
  w_21 :
  MoveTop(9,1);
  Move(8,1,9,1);
  NotNULLd(7,2);
  NotNULLd(7,4);
  NotNULLd(7,6);
  NotNULLd(8,1);
  Tset(App2("TCons",Egetd(7,2),App2("TCons",Egetd(7,4),App2("TCons",App2("Cons",Egetd(7,6),Egetd(8,1)),App0("TNil")))));
  Ccall(_stratego_x_10);
  Epopd(9,1);
  Tpop();
  Epopd(8,1);
  Return();
  f_21 :
  Epopd(7,7);
  Return();
  b_21 :
  Epopd(6,5);
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(d_22);
  goto a_44;
  d_22 :
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto r_30;
  r_30 :
  TestFunFC(d_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto s_30;
  s_30 :
  TestFunFC(d_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto t_30;
  t_30 :
  TestFunFC(e_0,&&fail,Egetd(5,5));
  Rpush(k_22);
  goto q_30;
  k_22 :
  goto a_21;
  q_30 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  a_21 :
  Epopd(5,5);
  Return();
  x_20 :
  goto w_20;
  e_30 :
  Tset(App0("Nil"));
  Return();
  w_20 :
  Epopd(4,9);
  Return();
  v_20 :
  Return();
  c_20 :
  Epopd(3,7);
  Return();
  e_19 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(0,6);
  Tset(App2("App",App2("Seq",Egetd(1,1),App1("UndefineOps",Egetd(1,2))),Egetd(0,6)));
  Epopd(1,2);
  Return();
  z_16 :
  goto y_16;
  w_29 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("LChoice",App2("App",Egetd(0,4),Egetd(0,6)),App2("App",Egetd(0,5),Egetd(0,6))));
  Return();
  y_16 :
  Epopd(0,6);
  goto t_15;
  v_16 :
  Ccontinue(l_22);
  Ccall(_stratego_w_10);
  goto t_15;
  l_22 :
  Ccontinue(n_22);
  Ccall(_stratego_v_10);
  goto t_15;
  n_22 :
  Epushd(0,8);
  MoveTop(0,3);
  goto i_34;
  i_34 :
  TestFunFC(d_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto j_34;
  j_34 :
  TestFunFC(u_23,&&t_23,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto k_34;
  k_34 :
  TestFunFC(g_2,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  Cpush(g_24);
  Rpush(k_24);
  goto r_31;
  k_24 :
  goto w_23;
  g_24 :
  Rpush(d_25);
  goto s_31;
  d_25 :
  goto s_24;
  w_23 :
  Cpop();
  s_24 :
  goto m_23;
  t_23 :
  TestFunFC(g_25,&&e_25,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto l_34;
  l_34 :
  TestFunFC(g_2,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  Rpush(m_23);
  goto t_31;
  e_25 :
  TestFunFC(m_25,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto m_34;
  m_34 :
  TestFunFC(g_2,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto n_34;
  n_34 :
  TestFunFC(g_10,&&n_25,Egetd(0,8));
  MoveArg(0,1,0,8,0);
  MoveArg(0,2,0,8,1);
  Cpush(t_25);
  Rpush(v_25);
  goto u_31;
  v_25 :
  goto s_25;
  t_25 :
  Rpush(b_26);
  goto v_31;
  b_26 :
  goto w_25;
  s_25 :
  Cpop();
  w_25 :
  goto m_23;
  n_25 :
  Rpush(m_23);
  goto v_31;
  m_23 :
  goto l_23;
  v_31 :
  Tset(App0("Fail"));
  Return();
  l_23 :
  goto e_23;
  u_31 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,2);
  NotNULLd(0,7);
  Tset(App2("Pair",Egetd(0,2),Egetd(0,7)));
  Rpush(i_26);
  g_44 :
  Epushd(3,5);
  MoveTop(3,3);
  goto e_34;
  e_34 :
  TestFunFC(m_27,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto f_34;
  f_34 :
  TestFunFC(c_0,&&n_27,Egetd(3,4));
  MoveArg(3,1,3,4,0);
  MoveArg(3,2,3,4,1);
  Rpush(l_27);
  goto u_33;
  n_27 :
  TestFunFC(o_0,&&fail,Egetd(3,4));
  Rpush(l_27);
  goto v_33;
  l_27 :
  goto o_26;
  v_33 :
  NotNULLd(3,5);
  Tset(App2("Pair",App0("Nil"),Egetd(3,5)));
  Return();
  o_26 :
  goto n_26;
  u_33 :
  Epushd(4,3);
  NotNULLd(3,1);
  NotNULLd(3,5);
  Tset(App2("Pair",Egetd(3,1),Egetd(3,5)));
  MoveTop(4,1);
  goto d_34;
  d_34 :
  TestFunFC(m_27,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(p_27);
  goto w_33;
  p_27 :
  goto o_27;
  w_33 :
  Epushd(5,3);
  NotNULLd(0,5);
  NotNULLd(4,3);
  NotNULLd(4,2);
  Tset(App2("App",Egetd(0,5),App2("Clos",Egetd(4,3),Egetd(4,2))));
  Rpush(r_27);
  goto z_43;
  r_27 :
  MoveTop(5,1);
  goto c_34;
  c_34 :
  TestFunFC(g_2,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(s_27);
  goto x_33;
  s_27 :
  goto q_27;
  x_33 :
  Epushd(6,3);
  NotNULLd(5,3);
  NotNULLd(5,2);
  Tset(App2("Pair",Egetd(5,3),Egetd(5,2)));
  MoveTop(6,1);
  goto b_34;
  b_34 :
  TestFunFC(m_27,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(u_27);
  goto y_33;
  u_27 :
  goto t_27;
  y_33 :
  Epushd(7,3);
  NotNULLd(3,2);
  NotNULLd(6,3);
  Tset(App2("Pair",Egetd(3,2),Egetd(6,3)));
  Rpush(w_27);
  goto g_44;
  w_27 :
  MoveTop(7,1);
  goto a_34;
  a_34 :
  TestFunFC(m_27,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(x_27);
  goto z_33;
  x_27 :
  goto v_27;
  z_33 :
  NotNULLd(6,2);
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Pair",App2("Cons",Egetd(6,2),Egetd(7,2)),Egetd(7,3)));
  Return();
  v_27 :
  Epopd(7,3);
  Return();
  t_27 :
  Epopd(6,3);
  Return();
  q_27 :
  Epopd(5,3);
  Return();
  o_27 :
  Epopd(4,3);
  Return();
  n_26 :
  Epopd(3,5);
  Return();
  i_26 :
  MoveTop(2,1);
  goto h_34;
  h_34 :
  TestFunFC(m_27,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(l_28);
  goto g_34;
  l_28 :
  goto h_26;
  g_34 :
  Move(1,1,2,2);
  Move(1,2,2,3);
  Return();
  h_26 :
  Epopd(2,3);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("Clos",Egetd(1,2),App2("Op",Egetd(0,1),Egetd(1,1))));
  Epopd(1,2);
  Return();
  e_23 :
  goto w_22;
  t_31 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,7);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,5),App0("TNil"))));
  Ccall(_stratego_u_10);
  MoveTop(2,1);
  goto q_33;
  q_33 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_33;
  r_33 :
  TestFunFC(d_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_33;
  s_33 :
  TestFunFC(e_0,&&fail,Egetd(2,5));
  Rpush(n_28);
  goto k_33;
  n_28 :
  goto m_28;
  k_33 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(o_28);
  f_44 :
  Cpush(c_29);
  Epushd(3,3);
  MoveTop(3,1);
  Tdupl();
  Epushd(4,2);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  MoveTop(4,1);
  goto p_33;
  p_33 :
  TestFunFC(o_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(e_29);
  goto m_33;
  e_29 :
  goto d_29;
  m_33 :
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(3,3,2,2);
  Epopd(5,1);
  Return();
  d_29 :
  Epopd(4,2);
  Tpop();
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(3,3),App0("TNil"))));
  Ccall(_stratego_t_10);
  Epopd(3,3);
  goto p_28;
  c_29 :
  AllInit();
  p_29 :
  AllNextSon(&&i_30);
  Rpush(i_31);
  goto f_44;
  i_31 :
  goto p_29;
  i_30 :
  AllBuild();
  goto o_29;
  p_28 :
  Cpop();
  o_29 :
  Return();
  o_28 :
  Return();
  m_28 :
  MoveTop(2,6);
  Move(1,1,2,6);
  Epopd(2,6);
  Tpop();
  NotNULLd(0,7);
  NotNULLd(1,1);
  Tset(App2("Clos",Egetd(0,7),Egetd(1,1)));
  Epopd(1,1);
  Return();
  w_22 :
  goto v_22;
  s_31 :
  Tset(App0("Fail"));
  Return();
  v_22 :
  goto u_22;
  r_31 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,5);
  NotNULLd(0,8);
  NotNULLd(0,7);
  Tset(App2("TCons",App2("Cons",App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,8),App0("TNil"))),Egetd(0,7)),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(w_31);
  c_44 :
  Cpush(k_32);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Epushd(3,7);
  MoveTop(3,1);
  goto y_31;
  y_31 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,7,3,1,1);
  goto z_31;
  z_31 :
  TestFunFC(d_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto a_32;
  a_32 :
  TestFunFC(d_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto b_32;
  b_32 :
  TestFunFC(e_0,&&fail,Egetd(3,6));
  Rpush(n_32);
  goto x_31;
  n_32 :
  goto m_32;
  x_31 :
  Epushd(4,1);
  Move(3,3,3,5);
  Move(4,1,3,7);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Epopd(4,1);
  Return();
  m_32 :
  Epopd(3,7);
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  goto f_32;
  k_32 :
  Ccontinue(j_33);
  Epushd(3,11);
  MoveTop(3,1);
  goto x_32;
  x_32 :
  TestFunFC(d_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,9,3,1,1);
  goto y_32;
  y_32 :
  TestFunFC(c_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,8,3,2,1);
  goto z_32;
  z_32 :
  TestFunFC(d_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto a_33;
  a_33 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto b_33;
  b_33 :
  TestFunFC(e_0,&&fail,Egetd(3,7));
  goto c_33;
  c_33 :
  TestFunFC(d_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto d_33;
  d_33 :
  TestFunFC(e_0,&&fail,Egetd(3,11));
  Rpush(n_33);
  goto c_32;
  n_33 :
  goto l_33;
  c_32 :
  Epushd(4,2);
  Tdupl();
  Epushd(5,2);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  MoveTop(5,1);
  goto w_32;
  w_32 :
  TestFunFC(o_2,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  Rpush(t_33);
  goto d_32;
  t_33 :
  goto o_33;
  d_32 :
  Epushd(6,10);
  NotNULLd(3,4);
  NotNULLd(3,6);
  Tset(App2("TCons",Egetd(3,4),App2("TCons",Egetd(3,6),App0("TNil"))));
  Cpush(r_34);
  Tdupl();
  Epushd(7,5);
  MoveTop(7,1);
  goto g_32;
  g_32 :
  TestFunFC(d_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto h_32;
  h_32 :
  TestFunFC(d_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto i_32;
  i_32 :
  TestFunFC(e_0,&&fail,Egetd(7,5));
  Rpush(x_34);
  goto e_32;
  x_34 :
  goto w_34;
  e_32 :
  NotNULLd(7,4);
  Tset(Egetd(7,4));
  Rpush(j_35);
  e_35 :
  Cpush(f_35);
  Epushd(8,1);
  MoveTop(8,1);
  Move(7,2,8,1);
  Epopd(8,1);
  Cpop();
  goto i_35;
  f_35 :
  IsAppl();
  MatchTravInit();
  g_35 :
  OneMatchNextSon();
  Cpush(g_35);
  Rpush(h_35);
  goto e_35;
  h_35 :
  Cpop();
  MatchTravEnd();
  i_35 :
  Return();
  j_35 :
  Return();
  w_34 :
  Epopd(7,5);
  Cpop();
  Crestore();
  Cjump();
  r_34 :
  NotNULLd(3,4);
  NotNULLd(3,6);
  NotNULLd(3,10);
  NotNULLd(3,8);
  Tset(App2("TCons",App2("Cons",App2("TCons",Egetd(3,4),App2("TCons",Egetd(3,6),App0("TNil"))),App0("Nil")),App2("TCons",App2("TCons",Egetd(3,10),App2("TCons",Egetd(3,8),App0("TNil"))),App0("TNil"))));
  Ccall(_stratego_u_10);
  MoveTop(6,1);
  goto p_32;
  p_32 :
  TestFunFC(d_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto q_32;
  q_32 :
  TestFunFC(d_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto r_32;
  r_32 :
  TestFunFC(e_0,&&fail,Egetd(6,5));
  Rpush(w_35);
  goto j_32;
  w_35 :
  goto s_35;
  j_32 :
  NotNULLd(6,4);
  Tset(Egetd(6,4));
  Rpush(x_35);
  e_44 :
  Cpush(m_36);
  Epushd(7,3);
  MoveTop(7,1);
  Tdupl();
  Epushd(8,2);
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  MoveTop(8,1);
  goto o_32;
  o_32 :
  TestFunFC(o_2,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  Rpush(o_36);
  goto l_32;
  o_36 :
  goto n_36;
  l_32 :
  Epushd(9,1);
  MoveTop(9,1);
  Move(7,2,9,1);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Move(7,3,6,2);
  Epopd(9,1);
  Return();
  n_36 :
  Epopd(8,2);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("TCons",Egetd(7,2),App2("TCons",Egetd(7,3),App0("TNil"))));
  Ccall(_stratego_t_10);
  Epopd(7,3);
  goto l_36;
  m_36 :
  AllInit();
  v_36 :
  AllNextSon(&&w_36);
  Rpush(e_37);
  goto e_44;
  e_37 :
  goto v_36;
  w_36 :
  AllBuild();
  goto p_36;
  l_36 :
  Cpop();
  p_36 :
  Return();
  x_35 :
  Return();
  s_35 :
  MoveTop(6,6);
  goto t_32;
  t_32 :
  TestFunFC(d_0,&&fail,Egetd(6,6));
  MoveArg(6,7,6,6,0);
  MoveArg(6,8,6,6,1);
  goto u_32;
  u_32 :
  TestFunFC(d_0,&&fail,Egetd(6,8));
  MoveArg(6,9,6,8,0);
  MoveArg(6,10,6,8,1);
  goto v_32;
  v_32 :
  TestFunFC(e_0,&&fail,Egetd(6,10));
  Rpush(f_37);
  goto s_32;
  f_37 :
  goto r_35;
  s_32 :
  Move(4,1,6,7);
  Move(4,2,6,9);
  Return();
  r_35 :
  Epopd(6,10);
  Return();
  o_33 :
  Epopd(5,2);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(3,4);
  NotNULLd(3,6);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",App2("Cons",App2("TCons",Egetd(3,4),App2("TCons",Egetd(3,6),App0("TNil"))),Egetd(4,1)),App0("TNil"))));
  Epopd(4,2);
  Return();
  l_33 :
  Epopd(3,11);
  goto f_32;
  j_33 :
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_10);
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  goto g_37;
  f_32 :
  Cpop();
  g_37 :
  Cpush(p_37);
  Epushd(3,5);
  MoveTop(3,1);
  goto f_33;
  f_33 :
  TestFunFC(d_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto g_33;
  g_33 :
  TestFunFC(o_0,&&fail,Egetd(3,2));
  goto h_33;
  h_33 :
  TestFunFC(d_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto i_33;
  i_33 :
  TestFunFC(e_0,&&fail,Egetd(3,5));
  Rpush(r_37);
  goto e_33;
  r_37 :
  goto q_37;
  e_33 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Return();
  q_37 :
  Epopd(3,5);
  goto o_37;
  p_37 :
  Rpush(x_37);
  goto c_44;
  x_37 :
  goto s_37;
  o_37 :
  Cpop();
  s_37 :
  Return();
  w_31 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,8);
  Tset(App2("Clos",Egetd(1,1),Egetd(0,8)));
  Epopd(1,1);
  Return();
  u_22 :
  Epopd(0,8);
  goto t_22;
  t_15 :
  Cpop();
  t_22 :
  Rpush(y_37);
  goto z_43;
  y_37 :
  goto r_15;
  s_15 :
  goto g_38;
  r_15 :
  Cpop();
  g_38 :
  Return();
  e_15 :
ENDPROC

PROC(_stratego_g_11)
  _ST_create_table();
ENDPROC

PROC(_stratego_h_11)
  Ccall(_stratego_g_11);
ENDPROC

PROC(_stratego_m_11)
  Tdupl();
  Tset(ATmakeString("senv"));
  Ccall(_stratego_h_11);
  Tpop();
  TestFunTop(d_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("Clos",App0("Nil"),Egetd(0,1)));
  Epopd(0,1);
  AllBuild();
  Ccall(_stratego_f_11);
  Cpush(i_38);
  Epushd(0,3);
  MoveTop(0,1);
  goto j_44;
  j_44 :
  TestFunFC(g_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto k_44;
  k_44 :
  TestFunFC(o_0,&&fail,Egetd(0,2));
  Rpush(m_38);
  goto i_44;
  m_38 :
  goto l_38;
  i_44 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  l_38 :
  Epopd(0,3);
  goto h_38;
  i_38 :
  goto n_38;
  h_38 :
  Cpop();
  n_38 :
  Tdupl();
  Tset(ATmakeString("senv"));
  Ccall(_stratego_r_10);
  Tpop();
ENDPROC

PROC(_stratego_n_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_44;
  s_44 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  Rpush(x_38);
  goto r_44;
  x_38 :
  goto w_38;
  r_44 :
  Return();
  w_38 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_11)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_z_11);
  Tset(MakeInt(1));
  Ccall(_stratego_y_11);
ENDPROC

PROC(_stratego_p_11)
  Epushd(0,2);
  Tdupl();
  Cpush(a_39);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Cpush(b_39);
  Tdupl();
  Rpush(j_39);
  s_45 :
  Cpush(x_39);
  Epushd(1,3);
  MoveTop(1,1);
  goto v_44;
  v_44 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_44;
  w_44 :
  TestFunFC(j_40,&&fail,Egetd(1,2));
  Rpush(z_39);
  goto u_44;
  z_39 :
  goto y_39;
  u_44 :
  Return();
  y_39 :
  Epopd(1,3);
  goto w_39;
  x_39 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_40);
  goto s_45;
  r_40 :
  AllBuild();
  goto k_40;
  w_39 :
  Cpop();
  k_40 :
  Return();
  j_39 :
  Cpop();
  Crestore();
  Cjump();
  b_39 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(s_40);
  t_45 :
  Cpush(a_41);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_44;
  y_44 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_44;
  z_44 :
  TestFunFC(o_41,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_41);
  goto x_44;
  n_41 :
  goto l_41;
  x_44 :
  Move(0,2,1,3);
  Return();
  l_41 :
  Epopd(1,4);
  goto u_40;
  a_41 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_41);
  goto t_45;
  q_41 :
  AllBuild();
  goto p_41;
  u_40 :
  Cpop();
  p_41 :
  Return();
  s_40 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(r_41);
  u_45 :
  Cpush(z_41);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_45;
  b_45 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_45;
  c_45 :
  TestFunFC(i_42,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_42);
  goto a_45;
  c_42 :
  goto a_42;
  a_45 :
  Move(0,1,1,3);
  Return();
  a_42 :
  Epopd(1,4);
  goto s_41;
  z_41 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_42);
  goto u_45;
  l_42 :
  AllBuild();
  goto k_42;
  s_41 :
  Cpop();
  k_42 :
  Return();
  r_41 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_z_11);
  goto y_38;
  a_39 :
  goto m_42;
  y_38 :
  Cpop();
  m_42 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_y_11);
  Epopd(0,2);
ENDPROC

PROC(_stratego_q_11)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_r_11)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_u_11)
  Epushd(0,1);
  Tdupl();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Cpush(v_42);
  Rpush(w_42);
  u_46 :
  Cpush(b_43);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_45;
  w_45 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_45;
  x_45 :
  TestFunFC(h_43,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_43);
  goto v_45;
  g_43 :
  goto c_43;
  v_45 :
  Move(0,1,1,3);
  Return();
  c_43 :
  Epopd(1,4);
  goto x_42;
  b_43 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_43);
  goto u_46;
  m_43 :
  AllBuild();
  goto l_43;
  x_42 :
  Cpop();
  l_43 :
  Return();
  w_42 :
  goto n_42;
  v_42 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto q_43;
  n_42 :
  Cpop();
  q_43 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  Cpush(s_43);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(w_43);
  v_46 :
  Cpush(y_43);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_46;
  d_46 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_46;
  e_46 :
  TestFunFC(q_44,&&fail,Egetd(1,2));
  Rpush(m_44);
  goto c_46;
  m_44 :
  goto h_44;
  c_46 :
  Return();
  h_44 :
  Epopd(1,3);
  goto x_43;
  y_43 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_45);
  goto v_46;
  n_45 :
  AllBuild();
  goto m_45;
  x_43 :
  Cpop();
  m_45 :
  Return();
  w_43 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_11);
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  goto r_43;
  s_43 :
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_11);
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  goto y_45;
  r_43 :
  Cpop();
  y_45 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_11)
  _ST_dtime();
ENDPROC

PROC(_stratego_w_11)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_x_11)
  Epushd(0,3);
  Tdupl();
  Cpush(a_46);
  Rpush(b_46);
  p_47 :
  Cpush(m_46);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_46;
  x_46 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_46;
  y_46 :
  TestFunFC(p_46,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_46);
  goto w_46;
  o_46 :
  goto n_46;
  w_46 :
  Move(0,1,1,3);
  Return();
  n_46 :
  Epopd(1,4);
  goto k_46;
  m_46 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_46);
  goto p_47;
  z_46 :
  AllBuild();
  goto q_46;
  k_46 :
  Cpop();
  q_46 :
  Return();
  b_46 :
  goto z_45;
  a_46 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto a_47;
  z_45 :
  Cpop();
  a_47 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_w_11);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_y_11)
  _ST_exit();
ENDPROC

PROC(_stratego_z_11)
  _ST_printnl();
ENDPROC

PROC(_stratego_a_12)
  Epushd(0,1);
  Tdupl();
  Rpush(b_47);
  b_48 :
  Cpush(i_47);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_47;
  t_47 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_47;
  u_47 :
  TestFunFC(i_42,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_47);
  goto q_47;
  l_47 :
  goto k_47;
  q_47 :
  Move(0,1,1,3);
  Return();
  k_47 :
  Epopd(1,4);
  goto c_47;
  i_47 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_47);
  goto b_48;
  o_47 :
  AllBuild();
  goto m_47;
  c_47 :
  Cpop();
  m_47 :
  Return();
  b_47 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_z_11);
  Tset(MakeInt(1));
  Ccall(_stratego_y_11);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_48;
  d_48 :
  TestFunFC(a_48,&&fail,Egetd(0,1));
  Rpush(s_47);
  goto c_48;
  s_47 :
  goto r_47;
  c_48 :
  Return();
  r_47 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_12)
  Tdupl();
  z_48 :
  TestFunTop(c_0);
  Cpush(c_49);
  Arg(0);
  Cpush(l_49);
  Ccall(_stratego_b_12);
  goto i_49;
  l_49 :
  Epushd(0,2);
  MoveTop(0,1);
  goto g_48;
  g_48 :
  TestFunFC(v_49,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(s_49);
  goto f_48;
  s_49 :
  goto r_49;
  f_48 :
  Return();
  r_49 :
  Epopd(0,2);
  goto o_49;
  i_49 :
  Cpop();
  o_49 :
  Tpop();
  Cpop();
  goto f_49;
  c_49 :
  Arg(1);
  Tdrop();
  goto z_48;
  f_49 :
  Tpop();
  Ccall(_stratego_a_12);
ENDPROC

PROC(_stratego_d_12)
  Epushd(0,5);
  MoveTop(0,3);
  goto y_50;
  y_50 :
  TestFunFC(c_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto z_50;
  z_50 :
  TestFunFC(c_0,&&k_51,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(n_51);
  Rpush(o_51);
  goto k_48;
  o_51 :
  goto l_51;
  n_51 :
  Ccontinue(p_51);
  Rpush(q_51);
  goto l_48;
  q_51 :
  goto l_51;
  p_51 :
  Ccontinue(s_51);
  Rpush(t_51);
  goto m_48;
  t_51 :
  goto l_51;
  s_51 :
  Ccontinue(u_51);
  Rpush(v_51);
  goto n_48;
  v_51 :
  goto l_51;
  u_51 :
  Ccontinue(x_51);
  Rpush(y_51);
  goto o_48;
  y_51 :
  goto l_51;
  x_51 :
  Ccontinue(z_51);
  Rpush(a_52);
  goto p_48;
  a_52 :
  goto l_51;
  z_51 :
  Ccontinue(b_52);
  Rpush(d_52);
  goto q_48;
  d_52 :
  goto l_51;
  b_52 :
  Ccontinue(e_52);
  Rpush(f_52);
  goto r_48;
  f_52 :
  goto l_51;
  e_52 :
  Ccontinue(g_52);
  Rpush(h_52);
  goto s_48;
  h_52 :
  goto l_51;
  g_52 :
  Ccontinue(j_52);
  Rpush(k_52);
  goto t_48;
  k_52 :
  goto l_51;
  j_52 :
  Ccontinue(l_52);
  Rpush(m_52);
  goto u_48;
  m_52 :
  goto l_51;
  l_52 :
  Ccontinue(n_52);
  Rpush(o_52);
  goto v_48;
  o_52 :
  goto l_51;
  n_52 :
  Ccontinue(p_52);
  Rpush(r_52);
  goto w_48;
  r_52 :
  goto l_51;
  p_52 :
  Ccontinue(s_52);
  Rpush(t_52);
  goto x_48;
  t_52 :
  goto l_51;
  s_52 :
  Rpush(v_52);
  goto y_48;
  v_52 :
  goto u_52;
  l_51 :
  Cpop();
  u_52 :
  goto j_51;
  k_51 :
  Cpush(x_52);
  Rpush(z_52);
  goto k_48;
  z_52 :
  goto w_52;
  x_52 :
  Ccontinue(a_53);
  Rpush(b_53);
  goto l_48;
  b_53 :
  goto w_52;
  a_53 :
  Ccontinue(c_53);
  Rpush(d_53);
  goto m_48;
  d_53 :
  goto w_52;
  c_53 :
  Ccontinue(e_53);
  Rpush(f_53);
  goto n_48;
  f_53 :
  goto w_52;
  e_53 :
  Ccontinue(h_53);
  Rpush(i_53);
  goto o_48;
  i_53 :
  goto w_52;
  h_53 :
  Ccontinue(j_53);
  Rpush(k_53);
  goto u_48;
  k_53 :
  goto w_52;
  j_53 :
  Ccontinue(l_53);
  Rpush(m_53);
  goto v_48;
  m_53 :
  goto w_52;
  l_53 :
  Ccontinue(n_53);
  Rpush(p_53);
  goto w_48;
  p_53 :
  goto w_52;
  n_53 :
  Ccontinue(q_53);
  Rpush(r_53);
  goto x_48;
  r_53 :
  goto w_52;
  q_53 :
  Rpush(t_53);
  goto y_48;
  t_53 :
  goto s_53;
  w_52 :
  Cpop();
  s_53 :
  goto j_51;
  j_51 :
  goto i_51;
  y_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_50;
  w_50 :
  TestStr(1,1,"-?",&&fail);
  Rpush(w_53);
  goto v_50;
  w_53 :
  goto u_53;
  v_50 :
  Return();
  u_53 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  i_51 :
  goto g_51;
  x_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_50;
  t_50 :
  TestStr(1,1,"-h",&&fail);
  Rpush(y_53);
  goto s_50;
  y_53 :
  goto x_53;
  s_50 :
  Return();
  x_53 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  g_51 :
  goto f_51;
  w_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_50;
  q_50 :
  TestStr(1,1,"--help",&&fail);
  Rpush(b_54);
  goto p_50;
  b_54 :
  goto z_53;
  p_50 :
  Return();
  z_53 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  f_51 :
  goto x_50;
  v_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_50;
  n_50 :
  TestStr(1,1,"-s",&&fail);
  Rpush(d_54);
  goto m_50;
  d_54 :
  goto c_54;
  m_50 :
  Return();
  c_54 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  x_50 :
  goto u_50;
  u_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_50;
  k_50 :
  TestStr(1,1,"-b",&&fail);
  Rpush(g_54);
  goto j_50;
  g_54 :
  goto e_54;
  j_50 :
  Return();
  e_54 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  u_50 :
  goto r_50;
  t_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_50;
  g_50 :
  TestStr(1,1,"--output",&&fail);
  Rpush(i_54);
  goto f_50;
  i_54 :
  goto h_54;
  f_50 :
  Return();
  h_54 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  r_50 :
  goto o_50;
  s_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_50;
  c_50 :
  TestStr(1,1,"-o",&&fail);
  Rpush(l_54);
  goto b_50;
  l_54 :
  goto j_54;
  b_50 :
  Return();
  j_54 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  o_50 :
  goto l_50;
  r_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_49;
  y_49 :
  TestStr(1,1,"--input",&&fail);
  Rpush(n_54);
  goto x_49;
  n_54 :
  goto m_54;
  x_49 :
  Return();
  m_54 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  l_50 :
  goto i_50;
  q_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_49;
  u_49 :
  TestStr(1,1,"-i",&&fail);
  Rpush(q_54);
  goto t_49;
  q_54 :
  goto o_54;
  t_49 :
  Return();
  o_54 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  i_50 :
  goto h_50;
  p_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_49;
  q_49 :
  TestStr(1,1,"@version",&&fail);
  Rpush(v_54);
  goto p_49;
  v_54 :
  goto r_54;
  p_49 :
  Return();
  r_54 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  h_50 :
  goto e_50;
  o_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_49;
  n_49 :
  TestStr(1,1,"--version",&&fail);
  Rpush(e_55);
  goto m_49;
  e_55 :
  goto y_54;
  m_49 :
  Return();
  y_54 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  e_50 :
  goto d_50;
  n_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_49;
  k_49 :
  TestStr(1,1,"-v",&&fail);
  Rpush(j_55);
  goto j_49;
  j_55 :
  goto i_55;
  j_49 :
  Return();
  i_55 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  d_50 :
  goto a_50;
  m_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_49;
  h_49 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(s_55);
  goto g_49;
  s_55 :
  goto r_55;
  g_49 :
  Return();
  r_55 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  a_50 :
  goto z_49;
  l_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_49;
  e_49 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(v_55);
  goto d_49;
  v_55 :
  goto u_55;
  d_49 :
  Return();
  u_55 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  z_49 :
  goto w_49;
  k_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_49;
  b_49 :
  TestStr(1,1,"-S",&&fail);
  Rpush(x_55);
  goto a_49;
  x_55 :
  goto w_55;
  a_49 :
  Return();
  w_55 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  w_49 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_e_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_54;
  t_54 :
  TestFunFC(o_0,&&fail,Egetd(0,1));
  Rpush(z_55);
  goto s_54;
  z_55 :
  goto y_55;
  s_54 :
  Return();
  y_55 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(a_56);
  t_55 :
  Cpush(c_56);
  Cpush(e_56);
  Ccall(_stratego_e_12);
  goto d_56;
  e_56 :
  Ccall(_stratego_d_12);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_56);
  goto t_55;
  g_56 :
  AllBuild();
  goto f_56;
  d_56 :
  Cpop();
  f_56 :
  goto b_56;
  c_56 :
  Epushd(0,3);
  MoveTop(0,1);
  goto x_54;
  x_54 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(j_56);
  goto w_54;
  j_56 :
  goto i_56;
  w_54 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  i_56 :
  Epopd(0,3);
  goto h_56;
  b_56 :
  Cpop();
  h_56 :
  Return();
  a_56 :
  AllBuild();
  Cpush(l_56);
  Ccall(_stratego_c_12);
  goto k_56;
  l_56 :
  Ccontinue(m_56);
  Epushd(0,6);
  Ccall(_stratego_x_11);
  Tdupl();
  Ccall(_stratego_v_11);
  Tpop();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_11);
  OneNextSon();
  Ccall(_stratego_n_11);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_v_11);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto a_55;
  a_55 :
  TestFunFC(d_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto b_55;
  b_55 :
  TestFunFC(d_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto c_55;
  c_55 :
  TestFunFC(e_0,&&fail,Egetd(0,6));
  Rpush(o_56);
  goto z_54;
  o_56 :
  goto n_56;
  z_54 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  n_56 :
  Ccall(_stratego_u_11);
  Ccall(_stratego_p_11);
  Epopd(0,6);
  goto k_56;
  m_56 :
  Ccall(_stratego_o_11);
  goto p_56;
  k_56 :
  Cpop();
  p_56 :
ENDPROC

DOIT

