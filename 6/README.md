program mini calculator for 2 variables :

syntax of switch in c :
```
switch(expression) {
   case constant-expression :
      statement(s);
      break; /* optional */
   case constant-expression :
      statement(s);
      break; /* optional */
   /* you can have any number of case statements */
   default : /* Optional */
      statement(s);
}
```
syntax of switch in c++ :
```
switch(expression) {
   case constant-expression:
      statement(s);
      break; // optional
   case constant-expression:
      statement(s);
      break; // optional
   // you can have any number of case statements
   default: // optional
      statement(s);
}
```
Python does not have a built-in switch statement like some other programming languages. Since Python 3.10, a new syntax called match case has been introduced that allows users to implement switch case functionality. The match case statement allows users to execute different code blocks based on the value of a variable or expression.
```
match expression:
    case pattern_1:
        # code block for pattern_1
    case pattern_2:
        # code block for pattern_2
    ...
    case pattern_n:
        # code block for pattern_n
    case _:
        # default code block
```
