#include <stdio.h>

int main(){
	int i = 0, x;
	FILE *file  = fopen("matrix.txt","r");
	while (i < 16){
		fscanf (file, "%d", &x);	
		printf ("%d ", x);	
		i++;
		if (i % 4 == 0)
			printf("\n");
	}	
	fclose(file);
	return 0;
}
