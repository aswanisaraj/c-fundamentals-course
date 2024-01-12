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
	int a[SIZE] = {23,16,45,ROWLASTVALUE,94,82,ROWLASTVALUE,73,94,46,32,19,LASTVALUE}, i;
	print_scores_with_average(a);

return 0;
}