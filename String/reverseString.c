#include <stdio.h>
#include <string.h>
int main()
{
    char str[15];            //. without size we can not initialize the string array
    puts("Enter a string "); //?puts add a "\n "on the end of string
    gets(str);
    //# size of str
    int size = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        size++;
        i++;
    }

    for (int j = 0, k = size - 1; j <= k; j++, k--)
    {
        char temp = str[j];

        str[j] = str[k];
        str[k] = temp;
    }
    puts(str);
    // scanf()

    return 0;
}