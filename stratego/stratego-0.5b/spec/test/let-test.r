module let-test
imports lib
strategies

main = {
  options:
  debug;
  let f = debug(!"another message")
   in f
}