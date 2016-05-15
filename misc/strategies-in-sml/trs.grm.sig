signature Trs_TOKENS =
sig
type ('a,'b) token
type svalue
val STARSTAR:  'a * 'a -> (svalue,'a) token
val UNDERSCORE:  'a * 'a -> (svalue,'a) token
val ASTERISK:  'a * 'a -> (svalue,'a) token
val SORTS:  'a * 'a -> (svalue,'a) token
val SIGNATURE:  'a * 'a -> (svalue,'a) token
val OPERATIONS:  'a * 'a -> (svalue,'a) token
val STRINGTOK: (string) *  'a * 'a -> (svalue,'a) token
val INT: (int) *  'a * 'a -> (svalue,'a) token
val UCID: (string) *  'a * 'a -> (svalue,'a) token
val LCID: (string) *  'a * 'a -> (svalue,'a) token
val ONE:  'a * 'a -> (svalue,'a) token
val ALL:  'a * 'a -> (svalue,'a) token
val SOMETOK:  'a * 'a -> (svalue,'a) token
val SUCC:  'a * 'a -> (svalue,'a) token
val FAIL:  'a * 'a -> (svalue,'a) token
val MU:  'a * 'a -> (svalue,'a) token
val LTPLUS:  'a * 'a -> (svalue,'a) token
val PLUS:  'a * 'a -> (svalue,'a) token
val NOT:  'a * 'a -> (svalue,'a) token
val STR_GT:  'a * 'a -> (svalue,'a) token
val PRIM: (string) *  'a * 'a -> (svalue,'a) token
val KIDS:  'a * 'a -> (svalue,'a) token
val TEST:  'a * 'a -> (svalue,'a) token
val NEW:  'a * 'a -> (svalue,'a) token
val BUILD:  'a * 'a -> (svalue,'a) token
val MATCH:  'a * 'a -> (svalue,'a) token
val PARSEQUERY:  'a * 'a -> (svalue,'a) token
val PARSEPROG:  'a * 'a -> (svalue,'a) token
val WHERE:  'a * 'a -> (svalue,'a) token
val IMPORTS:  'a * 'a -> (svalue,'a) token
val RULES:  'a * 'a -> (svalue,'a) token
val STRATEGIES:  'a * 'a -> (svalue,'a) token
val BAR:  'a * 'a -> (svalue,'a) token
val ARROW:  'a * 'a -> (svalue,'a) token
val DOUBLEARROW:  'a * 'a -> (svalue,'a) token
val BACKARROW:  'a * 'a -> (svalue,'a) token
val TILDE:  'a * 'a -> (svalue,'a) token
val EQ:  'a * 'a -> (svalue,'a) token
val GG:  'a * 'a -> (svalue,'a) token
val LL:  'a * 'a -> (svalue,'a) token
val GT:  'a * 'a -> (svalue,'a) token
val LT:  'a * 'a -> (svalue,'a) token
val RCURLY:  'a * 'a -> (svalue,'a) token
val LCURLY:  'a * 'a -> (svalue,'a) token
val RBRACK:  'a * 'a -> (svalue,'a) token
val LBRACK:  'a * 'a -> (svalue,'a) token
val RPAREN:  'a * 'a -> (svalue,'a) token
val LPAREN:  'a * 'a -> (svalue,'a) token
val COLON:  'a * 'a -> (svalue,'a) token
val SEMICOLON:  'a * 'a -> (svalue,'a) token
val COMMA:  'a * 'a -> (svalue,'a) token
val DOT:  'a * 'a -> (svalue,'a) token
val EOF:  'a * 'a -> (svalue,'a) token
end
signature Trs_LRVALS=
sig
structure Tokens : Trs_TOKENS
structure ParserData:PARSER_DATA
sharing type ParserData.Token.token = Tokens.token
sharing type ParserData.svalue = Tokens.svalue
end
