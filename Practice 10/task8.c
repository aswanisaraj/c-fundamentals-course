#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int count = 0;
    int a[10], b[10];
    printf("Array 1: ");
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 30 + 1;
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < 10; i++)
    {
        b[i] = rand() % 20 + 1;
        printf("%d ", b[i]);
    }
    printf("\n");

    printf("Elements larger than at least three other array elements: ");
    for (int i = 0; i < 10; i++)
    {
        count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (a[i] > b[j])
            {
                count++;
            }
        }
        if (count >= 3)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    return 0;
}
