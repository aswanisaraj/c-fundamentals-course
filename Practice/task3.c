#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int number = rand() % 21;

    printf("Enter a number between 0 and 20: ");
    int user_input;
    scanf("%d", &user_input);

    if (user_input >= 0 && user_input <= 20) {
        printf("Number %d in English is ", user_input);

        if (user_input == 0) { printf("zero\n");
        } else if (user_input == 1) {
            printf("one\n");
        } else if (user_input == 2) {
            printf("two\n");
        } else if (user_input == 3) {
            printf("three\n");
        } else if (user_input == 4) {
            printf("four\n");
        } else if (user_input == 5) {
            printf("five\n");
        } else if (user_input == 6) {
            printf("six\n");
        } else if (user_input == 7) {
            printf("seven\n");
        } else if (user_input == 8) {
            printf("eight\n");
        } else if (user_input == 9) {
            printf("nine\n");
        } else if (user_input == 10) {
            printf("ten\n");
        } else if (user_input == 11) {
            printf("eleven\n");
        } else if (user_input == 12) {
            printf("twelve\n");
        } else if (user_input == 13) {
            printf("thirteen\n");
        } else if (user_input == 14) {
            printf("fourteen\n");
        } else if (user_input == 15) {
            printf("fifteen\n");
        } else if (user_input == 16) {
            printf("sixteen\n");
        } else if (user_input == 17) {
            printf("seventeen\n");
        } else if (user_input == 18) {
            printf("eighteen\n");
        } else if (user_input == 19) {
            printf("nineteen\n");
        } else if (user_input == 20) {
            printf("twenty\n");
        }
    } else {
        printf("Number is Greater than 20\n");
    }

    return 0;
}
