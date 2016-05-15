(*

Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*)

module pp-instructions
imports lib instructions

strategies

  main = iowrapNoOutput(
    where((option-defined(?Output(outfile)) <+ !stdout => outfile, id)); 
    where(<open-file> outfile);
    where(print-prologue(!outfile));
    (id, pp-instructions(!outfile));
    where(print-epilogue(!outfile))
  , fail
  )

  pp-instructions(out) = 
  rec pp(
	Block(list(pp))
	<+ pp-instruction(out)
  )

  pp-instruction(out) = 
  where((PPI <+ PPI-default); map(print-strings-nl(out)))
  
  print-prologue(out) =
    <map(print-strings-nl(out))>
	[["#include <stratego.h>"],
	 ["#include <stratego-lib.h>"],
	 ["#include <stratego-ext.h>"],
	 []]

  print-epilogue(out) =
    <map(print-strings-nl(out))>
	[[],
	 ["DOIT"],
	 []]


rules

  PPI-default : t -> [["  " | <conc> (<term-to-string> t, [";"])]]

  PPI : Goto(x) -> [["  ", "goto ", x, ";"]]

  PPI : Ccontinue(x) -> [["  ", "Ccontinue(", x, ");"]]

  PPI : Label(x) -> [["  ", x, " :"]]

  PPI : PROC(x) -> [[],["PROC(_stratego_", x, ")"]]

  PPI : PROCDECL(x) -> [["PROCDECL(_stratego_", x, ");"]]

  PPI : ENDPROC -> [["ENDPROC"]]

  PPI : Ccall(x, []) -> [["  ", "Ccall(", x, ");"]]

  PPI : Rpush(x) -> [["  ", "Rpush(", x, ");"]]

  PPI : AllNextSon(x) -> [["  ", "AllNextSon(&&", x, ");"]]

  PPI : ThreadNextSon(x) -> [["  ", "ThreadNextSon(&&", x, ");"]]

  PPI : OneNextSon(x) -> [["  ", "OneNextSon(&&", x, ");"]]

  PPI : SomeNextSon(x) -> [["  ", "SomeNextSon(&&", x, ");"]]

  PPI : Cpush(x) -> [["  ", "Cpush(", x, ");"]]

  PPI : Iprim(x) -> [["  ", x, "();"]]

  PPI : TestFunFC(VAR(x),y,Egetd(i,o)) ->
	[["  ", "TestFunFC(", x, ",&&", y, ",Egetd(", i, ",", o, "));"]]

  PPI : TestFunTop(VAR(x)) -> [["  ", "TestFunTop(", x, ");"]]

  PPI : MOVE(x,t) -> [["  ", "MOVE(", x, ",", t, ");"]]

  PPI : VARDECL(_,x) -> [["VARDECL(AFun,", x, ");"]]

  PPI : TestInt(j,k,d,s) ->
	[["  ", "TestInt(", j, ",", k, ",", d, ",&&", s, ");"]]

  PPI : TestReal(j,k,d,s) ->
	[["  ", "TestReal(", j, ",", k, ",", d, ",&&", s, ");"]]

  PPI : TestStr(j,k,s1,s2) ->
	[["  ", "TestStr(", j, ",", k, ",\"", s1, "\",&&", s2, ");"]]

strategies

  term-to-string =
    rec x(
	IntToString <+ 
	StrToString <+ 
	RealToString <+ 
	TermToString(x) <+
	ApplToString(x)
    )

rules

  TermToString(s) :
    ATmakeReal(t) -> ["(ATerm)ATmakeReal(" | <conc>(<s> t, [")"])]

  TermToString(s) :
    ATmakeInt(t) -> ["(ATerm)ATmakeInt(" | <conc>(<s> t, [")"])]

  ApplToString(s) :
    f # (xs) -> 
    [f, "(" | <conc> (<map(s); separate-by(![","]); concat> xs, [")"])]

  RealToString:
    x -> [x]
    where <is-real> x

  IntToString:
    x -> [x]
    where <is-int> x

  StrToString :
    x -> ["\"", x, "\""]
    where <is-string> x
