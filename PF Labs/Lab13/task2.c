/*Task 2: Declare an array of 10 elements and store random elements in the range 11 to 30. Print elements in a single line. Find max element and average of the array in float & print them. Next, check all the elements, if elements are odd, modify the element by adding one. Also, check element with neighboring elements. If elements are same, modify right side element by adding two. Print elements in a single again. Find max element and average of the array in float & print them. Print difference of previous max with new max. Also, print different of previous average with new average.
Finally, print a char/ graph by writing each element following by stars. See sample run carefully:
Sample Run:
11 22 15 16 17 …
Max: 29
Average: 19.27
12 22 16 18 20 …
Max: 38
Average: 26.48
Difference of Max: 9
Difference of Average: 7.21*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    srand(time(0));
    int array[SIZE], i, max = 0, sum = 0;
    int max1 = -99, sum1 = 0;
    float average = 1;
    float average1 = 1;
    for (i = 0; i < SIZE; i++)
    {
        array[i] = rand() % 19 + 11;
        printf("%d ", array[i]);

        if (max < array[i])
        {
            max = array[i];
        }
        sum += array[i];
    }
    average = (float)sum / 10;
    printf("\n");
    printf("Max: %d\n", max);
    printf("Average: %.2f\n", average);

    for (i = 0; i < SIZE; i++)
    {

        if (array[i] % 2 != 0)
        {
            array[i] = array[i] + 1;
        }
    }
    printf("\n");
    for (i = 0; i < SIZE; i++)
    {

        if (array[i] == array[i + 1])
        {
            array[i + 1] = array[i + 1] + 2;
        }
        printf("%d ", array[i]);
    }

    for (i = 0; i < SIZE; i++)
    {

        if (max1 < array[i])
        {
            max1 = array[i];
        }
        sum1 += array[i];
    }
    average1 = (float)sum1 / 10;
    printf("\n");
    printf("Max: %d\n", max1);
    printf("Average: %.2f\n\n", average1);

    int new_max = 0;
    float new_average = 1;
    if (max1 > max)
    {
        new_max = (max1 - max);
        printf("Difference of Max: %d", new_max);
    }
    else
    {
        new_max = (max - max1);
        printf("Difference of Max: %d", new_max);
    }

    printf("\n");

     if (average1 > average)
    {
        new_average = (average1 - average);
        printf("Difference of Average: %.2f",new_average );
    }
    else
    {
        new_max = (average- average1);
        printf("Difference of Average: %.2f", new_average);
    }

    printf("\n");
}
