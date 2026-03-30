#include <stdio.h>

int main()
{
    int n;
    char arr[] = "Hey dush,what are you doing ? \0"; // # although we can remove "\0",it will work perfectly,auto added \0 .
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == 'd')
        {
            printf("%c", arr[i]);
            // printf("%c", i[arr]);
            // printf("%c", *(arr + i));
            // printf("%c", *(i + arr));
            i++;
        }
    }

    return 0;
}