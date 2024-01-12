#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	unsigned char c1 = rand() % 256;
	c1 = 21;
	printf ("%d\n", c1);
	printf ("First three bits: %d\n", c1 & 7);
	printf ("Last five bits: %d\n", (c1 & 248) / 8 );
	c1 = 247;
	printf ("%u\n", c1);
	printf ("First three bits: %d\n", c1 & 7);
	printf ("Last five bits: %d\n", (c1 & 248) >> 3 );
	return 0;
}