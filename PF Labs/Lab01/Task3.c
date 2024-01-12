#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(0));

    int operand1, operand2, choice, userAnswer, actualResult;


    operand1 = rand() % 9 + 1;
    operand2 = rand() % 9 + 1;

    
    choice = rand() % 3 + 1;

    
    printf("%d\n%d\n", operand1, operand2);
    
    if (choice == 1) {
        actualResult = operand1 + operand2;
        printf("Enter sum: ");
    } else if (choice == 2) {
        actualResult = operand1 - operand2;
        printf("Enter difference: ");
    } else {
        actualResult = operand1 * operand2;
        printf("Enter product: ");
    }

    
    scanf("%d", &userAnswer);


    if (userAnswer == actualResult) {
        printf("Correct\n");
    } else {
        printf("Incorrect\n");
    }

    return 0;
}
