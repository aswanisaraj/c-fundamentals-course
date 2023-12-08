#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
int main()
{
    int array[SIZE], i;
    srand(time(NULL));
    printf("Ages: ");
    for (i = 0; i < SIZE; i++)
    {
        array[i] = rand() % 100 + 1;
        printf("%d ", array[i]);
    }
    printf("\n\n");

    printf("Ages of children: ");
    for (i = 0; i < SIZE; i++)
    {
        if (array[i] <= 12)
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n\n");
    printf("Ages of adults:  ");
    for (i = 0; i < SIZE; i++)
    {
        if ((array[i] >= 13) && (array[i] <= 64))
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n\n");
    printf("Ages of seniors:   ");
    for (i = 0; i < SIZE; i++)
    {
        if ((array[i] >= 65))
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}