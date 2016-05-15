module stratego-metrics
imports lib stratego-size

strategies 

  main = 
    [?prog | ?files];
    !files;
    map(measure-file);
    split(sum-sizes, id); MkCons; 
    map(\ (n,s) -> <debug-stdout(!<conc-strings> (n, ": "))> s\ )

  measure-file =
    ?file;
    split(id, parse-mod; measure-spec)

  loc = // how to call process with file redirection?
    ?file;
    <call> ("wc", ["-l", file, "> bla"]);
    <ReadFromFile> "bla"

  parse-mod =
    ?file;
    <call> ("parse-mod", ["-silent", "-i", file, "-o", "pm.bla"]);
    <ReadFromFile> "pm.bla"

  sum-sizes =
    foldr(!("all", Size(Constructors(0),Rules(0),Strategies(0))), 
          add-sizes)

rules
 
  add-sizes :
    ((_,Size(Constructors(c1),Rules(r1),Strategies(s1))),
     (n,Size(Constructors(c2),Rules(r2),Strategies(s2))))
  -> (n,Size(Constructors(<add>(c1,c2)),
             Rules(<add>(r1,r2)),
	     Strategies(<add>(s1,s2))))