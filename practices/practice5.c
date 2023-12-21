#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	unsigned int x, y, a, b;
	unsigned char c;
	srand(time(0));
	x = rand() % 16;
	y = rand() % 16;		//0 to 15 both inclusive
	printf ("X: %d\tY: %d\n", x, y);	
	c = x | (y << 4);
	a = c >> 4;	//y
	b = c & 15;	//x
	printf ("B: %d\tA: %d\n", b, a);	
	return 0;
}










	
	
	
