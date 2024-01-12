#include <stdio.h>

void printStars(int n){
	int i;
	for (i = 1 ; i <= n ; i++)
		printf("*");
}
int main(){
	int i;
	for (i = 5 ; i <= 9 ; i++){
		printStars(i);
		printf ("\n");		
	}
	return 0;
}
