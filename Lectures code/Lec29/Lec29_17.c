#include <stdio.h>

void print(int a[][3], const int ROWS, const int COLS){
	int i, j;
	for (i = 0 ; i < ROWS ; i++){
		for (j = 0 ; j < COLS ; j++)
			printf ("%d ",a[i][j]);
		printf("\n");
	}
}
void input(int a[][3], const int ROWS, const int COLS){
	int i, j;
	for (i = 0 ; i < ROWS ; i++)
		for (j = 0 ; j < COLS ; j++){
			printf ("Enter Input: ");
			scanf ("%d", &a[i][j]);
		}
			
}
int main(){
	int x[2][3];
	input (x, 2, 3);
	print(x, 2, 3);
	return 0;
}
