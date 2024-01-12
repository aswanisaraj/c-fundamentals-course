/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define LIMIT 100

void b_sort(int a[]){
	int i, j, temp;
	for (j = 0 ; j < SIZE - 1 ; j++)
		for (i = 0 ; i < SIZE - 1 ; i++)
			if (a[i] > a[i + 1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
}
void init_random(int x[]){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		x[i] = rand() % LIMIT;
}
void show_array(int x[]){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		printf("%d ", x[i]);
	printf("\n");	
}
int main(){
	int a[SIZE];
	srand(time(0));
	init_random(a);
	show_array(a);
	char temp;	
	printf("\nPress any key to continue\n");
	scanf("%c", &temp);
	b_sort(a);
	show_array(a);
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define LIMIT 1000

int find_index_of_smallest_element(int a[], int start){
	int i, minIndex = start;
	for (i = start + 1 ; i < SIZE ; i++)
			if (a[minIndex] > a[i])
				minIndex = i;
	return minIndex;
}
void init_random(int x[]){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		x[i] = rand() % LIMIT;
}
void show_array(int x[]){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		printf("%d ", x[i]);
	printf("\n");	
}
int main(){
	int a[SIZE], minIndex;
	srand(time(0));
	init_random(a);
	show_array(a);
	minIndex = find_index_of_smallest_element(a, 0);
	printf("The minimum element starting from %d is %d at index %d\n", 0, a[minIndex], minIndex);
	minIndex = find_index_of_smallest_element(a, 3);
	printf("The minimum element starting from %d is %d at index %d\n", 3, a[minIndex], minIndex);
	minIndex = find_index_of_smallest_element(a, 7);
	printf("The minimum element starting from %d is %d at index %d\n", 7, a[minIndex], minIndex);
	return 0;
}


*/

/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define LIMIT 1000

int find_index_of_smallest_element(int a[], int start){
	int i, minIndex = start;
	for (i = start + 1 ; i < SIZE ; i++)
			if (a[minIndex] > a[i])
				minIndex = i;
	return minIndex;
}
int selection_sort(int a[]){
	int i, minIndex, temp;
	for (i = 0 ; i < SIZE - 1 ; i++){
		minIndex = find_index_of_smallest_element(a, i);
		if (minIndex != i){
			temp = a[i];
			a[i] = a[minIndex];
			a[minIndex] = temp;
		}
	}
}

void init_random(int x[]){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		x[i] = rand() % LIMIT;
}
void show_array(int x[]){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		printf("%d ", x[i]);
	printf("\n");	
}
int main(){
	int a[SIZE], minIndex;
	srand(time(0));
	init_random(a);
	show_array(a);
	selection_sort(a);
	show_array(a);
	return 0;
}

*/