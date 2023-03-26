#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num > 0 && num < 10)
    {
        printf("number has one digit");
    }
    else if (num > 9 && num < 100)
    {
        printf("Number has two digit");
    }
    else if (num > 99 && num < 1000)
    {
        printf("Number has 3 digit");
    }
    else
    {
        printf("number have more then 3 digit");
    }
    printf("\n");
    return 0;
}
