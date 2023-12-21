/*Use this code to solve next tasks:
#define SIZE 20
int x[SIZE], i;
for (i = 0 ; i < SIZE ; i++)
x[i] = rand() % 100 – 50;
Task 01: Move negative numbers on left side of the array and positive numbers on right hand side. You
do not have to sort the numbers, just move negative numbers on left by swapping, positive numbers
will move to right side automatically.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20
int main()
{
    srand(time(0));
    int x[SIZE], i;
    for (i = 0; i < SIZE; i++){
        x[i] = rand() % 100 - 50;
        printf("%d ", x[i]);
    }printf("\n\n\n");

   
    int start = 0, end = SIZE - 1;
    while (start <= end)
    {
        if (x[start] < 0 && x[end] >= 0)
        {
            int temp = x[start];
            x[start] = x[end];
            x[end] = temp;
            start++;
            end--;
        }
        else if (x[start] >= 0)
            start++;
        else if (x[start] < 0)
            end--;
    }
    printf("Array after moving negatives to left and positives to right:\n\n\n");
    for (i = 0; i < SIZE; i++)
        printf("%d ", x[i]);
    printf("\n");
    return 0;
}
