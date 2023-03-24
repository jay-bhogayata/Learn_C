#include <stdio.h>

int main(int argc, char *argv[])
{
    float bill, bill_after_tex;
    float tax_rate = 5.0f;

    printf("Enter an amount: ");
    scanf("%f", &bill);

    bill_after_tex = bill + (bill * 0.05);

    printf("with tex added : %.2f\n", bill_after_tex);

    return 0;
}