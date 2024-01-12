
#include <stdio.h>

int main() {
    int eggs, packs;

    
    printf("Eggs: ");
    scanf("%d", &eggs);

    
    packs = eggs / 6; 

    
    if (eggs % 6 != 0) {
        packs += 1;
    }

    printf("Packs: %d\n", packs);

    return 0;
}


/*

#include<stdio.h>
int main(){
    int number = 6875;

    int first_digit = number / 1000;
    int ran1 = number % 1000;

    int second_digit = ran1 / 100;
    int ran2 = ran1 % 100;

    int third_digit = ran2 / 10;
    int fourth_digit = ran2 % 10;

    printf("%d %d %d %d ",first_digit, second_digit, third_digit, fourth_digit );



    return 0;
}
*/