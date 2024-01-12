#include <stdio.h>
#include <math.h>

int main(){
	int angle;
	float x = 0.2;
	for ( ; x <= 2.001 ; x += 0.1){
		printf ("%f\t%f\n", x, floor(x));
	}
	return 0;
}
