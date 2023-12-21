#include<stdio.h>
int main(){
    int x, y;
    printf("X:");
    scanf("%d",&x);
     printf("Y:");
    scanf("%d",&y);

    if(x == y)      
      printf("X and Y are equal\n");
    else if(x > y)      
      printf("X is greater than Y\n");
    else
     printf("Y is grater than X\n"); 

return 0;
}