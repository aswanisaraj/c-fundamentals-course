/* Task 01: Write a program, to declare an integer variable. Initialize it with a three-digit number. Display
the three digits in separate lines using integer division and remainder operators.
Sample Run:
Number: 358
First Digit: 3
358 / 100 = 3
Second Digit: 5
358 % 100 = 58, 58 / 10 = 5
Third Digit: 8
58 % 10 = 8 */

#include<stdio.h>
int main (){
    int Number, First_digit, Second_digit, Third_digit;
    Number = 987;
        printf("Number is :%d\n", Number);
        First_digit = Number /100;
        printf("First Digit :%d\n", First_digit);
        int x = Number % 100;
        Second_digit = x / 10;
        printf("Second Digit :%d\n", Second_digit);
        Third_digit = x % 10;
        printf("Third Digit :%d\n", Third_digit); 
   

    return 0;

}