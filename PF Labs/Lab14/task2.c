#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Length 30
#define SENTINEL -1

int main()
{
    srand(time(0));
    int count;
    int x[Length], rollno[Length], i;

    
    for (i = 0; i < Length; i++)
    {
        x[i] = rand() % 100 + 1;
        printf("%d ", x[i]);
    }
    printf("\n\n");

  
    for (i = 0; i < Length; i++)
    {
        rollno[i] = i + 1;
    }

   
    count = rand() % 3 + 3;
    for (i = 0; i < count; i++)
    {
        int index = rand() % Length;
        rollno[index] = SENTINEL;
    }

    
    printf("Roll No\tMarks\n");
    for (i = 0; i < Length; i++)
    {
        if (rollno[i] != SENTINEL)
        {
            printf("%d\t%d\n", rollno[i], x[i]);
        }
    }

   
    int remainingStudents = 0;
    for (i = 0; i < Length; i++)
    {
        if (rollno[i] != SENTINEL)
        {
            remainingStudents++;
        }
    }

    
    int marks[remainingStudents];
    int rollno1[remainingStudents];
    int k = 0;

    for (i = 0; i < Length; i++)
    {
        if (rollno[i] != SENTINEL)
        {
            rollno1[k] = rollno[i];
            marks[k] = x[i];
            k++;
        }
    }

  
    printf("\nNew Roll Numbers List: [");
    for (i = 0; i < remainingStudents - 1; i++)
    {
        printf("%d, ", rollno1[i]);
    }
    if (remainingStudents > 0)
    {
        printf("%d", rollno1[remainingStudents - 1]);
    }
    printf("]\n");

    printf("New Marks List: [");
    for (i = 0; i < remainingStudents - 1; i++)
    {
        printf("%d, ", marks[i]);
    }
    if (remainingStudents > 0)
    {
        printf("%d", marks[remainingStudents - 1]);
    }
    printf("]\n");

    return 0;
}
