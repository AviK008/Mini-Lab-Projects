// **Used AI for the understanding of the code.**

#include <stdio.h>
#include <stdlib.h>
int main() {
    char piece, color;
    int x1, y1, x2, y2, isCapture;
    int dx, dy;
    int valid = 0;

    printf("\n");
    printf("----USE ONLY CAPSLOCK FOR INPUT----\n");
    printf("\n");

    printf("Enter Piece Type (K/Q/R/B/N/P): ");
    scanf(" %c", &piece);

    printf("Enter Color (W/B): ");
    scanf(" %c", &color);

    printf("Enter Starting X Position: ");
    scanf("%d", &x1);

    printf("Enter Starting Y Position: ");
    scanf("%d", &y1);

    printf("Enter Ending X Position: ");
    scanf("%d", &x2);

    printf("Enter Ending Y Position: ");
    scanf("%d", &y2);

    printf("Is it a capture? (1 = Yes, 0 = No): ");
    scanf("%d", &isCapture);

    
    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 ||     // Check coordinates
        x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8){
        printf("Invalid coordinates\n");
        return 0;
    }

    if (x1 == x2 && y1 == y2){     // No movement 
        printf("Invalid move\n");
        return 0;
    }

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    switch (piece){    //Select Piece

        case 'K':
            if (dx <= 1 && dy <= 1){
                valid = 1;
            }
            break;

        case 'R':
            if (dx == 0 || dy == 0){
                valid = 1;
            }
            break;

        case 'B':
            if (dx == dy){
                valid = 1;
            }
            break;

        case 'Q':
            if (dx == 0 || dy == 0 || dx == dy){
                valid = 1;
            }
            break;

        case 'N':
            if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2)){
                valid = 1;
            }
            break;

        case 'P':
            if (color == 'W'){

                // One square diagonally forward
                if (isCapture == 1){
                    if (dx == 1 && y2 == y1 + 1){
                        valid = 1;
                    }
                }
                // Normal forward move 
                else {
                    if (dx == 0 && y2 == y1 + 1){
                        valid = 1;
                    }
                    // First move
                    else if (dx == 0 && y1 == 2 && y2 == y1 + 2){
                        valid = 1;
                    }
                }

            } 
            else if (color == 'B'){

                // One square diagonally forward
                if (isCapture == 1) {
                    if (dx == 1 && y2 == y1 - 1){
                        valid = 1;
                    }
                }
                // Normal forward move
                else {
                    if (dx == 0 && y2 == y1 - 1){
                        valid = 1;
                    }
                    // First move
                    else if (dx == 0 && y1 == 7 && y2 == y1 - 2){
                        valid = 1;
                    }
                }
            }
            break;

        default:
            printf("Invalid move\n");
            return 0;
    }

    if (valid == 1){
        printf("Valid Move\n");
    } 
    else{
        printf("Invalid Move\n");
    }
    return 0;
}