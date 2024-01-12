#include <stdio.h>

int hexToDec(char c[]){
	int i, n = 0, temp;
	for (i = 0 ; c[i] != 0 ; i++){
		if (c[i] >= '0' && c[i] <= '9')
			temp = c[i] - '0';
		else if (c[i] >= 'A' && c[i] <= 'F')
			temp = c[i] - 'A' + 10;
		else if (c[i] >= 'a' && c[i] <= 'f')
			temp = c[i] - 'a' + 10;
		else
			return -9999999;			
		n = n * 16 + temp;
	}
	return n;
}
int main(){
	char c[50];
	int n;
	printf ("Enter Number:");
	scanf("%s", c);
	n = hexToDec(c);
	printf ("Number: %d\n", n);
	return 0;
}
