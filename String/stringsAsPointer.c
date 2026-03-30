#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hey dush,what are you doing ? \0";
    char *ptr = &str; //. ptr is now points to str[0]
    printf("%p \n", &str[0]);
    printf("%p \n", str);
    printf("%p", ptr);
    return 0;
}