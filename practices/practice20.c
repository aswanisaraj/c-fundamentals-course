#include <stdio.h>

int main() {
    int arr[] = {23, 36, 48, 19, 27, 37, 40, 28, 30, 95};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Input array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    int left = 0, right = size - 1;

    while (left < right) {
        while (arr[left] % 2 == 0 && left < right) {
            left++;
        }

        while (arr[right] % 2 != 0 && left < right) {
            right--;
        }

        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }

    printf("Output array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
