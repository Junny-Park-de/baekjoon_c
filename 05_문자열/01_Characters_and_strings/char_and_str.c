#include <stdio.h>

int main()
{
    char characters[1000];
    for(int i = 0; i < 1000; i++)
        scanf("%s", &characters[i]);
    
    int nb;
    scanf("%d", &nb);

    printf("%s\n", &characters[nb - 1]);
    return (0);
}