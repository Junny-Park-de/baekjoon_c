#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int nb[size];
    int out_nb;
    int count = 0;
    int i;

    for(i = 0; i < size; i++)
    {
        scanf("%d", &nb[i]);
    }
    scanf("%d", &out_nb);
    for(i = 0; i < size; i++)
    {
        if(nb[i] == out_nb)
            count += 1;
    }
    printf("%d\n", count);
    return (0);
}