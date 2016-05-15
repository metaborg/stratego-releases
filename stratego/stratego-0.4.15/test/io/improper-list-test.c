#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(b_0);
  goto main;
  main :
  Epushd(0,0);
  BuildFun("stdout",0);
  Tpush();
  BuildStr("a");
  Tpush();
  BuildStr("b");
  Tpush();
  BuildStr("c");
  Tpush();
  BuildStr("d");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Bla",1);
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
  goto l_20;
  a_0 :
  Epopd(0,0);
  Return();
  l_20 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  b_0 :
DOIT_END
