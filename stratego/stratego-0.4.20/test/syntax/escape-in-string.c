#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
ENDPROC

PROC(_stratego_main)
  Cpush(e_0);
  Epushd(0,1);
  MoveTop(0,1);
  goto b_0;
  b_0 :
  TestStr(0,1,"\\",&&fail);
  Rpush(g_0);
  goto d_0;
  g_0 :
  goto f_0;
  d_0 :
  Tset(ATmakeString("\\\""));
  Return();
  f_0 :
  Epopd(0,1);
  goto a_0;
  e_0 :
  Ccontinue(h_0);
  Tset(ATmakeString("\\"));
  goto a_0;
  h_0 :
  Tset(App2("Cons",App0("TNil"),App0("TNil")));
  goto i_0;
  a_0 :
  Cpop();
  i_0 :
ENDPROC
