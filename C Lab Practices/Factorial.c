#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; // Factorial can get large, so we use unsigned long long

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else {
        // Calculate the factorial
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        // Output the result
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}