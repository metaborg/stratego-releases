#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,q_0);
VARDECL(AFun,o_0);
VARDECL(AFun,m_0);
VARDECL(AFun,f_0);
VARDECL(AFun,c_0);
VARDECL(AFun,b_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_g_0);
PROCDECL(_stratego_h_0);
PROCDECL(_stratego_i_0);
PROCDECL(_stratego_j_0);
PROCDECL(_stratego_k_0);
PROCDECL(_stratego_l_0);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(q_0,ATmakeAFun("Nil",0,0));
  MOVE(o_0,ATmakeAFun("Cons",2,0));
  MOVE(m_0,ATmakeAFun("stdout",0,0));
  MOVE(f_0,ATmakeAFun("stdin",0,0));
  MOVE(c_0,ATmakeAFun("TNil",0,0));
  MOVE(b_0,ATmakeAFun("stderr",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_g_0)
  _ST_exit();
ENDPROC

PROC(_stratego_h_0)
  _ST_printnl();
ENDPROC

PROC(_stratego_i_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_h_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_j_0)
  Tdupl();
  Ccall(_stratego_i_0);
  Tset(MakeInt(1));
  Ccall(_stratego_g_0);
  Tpop();
ENDPROC

PROC(_stratego_k_0)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_l_0)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(e_0);
  Epushd(0,1);
  Tset((ATerm)ATmakeAppl0(f_0));
  Ccall(_stratego_l_0);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(m_0),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_k_0);
  Epopd(0,1);
  goto d_0;
  e_0 :
  Tset((ATerm)ATmakeAppl2(o_0,ATmakeString("** rewriting failed"),(ATerm)ATmakeAppl0(q_0)));
  Ccall(_stratego_j_0);
  goto n_0;
  d_0 :
  Cpop();
  n_0 :
ENDPROC

DOIT

