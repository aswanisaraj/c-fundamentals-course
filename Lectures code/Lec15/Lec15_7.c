#include <stdio.h>

int main(){
	int count, i, x = 1;
	FILE *input  = fopen("numbers_with_count.txt","r");
	fscanf (input, "%d ", &count);	
	i = 0;
	while (i <= count+2	){
		fscanf (input, "%d ", &x);	
		printf ("%d\n", x);
		i++;
	}	
	fclose(input);
	return 0;
}