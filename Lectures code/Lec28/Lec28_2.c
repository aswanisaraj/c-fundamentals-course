#include <stdio.h>

int main(){
	char c[50];
	int i, n = 0;
	printf ("Enter Number:");
	scanf("%s", c);
	for (i = 0 ; c[i] != 0 ; i++)
		n = n + c[i];
	printf ("Sum: %d\n", n);
	return 0;
}
