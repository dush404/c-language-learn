#include <stdio.h>

int main()
{
    int num[10]={1,2,3,4,5,6,7,8,9,0};
    int x=8;
    for (int i = 0; i < 9; i++)
    {
       if(num[i]== x){
        printf("%d is present in the array and it's index is  %d ",x,i);
        break;
       }

    }
     

    return 0;
}