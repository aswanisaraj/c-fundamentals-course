#include <stdio.h>
#include<ctype.h>
void checking_equal(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != 0 && b[i] != 0; i++)
        if (tolower(a[i]) != tolower(b[i]))
            break;

    if (a[i] == 0 && b[i] == 0)
    {

        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }
}

int main()
{
    char a[2000];
    printf("Enter First string: ");
    fgets(a, 1999, stdin);

    char b[2000];
    printf("Enter Second string: ");
    fgets(b, 1999, stdin);

    checking_equal(a, b);
    return 0;
}
