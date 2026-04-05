#include <stdio.h>

int main() {
    int arr[6] = {1, 3, 5, 7, 9, 11};
    int sumEven = 0;  
    int sumOdd = 0;  

    for(int i = 0; i <= 5; i++) {
        if(i % 2 == 0) {
            sumEven = sumEven + arr[i];  
        } else {
            sumOdd = sumOdd + arr[i];  
        }
    }

    printf("Difference: %d\n", sumEven - sumOdd); 
    return 0;
}