#include<stdio.h>
int main(){
	int i,r,m;
	for(i=1;i<=100;i++){
		if(i>20 && i%10!=0){
		   r=i/10;
		   m=i%10;
		}
	        if(r==2)          printf("twenty ");
			else if(r==3)	  printf("thirty ");
			else if(r==4)	  printf("fourty ");
			else if(r==5)	  printf("fifty ");
			else if(r==6)	  printf("sixty ");
			else if(r==7)	  printf("seventyy ");
			else if(r==8)	  printf("eighty ");
			else if(r==9)	  printf("ninety ");
			
			if(m==1 || i==1)         printf("one ");
			else if (m==2 || i==2)    printf("two ");
			else if(m==3 || i==3)    printf("three ");
			else if(m==4 || i==4)    printf("four ");
			else if(m==5 || i==5)    printf("five ");
			else if(m==6 || i==6)    printf("six ");
			else if(m==7 || i==7)    printf("seven ");
			else if(m==8 || i==8)    printf("eight ");
			else if(m==9 || i==9)    printf("nine ");
			
		    if(i==11)    printf("eleven ");
			else if(i==12)    printf("twelve ");
			else if(i==13)    printf("thirteen ");
			else if(i==14)    printf("fourteen ");
			else if(i==15)    printf("fifteen ");
			else if(i==16)    printf("sixteen ");
			else if(i==17)    printf("seventeen ");
			else if(i==18)    printf("eighteen ");
			else if(i==19)    printf("nineteen ");
			else if(i==100)   printf("\nhundred ");
			
			if(i==10)         printf("ten ");
	        else if(i==20)    printf("twenty ");
			else if(i==30)	  printf("\nthirty ");
			else if(i==40)	  printf("\nfourty ");
			else if(i==50)	  printf("\nfifty ");
			else if(i==60)	  printf("\nsixty ");
			else if(i==70)	  printf("\nseventyy ");
			else if(i==80)	  printf("\neighty ");
			else if(i==90)	  printf("\nninety ");
			
			printf("\n");
	}
	return 0;
}