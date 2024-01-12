#include <stdio.h>

int main(){
	int x;
	//int a, b, c, d;// to read all values in single function
	FILE *file  = fopen("numbers.txt","r");
	//We may read all values in single function
	//fscanf (file, "%d %d %d %d", &a, &b, &c, &d);
	fscanf (file, "%d ", &x);
	printf ("%d\n", x);
	fscanf (file, "%d ", &x);
	printf ("%d\n", x);
	fscanf (file, "%d ", &x);
	printf ("%d\n", x);
	fscanf (file, "%d ", &x);
	printf ("%d\n", x);
	fclose(file);
	return 0;
}