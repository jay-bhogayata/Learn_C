#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("1/2 = %d", 1 / 2);
    int i;
    float f;
    f = i = 33.3f; // i => 33 and f is 33.0 not 33.3
    // 12 = i; // lvalue error
    i = 1;
    int j = 2;
    int k = i++ + j++;
    printf("\nvalue of i is %d j is %d and value of k is %d", i, j, k);


    return 0;
}
