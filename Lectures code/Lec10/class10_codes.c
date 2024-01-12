/*
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

void printCounting(int n){
	int i;
	for (i = 1 ; i <= n ; i++)
		printf ("%d ", i);
	printf ("\n");
}


int main(){
	printCounting(20);
	printf ("\n_***************_\n");	
	printCounting(20);
	return 0;
}

*/
 


/*
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

void printCounting(int n){
	int i;
	for (i = 1 ; i <= n ; i++)
		printf ("%d ", i);
	printf ("\n");
}

void printXPowerY(int x, int n){
	int i, res = 1;
	for (i = 1 ; i <= n ; i++)
		res = res * x;
	printf ("%d^%d: %d\n", x, n, res);
}

void execute(){
	printXPowerY(2, 8);
	printCounting(10);
	printXPowerY(3, 6);
}

int main(){
	execute();
	return 0;
}
*/


/*

#include <stdio.h>
#include <math.h>
//#include <stdlib.h>
//#include <time.h>

void findQuadraticRoots(int a, int b, int c){//This function has three parameters a, b, & c. Whenever, function will be called, the
	float x1, x2, disc, _2a;				//caller will pass values for these three parameters
	disc = b * b - 4 * a * c;
	disc = sqrt (disc);
	_2a = 2 * a;
	x1 = (-b + disc ) / _2a;
	x2 = (-b - disc ) / _2a;
	printf("X1: %f, X2: %f\n", x1, x2);
}

int main(){
	findQuadraticRoots(2, 5, 3);
	findQuadraticRoots(3, 5, 2);
	findQuadraticRoots(-3, 5, 2);
	return 0;
}

*/



/*
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

int findAreaOfRectangle(int width, int length){
	return width * length;
}

int main(){
	int area;
	area = findAreaOfRectangle(3, 5);
	printf ("Area: %d\n", area);
	printf ("**********\n");
	printf ("Area: %d\n", findAreaOfRectangle(4, 6));
	return 0;
}

*/





