#include <stdio.h>

int main(){
	int a, i, j = 0, k = 1, m, n;
	printf ("N: ");
	scanf ("%d", &n);
	m = n * 2 - 2;
	for (i = 0 ; i < n ; i++){
		for (a = 1 ; a <= j ; a++)
			printf(" ");
		printf ("%2d", k);
		for (a = 1 ; a <= m ; a++)
			printf(" ");
		printf ("%2d\n", k);
		j++;
		k++;
		m = m -2;
	}
	return 0;
}
