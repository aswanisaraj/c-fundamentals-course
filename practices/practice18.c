/*
#include <stdio.h>
int main()
{
      int rows, columns;
      printf("Enter the number of rows and columns: " ,rows, columns);
      scanf("%d %d", &rows, &columns);
    for (int i = 1; i <= rows; i++){
         for (int j = 0; j < columns - 2 + (i + 1) % 2; j++){
         printf("* \n");
        }
        
}
return 0;
}*/


/*
#include <stdio.h>

int main() {
    int rows, columns;
    printf("Enter the number of rows and columns: %d %d\n", rows, columns);
    scanf("%d %d", &rows, &columns);

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < columns - 2 + (i + 1) % 2; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/


/*
#include <stdio.h>

int main() {
    int rows, columns;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}

*/



#include <stdio.h>

int main() {
    int rows;
    int i = 0;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    while(i<rows){
        printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
        i++;
    }
     
  return 0;
}



/*
#include <stdio.h>

int main() {
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            if (i % 2 == 1) {
                printf("%d ", i);
            } else {
                printf("%c ", 'a' + (i/2 - 1));
            }
        }
        printf("\n");
    }
    
    return 0;
}
*/















