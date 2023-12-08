/* Task 04: Read file 'counts.txt'. Read counts and add them to check whether it is equal to 10000 */

#include<stdio.h>
int main(){
   int i = 1, x, sum =0;
   FILE * Equal = fopen("counts.txt", "r");
   while( i<=9){
    fscanf(Equal, "%d", &x);
    sum+=x;
    i++;
   }

   fclose(Equal);
   printf("Total: %d    ",sum);

   
    return 0;
}