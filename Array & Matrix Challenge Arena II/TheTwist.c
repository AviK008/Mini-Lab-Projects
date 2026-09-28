/*
Rotate an n x n square matrix by 90 degrees CLOCKWISE — IN PLACE. You are NOT allowed to create a second 2D array to build the rotated result; transform the original matrix directly.
*/

#include <stdio.h>
int main(){
    int n;

    printf("Enter the size of the matrix(n): ");
    scanf("%d", &n);

    int matrix[n][n];

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < n; i++){                //Transpose the matrix
        for (int j = i + 1; j < n; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for(int i = 0; i < n; i++){                //Reverse every row
        int start = 0;
        int end = n - 1;

        while(start < end){
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;

            start++;
            end--;
        }
    }

    for(int i = 0; i < n; i++){                 //Print rotated matrix
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}