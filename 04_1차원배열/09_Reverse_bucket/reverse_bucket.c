#include <stdio.h>

int main()
{
    int N;
    int M;
    scanf("%d", &N);
    scanf("%d", &M);

    int basket[N];
    for(int i = 0; i < N; i++)
        basket[i] = i + 1;
    
    int S;
    int E;
    int change;

    for(int i = 0; i < M; i++)
    {
        scanf("%d", &S);
        scanf("%d", &E);
        for(;S < E; S++, E--)
        {
            change = basket[S - 1];
            basket[S - 1] = basket[E - 1];
            basket[E - 1] = change;
        }
    }

    for(int i = 0; i < N; i++)
        printf("%d ", basket[i]);
    printf("\n");
    return (0);
}