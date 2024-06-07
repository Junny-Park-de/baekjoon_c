#include <stdio.h>

int main()
{
    int nb_1;
    int nb_2;
    
    while(scanf("%d %d", &nb_1, &nb_2) != -1) //EOF(End of File) 일때 -1로 표현
    {
        printf("%d\n", nb_1 + nb_2);
    }
    return (0);
}