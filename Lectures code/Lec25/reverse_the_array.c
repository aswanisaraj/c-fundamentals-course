/*1) Initialize start and end indexes as start = 0, end = n-1
2) In a loop, swap arr[start] with arr[end] and change start and end as follows :
start = start +1, end = end – 1*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\n");

    srand(time(NULL));

    int array[n], start = 0, end = n - 1;
    printf("Enter %d element for array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    while (start < end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
