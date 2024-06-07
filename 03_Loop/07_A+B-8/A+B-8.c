#include <stdio.h>

int main()
{
    int cases;
    scanf("%d", &cases);

    int nb_1[cases];
    int nb_2[cases];
    int i;

    for(i = 0; i < cases; i++)
    {
        scanf("%d %d", &nb_1[i], &nb_2[i]);
        if (nb_1[i] <= 0 || 10 <= nb_1[i] || nb_2[i] <= 0 || 10 <= nb_2[i])
            return (0);
    }
    
    for(i = 0; i < cases; i++)
        printf("Case #%d: %d + %d = %d\n", i+1, nb_1[i], nb_2[i], nb_1[i] + nb_2[i]);
    return (0);
}