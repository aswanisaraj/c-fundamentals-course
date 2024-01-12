#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int x = 2;
	while (x == 2){
		printf ("*");
		x = rand();
	}
	printf ("\nLoop Terminated\n");
	return 0;
}