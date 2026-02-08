#include <stdio.h>
#include <math.h>

int main()
{

    //  printf("hellow");
    //  scanf("%d",4);
    //  sqrt(49);
    //? function protoype
    //.GENERALLY WE DEFIND THE FUNCTION ABOVE THE MAIN FUNCTION AND CALL THEM BELLOW INSIDE MAIN FUNCTION BUT ..
    //. WE ALSO DEFINE THEM BELOW THE CALLING CODE LIKE HERE
    char dush(); // this line is for function prototype
    dush();
    return 0;
}
char dush()
{
    char name = printf("My name is Dush");
    return name;
}