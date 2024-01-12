#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Length 10

int main()
{
    srand(time(0));
    int temp;
    int x[Length], y[Length], i, j;

    
    for (i = 0; i < Length; i++)
    {
        x[i] = rand() % 90 + 10;
        printf("%d ", x[i]);
    }
    printf("\n\n");

  
    for (i = 0; i < Length; i++)
    {
        y[i] = x[i];
    }

   
    for (i = 0; i < Length - 1; i++)
    {
        for (j = 0; j < Length - 1; j++)
        {
            if (y[j] > y[j + 1])
            {
                temp = y[j];
                y[j] = y[j + 1];
                y[j + 1] = temp;
            }
        }

       
        for (int k = 0; k < Length; k++)
            printf("%d ", y[k]);
        printf("\n");
    }

    printf("-------------------\n");

    
    for (i = 0; i < Length; i++)
    {
        int position = -1;

        for (j = 0; j < Length; j++)
        {
            if (x[i] == y[j])
            {
                position = j;
                break;
            }
        }

        printf("%d is at position %d\n", x[i], position);
    }

    return 0;
}
