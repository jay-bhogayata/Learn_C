#include <stdio.h>

int main(void)
{
    int num1, num2, demon1, demon2, resultNum, resultDenom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &demon1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &demon2);

    resultNum = num1 * demon2 + num2 * demon1;
    resultDenom = demon1 * demon2;

    printf("the sum is %d/%d \n", resultNum, resultDenom);
    return 0;
}