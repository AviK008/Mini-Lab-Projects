/*
Print all elements of a 2D matrix (rows x cols, not necessarily square) in SPIRAL ORDER — starting from the top-left corner, moving right, 
then down, then left, then up, and spiraling inward until every element has been printed exactly once.
*/

#include <stdio.h>
int main(){
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;
    int first = 1;

    while(top <= bottom && left <= right){

        
        for(int j = left; j <= right; j++){           //Move right
            if(!first){
                printf(" ");
            }
            printf("%d", matrix[top][j]);
            first = 0;
        }
        top++;

        for(int i = top; i <= bottom; i++){         // Move down
            printf(" %d", matrix[i][right]);
        }
        right--;

        if(top <= bottom){                         //Move left
            for(int j = right; j >= left; j--){
                printf(" %d", matrix[bottom][j]);
            }
            bottom--;
        }

        if(left <= right){                        // Move up
            for(int i = bottom; i >= top; i--){
                printf(" %d", matrix[i][left]);
            }
            left++;
        }
    }
    printf("\n");
    return 0;
}