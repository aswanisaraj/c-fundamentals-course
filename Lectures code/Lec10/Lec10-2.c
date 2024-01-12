/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	unsigned char c1 = rand() % 256;
	c1 = 21;
	printf ("%d\n", c1);
	printf ("First Two bits: %d\n", c1 & 3);
	printf ("Last six bits: %d\n", (c1 & 252) / 4 );
	c1 = 247;
	printf ("%u\n", c1);
	printf ("First two bits: %d\n", c1 & 3);
	printf ("Last six bits: %d\n", (c1 & 252) >> 2 );
	return 0;
}


*/






























#include<stdio.h>
int main(){
	int Number = 245;
	printf("%d\n",Number);
    printf("First two bits:%d\n", Number & 3);
    printf("last six bits:%d\n", (Number & 252)/4);
	printf("Last five bit:%d\n", (Number & 252)/8);
	
	return 0;

}