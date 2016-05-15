(*

   Rule ";" Rules           -> Rules

   "[" Id "]" Term "=" Term -> Rule

   Id ("(" [Terms] ")")?    -> Term  %% Application

   Term ("," Term)*         -> Terms



*)

use "../lib/parser-comb-sig.sml";
use "../lib/parser-comb.sml";

fun is_ws ' ' = true;

val layout = zeroOrMore(eatChar(is_ws));

fun parse_term x
  = seq(parse_id)
       (option(seq(string("("))
              (seq(parse_terms)
                  (string(")"))))) x
and parse_terms x
  = seq(parse_term)
       (zeroOrMore(seq(string(","))(parse_term))) x;

val parse_rule
  = seq(string("["))
       (parse_id)
       (string("]"))
       (parse_term)
       (string("="))
       (parse_term);