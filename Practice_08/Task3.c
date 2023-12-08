/* Task 03: Repeat previous task and write count into another file name 'counts.txt'. File should contain
counts only, no other text like:
1141
1126 */

#include <stdio.h>

int main() {
 
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;

    FILE *file = fopen("nums.txt", "r");
    FILE *file1 = fopen("counts.txt", "w");

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
    fprintf(file1,"%d\n", count1);
    fprintf(file1,"%d\n", count2);
    fprintf(file1,"%d\n", count3);
    fprintf(file1,"%d\n", count4);
    fprintf(file1,"%d\n", count5);
    fprintf(file1,"%d\n", count6);
    fprintf(file1,"%d\n", count7);
    fprintf(file1,"%d\n", count8);
    fprintf(file1,"%d\n", count9);
    fclose(file1);
    

    return 0;
}
