#include <stdio.h>

int main(){
	int i, j = 0, k = 1, m, n;
	printf ("N: ");
	scanf ("%d", &n);
	m = n * 2 - 2;
	for (i = 0 ; i < n ; i++){
		printf ("%d%d%2d%d\n", j,k,m,k);		
		j++;
		k++;
		m = m - 2;
	}
	return 0;
}
