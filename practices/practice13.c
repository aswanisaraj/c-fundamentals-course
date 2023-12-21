#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	unsigned char x = rand() % 256, mask = 1;
	printf ("X: %d\n", x);
	int i;
	for (i = 1; i <= 8 ; i++){
		if ((x & mask) == mask)
			printf ("Bit %d is on\n", i);
		else
			printf ("Bit %d is off\n", i);
		mask = mask * 2;
	}
	return 0;
}



	







	
	
	
