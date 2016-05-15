
structure Fun = struct

(* Standard functional stuff *)

fun id x = x;
fun pair(f, g)(x, y) = (f(x), g(y));
fun const x y = x;
fun binpair(f, g)((a, b), (c, d)) = (f(a, c), g(b, d));
fun curry(f)(x)(y) = f(x, y);
fun uncurry(f)(x, y) = f(x)(y);
fun apply f x = f x;

fun fix f x = f (fix f) x;

infix comp;
fun (f comp g)(x) = f(g(x));

infix o;
fun (f o g)(x) = f(g(x));

(* Option *)

(* datatype 'a option = NONE | SOME of 'a; *)

(* use standard datatype 'a option = NONE | SOME of 'a *)

(* Boolean operators generalized to lists. Apparently we have to
redefine andalso and orelse, because they cannot be used as
operators. *)

fun OR true  y = true
  | OR false y = y;

fun AND true  y = y
  | AND false y = false;


(* Products *)

fun first (x, y) = x;
fun second (x, y) = y;

end