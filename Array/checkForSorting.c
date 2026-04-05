#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[5] = {1, 2, 5, 8, 10};
    bool isSorted = true;

    for(int i = 1; i < 5; i++) {
        if(arr[i] < arr[i-1]) { // If current is smaller than previous
            isSorted = false;
            break;
        }
    }

    if(isSorted) printf("Array is sorted\n");
    else printf("Array is not sorted\n");

    return 0;
}