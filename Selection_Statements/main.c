#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[])
{
    printf("Hello \n");
    int age = 25;

    (age > 18) ? printf("you can vote\n") : printf("you can not vote\n");

    int i = 10;
    int j = 12;
    printf("%d \n", i > j ? i : j);

    if (true)
    {
        printf("true\n");
    }

    _Bool flag;
    flag = 1;

    printf("%d\n", flag);

    // ------------

    int grade = 5;

    switch (grade)
    {
    case 5:
        printf("excellent\n");
        break;
    case 4:
        printf("very good\n");
        break;
    case 3:
        printf("good\n");
        break;
    case 2:
        printf("average\n");
        break;
    case 1:
        printf("poor\n");
        break;
    default:
        printf("invalid grade\n");
    }

    // int n;
    // if (n == 1 - 10)
    //     printf("");
    // above code legal

    i = 17; // try with -17
    printf("%d\n", i >= 0 ? i : -i);

    return 0;
}