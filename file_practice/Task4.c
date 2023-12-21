#include<stdio.h>
int main() {

   int i = 1, num, max = 0;
    while(i<=5){
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num > max){
            max = num;
        }
    i++;
    }
        printf("Max:%d ", max);
    
    return 0;
}





