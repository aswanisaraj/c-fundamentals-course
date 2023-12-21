#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	unsigned char x, y, shiftX, shiftY, notX, notY;
	srand(time(0));
	x = rand() % 256;
	y = rand() % 256;
	printf ("X: %d, Y: %d\n", x, y);
	printf ("X ^ y: %d\n", x ^ y);
	
	notX = ~x;
	notY = ~y;
	printf ("Not X: %d\n", notX);
	printf ("Not Y: %d\n", notY);
	
	printf ("Shift X left two bits: %d\n", x >> 2);
	printf ("Shift Y left three bits: %d\n", y >> 3);
		
	x = rand() % 32;
	y = rand() % 16;
	printf ("X: %d, Y: %d\n", x, y);
	shiftX = x << 2;
	shiftY = y << 3;
	printf ("Shift X right two bits: %d\n", shiftX);
	printf ("Shift Y right three bits: %d\n", shiftY);
	return 0;
}



	







	
	
	
