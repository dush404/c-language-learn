#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data d;
    d.i = 10;
    d.f = 22.5; // This overwrites the integer 'i'

    printf("Size of union: %lu\n", sizeof(d)); // Size of the largest member
    printf("Float value: %.1f\n", d.f);
    return 0;
}