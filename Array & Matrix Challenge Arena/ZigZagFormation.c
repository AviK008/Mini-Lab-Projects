/*
Rearrange the elements of an array into a "wave" pattern such that arr[0] <= arr[1] >= arr[2] <= arr[3] >= arr[4] ... and 
so on — alternating between valleys and peaks. Do this in place (don't use a second array).
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

    for(int i = 0; i < n - 1; i++){
        if(i % 2 == 0){                       // Even index
            if(arr[i] > arr[i + 1]){
                int temp = arr[i];           // Swap arr[i] and arr[i + 1]
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        } 
        else{                               // Odd index
            if(arr[i] < arr[i + 1]){        // Swap arr[i] and arr[i + 1]
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}