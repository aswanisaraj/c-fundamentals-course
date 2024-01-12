#include <stdio.h>

void f2(char *t){
	printf ("Value: %c\n", t[0]);
}
int main(){
	char ch = 'H'  ;
	f2(&ch);
	return 0;
}
