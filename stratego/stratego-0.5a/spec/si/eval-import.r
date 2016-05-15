module eval-import
imports lib 

strategies

  eval-import = 
  ?Imports([])
  <+ ?Imports([mod]);
     <call-sc> mod;
     define-strategies
  <+ ?Imports(_);
     <fatal-error> ["error: import of multiple modules not supported yet"]
    
  call-sc = 
    where((<display-lookup>("options", "InclDir") <+ !InclDir(".")) => InclDir(dir));
    ?mod; <call-noisy>("sc", ["-i", mod, "-F", "-I", dir]);
    <conc-strings; ReadFromFile> (mod, ".sdefs")