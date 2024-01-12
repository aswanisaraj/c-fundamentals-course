#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int x = 1;
	while (x != 1000){
		printf ("*");
		x = rand();
	}
	printf ("\nLoop Terminated\n");
	return 0;
}