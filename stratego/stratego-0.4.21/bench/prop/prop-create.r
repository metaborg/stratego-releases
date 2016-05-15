module prop-create
imports prop lib

strategies

  create-conjunct(s) = 
    copy(\ p -> And(<s>(), p) \ );
    foldr(!True, \ (x,y) -> And(x,y) \ )

  create-disjunct(s) = 
    copy(\ p -> Or(<s>(), p) \ );
    foldr(!False, \ (x,y) -> Or(x,y) \ )

  create-atom = !Atom(<new>())

  main =
    parse-options(ArgOption("-conj", string-to-int; ?c) + 
                  ArgOption("-disj", string-to-int; ?d));
    <create-conjunct(<create-disjunct(create-atom)>(c,Atom("a")))>(d,Atom("b"));
    split(!stdout, id);
    WriteToTextFile
