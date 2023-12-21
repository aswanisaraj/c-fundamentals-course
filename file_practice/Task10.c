/* Task 10: Run loop 10 times. Generate random number. Print number. Compute and print sum of even numbers
and sum of odd numbers. */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num,  E_sum= 0, O_sum = 0;
    for(int i=1; i<=10;i++){
        num = rand() % 100;
        printf(" %d\n", num);
        if(num % 2!=0){
            O_sum+=num;
        }else{
            E_sum+=num;
        }       
    } 
   
    printf("Sum of Even Numbers:%d\n", E_sum);
    printf("Sum of Odd Numbers: %d\n", O_sum);

    return 0;
}