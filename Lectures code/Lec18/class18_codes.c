/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define LIMIT 100

void insert_in_order(int x[], int pos){
	int i, temp = x[pos];
	for (i = pos - 1 ; i >= 0 && x[i] > temp ; i--)
		x[i + 1] = x[i];
	x[i + 1] = temp;
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
	insert_in_order(a, 1);
	show_array(a);
	insert_in_order(a, 2);
	show_array(a);
	insert_in_order(a, 3);
	show_array(a);
	return 0;
}
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define LIMIT 1000

void insert_in_order(int x[], int pos){
	int i, temp = x[pos];
	for (i = pos - 1 ; i >= 0 && x[i] > temp ; i--)
		x[i + 1] = x[i];//move larger element on right side
	x[i + 1] = temp;
}
void insertion_sort(int x[]){
	int i;
	for (i = 1; i < SIZE ; i++)
		insert_in_order(x, i);
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
	insertion_sort(a);
	show_array(a);
	return 0;
}
