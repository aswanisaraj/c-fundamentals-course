#include <stdio.h>

int main(){
	int x = 8;
	if ((x & 8) == 0)
		printf ("Fourth bit is off in %d\n", x);	
	else
		printf ("Fourth bit is on in %d\n", x);	
	x = 15;
	if ((x & 8) == 8)
		printf ("Fourth bit is on in %d\n", x);	
	else
		printf ("Fourth bit is off in %d\n", x);	
	x = 24;
	if ((x & 8) == 8)
		printf ("Fourth bit is on in %d\n", x);	
	else
		printf ("Fourth bit is off in %d\n", x);		
	x = 40;
	if ((x & 8) == 8)
		printf ("Fourth bit is on in %d\n", x);	
	else
		printf ("Fourth bit is off in %d\n", x);	
	x = 32;
	if ((x & 8) == 8)
		printf ("Fourth bit is on in %d\n", x);	
	else
		printf ("Fourth bit is off in %d\n", x);	
	x = 64;
	if ((x & 8) == 8)
		printf ("Fourth bit is on in %d\n", x);	
	else
		printf ("Fourth bit is off in %d\n", x);		
	x = 96;
	if ((x & 8) == 8)
		printf ("Fourth bit is on in %d\n", x);	
	else
		printf ("Fourth bit is off in %d\n", x);
	return 0;
}