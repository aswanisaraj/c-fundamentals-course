#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand((unsigned int)time(0));
	int i = 1, x;
	FILE *file  = fopen("matrix.txt","w");
	while (i <= 25){
		x = rand() % 10;
		fprintf (file, "%d ", x);	

		i++;
	}	
	fclose(file);
	return 0;
}

