#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, sum1, sum2, total;

    printf("Enter a 13 digit EAN number : ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    sum1 = n2 + n4 + n6 + n8 + n10 + n12;
    sum2 = n1 + n3 + n5 + n7 + n9 + n11;
    total = 3 * sum1 + sum2;

    printf("check digit is : %d", 9 - ((total - 1) % 10));

        return 0;
}
