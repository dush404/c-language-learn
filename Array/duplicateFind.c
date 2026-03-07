#include <stdio.h>

int main()
{
    int num[10]={1,2,3,4,5,6,7,8,5,0};
    int x=8;
    for (int i = 0; i < 9; i++)
    {
        for(int j = i+1;j<=9;j++){
            if(num[i]==num[j]){
                printf("%d is the duplicate number",num[i]);
                break;
            }
        }
    }
     

    return 0;
}