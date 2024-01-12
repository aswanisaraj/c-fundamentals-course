#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int i = 0, x, sum = 0;
	FILE *file  = fopen("marks.txt","r");
	while (i < 60){
		fscanf (file, "%d", &x);			
		printf ("%d ", x);	
		i++;
		sum = sum + x;
		if (i % 20 == 0){
			printf ("%f\n", sum / 20.0);
			sum = 0;
		}
	}	
	fclose(file);
	return 0;
}
