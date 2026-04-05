#include <stdio.h>
#include <string.h>

// Defining the structure
struct Student {
    int roll;
    float gpa;
    char name[20];
};

int main() {
    // Declaring a structure variable
    struct Student s1;
    
    // Initializing values
    s1.roll = 101;
    s1.gpa = 8.5;
    strcpy(s1.name, "Saarthak");

    printf("Name: %s, Roll: %d, GPA: %.1f\n", s1.name, s1.roll, s1.gpa);
    return 0;
}