structure Copy = struct

local 
  open Fun
  open MyList
  open Term
  open Gensym
  open Table
  open Str
  open Strategies
in

fun newName(x) = genSym(x);

fun names t
  = let fun phi t
          = case t of
	      TStr(x) => [x]
	    | t       => concat (term_args t)
    in term_cata phi id t end

fun init t 
  = let val strs = names t
    in MakeStrMap strs end

fun new ()= genSym("x");

end (* local *)
end