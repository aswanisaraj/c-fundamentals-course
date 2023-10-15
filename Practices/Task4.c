/* Task 04: Input four random numbers in range 1-100000. Print them. Sort these numbers using one extra
variable and conditions. Print them in ascending order, write a single print statement at the end only. */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, num3, num4, temp;
    
    
    srand(time(0));
    
    
    num1 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;
    num3 = rand() % 10 + 1;
    num3 = rand() % 10 + 1;
    printf("Original numbers: %d, %d, %d, %d\n", num1, num2, num3, num4);

    if(num1 > num2) {temp = num1, num1 = num2, num2 = temp;}
    if(num2 > num3) {temp = num2, num2 = num3, num3 = temp;}
    if(num3 > num4) {temp = num3, num3 = num4, num4 = temp;}
    if(num1 > num2) {temp = num1, num1 = num2, num2 = temp;}
    if(num2 > num3) {temp = num2, num2 = num3, num3 = temp;}
    if(num1 > num2) {temp = num1, num1 = num2, num2 = temp;}

    printf("Sorted numbers: %d, %d, %d, %d\n", num1, num2, num3, num4);





    return 0;
}