#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Write a program to generate 10 pair of random numbers inside loop, print 
//each pair in a seperate line, count how many times first number is 
//larger than second number

int main(){
	srand(time(0));
	int i, n1, n2, count = 0;
	i = 1;
	while (i <= 10){
		n1 = rand() %1000;
		n2 = rand()%1000;
		printf ("%d %d\n", n1, n2);
		if (n1 > n2)
			count++;
		i++;
	}
	printf ("\nFirst Larger Count:%d \n", count);
	return 0;
}