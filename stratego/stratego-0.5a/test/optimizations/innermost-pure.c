#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,a_1);
VARDECL(AFun,w_0);
VARDECL(AFun,u_0);
VARDECL(AFun,d_0);
VARDECL(AFun,c_0);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(a_1,ATmakeAFun("Succ",1,0));
  MOVE(w_0,ATmakeAFun("Zero",0,0));
  MOVE(u_0,ATmakeAFun("Plus",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(c_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_h_2)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto y_0;
  y_0 :
  TestFunFC(c_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto z_0;
  z_0 :
  TestFunFC(c_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto f_1;
  f_1 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(b_0);
  goto x_0;
  b_0 :
  goto a_0;
  x_0 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  a_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_i_2)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_s_2);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_j_2)
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_k_2);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_p_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_k_2)
  _ST_add();
ENDPROC

PROC(_stratego_l_2)
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_k_2);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_p_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_m_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_i_2);
  Tpop();
  Cpush(f_0);
  Tdupl();
  Cpush(h_0);
  Epushd(1,1);
  Tset(App2("Plus",App1("Succ",App2("Plus",App1("Succ",App0("Zero")),App1("Succ",App0("Zero")))),App1("Succ",App0("Zero"))));
  Cpush(j_0);
  Rpush(k_0);
  t_5 :
  AllInit();
  l_0 :
  AllNextSon(&&m_0);
  Rpush(n_0);
  goto t_5;
  n_0 :
  goto l_0;
  m_0 :
  AllBuild();
  Rpush(o_0);
  u_5 :
  Cpush(q_0);
  Epushd(2,4);
  MoveTop(2,1);
  goto n_3;
  n_3 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto o_3;
  o_3 :
  TestFunFC(w_0,&&v_0,Egetd(2,2));
  Rpush(t_0);
  goto l_3;
  v_0 :
  TestFunFC(a_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(t_0);
  goto m_3;
  t_0 :
  goto s_0;
  m_3 :
  NotNULLd(2,3);
  NotNULLd(2,4);
  Tset(App1("Succ",App2("Plus",Egetd(2,3),Egetd(2,4))));
  Return();
  s_0 :
  goto r_0;
  l_3 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Return();
  r_0 :
  Cpush(c_1);
  Rpush(d_1);
  v_5 :
  AllInit();
  e_1 :
  AllNextSon(&&h_1);
  Rpush(i_1);
  goto v_5;
  i_1 :
  goto e_1;
  h_1 :
  AllBuild();
  Rpush(j_1);
  goto u_5;
  j_1 :
  Return();
  d_1 :
  goto b_1;
  c_1 :
  Rpush(l_1);
  w_5 :
  AllInit();
  m_1 :
  AllNextSon(&&o_1);
  Rpush(p_1);
  goto w_5;
  p_1 :
  goto m_1;
  o_1 :
  AllBuild();
  Rpush(q_1);
  goto u_5;
  q_1 :
  Return();
  l_1 :
  goto k_1;
  b_1 :
  Cpop();
  k_1 :
  Epopd(2,4);
  goto p_0;
  q_0 :
  goto r_1;
  p_0 :
  Cpop();
  r_1 :
  Return();
  o_0 :
  Return();
  k_0 :
  goto i_0;
  j_0 :
  Rpush(v_1);
  x_5 :
  AllInit();
  w_1 :
  AllNextSon(&&x_1);
  Rpush(y_1);
  goto x_5;
  y_1 :
  goto w_1;
  x_1 :
  AllBuild();
  Rpush(z_1);
  y_5 :
  Cpush(d_2);
  Epushd(2,4);
  MoveTop(2,1);
  goto r_3;
  r_3 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto s_3;
  s_3 :
  TestFunFC(w_0,&&t_2,Egetd(2,2));
  Rpush(g_2);
  goto p_3;
  t_2 :
  TestFunFC(a_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(g_2);
  goto q_3;
  g_2 :
  goto f_2;
  q_3 :
  NotNULLd(2,3);
  NotNULLd(2,4);
  Tset(App1("Succ",App2("Plus",Egetd(2,3),Egetd(2,4))));
  Return();
  f_2 :
  goto e_2;
  p_3 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Return();
  e_2 :
  Cpush(v_2);
  Rpush(w_2);
  z_5 :
  AllInit();
  y_2 :
  AllNextSon(&&z_2);
  Rpush(a_3);
  goto z_5;
  a_3 :
  goto y_2;
  z_2 :
  AllBuild();
  Rpush(b_3);
  goto y_5;
  b_3 :
  Return();
  w_2 :
  goto u_2;
  v_2 :
  Rpush(d_3);
  a_6 :
  AllInit();
  e_3 :
  AllNextSon(&&f_3);
  Rpush(h_3);
  goto a_6;
  h_3 :
  goto e_3;
  f_3 :
  AllBuild();
  Rpush(i_3);
  goto y_5;
  i_3 :
  Return();
  d_3 :
  goto c_3;
  u_2 :
  Cpop();
  c_3 :
  Epopd(2,4);
  goto c_2;
  d_2 :
  goto k_3;
  c_2 :
  Cpop();
  k_3 :
  Return();
  z_1 :
  Return();
  v_1 :
  goto s_1;
  i_0 :
  Cpop();
  s_1 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto g_0;
  h_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_i_2);
  Ccall(_stratego_h_2);
  goto t_3;
  g_0 :
  Cpop();
  t_3 :
  Tset(App1("Succ",App1("Succ",App1("Succ",App1("Succ",App0("Zero"))))));
  Tdupl();
  Tset(App1("Succ",App1("Succ",App1("Succ",App1("Succ",App0("Zero"))))));
  MoveTop(0,2);
  Tpop();
  Cpush(v_3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto u_3;
  v_3 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_h_2);
  goto w_3;
  u_3 :
  Cpop();
  w_3 :
  Tpop();
  Ccall(_stratego_l_2);
  goto e_0;
  f_0 :
  Ccall(_stratego_j_2);
  goto x_3;
  e_0 :
  Cpop();
  x_3 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_n_2)
  _ST_exit();
ENDPROC

PROC(_stratego_o_2)
  Cpush(z_3);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto c_6;
  c_6 :
  TestInt(0,1,0,&&fail);
  Rpush(b_4);
  goto b_6;
  b_4 :
  goto a_4;
  b_6 :
  Return();
  a_4 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_p_2);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_n_2);
  goto y_3;
  z_3 :
  Tset(MakeInt(1));
  Ccall(_stratego_n_2);
  goto c_4;
  y_3 :
  Cpop();
  c_4 :
ENDPROC

PROC(_stratego_p_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_6;
  f_6 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(e_4);
  goto e_6;
  e_4 :
  goto d_4;
  e_6 :
  Return();
  d_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_2)
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_p_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_r_2)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_s_2)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("innermost-pure"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_2);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_r_2);
  Ccall(_stratego_m_2);
  Ccall(_stratego_q_2);
  Ccall(_stratego_o_2);
ENDPROC

DOIT

