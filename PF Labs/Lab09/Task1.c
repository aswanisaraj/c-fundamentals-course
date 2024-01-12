/* Task 1: Write a program to input two integers that is starting & ending number. Print numbers in ascending order in
single line. Print numbers in descending order in single line. Print square of numbers from starting integer to ending
integer in single line. Print cube of numbers from starting integer to ending integer:
Sample Run:
starting number: 3
ending number: 7
Ascending Order: 3 4 5 6 7
Descending Order: 7 6 5 4 3
Squares: 9 16 25 36 49
Cube: 27 256 125 216 343 */

#include<stdio.h>
int main(){
    int i = 0, S_num, E_num;
    
    printf("Starting Number: ");
    scanf("%d", &S_num);
    printf("Ending Number:");
    scanf("%d", &E_num);
    
        int N1 = E_num;
    i = S_num;
    printf("Ascending Order: ");
    while(i <= N1){
        printf("%d ", i);
    i++;
    }



    printf("\nDescending Order: " );
    while(N1>= S_num){
      printf("%d ",N1);

     N1 --;
    } 



    i = S_num;
    printf("\nSquare:  ");
    while(i <= E_num){
    printf("%d ", i*i);
    i++;
    }
    
    
    i = S_num;
    printf("\nCube: ");  
    while(i <= E_num){
    printf("%d ", (i*i*i));
    i++;
    }

   return 0;
}