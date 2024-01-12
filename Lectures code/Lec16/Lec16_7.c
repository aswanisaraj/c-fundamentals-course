#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int i = 1, x;
	FILE *file  = fopen("marks.txt","w");
	while (i <= 60){
		x = rand() % 100;
		fprintf (file, "%d ", x);	
		i++;
	}	
	fclose(file);
	return 0;
}
