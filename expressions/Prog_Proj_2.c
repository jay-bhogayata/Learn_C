#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number 3 digit : ");
    scanf("%d", &num);

    printf("rev number is %d%d%d", num % 10, (num / 10) % 10, (num / 10) / 10);
    return 0;
}
