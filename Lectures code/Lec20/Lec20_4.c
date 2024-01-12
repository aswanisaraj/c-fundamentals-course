#include <stdio.h>

int main(){
	int x, k, n;
	printf ("Enter Number: ");
	scanf("%d", &n);
	for (k = 1 ; k <= n ; k++){
		for (x = 1 ; x < k ; x++)
			printf (" ");		
		printf ("%d\n", k);		
	}
	return 0;
}
