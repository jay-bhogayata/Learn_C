### printf()

- format string
- display variable , constant or complicated expression
-

```c
printf(string,expr1,expr2)
```

- ordinary ch. and conversion specifications(value be filled during printing)(%)

- conversion specifications

- `%m.pX`

  - m:minimum filed width

  ```c
  int a = 32;
  printf("%3d",a)
  //print *32 (* represent space)
  printf("%-3d",a)
  //print 32* (* represent space)
  ```

  - p: precision
    ```c
    float PI = 3.1428;
    printf("%.2f",PI)
    //print 3.14
    ```

- escape sequence
  - \a alert bell
  - \b backspace
  - \n new line
  - \t horizontal tab
  - \

### scanf()

- reading input
- compiler does not check var type with your conversion specification type

  ```c
  int a;
  scanf("%d",&a);
  ```

- navar ever forgot &
- scanf will ignore blank spaces

- %i can match decimal, hexadecimal or oct
