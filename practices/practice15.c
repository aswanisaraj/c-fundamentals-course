/*  Fatima binte habib
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () 
{
  int randomnumbers[10];
  int i;
   for ( int i=0; i<9;i++);
  {
     randomnumbers[i]= rand()%100;
   }
for(int i=0;i<9;i++) 
{ 
 printf("%d, %d\n" , randomnumbers [i], randomnumbers [i+1]) ;
} 
return 0;
}


*/
/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i;
    int numbers[10];
    srand(time(0)); 

    for ( i = 0; i < 10; i++) {
        numbers[i] = rand() % 100; 
    }

    for (i = 0; i < 9; i++) {
        printf("%d %d\n", numbers[i], numbers[i + 1]);
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x, y;
	srand(time(0));
	x = rand();
	y = rand();
	for (int i = 0; i < 9; i++)
	{
		printf("%d %d\n", y, x);
		y = x;
		x = rand();
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, max = 0;

    srand(time(0));

     for (i = 0; i < 10; i++) {
        int randomNum = rand(); 
        printf("%d ", randomNum);
        
         if (randomNum> max) {
            max = randomNum;
        }
    }
    printf("\nMaximum Number: %d\n", max);

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x, y, sum = 0, max = 0;
	srand(time(0));
	x = rand();
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", x);
		y = x;
		x = rand();
		sum = x + y;
		if (sum > max)
		max = sum;
	}
	printf ("\n");
	printf ("%d\n", max);
	return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int x,y=0;
	srand(time(0));
	for(int i=0;i<10;i++)
	{
	x = rand();
	printf("%d ",x);
	if(x>y)
	y=x;
	}
	printf("\n");
	printf("the max number is %d\n",y);
	return 0;
}
*/