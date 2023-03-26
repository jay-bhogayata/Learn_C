#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter a number b/w  0 and 32767 : ");
    scanf("%d", &n);

    printf("Number in octal is %d%d%d%d%d",
           (n / 4096) % 8,
           (n / 512) % 8,
           (n / 64) % 8,
           (n / 8) % 8,
           n % 8);

    return 0;
}
