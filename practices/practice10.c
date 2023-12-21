#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int tableno = rand() % 10, x;
	for (x = 1; x <= 10 ; x++)
		printf ("%d\t*\t%d\t=\t%d\n", tableno, x, tableno * x);
	return 0;
}



	







	
	
	
