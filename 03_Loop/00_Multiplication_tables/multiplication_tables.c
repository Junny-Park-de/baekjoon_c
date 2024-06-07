#include <stdio.h>

int main()
{
    int nb;
    int i;
    scanf("%d", &nb);

    for(i = 1; i <= 9; i++)
        printf("%d * %d = %d\n", nb, i, nb*i);
    return (0);
}