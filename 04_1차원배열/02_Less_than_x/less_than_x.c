#include <stdio.h>

int main()
{
    int nb;
    int less;
    scanf("%d %d", &nb, &less);
    
    if (nb < 1 || 10000 < nb || less < 1 || 10000 < less)
        return (0);
    int numbers[nb];
    int i;
    for (i = 0; i < nb; i++)
        scanf("%d", &numbers[i]);
    //for (i = 0; i < nb; i++)
    //    printf("%d ", numbers[i]);
    //printf("\n");
    i = 0;
    while (i < nb)
    {
        if (numbers[i] < less)
            printf("%d ", numbers[i]);
        i++;
    }
    printf("\n");
    return (0);
}