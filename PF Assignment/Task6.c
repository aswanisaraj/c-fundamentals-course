#include <stdio.h>

int main() {
    int num1, num2, num3;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    if (num1 > num2) {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }
    if (num2 > num3) {
        num2 = num2 + num3;
        num3 = num2 - num3;
        num2 = num2 - num3;
    }
    if (num1 > num2) {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    printf("%d\n%d\n%d\n", num1, num2, num3);

    return 0;
}
