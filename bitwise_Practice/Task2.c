/* Task 02: Input two characters and tell how many bits are same:
Sample Run:
Enter first character: A
Enter second character: B
In A and B, 7 bit(s) are same
Enter first character: F
Enter second character: U
In F and U, 4 bit(s) are same */



#include <stdio.h>

int main() {
    char a, b;
    int i = 1;
    int count = 0;
    
    printf("Enter the first Character: ");
    scanf(" %c", &a); 
    printf("Enter the second Character: ");
    scanf(" %c", &b);
    
    while (i <= 7) {
        if ((a & (1 << i)) == (b & (1 << i))) {
            count++;
        }
        i++;
    }
    
    printf("In %c and %c, %d bits are the same.\n", a, b, count);
    
    return 0;
}
 