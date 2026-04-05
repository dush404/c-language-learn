#include <stdio.h>

struct Book {
    char title[20];
    int price;
    int pages;
};

int main() {
    // Initializing in one line
    struct Book b1 = {"C Programming", 500, 400};

    printf("Book: %s, Price: %d, Pages: %d\n", b1.title, b1.price, b1.pages);
    return 0;
}