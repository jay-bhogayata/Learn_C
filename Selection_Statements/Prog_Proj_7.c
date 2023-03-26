#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3, n4, min, max, min1, min2, max1, max2;

    printf("Enter four integers : ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2)
    {
        min1 = n2;
        max1 = n1;
    }
    else
    {
        min1 = n1;
        max1 = n2;
    }

    if (n3 > n4)
    {
        min2 = n4;
        max2 = n3;
    }
    else
    {
        min2 = n3;
        max2 = n4;
    }

    if (max1 > max2)
    {
        max = max1;
    }
    else
    {
        max = max2;
    }

    if (min1 > min2)
    {
        min = min2;
    }
    else
    {
        min = max1;
    }

    printf("Min is %d and max is %d \n", min, max);
    return 0;
}
