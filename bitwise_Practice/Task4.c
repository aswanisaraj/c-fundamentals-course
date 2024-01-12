/* Task 04: Input a character and bit position from user and check, whether the bit is on or off
Sample Run:
Enter Character:'E'
Enter Bit Number:6
The bit number 6 is off in E
Enter Character:'E'
Enter Bit Number:1
The bit number 1 is on in E 
#include <stdio.h>

int main() {
    char a;
    int b;
    int i = 0;
    
    
    printf("Enter Character: ");
    scanf(" %c", &a); 
    printf("Enter bit number: ");
    scanf(" %d", &b);
    
    
    if ((a & (b << i)) == 1) {
        printf("The bit number %d in %c is On. ",b, a);
    }   else {
        printf("The bit number %d in %c is off. ",b, a);
          
    }
    return 0;


}


*/


#include<stdio.h>
int main(){
    int a, b, answer;
    int i = 1;
   
        if(i == 1){
            printf("1) Addition:\n ");
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter first number: ");
            scanf("%d", &b);
            answer = a + b;
            printf("Answer of %d and %d is: %d ", a, b, answer);
            
            
            
        }
        
    
    return 0;
}