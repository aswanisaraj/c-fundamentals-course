#include <stdio.h>

int main(){
	int i, j, rows, stars, count;
	printf ("Rows: ");
	scanf ("%d", &rows);
	printf ("Stars: ");
	scanf ("%d", &stars);
	printf ("Count: ");
	scanf ("%d", &count);
	for (i = 0 ; i < rows ; i++){
		for (j = 1 ; j <= stars ; j++)
			printf ("*");
		for (j = 1 ; j <= count ; j++)
			printf ("%d", j);		
		printf ("\n");		
	}
	return 0;
}
