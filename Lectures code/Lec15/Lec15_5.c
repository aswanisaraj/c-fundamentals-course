#include <stdio.h>

int main(){
	int x = 1;
	FILE *file  = fopen("numbers_ending_on_negative.txt","r");
	while (x >= 0){
		fscanf (file, "%d ", &x);	
		if (x >= 0)
			printf ("%d\n", x);
	}	
	fclose(file);
	return 0;
}