#include <stdio.h>

int main()
{
    int result;
    scanf("%d", &result);

    if (90 <= result && result <= 100)
        printf("A\n");
    else if (80 <= result && result < 90)
        printf("B\n");
    else if (70 <= result && result < 80)
        printf("C\n");
    else if (60 <= result && result < 70)
        printf("D\n");
    else
        printf("F\n");
    return (0);
}