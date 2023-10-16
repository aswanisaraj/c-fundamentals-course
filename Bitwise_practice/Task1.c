#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    printf("Character '%c' in binary: ", character);

    int bitPosition = 1;

    while (bitPosition <= 7) {
        char mask = 1 << bitPosition;

        if (character & mask) {
            printf("\nBit %d is ON\n", bitPosition);
        }

        bitPosition++;
    }

    return 0;
}
