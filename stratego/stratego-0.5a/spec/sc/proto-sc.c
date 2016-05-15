#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,a_37);
VARDECL(AFun,e_36);
VARDECL(AFun,w_34);
VARDECL(AFun,q_13);
VARDECL(AFun,n_13);
VARDECL(AFun,h_13);
VARDECL(AFun,t_12);
VARDECL(AFun,s_10);
VARDECL(AFun,z_9);
VARDECL(AFun,t_9);
VARDECL(AFun,m_9);
VARDECL(AFun,i_4);
VARDECL(AFun,z_3);
VARDECL(AFun,w_3);
VARDECL(AFun,k_3);
VARDECL(AFun,k_2);
VARDECL(AFun,j_2);
VARDECL(AFun,h_2);
VARDECL(AFun,o_1);
VARDECL(AFun,u_0);
VARDECL(AFun,k_0);
VARDECL(AFun,d_0);
PROCDECL(_stratego_y_14);
PROCDECL(_stratego_z_14);
PROCDECL(_stratego_a_15);
PROCDECL(_stratego_b_15);
PROCDECL(_stratego_e_15);
PROCDECL(_stratego_f_15);
PROCDECL(_stratego_g_15);
PROCDECL(_stratego_h_15);
PROCDECL(_stratego_i_15);
PROCDECL(_stratego_j_15);
PROCDECL(_stratego_k_15);
PROCDECL(_stratego_l_15);
PROCDECL(_stratego_m_15);
PROCDECL(_stratego_n_15);
PROCDECL(_stratego_o_15);
PROCDECL(_stratego_p_15);
PROCDECL(_stratego_q_15);
PROCDECL(_stratego_r_15);
PROCDECL(_stratego_s_15);
PROCDECL(_stratego_t_15);
PROCDECL(_stratego_u_15);
PROCDECL(_stratego_v_15);
PROCDECL(_stratego_w_15);
PROCDECL(_stratego_x_15);
PROCDECL(_stratego_y_15);
PROCDECL(_stratego_z_15);
PROCDECL(_stratego_a_16);
PROCDECL(_stratego_b_16);
PROCDECL(_stratego_c_16);
PROCDECL(_stratego_d_16);
PROCDECL(_stratego_e_16);
PROCDECL(_stratego_f_16);
PROCDECL(_stratego_g_16);
PROCDECL(_stratego_h_16);
PROCDECL(_stratego_i_16);
PROCDECL(_stratego_j_16);
PROCDECL(_stratego_k_16);
PROCDECL(_stratego_l_16);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(a_37,ATmakeAFun("NORM",0,0));
  MOVE(e_36,ATmakeAFun("Undefined",1,0));
  MOVE(w_34,ATmakeAFun("Input",1,0));
  MOVE(q_13,ATmakeAFun("Help",0,0));
  MOVE(n_13,ATmakeAFun("Version",0,0));
  MOVE(h_13,ATmakeAFun("DeclVersion",1,0));
  MOVE(t_12,ATmakeAFun("Verbose",0,0));
  MOVE(s_10,ATmakeAFun("InclDir",1,0));
  MOVE(z_9,ATmakeAFun("AST",0,0));
  MOVE(t_9,ATmakeAFun("Specification",1,0));
  MOVE(m_9,ATmakeAFun("Main",1,0));
  MOVE(i_4,ATmakeAFun("ExecDir",1,0));
  MOVE(z_3,ATmakeAFun("FRONTEND",0,0));
  MOVE(w_3,ATmakeAFun("FUSION",0,0));
  MOVE(k_3,ATmakeAFun("CInclDir",1,0));
  MOVE(k_2,ATmakeAFun("Output",1,0));
  MOVE(j_2,ATmakeAFun("CLibDir",1,0));
  MOVE(h_2,ATmakeAFun("Dir",1,0));
  MOVE(o_1,ATmakeAFun("Nil",0,0));
  MOVE(u_0,ATmakeAFun("TCons",2,0));
  MOVE(k_0,ATmakeAFun("Cons",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
ENDPROC

PROC(_stratego_y_14)
  _ST_exit();
ENDPROC

PROC(_stratego_z_14)
  _ST_printnl();
ENDPROC

PROC(_stratego_a_15)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_0;
  n_0 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto a_0;
  c_0 :
  goto b_0;
  a_0 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_15)
  Rpush(e_0);
  r_7 :
  Cpush(g_0);
  Ccall(_stratego_j_16);
  goto f_0;
  g_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto w_6;
  w_6 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(j_0);
  goto v_6;
  j_0 :
  goto i_0;
  v_6 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(l_0);
  d_8 :
  Cpush(o_0);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_0);
  goto d_8;
  p_0 :
  AllBuild();
  goto m_0;
  o_0 :
  Ccall(_stratego_j_16);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(r_0);
  goto r_7;
  r_0 :
  goto q_0;
  m_0 :
  Cpop();
  q_0 :
  Return();
  l_0 :
  Return();
  i_0 :
  Epopd(0,3);
  goto h_0;
  f_0 :
  Cpop();
  h_0 :
  Return();
  e_0 :
ENDPROC

PROC(_stratego_e_15)
  Epushd(0,5);
  MoveTop(0,1);
  goto f_8;
  f_8 :
  TestFunFC(u_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto e_9;
  e_9 :
  TestFunFC(u_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto z_11;
  z_11 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(t_0);
  goto e_8;
  t_0 :
  goto s_0;
  e_8 :
  Move(0,2,0,4);
  Return();
  s_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_f_15)
  Epushd(0,9);
  MoveTop(0,1);
  goto e_14;
  e_14 :
  TestFunFC(u_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_14;
  f_14 :
  TestFunFC(u_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_14;
  g_14 :
  TestFunFC(u_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto h_14;
  h_14 :
  TestFunFC(k_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto n_14;
  n_14 :
  TestFunFC(d_0,&&fail,Egetd(0,9));
  goto o_14;
  o_14 :
  TestInt(0,7,32,&&y_0);
  Cpush(a_1);
  Rpush(b_1);
  goto a_14;
  b_1 :
  goto z_0;
  a_1 :
  Rpush(d_1);
  goto b_14;
  d_1 :
  goto c_1;
  z_0 :
  Cpop();
  c_1 :
  goto x_0;
  y_0 :
  Rpush(x_0);
  goto b_14;
  x_0 :
  goto w_0;
  b_14 :
  Tdupl();
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",MakeInt(32),App0("TNil"))));
  Cpush(e_1);
  Tdupl();
  Ccall(_stratego_e_15);
  Cpop();
  Crestore();
  Cjump();
  e_1 :
  Tpop();
  NotNULLd(0,2);
  NotNULLd(0,7);
  NotNULLd(0,4);
  NotNULLd(0,8);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App2("Cons",Egetd(0,7),Egetd(0,4)),App2("TCons",Egetd(0,8),App0("TNil")))));
  Return();
  w_0 :
  goto v_0;
  a_14 :
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_g_15);
  Ccall(_stratego_f_16);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(1,1),Egetd(0,2)),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,8),App0("TNil")))));
  Epopd(1,1);
  Return();
  v_0 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_g_15)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(g_1);
  f_18 :
  Cpush(i_1);
  Epushd(1,7);
  MoveTop(1,1);
  goto e_17;
  e_17 :
  TestFunFC(u_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto f_17;
  f_17 :
  TestFunFC(k_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto g_17;
  g_17 :
  TestFunFC(u_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto h_17;
  h_17 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  Rpush(k_1);
  goto d_17;
  k_1 :
  goto j_1;
  d_17 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(l_1);
  goto f_18;
  l_1 :
  Return();
  j_1 :
  Epopd(1,7);
  goto h_1;
  i_1 :
  goto m_1;
  h_1 :
  Cpop();
  m_1 :
  Return();
  g_1 :
  MoveTop(0,2);
  goto j_17;
  j_17 :
  TestFunFC(u_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_17;
  k_17 :
  TestFunFC(o_1,&&fail,Egetd(0,3));
  goto l_17;
  l_17 :
  TestFunFC(u_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto m_17;
  m_17 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(n_1);
  goto i_17;
  n_1 :
  goto f_1;
  i_17 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  f_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_h_15)
  Epushd(0,1);
  Ccall(_stratego_g_16);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,1),App0("TNil")))));
  Rpush(p_1);
  b_19 :
  Cpush(r_1);
  Epushd(1,7);
  MoveTop(1,1);
  goto j_18;
  j_18 :
  TestFunFC(u_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_18;
  k_18 :
  TestFunFC(u_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_18;
  l_18 :
  TestFunFC(u_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto m_18;
  m_18 :
  TestFunFC(o_1,&&fail,Egetd(1,6));
  goto n_18;
  n_18 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  Rpush(t_1);
  goto h_18;
  t_1 :
  goto s_1;
  h_18 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_g_15);
  Ccall(_stratego_f_16);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,2);
  Tset(App2("Cons",Egetd(2,1),Egetd(1,2)));
  Ccall(_stratego_g_15);
  Epopd(2,1);
  Return();
  s_1 :
  Epopd(1,7);
  goto q_1;
  r_1 :
  Ccall(_stratego_f_15);
  Rpush(v_1);
  goto b_19;
  v_1 :
  goto u_1;
  q_1 :
  Cpop();
  u_1 :
  Return();
  p_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_15)
  Epushd(0,5);
  Tdupl();
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("linking"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_z_14);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(w_1);
  f_21 :
  Cpush(y_1);
  Ccall(_stratego_j_16);
  goto x_1;
  y_1 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Cpush(b_2);
  Epushd(1,2);
  MoveTop(1,1);
  goto f_19;
  f_19 :
  TestFunFC(h_2,&&g_2,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(f_2);
  goto c_19;
  g_2 :
  TestFunFC(j_2,&&i_2,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(f_2);
  goto d_19;
  i_2 :
  TestFunFC(k_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(f_2);
  goto e_19;
  f_2 :
  goto e_2;
  e_19 :
  Move(0,3,1,2);
  Return();
  e_2 :
  goto d_2;
  d_19 :
  Move(0,2,1,2);
  Return();
  d_2 :
  goto c_2;
  c_19 :
  Move(0,1,1,2);
  Return();
  c_2 :
  Epopd(1,2);
  goto a_2;
  b_2 :
  goto l_2;
  a_2 :
  Cpop();
  l_2 :
  OneNextSon();
  Rpush(m_2);
  goto f_21;
  m_2 :
  AllBuild();
  goto z_1;
  x_1 :
  Cpop();
  z_1 :
  Return();
  w_1 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_15);
  MoveTop(1,1);
  Move(0,4,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Cpush(o_2);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  goto n_2;
  o_2 :
  goto p_2;
  n_2 :
  Cpop();
  p_2 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(""));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_15);
  MoveTop(1,1);
  Move(0,5,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(q_2);
  g_21 :
  Cpush(s_2);
  Ccall(_stratego_j_16);
  goto r_2;
  s_2 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_15);
  OneNextSon();
  Rpush(u_2);
  goto g_21;
  u_2 :
  AllBuild();
  goto t_2;
  r_2 :
  Cpop();
  t_2 :
  Return();
  q_2 :
  Ccall(_stratego_b_15);
  MoveTop(1,1);
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Cons",Egetd(0,4),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(0,5),App0("Nil")))),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(1,2);
  goto k_19;
  k_19 :
  TestFunFC(u_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto l_19;
  l_19 :
  TestFunFC(u_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto m_19;
  m_19 :
  TestFunFC(d_0,&&fail,Egetd(1,6));
  Rpush(w_2);
  goto j_19;
  w_2 :
  goto v_2;
  j_19 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(x_2);
  h_21 :
  Cpush(z_2);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_3);
  goto h_21;
  a_3 :
  AllBuild();
  goto y_2;
  z_2 :
  Ccall(_stratego_j_16);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto b_3;
  y_2 :
  Cpop();
  b_3 :
  Return();
  x_2 :
  Ccall(_stratego_j_15);
  Return();
  v_2 :
  Epopd(1,6);
  Tpop();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_15)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("gcc"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_v_15);
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_15)
  Epushd(0,3);
  Tdupl();
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compiling"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_z_14);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(c_3);
  h_22 :
  Cpush(e_3);
  Ccall(_stratego_j_16);
  goto d_3;
  e_3 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Cpush(h_3);
  Epushd(1,2);
  MoveTop(1,1);
  goto m_21;
  m_21 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(j_3);
  goto l_21;
  j_3 :
  goto i_3;
  l_21 :
  Move(0,1,1,2);
  Return();
  i_3 :
  Epopd(1,2);
  goto g_3;
  h_3 :
  goto l_3;
  g_3 :
  Cpop();
  l_3 :
  OneNextSon();
  Rpush(m_3);
  goto h_22;
  m_3 :
  AllBuild();
  goto f_3;
  d_3 :
  Cpop();
  f_3 :
  Return();
  c_3 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_15);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".o"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_15);
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App2("Cons",ATmakeString("-c"),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(0,3),App0("Nil"))))),App0("TNil"))));
  MoveTop(1,1);
  goto q_21;
  q_21 :
  TestFunFC(u_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_21;
  r_21 :
  TestFunFC(u_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto s_21;
  s_21 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(o_3);
  goto p_21;
  o_3 :
  goto n_3;
  p_21 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(p_3);
  i_22 :
  Cpush(r_3);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_3);
  goto i_22;
  s_3 :
  AllBuild();
  goto q_3;
  r_3 :
  Ccall(_stratego_j_16);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto t_3;
  q_3 :
  Cpop();
  t_3 :
  Return();
  p_3 :
  Ccall(_stratego_j_15);
  Return();
  n_3 :
  Epopd(1,5);
  Tpop();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Epopd(0,3);
ENDPROC

PROC(_stratego_l_15)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_22;
  k_22 :
  TestFunFC(w_3,&&fail,Egetd(0,1));
  Rpush(v_3);
  goto j_22;
  v_3 :
  goto u_3;
  j_22 :
  Return();
  u_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_15)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_z_14);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_n_15)
  Tdupl();
  Ccall(_stratego_m_15);
  Tset(MakeInt(1));
  Ccall(_stratego_y_14);
  Tpop();
ENDPROC

PROC(_stratego_o_15)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_22;
  w_22 :
  TestFunFC(z_3,&&fail,Egetd(0,1));
  Rpush(y_3);
  goto v_22;
  y_3 :
  goto x_3;
  v_22 :
  Return();
  x_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_15)
  Epushd(0,3);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(a_4);
  r_40 :
  Cpush(c_4);
  Ccall(_stratego_j_16);
  goto b_4;
  c_4 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Cpush(f_4);
  Epushd(1,2);
  MoveTop(1,1);
  goto z_22;
  z_22 :
  TestFunFC(i_4,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(h_4);
  goto y_22;
  h_4 :
  goto g_4;
  y_22 :
  Move(0,1,1,2);
  Return();
  g_4 :
  Epopd(1,2);
  goto e_4;
  f_4 :
  goto j_4;
  e_4 :
  Cpop();
  j_4 :
  OneNextSon();
  Rpush(k_4);
  goto r_40;
  k_4 :
  AllBuild();
  goto d_4;
  b_4 :
  Cpop();
  d_4 :
  Return();
  a_4 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".s1"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/frontend"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/frontend"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,2),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto i_23;
  i_23 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto j_23;
  j_23 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto k_23;
  k_23 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(m_4);
  goto g_23;
  m_4 :
  goto l_4;
  g_23 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(n_4);
  s_40 :
  Cpush(p_4);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_4);
  goto s_40;
  q_4 :
  AllBuild();
  goto o_4;
  p_4 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto r_4;
  o_4 :
  Cpop();
  r_4 :
  Return();
  n_4 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  l_4 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Cpush(t_4);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tdupl();
  u_4 :
  TestFunTop(k_0);
  Cpush(v_4);
  Arg(0);
  Ccall(_stratego_o_15);
  Tpop();
  Cpop();
  goto w_4;
  v_4 :
  Arg(1);
  Tdrop();
  goto u_4;
  w_4 :
  Tpop();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Cpush(y_4);
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".sdefs"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/extract-all"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/extract-all"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,2),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto t_23;
  t_23 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto u_23;
  u_23 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto v_23;
  v_23 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(a_5);
  goto r_23;
  a_5 :
  goto z_4;
  r_23 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(b_5);
  u_40 :
  Cpush(d_5);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_5);
  goto u_40;
  e_5 :
  AllBuild();
  goto c_5;
  d_5 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto f_5;
  c_5 :
  Cpop();
  f_5 :
  Return();
  b_5 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  z_4 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Epopd(1,2);
  goto x_4;
  y_4 :
  Tset(App2("Cons",ATmakeString("extracting all definitions failed"),App0("Nil")));
  Ccall(_stratego_n_15);
  goto g_5;
  x_4 :
  Cpop();
  g_5 :
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("abstract syntax (after frontend) written to "),App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,3),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_z_14);
  Tset(MakeInt(0));
  Ccall(_stratego_y_14);
  goto s_4;
  t_4 :
  goto h_5;
  s_4 :
  Cpop();
  h_5 :
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".s2"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/extract"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/extract"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,2),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto g_24;
  g_24 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_24;
  h_24 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto i_24;
  i_24 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(j_5);
  goto e_24;
  j_5 :
  goto i_5;
  e_24 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(k_5);
  v_40 :
  Cpush(m_5);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_5);
  goto v_40;
  n_5 :
  AllBuild();
  goto l_5;
  m_5 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto o_5;
  l_5 :
  Cpop();
  o_5 :
  Return();
  k_5 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  i_5 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,3,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".s"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,4,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/inline"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/inline"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,3),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,4),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto r_24;
  r_24 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto s_24;
  s_24 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto t_24;
  t_24 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(q_5);
  goto p_24;
  q_5 :
  goto p_5;
  p_24 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(r_5);
  w_40 :
  Cpush(t_5);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_5);
  goto w_40;
  u_5 :
  AllBuild();
  goto s_5;
  t_5 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto v_5;
  s_5 :
  Cpop();
  v_5 :
  Return();
  r_5 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  p_5 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,5,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,6,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/Stratego-Normal-Format"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/Stratego-Normal-Format"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,5),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,6),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto c_25;
  c_25 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto d_25;
  d_25 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto e_25;
  e_25 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(x_5);
  goto a_25;
  x_5 :
  goto w_5;
  a_25 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(y_5);
  x_40 :
  Cpush(a_6);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_6);
  goto x_40;
  b_6 :
  AllBuild();
  goto z_5;
  a_6 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto c_6;
  z_5 :
  Cpop();
  c_6 :
  Return();
  y_5 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  w_5 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,7,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".so1"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,8,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/optimize1"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/optimize1"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,7);
  NotNULLd(1,8);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,7),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,8),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto n_25;
  n_25 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto o_25;
  o_25 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto p_25;
  p_25 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(e_6);
  goto l_25;
  e_6 :
  goto d_6;
  l_25 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(f_6);
  y_40 :
  Cpush(h_6);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_6);
  goto y_40;
  i_6 :
  AllBuild();
  goto g_6;
  h_6 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto j_6;
  g_6 :
  Cpop();
  j_6 :
  Return();
  f_6 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  d_6 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Epopd(1,8);
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Cpush(l_6);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tdupl();
  m_6 :
  TestFunTop(k_0);
  Cpush(n_6);
  Arg(0);
  Ccall(_stratego_l_15);
  Tpop();
  Cpop();
  goto o_6;
  n_6 :
  Arg(1);
  Tdrop();
  goto m_6;
  o_6 :
  Tpop();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".so2"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/fusion"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/fusion"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,2),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto y_25;
  y_25 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto z_25;
  z_25 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto a_26;
  a_26 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(q_6);
  goto w_25;
  q_6 :
  goto p_6;
  w_25 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(r_6);
  a_41 :
  Cpush(t_6);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_6);
  goto a_41;
  z_6 :
  AllBuild();
  goto s_6;
  t_6 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto a_7;
  s_6 :
  Cpop();
  a_7 :
  Return();
  r_6 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  p_6 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  goto k_6;
  l_6 :
  goto b_7;
  k_6 :
  Cpop();
  b_7 :
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(1,14);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".so3"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/compile-match"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/compile-match"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,2),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto j_26;
  j_26 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto k_26;
  k_26 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto l_26;
  l_26 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(e_7);
  goto h_26;
  e_7 :
  goto c_7;
  h_26 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(f_7);
  b_41 :
  Cpush(h_7);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_7);
  goto b_41;
  i_7 :
  AllBuild();
  goto g_7;
  h_7 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto j_7;
  g_7 :
  Cpop();
  j_7 :
  Return();
  f_7 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  c_7 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,3,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".so4"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,4,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/optimize2"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/optimize2"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,3),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,4),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto u_26;
  u_26 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_26;
  v_26 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto w_26;
  w_26 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(l_7);
  goto s_26;
  l_7 :
  goto k_7;
  s_26 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(m_7);
  c_41 :
  Cpush(o_7);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_7);
  goto c_41;
  p_7 :
  AllBuild();
  goto n_7;
  o_7 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto q_7;
  n_7 :
  Cpop();
  q_7 :
  Return();
  m_7 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  k_7 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,5,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,6,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/Stratego-Optimized-Format"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/Stratego-Optimized-Format"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,5),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,6),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto f_27;
  f_27 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_27;
  g_27 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto h_27;
  h_27 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(t_7);
  goto d_27;
  t_7 :
  goto s_7;
  d_27 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(u_7);
  d_41 :
  Cpush(w_7);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_7);
  goto d_41;
  x_7 :
  AllBuild();
  goto v_7;
  w_7 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto y_7;
  v_7 :
  Cpop();
  y_7 :
  Return();
  u_7 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  s_7 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,7,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".i1"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,8,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/backend"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/backend"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,7);
  NotNULLd(1,8);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,7),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,8),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto q_27;
  q_27 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto r_27;
  r_27 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto s_27;
  s_27 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(a_8);
  goto o_27;
  a_8 :
  goto z_7;
  o_27 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(b_8);
  e_41 :
  Cpush(g_8);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_8);
  goto e_41;
  h_8 :
  AllBuild();
  goto c_8;
  g_8 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto i_8;
  c_8 :
  Cpop();
  i_8 :
  Return();
  b_8 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  z_7 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,9,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,10,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/Abstract-Machine-Format"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/Abstract-Machine-Format"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,9);
  NotNULLd(1,10);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,9),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,10),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto b_28;
  b_28 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_28;
  c_28 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto d_28;
  d_28 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(k_8);
  goto z_27;
  k_8 :
  goto j_8;
  z_27 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(l_8);
  f_41 :
  Cpush(n_8);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_8);
  goto f_41;
  o_8 :
  AllBuild();
  goto m_8;
  n_8 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto p_8;
  m_8 :
  Cpop();
  p_8 :
  Return();
  l_8 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  j_8 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,11,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".i"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,12,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/postprocess"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/postprocess"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,11);
  NotNULLd(1,12);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,11),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,12),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto m_28;
  m_28 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto n_28;
  n_28 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto o_28;
  o_28 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(r_8);
  goto k_28;
  r_8 :
  goto q_8;
  k_28 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(s_8);
  g_41 :
  Cpush(u_8);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_8);
  goto g_41;
  v_8 :
  AllBuild();
  goto t_8;
  u_8 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto w_8;
  t_8 :
  Cpop();
  w_8 :
  Return();
  s_8 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  q_8 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,13,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".c"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,14,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/pp-instructions"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/pp-instructions"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,13);
  NotNULLd(1,14);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,13),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,14),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto x_28;
  x_28 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto y_28;
  y_28 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto z_28;
  z_28 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(y_8);
  goto v_28;
  y_8 :
  goto x_8;
  v_28 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(z_8);
  h_41 :
  Cpush(b_9);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_9);
  goto h_41;
  c_9 :
  AllBuild();
  goto a_9;
  b_9 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto d_9;
  a_9 :
  Cpop();
  d_9 :
  Return();
  z_8 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  x_8 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Epopd(1,14);
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Epopd(0,3);
ENDPROC

PROC(_stratego_q_15)
  Epushd(0,1);
  Cpush(g_9);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(h_9);
  m_43 :
  Cpush(j_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_41;
  j_41 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_41;
  k_41 :
  TestFunFC(m_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_9);
  goto i_41;
  l_9 :
  goto k_9;
  i_41 :
  Move(0,1,1,3);
  Return();
  k_9 :
  Epopd(1,4);
  goto i_9;
  j_9 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_9);
  goto m_43;
  o_9 :
  AllBuild();
  goto n_9;
  i_9 :
  Cpop();
  n_9 :
  Return();
  h_9 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".tree1"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,2),App0("TNil"))));
  MoveTop(2,1);
  goto s_41;
  s_41 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto t_41;
  t_41 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto u_41;
  u_41 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(q_9);
  goto n_41;
  q_9 :
  goto p_9;
  n_41 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,2);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_u_15);
  MoveTop(4,1);
  goto r_41;
  r_41 :
  TestFunFC(t_9,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(s_9);
  goto o_41;
  s_9 :
  goto r_9;
  o_41 :
  NotNULLd(0,1);
  NotNULLd(4,2);
  Tset(App1("Specification",App2("Cons",App1("Strategies",App2("Cons",App3("SDef",ATmakeString("main"),App0("Nil"),App2("Call",App1("SVar",Egetd(0,1)),App0("Nil"))),App0("Nil"))),Egetd(4,2))));
  Tdupl();
  NotNULLd(0,1);
  NotNULLd(4,2);
  Tset(App1("Specification",App2("Cons",App1("Strategies",App2("Cons",App3("SDef",ATmakeString("main"),App0("Nil"),App2("Call",App1("SVar",Egetd(0,1)),App0("Nil"))),App0("Nil"))),Egetd(4,2))));
  MoveTop(3,1);
  Tpop();
  Return();
  r_9 :
  Epopd(4,2);
  Tpop();
  Tdupl();
  NotNULLd(2,4);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_t_15);
  Tpop();
  Epopd(3,1);
  Return();
  p_9 :
  Epopd(2,5);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  goto f_9;
  g_9 :
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".tree1"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,2),App0("TNil"))));
  MoveTop(2,1);
  goto z_41;
  z_41 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto a_42;
  a_42 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_42;
  b_42 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(w_9);
  goto x_41;
  w_9 :
  goto v_9;
  x_41 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_u_15);
  MoveTop(4,1);
  Move(3,1,4,1);
  Epopd(4,1);
  Tpop();
  Tdupl();
  NotNULLd(2,4);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_t_15);
  Tpop();
  Epopd(3,1);
  Return();
  v_9 :
  Epopd(2,5);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  goto u_9;
  f_9 :
  Cpop();
  u_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_15)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_43;
  o_43 :
  TestFunFC(z_9,&&fail,Egetd(0,1));
  Rpush(y_9);
  goto n_43;
  y_9 :
  goto x_9;
  n_43 :
  Return();
  x_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_15)
  Epushd(0,2);
  Cpush(b_10);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tdupl();
  c_10 :
  TestFunTop(k_0);
  Cpush(d_10);
  Arg(0);
  Ccall(_stratego_r_15);
  Tpop();
  Cpop();
  goto e_10;
  d_10 :
  Arg(1);
  Tdrop();
  goto c_10;
  e_10 :
  Tpop();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("abstract syntax (after parsing) written to "),App2("Cons",Egetd(0,1),App2("Cons",Egetd(0,2),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_z_14);
  Tset(MakeInt(0));
  Ccall(_stratego_y_14);
  goto a_10;
  b_10 :
  goto f_10;
  a_10 :
  Cpop();
  f_10 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_t_15)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_u_15)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_v_15)
  _ST_call();
ENDPROC

PROC(_stratego_w_15)
  Epushd(0,5);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_16);
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_16);
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto y_43;
  y_43 :
  TestFunFC(u_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto z_43;
  z_43 :
  TestFunFC(u_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_44;
  a_44 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(h_10);
  goto x_43;
  h_10 :
  goto g_10;
  x_43 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(i_10);
  i_44 :
  Cpush(k_10);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_10);
  goto i_44;
  l_10 :
  AllBuild();
  goto j_10;
  k_10 :
  Ccall(_stratego_j_16);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto m_10;
  j_10 :
  Cpop();
  m_10 :
  Return();
  i_10 :
  Ccall(_stratego_f_16);
  Return();
  g_10 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_x_15)
  Epushd(0,3);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(n_10);
  r_48 :
  Cpush(p_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_44;
  k_44 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_44;
  l_44 :
  TestFunFC(s_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_10);
  goto j_44;
  r_10 :
  goto q_10;
  j_44 :
  Move(0,2,1,3);
  Return();
  q_10 :
  Epopd(1,4);
  goto o_10;
  p_10 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_10);
  goto r_48;
  u_10 :
  AllBuild();
  goto t_10;
  o_10 :
  Cpop();
  t_10 :
  Return();
  n_10 :
  Rpush(v_10);
  s_48 :
  Cpush(x_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_44;
  n_44 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_44;
  o_44 :
  TestFunFC(i_4,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_10);
  goto m_44;
  z_10 :
  goto y_10;
  m_44 :
  Move(0,1,1,3);
  Return();
  y_10 :
  Epopd(1,4);
  goto w_10;
  x_10 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_11);
  goto s_48;
  b_11 :
  AllBuild();
  goto a_11;
  w_10 :
  Cpop();
  a_11 :
  Return();
  v_10 :
  Cpush(d_11);
  Rpush(e_11);
  t_48 :
  Cpush(g_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_44;
  q_44 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_44;
  r_44 :
  TestFunFC(k_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_11);
  goto p_44;
  i_11 :
  goto h_11;
  p_44 :
  Move(0,3,1,3);
  Return();
  h_11 :
  Epopd(1,4);
  goto f_11;
  g_11 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_11);
  goto t_48;
  k_11 :
  AllBuild();
  goto j_11;
  f_11 :
  Cpop();
  j_11 :
  Return();
  e_11 :
  goto c_11;
  d_11 :
  goto l_11;
  c_11 :
  Cpop();
  l_11 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".tree"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,12);
  Tset(ATmakeString("/pack-stratego"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/pack-stratego"),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset(App0("TNil"));
  Cpush(n_11);
  NotNULLd(0,3);
  Tset(App2("Cons",ATmakeString("-dep"),App2("Cons",Egetd(0,3),App0("Nil"))));
  goto m_11;
  n_11 :
  Tset(App0("Nil"));
  goto o_11;
  m_11 :
  Cpop();
  o_11 :
  MoveTop(2,2);
  NotNULLd(2,2);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",App2("Cons",ATmakeString("--silent"),Egetd(0,2)),App0("TNil"))));
  MoveTop(2,3);
  goto a_45;
  a_45 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_45;
  b_45 :
  TestFunFC(u_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto c_45;
  c_45 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(q_11);
  goto y_44;
  q_11 :
  goto p_11;
  y_44 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(r_11);
  u_48 :
  Cpush(t_11);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_11);
  goto u_48;
  u_11 :
  AllBuild();
  goto s_11;
  t_11 :
  Ccall(_stratego_j_16);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto v_11;
  s_11 :
  Cpop();
  v_11 :
  Return();
  r_11 :
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,2),App0("Nil"))))),App0("TNil"))));
  Epopd(3,1);
  Return();
  p_11 :
  MoveTop(2,8);
  goto f_45;
  f_45 :
  TestFunFC(u_0,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  MoveArg(2,10,2,8,1);
  goto g_45;
  g_45 :
  TestFunFC(u_0,&&fail,Egetd(2,10));
  MoveArg(2,11,2,10,0);
  MoveArg(2,12,2,10,1);
  goto h_45;
  h_45 :
  TestFunFC(d_0,&&fail,Egetd(2,12));
  Rpush(x_11);
  goto d_45;
  x_11 :
  goto w_11;
  d_45 :
  Epushd(3,1);
  NotNULLd(2,9);
  Tset(Egetd(2,9));
  Rpush(y_11);
  v_48 :
  Cpush(f_12);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_12);
  goto v_48;
  g_12 :
  AllBuild();
  goto e_12;
  f_12 :
  Ccall(_stratego_j_16);
  NotNULLd(2,11);
  Tset(Egetd(2,11));
  goto h_12;
  e_12 :
  Cpop();
  h_12 :
  Return();
  y_11 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  w_11 :
  Ccall(_stratego_v_15);
  Epopd(2,12);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Cpush(j_12);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(1,5);
  MoveTop(1,1);
  goto u_45;
  u_45 :
  TestFunFC(u_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_45;
  v_45 :
  TestFunFC(u_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_45;
  w_45 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(l_12);
  goto i_45;
  l_12 :
  goto k_12;
  i_45 :
  Epushd(2,5);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".tree"));
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto r_45;
  r_45 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto s_45;
  s_45 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_45;
  t_45 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(n_12);
  goto j_45;
  n_12 :
  goto m_12;
  j_45 :
  Tdupl();
  Epushd(3,7);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_w_15);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto o_45;
  o_45 :
  TestFunFC(u_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto p_45;
  p_45 :
  TestFunFC(u_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto q_45;
  q_45 :
  TestFunFC(d_0,&&fail,Egetd(3,7));
  Rpush(p_12);
  goto m_45;
  p_12 :
  goto o_12;
  m_45 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Ccall(_stratego_u_15);
  MoveTop(5,1);
  Move(4,1,5,1);
  Epopd(5,1);
  Tpop();
  Tdupl();
  NotNULLd(3,6);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,6),App2("TCons",Egetd(4,1),App0("TNil"))));
  Ccall(_stratego_t_15);
  Tpop();
  Epopd(4,1);
  Return();
  o_12 :
  Epopd(3,7);
  Tpop();
  Return();
  m_12 :
  Epopd(2,5);
  Return();
  k_12 :
  Epopd(1,5);
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  goto i_12;
  j_12 :
  goto q_12;
  i_12 :
  Cpop();
  q_12 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_y_15)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_48;
  x_48 :
  TestFunFC(t_12,&&fail,Egetd(0,1));
  Rpush(s_12);
  goto w_48;
  s_12 :
  goto r_12;
  w_48 :
  Return();
  r_12 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_15)
  Cpush(v_12);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tdupl();
  w_12 :
  TestFunTop(k_0);
  Cpush(x_12);
  Arg(0);
  Ccall(_stratego_y_15);
  Tpop();
  Cpop();
  goto y_12;
  x_12 :
  Arg(1);
  Tdrop();
  goto w_12;
  y_12 :
  Tpop();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_16);
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  goto u_12;
  v_12 :
  goto z_12;
  u_12 :
  Cpop();
  z_12 :
ENDPROC

PROC(_stratego_a_16)
  Epushd(0,1);
  Cpush(b_13);
  Rpush(c_13);
  k_49 :
  Cpush(e_13);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_49;
  b_49 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_49;
  c_49 :
  TestFunFC(h_13,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_13);
  goto a_49;
  g_13 :
  goto f_13;
  a_49 :
  Move(0,1,1,3);
  Return();
  f_13 :
  Epopd(1,4);
  goto d_13;
  e_13 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_13);
  goto k_49;
  j_13 :
  AllBuild();
  goto i_13;
  d_13 :
  Cpop();
  i_13 :
  Return();
  c_13 :
  goto a_13;
  b_13 :
  Tset(ATmakeString(""));
  Tdupl();
  Tset(ATmakeString(""));
  MoveTop(0,1);
  Tpop();
  goto k_13;
  a_13 :
  Cpop();
  k_13 :
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("The Stratego Compiler (version "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(")"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_z_14);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_16)
  Ccall(_stratego_a_16);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Usage: sc [options] -i file\n"),App2("Cons",ATmakeString("Options:\n"),App2("Cons",ATmakeString("  -i spec     Compile specification spec\n"),App2("Cons",ATmakeString("  -o target   Name executable target\n"),App2("Cons",ATmakeString("  --main s    Name main strategy [default: main]\n"),App2("Cons",ATmakeString("  -I dir      Look in dir for imported Stratego modules\n"),App2("Cons",ATmakeString("  -CI dir     Look in dir for C include files\n"),App2("Cons",ATmakeString("  -CL dir     Look in dir for C object libraries\n"),App2("Cons",ATmakeString("  --ast       Output abstract syntax of specification\n"),App2("Cons",ATmakeString("  --norm      Do not remove intermediate files\n"),App2("Cons",ATmakeString("  -F	    Produce all definitions pre-processed by frontend\n"),App2("Cons",ATmakeString("  -h|--help   Display this message"),App0("Nil"))))))))))))),App0("TNil"))));
  Ccall(_stratego_z_14);
ENDPROC

PROC(_stratego_c_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_49;
  m_49 :
  TestFunFC(n_13,&&fail,Egetd(0,1));
  Rpush(m_13);
  goto l_49;
  m_13 :
  goto l_13;
  l_49 :
  Return();
  l_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_49;
  p_49 :
  TestFunFC(q_13,&&fail,Egetd(0,1));
  Rpush(p_13);
  goto o_49;
  p_13 :
  goto o_13;
  o_49 :
  Return();
  o_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_16)
  Epushd(0,5);
  MoveTop(0,3);
  goto e_52;
  e_52 :
  TestFunFC(k_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto f_52;
  f_52 :
  TestFunFC(k_0,&&q_14,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(s_14);
  Rpush(t_14);
  goto r_49;
  t_14 :
  goto r_14;
  s_14 :
  Ccontinue(u_14);
  Rpush(v_14);
  goto s_49;
  v_14 :
  goto r_14;
  u_14 :
  Ccontinue(w_14);
  Rpush(x_14);
  goto t_49;
  x_14 :
  goto r_14;
  w_14 :
  Ccontinue(t_16);
  Rpush(u_16);
  goto u_49;
  u_16 :
  goto r_14;
  t_16 :
  Ccontinue(v_16);
  Rpush(x_16);
  goto v_49;
  x_16 :
  goto r_14;
  v_16 :
  Ccontinue(y_16);
  Rpush(z_16);
  goto w_49;
  z_16 :
  goto r_14;
  y_16 :
  Ccontinue(a_17);
  Rpush(b_17);
  goto x_49;
  b_17 :
  goto r_14;
  a_17 :
  Ccontinue(c_17);
  Rpush(o_17);
  goto y_49;
  o_17 :
  goto r_14;
  c_17 :
  Ccontinue(w_17);
  Rpush(x_17);
  goto z_49;
  x_17 :
  goto r_14;
  w_17 :
  Ccontinue(y_17);
  Rpush(e_18);
  goto a_50;
  e_18 :
  goto r_14;
  y_17 :
  Ccontinue(g_18);
  Rpush(i_18);
  goto b_50;
  i_18 :
  goto r_14;
  g_18 :
  Ccontinue(p_18);
  Rpush(x_18);
  goto c_50;
  x_18 :
  goto r_14;
  p_18 :
  Ccontinue(y_18);
  Rpush(a_19);
  goto d_50;
  a_19 :
  goto r_14;
  y_18 :
  Ccontinue(g_19);
  Rpush(h_19);
  goto e_50;
  h_19 :
  goto r_14;
  g_19 :
  Rpush(s_19);
  goto f_50;
  s_19 :
  goto i_19;
  r_14 :
  Cpop();
  i_19 :
  goto p_14;
  q_14 :
  Cpush(u_19);
  Rpush(w_19);
  goto r_49;
  w_19 :
  goto t_19;
  u_19 :
  Ccontinue(x_19);
  Rpush(y_19);
  goto s_49;
  y_19 :
  goto t_19;
  x_19 :
  Ccontinue(z_19);
  Rpush(a_20);
  goto t_49;
  a_20 :
  goto t_19;
  z_19 :
  Ccontinue(b_20);
  Rpush(g_20);
  goto u_49;
  g_20 :
  goto t_19;
  b_20 :
  Ccontinue(h_20);
  Rpush(i_20);
  goto v_49;
  i_20 :
  goto t_19;
  h_20 :
  Ccontinue(j_20);
  Rpush(k_20);
  goto b_50;
  k_20 :
  goto t_19;
  j_20 :
  Ccontinue(l_20);
  Rpush(m_20);
  goto c_50;
  m_20 :
  goto t_19;
  l_20 :
  Ccontinue(o_20);
  Rpush(p_20);
  goto d_50;
  p_20 :
  goto t_19;
  o_20 :
  Ccontinue(r_20);
  Rpush(s_20);
  goto e_50;
  s_20 :
  goto t_19;
  r_20 :
  Rpush(u_20);
  goto f_50;
  u_20 :
  goto t_20;
  t_19 :
  Cpop();
  t_20 :
  goto p_14;
  p_14 :
  goto m_14;
  f_50 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_52;
  c_52 :
  TestStr(1,1,"-?",&&fail);
  Rpush(w_20);
  goto b_52;
  w_20 :
  goto v_20;
  b_52 :
  Return();
  v_20 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  m_14 :
  goto l_14;
  e_50 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_51;
  z_51 :
  TestStr(1,1,"-h",&&fail);
  Rpush(y_20);
  goto y_51;
  y_20 :
  goto x_20;
  y_51 :
  Return();
  x_20 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_14 :
  goto k_14;
  d_50 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_51;
  w_51 :
  TestStr(1,1,"--help",&&fail);
  Rpush(d_21);
  goto v_51;
  d_21 :
  goto z_20;
  v_51 :
  Return();
  z_20 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_14 :
  goto j_14;
  c_50 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_51;
  t_51 :
  TestStr(1,1,"-s",&&fail);
  Rpush(i_21);
  goto s_51;
  i_21 :
  goto e_21;
  s_51 :
  Return();
  e_21 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  j_14 :
  goto i_14;
  b_50 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_51;
  q_51 :
  TestStr(1,1,"-b",&&fail);
  Rpush(n_21);
  goto p_51;
  n_21 :
  goto k_21;
  p_51 :
  Return();
  k_21 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  i_14 :
  goto d_14;
  a_50 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_51;
  m_51 :
  TestStr(1,1,"--output",&&fail);
  Rpush(f_22);
  goto l_51;
  f_22 :
  goto o_21;
  l_51 :
  Return();
  o_21 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  d_14 :
  goto c_14;
  z_49 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_51;
  i_51 :
  TestStr(1,1,"-o",&&fail);
  Rpush(m_22);
  goto h_51;
  m_22 :
  goto g_22;
  h_51 :
  Return();
  g_22 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  c_14 :
  goto z_13;
  y_49 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_51;
  e_51 :
  TestStr(1,1,"--input",&&fail);
  Rpush(o_22);
  goto d_51;
  o_22 :
  goto n_22;
  d_51 :
  Return();
  n_22 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  z_13 :
  goto y_13;
  x_49 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_51;
  a_51 :
  TestStr(1,1,"-i",&&fail);
  Rpush(r_22);
  goto z_50;
  r_22 :
  goto q_22;
  z_50 :
  Return();
  q_22 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  y_13 :
  goto x_13;
  w_49 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_50;
  w_50 :
  TestStr(1,1,"@version",&&fail);
  Rpush(t_22);
  goto v_50;
  t_22 :
  goto s_22;
  v_50 :
  Return();
  s_22 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  x_13 :
  goto w_13;
  v_49 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_50;
  t_50 :
  TestStr(1,1,"--version",&&fail);
  Rpush(a_23);
  goto s_50;
  a_23 :
  goto u_22;
  s_50 :
  Return();
  u_22 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  w_13 :
  goto u_13;
  u_49 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_50;
  q_50 :
  TestStr(1,1,"-v",&&fail);
  Rpush(c_23);
  goto p_50;
  c_23 :
  goto b_23;
  p_50 :
  Return();
  b_23 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  u_13 :
  goto t_13;
  t_49 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_50;
  n_50 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(e_23);
  goto m_50;
  e_23 :
  goto d_23;
  m_50 :
  Return();
  d_23 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  t_13 :
  goto s_13;
  s_49 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_50;
  k_50 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(h_23);
  goto j_50;
  h_23 :
  goto f_23;
  j_50 :
  Return();
  f_23 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  s_13 :
  goto r_13;
  r_49 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_50;
  h_50 :
  TestStr(1,1,"-S",&&fail);
  Rpush(m_23);
  goto g_50;
  m_23 :
  goto l_23;
  g_50 :
  Return();
  l_23 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  r_13 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_f_16)
  _ST_implode_string();
ENDPROC

PROC(_stratego_g_16)
  _ST_explode_string();
ENDPROC

PROC(_stratego_h_16)
  Ccall(_stratego_g_16);
  Cpush(o_23);
  Rpush(p_23);
  e_56 :
  Cpush(s_23);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_23);
  goto e_56;
  w_23 :
  AllBuild();
  goto q_23;
  s_23 :
  Epushd(0,3);
  MoveTop(0,1);
  goto z_55;
  z_55 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_56;
  a_56 :
  TestInt(0,2,46,&&fail);
  Rpush(z_23);
  goto y_55;
  z_23 :
  goto y_23;
  y_55 :
  Tset(App0("Nil"));
  Return();
  y_23 :
  Epopd(0,3);
  goto x_23;
  q_23 :
  Cpop();
  x_23 :
  Return();
  p_23 :
  goto n_23;
  o_23 :
  goto a_24;
  n_23 :
  Cpop();
  a_24 :
  Ccall(_stratego_f_16);
ENDPROC

PROC(_stratego_i_16)
  Epushd(0,5);
  MoveTop(0,3);
  goto k_58;
  k_58 :
  TestFunFC(k_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto l_58;
  l_58 :
  TestFunFC(k_0,&&x_24,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(z_24);
  Rpush(b_25);
  goto f_56;
  b_25 :
  goto y_24;
  z_24 :
  Ccontinue(f_25);
  Rpush(g_25);
  goto g_56;
  g_25 :
  goto y_24;
  f_25 :
  Ccontinue(h_25);
  Rpush(i_25);
  goto h_56;
  i_25 :
  goto y_24;
  h_25 :
  Ccontinue(j_25);
  Rpush(k_25);
  goto i_56;
  k_25 :
  goto y_24;
  j_25 :
  Ccontinue(m_25);
  Rpush(q_25);
  goto j_56;
  q_25 :
  goto y_24;
  m_25 :
  Ccontinue(r_25);
  Rpush(s_25);
  goto k_56;
  s_25 :
  goto y_24;
  r_25 :
  Ccontinue(t_25);
  Rpush(u_25);
  goto l_56;
  u_25 :
  goto y_24;
  t_25 :
  Ccontinue(v_25);
  Rpush(x_25);
  goto m_56;
  x_25 :
  goto y_24;
  v_25 :
  Ccontinue(b_26);
  Rpush(c_26);
  goto n_56;
  c_26 :
  goto y_24;
  b_26 :
  Ccontinue(d_26);
  Rpush(e_26);
  goto o_56;
  e_26 :
  goto y_24;
  d_26 :
  Ccontinue(f_26);
  Rpush(g_26);
  goto p_56;
  g_26 :
  goto y_24;
  f_26 :
  Ccontinue(i_26);
  Rpush(m_26);
  goto q_56;
  m_26 :
  goto y_24;
  i_26 :
  Rpush(o_26);
  goto r_56;
  o_26 :
  goto n_26;
  y_24 :
  Cpop();
  n_26 :
  goto w_24;
  x_24 :
  Cpush(q_26);
  Rpush(r_26);
  goto k_56;
  r_26 :
  goto p_26;
  q_26 :
  Ccontinue(t_26);
  Rpush(x_26);
  goto l_56;
  x_26 :
  goto p_26;
  t_26 :
  Ccontinue(y_26);
  Rpush(z_26);
  goto p_56;
  z_26 :
  goto p_26;
  y_26 :
  Ccontinue(a_27);
  Rpush(b_27);
  goto q_56;
  b_27 :
  goto p_26;
  a_27 :
  Rpush(e_27);
  goto r_56;
  e_27 :
  goto c_27;
  p_26 :
  Cpop();
  c_27 :
  goto w_24;
  w_24 :
  goto v_24;
  r_56 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_58;
  i_58 :
  TestStr(1,1,"--fusion",&&fail);
  Rpush(j_27);
  goto h_58;
  j_27 :
  goto i_27;
  h_58 :
  Return();
  i_27 :
  Epopd(1,1);
  Tpop();
  Tset(App0("FUSION"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("FUSION"),Egetd(0,5)));
  Return();
  v_24 :
  goto u_24;
  q_56 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_58;
  f_58 :
  TestStr(1,1,"-F",&&fail);
  Rpush(l_27);
  goto e_58;
  l_27 :
  goto k_27;
  e_58 :
  Return();
  k_27 :
  Epopd(1,1);
  Tpop();
  Tset(App0("FRONTEND"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("FRONTEND"),Egetd(0,5)));
  Return();
  u_24 :
  goto q_24;
  p_56 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_58;
  c_58 :
  TestStr(1,1,"--ast",&&fail);
  Rpush(n_27);
  goto b_58;
  n_27 :
  goto m_27;
  b_58 :
  Return();
  m_27 :
  Epopd(1,1);
  Tpop();
  Tset(App0("AST"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("AST"),Egetd(0,5)));
  Return();
  q_24 :
  goto o_24;
  o_56 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_57;
  y_57 :
  TestStr(1,1,"-m",&&fail);
  Rpush(t_27);
  goto x_57;
  t_27 :
  goto p_27;
  x_57 :
  Return();
  p_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Main",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Main",Egetd(0,1)),Egetd(0,2)));
  Return();
  o_24 :
  goto n_24;
  n_56 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_57;
  u_57 :
  TestStr(1,1,"--main",&&fail);
  Rpush(v_27);
  goto t_57;
  v_27 :
  goto u_27;
  t_57 :
  Return();
  u_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Main",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Main",Egetd(0,1)),Egetd(0,2)));
  Return();
  n_24 :
  goto m_24;
  m_56 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto p_57;
  p_57 :
  TestStr(2,1,"-i",&&fail);
  Rpush(x_27);
  goto o_57;
  x_27 :
  goto w_27;
  o_57 :
  Return();
  w_27 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_h_16);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Input",Egetd(1,1)));
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(1,1)),Egetd(0,2)));
  Epopd(1,1);
  Return();
  m_24 :
  goto l_24;
  l_56 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_57;
  m_57 :
  TestStr(1,1,"--norm",&&fail);
  Rpush(a_28);
  goto l_57;
  a_28 :
  goto y_27;
  l_57 :
  Return();
  y_27 :
  Epopd(1,1);
  Tpop();
  Tset(App0("NORM"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("NORM"),Egetd(0,5)));
  Return();
  l_24 :
  goto k_24;
  k_56 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_57;
  j_57 :
  TestStr(1,1,"-CC",&&fail);
  Rpush(f_28);
  goto i_57;
  f_28 :
  goto e_28;
  i_57 :
  Return();
  e_28 :
  Epopd(1,1);
  Tpop();
  Tset(App0("CC"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("CC"),Egetd(0,5)));
  Return();
  k_24 :
  goto j_24;
  j_56 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_57;
  g_57 :
  TestStr(1,1,"-CL",&&fail);
  Rpush(h_28);
  goto f_57;
  h_28 :
  goto g_28;
  f_57 :
  Return();
  g_28 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Ignore"));
  NotNULLd(0,2);
  Tset(App2("Cons",App0("Ignore"),Egetd(0,2)));
  Return();
  j_24 :
  goto f_24;
  i_56 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_57;
  d_57 :
  TestStr(1,1,"-CI",&&fail);
  Rpush(j_28);
  goto c_57;
  j_28 :
  goto i_28;
  c_57 :
  Return();
  i_28 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Ignore"));
  NotNULLd(0,2);
  Tset(App2("Cons",App0("Ignore"),Egetd(0,2)));
  Return();
  f_24 :
  goto d_24;
  h_56 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_57;
  a_57 :
  TestStr(1,1,"--Include",&&fail);
  Rpush(p_28);
  goto z_56;
  p_28 :
  goto l_28;
  z_56 :
  Return();
  l_28 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Ignore"));
  NotNULLd(0,2);
  Tset(App2("Cons",App0("Ignore"),Egetd(0,2)));
  Return();
  d_24 :
  goto c_24;
  g_56 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_56;
  x_56 :
  TestStr(1,1,"-I",&&fail);
  Rpush(r_28);
  goto w_56;
  r_28 :
  goto q_28;
  w_56 :
  Return();
  q_28 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Ignore"));
  NotNULLd(0,2);
  Tset(App2("Cons",App0("Ignore"),Egetd(0,2)));
  Return();
  c_24 :
  goto b_24;
  f_56 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_56;
  t_56 :
  TestStr(1,1,"-e",&&fail);
  Rpush(t_28);
  goto s_56;
  t_28 :
  goto s_28;
  s_56 :
  Return();
  s_28 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("ExecDir",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("ExecDir",Egetd(0,1)),Egetd(0,2)));
  Return();
  b_24 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_61;
  x_61 :
  TestFunFC(o_1,&&fail,Egetd(0,1));
  Rpush(w_28);
  goto w_61;
  w_28 :
  goto u_28;
  w_61 :
  Return();
  u_28 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_16)
  Epushd(0,4);
  Tdupl();
  Epushd(1,1);
  Rpush(h_29);
  v_64 :
  Cpush(j_29);
  Ccall(_stratego_j_16);
  goto i_29;
  j_29 :
  Epushd(2,3);
  MoveTop(2,1);
  goto b_62;
  b_62 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_62;
  c_62 :
  TestStr(2,2,"-I",&&u_29);
  Cpush(x_29);
  Rpush(e_30);
  goto z_61;
  e_30 :
  goto v_29;
  x_29 :
  Rpush(g_30);
  goto a_62;
  g_30 :
  goto f_30;
  v_29 :
  Cpop();
  f_30 :
  goto o_29;
  u_29 :
  Rpush(o_29);
  goto a_62;
  o_29 :
  goto n_29;
  a_62 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(h_30);
  goto v_64;
  h_30 :
  Return();
  n_29 :
  goto m_29;
  z_61 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_30);
  goto v_64;
  j_30 :
  AllBuild();
  AllBuild();
  Return();
  m_29 :
  Epopd(2,3);
  goto k_29;
  i_29 :
  Cpop();
  k_29 :
  Return();
  h_29 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Rpush(k_30);
  w_64 :
  Cpush(r_30);
  Ccall(_stratego_j_16);
  goto l_30;
  r_30 :
  Epushd(2,3);
  MoveTop(2,1);
  goto i_62;
  i_62 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_62;
  j_62 :
  TestStr(2,2,"-CI",&&d_31);
  Cpush(g_31);
  Rpush(h_31);
  goto e_62;
  h_31 :
  goto e_31;
  g_31 :
  Rpush(o_31);
  goto f_62;
  o_31 :
  goto i_31;
  e_31 :
  Cpop();
  i_31 :
  goto c_31;
  d_31 :
  Rpush(c_31);
  goto f_62;
  c_31 :
  goto b_31;
  f_62 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(p_31);
  goto w_64;
  p_31 :
  Return();
  b_31 :
  goto u_30;
  e_62 :
  Epushd(3,3);
  MoveTop(3,1);
  goto h_62;
  h_62 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_31);
  goto g_62;
  w_31 :
  goto r_31;
  g_62 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_31);
  goto w_64;
  x_31 :
  AllBuild();
  Return();
  r_31 :
  Epopd(3,3);
  Return();
  u_30 :
  Epopd(2,3);
  goto s_30;
  l_30 :
  Cpop();
  s_30 :
  Return();
  k_30 :
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Rpush(y_31);
  x_64 :
  Cpush(b_32);
  Ccall(_stratego_j_16);
  goto z_31;
  b_32 :
  Epushd(2,3);
  MoveTop(2,1);
  goto p_62;
  p_62 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_62;
  q_62 :
  TestStr(2,2,"-CL",&&l_32);
  Cpush(s_32);
  Rpush(t_32);
  goto l_62;
  t_32 :
  goto n_32;
  s_32 :
  Rpush(v_32);
  goto m_62;
  v_32 :
  goto u_32;
  n_32 :
  Cpop();
  u_32 :
  goto k_32;
  l_32 :
  Rpush(k_32);
  goto m_62;
  k_32 :
  goto e_32;
  m_62 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(x_32);
  goto x_64;
  x_32 :
  Return();
  e_32 :
  goto d_32;
  l_62 :
  Epushd(3,3);
  MoveTop(3,1);
  goto o_62;
  o_62 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(z_32);
  goto n_62;
  z_32 :
  goto y_32;
  n_62 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_33);
  goto x_64;
  f_33 :
  AllBuild();
  Return();
  y_32 :
  Epopd(3,3);
  Return();
  d_32 :
  Epopd(2,3);
  goto c_32;
  z_31 :
  Cpop();
  c_32 :
  Return();
  y_31 :
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Program",Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(g_33);
  y_64 :
  Cpush(n_33);
  Cpush(p_33);
  Ccall(_stratego_j_16);
  goto o_33;
  p_33 :
  Cpush(t_33);
  Ccall(_stratego_i_16);
  goto s_33;
  t_33 :
  Ccall(_stratego_e_16);
  goto u_33;
  s_33 :
  Cpop();
  u_33 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_34);
  goto y_64;
  a_34 :
  AllBuild();
  goto q_33;
  o_33 :
  Cpop();
  q_33 :
  goto i_33;
  n_33 :
  Epushd(1,3);
  MoveTop(1,1);
  goto u_62;
  u_62 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(i_34);
  goto t_62;
  i_34 :
  goto d_34;
  t_62 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",App1("Undefined",Egetd(1,2)),Egetd(1,3)));
  Return();
  d_34 :
  Epopd(1,3);
  goto b_34;
  i_33 :
  Cpop();
  b_34 :
  Return();
  g_33 :
  AllBuild();
  Cpush(k_34);
  Epushd(1,1);
  Rpush(l_34);
  z_64 :
  Cpush(o_34);
  Epushd(2,4);
  MoveTop(2,1);
  goto w_62;
  w_62 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto x_62;
  x_62 :
  TestFunFC(w_34,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(v_34);
  goto v_62;
  v_34 :
  goto p_34;
  v_62 :
  Move(0,4,2,3);
  Return();
  p_34 :
  Epopd(2,4);
  goto n_34;
  o_34 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_35);
  goto z_64;
  d_35 :
  AllBuild();
  goto y_34;
  n_34 :
  Cpop();
  y_34 :
  Return();
  l_34 :
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(1,1);
  NotNULLd(0,4);
  Tset(App2("TCons",App2("Cons",App1("InclDir",Egetd(0,1)),App2("Cons",App1("CInclDir",Egetd(0,2)),App2("Cons",App1("CLibDir",Egetd(0,3)),Egetd(1,1)))),App2("TCons",App2("TCons",Egetd(0,4),App2("TCons",ATmakeString(".r"),App0("TNil"))),App0("TNil"))));
  Epopd(1,1);
  goto j_34;
  k_34 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Cons",App0("Help"),Egetd(1,1)),App2("TCons",ATmakeString(""),App0("TNil"))));
  Epopd(1,1);
  goto e_35;
  j_34 :
  Cpop();
  e_35 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_l_16)
  Cpush(g_35);
  Ccall(_stratego_k_16);
  goto f_35;
  g_35 :
  Ccall(_stratego_b_16);
  Tset(MakeInt(1));
  Ccall(_stratego_y_14);
  goto i_35;
  f_35 :
  Cpop();
  i_35 :
  Cpush(k_35);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Tdupl();
  q_35 :
  TestFunTop(k_0);
  Cpush(r_35);
  Arg(0);
  Cpush(z_35);
  Ccall(_stratego_d_16);
  goto y_35;
  z_35 :
  Ccontinue(a_36);
  Epushd(0,2);
  MoveTop(0,1);
  goto b_65;
  b_65 :
  TestFunFC(e_36,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_36);
  goto a_65;
  d_36 :
  goto b_36;
  a_65 :
  Return();
  b_36 :
  Epopd(0,2);
  goto y_35;
  a_36 :
  Ccall(_stratego_c_16);
  goto f_36;
  y_35 :
  Cpop();
  f_36 :
  Tpop();
  Cpop();
  goto t_35;
  r_35 :
  Arg(1);
  Tdrop();
  goto q_35;
  t_35 :
  Tpop();
  Ccall(_stratego_b_16);
  Tset(MakeInt(1));
  Ccall(_stratego_y_14);
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  goto j_35;
  k_35 :
  Ccontinue(l_36);
  Ccall(_stratego_z_15);
  Ccall(_stratego_x_15);
  Ccall(_stratego_s_15);
  Ccall(_stratego_q_15);
  Ccall(_stratego_p_15);
  Ccall(_stratego_k_15);
  Ccall(_stratego_i_15);
  Cpush(o_36);
  Cpush(t_36);
  Tdupl();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(u_36);
  a_67 :
  Cpush(w_36);
  Epushd(0,3);
  MoveTop(0,1);
  goto d_65;
  d_65 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto e_65;
  e_65 :
  TestFunFC(a_37,&&fail,Egetd(0,2));
  Rpush(z_36);
  goto c_65;
  z_36 :
  goto y_36;
  c_65 :
  Return();
  y_36 :
  Epopd(0,3);
  goto v_36;
  w_36 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_37);
  goto a_67;
  h_37 :
  AllBuild();
  goto g_37;
  v_36 :
  Cpop();
  g_37 :
  Return();
  u_36 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  t_36 :
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Epushd(0,5);
  MoveTop(0,1);
  goto s_65;
  s_65 :
  TestFunFC(u_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto t_65;
  t_65 :
  TestFunFC(u_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto u_65;
  u_65 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(o_37);
  goto f_65;
  o_37 :
  goto j_37;
  f_65 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App2("Cons",ATmakeString(".tree"),App2("Cons",ATmakeString(".tree1"),App2("Cons",ATmakeString(".s"),App2("Cons",ATmakeString(".s1"),App2("Cons",ATmakeString(".s2"),App2("Cons",ATmakeString(".so1"),App2("Cons",ATmakeString(".so2"),App2("Cons",ATmakeString(".so3"),App2("Cons",ATmakeString(".so4"),App2("Cons",ATmakeString(".i1"),App2("Cons",ATmakeString(".i"),App2("Cons",ATmakeString(".o"),App0("Nil"))))))))))))),App0("TNil"))));
  Rpush(p_37);
  b_67 :
  Epushd(2,7);
  MoveTop(2,1);
  goto m_65;
  m_65 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_65;
  n_65 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,7,2,3,1);
  goto o_65;
  o_65 :
  TestFunFC(o_1,&&u_37,Egetd(2,4));
  goto p_65;
  p_65 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(t_37);
  goto g_65;
  u_37 :
  TestFunFC(k_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto q_65;
  q_65 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(t_37);
  goto h_65;
  t_37 :
  goto r_37;
  h_65 :
  Epushd(3,5);
  NotNULLd(2,5);
  NotNULLd(2,2);
  NotNULLd(2,6);
  Tset(App2("TCons",App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_15);
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(b_38);
  goto b_67;
  b_38 :
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto j_65;
  j_65 :
  TestFunFC(u_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto k_65;
  k_65 :
  TestFunFC(u_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto l_65;
  l_65 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(c_38);
  goto i_65;
  c_38 :
  goto v_37;
  i_65 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  v_37 :
  Epopd(3,5);
  Return();
  r_37 :
  goto q_37;
  g_65 :
  Tset(App0("Nil"));
  Return();
  q_37 :
  Epopd(2,7);
  Return();
  p_37 :
  MoveTop(1,1);
  Tdupl();
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("rm"),App2("TCons",App2("Cons",ATmakeString("-f"),Egetd(1,1)),App0("TNil"))));
  Ccall(_stratego_v_15);
  Tpop();
  Epopd(1,1);
  Tpop();
  Return();
  j_37 :
  Epopd(0,5);
  OneNextSon();
  Ccall(_stratego_a_15);
  AllBuild();
  AllBuild();
  goto m_36;
  o_36 :
  goto e_38;
  m_36 :
  Cpop();
  e_38 :
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compilation succeeded"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_z_14);
  Tset(MakeInt(0));
  Ccall(_stratego_y_14);
  goto j_35;
  l_36 :
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compilation failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_z_14);
  Tset(MakeInt(1));
  Ccall(_stratego_y_14);
  goto h_38;
  j_35 :
  Cpop();
  h_38 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_l_16);
ENDPROC

DOIT

