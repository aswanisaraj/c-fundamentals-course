#include <stdio.h>

int main(){

    int x;
	//Writing in two files
	FILE *file1  = fopen("number1.txt","w");
	FILE *file2  = fopen("number2.def","w");
	fprintf (file1, "%d ", 24);
	fprintf (file1, "%d ", 37);
	fprintf (file2, "%d\n", 48);
	fprintf (file2, "%d ", 20);
	fclose(file1);
	fclose(file2);
	return 0;
}