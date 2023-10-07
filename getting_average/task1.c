/* Task 1: Write a program to calculate gross salary and net salary. Besides, gross salary and net salary, you are also
required to print medical allowance, house rent and tax. The input is basic salary. The details are as under:
Medical allowance = 10% of basic salary
basic salary * 0.1
Conveyance allowance = 15% of basic salary
basic salary * 0.15
House rent = 45% of basic salary
Gross Salary = Basic Salary + Medical Allowance + Conveyance allowance + House rent
Tax:
0, if salary is less than equal 200000
10 % of gross salary, if salary is greater than 200000, less than 400000
15 % of gross salary, if salary is greater than 400000, less than 600000
20 % of gross salary, if salary is greater than 600000, less than 800000
25 % of gross salary, if salary is greater than 800000
Note: For tax calculation multiply gross salary with 12 and calculate annual gross salary, apply check on annual gross
salary and calculate tax on gross salary.
Net Salary = Gross Salary - Tax
Sample Run:
Input: Basic Salary = 30000
Output:
Basic Salary
30000
Medical Allowance
3000
Conveyance Allowance 4500
House Rent
13500
-----------------------------
Gross Salary
51000
Less Tax
10200
-----------------------------
Net Salary
40800
----------------------------- */




#include <stdio.h>

int main() {
    float basic_Salary, medical_Allowance, conveyance_Allowance, house_Rent, gross_Salary, annual_Gross_Salary, tax, net_Salary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic_Salary);

    medical_Allowance = basic_Salary * 0.1;
    conveyance_Allowance = basic_Salary * 0.15;
    house_Rent = basic_Salary * 0.45;

    gross_Salary = basic_Salary + medical_Allowance + conveyance_Allowance + house_Rent;
    annual_Gross_Salary = gross_Salary * 12;

    if (annual_Gross_Salary <= 200000) {
        tax = 0;
    } else if (annual_Gross_Salary > 200000 && annual_Gross_Salary <= 400000) {
        tax = 0.1 * gross_Salary;
    } else if (annual_Gross_Salary > 400000 && annual_Gross_Salary <= 600000) {
        tax = 0.15 * gross_Salary;
    } else if (annual_Gross_Salary > 600000 && annual_Gross_Salary <= 800000) {
        tax = 0.2 * gross_Salary;
    } else {
        tax = 0.25 * gross_Salary;
    }

    net_Salary = gross_Salary - tax;

    printf("Basic Salary: %.2f\n", basic_Salary);
    printf("Medical Allowance: %.2f\n", medical_Allowance);
    printf("Conveyance Allowance: %.2f\n", conveyance_Allowance);
    printf("House Rent: %.2f\n", house_Rent);
    printf("-----------------------------\n");
    printf("Gross Salary: %.2f\n", gross_Salary);
    printf("Annual Gross Salary: %.2f\n", annual_Gross_Salary);
    printf("Tax: %.2f\n", tax);
    printf("Net Salary: %.2f\n", net_Salary);

    return 0;
}
