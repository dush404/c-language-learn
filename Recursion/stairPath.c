#include <stdio.h>
int starWays(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    ;
    int totalWays = starWays(n - 1) + starWays(n - 2);

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