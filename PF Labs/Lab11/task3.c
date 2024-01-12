#include <stdio.h>
int main()
{
    int n, k;

    printf("N: ");
    scanf("%d", &n);
    printf("K: ");
    scanf("%d", &k);

    for (int i = 1; i <= n; i++)
    {
        int f = 1;

        printf("{");
        for (int j = 1; j <= k; j++)
        {

            for (int l = 1; l <= f; l++)
            {
                printf("(%d)", l);
            }
            f++;
            if (j != k)
            {
                printf(",");
            }
        }
        printf("}");
        printf(" \n");
    }

    return 0;
}
