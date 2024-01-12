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
	for (i = 1 ; i <= 9 ; i++){
		printCounting(i);
		printStars(i);
		printSpaces(i);
		printCounting(i);
		printf ("\n");		
	}
	return 0;
}
