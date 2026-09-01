#include <stdio.h>
int main(){
    int n1;
     
    printf("Enter the number: ");
    scanf("%d", &n1);

    if(
        n1 >= 0 && n1 <= 9 ||
        n1 >= 100 && n1 <= 999 ||
        n1 >= 10000 && n1 <= 99999 ||
        n1 >= 1000000 && n1 <= 9999999 ||
        n1 >= 100000000 && n1 <= 999999999){
            printf("The number of digits is odd");
    }
    else if(n1 >= 10 && n1 <= 99 ||
            n1 >= 1000 && n1 <= 9999 ||
            n1 >= 100000 && n1 <= 999999 ||
            n1 >= 10000000 && n1 <= 99999999){
                printf("The number of digits is even");
    }
    else{
        printf("Invalid Number");
    }
    return 0;
}