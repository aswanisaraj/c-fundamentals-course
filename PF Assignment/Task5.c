#include <stdio.h>

int main() {
    int num1, num2, num3;

   
    printf("Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 <= num2 && num2 <= num3) {
        printf("Numbers are in order\n");
    } else {
        printf("Numbers are not in order\n");
    }

    return 0;
}
