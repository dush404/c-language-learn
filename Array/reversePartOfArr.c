#include <stdio.h>

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int start = 1; // Index 1 (Value: 2)
    int end = 4;   // Index 4 (Value: 5)

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < 7; i++)
        printf("%d ", arr[i]);
    return 0;
}