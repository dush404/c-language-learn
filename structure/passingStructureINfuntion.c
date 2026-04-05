#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

void printArea(struct Rectangle r) {
    printf("Area: %d\n", r.length * r.width);
}

int main() {
    struct Rectangle myRect = {10, 5};
    printArea(myRect);
    return 0;
}