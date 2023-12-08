/* Write a program, to declare integer variable to store marks of a student in Physics, Chemistry,
Biology, English and Urdu. Initialize them with any two digit positive integer. Calculate:
Sum of all subjects
Overall Average Marks
Average in Science Subjects (Physics, Chemistry, Biology)
Average in Arts Subjects (English, Urdu)
Display output in following format:
Subject Wise Mark
Physics: --
Chemistry: --
Biology: --
English: --
Urdu: -- 

Total Marks: ---
Overall Average Marks: --.------
Average in Science Subjects: --.------
Average in Arts Subjects: --.------
*/


#include<stdio.h>
int main(){

int Physics = 80;
int Chemistry = 78;
int Biology = 90; 
int English = 67;
int Urdu = 87;

int Total_Marks = Physics + Chemistry + Biology + English + Urdu;
int Overall_Average_Marks = (Physics + Chemistry + Biology + English + Urdu)/5;
int Average_in_Science_Subjects = (Physics + Chemistry + Biology)/3;
int Average_in_Arts_Subjects = (English + Urdu)/2;

    printf("Physics:%d\n",Physics);
    printf("Chemistry:%d\n",Chemistry);
    printf("Biology:%d\n",Biology);
    printf("English:%d\n",English);
    printf("Urdu:%d\n\n",Urdu);
    
   printf("Total Marks:%d",Total_Marks);
   printf("\nOverall Average Marks:%d",Overall_Average_Marks);
   printf("\nAverage Marks in Science subjects:%d",Average_in_Science_Subjects);
   printf("\nAverage Marks in Arts subject:%d\n", Average_in_Arts_Subjects);

   return 0;
}