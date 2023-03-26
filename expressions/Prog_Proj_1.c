//  rev a number

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter a two digit number : ");
    scanf("%d", &num);

    printf("the reverse number is %d%d", num % 10,num / 10);

    return 0;
}
