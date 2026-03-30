#include <stdio.h>

int main()
{
    int n;
    char arr[] = "hey dush what are you doing \0"; // # although we can remove "\0",it will work perfectly,auto added \0 .
    //.size will extra +1,like char arr[acctual + 1]
    // char arr[] ={'h','i'} ;//# although we can not remove "\0",size not increase
    // char arr[8] ={hi} ;//? we can also write size of arr extra
    //? but then also "\0" is auto added after last input char ,here after i
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == 'd')
            printf("%c", arr[i]);
        i++;
    }

    return 0;
}