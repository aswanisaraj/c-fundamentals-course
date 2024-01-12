#include <stdio.h>

int power(int x, int y){
	if (y == 0)	return 1;
	if (y == 1)	return x;
	int res = power(x, y / 2 );
	return res * res;
}
int main(){
	printf ("2^8=%d\n", power(2, 10));
	printf ("2^16=%d\n", power(2, 20));
	printf ("2^10=%d\n", power(2, 30));
	return 0;
}