#include <stdio.h>

int main(int argc, char const *argv[])
{
    int d, m, y;
    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &m, &d, &y);
    printf("%d%.2d%d", y, m, d);
    return 0;
}
