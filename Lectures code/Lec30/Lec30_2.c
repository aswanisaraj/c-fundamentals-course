#include <stdio.h>

//pass by reference
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;	
}

int main(){
	int a = 5, b = 7;
	printf ("Value before swap::	A: %d\tY: %d\n", a, b);
	//pass by reference
	swap(&a, &b);
	printf ("Value after swap::	A: %d\tY: %d\n", a, b);
	return 0;
}
