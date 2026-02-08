#include <stdio.h>

int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
        fact = fact * i;
    return fact;
}

int ncr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{

    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for(int k= 0 ; k<=n-1-i ; k++){
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            // printf("%d", i);
            printf("%d  ", ncr(i, j));
        }
        printf("\n");
        }

    return 0;
}