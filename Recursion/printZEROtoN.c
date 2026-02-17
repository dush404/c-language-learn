#include <stdio.h>
void integer(int a)
{
    if (a == 0)return ;//? this line act as break here 
    printf("%d\n", a);
    integer(a - 1);
    if ( a )
    return;
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    integer(a);
    return 0;
}