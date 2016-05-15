#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

PROCDECL(_stratego_main);
PROCDECL(_stratego_e_0);
PROCDECL(_stratego_f_0);

PROC(_stratego_init_afuns)
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_e_0);
ENDPROC

PROC(_stratego_e_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_f_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_f_0)
  _ST_printnl();
ENDPROC

DOIT

