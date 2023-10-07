#include<stdio.h>
int main(){
    int Perimeter = 0;
    int Side_1;
    int Side_2; 
    int Side_3; 
    int Side_4; 
    int Side_5;

    printf("Side 1:");
    scanf("%d", &Side_1);
    printf("\nSide 2:");
    scanf("%d", &Side_2);
    printf("\nSide 3:");
    scanf("%d", &Side_3);
    printf("\nSide 4:");
    scanf("%d", &Side_4);
    printf("\nSide 5:");
    scanf("%d", &Side_5);
    
    Perimeter = (Side_1 + Side_2 + Side_3 + Side_4 + Side_5);
    printf("Perimeter: %d\n\n ",Perimeter);
    return 0;
}