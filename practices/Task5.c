/* Task 05: Generate two random numbers in range 1 to 5. Check, if they are same print " Numbers are
exactly equal ", otherwise if their absolute difference is less than equal one, print " Numbers are almost
equal ", otherwise print " Numbers are not equal": */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    srand(time(0));

    int num1 = rand() % 5 + 1;
    int num2 = rand() % 5 + 1;

    printf("Random Numbers: %d, %d\n", num1, num2);

    if (num1 == num2) {
        printf("Numbers are exactly equal\n");
    } else if ((num1 - num2) <= 1) {
        printf("Numbers are almost equal\n");
    } else {
        printf("Numbers are not equal\n");
    }

    return 0;
}
