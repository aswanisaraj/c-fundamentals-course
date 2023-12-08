/*Task 14:
Sample Run: (Use two inner loops in one outer loop)
Rows:3
Columns:4
1 1 1 1
a a a a
2 2 2 2
b b b b
3 3 3 3
c c c c*/
#include<stdio.h>

int main() {
    int row, column;
    char a = 'a';

    printf("Rows: ");
    scanf("%d", &row);

    printf("Columns: ");
    scanf("%d", &column);

    for (int i = 1; i <= row; i++) {

        for (int j = 1; j <= column; j++) {
            printf("%d ", i);
            
            
        }printf("\n");
        for (int k = 1; k <= column; k++) {
                
            printf("%c ", a);
           
        } a++; 
        printf("\n");
    }

    return 0;
}
