#include <stdio.h>

int main()
{
    int nb;
    int i;
    int j;
    int k;
    scanf("%d", &nb);

    for(j = 1; j <= nb; j++)
    {
        for(i = 1; i <= nb-j; i++)
            printf(" ");
        for(k = 1; k <= j; k++)
            printf("*");
        printf("\n");
    }
    return (0);
}