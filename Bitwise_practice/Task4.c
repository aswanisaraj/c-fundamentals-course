#include <stdio.h>

int main() {
    char character;
    int bitnumber;

    printf("Enter Character: ");
    scanf("%c", &character);

    printf("Enter bit number: ");
    scanf("%d", &bitnumber);


        char mask = 1 << bitnumber;

        if (character & mask) {
            printf("\nThe Bit number %d is ON\n", bitnumber);
        }else 
            printf("\nThe Bit number  %d is OF\n", bitnumber);       

    
    

    return 0;
}
