#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLUMNS 5+1

void printArray(int x[][COLUMNS]){
	int i, j;
	for (i = 0 ; i < ROWS; i++){
		for (j = 0 ; j < COLUMNS ; j++)
			printf ("%d ", x[i][j]);
		printf ("\n");
	}
}
void initArray(int x[][COLUMNS]){
	int i, j;
	for (i = 0 ; i < ROWS; i++)
		for (j = 0 ; j < COLUMNS ; j++)
			x[i][j] = rand() % 10;
}
int findMax2D(int a[]){
	int i, max = a[0];
	for (i = 1; i < ROWS * COLUMNS ; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}
int findMax(int a[]){
	int i, max = a[0];
	for (i = 1; i < COLUMNS ; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}
int main(){
	srand(time(0));
	int x[ROWS][COLUMNS];
	initArray(x);
	printArray(x);
	printf ("\n");
	printf ("Max of Complete Array: %d\n", findMax2D(x[0]));
	printf ("Max of Row 1: %d\n", findMax(x[0]));
	printf ("Max of Row 2: %d\n", findMax(x[1]));
	printf ("Max of Row 3: %d\n", findMax(x[2]));
	printf ("Max of Row 4: %d\n", findMax(x[3]));
	printf ("Max of Row 5: %d\n", findMax(x[4]));
	return 0;
}
