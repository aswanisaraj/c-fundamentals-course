/* Task 2: There are thirty students registered in a course. Suppose their roll numbers are one to thirty. Generate their
midterm, final term and sessional marks randomly out of 35, out of 40 and out of 25 and generate report:
Sample Run:
Roll No
 Mid
 Final
 Sessional
 Total
 Grade
1
 25
 26
 16
 67
 B-
2
 28
 34
 20
 82
 A-
...
30
 20
 30
 20
 70
 B
Total: 30
Pass: 28
Fail: 2
Overall Average Marks:
67.2
Average Midterm Marks:
Average Sessional Marks:
Average Final term Marks:
Maximum Marks:
Maximum Midterm Marks:
Maximum Sessional Marks:
Maximum Final term Marks:
Minimum Marks:
Minimum Midterm Marks:
Minimum Sessional Marks:
Minimum Final term Marks:
22.6
15.4
25.1
94
33
24
37
30
10
11
9 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); 

    int total_students = 30;
    int pass_count = 0;
    int fail_count = 0;
    int total_marks = 0;
    int total_midterm = 0;
    int total_sessional = 0;
    int total_final = 0;
    int max_total = -1;
    int max_midterm = -1;
    int max_sessional = -1;
    int max_final = -1;
    int min_total = 999;
    int min_midterm = 999;
    int min_sessional = 999;
    int min_final = 999;

    printf("Roll No\tMid\tFinal\tSessional\tTotal\tGrade\n");

    int roll_no = 1;
    while (roll_no <= total_students) {
        int midterm = rand() % 36;
        int final = rand() % 41;
        int sessional = rand() % 26;

        int total = midterm + final + sessional;
        char grade;

        if (total >= 90) {
            grade = 'A';
        } else if (total >= 80) {
            grade = 'B';
        } else if (total >= 70) {
            grade = 'C';
        } else if (total >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
            fail_count++;
        }

        if (total >= 50) {
            pass_count++;
        }

        total_marks += total;
        total_midterm += midterm;
        total_sessional += sessional;
        total_final += final;

        if (total > max_total) {
            max_total = total;
            max_midterm = midterm;
            max_sessional = sessional;
            max_final = final;
        }

        if (total < min_total) {
            min_total = total;
            min_midterm = midterm;
            min_sessional = sessional;
            min_final = final;
        }

        printf("%d\t%d\t%d\t%d\t%d\t%c\n", roll_no, midterm, final, sessional, total, grade);

        roll_no++;
    }
     pass_count =  total_students - fail_count;
     fail_count = total_students - pass_count;
    printf("Total: %d\n", total_students);
    printf("Pass: %d\n", pass_count);
    printf("Fail: %d\n", fail_count);

    printf("Overall Average Marks: %.1f\n", (float)total_marks / total_students);
    printf("Average Midterm Marks: %.1f\n", (float)total_midterm / total_students);
    printf("Average Sessional Marks: %.1f\n", (float)total_sessional / total_students);
    printf("Average Final term Marks: %.1f\n", (float)total_final / total_students);

    printf("Maximum Marks: %d\n", max_total);
    printf("Maximum Midterm Marks: %d\n", max_midterm);
    printf("Maximum Sessional Marks: %d\n", max_sessional);
    printf("Maximum Final term Marks: %d\n", max_final);

    printf("Minimum Marks: %d\n", min_total);
    printf("Minimum Midterm Marks: %d\n", min_midterm);
    printf("Minimum Sessional Marks: %d\n", min_sessional);
    printf("Minimum Final term Marks: %d\n", min_final);

    return 0;
}
