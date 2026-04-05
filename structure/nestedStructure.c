#include <stdio.h>

struct Address
{
    char city[20];
    int pin;
};

struct Person
{
    char name[20];
    struct Address addr; // Nested structure
};

int main()
{
    struct Person p1 = {"Amit", {"Bhubaneswar", 751001}};
    printf("%s lives in %s\n", p1.name, p1.addr.city);
    return 0;
}