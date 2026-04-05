#include <stdio.h>

int main() {
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int b[7]; // Extra array [cite: 257]

    for(int i = 0; i <= 6; i++) {
        b[i] = a[6 - i]; // Simple math to reverse [cite: 261, 262]
    }

    printf("Copied Array: ");
    for(int i = 0; i <= 6; i++) {
        printf("%d ", b[i]);  
    }
    return 0;
}