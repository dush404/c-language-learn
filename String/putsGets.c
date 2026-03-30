#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char arr[] = "Hey dush,what are you doing ? \0"; // # although we can remove "\0",it will work perfectly,auto added \0 .
    // printf("%s", arr);
    // puts(arr);//.alternate for print only in case of string
    // scanf('%s', arr);//? here only the first word is connsider -->here input if "hey dush khilari" then output is "hey" only
    scanf('%[^\n]s', arr);//? it will get complete input as general
    gets(arr);
    return 0;
}