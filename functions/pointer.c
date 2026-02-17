//? Pass by value
//? Pass by reference
//? reference value and actual value
//! Pointer actually store the address of the storage box (variable) --->("%p",&variable)
#include <stdio.h>
int main()
{

    int b = 5;
    int *p = &b; //. It store the address of variable 'b',&b--> means the address of 'b'
    *p = 7;      //. Here we actually change the value of 'b' by pointer ,from root value changed becoz we have the adrees so.
    int **q = &p;//? double pointer 
    printf("%p\n", &b); // address of "b"
    printf("%p\n", p);  // address of "b"
    printf("%p\n", &p); // address of p which storing the adrres of "b"
    printf("%d\n", *p); //. print the value what is store in a variable ,whose address is store in the 'p'
    printf("%d", **q);  //. print the address what is store in a variable ,whose address is store in the 'q',
    printf("%d", **q);  //! print the value what is store in a variable ,whose address's address is store in the 'q',
    return 0;
}

//. int* --> storage a inter adress
//. int** --> storage a pointer's address like &(int* a)