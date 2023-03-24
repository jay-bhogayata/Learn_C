#include <stdio.h>

int main(int argc, char *argv[])
{
    int x, ans;

    printf("Enter a value : ");
    scanf("%d", &x);

    ans = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - x * x + 7 * x - 6;

    printf("ans is  : %d \n", ans);
}