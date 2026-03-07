#include <stdio.h>

int main()
{
    int num[10]={2,3,4,5,6,1,3,2,5,4};
    int x=8;
    for (int i = 0; i < 9; i++)
    {
        for(int j = i+1;j<=9;j++){
            if(num[i]!==num[j]){
                printf("%d is the unique number",num[i]);
                break;
            }
        }
    }
     

    return 0;
}