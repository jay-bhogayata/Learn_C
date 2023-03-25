#include <stdio.h>

int main(int argc, char const *argv[])
{
    int gsi, country_of_org, publisher_code, book_inden, check_digit;

    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d", &gsi, &country_of_org, &publisher_code, &book_inden, &check_digit);

    printf("GS1 prefix: %d \n", gsi);
    printf("Group identifier: %d \n", country_of_org);
    printf("publisher code: %d \n", publisher_code);
    printf("Item number: %d \n", book_inden);
    printf("check digit: %d \n", check_digit);

    return 0;
}