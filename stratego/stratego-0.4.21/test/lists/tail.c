#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,e_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_m_0);
PROCDECL(_stratego_n_0);
PROCDECL(_stratego_o_0);
PROCDECL(_stratego_p_0);
PROCDECL(_stratego_q_0);
PROCDECL(_stratego_r_0);

PROC(_stratego_init_afuns)
  MOVE(e_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,5);
  Tset(App0("stdin"));
  Ccall(_stratego_m_0);
  MoveTop(0,1);
  goto a_1;
  a_1 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_1;
  b_1 :
  TestFunFC(e_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(d_0);
  goto c_2;
  d_0 :
  goto c_0;
  c_2 :
  Epushd(1,5);
  MoveTop(1,1);
  goto y_0;
  y_0 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_0;
  z_0 :
  TestFunFC(e_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  Rpush(g_0);
  goto d_2;
  g_0 :
  goto f_0;
  d_2 :
  Epushd(2,7);
  NotNULLd(1,4);
  NotNULLd(1,2);
  NotNULLd(1,5);
  Tset(App2("Cons",Egetd(1,2),App2("Cons",Egetd(1,4),App2("Cons",Egetd(1,2),Egetd(1,5)))));
  MoveTop(2,1);
  goto v_0;
  v_0 :
  TestFunFC(e_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto w_0;
  w_0 :
  TestFunFC(e_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_0;
  x_0 :
  TestFunFC(e_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  Rpush(i_0);
  goto e_2;
  i_0 :
  goto h_0;
  e_2 :
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_n_0);
  Epopd(3,1);
  Return();
  h_0 :
  Epopd(2,7);
  Return();
  f_0 :
  Epopd(1,5);
  Return();
  c_0 :
  Epopd(0,5);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_o_0);
  goto j_0;
  a_0 :
  Cpop();
  j_0 :
ENDPROC

PROC(_stratego_m_0)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_n_0)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_o_0)
  Tdupl();
  Ccall(_stratego_p_0);
  Tset(MakeInt(1));
  Ccall(_stratego_r_0);
  Tpop();
ENDPROC

PROC(_stratego_p_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_q_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_q_0)
  _ST_printnl();
ENDPROC

PROC(_stratego_r_0)
  _ST_exit();
ENDPROC

DOIT

