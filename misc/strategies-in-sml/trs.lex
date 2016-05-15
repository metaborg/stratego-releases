structure Tokens = Tokens
structure Interface = Interface
open Interface
open MyList

type pos = Interface.pos
type svalue = Tokens.svalue
type ('a,'b) token = ('a,'b) Tokens.token
type lexresult= (svalue,pos) token

val eof = fn () => Tokens.EOF(!line,!line)

fun ordof(s,n) = ord(String.sub(s,n));
fun inc r = r := 1 + (! r);
fun dec r = r := (! r) - 1;

%%
%header (functor TrsLexFun(structure Tokens: Trs_TOKENS
			   structure Interface: INTERFACE) : LEXER);

%s A TEXT MODNAME;

lcstart=[a-z!&$/?@|#`]|\-;
ucstart=[A-Z_];
idchars={lcstart}|{ucstart}|[0-9'];
lcid={lcstart}{idchars}*;
ucid={ucstart}{idchars}*;
ws=[\t\ ]*;
num=[0-9]+;
startcom="(*";
endcom="*)";
comchars=[^\n*];
str=[\"][^\n\"]*[\"];
shortcom="--"[^\n]*[\n];
mod="module"{ws}*{lcid}{ws}*[\n];
backslash=[\092];
begincode={backslash}"begin{code}"|{backslash}endliterate;
endcode={backslash}"end{code}"|{backslash}literate;
textchars=[^\n];
%%

<INITIAL>{endcode}  => (YYBEGIN TEXT; lex());


<INITIAL>"imports" => (Tokens.IMPORTS(!line,!line));

<INITIAL>"(*"   => (YYBEGIN A; lex());
<INITIAL>{ws}	=> (lex());
<INITIAL>{mod}	=> (next_line(); lex());
<INITIAL>{str}  => (Tokens.STRINGTOK(substring(yytext,1,size(yytext)-2),!line,!line));
<INITIAL>{shortcom} => (next_line(); lex());
<INITIAL>\n	=> (next_line(); lex());
<INITIAL>":-"	=> (Tokens.BACKARROW(!line,!line));
<INITIAL>"+"	=> (Tokens.PLUS(!line,!line));
<INITIAL>"<+"	=> (Tokens.LTPLUS(!line,!line));
<INITIAL>"."	=> (Tokens.DOT(!line,!line));
<INITIAL>"strategies" => (Tokens.STRATEGIES(!line,!line));
<INITIAL>"rules"      => (Tokens.RULES(!line,!line));
<INITIAL>"rec"	=> (Tokens.MU(!line,!line));
<INITIAL>"fail"	=> (Tokens.FAIL(!line,!line));
<INITIAL>"id"	=> (Tokens.SUCC(!line,!line));
<INITIAL>"new"	=> (Tokens.NEW(!line,!line));
<INITIAL>"plus"	=> (Tokens.PRIM(yytext,!line,!line));
<INITIAL>"min"	=> (Tokens.PRIM(yytext,!line,!line));
<INITIAL>"str_gt"	=> (Tokens.STR_GT(!line,!line));
<INITIAL>"kids"	=> (Tokens.KIDS(!line,!line));
<INITIAL>"some"	=> (Tokens.SOMETOK(!line,!line));
<INITIAL>"one"	=> (Tokens.ONE(!line,!line));
<INITIAL>"all"	=> (Tokens.ALL(!line,!line));
<INITIAL>"not"	=> (Tokens.NOT(!line,!line));
<INITIAL>"match" => (Tokens.MATCH(!line,!line));
<INITIAL>"build" => (Tokens.BUILD(!line,!line));
<INITIAL>"where" => (Tokens.WHERE(!line,!line));
<INITIAL>"test" => (Tokens.TEST(!line,!line));
<INITIAL>"signature" => (Tokens.SIGNATURE(!line,!line));
<INITIAL>"sorts" => (Tokens.SORTS(!line,!line));
<INITIAL>"operations" => (Tokens.OPERATIONS(!line,!line));
<INITIAL>"_"	=> (Tokens.UNDERSCORE(!line,!line));
<INITIAL>"**"	=> (Tokens.STARSTAR(!line,!line));
<INITIAL>"*"	=> (Tokens.ASTERISK(!line,!line));
<INITIAL>"="	=> (Tokens.EQ(!line,!line));
<INITIAL>","	=> (Tokens.COMMA(!line,!line));
<INITIAL>";"	=> (Tokens.SEMICOLON(!line,!line));
<INITIAL>":"	=> (Tokens.COLON(!line,!line));
<INITIAL>"."    => (Tokens.DOT(!line,!line));
<INITIAL>"("	=> (Tokens.LPAREN(!line,!line));
<INITIAL>")"	=> (Tokens.RPAREN(!line,!line));
<INITIAL>"{"	=> (Tokens.LCURLY(!line,!line));
<INITIAL>"}"	=> (Tokens.RCURLY(!line,!line));
<INITIAL>"["	=> (Tokens.LBRACK(!line,!line));
<INITIAL>"]"	=> (Tokens.RBRACK(!line,!line));
<INITIAL>"<"	=> (Tokens.LT(!line,!line));
<INITIAL>">"	=> (Tokens.GT(!line,!line));
<INITIAL>"<<"	=> (Tokens.LL(!line,!line));
<INITIAL>">>"	=> (Tokens.GG(!line,!line));
<INITIAL>"~"	=> (Tokens.TILDE(!line,!line));
<INITIAL>"->"	=> (Tokens.ARROW(!line,!line));
<INITIAL>"=>"	=> (Tokens.DOUBLEARROW(!line,!line));
<INITIAL>"|"	=> (Tokens.BAR(!line,!line));
<INITIAL>{lcid} => (Tokens.LCID (yytext,!line,!line));
<INITIAL>{ucid} => (Tokens.UCID (yytext,!line,!line));
<INITIAL>{num}	=> (Tokens.INT(makeInt yytext,!line,!line));
<INITIAL>{num}	=> (Tokens.INT(makeInt yytext,!line,!line));
<INITIAL>.	=> (error("ignoring illegal character " ^ yytext ^ " (INITIAL)",
			  !line,!line); lex());

<A>"*)"         => (YYBEGIN INITIAL; lex());
<A>\n           => (next_line(); lex());
<A>{comchars}   => (lex());
<A>.	        => (error("ignoring illegal character " ^ yytext ^ " (A)",
			  !line,!line); lex());

<TEXT>{begincode} => (YYBEGIN INITIAL; lex());
<TEXT>\n          => (next_line(); lex());
<TEXT>{textchars} => (lex());
<TEXT>.           => (error("ignoring illegal character " ^ yytext ^ " (TEXT)",
			  !line,!line); lex());

