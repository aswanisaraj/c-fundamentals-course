/* Task 7: Run loop 10 times. Generate three random numbers. In first line, print them as generated. In next line,
print them, in ascending order. You may use any method to arrange them. */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    for(int i=1; i<=10; i++){
        int num1 = rand() %100; 
        int num2 = rand() %100; 
        int num3 = rand() %100; 
        printf("Generated: %d %d %d ", num1, num2, num3);
        printf("\n");
      
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
    
    } 
            

    return 0;
}