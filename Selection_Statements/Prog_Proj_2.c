#include <stdio.h>

int main(int argc, char const *argv[])
{
    int h, m;
    printf("Enter a 24-hour time like(13:20) : ");
    scanf("%d:%d", &h, &m);

    if (h > 12)
    {
        switch (h)
        {
        case 13:
            printf("%d", 1);
            break;
        case 14:
            printf("%d", 2);
            break;
        case 15:
            printf("%d", 3);
            break;
        case 16:
            printf("%d", 4);
            break;
        case 17:
            printf("%d", 5);
            break;
        case 18:
            printf("%d", 6);
            break;
        case 19:
            printf("%d", 7);
            break;
        case 20:
            printf("%d", 8);
            break;
        case 21:
            printf("%d", 9);
            break;
        case 22:
            printf("%d", 10);
            break;
        case 23:
            printf("%d", 11);
            break;
        case 24:
            printf("%d", 0);
            break;

        default:
            break;
        }
        printf(":%d PM\n", m);
    }
    else
    {
        printf("%d:%d AM\n", h, m);
    }
    return 0;
}
