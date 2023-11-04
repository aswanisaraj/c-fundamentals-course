/* Task 4. Generate four random numbers in range 1 to 10 and continue generating until all
numbers are in order.Print numbers each time and also count how many times loop run.  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    srand(time(0));

    int num1, num2, num3, num4;
    int count = 0;

    num1 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;
    num3 = rand() % 10 + 1;
    num4 = rand() % 10 + 1;

    
    while (!(num1 <= num2 && num2 <= num3 && num3 <= num4)) {
        
        num1 = rand() % 10 + 1;
        num2 = rand() % 10 + 1;
        num3 = rand() % 10 + 1;
        num4 = rand() % 10 + 1;

        count++;
    }
    printf("%d %d %d %d\n", num1, num2, num3, num4);
    printf("Numbers in ascending order after %d attempts:\n", count);
    

    return 0;
}
