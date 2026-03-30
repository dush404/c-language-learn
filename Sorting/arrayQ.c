#include <stdio.h>

int main()
{ //.normal check
  // int arr[8] = {4, 5, 7, 6, 3, 7, 2, 1};
  // for (int i = 0; i < 8-1; i++)
  // {
  //     for (int j = i + 1; j < 8; j++)
  //     {
  //         if (arr[i] == arr[j])
  //         {
  //             printf("%d have a duplicate", arr[i]);
  //             break;
  //         }
  //     }
  // }
  //.time complex-->
  // int arr[8] = {1, 2, 3, 4, 5, 6, 7, 3};
  // int visitedArr[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  // for (int i = 0; i < 8; i++)
  // {
  //     if (visitedArr[arr[i]] == 0)
  //     {
  //         visitedArr[arr[i]] = 1;
  //     }
  //     else if (visitedArr[arr[i]] == 1)
  //     {
  //         printf("%d have a duplicate", arr[i]);
  //     }
  // }
  //.time and space complexity

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 3};
    int sum = (8 * (8 - 1)) / 2;
    int arrSum = 0;
    for (int i = 0; i < 8; i++)
    {
        arrSum = arrSum + arr[i];
    }
    int dublicateNum = arrSum - sum;
    printf("%d have a dublicate", dublicateNum);
    return 0;
}