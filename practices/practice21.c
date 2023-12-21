#include <stdio.h>

void rotateArray(int arr[], int size, int k) {
    int temp[size];
    
    // Copy elements to the temporary array
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    
    // Rotate the elements in the original array
    for (int i = 0; i < size; i++) {
        arr[(i + k) % size] = temp[i];
    }
}

int main() {
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int k = 5; // Number of rotations
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    rotateArray(arr, size, k);
    
    printf("\nRotated Array:\n ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
