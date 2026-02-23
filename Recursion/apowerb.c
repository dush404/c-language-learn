#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
        return 1;
    int res = a * power(a, b - 1);

    return res;
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