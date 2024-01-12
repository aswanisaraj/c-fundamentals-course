#include <stdio.h>

int main() {
    int count = 0; 
    int product = 1; 

    while (count < 5) {
        int number;
        printf("Enter number: ");
        scanf("%d", &number);

        product *= number; 
        count++; 
    }

    printf("Product: %d\n", product);

    return 0;
}
