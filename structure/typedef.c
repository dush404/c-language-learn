#include <stdio.h>

typedef struct Computer {
    char brand[20];
    int ram;
} PC; // PC is now an alias for 'struct Computer'

int main() {
    PC myLaptop = {"Dell", 16};
    printf("Brand: %s, RAM: %dGB\n", myLaptop.brand, myLaptop.ram);
    return 0;
}