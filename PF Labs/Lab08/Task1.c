#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(0));

    int x, y;
    int i = 0;
    int count1 = 0;

    while (i < 10) {
        printf("Choose an operation:\n");
        printf("1. Subtraction\n2. Addition\n3. Multiplication\n");
        
        int choice;
        scanf("%d", &choice);

        if (choice < 1 || choice > 3) {
            printf("Invalid choice. Please select 1, 2, or 3.\n");
            continue;
        }

        x = rand() % 10 + 1;
        y = rand() % 10 + 1;

        if (choice == 1) {
            printf("N1: %d - N2: %d\n", x, y);
            int your_answer, answer = x - y;

            scanf("%d", &your_answer);

            if (your_answer == answer) {
                printf("Correct\n");
                count1++;
            } else {
                printf("Incorrect\n");
            }
        } else if (choice == 2) {
            printf("N1: %d + N2: %d\n", x, y);
            int your_answer, answer = x + y;

            scanf("%d", &your_answer);

            if (your_answer == answer) {
                printf("Correct\n");
                count1++;
            } else {
                printf("Incorrect\n");
            }
        } else if (choice == 3) {
            printf("N1: %d * N2: %d\n", x, y);
            int your_answer, answer = x * y;

            scanf("%d", &your_answer);

            if (your_answer == answer) {
                printf("Correct\n");
                count1++;
            } else {
                printf("Incorrect\n");
            }
        }
        i++;
    }
    printf("Score: %d out of 10\n", count1);
    return 0;
}
