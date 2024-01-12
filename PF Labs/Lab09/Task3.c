/* Task 3: Write a program to input ten numbers and for each print whether number is larger or smaller than K. K is
also an input of this program:
Sample Run:
K: 25
Number 1: 36
36 is larger than 25
Number 2: 28
28 is larger than 25
Number 2: 20
20 is smaller than 25
... */

#include <stdio.h>

int main() {
    int K, i, number;
    printf("K: ");
    scanf("%d", &K);

    for(i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &number);

        if(number > K)
            printf("%d is larger than %d\n", number, K);
        else if(number < K)
            printf("%d is smaller than %d\n", number, K);
        else
            printf("%d is equal to %d\n", number, K);
    }

    return 0;
}