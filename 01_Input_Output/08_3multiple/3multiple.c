#include <stdio.h>

int main()
{
    int nb1;
    int nb2;

    scanf("%d %d", &nb1, &nb2);
    int result1 = nb1*(nb2%10);
    int result2 = nb1*((nb2/10)%10);
    int result3 = nb1*(nb2/100);
    int result = result1 + result2*10 + result3*100;

    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);
    printf("%d\n", result);
    return (0);
}