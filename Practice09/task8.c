#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE1 15
#define SIZE2 15
#define SIZE3 15
int main()
{
    int array1[SIZE1], array2[SIZE2], i;
    int sum1 = 0, sum2 = 0;
    int max1 = 1, max2 = 1;
    srand(time(NULL));

    printf("List1: ");
    for (i = 0; i < SIZE1; i++)
    {
        array1[i] = rand() % 100;
        printf("%d ", array1[i]);
    }
    printf("\n\n");
    printf("List2: ");
    for (i = 0; i < SIZE1; i++)
    {
        array2[i] = rand() % 100;
        printf("%d ", array2[i]);
    }
    printf("\n\n");
    for (i = 0; i < SIZE1; i++)
    {
        sum1 += array1[i];
        sum2 += array2[i];
    }
    printf("Sum of elements in List1: ");
    printf("%d ", sum1);
    printf("\n\n");

    printf("Sum of elements in List2: ");
    printf("%d ", sum2);
    printf("\n\n");

    for (i = 0; i < SIZE1; i++)
    {
        if (array1[i] > max1)
        {
            max1 = array1[i];
        }

        if (array2[i] > max2)
        {
            max2 = array2[i];
        }
    }
    printf("Maximum value in List1: ");
    printf("%d ", max1);
    printf("\n\n");
    printf("Maximum value in List2: ");
    printf("%d ", max2);
    printf("\n\n");

    printf("Common elements: ");
    for (int i = 0; i < SIZE1; i++)
    {
        for (int j = 0; j < SIZE2; j++)
        {
            if (array1[i] == array2[j])
            {
                printf("%d ", array1[i]);
                break;
            }
        }
    }

    printf("\n");

    return 0;
}
