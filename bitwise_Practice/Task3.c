/* Task 03: Input two characters and check whether they are equal or not by counting bit difference. If bit
difference is zero, characters are same, otherwise different
Sample Run:
Enter first character: T
Enter second character: t
'T' and 't' are different
Enter first character: f
Enter second character: f
'f' and 'f' are same
Note: single quotes are part of output */

#include <stdio.h>

int main() {
    char a, b;
    int i = 0;
    int areSame = 1; 
    
    printf("Enter the first Character: ");
    scanf(" %c", &a); 
    printf("Enter the second Character: ");
    scanf(" %c", &b);
    
    while (i < 8) {
        if ((a & (1 << i)) != (b & (1 << i))) {
            areSame = 0; 
            break;
        }
        i++;
    }
    
    if (areSame) {
        printf("'%c' and '%c' are the same.\n", a, b);
    } else {
        printf("'%c' and '%c' are different.\n", a, b);
    }
    
    return 0;
}
