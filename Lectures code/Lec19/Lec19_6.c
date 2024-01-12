#include <stdio.h>
#include <math.h>

double my_round(double d){
	int temp = d;//Integer Part
	d = d - temp;//Decimal Part
	if (d < 0.5)	return temp;
	return temp + 1;
}

int main(){
	int angle;
	float x = 0.2;
	for ( ; x <= 2.001 ; x += 0.1){
		printf ("%f\t%f\t%f\t%f\n", x, floor(x), ceil(x), my_round(x));
	}
	return 0;
}
