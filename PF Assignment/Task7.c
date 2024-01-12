#include <stdio.h>

int main() {
    int marks1, marks2;

    printf("Marks 1: ");
    scanf("%d", &marks1);

    printf("Marks 2: ");
    scanf("%d", &marks2);

    char grade1, grade2;

    if (marks1 >= 85) {
        grade1 = 'A';
    } else if (marks1 >= 80) {
        grade1 = 'A';
    } else if (marks1 >= 75) {
        grade1 = 'B';
    } else if (marks1 >= 70) {
        grade1 = 'B';
    } else if (marks1 >= 65) {
        grade1 = 'B';
    } else if (marks1 >= 61) {
        grade1 = 'C';
    } else if (marks1 >= 58) {
        grade1 = 'C';
    } else if (marks1 >= 55) {
        grade1 = 'C';
    } else if (marks1 >= 50) {
        grade1 = 'D';
    } else {
        grade1 = 'F';
    }

    if (marks2 >= 85) {
        grade2 = 'A';
    } else if (marks2 >= 80) {
        grade2 = 'A';
    } else if (marks2 >= 75) {
        grade2 = 'B';
    } else if (marks2 >= 70) {
        grade2 = 'B';
    } else if (marks2 >= 65) {
        grade2 = 'B';
    } else if (marks2 >= 61) {
        grade2 = 'C';
    } else if (marks2 >= 58) {
        grade2 = 'C';
    } else if (marks2 >= 55) {
        grade2 = 'C';
    } else if (marks2 >= 50) {
        grade2 = 'D';
    } else {
        grade2 = 'F';
    }

    if (grade1 == grade2) {
        printf("Same Grades\n");
    } else {
        printf("Different Grades\n");
    }

    return 0;
}
