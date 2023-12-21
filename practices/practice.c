

/*
#include <stdio.h>

void print_order_of_repeating_elements(int arr[], int n) {
    int order_dict[20] = {0}; 

    for (int i = 0; i < n; i++) {
        int element = arr[i];
        if (order_dict[element] != 0) {
            printf("%d\t%d\n", order_dict[element], i + 1);
        } else {
            order_dict[element] = i + 1;
        }
    }
}

int main() {

    int array[] = {20, 30, 40, 50, 60, 70};
    int size = sizeof(array) / sizeof(array[0]);

    print_order_of_repeating_elements(array, size);

    return 0;
}


*/
/*


#include <stdio.h>

void find_max_sum_pair( int arr[], int n) {
    int max_sum = -999999; 
    int max_sum_pair[2] = {-1, -1}; 

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int current_sum = arr[i] + arr[j];
            if (current_sum > max_sum) {
                max_sum = current_sum;
                max_sum_pair[0] = i;
                max_sum_pair[1] = j;
            }
        }
    }

    if (max_sum_pair[0] != -1 && max_sum_pair[1] != -1) {
        printf("Pair with maximum sum: (%d, %d)\n", arr[max_sum_pair[0]], arr[max_sum_pair[1]]);
    } else {
        printf("No pairs found.\n");
    }
}

int main() {
    // Sample input
    int array[] = {36, 28, 17, 32, 20, 35, 31};
    int size = sizeof(array) / sizeof(array[0]);

    
    find_max_sum_pair(array, size);

    return 0;
}


*/



#include <stdio.h>

void def(int n) {
    printf("%d ", n);
}
void abc(int n) {
    if (n <= 10) {
       def(n+1);
    }
}
int main() {
    abc(9); 
    printf("\n"); 
    return 0;
}
