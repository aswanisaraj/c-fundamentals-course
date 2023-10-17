#include<stdio.h>
int main(){
    int  num, sum = 0, i = 0;
    while(i < 5){
        printf("Enter a number: ");
        scanf("%d",&num);
        sum +=num;
    i++;
    } 
    
    printf("Sum: %d\n",sum);
    return 0;

}  



