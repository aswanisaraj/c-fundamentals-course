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
int main(){
	srand(time(0));
	int x[ROWS][COLUMNS];
	initArray(x);
	printArray(x);
	printf ("\n");
	printf ("%d\n",x[0]);
	printf ("%d\n",x[1]);
	printf ("%d\n",x[2]);
	printf ("%d\n",x[3]);
	printf ("%d\n",x[4]);
	return 0;
}
