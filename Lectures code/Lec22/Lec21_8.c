#include <stdio.h>

int main(){
	int a, i, n;
	printf ("N: ");
	scanf ("%d", &n);
	for (i = 0 ; i < n ; i++){
		for (a = 1 ; a <= i ; a++)
			printf(" ");
		printf ("%2d", i + 1);
		for (a = i * 2 ; a < n * 2 - 2 ; a++)
			printf(" ");
		printf ("%2d\n", i+1);
	}
	return 0;
}
