#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int x, y;
	unsigned char c;
	srand(time(0));
	x = rand() % 16;
	y = rand() % 16;		//0 to 15 both inclusive
	//x = 11, y =13;
	printf ("X: %d\tY: %d\n", x, y);	
	c = x | (y << 4);
	printf ("C: %d\n", c);
	return 0;
}
