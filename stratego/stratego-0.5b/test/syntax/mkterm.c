#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,q_1);
VARDECL(AFun,m_1);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
VARDECL(AFun,d_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_k_0);
PROCDECL(_stratego_l_0);
PROCDECL(_stratego_m_0);
PROCDECL(_stratego_n_0);
PROCDECL(_stratego_o_0);
PROCDECL(_stratego_p_0);
PROCDECL(_stratego_q_0);
PROCDECL(_stratego_r_0);
PROCDECL(_stratego_s_0);
PROCDECL(_stratego_t_0);
PROCDECL(_stratego_u_0);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(q_1,ATmakeAFun("stdout",0,0));
  MOVE(m_1,ATmakeAFun("stdin",0,0));
  MOVE(g_0,ATmakeAFun("Nil",0,0));
  MOVE(f_0,ATmakeAFun("stderr",0,0));
  MOVE(e_0,ATmakeAFun("Cons",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(c_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_k_0)
  Epushd(0,3);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto x_0;
  x_0 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_0;
  y_0 :
  TestFunFC(c_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_0;
  z_0 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(b_0);
  goto w_0;
  b_0 :
  goto a_0;
  w_0 :
  Move(0,2,1,2);
  Move(0,3,1,4);
  Return();
  a_0 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(0,2),Egetd(0,3)));
  Epopd(0,3);
ENDPROC

PROC(_stratego_l_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(e_0,Egetd(0,1),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_q_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_m_0)
  Epushd(0,3);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto x_1;
  x_1 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_1;
  y_1 :
  TestStr(1,2,"b",&&fail);
  goto z_1;
  z_1 :
  TestFunFC(c_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto a_2;
  a_2 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(i_0);
  goto w_1;
  i_0 :
  goto h_0;
  w_1 :
  Move(0,2,1,4);
  Return();
  h_0 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_0,ATmakeString("c"),(ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl0(d_0))));
  _ST_mkterm();
  MoveTop(0,3);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Epopd(0,3);
ENDPROC

PROC(_stratego_n_0)
  Epushd(0,4);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto o_2;
  o_2 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_2;
  p_2 :
  TestFunFC(c_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto q_2;
  q_2 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(v_0);
  goto n_2;
  v_0 :
  goto j_0;
  n_2 :
  Move(0,2,1,2);
  Move(0,3,1,4);
  Return();
  j_0 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(c_0,ATmakeString("b"),(ATerm)ATmakeAppl2(c_0,Egetd(0,3),(ATerm)ATmakeAppl0(d_0))));
  _ST_mkterm();
  MoveTop(0,4);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Epopd(0,4);
ENDPROC

PROC(_stratego_o_0)
  Epushd(0,4);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto f_3;
  f_3 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_3;
  g_3 :
  TestFunFC(c_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto h_3;
  h_3 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(j_1);
  goto e_3;
  j_1 :
  goto d_1;
  e_3 :
  Move(0,2,1,2);
  Move(0,3,1,4);
  Return();
  d_1 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl2(c_0,Egetd(0,3),(ATerm)ATmakeAppl0(d_0))));
  _ST_mkterm();
  MoveTop(0,4);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Epopd(0,4);
ENDPROC

PROC(_stratego_p_0)
  _ST_exit();
ENDPROC

PROC(_stratego_q_0)
  _ST_printnl();
ENDPROC

PROC(_stratego_r_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_q_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_s_0)
  Tdupl();
  Ccall(_stratego_r_0);
  Tset(MakeInt(1));
  Ccall(_stratego_p_0);
  Tpop();
ENDPROC

PROC(_stratego_t_0)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_u_0)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(l_1);
  Epushd(0,7);
  Tset((ATerm)ATmakeAppl0(m_1));
  Ccall(_stratego_u_0);
  Ccall(_stratego_l_0);
  Ccall(_stratego_o_0);
  Ccall(_stratego_l_0);
  Ccall(_stratego_n_0);
  Ccall(_stratego_l_0);
  Ccall(_stratego_m_0);
  Ccall(_stratego_l_0);
  _ST_explode_term();
  MoveTop(0,1);
  goto h_4;
  h_4 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_4;
  i_4 :
  TestFunFC(c_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto j_4;
  j_4 :
  TestFunFC(e_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto k_4;
  k_4 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(p_1);
  goto d_4;
  p_1 :
  goto o_1;
  d_4 :
  Epushd(1,1);
  _ST_mkterm();
  Ccall(_stratego_l_0);
  Ccall(_stratego_k_0);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(q_1),(ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_t_0);
  Epopd(1,1);
  Return();
  o_1 :
  Epopd(0,7);
  goto k_1;
  l_1 :
  Tset((ATerm)ATmakeAppl2(e_0,ATmakeString("** rewriting failed"),(ATerm)ATmakeAppl0(g_0)));
  Ccall(_stratego_s_0);
  goto r_1;
  k_1 :
  Cpop();
  r_1 :
ENDPROC

DOIT

