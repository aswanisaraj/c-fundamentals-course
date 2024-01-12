#include <stdio.h>

int findFactorial(int n){
	int i, res = 1;
	for (i = 1 ; i <= n ; i++)
		res *= i;
	return res;
}
int main(){
	int i, n = 9;
	for (i = 1 ; i <= n ; i++){
		printf ("%d\t%d\n", i, findFactorial(i));		
	}
	return 0;
}
