#include <stdio.h>

int main(){
	int count, i, x = 1;
	FILE *input  = fopen("numbers_with_count.txt","r");
	fscanf (input, "%d ", &count);	
	i = 1;
	while (i <= count){
		fscanf (input, "%d ", &x);	
		printf ("%d\n", x);
		i++;
	}	
	fclose(input);
	return 0;
}