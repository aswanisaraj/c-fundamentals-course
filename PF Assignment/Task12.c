#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 

    int i = 0;

    while (i < 10) {
        int num1 = rand() % 100; 
        int num2 = rand() % 100;
        int num3 = rand() % 100;

        
        printf("%d %d %d\n", num1, num2, num3);

        
        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 > num3) {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }

        
        printf("%d %d %d\n", num1, num2, num3);

        i++;
    }

    return 0;
}
