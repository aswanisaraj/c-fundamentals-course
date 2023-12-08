/*Task 01: Run loop 10 times. Generate two random numbers. Check & Print first random number is larger or
second random number is larger.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i;
    srand(time(0));
    int num1,num2;
    
    for(i=1;i<=10;i++){
       
        num1 =rand()%100;
        num2 =rand()%100;
        printf("Two Random numbers are: %d %d ", num1, num2);
        printf("\n");
        if(num1>num2){
            printf("First Number is Larger.......");
        }else
            printf("Second Number is Larger.......");


        printf("\n\n");


        
    }
   


    return 0;
}


























/*

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; ++i) {
        if (i == 4) {
            
            continue;
            
        }
        printf("%d ", i);
    }

    return 0;
}
*/