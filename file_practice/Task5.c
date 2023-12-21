/*
#include<stdio.h>
int main(){
    FILE *file = fopen("nums.txt", "r");
    int num; 
    for(int i=49; i>=1; i--){
        fscanf(file, "%d", &num);
        if(num % 2==1){
            printf("%d ", num);

        }
       
    }
    fclose(file);
    return 0;
}

*/
#include <stdio.h>

int main() {
    FILE *file = fopen("nums.txt", "r");

    // Check if the file is successfully opened
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Return non-zero to indicate an error
    }

    int num;
    for (int i = 49; i >= 1; i--) {
        fscanf(file, "%d", &num);
        if (num % 2 == 1) {
            printf("%d ", num);
        }
    }

    fclose(file);
    return 0;
}
