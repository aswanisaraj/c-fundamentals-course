#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main()
{
    srand(time(0));
    int x[SIZE], i;

    for (i = 0; i < SIZE; i++)
    {
        x[i] = rand() % 100 - 50;
        printf("%d ", x[i]);
    }
    printf("\n\n");

    for (i = 0; i < SIZE; i++)
    {

        for (int j = i + 1; j < SIZE; j++)
        {
            if (x[i] + x[j] == 0)
            {
                printf("Pair found! The pair is {%d, %d}\n", x[i], x[j]);
            }
        }
    }

    return 0;
}
