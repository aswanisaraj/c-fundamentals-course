#include<stdio.h>
int main(){
    int a,b, c;
    printf("Starting Number:");
    scanf("%d", &a);
    printf("Starting Number:");
    scanf("%d", &b);

    while(a<=b){
        printf("%d ",a);
        a++;
    }
    return 0;
}