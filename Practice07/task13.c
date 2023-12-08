/* Task 13:
Sample Run:
Rows:5
Columns:6
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5 */

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
        printf("%d ", i);
        
            
        }   printf("\n");
    } 
    return 0;
}