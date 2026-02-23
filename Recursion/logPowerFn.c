#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
        return 1;
    int res = power(a, b / 2);
    if (b % 2 == 0)
        return res * res;
    else
        return res * res * a;
}

int main()
{
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    printf("Result: %d\n", power(a, b));

    return 0;
}