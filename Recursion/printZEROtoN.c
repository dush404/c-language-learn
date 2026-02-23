#include <stdio.h>
void integer(int a, int b)
{
    if (a < b)
        return; //? this line act as break here
    printf("%d\n", b);
    integer(a, b + 1);
}
//.after rec call method it is actually opposite of directional movment.
void afterRecCall(int a ){
    if (a<0)return;
    afterRecCall(a-1);
    printf("%d\n",a);
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    integer(a, 0);
    afterRecCall(a);
    return 0;
}