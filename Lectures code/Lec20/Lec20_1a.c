#include <stdio.h>

int main(){
	int x, k;
	//Another way to do same task
	for (x = 1; x <= 24 ; x++)
		if (x % 6)
			printf ("%d", x % 6);
		else 
			printf ("6\n");		
	return 0;
}
