 /* Task 2: Write a program to input the amount (deposited in the bank). Calculate and print the amount after each
year for three years, where compound interest rate is 7% (if amount deposited is less than equal 5 lac), and
otherwise compound interest rate will be 10%:
Sample Run:
Amount Deposited = 100000
Amount after one year = 107000
Amount after second year = 114490
Amount after third year = 125939
Amount Deposited = 600000
Amount after one year = 660000
Amount after second year = 726000
Amount after third year = 798600  */

#include <stdio.h>

int main() {
    float Amount_Deposited;
    printf("Enter the amount deposited: ");
    scanf("%f", &Amount_Deposited);

    float compound_Interest_Rate;
    if (Amount_Deposited <= 500000) {
        compound_Interest_Rate = 0.07;
    } else {
        compound_Interest_Rate = 0.1;
    }
    
    int amount_After_Year = Amount_Deposited;
    
    amount_After_Year = Amount_Deposited * (1 + compound_Interest_Rate);
    printf("Amount after one year = %.d\n", amount_After_Year);

    amount_After_Year = Amount_Deposited * (1 + compound_Interest_Rate) * (1 + compound_Interest_Rate);
    printf("Amount after second year = %d\n", amount_After_Year);

    amount_After_Year = Amount_Deposited * (1 + compound_Interest_Rate) * (1 + compound_Interest_Rate) * (1 + compound_Interest_Rate);
    printf("Amount after third year = %d\n", amount_After_Year);

    return 0;
}
