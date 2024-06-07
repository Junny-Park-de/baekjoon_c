#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    int numbers[N];
    int i;

    for (i = 0; i < N; i++)
        scanf("%d", &numbers[i]);

    int min = numbers[0];
    int Max = numbers[0];
    for (i = 0; i < N; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
        if (Max < numbers[i])
            Max = numbers[i];
    }
    
    printf("%d %d\n", min, Max);
    return (0);
}