#include <stdio.h>

int main()
{
    int cases;
    scanf("%d", &cases);

    int nb_1[cases];
    int nb_2[cases];
    int i;

    for(i = 0; i < cases; i++)
        scanf("%d %d", &nb_1[i], &nb_2[i]);
    for(i = 0; i < cases; i++)
        printf("%d\n", nb_1[i] + nb_2[i]);
    return (0);
}