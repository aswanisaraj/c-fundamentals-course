/* Task 08:
Sample Run:
N: 5
K: 3
{(1,1),(1,2),(1,3),(2,1),(2,2),(2,3),(3,1),(3,2),(3,3),(4,1),(4,2),(4,3),(5,
1),(5,2),(5,3)} */

#include<stdio.h>
int main()
{   

    int k, n,count=0;

    printf("N: ");
    scanf("%d", &n);

    printf("K: ");
    scanf("%d", &k);

     printf("{");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            printf("(%d,%d)",i,j);
         if (i != n || j != k) {
                printf(",");
            }
           
        }
    }   
           printf("}\n");
    return 0;
}