#include <stdio.h>

struct Example {
    char a;    // 1 byte
    int b;     // 4 bytes
    char c;    // 1 byte
};

int main() {
    struct Example ex;
    // Expected: 1+4+1 = 6. Actual: Usually 12 due to padding.
    printf("Size of struct: %lu bytes\n", sizeof(ex));
    return 0;
}