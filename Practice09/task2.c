#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30

int main()
{

    int x[SIZE], i, sum = 0;
    float average;
    srand(time(0));

    printf("Marks: ");
    for (i = 0; i < SIZE; i++)
    {
        x[i] = rand() % 100;
        sum += x[i];
        printf("%d ", x[i]);
    }

    average = (float)sum / SIZE;
    printf("\nAverage: %.2f\n", average);

    int fail_students, above_average, below_average;

    printf("Marks of Fail Students: ");
    for (i = 0; i < SIZE; i++)
    {
        if (x[i] < 50)
        {
            fail_students = x[i];
            printf("%d ", fail_students);
        }
    }printf("\n\n");

    printf("Marks of Students Above Average: ");
    for (i = 0; i < SIZE; i++)
    {
        if (x[i] > average)
        {
            above_average = x[i];
            printf("%d ", above_average);
        }
    }printf("\n\n");

    printf("Marks of Students Below Average: ");
    for (i = 0; i < SIZE; i++)
    {
        if (x[i] < average)
        {
            below_average = x[i];
            printf("%d ", below_average);
        }
    }printf("\n\n");

    return 0;
}
