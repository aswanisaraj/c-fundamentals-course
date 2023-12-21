#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int i, x = rand() % 50, y = rand() % 50, temp;
	printf ("X: %d\tY:%d\n", x, y);
	if (x > y){
		temp = x;
		x = y;
		y = temp;
	}
	for (i = x; i <= y ; i++)
			printf ("%d ", i);
	printf ("\n");
	return 0;
}



	







	
	
	
