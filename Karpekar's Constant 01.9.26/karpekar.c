#include <stdio.h>
int main(){
    int num, choice;
    int d1, d2, d3, d4;
    int a, b, c, d;
    int ascending, descending;
    int temp, step = 0;

    while(1){
        printf("Enter A 4-Digit Number: ");
        scanf("%d", &num);

        if(num<1000 || num>9999){       // Check If It's A 4-Digit Number
            printf("Error\n");
            continue;
        }

        d1 = num / 1000;        // Check For Repeating Digits
        d2 = (num / 100) % 10;
        d3 = (num / 10) % 10;
        d4 = num % 10;

        if(d1 == d2 && d2 == d3 && d3 == d4){
            printf("Error\n");
            continue;
        }

        printf("Karpekar's Process: \n\n");

        while(num != 6174){
            a = num / 1000;        
            b = (num / 100) % 10;
            c = (num / 10) % 10;
            d = num % 10;

            // a = d1;     // Storing the digits to arrange it in acsending & descending order.
            // b = d2;
            // c = d3;
            // d = d4;

            if(a > b){      // Comparing digits to arrange in acsending & descending order
                temp = a;
                a = b;
                b = temp;
            }
            if(c > d){
                temp = c;
                c = d;
                d = temp;
            }
            if(a > c){
                temp = a;
                a = c;
                c = temp;
            }
            if (b > d){
                temp = b;
                b = d;
                d = temp;
            }
            if(b > c){
                temp = b;
                b = c;
                c = temp;
            }

            ascending = a * 1000 + b * 100 + c * 10 + d;
            descending = d * 1000 + c * 100 + b * 10 + a;

            printf("Ascending Order: %d\n", ascending);
            printf("Descending Order: %d\n", descending);

            num = descending - ascending;   // A - B
            
            step++;

            printf("A-B: %d\n\n", num);

        }

        printf("\nKarpekar's Constant Achieved In %d Steps!\n", step);

        
        // Asking user what they want to do after achieving karpekar's constant
        printf("\nWhat would you like to do?\n");
        printf("1. Try Again\n");
        printf("2. Exit\n");
        printf("Enter your choice(1/2): ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nStarting Again...\n");
                break;

            case 2:
                printf("Program Ended, Have A Good Day!\n");
                return 0;

            default:
                printf("Invalid choice, Program ended.\n");
                return 0;
        }
    }
    return 0;
}