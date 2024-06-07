#include <stdio.h>

int main()
{
    int students[30];
    for(int i = 0; i < 30; i++)
        students[i] = 0;

    int st_nb; //Student number
    for(int i = 0; i < 28; i++)
    {
        scanf("%d", &st_nb);
        if(0 < st_nb && st_nb <= 30)
            students[st_nb - 1] = st_nb;
    }    

    for(int i = 0; i < 30; i++)
    {
        if(students[i] == 0)
            printf("%d\n", i+1);
    }
    return (0);
}