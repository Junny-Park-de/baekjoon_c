#include <stdio.h>

int main()
{
    int total;
    int products;
    scanf("%d %d", &total, &products);
    
    int price[products];
    int num[products];
    int i;
    int cmp = 0;

    for (i = 0; i < products; i++)
        scanf("%d %d", &price[i], &num[i]);
    while (0 < i)
    {
        cmp = cmp + price[i-1]*num[i-1];
        i--;
    }
    printf("%s\n", cmp == total ? "Yes" : "No");
    return (0);
}