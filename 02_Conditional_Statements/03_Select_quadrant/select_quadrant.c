#include <stdio.h>

int main()
{
    int X;
    int Y;
    scanf("%d %d", &X, &Y);

    if (0 < X && 0 < Y)
        printf("1\n");
    else if (X < 0 && 0 < Y)
        printf("2\n");
    else if (X < 0 && Y < 0)
        printf("3\n");
    else if (0 < X && Y < 0)
        printf("4\n");
    return (0);
}