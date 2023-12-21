
// bitwise operaters
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
     unsigned char x;
    srand(time(0));
     x = rand() % 256;
    printf("X: %d\n", x);
    if((x & 1)==1)      printf ("First bit is on \n");
    else                printf ("First bit is off\n");
    if((x & 2) ==2)     printf ("Second bit is on \n");
    else                printf ("Second bit is off\n");
    if((x & 4) ==4)     printf ("Third bit is on \n");
    else                printf ("Third bit is off\n");
    if((x & 8) ==8)     printf ("Forth bit is on \n");
    else                printf ("Forth bit is off\n");
    if((x & 16) ==16)   printf ("Fifth bit is on \n");
    else                printf ("Fifth bit is off\n");
    if((x & 32) ==32)   printf ("Sixth bit is on \n");
    else                printf ("Sixth bit is off\n");
    if((x & 64) ==64)   printf ("Seventh bit is on \n");
    else                printf ("Seventh bit is off\n");
     
    return 0;
}


