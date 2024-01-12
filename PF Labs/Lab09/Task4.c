/* Task 4: Write a program that input an integer (positive, don not check just give message) and find square
root by following method. Also, find square root with built-in function and find difference of both:
1. Say number (input value) is n
2. Guess some random value (say s1) less than number n
n
s1+
3. Find s2 using formula: s2 =
 s1
2
4. if abs (s2 – s1 )<0.00001 s1 is your answer, otherwise
5. Assign value of s2 to s1 and repeat step 3


A working example is for integer 29:
Enter a positive non-zero integer: 29
Square Root of 29 is 5.39
Enter a positive non-zero integer: 36
Square Root of 36 is 6.00: */

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float s1, s2;
    float diff;

    printf("Enter a positive non-zero integer: ");
    scanf("%d", &n);

    s1 = n / 2;


    while (1) {
        s2 = (s1 + n / s1) / 2;
        diff = s2 - s1;

        if (diff < 0.00001 && diff > -0.00001)
            break;

        s1 = s2;
    }
    float j =  sqrt(n);
    float i = (s2 -j);
    printf("Square Root of %d is %.2f\n", n, s2);
    printf("Square Root of %d by built-in function is %.2f\n", n, j);
    printf("Difference of both is %.2f\n",i);

    return 0;
}

