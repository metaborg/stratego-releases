structure Interface : INTERFACE = Interface();

structure TrsLrVals : Trs_LRVALS =
   TrsLrValsFun(structure Token = LrParser.Token
             structure Interface = Interface);

structure TrsLex : LEXER =
   TrsLexFun(structure Tokens = TrsLrVals.Tokens
             structure Interface = Interface);

structure TrsParser : PARSER =
   Join(structure ParserData = TrsLrVals.ParserData
        structure Lex = TrsLex
	structure LrParser = LrParser);

structure Parse =
   Parse (structure Interface = Interface
	  structure Parser = TrsParser
	  structure Tokens = TrsLrVals.Tokens );
