#include <stdio.h>

int main() {
    int number;

    printf("Input any number: ");
    scanf("%d", &number);

    int i = 0;
    while (i <= 9) {
        int digitCount = 0;
        int temp = number;

        while (temp != 0) {
            int digit = temp % 10;
            if (digit == i) {
                digitCount++;
            }
            temp /= 10;
        }

        printf("Frequency of %d = %d\n", i, digitCount);
        i++;
    }

    return 0;
}

