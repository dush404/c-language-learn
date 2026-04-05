#include <stdio.h>

// Helper function to reverse a part of the array [cite: 271, 272]
void reversePart(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;
    k = k % n; // If k is larger than n [cite: 292, 297]

    reversePart(arr, 0, n - 1);     // Step 1: Reverse all [cite: 293, 298]
    reversePart(arr, 0, k - 1);     // Step 2: Reverse first k [cite: 293, 299]
    reversePart(arr, k, n - 1);     // Step 3: Reverse the rest [cite: 293, 299]

    for(int i = 0; i < n; i++) printf("%d ", arr[i]); 
    return 0;
}
//.alternate find and write 