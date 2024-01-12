#include <stdio.h>
int main() {


int males, females;

double total, male_percent, female_percent;

    printf("Number of Males: ");
    scanf("%d", &males);
    printf("Number of Females: ");
    scanf("%d", &females);

    total = males + females;

    male_percent = (males * 100.0) / total;
    female_percent = (females * 100.0) / total;

    printf("============================\n");

    
    if (male_percent > female_percent) {
        printf("| Percentage of Males: %.2lf %% |\n", male_percent);
        printf("| Percentage of Females: %.2lf %% |\n", female_percent);
    } else {
        printf("*** Percentage of Females: %.2lf %% ***\n", female_percent);
        printf("*** Percentage of Males: %.2lf %% ***\n", male_percent);
    }

    printf("============================\n");

    return 0;
}
