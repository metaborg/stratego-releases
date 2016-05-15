#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

PROCDECL(_stratego_main);
PROCDECL(_stratego_a_0);

PROC(_stratego_init_afuns)
ENDPROC

PROC(_stratego_main)
  Tset(App2("TCons",App0("stdout"),App2("TCons",App2("Cons",ATmakeString("a"),App2("Cons",ATmakeString("b"),App1("Bla",App2("Cons",ATmakeString("c"),App2("Cons",ATmakeString("d"),App0("Nil")))))),App0("TNil"))));
  Ccall(_stratego_a_0);
ENDPROC

PROC(_stratego_a_0)
  _ST_WriteToTextFile();
ENDPROC
