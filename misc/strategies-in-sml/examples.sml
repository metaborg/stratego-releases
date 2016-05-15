val var1 = Var("1");
val var2 = Var("2");
val var3 = Var("3");
val var4 = Var("4");
val var5 = Var("5");
val var6 = Var("6");

val a = mk_apply "a";
val b = mk_apply "b";
val c = mk_apply "c";

val t1 = a[var1];
val t2 = a[b[c[]]];

val s1 = Subst [("1", t1)];

