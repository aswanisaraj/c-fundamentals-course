#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int a[], const int SIZE){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		// a[i] = rand() % 100;
		a[i] = i;
}
void printArray(int a[], const int SIZE){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		printf ("%d ", a[i] );
	printf ("\n");
}
int isSame(int a[], int b[], const int SIZE){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		if (a[i] != b[i])	return 0;
	return 1;
}
int findIndex(int a[], const int ELEMENT, const int SIZE){
	int i, max;
	for (i = 0 ; i < SIZE ; i++)
		if (a[i] == ELEMENT)	return i;
	return -1;
}
int main(){
	#define SIZE 10
	int x[SIZE], y[SIZE];
	srand(time(0));
	initArray(x, SIZE);
	printArray(x, SIZE);
	initArray(y, SIZE);
	printArray(y, SIZE);
	if (isSame(x, y, SIZE))	printf ("Both arrays are same\n");
	else					printf ("Both arrays are different\n");
	return 0;
}
