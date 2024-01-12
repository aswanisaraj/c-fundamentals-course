#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int a[], const int SIZE)
{
	int i;
	for (i = 0; i < SIZE; i++)
		a[i] = rand() % 10;
	// a[i] = i;
}
void printArray(int a[], const int SIZE)
{
	int i;
	for (i = 0; i < SIZE; i++)
		printf("%d ", a[i]);
	printf("\n");
}
void findDuplicaiton(int a[], const int SIZE)
{
	int i, j;
	for (i = 0; i < SIZE; i++)
		for (j = i + 1; j < SIZE; j++)
			if (a[i] == a[j])
				printf("%d exist at %d\n", a[i], j);
}
int main()
{
#define SIZE 10
	int x[SIZE], y[SIZE];
	srand(time(0));
	initArray(x, SIZE);
	printArray(x, SIZE);
	findDuplicaiton(x, SIZE);
	return 0;
}
