#include <stdio.h>

int main(){
	int i = 1, x;
	FILE *file  = fopen("matrix.txt","r");
	while (i <= 25){
		fscanf (file, "%d", &x);	
		printf ("%d ", x);	
		i++;
	}	
	fclose(file);
	return 0;
}
