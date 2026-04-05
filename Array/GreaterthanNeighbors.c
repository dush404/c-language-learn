#include <stdio.h>

int main() {
    int arr[5] = {1, 3, 2, 5, 4};
    
    for(int i = 1; i < 4; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            printf("Peak Element: %d at index %d\n", arr[i], i);
        }
    }
    return 0;
}