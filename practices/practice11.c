#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int i, x = rand() % 50, y = rand() % 50;
	printf ("X: %d\tY:%d\n", x, y);
	if (x <= y)
		for (i = x; i <= y ; i++)
			printf ("%d\n", i);
	else
		for (i = y; i <= x ; i++)
			printf ("%d\n", i);
	printf ("\n");
	return 0;
}



	







	
	
	
