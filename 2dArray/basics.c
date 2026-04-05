#include <stdio.h>

int main() {
    // 1. Declaration: 3 rows and 2 columns
    // { {row0}, {row1}, {row2} }
    int arr[3][2] = {{10, 20}, {30, 40}, {50, 60}};

    // 2. Accessing elements
    // Element at row 1, column 0 is 30
    printf("Element at [1][0]: %d\n", arr[1][0]);

    // 3. Changing a value
    arr[2][1] = 100; 
    printf("Updated [2][1]: %d\n", arr[2][1]);

    return 0;
}