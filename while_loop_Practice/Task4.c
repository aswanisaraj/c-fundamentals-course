#include<stdio.h>
int main(){
    int  num, max = 0, i = 1;
    while(i <= 5){
        printf("Enter a number: ");
        scanf("%d",&num);
         if(num > max){
            max = num;
        }
    i++;
    } 
    printf("The max number is: %d\n",max);
    return 0;

}  
