#include<stdio.h>
int main(){
    int i = 1, num, sum;
    while(i<=5){
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
        i++;
    }
    printf("Sum:%d ", sum);
    return 0;
}