#include <stdio.h>

int main() {
    char character1, character2;

    printf("Enter first Character: ");
    scanf(" %c", &character1);

    printf("Enter Second Character: ");
    scanf(" %c", &character2);

    if (character1 == character2) {
        printf("'%c' and '%c' are the same.\n", character1, character2);
    } else {
        printf("'%c' and '%c' are different.\n", character1, character2);
    }

    return 0;
}
