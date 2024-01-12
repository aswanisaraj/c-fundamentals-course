#include <stdio.h>

int main(){
	int i = 0, x, rows, cols;
	FILE *file  = fopen("matrix1.txt","r");
	fscanf (file, "%d", &rows);	
	fscanf (file, "%d", &cols);	
	while (i < rows * cols){
		fscanf (file, "%d", &x);	
		printf ("%d ", x);	
		i++;
		if (i % cols == 0)
			printf("\n");
	}	
	fclose(file);
	return 0;
}
