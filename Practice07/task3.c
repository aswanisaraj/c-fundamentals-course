/* Task 03: Write code to input rows and print A to Z in all rows. See sample run:
Sample Run:
Rows: 4
ABCDEFGHIJKLMNOPQRSTUVWXYZ
ABCDEFGHIJKLMNOPQRSTUVWXYZ
ABCDEFGHIJKLMNOPQRSTUVWXYZ
ABCDEFGHIJKLMNOPQRSTUVWXYZ
Note: Use inner while loop to print A to Z */

#include<stdio.h>
int main()
{   

    int row;
    char c= 'A';

    printf("Row: ");
    scanf("%d", &row);

    for(int i=1;i<=row;i++){

        for(int j=1;j<=26;j++,c++){
            printf("%c", c);
            
        }
        c= 'A';
        printf("\n");
    } 
    return 0;
}













/*#include <stdio.h>

int main(){
	int x, k;
	char c = 'A';
	for (k = 0 ; k <= 10 ; k += 2, c++){
		for (x = 1 ; x <= k ; x++)
			printf (" ");		
		printf ("%c\n", c);		
	}
	return 0;
}*/