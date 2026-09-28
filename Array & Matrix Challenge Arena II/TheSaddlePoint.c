/*
Find a SADDLE POINT in a matrix — an element that is the SMALLEST value in its row AND, at the same time, the LARGEST value in its column. 
A matrix may or may not have one; if it doesn't, print "No Saddle Point".
*/

#include <stdio.h>
int main(){
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int found = 0;

    for(int i = 0; i < rows; i++){                    // Check every row

        int minCol = 0;                              // Find smallest element in this row  

        for(int j = 1; j < cols; j++){
            if (matrix[i][j] < matrix[i][minCol]) {
                minCol = j;
            }
        }

        int isSaddle = 1;                           // Check if this smallest element is the largest in its column

        for(int k = 0; k < rows; k++){
            if(matrix[k][minCol] > matrix[i][minCol]){
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle){
            printf("Saddle Point = %d (Row %d, Column %d)\n",
                   matrix[i][minCol], i + 1, minCol + 1);

            found = 1;
            break;
        }
    }

    if(!found){
        printf("No Saddle Point\n");
    }
    return 0;
}