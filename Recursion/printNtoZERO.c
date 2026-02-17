#include <stdio.h>
void integer(int a,int b)
{
    if (b >= a+1)return ;//? this line act as break here 
    printf("%d\n", b);
    integer(a,b+1);
    return;
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    integer(a,1);
    return 0;
}