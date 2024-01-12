/* Task 3: Create three arrays of ten elements each. Initialize first two arrays with random values in range 1-9. Print corresponding elements of first and second array and ask user to add them. Store user’s answers in third array. Check user answer is correct or not, calculate score and print score at the end. In the last, print incorrect statements and give corresponding correct statement as well
Sample Run:
3 + 5 = 8
2 + 7 = 9
1 + 6 = 5
2 + 4 = 7
3 + 6 = 9
1 + 4 = 6
…
Score 7 / 10
Incorrect Correct
1 + 6 = 5 1 + 6 = 7
1 + 4 = 6 1 + 4 = 5
… */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
    srand(time(0));
    int array1[SIZE], array2[SIZE],array3[SIZE], i, count = 0,answer;

    for (i = 0; i < SIZE; i++)
    {
        array1[i] = rand() % 9 + 1;
        array2[i] = rand() % 9 + 1;
    }
    for (i = 0; i < SIZE; i++){
        printf("%d + %d = ", array1[i], array2[i]);
        scanf("%d", &array3[i]);
        answer=(array1[i] + array2[i]);
        if(answer==array3[i]){
            count++;
        }
        
    }
    printf("Score: %d/%d\n", count,SIZE);
    printf("Incorrect\tCorrect\n");
    for (i = 0; i < SIZE; i++)
    {
        if (array3[i] != array1[i] + array2[i])
        {
            printf("%d + %d = %d\t%d + %d = %d\n", array1[i], array2[i], array3[i], array1[i], array2[i], array1[i] + array2[i]);
        }
    }

    

    return 0;
}
