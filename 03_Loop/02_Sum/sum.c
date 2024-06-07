#include <stdio.h>

int main()
{
    int nb;
    scanf("%d", &nb);

    int sum = 0;
    while (0 < nb)
    {
        sum = sum + nb;
        nb--;
    }
    printf("%d\n", sum);
    return (0);
}