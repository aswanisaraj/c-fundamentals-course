#include<stdio.h>
#include<math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    
    printf("Enter coefficient a: ");
    scanf("%lf", &a);
    printf("Enter coefficient b: ");
    scanf("%lf", &b);
    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    
    discriminant = b * b - 4 * a * c;

    if (a == 0) {
        
        printf("The equation is linear and has only one root: %.2lf\n", -c / b);
    } else if (discriminant < 0) {
        
        printf("The roots are imaginary.\n");
    } else {
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and are: %.2lf and %.2lf\n", root1, root2);
    }

    return 0;
}
