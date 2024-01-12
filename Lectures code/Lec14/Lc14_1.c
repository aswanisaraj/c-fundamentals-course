#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int n = rand() % 9 + 1, i;
	printf ("N: %d\n", n);
	i = 1;
	while (i <= 10){
		printf ("%d ", i * n);
		i++;
	}
	return 0;
}