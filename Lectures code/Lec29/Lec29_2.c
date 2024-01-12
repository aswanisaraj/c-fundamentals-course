#include <stdio.h>

void f1(int n){
	printf ("Address of N in function F1: %p\n", &n);
}
int main(){
	int n = 10;
	f1(n);
	printf ("Address of N in main function: %p\n", &n);
	return 0;
}
