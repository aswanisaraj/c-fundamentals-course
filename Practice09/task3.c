#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 12

int main()
{  
   
	int  x[SIZE]; 
    int i, first_sum= 0, second_sum=0;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4=0;
	
	srand(time(0));

	for (i = 0 ; i < SIZE ; i++){
		x[i] = rand()%1000+1000;
        printf("%d ", x[i]);
    }printf("\n");

    printf("Sale in Two Halves.\n");
    printf("First Half: ");
    int len= sizeof(x)/sizeof(x[i]);

    for ( i = 0; i < len/2; i++){
        first_sum+= x[i];
        
    }printf("%d ",first_sum);

    printf("\nSecond Half: ");
    for ( i = len/2; i < len; i++){
        second_sum+= x[i];
       
    }printf("%d ",second_sum);
    printf("\n");

    printf("Sale in Quarter 1: ");
    for ( i = 0; i < len/4; i++)
    {
        sum1+=x[i];
    }printf("%d ", sum1);
    printf("\n");

    printf("Sale in Quarter 2: ");
    for ( i = len/4; i < len/2; i++)
    {
        sum2+=x[i];
    }printf("%d ", sum2);
    printf("\n");



    printf("Sale in Quarter 3: ");
    for ( i = len/2; i < (3*len)/4; i++)
    {
        sum3+=x[i];
    }printf("%d ", sum3);
    printf("\n");




    printf("Sale in Quarter 4: ");
    for ( i = (3*len)/4; i < len; i++)
    {
        sum4+=x[i];
    }printf("%d ", sum4);
    printf("\n");

    
    
    
    


    return 0;
}
