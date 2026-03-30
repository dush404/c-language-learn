#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
int main()
{

    int arr[8] = {4, 5, 7, 6, 3, 5, 2, 1};
    int n = 8;
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    //?INSERTION SORTING
    for (int i = 0; i < n - 1; i++) //.n-1 passes
    {
        int j = i + 1;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
}