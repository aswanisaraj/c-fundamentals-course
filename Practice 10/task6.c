
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20
int main()
{
    srand(time(0));
    int x[SIZE], i;
    int Negative = 0;
    for (i = 0; i < SIZE; i++)
    {
        x[i] = rand() % 100 - 50;
        printf("%d ", x[i]);
    }

    printf("\n\n");
    int sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        if (x[i] <= 0)
        {
            sum += abs(x[i]);
        }
    }
    float aver = sum / SIZE;
    printf("Average of numbers is %.2f\n", aver);

    for (i = 0; i < SIZE; i++)
    {

        x[i] = x[i] - aver;
    }
    printf("\n");
    for (i = 0; i < SIZE; i++)
    {
        
        if (x[i] < 0)
        {
            Negative++;
        }
    
    }
    printf("Numbers after subtracting average.\n");
    for (i = 0; i < SIZE; i++)
    {

        printf("%d ", x[i]);
    }
    printf("\n");
    printf("There are %d Negative numbers.\n", Negative);
    printf("There are %d Positive numbers.\n",(SIZE-Negative));
    return 0;
}