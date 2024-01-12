#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int x, g;
	x = rand() % 10;
	g = x + 1;
	while (g != x){
		printf ("Guess Number: ");
		scanf("%d", &g);	
		if (g != x)
			printf ("Incorrect, Try Again\n");
	}
	printf ("Correct Answer\n");
	return 0;
}