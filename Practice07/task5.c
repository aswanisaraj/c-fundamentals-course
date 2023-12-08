/* Task 05: Write code to input rows print numbers in the pattern:
Sample Run:
Rows: 4
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8 */

#include<stdio.h>
int main()
{   int row;

    printf("Row: ");
    scanf("%d", &row);

    for(int i=1;i<=row;i++){

        for(int j=0;j<=4;j++){
    
           printf("%d ",(i+j)); 
            
        } printf("\n");

    
    }return 0;
}
