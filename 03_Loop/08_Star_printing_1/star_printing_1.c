#include <stdio.h>

int main()
{
    int nb;
    int i;
    int j;
    scanf("%d", &nb);

    for(j = 1; j <= nb; j++)
    {
        for(i = 1; i <= j; i++)
        {
            printf("*");
        }
            printf("\n");
    }
    return (0);
}