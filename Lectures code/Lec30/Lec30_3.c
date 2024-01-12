#include <stdio.h>

//pass by reference
void calculateSalary(int basicSalary, int *grossSalary, int *netSalary){
	*grossSalary = basicSalary + basicSalary * 0.65;
	*netSalary = *grossSalary - *grossSalary * 0.15 ;	
}

int main(){
	int bSalary, gSalary, nSalary;
	printf ("Enter Basic Salaryt: ");
	scanf("%d", &bSalary);
	calculateSalary(bSalary, &gSalary, &nSalary);
	printf ("Gross Salary: %d\n", gSalary);
	printf ("Net Salary: %d\n", nSalary);
	return 0;
}
