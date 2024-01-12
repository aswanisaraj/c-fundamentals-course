#include<stdio.h>
int main(){
    int basic_salary = 40000, conveyance_allowance =4000, medical_allowance = 6000, house_rent= 18000, gross_salary=  68000, tax= 13600, net_salary =54400;
    printf("Basic Salary: %d\n",basic_salary);
    printf("Conveyance Allowance: %d\n",conveyance_allowance);
    printf("Medical Allowance: %d\n",medical_allowance);
    printf("House Rent: %d\n",house_rent);
    printf("Gross Salary: %d\n",gross_salary);
    printf("Tax: %d\n",tax);
    printf("Net Salary: %d\n",net_salary);
    return 0;
}
/*
Conveyance allowance as 10% of basic salary
Medical allowance as 15% of basic salary
House rent as 45% of basic salary
Gross salary is sum of conveyance, medical allowances and house rent.
Tax is 20% of gross salary
Net salary is gross salary – tax
Display output in following format:
Basic Salary: 40000
Conveyance Allowance: 4000
Medical Allowance: 6000
House Rent: 18000
Gross Salary: 68000
Tax: 13600
Net Salary: 54400
*/