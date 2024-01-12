#include <stdio.h>

void printStars(int n){
	int i;
	for (i = 1 ; i <= n ; i++)
		printf("*");
}
void printSpaces(int n){
	int i;
	for (i = 1 ; i <= n ; i++)
		printf(" ");
}
void printCounting(int n){
	int i;
	for (i = 1 ; i <= n ; i++)
		printf("%d", i);
}
int main(){
	int i, n = 9;
	for (i = 1 ; i <= n ; i++){
		printSpaces(i-1);
		printf ("%d", i);		
		printSpaces((n * 2) - 2 * i );
		printf ("%d\n", i);		
	}
	return 0;
}
