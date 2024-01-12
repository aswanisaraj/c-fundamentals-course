#include <stdio.h>

int main(){
	char c1[50], c2[50];
	int i;
	printf ("Enter First String: ");
	fgets(c1,50,stdin);
	printf ("Enter Second String: ");
	fgets(c2,50,stdin);
	for (i = 0 ; c1[i] != 0 && c2[i] != 0 ; i++)
		if (c1[i] != c2[i])	break;
	if (c1[i] == 0 && c2[i] == 0)
		printf ("Both Strings are Same\n");
	else if (c1[i] > c2[i])
		printf ("First String is Larger\n");
	else
		printf ("Second String is Larger\n");
	return 0;
}
