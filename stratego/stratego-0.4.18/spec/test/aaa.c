#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(c_0);
  goto main;
  main :
  Rpush(b_0);
  goto a_0;
  b_0 :
  Return();
  a_0 :
  Return();
  c_0 :
DOIT_END
