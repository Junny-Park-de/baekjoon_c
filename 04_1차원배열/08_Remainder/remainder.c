#include <stdio.h>

int main()
{
    unsigned int nb[10];
    unsigned int remain[10];
    unsigned int remain_count = 0;
    for (int i = 0; i < 10; i++)
        scanf("%d", &nb[i]);
    for (int i = 0; i < 10; i++)
        remain[i] = nb[i] % 42;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)    
        {
            if ( i != j && remain[i] == remain[j])
                remain[j] = 42;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (remain[i] != 42)
            remain_count += 1;
    }
    printf("%d\n", remain_count);
    return (0);
}