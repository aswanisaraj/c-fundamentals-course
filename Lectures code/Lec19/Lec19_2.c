#include <stdio.h>
#include <math.h>

float toRadian(float degree){
	return degree * 22 / 7 / 180;
}
int main(){
	int angle;
	float cos_value, sin_value, cos_sin_sq;
	printf (" Angle\t  Cos\t\t  Sin\t\tCos^2+Sin^2\n");
	for (angle = 0 ; angle <= 90 ; angle += 15){
		cos_value = cos(toRadian(angle));
		sin_value = sin(toRadian(angle));
		cos_sin_sq = cos_value * cos_value +  sin_value * sin_value;
		printf ("%d\t%f\t%f\t%f\n", angle, cos_value, sin_value, cos_sin_sq);
	}
	return 0;
}
