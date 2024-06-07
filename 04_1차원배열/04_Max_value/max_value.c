#include <stdio.h>

int main()
{
    unsigned int nb[9];
    unsigned int i = 0;
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &nb[i]);
        if (99 < nb[i])
            return (0);
    }
    unsigned int Max = nb[0];
    unsigned int which_n = 1;
    for (i = 0; i < 9; i++)
    {
        if (Max < nb[i])
        {
            Max = nb[i];
            which_n = i + 1;
        }
    }
    printf("%d\n", Max);
    printf("%d\n", which_n);
    return (0);
}