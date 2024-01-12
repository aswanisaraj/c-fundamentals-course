/* Task 1: Write a program to run a loop for integers 1 to 99. Print integer. Next, you have to print the sum of the digits
of the integer only if the integer has two digits. Suppose the sum of the digits of the number has two digits; again,
you have to print the sum of the digits. See the sample run and read the explanation for understanding.
Sample Run:
[1][2][3][4][5][6][7][8][9][10 1][11 2][12 3]...[19 10 1][20 2]...[28 10 1][29 11
2]...[99 18 9]
Explanation: You must print the value inside square brackets for each integer, as in the output for integers 1 to 9.
Next, integer 10 has two digits, 1 & 0. The sum of the digits of 10 is 1 + 0 = 1. Therefore, you must print the sum of
the digits with a space like [10 1]. The integer 19 has digits 1 & 9, having sum 1 + 9 = 10.
The sum is again a two-digit number; therefore, sum the digits, and the answer is 1. Therefore output will be [19 10
1] */

#include <stdio.h>
int main()
{
    int first1 = 0, first2 = 0, second1 = 0, second2 = 0, digit1, digit2, num;

    for (int i = 1; i <= 9; i++)
    {
        printf("[%d] ", i);
    }
    for (int j = 10; j <= 99; j++)
    {
        num = j;
        first1 = num % 10;
        first2 = num / 10;
        digit1 = first1 + first2;

        if (digit1 > 9)
        {
            second1 = digit1 % 10;
            second2 = digit1 / 10;
            digit2 = second1 + second2;

            printf("[%d %d %d] ", j, digit1, digit2);
        }
        else
        {
            printf("[%d %d] ", j, digit1);
        }
    }printf("\n");

    return 0;
}
