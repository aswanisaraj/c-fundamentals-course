/*W Write a program to declare three integer variables. The name of variables will
be:𝑥1 , 𝑥2 & 𝑎𝑛𝑠𝑤𝑒𝑟. Input 𝑥1 & 𝑥2 variables, compute and print following expressions:
𝑥1 2 + 𝑥2 2 + 2𝑥1 𝑥2
𝑥1 2 +
1
−2
𝑥2 2
(𝒙𝟏 +𝒙𝟐 ) ∗ (𝒙𝟏 −𝒙𝟐 )*/


#include <stdio.h>

int main() {
    int x1, x2, answer;
    printf("Enter the value for x1: ");
    scanf("%d", &x1);
    printf("Enter the value for x2: ");
    scanf("%d", &x2);
    int expression1 = x1 * x1 + x2 * x2 + 2 * x1 * x2;
    int expression2 = x1 * x1 + 1 - 2 * x2 * x2;
    int expression3 = (x1 + x2) * (x1 - x2);
    printf("Expression 1 (x1^2 + x2^2 + 2*x1*x2): %d\n", expression1);
    printf("Expression 2 (x1^2 + 1/x2^2 -2): %d\n", expression2);
    printf("Expression 3 ((x1 + x2) * (x1 - x2)): %d\n", expression3);

    return 0;
}
