#include <stdio.h>
#include <limits.h>

int main() {
    int matrix[2][2] = {{12, 45}, {7, 88}};
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(matrix[i][j] > max) max = matrix[i][j];
            if(matrix[i][j] < min) min = matrix[i][j];
        }
    }

    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}