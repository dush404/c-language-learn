#include <stdio.h>
#include <stdbool.h>
int main()
{

    int arr[8] = {4, 5, 7, 6, 3, 5, 2, 1};
    int n = 8;
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    //?BUBBLE SORTING
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true; // array is not sorted yet
        for (int j = 0; j <= n - 2 - i; j++)

        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
}