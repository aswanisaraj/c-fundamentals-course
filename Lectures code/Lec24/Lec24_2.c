#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	#define SIZE 20
	int x[SIZE], i, sum = 0;
	float average;	
	srand(time(0));
	for (i = 0 ; i < SIZE ; i++){
		x[i] = rand() % 10;
		sum += x[i];
		printf ("%d ", x[i] );
	}
	average = (float)sum / SIZE;
	printf ("\nAverage: %f\nSmaller: ", average);
	for (i = 0 ; i < SIZE ; i++)
		if (x[i] < average)		printf ("%d ", x[i]);
	printf ("\nLarger: ");
	for (i = 0 ; i < SIZE ; i++)
		if (x[i] > average)		printf ("%d ", x[i]);
	printf ("\n");
	return 0;
}
