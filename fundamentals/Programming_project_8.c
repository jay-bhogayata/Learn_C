#include <stdio.h>

int main(int argc, char *argv[])
{

    float loan, rate, payment;

    printf("Enter amount of loan : ");
    scanf("%f", &loan);

    printf("Enter interest rate : ");
    scanf("%f", &rate);

    printf("Enter amount of monthly payment: ");
    scanf("%f", &payment);

    loan = loan - payment + (loan * rate / 100 / 12.0);

    printf("Balance remaining after 1st payment : %.2f \n", loan);

    loan = loan - payment + (loan * rate / 100 / 12.0);

    printf("Balance remaining after 2nd payment : %.2f \n", loan);

    loan = loan - payment + (loan * rate / 100 / 12.0);

    printf("Balance remaining after 3rd payment : %.2f \n", loan);
}