#include <stdio.h> //.shallow copy

int main()
{
    char s1[] = "hellow dush";
    char *s2 = s1;//? s2 is a shallow copy
    s1[0] = 'l';
    printf("%s", s2);
    return 0;
}