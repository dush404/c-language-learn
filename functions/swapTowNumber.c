#include <stdio.h>

int swap (a,b){
     int temp = a;
    a = b;
    b = temp;
    return ;
}
int main()
{
    int a;
    printf("enter a : ");
    scanf("%d", &a);
    int b;
    printf("enter b : ");
    scanf("%d", &b);
    //? swapping using a third variable
    // int temp = a;
    // a = b;
    // b = temp;

    //?Without using third variable
    // a = a + b;
    // b = a - b;
    // a = a - b;
    swap(a,b); //! No swapping in code becoz we pass a and b by value
    //! so in fn there extra two variable a & b and there only the value of the them is swap not in the main code 
    

    printf("the value of a is %d\n", a);
    printf("the value of b is %d", b);

    return 0;
}