#include <stdio.h>

int main(){
	int x;
	FILE *file  = fopen("mix_numbers.txt","r");
	//To print positive values only
	fscanf (file, "%d ", &x);
	if (x >= 0)
		printf ("%d\n", x);
	fscanf (file, "%d ", &x);
	if (x >= 0)
		printf ("%d\n", x);
	fscanf (file, "%d ", &x);
	if (x >= 0)
		printf ("%d\n", x);
	fscanf (file, "%d ", &x);
	if (x >= 0)
		printf ("%d\n", x);
	fscanf (file, "%d ", &x);
	if (x >= 0)
		printf ("%d\n", x);
	fscanf (file, "%d ", &x);
	if (x >= 0)
		printf ("%d\n", x);
	fclose(file);
	return 0;
}