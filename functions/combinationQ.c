#include <stdio.h>
//?function methode
int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    int r;
    printf("enter r : ");
    scanf("%d", &r);
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    //? manual methode
    // int nfact = factorial(n);
    // int rfact = factorial(r);
    // int rnfact = factorial(n - r);

    // for (int i = 1; i <= n; i++)
    // {
    //     nfact = nfact * i;
    // }
    // for (int j = 1; j <= r; j++)
    // {
    //     rfact = rfact * j;
    // }
    // for (int i = 1; i <= (n - r); i++)
    // {
    //     rnfact = rnfact * i;
    // }
    // int ncr = nfact / (rfact * rnfact);

    printf("%d", ncr);
    return 0;
}