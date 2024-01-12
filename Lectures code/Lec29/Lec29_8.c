#include <stdio.h>

void print(int a[], const int ROWS, const int COLS)
{
	int i, j, k = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%d ", a[k++]);
		printf("\n");
	}
}
int main()
{
	int i;
	int x[24] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
	for (i = 0; i < 24;)
		printf("%d ", x[i++]);
	printf("\n");
	print(x, 6, 4);
	printf("\n");
	print(x, 4, 6);
	printf("\n");
	print(x, 3, 8);
	return 0;
}
