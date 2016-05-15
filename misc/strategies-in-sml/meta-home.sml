fun pdepth  n = Compiler.Control.Print.printDepth := n;
fun plength n = Compiler.Control.Print.printLength := n;

structure Home = struct
local open CM
in
val cd = OS.FileSys.chDir;
val pwd = OS.FileSys.getDir;
val homedir = "../metasml";
val _ = cd homedir;

val mk = CM.make;
end
end (* structure Home *)

open Home;