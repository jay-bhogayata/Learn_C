#include <stdio.h>

int main(int argc, char *argv[])
{
    int amount, rem;

    printf("Enter a dollar amount : ");
    scanf("%d", &amount);

    int d = amount / 20;
    rem = amount - 20 * d;
    printf("$20 bills : %d \n", d);

    d = rem / 10;
    rem = rem - 10 * d;
    printf("$10 bills : %d \n", d);

    d = rem / 5;
    rem = rem - 5 * d;
    printf("$5 bills  : %d \n", d);

    d = rem / 1;
    rem = rem - 1 * d;
    printf("$1 bills  : %d \n", d);

    return 0;
}