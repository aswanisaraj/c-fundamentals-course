#include <stdio.h>

void f2(char *t){
	printf ("Array Values: %d %d %d %d %d\n", t[0],t[1],t[2],t[3],t[4]);
}
int main(){
	char c[50] = {23,56,48,79,75,84,76,28} ;
	printf ("Array Values: %d %d %d %d %d\n", c[0],c[1],c[2],c[3],c[4]);
	f2(&c[3]);
	return 0;
}
