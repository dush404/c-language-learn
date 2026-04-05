#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int x = 4;
    int count = 0;

    for(int i = 0; i <= 5; i++) {
        if(arr[i] > x) {
            count++;
        }
    }

    printf("Number of elements greater than %d is %d\n", x, count);
    return 0;
}