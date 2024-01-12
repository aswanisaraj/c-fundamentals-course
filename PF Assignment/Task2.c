#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    
    int randomNum = (rand() % 10) + 1;

    int attempts = 3;
    int guess;

    printf("I have generated a random number between 1 and 10. You have 3 attempts to guess it.\n");

    printf("Attempt 1: Enter your guess: ");
    scanf("%d", &guess);
    if (guess == randomNum) {
        printf("Winner! You guessed the correct number: %d\n", randomNum);
    } else {
        printf("Incorrect guess. You have 2 more attempts.\n");

        printf("Attempt 2: Enter your guess: ");
        scanf("%d", &guess);
        if (guess == randomNum) {
            printf("Winner! You guessed the correct number: %d\n", randomNum);
        } else {
            printf("Incorrect guess. You have 1 more attempt.\n");

            printf("Attempt 3: Enter your guess: ");
            scanf("%d", &guess);
            if (guess == randomNum) {
                printf("Winner! You guessed the correct number: %d\n", randomNum);
            } else {
                printf("Loser! The correct number was: %d\n", randomNum);
            }
        }
    }

    return 0;
}
