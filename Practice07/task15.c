/* Task 15:
Sample Run:
Rows:3
Columns:4
1 2 3 4
a b c d
2 3 4 5
b c d e
3 4 5 6
c d e f */

#include<stdio.h>

int main() {   
    int row, column;
    char a;

    printf("Rows: ");
    scanf("%d", &row);

    printf("Columns: ");
    scanf("%d", &column);

    for (int i = 1; i <= row; i++) {
        for (int j = 0; j <column; j++) {
            printf("%d ", (i + j));
        }
        printf("\n");

        a = 'a';  // Reset 'a' for each row

        for (int k = 1; k <= column; k++) {
            printf("%c ", a);
            a++;
        }

        printf("\n");
    }

    return 0;
}
