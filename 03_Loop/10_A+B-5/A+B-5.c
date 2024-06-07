#include <stdio.h>

int main()
{
    int nb_1;
    int nb_2;
    
    while(1)
    {
        scanf("%d %d", &nb_1, &nb_2);
        if (nb_1 == 0 && nb_2 == 0)
            break;
        printf("%d\n", nb_1 + nb_2);
    }
    return (0);
}

/*
    int count = 0;
    count++; (while 안에서 count 1씩 증가시킴)
    nb_1 -= count;
    nb_2 -= count;
    while(*nb_1 != 0 && *nb_2 != 0)
    {
        printf("%d\n", *nb_1 + *nb_2);
        nb_1++;
        nb_2++;
    }
    */