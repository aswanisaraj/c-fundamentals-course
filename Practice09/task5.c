#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{

    int x[SIZE];
    int i,j;

    srand(time(0));

    
    for (i = 0; i < SIZE; i++)
    {
        x[i] = rand() %4+3;
        printf("%d ", x[i]);
    }printf("\n");
    for ( i = 0; i < SIZE ;i++)
    {
       for ( j = 0; j < x[i]; j++)
       {
       printf("*");
       }printf("\n");
       
    }printf("\n");
    
 return 0;

}