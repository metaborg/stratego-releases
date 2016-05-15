#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(b_0);
  goto main;
  main :
  BuildStr("term");
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  BuildFun("stderr",0);
  Tpush();
  BuildStr("message: ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(a_0);
  goto h_0;
  a_0 :
  Epopd(0,1);
  Tpop();
  Return();
  h_0 :
  _ST_printnl();
  Return();
  b_0 :
DOIT_END
