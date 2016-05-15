structure Reduct = struct

local
  open MyList
in

datatype 'a Reduct = Success of 'a | Fail of 'a;

fun red_bool (Success(x)) = true
  | red_bool (Fail(x))    = false;

fun sfand rs = all    red_bool rs;
fun sfor  rs = exists red_bool rs;

fun red_body (Success(x)) = x
  | red_body (Fail(x))    = x;

end (* local *)
end (* Reduct *)