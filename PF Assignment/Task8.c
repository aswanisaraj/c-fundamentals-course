#include <stdio.h>

int main() {
    int even = 2;
    int odd = 1;

    printf("Even Numbers (2-50): ");
    while (even <= 50) {
        printf("%d ", even);
        even += 2;
    }
    
    printf("\nOdd Numbers (1-49): ");
    while (odd <= 49) {
        printf("%d ", odd);
        odd += 2;
    }

    return 0;
}
