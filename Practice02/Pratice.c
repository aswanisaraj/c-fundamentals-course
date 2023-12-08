/* Task1
#include<stdio.h>
int main(){
     unsigned int x = 455;
    printf("Mumber: 445\n");
    printf("first digit: 4\t\t455 / 3 =  %d\n", 455/3);
    printf("second digit:5\t\t455 % 100 = %d, 55 / 10= %d\n",455%100, 55/10);
    printf("Third digit:5\t\t55 / 10=  %d\n",55/10);
    return 0;
}

*/

//Task2
/*
#include <stdio.h>

int main() {
    int physics, chemistry, biology, english, urdu;
    int totalMarks;
    float averageMarks,average1, overallaverage;

    // Initialize the marks
    physics = 85;
    chemistry = 90;
    biology = 80;
    english = 75;
    urdu = 95;

    // Calculate the total marks
    totalMarks = physics + chemistry + biology + english + urdu;


    // Calculate the average marks
    averageMarks = (float) (85+90+80)/3 ;
    average1 = (float) (75+90)/2;

    // Calculate the percentage
    overallaverage = (float)totalMarks/5;

    // Display the results
    printf("Subject wise marks:\n");
    printf("Physics: %d\n", physics);
    printf("Chemistry: %d\n", chemistry);
    printf("Biology: %d\n", biology);
    printf("English: %d\n", english);
    printf("Urdu: %d\n\n", urdu);
    printf("Total Marks: %d\n", totalMarks);
    printf("overallaverage: %.2f%%\n", overallaverage);
    printf("Average Marks in Arts subject: %.2f\n", averageMarks);
    printf("Average Marks in science subject: %.2f\n", average1);


    return 0;
}
*/


//Task3
/*
#include<stdio.h>
int main(){
    char x = 'A';
    printf("%c\n",x);
    printf("%d\n",x);
    for(int i =1;i<26;i++)
    {   x = x + 1;
        printf("%c\n",x);
        printf("%d\n\n",x);

    }


  return 0;
}


Task4
#include <stdio.h>

int main() {
    float floatNum1 = 5.0;
    float floatNum2 = 3.0;

    int intResult = (int)(floatNum1 / floatNum2);
    printf("Integer result: %d\n", intResult);

    int intNum1 = 5;
    int intNum2 = 3;

    float floatResult = (float)intNum1 / intNum2;
    printf("Float result: %f\n", floatResult);

    return 0;
}
*/