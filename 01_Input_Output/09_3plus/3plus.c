#include <stdio.h>

int main()
{
    long long A;
    long long B;
    long long C;

    scanf("%lld %lld %lld", &A, &B, &C);
    long long result = A + B + C;
    printf("%lld\n", result);
    return (0);
}