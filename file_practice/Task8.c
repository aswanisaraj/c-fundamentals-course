#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed for random number generation
    srand(time(NULL));

    // Run the loop 10 times
    for (int i = 0; i < 10; ++i) {
        // Generate a random number in the range of 1 to 100
        int randomNumber = rand() % 100 + 1;

        // Print the number in digits
        printf("Random Number (Digits): %d\n", randomNumber);

        // Print the number in words (up to 20)
        printf("Random Number (Words): ");

        // Check if the number is less than or equal to 20
        if (randomNumber <= 20) {
            switch (randomNumber) {
                case 1: printf("One "); break;
                case 2: printf("Two "); break;
                case 3: printf("Three "); break;
                case 4: printf("Four "); break;
                case 5: printf("Five "); break;
                case 6: printf("Six "); break;
                case 7: printf("Seven "); break;
                case 8: printf("Eight "); break;
                case 9: printf("Nine "); break;
                case 10: printf("Ten "); break;
                case 11: printf("Eleven "); break;
                case 12: printf("Twelve "); break;
                case 13: printf("Thirteen "); break;
                case 14: printf("Fourteen "); break;
                case 15: printf("Fifteen "); break;
                case 16: printf("Sixteen "); break;
                case 17: printf("Seventeen "); break;
                case 18: printf("Eighteen "); break;
                case 19: printf("Nineteen "); break;
                case 20: printf("Twenty "); break;
            }
        } else {
            // If greater than 20, print the tens part
            switch (randomNumber / 10 * 10) {
                case 30: printf("Thirty "); break;
                case 40: printf("Forty "); break;
                case 50: printf("Fifty "); break;
                case 60: printf("Sixty "); break;
                case 70: printf("Seventy "); break;
                case 80: printf("Eighty "); break;
                case 90: printf("Ninety "); break;
            }

            // Print the units part if it's not zero
            if (randomNumber % 10 != 0) {
                switch (randomNumber % 10) {
                    case 1: printf("One "); break;
                    case 2: printf("Two "); break;
                    case 3: printf("Three "); break;
                    case 4: printf("Four "); break;
                    case 5: printf("Five "); break;
                    case 6: printf("Six "); break;
                    case 7: printf("Seven "); break;
                    case 8: printf("Eight "); break;
                    case 9: printf("Nine "); break;
                }
            }
        }

        printf("\n\n");
    }

    return 0;
}
