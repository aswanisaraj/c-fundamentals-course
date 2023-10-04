#include<stdio.h>
int main(){
  int number = 489;
  int first_digit, second_digit, third_digit;
  
  
  first_digit = number%10;
  int remain_digit = number/10;
  second_digit = remain_digit%10;
  third_digit = remain_digit/10;
  printf("number: 489\n");
  printf("Reverse Number: %d%d%d\n",first_digit, second_digit,third_digit);

  return 0;
}