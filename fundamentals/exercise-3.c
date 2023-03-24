#include <stdio.h>

int main(int argc, char *argv[])
{
    int height = 10, length = 10, width = 15;
    int volume = height * length * width;
    printf("dimensional weight is %d \n", (volume + 165) / 166);
    return 0;
}