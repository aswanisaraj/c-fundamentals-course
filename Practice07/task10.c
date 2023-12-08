/* Task 10:
Sample Run:
Rows:5
Columns:6
    1
    2
    3
    4
    5*/

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
            if (j == column) {
                printf("%d", i);
            } else {
                printf(" "); 
            }   
           
        
        }   printf("\n");
    } 
    return 0;
}