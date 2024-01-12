#include <stdio.h>
#include <math.h>

float toRadian(float degree){
	return degree * 22 / 7 / 180;
}
#define EPSILON 0.001

int main(){
	int angle;
	float cos_value, sin_value, cos_sin_sq;
	printf (" Angle\t  Cos\t\t  Sin\t\tCos^2+Sin^2\n");
	for (angle = 0 ; angle <= 180 ; angle += 15){
		cos_value = cos(toRadian(angle));
		sin_value = sin(toRadian(angle));
		//To check and set value zero against some value very close to zero bout not exactly zero
		if (cos_value < EPSILON && cos_value > -EPSILON  )			cos_value = 0;
		//To check and set value one against some value very close to one bout not exactly one
		if (cos_value < 1 + EPSILON && cos_value > 1 - EPSILON  )	cos_value = 1;
		if (sin_value < EPSILON && sin_value > -EPSILON  )			sin_value = 0;
		if (sin_value < 1 + EPSILON && sin_value > 1 - EPSILON  )	sin_value = 1;
		cos_sin_sq = cos_value * cos_value +  sin_value * sin_value;
		printf ("%d\t%f\t%f\t%f\n", angle, cos_value, sin_value, cos_sin_sq);
	}
	return 0;
}
