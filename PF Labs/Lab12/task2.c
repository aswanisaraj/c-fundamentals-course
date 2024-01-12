/*Task 1: Write functions to print:
a.b.c.void print_char(const char c, const int n):
character c, n times, say c is '*' and n is 5, the function will print *****
void printN(const int n):
Print N for n > 3, using above function, here suppose n = 5
*
 *
** *
* * *
* **
*
 *
void print_pattern2(const int n):
Print M for n > 3, using above function, here suppose n = 5
*
 *
**
 **
* *
 * *
* * * *
*
 *
 *
d.void print_pattern2(const int n):
The following pattern for n >= 5 and odd value of n, using above function, here suppose n = 5
***
*
 *
*****
*
 *
*
 *
for n = 7
******
*
 *
*
 *
********
*
 *
*
 *
*
 *
Finally, write drive code in main function to test your functions for different parameters.*/




#include <stdio.h>
#include <stdbool.h>

int isPrime(const int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

void printPrime(const int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    printf("Prime numbers from 2 to %d are:\n", num);
    printPrime(num);

    return 0;
}