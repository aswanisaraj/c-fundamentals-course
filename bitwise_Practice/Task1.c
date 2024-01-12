/* Task 01: Input a character and tell position of bits, which are on. See sample run:
Sample Run:
Enter character: 'E'
Bit 1 is on
Bit 3 is on
Bit 7 is on
Enter character: 'e'
Bit 1 is on
Bit 3 is on
Bit 6 is on
Bit 7 is on */
#include <stdio.h>

int main() {
    char ch;
    int i = 0;
    printf("Enter character: ");
    scanf("%c", &ch);
    
   
    while (i <= 7) {
        if ((ch & (1 << i)) != 0) {
            printf("Bit %d is On\n", i + 1);
        }
        
        i++;
    }
    
    return 0;
}

