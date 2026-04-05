#include <stdio.h>

struct Coordinate {
    int x, y;
};

int main() {
    struct Coordinate c1 = {5, 10};
    struct Coordinate c2;

    c2 = c1; // Valid: c2 now has same values as c1

    if(c1.x == c2.x && c1.y == c2.y) {
        printf("Coordinates are equal\n");
    }
    return 0;
}