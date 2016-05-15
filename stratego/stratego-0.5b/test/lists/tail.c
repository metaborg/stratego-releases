#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,w_0);
VARDECL(AFun,u_0);
VARDECL(AFun,i_0);
VARDECL(AFun,f_0);
VARDECL(AFun,c_0);
VARDECL(AFun,b_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_j_0);
PROCDECL(_stratego_k_0);
PROCDECL(_stratego_l_0);
PROCDECL(_stratego_m_0);
PROCDECL(_stratego_n_0);
PROCDECL(_stratego_o_0);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(u_0,ATmakeAFun("stdout",0,0));
  MOVE(i_0,ATmakeAFun("Cons",2,0));
  MOVE(f_0,ATmakeAFun("stdin",0,0));
  MOVE(c_0,ATmakeAFun("TNil",0,0));
  MOVE(b_0,ATmakeAFun("stderr",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_j_0)
  _ST_exit();
ENDPROC

PROC(_stratego_k_0)
  _ST_printnl();
ENDPROC

PROC(_stratego_l_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_k_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_m_0)
  Tdupl();
  Ccall(_stratego_l_0);
  Tset(MakeInt(1));
  Ccall(_stratego_j_0);
  Tpop();
ENDPROC

PROC(_stratego_n_0)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_o_0)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(e_0);
  Epushd(0,5);
  Tset((ATerm)ATmakeAppl0(f_0));
  Ccall(_stratego_o_0);
  MoveTop(0,1);
  goto j_1;
  j_1 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto k_1;
  k_1 :
  TestFunFC(i_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(h_0);
  goto y_0;
  h_0 :
  goto g_0;
  y_0 :
  Epushd(1,5);
  MoveTop(1,1);
  goto h_1;
  h_1 :
  TestFunFC(i_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_1;
  i_1 :
  TestFunFC(i_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  Rpush(q_0);
  goto z_0;
  q_0 :
  goto p_0;
  z_0 :
  Epushd(2,7);
  NotNULLd(1,4);
  NotNULLd(1,2);
  NotNULLd(1,5);
  Tset((ATerm)ATmakeAppl2(i_0,Egetd(1,2),(ATerm)ATmakeAppl2(i_0,Egetd(1,4),(ATerm)ATmakeAppl2(i_0,Egetd(1,2),Egetd(1,5)))));
  MoveTop(2,1);
  goto e_1;
  e_1 :
  TestFunFC(i_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto f_1;
  f_1 :
  TestFunFC(i_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto g_1;
  g_1 :
  TestFunFC(i_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  Rpush(t_0);
  goto a_1;
  t_0 :
  goto r_0;
  a_1 :
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_n_0);
  Epopd(3,1);
  Return();
  r_0 :
  Epopd(2,7);
  Return();
  p_0 :
  Epopd(1,5);
  Return();
  g_0 :
  Epopd(0,5);
  goto d_0;
  e_0 :
  Tset((ATerm)ATmakeAppl2(i_0,ATmakeString("** rewriting failed"),(ATerm)ATmakeAppl0(w_0)));
  Ccall(_stratego_m_0);
  goto v_0;
  d_0 :
  Cpop();
  v_0 :
ENDPROC

DOIT

