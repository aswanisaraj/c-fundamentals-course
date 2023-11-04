/* Take input n from user and Print even numbers from 1 to n which are not divisible by 4 or 8? */

#include<stdio.h>
int main(){
    int n, i = 1;
    printf("Enter a Number: ");
    scanf(" %d", &n);
    while(i < n){
        if((i%2 == 0) && (i % 4 != 0 && i % 8!= 0 )){

        printf("%d ", i);
            
        }
        i++;
        
    }
    
    
    return 0;

}