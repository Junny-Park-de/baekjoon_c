#include <stdio.h>

int main()
{
    unsigned int dice[3];
    int i = 0;

    scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);

    if (*dice < 1 || 6 < *dice)
        return (0);
    
    unsigned int money;
    int max = dice[0];

    if (dice[0] == dice[1] && dice[1]== dice[2])
        money = 10000 + dice[0]*1000;
    if ((dice[0] == dice[1] && dice[1] != dice[2]) 
        || (dice[0] == dice[2] && dice[2] != dice[1]))
        money = 1000 + dice[0]*100;
    else if (dice[0] != dice[1] && dice[1] == dice[2])
       money = 1000 + dice[1]*100;
    if ((dice[0] != dice[1]) && (dice[1] != dice[2]) && (dice[0] != dice[2]))
    {
        while (i < 3)
        {
            if (max < dice [i])
                max = dice[i];
            i++;
        }
        money = max * 100;
    }
    printf("%d\n", money);
    return (0);
}