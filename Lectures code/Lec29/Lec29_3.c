#include <stdio.h>

void f1(int n){
	printf ("Address of N in function F1: %p\n", &n);
	printf ("Value of N in function F1: %d\n", n);
}
void f2(char c[]){
	printf ("Address of C in function F2: %p\n", c);
}
int main(){
	char c[50] ;
	int n = 10;
	f2(c);
	printf ("Address of C in main function: %p\n", c);
	f1(n);
	printf ("Address of N in main function: %p\n", &n);
	printf ("Value of N in main function: %d\n", n);
	return 0;
}
