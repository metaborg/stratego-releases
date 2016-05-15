#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
ENDPROC

PROC(_stratego_main)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestInt(0,1,1,&&fail);
  Rpush(g_0);
  goto a_0;
  g_0 :
  goto f_0;
  b_0 :
  Tset((ATerm)ATmakeReal(0.10));
  Return();
  f_0 :
  goto e_0;
  a_0 :
  Tset(MakeInt(2));
  Return();
  e_0 :
  Epopd(0,1);
ENDPROC

DOIT

