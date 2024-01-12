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

void print_char(const char c, const int n)
{
    for (int i = 1; i < n; i++)
    {
        printf("%c ", c);
    }
    printf("\n");
}

void printN(const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == i || j == n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void printM(const int sidelength)
{
    for (int i = 0; i < sidelength; i++)
    {
        for (int j = 0; j < sidelength; j++)
        {
            if (j == 0 || j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < sidelength; i++)
    {
        for (int j = 0; j < sidelength; j++)
        {
            if (j == 0 || j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void print_pattern2(const int m)
{
    for (int i = 1; i <= m; i++)
    {
        printf("*");
        for (int j = 1; j <= (2 * m) - 1; j++)
        {
            if (j == (2 * m) - 1 || i == 1 || i == m / 2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    print_char('a', 8);
    printf("\n\n\n");
    printN(5);
    printf("\n\n\n");
    printM(10);
    printf("\n\n\n");
    print_pattern2(8);

    return 0;
}