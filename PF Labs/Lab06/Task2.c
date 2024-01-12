#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int num1, num2, num3, temp;

    num1 = rand() % 5 + 1;
    num2 = rand() % 5 + 1;
    num3 = rand() % 5 + 1;
    

    printf("Original Numbers:%d\t%d\t%d\n", num1, num2, num3);

   
    if (num1 == num2 && num2 == num3) {
        printf("All are same\n");
    }else if (num1 == num2 && num2 != num3) {
        printf("Two are the same and one is different\n");
    }else if (num1 != num2 && num2 == num3) {
        printf("Two are the same and one is different\n");
    }else {
        printf("All are different\n");    
    }
    return 0;  
}


  



