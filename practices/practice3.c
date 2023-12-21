#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int x;
	srand(time(0));
	x = rand();
	printf ("X: %d\n", x);
	printf ("X & 32904: %d\n", x & 32904);
	return 0;
}










	
	
	
