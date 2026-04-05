#include <stdio.h>

int main() {
    int r = 2, c = 3;
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int trans[3][2];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            trans[j][i] = a[i][j];
        }
    }

    printf("Transposed Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}