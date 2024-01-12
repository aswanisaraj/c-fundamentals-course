#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int a[], const int SIZE){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		a[i] = rand() % 10;
		//a[i] = i;
}
void printArray(int a[], const int SIZE){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		printf ("%d ", a[i] );
	printf ("\n");
}
void findCounts(int a[], const int SIZE){
	int i, j, count;
	for (i = 0 ; i < SIZE ; i++){
		count = 0;
		for (j = 0 ; j < SIZE ; j++)
			if (a[i] == a[j])	
				count++;		
			printf ("%d exist at %d times\n", a[i], count);
	}
}
int main(){
	#define SIZE 10
	int x[SIZE], y[SIZE];
	srand(time(0));
	initArray(x, SIZE);
	printArray(x, SIZE);
	findCounts(x, SIZE);
	return 0;
}
