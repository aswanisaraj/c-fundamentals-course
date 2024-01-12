/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int rows, columns, count = 1;
	srand(time(0));
	rows = rand() % 5 + 5;
	columns = rand() % 5 + 5;
	for (int i = 1; i <= rows; i++){
		int k = 1;
		for (int j = 0; j < columns; j++){
			printf ("%3d", k);
			k = k + count;
		}
		count++;
		printf ("\n");	
	}
	return 0;
}
*/
/*


#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

int main(){
	int option;
	do{
		printf ("1. Open Account\n");
		printf ("2. Transaction\n");
		printf ("3. Report\n");
		printf ("4. Close Account\n");
		printf ("5. Exit\n");
		do{
			printf ("\nEnter your option 1-5: ");
			scanf("%d", &option);
		}while (option <1 || option >5);
		if (option == 1)		printf ("\nAccount successfully opened\n");
		else if (option == 2)	printf ("\nTransaction successfully completed\n");
		else if (option == 3)	printf ("\nReport Generated\n");
		else if (option == 4)	printf ("\nAccount closed\n");
		else 					break;//Terminate outer loop because break statement is inside outer loop
	}while(option != 5);		//we can also write while(1)
	printf ("\nThanks for using the program\n");
	return 0;
}

*/
