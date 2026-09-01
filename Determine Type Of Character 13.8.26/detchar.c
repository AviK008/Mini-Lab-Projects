#include <stdio.h>
int main() {
    char ch;

    printf("Enter the Character: ");
    scanf("%c", &ch);
    printf("\n");
   
    if (ch >= 'A' && ch <= 'Z'){
        printf("Uppercase letter");
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("Lowercase letter");
    }
    else if (ch >= '0' && ch <= '9'){
        printf("Digit");
    }
    else if (ch == ' ' || ch == '\t' || ch == '\n'){
        printf("Whitespace");
    }
    else{
        printf("Special character");
    }
    return 0;
}