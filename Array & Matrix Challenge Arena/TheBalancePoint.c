/*
Find the EQUILIBRIUM INDEX of an array — the index where the sum of all elements to its left is exactly equal to the sum of all elements to 
its right (the element at that index itself is not counted on either side). Print -1 if no such index exists.
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

    int totalSum = 0;

    for(i = 0; i < n; i++){
        totalSum += arr[i];                         // Calculate total sum of the array
    }

    int leftSum = 0;
    for(i = 0; i < n; i++){
        totalSum -= arr[i];                         // Update total sum to be the right sum
        if(leftSum == totalSum){                    // Check if left sum equals right sum
            printf("Equilibrium Index = %d\n", i);
            return 0;
        }
        leftSum += arr[i];                          // Update left sum
    }

    printf("-1.\n");
    return 0;
}