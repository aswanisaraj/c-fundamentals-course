#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 

    int i = 0;

    while (i < 10) {
        int first = rand() % 100; 
        int second = rand() % 100;

        printf("First: %d\n", first);
        printf("Second: %d\n", second);

        if (first > second) {
            printf("First number is larger\n");
        } else if (second > first) {
            printf("Second number is larger\n");
        } else {
            printf("Both numbers are equal\n");
        }

        i++;
    }

    return 0;
}
