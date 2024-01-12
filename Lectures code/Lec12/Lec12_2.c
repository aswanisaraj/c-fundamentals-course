#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int x, g;
	x = rand() % 10;
	printf ("Guess Number: ");
	scanf("%d", &g);
	if (g == x)
		printf ("Correct Answer in First Attempt\n");
	else{
		printf ("Guess Number Again: ");
		scanf("%d", &g);
		if (g == x)
			printf ("Correct Answer in Second Attempt\n");
		else{
			printf ("Guess Number Again: ");
			scanf("%d", &g);
			if (g == x)
				printf ("Correct Answer in Third Attempt\n");
			else{
				printf ("Guess Number Again: ");
				scanf("%d", &g);
				if (g == x)
					printf ("Correct Answer in Fourth Attempt\n");
				else
					printf ("Sorry, You Fail to Guess in Four Attempts, Correct Answer is: %d\n", x);
			}
		}
	}
	return 0;
}
