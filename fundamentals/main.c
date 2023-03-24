#include <stdio.h>

int main(int argc, char *argv[])
{
    // printing string
    printf("Hello World! \n");

    // what is argv and argc
    printf("The name of the program is: %s\n", argv[0]);
    printf("The number of arguments is: %d\n", argc - 1);
    for (int i = 1; i < argc; i++)
    {
        printf("Argument %d is: %s\n", i, argv[i]);
    }
    return 0;
}
