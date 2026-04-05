#include <stdio.h>

int main() {
    int arr[6] = {1, 0, 2, 0, 3, 0};
    int n = 6;
    int temp[6];
    int k = 0;

    // First, copy non-zeros
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp[k] = arr[i];
            k++;
        }
    }

    // Then, fill remaining with zeros
    while(k < n) {
        temp[k] = 0;
        k++;
    }

    for(int i = 0; i < n; i++) printf("%d ", temp[i]);
    return 0;
}