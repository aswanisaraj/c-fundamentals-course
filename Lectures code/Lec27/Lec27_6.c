#include <stdio.h>

int main(){
	char c[200];
	int i;
	printf ("Enter Your Complete Name:");
	fgets(c,100,stdin);
	// scanf("%[^\n]",c);
	for (i = 0 ; c[i] != 0 ; i++);//null statement or empty statement
	printf ("Length: %d\n", i);
	return 0;
}
