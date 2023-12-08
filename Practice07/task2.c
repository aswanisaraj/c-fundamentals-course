/* Task 02: Write code to input rows & columns and print stars in rows and columns. See sample run:
Sample Run:
Rows: 4
Columns: 5
* * * * *
* * * * *
* * * * *
* * * * *    */
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
            printf("* ");
           
        } printf("\n");
    } 
    return 0;
}