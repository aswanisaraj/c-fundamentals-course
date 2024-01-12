#include <stdio.h>

void swap(int x, int y){
	int temp = x;
	x = y;
	y = temp;
	printf ("X: %d\tY: %d\n", x, y);
}

int main(){
	int a = 5, b = 7;
	//pass by value
	swap(a, b);
	printf ("A: %d\tB: %d\n", a, b);
	return 0;
}
