/*For Task 1, you need to write functions to print different patterns. Here's how you can do it:

a. To print a character `c` `n` times, you can use the `print_char` function:
c
void print_char(const char c, const int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", c);
    }
}


b. To print the letter 'N' using the `print_char` function, you can use the `printN` function:
c
void printN(const int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == i || j == n-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}


c. To print the letter 'M' using the `print_char` function, you can use the `printM` function:
c
void printM(const int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}


d. To print the pattern you described for odd values of `n`, you can use the `print_pattern2` function:
c
void print_pattern2(const int n) {
    for (int i = 0; i < n; i++) {
        if (i == n/2 || i == 0 || i == n-1) {
            print_char('*', n);
        } else {
            printf("*");
            print_char(' ', n-2);
            printf("*");
        }
        printf("\n");
    }
}


For Task 2, you need to write functions to check for prime numbers and print prime numbers up to a given number.*/



