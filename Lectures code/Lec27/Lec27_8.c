#include <stdio.h>

int main(){
	char c1[50];
	int i, count = 0;
	printf ("Enter First String:");
	fgets(c1,50,stdin);
	for (i = 0 ; c1[i] != 0  ; i++)
		if (c1[i] >= 'a' && c1[i] <= 'z')
			count++;
	printf ("Small Alphabets Count: %d\n", count);
	return 0;
}
