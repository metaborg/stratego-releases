(* utilities *)

fun pdepth  n = Compiler.Control.Print.printDepth := n;
fun plength n = Compiler.Control.Print.printLength := n;
val cd = OS.FileSys.chDir;
val pwd = OS.FileSys.getDir;
pdepth(50);

val homedir = pwd();

open CM;

make();

open R;
