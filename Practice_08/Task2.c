/* Task 02: File 'nums.txt' has 10000 integers. Read integers. Count and print occurrences of integers 1 to
9. Your answer should be:
Count of 1: 1141
Count of 2: 1126
Count of 3: 1088
Count of 4: 1115
Count of 5: 1066
Count of 6: 1142
Count of 7: 1068
Count of 8: 1124
Count of 9: 1130 */
#include <stdio.h>

int main() {
 
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;

    FILE *file = fopen("nums.txt", "r");

    int num;
    while (fscanf(file, "%d", &num) == 1) {
        if (num == 1) {
            count1++;
        } else if (num == 2) {
            count2++;
        } else if (num == 3) {
            count3++;
        } else if (num == 4) {
            count4++;
        } else if (num == 5) {
            count5++;
        } else if (num == 6) {
            count6++;
        } else if (num == 7) {
            count7++;
        } else if (num == 8) {
            count8++;
        } else if (num == 9) {
            count9++;
        }
    }

   
    fclose(file);

    printf("Count of 1: %d\n", count1);
    printf("Count of 2: %d\n", count2);
    printf("Count of 3: %d\n", count3);
    printf("Count of 4: %d\n", count4);
    printf("Count of 5: %d\n", count5);
    printf("Count of 6: %d\n", count6);
    printf("Count of 7: %d\n", count7);
    printf("Count of 8: %d\n", count8);
    printf("Count of 9: %d\n", count9);

    return 0;
}
