#include <stdio.h>
int main()
{
    int N,i,a,b,c,d,e,f,g;
    printf("N: ");
    scanf("%d", &N);
    for ( i = 1; i <= N; i++)
    {
        for (int a = N - 1; a >= i; a--)
            printf(" ");
        printf("*\n");
    }
    for (int b = 1; b <= N - 1; b++)
    {
        for (int c = 1; c <= b; c++)
            printf(" ");
        printf("*\n");
    }
    for (int d = 1; d <= N - 1; d++)
    {
        for (int e = N - 2; e >= d; e--)
            printf(" ");
        printf("*\n");
    }
    for (int f = 1; f <= N - 1; f++)
    {
        for (int g = 1; g <= f; g++)
            printf(" ");
        printf("*\n");
    }
}