#include <stdio.h>

void print(int a[][5]){
	int i, j;
	for (i = 0 ; i < 3 ; i++){
		for (j = 0 ; j < 5 ; j++)
			printf ("%d ",a[i][j]);
		printf("\n");
	}
}
int main(){
	int x[][5]={{23,45,15,27,36},{24,17,19,29,44},{18,47,53,61,72}};
	print(x);
	return 0;
}
