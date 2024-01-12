#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// srand(time(0));// Comment this statement and run your program 3-4 times and check output
	int x;
	x = rand() % 90 + 10;
	printf ("X: %d\n", x);
	x = rand() % 90 + 10;
	printf ("X: %d\n", x);
	x = rand() % 90 + 10;
	printf ("X: %d\n", x);
	x = rand() % 90 + 10;
	printf ("X: %d\n", x);
	x = rand() % 90 + 10;
	printf ("X: %d\n", x);
	x = rand() % 90 + 10;
	printf ("X: %d\n", x);
	x = rand() % 90 + 10;
	printf ("X: %d\n", x);
	return 0;
}