#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    for (int i = 1; i <= 10; i++) {
        char Alphabet = 'A' + rand() % 26;
        printf("Character: %c ", Alphabet);

      
        if (Alphabet == 'A' || Alphabet == 'E' || Alphabet == 'I' || Alphabet == 'O' || Alphabet == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    return 0;
}
