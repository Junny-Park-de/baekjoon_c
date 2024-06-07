#include <stdio.h>

int main()
{
    int nb;
    scanf("%d", &nb);

    float score[nb];
    for (int i = 0; i < nb; i++)
        scanf("%f", &score[i]);
    
    float Max = score[0];
    for (int i = 0; i < nb; i++)
    {
        if (Max < score[i])
            Max = score[i];
    }

    float rev_score[nb];
    for (int i = 0; i < nb; i++)
        rev_score[i] = (score[i] / Max) * 100;

    float sum = 0;
    for (int i = 0; i < nb; i++)
        sum += rev_score[i];
    printf("%f\n", sum/nb);
}