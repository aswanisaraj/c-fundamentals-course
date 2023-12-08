#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void rectangular_box(int row, int column){
    int i,j;
    for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            if(i==1||i==row||j==1||j==column){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }
}

void multiples(int n, int k){
    int result;
    for(int i=1;i<=k;i++){ 
        result= n*i;
        printf("%d ", result);        
    }
    printf("\n");
}

void random_num(int n,int a, int b){
    srand(time(0));
    int rand_num;
    for(int i=1;i<=n;i++){
        rand_num = (rand()%(b-a)+a);
        printf("%d ", rand_num);
    }printf("\n");

}
void quadratic_roots(float a, float b, float c){
    float determinant;
    determinant= b*b-4*a*c;
    if(determinant>0){

    float x1 = (-b+sqrt(determinant))/(2*a);
    float x2 = (-b-sqrt(determinant))/(2*a);
    printf("%f ", x1);
    printf("\n%f ", x2);

    }else{
        printf("Roots are imaginary....");
    }
    printf("\n");  
}







int main(){
    rectangular_box(10,20);
    printf("\n\n");
    multiples(7, 4);
    printf("\n\n");
    random_num(3,200,500);
    printf("\n\n");
    quadratic_roots(3,5,2);
    printf("\n\n");




    return 0;
}




















