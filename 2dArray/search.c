#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 6;
    bool found = false;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matrix[i][j] == target) {
                printf("Element %d found at row %d, column %d\n", target, i, j);
                found = true;
                break;
            }
        }
        if(found) break;
    }

    if(!found) printf("Element not found\n");
    return 0;
}