#include <stdio.h>

int main() {
    int num1, num2, gcd, remainder;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure the numbers are positive
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    // Use the Euclidean Algorithm to find GCD
    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    gcd = num1;

    // Output the GCD
    printf("GCD of the given numbers is: %d\n", gcd);

    return 0;
}