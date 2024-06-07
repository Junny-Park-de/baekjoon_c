#include <stdio.h>

int main()
{
    int A;
    int B;
    double result;


    scanf("%d %d", &A, &B);
    result = (double)A / B;
    printf("%.9f\n", result);
    return (0);
}