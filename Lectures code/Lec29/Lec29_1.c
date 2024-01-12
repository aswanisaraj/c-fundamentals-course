#include <stdio.h>

int main(){
	char c[50] ;
	int n = 10;
	double d = 2.35;
	char ch = '*';
	printf ("Address of C: %d\n", c);
	printf ("Address of N: %d\n", &n);
	printf ("Address of D: %p\n", &d);
	printf ("Address of Ch: %p\n", &ch);
	printf ("Value of N: %d\n", n);
	printf ("Value of D: %d\n", d);
	printf ("Value of Ch: %d\n", ch);
	return 0;
}
