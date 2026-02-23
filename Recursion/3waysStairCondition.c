#include <stdio.h>
int starWays(int n)
{
    if (n == 1 || n==2 || n== 3)return n;
    int totalWays = starWays(n - 1) + starWays(n - 2)+ starWays(n - 3);

    return totalWays;
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%d", starWays(n));
    return 0;
}