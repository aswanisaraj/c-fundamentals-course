#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30

void print_vowel_indices(char x[], int size) {
    printf("Vowel Indexis ");
    for (int i = 0; i < size; i++) {
        if (x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U') {
            printf("%d ", i);
        }
    }
    printf("\n");
}





void print_alphabet_counts(char x[], int size) {
    printf("Alphabet Counts:\n");
    int counts[26] = {0}; 
    for (int i = 0; i < size; i++) {
        counts[x[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'A' + i, counts[i]);
    }
}







void print_counts_greater_than(char x[], int size) {
    printf("Counts of Alphabets Greater Than Each Alphabet:\n");
    int counts[26] = {0};

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 26; j++) {
            if (x[i] < 'A' + j) {
                counts[j]++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'A' + i, counts[i]);
    }
}






void print_missing_alphabets(char x[], int size) {
    printf("Missing Alphabets: ");
    for (int i = 0; i < 26; i++) {
        int found = 0;
        for (int j = 0; j < size; j++) {
            if (x[j] == 'A' + i) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%c ", 'A' + i);
        }
    }
    printf("\n");
}







void print_alphabet_positions(char x[], int size) {
    printf("Alphabet Positions:\n");
    for (int i = 0; i < size; i++) {
        printf("%c: %d\n", x[i], x[i] - 'A' + 1);
    }
}






void place_index_in_array(int indices[], char x[], int size) {
    printf("Place Index in Corresponding Position:\n");
    for (int i = 0; i < size; i++) {
        indices[x[i] - 'A'] = i;
    }

    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'A' + i, indices[i]);
    }
}





int main() {
    srand(time(0));
    char x[SIZE];
    int indices[26] = {0};

    
    for (int i = 0; i < SIZE; i++) {
        x[i] = rand() % 26 + 'A';
        printf("%c ", x[i]);
    }
    printf("\n");

    // Task 09
    print_vowel_indices(x, SIZE);

    // Task 10
    print_alphabet_counts(x, SIZE);

    // Task 11
    print_counts_greater_than(x, SIZE);

    // Task 12
    print_missing_alphabets(x, SIZE);

    // Task 13
    print_alphabet_positions(x, SIZE);

    // Task 14
    place_index_in_array(indices, x, SIZE);

    return 0;
}
