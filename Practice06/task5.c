/* Task 05: Write a program to print integers 1 to 100. Write 5 integers in a line. Like:
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
...
Note: Use %3d or %4d to align column */
#include<stdio.h>
int main()
{   int count=0;
    for(int i=1;i<=100;i++){
        printf("%d ",i);
        count++;

        if(count%5==0){
            printf("\n");
        }
    }
    return 0;
}
