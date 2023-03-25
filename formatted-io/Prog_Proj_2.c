#include <stdio.h>

int main(int argc, char const *argv[])
{
    int item_number, m, d, y;
    float unit_price;

    printf("Enter item number : ");
    scanf("%d", &item_number);

    printf("Enter a unit price : ");
    scanf("%f", &unit_price);

    printf("Enter a purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$  %.2f\t%.2d/%.2d/%d", item_number, unit_price, m, d, y);

    return 0;
}
