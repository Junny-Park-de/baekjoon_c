#include <stdio.h>

int main()
{
    int nb;
    scanf("%d", &nb);

    if (nb % 4 != 0)
        return (0);
    int repeat = nb / 4;
    while (0 < repeat)
    {
        printf("long ");
        repeat--;
    }
    printf("int\n");
    return (0);
}