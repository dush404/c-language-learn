#include <stdio.h>
int factorial(int a)
{   
    //?Manual method
    // int fact = 1;
    // for (int i = 2; i <= a; i++)
    // {
    //     fact = fact * i;
    // }
    // return fact;
    //? RECURSION METHODE 
    if(a == 1 || a == 0) return 1 ; //. when a == 1 ,this line act as "break" and return 1 .
    int reAns = a*factorial(a-1);//.when a ==1 this can not run 
    return reAns ;

}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    int fact = factorial(a);
    printf("%d", fact);
    return 0;
}