#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    lastDigit = number % 10;

   
    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;

    
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);

    return 0;
}
