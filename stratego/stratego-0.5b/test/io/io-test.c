#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,i_0);
VARDECL(AFun,h_0);
VARDECL(AFun,e_0);
VARDECL(AFun,d_0);
VARDECL(AFun,c_0);
VARDECL(AFun,b_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_f_1);
PROCDECL(_stratego_g_1);
PROCDECL(_stratego_h_1);
PROCDECL(_stratego_i_1);
PROCDECL(_stratego_j_1);
PROCDECL(_stratego_k_1);
PROCDECL(_stratego_l_1);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(i_0,ATmakeAFun("stdout",0,0));
  MOVE(h_0,ATmakeAFun("stdin",0,0));
  MOVE(e_0,ATmakeAFun("TNil",0,0));
  MOVE(d_0,ATmakeAFun("Nil",0,0));
  MOVE(c_0,ATmakeAFun("Cons",2,0));
  MOVE(b_0,ATmakeAFun("stderr",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_f_1)
  Epushd(0,1);
  Tset(ATmakeString("a"));
  Ccall(_stratego_l_1);
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(c_0,ATmakeString("aaa :"),(ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl0(d_0))),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_h_1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,ATmakeString("b"),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_k_1);
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(c_0,ATmakeString("bbb :"),(ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl0(d_0))),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_h_1);
  Epopd(1,1);
  Tpop();
  Tset(ATmakeString("b"));
  Ccall(_stratego_l_1);
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(c_0,ATmakeString("ccc :"),(ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl0(d_0))),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_h_1);
  Epopd(1,1);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_1)
  _ST_exit();
ENDPROC

PROC(_stratego_h_1)
  _ST_printnl();
ENDPROC

PROC(_stratego_i_1)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_h_1);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_j_1)
  Tdupl();
  Ccall(_stratego_i_1);
  Tset(MakeInt(1));
  Ccall(_stratego_g_1);
  Tpop();
ENDPROC

PROC(_stratego_k_1)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_l_1)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(g_0);
  Epushd(0,1);
  Tset((ATerm)ATmakeAppl0(h_0));
  Ccall(_stratego_l_1);
  Ccall(_stratego_f_1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(i_0),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_k_1);
  Epopd(0,1);
  goto f_0;
  g_0 :
  Tset((ATerm)ATmakeAppl2(c_0,ATmakeString("** rewriting failed"),(ATerm)ATmakeAppl0(d_0)));
  Ccall(_stratego_j_1);
  goto j_0;
  f_0 :
  Cpop();
  j_0 :
ENDPROC

DOIT

