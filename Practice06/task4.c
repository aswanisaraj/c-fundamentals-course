#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{   
    srand(time(0));
    int i, e_sum=0,o_sum=0,num;
    printf("random numbers: ");
    for(i=1;i<=10;i++){
        num=rand()%501;
        printf("%d ", num);

        if(num%2==0){
            e_sum+=num;
        }else{
            o_sum+=num;
            
        }
      



    }  
        
        printf("\nSum of Even numbers: %d\n", e_sum);
        printf("Sum of Odd numbers: %d\n", o_sum);

    return 0;
}
