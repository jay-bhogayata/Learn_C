#include <stdio.h>

int main(int argc, char const *argv[])
{
    int wind_speed;

    printf("Enter a value of wind speed in knot  (decimal value): ");
    scanf("%d", &wind_speed);

    if (wind_speed < 1)
    {
        printf("Calm");
    }
    else if (wind_speed <= 3)
    {
        printf("Light Air");
    }
    else if (wind_speed <= 27)
    {
        printf("Breeze");
    }
    else if (wind_speed <= 48)
    {
        printf("Gale");
    }
    else if (wind_speed <= 63)
    {
        printf("Storm");
    }
    else
    {
        printf("Hurricane");
    }

    printf("\n");

    return 0;
}
