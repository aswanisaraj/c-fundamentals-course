#include <stdio.h>

int main(){
	int i, j = 0, k = 1, m = 8, n;
	printf ("N: ");
	scanf ("%d", &n);
	for (i = 0 ; i < n ; i++){
		printf ("%d%d%d%d\n", j,k,m,k);		
		j++;
		k++;
		m = m - 2;
	}
	return 0;
}
