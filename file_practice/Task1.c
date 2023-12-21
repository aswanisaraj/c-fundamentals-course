/*Task 1. Write even numbers less than 100 in a single line*/

#include<stdio.h>
int main(){
    
    for(int i = 0; i< 100; i++)
    if (i % 2== 0)
    printf("%d ", i);  



    return 0;
}