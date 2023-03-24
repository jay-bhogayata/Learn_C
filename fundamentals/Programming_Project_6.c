#include <stdio.h>

int main(int argc, char *argv[])
{
    int x, ans;

    printf("Enter a value of x : ");
    scanf("%d", &x);

    ans = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("ans is : %d \n", ans);
    return 0;
}