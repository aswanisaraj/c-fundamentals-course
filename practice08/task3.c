
#include<stdio.h>
#include<ctype.h>
#include<math.h>

// Function to find the middle value among three numbers
void middle_value(int a, int b, int c) {
    int mid;

    // Check if b is the middle value
    if ((a <= b && b <= c) || (c <= b && b <= a)) {
        mid = b;
    } 
    // Check if a is the middle value
    else if ((b <= a && a <= c) || (c <= a && a <= b)) {
        mid = a;
    } 
    // If neither a nor b is the middle value, then c is the middle value
    else {
        mid = c;
    }

    printf("Middle Value: %d\n", mid);
}

// Function to calculate the average value of three numbers
int average_value(int a, int b, int c){
    float avg;
    avg =(a+b+c)/3.0;
    printf("%f\n",avg);
}
void exponent(int x, int y){
    int result;
    result= pow(x,y);
    printf("%d\n", result);
}
void next_vowel(char c){
    int asc = tolower(c);
        if(asc>=97&&asc<=100){
            printf("%c", 'e');
        } 
        else if(asc>=100&&asc<=104){
            printf("%c", 'i');
        }
         else if(asc>=105&&asc<=110){
            printf("%c", 'o');
        }
         else if(asc>=110&&asc<=116){
            printf("%c", 'u');
        }else{
            printf("%c", 'a');
        }printf("\n");
   
    }

 







int main() {
    middle_value(8, 7, 3);
    printf("\n\n");
    average_value(6,8,5);
    printf("\n\n");
    exponent(5,3);
    printf("\n\n");
    next_vowel('a');
    next_vowel('e');
    next_vowel('i');
    next_vowel('o');
    next_vowel('u');
    
    
    return 0;
}
