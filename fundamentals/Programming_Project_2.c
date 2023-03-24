#include <stdio.h>

#define PI 3.14

int main(int argc, char *argv[])
{
    // float r = 10.0f;

    float r;

    printf("Enter a radius of sphere : ");
    scanf("%f", &r);

    float volume = (4.0f / 3.0f) * PI * (r * r * r);

    printf("volume of sphere is : %.3f\n", volume);

    return 0;
}