/*
#include<stdio.h>

int main() {
    for (int n = 0; n < 100; n = n +2) {
        printf("%d ", n);
    }
      printf("\n");
    return 0;
}
*/



/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int largest = 0;
    int largestPosition = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate and print the random numbers in a single line
    printf("Random numbers: ");
    for (int i = 0; i < 10; i++) {
        int randomNumber = rand();
        printf("%d ", randomNumber);

        // Check if the current number is larger than the previous largest
        if (randomNumber > largest) {
            largest = randomNumber;
            largestPosition = i + 1;  // Position is 1-indexed
        }
    }

    printf("\n");
    printf("Largest number is at position: %d\n", largestPosition);

    return 0;
}
*/




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int evenCount = 0;
    int oddCount = 0;
    int evenSum = 0;
    int oddSum = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate and print the random numbers in a single line
    printf("Random numbers: ");
    for (int i = 0; i < 10; i++) {
        int randomNumber = rand() % 10;
        printf("%d ", randomNumber);

        // Check if the number is even or odd
        if (randomNumber % 2 == 0) {
            evenCount++;
            evenSum += randomNumber;
        } else {
            oddCount++;
            oddSum += randomNumber;
        }
    }

    printf("\n");

    // Calculate the average of even and odd numbers
    float evenAverage = (evenCount > 0) ? (float)evenSum / evenCount : 0;
    float oddAverage = (oddCount > 0) ? (float)oddSum / oddCount : 0;

    // Print the average of even and odd numbers
    printf("Average of even numbers: %.2f\n", evenAverage);
    printf("Average of odd numbers: %.2f\n", oddAverage);

    // Determine which average is larger
    if (evenAverage > oddAverage) {
        printf("Even numbers have a larger average.\n");
    } else if (evenAverage < oddAverage) {
        printf("Odd numbers have a larger average.\n");
    } else {
        printf("Even and odd numbers have the same average.\n");
    }

    return 0;
}
