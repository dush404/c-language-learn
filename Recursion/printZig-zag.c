// 1 111
// 2 211121112
// 3 321112111232111211123
//.it is a code of "pre in post"

#include <stdio.h>
void zigzag(int n)
{
    if (n <= 0)
        return;
    printf("%d", n);
    zigzag(n - 1);
    printf("%d", n);
    zigzag(n - 1);
    printf("%d", n);
    return;
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    zigzag(n);
    return 0;
}