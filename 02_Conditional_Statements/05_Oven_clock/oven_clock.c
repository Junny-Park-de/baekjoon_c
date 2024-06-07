#include <stdio.h>

int main()
{
    unsigned int hour;
    unsigned int min;
    unsigned int duration;
    scanf("%d %d %d", &hour, &min, &duration);

    unsigned int dur_h = duration / 60;
    unsigned int dur_m = duration % 60;
    unsigned int res_h = hour + dur_h;
    unsigned int res_m = min + dur_m;

    if (60 == res_m)
    {
        res_h = res_h + 1;
        res_m = 0;
    }
    else if (60 < res_m)
    {
        res_h = res_h + 1;
        res_m = res_m - 60;
    }
    if (23 < res_h)
        res_h = res_h - 24;
    printf("%d %d\n", res_h, res_m);
    return (0);
}