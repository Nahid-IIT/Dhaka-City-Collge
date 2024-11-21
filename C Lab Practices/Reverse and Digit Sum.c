#include <stdio.h>

int main() {
    int number, reverse = 0, digitSum = 0, remainder, original;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    original = number; // Store the original number for reference

    // Reverse the number and calculate the digit sum
    while (number != 0) {
        remainder = number % 10;       // Get the last digit
        reverse = reverse * 10 + remainder; // Build the reversed number
        digitSum += remainder;        // Add the digit to the sum
        number /= 10;                 // Remove the last digit
    }

    // Output the results
    printf("Reversed number: %d\n", reverse);
    printf("Sum of digits: %d\n", digitSum);

    return 0;
}