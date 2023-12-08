/*Task 12:
Sample Run: (Run inner loop for spaces reverse of outer loop)
Rows:5
     1
    2
   3
  4
 5 */



#include <stdio.h>

int main(){
	int x, k, row;
	printf ("Rows: ");
	scanf("%d", &row);
	for (k = 1 ; k <= row ; k++){
		for (x = row ; x > k ; x--)
			printf (" ");		
		printf ("%d\n", k);		
	}
	return 0;
}