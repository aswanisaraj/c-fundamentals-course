/* a. Sample Runs:
Rows: 8
Columns: 3
1 2 3
2 3 4
3 4 5
4 5 6
5 6 7
6 7 8
7 8 9
8 9 10
Rows: 3
Columns: 5
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7*/


#include<stdio.h>
int main()
{   int row,column;

    printf("Row: ");
    scanf("%d", &row);

    printf("Column: ");
    scanf("%d", &column);

    for(int i=0;i<row;i++){

        for(int j=1;j<=column;j++){
    
           printf("%d ",(i+j)); 
            
        } printf("\n");

    
    }return 0;
}
