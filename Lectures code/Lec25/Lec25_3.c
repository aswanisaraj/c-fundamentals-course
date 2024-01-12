#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	#define SIZE 20
	int x[SIZE], i, j, temp;
	srand(time(0));
	for (i = 0 ; i < SIZE ; i++){
		x[i] = rand() % 1000;
		printf ("%d ", x[i] );
	}
	printf ("\n");
	for (j = 0 ; j < 2 ; j++)
		for (i = 0 ; i < SIZE - 1 ; i++)
			if (x[i] > x[i+1]){
				temp = x[i];
				x[i] = x[i+1];
				x[i+1] = temp;
			}
	for (i = 0 ; i < SIZE ; i++)
		printf ("%d ", x[i] );
	printf ("\n");
	return 0;
}
