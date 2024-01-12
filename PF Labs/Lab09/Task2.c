/* Task 2: Write a program to input ten numbers. Find and print distance of every consecutive number:
Sample Run:
Number 1: 25
Number 2: 36
Difference: 11
Number 3: 20
Difference: 16
// Number 4: 15
Difference: 5
Number 5: 30
Difference: 15
... */
#include <stdio.h>

int main()
{

    int i, number, diff, prevNumber;

    printf("Number 1: ");
    scanf("%d", &number);

    prevNumber = number;

    for (i = 1; i < 10; i++)
    {
        printf("Number 2: ");
        scanf("%d", &number);

        diff = prevNumber - number;
        printf("Difference between number %d and number %d: %d\n", prevNumber, number, diff);
        prevNumber = number;
    }

    return 0;
}