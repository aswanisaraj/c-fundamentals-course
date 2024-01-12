/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, j, x, y;
	srand(time(0));
	x = rand() % 5 + 5;
	y = rand() % 5 + 5;
	for (i = 1 ; i <= x; i++){
		for (j = 1 ; j <= y; j++)
			printf ("*");
		printf ("\n");
	}
	return 0;
}


*/



/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, j, x,y;
	srand(time(0));
	x = rand() % 5 + 5;
	y = rand() % 5 + 5;
	for (i = 1 ; i <= x; i++){
		printf ("<");
		for (j = 1 ; j <= y; j++)
			printf ("*");
		printf (">\n");
	}
	return 0;
}
*/
/*

#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

int main(){
	int i, j;
	for( i = 2 ; i <= 10 ; i = i + 1 ){//i++ ++i i=i+1 is almost same
        for ( j = 1 ; j <= 10 ; j++ )
            printf("%3d  ",i * j);
        printf("\n");
    }
	return 0;
}
*/



/*
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

int main(){
	int i, j;
	for( i = 1 ; i <= 20 ; i++ ){
        for ( j = 1 ; j < i ; j++ )
            printf("*");
        printf("\n");
    }
	return 0;
}

*/

#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

int main(){
	int i, j, k = 10;
	for( i = 1 ; i <= 10 ; i++){
        for ( j = 1 ; j < i ; j++ )
            printf(" ");
        printf("%d\n", k--);
    }
	return 0;
}


