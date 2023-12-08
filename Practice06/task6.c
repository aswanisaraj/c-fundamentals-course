/* Task 06: Generate ten set of three random numbers and print their average. Find and print, which of them has
highest average.
Sample Run:
80 90 100 90
70 50 60 60
...
Set 6 has highest average */


#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int i, j, sum, highest_average_set = 1;
    double average, highest_average = 0;

    for (i = 1; i <= 10; i++) {
        sum = 0;

        printf("\nSet: %d", i);
        for (j = 1; j <= 3; j++) {
            int num = rand() % 101;  
            sum += num;
            printf("%d ", num);
        }

        average = (double)sum / 3;
      

        if (average > highest_average) {
            highest_average = average;
            highest_average_set = i;
        }
    }

    printf("\nSet %d has the highest average: %.2lf\n", highest_average_set, highest_average);

    return 0;
}

