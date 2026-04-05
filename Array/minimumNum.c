#include <stdio.h>

int main() {
    int arr[5] = {20, 10, 45, 5, 12};
    int min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Minimum element is: %d\n", min);
    return 0;
}