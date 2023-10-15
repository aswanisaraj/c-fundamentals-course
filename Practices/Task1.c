/* Task 01: Find quadratic roots with two exceptions:
-
-
-
if first parameter (a) is zero, print equation is linear has only one root
if discriminant is negative, print roots are imaginary
otherwise print both roots */

#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    printf("Enter the values of A B C\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a == 0){
    printf("Equation is linear has only one root\n\n");
    }
    int discriminant;
    discriminant = (b*b) - (4*a*c);
    if(discriminant < 0){
        printf("roots are imaginary");

    }else 
    {   
    
        double Root1, Root2;
        Root1 = (-b + (double)sqrt(discriminant)) / (2 * a);
        Root2 = (-b - (double) sqrt(discriminant)) / (2 * a); 
        printf("Roots:%2.lf, %2.lf\n", Root1,Root2);

    }

    return 0;
}