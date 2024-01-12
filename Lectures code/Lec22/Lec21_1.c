#include <stdio.h>

int main(){
	int i, j, rows, count;
	printf ("Rows: ");
	scanf ("%d", &rows);
	printf ("Count: ");
	scanf ("%d", &count);
	for (i = 0 ; i < rows ; i++){
		for (j = 1 ; j <= count ; j++)
			printf ("*");
		for (j = 1 ; j <= count ; j++)
			printf ("%d", j);		
		printf ("\n");		
	}
	return 0;
}
