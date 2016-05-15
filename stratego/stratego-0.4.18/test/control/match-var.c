#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(f_0);
  goto main;
  main :
  Rpush(a_0);
  goto d_0;
  a_0 :
  Rpush(b_0);
  goto e_0;
  b_0 :
  Return();
  d_0 :
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,1),App0("TNil"))));
  Epopd(0,1);
  Return();
  e_0 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(c_0);
  goto d_0;
  c_0 :
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Epopd(0,2);
  Return();
  f_0 :
DOIT_END
