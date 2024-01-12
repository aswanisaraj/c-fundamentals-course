#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	long int x, f, s, i;
	for (i = 0 ; i < 20 ; i++){
		x = rand() % 90 + 10;
		printf ("X: %ld\n", x);
		f = x / 10;
		s = x % 10;
		if (x == 10)			printf ("Ten\n");
		else if (x == 11)		printf ("Eleven\n");
		else if (x == 12)		printf ("Tweleve\n");
		else if (x == 13)		printf ("Thirteen\n");
		else if (x == 14)		printf ("Fourteen\n");
		else if (x == 15)		printf ("Fifteen\n");
		else if (x == 16)		printf ("Sixteen\n");
		else if (x == 17)		printf ("Seventeen\n");
		else if (x == 18)		printf ("Eighteen\n");
		else if (x == 19)		printf ("Nineteen\n");
		else{
			if (f == 2)			printf ("Twenty ");
			else if (f == 3)	printf ("Thirty ");
			else if (f == 4)	printf ("Fourty ");
			else if (f == 5)	printf ("Fifty ");
			else if (f == 6)	printf ("Sixty ");
			else if (f == 7)	printf ("Seventy ");
			else if (f == 8)	printf ("Eighty ");
			else if (f == 9)	printf ("Ninety ");
			if (s == 1)			printf ("One\n");
			else if(s == 2)		printf ("Two\n");
			else if (s == 3)	printf ("Three\n");
			else if (s == 4)	printf ("Four\n");
			else if (s == 5)	printf ("Five\n");
			else if (s == 6)	printf ("Six\n");
			else if (s == 7)	printf ("Seven\n");
			else if (s == 8)	printf ("Eight\n");
			else if (s == 9)	printf ("Nine\n");
			else				printf ("\n");
		}
	}
	return 0;
}