#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
    int array[SIZE], i, j, sum = 0;
    srand(time(0));

    for (i = 0; i < SIZE; i++)
    {
        array[i] = rand() % 4 + 3;
        printf("%d ", array[i]);
    }
    printf("\n");
    for (i = 0; i < SIZE; i++)
    {
        sum = 0;
        for (j = 0; j <= i; j++)
        {
            sum += array[j];
            printf("%d ", array[j]);
           
        }
         
        printf("= %d", sum);
        printf("\n\n");
    }
    printf("\n");

    return 0;
}
