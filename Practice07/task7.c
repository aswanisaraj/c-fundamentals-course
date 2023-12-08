/*Sample Run:
Rows: 10
Columns: 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5*/
#include<stdio.h>
int main()
{   

    int row, column;

    printf("Row: ");
    scanf("%d", &row);

    printf("Column: ");
    scanf("%d", &column);


    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            printf("%d ",j);
           
        } printf("\n");
    } 
    return 0;
}