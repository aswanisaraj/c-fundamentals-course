/* Task 04: Write code to input rows & columns and print matrix element randomly in range 1-9:
Sample Run:
Rows: 4
Columns: 3
23 45 78
56 78 98
32 67 84
81 64 66 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   

    srand(time(0));
    int row, column;

    printf("Row: ");
    scanf("%d", &row);

    printf("Column: ");
    scanf("%d", &column);


    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            int random = rand()%9+1;
            printf("%d ", random);
            
           
        } printf("\n");
    } 
    return 0;
}