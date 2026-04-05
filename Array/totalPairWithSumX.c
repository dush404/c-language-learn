#include <stdio.h>

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 12;
    int totalPairs = 0;

    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        { // j starts after i to avoid repetition
            if (arr[i] + arr[j] == target)
            {
                totalPairs++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }

    printf("Total Pairs: %d\n", totalPairs);
    return 0;
}