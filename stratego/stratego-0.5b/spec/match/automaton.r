module automaton
imports stratego

signature
  constructors
    Final  : List(Int) -> Automaton
    Case   : String * Path * List(Alt) * Automaton -> Automaton
    Alt    : String * List(Path) * Automaton -> Automaton

    Continue : String -> Automaton

    // Assign(t1, t2) assigns t2 to t1

    Assign : Term * Term -> Term

    // Assign(t) assigns the current term to the term t

    Assign : Term -> Term 