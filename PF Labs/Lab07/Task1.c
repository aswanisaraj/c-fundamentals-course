/* ask 1: Write a program to find the roots of a quadratic equation using the formula:
−𝑏±√𝑏2 −4𝑎𝑐
2𝑎
. Prompt the user for
the input "a," accepting only non-zero values. Continuously request the user to re-enter the value until a non-zero
value is provided. Additionally, check if the discriminant (𝑏 2 − 4𝑎𝑐 ) is negative. If it is negative, print "Sorry, the roots
are imaginary." If the discriminant is non-negative, print both roots on separate lines. See sample output:
A: 0
Enter non-zero valu:
A: 0
Enter non-zero valu:
A: -1
B: 1
C: 25
Roots are imaginary */

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    
    printf("A:  ");
    scanf("%d", &a);

    while(a == 0){
        printf("A: ");
        scanf("%d", &a);
    }

    
    printf("B: ");
    scanf("%d", &b);

    printf("C: ");
    scanf("%d", &c);
    

    
    int discriminant = (b*b) - (4*a*c);
    float x1, x2;
    x1 = (-b + sqrt(discriminant))/(2*a);
    x2 = (-b - sqrt(discriminant))/(2*a);


    if (discriminant < 0) {
        printf("Sorry, the roots are imaginary.");
    }else {
        printf("Root 1:%f\n",x1);
        printf("Root 2:%f\n",x2);
    }    
    return 0;
}















   







 

