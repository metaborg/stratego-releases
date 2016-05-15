(* Externally visible aspects of the lexer and parser 
 *
 * $Id: interface.sml,v 2.0 1998/09/21 22:14:45 visser Exp $
 * 
 *)

signature INTERFACE =
sig

type pos
val line : pos ref
val init_line : unit -> unit
val next_line : unit -> unit
val prev_line : unit -> unit
val error : string * pos * pos -> unit

val file_name : string ref
val imported : (string list) ref

type arg
val nothing : arg

end  (* signature INTERFACE *)

functor Interface () : INTERFACE =
struct
local open Rewrite in

val file_name = ref ""
val imported = ref [""]

type pos = int
val line = ref 0
fun init_line () = (line := 1)
fun next_line () = (line := !line + 1)
fun prev_line () = (line := !line - 1)
fun error (errmsg,line:pos,_) =
  print(!file_name ^ ": Line " ^ (Int.toString line) ^ ": " ^ errmsg ^ "\n")

type arg = string -> term_or_trs

val nothing = (fn x => (TextIO.print("not parsing " ^ x); TRS([])))

end (* local *)
end  (* functor INTERFACE *)
