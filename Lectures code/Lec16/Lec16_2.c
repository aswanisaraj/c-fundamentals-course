#include <stdio.h>

int main(){
	int i = 1, x, col_count = 0;
	FILE *file  = fopen("matrix.txt","r");
	while (i <= 25){
		fscanf (file, "%d", &x);	
		printf ("%d ", x);	
		i++;
		col_count++;
		if (col_count == 5){
			printf("\n");
			col_count = 0;
		}
	}	
	fclose(file);
	return 0;
}
