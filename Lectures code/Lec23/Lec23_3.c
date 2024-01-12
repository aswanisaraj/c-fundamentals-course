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
	int i;
	for (i = 1 ; i <= 5 ; i++){
		printSpaces(i-1);
		printf ("%d", i);		
		printSpaces(10 - 2 * i );
		printf ("%d\n", i);		
	}
	return 0;
}
