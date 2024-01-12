#include <stdio.h>
#include <stdlib.h>

int findSum(int x[], const int SIZE){
	int i, sum = 0;
	for (i = 0 ; i < SIZE ; i++)
		sum += x[i];
	return sum;
}
void input(int x[], const int SIZE){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		scanf("%d", &x[i]);
}
int main(){
	int n, *p;
	printf ("Enter Size: ");
	scanf("%d", &n);
	p = (int *) malloc (n * sizeof(int));
	input(p, n);
	printf ("Sum: %d\n", findSum(p, n));
	free(p);//deallocate the memory allocated using malloc
	
	printf ("Enter Size: ");
	scanf("%d", &n);
	p = (int *) malloc (n * sizeof(int));
	input(p, n);
	printf ("Sum: %d\n", findSum(p, n));
	free(p);//deallocate the memory allocated using malloc
	return 0;
}
