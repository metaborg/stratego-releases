module prop-create
imports prop lib

strategies

  create-conjunct(s) = 
    copy(\ p -> And(<s>(), p) \ )

  create-disjunct(s) = 
    copy(\ p -> Or(<s>(), p) \ )

  create-atom = !Atom(<new>())

  copy(s) =
    while-not(\ (0,p) -> p \
             ,\ (n,p) -> (<subt>(n,1), <s>p) \ )

  main =
    parse-options(ArgOption("-conj", string-to-int; ?c) + 
                  ArgOption("-disj", string-to-int; ?d));
    <create-conjunct(<create-disjunct(create-atom)>(c,Atom("a")))>(d,Atom("b"));
    split(!stdout, id);
    WriteToTextFile