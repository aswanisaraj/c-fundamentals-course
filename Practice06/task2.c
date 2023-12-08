/* Task 02: Run loop 10 times. Generate three random numbers. In first line, print them as generated. In next line,
print them, in ascending order. You may use any method to arrange them. */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i;
    srand(time(0));
    int num1,num2, num3;
    
    for(i=1;i<=10;i++){
       
        num1 =rand()%100;
        num2 =rand()%100;
        num3 =rand()%100;
        printf("\nThree Random numbers are: %d %d %d", num1, num2, num3);
        if(num1>num2){
            int temp;
            temp=num1;  //num1 9,   num2  8   
            num1=num2;
            num2=temp;
        }if(num2>num3){
            int temp;
            temp=num2;
            num2=num3;
            num3=temp;
        }if(num1>num2){
            int temp;
            temp=num1;  //num1 9,   num2  8   
            num1=num2;
            num2=temp;
        }
        printf("\nAsending Random numbers are: %d %d %d\n", num1, num2, num3);


    }   
    return 0;

}