#include <stdio.h>

int main(){
	char ch[] = {'H','S','U','V'} ;
	printf ("%c\n", ch[0]);
	printf ("%c\n", ch[1]);
	char *ptr = ch;
	printf ("%c\n", ptr[0]);
	printf ("%c\n", ptr[1]);
	ptr = &ch[1];
	printf ("%c\n", ptr[0]);
	printf ("%c\n", ptr[1]);
	return 0;
}
