#include <stdio.h>
#define INCH_PER_POUND 166

int main(int argc, char *argv[])
{
    int height, length, width, volume, weight;

    printf("Enter a height of box : ");
    scanf("%d", &height);

    printf("Enter a length of box : ");
    scanf("%d", &length);

    printf("Enter a width of box : ");
    scanf("%d", &width);

    volume = height * length * width;

    weight = (volume + INCH_PER_POUND - 1) / INCH_PER_POUND;

    printf("Dimension of box is %d X %d X %d\n", height, length, width);
    printf("volume is  (cubic inches): %d  \n", volume);
    printf("dimensional weight (pounds): %d \n", weight);

    return 0;
}