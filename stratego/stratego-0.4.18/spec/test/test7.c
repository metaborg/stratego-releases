#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT

PROCDECL(_stratego_main);
PROCDECL(_stratego_m_0);
PROCDECL(_stratego_n_0);
PROCDECL(_stratego_o_0);
PROCDECL(_stratego_p_0);
PROCDECL(_stratego_q_0);
PROCDECL(_stratego_r_0);

PROC(_stratego_main)
  Ccall(_stratego_m_0);
  Ccall(_stratego_q_0);
  Ccall(_stratego_n_0);
  Ccall(_stratego_q_0);
  Ccall(_stratego_o_0);
  Ccall(_stratego_p_0);
  Ccall(_stratego_q_0);
ENDPROC

PROC(_stratego_m_0)
  Tset(App2("F",App0("B"),App2("G",App0("C"),App0("B"))));
ENDPROC

PROC(_stratego_n_0)
  Epushd(0,5);
  MoveTop(0,1);
  goto u_0;
  u_0 :
  TestFun(0,1,"F",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto v_0;
  v_0 :
  TestFun(0,3,"G",2,&&fail);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto w_0;
  w_0 :
  TestFun(0,5,"B",0,&&d_0);
  goto x_0;
  x_0 :
  TestFun(0,4,"A",0,&&e_0);
  Cpush(g_0);
  Rpush(h_0);
  goto o_2;
  h_0 :
  goto f_0;
  g_0 :
  Rpush(j_0);
  goto p_2;
  j_0 :
  goto i_0;
  f_0 :
  Cpop();
  i_0 :
  goto c_0;
  e_0 :
  Rpush(c_0);
  goto p_2;
  d_0 :
  goto y_0;
  y_0 :
  TestFun(0,4,"A",0,&&fail);
  Rpush(c_0);
  goto o_2;
  c_0 :
  goto b_0;
  p_2 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App3("H",Egetd(0,2),Egetd(0,4),App0("B")));
  Return();
  b_0 :
  goto a_0;
  o_2 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App3("H",Egetd(0,2),Egetd(0,3),Egetd(0,5)));
  Return();
  a_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_0)
  Epushd(0,1);
  MoveTop(0,1);
  Tset(App3("H",App0("B"),App0("C"),App0("B")));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App3("H",App0("B"),App0("C"),App0("B")),App0("TNil"))));
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_0)
  Epushd(0,5);
  MoveTop(0,1);
  goto d_1;
  d_1 :
  TestFun(0,1,"TCons",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto e_1;
  e_1 :
  TestFun(0,3,"TCons",2,&&fail);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto f_1;
  f_1 :
  TestFun(0,5,"TNil",0,&&fail);
  Rpush(l_0);
  goto t_2;
  l_0 :
  goto k_0;
  t_2 :
  Move(0,2,0,4);
  Return();
  k_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_0)
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
  Ccall(_stratego_r_0);
  Epopd(0,2);
  Tpop();
ENDPROC

PROC(_stratego_r_0)
  _ST_printnl();
ENDPROC
