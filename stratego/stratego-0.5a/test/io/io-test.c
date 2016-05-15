#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

PROCDECL(_stratego_main);
PROCDECL(_stratego_f_1);
PROCDECL(_stratego_g_1);
PROCDECL(_stratego_h_1);
PROCDECL(_stratego_i_1);
PROCDECL(_stratego_j_1);
PROCDECL(_stratego_k_1);
PROCDECL(_stratego_l_1);

PROC(_stratego_init_afuns)
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_f_1);
  Ccall(_stratego_l_1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_g_1);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_h_1);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_f_1)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_g_1)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_h_1)
  Tdupl();
  Ccall(_stratego_i_1);
  Tset(MakeInt(1));
  Ccall(_stratego_k_1);
  Tpop();
ENDPROC

PROC(_stratego_i_1)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_j_1);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_j_1)
  _ST_printnl();
ENDPROC

PROC(_stratego_k_1)
  _ST_exit();
ENDPROC

PROC(_stratego_l_1)
  Epushd(0,1);
  Tset(ATmakeString("a"));
  Ccall(_stratego_f_1);
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("aaa :"),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_j_1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("b"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_g_1);
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("bbb :"),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_j_1);
  Epopd(1,1);
  Tpop();
  Tset(ATmakeString("b"));
  Ccall(_stratego_f_1);
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("ccc :"),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_j_1);
  Epopd(1,1);
  Tpop();
  Epopd(0,1);
ENDPROC

DOIT

