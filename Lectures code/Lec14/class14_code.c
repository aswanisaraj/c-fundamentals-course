/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	int a[10], i, j, temp;
	char choice;
	srand(time(0));
	for (i = 0 ; i < 10 ; i++){
		a[i] = rand();
		printf("%d ", a[i]);
	}
	printf("\nPress any key to continue\n");
	scanf("%c", &choice);
	//Bubble Sort technique to arrange elements from smallest to largest
	for (j = 0 ; j < 9 ; j++)
		for (i = 0 ; i < 9 ; i++)
			if (a[i] > a[i + 1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
	for (i = 0 ; i < 10 ; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
*/




/*


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialize_array(int x[], int size){
	int i;
	for (i = 0 ; i < size ; i++)
		x[i] = rand();
}
void print_array(int x[], int size){
	int i;
	for (i = 0 ; i < size ; i++)
		printf("%d ", x[i]);
	printf("\n");
}

int main(){
	int a[20], i, j, temp;
	char choice;
	srand(time(0));
	initialize_array(a, 20);
	print_array(a, 10);
	printf("\nPress any key to continue\n");
	scanf("%c", &choice);
	//Bubble Sort technique to arrange elements from smallest to largest
	for (j = 0 ; j < 19 ; j++)
		for (i = 0 ; i < 19 ; i++)
			if (a[i] > a[i + 1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
	print_array(a, 20);
	return 0;
}

*/



/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialize_array(int x[], int size){
	int i;
	for (i = 0 ; i < size ; i++)
		x[i] = rand();
}
void print_array(int x[], int size){
	int i;
	for (i = 0 ; i < size ; i++)
		printf("%d ", x[i]);
	printf("\n");
}

int main(){
	int a[20], i, j, temp;
	char choice;
	srand(time(0));
	initialize_array(a, 20);
	print_array(a, 10);
	printf("\nPress any key to continue\n");
	scanf("%c", &choice);
	//Bubble Sort technique to arrange elements from smallest to largest
	for (j = 0 ; j < 19 ; j++)
		for (i = 0 ; i < 19 ; i++)
			if (a[i] > a[i + 1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
	print_array(a, 20);
	return 0;
}
*/

/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialize_array(int x[], int size){
	int i;
	for (i = 0 ; i < size ; i++)
		x[i] = rand();
}
void print_array(int x[], int size){
	int i;
	for (i = 0 ; i < size ; i++)
		printf("%d ", x[i]);
	printf("\n");
}
void move_larger_value_to_right_side(int a[], int size){
	int i, temp;
	for (i = 0 ; i < size - 1 ; i++)
		if (a[i] > a[i + 1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
}
void bubble_sort(int y[], int size){
	int j;
	for (j = 0 ; j < 9 ; j++)
		move_larger_value_to_right_side(y, size);
}

int main(){
	int a[10], i, j, temp;
	char choice;
	srand(time(0));
	initialize_array(a, 10);
	print_array(a, 10);
	printf("\nPress any key to continue\n");
	scanf("%c", &choice);
	bubble_sort(a, 10);	
	print_array(a, 10);
	return 0;
}

*/
/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialize_array(int x[], int size){
	int i;
	for (i = 0 ; i < size ; i++)
		x[i] = rand() %20;
}
void print_array(int x[], int size){
	int i;
	for (i = 0 ; i < size ; i++)
		printf("%d ", x[i]);
	printf("\n");
}
int find_sum(int a[], int size){
	int i, sum = 0;
	for (i = 0 ; i < size ; i++)
		sum += a[i];
	return sum;
}

int main(){
	int a[10], b[10];
	srand(time(0));
	initialize_array(a, 10);
	initialize_array(b, 10);
	print_array(a, 10);
	print_array(b, 10);
	printf("Sum of A: %d\n", find_sum(a, 10));
	printf("Sum of B: %d\n", find_sum(b, 10));
	return 0;
}

*/