#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int count, i, x = 1;
	FILE *input  = fopen("test.txt","w");
	i = 1;
	//Writing both negative and positive numbers
	while (i <= 100){
		x = rand() % 100 - 50;
		fprintf (input, "%d ", x);	
		i++;
	}	
	fclose(input);
	return 0;
}