/*

#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>



int main(){
	int a[5] = {23, 15, 19, 67, 34};
	printf("First Element: %d\n", a[0]);
	printf("Second Element: %d\n", a[1]);
	printf("Third Element: %d\n", a[2]);
	printf("Fourth Element: %d\n", a[3]);
	printf("Fifth Element: %d\n", a[4]);	
	return 0;
}

*/

/*
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

int main(){
	int a[5] = {23, 15, 19, 67, 34}, i;
	for (i = 0 ; i < 5 ; i++)
		printf("Element at index %d is: %d\n", i, a[i]);
	return 0;
}

*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	int a[10], i;
	srand(time(0));
	for (i = 0 ; i < 10 ; i++){
		a[i] = rand();
		printf("Element at index %d is: %d\n", i, a[i]);
	}
	return 0;
}
*/

/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	int a[10], i, sum = 0, average;
	srand(time(0));
	for (i = 0 ; i < 10 ; i++){
		a[i] = rand();
		printf("%d ", a[i]);
		sum = sum + a[i];
	}
	average = sum / 10;
	printf("\nAverage: %d\n", average);
	for (i = 0 ; i < 10 ; i++)
		if (a[i] > average)
			printf("%d ", a[i]);
	printf("\n");
	return 0;
}
*/

/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	int a[10], i, count = 0;
	srand(time(0));
	for (i = 0 ; i < 10 ; i++){
		a[i] = rand() % 20  + 100;
		printf("%d ", a[i]);
		if (a[i] % 2 == 0)	count++;
	}
	printf("\nEven Count: %d\n", count);
	return 0;
}

*/


