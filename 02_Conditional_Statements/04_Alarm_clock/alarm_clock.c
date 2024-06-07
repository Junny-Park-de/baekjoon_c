#include <stdio.h>

int main()
{
    unsigned int hour;
    unsigned int min;

    scanf("%d %d", &hour, &min);

    if (45 <= min && min < 60)
        printf("%d %d\n", hour, min-45);
    if ((hour == 0) && (0 <= min && min < 45))
        printf("23 %d\n", min + 60 - 45);
    else if ((0 < hour && hour <= 23) 
            && (0 <= min && min < 45)) 
        printf("%d %d\n", hour-1, min+60-45);
    return (0);
}