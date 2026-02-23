#include <stdio.h>
void sum(int a, int s)
{
    if (a == 0)
    {
        printf("%d\n", s);
        return;
    }
    sum(a - 1, s + a);

    return;
}
int sumReturnType(int a)
{
    if (a == 0)
        return 0;
    int totalSum = a + sumReturnType(a - 1);

    return totalSum;
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    sum(a, 0);
    printf("%d", sumReturnType(a));
    return 0;
}