#include <stdio.h>

int main(){
	int x, k;
	for (x = k = 1 ; x <= k ; x++){
		printf ("%d", x);
		if (x == k && k < 5){
			x = 0;
			k++;
			printf ("\n");	
		}		
	}printf ("\n");
	return 0;
}
