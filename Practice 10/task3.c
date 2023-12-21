
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
    int even_sum = 0;
    int odd_sum = 0;
    int count1 = 0;
    int count2 = 0;
    for (i = 0; i < SIZE; i++)
    {
        if (x[i] <= 0)
        {
            even_sum += abs(x[i]);
            count1++;
        }
        odd_sum += abs(x[i]);
        count2++;
    }
    float even_aver = even_sum / count1;
    float odd_aver = odd_sum / count2;
    printf("Even numbers sum: %d\n", even_sum);
    printf("Odd numbers sum: %d\n", odd_sum);
    printf("Average of even numbers is %.2f\n", even_aver);
    printf("Average of odd numbers is %.2f\n", odd_aver);

    for (i = 0; i < SIZE; i++)
    {
        if (x[i] <= 0)
        {
            x[i] = x[i] - even_aver;
            count1++;
        }
        x[i] = x[i] - odd_aver;
    }printf("\n\n");
    for (i = 0; i < SIZE; i++)
    {

        printf("%d ", x[i]);
    }
        return 0;
}