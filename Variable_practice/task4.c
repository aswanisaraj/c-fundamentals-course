
/*Task 4: Declare three character type variables. You may hardcode or input their values. The values should
be from capital alphabets. Find the difference between all three. Print results in following format:
Sample Run:
Difference between F and C is 3
Difference between C and I is -6
Difference between I and F is 2*/

#include<stdio.h>
int main(){
    char a,b,c;
    printf("Enter first letter value for a:");
    scanf(" %c",&a);
    printf("Enter 2nd letter value for b:");
    scanf(" %c",&b);
    printf("Enter 3rd letter value for c:");
    scanf(" %c",&c);
    int z = a - b;
    int y = b - c;
    int x = c - a;
    printf("Difference between a and b is %d\n",z );
    printf("Difference between a and b is %d\n",y );
    printf("Difference between a and b is %d\n",x );



    return 0;     


}
