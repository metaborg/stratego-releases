#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

PROCDECL(_stratego_main);
PROCDECL(_stratego_g_0);
PROCDECL(_stratego_h_0);
PROCDECL(_stratego_i_0);
PROCDECL(_stratego_j_0);
PROCDECL(_stratego_k_0);
PROCDECL(_stratego_l_0);
PROCDECL(_stratego_m_0);

PROC(_stratego_init_afuns)
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_g_0);
ENDPROC

PROC(_stratego_g_0)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_h_0);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_i_0);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_j_0);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_h_0)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_i_0)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_j_0)
  Tdupl();
  Ccall(_stratego_k_0);
  Tset(MakeInt(1));
  Ccall(_stratego_m_0);
  Tpop();
ENDPROC

PROC(_stratego_k_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_l_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_l_0)
  _ST_printnl();
ENDPROC

PROC(_stratego_m_0)
  _ST_exit();
ENDPROC
