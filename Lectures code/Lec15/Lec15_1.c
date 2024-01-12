#include <stdio.h>

int main(){
	int x;
	FILE *file  = fopen("numbers.txt","w");
	fprintf (file, "%d ", 24);
	fprintf (file, "%d ", 37);
	fprintf (file, "%d\n", 48);
	fprintf (file, "%d ", 20);
	fclose(file);
	return 0;
}