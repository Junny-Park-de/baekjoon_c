#include <stdio.h>

int main()
{
    int N; // Number of baskets
    int M; // Number of ball insertion
    scanf("%d", &N);
    scanf("%d", &M);

    int basket[N];
    for(int i = 0; i < N;i++)
        basket[i] = 0;

    int S; // Start
    int E; // End
    int nb; // Ball number
    for(int i = 0; i < M; i++)
    {
        scanf("%d", &S);
        scanf("%d", &E);
        scanf("%d", &nb);
        for(int j = S-1; j < E; j++)
            basket[j] = nb;
    }

    for(int i = 0; i < N; i++)
        printf("%d ", basket[i]);
    printf("\n");
    return (0);
}