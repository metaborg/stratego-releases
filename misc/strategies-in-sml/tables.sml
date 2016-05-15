structure Table = struct

local
  open Fun
  open MyList
in

datatype 'a table = Table of (string * 'a) list;

val table_empty = [];

fun table_add table key value 
  = case table of 
      [] => [(key, value)]
    | ((x, y) :: xs) 
	=> if x = key then (key, value) :: xs
	   else (x, y) :: (table_add xs key value);

fun table_lookup table key 
  = case table of 
      [] => NONE
    | ((x, y) :: xs) => if x = key then SOME(y)
	                else table_lookup xs key;

fun lookup table key default
  = case table_lookup table key of
      NONE => default
    | SOME(value) => value;

fun table_defined table key
  = case table_lookup table key of 
      NONE => false 
    | SOME(y) => true;

fun remove xs [] = []
  | remove xs ((key, value) :: table)
	 = let val table' = remove xs table
           in if member key xs then table' 
	      else ((key, value) :: table') end

end (* local *)
end (* Table *)