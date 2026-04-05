#include <stdio.h>

struct Data {
    char c;   // 1 byte
    int i;    // 4 bytes
};

int main() {
    struct Data d;
    // Might print 8 instead of 5 due to padding
    printf("Size of struct: %lu bytes\n", sizeof(d));
    return 0;
}