#include <stdio.h>

int main()
{
    int N; // Number of baskets
    int M; // Number of ball insertion
    scanf("%d", &N);
    scanf("%d", &M);

    int basket[N];
    for(int i = 0; i < N; i++)
        basket[i] = i + 1;
    
    int c_a; // Change a
    int c_b; // Change b
    int change;
    for(int j = 0; j < M; j++)
    {
        scanf("%d", &c_a);
        scanf("%d", &c_b);
        change = basket[c_a-1];
        basket[c_a-1] = basket[c_b-1];
        basket[c_b-1] = change;
    }

    for(int i = 0; i < N; i++)
        printf("%d ", basket[i]);
    printf("\n");
    return (0);
}