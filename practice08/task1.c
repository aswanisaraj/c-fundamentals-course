/* Tasks 1: Write functions:
A. to print first 50 positive even numbers
B. to print any character n times (function has two parameters character and count)
#function to print character c, n times
def print_char(c, n):
C. to print counting first n integers with distance d
#function to print n integers 1, 2, 3 or 1, 3, 5 etc., distance between integers is parameter d
def print_counting(n, d):
D. to find and return sum of first n integers
E. to find next vowel character
#function will run a loop and find next vowel character
def next_vowel(c): # if c is A To D, the result will be E. if c is E to H, the result will be I */


#include <stdio.h>
#include<ctype.h>
void positive_even(int n){
    int i;
	for (i = 1 ; i <= n ; i++){
        if(i%2==0){
            printf("%d ", i);

        }
    }printf("\n");
		
}
void print_character(char n, int count){
    int i;
	for (i = 1 ; i <= count ; i++){
        printf("%c ",n );
    }printf("\n");

 
}   void print_counting(int n,  int d){

    int i;
	for (i = 1 ; i <= n ; i+=d){
        printf("%d ",i);
    }printf("\n");


}   int  sum_of_first(int n){
    int i,sum=0;
	for (i = 1 ; i <= n ; i++){
        sum+=i;
        
    }
    printf("%d", sum);
    return sum;
    printf("\n");

}void next_vowel(char c){
    int asc = toupper(c);
        if(asc>=65&&asc<=69){
            printf("%c", 'E');
        } 
        else if(asc>=69&&asc<=73){
            printf("%c", 'I');
        }
         else if(asc>=73&&asc<=79){
            printf("%c", 'O');
        }
         else if(asc>=79&&asc<=85){
            printf("%c", 'U');
        }else{
            printf("%c", 'A');
        }printf("\n");
   
    }






int main(){
	
	positive_even(50);
    printf("\n\n");

    print_character('A', 50);

    printf("\n\n");

    print_counting(20, 3);
    printf("\n\n");

    sum_of_first(50);
    printf("\n\n");
   
    next_vowel('d');
    next_vowel('R');
    next_vowel('F');
    next_vowel('k');
    next_vowel('W');
    printf("\n\n");




	return 0;
}