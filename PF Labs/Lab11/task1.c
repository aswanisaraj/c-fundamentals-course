#include<stdio.h>

int main()
{
	int n;
	printf("N : ");
	scanf("%d",&n);
	for(int i = 1; i<= n; i++)
	{
		for(int j = 1; j<= i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(int i = 2; i<=n; i++)
	{
		for(int j = i; j <= n; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}