#include <stdio.h>

int main(){
	int x, k;
	char c = 'A';
	for (k = 0 ; k <= 10 ; k += 2, c++){
		for (x = 1 ; x <= k ; x++)
			printf (" ");		
		printf ("%c\n", c);		
	}
	return 0;
}
