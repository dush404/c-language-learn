#include <stdio.h>

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    // Row Sum
    for(int i = 0; i < 2; i++) {
        int rSum = 0;
        for(int j = 0; j < 3; j++) {
            rSum += a[i][j];
        }
        printf("Sum of Row %d: %d\n", i, rSum);
    }

    // Column Sum
    for(int j = 0; j < 3; j++) {
        int cSum = 0;
        for(int i = 0; i < 2; i++) {
            cSum += a[i][j];
        }
        printf("Sum of Column %d: %d\n", j, cSum);
    }

    return 0;
}