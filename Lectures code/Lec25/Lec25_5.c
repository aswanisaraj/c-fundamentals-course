#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	#define SIZE 20
	int x[SIZE], i, j, element;
	srand(time(0));
	for (i = 0 ; i < SIZE ; i++){
		x[i] = rand() % 1000;
		printf ("%d ", x[i] );
	}
	printf ("\nEnter Number to Search: ");
	scanf("%d", &element);
	for (i = 0 ; i < SIZE && x[i] != element; i++);//null statement
	if (i < SIZE)
		printf ("Element exist at index %d\n", i);
	else
		printf ("Element does not exist\n");
	return 0;
}
