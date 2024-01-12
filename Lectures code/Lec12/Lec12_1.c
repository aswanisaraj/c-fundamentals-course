#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int a, b, c, d, max;
	a = rand();
	b = rand();
	c = rand();
	d = rand();
	printf ("A: %d\nB: %d\nC: %d\nD: %d\n", a, b, c, d);
	max = a;
	if (b > max)	max = b;
	if (c > max)	max = c;
	if (d > max)	max = d;
	printf ("Max: %d\n", max);
	return 0;
}