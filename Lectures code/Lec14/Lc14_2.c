#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Write a program to generate 10 random numbers, print them
//in a single line, print their sum in next line

int main(){
	srand(time(0));
	int i, n, sum;
	i = 1;
	sum = 0;
	while (i <= 10){
		n = rand() % 10;
		printf ("%d ", n);
		sum = sum + n;
		i++;
	}
	printf ("\nSum:%d \n", sum);
	return 0;
}