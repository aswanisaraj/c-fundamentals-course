#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Write a program to generate 10 random numbers, print them
//in a single line, count even numbers

int main(){
	srand(time(0));
	int i, n, count = 0;
	i = 1;
	while (i <= 10){
		n = rand() % 50;
		printf ("%d ", n);
		if (n % 2 == 0)
			count++;
		i++;
	}
	printf ("\nEven Count:%d \n", count);
	return 0;
}