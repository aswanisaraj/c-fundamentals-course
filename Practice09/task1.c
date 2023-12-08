#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

int main()
{  
   
	float  x[SIZE]; 
    int i, sum = 0;
	float average;	
	srand(time(0));

    printf ("Length: %d\n", SIZE);
	for (i = 0 ; i < SIZE ; i++){
		x[i] = rand() % 50;
		sum += x[i];
		printf ("%d ",(int) x[i] );
	}
    
	average = (float)sum / SIZE;

	printf ("\nAverage: %.2f\n", average);
    for (i = 0 ; i < SIZE ; i++){
		
		x[i]=average-x[i];
		printf ("%.2f ", x[i] ); 
    }printf("\n");
    int positive_count=0, negative_count=0;
    for ( i = 0; i < SIZE; i++){
        if(x[i]>0){
            positive_count++;
            
        }else{
            negative_count++;

        }
    }
    printf("Count of positive values:  %d\n",positive_count );
    printf("Count of Negative values:  %d \n",negative_count);
    
    


    return 0;
}
