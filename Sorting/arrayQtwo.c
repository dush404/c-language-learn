#include <stdio.h>
// #Q.there given an target ,there given an array
// #,i have to check the sum of which element in array is eqaul to target (arr is already sorted)
int main()
{
    //.let taeget is 12
    int arr[8] = {4, 5, 7, 6, 3, 7, 2, 1};
    int i = 0;
    int j = 8 - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == 12)
        {
            printf("sum of %d and %d is ", arr[i], arr[j]);
            break;
        }
        else if (arr[i] + arr[j] > 12)
        {
            j--;
        }
        else if (arr[i] + arr[j] < 12)
        {
            i++;
        }
    }
    return 0;
}