
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




    int min= 9999;
    for ( i = 0; i < SIZE; i++)
    {
        if(x[i]<min){
            min=x[i];

        }
    }printf("%d\n\n",min);
    for ( i = 0; i < SIZE; i++)
    {
        x[i]=x[i]-min;
        printf("%d ", x[i]);
    }
    

    

    


    return 0;
}