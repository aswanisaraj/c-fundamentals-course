#include <stdio.h>

int main() {
    char character1, character2;

    printf("Enter the first character: ");
    scanf(" %c", &character1);

    printf("Enter the second character: ");
    scanf(" %c", &character2);

    int matchingBits = 0;
    
    for (int i = 0; i < 8; i++) { 
        if (((character1 >> i) & 1) == ((character2 >> i) & 1)) {
            matchingBits++;
        }
    }

    printf("Number of matching bits between '%c' and '%c': %d\n", character1, character2, matchingBits);

    return 0;
}














 









































/*
#include <stdio.h>

int main() {
    char character;
    printf("Input a character: ");
    scanf("%c", &character);
    printf("ASCII value for '%c' is: %d\n\n", character, character);

    return 0;
}
*/