#include <stdio.h>

struct Employee {
    int id;
    int salary;
};

int main() {
    struct Employee company[3]; // Array of 3 structures

    for(int i = 0; i < 3; i++) {
        company[i].id = i + 1;
        company[i].salary = 20000 + (i * 5000);
        printf("ID: %d, Salary: %d\n", company[i].id, company[i].salary);
    }
    return 0;
}