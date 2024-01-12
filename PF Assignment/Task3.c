#include <stdio.h>

int main() {
    int a, b, c, d;
    int temp;

    // Input four random numbers
    printf("Enter four random numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Sort the numbers using conditional statements
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (a > d) {
        temp = a;
        a = d;
        d = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (b > d) {
        temp = b;
        b = d;
        d = temp;
    }
    if (c > d) {
        temp = c;
        c = d;
        d = temp;
    }

    // Print the sorted numbers in ascending order
    printf("Sorted numbers in ascending order: %d %d %d %d\n", a, b, c, d);

    return 0;
}
