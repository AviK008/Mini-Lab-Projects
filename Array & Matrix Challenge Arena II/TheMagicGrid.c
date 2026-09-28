/*
A square matrix is called a MAGIC SQUARE if the sum of every row, the sum of every column, AND the sum of both diagonals are all equal 
to each other. Write a program that reads an n x n matrix and prints whether it IS or IS NOT a magic square.
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

    int magicSum = 0;               // Magic sum = sum of first row
    for(int j = 0; j < n; j++){
        magicSum += matrix[0][j];
    }

    int isMagic = 1;

    for(int i = 0; i < n; i++){     // Check rows
        int sum = 0;

        for(int j = 0; j < n; j++){
            sum += matrix[i][j];
        }

        if(sum != magicSum){
            isMagic = 0;
            break;
        }
    }

    if(isMagic){                    // Check columns
        for(int j = 0; j < n; j++){
            int sum = 0;

            for(int i = 0; i < n; i++){
                sum += matrix[i][j];
            }

            if(sum != magicSum){
                isMagic = 0;
                break;
            }
        }
    }

    
    if(isMagic){                    // Check main diagonal
        int sum = 0;

        for(int i = 0; i < n; i++){
            sum += matrix[i][i];
        }

        if(sum != magicSum){
            isMagic = 0;
        }
    }

    
    if(isMagic){                    // Check secondary diagonal
        int sum = 0;

        for(int i = 0; i < n; i++){
            sum += matrix[i][n - 1 - i];
        }

        if(sum != magicSum){
            isMagic = 0;
        }
    }

    if(isMagic){
        printf("Yes, it is a Magic Square (Magic Sum = %d)\n", magicSum);
    } 
    else{
        printf("No, it is not a Magic Square\n");
    }
    return 0;
}