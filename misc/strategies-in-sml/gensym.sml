(* File gensym.sm                                                     *)
(*  \RCS$Id: gensym.sml,v 2.0 1998/09/21 22:14:44 visser Exp $ *)
(*                                                                    *)
(* ================================================================== *)

signature GENSYM = sig
val genSym: string -> string
val nextN: unit -> int 
val makemap: unit -> int -> int
val MakeStrMap: string list -> (bool -> string -> string)
end;

structure Gensym : GENSYM = struct

fun iota f (low: int) high =
    if low > high
        then []
    else (f low)::(iota f (low+1) high);

val gensym_counter = ref 0;

fun strip Q x =
let fun digit x = ((#"0" <= x) andalso (x <= #"9"))
    fun dropwhile p [] = []
    |   dropwhile p (all as (x::xs)) = if p x then dropwhile p xs else all
    fun strip ss = 
       case dropwhile digit ss of
         (x :: more) => if x=Q then more else ss
       | _ => ss
in ( rev (strip (rev (explode x))) )
end;

fun nextN () = 
(gensym_counter := (!gensym_counter) + 1; !gensym_counter);

fun genSym x = 
let val y = strip #"_" x
in gensym_counter := (!gensym_counter) + 1;
   concat ((implode y) :: ["_",Int.toString (!gensym_counter)])
end;


fun makegensym () =
let val pairs = ref [("Oo1p#",ref 0)]
    fun find [] s = (pairs := (s,ref 0) :: (!pairs); s ^"_"^(Int.toString 0))
      | find ((x,r)::m) s = 
           if s=x then (r := (!r) + 1; s ^ "_"^(Int.toString (!r))) else  find m s
    fun go s = find (!pairs) (implode (strip #"_" s))
in go end;

fun makegensym2 () =
let val count = ref 0
    fun gensym s = (count := (!count)+1; "d"^(Int.toString (!count)))
in gensym end;


fun makemap () =
let val list = ref []
    val count = ref 0
    fun find [] n = (count := (!count) + 1; list := (n,!count)::(!list); !count)
      | find ((m,x)::xs) n = if n=(m:int) then x else find xs n
    fun get n = find (!list) n
in get end;

fun MakeStrMap free =
let fun suffix 0 = "" | suffix n = (Int.toString n)
    fun string n c = (str (chr c))^(suffix n)
    fun make n = (iota (string n) (ord #"a") (ord #"z"))
    val list = ref ([] : (string * string) list)
    val count = ref 0
    val names = ref (make (!count))
    fun next () =
        if null(!names)
           then (count := (!count+1); names := make (!count); next ())
           else let val try = hd(! names)
                    val _ = names := tl (!names)
                in if List.exists (fn x => x=try) free
                      then next()
                      else try
                end
    fun find [] n = let val name = next()
                    in list := (n,name)::(!list); name end
      | find ((m,x)::xs) n = if n=(m:string) 
				  then x else find xs n
    fun get flag n 
      = if flag then find (!list) n
	else let val name = next()
             in list := (n, name) :: (Table.remove [n] (!list)); name end
in get end;

end (* struct Gensym *);