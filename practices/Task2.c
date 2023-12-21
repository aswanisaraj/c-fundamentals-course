/* Task 02: Generate a random number in range 1-10. Ask user to guess the number and give three chances. If
user guess correctly, print "Winner", otherwise print "You "Loser". In case user lose, print the generated number. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int Number, Guess1, Guess2, Guess3;
    
   
    srand(time(0));

    Number = rand() % 10 + 1; 
    printf("Guess the Number (between 1 and 10):\n");
    scanf("%d", &Guess1);

    if (Guess1 != Number) {
        printf("Try Again\n");
        scanf("%d", &Guess2);
        
        if (Guess2 != Number) {
            printf("Try Again\n");
            scanf("%d", &Guess3);
            
            if (Guess3 != Number) {
                printf("Sorry, you're out of tries. The correct number was %d.\n", Number);
            } else {
                printf("Correct Number\n");
            }
        } else {
            printf("Correct Number\n");
        }
    } else {
        printf("Correct Number\n");
    }

    return 0;
}

