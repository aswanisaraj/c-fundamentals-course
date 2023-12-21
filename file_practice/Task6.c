#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
    srand(time(0));
    int num1, num2;
    for(int i=0; i<=10;i++){
    num1 = rand() % 100;
    printf("First Number:%d\n",num1);
    num2 = rand() % 100;
    printf("Second Number:%d\n",num2);

        if(num1>num2){
        printf("First random number is larger.\n");

        }else
        printf("Second random number is larger.\n");
    
    }

  return 0;
}