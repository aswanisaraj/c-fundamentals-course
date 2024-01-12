#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int a[], const int SIZE){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		a[i] = rand() % 10;
}
void printArray(int a[], const int SIZE){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		printf ("%d ", a[i] );
	printf ("\n");
}
int checkSimilar(int a[], int b[], const int SIZE){
	int i, j;
	for (i = 0 ; i < SIZE ; i++){
		for (j = 0 ; j < SIZE ; j++)
			if (a[i] == b[j])	
				break;		
		if (j == SIZE)
			return 0;
	}
	return 1;
}
int main(){
	#define SIZE 10
	int x[SIZE], y[SIZE];
	srand(time(0));
	initArray(x, SIZE);
	printArray(x, SIZE);
	initArray(y, SIZE);
	printArray(y, SIZE);
	if (checkSimilar(x, y, SIZE) == 1)	printf ("Both arrays are similar\n");
	else								printf ("Both arrays are different\n");
	return 0;
}
