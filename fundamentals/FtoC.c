#include <stdio.h>

#define FREEZING_POINT 32.0f
#define CONVERT_FORMULA (5.0f / 9.0f)

int main(int argc, char *argv[])
{

    float f;
    printf("Enter a value of temperature in fahrenheit : ");
    scanf("%f", &f);

    printf("Value in celsius is : %.2f \n", (f - FREEZING_POINT) * CONVERT_FORMULA);

    return 0;
}

// fp 32
// f = 9/5 c + 32
// (f-32) 5/9;