#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int a[], const int SIZE){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		printf ("%d ", a[i] );
	printf ("\n");
}
int findIndex(int a[], const int ELEMENT, const int SIZE){
	int i, max;
	for (i = 0 ; i < SIZE ; i++)
		if (a[i] == ELEMENT)	return i;
	return -1;
}
int main(){
	#define SIZE 10
	int x[SIZE], i, temp, index;
	srand(time(0));
	for (i = 0 ; i < SIZE ; i++)
		x[i] = rand() % 100;
	printArray(x, SIZE);
	for (i = 0 ; i < SIZE ; i++){
		temp = rand() % 100;
		index = findIndex(x, temp, SIZE);
		if (index == -1)	printf ("%d not exist in the array\n", temp);
		else				printf ("%d exists at index %d in the array\n", temp, index);
	}
	return 0;
}
