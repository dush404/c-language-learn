#include <stdio.h>
void tower(int a, char s, char h, char d)
{
    if (a == 0)
        return;
    tower(a - 1, s, d, h);

    printf("%C->%c\n", s, d);
    tower(a - 1, h, s, d);
}

int main()
{
    int a;
    printf("Enter a the stack number : ");
    scanf("%d", &a);
    tower(a, 'A', 'B', 'C');
    return 0;
}