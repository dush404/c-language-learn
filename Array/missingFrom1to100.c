#include <stdio.h>

int main()
{
    // Example with range 1 to 10, one element missing
    int arr[9] = {1, 2, 3, 4, 6, 7, 8, 9, 10}; // 5 is missing
    int n = 10;

    // Expected sum of 1 to n: (n * (n+1)) / 2 [cite: 345, 346]
    int expectedSum = (n * (n + 1)) / 2;

    int actualSum = 0;
    for (int i = 0; i <= 8; i++)
    {
        actualSum = actualSum + arr[i];
    }

    printf("The missing element is: %d\n", expectedSum - actualSum);
    return 0;
}