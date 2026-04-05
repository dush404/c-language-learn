#include <stdio.h>

int main()
{
    int arr[7] = {1, 2, 3, 4, 4, 2, 1};
    int max = arr[0];

    // Step 1: Find Max
    for (int i = 1; i <= 6; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    // Step 2: Find Second Max
    int smax = -1;
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] != max)
        { // Should not be equal to the max
            if (smax < arr[i])
                smax = arr[i];
        }
    }

    printf("Second Largest: %d\n", smax);
    return 0;
}
//.optimized one pass

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[5] = {1, 4, 4, 3, 2};
    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            smax = max; // Old max becomes second max [cite: 238]
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }

    printf("Second Largest: %d\n", smax);
    return 0;
}