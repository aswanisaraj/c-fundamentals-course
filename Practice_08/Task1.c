/* Task 01: File 'nums.txt' has 10000 integers. Read integers and find their average. Your answer should
be:
Average: 4.9937 */

#include<stdio.h>     
int main(){

    FILE * number = fopen("nums.txt", "r");
    int i = 1, x,sum =0;
    float average =0;
    while(i<=10000){
        fscanf(number, "%d", &x);
        sum+=x;
        
    i++;
    }
    average = (double)sum/10000;
    printf("Average: %f ",average);
    fclose(number);
    


    return 0;
}
























/*
#include <stdio.h>

int main() {
    FILE* number = fopen("nums.txt", "r");
    if (number == NULL) {
        perror("Error opening the file");
        return 1;
    }

    int i = 1, x, sum = 0;
    float average = 0;
    
    while (i <= 10000) {
        if (fscanf(number, "%d", &x) == 1) {
            sum += x;
        } else {
            printf("Error reading integer from the file\n");
            break;
        }
        i++;
    }

    fclose(number);

    if (i <= 10000) {
        printf("Average cannot be calculated due to an error in file input.\n");
    } else {
        average = (double)sum / 10000;
        printf("Average: %f\n", average);
    }

    return 0;
}
*/