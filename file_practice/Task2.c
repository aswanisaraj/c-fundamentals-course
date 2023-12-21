/*Task 2. Input starting and ending number from user. Print numbers between them:
Sample Runs:
Starting Number: 2
Ending Number: 6
2 3 4 5 6*/
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter starting number: ");
    scanf("%d", &num1);
    printf("Enter ending number: ");
    scanf("%d", &num2);
    while(num1<=num2){
        printf("%d ",num1);
        num1++;

    }

    return 0;
}