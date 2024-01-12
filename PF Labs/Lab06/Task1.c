#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    

    int num1, num2, num3, num4, average;
    printf("Number1:");
    scanf("%d",&num1);

    printf("\nNumber2:");
    scanf("%d",&num2);

    printf("\nNumber3:");
    scanf("%d",&num3);

    printf("\nNumber4:");
    scanf("%d",&num4);

    average = (num1 + num2 + num3 + num4)/4;
    printf("Average:%d\n", average);

    if(num1 > average){  
    printf("First number is larger than average.\n");
    }
    else
        printf("First number is smaller than average.\n");
    
    if(num2 > average) { 
    printf("Second number is larger than average.\n");
    }
    else
        printf("First number is smaller than average.\n");
    if(num3 > average)  { 
    printf("Third number is larger than average.\n");
    }
    else
        printf("First number is smaller than average.\n");
    if(num3 > average) {
    printf("Fourth number is larger than average.\n");
    }
    else
       printf("First number is smaller than average.\n");
    return 0;



}
