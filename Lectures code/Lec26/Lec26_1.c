#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int a[], const int SIZE){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		printf ("%d ", a[i] );
	printf ("\n");
}
int findMax(int a[], const int SIZE){
	int i, max;
	for (i = 0 ; i < SIZE ; i++)
		if (i == 0)	max = a[i];
		else if (a[i] > max)	max = a[i];
	return max;
}
int main(){
	#define SIZE 10
	int x[SIZE], i, sum = 0;
	srand(time(0));
	for (i = 0 ; i < SIZE ; i++)
		x[i] = rand() % 1000;
	printArray(x, SIZE);
	printf ("Max: %d\n", findMax(x, SIZE));
	return 0;
}
