#include <stdio.h>

int main(int argc, char const *argv[])
{
    int p1, p2, p3;

    printf("Enter a mobile number [(xxx) xxx-xxxx] :");
    scanf("(%d) %d-%d", &p1, &p2, &p3);
    printf("You entered %d.%d.%d", p1, p2, p3);

    return 0;
}
