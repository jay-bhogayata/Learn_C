#include <stdio.h>

int main(int argc, char const *argv[])
{
    int d1, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, sum1, sum2, total;

    printf("Enter first single digit : ");
    scanf("%1d", &d1);

    printf("Enter first group of five digit: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter second group of five digit: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    sum1 = i1 + i2 + i3 + i4 + i5;
    sum2 = j1 + j2 + j3 + j4 + j5;

    total = 3 * sum1 + sum2;

    printf("check digit is: %d\n", 9 - ((total - 1) % 10));
    printf("check digit is: %d\n", 10 - ((total % 10) % 10));


    return 0;
}
