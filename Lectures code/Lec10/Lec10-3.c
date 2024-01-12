#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	unsigned int a = rand() % 200, b = rand() % 200, c = rand() % 200, temp ;
	printf ("A: %d\tB: %d\tC: %d\n", a, b, c);

	if (a > b){	temp = a;	a = b;	b = temp;	}
	if (b > c){	temp = c;	c = b;	b = temp;	}
	if (a > b){	temp = a;	a = b;	b = temp;	}
	printf ("A: %d\tB: %d\tC: %d\n\n\n", a, b, c);
	return 0;

}