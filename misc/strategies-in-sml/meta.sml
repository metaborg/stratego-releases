(*    file home.sml                                           *)
(* \RCS$Id: meta.sml,v 2.0 1998/09/21 22:14:46 visser Exp $ *)
(*                                                            *)
(* ---------------------------------------------------------- *)


fun pdepth  n = Compiler.Control.Print.printDepth := n;
fun plength n = Compiler.Control.Print.printLength := n;

val curdir = OS.FileSys.getDir();

structure Home = struct
local open CM
in
val cd = OS.FileSys.chDir;
val pwd = OS.FileSys.getDir;
val homedir = "/ogi/staff/visser/MetaSML";
val _ = cd homedir;

val mk = CM.make;
end
end (* structure Home *)

open Home;

val _ = mk();

open Top;

val _ = cd curdir;
