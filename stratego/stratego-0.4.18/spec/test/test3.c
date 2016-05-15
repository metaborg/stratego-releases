#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT

VARDECL(AFun,z_0);
VARDECL(AFun,m_0);
VARDECL(AFun,h_0);
VARDECL(AFun,g_0);

PROC(_stratego_init_afuns)
  MOVE(z_0,ATmakeAFun("B",0,0));
  MOVE(m_0,ATmakeAFun("A",0,0));
  MOVE(h_0,ATmakeAFun("G",2,0));
  MOVE(g_0,ATmakeAFun("F",2,0));
ENDPROC

PROCDECL(_stratego_main);
PROCDECL(_stratego_i_0);
PROCDECL(_stratego_j_0);
PROCDECL(_stratego_k_0);

PROC(_stratego_main)
  Tset(App2("F",App0("B"),App2("G",App0("A"),App0("C"))));
  Ccall(_stratego_i_0);
  Tset(App2("F",App0("B"),App2("G",App0("C"),App0("A"))));
  Ccall(_stratego_i_0);
  Tset(App2("F",App0("D"),App2("G",App0("D"),App0("A"))));
  Ccall(_stratego_i_0);
  Tset(App2("G",MakeInt(1),ATmakeString("a")));
  Ccall(_stratego_i_0);
ENDPROC

PROC(_stratego_i_0)
  Epushd(0,5);
  Ccall(_stratego_j_0);
  MoveTop(0,3);
  goto p_0;
  p_0 :
  TestFunFC(g_0,&&f_0,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_0;
  q_0 :
  TestFunFC(h_0,&&fail,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto r_0;
  r_0 :
  TestFunFC(m_0,&&l_0,Egetd(0,2));
  goto s_0;
  s_0 :
  TestFunFC(m_0,&&n_0,Egetd(0,1));
  goto t_0;
  t_0 :
  TestFunFC(z_0,&&o_0,Egetd(0,4));
  Cpush(b_1);
  Rpush(c_1);
  goto u_1;
  c_1 :
  goto a_1;
  b_1 :
  Ccontinue(i_1);
  Rpush(j_1);
  goto v_1;
  j_1 :
  goto a_1;
  i_1 :
  Rpush(l_1);
  goto w_1;
  l_1 :
  goto k_1;
  a_1 :
  Cpop();
  k_1 :
  goto e_0;
  o_0 :
  Cpush(o_1);
  Rpush(p_1);
  goto u_1;
  p_1 :
  goto n_1;
  o_1 :
  Rpush(s_1);
  goto w_1;
  s_1 :
  goto q_1;
  n_1 :
  Cpop();
  q_1 :
  goto e_0;
  n_0 :
  goto u_0;
  u_0 :
  TestFunFC(z_0,&&t_1,Egetd(0,4));
  Cpush(z_1);
  Rpush(a_2);
  goto v_1;
  a_2 :
  goto y_1;
  z_1 :
  Rpush(c_2);
  goto w_1;
  c_2 :
  goto b_2;
  y_1 :
  Cpop();
  b_2 :
  goto e_0;
  t_1 :
  Rpush(e_0);
  goto w_1;
  l_0 :
  goto v_0;
  v_0 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  goto w_0;
  w_0 :
  d_2 :
  Rpush(e_0);
  goto u_1;
  f_0 :
  TestFunFC(h_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_0;
  x_0 :
  TestInt(0,4,1,&&fail);
  goto y_0;
  y_0 :
  TestStr(0,5,"a",&&fail);
  Rpush(e_0);
  goto x_1;
  e_0 :
  goto d_0;
  x_1 :
  Tset(App2("H",MakeInt(2),ATmakeString("b")));
  Return();
  d_0 :
  goto c_0;
  w_1 :
  Move(0,4,0,1);
  NotNULLd(0,4);
  Tset(App2("G",App1("F",Egetd(0,4)),App0("A")));
  Return();
  c_0 :
  goto b_0;
  v_1 :
  NotNULLd(0,1);
  Tset(App1("F",Egetd(0,1)));
  Return();
  b_0 :
  goto a_0;
  u_1 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("H",Egetd(0,2),Egetd(0,4)));
  Return();
  a_0 :
  Ccall(_stratego_j_0);
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_0)
  Tdupl();
  Epushd(0,2);
  MoveTop(0,1);
  Tset(App0("stderr"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("Cons",Egetd(0,1),App0("Nil")));
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("Cons",Egetd(0,1),App0("Nil")));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_k_0);
  Epopd(0,2);
  Tpop();
ENDPROC

PROC(_stratego_k_0)
  _ST_printnl();
ENDPROC
