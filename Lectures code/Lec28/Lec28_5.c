#include <stdio.h>

int toNumber(char c[]){
	int i, n = 0;
	for (i = 0 ; c[i] != 0 ; i++){
		if (c[i] < '0' || c[i] > '9')
			return -9999999;
		n = n * 10 + c[i] - '0';
	}
	return n;
}
int main(){
	char c[50];
	int n;
	printf ("Enter Number:");
	scanf("%s", c);
	n = toNumber(c);
	printf ("Number: %d\n", n);
	return 0;
}
