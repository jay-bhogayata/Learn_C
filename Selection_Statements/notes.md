- statements in c programming language

  - return 0; // return 0 means that the program ran successfully

  - expressions statements

    - expressions are evaluated to produce a value
    - statements are executed to produce a side effect

  - selection statements

    - if
    - switch

  - iteration statements

    - while
    - do while
    - for

  - jump statements

    - break
    - continue
    - goto
    - return

  - compound statements

### Logical expressions:

- in c there is no boolean type but we can use int type to represent boolean values 0 and 1 , true 1 and false 0

- but using stdbool.h header file we can use bool type

```c
#include<stdbool.h>
if (true)
{
    printf("true");
}
```

- Relational operators

  - `>` greater than
  - `<` less than
  - `>=` greater than or equal to
  - `<=` less than or equal to
  - precedence of relational operators is lower than that of arithmetic operators and it is left associative.
  - output of relational operators is 0 or 1

- equality operators

  - `==` equal to
  - `!=` not equal to
  - precedence of equality operators is lower than that of relational operators and it is left associative.
  - output of equality operators is 0 or 1

- logical operators
  - `&&` logical AND
  - `||` logical OR
  - `!` logical NOT or negation
  - ! has same precedence as unary plus and minus. right associative
  - && and || have lower precedence than relational and equality operators. left associative
  - output of logical operators is 0 or 1

### if-statement:

```c
if (expression)
    statement
```

- =(assignment) and (==) equality are different

- compound statement

```c
if(expression)
{
    statement1;
    statement2;
    statement3;
}
```

- if statements have else clause

```c
if(i>j)
    max = i;
else
    max = j;
```

- if statements can nested at any depth

- cascaded if statements

```c
if (n<0)
    printf("n is negative\n");
else
    if (n==0)
        printf("n is zero\n");
    else
        printf("n is positive\n");
```

```c
if (n<0)
    printf("n is negative\n");
else if (n==0)
    printf("n is zero\n");
// any number of else if statements
else
    printf("n is positive\n");
```

### conditional expression (ternary operator):

```c
max = (i>j) ? i : j;
```

### switch statement:

```c
switch (expression)
{
    case constant-expression1:
        statement1;
        break;
    case constant-expression2:
        statement2;
        break;
    case constant-expression3:
        statement3;
        break;
    default:
        statement4;
        break;
}
```

- constant-expression must be integer constant

- break statement is optional but not using leads to fall through

- when int and float value are mixed in expression then int value is converted to float

