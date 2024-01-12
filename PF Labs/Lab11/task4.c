#include<stdio.h>
int main()
{  
  int n;
  int count=0;
    printf("N:(should be greater than equal 10) ");
    scanf("%d", &n);
  
  while(n<=10){
    printf("Warning for you bro.....\n ");
     printf("N:(should be greater than equal 10) ");
        scanf("%d", &n);
    }
    for(int i=4;i<=n;i++){
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
            }
            }
            if (count==0){
                printf("prime\n");
                }
            else{
                 for(int j=1;j<=i;j++){
                    if(i%j==0){
                        printf("%d ", j);
                    }
                 }
                
            }
            printf("\n");
            
    } 
 return 0;
}