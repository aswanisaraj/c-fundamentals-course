#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{

    int x[SIZE];
    int i, even = 0, odd = 0;

    srand(time(0));

    printf("List: ");
    for (i = 0; i < SIZE; i++)
    {
        x[i] = rand() % 95;
        printf("%d ", x[i]);
    }
    for (i = 0; i < SIZE; i++)
    {
        {
            if (x[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    if (even > odd)
    {
        for (i = 0; i < SIZE; i++)
        {
            if (x[i] % 2 != 0)
            {
                x[i] = x[i] + 1;
            }
        }
    }
    else
    {
        for (i = 0; i < SIZE; i++)
        {
            if (x[i] % 2 == 0)
            {
                x[i] = x[i] - 1;
            }
        }
    }
    printf("\n\n\n");
    printf("List after processing: ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}
