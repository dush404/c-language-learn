#include <stdio.h>

int main()
{
    int mark[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a mark : ");
        scanf("%d", &mark[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (mark[i] < 35)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}