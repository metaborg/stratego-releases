#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,e_0);
VARDECL(AFun,d_0);
VARDECL(AFun,c_0);
VARDECL(AFun,b_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_l_0);
PROCDECL(_stratego_m_0);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(e_0,ATmakeAFun("TNil",0,0));
  MOVE(d_0,ATmakeAFun("Nil",0,0));
  MOVE(c_0,ATmakeAFun("Cons",2,0));
  MOVE(b_0,ATmakeAFun("stderr",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_l_0)
  _ST_printnl();
ENDPROC

PROC(_stratego_m_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl0(d_0)),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_l_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_main)
  Epushd(0,0);
  Ccall(_stratego_m_0);
  Rpush(g_0);
  goto s_33;
  g_0 :
  goto f_0;
  s_33 :
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(c_0,ATmakeString("another message"),(ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl0(d_0))),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_l_0);
  Epopd(1,1);
  Tpop();
  Return();
  f_0 :
  Epopd(0,0);
ENDPROC

DOIT

