(* $Id: parse.sml,v 2.0 1998/09/21 22:14:47 visser Exp $

Uses the generated lexer and parser to export parsing functions 

*)

signature PARSE =
sig

type absyn = Rewrite.term_or_trs

(* parse a program from a string *)

    val prog_parse : string -> absyn 

(* parse a query from a string *)

    val query_parse : string -> absyn

(* parse a program in a file *)

    val file_parse : string -> absyn

(* parse a query in a file *)

    val file_parse_query : string -> absyn
 
(* parse a query from the standard input *)

    val top_parse : unit -> absyn

end  (* signature PARSE *)


functor Parse (structure Interface : INTERFACE
	       structure Parser : PARSER
	          sharing type Parser.arg = Interface.arg
	          sharing type Parser.pos = Interface.pos
	       structure Tokens : Trs_TOKENS
	          sharing type Tokens.token = Parser.Token.token
		  sharing type Tokens.svalue = Parser.svalue
               ) =
struct

val parse = fn (dummyToken,lookahead,reader : int -> string, file_parse) =>
    let val _ = Interface.init_line()
	val empty = !Interface.line
	val dummyEOF = Tokens.EOF(empty,empty)
	val dummyTOKEN = dummyToken(empty,empty)
	fun invoke lexer = 
	   let val newLexer = Parser.Stream.cons(dummyTOKEN,lexer)
	   in Parser.parse(lookahead,newLexer,Interface.error,
				(* Interface.nothing *)
				file_parse)
	   end
        fun loop lexer =
	  let val (result,lexer) = invoke lexer
	      val (nextToken,lexer) = Parser.Stream.get lexer
	  in if Parser.sameToken(nextToken,dummyEOF) then result
	     else loop lexer
	  end
     in loop (Parser.makeLexer reader)
     end

fun string_reader s =
 let val next = ref s
 in fn _ => !next before next := ""
 end
    
fun prog_parse p = fn s => parse (Tokens.PARSEPROG,15,string_reader s, p)

fun query_parse p = fn s => parse (Tokens.PARSEQUERY,15,string_reader s, p)

fun file_parse p = fn name =>
  let val dev = TextIO.openIn name
   in Interface.file_name := name;
	(parse (Tokens.PARSEPROG,15,fn i => TextIO.inputN(dev,i), p))
	before TextIO.closeIn dev
   end

val file_parse_query = fn name =>
  let val dev = TextIO.openIn name
   in Interface.file_name := name;
	(parse (Tokens.PARSEQUERY,15,fn i => TextIO.inputN(dev,i), Interface.nothing)) before TextIO.closeIn dev
   end

val top_parse = 
   let val input_line = fn f =>
         let fun loop result =
            let val c = TextIO.inputN (f,1)
                val result = c :: result
            in (* if String.size c = 0 orelse c = "\n" then
                  String.implode (rev result)
                else *)loop result
            end
         in loop nil
       end
   in fn () =>
      parse (Tokens.PARSEQUERY,0,fn i => input_line TextIO.stdIn, Interface.nothing)
   end


end (* functor Parse *)
