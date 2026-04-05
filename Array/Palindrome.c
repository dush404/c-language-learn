#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    int n = 5;
    bool isPalindrome = true;
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("Array is a Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}