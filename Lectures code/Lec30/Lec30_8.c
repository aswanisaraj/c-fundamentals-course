#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLUMNS 5

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
void printDiagonal(int x[][COLUMNS]){
	int i, j;
	for (i = 0 ; i < ROWS; i++)
		printf ("%d ", x[i][i]);
	printf ("\n");
}
void printSecondaryDiagonal(int x[][COLUMNS]){
	int i, j;
	for (i = 0 ; i < ROWS; i++)
		printf ("%d ", x[i][COLUMNS-i-1]);
	printf ("\n");
}

int main(){
	srand(time(0));
	int x[ROWS][COLUMNS];
	initArray(x);
	printArray(x);
	printf ("\n");
	printDiagonal(x);
	printf ("\n");
	printSecondaryDiagonal(x);
	return 0;
}
