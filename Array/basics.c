#include <stdio.h>

/*
 * Notes on Arrays in C Programming
 *
 *? What is an Array?
 * An array is a data structure that stores a collection of elements of the same data type in contiguous memory locations. [1, 5, 7]
 * Think of it as a set of variables of the same type, grouped together under a single name.
 *
 *? Declaration of an Array
 * To declare an array, you need to specify the data type of the elements and the size of the array.
 * Syntax: data_type array_name[array_size];
 * Example: int marks[10]; // This declares an array named 'marks' that can hold 10 integers. [2, 4, 5]
 *
 *? Initialization of an Array
 * You can initialize an array at the time of declaration or later in the code.
 * 1. At declaration: int numbers[5] = {10, 20, 30, 40, 50}; [3]
 * 2. Without specifying size (compiler determines it): int numbers[] = {1, 2, 3, 4}; [3]
 * 3. Element by element:
 *    int age[3];
 *    age[0] = 25;
 *    age[1] = 30;
 *    age[2] = 35; [3]
 *
 *? Accessing Array Elements
 * Elements in an array are accessed using their index. The index of the first element is 0. [2, 5]
 * Example: To access the third element of the 'numbers' array, you would use numbers[2].
 *
 */

int main()
{
    int mark[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a mark : ");
        scanf("%d", &mark[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (mark[i] < 35)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}