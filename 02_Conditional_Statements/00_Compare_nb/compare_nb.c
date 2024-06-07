#include <stdio.h>

int main()
{
    int A;
    int B;

    scanf("%d %d", &A, &B);

    if (A > B)
        printf(">\n");
    else if (A < B)
        printf("<\n");
    else 
        printf("==\n");
    return (0);
}