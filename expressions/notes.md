- simplest expression are variable and constant

- operators are basic tool for building expression

- c has arithmetic , relational , logical and many more operators

### Arithmetic operators:

- unary : + (unary plus) , - (unary minus)

  - required only one operand `i++`
  - unary `+` does nothing it emphasize number is +ve

- binary:
  - required two operand `a+b`
  - `+` , `-` , `*` , `/` ,`%`
  - if both operand are int then `/` give ans as int
  ```c
  printf("%d",1/2)
  //gives 0 not 0.5
  ```
  - % only works with int
  - zero at right side of `/` or `%` gives undefined
  - `/` and `%` behave oddly when use with -ve values in rounding off

### operators Precedence and associativity:

```c
Highest: + - (unary)
         + / %
Lowest : + - (binary)
// same line have equal precedence
```

- when two operators with have same qual prudence in same expression then associativity comes in play.

- an operator is left associative if it is evaluated from left to right(or group from left to right).
- binary operator is left associative if it is evaluated from left to right.
- example:

  - `a+b+c` is evaluated as `(a+b)+c`
  - `i*j/k` is evaluated as `(i*j)/k`

- an operator is right associative if it is evaluated from right to left(or group from right to left).
- unary operator is right associative if it is evaluated from right to left.
- example:

  - `- + i` is evaluated as `- (+i)`

- use () to avoid ambiguity

### Assignment operators:

- variable = expression
- e can be any expression consist of variable and constant or more complex expression

```c
i = 5 // i is now 5
j = i // j is now 5
k = 10 *   i  + j //
```

- if v and e are of different type then c will try to convert e to v type

```c
int i = 5.5 // i is now 5
float f = 13 // f is now 13.0
```

```c
expression => j = i // copy value of i to j
```

- assignment operator is required to L-value as its left operand. a L-value id represented an object stored in memory.

- variable is L-value

```c
// compound assignment operator
i += 2 // i = i + 2
// += , -= , *= , /= , %=
// v+=e add e to v and store result in v
```

- = is right associative operator

### increment and decrement operators:

- unary operator
- ++ and --
- tricky to understand bcz of pre and post increment
- ++i: pre increment(prefix increment)
- i++: post increment(postfix increment)

```c
int i = 10
i++ //10
i //11
++i //12

// k = ++i + j++ // also use this
i = 1
j = 2
k = i++ + ++j
```

- ++ and -- have higher precedence than + and -

![op-table](oprator_table.png)

- to apply % on float use fmod() function


