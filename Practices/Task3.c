/* Task 03: Generate & Print three random number in range 1 to 10. Check, if they are at least two distance away
from each other print 'Ok', otherwise print 'Sorry'.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, num3;
    
    
    srand(time(0));
    
    
    num1 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;
    num3 = rand() % 10 + 1;
    
    printf("Random Numbers: %d, %d, %d\n", num1, num2, num3);
    
    if (abs(num1 - num2) >= 2 && abs(num1 - num3) >= 2 && abs(num2 - num3) >= 2) {
        printf("Ok\n");
    } else {
        printf("Sorry\n");
    }

    return 0;
}





