/*
Given an array containing some zeros, move ALL zeros to the end of the array while keeping the RELATIVE ORDER of the non-zero 
elements unchanged. Do this in place, without using any extra/second array.
*/

#include <stdio.h>
int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int count = 0;                      // Count of non-zero elements

    for(i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[count++] = arr[i];      // Move non-zero element to the front
        }
    }

    while(count < n){
        arr[count++] = 0;               // Fill remaining positions with zeros
    }

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}