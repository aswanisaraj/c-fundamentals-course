#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main()
{
    srand(time(0));
    int x[SIZE], i, j;
    int counter = 0;

    for (i = 0; i < SIZE; i++)
    {
        x[i] = rand() % 100;
        printf("%d ", x[i]);
        
    }
    printf("\n");

    int temp;
    for (j = 0; j < SIZE - 1; j++)
    {
        for (i = 0; i < SIZE - 1; i++)
        {
            if (x[i] > x[i + 1])
            {
                temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < SIZE; i++)
    {

        printf("%d ", x[i]);
        if (i % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}



