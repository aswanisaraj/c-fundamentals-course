#include <stdio.h>
int main()
{
    char a, b, c;
    printf("Enter first letter value for a: ");
    scanf(" %c", &a);

    printf("Enter 2nd letter value for b: ");
    scanf(" %c", &b);

    printf("Enter 3rd letter value for c: ");
    scanf(" %c", &c);
    int z = a - b;
    int y = b - c;
    int x = c - a;
    printf("Difference between %c and %c is %d\n", a, b, z);
    printf("Difference between %c and %c is %d\n", b, c, y);
    printf("Difference between %c and %c is %d\n", a, c, x);

    return 0;
}
