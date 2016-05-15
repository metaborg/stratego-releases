module repair-abox
imports abox-ext lib
strategies

  main = iowrap(repair-abox)

  repair-abox = alltd(S(quote))

  quote = 
    explode-string; 
    \ cs -> <concat> [[34],<escape> cs,[34]] \; 
    implode-string

  escape = rec x(escape-backslash; [id,id|x]
                 <+ ([] + [id| x]))

  escape-backslash = ?[92|xs]; ![92,92|xs]
  escape-backslash = ?[34|xs]; ![92,34|xs]