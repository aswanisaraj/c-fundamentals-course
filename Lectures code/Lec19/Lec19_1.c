
/*
#include <stdio.h>
#include <math.h>

#define CONVERTTORADIAN 22.0 / 7 / 180
int main(){
	int angle;
	float cos_value, sin_value;
	printf (" Angle\t  Cos\t\t  Sin\n");
	for (angle = 0 ; angle <= 90 ; angle += 15){
		cos_value = cos(angle * CONVERTTORADIAN);
		sin_value = sin(angle * CONVERTTORADIAN);
		printf ("%d\t%f\t%f\n", angle, cos_value, sin_value);
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main() {
double result = 1.8 + 0.2;
if (result > 2.0)
	printf("1.8 + 0.2 is greater than 2.0\n");
else if (result < 2.0) {
	printf("1.8 + 0.2 is less than 2.0\n");
}else
	printf("1.8 + 0.2 is equal to 2.0\n");
return 0;
}
*/
#include <stdio.h>
#include <math.h>
int main() {
double result = 1.8 + 0.2;
double epsilon = 0.000001; // Adjust the epsilon based on your requirements
if (fabs(result - 2.0) < epsilon)
printf("1.8 + 0.2 is approximately equal to 2.0\n");
else if (result > 2.0)
printf("1.8 + 0.2 is greater than 2.0\n");
else
printf("1.8 + 0.2 is less than 2.0\n");
return 0;
}