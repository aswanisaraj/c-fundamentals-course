#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int main() {
    srand(time(0));

    int num1, num2, num3, num4, temp;

    num1 = rand() % 5 + 1;
    num2 = rand() % 5 + 1;
    num3 = rand() % 5 + 1;
    num4 = rand() % 5 + 1;

    printf("Original Numbers:%d\t%d\t%d\t%d\n", num1, num2, num3, num4);

    
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num3 > num4) {
        temp = num3;
        num3 = num4;
        num4 = temp;
    }
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num1 == num4) {
        printf("All are same\n");
    } else if (num1 == num2 && num2 == num3) {
        printf("Three are the same and one is different\n");
    } else if (num1 == num2 || num2 == num3 || num3 == num4) {
        printf("Two are the same and two are different\n");
    } else {
        printf("All are different\n");
    }

    return 0;
}

