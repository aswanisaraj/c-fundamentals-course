#include <stdio.h>

int main(){
	int a, i, j = 1, k = 1, m = 8, n = 5;
	for (i = 0 ; i < n ; i++){
		for (a = 1 ; a < j ; a++)
			printf(" ");
		printf ("%d", k);
		for (a = 1 ; a <= m ; a++)
			printf(" ");
		printf ("%d\n", k);
		j++;
		k++;
		m = m - 2;
	}
	return 0;
}
