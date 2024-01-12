/*Task 1: Declare an array of 12 elements to store monthly sales. Initialize sale at random with values in range (10-99). Print sale of each month in a single line. Also, print sales of each quarter in single line, along with minimum, maximum and average sale of each quarter. Also, find & print the quarter number and sale of quarter having minimum sale. Also, find & print the quarter number and sale of quarter having maximum sale. Also, find & print the quarter number and average sale of quarter having minimum average sale. Also, find & print the quarter number and average sale of quarter having maximum average sale. See sample run for further understanding:
Sample Run:
Monthly Sales: 11 42 11 32 34 33 40 10 20 24 16 22

Quarter I: 11 42 11 Min: 11 Max: 42 Average: 21.33
Quarter 2: 32 34 33 Min: 32 Max: 34 Average: 33.00
Quarter 3: 40 10 20 Min: 10 Max: 40 Average: 23.33
Quarter 4: 24 16 22 Min: 16 Max: 24 Average: 20.66
Quarter 3 has minimum sale 10
Quarter 1 has maximum sale 42
Quarter 4 has minimum average sale 20.66
Quarter 2 has maximum average sale 33.00*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 12

int main()
{
    srand(time(0));
    int array[SIZE], i;
    int min1 = 99, max1 = 0, min2 = 99, max2 = 0, min3 = 99, max3 = 0, min4 = 99, max4 = 0;
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    float average1 = 0, average2 = 0, average3 = 0, average4 = 0;
    printf("Monthly Sales: ");
    for (i = 0; i < SIZE; i++)
    {
        array[i] = rand() % 89 + 10;
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Quarter I: ");
    for (i = 0; i < 3; i++)
    {

        printf("%d ", array[i]);
        sum1 += array[i];

        if (array[i] > max1)
        {
            max1 = array[i];
        }
        if (array[i] < min1)
        {
            min1 = array[i];
        }
    }
    average1 = (float)sum1 / 3.00;
    printf(" Min:%d\tMax:%d\tAverage:%.2f ", min1, max1, average1);
    printf("\n");

    printf("Quarter 2: ");
    for (i = 3; i < 6; i++)
    {

        printf("%d ", array[i]);
        sum2 += array[i];

        if (array[i] > max2)
        {
            max2 = array[i];
        }
        if (array[i] < min2)
        {
            min2 = array[i];
        }
    }
    average2 = (float)sum2 / 3.00;
    printf(" Min:%d\tMax:%d\tAverage:%.2f ", min2, max2, average2);
    printf("\n");

    printf("Quarter 3: ");
    for (i = 6; i < 9; i++)
    {

        printf("%d ", array[i]);
        sum3 += array[i];

        if (array[i] > max3)
        {
            max3 = array[i];
        }
        if (array[i] < min3)
        {
            min3 = array[i];
        }
    }
    average3 = (float)sum3 / 3.00;
    printf(" Min:%d\tMax:%d\tAverage:%.2f ", min3, max3, average3);
    printf("\n");

    printf("Quarter 4: ");
    for (i = 9; i < 12; i++)
    {

        printf("%d ", array[i]);
        sum4 += array[i];

        if (array[i] > max4)
        {
            max4 = array[i];
        }
        if (array[i] < min4)
        {
            min4 = array[i];
        }
    }
    average4 = (float)sum4 / 3.00;
    printf(" Min:%d\tMax:%d\tAverage:%.2f ", min4, max4, average4);
    printf("\n");

    if ((average1 < average2) && (average1 < average3) && (average1 <= average4))
    {
        printf("Quarter 1 has minimum average sale %f", average1);
    }
    else if ((average2 < average1) && (average2 < average3) && (average2 <= average4))
    {
        printf("Quarter 2 has minimum average sale %f", average2);
    }
    else if ((average3 < average1) && (average3 < average2) && (average3 <= average4))
    {
        printf("Quarter 3 has minimum average sale %f", average3);
    }
    else
    {
        printf("Quarter 4 has minimum average sale %f", average4);
    }
    printf("\n");

    if ((average1 >= average2) && (average1 >= average3) && (average1 >= average4))
    {
        printf("Quarter 1 has maximum average sale %f", average1);
    }
    else if ((average2 >= average1) && (average2 >= average3) && (average2 >= average4))
    {
        printf("Quarter 2 has maximum average sale %f", average2);
    }
    else if ((average3 >= average1) && (average3 >= average2) && (average3 >= average4))
    {
        printf("Quarter 3 has miximun average sale %f", average3);
    }
    else
    {
        printf("Quarter 4 has maximum average sale %f", average4);
    }
    printf("\n");

    if ((max1 >= max2) && (max1 >= max3) && (max1 >= max4))
    {
        printf("Quarter 1 has maximum sale %d", max1);
    }
    else if ((max2 >= max1) && (max2 >= max3) && (max2 >= max4))
    {
      
        printf("Quarter 2 has maximum sale %d", max2);
    }
     else if ((max3 >= max1) && (max3 >= max2) && (max3 >= max4))
    {
        printf("Quarter 3 has maximum sale %d", max3);
    }else{
        printf("Quarter 4 has maximum sale %d", max4);

    }printf("\n");

    if((min1<=min2)&&(min1<=min3)&&(min1<=min4)){
        printf("Quarter 1 has minimum sale %d",min1);
    }else if((min2<=min1)&&(min2<=min3)&&(min2<=min4)){
        printf("Quarter 2 has minimum sale %d",min2);
    }else if((min3<=min1)&&(min3<=min2)&&(min3<=min4)){
        printf("Quarter 3 has minimum sale %d",min3);
    }else{
        printf("Quarter 4 has minimum sale %d",min4);
    }
    
    
    printf("\n");

    return 0;
}
