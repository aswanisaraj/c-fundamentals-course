#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number within a given range
int generateRandomNumber(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate random numbers between 5 and 10
    int numCount1 = 3;
    int i, num;
    int sum1 = 0;
    for (i = 0; i < numCount1; i++) {
        num = generateRandomNumber(5, 10);
        printf("Random number %d: %d\n", i + 1, num);
        sum1 += num;
    }
    double average1 = (double)sum1 / numCount1;
    printf("Average of random numbers between 5 and 10: %.2f\n", average1);

    // Generate additional random numbers within a given range
    int numCount2 = 3;
    int rangeMin = 1;
    int rangeMax = 20;
    int sum2 = 0;
    for (i = 0; i < numCount2; i++) {
        num = generateRandomNumber(rangeMin, rangeMax);
        printf("Random number %d: %d\n", i + 1, num);
        sum2 += num;
    }
    double average2 = (double)sum2 / numCount2;
    printf("Average of random numbers between %d and %d: %.2f\n", rangeMin, rangeMax, average2);

    return 0;
}