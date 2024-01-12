
/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int x[]){
	int i;
	for (i = 0 ; i < 100 && x[i] != -1 ; i++)
		printf("%d ", x[i]);
	printf("\n");
}

int main(){
	//srand(time(0));
	int a[100] = {23,16,45,94,82,73,-1}, i;
	print_array(a);
	a[6] = 50;
	a[7] = 80;
	a[8] = -1;
	print_array(a);
	return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SENTINEL -1
	
void print_array(int x[]){
	int i;
	for (i = 0 ; i < 100 && x[i] != SENTINEL ; i++)
		printf("%d ", x[i]);
	printf("\n");
}

int main(){
	//srand(time(0));
	int a[100] = {23,16,45,94,82,73,SENTINEL}, i;
	print_array(a);
	a[6] = 50;
	a[7] = 80;
	a[8] = SENTINEL;
	print_array(a);
	return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50
#define LASTVALUE -1
	
void print_array(int x[]){
	int i;
	for (i = 0 ; i < SIZE && x[i] != LASTVALUE ; i++)
		printf("%d ", x[i]);
	printf("\n");
}

int main(){
	//srand(time(0));
	int a[SIZE] = {23,16,45,94,82,73,LASTVALUE}, i;
	print_array(a);
	a[6] = 50;
	a[7] = 80;
	a[8] = LASTVALUE;
	print_array(a);
	return 0;
}



#include <stdio.h>

#define SIZE 50
#define ROWLASTVALUE -1
#define LASTVALUE -2
	
void print_scores_with_average(int x[]){
	int i, sum = 0, count = 0;
	for (i = 0 ; i < SIZE && x[i] != LASTVALUE ; i++){
		if (x[i] != ROWLASTVALUE){
			printf("%d ", x[i]);
			sum += x[i];
			count++;
		}
		else{
			printf ("%f\n", sum / (float)count);
			sum = 0;
			count = 0;
		}		
	}
}

int main(){
	int a[SIZE] = {23,16,45,ROWLASTVALUE,94,82,ROWLASTVALUE,73,94,46,32,19,ROWLASTVALUE,LASTVALUE}, i;
	print_scores_with_average(a);
	return 0;
}




*/