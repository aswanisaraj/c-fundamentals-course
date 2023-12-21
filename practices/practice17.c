/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x, y;
    srand(time(0));
    x = rand();
    y = rand();
    
    while (x < y) {
        printf(" %d %d\n", x, y);
        x = rand();
        y = rand();
    }
    
    return 0;
}
*/



 // Task 2. Generate three random numbers in range 1-9 (different from each other). Moreover, first number should
  //    be smallest and last number should be largest. [Do not arrange numbers]



/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, num3;

    srand(time(0));

    // Generate the first number
    num1 = rand() % 9 + 1;

    // Generate the second number (different from the first)
    do {
        num2 = rand() % 9 + 1;
    } while (num2 == num1);

    // Generate the third number (different from the first two)
    do {
        num3 = rand() % 9 + 1;
    } while (num3 == num1 || num3 == num2);

    printf("Random numbers: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int i, j;

    
    for (i = 2; i <= 10; i++) {

    
        for (j = 1; j <= 10; j++) {
            printf("%d ", i * j);
        }

        
        printf("\n");
    }

    return 0;
}
*/
/*
2
  3   6
  4   8  12
  5  10  15  20
  6  12  18  24  30
  7  14  21  28  35  42
  8  16  24  32  40  48  56
  9  18  27  36  45  54  63  72
 10  20  30  40  50  60  70  80  90 */

/*
 #include<stdio.h>
int main(){


      int i, j;
	for( i = 2 ; i <= 10 ; i = i + 1 )
    {
        for ( j = 1 ; j <= 10 ; j++ )
            printf("%3d ", i * j);

    }    
        printf("\n");
}

*/
#include <stdio.h>

int main() {
    int rows = 9; 

    for (int i = 2; i <= rows + 1; i++) {

        
        for (int j = 1; j < i; j++) {
            printf("  ");
        }

    
        for (int j = i; j <= 2 * i - 1; j++) {
            printf("%2d  ", j * i);
        }

        printf("\n");
    }

    return 0;
}
