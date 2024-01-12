#include <stdio.h>
int main()
{
    int Centigrade, Fahrenheit;
    printf("Centigrade:");
    scanf("%d", &Centigrade);
    Fahrenheit = Centigrade * 9 / 5 + 32;
    printf("\nFahreheit %d\n", Fahrenheit);
    return 0;
}