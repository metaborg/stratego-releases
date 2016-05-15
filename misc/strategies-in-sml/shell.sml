(* Interfacing the parser and the rewrite engine. *)

structure RShell = struct

open Rewrite

fun rewrite_files trs_file trm_file 
  = let val TRS(decls) = Parse.file_parse(trs_file)
        val TERM(s, trm) = Parse.file_parse_query(trm_file)
    in rewrite decls s trm end;

(* The following commands will provide an interactive shell withing
SML to load specifications and terms.

val thespec  = ref([]);
val thetrm   = ref(tint(0));
val thestrat = 

fun loadspec file
  = let val TRS(decls) = Parse.file_parse(file)
        val TERM(s, trm) = Parse.file_parse_query(trm_file)
    in 

fun loadstrat name

fun loadtrm file

fun rew

*)

(*
val _
  = let 
	val TERM(s, pat) = Parse.file_parse_query("xmpl2.trm")
	val TERM(s, trm) = Parse.file_parse_query("xmpl.trm")
    in
	match_term [] pat trm
    end;

val _ = Parse.file_parse("xmpl.trs");
val _ = Parse.file_parse_query("xmpl.trm");

rewrite("xmpl.trs")("xmpl.trm");
rewrite("xmpl.trs")("xmpl3.trm");


	val TRS(decls) = Parse.file_parse("xmpl.trs")
	val defs = trs_to_strats decls
        val TERM(s, trm) = Parse.file_parse_query("xmpl.trm")
	val s' = expand_strat [] defs s
*)

end