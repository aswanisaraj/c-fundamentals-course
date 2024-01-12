#include <stdio.h>

int main() {
    int max = 0;
    int i = 1; // Initialize a counter

    while (i <= 5) {
        int num;
        printf("Enter number: ");
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }

        i++; // Increment the counter
    }

    printf("Max number: %d\n", max);

    return 0;
}
